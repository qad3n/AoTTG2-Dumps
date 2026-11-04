// Type: CustomLogic.CustomLogicShifterBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicShifterBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicShifterBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicShifterBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicShifterBuiltin_o* CustomLogic_CustomLogicShifterBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181f7bf60

CustomLogic_CustomLogicShifterBuiltin_o *
CustomLogic_CustomLogicShifterBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicShifterBuiltin constructor found that takes ");
  pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_1a77cc0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x181f80900

void CustomLogic_CustomLogicShifterBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_1843457fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843457fb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicShifterBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$<__CreateMethodBinding__MoveToExact>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__MoveToExact_b__22_0 (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicShifterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7e630

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__MoveToExact_b__22_0
          (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicShifterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  Characters_BaseShifter_o *pCVar3;
  Controllers_BaseTitanAIController_o *__this_00;
  bool bVar4;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar5;
  float timeoutPadding;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843457fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843457fc = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
label_181f7e79a:
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar2,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                       );
    uVar1 = (uint)__a->max_length;
    if ((int)uVar1 < 2) {
      timeoutPadding = 1.0;
    }
    else {
      if (uVar1 < 2) goto label_181f7e79a;
      pIVar2 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      timeoutPadding =
           CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     (pIVar2,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float)
      ;
    }
    if ((__c != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
       (pCVar3 = (__c->fields).Shifter, pCVar3 != (Characters_BaseShifter_o *)0x0)) {
      bVar4 = (*(pCVar3->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar3,(pCVar3->klass->vtable)._74_IsMine.method);
      if (bVar4) {
        pCVar3 = (__c->fields).Shifter;
        if (pCVar3 == (Characters_BaseShifter_o *)0x0) goto label_181f7e794;
        if (((pCVar3->fields).Dead == false) && ((pCVar3->fields).AI != false)) {
          if ((pCVar5 == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
             (__this_00 = (__c->fields).Controller, __this_00 == (Controllers_BaseTitanAIController_o *)0x0))
          goto label_181f7e794;
          local_28[0].x = (pCVar5->fields).Value.fields.x;
          local_28[0].y = (pCVar5->fields).Value.fields.y;
          local_28[0].z = (pCVar5->fields).Value.fields.z;
          Controllers_BaseTitanAIController__MoveToExact
                    (__this_00,(UnityEngine_Vector3_o *)local_28,10.0,timeoutPadding,(MethodInfo *)0x0);
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
label_181f7e794:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$<__CreateMethodBinding__MoveToExactCallback>b__23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__MoveToExactCallback_b__23_0 (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicShifterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7e380

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__MoveToExactCallback_b__23_0
          (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicShifterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *pIVar2;
  Characters_BaseShifter_o *pCVar3;
  Controllers_BaseTitanAIController_o *__this_00;
  bool bVar4;
  CustomLogic_UserMethod_o *value;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar5;
  CustomLogic_CustomLogicShifterBuiltin___c__DisplayClass61_0_o *object;
  System_Action_o *__this_01;
  float range;
  float timeoutPadding;
  UnityEngine_Vector3_Fields local_38 [4];
  
  if (Il2CppMethodInitialized_1843457fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843457fd = '\x01';
  }
  if (__a == (System_Object_array *)0x0) goto label_181f7e61d;
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (pIVar2,(MethodInfo_66EB70 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    if (1 < (uint)__a->max_length) {
      pCVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (__a->m_Items[1],
                          (MethodInfo_66EB70 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      uVar1 = (uint)__a->max_length;
      if ((int)uVar1 < 3) {
        range = 10.0;
      }
      else {
        if (uVar1 < 3) goto label_181f7e623;
        pIVar2 = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        range = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                          (pIVar2,(MethodInfo_66ED40 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      }
      uVar1 = (uint)__a->max_length;
      if ((int)uVar1 < 4) {
        timeoutPadding = 1.0;
      }
      else {
        if (uVar1 < 4) goto label_181f7e623;
        pIVar2 = __a->m_Items[3];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        timeoutPadding =
             CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                       (pIVar2,(MethodInfo_66ED40 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      }
      if (__c != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
        if (Il2CppMethodInitialized_1843457c9 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicShifterBuiltin_c__DisplayClass61_0_MoveToExactCallback_b__0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_c__DisplayClass61_0);
          Il2CppMethodInitialized_1843457c9 = '\x01';
        }
        object = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_c__DisplayClass61_0)
        ;
        System_Configuration_ConfigurationCollectionAttribute___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
        if (object != (CustomLogic_CustomLogicShifterBuiltin___c__DisplayClass61_0_o *)0x0) {
          (object->fields).method = value;
          Il2CppCodeGenWriteBarrier(&(object->fields).method,value);
          (object->fields).__4__this = __c;
          Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__c);
          pCVar3 = (__c->fields).Shifter;
          if (pCVar3 != (Characters_BaseShifter_o *)0x0) {
            bVar4 = (*(pCVar3->klass->vtable)._74_IsMine.methodPtr)
                              (pCVar3,(pCVar3->klass->vtable)._74_IsMine.method);
            if (bVar4) {
              pCVar3 = (__c->fields).Shifter;
              if (pCVar3 == (Characters_BaseShifter_o *)0x0) goto label_181f7e61d;
              if (((pCVar3->fields).Dead == false) && ((pCVar3->fields).AI != false)) {
                __this_00 = (__c->fields).Controller;
                __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
                System_Action___ctor
                          ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)object,
                           (intptr_t)
                           MethodInfo_CustomLogic_CustomLogicShifterBuiltin_c__DisplayClass61_0_MoveToExactCallback_b__0
                           ,(MethodInfo *)0x0);
                if ((pCVar5 == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
                   (__this_00 == (Controllers_BaseTitanAIController_o *)0x0)) goto label_181f7e61d;
                local_38[0].z = (pCVar5->fields).Value.fields.z;
                local_38[0].x = (pCVar5->fields).Value.fields.x;
                local_38[0].y = (pCVar5->fields).Value.fields.y;
                Controllers_BaseTitanAIController__MoveToExactCallback
                          (__this_00,__this_01,(UnityEngine_Vector3_o *)local_38,range,timeoutPadding,
                           (MethodInfo *)0x0);
              }
            }
            return (Il2CppObject *)0x0;
          }
        }
      }
label_181f7e61d:
      ThrowNullReferenceException();
    }
  }
label_181f7e623:
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$<__CreateMethodBinding__Target>b__24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__Target_b__24_0 (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicShifterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7feb0

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__Target_b__24_0
          (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicShifterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *target;
  Il2CppObject *obj;
  float focusDuration;
  
  if (Il2CppMethodInitialized_1843457fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843457fe = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if (((int)__a->max_length == 0) || ((uint)__a->max_length < 2)) {
      ThrowIndexOutOfRangeException();
    }
    target = __a->m_Items[0];
    obj = __a->m_Items[1];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    focusDuration =
         CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                   (obj,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
      CustomLogic_CustomLogicCharacterBuiltin__SetTarget
                ((CustomLogic_CustomLogicCharacterBuiltin_o *)__c,target,focusDuration,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$<__CreateMethodBinding__Wander>b__25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__Wander_b__25_0 (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicShifterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f80160

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__Wander_b__25_0
          (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicShifterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *__this_00;
  bool bVar2;
  
  if ((__c != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__c->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__c->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_181f801bb;
      if (((pCVar1->fields).Dead == false) && ((pCVar1->fields).AI != false)) {
        __this_00 = (__c->fields).Controller;
        if (__this_00 == (Controllers_BaseTitanAIController_o *)0x0) goto label_181f801bb;
        Controllers_BaseTitanAIController__CancelOrder(__this_00,(MethodInfo *)0x0);
      }
    }
    return (Il2CppObject *)0x0;
  }
label_181f801bb:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$<__CreateMethodBinding__Blind>b__26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__Blind_b__26_0 (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicShifterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7cb00

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__Blind_b__26_0
          (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicShifterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  
  if ((__c != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__c->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__c->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_181f7cb55;
      if ((pCVar1->fields).Dead == false) {
        (*(pCVar1->klass->vtable)._168_Blind.methodPtr)(pCVar1,(pCVar1->klass->vtable)._168_Blind.method);
      }
    }
    return (Il2CppObject *)0x0;
  }
label_181f7cb55:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$<__CreateMethodBinding__Cripple>b__27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__Cripple_b__27_0 (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicShifterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7cc90

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__Cripple_b__27_0
          (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicShifterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_1843457ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843457ff = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((__c != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
       (pCVar1 = (__c->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__c->fields).Shifter;
        if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_181f7cd64;
        if ((pCVar1->fields).Dead == false) {
          (*(pCVar1->klass->vtable)._169_Cripple.methodPtr)
                    (pCVar1,fVar3,(pCVar1->klass->vtable)._169_Cripple.method);
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
label_181f7cd64:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$<__CreateMethodBinding__Attack>b__28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__Attack_b__28_0 (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicShifterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7c960

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__Attack_b__28_0
          (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicShifterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_184345800 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345800 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
    if ((__c != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
       (pCVar1 = (__c->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__c->fields).Shifter;
        if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_181f7ca48;
        if ((pCVar1->fields).Dead == false) {
          bVar2 = (*(pCVar1->klass->vtable)._151_CanAttack.methodPtr)
                            (pCVar1,(pCVar1->klass->vtable)._151_CanAttack.method);
          if (bVar2) {
            pCVar1 = (__c->fields).Shifter;
            if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_181f7ca48;
            (*(pCVar1->klass->vtable)._150_Attack.methodPtr)
                      (pCVar1,pSVar3,(pCVar1->klass->vtable)._150_Attack.method);
          }
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
label_181f7ca48:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$<__CreateMethodBinding__Stun>b__29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__Stun_b__29_0 (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicShifterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7fca0

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__Stun_b__29_0
          (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicShifterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  byte bVar1;
  Il2CppObject *obj;
  Characters_BaseShifter_o *pCVar2;
  Characters_WallColossalShifter_o *__this_00;
  Characters_WallColossalShifter_c *pCVar3;
  bool bVar4;
  float duration;
  
  if (Il2CppMethodInitialized_184345801 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345801 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if (__a->max_length == 0) {
      duration = 0.0;
    }
    else {
      if ((int)__a->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      duration = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                           (obj,(MethodInfo_66ED40 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    }
    if (__c != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_1843457ca == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_WallColossalShifter);
        Il2CppMethodInitialized_1843457ca = '\x01';
      }
      pCVar2 = (__c->fields).Shifter;
      if (pCVar2 != (Characters_BaseShifter_o *)0x0) {
        bVar4 = (*(pCVar2->klass->vtable)._74_IsMine.methodPtr)
                          (pCVar2,(pCVar2->klass->vtable)._74_IsMine.method);
        if (bVar4) {
          __this_00 = (Characters_WallColossalShifter_o *)(__c->fields).Shifter;
          if (__this_00 == (Characters_WallColossalShifter_o *)0x0) goto label_181f7fe03;
          if ((__this_00->fields).Dead == false) {
            pCVar3 = __this_00->klass;
            bVar1 = (TypeInfo_Characters_WallColossalShifter->_2).typeHierarchyDepth;
            if (((pCVar3->_2).typeHierarchyDepth < bVar1) ||
               ((pCVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
                (Il2CppClass *)TypeInfo_Characters_WallColossalShifter)) {
              if (duration == 0.0) {
                duration = (__this_00->fields).StunTime;
              }
              (*(pCVar3->vtable)._155_Stun.methodPtr)
                        (__this_00,duration,true,(pCVar3->vtable)._155_Stun.method);
            }
            else {
              Characters_WallColossalShifter__EnterStunState(__this_00,duration,true,(MethodInfo *)0x0);
            }
          }
        }
        return (Il2CppObject *)0x0;
      }
    }
  }
label_181f7fe03:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicShifterBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181f5f1d0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicShifterBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *__this_00;
  ExitGames_Client_Photon_SerializeStreamMethod_o *pEVar4;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *pSVar5;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_01;
  System_String_o *pSVar6;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_02;
  MethodInfo *pMVar7;
  
  if (Il2CppMethodInitialized_1843457cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"FocusTime");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackPause");
    il2cpp_codegen_initialize_runtime_metadata(&"RunSpeedPerLevel");
    il2cpp_codegen_initialize_runtime_metadata(&"WalkSpeedBase");
    il2cpp_codegen_initialize_runtime_metadata(&"DeathAnimLength");
    il2cpp_codegen_initialize_runtime_metadata(&"Attack");
    il2cpp_codegen_initialize_runtime_metadata(&"ActionPause");
    il2cpp_codegen_initialize_runtime_metadata(&"WalkSpeedPerLevel");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackWait");
    il2cpp_codegen_initialize_runtime_metadata(&"Cripple");
    il2cpp_codegen_initialize_runtime_metadata(&"Target");
    il2cpp_codegen_initialize_runtime_metadata(&"Blind");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSpeedMultiplier");
    il2cpp_codegen_initialize_runtime_metadata(&"Stun");
    il2cpp_codegen_initialize_runtime_metadata(&"MoveToExact");
    il2cpp_codegen_initialize_runtime_metadata(&"MoveToExactCallback");
    il2cpp_codegen_initialize_runtime_metadata(&"NeckMount");
    il2cpp_codegen_initialize_runtime_metadata(&"HeadMount");
    il2cpp_codegen_initialize_runtime_metadata(&"NapePosition");
    il2cpp_codegen_initialize_runtime_metadata(&"FocusRange");
    il2cpp_codegen_initialize_runtime_metadata(&"RunSpeedBase");
    il2cpp_codegen_initialize_runtime_metadata(&"Size");
    il2cpp_codegen_initialize_runtime_metadata(&"JumpForce");
    il2cpp_codegen_initialize_runtime_metadata(&"RotateSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"Wander");
    il2cpp_codegen_initialize_runtime_metadata(&"FarAttackCooldown");
    il2cpp_codegen_initialize_runtime_metadata(&"TurnPause");
    il2cpp_codegen_initialize_runtime_metadata(&"TurnSpeed");
    Il2CppMethodInitialized_1843457cc = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x8b67f169) {
    if (uVar3 < 0x3da81e8e) {
      if (uVar3 < 0x246c98e1) {
        if (uVar3 == 0x7186f3c) {
          bVar2 = System_String__op_Equality(name,"NapePosition",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f60e2d;
          if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843457dd == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__NapePosition_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object)
            ;
            Il2CppMethodInitialized_1843457dd = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__NapePosition_g____getter
          ;
          goto label_181f5fba2;
        }
        if (uVar3 == 0x1d46812f) {
          bVar2 = System_String__op_Equality(name,"AttackSpeedMultiplier",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f60e2d;
          if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843457dc == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackSpeedMultiplier_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackSpeedMultiplier_g_40d96e8
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object)
            ;
            Il2CppMethodInitialized_1843457dc = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
          System_Func_object__object____ctor
                    (__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackSpeedMultiplier_g
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackSpeedMultiplier_g_40d96e8
          ;
        }
        else {
          if (uVar3 != 0x246c98e0) goto label_181f60e2d;
          bVar2 = System_String__op_Equality(name,"RunSpeedBase",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f60e2d;
          if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843457ce == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__RunSpeedBase_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__RunSpeedBase_g____setter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object)
            ;
            Il2CppMethodInitialized_1843457ce = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
          System_Func_object__object____ctor
                    (__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__RunSpeedBase_g____getter
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__RunSpeedBase_g____setter
          ;
        }
      }
      else if (uVar3 < 0x320c4020) {
        if (uVar3 == 0x2ae002cc) {
          bVar2 = System_String__op_Equality(name,"JumpForce",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f60e2d;
          if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843457d4 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__JumpForce_g____getter_9
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__JumpForce_g____setter_9
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object)
            ;
            Il2CppMethodInitialized_1843457d4 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
          System_Func_object__object____ctor
                    (__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__JumpForce_g____getter_9
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__JumpForce_g____setter_9
          ;
        }
        else {
          if (uVar3 != 0x320c401f) goto label_181f60e2d;
          bVar2 = System_String__op_Equality(name,"ActionPause",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f60e2d;
          if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843457d5 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__ActionPause_g____getter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__ActionPause_g____setter
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object)
            ;
            Il2CppMethodInitialized_1843457d5 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
          System_Func_object__object____ctor
                    (__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__ActionPause_g____getter
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__ActionPause_g____setter
          ;
        }
      }
      else {
        if (uVar3 == 0x384157d7) {
          bVar2 = System_String__op_Equality(name,"MoveToExactCallback",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_1843457e2 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__MoveToExactCallback_b__2
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
              Il2CppMethodInitialized_1843457e2 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__23_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__MoveToExactCallback_b__2
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__23_0 =
                   (System_Func_CustomLogicShifterBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__23_0,
                         pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin)
            ;
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
          goto label_181f60e2d;
        }
        if (uVar3 != 0x3da81e8d) goto label_181f60e2d;
        bVar2 = System_String__op_Equality(name,"RotateSpeed",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f60e2d;
        if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843457d3 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicShifterBuiltin_object)
          ;
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__RotateSpeed_g____getter
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__RotateSpeed_g____setter
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
          Il2CppMethodInitialized_1843457d3 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__RotateSpeed_g____getter
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__RotateSpeed_g____setter
        ;
      }
    }
    else if (uVar3 < 0x6709f835) {
      if (uVar3 != 0x46b92be8) {
        if (uVar3 == 0x5d992b41) {
          bVar2 = System_String__op_Equality(name,"Stun",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_1843457e8 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__Stun_b__29_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
              Il2CppMethodInitialized_1843457e8 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__29_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__Stun_b__29_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__29_0 =
                   (System_Func_CustomLogicShifterBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__29_0,
                         pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin)
            ;
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
        else if (uVar3 == 0x6709f834) {
          bVar2 = System_String__op_Equality(name,"Wander",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_1843457e4 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__Wander_b__25_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
              Il2CppMethodInitialized_1843457e4 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__25_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__Wander_b__25_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__25_0 =
                   (System_Func_CustomLogicShifterBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__25_0,
                         pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin)
            ;
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
label_181f60e2d:
        pSVar6 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicShifterBuiltin not found");
        str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
        pSVar6 = System_String__Concat_1969b70(str0,name,pSVar6,(MethodInfo *)0x0);
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
        System_Exception___ctor_1b6abf0(__this_02,pSVar6,(MethodInfo *)0x0);
        pMVar7 = il2cpp_codegen_get_runtime_metadata
                           (&MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_CreateMemberBinding);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,pMVar7);
      }
      bVar2 = System_String__op_Equality(name,"FocusRange",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f60e2d;
      if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843457d8 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__FocusRange_g____getter_1
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__FocusRange_g____setter_1
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
        Il2CppMethodInitialized_1843457d8 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object)
      ;
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__FocusRange_g____getter_1
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__FocusRange_g____setter_1
      ;
    }
    else {
      if (0x6fd42728 < uVar3) {
        if (uVar3 == 0x7c69a11c) {
          bVar2 = System_String__op_Equality(name,"MoveToExact",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_1843457e1 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__MoveToExact_b__22_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
              Il2CppMethodInitialized_1843457e1 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__22_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__MoveToExact_b__22_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__22_0 =
                   (System_Func_CustomLogicShifterBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__22_0,
                         pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin)
            ;
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
        else if (uVar3 == 0x8b67f168) {
          bVar2 = System_String__op_Equality(name,"Target",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_1843457e3 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__Target_b__24_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
              Il2CppMethodInitialized_1843457e3 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__24_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__Target_b__24_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__24_0 =
                   (System_Func_CustomLogicShifterBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__24_0,
                         pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin)
            ;
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
        goto label_181f60e2d;
      }
      if (uVar3 == 0x69ba519b) {
        bVar2 = System_String__op_Equality(name,"FarAttackCooldown",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f60e2d;
        if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843457da == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicShifterBuiltin_object)
          ;
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__FarAttackCooldown_g____g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__FarAttackCooldown_g____s
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
          Il2CppMethodInitialized_1843457da = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__FarAttackCooldown_g____g
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__FarAttackCooldown_g____s
        ;
      }
      else {
        if (uVar3 != 0x6fd42728) goto label_181f60e2d;
        bVar2 = System_String__op_Equality(name,"WalkSpeedPerLevel",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f60e2d;
        if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843457d0 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicShifterBuiltin_object)
          ;
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__WalkSpeedPerLevel_g____g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__WalkSpeedPerLevel_g____s
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
          Il2CppMethodInitialized_1843457d0 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__WalkSpeedPerLevel_g____g
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__WalkSpeedPerLevel_g____s
        ;
      }
    }
  }
  else if (uVar3 < 0xbb10b4ad) {
    if (uVar3 < 0x90cf188b) {
      if (uVar3 == 0x8ba9331d) {
        bVar2 = System_String__op_Equality(name,"Attack",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843457e7 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__Attack_b__28_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843457e7 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__28_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__Attack_b__28_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__28_0 =
                 (System_Func_CustomLogicShifterBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__28_0,
                       pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
        goto label_181f60e2d;
      }
      if (uVar3 == 0x8dc5a9a3) {
        bVar2 = System_String__op_Equality(name,"NeckMount",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f60e2d;
        if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843457df == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__NeckMount_g____getter_20
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
          Il2CppMethodInitialized_1843457df = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__NeckMount_g____getter_20
        ;
        goto label_181f5fba2;
      }
      if (uVar3 != 0x90cf188a) goto label_181f60e2d;
      bVar2 = System_String__op_Equality(name,"FocusTime",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f60e2d;
      if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843457d9 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__FocusTime_g____getter_14
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__FocusTime_g____setter_14
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
        Il2CppMethodInitialized_1843457d9 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object)
      ;
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__FocusTime_g____getter_14
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__FocusTime_g____setter_14
      ;
    }
    else if (uVar3 < 0xa6478e7d) {
      if (uVar3 == 0x9891bf88) {
        bVar2 = System_String__op_Equality(name,"AttackWait",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f60e2d;
        if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843457db == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicShifterBuiltin_object)
          ;
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackWait_g____getter_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackWait_g____setter_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
          Il2CppMethodInitialized_1843457db = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackWait_g____getter_1
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackWait_g____setter_1
        ;
      }
      else {
        if (uVar3 != 0xa6478e7c) goto label_181f60e2d;
        bVar2 = System_String__op_Equality(name,"Size",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f60e2d;
        if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843457cd == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicShifterBuiltin_object)
          ;
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__Size_g____getter_2_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__Size_g____setter_2_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
          Il2CppMethodInitialized_1843457cd = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__Size_g____getter_2_0
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__Size_g____setter_2_1
        ;
      }
    }
    else {
      if (uVar3 != 0xb5f3afdd) {
        if (uVar3 != 0xbb10b4ac) goto label_181f60e2d;
        bVar2 = System_String__op_Equality(name,"HeadMount",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f60e2d;
        if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843457de == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__HeadMount_g____getter_19
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
          Il2CppMethodInitialized_1843457de = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__HeadMount_g____getter_19
        ;
label_181f5fba2:
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,(intptr_t)pMVar7,(MethodInfo_16E67D0 *)0x0);
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin
                              );
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)0x0;
        goto label_181f60e08;
      }
      bVar2 = System_String__op_Equality(name,"TurnSpeed",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f60e2d;
      if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843457d2 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__TurnSpeed_g____getter_7
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__TurnSpeed_g____setter_7
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
        Il2CppMethodInitialized_1843457d2 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object)
      ;
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__TurnSpeed_g____getter_7
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__TurnSpeed_g____setter_7
      ;
    }
  }
  else if (uVar3 < 0xd0d86e03) {
    if (uVar3 == 0xc746e5f5) {
      bVar2 = System_String__op_Equality(name,"AttackPause",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f60e2d;
      if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843457d6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackPause_g____getter
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackPause_g____setter
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
        Il2CppMethodInitialized_1843457d6 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object)
      ;
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackPause_g____getter
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackPause_g____setter
      ;
    }
    else if (uVar3 == 0xcf6befb4) {
      bVar2 = System_String__op_Equality(name,"DeathAnimLength",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f60e2d;
      if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843457e0 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__DeathAnimLength_g____get
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__DeathAnimLength_g____set
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
        Il2CppMethodInitialized_1843457e0 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object)
      ;
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__DeathAnimLength_g____get
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__DeathAnimLength_g____set
      ;
    }
    else {
      if (uVar3 != 0xd0d86e02) goto label_181f60e2d;
      bVar2 = System_String__op_Equality(name,"RunSpeedPerLevel",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f60e2d;
      if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843457d1 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__RunSpeedPerLevel_g____ge
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__RunSpeedPerLevel_g____se
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
        Il2CppMethodInitialized_1843457d1 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object)
      ;
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__RunSpeedPerLevel_g____ge
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__RunSpeedPerLevel_g____se
      ;
    }
  }
  else if (uVar3 < 0xe4d66f55) {
    if (uVar3 != 0xd2528dac) {
      if (uVar3 == 0xe4d66f54) {
        bVar2 = System_String__op_Equality(name,"Blind",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843457e5 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__Blind_b__26_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843457e5 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__26_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__Blind_b__26_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__26_0 =
                 (System_Func_CustomLogicShifterBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__26_0,
                       pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      goto label_181f60e2d;
    }
    bVar2 = System_String__op_Equality(name,"TurnPause",(MethodInfo *)0x0);
    if (!bVar2) goto label_181f60e2d;
    if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_1843457d7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__TurnPause_g____getter_12
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__TurnPause_g____setter_12
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
      Il2CppMethodInitialized_1843457d7 = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
    System_Func_object__object____ctor
              (__this,(Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__TurnPause_g____getter_12
               ,(MethodInfo_16E67D0 *)0x0);
    __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
    pMVar7 = 
    MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__TurnPause_g____setter_12
    ;
  }
  else {
    if (uVar3 != 0xedff5766) {
      if (uVar3 == 0xf96e74c8) {
        bVar2 = System_String__op_Equality(name,"Cripple",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843457e6 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__Cripple_b__27_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843457e6 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__27_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__Cripple_b__27_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__27_0 =
                 (System_Func_CustomLogicShifterBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__27_0,
                       pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      goto label_181f60e2d;
    }
    bVar2 = System_String__op_Equality(name,"WalkSpeedBase",(MethodInfo *)0x0);
    if (!bVar2) goto label_181f60e2d;
    if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_1843457cf == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__WalkSpeedBase_g____gette
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__WalkSpeedBase_g____sette
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
      Il2CppMethodInitialized_1843457cf = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
    System_Func_object__object____ctor
              (__this,(Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__WalkSpeedBase_g____gette
               ,(MethodInfo_16E67D0 *)0x0);
    __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
    pMVar7 = 
    MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__WalkSpeedBase_g____sette
    ;
  }
  System_Action_object__object____ctor
            (__this_00,(Il2CppObject *)0x0,(intptr_t)pMVar7,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
label_181f60e08:
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_01;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__Size
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__Size (const MethodInfo* method);
// 0x181f6dc80

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__Size(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  System_Action_CustomLogicShifterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843457cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__Size_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__Size_g____setter_2_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
    Il2CppMethodInitialized_1843457cd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__Size_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__Size_g____setter_2_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__RunSpeedBase
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__RunSpeedBase (const MethodInfo* method);
// 0x181f6d8c0

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__RunSpeedBase(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  System_Action_CustomLogicShifterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843457ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__RunSpeedBase_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__RunSpeedBase_g____setter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
    Il2CppMethodInitialized_1843457ce = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__RunSpeedBase_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__RunSpeedBase_g____setter
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__WalkSpeedBase
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__WalkSpeedBase (const MethodInfo* method);
// 0x181f6ed60

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__WalkSpeedBase(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  System_Action_CustomLogicShifterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843457cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__WalkSpeedBase_g____gette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__WalkSpeedBase_g____sette
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
    Il2CppMethodInitialized_1843457cf = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__WalkSpeedBase_g____gette
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__WalkSpeedBase_g____sette
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__WalkSpeedPerLevel
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__WalkSpeedPerLevel (const MethodInfo* method);
// 0x181f6ee50

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__WalkSpeedPerLevel(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  System_Action_CustomLogicShifterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843457d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__WalkSpeedPerLevel_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__WalkSpeedPerLevel_g____s
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
    Il2CppMethodInitialized_1843457d0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__WalkSpeedPerLevel_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__WalkSpeedPerLevel_g____s
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__RunSpeedPerLevel
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__RunSpeedPerLevel (const MethodInfo* method);
// 0x181f6d9b0

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__RunSpeedPerLevel(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  System_Action_CustomLogicShifterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843457d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__RunSpeedPerLevel_g____ge
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__RunSpeedPerLevel_g____se
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
    Il2CppMethodInitialized_1843457d1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__RunSpeedPerLevel_g____ge
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__RunSpeedPerLevel_g____se
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__TurnSpeed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__TurnSpeed (const MethodInfo* method);
// 0x181f6e9f0

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__TurnSpeed(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  System_Action_CustomLogicShifterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843457d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__TurnSpeed_g____getter_7
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__TurnSpeed_g____setter_7
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
    Il2CppMethodInitialized_1843457d2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__TurnSpeed_g____getter_7
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__TurnSpeed_g____setter_7
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__RotateSpeed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__RotateSpeed (const MethodInfo* method);
// 0x181f6d5f0

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__RotateSpeed(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  System_Action_CustomLogicShifterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843457d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__RotateSpeed_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__RotateSpeed_g____setter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
    Il2CppMethodInitialized_1843457d3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__RotateSpeed_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__RotateSpeed_g____setter
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__JumpForce
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__JumpForce (const MethodInfo* method);
// 0x181f6c3d0

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__JumpForce(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  System_Action_CustomLogicShifterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843457d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__JumpForce_g____getter_9
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__JumpForce_g____setter_9
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
    Il2CppMethodInitialized_1843457d4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__JumpForce_g____getter_9
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__JumpForce_g____setter_9
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__ActionPause
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__ActionPause (const MethodInfo* method);
// 0x181f6ac10

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__ActionPause(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  System_Action_CustomLogicShifterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843457d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__ActionPause_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__ActionPause_g____setter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
    Il2CppMethodInitialized_1843457d5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__ActionPause_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__ActionPause_g____setter
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__AttackPause
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__AttackPause (const MethodInfo* method);
// 0x181f6b160

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__AttackPause(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  System_Action_CustomLogicShifterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843457d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackPause_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackPause_g____setter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
    Il2CppMethodInitialized_1843457d6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackPause_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackPause_g____setter
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__TurnPause
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__TurnPause (const MethodInfo* method);
// 0x181f6e900

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__TurnPause(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  System_Action_CustomLogicShifterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843457d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__TurnPause_g____getter_12
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__TurnPause_g____setter_12
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
    Il2CppMethodInitialized_1843457d7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__TurnPause_g____getter_12
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__TurnPause_g____setter_12
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__FocusRange
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__FocusRange (const MethodInfo* method);
// 0x181f6bc50

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__FocusRange(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  System_Action_CustomLogicShifterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843457d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__FocusRange_g____getter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__FocusRange_g____setter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
    Il2CppMethodInitialized_1843457d8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__FocusRange_g____getter_1
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__FocusRange_g____setter_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__FocusTime
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__FocusTime (const MethodInfo* method);
// 0x181f6bd40

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__FocusTime(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  System_Action_CustomLogicShifterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843457d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__FocusTime_g____getter_14
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__FocusTime_g____setter_14
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
    Il2CppMethodInitialized_1843457d9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__FocusTime_g____getter_14
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__FocusTime_g____setter_14
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__FarAttackCooldown
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__FarAttackCooldown (const MethodInfo* method);
// 0x181f6bb60

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__FarAttackCooldown(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  System_Action_CustomLogicShifterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843457da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__FarAttackCooldown_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__FarAttackCooldown_g____s
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
    Il2CppMethodInitialized_1843457da = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__FarAttackCooldown_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__FarAttackCooldown_g____s
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__AttackWait
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__AttackWait (const MethodInfo* method);
// 0x181f6b340

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__AttackWait(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  System_Action_CustomLogicShifterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843457db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackWait_g____getter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackWait_g____setter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
    Il2CppMethodInitialized_1843457db = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackWait_g____getter_1
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackWait_g____setter_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__AttackSpeedMultiplier
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__AttackSpeedMultiplier (const MethodInfo* method);
// 0x181f6b250

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__AttackSpeedMultiplier
          (MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  System_Action_CustomLogicShifterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843457dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackSpeedMultiplier_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackSpeedMultiplier_g_40d96e8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
    Il2CppMethodInitialized_1843457dc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackSpeedMultiplier_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackSpeedMultiplier_g_40d96e8
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__NapePosition
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__NapePosition (const MethodInfo* method);
// 0x181f6cb50

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__NapePosition(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843457dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__NapePosition_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
    Il2CppMethodInitialized_1843457dd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__NapePosition_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__HeadMount
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__HeadMount (const MethodInfo* method);
// 0x181f6c060

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__HeadMount(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843457de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__HeadMount_g____getter_19
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
    Il2CppMethodInitialized_1843457de = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__HeadMount_g____getter_19
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__NeckMount
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__NeckMount (const MethodInfo* method);
// 0x181f6cbf0

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__NeckMount(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843457df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__NeckMount_g____getter_20
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
    Il2CppMethodInitialized_1843457df = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__NeckMount_g____getter_20
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__DeathAnimLength
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__DeathAnimLength (const MethodInfo* method);
// 0x181f6b8e0

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__DeathAnimLength(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  System_Action_CustomLogicShifterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843457e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__DeathAnimLength_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__DeathAnimLength_g____set
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
    Il2CppMethodInitialized_1843457e0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__DeathAnimLength_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__DeathAnimLength_g____set
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreateMethodBinding__MoveToExact
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__MoveToExact (const MethodInfo* method);
// 0x181f697b0

CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__MoveToExact(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843457e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__MoveToExact_b__22_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843457e1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__22_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__MoveToExact_b__22_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__22_0 =
         (System_Func_CustomLogicShifterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__22_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreateMethodBinding__MoveToExactCallback
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__MoveToExactCallback (const MethodInfo* method);
// 0x181f69690

CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__MoveToExactCallback(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843457e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__MoveToExactCallback_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843457e2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__23_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__MoveToExactCallback_b__2
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__23_0 =
         (System_Func_CustomLogicShifterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__23_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreateMethodBinding__Target
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Target (const MethodInfo* method);
// 0x181f6a8b0

CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Target(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843457e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__Target_b__24_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843457e3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__24_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__Target_b__24_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__24_0 =
         (System_Func_CustomLogicShifterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__24_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreateMethodBinding__Wander
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Wander (const MethodInfo* method);
// 0x181f6aaf0

CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Wander(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843457e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__Wander_b__25_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843457e4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__25_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__Wander_b__25_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__25_0 =
         (System_Func_CustomLogicShifterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__25_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreateMethodBinding__Blind
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Blind (const MethodInfo* method);
// 0x181f67e40

CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Blind(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843457e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__Blind_b__26_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843457e5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__26_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__Blind_b__26_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__26_0 =
         (System_Func_CustomLogicShifterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__26_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreateMethodBinding__Cripple
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Cripple (const MethodInfo* method);
// 0x181f682d0

CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Cripple(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843457e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__Cripple_b__27_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843457e6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__27_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__Cripple_b__27_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__27_0 =
         (System_Func_CustomLogicShifterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__27_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreateMethodBinding__Attack
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Attack (const MethodInfo* method);
// 0x181f67d20

CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Attack(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843457e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__Attack_b__28_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843457e7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__28_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__Attack_b__28_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__28_0 =
         (System_Func_CustomLogicShifterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__28_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreateMethodBinding__Stun
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Stun (const MethodInfo* method);
// 0x181f6a790

CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Stun(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843457e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__Stun_b__29_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843457e8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__29_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__Stun_b__29_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__29_0 =
         (System_Func_CustomLogicShifterBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9__29_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x181f6f1c0

void CustomLogic_CustomLogicShifterBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_1843457e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"FocusTime");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackPause");
    il2cpp_codegen_initialize_runtime_metadata(&"RunSpeedPerLevel");
    il2cpp_codegen_initialize_runtime_metadata(&"WalkSpeedBase");
    il2cpp_codegen_initialize_runtime_metadata(&"DeathAnimLength");
    il2cpp_codegen_initialize_runtime_metadata(&"Attack");
    il2cpp_codegen_initialize_runtime_metadata(&"ActionPause");
    il2cpp_codegen_initialize_runtime_metadata(&"WalkSpeedPerLevel");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackWait");
    il2cpp_codegen_initialize_runtime_metadata(&"Cripple");
    il2cpp_codegen_initialize_runtime_metadata(&"Target");
    il2cpp_codegen_initialize_runtime_metadata(&"Blind");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSpeedMultiplier");
    il2cpp_codegen_initialize_runtime_metadata(&"Stun");
    il2cpp_codegen_initialize_runtime_metadata(&"MoveToExact");
    il2cpp_codegen_initialize_runtime_metadata(&"MoveToExactCallback");
    il2cpp_codegen_initialize_runtime_metadata(&"NeckMount");
    il2cpp_codegen_initialize_runtime_metadata(&"HeadMount");
    il2cpp_codegen_initialize_runtime_metadata(&"NapePosition");
    il2cpp_codegen_initialize_runtime_metadata(&"FocusRange");
    il2cpp_codegen_initialize_runtime_metadata(&"RunSpeedBase");
    il2cpp_codegen_initialize_runtime_metadata(&"Size");
    il2cpp_codegen_initialize_runtime_metadata(&"JumpForce");
    il2cpp_codegen_initialize_runtime_metadata(&"RotateSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"Wander");
    il2cpp_codegen_initialize_runtime_metadata(&"FarAttackCooldown");
    il2cpp_codegen_initialize_runtime_metadata(&"TurnPause");
    il2cpp_codegen_initialize_runtime_metadata(&"TurnSpeed");
    Il2CppMethodInitialized_1843457e9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Size",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RunSpeedBase",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"WalkSpeedBase",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"WalkSpeedPerLevel",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RunSpeedPerLevel",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TurnSpeed",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RotateSpeed",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"JumpForce",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ActionPause",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackPause",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TurnPause",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FocusRange",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FocusTime",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FarAttackCooldown",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackWait",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSpeedMultiplier",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"NapePosition",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HeadMount",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"NeckMount",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DeathAnimLength",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MoveToExact",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MoveToExactCallback",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Target",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Wander",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Blind",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Cripple",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Attack",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Stun",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__Size>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__Size_g____getter_2_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x181f65e80

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__Size_g____getter_2_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).Size;
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__Size>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__Size_g____setter_2_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f65ec0

void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__Size_g____setter_2_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  float size;
  
  if (Il2CppMethodInitialized_1843457ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843457ea = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  size = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                   (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_181f65f6a;
      Characters_BaseTitan__SetSize((Characters_BaseTitan_o *)pCVar1,size,(MethodInfo *)0x0);
    }
    return;
  }
label_181f65f6a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeedBase>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__RunSpeedBase_g____getter_3_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x181f658c0

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__RunSpeedBase_g____getter_3_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).RunSpeedBase;
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeedBase>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__RunSpeedBase_g____setter_3_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f65900

void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__RunSpeedBase_g____setter_3_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_1843457eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843457eb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_181f659a7;
      (pCVar1->fields).RunSpeedBase = fVar3;
    }
    return;
  }
label_181f659a7:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__WalkSpeedBase>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedBase_g____getter_4_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x181f67340

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedBase_g____getter_4_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).WalkSpeedBase;
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__WalkSpeedBase>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedBase_g____setter_4_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f67380

void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedBase_g____setter_4_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_1843457ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843457ec = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_181f67427;
      (pCVar1->fields).WalkSpeedBase = fVar3;
    }
    return;
  }
label_181f67427:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__WalkSpeedPerLevel>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedPerLevel_g____getter_5_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x181f67430

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedPerLevel_g____getter_5_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).WalkSpeedPerLevel;
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__WalkSpeedPerLevel>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedPerLevel_g____setter_5_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f67470

void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedPerLevel_g____setter_5_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_1843457ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843457ed = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_181f67517;
      (pCVar1->fields).WalkSpeedPerLevel = fVar3;
    }
    return;
  }
label_181f67517:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeedPerLevel>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__RunSpeedPerLevel_g____getter_6_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x181f659b0

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__RunSpeedPerLevel_g____getter_6_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).RunSpeedPerLevel;
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeedPerLevel>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__RunSpeedPerLevel_g____setter_6_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f659f0

void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__RunSpeedPerLevel_g____setter_6_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_1843457ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843457ee = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_181f65a97;
      (pCVar1->fields).RunSpeedPerLevel = fVar3;
    }
    return;
  }
label_181f65a97:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__TurnSpeed>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__TurnSpeed_g____getter_7_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x181f66f80

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__TurnSpeed_g____getter_7_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).TurnSpeed;
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__TurnSpeed>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__TurnSpeed_g____setter_7_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f66fc0

void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__TurnSpeed_g____setter_7_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_1843457ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843457ef = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_181f67067;
      (pCVar1->fields).TurnSpeed = fVar3;
    }
    return;
  }
label_181f67067:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__RotateSpeed>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__RotateSpeed_g____getter_8_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x181f65400

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__RotateSpeed_g____getter_8_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).RotateSpeed;
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__RotateSpeed>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__RotateSpeed_g____setter_8_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f65440

void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__RotateSpeed_g____setter_8_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_1843457f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843457f0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_181f654e7;
      (pCVar1->fields).RotateSpeed = fVar3;
    }
    return;
  }
label_181f654e7:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__JumpForce>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__JumpForce_g____getter_9_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x181f63ba0

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__JumpForce_g____getter_9_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).JumpForce;
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__JumpForce>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__JumpForce_g____setter_9_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f63be0

void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__JumpForce_g____setter_9_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_1843457f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843457f1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_181f63c87;
      (pCVar1->fields).JumpForce = fVar3;
    }
    return;
  }
label_181f63c87:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__ActionPause>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__ActionPause_g____getter_10_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x181f62100

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__ActionPause_g____getter_10_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).ActionPause;
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__ActionPause>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__ActionPause_g____setter_10_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f62140

void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__ActionPause_g____setter_10_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_1843457f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843457f2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_181f621e7;
      (pCVar1->fields).ActionPause = fVar3;
    }
    return;
  }
label_181f621e7:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__AttackPause>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__AttackPause_g____getter_11_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x181f62600

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__AttackPause_g____getter_11_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).AttackPause;
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__AttackPause>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__AttackPause_g____setter_11_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f62640

void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__AttackPause_g____setter_11_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_1843457f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843457f3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_181f626e7;
      (pCVar1->fields).AttackPause = fVar3;
    }
    return;
  }
label_181f626e7:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__TurnPause>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__TurnPause_g____getter_12_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x181f66e90

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__TurnPause_g____getter_12_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).TurnPause;
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__TurnPause>g____setter|12_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__TurnPause_g____setter_12_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f66ed0

void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__TurnPause_g____setter_12_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_1843457f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843457f4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_181f66f77;
      (pCVar1->fields).TurnPause = fVar3;
    }
    return;
  }
label_181f66f77:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__FocusRange>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__FocusRange_g____getter_13_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x181f633d0

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__FocusRange_g____getter_13_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  float local_res8 [8];
  
  if ((__i == (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Shifter, pCVar1 == (Characters_BaseShifter_o *)0x0)) {
label_181f6343d:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar3) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_181f6343d;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__i->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_181f6343d;
      local_res8[0] = (pCVar2->fields).FocusRange;
      goto label_181f63420;
    }
  }
  local_res8[0] = 0.0;
label_181f63420:
  pIVar4 = il2cpp_value_box(g_data_184354e38,local_res8);
  return pIVar4;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__FocusRange>g____setter|13_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__FocusRange_g____setter_13_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f63450

void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__FocusRange_g____setter_13_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_1843457f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843457f5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar3) {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_181f63506;
      if ((pCVar1->fields).AI != false) {
        pCVar2 = (__i->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_181f63506;
        (pCVar2->fields).FocusRange = fVar4;
      }
    }
    return;
  }
label_181f63506:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__FocusTime>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__FocusTime_g____getter_14_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x181f63510

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__FocusTime_g____getter_14_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  float local_res8 [8];
  
  if ((__i == (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Shifter, pCVar1 == (Characters_BaseShifter_o *)0x0)) {
label_181f6357d:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar3) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_181f6357d;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__i->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_181f6357d;
      local_res8[0] = (pCVar2->fields).FocusTime;
      goto label_181f63560;
    }
  }
  local_res8[0] = 0.0;
label_181f63560:
  pIVar4 = il2cpp_value_box(g_data_184354e38,local_res8);
  return pIVar4;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__FocusTime>g____setter|14_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__FocusTime_g____setter_14_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f63590

void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__FocusTime_g____setter_14_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_1843457f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843457f6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar3) {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_181f63646;
      if ((pCVar1->fields).AI != false) {
        pCVar2 = (__i->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_181f63646;
        (pCVar2->fields).FocusTime = fVar4;
      }
    }
    return;
  }
label_181f63646:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__FarAttackCooldown>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__FarAttackCooldown_g____getter_15_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x181f63290

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__FarAttackCooldown_g____getter_15_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  float local_res8 [8];
  
  if ((__i == (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Shifter, pCVar1 == (Characters_BaseShifter_o *)0x0)) {
label_181f63300:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar3) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_181f63300;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__i->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_181f63300;
      local_res8[0] = (pCVar2->fields).FarAttackCooldown;
      goto label_181f632e3;
    }
  }
  local_res8[0] = 0.0;
label_181f632e3:
  pIVar4 = il2cpp_value_box(g_data_184354e38,local_res8);
  return pIVar4;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__FarAttackCooldown>g____setter|15_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__FarAttackCooldown_g____setter_15_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f63310

void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__FarAttackCooldown_g____setter_15_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_1843457f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843457f7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar3) {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_181f633c9;
      if ((pCVar1->fields).AI != false) {
        pCVar2 = (__i->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_181f633c9;
        (pCVar2->fields).FarAttackCooldown = fVar4;
      }
    }
    return;
  }
label_181f633c9:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__AttackWait>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__AttackWait_g____getter_16_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x181f627e0

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__AttackWait_g____getter_16_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  float local_res8 [8];
  
  if ((__i == (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Shifter, pCVar1 == (Characters_BaseShifter_o *)0x0)) {
label_181f62850:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar3) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_181f62850;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__i->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_181f62850;
      local_res8[0] = (pCVar2->fields).AttackWait;
      goto label_181f62833;
    }
  }
  local_res8[0] = 0.0;
label_181f62833:
  pIVar4 = il2cpp_value_box(g_data_184354e38,local_res8);
  return pIVar4;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__AttackWait>g____setter|16_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__AttackWait_g____setter_16_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f62860

void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__AttackWait_g____setter_16_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_1843457f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843457f8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar3) {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_181f62919;
      if ((pCVar1->fields).AI != false) {
        pCVar2 = (__i->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_181f62919;
        (pCVar2->fields).AttackWait = fVar4;
      }
    }
    return;
  }
label_181f62919:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__AttackSpeedMultiplier>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__AttackSpeedMultiplier_g____getter_17_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x181f626f0

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__AttackSpeedMultiplier_g____getter_17_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).AttackSpeedMultiplier;
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__AttackSpeedMultiplier>g____setter|17_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__AttackSpeedMultiplier_g____setter_17_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f62730

void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__AttackSpeedMultiplier_g____setter_17_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_1843457f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843457f9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_181f627d7;
      (pCVar1->fields).AttackSpeedMultiplier = fVar3;
    }
    return;
  }
label_181f627d7:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__NapePosition>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__NapePosition_g____getter_18_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x181f64540

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__NapePosition_g____getter_18_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Characters_BaseShifter_o *pCVar3;
  Characters_BaseTitanComponentCache_o *pCVar4;
  UnityEngine_Component_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Vector3_o *pUVar5;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_1843457c8 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_1843457c8 = '\x01';
    }
    pCVar3 = (__i->fields).Shifter;
    if (((pCVar3 != (Characters_BaseShifter_o *)0x0) &&
        (pCVar4 = (pCVar3->fields).BaseTitanCache, pCVar4 != (Characters_BaseTitanComponentCache_o *)0x0)) &&
       (__this = (UnityEngine_Component_o *)(pCVar4->fields).NapeHurtbox,
       __this != (UnityEngine_Component_o *)0x0)) {
      __this_00 = UnityEngine_Component__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
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
        return (Il2CppObject *)__this_01;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__HeadMount>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__HeadMount_g____getter_19_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x181f638c0

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__HeadMount_g____getter_19_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Characters_BaseTitanComponentCache_o *pCVar2;
  CustomLogic_CustomLogicTransformBuiltin_o *pCVar3;
  
  if (((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) &&
     (pCVar2 = (pCVar1->fields).BaseTitanCache, pCVar2 != (Characters_BaseTitanComponentCache_o *)0x0)) {
    pCVar3 = CustomLogic_CustomLogicTransformBuiltin__op_Implicit((pCVar2->fields).Head,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__NeckMount>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__NeckMount_g____getter_20_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x181f64600

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__NeckMount_g____getter_20_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Characters_BaseTitanComponentCache_o *pCVar2;
  CustomLogic_CustomLogicTransformBuiltin_o *pCVar3;
  
  if (((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) &&
     (pCVar2 = (pCVar1->fields).BaseTitanCache, pCVar2 != (Characters_BaseTitanComponentCache_o *)0x0)) {
    pCVar3 = CustomLogic_CustomLogicTransformBuiltin__op_Implicit((pCVar2->fields).Neck,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__DeathAnimLength>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__DeathAnimLength_g____getter_21_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x181f62f30

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__DeathAnimLength_g____getter_21_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).DeathAnimationLength;
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__DeathAnimLength>g____setter|21_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__DeathAnimLength_g____setter_21_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f62f70

void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__DeathAnimLength_g____setter_21_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_1843457fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843457fa = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_181f63017;
      (pCVar1->fields).DeathAnimationLength = fVar3;
    }
    return;
  }
label_181f63017:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.<>c__DisplayClass61_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin___c__DisplayClass61_0___ctor (CustomLogic_CustomLogicShifterBuiltin___c__DisplayClass61_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicShifterBuiltin___c__DisplayClass61_0___ctor(CustomLogic_CustomLogicShifterBuiltin___c__DisplayClass61_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicShifterBuiltin.<>c__DisplayClass61_0$$<MoveToExactCallback>b__0
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin___c__DisplayClass61_0___MoveToExactCallback_b__0 (CustomLogic_CustomLogicShifterBuiltin___c__DisplayClass61_0_o* __this, const MethodInfo* method);
// 0x181f80650

void CustomLogic_CustomLogicShifterBuiltin___c__DisplayClass61_0___MoveToExactCallback_b__0
               (CustomLogic_CustomLogicShifterBuiltin___c__DisplayClass61_0_o *__this,MethodInfo *method)

{
  CustomLogic_UserMethod_o *userMethod;
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_CustomLogicShifterBuiltin_o *obj;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_184345802 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_184345802 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  userMethod = (__this->fields).method;
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  parameterValues = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  if (parameterValues != (System_Object_array *)0x0) {
    obj = (__this->fields).__4__this;
    if (obj != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((parameterValues->obj).klass)->_1).element_class)
      ;
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((int)parameterValues->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    parameterValues->m_Items[0] = (Il2CppObject *)obj;
    Il2CppCodeGenWriteBarrier(parameterValues->m_Items,obj);
    if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      CustomLogic_CustomLogicEvaluator__EvaluateMethod_20dcd90
                (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin___ctor (CustomLogic_CustomLogicShifterBuiltin_o* __this, Characters_BaseShifter_o* shifter, const MethodInfo* method);
// 0x181f7a5f0

void CustomLogic_CustomLogicShifterBuiltin___ctor
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,Characters_BaseShifter_o *shifter,
               MethodInfo *method)

{
  Controllers_BaseTitanAIController_o *value;
  
  if (Il2CppMethodInitialized_1843457c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_BaseTitanAIController);
    Il2CppMethodInitialized_1843457c7 = '\x01';
  }
  CustomLogic_CustomLogicCharacterBuiltin___ctor
            ((CustomLogic_CustomLogicCharacterBuiltin_o *)__this,(Characters_BaseCharacter_o *)shifter,
             (MethodInfo *)0x0);
  (__this->fields).Shifter = shifter;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Shifter,shifter);
  if (shifter != (Characters_BaseShifter_o *)0x0) {
    value = UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)shifter,
                       (MethodInfo_6651A0 *)
                       MethodInfo_UnityEngine_Component_GetComponent_BaseTitanAIController);
    (__this->fields).Controller = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Controller,value);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_Size
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_Size (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x181f7aa40

float
CustomLogic_CustomLogicShifterBuiltin__get_Size(CustomLogic_CustomLogicShifterBuiltin_o* __this, MethodInfo* method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return (pCVar1->fields).Size;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$set_Size
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_Size (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f7af00

void
CustomLogic_CustomLogicShifterBuiltin__set_Size(CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, MethodInfo* method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_181f7af4d;
      Characters_BaseTitan__SetSize((Characters_BaseTitan_o *)pCVar1,value,(MethodInfo *)0x0);
    }
    return;
  }
label_181f7af4d:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_RunSpeedBase
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_RunSpeedBase (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x181f7aa00

float
CustomLogic_CustomLogicShifterBuiltin__get_RunSpeedBase(CustomLogic_CustomLogicShifterBuiltin_o* __this, MethodInfo* method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return (pCVar1->fields).RunSpeedBase;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$set_RunSpeedBase
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_RunSpeedBase (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f7ae60

void
CustomLogic_CustomLogicShifterBuiltin__set_RunSpeedBase(CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, MethodInfo* method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_181f7aeaa;
      (pCVar1->fields).RunSpeedBase = value;
    }
    return;
  }
label_181f7aeaa:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_WalkSpeedBase
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_WalkSpeedBase (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x181f7aaa0

float
CustomLogic_CustomLogicShifterBuiltin__get_WalkSpeedBase(CustomLogic_CustomLogicShifterBuiltin_o* __this, MethodInfo* method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return (pCVar1->fields).WalkSpeedBase;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$set_WalkSpeedBase
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_WalkSpeedBase (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f7b000

void
CustomLogic_CustomLogicShifterBuiltin__set_WalkSpeedBase(CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, MethodInfo* method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_181f7b04a;
      (pCVar1->fields).WalkSpeedBase = value;
    }
    return;
  }
label_181f7b04a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_WalkSpeedPerLevel
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_WalkSpeedPerLevel (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x181f7aac0

float
CustomLogic_CustomLogicShifterBuiltin__get_WalkSpeedPerLevel(CustomLogic_CustomLogicShifterBuiltin_o* __this, MethodInfo* method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return (pCVar1->fields).WalkSpeedPerLevel;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$set_WalkSpeedPerLevel
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_WalkSpeedPerLevel (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f7b050

void
CustomLogic_CustomLogicShifterBuiltin__set_WalkSpeedPerLevel(CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, MethodInfo* method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_181f7b09a;
      (pCVar1->fields).WalkSpeedPerLevel = value;
    }
    return;
  }
label_181f7b09a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_RunSpeedPerLevel
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_RunSpeedPerLevel (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x181f7aa20

float
CustomLogic_CustomLogicShifterBuiltin__get_RunSpeedPerLevel(CustomLogic_CustomLogicShifterBuiltin_o* __this, MethodInfo* method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return (pCVar1->fields).RunSpeedPerLevel;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$set_RunSpeedPerLevel
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_RunSpeedPerLevel (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f7aeb0

void
CustomLogic_CustomLogicShifterBuiltin__set_RunSpeedPerLevel(CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, MethodInfo* method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_181f7aefa;
      (pCVar1->fields).RunSpeedPerLevel = value;
    }
    return;
  }
label_181f7aefa:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_TurnSpeed
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_TurnSpeed (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x181f7aa80

float
CustomLogic_CustomLogicShifterBuiltin__get_TurnSpeed(CustomLogic_CustomLogicShifterBuiltin_o* __this, MethodInfo* method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return (pCVar1->fields).TurnSpeed;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$set_TurnSpeed
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_TurnSpeed (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f7afb0

void
CustomLogic_CustomLogicShifterBuiltin__set_TurnSpeed(CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, MethodInfo* method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_181f7affa;
      (pCVar1->fields).TurnSpeed = value;
    }
    return;
  }
label_181f7affa:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_RotateSpeed
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_RotateSpeed (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x181f7a9e0

float
CustomLogic_CustomLogicShifterBuiltin__get_RotateSpeed(CustomLogic_CustomLogicShifterBuiltin_o* __this, MethodInfo* method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return (pCVar1->fields).RotateSpeed;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$set_RotateSpeed
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_RotateSpeed (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f7ae10

void
CustomLogic_CustomLogicShifterBuiltin__set_RotateSpeed(CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, MethodInfo* method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_181f7ae5a;
      (pCVar1->fields).RotateSpeed = value;
    }
    return;
  }
label_181f7ae5a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_JumpForce
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_JumpForce (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x181f7a8d0

float
CustomLogic_CustomLogicShifterBuiltin__get_JumpForce(CustomLogic_CustomLogicShifterBuiltin_o* __this, MethodInfo* method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return (pCVar1->fields).JumpForce;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$set_JumpForce
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_JumpForce (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f7adc0

void
CustomLogic_CustomLogicShifterBuiltin__set_JumpForce(CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, MethodInfo* method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_181f7ae0a;
      (pCVar1->fields).JumpForce = value;
    }
    return;
  }
label_181f7ae0a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_ActionPause
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_ActionPause (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x181f7a670

float
CustomLogic_CustomLogicShifterBuiltin__get_ActionPause(CustomLogic_CustomLogicShifterBuiltin_o* __this, MethodInfo* method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return (pCVar1->fields).ActionPause;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$set_ActionPause
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_ActionPause (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f7aae0

void
CustomLogic_CustomLogicShifterBuiltin__set_ActionPause(CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, MethodInfo* method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_181f7ab2a;
      (pCVar1->fields).ActionPause = value;
    }
    return;
  }
label_181f7ab2a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_AttackPause
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_AttackPause (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x181f7a690

float
CustomLogic_CustomLogicShifterBuiltin__get_AttackPause(CustomLogic_CustomLogicShifterBuiltin_o* __this, MethodInfo* method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return (pCVar1->fields).AttackPause;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$set_AttackPause
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_AttackPause (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f7ab30

void
CustomLogic_CustomLogicShifterBuiltin__set_AttackPause(CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, MethodInfo* method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_181f7ab7a;
      (pCVar1->fields).AttackPause = value;
    }
    return;
  }
label_181f7ab7a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_TurnPause
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_TurnPause (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x181f7aa60

float
CustomLogic_CustomLogicShifterBuiltin__get_TurnPause(CustomLogic_CustomLogicShifterBuiltin_o* __this, MethodInfo* method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return (pCVar1->fields).TurnPause;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$set_TurnPause
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_TurnPause (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f7af60

void
CustomLogic_CustomLogicShifterBuiltin__set_TurnPause(CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, MethodInfo* method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_181f7afaa;
      (pCVar1->fields).TurnPause = value;
    }
    return;
  }
label_181f7afaa:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_FocusRange
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_FocusRange (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x181f7a7e0

float
CustomLogic_CustomLogicShifterBuiltin__get_FocusRange(CustomLogic_CustomLogicShifterBuiltin_o* __this, MethodInfo* method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar3) {
      return 0.0;
    }
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      if ((pCVar1->fields).AI == false) {
        return 0.0;
      }
      pCVar2 = (__this->fields).Controller;
      if (pCVar2 != (Controllers_BaseTitanAIController_o *)0x0) {
        return (pCVar2->fields).FocusRange;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$set_FocusRange
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_FocusRange (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f7ad00

void
CustomLogic_CustomLogicShifterBuiltin__set_FocusRange(CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, MethodInfo* method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar3) {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_181f7ad59;
      if ((pCVar1->fields).AI != false) {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_181f7ad59;
        (pCVar2->fields).FocusRange = value;
      }
    }
    return;
  }
label_181f7ad59:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_FocusTime
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_FocusTime (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x181f7a840

float
CustomLogic_CustomLogicShifterBuiltin__get_FocusTime(CustomLogic_CustomLogicShifterBuiltin_o* __this, MethodInfo* method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar3) {
      return 0.0;
    }
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      if ((pCVar1->fields).AI == false) {
        return 0.0;
      }
      pCVar2 = (__this->fields).Controller;
      if (pCVar2 != (Controllers_BaseTitanAIController_o *)0x0) {
        return (pCVar2->fields).FocusTime;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$set_FocusTime
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_FocusTime (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f7ad60

void
CustomLogic_CustomLogicShifterBuiltin__set_FocusTime(CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, MethodInfo* method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar3) {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_181f7adb9;
      if ((pCVar1->fields).AI != false) {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_181f7adb9;
        (pCVar2->fields).FocusTime = value;
      }
    }
    return;
  }
label_181f7adb9:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_FarAttackCooldown
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_FarAttackCooldown (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x181f7a780

float
CustomLogic_CustomLogicShifterBuiltin__get_FarAttackCooldown(CustomLogic_CustomLogicShifterBuiltin_o* __this, MethodInfo* method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar3) {
      return 0.0;
    }
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      if ((pCVar1->fields).AI == false) {
        return 0.0;
      }
      pCVar2 = (__this->fields).Controller;
      if (pCVar2 != (Controllers_BaseTitanAIController_o *)0x0) {
        return (pCVar2->fields).FarAttackCooldown;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$set_FarAttackCooldown
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_FarAttackCooldown (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f7ac90

void
CustomLogic_CustomLogicShifterBuiltin__set_FarAttackCooldown(CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, MethodInfo* method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar3) {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_181f7acec;
      if ((pCVar1->fields).AI != false) {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_181f7acec;
        (pCVar2->fields).FarAttackCooldown = value;
      }
    }
    return;
  }
label_181f7acec:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_AttackWait
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_AttackWait (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x181f7a6d0

float
CustomLogic_CustomLogicShifterBuiltin__get_AttackWait(CustomLogic_CustomLogicShifterBuiltin_o* __this, MethodInfo* method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar3) {
      return 0.0;
    }
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      if ((pCVar1->fields).AI == false) {
        return 0.0;
      }
      pCVar2 = (__this->fields).Controller;
      if (pCVar2 != (Controllers_BaseTitanAIController_o *)0x0) {
        return (pCVar2->fields).AttackWait;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$set_AttackWait
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_AttackWait (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f7abd0

void
CustomLogic_CustomLogicShifterBuiltin__set_AttackWait(CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, MethodInfo* method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar3) {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_181f7ac2c;
      if ((pCVar1->fields).AI != false) {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_181f7ac2c;
        (pCVar2->fields).AttackWait = value;
      }
    }
    return;
  }
label_181f7ac2c:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_AttackSpeedMultiplier
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_AttackSpeedMultiplier (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x181f7a6b0

float CustomLogic_CustomLogicShifterBuiltin__get_AttackSpeedMultiplier
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    return (pCVar1->fields).AttackSpeedMultiplier;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$set_AttackSpeedMultiplier
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_AttackSpeedMultiplier (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f7ab80

void
CustomLogic_CustomLogicShifterBuiltin__set_AttackSpeedMultiplier(CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, MethodInfo* method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_181f7abca;
      (pCVar1->fields).AttackSpeedMultiplier = value;
    }
    return;
  }
label_181f7abca:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_NapePosition
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicShifterBuiltin__get_NapePosition (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x181f7a8f0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicShifterBuiltin__get_NapePosition
          (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  Characters_BaseShifter_o *pCVar3;
  Characters_BaseTitanComponentCache_o *pCVar4;
  UnityEngine_Component_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o *pUVar5;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_1843457c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_1843457c8 = '\x01';
  }
  pCVar3 = (__this->fields).Shifter;
  if (((pCVar3 != (Characters_BaseShifter_o *)0x0) &&
      (pCVar4 = (pCVar3->fields).BaseTitanCache, pCVar4 != (Characters_BaseTitanComponentCache_o *)0x0)) &&
     (__this_00 = (UnityEngine_Component_o *)(pCVar4->fields).NapeHurtbox,
     __this_00 != (UnityEngine_Component_o *)0x0)) {
    __this_01 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      pUVar5 = UnityEngine_Transform__get_position
                         ((UnityEngine_Vector3_o *)local_28,__this_01,(MethodInfo *)0x0);
      uVar1._0_4_ = (pUVar5->fields).x;
      uVar1._4_4_ = (pUVar5->fields).y;
      fVar2 = (pUVar5->fields).z;
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      local_28[0]._0_8_ = uVar1;
      local_28[0].z = fVar2;
      CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
                (__this_02,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
      return __this_02;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_HeadMount
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicShifterBuiltin__get_HeadMount (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x181f7a8a0

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicShifterBuiltin__get_HeadMount
          (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Characters_BaseTitanComponentCache_o *pCVar2;
  CustomLogic_CustomLogicTransformBuiltin_o *pCVar3;
  
  pCVar1 = (__this->fields).Shifter;
  if ((pCVar1 != (Characters_BaseShifter_o *)0x0) &&
     (pCVar2 = (pCVar1->fields).BaseTitanCache, pCVar2 != (Characters_BaseTitanComponentCache_o *)0x0)) {
    pCVar3 = CustomLogic_CustomLogicTransformBuiltin__op_Implicit((pCVar2->fields).Head,(MethodInfo *)0x0);
    return pCVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_NeckMount
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicShifterBuiltin__get_NeckMount (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x181f7a9b0

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicShifterBuiltin__get_NeckMount
          (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Characters_BaseTitanComponentCache_o *pCVar2;
  CustomLogic_CustomLogicTransformBuiltin_o *pCVar3;
  
  pCVar1 = (__this->fields).Shifter;
  if ((pCVar1 != (Characters_BaseShifter_o *)0x0) &&
     (pCVar2 = (pCVar1->fields).BaseTitanCache, pCVar2 != (Characters_BaseTitanComponentCache_o *)0x0)) {
    pCVar3 = CustomLogic_CustomLogicTransformBuiltin__op_Implicit((pCVar2->fields).Neck,(MethodInfo *)0x0);
    return pCVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_DeathAnimLength
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_DeathAnimLength (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x181f7a760

float CustomLogic_CustomLogicShifterBuiltin__get_DeathAnimLength
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    return (pCVar1->fields).DeathAnimationLength;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$set_DeathAnimLength
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_DeathAnimLength (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f7ac40

void CustomLogic_CustomLogicShifterBuiltin__set_DeathAnimLength
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_181f7ac8a;
      (pCVar1->fields).DeathAnimationLength = value;
    }
    return;
  }
label_181f7ac8a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$MoveToExact
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__MoveToExact (CustomLogic_CustomLogicShifterBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* position, float timeoutPadding, const MethodInfo* method);
// 0x181f7a3e0

void CustomLogic_CustomLogicShifterBuiltin__MoveToExact
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *position,float timeoutPadding,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *__this_00;
  bool bVar2;
  UnityEngine_Vector3_Fields local_28 [2];
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_181f7a47b;
      if (((pCVar1->fields).Dead == false) && ((pCVar1->fields).AI != false)) {
        if ((position == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
           (__this_00 = (__this->fields).Controller, __this_00 == (Controllers_BaseTitanAIController_o *)0x0))
        goto label_181f7a47b;
        local_28[0].x = (position->fields).Value.fields.x;
        local_28[0].y = (position->fields).Value.fields.y;
        local_28[0].z = (position->fields).Value.fields.z;
        Controllers_BaseTitanAIController__MoveToExact
                  (__this_00,(UnityEngine_Vector3_o *)local_28,10.0,timeoutPadding,(MethodInfo *)0x0);
      }
    }
    return;
  }
label_181f7a47b:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$MoveToExactCallback
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__MoveToExactCallback (CustomLogic_CustomLogicShifterBuiltin_o* __this, CustomLogic_UserMethod_o* method, CustomLogic_CustomLogicVector3Builtin_o* position, float range, float timeoutPadding, const MethodInfo* method);
// 0x181f7a280

void CustomLogic_CustomLogicShifterBuiltin__MoveToExactCallback
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,CustomLogic_UserMethod_o *method,
               CustomLogic_CustomLogicVector3Builtin_o *position,float range,float timeoutPadding,
               MethodInfo *methodInfo)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *__this_00;
  bool bVar2;
  CustomLogic_CustomLogicShifterBuiltin___c__DisplayClass61_0_o *object;
  System_Action_o *__this_01;
  UnityEngine_Vector3_Fields local_48 [3];
  
  if (Il2CppMethodInitialized_1843457c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicShifterBuiltin_c__DisplayClass61_0_MoveToExactCallback_b__0)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_c__DisplayClass61_0);
    Il2CppMethodInitialized_1843457c9 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_c__DisplayClass61_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (CustomLogic_CustomLogicShifterBuiltin___c__DisplayClass61_0_o *)0x0) {
    (object->fields).method = method;
    Il2CppCodeGenWriteBarrier(&(object->fields).method,method);
    (object->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(object->fields).__4__this,__this);
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__this->fields).Shifter;
        if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_181f7a3ce;
        if (((pCVar1->fields).Dead == false) && ((pCVar1->fields).AI != false)) {
          __this_00 = (__this->fields).Controller;
          __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
          System_Action___ctor
                    ((UnityEngine_Font_FontTextureRebuildCallback_o *)__this_01,(Il2CppObject *)object,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicShifterBuiltin_c__DisplayClass61_0_MoveToExactCallback_b__0
                     ,(MethodInfo *)0x0);
          if ((position == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
             (__this_00 == (Controllers_BaseTitanAIController_o *)0x0)) goto label_181f7a3ce;
          local_48[0].x = (position->fields).Value.fields.x;
          local_48[0].y = (position->fields).Value.fields.y;
          local_48[0].z = (position->fields).Value.fields.z;
          Controllers_BaseTitanAIController__MoveToExactCallback
                    (__this_00,__this_01,(UnityEngine_Vector3_o *)local_48,range,timeoutPadding,
                     (MethodInfo *)0x0);
        }
      }
      return;
    }
  }
label_181f7a3ce:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$Target
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__Target (CustomLogic_CustomLogicShifterBuiltin_o* __this, Il2CppObject* enemyObj, float focus, const MethodInfo* method);
// 0x181f7a580

void
CustomLogic_CustomLogicShifterBuiltin__Target(CustomLogic_CustomLogicShifterBuiltin_o* __this, Il2CppObject* enemyObj, float focus, MethodInfo* method)

{
  CustomLogic_CustomLogicCharacterBuiltin__SetTarget
            ((CustomLogic_CustomLogicCharacterBuiltin_o *)__this,enemyObj,focus,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicShifterBuiltin$$Wander
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__Wander (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x181f7a590

void
CustomLogic_CustomLogicShifterBuiltin__Wander(CustomLogic_CustomLogicShifterBuiltin_o* __this, MethodInfo* method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      if ((pCVar1->fields).Dead != false) {
        return;
      }
      if ((pCVar1->fields).AI == false) {
        return;
      }
      __this_00 = (__this->fields).Controller;
      if (__this_00 != (Controllers_BaseTitanAIController_o *)0x0) {
        Controllers_BaseTitanAIController__CancelOrder(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$Blind
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__Blind (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x181f7a1b0

void
CustomLogic_CustomLogicShifterBuiltin__Blind(CustomLogic_CustomLogicShifterBuiltin_o* __this, MethodInfo* method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_181f7a204;
      if ((pCVar1->fields).Dead == false) {
        (*(pCVar1->klass->vtable)._168_Blind.methodPtr)(pCVar1,(pCVar1->klass->vtable)._168_Blind.method);
        return;
      }
    }
    return;
  }
label_181f7a204:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$Cripple
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__Cripple (CustomLogic_CustomLogicShifterBuiltin_o* __this, float time, const MethodInfo* method);
// 0x181f7a210

void
CustomLogic_CustomLogicShifterBuiltin__Cripple(CustomLogic_CustomLogicShifterBuiltin_o* __this, float time, MethodInfo* method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_181f7a26e;
      if ((pCVar1->fields).Dead == false) {
        (*(pCVar1->klass->vtable)._169_Cripple.methodPtr)
                  (pCVar1,time,(pCVar1->klass->vtable)._169_Cripple.method);
      }
    }
    return;
  }
label_181f7a26e:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$Attack
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__Attack (CustomLogic_CustomLogicShifterBuiltin_o* __this, System_String_o* attack, const MethodInfo* method);
// 0x181f7a130

void CustomLogic_CustomLogicShifterBuiltin__Attack
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,System_String_o *attack,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_181f7a1aa;
      if ((pCVar1->fields).Dead == false) {
        bVar2 = (*(pCVar1->klass->vtable)._151_CanAttack.methodPtr)
                          (pCVar1,(pCVar1->klass->vtable)._151_CanAttack.method);
        if (bVar2) {
          pCVar1 = (__this->fields).Shifter;
          if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_181f7a1aa;
          (*(pCVar1->klass->vtable)._150_Attack.methodPtr)
                    (pCVar1,attack,(pCVar1->klass->vtable)._150_Attack.method);
        }
      }
    }
    return;
  }
label_181f7a1aa:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$Stun
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__Stun (CustomLogic_CustomLogicShifterBuiltin_o* __this, float duration, const MethodInfo* method);
// 0x181f7a490

void CustomLogic_CustomLogicShifterBuiltin__Stun
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float duration,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseShifter_o *pCVar2;
  Characters_WallColossalShifter_o *__this_00;
  Characters_WallColossalShifter_c *pCVar3;
  bool bVar4;
  
  if (Il2CppMethodInitialized_1843457ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_WallColossalShifter);
    Il2CppMethodInitialized_1843457ca = '\x01';
  }
  pCVar2 = (__this->fields).Shifter;
  if (pCVar2 == (Characters_BaseShifter_o *)0x0) {
label_181f7a56c:
    ThrowNullReferenceException();
  }
  bVar4 = (*(pCVar2->klass->vtable)._74_IsMine.methodPtr)(pCVar2,(pCVar2->klass->vtable)._74_IsMine.method);
  if (bVar4) {
    __this_00 = (Characters_WallColossalShifter_o *)(__this->fields).Shifter;
    if (__this_00 == (Characters_WallColossalShifter_o *)0x0) goto label_181f7a56c;
    if ((__this_00->fields).Dead == false) {
      pCVar3 = __this_00->klass;
      bVar1 = (TypeInfo_Characters_WallColossalShifter->_2).typeHierarchyDepth;
      if (((pCVar3->_2).typeHierarchyDepth < bVar1) ||
         ((pCVar3->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_Characters_WallColossalShifter)) {
        if (duration == 0.0) {
          duration = (__this_00->fields).StunTime;
        }
        (*(pCVar3->vtable)._155_Stun.methodPtr)(__this_00,duration,true,(pCVar3->vtable)._155_Stun.method);
        return;
      }
      Characters_WallColossalShifter__EnterStunState(__this_00,duration,true,(MethodInfo *)0x0);
    }
  }
  return;
}


// CustomLogic.CustomLogicShifterBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterBuiltin__get_ClassName (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x181f7a730

System_String_o *
CustomLogic_CustomLogicShifterBuiltin__get_ClassName
          (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843457cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter");
    Il2CppMethodInitialized_1843457cb = '\x01';
  }
  return "Shifter";
}


// CustomLogic.CustomLogicShifterBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicShifterBuiltin__get_IsAbstract (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicShifterBuiltin__get_IsAbstract(CustomLogic_CustomLogicShifterBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicShifterBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicShifterBuiltin__get_IsStatic (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicShifterBuiltin__get_IsStatic(CustomLogic_CustomLogicShifterBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicShifterBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicShifterBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicShifterBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicShifterBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


