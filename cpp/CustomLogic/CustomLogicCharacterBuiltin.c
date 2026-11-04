// Type: CustomLogic.CustomLogicCharacterBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCharacterBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicCharacterBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicCharacterBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCharacterBuiltin_o* CustomLogic_CustomLogicCharacterBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181f56c00

CustomLogic_CustomLogicCharacterBuiltin_o *
CustomLogic_CustomLogicCharacterBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicCharacterBuiltin constructor found that takes ");
  pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_1a77cc0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x181f59db0

void CustomLogic_CustomLogicCharacterBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_1843455c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843455c1 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetTarget>b__34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__GetTarget_b__34_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f58160

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__GetTarget_b__34_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Controllers_HumanAIController_o *__this_00;
  Characters_ITargetable_o *target;
  Il2CppObject *pIVar1;
  
  if (__c == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this_00 = (Controllers_HumanAIController_o *)
              CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__c,(MethodInfo *)0x0);
  if (__this_00 != (Controllers_HumanAIController_o *)0x0) {
    target = Controllers_HumanAIController__get_Target(__this_00,(MethodInfo *)0x0);
    pIVar1 = CustomLogic_CustomLogicCharacterBuiltin__WrapTarget(target,(MethodInfo *)0x0);
    return pIVar1;
  }
  pIVar1 = CustomLogic_CustomLogicCharacterBuiltin__WrapTarget
                     ((Characters_ITargetable_o *)0x0,(MethodInfo *)0x0);
  return pIVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetTarget>b__35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__SetTarget_b__35_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f59770

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__SetTarget_b__35_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *target;
  Il2CppObject *obj;
  bool bVar2;
  Controllers_BaseTitanAIController_o *__this_00;
  Characters_ITargetable_o *enemy;
  float focusTime;
  
  if (Il2CppMethodInitialized_1843455c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455c2 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
label_181f5989a:
      ThrowIndexOutOfRangeException();
    }
    uVar1 = (uint)__a->max_length;
    target = __a->m_Items[0];
    if ((int)uVar1 < 2) {
      focusTime = 0.0;
    }
    else {
      if (uVar1 < 2) goto label_181f5989a;
      obj = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      focusTime = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                            (obj,(MethodInfo_66ED40 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    }
    if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_184345555 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
        Il2CppMethodInitialized_184345555 = '\x01';
      }
      __this_00 = (Controllers_BaseTitanAIController_o *)
                  CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__c,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        enemy = CustomLogic_CustomLogicCharacterBuiltin__UnwrapTarget(target,(MethodInfo *)0x0);
        if (__this_00 == (Controllers_BaseTitanAIController_o *)0x0) goto label_181f59894;
        Controllers_BaseTitanAIController__SetEnemy(__this_00,enemy,focusTime,(MethodInfo *)0x0);
      }
      return (Il2CppObject *)0x0;
    }
  }
label_181f59894:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClearTarget>b__36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__ClearTarget_b__36_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f57680

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__ClearTarget_b__36_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Controllers_BaseAIController_o *__this_00;
  
  if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    __this_00 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__c,(MethodInfo *)0x0);
    if (__this_00 != (Controllers_BaseAIController_o *)0x0) {
      Controllers_BaseAIController__ClearTarget(__this_00,(MethodInfo *)0x0);
    }
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetNearestEnemy>b__37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__GetNearestEnemy_b__37_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f58110

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__GetNearestEnemy_b__37_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Controllers_BaseAIController_o *__this_00;
  Characters_ITargetable_o *target;
  Il2CppObject *pIVar1;
  
  if (__c == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this_00 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__c,(MethodInfo *)0x0);
  if (__this_00 != (Controllers_BaseAIController_o *)0x0) {
    target = Controllers_BaseAIController__GetNearestEnemy(__this_00,(MethodInfo *)0x0);
    pIVar1 = CustomLogic_CustomLogicCharacterBuiltin__WrapTarget(target,(MethodInfo *)0x0);
    return pIVar1;
  }
  pIVar1 = CustomLogic_CustomLogicCharacterBuiltin__WrapTarget
                     ((Characters_ITargetable_o *)0x0,(MethodInfo *)0x0);
  return pIVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__TargetNearestEnemy>b__38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__TargetNearestEnemy_b__38_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f59be0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__TargetNearestEnemy_b__38_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Controllers_BaseAIController_o *__this_00;
  float focusDuration;
  
  if (Il2CppMethodInitialized_1843455c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455c3 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if (__a->max_length == 0) {
      focusDuration = 0.0;
    }
    else {
      if ((int)__a->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      focusDuration =
           CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     (obj,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    }
    if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      __this_00 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__c,(MethodInfo *)0x0);
      if (__this_00 != (Controllers_BaseAIController_o *)0x0) {
        Controllers_BaseAIController__TargetNearestEnemy(__this_00,focusDuration,(MethodInfo *)0x0);
      }
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__MoveTo>b__39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__MoveTo_b__39_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f58940

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__MoveTo_b__39_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  Il2CppObject *pIVar3;
  Characters_Horse_o *__this_00;
  bool ignoreEnemies;
  bool bVar4;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar5;
  Controllers_BaseAIController_o *__this_01;
  float range;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843455c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455c4 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) goto label_181f58b4f;
  if ((int)__a->max_length != 0) {
    pIVar3 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar3,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                       );
    if (1 < (uint)__a->max_length) {
      range = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[1],
                         (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      ignoreEnemies = false;
      uVar2 = (uint)__a->max_length;
      if (2 < (int)uVar2) {
        if (uVar2 < 3) goto label_181f58b55;
        pIVar3 = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        ignoreEnemies =
             CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                       (pIVar3,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool
                       );
      }
      if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
        if (Il2CppMethodInitialized_184345556 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Horse);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
          Il2CppMethodInitialized_184345556 = '\x01';
        }
        __this_00 = (Characters_Horse_o *)(__c->fields).Character;
        if (__this_00 != (Characters_Horse_o *)0x0) {
          bVar1 = (TypeInfo_Characters_Horse->_2).typeHierarchyDepth;
          if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
             ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
              (Il2CppClass *)TypeInfo_Characters_Horse)) {
            if (pCVar5 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
              local_28[0].x = (pCVar5->fields).Value.fields.x;
              local_28[0].y = (pCVar5->fields).Value.fields.y;
              local_28[0].z = (pCVar5->fields).Value.fields.z;
              Characters_Horse__MoveTo(__this_00,(UnityEngine_Vector3_o *)local_28,range,(MethodInfo *)0x0);
              return (Il2CppObject *)0x0;
            }
            goto label_181f58b4f;
          }
        }
        __this_01 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__c,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar4 = UnityEngine_Object__op_Inequality
                          ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar4) {
          if ((pCVar5 == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
             (__this_01 == (Controllers_BaseAIController_o *)0x0)) goto label_181f58b4f;
          local_28[0].x = (pCVar5->fields).Value.fields.x;
          local_28[0].y = (pCVar5->fields).Value.fields.y;
          local_28[0].z = (pCVar5->fields).Value.fields.z;
          Controllers_BaseAIController__MoveTo
                    (__this_01,(UnityEngine_Vector3_o *)local_28,range,ignoreEnemies,(MethodInfo *)0x0);
        }
        return (Il2CppObject *)0x0;
      }
label_181f58b4f:
      ThrowNullReferenceException();
    }
  }
label_181f58b55:
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__MoveToTarget>b__40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__MoveToTarget_b__40_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f58720

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__MoveToTarget_b__40_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  Il2CppObject *target;
  Il2CppObject *pIVar3;
  Characters_Horse_o *__this_00;
  bool ignoreEnemies;
  bool bVar4;
  Il2CppClass *target_00;
  Controllers_BaseAIController_o *__this_01;
  Characters_ITargetable_o *target_01;
  float range;
  
  if (Il2CppMethodInitialized_1843455c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455c5 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if (((int)__a->max_length == 0) || ((uint)__a->max_length < 2)) {
label_181f58932:
      ThrowIndexOutOfRangeException();
    }
    target = __a->m_Items[0];
    pIVar3 = __a->m_Items[1];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    range = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar3,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float
                      );
    ignoreEnemies = false;
    uVar2 = (uint)__a->max_length;
    if (2 < (int)uVar2) {
      if (uVar2 < 3) goto label_181f58932;
      pIVar3 = __a->m_Items[2];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      ignoreEnemies =
           CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                     (pIVar3,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    }
    if (__c == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) goto label_181f5892c;
    if (Il2CppMethodInitialized_184345557 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Horse);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184345557 = '\x01';
    }
    __this_00 = (Characters_Horse_o *)(__c->fields).Character;
    if (__this_00 != (Characters_Horse_o *)0x0) {
      bVar1 = (TypeInfo_Characters_Horse->_2).typeHierarchyDepth;
      if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
         ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_Horse)) {
        if (target != (Il2CppObject *)0x0) {
          bVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin->_2).typeHierarchyDepth;
          if ((bVar1 <= (target->klass->_2).typeHierarchyDepth) &&
             ((target->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
              (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin)) {
            target_00 = target[3].klass;
            goto label_181f588a2;
          }
        }
        target_00 = (Il2CppClass *)0x0;
label_181f588a2:
        Characters_Horse__ComeTo(__this_00,(Characters_BaseCharacter_o *)target_00,range,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
    }
    __this_01 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__c,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      target_01 = CustomLogic_CustomLogicCharacterBuiltin__UnwrapTarget(target,(MethodInfo *)0x0);
      if (__this_01 == (Controllers_BaseAIController_o *)0x0) goto label_181f5892c;
      Controllers_BaseAIController__MoveToTarget(__this_01,target_01,range,ignoreEnemies,(MethodInfo *)0x0);
    }
    return (Il2CppObject *)0x0;
  }
label_181f5892c:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__Idle>b__41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__Idle_b__41_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f581b0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__Idle_b__41_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *obj;
  Characters_Horse_o *__this_00;
  Controllers_BaseAIController_o *__this_01;
  float time;
  
  if (Il2CppMethodInitialized_1843455c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455c6 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if (__a->max_length == 0) {
      time = -1.0;
    }
    else {
      if ((int)__a->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      time = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                       (obj,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    }
    if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_184345558 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Horse);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
        Il2CppMethodInitialized_184345558 = '\x01';
      }
      __this_00 = (Characters_Horse_o *)(__c->fields).Character;
      if (__this_00 != (Characters_Horse_o *)0x0) {
        bVar1 = (TypeInfo_Characters_Horse->_2).typeHierarchyDepth;
        if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
           ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Characters_Horse)) {
          Characters_Horse__Stay(__this_00,(MethodInfo *)0x0);
          return (Il2CppObject *)0x0;
        }
      }
      if (time == -1.0) {
        if (__this_00 != (Characters_Horse_o *)0x0) {
          bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
          if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
             ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
              (Il2CppClass *)TypeInfo_Characters_Human)) {
            time = 0.0;
            goto label_181f58303;
          }
        }
        time = INFINITY;
      }
label_181f58303:
      __this_01 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__c,(MethodInfo *)0x0);
      if (__this_01 != (Controllers_BaseAIController_o *)0x0) {
        Controllers_BaseAIController__IdleFor(__this_01,time,(MethodInfo *)0x0);
      }
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetDisplayName>b__42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__SetDisplayName_b__42_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f59620

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__SetDisplayName_b__42_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  Characters_BaseCharacter_o *pCVar3;
  bool bVar4;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_1843455c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455c7 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
label_181f59760:
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (pIVar2,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    uVar1 = (uint)__a->max_length;
    bVar4 = true;
    if (1 < (int)uVar1) {
      if (uVar1 < 2) goto label_181f59760;
      pIVar2 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      bVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                        (pIVar2,(MethodInfo_66E400 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    }
    if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      pCVar3 = (__c->fields).Character;
      if (value == (System_String_o *)0x0) {
        value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      if (pCVar3 != (Characters_BaseCharacter_o *)0x0) {
        Characters_BaseCharacter__set_Name(pCVar3,value,(MethodInfo *)0x0);
        pCVar3 = (__c->fields).Character;
        if (pCVar3 != (Characters_BaseCharacter_o *)0x0) {
          if ((pCVar3->fields).AI != false) {
            if (bVar4 == false) {
              bVar4 = false;
            }
            else {
              bVar4 = System_String__IsNullOrWhiteSpace((pCVar3->fields).VisibleName,(MethodInfo *)0x0);
              bVar4 = !bVar4;
            }
            (pCVar3->fields).HasExplicitNameTag = bVar4;
          }
          return (Il2CppObject *)0x0;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetKilled>b__43_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__GetKilled_b__43_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f58060

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__GetKilled_b__43_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Characters_BaseCharacter_o *pCVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843455c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455c8 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
    if ((__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
       (pCVar1 = (__c->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) {
      (*(pCVar1->klass->vtable)._98_GetKilled.methodPtr)
                (pCVar1,pSVar2,(pCVar1->klass->vtable)._98_GetKilled.method);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetDamaged>b__44_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__GetDamaged_b__44_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f57f80

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__GetDamaged_b__44_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Characters_BaseCharacter_o *pCVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_1843455c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455c9 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_181f5804c:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
    if (1 < (uint)__a->max_length) {
      iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        (__a->m_Items[1],
                         (MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      if ((__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
         (pCVar1 = (__c->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) {
        (*(pCVar1->klass->vtable)._97_GetDamaged.methodPtr)
                  (pCVar1,pSVar3,iVar2,(pCVar1->klass->vtable)._97_GetDamaged.method);
        return (Il2CppObject *)0x0;
      }
      goto label_181f5804c;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__Emote>b__45_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__Emote_b__45_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f57820

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__Emote_b__45_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  System_Type_o *pSVar3;
  
  if (Il2CppMethodInitialized_1843455ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455ca = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar3 = (System_Type_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
    if ((__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
       (pCVar1 = (__c->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__c->fields).Character;
        if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_181f578eb;
        if ((pCVar1->fields).Dead == false) {
          (*(pCVar1->klass->vtable)._80_Emote.methodPtr)
                    (pCVar1,pSVar3,(pCVar1->klass->vtable)._80_Emote.method);
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
label_181f578eb:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayAnimation>b__46_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimation_b__46_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f59010

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimation_b__46_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  Characters_BaseCharacter_o *pCVar3;
  bool bVar4;
  System_String_o *animation;
  float fadeTime;
  
  if (Il2CppMethodInitialized_1843455cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455cb = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
label_181f59145:
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    animation = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (pIVar2,(MethodInfo_66EB70 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    uVar1 = (uint)__a->max_length;
    if ((int)uVar1 < 2) {
      fadeTime = 0.1;
    }
    else {
      if (uVar1 < 2) goto label_181f59145;
      pIVar2 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      fadeTime = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                           (pIVar2,(MethodInfo_66ED40 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    }
    if ((__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
       (pCVar3 = (__c->fields).Character, pCVar3 != (Characters_BaseCharacter_o *)0x0)) {
      bVar4 = (*(pCVar3->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar3,(pCVar3->klass->vtable)._74_IsMine.method);
      if (bVar4) {
        pCVar3 = (__c->fields).Character;
        if (pCVar3 == (Characters_BaseCharacter_o *)0x0) goto label_181f5913f;
        if ((pCVar3->fields).Dead == false) {
          Characters_BaseCharacter__CrossFadeIfNotPlaying(pCVar3,animation,fadeTime,0.0,(MethodInfo *)0x0);
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
label_181f5913f:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayAnimationAt>b__47_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimationAt_b__47_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f58e50

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimationAt_b__47_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  Characters_BaseCharacter_o *pCVar3;
  bool bVar4;
  bool bVar5;
  System_String_o *animation;
  float startTime;
  float fadeTime;
  
  if (Il2CppMethodInitialized_1843455cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455cc = '\x01';
  }
  if (__a == (System_Object_array *)0x0) goto label_181f59003;
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    animation = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (pIVar2,(MethodInfo_66EB70 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      startTime = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                            (__a->m_Items[1],
                             (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float)
      ;
      uVar1 = (uint)__a->max_length;
      if ((int)uVar1 < 3) {
        fadeTime = 0.1;
      }
      else {
        if (uVar1 < 3) goto label_181f59009;
        pIVar2 = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        fadeTime = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                             (pIVar2,(MethodInfo_66ED40 *)
                                     MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      }
      bVar4 = false;
      uVar1 = (uint)__a->max_length;
      if (3 < (int)uVar1) {
        if (uVar1 < 4) goto label_181f59009;
        pIVar2 = __a->m_Items[3];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        bVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                          (pIVar2,(MethodInfo_66E400 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      }
      if ((__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
         (pCVar3 = (__c->fields).Character, pCVar3 != (Characters_BaseCharacter_o *)0x0)) {
        bVar5 = (*(pCVar3->klass->vtable)._74_IsMine.methodPtr)
                          (pCVar3,(pCVar3->klass->vtable)._74_IsMine.method);
        if (bVar5) {
          pCVar3 = (__c->fields).Character;
          if (pCVar3 == (Characters_BaseCharacter_o *)0x0) goto label_181f59003;
          if ((pCVar3->fields).Dead == false) {
            if (bVar4 == false) {
              Characters_BaseCharacter__CrossFadeIfNotPlaying
                        (pCVar3,animation,fadeTime,startTime,(MethodInfo *)0x0);
            }
            else {
              Characters_BaseCharacter__CrossFade(pCVar3,animation,fadeTime,startTime,(MethodInfo *)0x0);
            }
          }
        }
        return (Il2CppObject *)0x0;
      }
label_181f59003:
      ThrowNullReferenceException();
    }
  }
label_181f59009:
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationSpeed>b__48_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationSpeed_b__48_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f57e90

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationSpeed_b__48_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  System_String_o *animation;
  Il2CppObject *pIVar3;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_1843455cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455cd = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_181f57f72:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pIVar3 = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  animation = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (pIVar3,(MethodInfo_66EB70 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((__c == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) ||
     (pCVar1 = (__c->fields).Character, pCVar1 == (Characters_BaseCharacter_o *)0x0)) goto label_181f57f72;
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__c->fields).Character;
    if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_181f57f72;
    if ((pCVar1->fields).Dead == false) {
      local_res18[0] = Characters_BaseCharacter__GetAnimationSpeed(pCVar1,animation,(MethodInfo *)0x0);
      goto label_181f57f50;
    }
  }
  local_res18[0] = 1.0;
label_181f57f50:
  pIVar3 = il2cpp_value_box(g_data_184354e38,local_res18);
  return pIVar3;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetAnimationSpeed>b__49_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__SetAnimationSpeed_b__49_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f594b0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__SetAnimationSpeed_b__49_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  Characters_BaseCharacter_o *pCVar3;
  bool bVar4;
  bool bVar5;
  System_String_o *animation;
  float speed;
  
  if (Il2CppMethodInitialized_1843455ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455ce = '\x01';
  }
  if (__a == (System_Object_array *)0x0) goto label_181f5960f;
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    animation = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (pIVar2,(MethodInfo_66EB70 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      speed = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[1],
                         (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      uVar1 = (uint)__a->max_length;
      bVar4 = true;
      if (2 < (int)uVar1) {
        if (uVar1 < 3) goto label_181f59615;
        pIVar2 = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        bVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                          (pIVar2,(MethodInfo_66E400 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      }
      if ((__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
         (pCVar3 = (__c->fields).Character, pCVar3 != (Characters_BaseCharacter_o *)0x0)) {
        bVar5 = (*(pCVar3->klass->vtable)._74_IsMine.methodPtr)
                          (pCVar3,(pCVar3->klass->vtable)._74_IsMine.method);
        if (bVar5) {
          pCVar3 = (__c->fields).Character;
          if (pCVar3 == (Characters_BaseCharacter_o *)0x0) goto label_181f5960f;
          if ((pCVar3->fields).Dead == false) {
            if (bVar4 == false) {
              Characters_BaseCharacter__SetAnimationSpeedNonRPC(pCVar3,animation,speed,(MethodInfo *)0x0);
            }
            else {
              Characters_BaseCharacter__SetAnimationSpeed(pCVar3,animation,speed,(MethodInfo *)0x0);
            }
          }
        }
        return (Il2CppObject *)0x0;
      }
label_181f5960f:
      ThrowNullReferenceException();
    }
  }
label_181f59615:
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsPlayingAnimation>b__50_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__IsPlayingAnimation_b__50_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f58340

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__IsPlayingAnimation_b__50_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  System_String_o *name;
  Il2CppObject *pIVar2;
  undefined1 local_res18 [16];
  
  if (Il2CppMethodInitialized_1843455cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455cf = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar2,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                     );
    if (((__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
        (pCVar1 = (__c->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) &&
       (__this_00 = (pCVar1->fields).Animation, __this_00 != (Characters_AnimationHandler_o *)0x0)) {
      local_res18[0] = Characters_AnimationHandler__IsPlaying(__this_00,name,(MethodInfo *)0x0);
      pIVar2 = il2cpp_value_box(g_data_184354de8,local_res18);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationNormalizedTime>b__51_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationNormalizedTime_b__51_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f57da0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationNormalizedTime_b__51_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Characters_AnimationHandler_o *pCVar2;
  bool bVar3;
  System_String_o *name;
  Il2CppObject *pIVar4;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_1843455d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455d0 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar4 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar4,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                     );
    if (((__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
        (pCVar1 = (__c->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) &&
       (pCVar2 = (pCVar1->fields).Animation, pCVar2 != (Characters_AnimationHandler_o *)0x0)) {
      bVar3 = Characters_AnimationHandler__IsPlaying(pCVar2,name,(MethodInfo *)0x0);
      if (bVar3) {
        pCVar1 = (__c->fields).Character;
        if ((pCVar1 == (Characters_BaseCharacter_o *)0x0) ||
           (pCVar2 = (pCVar1->fields).Animation, pCVar2 == (Characters_AnimationHandler_o *)0x0))
        goto label_181f57e84;
        local_res18[0] = Characters_AnimationHandler__GetCurrentNormalizedTime(pCVar2,(MethodInfo *)0x0);
      }
      else {
        local_res18[0] = 1.0;
      }
      pIVar4 = il2cpp_value_box(g_data_184354e38,local_res18);
      return pIVar4;
    }
  }
label_181f57e84:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__ForceAnimation>b__52_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__ForceAnimation_b__52_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f57ba0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f57c65: movss xmm6, dword ptr [rip + 0x14019c3]

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__ForceAnimation_b__52_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  Characters_BaseCharacter_o *pCVar3;
  bool bVar4;
  System_Type_o *pSVar5;
  System_Object_array *pSVar6;
  
  pSVar6 = __a;
  if (Il2CppMethodInitialized_1843455d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455d1 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
label_181f57cd4:
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar5 = (System_Type_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar2,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    uVar1 = (uint)__a->max_length;
    if (1 < (int)uVar1) {
      if (uVar1 < 2) goto label_181f57cd4;
      pIVar2 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                (pIVar2,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    }
    if ((__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
       (pCVar3 = (__c->fields).Character, pCVar3 != (Characters_BaseCharacter_o *)0x0)) {
      bVar4 = (*(pCVar3->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar3,(pCVar3->klass->vtable)._74_IsMine.method);
      if (bVar4) {
        pCVar3 = (__c->fields).Character;
        if (pCVar3 == (Characters_BaseCharacter_o *)0x0) goto label_181f57cce;
        if ((pCVar3->fields).Dead == false) {
          (*(pCVar3->klass->vtable)._81_ForceAnimation.methodPtr)(pCVar3,pSVar5,(MethodInfo *)pSVar6);
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
label_181f57cce:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationLength>b__53_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationLength_b__53_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f57ce0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationLength_b__53_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  System_String_o *name;
  Il2CppObject *pIVar2;
  float local_res18 [4];
  
  if (Il2CppMethodInitialized_1843455d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455d2 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar2,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                     );
    if (((__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
        (pCVar1 = (__c->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) &&
       (__this_00 = (pCVar1->fields).Animation, __this_00 != (Characters_AnimationHandler_o *)0x0)) {
      local_res18[0] = Characters_AnimationHandler__GetLength(__this_00,name,(MethodInfo *)0x0);
      pIVar2 = il2cpp_value_box(g_data_184354e38,local_res18);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsPlayingSound>b__54_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__IsPlayingSound_b__54_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f58400

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__IsPlayingSound_b__54_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this_00;
  System_String_o *sound;
  Il2CppObject *pIVar1;
  undefined1 local_res18 [16];
  
  if (Il2CppMethodInitialized_1843455d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455d3 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    sound = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (pIVar1,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Character, __this_00 != (Characters_BaseCharacter_o *)0x0)) {
      local_res18[0] = Characters_BaseCharacter__IsPlayingSound(__this_00,sound,(MethodInfo *)0x0);
      pIVar1 = il2cpp_value_box(g_data_184354de8,local_res18);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlaySound>b__55_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__PlaySound_b__55_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f59150

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__PlaySound_b__55_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  Characters_BaseCharacter_o *pCVar3;
  bool bVar4;
  bool bVar5;
  System_String_o *sound;
  Photon_Pun_PhotonMessageInfo_o *pPVar6;
  Photon_Pun_PhotonMessageInfo_o local_48;
  Photon_Pun_PhotonMessageInfo_o local_28;
  
  if (Il2CppMethodInitialized_1843455d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455d4 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
label_181f59319:
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    sound = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (pIVar2,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    bVar4 = false;
    uVar1 = (uint)__a->max_length;
    if (1 < (int)uVar1) {
      if (uVar1 < 2) goto label_181f59319;
      pIVar2 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      bVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                        (pIVar2,(MethodInfo_66E400 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    }
    if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_184345568 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
        Il2CppMethodInitialized_184345568 = '\x01';
      }
      pCVar3 = (__c->fields).Character;
      if (pCVar3 != (Characters_BaseCharacter_o *)0x0) {
        if ((pCVar3->fields).Dead == false) {
          bVar5 = Characters_BaseCharacter__IsPlayingSound(pCVar3,sound,(MethodInfo *)0x0);
          if (!bVar5) {
            pCVar3 = (__c->fields).Character;
            if (bVar4 == false) {
              if (pCVar3 == (Characters_BaseCharacter_o *)0x0) goto label_181f59313;
              bVar4 = (*(pCVar3->klass->vtable)._74_IsMine.methodPtr)
                                (pCVar3,(pCVar3->klass->vtable)._74_IsMine.method);
              if (bVar4) {
                pCVar3 = (__c->fields).Character;
                if (pCVar3 == (Characters_BaseCharacter_o *)0x0) goto label_181f59313;
                Characters_BaseCharacter__PlaySound(pCVar3,sound,(MethodInfo *)0x0);
              }
            }
            else {
              if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
              }
              pPVar6 = Utility_Util__CreateLocalPhotonInfo(&local_28,(MethodInfo *)0x0);
              if (pCVar3 == (Characters_BaseCharacter_o *)0x0) goto label_181f59313;
              local_48.fields.timeInt = (pPVar6->fields).timeInt;
              local_48.fields._4_4_ = *(undefined4 *)&(pPVar6->fields).field_0x4;
              local_48.fields.Sender._0_4_ = *(undefined4 *)&(pPVar6->fields).Sender;
              local_48.fields.Sender._4_4_ = *(undefined4 *)((longlong)&(pPVar6->fields).Sender + 4);
              local_48.fields.photonView = (pPVar6->fields).photonView;
              (*(pCVar3->klass->vtable)._86_PlaySoundRPC.methodPtr)
                        (pCVar3,sound,&local_48,(pCVar3->klass->vtable)._86_PlaySoundRPC.method);
            }
          }
        }
        return (Il2CppObject *)0x0;
      }
    }
  }
label_181f59313:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__StopSound>b__56_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__StopSound_b__56_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f599f0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__StopSound_b__56_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  System_String_o *sound;
  
  if (Il2CppMethodInitialized_1843455d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455d5 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    sound = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
       (pCVar1 = (__c->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__c->fields).Character;
        if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_181f59acb;
        if ((pCVar1->fields).Dead == false) {
          bVar2 = Characters_BaseCharacter__IsPlayingSound(pCVar1,sound,(MethodInfo *)0x0);
          if (bVar2) {
            pCVar1 = (__c->fields).Character;
            if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_181f59acb;
            Characters_BaseCharacter__StopSound(pCVar1,sound,(MethodInfo *)0x0);
          }
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
label_181f59acb:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__FadeSound>b__57_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__FadeSound_b__57_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f57900

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__FadeSound_b__57_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  System_String_o *sound;
  float volume;
  float time;
  
  if (Il2CppMethodInitialized_1843455d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455d6 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) goto label_181f57a32;
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    sound = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      volume = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         (__a->m_Items[1],
                          (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if (2 < (uint)__a->max_length) {
        time = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         (__a->m_Items[2],
                          (MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        if ((__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
           (pCVar1 = (__c->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) {
          bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                            (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
          if (bVar2) {
            pCVar1 = (__c->fields).Character;
            if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_181f57a32;
            if ((pCVar1->fields).Dead == false) {
              Characters_BaseCharacter__FadeSound(pCVar1,sound,volume,time,(MethodInfo *)0x0);
            }
          }
          return (Il2CppObject *)0x0;
        }
label_181f57a32:
        ThrowNullReferenceException();
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__LookAt>b__58_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__LookAt_b__58_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f584b0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__LookAt_b__58_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  bool bVar3;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar4;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_1843455d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455d7 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if ((__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
       (pCVar1 = (__c->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) {
      bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar3) {
        pCVar1 = (__c->fields).Character;
        if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_181f5859b;
        if ((pCVar1->fields).Dead == false) {
          pUVar2 = (pCVar1->fields).Cache;
          if (((pUVar2 == (Utility_BaseComponentCache_o *)0x0) ||
              (pCVar4 == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) ||
             (__this_00 = (pUVar2->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0))
          goto label_181f5859b;
          local_18.x = (pCVar4->fields).Value.fields.x;
          local_18.y = (pCVar4->fields).Value.fields.y;
          local_18.z = (pCVar4->fields).Value.fields.z;
          UnityEngine_Transform__LookAt_2f599f0
                    (__this_00,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
label_181f5859b:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddForce>b__59_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__AddForce_b__59_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f57260

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__AddForce_b__59_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *force;
  
  if (Il2CppMethodInitialized_1843455d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455d8 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_181f572ff:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    force = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_66EB70 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if (1 < (uint)__a->max_length) {
      if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
        CustomLogic_CustomLogicCharacterBuiltin__AddForce(__c,force,__a->m_Items[1],(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_181f572ff;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__Reveal>b__60_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__Reveal_b__60_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f59410

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__Reveal_b__60_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Characters_BaseCharacter_o *__this_00;
  float activeTime;
  
  if (Il2CppMethodInitialized_1843455d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455d9 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    activeTime = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                           (obj,(MethodInfo_66ED40 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Character, __this_00 != (Characters_BaseCharacter_o *)0x0)) {
      Characters_BaseCharacter__Reveal(__this_00,0.0,activeTime,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddOutline>b__61_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__AddOutline_b__61_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f57310

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__AddOutline_b__61_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  Utility_Color255_o *__this_00;
  Characters_BaseCharacter_o *__this_01;
  bool bVar3;
  CustomLogic_CustomLogicColorBuiltin_o *pCVar4;
  System_String_o *pSVar5;
  UnityEngine_Color_o *pUVar6;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_02;
  MethodInfo *lastManagedFrame;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  int32_t local_res18 [2];
  UnityEngine_Color_o local_58 [5];
  
  if (Il2CppMethodInitialized_1843455da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&"OutlineAll");
    Il2CppMethodInitialized_1843455da = '\x01';
  }
  pSVar5 = "OutlineAll";
  if (__a == (System_Object_array *)0x0) {
label_181f57524:
    ThrowNullReferenceException();
  }
  pCVar4 = (CustomLogic_CustomLogicColorBuiltin_o *)0x0;
  if (__a->max_length != 0) {
    if ((int)__a->max_length == 0) goto label_181f5752a;
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar2,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
  }
  uVar1 = (uint)__a->max_length;
  if (1 < (int)uVar1) {
    if (uVar1 < 2) {
label_181f5752a:
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[1];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar2,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  }
  if (__c == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) goto label_181f57524;
  if (Il2CppMethodInitialized_18434556a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_Outline_Mode);
    Il2CppMethodInitialized_18434556a = '\x01';
  }
  local_res18[0] = 0;
  if (pCVar4 == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
    fVar7 = 1.0;
    fVar8 = 1.0;
    fVar9 = 1.0;
    fVar10 = 1.0;
  }
  else {
    __this_00 = (pCVar4->fields).Value;
    if (__this_00 == (Utility_Color255_o *)0x0) goto label_181f57530;
    pUVar6 = Utility_Color255__ToColor(local_58,__this_00,(MethodInfo *)0x0);
    fVar7 = (pUVar6->fields).r;
    fVar8 = (pUVar6->fields).g;
    fVar9 = (pUVar6->fields).b;
    fVar10 = (pUVar6->fields).a;
  }
  if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354e58);
  }
  bVar3 = System_Enum__TryParse_Int32Enum_
                    (pSVar5,local_res18,(MethodInfo_6B1BB0 *)MethodInfo_System_Enum_TryParse_Outline_Mode);
  if (!bVar3) {
    str0 = il2cpp_codegen_get_runtime_metadata(&"Unknown outline mode: ");
    pSVar5 = System_String__Concat_1969e50(str0,pSVar5,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_02 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_02,pSVar5,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_AddOutline);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,lastManagedFrame);
  }
  __this_01 = (__c->fields).Character;
  if (__this_01 != (Characters_BaseCharacter_o *)0x0) {
    local_58[0].fields.r = fVar7;
    local_58[0].fields.g = fVar8;
    local_58[0].fields.b = fVar9;
    local_58[0].fields.a = fVar10;
    Characters_BaseCharacter__AddOutlineWithColor(__this_01,local_58,local_res18[0],(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
label_181f57530:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__RemoveOutline>b__62_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__RemoveOutline_b__62_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f593b0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__RemoveOutline_b__62_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this_00;
  
  if ((__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
     (__this_00 = (__c->fields).Character, __this_00 != (Characters_BaseCharacter_o *)0x0)) {
    Characters_BaseCharacter__RemoveOutline(__this_00,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding____Eq__>b__63_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__63_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f59ca0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__63_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 local_res18 [16];
  
  if (__a != (System_Object_array *)0x0) {
    if (((int)__a->max_length == 0) || ((uint)__a->max_length < 2)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      local_res18[0] =
           CustomLogic_CustomLogicCharacterBuiltin____Eq__
                     (__c,__a->m_Items[0],__a->m_Items[1],(MethodInfo *)0x0);
      pIVar1 = il2cpp_value_box(g_data_184354de8,local_res18);
      return pIVar1;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding____Hash__>b__64_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding____Hash___b__64_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f59d00

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding____Hash___b__64_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  int32_t local_res10 [6];
  
  if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    local_res10[0] =
         (*(__c->klass->vtable)._2_GetHashCode.methodPtr)(__c,(__c->klass->vtable)._2_GetHashCode.method);
    pIVar1 = il2cpp_value_box(g_data_184354e08,local_res10);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCharacterBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181f2d9b0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this_00;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *__this_01;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *pCVar4;
  System_Func_CustomLogicCharacterBuiltin__object__o *__this_02;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_03;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_04;
  System_String_o *pSVar5;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_05;
  MethodInfo *pMVar6;
  System_Func_CustomLogicCharacterBuiltin__object____object__o **targetAddress;
  
  if (Il2CppMethodInitialized_18434556d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"PlayAnimationAt");
    il2cpp_codegen_initialize_runtime_metadata(&"PlayAnimation");
    il2cpp_codegen_initialize_runtime_metadata(&"ForceAnimation");
    il2cpp_codegen_initialize_runtime_metadata(&"Guild");
    il2cpp_codegen_initialize_runtime_metadata(&"GetDamaged");
    il2cpp_codegen_initialize_runtime_metadata(&"SetDisplayName");
    il2cpp_codegen_initialize_runtime_metadata(&"Team");
    il2cpp_codegen_initialize_runtime_metadata(&"Right");
    il2cpp_codegen_initialize_runtime_metadata(&"StopSound");
    il2cpp_codegen_initialize_runtime_metadata(&"CustomDamage");
    il2cpp_codegen_initialize_runtime_metadata(&"IsPlayingSound");
    il2cpp_codegen_initialize_runtime_metadata(&"Transform");
    il2cpp_codegen_initialize_runtime_metadata(&"QuaternionRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"IsAlive");
    il2cpp_codegen_initialize_runtime_metadata(&"CustomDamageEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"MoveToTarget");
    il2cpp_codegen_initialize_runtime_metadata(&"__Eq__");
    il2cpp_codegen_initialize_runtime_metadata(&"__Hash__");
    il2cpp_codegen_initialize_runtime_metadata(&"SetAnimationSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"ViewID");
    il2cpp_codegen_initialize_runtime_metadata(&"Emote");
    il2cpp_codegen_initialize_runtime_metadata(&"FadeSound");
    il2cpp_codegen_initialize_runtime_metadata(&"Position");
    il2cpp_codegen_initialize_runtime_metadata(&"GetAnimationLength");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"AddOutline");
    il2cpp_codegen_initialize_runtime_metadata(&"DetectRange");
    il2cpp_codegen_initialize_runtime_metadata(&"Forward");
    il2cpp_codegen_initialize_runtime_metadata(&"HasTargetDirection");
    il2cpp_codegen_initialize_runtime_metadata(&"MaxHealth");
    il2cpp_codegen_initialize_runtime_metadata(&"MoveTo");
    il2cpp_codegen_initialize_runtime_metadata(&"Health");
    il2cpp_codegen_initialize_runtime_metadata(&"UsePathfinding");
    il2cpp_codegen_initialize_runtime_metadata(&"IsMine");
    il2cpp_codegen_initialize_runtime_metadata(&"IsMainCharacter");
    il2cpp_codegen_initialize_runtime_metadata(&"IsPlayingAnimation");
    il2cpp_codegen_initialize_runtime_metadata(&"State");
    il2cpp_codegen_initialize_runtime_metadata(&"IsWalking");
    il2cpp_codegen_initialize_runtime_metadata(&"GetAnimationSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"PlaySound");
    il2cpp_codegen_initialize_runtime_metadata(&"Rotation");
    il2cpp_codegen_initialize_runtime_metadata(&"AIEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"CurrentAnimation");
    il2cpp_codegen_initialize_runtime_metadata(&"Up");
    il2cpp_codegen_initialize_runtime_metadata(&"RemoveOutline");
    il2cpp_codegen_initialize_runtime_metadata(&"GetNearestEnemy");
    il2cpp_codegen_initialize_runtime_metadata(&"SetTarget");
    il2cpp_codegen_initialize_runtime_metadata(&"Velocity");
    il2cpp_codegen_initialize_runtime_metadata(&"AddForce");
    il2cpp_codegen_initialize_runtime_metadata(&"GetAnimationNormalizedTime");
    il2cpp_codegen_initialize_runtime_metadata(&"Rigidbody");
    il2cpp_codegen_initialize_runtime_metadata(&"TargetNearestEnemy");
    il2cpp_codegen_initialize_runtime_metadata(&"Player");
    il2cpp_codegen_initialize_runtime_metadata(&"Idle");
    il2cpp_codegen_initialize_runtime_metadata(&"GetKilled");
    il2cpp_codegen_initialize_runtime_metadata(&"TargetDirection");
    il2cpp_codegen_initialize_runtime_metadata(&"IsAI");
    il2cpp_codegen_initialize_runtime_metadata(&"LookAt");
    il2cpp_codegen_initialize_runtime_metadata(&"Grounded");
    il2cpp_codegen_initialize_runtime_metadata(&"CurrentTarget");
    il2cpp_codegen_initialize_runtime_metadata(&"ClearTarget");
    il2cpp_codegen_initialize_runtime_metadata(&"Reveal");
    il2cpp_codegen_initialize_runtime_metadata(&"GetTarget");
    Il2CppMethodInitialized_18434556d = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x5ad5e046) {
    if (uVar3 < 0x26d90d15) {
      if (uVar3 < 0x19f47650) {
        if (uVar3 < 0x864c5e6) {
          if (uVar3 == 0x1a14484) {
            bVar2 = System_String__op_Equality(name,"AIEnabled",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f31931;
            if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345572 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__AIEnabled_g____getter
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__AIEnabled_g____setter
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
              Il2CppMethodInitialized_184345572 = '\x01';
            }
            __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
            System_Func_object__object____ctor
                      (__this_00,(Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__AIEnabled_g____getter
                       ,(MethodInfo_16E67D0 *)0x0);
            __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
            pMVar6 = 
            MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__AIEnabled_g____setter
            ;
          }
          else {
            if (uVar3 != 0x232777f) {
              if (uVar3 != 0x864c5e5) goto label_181f31931;
              bVar2 = System_String__op_Equality(name,"RemoveOutline",(MethodInfo *)0x0);
              if (!bVar2) goto label_181f31931;
              if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_1843455aa == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__RemoveOutline_b__62_0
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
                Il2CppMethodInitialized_1843455aa = '\x01';
              }
              if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
              }
              __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__62_0;
              if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f318fd;
              if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
              __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (__this,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__RemoveOutline_b__62_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__62_0 =
                   (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
              targetAddress =
                   &TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__62_0;
              goto label_181f318f5;
            }
            bVar2 = System_String__op_Equality(name,"Rotation",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f31931;
            if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_18434557e == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Rotation_g____getter_1
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Rotation_g____setter_1
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
              Il2CppMethodInitialized_18434557e = '\x01';
            }
            __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
            System_Func_object__object____ctor
                      (__this_00,(Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Rotation_g____getter_1
                       ,(MethodInfo_16E67D0 *)0x0);
            __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
            pMVar6 = 
            MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Rotation_g____setter_1
            ;
          }
label_181f2e022:
          System_Action_object__object____ctor
                    (__this_01,(Il2CppObject *)0x0,(intptr_t)pMVar6,(MethodInfo *)0x0);
          pCVar4 = il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
label_181f2e85e:
          CustomLogic_CLPropertyBinding_object____ctor
                    ((CustomLogic_CLPropertyBinding_T__o *)pCVar4,(System_Func_T__object__o *)__this_00,
                     (System_Action_T__object__o *)__this_01,
                     (MethodInfo_12B8EE0 *)
                     MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
        if (uVar3 < 0x137f7d64) {
          if (uVar3 == 0xfe07306) {
            bVar2 = System_String__op_Equality(name,"Name",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f31931;
            if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345574 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Name_g____getter_8_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Name_g____setter_8_1
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
              Il2CppMethodInitialized_184345574 = '\x01';
            }
            __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
            System_Func_object__object____ctor
                      (__this_00,(Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Name_g____getter_8_0
                       ,(MethodInfo_16E67D0 *)0x0);
            __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
            pMVar6 = 
            MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Name_g____setter_8_1
            ;
            goto label_181f2e022;
          }
          if (uVar3 != 0x137f7d63) goto label_181f31931;
          bVar2 = System_String__op_Equality(name,"Emote",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f31931;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345599 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__Emote_b__45_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
            Il2CppMethodInitialized_184345599 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
          }
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__45_0;
          if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f318fd;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__Emote_b__45_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__45_0 =
               (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
          targetAddress =
               &TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__45_0;
        }
        else {
          if (uVar3 != 0x15676746) {
            if (uVar3 != 0x19f4764f) goto label_181f31931;
            bVar2 = System_String__op_Equality(name,"IsAI",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f31931;
            if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345577 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsAI_g____getter_11_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
              Il2CppMethodInitialized_184345577 = '\x01';
            }
            __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
            pMVar6 = 
            MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsAI_g____getter_11_0
            ;
            goto label_181f2e83c;
          }
          bVar2 = System_String__op_Equality(name,"GetKilled",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f31931;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345597 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetKilled_b__43_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
            Il2CppMethodInitialized_184345597 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
          }
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__43_0;
          if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f318fd;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetKilled_b__43_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__43_0 =
               (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
          targetAddress =
               &TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__43_0;
        }
      }
      else if (uVar3 < 0x1deca497) {
        if (0x1c21234b < uVar3) {
          if (uVar3 == 0x1c70fc20) {
            bVar2 = System_String__op_Equality(name,"Player",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f31931;
            if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345576 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Player_g____getter_10
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
              Il2CppMethodInitialized_184345576 = '\x01';
            }
            __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
            pMVar6 = 
            MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Player_g____getter_10
            ;
          }
          else {
            if (uVar3 != 0x1deca496) goto label_181f31931;
            bVar2 = System_String__op_Equality(name,"State",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f31931;
            if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345570 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__State_g____getter_4_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
              Il2CppMethodInitialized_184345570 = '\x01';
            }
            __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
            pMVar6 = 
            MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__State_g____getter_4_0
            ;
          }
          goto label_181f2e83c;
        }
        if (uVar3 == 0x1ae30f5a) {
          bVar2 = System_String__op_Equality(name,"GetAnimationSpeed",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f31931;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434559c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetAnimationSpeed_b__4
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
            Il2CppMethodInitialized_18434559c = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
          }
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__48_0;
          if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f318fd;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetAnimationSpeed_b__4
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__48_0 =
               (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
          targetAddress =
               &TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__48_0;
        }
        else {
          if (uVar3 != 0x1c21234b) goto label_181f31931;
          bVar2 = System_String__op_Equality(name,"GetAnimationNormalizedTime",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f31931;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434559f == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetAnimationNormalized
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
            Il2CppMethodInitialized_18434559f = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
          }
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__51_0;
          if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f318fd;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetAnimationNormalized
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__51_0 =
               (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
          targetAddress =
               &TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__51_0;
        }
      }
      else {
        if (uVar3 < 0x2329c92d) {
          if (uVar3 == 0x1e9e9f85) {
            bVar2 = System_String__op_Equality(name,"Right",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f31931;
            if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345582 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Right_g____getter_22_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Right_g____setter_22_1
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
              Il2CppMethodInitialized_184345582 = '\x01';
            }
            __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
            System_Func_object__object____ctor
                      (__this_00,(Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Right_g____getter_22_0
                       ,(MethodInfo_16E67D0 *)0x0);
            __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
            pMVar6 = 
            MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Right_g____setter_22_1
            ;
          }
          else {
            if (uVar3 != 0x2329c92c) goto label_181f31931;
            bVar2 = System_String__op_Equality(name,"Team",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f31931;
            if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345586 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Team_g____getter_26_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Team_g____setter_26_1
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
              Il2CppMethodInitialized_184345586 = '\x01';
            }
            __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
            System_Func_object__object____ctor
                      (__this_00,(Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Team_g____getter_26_0
                       ,(MethodInfo_16E67D0 *)0x0);
            __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
            pMVar6 = 
            MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Team_g____setter_26_1
            ;
          }
          goto label_181f2e022;
        }
        if (uVar3 == 0x23315ddd) {
          bVar2 = System_String__op_Equality(name,"IsPlayingAnimation",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f31931;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434559e == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__IsPlayingAnimation_b
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
            Il2CppMethodInitialized_18434559e = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
          }
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__50_0;
          if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f318fd;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__IsPlayingAnimation_b
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__50_0 =
               (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
          targetAddress =
               &TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__50_0;
        }
        else {
          if (uVar3 != 0x26d90d14) goto label_181f31931;
          bVar2 = System_String__op_Equality(name,"IsPlayingSound",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f31931;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843455a2 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__IsPlayingSound_b__54_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843455a2 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
          }
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__54_0;
          if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f318fd;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__IsPlayingSound_b__54_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__54_0 =
               (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
          targetAddress =
               &TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__54_0;
        }
      }
    }
    else if (uVar3 < 0x492a3cd0) {
      if (uVar3 < 0x369870e1) {
        if (0x2ba6c2e2 < uVar3) {
          if (uVar3 == 0x2fe74447) {
            bVar2 = System_String__op_Equality(name,"QuaternionRotation",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f31931;
            if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_18434557f == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g_4092d80
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
              Il2CppMethodInitialized_18434557f = '\x01';
            }
            __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
            System_Func_object__object____ctor
                      (__this_00,(Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g
                       ,(MethodInfo_16E67D0 *)0x0);
            __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
            pMVar6 = 
            MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g_4092d80
            ;
          }
          else {
            if (uVar3 != 0x369870e0) goto label_181f31931;
            bVar2 = System_String__op_Equality(name,"Guild",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f31931;
            if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345575 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Guild_g____getter_9_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Guild_g____setter_9_1
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
              Il2CppMethodInitialized_184345575 = '\x01';
            }
            __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
            System_Func_object__object____ctor
                      (__this_00,(Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Guild_g____getter_9_0
                       ,(MethodInfo_16E67D0 *)0x0);
            __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
            pMVar6 = 
            MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Guild_g____setter_9_1
            ;
          }
          goto label_181f2e022;
        }
        if (uVar3 == 0x296dba07) {
          bVar2 = System_String__op_Equality(name,"AddForce",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f31931;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843455a7 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__AddForce_b__59_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843455a7 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
          }
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__59_0;
          if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f318fd;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__AddForce_b__59_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__59_0 =
               (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
          targetAddress =
               &TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__59_0;
        }
        else {
          if (uVar3 != 0x2ba6c2e2) goto label_181f31931;
          bVar2 = System_String__op_Equality(name,"PlaySound",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f31931;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843455a3 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__PlaySound_b__55_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843455a3 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
          }
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__55_0;
          if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f318fd;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__PlaySound_b__55_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__55_0 =
               (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
          targetAddress =
               &TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__55_0;
        }
      }
      else if (uVar3 < 0x45aa17b4) {
        if (uVar3 == 0x42f35940) {
          bVar2 = System_String__op_Equality(name,"Up",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f31931;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345583 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Up_g____getter_23_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Up_g____setter_23_1
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
            Il2CppMethodInitialized_184345583 = '\x01';
          }
          __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
          System_Func_object__object____ctor
                    (__this_00,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Up_g____getter_23_0
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
          pMVar6 = 
          MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Up_g____setter_23_1
          ;
          goto label_181f2e022;
        }
        if (uVar3 != 0x45aa17b3) goto label_181f31931;
        bVar2 = System_String__op_Equality(name,"Idle",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f31931;
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345595 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__Idle_b__41_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
          Il2CppMethodInitialized_184345595 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__41_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f318fd;
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__Idle_b__41_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__41_0 =
             (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__41_0
        ;
      }
      else {
        if (uVar3 == 0x47bfe69f) {
          bVar2 = System_String__op_Equality(name,"Grounded",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f31931;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434558c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Grounded_g____getter_3
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
            Il2CppMethodInitialized_18434558c = '\x01';
          }
          __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
          pMVar6 = 
          MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Grounded_g____getter_3
          ;
          goto label_181f2e83c;
        }
        if (uVar3 != 0x492a3ccf) goto label_181f31931;
        bVar2 = System_String__op_Equality(name,"GetAnimationLength",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f31931;
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843455a1 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetAnimationLength_b
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843455a1 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__53_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f318fd;
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetAnimationLength_b
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__53_0 =
             (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__53_0
        ;
      }
    }
    else if (uVar3 < 0x54cb8f07) {
      if (uVar3 < 0x53189420) {
        if (uVar3 != 0x50d99a86) {
          if (uVar3 == 0x5318941f) {
            bVar2 = System_String__op_Equality(name,"DetectRange",(MethodInfo *)0x0);
            if (bVar2) {
              if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_18434556f == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__DetectRange_g____gette
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&
                           MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__DetectRange_g____sette
                          );
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
                Il2CppMethodInitialized_18434556f = '\x01';
              }
              __this_02 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
              System_Func_object__object____ctor
                        ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_02,
                         (Il2CppObject *)0x0,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__DetectRange_g____gette
                         ,(MethodInfo_16E67D0 *)0x0);
              __this_03 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object)
              ;
              Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor_129b060
                        ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_03,
                         (Il2CppObject *)0x0,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__DetectRange_g____sette
                         ,(MethodInfo *)0x0);
              pCVar4 = il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
              CustomLogic_CLPropertyBinding_object____ctor
                        ((CustomLogic_CLPropertyBinding_T__o *)pCVar4,(System_Func_T__object__o *)__this_02,
                         (System_Action_T__object__o *)__this_03,
                         (MethodInfo_12B8EE0 *)
                         MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
              return (CustomLogic_ICLMemberBinding_o *)pCVar4;
            }
          }
label_181f31931:
          pSVar5 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicCharacterBuiltin not found");
          str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
          pSVar5 = System_String__Concat_1969b70(str0,name,pSVar5,(MethodInfo *)0x0);
          klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
          __this_05 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
          System_Exception___ctor_1b6abf0(__this_05,pSVar5,(MethodInfo *)0x0);
          pMVar6 = il2cpp_codegen_get_runtime_metadata
                             (&MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_CreateMemberBinding
                             );
          il2cpp_codegen_raise_exception((Il2CppObject *)__this_05,pMVar6);
        }
        bVar2 = System_String__op_Equality(name,"SetTarget",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f31931;
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434558f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__SetTarget_b__35_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434558f = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__35_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f318fd;
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__SetTarget_b__35_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__35_0 =
             (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__35_0
        ;
      }
      else {
        if (uVar3 != 0x54531f32) {
          if (uVar3 != 0x54cb8f06) goto label_181f31931;
          bVar2 = System_String__op_Equality(name,"IsMine",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f31931;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434557a == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsMine_g____getter_14
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
            Il2CppMethodInitialized_18434557a = '\x01';
          }
          __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
          pMVar6 = 
          MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsMine_g____getter_14
          ;
          goto label_181f2e83c;
        }
        bVar2 = System_String__op_Equality(name,"FadeSound",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f31931;
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843455a5 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__FadeSound_b__57_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843455a5 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__57_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f318fd;
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__FadeSound_b__57_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__57_0 =
             (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__57_0
        ;
      }
    }
    else {
      if (0x59397012 < uVar3) {
        if (uVar3 == 0x59701b9b) {
          bVar2 = System_String__op_Equality(name,"MaxHealth",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f31931;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345588 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__MaxHealth_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__MaxHealth_g____setter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
            Il2CppMethodInitialized_184345588 = '\x01';
          }
          __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
          System_Func_object__object____ctor
                    (__this_00,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__MaxHealth_g____getter
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
          pMVar6 = 
          MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__MaxHealth_g____setter
          ;
          goto label_181f2e022;
        }
        if (uVar3 != 0x5ad5e045) goto label_181f31931;
        bVar2 = System_String__op_Equality(name,"ViewID",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f31931;
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345579 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__ViewID_g____getter_13
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object)
          ;
          Il2CppMethodInitialized_184345579 = '\x01';
        }
        __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
        pMVar6 = 
        MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__ViewID_g____getter_13
        ;
        goto label_181f2e83c;
      }
      if (uVar3 == 0x55aebb4e) {
        bVar2 = System_String__op_Equality(name,"PlayAnimationAt",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f31931;
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434559b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__PlayAnimationAt_b__47
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
          Il2CppMethodInitialized_18434559b = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__47_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f318fd;
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__PlayAnimationAt_b__47
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__47_0 =
             (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__47_0
        ;
      }
      else {
        if (uVar3 != 0x59397012) goto label_181f31931;
        bVar2 = System_String__op_Equality(name,"ForceAnimation",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f31931;
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843455a0 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__ForceAnimation_b__52_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843455a0 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__52_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f318fd;
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__ForceAnimation_b__52_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__52_0 =
             (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__52_0
        ;
      }
    }
  }
  else if (uVar3 < 0x9dba7b5a) {
    if (uVar3 < 0x7b5a42d9) {
      if (uVar3 < 0x6ca8ed49) {
        if (uVar3 < 0x65c8db58) {
          if (uVar3 != 0x5e2c4c73) {
            if (uVar3 != 0x65c8db57) goto label_181f31931;
            bVar2 = System_String__op_Equality(name,"IsMainCharacter",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f31931;
            if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_18434557b == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsMainCharacter_g____g
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
              Il2CppMethodInitialized_18434557b = '\x01';
            }
            __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
            pMVar6 = 
            MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsMainCharacter_g____g
            ;
            goto label_181f2e83c;
          }
          bVar2 = System_String__op_Equality(name,"LookAt",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f31931;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843455a6 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__LookAt_b__58_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843455a6 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
          }
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__58_0;
          if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f318fd;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__LookAt_b__58_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__58_0 =
               (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
          targetAddress =
               &TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__58_0;
        }
        else {
          if (uVar3 != 0x6913a183) {
            if (uVar3 != 0x6ca8ed48) goto label_181f31931;
            bVar2 = System_String__op_Equality(name,"IsWalking",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f31931;
            if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345571 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsWalking_g____getter
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsWalking_g____setter
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
              Il2CppMethodInitialized_184345571 = '\x01';
            }
            __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
            System_Func_object__object____ctor
                      (__this_00,(Il2CppObject *)0x0,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsWalking_g____getter
                       ,(MethodInfo_16E67D0 *)0x0);
            __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
            pMVar6 = 
            MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsWalking_g____setter
            ;
            goto label_181f2e022;
          }
          bVar2 = System_String__op_Equality(name,"ClearTarget",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f31931;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345590 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__ClearTarget_b__36_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
            Il2CppMethodInitialized_184345590 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
          }
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__36_0;
          if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f318fd;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
          __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (__this,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__ClearTarget_b__36_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__36_0 =
               (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
          targetAddress =
               &TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__36_0;
        }
      }
      else if (uVar3 < 0x708f5d7c) {
        if (uVar3 != 0x6cb57a76) {
          if (uVar3 != 0x708f5d7b) goto label_181f31931;
          bVar2 = System_String__op_Equality(name,"CustomDamage",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f31931;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434558a == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CustomDamage_g____gett
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CustomDamage_g____sett
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
            Il2CppMethodInitialized_18434558a = '\x01';
          }
          __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
          System_Func_object__object____ctor
                    (__this_00,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CustomDamage_g____gett
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
          pMVar6 = 
          MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CustomDamage_g____sett
          ;
          goto label_181f2e022;
        }
        bVar2 = System_String__op_Equality(name,"GetDamaged",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f31931;
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345598 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetDamaged_b__44_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
          Il2CppMethodInitialized_184345598 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__44_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f318fd;
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetDamaged_b__44_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__44_0 =
             (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__44_0
        ;
      }
      else {
        if (uVar3 != 0x792a6491) {
          if (uVar3 != 0x7b5a42d8) goto label_181f31931;
          bVar2 = System_String__op_Equality(name,"CurrentAnimation",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f31931;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434558b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CurrentAnimation_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
            Il2CppMethodInitialized_18434558b = '\x01';
          }
          __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
          pMVar6 = 
          MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CurrentAnimation_g
          ;
          goto label_181f2e83c;
        }
        bVar2 = System_String__op_Equality(name,"__Hash__",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f31931;
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843455ac == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding____Hash___b__64_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843455ac = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__64_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f318fd;
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding____Hash___b__64_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__64_0 =
             (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__64_0
        ;
      }
    }
    else if (uVar3 < 0x8c83015c) {
      if (0x89bbe0e0 < uVar3) {
        if (uVar3 == 0x8b6f3716) {
          bVar2 = System_String__op_Equality(name,"IsAlive",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f31931;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345578 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsAlive_g____getter_12
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
            Il2CppMethodInitialized_184345578 = '\x01';
          }
          __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
          pMVar6 = 
          MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsAlive_g____getter_12
          ;
        }
        else {
          if (uVar3 != 0x8c83015b) goto label_181f31931;
          bVar2 = System_String__op_Equality(name,"HasTargetDirection",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f31931;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345584 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__HasTargetDirection_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
            Il2CppMethodInitialized_184345584 = '\x01';
          }
          __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
          pMVar6 = 
          MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__HasTargetDirection_g
          ;
        }
        goto label_181f2e83c;
      }
      if (uVar3 == 0x7dc09c40) {
        bVar2 = System_String__op_Equality(name,"CustomDamageEnabled",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f31931;
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345589 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CustomDamageEnabled_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CustomDamageEnabled_g_40917a8
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object)
          ;
          Il2CppMethodInitialized_184345589 = '\x01';
        }
        __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
        System_Func_object__object____ctor
                  (__this_00,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CustomDamageEnabled_g
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
        pMVar6 = 
        MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CustomDamageEnabled_g_40917a8
        ;
        goto label_181f2e022;
      }
      if (uVar3 != 0x89bbe0e0) goto label_181f31931;
      bVar2 = System_String__op_Equality(name,"MoveToTarget",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f31931;
      if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345594 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__MoveToTarget_b__40_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
        Il2CppMethodInitialized_184345594 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__40_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f318fd;
      if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9
      ;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object)
      ;
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__MoveToTarget_b__40_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__40_0 =
           (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__40_0;
    }
    else {
      if (0x91efe6d7 < uVar3) {
        if (uVar3 == 0x986145af) {
          bVar2 = System_String__op_Equality(name,"Health",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f31931;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345587 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Health_g____getter_27
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Health_g____setter_27
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
            Il2CppMethodInitialized_184345587 = '\x01';
          }
          __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
          System_Func_object__object____ctor
                    (__this_00,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Health_g____getter_27
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
          pMVar6 = 
          MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Health_g____setter_27
          ;
        }
        else {
          if (uVar3 != 0x9dba7b59) goto label_181f31931;
          bVar2 = System_String__op_Equality(name,"TargetDirection",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f31931;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345585 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__TargetDirection_g____g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__TargetDirection_g____s
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
            Il2CppMethodInitialized_184345585 = '\x01';
          }
          __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
          System_Func_object__object____ctor
                    (__this_00,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__TargetDirection_g____g
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
          pMVar6 = 
          MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__TargetDirection_g____s
          ;
        }
        goto label_181f2e022;
      }
      if (uVar3 == 0x91a036e2) {
        bVar2 = System_String__op_Equality(name,"AddOutline",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f31931;
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843455a9 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__AddOutline_b__61_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843455a9 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__61_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f318fd;
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__AddOutline_b__61_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__61_0 =
             (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__61_0
        ;
      }
      else {
        if (uVar3 != 0x91efe6d7) goto label_181f31931;
        bVar2 = System_String__op_Equality(name,"__Eq__",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f31931;
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843455ab == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding____Eq___b__63_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843455ab = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
        }
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__63_0;
        if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f318fd;
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
        {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)
                 TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
        __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)
                            TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
        System_Func_object__object__object____ctor
                  (__this,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding____Eq___b__63_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__63_0 =
             (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
        targetAddress = &TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__63_0
        ;
      }
    }
  }
  else if (uVar3 < 0xe27f342b) {
    if (uVar3 < 0xbba2a3f1) {
      if (uVar3 < 0xad82abbc) {
        if (uVar3 == 0xa3370cc8) {
          bVar2 = System_String__op_Equality(name,"Rigidbody",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f31931;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434558d == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Rigidbody_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
            Il2CppMethodInitialized_18434558d = '\x01';
          }
          __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
          pMVar6 = 
          MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Rigidbody_g____getter
          ;
        }
        else {
          if (uVar3 != 0xad82abbb) goto label_181f31931;
          bVar2 = System_String__op_Equality(name,"Transform",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f31931;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434557c == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Transform_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
            Il2CppMethodInitialized_18434557c = '\x01';
          }
          __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
          pMVar6 = 
          MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Transform_g____getter
          ;
        }
label_181f2e83c:
        System_Func_object__object____ctor
                  (__this_00,(Il2CppObject *)0x0,(intptr_t)pMVar6,(MethodInfo_16E67D0 *)0x0);
        pCVar4 = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin)
        ;
        __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)0x0;
        goto label_181f2e85e;
      }
      if (uVar3 == 0xba408252) {
        bVar2 = System_String__op_Equality(name,"Velocity",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f31931;
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345580 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Velocity_g____getter_2
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Velocity_g____setter_2
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object)
          ;
          Il2CppMethodInitialized_184345580 = '\x01';
        }
        __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
        System_Func_object__object____ctor
                  (__this_00,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Velocity_g____getter_2
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
        pMVar6 = 
        MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Velocity_g____setter_2
        ;
        goto label_181f2e022;
      }
      if (uVar3 != 0xbba2a3f0) goto label_181f31931;
      bVar2 = System_String__op_Equality(name,"Reveal",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f31931;
      if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843455a8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__Reveal_b__60_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
        Il2CppMethodInitialized_1843455a8 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__60_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f318fd;
      if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9
      ;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object)
      ;
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__Reveal_b__60_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__60_0 =
           (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__60_0;
    }
    else if (uVar3 < 0xcb7df475) {
      if (uVar3 == 0xc3605c1b) {
        bVar2 = System_String__op_Equality(name,"CurrentTarget",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f31931;
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434556e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CurrentTarget_g____get
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object)
          ;
          Il2CppMethodInitialized_18434556e = '\x01';
        }
        __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
        pMVar6 = 
        MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CurrentTarget_g____get
        ;
        goto label_181f2e83c;
      }
      if (uVar3 != 0xcb7df474) goto label_181f31931;
      bVar2 = System_String__op_Equality(name,"StopSound",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f31931;
      if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843455a4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__StopSound_b__56_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
        Il2CppMethodInitialized_1843455a4 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__56_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f318fd;
      if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9
      ;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object)
      ;
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__StopSound_b__56_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__56_0 =
           (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__56_0;
    }
    else {
      if (uVar3 != 0xd64c477b) {
        if (uVar3 != 0xe27f342a) goto label_181f31931;
        bVar2 = System_String__op_Equality(name,"Position",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f31931;
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434557d == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Position_g____setter_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object)
          ;
          Il2CppMethodInitialized_18434557d = '\x01';
        }
        __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
        System_Func_object__object____ctor
                  (__this_00,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_1
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
        pMVar6 = 
        MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Position_g____setter_1
        ;
        goto label_181f2e022;
      }
      bVar2 = System_String__op_Equality(name,"PlayAnimation",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f31931;
      if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434559a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__PlayAnimation_b__46_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
        Il2CppMethodInitialized_18434559a = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__46_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f318fd;
      if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9
      ;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object)
      ;
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__PlayAnimation_b__46_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__46_0 =
           (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__46_0;
    }
  }
  else if (uVar3 < 0xe8005d3a) {
    if (uVar3 < 0xe5b11b67) {
      if (uVar3 == 0xe50883ba) {
        bVar2 = System_String__op_Equality(name,"Forward",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f31931;
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345581 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Forward_g____getter_21
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Forward_g____setter_21
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object)
          ;
          Il2CppMethodInitialized_184345581 = '\x01';
        }
        __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
        System_Func_object__object____ctor
                  (__this_00,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Forward_g____getter_21
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
        pMVar6 = 
        MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Forward_g____setter_21
        ;
        goto label_181f2e022;
      }
      if (uVar3 != 0xe5b11b66) goto label_181f31931;
      bVar2 = System_String__op_Equality(name,"SetAnimationSpeed",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f31931;
      if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434559d == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__SetAnimationSpeed_b__4
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
        Il2CppMethodInitialized_18434559d = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__49_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f318fd;
      if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9
      ;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object)
      ;
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__SetAnimationSpeed_b__4
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__49_0 =
           (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__49_0;
    }
    else if (uVar3 == 0xe694889a) {
      bVar2 = System_String__op_Equality(name,"GetTarget",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f31931;
      if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434558e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetTarget_b__34_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
        Il2CppMethodInitialized_18434558e = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__34_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f318fd;
      if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9
      ;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object)
      ;
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetTarget_b__34_0
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__34_0 =
           (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__34_0;
    }
    else {
      if (uVar3 != 0xe8005d39) goto label_181f31931;
      bVar2 = System_String__op_Equality(name,"GetNearestEnemy",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f31931;
      if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345591 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetNearestEnemy_b__37
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
        Il2CppMethodInitialized_184345591 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      }
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__37_0;
      if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f318fd;
      if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      }
      pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9
      ;
      __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object)
      ;
      System_Func_object__object__object____ctor
                (__this,pIVar1,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetNearestEnemy_b__37
                 ,(MethodInfo *)0x0);
      TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__37_0 =
           (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
      targetAddress = &TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__37_0;
    }
  }
  else if (uVar3 < 0xf3ae8779) {
    if (uVar3 == 0xe9a6b9e8) {
      bVar2 = System_String__op_Equality(name,"UsePathfinding",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f31931;
      if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345573 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object)
        ;
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__UsePathfinding_g____ge
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__UsePathfinding_g____se
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
        Il2CppMethodInitialized_184345573 = '\x01';
      }
      __this_00 = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
      System_Func_object__object____ctor
                (__this_00,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__UsePathfinding_g____ge
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_01 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
      pMVar6 = 
      MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__UsePathfinding_g____se
      ;
      goto label_181f2e022;
    }
    if (uVar3 != 0xf3ae8778) goto label_181f31931;
    bVar2 = System_String__op_Equality(name,"SetDisplayName",(MethodInfo *)0x0);
    if (!bVar2) goto label_181f31931;
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_184345596 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__SetDisplayName_b__42_0
                );
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)
      ;
      Il2CppMethodInitialized_184345596 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__42_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f318fd;
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__SetDisplayName_b__42_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__42_0 =
         (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__42_0;
  }
  else if (uVar3 == 0xf90f6b5d) {
    bVar2 = System_String__op_Equality(name,"MoveTo",(MethodInfo *)0x0);
    if (!bVar2) goto label_181f31931;
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_184345593 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__MoveTo_b__39_0
                );
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)
      ;
      Il2CppMethodInitialized_184345593 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__39_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f318fd;
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__MoveTo_b__39_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__39_0 =
         (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__39_0;
  }
  else {
    if (uVar3 != 0xfb1ebd66) goto label_181f31931;
    bVar2 = System_String__op_Equality(name,"TargetNearestEnemy",(MethodInfo *)0x0);
    if (!bVar2) goto label_181f31931;
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_184345592 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__TargetNearestEnemy_b
                );
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)
      ;
      Il2CppMethodInitialized_184345592 = '\x01';
    }
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__38_0;
    if (__this != (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) goto label_181f318fd;
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,pIVar1,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__TargetNearestEnemy_b
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__38_0 =
         (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
    targetAddress = &TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__38_0;
  }
label_181f318f5:
  Il2CppCodeGenWriteBarrier(targetAddress,__this);
label_181f318fd:
  __this_04 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_04,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_04;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__CurrentTarget
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__CurrentTarget (const MethodInfo* method);
// 0x181f47390

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__CurrentTarget(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434556e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CurrentTarget_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_18434556e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CurrentTarget_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__DetectRange
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__DetectRange (const MethodInfo* method);
// 0x181f47700

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__DetectRange(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434556f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__DetectRange_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__DetectRange_g____sette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_18434556f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__DetectRange_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__DetectRange_g____sette
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__State
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__State (const MethodInfo* method);
// 0x181f4b8f0

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__State(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345570 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__State_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_184345570 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__State_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__IsWalking
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__IsWalking (const MethodInfo* method);
// 0x181f499b0

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__IsWalking(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345571 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsWalking_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsWalking_g____setter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_184345571 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsWalking_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsWalking_g____setter
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__AIEnabled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__AIEnabled (const MethodInfo* method);
// 0x181f463f0

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__AIEnabled(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345572 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__AIEnabled_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__AIEnabled_g____setter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_184345572 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__AIEnabled_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__AIEnabled_g____setter
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__UsePathfinding
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__UsePathfinding (const MethodInfo* method);
// 0x181f4c160

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__UsePathfinding(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345573 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__UsePathfinding_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__UsePathfinding_g____se
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_184345573 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__UsePathfinding_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__UsePathfinding_g____se
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Name
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Name (const MethodInfo* method);
// 0x181f4a5e0

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Name(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345574 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Name_g____getter_8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Name_g____setter_8_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_184345574 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Name_g____getter_8_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Name_g____setter_8_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Guild
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Guild (const MethodInfo* method);
// 0x181f48600

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Guild(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345575 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Guild_g____getter_9_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Guild_g____setter_9_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_184345575 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Guild_g____getter_9_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Guild_g____setter_9_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Player
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Player (const MethodInfo* method);
// 0x181f4a9a0

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Player(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345576 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Player_g____getter_10
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_184345576 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Player_g____getter_10
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__IsAI
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__IsAI (const MethodInfo* method);
// 0x181f48ec0

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__IsAI(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345577 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsAI_g____getter_11_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_184345577 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsAI_g____getter_11_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__IsAlive
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__IsAlive (const MethodInfo* method);
// 0x181f48f60

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__IsAlive(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345578 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsAlive_g____getter_12
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_184345578 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsAlive_g____getter_12
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__ViewID
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__ViewID (const MethodInfo* method);
// 0x181f4c430

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__ViewID(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345579 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__ViewID_g____getter_13
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_184345579 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__ViewID_g____getter_13
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__IsMine
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__IsMine (const MethodInfo* method);
// 0x181f49690

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__IsMine(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434557a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsMine_g____getter_14
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_18434557a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsMine_g____getter_14
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__IsMainCharacter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__IsMainCharacter (const MethodInfo* method);
// 0x181f495f0

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__IsMainCharacter(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434557b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsMainCharacter_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_18434557b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsMainCharacter_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Transform
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Transform (const MethodInfo* method);
// 0x181f4bee0

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Transform(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434557c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Transform_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_18434557c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Transform_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Position
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Position (const MethodInfo* method);
// 0x181f4ab30

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Position(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434557d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Position_g____setter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_18434557d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_1
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Position_g____setter_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Rotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Rotation (const MethodInfo* method);
// 0x181f4b1c0

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Rotation(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434557e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Rotation_g____getter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Rotation_g____setter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_18434557e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Rotation_g____getter_1
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Rotation_g____setter_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__QuaternionRotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__QuaternionRotation (const MethodInfo* method);
// 0x181f4ad10

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__QuaternionRotation
          (MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434557f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g_4092d80
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_18434557f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g_4092d80
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Velocity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Velocity (const MethodInfo* method);
// 0x181f4c250

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Velocity(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345580 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Velocity_g____getter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Velocity_g____setter_2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_184345580 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Velocity_g____getter_2
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Velocity_g____setter_2
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Forward
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Forward (const MethodInfo* method);
// 0x181f479d0

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Forward(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345581 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Forward_g____getter_21
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Forward_g____setter_21
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_184345581 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Forward_g____getter_21
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Forward_g____setter_21
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Right
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Right (const MethodInfo* method);
// 0x181f4b030

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Right(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345582 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Right_g____getter_22_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Right_g____setter_22_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_184345582 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Right_g____getter_22_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Right_g____setter_22_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Up
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Up (const MethodInfo* method);
// 0x181f4bf80

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Up(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345583 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Up_g____getter_23_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Up_g____setter_23_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_184345583 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Up_g____getter_23_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Up_g____setter_23_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__HasTargetDirection
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__HasTargetDirection (const MethodInfo* method);
// 0x181f48830

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__HasTargetDirection
          (MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345584 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__HasTargetDirection_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_184345584 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__HasTargetDirection_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__TargetDirection
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__TargetDirection (const MethodInfo* method);
// 0x181f4b990

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__TargetDirection(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345585 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__TargetDirection_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__TargetDirection_g____s
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_184345585 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__TargetDirection_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__TargetDirection_g____s
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Team
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Team (const MethodInfo* method);
// 0x181f4bd00

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Team(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345586 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Team_g____getter_26_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Team_g____setter_26_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_184345586 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Team_g____getter_26_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Team_g____setter_26_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Health
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Health (const MethodInfo* method);
// 0x181f488d0

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Health(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345587 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Health_g____getter_27
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Health_g____setter_27
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_184345587 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Health_g____getter_27
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Health_g____setter_27
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__MaxHealth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__MaxHealth (const MethodInfo* method);
// 0x181f4a310

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__MaxHealth(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345588 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__MaxHealth_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__MaxHealth_g____setter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_184345588 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__MaxHealth_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__MaxHealth_g____setter
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__CustomDamageEnabled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__CustomDamageEnabled (const MethodInfo* method);
// 0x181f47430

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__CustomDamageEnabled
          (MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345589 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CustomDamageEnabled_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CustomDamageEnabled_g_40917a8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_184345589 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CustomDamageEnabled_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CustomDamageEnabled_g_40917a8
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__CustomDamage
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__CustomDamage (const MethodInfo* method);
// 0x181f47520

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__CustomDamage(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434558a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CustomDamage_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CustomDamage_g____sett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_18434558a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CustomDamage_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CustomDamage_g____sett
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__CurrentAnimation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__CurrentAnimation (const MethodInfo* method);
// 0x181f46f30

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__CurrentAnimation
          (MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434558b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CurrentAnimation_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_18434558b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CurrentAnimation_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Grounded
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Grounded (const MethodInfo* method);
// 0x181f48560

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Grounded(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434558c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Grounded_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_18434558c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Grounded_g____getter_3
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Rigidbody
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Rigidbody (const MethodInfo* method);
// 0x181f4b120

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Rigidbody(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434558d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Rigidbody_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_18434558d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Rigidbody_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__GetTarget
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetTarget (const MethodInfo* method);
// 0x181f42230

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetTarget(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434558e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetTarget_b__34_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434558e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__34_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetTarget_b__34_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__34_0 =
         (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__34_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__SetTarget
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__SetTarget (const MethodInfo* method);
// 0x181f45500

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__SetTarget(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434558f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__SetTarget_b__35_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434558f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__35_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__SetTarget_b__35_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__35_0 =
         (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__35_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__ClearTarget
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__ClearTarget (const MethodInfo* method);
// 0x181f40ea0

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__ClearTarget(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345590 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__ClearTarget_b__36_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345590 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__36_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__ClearTarget_b__36_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__36_0 =
         (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__36_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__GetNearestEnemy
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetNearestEnemy (const MethodInfo* method);
// 0x181f42110

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetNearestEnemy(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345591 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetNearestEnemy_b__37
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345591 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__37_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetNearestEnemy_b__37
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__37_0 =
         (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__37_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__TargetNearestEnemy
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__TargetNearestEnemy (const MethodInfo* method);
// 0x181f45e20

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__TargetNearestEnemy
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345592 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__TargetNearestEnemy_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345592 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__38_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__TargetNearestEnemy_b
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__38_0 =
         (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__38_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__MoveTo
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__MoveTo (const MethodInfo* method);
// 0x181f434b0

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__MoveTo(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345593 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__MoveTo_b__39_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345593 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__39_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__MoveTo_b__39_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__39_0 =
         (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__39_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__MoveToTarget
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__MoveToTarget (const MethodInfo* method);
// 0x181f43390

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__MoveToTarget(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345594 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__MoveToTarget_b__40_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345594 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__40_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__MoveToTarget_b__40_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__40_0 =
         (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__40_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__Idle
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__Idle (const MethodInfo* method);
// 0x181f426d0

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__Idle(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345595 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__Idle_b__41_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345595 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__41_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__Idle_b__41_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__41_0 =
         (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__41_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__SetDisplayName
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__SetDisplayName (const MethodInfo* method);
// 0x181f45190

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__SetDisplayName(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345596 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__SetDisplayName_b__42_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345596 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__42_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__SetDisplayName_b__42_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__42_0 =
         (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__42_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__GetKilled
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetKilled (const MethodInfo* method);
// 0x181f41ff0

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetKilled(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345597 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetKilled_b__43_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345597 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__43_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetKilled_b__43_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__43_0 =
         (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__43_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__GetDamaged
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetDamaged (const MethodInfo* method);
// 0x181f41ed0

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetDamaged(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345598 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetDamaged_b__44_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345598 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__44_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetDamaged_b__44_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__44_0 =
         (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__44_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__Emote
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__Emote (const MethodInfo* method);
// 0x181f41460

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__Emote(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345599 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__Emote_b__45_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345599 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__45_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__Emote_b__45_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__45_0 =
         (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__45_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__PlayAnimation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__PlayAnimation (const MethodInfo* method);
// 0x181f43cb0

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__PlayAnimation(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434559a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__PlayAnimation_b__46_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434559a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__46_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__PlayAnimation_b__46_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__46_0 =
         (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__46_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__PlayAnimationAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__PlayAnimationAt (const MethodInfo* method);
// 0x181f43b90

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__PlayAnimationAt(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434559b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__PlayAnimationAt_b__47
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434559b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__47_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__PlayAnimationAt_b__47
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__47_0 =
         (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__47_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__GetAnimationSpeed
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetAnimationSpeed (const MethodInfo* method);
// 0x181f41db0

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetAnimationSpeed(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434559c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetAnimationSpeed_b__4
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434559c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__48_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetAnimationSpeed_b__4
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__48_0 =
         (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__48_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__SetAnimationSpeed
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__SetAnimationSpeed (const MethodInfo* method);
// 0x181f45060

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__SetAnimationSpeed(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434559d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__SetAnimationSpeed_b__4
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434559d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__49_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__SetAnimationSpeed_b__4
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__49_0 =
         (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__49_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__IsPlayingAnimation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__IsPlayingAnimation (const MethodInfo* method);
// 0x181f427f0

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__IsPlayingAnimation
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434559e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__IsPlayingAnimation_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434559e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__50_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__IsPlayingAnimation_b
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__50_0 =
         (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__50_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__GetAnimationNormalizedTime
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetAnimationNormalizedTime (const MethodInfo* method);
// 0x181f41c80

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetAnimationNormalizedTime
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_18434559f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetAnimationNormalized
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    Il2CppMethodInitialized_18434559f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__51_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetAnimationNormalized
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__51_0 =
         (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__51_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__ForceAnimation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__ForceAnimation (const MethodInfo* method);
// 0x181f41900

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__ForceAnimation(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843455a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__ForceAnimation_b__52_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843455a0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__52_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__ForceAnimation_b__52_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__52_0 =
         (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__52_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__GetAnimationLength
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetAnimationLength (const MethodInfo* method);
// 0x181f41b50

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetAnimationLength
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843455a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetAnimationLength_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843455a1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__53_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetAnimationLength_b
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__53_0 =
         (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__53_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__IsPlayingSound
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__IsPlayingSound (const MethodInfo* method);
// 0x181f42920

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__IsPlayingSound(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843455a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__IsPlayingSound_b__54_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843455a2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__54_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__IsPlayingSound_b__54_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__54_0 =
         (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__54_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__PlaySound
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__PlaySound (const MethodInfo* method);
// 0x181f43dd0

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__PlaySound(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843455a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__PlaySound_b__55_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843455a3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__55_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__PlaySound_b__55_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__55_0 =
         (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__55_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__StopSound
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__StopSound (const MethodInfo* method);
// 0x181f45980

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__StopSound(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843455a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__StopSound_b__56_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843455a4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__56_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__StopSound_b__56_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__56_0 =
         (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__56_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__FadeSound
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__FadeSound (const MethodInfo* method);
// 0x181f41580

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__FadeSound(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843455a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__FadeSound_b__57_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843455a5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__57_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__FadeSound_b__57_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__57_0 =
         (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__57_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__LookAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__LookAt (const MethodInfo* method);
// 0x181f42de0

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__LookAt(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843455a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__LookAt_b__58_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843455a6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__58_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__LookAt_b__58_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__58_0 =
         (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__58_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__AddForce
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__AddForce (const MethodInfo* method);
// 0x181f40440

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__AddForce(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843455a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__AddForce_b__59_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843455a7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__59_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__AddForce_b__59_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__59_0 =
         (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__59_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__Reveal
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__Reveal (const MethodInfo* method);
// 0x181f44e10

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__Reveal(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843455a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__Reveal_b__60_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843455a8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__60_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__Reveal_b__60_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__60_0 =
         (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__60_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__AddOutline
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__AddOutline (const MethodInfo* method);
// 0x181f40690

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__AddOutline(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843455a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__AddOutline_b__61_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843455a9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__61_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__AddOutline_b__61_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__61_0 =
         (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__61_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__RemoveOutline
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__RemoveOutline (const MethodInfo* method);
// 0x181f44a90

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__RemoveOutline(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843455aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__RemoveOutline_b__62_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843455aa = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__62_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__RemoveOutline_b__62_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__62_0 =
         (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__62_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding____Eq__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding____Eq__ (const MethodInfo* method);
// 0x181f46190

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding____Eq__(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843455ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding____Eq___b__63_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843455ab = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__63_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding____Eq___b__63_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__63_0 =
         (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__63_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding____Hash__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding____Hash__ (const MethodInfo* method);
// 0x181f462c0

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding____Hash__(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843455ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding____Hash___b__64_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843455ac = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__64_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding____Hash___b__64_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__64_0 =
         (System_Func_CustomLogicCharacterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9__64_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x181f4d4f0

void CustomLogic_CustomLogicCharacterBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_1843455ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"PlayAnimationAt");
    il2cpp_codegen_initialize_runtime_metadata(&"PlayAnimation");
    il2cpp_codegen_initialize_runtime_metadata(&"ForceAnimation");
    il2cpp_codegen_initialize_runtime_metadata(&"Guild");
    il2cpp_codegen_initialize_runtime_metadata(&"GetDamaged");
    il2cpp_codegen_initialize_runtime_metadata(&"SetDisplayName");
    il2cpp_codegen_initialize_runtime_metadata(&"Team");
    il2cpp_codegen_initialize_runtime_metadata(&"Right");
    il2cpp_codegen_initialize_runtime_metadata(&"StopSound");
    il2cpp_codegen_initialize_runtime_metadata(&"CustomDamage");
    il2cpp_codegen_initialize_runtime_metadata(&"IsPlayingSound");
    il2cpp_codegen_initialize_runtime_metadata(&"Transform");
    il2cpp_codegen_initialize_runtime_metadata(&"QuaternionRotation");
    il2cpp_codegen_initialize_runtime_metadata(&"IsAlive");
    il2cpp_codegen_initialize_runtime_metadata(&"CustomDamageEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"MoveToTarget");
    il2cpp_codegen_initialize_runtime_metadata(&"__Eq__");
    il2cpp_codegen_initialize_runtime_metadata(&"__Hash__");
    il2cpp_codegen_initialize_runtime_metadata(&"SetAnimationSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"ViewID");
    il2cpp_codegen_initialize_runtime_metadata(&"Emote");
    il2cpp_codegen_initialize_runtime_metadata(&"FadeSound");
    il2cpp_codegen_initialize_runtime_metadata(&"Position");
    il2cpp_codegen_initialize_runtime_metadata(&"GetAnimationLength");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"AddOutline");
    il2cpp_codegen_initialize_runtime_metadata(&"DetectRange");
    il2cpp_codegen_initialize_runtime_metadata(&"Forward");
    il2cpp_codegen_initialize_runtime_metadata(&"HasTargetDirection");
    il2cpp_codegen_initialize_runtime_metadata(&"MaxHealth");
    il2cpp_codegen_initialize_runtime_metadata(&"MoveTo");
    il2cpp_codegen_initialize_runtime_metadata(&"Health");
    il2cpp_codegen_initialize_runtime_metadata(&"UsePathfinding");
    il2cpp_codegen_initialize_runtime_metadata(&"IsMine");
    il2cpp_codegen_initialize_runtime_metadata(&"IsMainCharacter");
    il2cpp_codegen_initialize_runtime_metadata(&"IsPlayingAnimation");
    il2cpp_codegen_initialize_runtime_metadata(&"State");
    il2cpp_codegen_initialize_runtime_metadata(&"IsWalking");
    il2cpp_codegen_initialize_runtime_metadata(&"GetAnimationSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"PlaySound");
    il2cpp_codegen_initialize_runtime_metadata(&"Rotation");
    il2cpp_codegen_initialize_runtime_metadata(&"AIEnabled");
    il2cpp_codegen_initialize_runtime_metadata(&"CurrentAnimation");
    il2cpp_codegen_initialize_runtime_metadata(&"Up");
    il2cpp_codegen_initialize_runtime_metadata(&"RemoveOutline");
    il2cpp_codegen_initialize_runtime_metadata(&"GetNearestEnemy");
    il2cpp_codegen_initialize_runtime_metadata(&"SetTarget");
    il2cpp_codegen_initialize_runtime_metadata(&"Velocity");
    il2cpp_codegen_initialize_runtime_metadata(&"AddForce");
    il2cpp_codegen_initialize_runtime_metadata(&"GetAnimationNormalizedTime");
    il2cpp_codegen_initialize_runtime_metadata(&"Rigidbody");
    il2cpp_codegen_initialize_runtime_metadata(&"TargetNearestEnemy");
    il2cpp_codegen_initialize_runtime_metadata(&"Player");
    il2cpp_codegen_initialize_runtime_metadata(&"Idle");
    il2cpp_codegen_initialize_runtime_metadata(&"GetKilled");
    il2cpp_codegen_initialize_runtime_metadata(&"TargetDirection");
    il2cpp_codegen_initialize_runtime_metadata(&"IsAI");
    il2cpp_codegen_initialize_runtime_metadata(&"LookAt");
    il2cpp_codegen_initialize_runtime_metadata(&"Grounded");
    il2cpp_codegen_initialize_runtime_metadata(&"CurrentTarget");
    il2cpp_codegen_initialize_runtime_metadata(&"ClearTarget");
    il2cpp_codegen_initialize_runtime_metadata(&"Reveal");
    il2cpp_codegen_initialize_runtime_metadata(&"GetTarget");
    Il2CppMethodInitialized_1843455ad = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CurrentTarget",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DetectRange",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"State",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsWalking",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AIEnabled",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"UsePathfinding",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Name",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Guild",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Player",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsAI",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsAlive",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ViewID",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsMine",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsMainCharacter",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Transform",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Position",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Rotation",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"QuaternionRotation",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Velocity",
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
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HasTargetDirection",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TargetDirection",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Team",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Health",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MaxHealth",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CustomDamageEnabled",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CustomDamage",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CurrentAnimation",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Grounded",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Rigidbody",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetTarget",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetTarget",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ClearTarget",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetNearestEnemy",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TargetNearestEnemy",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MoveTo",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MoveToTarget",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Idle",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetDisplayName",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetKilled",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetDamaged",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Emote",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PlayAnimation",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PlayAnimationAt",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetAnimationSpeed",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetAnimationSpeed",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsPlayingAnimation",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetAnimationNormalizedTime",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ForceAnimation",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetAnimationLength",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsPlayingSound",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PlaySound",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"StopSound",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FadeSound",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LookAt",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AddForce",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Reveal",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AddOutline",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RemoveOutline",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Eq__",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Hash__",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__CurrentTarget>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__CurrentTarget_g____getter_2_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x181f3aaf0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__CurrentTarget_g____getter_2_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Controllers_HumanAIController_o *__this;
  Characters_ITargetable_o *target;
  Il2CppObject *pIVar1;
  
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this = (Controllers_HumanAIController_o *)
           CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__i,(MethodInfo *)0x0);
  if (__this != (Controllers_HumanAIController_o *)0x0) {
    target = Controllers_HumanAIController__get_Target(__this,(MethodInfo *)0x0);
    pIVar1 = CustomLogic_CustomLogicCharacterBuiltin__WrapTarget(target,(MethodInfo *)0x0);
    return pIVar1;
  }
  pIVar1 = CustomLogic_CustomLogicCharacterBuiltin__WrapTarget
                     ((Characters_ITargetable_o *)0x0,(MethodInfo *)0x0);
  return pIVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__DetectRange>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__DetectRange_g____getter_3_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x181f3add0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__DetectRange_g____getter_3_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Controllers_BaseAIController_o *pCVar1;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__i,(MethodInfo *)0x0);
    if (pCVar1 == (Controllers_BaseAIController_o *)0x0) {
      local_res8[0] = 0.0;
    }
    else {
      local_res8[0] = (pCVar1->fields).DetectRange;
    }
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__DetectRange>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__DetectRange_g____setter_3_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3ae20

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__DetectRange_g____setter_3_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Controllers_BaseAIController_o *__this;
  float range;
  
  if (Il2CppMethodInitialized_1843455ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455ae = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  range = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    __this = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__i,(MethodInfo *)0x0);
    if (__this != (Controllers_BaseAIController_o *)0x0) {
      Controllers_BaseAIController__SetDetectRange(__this,range,(MethodInfo *)0x0);
    }
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__State>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__State_g____getter_4_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x181f3f1c0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__State_g____getter_4_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  System_String_o *pSVar3;
  System_Enum_o local_28;
  undefined4 local_18;
  
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_184345550 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseState);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Horse);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanState);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanState);
    Il2CppMethodInitialized_184345550 = '\x01';
  }
  pCVar2 = (__i->fields).Character;
  if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar2->klass->_2).typeHierarchyDepth) &&
       ((pCVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human))
    {
      local_28.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
      local_18 = *(undefined4 *)&(*(uint64_t *)((char *)pCVar2 + 0x170));
label_181f3f306:
      local_28.monitor = &g_data_ffffffffffffffff;
      pSVar3 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar3;
    }
    if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
      bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar2->klass->_2).typeHierarchyDepth) &&
         ((pCVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
        local_28.klass = (System_Enum_c *)TypeInfo_Characters_TitanState;
        local_18 = *(undefined4 *)&(*(uint64_t *)((char *)pCVar2 + 0xf8));
        goto label_181f3f306;
      }
      if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
        bVar1 = (TypeInfo_Characters_Horse->_2).typeHierarchyDepth;
        if ((bVar1 <= (pCVar2->klass->_2).typeHierarchyDepth) &&
           ((pCVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Characters_Horse)) {
          local_28.klass = (System_Enum_c *)TypeInfo_Characters_HorseState;
          local_18._0_1_ = (*(uint8_t *)((char *)pCVar2 + 0x120));
          local_18._1_1_ = (*(uint8_t *)((char *)pCVar2 + 0x121));
          local_18._2_1_ = (*(uint8_t *)((char *)pCVar2 + 0x122));
          local_18._3_1_ = pCVar2[1].fields.field_0x1b;
          goto label_181f3f306;
        }
      }
    }
  }
  return (Il2CppObject *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__IsWalking>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__IsWalking_g____getter_5_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x181f3ce40

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__IsWalking_g____getter_5_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  Controllers_BaseAIController_o *__this;
  Il2CppObject *pIVar3;
  undefined1 local_res8 [32];
  
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_184345551 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_184345551 = '\x01';
  }
  pCVar2 = (__i->fields).Character;
  if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar2->klass->_2).typeHierarchyDepth) &&
       ((pCVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human))
    {
      local_res8[0] = *(undefined1 *)((longlong)&(*(uint64_t *)((char *)pCVar2 + 0x230)) + 4);
      goto label_181f3cec5;
    }
  }
  __this = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__i,(MethodInfo *)0x0);
  local_res8[0] = 0;
  if (__this != (Controllers_BaseAIController_o *)0x0) {
    local_res8[0] = Controllers_BaseAIController__get_IsWalking(__this,(MethodInfo *)0x0);
  }
label_181f3cec5:
  pIVar3 = il2cpp_value_box(g_data_184354de8,local_res8);
  return pIVar3;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__IsWalking>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__IsWalking_g____setter_5_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3cef0

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__IsWalking_g____setter_5_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  bool value;
  bool bVar1;
  Controllers_BaseAIController_o *__this;
  
  if (Il2CppMethodInitialized_1843455af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455af = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345552 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184345552 = '\x01';
    }
    __this = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__i,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this == (Controllers_BaseAIController_o *)0x0) goto label_181f3cfc2;
      Controllers_BaseAIController__set_IsWalking(__this,value,(MethodInfo *)0x0);
    }
    return;
  }
label_181f3cfc2:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__AIEnabled>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__AIEnabled_g____getter_6_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x181f39650

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__AIEnabled_g____getter_6_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Controllers_BaseAIController_o *pCVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__i,(MethodInfo *)0x0);
    local_res8[0] = 0;
    if (pCVar1 != (Controllers_BaseAIController_o *)0x0) {
      local_res8[0] = (pCVar1->fields)._aiEnabled;
    }
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__AIEnabled>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__AIEnabled_g____setter_6_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f39690

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__AIEnabled_g____setter_6_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  bool value;
  bool bVar1;
  Controllers_BaseAIController_o *__this;
  
  if (Il2CppMethodInitialized_1843455b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455b0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345553 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184345553 = '\x01';
    }
    __this = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__i,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this == (Controllers_BaseAIController_o *)0x0) goto label_181f39762;
      Controllers_BaseAIController__set_AIEnabled(__this,value,(MethodInfo *)0x0);
    }
    return;
  }
label_181f39762:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__UsePathfinding>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__UsePathfinding_g____getter_7_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x181f3fcb0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__UsePathfinding_g____getter_7_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Controllers_BaseAIController_o *pCVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__i,(MethodInfo *)0x0);
    local_res8[0] = 0;
    if (pCVar1 != (Controllers_BaseAIController_o *)0x0) {
      local_res8[0] = (pCVar1->fields)._usePathfinding;
    }
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__UsePathfinding>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__UsePathfinding_g____setter_7_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3fcf0

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__UsePathfinding_g____setter_7_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  bool value;
  bool bVar1;
  Controllers_BaseAIController_o *__this;
  
  if (Il2CppMethodInitialized_1843455b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455b1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345554 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_184345554 = '\x01';
    }
    __this = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__i,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar1) {
      if (__this == (Controllers_BaseAIController_o *)0x0) goto label_181f3fdc2;
      Controllers_BaseAIController__set_UsePathfinding(__this,value,(MethodInfo *)0x0);
    }
    return;
  }
label_181f3fdc2:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Name>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Name_g____getter_8_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x181f3dc80

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Name_g____getter_8_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  if ((__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) {
    return (Il2CppObject *)(pCVar1->fields).RichTextName;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Name>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Name_g____setter_8_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3dcb0

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Name_g____setter_8_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_1843455b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455b2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
     (__this = (__i->fields).Character, __this != (Characters_BaseCharacter_o *)0x0)) {
    Characters_BaseCharacter__set_Name(__this,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Guild>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Guild_g____getter_9_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x181f3be40

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Guild_g____getter_9_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  if ((__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) {
    return (Il2CppObject *)(pCVar1->fields).Guild;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Guild>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Guild_g____setter_9_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3be70

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Guild_g____setter_9_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_1843455b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455b3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) {
    (pCVar1->fields).Guild = value;
    Il2CppCodeGenWriteBarrier(&(pCVar1->fields).Guild,value);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Player>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Player_g____getter_10_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x181f3df00

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Player_g____getter_10_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  Photon_Realtime_Player_o *player;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this;
  
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_18434555c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
      Il2CppMethodInitialized_18434555c = '\x01';
    }
    pCVar1 = (__i->fields).Character;
    if (((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
        (pUVar2 = (pCVar1->fields).Cache, pUVar2 != (Utility_BaseComponentCache_o *)0x0)) &&
       (pPVar3 = (pUVar2->fields).PhotonView, pPVar3 != (Photon_Pun_PhotonView_o *)0x0)) {
      player = (pPVar3->fields)._Owner_k__BackingField;
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
      CustomLogic_CustomLogicPlayerBuiltin___ctor(__this,player,(MethodInfo *)0x0);
      return (Il2CppObject *)__this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__IsAI>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__IsAI_g____getter_11_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x181f3c7e0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__IsAI_g____getter_11_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).AI;
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__IsAlive>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__IsAlive_g____getter_12_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x181f3c820

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__IsAlive_g____getter_12_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  undefined1 local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_18434555d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_18434555d = '\x01';
    }
    pCVar1 = (__i->fields).Character;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      pCVar1 = (__i->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_181f3c8ad;
      local_res8[0] = (pCVar1->fields).Dead == false;
    }
    else {
      local_res8[0] = false;
    }
    pIVar3 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar3;
  }
label_181f3c8ad:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__ViewID>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__ViewID_g____getter_13_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x181f400b0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__ViewID_g____getter_13_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  Il2CppObject *pIVar4;
  int32_t local_res8 [8];
  
  if ((((__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
       (pCVar1 = (__i->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) &&
      (pUVar2 = (pCVar1->fields).Cache, pUVar2 != (Utility_BaseComponentCache_o *)0x0)) &&
     (pPVar3 = (pUVar2->fields).PhotonView, pPVar3 != (Photon_Pun_PhotonView_o *)0x0)) {
    local_res8[0] = (pPVar3->fields).viewIdField;
    pIVar4 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar4;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__IsMine>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__IsMine_g____getter_14_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x181f3ccf0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__IsMine_g____getter_14_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) {
    local_res8[0] =
         (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__IsMainCharacter>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__IsMainCharacter_g____getter_15_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x181f3ccb0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__IsMainCharacter_g____getter_15_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this;
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
     (__this = (__i->fields).Character, __this != (Characters_BaseCharacter_o *)0x0)) {
    local_res8[0] = Characters_BaseCharacter__IsMainCharacter(__this,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Transform>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Transform_g____getter_16_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x181f3f9f0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Transform_g____getter_16_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this;
  
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_18434555e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
      Il2CppMethodInitialized_18434555e = '\x01';
    }
    pCVar1 = (__i->fields).Character;
    if ((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
       (pUVar2 = (pCVar1->fields).Cache, pUVar2 != (Utility_BaseComponentCache_o *)0x0)) {
      transform = (pUVar2->fields).Transform;
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
      CustomLogic_CustomLogicTransformBuiltin___ctor(__this,transform,(MethodInfo *)0x0);
      return (Il2CppObject *)__this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_17_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x181f3df90

Il2CppObject*
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_17_0(CustomLogic_CustomLogicCharacterBuiltin_o* __i, MethodInfo* method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicHumanBuiltin_o *)0x0) {
    pCVar1 = (*(__i->klass->vtable)._13_get_Position.methodPtr)
                       (__i,(__i->klass->vtable)._13_get_Position.method);
    return (Il2CppObject *)pCVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____setter|17_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Position_g____setter_17_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3e060

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Position_g____setter_17_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_1843455b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455b4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    (*(__i->klass->vtable)._14_set_Position.methodPtr)
              (__i,pCVar1,(__i->klass->vtable)._14_set_Position.method);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____getter_18_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x181f3e880

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____getter_18_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  float fVar4;
  Characters_BaseCharacter_o *pCVar5;
  Utility_BaseComponentCache_o *pUVar6;
  UnityEngine_Transform_o *__this;
  UnityEngine_Quaternion_o *pUVar7;
  UnityEngine_Vector3_o *pUVar8;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Quaternion_o local_38;
  UnityEngine_Quaternion_Fields local_28 [2];
  
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_184345560 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_184345560 = '\x01';
  }
  pCVar5 = (__i->fields).Character;
  local_28[0].x = 0.0;
  local_28[0].y = 0.0;
  local_28[0].z = 0.0;
  local_28[0].w = 0.0;
  if (((pCVar5 != (Characters_BaseCharacter_o *)0x0) &&
      (pUVar6 = (pCVar5->fields).Cache, pUVar6 != (Utility_BaseComponentCache_o *)0x0)) &&
     (__this = (pUVar6->fields).Transform, __this != (UnityEngine_Transform_o *)0x0)) {
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
    return (Il2CppObject *)__this_00;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____setter|18_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____setter_18_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3ea30

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____setter_18_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Characters_BaseCharacter_o *pCVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *__this;
  bool bVar5;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar6;
  UnityEngine_Quaternion_o *pUVar7;
  UnityEngine_Quaternion_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  if (Il2CppMethodInitialized_1843455b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455b5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if ((__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
     (pCVar3 = (__i->fields).Character, pCVar3 != (Characters_BaseCharacter_o *)0x0)) {
    bVar5 = (*(pCVar3->klass->vtable)._74_IsMine.methodPtr)(pCVar3,(pCVar3->klass->vtable)._74_IsMine.method);
    if (!bVar5) {
      return;
    }
    pCVar3 = (__i->fields).Character;
    if (((pCVar3 != (Characters_BaseCharacter_o *)0x0) &&
        (pUVar4 = (pCVar3->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0)) &&
       (pCVar6 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
      uVar1 = (pCVar6->fields).Value.fields.x;
      uVar2 = (pCVar6->fields).Value.fields.y;
      __this = (pUVar4->fields).Transform;
      local_28.y = (float)uVar2 * 0.017453292;
      local_28.x = (float)uVar1 * 0.017453292;
      local_28.z = (pCVar6->fields).Value.fields.z * 0.017453292;
      pUVar7 = UnityEngine_Quaternion__Internal_FromEulerRad
                         (&local_18,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      if (__this != (UnityEngine_Transform_o *)0x0) {
        local_28.x = (pUVar7->fields).x;
        local_28.y = (pUVar7->fields).y;
        local_28.z = (pUVar7->fields).z;
        local_28.w = (pUVar7->fields).w;
        UnityEngine_Transform__set_rotation(__this,(UnityEngine_Quaternion_o *)&local_28,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionRotation>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__QuaternionRotation_g____getter_19_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x181f3e220

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__QuaternionRotation_g____getter_19_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this;
  undefined8 uVar3;
  undefined8 uVar4;
  UnityEngine_Quaternion_o *pUVar5;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this_00;
  UnityEngine_Quaternion_Fields local_28 [2];
  
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345561 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
      Il2CppMethodInitialized_184345561 = '\x01';
    }
    pCVar1 = (__i->fields).Character;
    if (((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
        (pUVar2 = (pCVar1->fields).Cache, pUVar2 != (Utility_BaseComponentCache_o *)0x0)) &&
       (__this = (pUVar2->fields).Transform, __this != (UnityEngine_Transform_o *)0x0)) {
      pUVar5 = UnityEngine_Transform__get_rotation
                         ((UnityEngine_Quaternion_o *)local_28,__this,(MethodInfo *)0x0);
      uVar3._0_4_ = (pUVar5->fields).x;
      uVar3._4_4_ = (pUVar5->fields).y;
      uVar4._0_4_ = (pUVar5->fields).z;
      uVar4._4_4_ = (pUVar5->fields).w;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
      local_28[0]._0_8_ = uVar3;
      local_28[0]._8_8_ = uVar4;
      CustomLogic_CustomLogicQuaternionBuiltin___ctor_1ed2b60
                (__this_00,(UnityEngine_Quaternion_o *)local_28,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionRotation>g____setter|19_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__QuaternionRotation_g____setter_19_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3e2c0

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__QuaternionRotation_g____setter_19_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this;
  bool bVar3;
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar4;
  UnityEngine_Quaternion_Fields local_18;
  
  if (Il2CppMethodInitialized_1843455b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455b6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
  if ((__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar3) {
      pCVar1 = (__i->fields).Character;
      if ((((pCVar1 == (Characters_BaseCharacter_o *)0x0) ||
           (pUVar2 = (pCVar1->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) ||
          (pCVar4 == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) ||
         (__this = (pUVar2->fields).Transform, __this == (UnityEngine_Transform_o *)0x0)) goto label_181f3e383;
      local_18.x = (pCVar4->fields).Value.fields.x;
      local_18.y = (pCVar4->fields).Value.fields.y;
      local_18.z = (pCVar4->fields).Value.fields.z;
      local_18.w = (pCVar4->fields).Value.fields.w;
      UnityEngine_Transform__set_rotation(__this,(UnityEngine_Quaternion_o *)&local_18,(MethodInfo *)0x0);
    }
    return;
  }
label_181f3e383:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Velocity>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Velocity_g____getter_20_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x181f3fdd0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Velocity_g____getter_20_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Characters_BaseCharacter_o *__this;
  UnityEngine_Vector3_o *pUVar3;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345562 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_184345562 = '\x01';
    }
    __this = (__i->fields).Character;
    if (__this != (Characters_BaseCharacter_o *)0x0) {
      pUVar3 = Characters_BaseCharacter__GetVelocity
                         ((UnityEngine_Vector3_o *)local_28,__this,(MethodInfo *)0x0);
      uVar1._0_4_ = (pUVar3->fields).x;
      uVar1._4_4_ = (pUVar3->fields).y;
      fVar2 = (pUVar3->fields).z;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      local_28[0]._0_8_ = uVar1;
      local_28[0].z = fVar2;
      CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                (__this_00,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Velocity>g____setter|20_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Velocity_g____setter_20_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3ff10

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Velocity_g____setter_20_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Rigidbody_o *__this;
  bool bVar3;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar4;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_1843455b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455b7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if ((__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar3) {
      return;
    }
    pCVar1 = (__i->fields).Character;
    if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
      Characters_BaseCharacter__SetKinematic(pCVar1,false,1.0,(MethodInfo *)0x0);
      pCVar1 = (__i->fields).Character;
      if ((((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
           (pUVar2 = (pCVar1->fields).Cache, pUVar2 != (Utility_BaseComponentCache_o *)0x0)) &&
          (pCVar4 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
         (__this = (pUVar2->fields).Rigidbody, __this != (UnityEngine_Rigidbody_o *)0x0)) {
        local_18.x = (pCVar4->fields).Value.fields.x;
        local_18.y = (pCVar4->fields).Value.fields.y;
        local_18.z = (pCVar4->fields).Value.fields.z;
        UnityEngine_Rigidbody__set_linearVelocity(__this,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0)
        ;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Forward>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Forward_g____getter_21_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x181f3b280

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Forward_g____getter_21_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Characters_BaseCharacter_o *pCVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *__this;
  UnityEngine_Vector3_o *pUVar5;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345563 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_184345563 = '\x01';
    }
    pCVar3 = (__i->fields).Character;
    if (((pCVar3 != (Characters_BaseCharacter_o *)0x0) &&
        (pUVar4 = (pCVar3->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0)) &&
       (__this = (pUVar4->fields).Transform, __this != (UnityEngine_Transform_o *)0x0)) {
      pUVar5 = UnityEngine_Transform__get_forward((UnityEngine_Vector3_o *)local_28,__this,(MethodInfo *)0x0);
      uVar1._0_4_ = (pUVar5->fields).x;
      uVar1._4_4_ = (pUVar5->fields).y;
      fVar2 = (pUVar5->fields).z;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      local_28[0]._0_8_ = uVar1;
      local_28[0].z = fVar2;
      CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                (__this_00,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Forward>g____setter|21_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Forward_g____setter_21_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3b330

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Forward_g____setter_21_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this;
  bool bVar3;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar4;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_1843455b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455b8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if ((__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar3) {
      pCVar1 = (__i->fields).Character;
      if ((((pCVar1 == (Characters_BaseCharacter_o *)0x0) ||
           (pUVar2 = (pCVar1->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) ||
          (pCVar4 == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) ||
         (__this = (pUVar2->fields).Transform, __this == (UnityEngine_Transform_o *)0x0)) goto label_181f3b3fc;
      local_18.x = (pCVar4->fields).Value.fields.x;
      local_18.y = (pCVar4->fields).Value.fields.y;
      local_18.z = (pCVar4->fields).Value.fields.z;
      UnityEngine_Transform__set_forward(__this,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    }
    return;
  }
label_181f3b3fc:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Right>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Right_g____getter_22_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x181f3e580

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Right_g____getter_22_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Characters_BaseCharacter_o *pCVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *__this;
  UnityEngine_Vector3_o *pUVar5;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345564 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_184345564 = '\x01';
    }
    pCVar3 = (__i->fields).Character;
    if (((pCVar3 != (Characters_BaseCharacter_o *)0x0) &&
        (pUVar4 = (pCVar3->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0)) &&
       (__this = (pUVar4->fields).Transform, __this != (UnityEngine_Transform_o *)0x0)) {
      pUVar5 = UnityEngine_Transform__get_right((UnityEngine_Vector3_o *)local_28,__this,(MethodInfo *)0x0);
      uVar1._0_4_ = (pUVar5->fields).x;
      uVar1._4_4_ = (pUVar5->fields).y;
      fVar2 = (pUVar5->fields).z;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      local_28[0]._0_8_ = uVar1;
      local_28[0].z = fVar2;
      CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                (__this_00,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Right>g____setter|22_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Right_g____setter_22_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3e630

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Right_g____setter_22_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this;
  bool bVar3;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar4;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_1843455b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455b9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if ((__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar3) {
      pCVar1 = (__i->fields).Character;
      if ((((pCVar1 == (Characters_BaseCharacter_o *)0x0) ||
           (pUVar2 = (pCVar1->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) ||
          (pCVar4 == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) ||
         (__this = (pUVar2->fields).Transform, __this == (UnityEngine_Transform_o *)0x0)) goto label_181f3e6fc;
      local_18.x = (pCVar4->fields).Value.fields.x;
      local_18.y = (pCVar4->fields).Value.fields.y;
      local_18.z = (pCVar4->fields).Value.fields.z;
      UnityEngine_Transform__set_right(__this,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    }
    return;
  }
label_181f3e6fc:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Up>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Up_g____getter_23_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x181f3fa70

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Up_g____getter_23_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Characters_BaseCharacter_o *pCVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *__this;
  UnityEngine_Vector3_o *pUVar5;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345565 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_184345565 = '\x01';
    }
    pCVar3 = (__i->fields).Character;
    if (((pCVar3 != (Characters_BaseCharacter_o *)0x0) &&
        (pUVar4 = (pCVar3->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0)) &&
       (__this = (pUVar4->fields).Transform, __this != (UnityEngine_Transform_o *)0x0)) {
      pUVar5 = UnityEngine_Transform__get_up((UnityEngine_Vector3_o *)local_28,__this,(MethodInfo *)0x0);
      uVar1._0_4_ = (pUVar5->fields).x;
      uVar1._4_4_ = (pUVar5->fields).y;
      fVar2 = (pUVar5->fields).z;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      local_28[0]._0_8_ = uVar1;
      local_28[0].z = fVar2;
      CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                (__this_00,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Up>g____setter|23_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Up_g____setter_23_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3fb20

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Up_g____setter_23_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this;
  bool bVar3;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar4;
  UnityEngine_Vector3_Fields local_18;
  
  if (Il2CppMethodInitialized_1843455ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455ba = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if ((__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar3) {
      pCVar1 = (__i->fields).Character;
      if ((((pCVar1 == (Characters_BaseCharacter_o *)0x0) ||
           (pUVar2 = (pCVar1->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) ||
          (pCVar4 == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) ||
         (__this = (pUVar2->fields).Transform, __this == (UnityEngine_Transform_o *)0x0)) goto label_181f3fbec;
      local_18.x = (pCVar4->fields).Value.fields.x;
      local_18.y = (pCVar4->fields).Value.fields.y;
      local_18.z = (pCVar4->fields).Value.fields.z;
      UnityEngine_Transform__set_up(__this,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    }
    return;
  }
label_181f3fbec:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__HasTargetDirection>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__HasTargetDirection_g____getter_24_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x181f3bfa0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__HasTargetDirection_g____getter_24_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).HasDirection;
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__TargetDirection>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__TargetDirection_g____getter_25_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x181f3f350

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__TargetDirection_g____getter_25_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Characters_BaseCharacter_o *pCVar3;
  UnityEngine_Vector3_o *pUVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345566 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_184345566 = '\x01';
    }
    pCVar3 = (__i->fields).Character;
    if (pCVar3 != (Characters_BaseCharacter_o *)0x0) {
      pUVar4 = (*(pCVar3->klass->vtable)._106_GetTargetDirection.methodPtr)
                         ((UnityEngine_Vector3_o *)local_28,pCVar3,
                          (pCVar3->klass->vtable)._106_GetTargetDirection.method);
      uVar1._0_4_ = (pUVar4->fields).x;
      uVar1._4_4_ = (pUVar4->fields).y;
      fVar2 = (pUVar4->fields).z;
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      local_28[0]._0_8_ = uVar1;
      local_28[0].z = fVar2;
      CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                (__this,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
      return (Il2CppObject *)__this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__TargetDirection>g____setter|25_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__TargetDirection_g____setter_25_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3f3f0

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__TargetDirection_g____setter_25_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Characters_BaseCharacter_o *pCVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar5;
  UnityEngine_Quaternion_o *pUVar6;
  UnityEngine_Vector3_o *pUVar7;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Quaternion_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  if (Il2CppMethodInitialized_1843455bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455bb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    local_28.x = 0.0;
    local_28.y = 0.0;
    local_28.z = 0.0;
    local_28.w = 0.0;
    if (pCVar5 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
      local_38.x = (pCVar5->fields).Value.fields.x;
      local_38.y = (pCVar5->fields).Value.fields.y;
      local_38.z = (pCVar5->fields).Value.fields.z;
      pCVar3 = (__i->fields).Character;
      local_48.x = 0.0;
      local_48.y = 0.0;
      local_48.z = 0.0;
      if (Il2CppMethodInitialized_18433de5c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
        Il2CppMethodInitialized_18433de5c = '\x01';
      }
      pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
      local_48.x = (pUVar4->upVector).fields.x;
      local_48.y = (pUVar4->upVector).fields.y;
      local_48.z = (pUVar4->upVector).fields.z;
      pUVar6 = UnityEngine_Quaternion__Internal_LookRotation
                         (&local_18,(UnityEngine_Vector3_o *)&local_38,(UnityEngine_Vector3_o *)&local_48,
                          (MethodInfo *)0x0);
      local_28.x = (pUVar6->fields).x;
      local_28.y = (pUVar6->fields).y;
      local_28.z = (pUVar6->fields).z;
      local_28.w = (pUVar6->fields).w;
      pUVar7 = UnityEngine_Quaternion__Internal_ToEulerRad
                         ((UnityEngine_Vector3_o *)&local_48,(UnityEngine_Quaternion_o *)&local_28,
                          (MethodInfo *)0x0);
      uVar1 = (pUVar7->fields).x;
      uVar2 = (pUVar7->fields).y;
      local_38.y = (float)uVar2 * 57.29578;
      local_38.x = (float)uVar1 * 57.29578;
      local_38.z = (pUVar7->fields).z * 57.29578;
      pUVar7 = UnityEngine_Quaternion__Internal_MakePositive
                         ((UnityEngine_Vector3_o *)&local_48,(UnityEngine_Vector3_o *)&local_38,
                          (MethodInfo *)0x0);
      if (pCVar3 != (Characters_BaseCharacter_o *)0x0) {
        (pCVar3->fields).TargetAngle = (pUVar7->fields).y;
        return;
      }
    }
    ThrowNullReferenceException();
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Team>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Team_g____getter_26_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x181f3f830

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Team_g____getter_26_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  if ((__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) {
    return (Il2CppObject *)(pCVar1->fields).Team;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Team>g____setter|26_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Team_g____setter_26_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3f860

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Team_g____setter_26_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  System_String_o *team;
  
  if (Il2CppMethodInitialized_1843455bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455bc = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  team = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                   (__v,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__i->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_181f3f901;
      Characters_BaseCharacter__SetTeam(pCVar1,team,(MethodInfo *)0x0);
    }
    return;
  }
label_181f3f901:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Health>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Health_g____getter_27_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x181f3bfe0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Health_g____getter_27_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) {
    local_res8[0] = (float)(pCVar1->fields).CurrentHealth;
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Health>g____setter|27_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Health_g____setter_27_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3c020

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Health_g____setter_27_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_1843455bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455bd = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__i->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_181f3c0cb;
      Characters_BaseCharacter__SetCurrentHealth(pCVar1,(int)fVar3,(MethodInfo *)0x0);
    }
    return;
  }
label_181f3c0cb:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__MaxHealth>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__MaxHealth_g____getter_28_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x181f3d9d0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__MaxHealth_g____getter_28_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) {
    local_res8[0] = (float)(pCVar1->fields).MaxHealth;
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__MaxHealth>g____setter|28_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__MaxHealth_g____setter_28_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3da10

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__MaxHealth_g____setter_28_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_1843455be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455be = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__i->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_181f3dabb;
      Characters_BaseCharacter__SetMaxHealth(pCVar1,(int)fVar3,(MethodInfo *)0x0);
    }
    return;
  }
label_181f3dabb:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__CustomDamageEnabled>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__CustomDamageEnabled_g____getter_29_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x181f3ab40

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__CustomDamageEnabled_g____getter_29_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).CustomDamageEnabled;
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__CustomDamageEnabled>g____setter|29_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__CustomDamageEnabled_g____setter_29_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3ab80

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__CustomDamageEnabled_g____setter_29_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_1843455bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455bf = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar3) {
      pCVar1 = (__i->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_181f3ac1a;
      (pCVar1->fields).CustomDamageEnabled = bVar2;
    }
    return;
  }
label_181f3ac1a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__CustomDamage>g____getter|30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__CustomDamage_g____getter_30_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x181f3ac20

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__CustomDamage_g____getter_30_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Il2CppObject *pIVar2;
  int32_t local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).CustomDamage;
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__CustomDamage>g____setter|30_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__CustomDamage_g____setter_30_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f3ac60

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__CustomDamage_g____setter_30_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  int32_t iVar3;
  
  if (Il2CppMethodInitialized_1843455c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843455c0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  iVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if ((__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__i->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_181f3acf8;
      (pCVar1->fields).CustomDamage = iVar3;
    }
    return;
  }
label_181f3acf8:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__CurrentAnimation>g____getter|31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__CurrentAnimation_g____getter_31_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x181f3a4f0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__CurrentAnimation_g____getter_31_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this;
  System_String_o *pSVar1;
  
  if ((__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
     (__this = (__i->fields).Character, __this != (Characters_BaseCharacter_o *)0x0)) {
    pSVar1 = Characters_BaseCharacter__GetCurrentAnimation(__this,(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Grounded>g____getter|32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Grounded_g____getter_32_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x181f3be00

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Grounded_g____getter_32_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).Grounded;
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Rigidbody>g____getter|33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Rigidbody_g____getter_33_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x181f3e710

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Rigidbody_g____getter_33_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Component_o *pUVar4;
  CustomLogic_CustomLogicRigidbodyBuiltin_o *__this;
  UnityEngine_GameObject_o *value;
  
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345567 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin);
      Il2CppMethodInitialized_184345567 = '\x01';
    }
    pCVar2 = (__i->fields).Character;
    if ((pCVar2 != (Characters_BaseCharacter_o *)0x0) &&
       (pUVar3 = (pCVar2->fields).Cache, pUVar3 != (Utility_BaseComponentCache_o *)0x0)) {
      pUVar4 = (UnityEngine_Component_o *)(pUVar3->fields).Rigidbody;
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin);
      if (Il2CppMethodInitialized_1843454ec == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rigidbody);
        Il2CppMethodInitialized_1843454ec = '\x01';
      }
      (__this->fields)._isGravityEnabled = true;
      CustomLogic_BuiltinComponentInstance___ctor
                ((CustomLogic_BuiltinComponentInstance_o *)__this,pUVar4,(MethodInfo *)0x0);
      (__this->fields).OwnerBuiltin = (CustomLogic_BuiltinClassInstance_o *)__i;
      Il2CppCodeGenWriteBarrier(&(__this->fields).OwnerBuiltin,__i);
      if (pUVar4 != (UnityEngine_Component_o *)0x0) {
        value = UnityEngine_Component__get_gameObject(pUVar4,(MethodInfo *)0x0);
        (__this->fields).AttachedGameObject = value;
        Il2CppCodeGenWriteBarrier(&(__this->fields).AttachedGameObject,value);
        pUVar4 = (__this->fields).Component;
        if (pUVar4 == (UnityEngine_Component_o *)0x0) {
          (__this->fields).Value = (UnityEngine_Rigidbody_o *)0x0;
        }
        else {
          bVar1 = (TypeInfo_UnityEngine_Rigidbody->_2).typeHierarchyDepth;
          if (((pUVar4->klass->_2).typeHierarchyDepth < bVar1) ||
             ((pUVar4->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_UnityEngine_Rigidbody)) {
            il2cpp_codegen_raise_invalid_cast_exception(pUVar4);
          }
          (__this->fields).Value = (UnityEngine_Rigidbody_o *)pUVar4;
          bVar1 = (TypeInfo_UnityEngine_Rigidbody->_2).typeHierarchyDepth;
          if (((pUVar4->klass->_2).typeHierarchyDepth < bVar1) ||
             ((pUVar4->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_UnityEngine_Rigidbody)) {
            il2cpp_codegen_raise_invalid_cast_exception(pUVar4);
          }
        }
        Il2CppCodeGenWriteBarrier(&(__this->fields).Value,pUVar4);
        return (Il2CppObject *)__this;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_AIController
// il2cpp: Controllers_BaseAIController_o* CustomLogic_CustomLogicCharacterBuiltin__get_AIController (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f4fad0

Controllers_BaseAIController_o *
CustomLogic_CustomLogicCharacterBuiltin__get_AIController
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  Controllers_BaseAIController_o *pCVar3;
  
  if (Il2CppMethodInitialized_18434554f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_BaseAIController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434554f = '\x01';
  }
  pCVar1 = (__this->fields).Character;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pCVar1 = (__this->fields).Character;
    if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
label_181f4fb8a:
      ThrowNullReferenceException();
    }
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_181f4fb8a;
      if (((pCVar1->fields).Dead == false) && ((pCVar1->fields).AI != false)) {
        pCVar3 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pCVar1,
                            (MethodInfo_6651A0 *)
                            MethodInfo_UnityEngine_Component_GetComponent_BaseAIController);
        return pCVar3;
      }
    }
  }
  return (Controllers_BaseAIController_o *)0x0;
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_CurrentTarget
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin__get_CurrentTarget (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f4ec80

Il2CppObject*
CustomLogic_CustomLogicCharacterBuiltin__get_CurrentTarget(CustomLogic_CustomLogicCharacterBuiltin_o* __this, MethodInfo* method)

{
  Controllers_HumanAIController_o *__this_00;
  Characters_ITargetable_o *target;
  Il2CppObject *pIVar1;
  
  __this_00 = (Controllers_HumanAIController_o *)
              CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__this,(MethodInfo *)0x0);
  if (__this_00 != (Controllers_HumanAIController_o *)0x0) {
    target = Controllers_HumanAIController__get_Target(__this_00,(MethodInfo *)0x0);
    pIVar1 = CustomLogic_CustomLogicCharacterBuiltin__WrapTarget(target,(MethodInfo *)0x0);
    return pIVar1;
  }
  pIVar1 = CustomLogic_CustomLogicCharacterBuiltin__WrapTarget
                     ((Characters_ITargetable_o *)0x0,(MethodInfo *)0x0);
  return pIVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_DetectRange
// il2cpp: float CustomLogic_CustomLogicCharacterBuiltin__get_DetectRange (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f4fc50

float CustomLogic_CustomLogicCharacterBuiltin__get_DetectRange
                (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Controllers_BaseAIController_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__this,(MethodInfo *)0x0);
  if (pCVar1 != (Controllers_BaseAIController_o *)0x0) {
    return (pCVar1->fields).DetectRange;
  }
  return 0.0;
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_DetectRange
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_DetectRange (CustomLogic_CustomLogicCharacterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f509c0

void CustomLogic_CustomLogicCharacterBuiltin__set_DetectRange
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,float value,MethodInfo *method)

{
  Controllers_BaseAIController_o *__this_00;
  
  __this_00 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__this,(MethodInfo *)0x0);
  if (__this_00 != (Controllers_BaseAIController_o *)0x0) {
    Controllers_BaseAIController__SetDetectRange(__this_00,value,(MethodInfo *)0x0);
  }
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_State
// il2cpp: System_String_o* CustomLogic_CustomLogicCharacterBuiltin__get_State (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f50450

System_String_o *
CustomLogic_CustomLogicCharacterBuiltin__get_State
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  System_String_o *pSVar3;
  System_Enum_o local_28;
  undefined4 local_18;
  
  if (Il2CppMethodInitialized_184345550 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseState);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Horse);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanState);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanState);
    Il2CppMethodInitialized_184345550 = '\x01';
  }
  pCVar2 = (__this->fields).Character;
  if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar2->klass->_2).typeHierarchyDepth) &&
       ((pCVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human))
    {
      local_28.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
      local_18 = *(undefined4 *)&(*(uint64_t *)((char *)pCVar2 + 0x170));
label_181f5058d:
      local_28.monitor = &g_data_ffffffffffffffff;
      pSVar3 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
      return pSVar3;
    }
    if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
      bVar1 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar2->klass->_2).typeHierarchyDepth) &&
         ((pCVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
        local_28.klass = (System_Enum_c *)TypeInfo_Characters_TitanState;
        local_18 = *(undefined4 *)&(*(uint64_t *)((char *)pCVar2 + 0xf8));
        goto label_181f5058d;
      }
      if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
        bVar1 = (TypeInfo_Characters_Horse->_2).typeHierarchyDepth;
        if ((bVar1 <= (pCVar2->klass->_2).typeHierarchyDepth) &&
           ((pCVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
            (Il2CppClass *)TypeInfo_Characters_Horse)) {
          local_28.klass = (System_Enum_c *)TypeInfo_Characters_HorseState;
          local_18._0_1_ = (*(uint8_t *)((char *)pCVar2 + 0x120));
          local_18._1_1_ = (*(uint8_t *)((char *)pCVar2 + 0x121));
          local_18._2_1_ = (*(uint8_t *)((char *)pCVar2 + 0x122));
          local_18._3_1_ = pCVar2[1].fields.field_0x1b;
          goto label_181f5058d;
        }
      }
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_IsWalking
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__get_IsWalking (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f4feb0

bool CustomLogic_CustomLogicCharacterBuiltin__get_IsWalking
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  bool bVar3;
  Controllers_BaseAIController_o *__this_00;
  
  if (Il2CppMethodInitialized_184345551 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_184345551 = '\x01';
  }
  pCVar2 = (__this->fields).Character;
  if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar2->klass->_2).typeHierarchyDepth) &&
       ((pCVar2->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Human))
    {
      return (bool)*(undefined1 *)((longlong)&(*(uint64_t *)((char *)pCVar2 + 0x230)) + 4);
    }
  }
  __this_00 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__this,(MethodInfo *)0x0);
  if (__this_00 != (Controllers_BaseAIController_o *)0x0) {
    bVar3 = Controllers_BaseAIController__get_IsWalking(__this_00,(MethodInfo *)0x0);
    return bVar3;
  }
  return false;
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_IsWalking
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_IsWalking (CustomLogic_CustomLogicCharacterBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f50b00

void CustomLogic_CustomLogicCharacterBuiltin__set_IsWalking
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,bool value,MethodInfo *method)

{
  bool bVar1;
  Controllers_BaseAIController_o *__this_00;
  
  if (Il2CppMethodInitialized_184345552 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184345552 = '\x01';
  }
  __this_00 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__this,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this_00 == (Controllers_BaseAIController_o *)0x0) {
      ThrowNullReferenceException();
    }
    Controllers_BaseAIController__set_IsWalking(__this_00,value,(MethodInfo *)0x0);
  }
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_AIEnabled
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__get_AIEnabled (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f4fb90

bool CustomLogic_CustomLogicCharacterBuiltin__get_AIEnabled
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Controllers_BaseAIController_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__this,(MethodInfo *)0x0);
  if (pCVar1 != (Controllers_BaseAIController_o *)0x0) {
    return (pCVar1->fields)._aiEnabled;
  }
  return false;
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_AIEnabled
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_AIEnabled (CustomLogic_CustomLogicCharacterBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f50890

void CustomLogic_CustomLogicCharacterBuiltin__set_AIEnabled
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,bool value,MethodInfo *method)

{
  bool bVar1;
  Controllers_BaseAIController_o *__this_00;
  
  if (Il2CppMethodInitialized_184345553 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184345553 = '\x01';
  }
  __this_00 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__this,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this_00 == (Controllers_BaseAIController_o *)0x0) {
      ThrowNullReferenceException();
    }
    Controllers_BaseAIController__set_AIEnabled(__this_00,value,(MethodInfo *)0x0);
  }
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_UsePathfinding
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__get_UsePathfinding (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f507b0

bool CustomLogic_CustomLogicCharacterBuiltin__get_UsePathfinding
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Controllers_BaseAIController_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__this,(MethodInfo *)0x0);
  if (pCVar1 != (Controllers_BaseAIController_o *)0x0) {
    return (pCVar1->fields)._usePathfinding;
  }
  return false;
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_UsePathfinding
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_UsePathfinding (CustomLogic_CustomLogicCharacterBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f51070

void CustomLogic_CustomLogicCharacterBuiltin__set_UsePathfinding
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,bool value,MethodInfo *method)

{
  bool bVar1;
  Controllers_BaseAIController_o *__this_00;
  
  if (Il2CppMethodInitialized_184345554 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184345554 = '\x01';
  }
  __this_00 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__this,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (__this_00 == (Controllers_BaseAIController_o *)0x0) {
      ThrowNullReferenceException();
    }
    Controllers_BaseAIController__set_UsePathfinding(__this_00,value,(MethodInfo *)0x0);
  }
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin$$GetTarget
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin__GetTarget (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f4ec80

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin__GetTarget
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Controllers_HumanAIController_o *__this_00;
  Characters_ITargetable_o *target;
  Il2CppObject *pIVar1;
  
  __this_00 = (Controllers_HumanAIController_o *)
              CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__this,(MethodInfo *)0x0);
  if (__this_00 != (Controllers_HumanAIController_o *)0x0) {
    target = Controllers_HumanAIController__get_Target(__this_00,(MethodInfo *)0x0);
    pIVar1 = CustomLogic_CustomLogicCharacterBuiltin__WrapTarget(target,(MethodInfo *)0x0);
    return pIVar1;
  }
  pIVar1 = CustomLogic_CustomLogicCharacterBuiltin__WrapTarget
                     ((Characters_ITargetable_o *)0x0,(MethodInfo *)0x0);
  return pIVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin$$SetTarget
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__SetTarget (CustomLogic_CustomLogicCharacterBuiltin_o* __this, Il2CppObject* target, float focusDuration, const MethodInfo* method);
// 0x181f4f4e0

void CustomLogic_CustomLogicCharacterBuiltin__SetTarget
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,Il2CppObject *target,float focusDuration,
               MethodInfo *method)

{
  bool bVar1;
  Controllers_BaseTitanAIController_o *__this_00;
  Characters_ITargetable_o *enemy;
  
  if (Il2CppMethodInitialized_184345555 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184345555 = '\x01';
  }
  __this_00 = (Controllers_BaseTitanAIController_o *)
              CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__this,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    enemy = CustomLogic_CustomLogicCharacterBuiltin__UnwrapTarget(target,(MethodInfo *)0x0);
    if (__this_00 == (Controllers_BaseTitanAIController_o *)0x0) {
      ThrowNullReferenceException();
    }
    Controllers_BaseTitanAIController__SetEnemy(__this_00,enemy,focusDuration,(MethodInfo *)0x0);
  }
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin$$ClearTarget
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__ClearTarget (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f4e920

void CustomLogic_CustomLogicCharacterBuiltin__ClearTarget
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Controllers_BaseAIController_o *__this_00;
  
  __this_00 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__this,(MethodInfo *)0x0);
  if (__this_00 != (Controllers_BaseAIController_o *)0x0) {
    Controllers_BaseAIController__ClearTarget(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin$$GetNearestEnemy
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin__GetNearestEnemy (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f4ec40

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin__GetNearestEnemy
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Controllers_BaseAIController_o *__this_00;
  Characters_ITargetable_o *target;
  Il2CppObject *pIVar1;
  
  __this_00 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__this,(MethodInfo *)0x0);
  if (__this_00 != (Controllers_BaseAIController_o *)0x0) {
    target = Controllers_BaseAIController__GetNearestEnemy(__this_00,(MethodInfo *)0x0);
    pIVar1 = CustomLogic_CustomLogicCharacterBuiltin__WrapTarget(target,(MethodInfo *)0x0);
    return pIVar1;
  }
  pIVar1 = CustomLogic_CustomLogicCharacterBuiltin__WrapTarget
                     ((Characters_ITargetable_o *)0x0,(MethodInfo *)0x0);
  return pIVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin$$TargetNearestEnemy
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__TargetNearestEnemy (CustomLogic_CustomLogicCharacterBuiltin_o* __this, float focusDuration, const MethodInfo* method);
// 0x181f4f600

void CustomLogic_CustomLogicCharacterBuiltin__TargetNearestEnemy
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,float focusDuration,MethodInfo *method)

{
  Controllers_BaseAIController_o *__this_00;
  
  __this_00 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__this,(MethodInfo *)0x0);
  if (__this_00 != (Controllers_BaseAIController_o *)0x0) {
    Controllers_BaseAIController__TargetNearestEnemy(__this_00,focusDuration,(MethodInfo *)0x0);
  }
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin$$MoveTo
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__MoveTo (CustomLogic_CustomLogicCharacterBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* position, float range, bool ignoreEnemies, const MethodInfo* method);
// 0x181f4efe0

void CustomLogic_CustomLogicCharacterBuiltin__MoveTo
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *position,float range,bool ignoreEnemies,
               MethodInfo *method)

{
  byte bVar1;
  Characters_Horse_o *__this_00;
  bool bVar2;
  Controllers_BaseAIController_o *__this_01;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184345556 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Horse);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184345556 = '\x01';
  }
  __this_00 = (Characters_Horse_o *)(__this->fields).Character;
  if (__this_00 != (Characters_Horse_o *)0x0) {
    bVar1 = (TypeInfo_Characters_Horse->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Horse
       )) {
      if (position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
        local_28[0].x = (position->fields).Value.fields.x;
        local_28[0].y = (position->fields).Value.fields.y;
        local_28[0].z = (position->fields).Value.fields.z;
        Characters_Horse__MoveTo(__this_00,(UnityEngine_Vector3_o *)local_28,range,(MethodInfo *)0x0);
        return;
      }
      goto label_181f4f10f;
    }
  }
  __this_01 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__this,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if ((position == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
       (__this_01 == (Controllers_BaseAIController_o *)0x0)) {
label_181f4f10f:
      ThrowNullReferenceException();
    }
    local_28[0].x = (position->fields).Value.fields.x;
    local_28[0].y = (position->fields).Value.fields.y;
    local_28[0].z = (position->fields).Value.fields.z;
    Controllers_BaseAIController__MoveTo
              (__this_01,(UnityEngine_Vector3_o *)local_28,range,ignoreEnemies,(MethodInfo *)0x0);
  }
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin$$MoveToTarget
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__MoveToTarget (CustomLogic_CustomLogicCharacterBuiltin_o* __this, Il2CppObject* target, float range, bool ignoreEnemies, const MethodInfo* method);
// 0x181f4ee90

void CustomLogic_CustomLogicCharacterBuiltin__MoveToTarget
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,Il2CppObject *target,float range,
               bool ignoreEnemies,MethodInfo *method)

{
  byte bVar1;
  Characters_Horse_o *__this_00;
  bool bVar2;
  Il2CppClass *target_00;
  Controllers_BaseAIController_o *__this_01;
  Characters_ITargetable_o *target_01;
  
  if (Il2CppMethodInitialized_184345557 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Horse);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184345557 = '\x01';
  }
  __this_00 = (Characters_Horse_o *)(__this->fields).Character;
  if (__this_00 == (Characters_Horse_o *)0x0) {
label_181f4ef7b:
    __this_01 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__this,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      target_01 = CustomLogic_CustomLogicCharacterBuiltin__UnwrapTarget(target,(MethodInfo *)0x0);
      if (__this_01 == (Controllers_BaseAIController_o *)0x0) {
        ThrowNullReferenceException();
      }
      Controllers_BaseAIController__MoveToTarget(__this_01,target_01,range,ignoreEnemies,(MethodInfo *)0x0);
    }
    return;
  }
  bVar1 = (TypeInfo_Characters_Horse->_2).typeHierarchyDepth;
  if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Horse))
  goto label_181f4ef7b;
  if (target != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin->_2).typeHierarchyDepth;
    if ((bVar1 <= (target->klass->_2).typeHierarchyDepth) &&
       ((target->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin)) {
      target_00 = target[3].klass;
      goto label_181f4ef55;
    }
  }
  target_00 = (Il2CppClass *)0x0;
label_181f4ef55:
  Characters_Horse__ComeTo(__this_00,(Characters_BaseCharacter_o *)target_00,range,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin$$Idle
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__Idle (CustomLogic_CustomLogicCharacterBuiltin_o* __this, float time, const MethodInfo* method);
// 0x181f4ecc0

void CustomLogic_CustomLogicCharacterBuiltin__Idle
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,float time,MethodInfo *method)

{
  byte bVar1;
  Characters_Horse_o *__this_00;
  Controllers_BaseAIController_o *__this_01;
  
  if (Il2CppMethodInitialized_184345558 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Horse);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_184345558 = '\x01';
  }
  __this_00 = (Characters_Horse_o *)(__this->fields).Character;
  if (__this_00 != (Characters_Horse_o *)0x0) {
    bVar1 = (TypeInfo_Characters_Horse->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
       ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Horse
       )) {
      Characters_Horse__Stay(__this_00,(MethodInfo *)0x0);
      return;
    }
  }
  if (time == -1.0) {
    if (__this_00 != (Characters_Horse_o *)0x0) {
      bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
      if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
         ((__this_00->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_Human)) {
        time = 0.0;
        goto label_181f4ed87;
      }
    }
    time = INFINITY;
  }
label_181f4ed87:
  __this_01 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__this,(MethodInfo *)0x0);
  if (__this_01 != (Controllers_BaseAIController_o *)0x0) {
    Controllers_BaseAIController__IdleFor(__this_01,time,(MethodInfo *)0x0);
  }
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin$$UnwrapTarget
// il2cpp: Characters_ITargetable_o* CustomLogic_CustomLogicCharacterBuiltin__UnwrapTarget (Il2CppObject* target, const MethodInfo* method);
// 0x181f4f630

Characters_ITargetable_o *
CustomLogic_CustomLogicCharacterBuiltin__UnwrapTarget(Il2CppObject *target,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  System_ArgumentException_o *__this;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_184345559 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin);
    Il2CppMethodInitialized_184345559 = '\x01';
  }
  if (target == (Il2CppObject *)0x0) {
    return (Characters_ITargetable_o *)0x0;
  }
  pIVar2 = target->klass;
  bVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin->_2).typeHierarchyDepth;
  if ((bVar1 <= (pIVar2->_2).typeHierarchyDepth) &&
     ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
      (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin)) {
    return (Characters_ITargetable_o *)target[3].klass;
  }
  bVar1 = (TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin->_2).typeHierarchyDepth;
  if ((bVar1 <= (pIVar2->_2).typeHierarchyDepth) &&
     ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
      (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin)) {
    return target[3].monitor;
  }
  pIVar2 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar2);
  message = il2cpp_codegen_get_runtime_metadata(&"Target must be a Character, MapTargetable, or null.");
  System_ArgumentException___ctor_1a77cc0(__this,message,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_UnwrapTarget);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicCharacterBuiltin$$WrapTarget
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin__WrapTarget (Characters_ITargetable_o* target, const MethodInfo* method);
// 0x181f4f720

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin__WrapTarget(Characters_ITargetable_o *target,MethodInfo *method)

{
  byte bVar1;
  Characters_ITargetable_c *pCVar2;
  UnityEngine_GameObject_o *gameObject;
  CustomLogic_CustomLogicMapTargetableBuiltin_o *__this;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar3;
  
  if (Il2CppMethodInitialized_18434555a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTargetable);
    Il2CppMethodInitialized_18434555a = '\x01';
  }
  if (target != (Characters_ITargetable_o *)0x0) {
    pCVar2 = target->klass;
    bVar1 = (TypeInfo_Map_MapTargetable->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar2->_2).typeHierarchyDepth) &&
       ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Map_MapTargetable)) {
      gameObject = Map_MapTargetable__get_GameObject((Map_MapTargetable_o *)target,(MethodInfo *)0x0);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin);
      CustomLogic_CustomLogicMapTargetableBuiltin___ctor
                (__this,gameObject,(Map_MapTargetable_o *)target,(MethodInfo *)0x0);
      return (Il2CppObject *)__this;
    }
    bVar1 = (TypeInfo_Characters_BaseCharacter->_2).typeHierarchyDepth;
    if ((bVar1 <= (pCVar2->_2).typeHierarchyDepth) &&
       ((pCVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_BaseCharacter))
    {
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pCVar3 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin
                         ((Characters_BaseCharacter_o *)target,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar3;
    }
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicCharacterBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin___ctor (CustomLogic_CustomLogicCharacterBuiltin_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x181f4fa10

void CustomLogic_CustomLogicCharacterBuiltin___ctor
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,Characters_BaseCharacter_o *character,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  Il2CppObject *value;
  undefined1 local_res8 [8];
  
  if (Il2CppMethodInitialized_18434555b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"IsCharacter");
    Il2CppMethodInitialized_18434555b = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Character = character;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Character,character);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
  local_res8[0] = 1;
  value = il2cpp_value_box(g_data_184354de8,local_res8);
  if (__this_00 != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___set_Item
              (__this_00,(Il2CppObject *)"IsCharacter",value,
               (MethodInfo_147A7F0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Name
// il2cpp: System_String_o* CustomLogic_CustomLogicCharacterBuiltin__get_Name (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f4ff70

System_String_o *
CustomLogic_CustomLogicCharacterBuiltin__get_Name
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    return (pCVar1->fields).RichTextName;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_Name
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_Name (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x181f50bf0

void CustomLogic_CustomLogicCharacterBuiltin__set_Name
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this_00;
  
  __this_00 = (__this->fields).Character;
  if (__this_00 != (Characters_BaseCharacter_o *)0x0) {
    Characters_BaseCharacter__set_Name(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$SetDisplayName
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__SetDisplayName (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* name, bool showTag, const MethodInfo* method);
// 0x181f4f440

void CustomLogic_CustomLogicCharacterBuiltin__SetDisplayName
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *name,bool showTag,
               MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (name == (System_String_o *)0x0) {
    name = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    Characters_BaseCharacter__set_Name(pCVar1,name,(MethodInfo *)0x0);
    pCVar1 = (__this->fields).Character;
    if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
      if ((pCVar1->fields).AI != false) {
        if (!showTag) {
          (pCVar1->fields).HasExplicitNameTag = false;
          return;
        }
        bVar2 = System_String__IsNullOrWhiteSpace((pCVar1->fields).VisibleName,(MethodInfo *)0x0);
        (pCVar1->fields).HasExplicitNameTag = !bVar2;
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Guild
// il2cpp: System_String_o* CustomLogic_CustomLogicCharacterBuiltin__get_Guild (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f4fd40

System_String_o *
CustomLogic_CustomLogicCharacterBuiltin__get_Guild
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    return (pCVar1->fields).Guild;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_Guild
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_Guild (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x181f50a70

void CustomLogic_CustomLogicCharacterBuiltin__set_Guild
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    (pCVar1->fields).Guild = value;
    Il2CppCodeGenWriteBarrier(&(pCVar1->fields).Guild,value);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Player
// il2cpp: CustomLogic_CustomLogicPlayerBuiltin_o* CustomLogic_CustomLogicCharacterBuiltin__get_Player (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f4ff90

CustomLogic_CustomLogicPlayerBuiltin_o *
CustomLogic_CustomLogicCharacterBuiltin__get_Player
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  Photon_Realtime_Player_o *player;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_18434555c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    Il2CppMethodInitialized_18434555c = '\x01';
  }
  pCVar1 = (__this->fields).Character;
  if (((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
      (pUVar2 = (pCVar1->fields).Cache, pUVar2 != (Utility_BaseComponentCache_o *)0x0)) &&
     (pPVar3 = (pUVar2->fields).PhotonView, pPVar3 != (Photon_Pun_PhotonView_o *)0x0)) {
    player = (pPVar3->fields)._Owner_k__BackingField;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_00,player,(MethodInfo *)0x0);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_IsAI
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__get_IsAI (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f4fdb0

bool CustomLogic_CustomLogicCharacterBuiltin__get_IsAI
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    return (pCVar1->fields).AI;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_IsAlive
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__get_IsAlive (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f4fdd0

bool CustomLogic_CustomLogicCharacterBuiltin__get_IsAlive
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_18434555d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434555d = '\x01';
  }
  pCVar1 = (__this->fields).Character;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pCVar1 = (__this->fields).Character;
    if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
      return (pCVar1->fields).Dead == false;
    }
    ThrowNullReferenceException();
  }
  return false;
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_ViewID
// il2cpp: int32_t CustomLogic_CustomLogicCharacterBuiltin__get_ViewID (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f50860

int32_t CustomLogic_CustomLogicCharacterBuiltin__get_ViewID
                  (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  
  pCVar1 = (__this->fields).Character;
  if (((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
      (pUVar2 = (pCVar1->fields).Cache, pUVar2 != (Utility_BaseComponentCache_o *)0x0)) &&
     (pPVar3 = (pUVar2->fields).PhotonView, pPVar3 != (Photon_Pun_PhotonView_o *)0x0)) {
    return (pPVar3->fields).viewIdField;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_IsMine
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__get_IsMine (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f4fe80

bool CustomLogic_CustomLogicCharacterBuiltin__get_IsMine
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    return bVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_IsMainCharacter
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__get_IsMainCharacter (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f4fe60

bool CustomLogic_CustomLogicCharacterBuiltin__get_IsMainCharacter
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).Character;
  if (__this_00 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = Characters_BaseCharacter__IsMainCharacter(__this_00,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Transform
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicCharacterBuiltin__get_Transform (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f50690

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicCharacterBuiltin__get_Transform
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_18434555e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    Il2CppMethodInitialized_18434555e = '\x01';
  }
  pCVar1 = (__this->fields).Character;
  if ((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
     (pUVar2 = (pCVar1->fields).Cache, pUVar2 != (Utility_BaseComponentCache_o *)0x0)) {
    transform = (pUVar2->fields).Transform;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    CustomLogic_CustomLogicTransformBuiltin___ctor(__this_00,transform,(MethodInfo *)0x0);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Position
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCharacterBuiltin__get_Position (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f50010

CustomLogic_CustomLogicVector3Builtin_o*
CustomLogic_CustomLogicCharacterBuiltin__get_Position(CustomLogic_CustomLogicCharacterBuiltin_o* __this, MethodInfo* method)

{
  undefined8 uVar1;
  float fVar2;
  Characters_BaseCharacter_o *pCVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o *pUVar5;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_18434555f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_18434555f = '\x01';
  }
  pCVar3 = (__this->fields).Character;
  if (((pCVar3 != (Characters_BaseCharacter_o *)0x0) &&
      (pUVar4 = (pCVar3->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0)) &&
     (__this_00 = (pUVar4->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    pUVar5 = UnityEngine_Transform__get_position
                       ((UnityEngine_Vector3_o *)local_28,__this_00,(MethodInfo *)0x0);
    uVar1._0_4_ = (pUVar5->fields).x;
    uVar1._4_4_ = (pUVar5->fields).y;
    fVar2 = (pUVar5->fields).z;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    local_28[0]._0_8_ = uVar1;
    local_28[0].z = fVar2;
    CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
              (__this_01,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
    return __this_01;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_Position
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_Position (CustomLogic_CustomLogicCharacterBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181f50c10

void CustomLogic_CustomLogicCharacterBuiltin__set_Position
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Rigidbody_o *__this_01;
  bool bVar3;
  UnityEngine_Vector3_Fields local_18;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar3) {
      return;
    }
    pCVar1 = (__this->fields).Character;
    if ((((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
         (pUVar2 = (pCVar1->fields).Cache, pUVar2 != (Utility_BaseComponentCache_o *)0x0)) &&
        (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
       (__this_00 = (pUVar2->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
      local_18.x = (value->fields).Value.fields.x;
      local_18.y = (value->fields).Value.fields.y;
      local_18.z = (value->fields).Value.fields.z;
      UnityEngine_Transform__set_position(__this_00,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
      pCVar1 = (__this->fields).Character;
      if (((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
          (pUVar2 = (pCVar1->fields).Cache, pUVar2 != (Utility_BaseComponentCache_o *)0x0)) &&
         (__this_01 = (pUVar2->fields).Rigidbody, __this_01 != (UnityEngine_Rigidbody_o *)0x0)) {
        local_18.x = (value->fields).Value.fields.x;
        local_18.y = (value->fields).Value.fields.y;
        local_18.z = (value->fields).Value.fields.z;
        UnityEngine_Rigidbody__set_position(__this_01,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Rotation
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCharacterBuiltin__get_Rotation (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f50340

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCharacterBuiltin__get_Rotation
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  float fVar4;
  Characters_BaseCharacter_o *pCVar5;
  Utility_BaseComponentCache_o *pUVar6;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Quaternion_o *pUVar7;
  UnityEngine_Vector3_o *pUVar8;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Quaternion_o local_38;
  UnityEngine_Quaternion_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184345560 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_184345560 = '\x01';
  }
  pCVar5 = (__this->fields).Character;
  local_28[0].x = 0.0;
  local_28[0].y = 0.0;
  local_28[0].z = 0.0;
  local_28[0].w = 0.0;
  if (((pCVar5 != (Characters_BaseCharacter_o *)0x0) &&
      (pUVar6 = (pCVar5->fields).Cache, pUVar6 != (Utility_BaseComponentCache_o *)0x0)) &&
     (__this_00 = (pUVar6->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    pUVar7 = UnityEngine_Transform__get_rotation(&local_38,__this_00,(MethodInfo *)0x0);
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
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    local_48._0_8_ = uVar2;
    local_48.z = fVar4;
    CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
              (__this_01,(UnityEngine_Vector3_o *)&local_48,(MethodInfo *)0x0);
    return __this_01;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_Rotation
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_Rotation (CustomLogic_CustomLogicCharacterBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181f50dd0

void CustomLogic_CustomLogicCharacterBuiltin__set_Rotation
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Characters_BaseCharacter_o *pCVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  bool bVar5;
  UnityEngine_Quaternion_o *pUVar6;
  UnityEngine_Quaternion_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  pCVar3 = (__this->fields).Character;
  if (pCVar3 != (Characters_BaseCharacter_o *)0x0) {
    bVar5 = (*(pCVar3->klass->vtable)._74_IsMine.methodPtr)(pCVar3,(pCVar3->klass->vtable)._74_IsMine.method);
    if (!bVar5) {
      return;
    }
    pCVar3 = (__this->fields).Character;
    if (((pCVar3 != (Characters_BaseCharacter_o *)0x0) &&
        (pUVar4 = (pCVar3->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0)) &&
       (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
      uVar1 = (value->fields).Value.fields.x;
      uVar2 = (value->fields).Value.fields.y;
      __this_00 = (pUVar4->fields).Transform;
      local_28.y = (float)uVar2 * 0.017453292;
      local_28.x = (float)uVar1 * 0.017453292;
      local_28.z = (value->fields).Value.fields.z * 0.017453292;
      pUVar6 = UnityEngine_Quaternion__Internal_FromEulerRad
                         (&local_18,(UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        local_28.x = (pUVar6->fields).x;
        local_28.y = (pUVar6->fields).y;
        local_28.z = (pUVar6->fields).z;
        local_28.w = (pUVar6->fields).w;
        UnityEngine_Transform__set_rotation(__this_00,(UnityEngine_Quaternion_o *)&local_28,(MethodInfo *)0x0)
        ;
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_QuaternionRotation
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicCharacterBuiltin__get_QuaternionRotation (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f500b0

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicCharacterBuiltin__get_QuaternionRotation
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  undefined8 uVar3;
  undefined8 uVar4;
  UnityEngine_Quaternion_o *pUVar5;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this_01;
  UnityEngine_Quaternion_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184345561 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    Il2CppMethodInitialized_184345561 = '\x01';
  }
  pCVar1 = (__this->fields).Character;
  if (((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
      (pUVar2 = (pCVar1->fields).Cache, pUVar2 != (Utility_BaseComponentCache_o *)0x0)) &&
     (__this_00 = (pUVar2->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    pUVar5 = UnityEngine_Transform__get_rotation
                       ((UnityEngine_Quaternion_o *)local_28,__this_00,(MethodInfo *)0x0);
    uVar3._0_4_ = (pUVar5->fields).x;
    uVar3._4_4_ = (pUVar5->fields).y;
    uVar4._0_4_ = (pUVar5->fields).z;
    uVar4._4_4_ = (pUVar5->fields).w;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    local_28[0]._0_8_ = uVar3;
    local_28[0]._8_8_ = uVar4;
    CustomLogic_CustomLogicQuaternionBuiltin___ctor_1ed2b60
              (__this_01,(UnityEngine_Quaternion_o *)local_28,(MethodInfo *)0x0);
    return __this_01;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_QuaternionRotation
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_QuaternionRotation (CustomLogic_CustomLogicCharacterBuiltin_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* value, const MethodInfo* method);
// 0x181f50cd0

void CustomLogic_CustomLogicCharacterBuiltin__set_QuaternionRotation
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,
               CustomLogic_CustomLogicQuaternionBuiltin_o *value,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  bool bVar3;
  UnityEngine_Quaternion_Fields local_18;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar3) {
      pCVar1 = (__this->fields).Character;
      if ((((pCVar1 == (Characters_BaseCharacter_o *)0x0) ||
           (pUVar2 = (pCVar1->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) ||
          (value == (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) ||
         (__this_00 = (pUVar2->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0))
      goto label_181f50d3e;
      local_18.x = (value->fields).Value.fields.x;
      local_18.y = (value->fields).Value.fields.y;
      local_18.z = (value->fields).Value.fields.z;
      local_18.w = (value->fields).Value.fields.w;
      UnityEngine_Transform__set_rotation(__this_00,(UnityEngine_Quaternion_o *)&local_18,(MethodInfo *)0x0);
    }
    return;
  }
label_181f50d3e:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Velocity
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCharacterBuiltin__get_Velocity (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f507d0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCharacterBuiltin__get_Velocity
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Characters_BaseCharacter_o *__this_00;
  UnityEngine_Vector3_o *pUVar3;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184345562 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_184345562 = '\x01';
  }
  __this_00 = (__this->fields).Character;
  if (__this_00 != (Characters_BaseCharacter_o *)0x0) {
    pUVar3 = Characters_BaseCharacter__GetVelocity
                       ((UnityEngine_Vector3_o *)local_28,__this_00,(MethodInfo *)0x0);
    uVar1._0_4_ = (pUVar3->fields).x;
    uVar1._4_4_ = (pUVar3->fields).y;
    fVar2 = (pUVar3->fields).z;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    local_28[0]._0_8_ = uVar1;
    local_28[0].z = fVar2;
    CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
              (__this_01,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
    return __this_01;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_Velocity
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_Velocity (CustomLogic_CustomLogicCharacterBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181f51100

void CustomLogic_CustomLogicCharacterBuiltin__set_Velocity
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Rigidbody_o *__this_00;
  bool bVar3;
  UnityEngine_Vector3_Fields local_18;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar3) {
      return;
    }
    pCVar1 = (__this->fields).Character;
    if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
      Characters_BaseCharacter__SetKinematic(pCVar1,false,1.0,(MethodInfo *)0x0);
      pCVar1 = (__this->fields).Character;
      if ((((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
           (pUVar2 = (pCVar1->fields).Cache, pUVar2 != (Utility_BaseComponentCache_o *)0x0)) &&
          (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
         (__this_00 = (pUVar2->fields).Rigidbody, __this_00 != (UnityEngine_Rigidbody_o *)0x0)) {
        local_18.x = (value->fields).Value.fields.x;
        local_18.y = (value->fields).Value.fields.y;
        local_18.z = (value->fields).Value.fields.z;
        UnityEngine_Rigidbody__set_linearVelocity
                  (__this_00,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Forward
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCharacterBuiltin__get_Forward (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f4fc80

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCharacterBuiltin__get_Forward
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Characters_BaseCharacter_o *pCVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o *pUVar5;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184345563 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_184345563 = '\x01';
  }
  pCVar3 = (__this->fields).Character;
  if (((pCVar3 != (Characters_BaseCharacter_o *)0x0) &&
      (pUVar4 = (pCVar3->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0)) &&
     (__this_00 = (pUVar4->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    pUVar5 = UnityEngine_Transform__get_forward((UnityEngine_Vector3_o *)local_28,__this_00,(MethodInfo *)0x0)
    ;
    uVar1._0_4_ = (pUVar5->fields).x;
    uVar1._4_4_ = (pUVar5->fields).y;
    fVar2 = (pUVar5->fields).z;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    local_28[0]._0_8_ = uVar1;
    local_28[0].z = fVar2;
    CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
              (__this_01,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
    return __this_01;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_Forward
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_Forward (CustomLogic_CustomLogicCharacterBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181f509f0

void CustomLogic_CustomLogicCharacterBuiltin__set_Forward
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  bool bVar3;
  UnityEngine_Vector3_Fields local_18;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar3) {
      pCVar1 = (__this->fields).Character;
      if ((((pCVar1 == (Characters_BaseCharacter_o *)0x0) ||
           (pUVar2 = (pCVar1->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) ||
          (value == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) ||
         (__this_00 = (pUVar2->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0))
      goto label_181f50a67;
      local_18.x = (value->fields).Value.fields.x;
      local_18.y = (value->fields).Value.fields.y;
      local_18.z = (value->fields).Value.fields.z;
      UnityEngine_Transform__set_forward(__this_00,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    }
    return;
  }
label_181f50a67:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Right
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCharacterBuiltin__get_Right (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f50140

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCharacterBuiltin__get_Right
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Characters_BaseCharacter_o *pCVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o *pUVar5;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184345564 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_184345564 = '\x01';
  }
  pCVar3 = (__this->fields).Character;
  if (((pCVar3 != (Characters_BaseCharacter_o *)0x0) &&
      (pUVar4 = (pCVar3->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0)) &&
     (__this_00 = (pUVar4->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    pUVar5 = UnityEngine_Transform__get_right((UnityEngine_Vector3_o *)local_28,__this_00,(MethodInfo *)0x0);
    uVar1._0_4_ = (pUVar5->fields).x;
    uVar1._4_4_ = (pUVar5->fields).y;
    fVar2 = (pUVar5->fields).z;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    local_28[0]._0_8_ = uVar1;
    local_28[0].z = fVar2;
    CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
              (__this_01,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
    return __this_01;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_Right
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_Right (CustomLogic_CustomLogicCharacterBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181f50d50

void CustomLogic_CustomLogicCharacterBuiltin__set_Right
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  bool bVar3;
  UnityEngine_Vector3_Fields local_18;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar3) {
      pCVar1 = (__this->fields).Character;
      if ((((pCVar1 == (Characters_BaseCharacter_o *)0x0) ||
           (pUVar2 = (pCVar1->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) ||
          (value == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) ||
         (__this_00 = (pUVar2->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0))
      goto label_181f50dc7;
      local_18.x = (value->fields).Value.fields.x;
      local_18.y = (value->fields).Value.fields.y;
      local_18.z = (value->fields).Value.fields.z;
      UnityEngine_Transform__set_right(__this_00,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    }
    return;
  }
label_181f50dc7:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Up
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCharacterBuiltin__get_Up (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f50710

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCharacterBuiltin__get_Up
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Characters_BaseCharacter_o *pCVar3;
  Utility_BaseComponentCache_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o *pUVar5;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184345565 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_184345565 = '\x01';
  }
  pCVar3 = (__this->fields).Character;
  if (((pCVar3 != (Characters_BaseCharacter_o *)0x0) &&
      (pUVar4 = (pCVar3->fields).Cache, pUVar4 != (Utility_BaseComponentCache_o *)0x0)) &&
     (__this_00 = (pUVar4->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
    pUVar5 = UnityEngine_Transform__get_up((UnityEngine_Vector3_o *)local_28,__this_00,(MethodInfo *)0x0);
    uVar1._0_4_ = (pUVar5->fields).x;
    uVar1._4_4_ = (pUVar5->fields).y;
    fVar2 = (pUVar5->fields).z;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    local_28[0]._0_8_ = uVar1;
    local_28[0].z = fVar2;
    CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
              (__this_01,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
    return __this_01;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_Up
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_Up (CustomLogic_CustomLogicCharacterBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181f50ff0

void CustomLogic_CustomLogicCharacterBuiltin__set_Up
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  bool bVar3;
  UnityEngine_Vector3_Fields local_18;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar3) {
      pCVar1 = (__this->fields).Character;
      if ((((pCVar1 == (Characters_BaseCharacter_o *)0x0) ||
           (pUVar2 = (pCVar1->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) ||
          (value == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) ||
         (__this_00 = (pUVar2->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0))
      goto label_181f51067;
      local_18.x = (value->fields).Value.fields.x;
      local_18.y = (value->fields).Value.fields.y;
      local_18.z = (value->fields).Value.fields.z;
      UnityEngine_Transform__set_up(__this_00,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
    }
    return;
  }
label_181f51067:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_HasTargetDirection
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__get_HasTargetDirection (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f4fd60

bool CustomLogic_CustomLogicCharacterBuiltin__get_HasTargetDirection
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    return (pCVar1->fields).HasDirection;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_TargetDirection
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCharacterBuiltin__get_TargetDirection (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f505d0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCharacterBuiltin__get_TargetDirection
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Characters_BaseCharacter_o *pCVar3;
  UnityEngine_Vector3_o *pUVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_184345566 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_184345566 = '\x01';
  }
  pCVar3 = (__this->fields).Character;
  if (pCVar3 != (Characters_BaseCharacter_o *)0x0) {
    pUVar4 = (*(pCVar3->klass->vtable)._106_GetTargetDirection.methodPtr)
                       ((UnityEngine_Vector3_o *)local_28,pCVar3,
                        (pCVar3->klass->vtable)._106_GetTargetDirection.method);
    uVar1._0_4_ = (pUVar4->fields).x;
    uVar1._4_4_ = (pUVar4->fields).y;
    fVar2 = (pUVar4->fields).z;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    local_28[0]._0_8_ = uVar1;
    local_28[0].z = fVar2;
    CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
              (__this_00,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
    return __this_00;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_TargetDirection
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_TargetDirection (CustomLogic_CustomLogicCharacterBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181f50e90

void CustomLogic_CustomLogicCharacterBuiltin__set_TargetDirection
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  Characters_BaseCharacter_o *pCVar3;
  UnityEngine_Vector3_StaticFields *pUVar4;
  UnityEngine_Quaternion_o *pUVar5;
  UnityEngine_Vector3_o *pUVar6;
  UnityEngine_Vector3_Fields local_48;
  UnityEngine_Vector3_Fields local_38;
  UnityEngine_Quaternion_Fields local_28;
  UnityEngine_Quaternion_o local_18;
  
  local_28.x = 0.0;
  local_28.y = 0.0;
  local_28.z = 0.0;
  local_28.w = 0.0;
  if (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    local_38.z = (value->fields).Value.fields.z;
    local_38.x = (value->fields).Value.fields.x;
    local_38.y = (value->fields).Value.fields.y;
    pCVar3 = (__this->fields).Character;
    local_48.x = 0.0;
    local_48.y = 0.0;
    local_48.z = 0.0;
    if (Il2CppMethodInitialized_18433de5c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_18433de5c = '\x01';
    }
    pUVar4 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_48.x = (pUVar4->upVector).fields.x;
    local_48.y = (pUVar4->upVector).fields.y;
    local_48.z = (pUVar4->upVector).fields.z;
    pUVar5 = UnityEngine_Quaternion__Internal_LookRotation
                       (&local_18,(UnityEngine_Vector3_o *)&local_38,(UnityEngine_Vector3_o *)&local_48,
                        (MethodInfo *)0x0);
    local_28.x = (pUVar5->fields).x;
    local_28.y = (pUVar5->fields).y;
    local_28.z = (pUVar5->fields).z;
    local_28.w = (pUVar5->fields).w;
    pUVar6 = UnityEngine_Quaternion__Internal_ToEulerRad
                       ((UnityEngine_Vector3_o *)&local_48,(UnityEngine_Quaternion_o *)&local_28,
                        (MethodInfo *)0x0);
    uVar1 = (pUVar6->fields).x;
    uVar2 = (pUVar6->fields).y;
    local_38.y = (float)uVar2 * 57.29578;
    local_38.x = (float)uVar1 * 57.29578;
    local_38.z = (pUVar6->fields).z * 57.29578;
    pUVar6 = UnityEngine_Quaternion__Internal_MakePositive
                       ((UnityEngine_Vector3_o *)&local_48,(UnityEngine_Vector3_o *)&local_38,
                        (MethodInfo *)0x0);
    if (pCVar3 != (Characters_BaseCharacter_o *)0x0) {
      (pCVar3->fields).TargetAngle = (pUVar6->fields).y;
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Team
// il2cpp: System_String_o* CustomLogic_CustomLogicCharacterBuiltin__get_Team (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f50670

System_String_o *
CustomLogic_CustomLogicCharacterBuiltin__get_Team
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    return (pCVar1->fields).Team;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_Team
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_Team (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x181f50f90

void CustomLogic_CustomLogicCharacterBuiltin__set_Team
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_181f50fdc;
      Characters_BaseCharacter__SetTeam(pCVar1,value,(MethodInfo *)0x0);
    }
    return;
  }
label_181f50fdc:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Health
// il2cpp: float CustomLogic_CustomLogicCharacterBuiltin__get_Health (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f4fd80

float CustomLogic_CustomLogicCharacterBuiltin__get_Health
                (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    return (float)(pCVar1->fields).CurrentHealth;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_Health
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_Health (CustomLogic_CustomLogicCharacterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f50aa0

void CustomLogic_CustomLogicCharacterBuiltin__set_Health
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_181f50aee;
      Characters_BaseCharacter__SetCurrentHealth(pCVar1,(int)value,(MethodInfo *)0x0);
    }
    return;
  }
label_181f50aee:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_MaxHealth
// il2cpp: float CustomLogic_CustomLogicCharacterBuiltin__get_MaxHealth (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f4ff40

float CustomLogic_CustomLogicCharacterBuiltin__get_MaxHealth
                (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    return (float)(pCVar1->fields).MaxHealth;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_MaxHealth
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_MaxHealth (CustomLogic_CustomLogicCharacterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f50b90

void CustomLogic_CustomLogicCharacterBuiltin__set_MaxHealth
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_181f50bde;
      Characters_BaseCharacter__SetMaxHealth(pCVar1,(int)value,(MethodInfo *)0x0);
    }
    return;
  }
label_181f50bde:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_CustomDamageEnabled
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__get_CustomDamageEnabled (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f4fc10

bool CustomLogic_CustomLogicCharacterBuiltin__get_CustomDamageEnabled
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    return (pCVar1->fields).CustomDamageEnabled;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_CustomDamageEnabled
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_CustomDamageEnabled (CustomLogic_CustomLogicCharacterBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f50920

void CustomLogic_CustomLogicCharacterBuiltin__set_CustomDamageEnabled
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,bool value,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_181f50965;
      (pCVar1->fields).CustomDamageEnabled = value;
    }
    return;
  }
label_181f50965:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_CustomDamage
// il2cpp: int32_t CustomLogic_CustomLogicCharacterBuiltin__get_CustomDamage (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f4fc30

int32_t CustomLogic_CustomLogicCharacterBuiltin__get_CustomDamage
                  (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    return (pCVar1->fields).CustomDamage;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_CustomDamage
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_CustomDamage (CustomLogic_CustomLogicCharacterBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181f50970

void CustomLogic_CustomLogicCharacterBuiltin__set_CustomDamage
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_181f509b3;
      (pCVar1->fields).CustomDamage = value;
    }
    return;
  }
label_181f509b3:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_CurrentAnimation
// il2cpp: System_String_o* CustomLogic_CustomLogicCharacterBuiltin__get_CurrentAnimation (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f4fbf0

System_String_o *
CustomLogic_CustomLogicCharacterBuiltin__get_CurrentAnimation
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this_00;
  System_String_o *pSVar1;
  
  __this_00 = (__this->fields).Character;
  if (__this_00 != (Characters_BaseCharacter_o *)0x0) {
    pSVar1 = Characters_BaseCharacter__GetCurrentAnimation(__this_00,(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Grounded
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__get_Grounded (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f4fd20

bool CustomLogic_CustomLogicCharacterBuiltin__get_Grounded
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    return (pCVar1->fields).Grounded;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Rigidbody
// il2cpp: CustomLogic_CustomLogicRigidbodyBuiltin_o* CustomLogic_CustomLogicCharacterBuiltin__get_Rigidbody (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f501e0

CustomLogic_CustomLogicRigidbodyBuiltin_o *
CustomLogic_CustomLogicCharacterBuiltin__get_Rigidbody
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  Utility_BaseComponentCache_o *pUVar3;
  UnityEngine_Component_o *pUVar4;
  CustomLogic_CustomLogicRigidbodyBuiltin_o *__this_00;
  UnityEngine_GameObject_o *value;
  
  if (Il2CppMethodInitialized_184345567 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin);
    Il2CppMethodInitialized_184345567 = '\x01';
  }
  pCVar2 = (__this->fields).Character;
  if ((pCVar2 != (Characters_BaseCharacter_o *)0x0) &&
     (pUVar3 = (pCVar2->fields).Cache, pUVar3 != (Utility_BaseComponentCache_o *)0x0)) {
    pUVar4 = (UnityEngine_Component_o *)(pUVar3->fields).Rigidbody;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin);
    if (Il2CppMethodInitialized_1843454ec == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rigidbody);
      Il2CppMethodInitialized_1843454ec = '\x01';
    }
    (__this_00->fields)._isGravityEnabled = true;
    CustomLogic_BuiltinComponentInstance___ctor
              ((CustomLogic_BuiltinComponentInstance_o *)__this_00,pUVar4,(MethodInfo *)0x0);
    (__this_00->fields).OwnerBuiltin = (CustomLogic_BuiltinClassInstance_o *)__this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).OwnerBuiltin,__this);
    if (pUVar4 != (UnityEngine_Component_o *)0x0) {
      value = UnityEngine_Component__get_gameObject(pUVar4,(MethodInfo *)0x0);
      (__this_00->fields).AttachedGameObject = value;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).AttachedGameObject,value);
      pUVar4 = (__this_00->fields).Component;
      if (pUVar4 == (UnityEngine_Component_o *)0x0) {
        (__this_00->fields).Value = (UnityEngine_Rigidbody_o *)0x0;
      }
      else {
        bVar1 = (TypeInfo_UnityEngine_Rigidbody->_2).typeHierarchyDepth;
        if (((pUVar4->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pUVar4->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_UnityEngine_Rigidbody)) {
          il2cpp_codegen_raise_invalid_cast_exception(pUVar4);
        }
        (__this_00->fields).Value = (UnityEngine_Rigidbody_o *)pUVar4;
        bVar1 = (TypeInfo_UnityEngine_Rigidbody->_2).typeHierarchyDepth;
        if (((pUVar4->klass->_2).typeHierarchyDepth < bVar1) ||
           ((pUVar4->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_UnityEngine_Rigidbody)) {
          il2cpp_codegen_raise_invalid_cast_exception(pUVar4);
        }
      }
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).Value,pUVar4);
      return __this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$GetKilled
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__GetKilled (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* killer, const MethodInfo* method);
// 0x181f4ec10

void CustomLogic_CustomLogicCharacterBuiltin__GetKilled
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *killer,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    (*(pCVar1->klass->vtable)._98_GetKilled.methodPtr)
              (pCVar1,killer,(pCVar1->klass->vtable)._98_GetKilled.method);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$GetDamaged
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__GetDamaged (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* killer, int32_t damage, const MethodInfo* method);
// 0x181f4ebe0

void CustomLogic_CustomLogicCharacterBuiltin__GetDamaged
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *killer,int32_t damage,
               MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    (*(pCVar1->klass->vtable)._97_GetDamaged.methodPtr)
              (pCVar1,killer,damage,(pCVar1->klass->vtable)._97_GetDamaged.method);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$Emote
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__Emote (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x181f4e950

void CustomLogic_CustomLogicCharacterBuiltin__Emote
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *emote,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_181f4e9ad;
      if ((pCVar1->fields).Dead == false) {
        (*(pCVar1->klass->vtable)._80_Emote.methodPtr)
                  (pCVar1,(System_Type_o *)emote,(pCVar1->klass->vtable)._80_Emote.method);
      }
    }
    return;
  }
label_181f4e9ad:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$PlayAnimation
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__PlayAnimation (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* animation, float fade, const MethodInfo* method);
// 0x181f4f1c0

void CustomLogic_CustomLogicCharacterBuiltin__PlayAnimation
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *animation,float fade,
               MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_181f4f22e;
      if ((pCVar1->fields).Dead == false) {
        Characters_BaseCharacter__CrossFadeIfNotPlaying(pCVar1,animation,fade,0.0,(MethodInfo *)0x0);
      }
    }
    return;
  }
label_181f4f22e:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$PlayAnimationAt
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__PlayAnimationAt (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* animation, float t, float fade, bool force, const MethodInfo* method);
// 0x181f4f120

void CustomLogic_CustomLogicCharacterBuiltin__PlayAnimationAt
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *animation,float t,
               float fade,bool force,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_181f4f1ac;
      if ((pCVar1->fields).Dead == false) {
        if (force) {
          Characters_BaseCharacter__CrossFade(pCVar1,animation,fade,t,(MethodInfo *)0x0);
        }
        else {
          Characters_BaseCharacter__CrossFadeIfNotPlaying(pCVar1,animation,fade,t,(MethodInfo *)0x0);
        }
      }
    }
    return;
  }
label_181f4f1ac:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$GetAnimationSpeed
// il2cpp: float CustomLogic_CustomLogicCharacterBuiltin__GetAnimationSpeed (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* animation, const MethodInfo* method);
// 0x181f4eb70

float CustomLogic_CustomLogicCharacterBuiltin__GetAnimationSpeed
                (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *animation,
                MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_181f4ebd7;
      if ((pCVar1->fields).Dead == false) {
        fVar3 = Characters_BaseCharacter__GetAnimationSpeed(pCVar1,animation,(MethodInfo *)0x0);
        return fVar3;
      }
    }
    return 1.0;
  }
label_181f4ebd7:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$SetAnimationSpeed
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__SetAnimationSpeed (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* animation, float speed, bool synced, const MethodInfo* method);
// 0x181f4f3b0

void CustomLogic_CustomLogicCharacterBuiltin__SetAnimationSpeed
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *animation,float speed,
               bool synced,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_181f4f42f;
      if ((pCVar1->fields).Dead == false) {
        if (synced) {
          Characters_BaseCharacter__SetAnimationSpeed(pCVar1,animation,speed,(MethodInfo *)0x0);
        }
        else {
          Characters_BaseCharacter__SetAnimationSpeedNonRPC(pCVar1,animation,speed,(MethodInfo *)0x0);
        }
      }
    }
    return;
  }
label_181f4f42f:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$IsPlayingAnimation
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__IsPlayingAnimation (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* animation, const MethodInfo* method);
// 0x181f4edb0

bool CustomLogic_CustomLogicCharacterBuiltin__IsPlayingAnimation
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *animation,
               MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Character;
  if ((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
     (__this_00 = (pCVar1->fields).Animation, __this_00 != (Characters_AnimationHandler_o *)0x0)) {
    bVar2 = Characters_AnimationHandler__IsPlaying(__this_00,animation,(MethodInfo *)0x0);
    return bVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$GetAnimationNormalizedTime
// il2cpp: float CustomLogic_CustomLogicCharacterBuiltin__GetAnimationNormalizedTime (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* animation, const MethodInfo* method);
// 0x181f4eb10

float CustomLogic_CustomLogicCharacterBuiltin__GetAnimationNormalizedTime
                (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *animation,
                MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Characters_AnimationHandler_o *pCVar2;
  bool bVar3;
  float fVar4;
  
  pCVar1 = (__this->fields).Character;
  if ((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
     (pCVar2 = (pCVar1->fields).Animation, pCVar2 != (Characters_AnimationHandler_o *)0x0)) {
    bVar3 = Characters_AnimationHandler__IsPlaying(pCVar2,animation,(MethodInfo *)0x0);
    if (!bVar3) {
      return 1.0;
    }
    pCVar1 = (__this->fields).Character;
    if ((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
       (pCVar2 = (pCVar1->fields).Animation, pCVar2 != (Characters_AnimationHandler_o *)0x0)) {
      fVar4 = Characters_AnimationHandler__GetCurrentNormalizedTime(pCVar2,(MethodInfo *)0x0);
      return fVar4;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$ForceAnimation
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__ForceAnimation (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* animation, float fade, const MethodInfo* method);
// 0x181f4ea60

void CustomLogic_CustomLogicCharacterBuiltin__ForceAnimation
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *animation,float fade,
               MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  MethodInfo *in_R8;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_181f4eacd;
      if ((pCVar1->fields).Dead == false) {
        (*(pCVar1->klass->vtable)._81_ForceAnimation.methodPtr)(pCVar1,(System_Type_o *)animation,in_R8);
      }
    }
    return;
  }
label_181f4eacd:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$GetAnimationLength
// il2cpp: float CustomLogic_CustomLogicCharacterBuiltin__GetAnimationLength (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* animation, const MethodInfo* method);
// 0x181f4eae0

float CustomLogic_CustomLogicCharacterBuiltin__GetAnimationLength
                (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *animation,
                MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  float fVar2;
  
  pCVar1 = (__this->fields).Character;
  if ((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
     (__this_00 = (pCVar1->fields).Animation, __this_00 != (Characters_AnimationHandler_o *)0x0)) {
    fVar2 = Characters_AnimationHandler__GetLength(__this_00,animation,(MethodInfo *)0x0);
    return fVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$IsPlayingSound
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__IsPlayingSound (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* sound, const MethodInfo* method);
// 0x181f4ede0

bool CustomLogic_CustomLogicCharacterBuiltin__IsPlayingSound
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *sound,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).Character;
  if (__this_00 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = Characters_BaseCharacter__IsPlayingSound(__this_00,sound,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$PlaySound
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__PlaySound (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* sound, bool local, const MethodInfo* method);
// 0x181f4f240

void CustomLogic_CustomLogicCharacterBuiltin__PlaySound
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *sound,bool local,
               MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  Photon_Pun_PhotonMessageInfo_o *pPVar3;
  Photon_Pun_PhotonMessageInfo_o local_48;
  Photon_Pun_PhotonMessageInfo_o local_28;
  
  if (Il2CppMethodInitialized_184345568 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_184345568 = '\x01';
  }
  pCVar1 = (__this->fields).Character;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_181f4f34b;
  if ((pCVar1->fields).Dead == false) {
    bVar2 = Characters_BaseCharacter__IsPlayingSound(pCVar1,sound,(MethodInfo *)0x0);
    if (!bVar2) {
      pCVar1 = (__this->fields).Character;
      if (local) {
        if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
        }
        pPVar3 = Utility_Util__CreateLocalPhotonInfo(&local_28,(MethodInfo *)0x0);
        if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_181f4f34b;
        local_48.fields.timeInt = (pPVar3->fields).timeInt;
        local_48.fields._4_4_ = *(undefined4 *)&(pPVar3->fields).field_0x4;
        local_48.fields.Sender._0_4_ = *(undefined4 *)&(pPVar3->fields).Sender;
        local_48.fields.Sender._4_4_ = *(undefined4 *)((longlong)&(pPVar3->fields).Sender + 4);
        local_48.fields.photonView = (pPVar3->fields).photonView;
        (*(pCVar1->klass->vtable)._86_PlaySoundRPC.methodPtr)
                  (pCVar1,sound,&local_48,(pCVar1->klass->vtable)._86_PlaySoundRPC.method);
      }
      else {
        if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
label_181f4f34b:
          ThrowNullReferenceException();
        }
        bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                          (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
        if (bVar2) {
          pCVar1 = (__this->fields).Character;
          if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_181f4f34b;
          Characters_BaseCharacter__PlaySound(pCVar1,sound,(MethodInfo *)0x0);
        }
      }
    }
  }
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin$$StopSound
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__StopSound (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* sound, const MethodInfo* method);
// 0x181f4f580

void CustomLogic_CustomLogicCharacterBuiltin__StopSound
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *sound,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_181f4f5ed;
      if ((pCVar1->fields).Dead == false) {
        bVar2 = Characters_BaseCharacter__IsPlayingSound(pCVar1,sound,(MethodInfo *)0x0);
        if (bVar2) {
          pCVar1 = (__this->fields).Character;
          if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_181f4f5ed;
          Characters_BaseCharacter__StopSound(pCVar1,sound,(MethodInfo *)0x0);
        }
      }
    }
    return;
  }
label_181f4f5ed:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$FadeSound
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__FadeSound (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* sound, float volume, float time, const MethodInfo* method);
// 0x181f4e9d0

void CustomLogic_CustomLogicCharacterBuiltin__FadeSound
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *sound,float volume,
               float time,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_181f4ea4b;
      if ((pCVar1->fields).Dead == false) {
        Characters_BaseCharacter__FadeSound(pCVar1,sound,volume,time,(MethodInfo *)0x0);
      }
    }
    return;
  }
label_181f4ea4b:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$LookAt
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__LookAt (CustomLogic_CustomLogicCharacterBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* position, const MethodInfo* method);
// 0x181f4ee00

void CustomLogic_CustomLogicCharacterBuiltin__LookAt
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *position,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  bool bVar3;
  UnityEngine_Vector3_Fields local_18;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar3) {
      pCVar1 = (__this->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_181f4ee7d;
      if ((pCVar1->fields).Dead == false) {
        pUVar2 = (pCVar1->fields).Cache;
        if (((pUVar2 == (Utility_BaseComponentCache_o *)0x0) ||
            (position == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) ||
           (__this_00 = (pUVar2->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0))
        goto label_181f4ee7d;
        local_18.x = (position->fields).Value.fields.x;
        local_18.y = (position->fields).Value.fields.y;
        local_18.z = (position->fields).Value.fields.z;
        UnityEngine_Transform__LookAt_2f599f0(__this_00,(UnityEngine_Vector3_o *)&local_18,(MethodInfo *)0x0);
      }
    }
    return;
  }
label_181f4ee7d:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$AddForce
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__AddForce (CustomLogic_CustomLogicCharacterBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* force, Il2CppObject* mode, const MethodInfo* method);
// 0x181f4e420

void CustomLogic_CustomLogicCharacterBuiltin__AddForce
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *force,Il2CppObject *mode,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  Il2CppType *handle;
  bool bVar3;
  int32_t *piVar4;
  System_Type_o *enumType;
  Il2CppObject *pIVar5;
  System_String_o *str0;
  System_String_o *pSVar6;
  Il2CppClass *pIVar7;
  System_ArgumentException_o *pSVar8;
  MethodInfo *pMVar9;
  UnityEngine_Rigidbody_o *__this_00;
  int32_t mode_00;
  int32_t local_res8 [2];
  int32_t local_38 [4];
  UnityEngine_Vector3_Fields local_28;
  
  if (Il2CppMethodInitialized_184345569 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_ForceMode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_ForceMode);
    Il2CppMethodInitialized_184345569 = '\x01';
  }
  pCVar1 = (__this->fields).Character;
  local_res8[0] = 0;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar3) {
      pCVar1 = (__this->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_181f4e645;
      Characters_BaseCharacter__SetKinematic(pCVar1,false,1.0,(MethodInfo *)0x0);
      if (mode == (Il2CppObject *)0x0) {
label_181f4e71d:
        pSVar6 = il2cpp_codegen_get_runtime_metadata(&"Invalid force mode: {0}");
        pSVar6 = System_String__Format(pSVar6,mode,(MethodInfo *)0x0);
        pIVar7 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
        pSVar8 = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar7);
        System_ArgumentException___ctor_1a77cc0(pSVar8,pSVar6,(MethodInfo *)0x0);
        pMVar9 = il2cpp_codegen_get_runtime_metadata
                           (&MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_AddForce);
        il2cpp_codegen_raise_exception((Il2CppObject *)pSVar8,pMVar9);
      }
      pIVar5 = (Il2CppObject *)0x0;
      if (mode->klass == g_data_184354e08) {
        pIVar5 = mode;
      }
      if (pIVar5 == (Il2CppObject *)0x0) {
        pSVar6 = (System_String_o *)0x0;
        if (mode->klass == g_data_184354e50) {
          pSVar6 = (System_String_o *)mode;
        }
        if (pSVar6 == (System_String_o *)0x0) goto label_181f4e71d;
        if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354e58);
        }
        bVar3 = System_Enum__TryParse_Int32Enum_
                          (pSVar6,local_res8,(MethodInfo_6B1BB0 *)MethodInfo_System_Enum_TryParse_ForceMode);
        if (!bVar3) {
          str0 = il2cpp_codegen_get_runtime_metadata(&"Unknown force mode: ");
          pSVar6 = System_String__Concat_1969e50(str0,pSVar6,(MethodInfo *)0x0);
          pIVar7 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
          pSVar8 = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar7);
          System_ArgumentException___ctor_1a77cc0(pSVar8,pSVar6,(MethodInfo *)0x0);
          pMVar9 = il2cpp_codegen_get_runtime_metadata
                             (&MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_AddForce);
          il2cpp_codegen_raise_exception((Il2CppObject *)pSVar8,pMVar9);
        }
        pCVar1 = (__this->fields).Character;
        if (((pCVar1 == (Characters_BaseCharacter_o *)0x0) ||
            (pUVar2 = (pCVar1->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) ||
           ((force == (CustomLogic_CustomLogicVector3Builtin_o *)0x0 ||
            (__this_00 = (pUVar2->fields).Rigidbody, __this_00 == (UnityEngine_Rigidbody_o *)0x0))))
        goto label_181f4e645;
        local_28.x = (force->fields).Value.fields.x;
        local_28.y = (force->fields).Value.fields.y;
        local_28.z = (force->fields).Value.fields.z;
        mode_00 = local_res8[0];
      }
      else {
        if ((mode->klass->_1).element_class != (g_data_184354e08->_1).element_class) {
          il2cpp_codegen_raise_invalid_cast_exception();
        }
        piVar4 = il2cpp_object_unbox(mode);
        handle = TypeRef_UnityEngine_ForceMode;
        mode_00 = *piVar4;
        if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354ea0);
        }
        enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
        local_38[0] = mode_00;
        pIVar5 = il2cpp_value_box(g_data_184354e08,local_38);
        if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_184354e58);
        }
        bVar3 = System_Enum__IsDefined(enumType,pIVar5,(MethodInfo *)0x0);
        if (!bVar3) {
          local_38[0] = mode_00;
          pIVar5 = il2cpp_value_box(g_data_184354e08,local_38);
          pSVar6 = il2cpp_codegen_get_runtime_metadata(&"Unknown force mode: {0}");
          pSVar6 = System_String__Format(pSVar6,pIVar5,(MethodInfo *)0x0);
          pIVar7 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
          pSVar8 = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar7);
          System_ArgumentException___ctor_1a77cc0(pSVar8,pSVar6,(MethodInfo *)0x0);
          pMVar9 = il2cpp_codegen_get_runtime_metadata
                             (&MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_AddForce);
          il2cpp_codegen_raise_exception((Il2CppObject *)pSVar8,pMVar9);
        }
        pCVar1 = (__this->fields).Character;
        if ((((pCVar1 == (Characters_BaseCharacter_o *)0x0) ||
             (pUVar2 = (pCVar1->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) ||
            (force == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) ||
           (__this_00 = (pUVar2->fields).Rigidbody, __this_00 == (UnityEngine_Rigidbody_o *)0x0))
        goto label_181f4e645;
        local_28.x = (force->fields).Value.fields.x;
        local_28.y = (force->fields).Value.fields.y;
        local_28.z = (force->fields).Value.fields.z;
      }
      UnityEngine_Rigidbody__AddForce(__this_00,(UnityEngine_Vector3_o *)&local_28,mode_00,(MethodInfo *)0x0);
    }
    return;
  }
label_181f4e645:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$Reveal
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__Reveal (CustomLogic_CustomLogicCharacterBuiltin_o* __this, float delay, const MethodInfo* method);
// 0x181f4f380

void CustomLogic_CustomLogicCharacterBuiltin__Reveal
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,float delay,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this_00;
  
  __this_00 = (__this->fields).Character;
  if (__this_00 != (Characters_BaseCharacter_o *)0x0) {
    Characters_BaseCharacter__Reveal(__this_00,0.0,delay,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$AddOutline
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__AddOutline (CustomLogic_CustomLogicCharacterBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* color, System_String_o* mode, const MethodInfo* method);
// 0x181f4e780

void CustomLogic_CustomLogicCharacterBuiltin__AddOutline
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,CustomLogic_CustomLogicColorBuiltin_o *color
               ,System_String_o *mode,MethodInfo *method)

{
  Utility_Color255_o *__this_00;
  Characters_BaseCharacter_o *__this_01;
  bool bVar1;
  UnityEngine_Color_o *pUVar2;
  System_String_o *pSVar3;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_02;
  MethodInfo *lastManagedFrame;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  int32_t local_res10 [2];
  UnityEngine_Color_o local_58 [5];
  
  if (Il2CppMethodInitialized_18434556a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_Outline_Mode);
    Il2CppMethodInitialized_18434556a = '\x01';
  }
  local_res10[0] = 0;
  if (color == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
    fVar4 = 1.0;
    fVar5 = 1.0;
    fVar6 = 1.0;
    fVar7 = 1.0;
  }
  else {
    __this_00 = (color->fields).Value;
    if (__this_00 == (Utility_Color255_o *)0x0) goto label_181f4e90c;
    pUVar2 = Utility_Color255__ToColor(local_58,__this_00,(MethodInfo *)0x0);
    fVar4 = (pUVar2->fields).r;
    fVar5 = (pUVar2->fields).g;
    fVar6 = (pUVar2->fields).b;
    fVar7 = (pUVar2->fields).a;
  }
  if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354e58);
  }
  bVar1 = System_Enum__TryParse_Int32Enum_
                    (mode,local_res10,(MethodInfo_6B1BB0 *)MethodInfo_System_Enum_TryParse_Outline_Mode);
  if (!bVar1) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Unknown outline mode: ");
    pSVar3 = System_String__Concat_1969e50(pSVar3,mode,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_02 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_02,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_AddOutline);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,lastManagedFrame);
  }
  __this_01 = (__this->fields).Character;
  if (__this_01 != (Characters_BaseCharacter_o *)0x0) {
    local_58[0].fields.r = fVar4;
    local_58[0].fields.g = fVar5;
    local_58[0].fields.b = fVar6;
    local_58[0].fields.a = fVar7;
    Characters_BaseCharacter__AddOutlineWithColor(__this_01,local_58,local_res10[0],(MethodInfo *)0x0);
    return;
  }
label_181f4e90c:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$RemoveOutline
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__RemoveOutline (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f4f360

void CustomLogic_CustomLogicCharacterBuiltin__RemoveOutline
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this_00;
  
  __this_00 = (__this->fields).Character;
  if (__this_00 != (Characters_BaseCharacter_o *)0x0) {
    Characters_BaseCharacter__RemoveOutline(__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$Equals
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__Equals (CustomLogic_CustomLogicCharacterBuiltin_o* __this, Il2CppObject* other, const MethodInfo* method);
// 0x181f4e9c0

bool CustomLogic_CustomLogicCharacterBuiltin__Equals
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,Il2CppObject *other,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = CustomLogic_CustomLogicCharacterBuiltin____Eq__
                    (__this,(Il2CppObject *)__this,other,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin$$__Eq__
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin____Eq__ (CustomLogic_CustomLogicCharacterBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x181f4f840
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f4f88c: mov edx, ebx
// asm:   0x181f4f88e: jmp 0x181f4f8c4
// asm:   0x181f4f8f4: mov rdi, rbx

bool CustomLogic_CustomLogicCharacterBuiltin____Eq__
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
               MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  Il2CppClass *pIVar3;
  Il2CppClass *x;
  Il2CppClass *x_00;
  
  if (Il2CppMethodInitialized_18434556b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434556b = '\x01';
  }
  x = (Il2CppClass *)0x0;
  pIVar3 = x;
  if (other != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin->_2).typeHierarchyDepth;
    if (((other->klass->_2).typeHierarchyDepth < bVar1) ||
       (bVar2 = true,
       (other->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
       (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin)) {
      bVar2 = false;
    }
    pIVar3 = (Il2CppClass *)0x0;
    if (bVar2) {
      pIVar3 = (Il2CppClass *)other;
    }
  }
  x_00 = x;
  if (self != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin->_2).typeHierarchyDepth;
    if ((bVar1 <= (self->klass->_2).typeHierarchyDepth) &&
       ((self->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin)) {
      x_00 = self[3].klass;
    }
  }
  if (pIVar3 != (Il2CppClass *)0x0) {
    x = (pIVar3->_1).this_arg.data;
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      return true;
    }
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)x,(MethodInfo *)0x0);
      return bVar2;
    }
  }
  return false;
}


// CustomLogic.CustomLogicCharacterBuiltin$$__Hash__
// il2cpp: int32_t CustomLogic_CustomLogicCharacterBuiltin____Hash__ (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f4f9f0

int32_t
CustomLogic_CustomLogicCharacterBuiltin____Hash__(CustomLogic_CustomLogicCharacterBuiltin_o* __this, MethodInfo* method)

{
  int32_t iVar1;
  
  iVar1 = (*(__this->klass->vtable)._2_GetHashCode.methodPtr)
                    (__this,(__this->klass->vtable)._2_GetHashCode.method);
  return iVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin$$GetHashCode
// il2cpp: int32_t CustomLogic_CustomLogicCharacterBuiltin__GetHashCode (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181ece090

int32_t
CustomLogic_CustomLogicCharacterBuiltin__GetHashCode(CustomLogic_CustomLogicCharacterBuiltin_o* __this, MethodInfo* method)

{
  System_Type_o *pSVar1;
  int32_t iVar2;
  
  pSVar1 = (__this->fields).Character;
  if (pSVar1 != (System_Type_o *)0x0) {
    iVar2 = (*(pSVar1->klass->vtable)._2_GetHashCode.methodPtr)
                      (pSVar1,(pSVar1->klass->vtable)._2_GetHashCode.method);
    return iVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCharacterBuiltin__get_ClassName (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x181f4fbc0

System_String_o *
CustomLogic_CustomLogicCharacterBuiltin__get_ClassName
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434556c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Character");
    Il2CppMethodInitialized_18434556c = '\x01';
  }
  return "Character";
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__get_IsAbstract (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicCharacterBuiltin__get_IsAbstract(CustomLogic_CustomLogicCharacterBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__get_IsStatic (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicCharacterBuiltin__get_IsStatic(CustomLogic_CustomLogicCharacterBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicCharacterBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicCharacterBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


