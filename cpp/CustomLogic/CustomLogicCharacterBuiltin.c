// Type: CustomLogic.CustomLogicCharacterBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicCharacterBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicCharacterBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicCharacterBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicCharacterBuiltin_o* CustomLogic_CustomLogicCharacterBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a0e260

CustomLogic_CustomLogicCharacterBuiltin_o *
CustomLogic_CustomLogicCharacterBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  NullCheck(args);
  pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicCharacterBuiltin constructor found that takes ");
  str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
  pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_54186d0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5a15850

void CustomLogic_CustomLogicCharacterBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07545f79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    Il2CppMethodInitialized_07545f79 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5a158c0

void CustomLogic_CustomLogicCharacterBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetTarget>b__34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__GetTarget_b__34_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a158d0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__GetTarget_b__34_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Controllers_BaseAIController_o *__this_00;
  Characters_ITargetable_o *target;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  
  if (__c == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this_00 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__c,(MethodInfo *)__c);
  if (__this_00 == (Controllers_BaseAIController_o *)0x0) {
    pIVar1 = CustomLogic_CustomLogicCharacterBuiltin__WrapTarget
                       ((Characters_ITargetable_o *)0x0,(MethodInfo *)__c);
    return pIVar1;
  }
  method_00 = (MethodInfo *)0x0;
  target = Controllers_BaseAIController__GetTarget(__this_00,(MethodInfo *)0x0);
  pIVar1 = CustomLogic_CustomLogicCharacterBuiltin__WrapTarget(target,method_00);
  return pIVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetTarget>b__35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__SetTarget_b__35_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a15910

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__SetTarget_b__35_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *target;
  Il2CppObject *obj;
  System_Object_array *extraout_RDX;
  System_Object_array *extraout_RDX_00;
  System_Object_array *method_00;
  float focusDuration;
  
  method_00 = __a;
  if (Il2CppMethodInitialized_07545f7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f7a = '\x01';
    method_00 = extraout_RDX;
  }
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if (iVar1 == 0) {
      ThrowIndexOutOfRangeException();
    }
    target = __a->m_Items[0];
    focusDuration = 0.0;
    if (1 < iVar1) {
      obj = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      focusDuration =
           CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      method_00 = extraout_RDX_00;
    }
    if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      CustomLogic_CustomLogicCharacterBuiltin__SetTarget(__c,target,focusDuration,(MethodInfo *)method_00);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClearTarget>b__36_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__ClearTarget_b__36_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a159b0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__ClearTarget_b__36_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Controllers_BaseAIController_o *__this_00;
  
  if (__c == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this_00 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__c,(MethodInfo *)__c);
  if (__this_00 != (Controllers_BaseAIController_o *)0x0) {
    Controllers_BaseAIController__ClearTarget(__this_00,(MethodInfo *)0x0);
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetNearestEnemy>b__37_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__GetNearestEnemy_b__37_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a159e0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__GetNearestEnemy_b__37_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Controllers_BaseAIController_o *__this_00;
  Characters_ITargetable_o *target;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  
  if (__c == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this_00 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__c,(MethodInfo *)__c);
  if (__this_00 == (Controllers_BaseAIController_o *)0x0) {
    pIVar1 = CustomLogic_CustomLogicCharacterBuiltin__WrapTarget
                       ((Characters_ITargetable_o *)0x0,(MethodInfo *)__c);
    return pIVar1;
  }
  method_00 = (MethodInfo *)0x0;
  target = Controllers_BaseAIController__GetNearestEnemy(__this_00,(MethodInfo *)0x0);
  pIVar1 = CustomLogic_CustomLogicCharacterBuiltin__WrapTarget(target,method_00);
  return pIVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__TargetNearestEnemy>b__38_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__TargetNearestEnemy_b__38_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a15a20

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__TargetNearestEnemy_b__38_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Controllers_BaseAIController_o *__this_00;
  MethodInfo *method_00;
  float fStack_14;
  
  method_00 = (MethodInfo *)__c;
  if (Il2CppMethodInitialized_07545f7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f7b = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if (__a->max_length == 0) {
      fStack_14 = 0.0;
    }
    else {
      if ((int)__a->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
      fStack_14 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                            (obj,(MethodInfo_34BDFE0 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    }
    if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      __this_00 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__c,method_00);
      if (__this_00 != (Controllers_BaseAIController_o *)0x0) {
        Controllers_BaseAIController__TargetNearestEnemy(__this_00,fStack_14,(MethodInfo *)0x0);
      }
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__MoveTo>b__39_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__MoveTo_b__39_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a15ae0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__MoveTo_b__39_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool ignoreEnemies;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  float range;
  
  if (Il2CppMethodInitialized_07545f7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f7c = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05a15bee:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    position = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (pIVar1,(MethodInfo_34BDE00 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                         );
    if ((__a->max_length & 0xfffffffe) != 0) {
      range = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[1],
                         (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if ((int)__a->max_length < 3) {
        ignoreEnemies = false;
      }
      else {
        pIVar1 = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        ignoreEnemies =
             CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                       (pIVar1,(MethodInfo_34BD860 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      }
      if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
        CustomLogic_CustomLogicCharacterBuiltin__MoveTo(__c,position,range,ignoreEnemies,method);
        return (Il2CppObject *)0x0;
      }
      goto label_05a15bee;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__MoveToTarget>b__40_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__MoveToTarget_b__40_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a15c00

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__MoveToTarget_b__40_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *target;
  Il2CppObject *pIVar2;
  bool ignoreEnemies;
  float range;
  
  if (Il2CppMethodInitialized_07545f7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f7d = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
      ThrowIndexOutOfRangeException();
    }
    target = __a->m_Items[0];
    pIVar2 = __a->m_Items[1];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    range = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (pIVar2,(MethodInfo_34BDFE0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((int)__a->max_length < 3) {
      ignoreEnemies = false;
    }
    else {
      pIVar2 = __a->m_Items[2];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      ignoreEnemies =
           CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                     (pIVar2,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool)
      ;
    }
    if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      CustomLogic_CustomLogicCharacterBuiltin__MoveToTarget(__c,target,range,ignoreEnemies,method);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__Idle>b__41_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__Idle_b__41_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a15d10

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__Idle_b__41_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  MethodInfo *method_00;
  float time;
  
  method_00 = (MethodInfo *)__c;
  if (Il2CppMethodInitialized_07545f7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f7e = '\x01';
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
      method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
      time = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                       (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float)
      ;
    }
    if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      CustomLogic_CustomLogicCharacterBuiltin__Idle(__c,time,method_00);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetDisplayName>b__42_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__SetDisplayName_b__42_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a15db0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__SetDisplayName_b__42_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Characters_BaseCharacter_o *pCVar2;
  bool bVar3;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_07545f7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f7f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (pIVar1,(MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    bVar3 = true;
    if (1 < (int)__a->max_length) {
      pIVar1 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      bVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                        (pIVar1,(MethodInfo_34BD860 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    }
    if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      pCVar2 = (__c->fields).Character;
      if (value == (System_String_o *)0x0) {
        value = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
      }
      if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
        Characters_BaseCharacter__set_Name(pCVar2,value,(MethodInfo *)0x0);
        pCVar2 = (__c->fields).Character;
        if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
          if ((pCVar2->fields).AI != false) {
            if (bVar3 == false) {
              bVar3 = false;
            }
            else {
              bVar3 = System_String__IsNullOrWhiteSpace((pCVar2->fields).VisibleName,(MethodInfo *)0x0);
              bVar3 = !bVar3;
            }
            (pCVar2->fields).HasExplicitNameTag = bVar3;
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
// 0x5a15ee0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__GetKilled_b__43_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Characters_BaseCharacter_o *pCVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07545f80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f80 = '\x01';
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
                       (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                       );
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
// 0x5a15f80

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__GetDamaged_b__44_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Characters_BaseCharacter_o *pCVar1;
  int32_t iVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_07545f81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f81 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05a16042:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                       );
    if ((__a->max_length & 0xfffffffe) != 0) {
      iVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        (__a->m_Items[1],
                         (MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
      if ((__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
         (pCVar1 = (__c->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) {
        (*(pCVar1->klass->vtable)._97_GetDamaged.methodPtr)
                  (pCVar1,pSVar3,iVar2,(pCVar1->klass->vtable)._97_GetDamaged.method);
        return (Il2CppObject *)0x0;
      }
      goto label_05a16042;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__Emote>b__45_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__Emote_b__45_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a16050

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__Emote_b__45_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_07545f82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f82 = '\x01';
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
                       (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                       );
    if ((__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
       (pCVar1 = (__c->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__c->fields).Character;
        if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_05a16113;
        if ((pCVar1->fields).Dead == false) {
          (*(pCVar1->klass->vtable)._80_Emote.methodPtr)
                    (pCVar1,pSVar3,(pCVar1->klass->vtable)._80_Emote.method);
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
label_05a16113:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayAnimation>b__46_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimation_b__46_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a16120

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimation_b__46_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Characters_BaseCharacter_o *pCVar2;
  bool bVar3;
  System_String_o *animation;
  float fadeTime;
  
  if (Il2CppMethodInitialized_07545f83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f83 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    animation = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (pIVar1,(MethodInfo_34BDE00 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((int)__a->max_length < 2) {
      fadeTime = 0.1;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      fadeTime = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                           (pIVar1,(MethodInfo_34BDFE0 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    }
    if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      pCVar2 = (__c->fields).Character;
      if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
        bVar3 = (*(pCVar2->klass->vtable)._74_IsMine.methodPtr)
                          (pCVar2,(pCVar2->klass->vtable)._74_IsMine.method);
        if (bVar3) {
          pCVar2 = (__c->fields).Character;
          if (pCVar2 == (Characters_BaseCharacter_o *)0x0) goto label_05a16237;
          if ((pCVar2->fields).Dead == false) {
            Characters_BaseCharacter__CrossFadeIfNotPlaying(pCVar2,animation,fadeTime,0.0,(MethodInfo *)0x0);
          }
        }
        return (Il2CppObject *)0x0;
      }
    }
  }
label_05a16237:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlayAnimationAt>b__47_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimationAt_b__47_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a16250

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__PlayAnimationAt_b__47_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Characters_BaseCharacter_o *pCVar2;
  bool bVar3;
  bool bVar4;
  System_String_o *animation;
  float startTime;
  float fStack_38;
  
  if (Il2CppMethodInitialized_07545f84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f84 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) goto label_05a163ee;
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    animation = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (pIVar1,(MethodInfo_34BDE00 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      startTime = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                            (__a->m_Items[1],
                             (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float
                            );
      if ((int)__a->max_length < 3) {
        fStack_38 = 0.1;
        bVar3 = false;
      }
      else {
        pIVar1 = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        fStack_38 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                              (pIVar1,(MethodInfo_34BDFE0 *)
                                      MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        if ((int)__a->max_length < 4) {
          bVar3 = false;
        }
        else {
          pIVar1 = __a->m_Items[3];
          if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
          }
          bVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                            (pIVar1,(MethodInfo_34BD860 *)
                                    MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
        }
      }
      if ((__c == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) ||
         (pCVar2 = (__c->fields).Character, pCVar2 == (Characters_BaseCharacter_o *)0x0)) {
label_05a163ee:
        ThrowNullReferenceException();
      }
      bVar4 = (*(pCVar2->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar2,(pCVar2->klass->vtable)._74_IsMine.method);
      if (bVar4) {
        pCVar2 = (__c->fields).Character;
        if (pCVar2 == (Characters_BaseCharacter_o *)0x0) goto label_05a163ee;
        if ((pCVar2->fields).Dead == false) {
          if (bVar3 == false) {
            Characters_BaseCharacter__CrossFadeIfNotPlaying
                      (pCVar2,animation,fStack_38,startTime,(MethodInfo *)0x0);
          }
          else {
            Characters_BaseCharacter__CrossFade(pCVar2,animation,fStack_38,startTime,(MethodInfo *)0x0);
          }
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationSpeed>b__48_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationSpeed_b__48_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a16400

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationSpeed_b__48_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  System_String_o *animation;
  Il2CppObject *pIVar3;
  float fStack_1c;
  
  if (Il2CppMethodInitialized_07545f85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f85 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar3 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    animation = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (pIVar3,(MethodInfo_34BDE00 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
       (pCVar1 = (__c->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      fStack_1c = 1.0;
      if (bVar2) {
        pCVar1 = (__c->fields).Character;
        if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_05a164e3;
        if ((pCVar1->fields).Dead == false) {
          fStack_1c = Characters_BaseCharacter__GetAnimationSpeed(pCVar1,animation,(MethodInfo *)0x0);
        }
      }
      pIVar3 = il2cpp_vm_Object_Box(g_data_07556740,&fStack_1c);
      return pIVar3;
    }
  }
label_05a164e3:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetAnimationSpeed>b__49_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__SetAnimationSpeed_b__49_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a164f0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__SetAnimationSpeed_b__49_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Characters_BaseCharacter_o *pCVar2;
  bool bVar3;
  bool bVar4;
  System_String_o *animation;
  float speed;
  
  if (Il2CppMethodInitialized_07545f86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f86 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) goto label_05a16644;
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    animation = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (pIVar1,(MethodInfo_34BDE00 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__a->max_length & 0xfffffffe) != 0) {
      speed = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (__a->m_Items[1],
                         (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      bVar3 = true;
      if (2 < (int)__a->max_length) {
        pIVar1 = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        bVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                          (pIVar1,(MethodInfo_34BD860 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
      }
      if ((__c == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) ||
         (pCVar2 = (__c->fields).Character, pCVar2 == (Characters_BaseCharacter_o *)0x0)) {
label_05a16644:
        ThrowNullReferenceException();
      }
      bVar4 = (*(pCVar2->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar2,(pCVar2->klass->vtable)._74_IsMine.method);
      if (bVar4) {
        pCVar2 = (__c->fields).Character;
        if (pCVar2 == (Characters_BaseCharacter_o *)0x0) goto label_05a16644;
        if ((pCVar2->fields).Dead == false) {
          if (bVar3 == false) {
            Characters_BaseCharacter__SetAnimationSpeedNonRPC(pCVar2,animation,speed,(MethodInfo *)0x0);
          }
          else {
            Characters_BaseCharacter__SetAnimationSpeed(pCVar2,animation,speed,(MethodInfo *)0x0);
          }
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsPlayingAnimation>b__50_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__IsPlayingAnimation_b__50_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a16650

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__IsPlayingAnimation_b__50_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  bool bVar2;
  undefined8 in_RAX;
  System_String_o *name;
  Il2CppObject *pIVar3;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (Il2CppMethodInitialized_07545f87 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f87 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar3 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    name = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (pIVar3,(MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (((__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
        (pCVar1 = (__c->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) &&
       (__this_00 = (pCVar1->fields).Animation, __this_00 != (Characters_AnimationHandler_o *)0x0)) {
      bVar2 = Characters_AnimationHandler__IsPlaying(__this_00,name,(MethodInfo *)0x0);
      uStack_18 = CONCAT17(bVar2,(undefined7)uStack_18);
      pIVar3 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_18 + 7));
      return pIVar3;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationNormalizedTime>b__51_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationNormalizedTime_b__51_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a16710
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a167c9: movss xmm0, dword ptr [rip - 0x4a54f6d]

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
  undefined1 auStack_14 [4];
  
  if (Il2CppMethodInitialized_07545f88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f88 = '\x01';
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
                     (pIVar4,(MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (((__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
        (pCVar1 = (__c->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) &&
       (pCVar2 = (pCVar1->fields).Animation, pCVar2 != (Characters_AnimationHandler_o *)0x0)) {
      bVar3 = Characters_AnimationHandler__IsPlaying(pCVar2,name,(MethodInfo *)0x0);
      if (bVar3) {
        pCVar1 = (__c->fields).Character;
        if ((pCVar1 == (Characters_BaseCharacter_o *)0x0) ||
           (pCVar2 = (pCVar1->fields).Animation, pCVar2 == (Characters_AnimationHandler_o *)0x0))
        goto label_05a167f4;
        Characters_AnimationHandler__GetCurrentNormalizedTime(pCVar2,(MethodInfo *)0x0);
      }
      pIVar4 = il2cpp_vm_Object_Box(g_data_07556740,auStack_14);
      return pIVar4;
    }
  }
label_05a167f4:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__ForceAnimation>b__52_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__ForceAnimation_b__52_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a16800

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__ForceAnimation_b__52_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Characters_BaseCharacter_o *pCVar2;
  bool bVar3;
  System_String_o *pSVar4;
  float fVar5;
  
  if (Il2CppMethodInitialized_07545f89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f89 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar1,(MethodInfo_34BDE00 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((int)__a->max_length < 2) {
      fVar5 = 0.1;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      fVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (pIVar1,(MethodInfo_34BDFE0 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    }
    if ((__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
       (pCVar2 = (__c->fields).Character, pCVar2 != (Characters_BaseCharacter_o *)0x0)) {
      bVar3 = (*(pCVar2->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar2,(pCVar2->klass->vtable)._74_IsMine.method);
      if (bVar3) {
        pCVar2 = (__c->fields).Character;
        if (pCVar2 == (Characters_BaseCharacter_o *)0x0) goto label_05a1691d;
        if ((pCVar2->fields).Dead == false) {
          (*(pCVar2->klass->vtable)._81_ForceAnimation.methodPtr)
                    (pCVar2,pSVar4,fVar5,(pCVar2->klass->vtable)._81_ForceAnimation.method);
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
label_05a1691d:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetAnimationLength>b__53_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationLength_b__53_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a16930

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__GetAnimationLength_b__53_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  System_String_o *name;
  Il2CppObject *pIVar2;
  undefined1 auStack_14 [4];
  
  if (Il2CppMethodInitialized_07545f8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f8a = '\x01';
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
                     (pIVar2,(MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (((__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
        (pCVar1 = (__c->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) &&
       (__this_00 = (pCVar1->fields).Animation, __this_00 != (Characters_AnimationHandler_o *)0x0)) {
      Characters_AnimationHandler__GetLength(__this_00,name,(MethodInfo *)0x0);
      pIVar2 = il2cpp_vm_Object_Box(g_data_07556740,auStack_14);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__IsPlayingSound>b__54_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__IsPlayingSound_b__54_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a169f0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__IsPlayingSound_b__54_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this_00;
  bool bVar1;
  undefined8 in_RAX;
  System_String_o *sound;
  Il2CppObject *pIVar2;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (Il2CppMethodInitialized_07545f8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f8b = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    sound = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (pIVar2,(MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Character, __this_00 != (Characters_BaseCharacter_o *)0x0)) {
      bVar1 = Characters_BaseCharacter__IsPlayingSound(__this_00,sound,(MethodInfo *)0x0);
      uStack_18 = CONCAT17(bVar1,(undefined7)uStack_18);
      pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_18 + 7));
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__PlaySound>b__55_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__PlaySound_b__55_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a16aa0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__PlaySound_b__55_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool local;
  System_String_o *sound;
  
  if (Il2CppMethodInitialized_07545f8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f8c = '\x01';
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
                      (pIVar1,(MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((int)__a->max_length < 2) {
      local = false;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      local = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                        (pIVar1,(MethodInfo_34BD860 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    }
    if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      CustomLogic_CustomLogicCharacterBuiltin__PlaySound(__c,sound,local,method);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__StopSound>b__56_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__StopSound_b__56_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a16b90

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__StopSound_b__56_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  System_String_o *sound;
  
  if (Il2CppMethodInitialized_07545f8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f8d = '\x01';
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
                      (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
    if ((__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
       (pCVar1 = (__c->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__c->fields).Character;
        if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_05a16c61;
        if ((pCVar1->fields).Dead == false) {
          bVar2 = Characters_BaseCharacter__IsPlayingSound(pCVar1,sound,(MethodInfo *)0x0);
          if (bVar2) {
            pCVar1 = (__c->fields).Character;
            if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_05a16c61;
            Characters_BaseCharacter__StopSound(pCVar1,sound,(MethodInfo *)0x0);
          }
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
label_05a16c61:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__FadeSound>b__57_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__FadeSound_b__57_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a16c70

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
  
  if (Il2CppMethodInitialized_07545f8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f8e = '\x01';
  }
  if (__a == (System_Object_array *)0x0) goto label_05a16d89;
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    sound = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
    if ((__a->max_length & 0xfffffffe) != 0) {
      volume = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         (__a->m_Items[1],
                          (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
      if (2 < (uint)__a->max_length) {
        time = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         (__a->m_Items[2],
                          (MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
          pCVar1 = (__c->fields).Character;
          if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
            bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                              (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
            if (bVar2) {
              pCVar1 = (__c->fields).Character;
              if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_05a16d89;
              if ((pCVar1->fields).Dead == false) {
                Characters_BaseCharacter__FadeSound(pCVar1,sound,volume,time,(MethodInfo *)0x0);
              }
            }
            return (Il2CppObject *)0x0;
          }
        }
label_05a16d89:
        ThrowNullReferenceException();
      }
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__LookAt>b__58_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__LookAt_b__58_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a16da0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__LookAt_b__58_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545f8f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f8f = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    position = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (obj,(MethodInfo_34BDE00 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin)
    ;
    if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      CustomLogic_CustomLogicCharacterBuiltin__LookAt(__c,position,method_00);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__AddForce>b__59_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__AddForce_b__59_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a16e30

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__AddForce_b__59_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicVector3Builtin_o *force;
  
  if (Il2CppMethodInitialized_07545f90 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f90 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05a16ec1:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    force = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_34BDE00 *)
                           MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    if ((__a->max_length & 0xfffffffe) != 0) {
      if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
        CustomLogic_CustomLogicCharacterBuiltin__AddForce(__c,force,__a->m_Items[1],method);
        return (Il2CppObject *)0x0;
      }
      goto label_05a16ec1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__Reveal>b__60_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__Reveal_b__60_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a16ed0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__Reveal_b__60_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Characters_BaseCharacter_o *__this_00;
  float activeTime;
  
  if (Il2CppMethodInitialized_07545f91 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f91 = '\x01';
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
                           (obj,(MethodInfo_34BDFE0 *)
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
// 0x5a16f70

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__AddOutline_b__61_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  CustomLogic_CustomLogicColorBuiltin_o *color;
  System_String_o *mode;
  
  if (Il2CppMethodInitialized_07545f92 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&"OutlineAll");
    Il2CppMethodInitialized_07545f92 = '\x01';
  }
  mode = "OutlineAll";
  if (__a != (System_Object_array *)0x0) {
    if (__a->max_length == 0) {
      color = (CustomLogic_CustomLogicColorBuiltin_o *)0x0;
    }
    else {
      if ((int)__a->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      pIVar1 = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      color = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (pIVar1,(MethodInfo_34BDE00 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicColorBuiltin)
      ;
      if (1 < (int)__a->max_length) {
        pIVar1 = __a->m_Items[1];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        mode = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (pIVar1,(MethodInfo_34BDE00 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      }
    }
    if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      CustomLogic_CustomLogicCharacterBuiltin__AddOutline(__c,color,mode,method);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding__RemoveOutline>b__62_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__RemoveOutline_b__62_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a17080

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding__RemoveOutline_b__62_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this_00;
  
  if ((__c == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) ||
     (__this_00 = (__c->fields).Character, __this_00 == (Characters_BaseCharacter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  Characters_BaseCharacter__RemoveOutline(__this_00,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding____Eq__>b__63_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__63_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a170a0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding____Eq___b__63_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  bool bVar2;
  undefined8 in_RAX;
  Il2CppObject *pIVar3;
  undefined8 uStack_8;
  
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
      uStack_8 = in_RAX;
      bVar2 = CustomLogic_CustomLogicCharacterBuiltin____Eq__
                        ((CustomLogic_CustomLogicCharacterBuiltin_o *)__this,__a->m_Items[0],__a->m_Items[1],
                         method);
      uStack_8 = CONCAT17(bVar2,(undefined7)uStack_8);
      pIVar3 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
      return pIVar3;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings.<>c$$<__CreateMethodBinding____Hash__>b__64_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding____Hash___b__64_0 (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicCharacterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a170f0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_____CreateMethodBinding____Hash___b__64_0
          (CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicCharacterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__c == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(__c->klass->vtable)._2_GetHashCode.methodPtr)(__c,(__c->klass->vtable)._2_GetHashCode.method);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicCharacterBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a0e2f0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *pCVar3;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicCharacterBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_07545f25 == '\0') {
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
    Il2CppMethodInitialized_07545f25 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x5ad5e046) {
    if (uVar2 < 0x26d90d15) {
      if (uVar2 < 0x19f47650) {
        if (uVar2 < 0x864c5e6) {
          if (uVar2 == 0x1a14484) {
            bVar1 = System_String__op_Equality(name,"AIEnabled",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
              }
              pCVar4 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__AIEnabled
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar4;
            }
          }
          else if (uVar2 == 0x232777f) {
            bVar1 = System_String__op_Equality(name,"Rotation",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
              }
              pCVar4 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Rotation
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar4;
            }
          }
          else if (uVar2 == 0x864c5e5) {
            bVar1 = System_String__op_Equality(name,"RemoveOutline",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__RemoveOutline
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 < 0x137f7d64) {
          if (uVar2 == 0xfe07306) {
            bVar1 = System_String__op_Equality(name,"Name",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
              }
              pCVar4 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Name
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar4;
            }
          }
          else if (uVar2 == 0x137f7d63) {
            bVar1 = System_String__op_Equality(name,"Emote",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__Emote
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 == 0x15676746) {
          bVar1 = System_String__op_Equality(name,"GetKilled",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetKilled
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x19f4764f) {
          bVar1 = System_String__op_Equality(name,"IsAI",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__IsAI
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
      }
      else if (uVar2 < 0x1deca497) {
        if (uVar2 < 0x1c21234c) {
          if (uVar2 == 0x1ae30f5a) {
            bVar1 = System_String__op_Equality(name,"GetAnimationSpeed",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetAnimationSpeed
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0x1c21234b) {
            bVar1 = System_String__op_Equality(name,"GetAnimationNormalizedTime",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetAnimationNormalizedTime
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 == 0x1c70fc20) {
          bVar1 = System_String__op_Equality(name,"Player",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Player
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x1deca496) {
          bVar1 = System_String__op_Equality(name,"State",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__State
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
      }
      else if (uVar2 < 0x2329c92d) {
        if (uVar2 == 0x1e9e9f85) {
          bVar1 = System_String__op_Equality(name,"Right",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Right
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x2329c92c) {
          bVar1 = System_String__op_Equality(name,"Team",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Team
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
      }
      else if (uVar2 == 0x23315ddd) {
        bVar1 = System_String__op_Equality(name,"IsPlayingAnimation",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__IsPlayingAnimation
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x26d90d14) {
        bVar1 = System_String__op_Equality(name,"IsPlayingSound",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__IsPlayingSound
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x492a3cd0) {
      if (uVar2 < 0x369870e1) {
        if (uVar2 < 0x2ba6c2e3) {
          if (uVar2 == 0x296dba07) {
            bVar1 = System_String__op_Equality(name,"AddForce",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__AddForce
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0x2ba6c2e2) {
            bVar1 = System_String__op_Equality(name,"PlaySound",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__PlaySound
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 == 0x2fe74447) {
          bVar1 = System_String__op_Equality(name,"QuaternionRotation",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__QuaternionRotation
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x369870e0) {
          bVar1 = System_String__op_Equality(name,"Guild",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Guild
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
      }
      else if (uVar2 < 0x45aa17b4) {
        if (uVar2 == 0x42f35940) {
          bVar1 = System_String__op_Equality(name,"Up",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Up
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x45aa17b3) {
          bVar1 = System_String__op_Equality(name,"Idle",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__Idle
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x47bfe69f) {
        bVar1 = System_String__op_Equality(name,"Grounded",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Grounded
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x492a3ccf) {
        bVar1 = System_String__op_Equality(name,"GetAnimationLength",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetAnimationLength
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x54cb8f07) {
      if (uVar2 < 0x53189420) {
        if (uVar2 == 0x50d99a86) {
          bVar1 = System_String__op_Equality(name,"SetTarget",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__SetTarget
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x5318941f) {
          bVar1 = System_String__op_Equality(name,"DetectRange",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__DetectRange
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
      }
      else if (uVar2 == 0x54531f32) {
        bVar1 = System_String__op_Equality(name,"FadeSound",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__FadeSound
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x54cb8f06) {
        bVar1 = System_String__op_Equality(name,"IsMine",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__IsMine
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 < 0x59397013) {
      if (uVar2 == 0x55aebb4e) {
        bVar1 = System_String__op_Equality(name,"PlayAnimationAt",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__PlayAnimationAt
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x59397012) {
        bVar1 = System_String__op_Equality(name,"ForceAnimation",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__ForceAnimation
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x59701b9b) {
      bVar1 = System_String__op_Equality(name,"MaxHealth",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__MaxHealth
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0x5ad5e045) {
      bVar1 = System_String__op_Equality(name,"ViewID",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__ViewID
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 < 0x9dba7b5a) {
    if (uVar2 < 0x7b5a42d9) {
      if (uVar2 < 0x6ca8ed49) {
        if (uVar2 < 0x65c8db58) {
          if (uVar2 == 0x5e2c4c73) {
            bVar1 = System_String__op_Equality(name,"LookAt",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__LookAt
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0x65c8db57) {
            bVar1 = System_String__op_Equality(name,"IsMainCharacter",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                  == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
              }
              pCVar4 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__IsMainCharacter
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar4;
            }
          }
        }
        else if (uVar2 == 0x6913a183) {
          bVar1 = System_String__op_Equality(name,"ClearTarget",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__ClearTarget
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x6ca8ed48) {
          bVar1 = System_String__op_Equality(name,"IsWalking",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__IsWalking
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
      }
      else if (uVar2 < 0x708f5d7c) {
        if (uVar2 == 0x6cb57a76) {
          bVar1 = System_String__op_Equality(name,"GetDamaged",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetDamaged
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x708f5d7b) {
          bVar1 = System_String__op_Equality(name,"CustomDamage",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__CustomDamage
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
      }
      else if (uVar2 == 0x792a6491) {
        bVar1 = System_String__op_Equality(name,"__Hash__",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding____Hash__
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x7b5a42d8) {
        bVar1 = System_String__op_Equality(name,"CurrentAnimation",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__CurrentAnimation
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 < 0x8c83015c) {
      if (uVar2 < 0x89bbe0e1) {
        if (uVar2 == 0x89bbe0e0) {
          bVar1 = System_String__op_Equality(name,"MoveToTarget",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__MoveToTarget
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x7dc09c40) {
          bVar1 = System_String__op_Equality(name,"CustomDamageEnabled",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__CustomDamageEnabled
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
      }
      else if (uVar2 == 0x8b6f3716) {
        bVar1 = System_String__op_Equality(name,"IsAlive",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__IsAlive
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x8c83015b) {
        bVar1 = System_String__op_Equality(name,"HasTargetDirection",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__HasTargetDirection
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 < 0x91efe6d8) {
      if (uVar2 == 0x91a036e2) {
        bVar1 = System_String__op_Equality(name,"AddOutline",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__AddOutline
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x91efe6d7) {
        bVar1 = System_String__op_Equality(name,"__Eq__",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding____Eq__
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x986145af) {
      bVar1 = System_String__op_Equality(name,"Health",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Health
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0x9dba7b59) {
      bVar1 = System_String__op_Equality(name,"TargetDirection",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__TargetDirection
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 < 0xe27f342b) {
    if (uVar2 < 0xbba2a3f1) {
      if (uVar2 < 0xad82abbc) {
        if (uVar2 == 0xa3370cc8) {
          bVar1 = System_String__op_Equality(name,"Rigidbody",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Rigidbody
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0xad82abbb) {
          bVar1 = System_String__op_Equality(name,"Transform",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Transform
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
      }
      else if (uVar2 == 0xba408252) {
        bVar1 = System_String__op_Equality(name,"Velocity",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Velocity
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0xbba2a3f0) {
        bVar1 = System_String__op_Equality(name,"Reveal",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__Reveal
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0xcb7df475) {
      if (uVar2 == 0xc3605c1b) {
        bVar1 = System_String__op_Equality(name,"CurrentTarget",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__CurrentTarget
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0xcb7df474) {
        bVar1 = System_String__op_Equality(name,"StopSound",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__StopSound
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0xd64c477b) {
      bVar1 = System_String__op_Equality(name,"PlayAnimation",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__PlayAnimation
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xe27f342a) {
      bVar1 = System_String__op_Equality(name,"Position",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Position
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 < 0xe8005d3a) {
    if (uVar2 < 0xe5b11b67) {
      if (uVar2 == 0xe50883ba) {
        bVar1 = System_String__op_Equality(name,"Forward",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Forward
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0xe5b11b66) {
        bVar1 = System_String__op_Equality(name,"SetAnimationSpeed",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__SetAnimationSpeed
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0xe694889a) {
      bVar1 = System_String__op_Equality(name,"GetTarget",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetTarget
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xe8005d39) {
      bVar1 = System_String__op_Equality(name,"GetNearestEnemy",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetNearestEnemy
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xf3ae8779) {
    if (uVar2 == 0xe9a6b9e8) {
      bVar1 = System_String__op_Equality(name,"UsePathfinding",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__UsePathfinding
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xf3ae8778) {
      bVar1 = System_String__op_Equality(name,"SetDisplayName",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__SetDisplayName
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xf90f6b5d) {
    bVar1 = System_String__op_Equality(name,"MoveTo",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__MoveTo
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xfb1ebd66) {
    bVar1 = System_String__op_Equality(name,"TargetNearestEnemy",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__TargetNearestEnemy
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicCharacterBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__CurrentTarget
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__CurrentTarget (const MethodInfo* method);
// 0x5a0fa30

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__CurrentTarget(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CurrentTarget_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_07545f26 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CurrentTarget_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__DetectRange
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__DetectRange (const MethodInfo* method);
// 0x5a0fad0

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__DetectRange(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545f27 == '\0') {
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
    Il2CppMethodInitialized_07545f27 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__DetectRange_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__DetectRange_g____sette
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__State
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__State (const MethodInfo* method);
// 0x5a0fbb0

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__State(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__State_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_07545f28 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__State_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__IsWalking
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__IsWalking (const MethodInfo* method);
// 0x5a0fc50

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__IsWalking(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545f29 == '\0') {
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
    Il2CppMethodInitialized_07545f29 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsWalking_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsWalking_g____setter
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__AIEnabled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__AIEnabled (const MethodInfo* method);
// 0x5a0fd30

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__AIEnabled(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545f2a == '\0') {
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
    Il2CppMethodInitialized_07545f2a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__AIEnabled_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__AIEnabled_g____setter
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__UsePathfinding
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__UsePathfinding (const MethodInfo* method);
// 0x5a0fe10

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__UsePathfinding(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545f2b == '\0') {
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
    Il2CppMethodInitialized_07545f2b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__UsePathfinding_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__UsePathfinding_g____se
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Name
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Name (const MethodInfo* method);
// 0x5a0fef0

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Name(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545f2c == '\0') {
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
    Il2CppMethodInitialized_07545f2c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Name_g____getter_8_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Name_g____setter_8_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Guild
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Guild (const MethodInfo* method);
// 0x5a0ffd0

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Guild(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545f2d == '\0') {
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
    Il2CppMethodInitialized_07545f2d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Guild_g____getter_9_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Guild_g____setter_9_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Player
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Player (const MethodInfo* method);
// 0x5a100b0

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Player(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Player_g____getter_10
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_07545f2e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Player_g____getter_10
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__IsAI
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__IsAI (const MethodInfo* method);
// 0x5a10150

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__IsAI(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsAI_g____getter_11_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_07545f2f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsAI_g____getter_11_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__IsAlive
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__IsAlive (const MethodInfo* method);
// 0x5a101f0

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__IsAlive(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsAlive_g____getter_12
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_07545f30 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsAlive_g____getter_12
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__ViewID
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__ViewID (const MethodInfo* method);
// 0x5a10290

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__ViewID(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f31 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__ViewID_g____getter_13
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_07545f31 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__ViewID_g____getter_13
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__IsMine
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__IsMine (const MethodInfo* method);
// 0x5a10330

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__IsMine(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f32 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsMine_g____getter_14
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_07545f32 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsMine_g____getter_14
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__IsMainCharacter
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__IsMainCharacter (const MethodInfo* method);
// 0x5a103d0

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__IsMainCharacter(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f33 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsMainCharacter_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_07545f33 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__IsMainCharacter_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Transform
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Transform (const MethodInfo* method);
// 0x5a10470

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Transform(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f34 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Transform_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_07545f34 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Transform_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Position
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Position (const MethodInfo* method);
// 0x5a10510

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Position(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545f35 == '\0') {
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
    Il2CppMethodInitialized_07545f35 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Position_g____getter_1
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Position_g____setter_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Rotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Rotation (const MethodInfo* method);
// 0x5a105f0

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Rotation(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545f36 == '\0') {
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
    Il2CppMethodInitialized_07545f36 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Rotation_g____getter_1
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Rotation_g____setter_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__QuaternionRotation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__QuaternionRotation (const MethodInfo* method);
// 0x5a106d0

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__QuaternionRotation
          (MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545f37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g_71bedb0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_07545f37 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__QuaternionRotation_g_71bedb0
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Velocity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Velocity (const MethodInfo* method);
// 0x5a107b0

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Velocity(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545f38 == '\0') {
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
    Il2CppMethodInitialized_07545f38 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Velocity_g____getter_2
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Velocity_g____setter_2
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Forward
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Forward (const MethodInfo* method);
// 0x5a10890

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Forward(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545f39 == '\0') {
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
    Il2CppMethodInitialized_07545f39 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Forward_g____getter_21
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Forward_g____setter_21
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Right
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Right (const MethodInfo* method);
// 0x5a10970

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Right(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545f3a == '\0') {
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
    Il2CppMethodInitialized_07545f3a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Right_g____getter_22_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Right_g____setter_22_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Up
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Up (const MethodInfo* method);
// 0x5a10a50

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Up(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545f3b == '\0') {
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
    Il2CppMethodInitialized_07545f3b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Up_g____getter_23_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Up_g____setter_23_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__HasTargetDirection
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__HasTargetDirection (const MethodInfo* method);
// 0x5a10b30

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__HasTargetDirection
          (MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f3c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__HasTargetDirection_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_07545f3c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__HasTargetDirection_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__TargetDirection
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__TargetDirection (const MethodInfo* method);
// 0x5a10bd0

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__TargetDirection(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545f3d == '\0') {
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
    Il2CppMethodInitialized_07545f3d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__TargetDirection_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__TargetDirection_g____s
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Team
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Team (const MethodInfo* method);
// 0x5a10cb0

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Team(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545f3e == '\0') {
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
    Il2CppMethodInitialized_07545f3e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Team_g____getter_26_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Team_g____setter_26_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Health
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Health (const MethodInfo* method);
// 0x5a10d90

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Health(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545f3f == '\0') {
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
    Il2CppMethodInitialized_07545f3f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Health_g____getter_27
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Health_g____setter_27
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__MaxHealth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__MaxHealth (const MethodInfo* method);
// 0x5a10e70

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__MaxHealth(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545f40 == '\0') {
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
    Il2CppMethodInitialized_07545f40 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__MaxHealth_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__MaxHealth_g____setter
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__CustomDamageEnabled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__CustomDamageEnabled (const MethodInfo* method);
// 0x5a10f50

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__CustomDamageEnabled
          (MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545f41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CustomDamageEnabled_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CustomDamageEnabled_g_71bece8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_07545f41 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CustomDamageEnabled_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CustomDamageEnabled_g_71bece8
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__CustomDamage
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__CustomDamage (const MethodInfo* method);
// 0x5a11030

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__CustomDamage(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  System_Action_CustomLogicCharacterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07545f42 == '\0') {
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
    Il2CppMethodInitialized_07545f42 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CustomDamage_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicCharacterBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CustomDamage_g____sett
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__CurrentAnimation
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__CurrentAnimation (const MethodInfo* method);
// 0x5a11110

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__CurrentAnimation
          (MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CurrentAnimation_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_07545f43 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__CurrentAnimation_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Grounded
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Grounded (const MethodInfo* method);
// 0x5a111b0

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Grounded(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Grounded_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_07545f44 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Grounded_g____getter_3
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreatePropertyBinding__Rigidbody
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Rigidbody (const MethodInfo* method);
// 0x5a11250

CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreatePropertyBinding__Rigidbody(MethodInfo *method)

{
  System_Func_CustomLogicCharacterBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Rigidbody_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
    Il2CppMethodInitialized_07545f45 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings___CreatePropertyBinding__Rigidbody_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__GetTarget
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetTarget (const MethodInfo* method);
// 0x5a112f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a11325: jmp 0x5a11395

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetTarget(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCharacterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f46 == '\0') {
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
    Il2CppMethodInitialized_07545f46 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__34_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__34_0;
  }
  if (__this == (System_Func_CustomLogicCharacterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetTarget_b__34_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__34_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__34_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__SetTarget
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__SetTarget (const MethodInfo* method);
// 0x5a11430
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a11465: jmp 0x5a114d5

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__SetTarget(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCharacterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f47 == '\0') {
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
    Il2CppMethodInitialized_07545f47 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__35_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__35_0;
  }
  if (__this == (System_Func_CustomLogicCharacterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__SetTarget_b__35_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__35_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__35_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__ClearTarget
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__ClearTarget (const MethodInfo* method);
// 0x5a11570
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a115a5: jmp 0x5a11615

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__ClearTarget(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCharacterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f48 == '\0') {
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
    Il2CppMethodInitialized_07545f48 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__36_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__36_0;
  }
  if (__this == (System_Func_CustomLogicCharacterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__ClearTarget_b__36_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__36_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__36_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__GetNearestEnemy
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetNearestEnemy (const MethodInfo* method);
// 0x5a116b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a116e5: jmp 0x5a11755

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetNearestEnemy(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCharacterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f49 == '\0') {
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
    Il2CppMethodInitialized_07545f49 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__37_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__37_0;
  }
  if (__this == (System_Func_CustomLogicCharacterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetNearestEnemy_b__37
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__37_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__37_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__TargetNearestEnemy
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__TargetNearestEnemy (const MethodInfo* method);
// 0x5a117f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a11825: jmp 0x5a11895

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__TargetNearestEnemy
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCharacterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f4a == '\0') {
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
    Il2CppMethodInitialized_07545f4a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__38_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__38_0;
  }
  if (__this == (System_Func_CustomLogicCharacterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__TargetNearestEnemy_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__38_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__38_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__MoveTo
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__MoveTo (const MethodInfo* method);
// 0x5a11930
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a11965: jmp 0x5a119d5

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__MoveTo(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCharacterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f4b == '\0') {
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
    Il2CppMethodInitialized_07545f4b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__39_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__39_0;
  }
  if (__this == (System_Func_CustomLogicCharacterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__MoveTo_b__39_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__39_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__39_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__MoveToTarget
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__MoveToTarget (const MethodInfo* method);
// 0x5a11a70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a11aa5: jmp 0x5a11b15

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__MoveToTarget(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCharacterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f4c == '\0') {
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
    Il2CppMethodInitialized_07545f4c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__40_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__40_0;
  }
  if (__this == (System_Func_CustomLogicCharacterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__MoveToTarget_b__40_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__40_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__40_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__Idle
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__Idle (const MethodInfo* method);
// 0x5a11bb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a11be5: jmp 0x5a11c55

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__Idle(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCharacterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f4d == '\0') {
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
    Il2CppMethodInitialized_07545f4d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__41_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__41_0;
  }
  if (__this == (System_Func_CustomLogicCharacterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__Idle_b__41_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__41_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__41_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__SetDisplayName
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__SetDisplayName (const MethodInfo* method);
// 0x5a11cf0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a11d25: jmp 0x5a11d95

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__SetDisplayName(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCharacterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f4e == '\0') {
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
    Il2CppMethodInitialized_07545f4e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__42_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__42_0;
  }
  if (__this == (System_Func_CustomLogicCharacterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__SetDisplayName_b__42_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__42_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__42_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__GetKilled
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetKilled (const MethodInfo* method);
// 0x5a11e30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a11e65: jmp 0x5a11ed5

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetKilled(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCharacterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f4f == '\0') {
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
    Il2CppMethodInitialized_07545f4f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__43_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__43_0;
  }
  if (__this == (System_Func_CustomLogicCharacterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetKilled_b__43_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__43_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__43_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__GetDamaged
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetDamaged (const MethodInfo* method);
// 0x5a11f70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a11fa5: jmp 0x5a12015

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetDamaged(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCharacterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f50 == '\0') {
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
    Il2CppMethodInitialized_07545f50 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__44_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__44_0;
  }
  if (__this == (System_Func_CustomLogicCharacterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetDamaged_b__44_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__44_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__44_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__Emote
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__Emote (const MethodInfo* method);
// 0x5a120b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a120e5: jmp 0x5a12155

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__Emote(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCharacterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f51 == '\0') {
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
    Il2CppMethodInitialized_07545f51 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__45_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__45_0;
  }
  if (__this == (System_Func_CustomLogicCharacterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__Emote_b__45_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__45_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__45_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__PlayAnimation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__PlayAnimation (const MethodInfo* method);
// 0x5a121f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a12225: jmp 0x5a12295

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__PlayAnimation(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCharacterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f52 == '\0') {
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
    Il2CppMethodInitialized_07545f52 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__46_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__46_0;
  }
  if (__this == (System_Func_CustomLogicCharacterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__PlayAnimation_b__46_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__46_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__46_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__PlayAnimationAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__PlayAnimationAt (const MethodInfo* method);
// 0x5a12330
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a12365: jmp 0x5a123d5

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__PlayAnimationAt(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCharacterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f53 == '\0') {
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
    Il2CppMethodInitialized_07545f53 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__47_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__47_0;
  }
  if (__this == (System_Func_CustomLogicCharacterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__PlayAnimationAt_b__47
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__47_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__47_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__GetAnimationSpeed
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetAnimationSpeed (const MethodInfo* method);
// 0x5a12470
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a124a5: jmp 0x5a12515

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetAnimationSpeed(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCharacterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f54 == '\0') {
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
    Il2CppMethodInitialized_07545f54 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__48_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__48_0;
  }
  if (__this == (System_Func_CustomLogicCharacterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetAnimationSpeed_b__4
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__48_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__48_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__SetAnimationSpeed
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__SetAnimationSpeed (const MethodInfo* method);
// 0x5a125b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a125e8: jmp 0x5a1265b

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__SetAnimationSpeed(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCharacterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f55 == '\0') {
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
    Il2CppMethodInitialized_07545f55 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__49_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__49_0;
  }
  if (__this == (System_Func_CustomLogicCharacterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__SetAnimationSpeed_b__4
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__49_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__49_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__IsPlayingAnimation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__IsPlayingAnimation (const MethodInfo* method);
// 0x5a126f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a12728: jmp 0x5a1279b

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__IsPlayingAnimation
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCharacterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f56 == '\0') {
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
    Il2CppMethodInitialized_07545f56 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__50_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__50_0;
  }
  if (__this == (System_Func_CustomLogicCharacterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__IsPlayingAnimation_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__50_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__50_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__GetAnimationNormalizedTime
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetAnimationNormalizedTime (const MethodInfo* method);
// 0x5a12830
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a12868: jmp 0x5a128db

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetAnimationNormalizedTime
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCharacterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f57 == '\0') {
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
    Il2CppMethodInitialized_07545f57 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__51_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__51_0;
  }
  if (__this == (System_Func_CustomLogicCharacterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetAnimationNormalized
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__51_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__51_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__ForceAnimation
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__ForceAnimation (const MethodInfo* method);
// 0x5a12970
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a129a8: jmp 0x5a12a1b

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__ForceAnimation(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCharacterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f58 == '\0') {
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
    Il2CppMethodInitialized_07545f58 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__52_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__52_0;
  }
  if (__this == (System_Func_CustomLogicCharacterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__ForceAnimation_b__52_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__52_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__52_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__GetAnimationLength
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetAnimationLength (const MethodInfo* method);
// 0x5a12ab0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a12ae8: jmp 0x5a12b5b

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__GetAnimationLength
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCharacterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f59 == '\0') {
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
    Il2CppMethodInitialized_07545f59 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__53_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__53_0;
  }
  if (__this == (System_Func_CustomLogicCharacterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__GetAnimationLength_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__53_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__53_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__IsPlayingSound
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__IsPlayingSound (const MethodInfo* method);
// 0x5a12bf0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a12c28: jmp 0x5a12c9b

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__IsPlayingSound(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCharacterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f5a == '\0') {
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
    Il2CppMethodInitialized_07545f5a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__54_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__54_0;
  }
  if (__this == (System_Func_CustomLogicCharacterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__IsPlayingSound_b__54_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__54_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__54_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__PlaySound
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__PlaySound (const MethodInfo* method);
// 0x5a12d30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a12d68: jmp 0x5a12ddb

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__PlaySound(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCharacterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f5b == '\0') {
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
    Il2CppMethodInitialized_07545f5b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__55_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__55_0;
  }
  if (__this == (System_Func_CustomLogicCharacterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__PlaySound_b__55_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__55_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__55_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__StopSound
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__StopSound (const MethodInfo* method);
// 0x5a12e70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a12ea8: jmp 0x5a12f1b

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__StopSound(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCharacterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f5c == '\0') {
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
    Il2CppMethodInitialized_07545f5c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__56_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__56_0;
  }
  if (__this == (System_Func_CustomLogicCharacterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__StopSound_b__56_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__56_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__56_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__FadeSound
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__FadeSound (const MethodInfo* method);
// 0x5a12fb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a12fe8: jmp 0x5a1305b

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__FadeSound(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCharacterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f5d == '\0') {
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
    Il2CppMethodInitialized_07545f5d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__57_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__57_0;
  }
  if (__this == (System_Func_CustomLogicCharacterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__FadeSound_b__57_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__57_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__57_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__LookAt
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__LookAt (const MethodInfo* method);
// 0x5a130f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a13128: jmp 0x5a1319b

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__LookAt(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCharacterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f5e == '\0') {
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
    Il2CppMethodInitialized_07545f5e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__58_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__58_0;
  }
  if (__this == (System_Func_CustomLogicCharacterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__LookAt_b__58_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__58_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__58_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__AddForce
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__AddForce (const MethodInfo* method);
// 0x5a13230
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a13268: jmp 0x5a132db

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__AddForce(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCharacterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f5f == '\0') {
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
    Il2CppMethodInitialized_07545f5f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__59_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__59_0;
  }
  if (__this == (System_Func_CustomLogicCharacterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__AddForce_b__59_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__59_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__59_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__Reveal
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__Reveal (const MethodInfo* method);
// 0x5a13370
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a133a8: jmp 0x5a1341b

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__Reveal(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCharacterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f60 == '\0') {
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
    Il2CppMethodInitialized_07545f60 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__60_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__60_0;
  }
  if (__this == (System_Func_CustomLogicCharacterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__Reveal_b__60_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__60_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__60_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__AddOutline
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__AddOutline (const MethodInfo* method);
// 0x5a134b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a134e8: jmp 0x5a1355b

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__AddOutline(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCharacterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f61 == '\0') {
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
    Il2CppMethodInitialized_07545f61 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__61_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__61_0;
  }
  if (__this == (System_Func_CustomLogicCharacterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__AddOutline_b__61_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__61_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__61_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding__RemoveOutline
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__RemoveOutline (const MethodInfo* method);
// 0x5a135f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a13628: jmp 0x5a1369b

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding__RemoveOutline(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCharacterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f62 == '\0') {
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
    Il2CppMethodInitialized_07545f62 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__62_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__62_0;
  }
  if (__this == (System_Func_CustomLogicCharacterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding__RemoveOutline_b__62_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__62_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__62_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding____Eq__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding____Eq__ (const MethodInfo* method);
// 0x5a13730
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a13768: jmp 0x5a137db

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding____Eq__(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCharacterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f63 == '\0') {
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
    Il2CppMethodInitialized_07545f63 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__63_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__63_0;
  }
  if (__this == (System_Func_CustomLogicCharacterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding____Eq___b__63_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__63_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__63_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$__CreateMethodBinding____Hash__
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o* CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding____Hash__ (const MethodInfo* method);
// 0x5a13870
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a138a8: jmp 0x5a1391b

CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *
CustomLogic_CustomLogicCharacterBuiltin_Bindings____CreateMethodBinding____Hash__(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicCharacterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicCharacterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07545f64 == '\0') {
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
    Il2CppMethodInitialized_07545f64 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__64_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__64_0;
  }
  if (__this == (System_Func_CustomLogicCharacterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicCharacterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c___CreateMethodBinding____Hash___b__64_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__64_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__64_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicCharacterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5a139b0

void CustomLogic_CustomLogicCharacterBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07545f65 == '\0') {
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
    Il2CppMethodInitialized_07545f65 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CurrentTarget",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DetectRange",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"State",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsWalking",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AIEnabled",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"UsePathfinding",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Name",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Guild",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Player",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsAI",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsAlive",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ViewID",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsMine",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsMainCharacter",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Transform",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Position",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Rotation",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"QuaternionRotation",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Velocity",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Forward",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Right",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Up",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HasTargetDirection",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TargetDirection",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Team",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Health",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MaxHealth",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CustomDamageEnabled",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CustomDamage",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CurrentAnimation",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Grounded",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Rigidbody",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetTarget",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetTarget",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ClearTarget",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetNearestEnemy",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TargetNearestEnemy",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MoveTo",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MoveToTarget",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Idle",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetDisplayName",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetKilled",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetDamaged",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Emote",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PlayAnimation",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PlayAnimationAt",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetAnimationSpeed",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetAnimationSpeed",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsPlayingAnimation",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetAnimationNormalizedTime",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ForceAnimation",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetAnimationLength",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsPlayingSound",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"PlaySound",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"StopSound",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FadeSound",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LookAt",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AddForce",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Reveal",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AddOutline",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RemoveOutline",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Eq__",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"__Hash__",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__CurrentTarget>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__CurrentTarget_g____getter_2_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x5a14280

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__CurrentTarget_g____getter_2_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Controllers_BaseAIController_o *__this;
  Characters_ITargetable_o *target;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__i,method);
  if (__this == (Controllers_BaseAIController_o *)0x0) {
    pIVar1 = CustomLogic_CustomLogicCharacterBuiltin__WrapTarget((Characters_ITargetable_o *)0x0,method);
    return pIVar1;
  }
  method_00 = (MethodInfo *)0x0;
  target = Controllers_BaseAIController__GetTarget(__this,(MethodInfo *)0x0);
  pIVar1 = CustomLogic_CustomLogicCharacterBuiltin__WrapTarget(target,method_00);
  return pIVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__DetectRange>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__DetectRange_g____getter_3_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x5a142b0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__DetectRange_g____getter_3_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__i,method);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__DetectRange>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__DetectRange_g____setter_3_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a142f0

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__DetectRange_g____setter_3_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Controllers_BaseAIController_o *__this;
  MethodInfo *method_00;
  float range;
  
  if (Il2CppMethodInitialized_07545f66 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f66 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
  range = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  __this = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__i,method_00);
  if (__this == (Controllers_BaseAIController_o *)0x0) {
    return;
  }
  Controllers_BaseAIController__SetDetectRange(__this,range,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__State>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__State_g____getter_4_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x5a14390

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__State_g____getter_4_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = CustomLogic_CustomLogicCharacterBuiltin__get_State(__i,method);
  return (Il2CppObject *)pSVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__IsWalking>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__IsWalking_g____getter_5_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x5a143a0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__IsWalking_g____getter_5_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  Controllers_BaseAIController_o *__this;
  Il2CppObject *pIVar3;
  undefined1 uStack_9;
  
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_07545f09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_07545f09 = '\x01';
  }
  pCVar2 = (__i->fields).Character;
  if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    method = (MethodInfo *)(ulong)bVar1;
    if ((bVar1 <= (pCVar2->klass->_2).typeHierarchyDepth) &&
       ((pCVar2->klass->_2).typeHierarchy[(long)&method[-1].field_0x57] ==
        (Il2CppClass *)TypeInfo_Characters_Human)) {
      uStack_9 = *(char *)((long)&(*(uint64_t *)((char *)pCVar2 + 0x238)) + 4) != '\0';
      goto label_05a14428;
    }
  }
  __this = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__i,method);
  if (__this == (Controllers_BaseAIController_o *)0x0) {
    uStack_9 = false;
  }
  else {
    uStack_9 = Controllers_BaseAIController__get_IsWalking(__this,(MethodInfo *)0x0);
  }
label_05a14428:
  pIVar3 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_9);
  return pIVar3;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__IsWalking>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__IsWalking_g____setter_5_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a14450

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__IsWalking_g____setter_5_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  bool value;
  bool bVar1;
  Controllers_BaseAIController_o *__this;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545f67 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f67 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07545f0a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_07545f0a = '\x01';
    }
    __this = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__i,method_00);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    if (__this != (Controllers_BaseAIController_o *)0x0) {
      Controllers_BaseAIController__set_IsWalking(__this,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__AIEnabled>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__AIEnabled_g____getter_6_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x5a14530

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__AIEnabled_g____getter_6_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  undefined1 uVar1;
  undefined8 in_RAX;
  Controllers_BaseAIController_o *pCVar2;
  Il2CppObject *pIVar3;
  undefined8 uStack_8;
  
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  pCVar2 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__i,method);
  if (pCVar2 == (Controllers_BaseAIController_o *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (pCVar2->fields)._aiEnabled;
  }
  uStack_8 = CONCAT17(uVar1,(undefined7)uStack_8);
  pIVar3 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar3;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__AIEnabled>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__AIEnabled_g____setter_6_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a14570

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__AIEnabled_g____setter_6_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  bool value;
  bool bVar1;
  Controllers_BaseAIController_o *__this;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545f68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f68 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07545f0b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_07545f0b = '\x01';
    }
    __this = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__i,method_00);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    if (__this != (Controllers_BaseAIController_o *)0x0) {
      Controllers_BaseAIController__set_AIEnabled(__this,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__UsePathfinding>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__UsePathfinding_g____getter_7_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x5a14650

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__UsePathfinding_g____getter_7_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  undefined1 uVar1;
  undefined8 in_RAX;
  Controllers_BaseAIController_o *pCVar2;
  Il2CppObject *pIVar3;
  undefined8 uStack_8;
  
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  pCVar2 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__i,method);
  if (pCVar2 == (Controllers_BaseAIController_o *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (pCVar2->fields)._usePathfinding;
  }
  uStack_8 = CONCAT17(uVar1,(undefined7)uStack_8);
  pIVar3 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar3;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__UsePathfinding>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__UsePathfinding_g____setter_7_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a14690

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__UsePathfinding_g____setter_7_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  bool value;
  bool bVar1;
  Controllers_BaseAIController_o *__this;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545f69 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f69 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool;
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07545f0c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_07545f0c = '\x01';
    }
    __this = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__i,method_00);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar1) {
      return;
    }
    if (__this != (Controllers_BaseAIController_o *)0x0) {
      Controllers_BaseAIController__set_UsePathfinding(__this,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Name>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Name_g____getter_8_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x5a14770

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Name_g____getter_8_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  if ((__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Character, pCVar1 == (Characters_BaseCharacter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (Il2CppObject *)(pCVar1->fields).RichTextName;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Name>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Name_g____setter_8_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a14790

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Name_g____setter_8_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_07545f6a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f6a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) ||
     (__this = (__i->fields).Character, __this == (Characters_BaseCharacter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  Characters_BaseCharacter__set_Name(__this,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Guild>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Guild_g____getter_9_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x5a14810

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Guild_g____getter_9_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  if ((__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Character, pCVar1 == (Characters_BaseCharacter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (Il2CppObject *)(pCVar1->fields).Guild;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Guild>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Guild_g____setter_9_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a14830

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Guild_g____setter_9_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07545f6b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f6b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pSVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Character, pCVar1 == (Characters_BaseCharacter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (pCVar1->fields).Guild = pSVar2;
  Il2CppCodeGenWriteBarrier(&(pCVar1->fields).Guild);
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Player>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Player_g____getter_10_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x5a148c0

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
    if (Il2CppMethodInitialized_07545f14 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
      Il2CppMethodInitialized_07545f14 = '\x01';
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
// 0x5a14940

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__IsAI_g____getter_11_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) ||
     ((__i->fields).Character == (Characters_BaseCharacter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_1);
  return pIVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__IsAlive>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__IsAlive_g____getter_12_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x5a14980

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__IsAlive_g____getter_12_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  byte bVar4;
  byte bStack_19;
  
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
label_05a14a12:
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_07545f15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545f15 = '\x01';
  }
  pCVar1 = (__i->fields).Character;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = 0;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pCVar1 = (__i->fields).Character;
    if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_05a14a12;
    bVar4 = (pCVar1->fields).Dead ^ 1;
  }
  bStack_19 = bVar4;
  pIVar3 = il2cpp_vm_Object_Box(g_data_075566f0,&bStack_19);
  return pIVar3;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__ViewID>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__ViewID_g____getter_13_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x5a14a20

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__ViewID_g____getter_13_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  Il2CppObject *pIVar3;
  undefined1 auStack_4 [4];
  
  if ((((__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) ||
       (pCVar1 = (__i->fields).Character, pCVar1 == (Characters_BaseCharacter_o *)0x0)) ||
      (pUVar2 = (pCVar1->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) ||
     ((pUVar2->fields).PhotonView == (Photon_Pun_PhotonView_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar3;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__IsMine>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__IsMine_g____getter_14_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x5a14a70

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__IsMine_g____getter_14_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  undefined8 in_RAX;
  Il2CppObject *pIVar3;
  undefined8 uStack_8;
  
  if ((__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Character, pCVar1 == (Characters_BaseCharacter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  uStack_8 = CONCAT17(bVar2,(undefined7)uStack_8);
  pIVar3 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar3;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__IsMainCharacter>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__IsMainCharacter_g____getter_15_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x5a14ab0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__IsMainCharacter_g____getter_15_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this;
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  if ((__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) ||
     (__this = (__i->fields).Character, __this == (Characters_BaseCharacter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  uStack_8 = in_RAX;
  bVar1 = Characters_BaseCharacter__IsMainCharacter(__this,(MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Transform>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Transform_g____getter_16_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x5a14af0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Transform_g____getter_16_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this;
  
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07545f16 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
      Il2CppMethodInitialized_07545f16 = '\x01';
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
// 0x5a14b60

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Position_g____getter_17_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = (*(__i->klass->vtable)._13_get_Position.methodPtr)
                     (__i,(__i->klass->vtable)._13_get_Position.method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Position>g____setter|17_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Position_g____setter_17_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a14b80

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Position_g____setter_17_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (Il2CppMethodInitialized_07545f6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f6c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(__i->klass->vtable)._14_set_Position.methodPtr)(__i,pCVar1,(__i->klass->vtable)._14_set_Position.method);
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____getter_18_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x5a14c10

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____getter_18_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o UVar3;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o local_18;
  
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07545f18 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_07545f18 = '\x01';
    }
    pCVar1 = (__i->fields).Character;
    if (((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
        (pUVar2 = (pCVar1->fields).Cache, pUVar2 != (Utility_BaseComponentCache_o *)0x0)) &&
       (__this = (pUVar2->fields).Transform, __this != (UnityEngine_Transform_o *)0x0)) {
      local_18 = UnityEngine_Transform__get_rotation(__this,(MethodInfo *)0x0);
      UVar3 = UnityEngine_Quaternion__Internal_ToEulerRad(&local_18,(MethodInfo *)0x0);
      euler.fields.x = UVar3.fields.x * 57.29578;
      euler.fields.y = UVar3.fields.y * 57.29578;
      euler.fields.z = UVar3.fields.z * 57.29578;
      UVar3 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_00,UVar3,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Rotation>g____setter|18_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Rotation_g____setter_18_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a14cd0

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
  UnityEngine_Quaternion_o value;
  UnityEngine_Vector3_Fields UStack_20;
  
  if (Il2CppMethodInitialized_07545f6d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f6d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar6 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)
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
      __this = (pUVar4->fields).Transform;
      uVar1 = (pCVar6->fields).Value.fields.x;
      uVar2 = (pCVar6->fields).Value.fields.y;
      UStack_20.x = (float)uVar1 * 0.017453292;
      UStack_20.y = (float)uVar2 * 0.017453292;
      UStack_20.z = (pCVar6->fields).Value.fields.z * 0.017453292;
      value = UnityEngine_Quaternion__Internal_FromEulerRad
                        ((UnityEngine_Vector3_o *)&UStack_20,(MethodInfo *)0x0);
      if (__this != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_rotation(__this,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionRotation>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__QuaternionRotation_g____getter_19_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x5a14dd0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__QuaternionRotation_g____getter_19_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicQuaternionBuiltin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicCharacterBuiltin__get_QuaternionRotation(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__QuaternionRotation>g____setter|19_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__QuaternionRotation_g____setter_19_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a14de0

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__QuaternionRotation_g____setter_19_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicQuaternionBuiltin_o *value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545f6e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f6e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicQuaternionBuiltin);
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicCharacterBuiltin__set_QuaternionRotation(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Velocity>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Velocity_g____getter_20_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x5a14e60

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Velocity_g____getter_20_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07545f1a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_07545f1a = '\x01';
    }
    __this = (__i->fields).Character;
    if (__this != (Characters_BaseCharacter_o *)0x0) {
      value = Characters_BaseCharacter__GetVelocity(__this,(MethodInfo *)0x0);
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_00,value,(MethodInfo *)0x0);
      return (Il2CppObject *)__this_00;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Velocity>g____setter|20_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Velocity_g____setter_20_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a14ee0

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Velocity_g____setter_20_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545f6f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f6f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicCharacterBuiltin__set_Velocity(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Forward>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Forward_g____getter_21_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x5a14f60

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Forward_g____getter_21_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicCharacterBuiltin__get_Forward(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Forward>g____setter|21_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Forward_g____setter_21_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a14f70

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Forward_g____setter_21_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545f70 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f70 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicCharacterBuiltin__set_Forward(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Right>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Right_g____getter_22_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x5a14ff0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Right_g____getter_22_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicCharacterBuiltin__get_Right(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Right>g____setter|22_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Right_g____setter_22_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a15000

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Right_g____setter_22_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545f71 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f71 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicCharacterBuiltin__set_Right(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Up>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Up_g____getter_23_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x5a15080

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Up_g____getter_23_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicCharacterBuiltin__get_Up(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Up>g____setter|23_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Up_g____setter_23_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a15090

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Up_g____setter_23_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545f72 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f72 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_34BDE00 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicCharacterBuiltin__set_Up(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__HasTargetDirection>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__HasTargetDirection_g____getter_24_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x5a15110

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__HasTargetDirection_g____getter_24_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) ||
     ((__i->fields).Character == (Characters_BaseCharacter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_1);
  return pIVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__TargetDirection>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__TargetDirection_g____getter_25_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x5a15150

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__TargetDirection_g____getter_25_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  UnityEngine_Vector3_o value;
  
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07545f1e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      Il2CppMethodInitialized_07545f1e = '\x01';
    }
    pCVar1 = (__i->fields).Character;
    if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
      value = (*(pCVar1->klass->vtable)._106_GetTargetDirection.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._106_GetTargetDirection.method);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this,value,(MethodInfo *)0x0);
      return (Il2CppObject *)__this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__TargetDirection>g____setter|25_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__TargetDirection_g____setter_25_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a151e0

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__TargetDirection_g____setter_25_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar3;
  UnityEngine_Vector3_o UVar4;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o UStack_30;
  UnityEngine_Vector3_Fields UStack_20;
  
  if (Il2CppMethodInitialized_07545f73 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f73 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if ((__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
     (pCVar3 != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) {
    pCVar1 = (__i->fields).Character;
    UStack_30.fields._0_12_ = (pCVar3->fields).Value.fields;
    if (Il2CppMethodInitialized_0753e72c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72c = '\x01';
    }
    pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
    UStack_20.x = (pUVar2->upVector).fields.x;
    UStack_20.y = (pUVar2->upVector).fields.y;
    UStack_20.z = (pUVar2->upVector).fields.z;
    UStack_30 = UnityEngine_Quaternion__Internal_LookRotation
                          ((UnityEngine_Vector3_o *)&UStack_30,(UnityEngine_Vector3_o *)&UStack_20,
                           (MethodInfo *)0x0);
    UVar4 = UnityEngine_Quaternion__Internal_ToEulerRad(&UStack_30,(MethodInfo *)0x0);
    euler.fields.x = UVar4.fields.x * 57.29578;
    euler.fields.y = UVar4.fields.y * 57.29578;
    euler.fields.z = UVar4.fields.z * 57.29578;
    UVar4 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
      (pCVar1->fields).TargetAngle = UVar4.fields.y;
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Team>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Team_g____getter_26_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x5a15310

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Team_g____getter_26_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  if ((__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Character, pCVar1 == (Characters_BaseCharacter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (Il2CppObject *)(pCVar1->fields).Team;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Team>g____setter|26_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Team_g____setter_26_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a15330

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Team_g____setter_26_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  System_String_o *team;
  
  if (Il2CppMethodInitialized_07545f74 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f74 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  team = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                   (__v,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
  if ((__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Character, pCVar1 != (Characters_BaseCharacter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__i->fields).Character;
    if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
      Characters_BaseCharacter__SetTeam(pCVar1,team,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Health>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Health_g____getter_27_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x5a153e0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Health_g____getter_27_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) ||
     ((__i->fields).Character == (Characters_BaseCharacter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Health>g____setter|27_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Health_g____setter_27_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a15420

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Health_g____setter_27_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_07545f75 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f75 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Character;
    if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (!bVar2) {
        return;
      }
      pCVar1 = (__i->fields).Character;
      if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
        Characters_BaseCharacter__SetCurrentHealth(pCVar1,(int)fVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__MaxHealth>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__MaxHealth_g____getter_28_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x5a154d0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__MaxHealth_g____getter_28_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) ||
     ((__i->fields).Character == (Characters_BaseCharacter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__MaxHealth>g____setter|28_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__MaxHealth_g____setter_28_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a15510

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__MaxHealth_g____setter_28_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_07545f76 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f76 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Character;
    if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (!bVar2) {
        return;
      }
      pCVar1 = (__i->fields).Character;
      if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
        Characters_BaseCharacter__SetMaxHealth(pCVar1,(int)fVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__CustomDamageEnabled>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__CustomDamageEnabled_g____getter_29_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x5a155c0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__CustomDamageEnabled_g____getter_29_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) ||
     ((__i->fields).Character == (Characters_BaseCharacter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_1);
  return pIVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__CustomDamageEnabled>g____setter|29_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__CustomDamageEnabled_g____setter_29_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a15600

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__CustomDamageEnabled_g____setter_29_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07545f77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f77 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Character, pCVar1 == (Characters_BaseCharacter_o *)0x0)) {
label_05a15692:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar3) {
    pCVar1 = (__i->fields).Character;
    if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_05a15692;
    (pCVar1->fields).CustomDamageEnabled = bVar2;
  }
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__CustomDamage>g____getter|30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__CustomDamage_g____getter_30_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x5a156a0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__CustomDamage_g____getter_30_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) ||
     ((__i->fields).Character == (Characters_BaseCharacter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__CustomDamage>g____setter|30_1
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__CustomDamage_g____setter_30_1 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a156e0

void CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__CustomDamage_g____setter_30_1
               (CustomLogic_CustomLogicCharacterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  int32_t iVar3;
  
  if (Il2CppMethodInitialized_07545f78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07545f78 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  iVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if ((__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Character, pCVar1 == (Characters_BaseCharacter_o *)0x0)) {
label_05a15771:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__i->fields).Character;
    if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_05a15771;
    (pCVar1->fields).CustomDamage = iVar3;
  }
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__CurrentAnimation>g____getter|31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__CurrentAnimation_g____getter_31_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x5a15780

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__CurrentAnimation_g____getter_31_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this;
  System_String_o *pSVar1;
  
  if ((__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) ||
     (__this = (__i->fields).Character, __this == (Characters_BaseCharacter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pSVar1 = Characters_BaseCharacter__GetCurrentAnimation(__this,(MethodInfo *)0x0);
  return (Il2CppObject *)pSVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Grounded>g____getter|32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Grounded_g____getter_32_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x5a157a0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Grounded_g____getter_32_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i == (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) ||
     ((__i->fields).Character == (Characters_BaseCharacter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_1);
  return pIVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin.Bindings$$<__CreatePropertyBinding__Rigidbody>g____getter|33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Rigidbody_g____getter_33_0 (CustomLogic_CustomLogicCharacterBuiltin_o* __i, const MethodInfo* method);
// 0x5a157e0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin_Bindings_____CreatePropertyBinding__Rigidbody_g____getter_33_0
          (CustomLogic_CustomLogicCharacterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Rigidbody_o *rb;
  CustomLogic_CustomLogicRigidbodyBuiltin_o *__this;
  MethodInfo *in_RCX;
  
  if (__i != (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_07545f1f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin);
      Il2CppMethodInitialized_07545f1f = '\x01';
    }
    pCVar1 = (__i->fields).Character;
    if ((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
       (pUVar2 = (pCVar1->fields).Cache, pUVar2 != (Utility_BaseComponentCache_o *)0x0)) {
      rb = (pUVar2->fields).Rigidbody;
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin);
      CustomLogic_CustomLogicRigidbodyBuiltin___ctor_5904150
                (__this,(CustomLogic_BuiltinClassInstance_o *)__i,rb,in_RCX);
      return (Il2CppObject *)__this;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_AIController
// il2cpp: Controllers_BaseAIController_o* CustomLogic_CustomLogicCharacterBuiltin__get_AIController (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0b9c0

Controllers_BaseAIController_o *
CustomLogic_CustomLogicCharacterBuiltin__get_AIController
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  Controllers_BaseAIController_o *pCVar3;
  
  if (Il2CppMethodInitialized_07545f07 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_BaseAIController);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545f07 = '\x01';
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
label_05a0ba70:
      ThrowNullReferenceException();
    }
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Character;
      if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_05a0ba70;
      if (((pCVar1->fields).Dead == false) && ((pCVar1->fields).AI != false)) {
        pCVar3 = UnityEngine_Component__GetComponent_object_
                           ((UnityEngine_Component_o *)pCVar1,
                            (MethodInfo_34B0830 *)
                            MethodInfo_UnityEngine_Component_GetComponent_BaseAIController);
        return pCVar3;
      }
    }
  }
  return (Controllers_BaseAIController_o *)0x0;
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_CurrentTarget
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin__get_CurrentTarget (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0ba80

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin__get_CurrentTarget
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Controllers_BaseAIController_o *__this_00;
  Characters_ITargetable_o *target;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  
  __this_00 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__this,method);
  if (__this_00 == (Controllers_BaseAIController_o *)0x0) {
    pIVar1 = CustomLogic_CustomLogicCharacterBuiltin__WrapTarget((Characters_ITargetable_o *)0x0,method);
    return pIVar1;
  }
  method_00 = (MethodInfo *)0x0;
  target = Controllers_BaseAIController__GetTarget(__this_00,(MethodInfo *)0x0);
  pIVar1 = CustomLogic_CustomLogicCharacterBuiltin__WrapTarget(target,method_00);
  return pIVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_DetectRange
// il2cpp: float CustomLogic_CustomLogicCharacterBuiltin__get_DetectRange (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0bae0

float CustomLogic_CustomLogicCharacterBuiltin__get_DetectRange
                (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Controllers_BaseAIController_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__this,method);
  if (pCVar1 == (Controllers_BaseAIController_o *)0x0) {
    return 0.0;
  }
  return (pCVar1->fields).DetectRange;
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_DetectRange
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_DetectRange (CustomLogic_CustomLogicCharacterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a0bb00

void CustomLogic_CustomLogicCharacterBuiltin__set_DetectRange
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,float value,MethodInfo *method)

{
  Controllers_BaseAIController_o *__this_00;
  
  __this_00 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__this,method);
  if (__this_00 == (Controllers_BaseAIController_o *)0x0) {
    return;
  }
  Controllers_BaseAIController__SetDetectRange(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_State
// il2cpp: System_String_o* CustomLogic_CustomLogicCharacterBuiltin__get_State (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0bb30

System_String_o *
CustomLogic_CustomLogicCharacterBuiltin__get_State
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Characters_BaseCharacter_o *pCVar3;
  Characters_BaseCharacter_c *pCVar4;
  System_String_o *pSVar5;
  System_Enum_o local_20;
  undefined4 local_10;
  
  if (Il2CppMethodInitialized_07545f08 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseTitan);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HorseState);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Horse);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_HumanState);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_TitanState);
    Il2CppMethodInitialized_07545f08 = '\x01';
  }
  pCVar3 = (__this->fields).Character;
  if (pCVar3 == (Characters_BaseCharacter_o *)0x0) {
label_05a0bc0f:
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  pCVar4 = pCVar3->klass;
  bVar1 = (pCVar4->_2).typeHierarchyDepth;
  bVar2 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
  if ((bVar1 < bVar2) ||
     ((pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_Human)) {
    bVar2 = (TypeInfo_Characters_BaseTitan->_2).typeHierarchyDepth;
    if ((bVar1 < bVar2) ||
       ((pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseTitan)) {
      bVar2 = (TypeInfo_Characters_Horse->_2).typeHierarchyDepth;
      if ((bVar1 < bVar2) ||
         ((pCVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_Horse))
      goto label_05a0bc0f;
      local_20.klass = (System_Enum_c *)TypeInfo_Characters_HorseState;
      local_10._0_1_ = (*(uint8_t *)((char *)pCVar3 + 0x128));
      local_10._1_1_ = (*(uint8_t *)((char *)pCVar3 + 0x129));
      local_10._2_1_ = (*(uint8_t *)((char *)pCVar3 + 0x12a));
      local_10._3_1_ = pCVar3[1].fields.field_0x1b;
    }
    else {
      local_20.klass = (System_Enum_c *)TypeInfo_Characters_TitanState;
      local_10 = *(undefined4 *)&(*(uint64_t *)((char *)pCVar3 + 0x100));
    }
  }
  else {
    local_10._0_1_ = (*(uint8_t *)((char *)pCVar3 + 0x178));
    local_10._1_1_ = (*(uint8_t *)((char *)pCVar3 + 0x179));
    local_10._2_2_ = *(undefined2 *)&pCVar3[1].fields.field_0x6a;
    local_20.klass = (System_Enum_c *)TypeInfo_Characters_HumanState;
  }
  local_20.monitor = (void *)0xffffffffffffffff;
  pSVar5 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
  return pSVar5;
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_IsWalking
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__get_IsWalking (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0bcb0

bool CustomLogic_CustomLogicCharacterBuiltin__get_IsWalking
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseCharacter_o *pCVar2;
  bool bVar3;
  Controllers_BaseAIController_o *__this_00;
  
  if (Il2CppMethodInitialized_07545f09 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_07545f09 = '\x01';
  }
  pCVar2 = (__this->fields).Character;
  if (pCVar2 != (Characters_BaseCharacter_o *)0x0) {
    bVar1 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    method = (MethodInfo *)(ulong)bVar1;
    if ((bVar1 <= (pCVar2->klass->_2).typeHierarchyDepth) &&
       ((pCVar2->klass->_2).typeHierarchy[(long)&method[-1].field_0x57] ==
        (Il2CppClass *)TypeInfo_Characters_Human)) {
      return *(char *)((long)&(*(uint64_t *)((char *)pCVar2 + 0x238)) + 4) != '\0';
    }
  }
  __this_00 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__this,method);
  if (__this_00 == (Controllers_BaseAIController_o *)0x0) {
    return false;
  }
  bVar3 = Controllers_BaseAIController__get_IsWalking(__this_00,(MethodInfo *)0x0);
  return bVar3;
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_IsWalking
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_IsWalking (CustomLogic_CustomLogicCharacterBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5a0bd30

void CustomLogic_CustomLogicCharacterBuiltin__set_IsWalking
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,bool value,MethodInfo *method)

{
  bool bVar1;
  Controllers_BaseAIController_o *__this_00;
  undefined7 in_register_00000031;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)CONCAT71(in_register_00000031,value);
  if (Il2CppMethodInitialized_07545f0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545f0a = '\x01';
  }
  __this_00 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__this,method_00);
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
    return;
  }
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_AIEnabled
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__get_AIEnabled (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0bdb0

bool CustomLogic_CustomLogicCharacterBuiltin__get_AIEnabled
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Controllers_BaseAIController_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__this,method);
  if (pCVar1 == (Controllers_BaseAIController_o *)0x0) {
    return false;
  }
  return (pCVar1->fields)._aiEnabled != false;
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_AIEnabled
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_AIEnabled (CustomLogic_CustomLogicCharacterBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5a0bdd0

void CustomLogic_CustomLogicCharacterBuiltin__set_AIEnabled
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,bool value,MethodInfo *method)

{
  bool bVar1;
  Controllers_BaseAIController_o *__this_00;
  undefined7 in_register_00000031;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)CONCAT71(in_register_00000031,value);
  if (Il2CppMethodInitialized_07545f0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545f0b = '\x01';
  }
  __this_00 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__this,method_00);
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
    return;
  }
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_UsePathfinding
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__get_UsePathfinding (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0be50

bool CustomLogic_CustomLogicCharacterBuiltin__get_UsePathfinding
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Controllers_BaseAIController_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__this,method);
  if (pCVar1 == (Controllers_BaseAIController_o *)0x0) {
    return false;
  }
  return (pCVar1->fields)._usePathfinding != false;
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_UsePathfinding
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_UsePathfinding (CustomLogic_CustomLogicCharacterBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5a0be70

void CustomLogic_CustomLogicCharacterBuiltin__set_UsePathfinding
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,bool value,MethodInfo *method)

{
  bool bVar1;
  Controllers_BaseAIController_o *__this_00;
  undefined7 in_register_00000031;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)CONCAT71(in_register_00000031,value);
  if (Il2CppMethodInitialized_07545f0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545f0c = '\x01';
  }
  __this_00 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__this,method_00);
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
    return;
  }
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin$$GetTarget
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin__GetTarget (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0bab0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin__GetTarget
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Controllers_BaseAIController_o *__this_00;
  Characters_ITargetable_o *target;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  
  __this_00 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__this,method);
  if (__this_00 == (Controllers_BaseAIController_o *)0x0) {
    pIVar1 = CustomLogic_CustomLogicCharacterBuiltin__WrapTarget((Characters_ITargetable_o *)0x0,method);
    return pIVar1;
  }
  method_00 = (MethodInfo *)0x0;
  target = Controllers_BaseAIController__GetTarget(__this_00,(MethodInfo *)0x0);
  pIVar1 = CustomLogic_CustomLogicCharacterBuiltin__WrapTarget(target,method_00);
  return pIVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin$$SetTarget
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__SetTarget (CustomLogic_CustomLogicCharacterBuiltin_o* __this, Il2CppObject* target, float focusDuration, const MethodInfo* method);
// 0x5a0c050

void CustomLogic_CustomLogicCharacterBuiltin__SetTarget
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,Il2CppObject *target,float focusDuration,
               MethodInfo *method)

{
  bool bVar1;
  Controllers_BaseTitanAIController_o *__this_00;
  Characters_ITargetable_o *enemy;
  MethodInfo *pMVar2;
  
  pMVar2 = (MethodInfo *)target;
  if (Il2CppMethodInitialized_07545f0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545f0d = '\x01';
  }
  __this_00 = (Controllers_BaseTitanAIController_o *)
              CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__this,pMVar2);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar2 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    enemy = CustomLogic_CustomLogicCharacterBuiltin__UnwrapTarget(target,pMVar2);
    if (__this_00 == (Controllers_BaseTitanAIController_o *)0x0) {
      ThrowNullReferenceException();
    }
    Controllers_BaseAIController__SetTarget(__this_00,enemy,focusDuration,(MethodInfo *)0x0);
    return;
  }
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin$$ClearTarget
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__ClearTarget (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0c1d0

void CustomLogic_CustomLogicCharacterBuiltin__ClearTarget
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Controllers_BaseAIController_o *__this_00;
  
  __this_00 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__this,method);
  if (__this_00 == (Controllers_BaseAIController_o *)0x0) {
    return;
  }
  Controllers_BaseAIController__ClearTarget(__this_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin$$GetNearestEnemy
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin__GetNearestEnemy (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0c1f0

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin__GetNearestEnemy
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Controllers_BaseAIController_o *__this_00;
  Characters_ITargetable_o *target;
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  
  __this_00 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__this,method);
  if (__this_00 == (Controllers_BaseAIController_o *)0x0) {
    pIVar1 = CustomLogic_CustomLogicCharacterBuiltin__WrapTarget((Characters_ITargetable_o *)0x0,method);
    return pIVar1;
  }
  method_00 = (MethodInfo *)0x0;
  target = Controllers_BaseAIController__GetNearestEnemy(__this_00,(MethodInfo *)0x0);
  pIVar1 = CustomLogic_CustomLogicCharacterBuiltin__WrapTarget(target,method_00);
  return pIVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin$$TargetNearestEnemy
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__TargetNearestEnemy (CustomLogic_CustomLogicCharacterBuiltin_o* __this, float focusDuration, const MethodInfo* method);
// 0x5a0c220

void CustomLogic_CustomLogicCharacterBuiltin__TargetNearestEnemy
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,float focusDuration,MethodInfo *method)

{
  Controllers_BaseAIController_o *__this_00;
  
  __this_00 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__this,method);
  if (__this_00 == (Controllers_BaseAIController_o *)0x0) {
    return;
  }
  Controllers_BaseAIController__TargetNearestEnemy(__this_00,focusDuration,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin$$MoveTo
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__MoveTo (CustomLogic_CustomLogicCharacterBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* position, float range, bool ignoreEnemies, const MethodInfo* method);
// 0x5a0c250

void CustomLogic_CustomLogicCharacterBuiltin__MoveTo
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *position,float range,bool ignoreEnemies,
               MethodInfo *method)

{
  byte bVar1;
  Characters_Horse_o *__this_00;
  bool bVar2;
  Controllers_BaseAIController_o *__this_01;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)position;
  if (Il2CppMethodInitialized_07545f0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Horse);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545f0e = '\x01';
  }
  __this_00 = (Characters_Horse_o *)(__this->fields).Character;
  if (__this_00 != (Characters_Horse_o *)0x0) {
    bVar1 = (TypeInfo_Characters_Horse->_2).typeHierarchyDepth;
    if ((bVar1 <= (__this_00->klass->_2).typeHierarchyDepth) &&
       ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == (Il2CppClass *)TypeInfo_Characters_Horse)) {
      if (position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
        Characters_Horse__MoveTo
                  (__this_00,(UnityEngine_Vector3_o)(position->fields).Value.fields,range,(MethodInfo *)0x0);
        return;
      }
      goto label_05a0c352;
    }
  }
  __this_01 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__this,method_00);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return;
  }
  if ((position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
     (__this_01 != (Controllers_BaseAIController_o *)0x0)) {
    Controllers_BaseAIController__MoveTo
              (__this_01,(UnityEngine_Vector3_o)(position->fields).Value.fields,range,ignoreEnemies,
               (MethodInfo *)0x0);
    return;
  }
label_05a0c352:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$MoveToTarget
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__MoveToTarget (CustomLogic_CustomLogicCharacterBuiltin_o* __this, Il2CppObject* target, float range, bool ignoreEnemies, const MethodInfo* method);
// 0x5a0c360

void CustomLogic_CustomLogicCharacterBuiltin__MoveToTarget
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,Il2CppObject *target,float range,
               bool ignoreEnemies,MethodInfo *method)

{
  byte bVar1;
  Characters_Horse_o *__this_00;
  bool bVar2;
  Controllers_BaseAIController_o *__this_01;
  Characters_ITargetable_o *target_00;
  MethodInfo *pMVar3;
  Il2CppClass *target_01;
  
  pMVar3 = (MethodInfo *)target;
  if (Il2CppMethodInitialized_07545f0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Horse);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545f0f = '\x01';
  }
  __this_00 = (Characters_Horse_o *)(__this->fields).Character;
  if (__this_00 == (Characters_Horse_o *)0x0) {
label_05a0c3de:
    __this_01 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__this,pMVar3);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    pMVar3 = (MethodInfo *)0x0;
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)__this_01,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      target_00 = CustomLogic_CustomLogicCharacterBuiltin__UnwrapTarget(target,pMVar3);
      if (__this_01 == (Controllers_BaseAIController_o *)0x0) {
        ThrowNullReferenceException();
      }
      Controllers_BaseAIController__MoveToTarget(__this_01,target_00,range,ignoreEnemies,(MethodInfo *)0x0);
      return;
    }
    return;
  }
  bVar1 = (TypeInfo_Characters_Horse->_2).typeHierarchyDepth;
  if (((__this_00->klass->_2).typeHierarchyDepth < bVar1) ||
     ((__this_00->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != (Il2CppClass *)TypeInfo_Characters_Horse))
  goto label_05a0c3de;
  if (target != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin->_2).typeHierarchyDepth;
    if ((bVar1 <= (target->klass->_2).typeHierarchyDepth) &&
       ((target->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin)) {
      target_01 = target[3].klass;
      goto label_05a0c477;
    }
  }
  target_01 = (Il2CppClass *)0x0;
label_05a0c477:
  Characters_Horse__ComeTo(__this_00,(Characters_BaseCharacter_o *)target_01,range,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin$$Idle
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__Idle (CustomLogic_CustomLogicCharacterBuiltin_o* __this, float time, const MethodInfo* method);
// 0x5a0c4a0

void CustomLogic_CustomLogicCharacterBuiltin__Idle
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,float time,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Characters_Horse_o *__this_00;
  Characters_Horse_c *pCVar3;
  Controllers_BaseAIController_o *__this_01;
  
  if (Il2CppMethodInitialized_07545f10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Horse);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_Human);
    Il2CppMethodInitialized_07545f10 = '\x01';
  }
  __this_00 = (Characters_Horse_o *)(__this->fields).Character;
  if (__this_00 == (Characters_Horse_o *)0x0) {
    if ((time != -1.0) || (NAN(time))) goto label_05a0c559;
  }
  else {
    pCVar3 = __this_00->klass;
    bVar1 = (pCVar3->_2).typeHierarchyDepth;
    bVar2 = (TypeInfo_Characters_Horse->_2).typeHierarchyDepth;
    method = (MethodInfo *)(ulong)bVar2;
    if ((bVar2 <= bVar1) &&
       ((pCVar3->_2).typeHierarchy[(long)&method[-1].field_0x57] == (Il2CppClass *)TypeInfo_Characters_Horse))
    {
      Characters_Horse__Stay(__this_00,(MethodInfo *)0x0);
      return;
    }
    if ((time != -1.0) || (NAN(time))) goto label_05a0c559;
    bVar2 = (TypeInfo_Characters_Human->_2).typeHierarchyDepth;
    method = (MethodInfo *)(ulong)bVar2;
    if ((bVar2 <= bVar1) &&
       ((pCVar3->_2).typeHierarchy[(long)&method[-1].field_0x57] == (Il2CppClass *)TypeInfo_Characters_Human))
    {
      time = 0.0;
      goto label_05a0c559;
    }
  }
  time = INFINITY;
label_05a0c559:
  __this_01 = CustomLogic_CustomLogicCharacterBuiltin__get_AIController(__this,method);
  if (__this_01 == (Controllers_BaseAIController_o *)0x0) {
    return;
  }
  Controllers_BaseAIController__IdleFor(__this_01,time,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin$$UnwrapTarget
// il2cpp: Characters_ITargetable_o* CustomLogic_CustomLogicCharacterBuiltin__UnwrapTarget (Il2CppObject* target, const MethodInfo* method);
// 0x5a0c0f0

Characters_ITargetable_o *
CustomLogic_CustomLogicCharacterBuiltin__UnwrapTarget(Il2CppObject *target,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Il2CppClass *pIVar3;
  System_ArgumentException_o *__this;
  System_String_o *message;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_07545f11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin);
    Il2CppMethodInitialized_07545f11 = '\x01';
  }
  if (target == (Il2CppObject *)0x0) {
    return (Characters_ITargetable_o *)0x0;
  }
  pIVar3 = target->klass;
  bVar1 = (pIVar3->_2).typeHierarchyDepth;
  bVar2 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin->_2).typeHierarchyDepth;
  if ((bVar2 <= bVar1) &&
     ((pIVar3->_2).typeHierarchy[(ulong)bVar2 - 1] ==
      (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin)) {
    return (Characters_ITargetable_o *)target[3].klass;
  }
  bVar2 = (TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin->_2).typeHierarchyDepth;
  if ((bVar1 < bVar2) ||
     ((pIVar3->_2).typeHierarchy[(ulong)bVar2 - 1] !=
      (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin)) {
    pIVar3 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar3);
    message = il2cpp_codegen_get_runtime_metadata(&"Target must be a Character, MapTargetable, or null.");
    System_ArgumentException___ctor_54186d0(__this,message,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_UnwrapTarget)
    ;
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  return target[3].monitor;
}


// CustomLogic.CustomLogicCharacterBuiltin$$WrapTarget
// il2cpp: Il2CppObject* CustomLogic_CustomLogicCharacterBuiltin__WrapTarget (Characters_ITargetable_o* target, const MethodInfo* method);
// 0x5a0bef0
// asm: 14 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a0bf9e: jne 0x5a0bf83
// asm:   0x5a0c01a: mov rdi, rbx
// asm:   0x5a0c01d: xor esi, esi
// asm:   0x5a0c01f: call 0x5b6a190  ; CustomLogic_BuiltinClassInstance___ctor()
// asm:   0x5a0c024: lea rdi, [rbx + 0x30]
// asm:   0x5a0c028: mov qword ptr [rbx + 0x30], r15
// asm:   0x5a0c02c: mov rsi, r15
// asm:   0x5a0c02f: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x5a0c034: mov rdi, rbx
// asm:   0x5a0c037: add rdi, 0x38
// asm:   0x5a0c03b: mov qword ptr [rbx + 0x38], r14
// asm:   0x5a0c03f: mov rsi, r14
// asm:   0x5a0c042: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x5a0c047: jmp 0x5a0bf83

Il2CppObject *
CustomLogic_CustomLogicCharacterBuiltin__WrapTarget(Characters_ITargetable_o *target,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Characters_ITargetable_c *pCVar3;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar4;
  UnityEngine_GameObject_o *pUVar5;
  CustomLogic_CustomLogicMapTargetableBuiltin_o *__this;
  
  if (Il2CppMethodInitialized_07545f12 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Map_MapTargetable);
    Il2CppMethodInitialized_07545f12 = '\x01';
  }
  if (target != (Characters_ITargetable_o *)0x0) {
    pCVar3 = target->klass;
    bVar1 = (pCVar3->_2).typeHierarchyDepth;
    bVar2 = (TypeInfo_Map_MapTargetable->_2).typeHierarchyDepth;
    if ((bVar2 <= bVar1) &&
       ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] == (Il2CppClass *)TypeInfo_Map_MapTargetable)) {
      pUVar5 = Map_MapTargetable__get_GameObject((Map_MapTargetable_o *)target,(MethodInfo *)0x0);
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicMapTargetableBuiltin);
      if (Il2CppMethodInitialized_07545e6c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_07545e6c = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
      (__this->fields)._GameObject_k__BackingField = pUVar5;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._GameObject_k__BackingField);
      (__this->fields)._Value_k__BackingField = (Map_MapTargetable_o *)target;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._Value_k__BackingField);
      return (Il2CppObject *)__this;
    }
    bVar2 = (TypeInfo_Characters_BaseCharacter->_2).typeHierarchyDepth;
    if (bVar2 <= bVar1) {
      if ((pCVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != (Il2CppClass *)TypeInfo_Characters_BaseCharacter) {
        return (Il2CppObject *)0x0;
      }
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      pCVar4 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin
                         ((Characters_BaseCharacter_o *)target,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar4;
    }
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicCharacterBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin___ctor (CustomLogic_CustomLogicCharacterBuiltin_o* __this, Characters_BaseCharacter_o* character, const MethodInfo* method);
// 0x5a0c5a0

void CustomLogic_CustomLogicCharacterBuiltin___ctor
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,Characters_BaseCharacter_o *character,
               MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  undefined8 in_RAX;
  Il2CppObject *value;
  undefined8 uStack_18;
  
  uStack_18 = in_RAX;
  if (Il2CppMethodInitialized_07545f13 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&"IsCharacter");
    Il2CppMethodInitialized_07545f13 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Character = character;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Character);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)(__this->fields).Variables;
  uStack_18 = CONCAT17(1,(undefined7)uStack_18);
  value = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_18 + 7));
  if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___set_Item
            (__this_00,(Il2CppObject *)"IsCharacter",value,
             (MethodInfo_4AAD4C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_set_Item);
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Name
// il2cpp: System_String_o* CustomLogic_CustomLogicCharacterBuiltin__get_Name (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0c660

System_String_o *
CustomLogic_CustomLogicCharacterBuiltin__get_Name
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).RichTextName;
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_Name
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_Name (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5a0c680

void CustomLogic_CustomLogicCharacterBuiltin__set_Name
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this_00;
  
  __this_00 = (__this->fields).Character;
  if (__this_00 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  Characters_BaseCharacter__set_Name(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin$$SetDisplayName
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__SetDisplayName (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* name, bool showTag, const MethodInfo* method);
// 0x5a0c6a0

void CustomLogic_CustomLogicCharacterBuiltin__SetDisplayName
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *name,bool showTag,
               MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (name == (System_String_o *)0x0) {
    name = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    Characters_BaseCharacter__set_Name(pCVar1,name,(MethodInfo *)0x0);
    pCVar1 = (__this->fields).Character;
    if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
      if ((pCVar1->fields).AI != false) {
        if (showTag) {
          bVar2 = System_String__IsNullOrWhiteSpace((pCVar1->fields).VisibleName,(MethodInfo *)0x0);
          bVar2 = !bVar2;
        }
        else {
          bVar2 = false;
        }
        (pCVar1->fields).HasExplicitNameTag = bVar2;
      }
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Guild
// il2cpp: System_String_o* CustomLogic_CustomLogicCharacterBuiltin__get_Guild (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0c710

System_String_o *
CustomLogic_CustomLogicCharacterBuiltin__get_Guild
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).Guild;
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_Guild
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_Guild (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5a0c730

void CustomLogic_CustomLogicCharacterBuiltin__set_Guild
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pCVar1->fields).Guild = value;
  Il2CppCodeGenWriteBarrier(&(pCVar1->fields).Guild);
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Player
// il2cpp: CustomLogic_CustomLogicPlayerBuiltin_o* CustomLogic_CustomLogicCharacterBuiltin__get_Player (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0c750

CustomLogic_CustomLogicPlayerBuiltin_o *
CustomLogic_CustomLogicCharacterBuiltin__get_Player
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  Photon_Realtime_Player_o *player;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_07545f14 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    Il2CppMethodInitialized_07545f14 = '\x01';
  }
  pCVar1 = (__this->fields).Character;
  if (((pCVar1 == (Characters_BaseCharacter_o *)0x0) ||
      (pUVar2 = (pCVar1->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) ||
     (pPVar3 = (pUVar2->fields).PhotonView, pPVar3 == (Photon_Pun_PhotonView_o *)0x0)) {
    ThrowNullReferenceException();
  }
  player = (pPVar3->fields)._Owner_k__BackingField;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
  CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_00,player,(MethodInfo *)0x0);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_IsAI
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__get_IsAI (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0c7d0

bool CustomLogic_CustomLogicCharacterBuiltin__get_IsAI
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).AI;
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_IsAlive
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__get_IsAlive (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0c7f0

bool CustomLogic_CustomLogicCharacterBuiltin__get_IsAlive
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07545f15 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545f15 = '\x01';
  }
  pCVar1 = (__this->fields).Character;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = false;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pCVar1 = (__this->fields).Character;
    if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar3 = (pCVar1->fields).Dead == false;
  }
  return bVar3;
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_ViewID
// il2cpp: int32_t CustomLogic_CustomLogicCharacterBuiltin__get_ViewID (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0c860

int32_t CustomLogic_CustomLogicCharacterBuiltin__get_ViewID
                  (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  Photon_Pun_PhotonView_o *pPVar3;
  
  pCVar1 = (__this->fields).Character;
  if (((pCVar1 == (Characters_BaseCharacter_o *)0x0) ||
      (pUVar2 = (pCVar1->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) ||
     (pPVar3 = (pUVar2->fields).PhotonView, pPVar3 == (Photon_Pun_PhotonView_o *)0x0)) {
    ThrowNullReferenceException();
  }
  return (pPVar3->fields).viewIdField;
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_IsMine
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__get_IsMine (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0c890

bool CustomLogic_CustomLogicCharacterBuiltin__get_IsMine
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  return bVar2;
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_IsMainCharacter
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__get_IsMainCharacter (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0c8c0

bool CustomLogic_CustomLogicCharacterBuiltin__get_IsMainCharacter
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).Character;
  if (__this_00 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = Characters_BaseCharacter__IsMainCharacter(__this_00,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Transform
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicCharacterBuiltin__get_Transform (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0c8e0

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicCharacterBuiltin__get_Transform
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_07545f16 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    Il2CppMethodInitialized_07545f16 = '\x01';
  }
  pCVar1 = (__this->fields).Character;
  if ((pCVar1 == (Characters_BaseCharacter_o *)0x0) ||
     (pUVar2 = (pCVar1->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) {
    ThrowNullReferenceException();
  }
  transform = (pUVar2->fields).Transform;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
  CustomLogic_CustomLogicTransformBuiltin___ctor(__this_00,transform,(MethodInfo *)0x0);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Position
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCharacterBuiltin__get_Position (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0c950

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCharacterBuiltin__get_Position
          (CustomLogic_CustomLogicHumanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_07545f17 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545f17 = '\x01';
  }
  pCVar1 = (__this->fields).Character;
  if (((pCVar1 == (Characters_BaseCharacter_o *)0x0) ||
      (pUVar2 = (pCVar1->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) ||
     (__this_00 = (pUVar2->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  value = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_01,value,(MethodInfo *)0x0);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_Position
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_Position (CustomLogic_CustomLogicCharacterBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5a0c9e0

void CustomLogic_CustomLogicCharacterBuiltin__set_Position
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Rigidbody_o *__this_01;
  bool bVar3;
  
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
      UnityEngine_Transform__set_position
                (__this_00,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
      pCVar1 = (__this->fields).Character;
      if (((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
          (pUVar2 = (pCVar1->fields).Cache, pUVar2 != (Utility_BaseComponentCache_o *)0x0)) &&
         (__this_01 = (pUVar2->fields).Rigidbody, __this_01 != (UnityEngine_Rigidbody_o *)0x0)) {
        UnityEngine_Rigidbody__set_position
                  (__this_01,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Rotation
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCharacterBuiltin__get_Rotation (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0ca90

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCharacterBuiltin__get_Rotation
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o UVar3;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o local_18;
  
  if (Il2CppMethodInitialized_07545f18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545f18 = '\x01';
  }
  pCVar1 = (__this->fields).Character;
  if (((pCVar1 == (Characters_BaseCharacter_o *)0x0) ||
      (pUVar2 = (pCVar1->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) ||
     (__this_00 = (pUVar2->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  local_18 = UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
  UVar3 = UnityEngine_Quaternion__Internal_ToEulerRad(&local_18,(MethodInfo *)0x0);
  euler.fields.x = UVar3.fields.x * 57.29578;
  euler.fields.y = UVar3.fields.y * 57.29578;
  euler.fields.z = UVar3.fields.z * 57.29578;
  UVar3 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_01,UVar3,(MethodInfo *)0x0);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_Rotation
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_Rotation (CustomLogic_CustomLogicCharacterBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5a0cb50

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
  UnityEngine_Quaternion_o value_00;
  UnityEngine_Vector3_Fields UStack_28;
  
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
      __this_00 = (pUVar4->fields).Transform;
      uVar1 = (value->fields).Value.fields.x;
      uVar2 = (value->fields).Value.fields.y;
      UStack_28.x = (float)uVar1 * 0.017453292;
      UStack_28.y = (float)uVar2 * 0.017453292;
      UStack_28.z = (value->fields).Value.fields.z * 0.017453292;
      value_00 = UnityEngine_Quaternion__Internal_FromEulerRad
                           ((UnityEngine_Vector3_o *)&UStack_28,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__set_rotation(__this_00,value_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_QuaternionRotation
// il2cpp: CustomLogic_CustomLogicQuaternionBuiltin_o* CustomLogic_CustomLogicCharacterBuiltin__get_QuaternionRotation (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0cbf0

CustomLogic_CustomLogicQuaternionBuiltin_o *
CustomLogic_CustomLogicCharacterBuiltin__get_QuaternionRotation
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this_01;
  UnityEngine_Quaternion_o value;
  
  if (Il2CppMethodInitialized_07545f19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    Il2CppMethodInitialized_07545f19 = '\x01';
  }
  pCVar1 = (__this->fields).Character;
  if (((pCVar1 == (Characters_BaseCharacter_o *)0x0) ||
      (pUVar2 = (pCVar1->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) ||
     (__this_00 = (pUVar2->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  value = UnityEngine_Transform__get_rotation(__this_00,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
  CustomLogic_CustomLogicQuaternionBuiltin___ctor_58b4df0(__this_01,value,(MethodInfo *)0x0);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_QuaternionRotation
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_QuaternionRotation (CustomLogic_CustomLogicCharacterBuiltin_o* __this, CustomLogic_CustomLogicQuaternionBuiltin_o* value, const MethodInfo* method);
// 0x5a0cc80

void CustomLogic_CustomLogicCharacterBuiltin__set_QuaternionRotation
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,
               CustomLogic_CustomLogicQuaternionBuiltin_o *value,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  bool bVar3;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar3) {
      return;
    }
    pCVar1 = (__this->fields).Character;
    if ((((pCVar1 != (Characters_BaseCharacter_o *)0x0) &&
         (pUVar2 = (pCVar1->fields).Cache, pUVar2 != (Utility_BaseComponentCache_o *)0x0)) &&
        (value != (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0)) &&
       (__this_00 = (pUVar2->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
      UnityEngine_Transform__set_rotation
                (__this_00,(UnityEngine_Quaternion_o)(value->fields).Value.fields,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Velocity
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCharacterBuiltin__get_Velocity (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0cd00

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCharacterBuiltin__get_Velocity
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_07545f1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545f1a = '\x01';
  }
  __this_00 = (__this->fields).Character;
  if (__this_00 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  value = Characters_BaseCharacter__GetVelocity(__this_00,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_01,value,(MethodInfo *)0x0);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_Velocity
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_Velocity (CustomLogic_CustomLogicCharacterBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5a0cd80

void CustomLogic_CustomLogicCharacterBuiltin__set_Velocity
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Rigidbody_o *__this_00;
  bool bVar3;
  
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
        UnityEngine_Rigidbody__set_linearVelocity
                  (__this_00,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Forward
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCharacterBuiltin__get_Forward (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0ce10

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCharacterBuiltin__get_Forward
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_07545f1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545f1b = '\x01';
  }
  pCVar1 = (__this->fields).Character;
  if (((pCVar1 == (Characters_BaseCharacter_o *)0x0) ||
      (pUVar2 = (pCVar1->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) ||
     (__this_00 = (pUVar2->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  value = UnityEngine_Transform__get_forward(__this_00,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_01,value,(MethodInfo *)0x0);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_Forward
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_Forward (CustomLogic_CustomLogicCharacterBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5a0cea0

void CustomLogic_CustomLogicCharacterBuiltin__set_Forward
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  bool bVar3;
  
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
      UnityEngine_Transform__set_forward
                (__this_00,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Right
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCharacterBuiltin__get_Right (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0cf20

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCharacterBuiltin__get_Right
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_07545f1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545f1c = '\x01';
  }
  pCVar1 = (__this->fields).Character;
  if (((pCVar1 == (Characters_BaseCharacter_o *)0x0) ||
      (pUVar2 = (pCVar1->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) ||
     (__this_00 = (pUVar2->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  value = UnityEngine_Transform__get_right(__this_00,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_01,value,(MethodInfo *)0x0);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_Right
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_Right (CustomLogic_CustomLogicCharacterBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5a0cfb0

void CustomLogic_CustomLogicCharacterBuiltin__set_Right
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  bool bVar3;
  
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
      UnityEngine_Transform__set_right
                (__this_00,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Up
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCharacterBuiltin__get_Up (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0d030

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCharacterBuiltin__get_Up
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *__this_01;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_07545f1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545f1d = '\x01';
  }
  pCVar1 = (__this->fields).Character;
  if (((pCVar1 == (Characters_BaseCharacter_o *)0x0) ||
      (pUVar2 = (pCVar1->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) ||
     (__this_00 = (pUVar2->fields).Transform, __this_00 == (UnityEngine_Transform_o *)0x0)) {
    ThrowNullReferenceException();
  }
  value = UnityEngine_Transform__get_up(__this_00,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_01,value,(MethodInfo *)0x0);
  return __this_01;
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_Up
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_Up (CustomLogic_CustomLogicCharacterBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5a0d0c0

void CustomLogic_CustomLogicCharacterBuiltin__set_Up
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  bool bVar3;
  
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
      UnityEngine_Transform__set_up
                (__this_00,(UnityEngine_Vector3_o)(value->fields).Value.fields,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_HasTargetDirection
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__get_HasTargetDirection (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0d140

bool CustomLogic_CustomLogicCharacterBuiltin__get_HasTargetDirection
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).HasDirection;
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_TargetDirection
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicCharacterBuiltin__get_TargetDirection (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0d160

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicCharacterBuiltin__get_TargetDirection
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_07545f1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07545f1e = '\x01';
  }
  pCVar1 = (__this->fields).Character;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  value = (*(pCVar1->klass->vtable)._106_GetTargetDirection.methodPtr)
                    (pCVar1,(pCVar1->klass->vtable)._106_GetTargetDirection.method);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_00,value,(MethodInfo *)0x0);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_TargetDirection
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_TargetDirection (CustomLogic_CustomLogicCharacterBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5a0d1e0

void CustomLogic_CustomLogicCharacterBuiltin__set_TargetDirection
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *value,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  UnityEngine_Vector3_StaticFields *pUVar2;
  UnityEngine_Vector3_o UVar3;
  UnityEngine_Vector3_o euler;
  UnityEngine_Quaternion_o local_28;
  UnityEngine_Vector3_Fields local_18;
  
  if (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    pCVar1 = (__this->fields).Character;
    local_28.fields._0_12_ = (value->fields).Value.fields;
    if (Il2CppMethodInitialized_0753e72c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
      Il2CppMethodInitialized_0753e72c = '\x01';
    }
    pUVar2 = TypeInfo_UnityEngine_Vector3->static_fields;
    local_18.x = (pUVar2->upVector).fields.x;
    local_18.y = (pUVar2->upVector).fields.y;
    local_18.z = (pUVar2->upVector).fields.z;
    local_28 = UnityEngine_Quaternion__Internal_LookRotation
                         ((UnityEngine_Vector3_o *)&local_28,(UnityEngine_Vector3_o *)&local_18,
                          (MethodInfo *)0x0);
    UVar3 = UnityEngine_Quaternion__Internal_ToEulerRad(&local_28,(MethodInfo *)0x0);
    euler.fields.x = UVar3.fields.x * 57.29578;
    euler.fields.y = UVar3.fields.y * 57.29578;
    euler.fields.z = UVar3.fields.z * 57.29578;
    UVar3 = UnityEngine_Quaternion__Internal_MakePositive(euler,(MethodInfo *)0x0);
    if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
      (pCVar1->fields).TargetAngle = UVar3.fields.y;
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Team
// il2cpp: System_String_o* CustomLogic_CustomLogicCharacterBuiltin__get_Team (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0d2a0

System_String_o *
CustomLogic_CustomLogicCharacterBuiltin__get_Team
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).Team;
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_Team
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_Team (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* value, const MethodInfo* method);
// 0x5a0d2c0

void CustomLogic_CustomLogicCharacterBuiltin__set_Team
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *value,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Character;
    if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
      Characters_BaseCharacter__SetTeam(pCVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Health
// il2cpp: float CustomLogic_CustomLogicCharacterBuiltin__get_Health (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0d310

float CustomLogic_CustomLogicCharacterBuiltin__get_Health
                (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (float)(pCVar1->fields).CurrentHealth;
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_Health
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_Health (CustomLogic_CustomLogicCharacterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a0d330

void CustomLogic_CustomLogicCharacterBuiltin__set_Health
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Character;
    if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
      Characters_BaseCharacter__SetCurrentHealth(pCVar1,(int)value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_MaxHealth
// il2cpp: float CustomLogic_CustomLogicCharacterBuiltin__get_MaxHealth (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0d390

float CustomLogic_CustomLogicCharacterBuiltin__get_MaxHealth
                (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (float)(pCVar1->fields).MaxHealth;
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_MaxHealth
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_MaxHealth (CustomLogic_CustomLogicCharacterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a0d3b0

void CustomLogic_CustomLogicCharacterBuiltin__set_MaxHealth
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Character;
    if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
      Characters_BaseCharacter__SetMaxHealth(pCVar1,(int)value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_CustomDamageEnabled
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__get_CustomDamageEnabled (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0d410

bool CustomLogic_CustomLogicCharacterBuiltin__get_CustomDamageEnabled
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).CustomDamageEnabled;
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_CustomDamageEnabled
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_CustomDamageEnabled (CustomLogic_CustomLogicCharacterBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5a0d430

void CustomLogic_CustomLogicCharacterBuiltin__set_CustomDamageEnabled
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,bool value,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
label_05a0d469:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Character;
    if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_05a0d469;
    (pCVar1->fields).CustomDamageEnabled = value;
  }
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_CustomDamage
// il2cpp: int32_t CustomLogic_CustomLogicCharacterBuiltin__get_CustomDamage (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0d470

int32_t CustomLogic_CustomLogicCharacterBuiltin__get_CustomDamage
                  (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).CustomDamage;
}


// CustomLogic.CustomLogicCharacterBuiltin$$set_CustomDamage
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__set_CustomDamage (CustomLogic_CustomLogicCharacterBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5a0d490

void CustomLogic_CustomLogicCharacterBuiltin__set_CustomDamage
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
label_05a0d4c8:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Character;
    if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_05a0d4c8;
    (pCVar1->fields).CustomDamage = value;
  }
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_CurrentAnimation
// il2cpp: System_String_o* CustomLogic_CustomLogicCharacterBuiltin__get_CurrentAnimation (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0d4d0

System_String_o *
CustomLogic_CustomLogicCharacterBuiltin__get_CurrentAnimation
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this_00;
  System_String_o *pSVar1;
  
  __this_00 = (__this->fields).Character;
  if (__this_00 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = Characters_BaseCharacter__GetCurrentAnimation(__this_00,(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Grounded
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__get_Grounded (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0d4f0

bool CustomLogic_CustomLogicCharacterBuiltin__get_Grounded
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).Grounded;
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_Rigidbody
// il2cpp: CustomLogic_CustomLogicRigidbodyBuiltin_o* CustomLogic_CustomLogicCharacterBuiltin__get_Rigidbody (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0d510

CustomLogic_CustomLogicRigidbodyBuiltin_o *
CustomLogic_CustomLogicCharacterBuiltin__get_Rigidbody
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Rigidbody_o *rb;
  CustomLogic_CustomLogicRigidbodyBuiltin_o *__this_00;
  MethodInfo *in_RCX;
  
  if (Il2CppMethodInitialized_07545f1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin);
    Il2CppMethodInitialized_07545f1f = '\x01';
  }
  pCVar1 = (__this->fields).Character;
  if ((pCVar1 == (Characters_BaseCharacter_o *)0x0) ||
     (pUVar2 = (pCVar1->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) {
    ThrowNullReferenceException();
  }
  rb = (pUVar2->fields).Rigidbody;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicRigidbodyBuiltin);
  CustomLogic_CustomLogicRigidbodyBuiltin___ctor_5904150
            (__this_00,(CustomLogic_BuiltinClassInstance_o *)__this,rb,in_RCX);
  return __this_00;
}


// CustomLogic.CustomLogicCharacterBuiltin$$GetKilled
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__GetKilled (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* killer, const MethodInfo* method);
// 0x5a0d580

void CustomLogic_CustomLogicCharacterBuiltin__GetKilled
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *killer,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pCVar1->klass->vtable)._98_GetKilled.methodPtr)
            (pCVar1,killer,(pCVar1->klass->vtable)._98_GetKilled.method);
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin$$GetDamaged
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__GetDamaged (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* killer, int32_t damage, const MethodInfo* method);
// 0x5a0d5b0

void CustomLogic_CustomLogicCharacterBuiltin__GetDamaged
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *killer,int32_t damage,
               MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  (*(pCVar1->klass->vtable)._97_GetDamaged.methodPtr)
            (pCVar1,killer,damage,(pCVar1->klass->vtable)._97_GetDamaged.method);
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin$$Emote
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__Emote (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* emote, const MethodInfo* method);
// 0x5a0d5e0

void CustomLogic_CustomLogicCharacterBuiltin__Emote
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *emote,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
label_05a0d63b:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Character;
    if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_05a0d63b;
    if ((pCVar1->fields).Dead == false) {
      (*(pCVar1->klass->vtable)._80_Emote.methodPtr)(pCVar1,emote,(pCVar1->klass->vtable)._80_Emote.method);
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin$$PlayAnimation
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__PlayAnimation (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* animation, float fade, const MethodInfo* method);
// 0x5a0d640

void CustomLogic_CustomLogicCharacterBuiltin__PlayAnimation
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *animation,float fade,
               MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
label_05a0d69e:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Character;
    if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_05a0d69e;
    if ((pCVar1->fields).Dead == false) {
      Characters_BaseCharacter__CrossFadeIfNotPlaying(pCVar1,animation,fade,0.0,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin$$PlayAnimationAt
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__PlayAnimationAt (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* animation, float t, float fade, bool force, const MethodInfo* method);
// 0x5a0d6b0

void CustomLogic_CustomLogicCharacterBuiltin__PlayAnimationAt
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *animation,float t,
               float fade,bool force,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
label_05a0d73f:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Character;
    if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_05a0d73f;
    if ((pCVar1->fields).Dead == false) {
      if (force) {
        Characters_BaseCharacter__CrossFade(pCVar1,animation,fade,t,(MethodInfo *)0x0);
        return;
      }
      Characters_BaseCharacter__CrossFadeIfNotPlaying(pCVar1,animation,fade,t,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin$$GetAnimationSpeed
// il2cpp: float CustomLogic_CustomLogicCharacterBuiltin__GetAnimationSpeed (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* animation, const MethodInfo* method);
// 0x5a0d750

float CustomLogic_CustomLogicCharacterBuiltin__GetAnimationSpeed
                (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *animation,
                MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
label_05a0d7a7:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Character;
    if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_05a0d7a7;
    if ((pCVar1->fields).Dead == false) {
      fVar3 = Characters_BaseCharacter__GetAnimationSpeed(pCVar1,animation,(MethodInfo *)0x0);
      return fVar3;
    }
  }
  return 1.0;
}


// CustomLogic.CustomLogicCharacterBuiltin$$SetAnimationSpeed
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__SetAnimationSpeed (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* animation, float speed, bool synced, const MethodInfo* method);
// 0x5a0d7b0

void CustomLogic_CustomLogicCharacterBuiltin__SetAnimationSpeed
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *animation,float speed,
               bool synced,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
label_05a0d82d:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Character;
    if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_05a0d82d;
    if ((pCVar1->fields).Dead == false) {
      if (synced) {
        Characters_BaseCharacter__SetAnimationSpeed(pCVar1,animation,speed,(MethodInfo *)0x0);
        return;
      }
      Characters_BaseCharacter__SetAnimationSpeedNonRPC(pCVar1,animation,speed,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin$$IsPlayingAnimation
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__IsPlayingAnimation (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* animation, const MethodInfo* method);
// 0x5a0d840

bool CustomLogic_CustomLogicCharacterBuiltin__IsPlayingAnimation
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *animation,
               MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Character;
  if ((pCVar1 == (Characters_BaseCharacter_o *)0x0) ||
     (__this_00 = (pCVar1->fields).Animation, __this_00 == (Characters_AnimationHandler_o *)0x0)) {
    ThrowNullReferenceException();
  }
  bVar2 = Characters_AnimationHandler__IsPlaying(__this_00,animation,(MethodInfo *)0x0);
  return bVar2;
}


// CustomLogic.CustomLogicCharacterBuiltin$$GetAnimationNormalizedTime
// il2cpp: float CustomLogic_CustomLogicCharacterBuiltin__GetAnimationNormalizedTime (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* animation, const MethodInfo* method);
// 0x5a0d870

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
// 0x5a0d8c0

void CustomLogic_CustomLogicCharacterBuiltin__ForceAnimation
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *animation,float fade,
               MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
label_05a0d927:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Character;
    if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_05a0d927;
    if ((pCVar1->fields).Dead == false) {
      (*(pCVar1->klass->vtable)._81_ForceAnimation.methodPtr)
                (pCVar1,animation,fade,(pCVar1->klass->vtable)._81_ForceAnimation.method);
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin$$GetAnimationLength
// il2cpp: float CustomLogic_CustomLogicCharacterBuiltin__GetAnimationLength (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* animation, const MethodInfo* method);
// 0x5a0d930

float CustomLogic_CustomLogicCharacterBuiltin__GetAnimationLength
                (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *animation,
                MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Characters_AnimationHandler_o *__this_00;
  float fVar2;
  
  pCVar1 = (__this->fields).Character;
  if ((pCVar1 == (Characters_BaseCharacter_o *)0x0) ||
     (__this_00 = (pCVar1->fields).Animation, __this_00 == (Characters_AnimationHandler_o *)0x0)) {
    ThrowNullReferenceException();
  }
  fVar2 = Characters_AnimationHandler__GetLength(__this_00,animation,(MethodInfo *)0x0);
  return fVar2;
}


// CustomLogic.CustomLogicCharacterBuiltin$$IsPlayingSound
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__IsPlayingSound (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* sound, const MethodInfo* method);
// 0x5a0d960

bool CustomLogic_CustomLogicCharacterBuiltin__IsPlayingSound
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *sound,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this_00;
  bool bVar1;
  
  __this_00 = (__this->fields).Character;
  if (__this_00 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = Characters_BaseCharacter__IsPlayingSound(__this_00,sound,(MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin$$PlaySound
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__PlaySound (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* sound, bool local, const MethodInfo* method);
// 0x5a0d980

void CustomLogic_CustomLogicCharacterBuiltin__PlaySound
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *sound,bool local,
               MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Photon_Pun_PhotonMessageInfo_o PVar2;
  bool bVar3;
  Photon_Pun_PhotonMessageInfo_Fields local_38;
  
  if (Il2CppMethodInitialized_07545f20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07545f20 = '\x01';
  }
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    if (((pCVar1->fields).Dead != false) ||
       (bVar3 = Characters_BaseCharacter__IsPlayingSound(pCVar1,sound,(MethodInfo *)0x0), bVar3)) {
      return;
    }
    pCVar1 = (__this->fields).Character;
    if (local) {
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      Utility_Util__CreateLocalPhotonInfo((Photon_Pun_PhotonMessageInfo_o *)&local_38,(MethodInfo *)0x0);
      if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
        PVar2.fields.Sender = local_38.Sender;
        PVar2.fields.timeInt = local_38.timeInt;
        PVar2.fields._4_4_ = local_38._4_4_;
        PVar2.fields.photonView = local_38.photonView;
        (*(pCVar1->klass->vtable)._86_PlaySoundRPC.methodPtr)
                  (pCVar1,sound,PVar2,(pCVar1->klass->vtable)._86_PlaySoundRPC.method);
        return;
      }
    }
    else if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
      bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (!bVar3) {
        return;
      }
      pCVar1 = (__this->fields).Character;
      if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
        Characters_BaseCharacter__PlaySound(pCVar1,sound,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$StopSound
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__StopSound (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* sound, const MethodInfo* method);
// 0x5a0da80

void CustomLogic_CustomLogicCharacterBuiltin__StopSound
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *sound,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
label_05a0dae6:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Character;
    if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_05a0dae6;
    if ((pCVar1->fields).Dead == false) {
      bVar2 = Characters_BaseCharacter__IsPlayingSound(pCVar1,sound,(MethodInfo *)0x0);
      if (bVar2) {
        pCVar1 = (__this->fields).Character;
        if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
          Characters_BaseCharacter__StopSound(pCVar1,sound,(MethodInfo *)0x0);
          return;
        }
        goto label_05a0dae6;
      }
    }
  }
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin$$FadeSound
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__FadeSound (CustomLogic_CustomLogicCharacterBuiltin_o* __this, System_String_o* sound, float volume, float time, const MethodInfo* method);
// 0x5a0daf0

void CustomLogic_CustomLogicCharacterBuiltin__FadeSound
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,System_String_o *sound,float volume,
               float time,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
label_05a0db55:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Character;
    if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_05a0db55;
    if ((pCVar1->fields).Dead == false) {
      Characters_BaseCharacter__FadeSound(pCVar1,sound,volume,time,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin$$LookAt
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__LookAt (CustomLogic_CustomLogicCharacterBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* position, const MethodInfo* method);
// 0x5a0db60

void CustomLogic_CustomLogicCharacterBuiltin__LookAt
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *position,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  Utility_BaseComponentCache_o *pUVar2;
  UnityEngine_Transform_o *__this_00;
  bool bVar3;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar3) {
      return;
    }
    pCVar1 = (__this->fields).Character;
    if (pCVar1 != (Characters_BaseCharacter_o *)0x0) {
      if ((pCVar1->fields).Dead != false) {
        return;
      }
      pUVar2 = (pCVar1->fields).Cache;
      if (((pUVar2 != (Utility_BaseComponentCache_o *)0x0) &&
          (position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) &&
         (__this_00 = (pUVar2->fields).Transform, __this_00 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__LookAt_692e330
                  (__this_00,(UnityEngine_Vector3_o)(position->fields).Value.fields,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$AddForce
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__AddForce (CustomLogic_CustomLogicCharacterBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* force, Il2CppObject* mode, const MethodInfo* method);
// 0x5a0dbe0

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
  Il2CppObject *value;
  System_String_o *pSVar5;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t mode_00;
  UnityEngine_Rigidbody_o *__this_01;
  System_String_o **metadataPointer;
  undefined8 uVar6;
  float fVar7;
  UnityEngine_Vector3_o force_00;
  int32_t local_3c;
  int32_t local_38;
  int32_t local_34;
  
  if (Il2CppMethodInitialized_07545f21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_ForceMode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_ForceMode);
    Il2CppMethodInitialized_07545f21 = '\x01';
  }
  local_3c = 0;
  pCVar1 = (__this->fields).Character;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
label_05a0ddcb:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (!bVar3) {
    return;
  }
  pCVar1 = (__this->fields).Character;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) goto label_05a0ddcb;
  Characters_BaseCharacter__SetKinematic(pCVar1,false,1.0,(MethodInfo *)0x0);
  if (mode == (Il2CppObject *)0x0) {
label_05a0ddd0:
    metadataPointer = &"Invalid force mode: {0}";
  }
  else {
    if (mode->klass != g_data_07556710) {
      if (mode->klass == g_data_07556758) {
        if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_07556760);
        }
        bVar3 = System_Enum__TryParse_Int32Enum_
                          ((System_String_o *)mode,&local_3c,
                           (MethodInfo_34DC610 *)MethodInfo_System_Enum_TryParse_ForceMode);
        if (bVar3) {
          pCVar1 = (__this->fields).Character;
          if (((pCVar1 == (Characters_BaseCharacter_o *)0x0) ||
              (pUVar2 = (pCVar1->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) ||
             ((force == (CustomLogic_CustomLogicVector3Builtin_o *)0x0 ||
              (__this_01 = (pUVar2->fields).Rigidbody, __this_01 == (UnityEngine_Rigidbody_o *)0x0))))
          goto label_05a0ddcb;
          fVar7 = (force->fields).Value.fields.z;
          uVar6._0_4_ = (force->fields).Value.fields.x;
          uVar6._4_4_ = (force->fields).Value.fields.y;
          mode_00 = local_3c;
          goto label_05a0ddb5;
        }
        pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Unknown force mode: ");
        pSVar5 = System_String__Concat_52f0320(pSVar5,(System_String_o *)mode,(MethodInfo *)0x0);
        goto label_05a0de23;
      }
      goto label_05a0ddd0;
    }
    piVar4 = il2cpp_vm_Object_Unbox(mode);
    handle = TypeRef_UnityEngine_ForceMode;
    mode_00 = *piVar4;
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    local_34 = mode_00;
    value = il2cpp_vm_Object_Box(g_data_07556710,&local_34);
    if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_07556760);
    }
    bVar3 = System_Enum__IsDefined(enumType,value,(MethodInfo *)0x0);
    if (bVar3) {
      pCVar1 = (__this->fields).Character;
      if ((((pCVar1 == (Characters_BaseCharacter_o *)0x0) ||
           (pUVar2 = (pCVar1->fields).Cache, pUVar2 == (Utility_BaseComponentCache_o *)0x0)) ||
          (force == (CustomLogic_CustomLogicVector3Builtin_o *)0x0)) ||
         (__this_01 = (pUVar2->fields).Rigidbody, __this_01 == (UnityEngine_Rigidbody_o *)0x0))
      goto label_05a0ddcb;
      fVar7 = (force->fields).Value.fields.z;
      uVar6._0_4_ = (force->fields).Value.fields.x;
      uVar6._4_4_ = (force->fields).Value.fields.y;
label_05a0ddb5:
      force_00.fields.z = fVar7;
      force_00.fields.x = (float)(int)uVar6;
      force_00.fields.y = (float)(int)((ulong)uVar6 >> 0x20);
      UnityEngine_Rigidbody__AddForce(__this_01,force_00,mode_00,(MethodInfo *)0x0);
      return;
    }
    local_38 = mode_00;
    mode = il2cpp_vm_Object_Box(g_data_07556710,&local_38);
    metadataPointer = &"Unknown force mode: {0}";
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(metadataPointer);
  pSVar5 = System_String__Format(pSVar5,mode,(MethodInfo *)0x0);
label_05a0de23:
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_54186d0(__this_00,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_AddForce);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// CustomLogic.CustomLogicCharacterBuiltin$$Reveal
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__Reveal (CustomLogic_CustomLogicCharacterBuiltin_o* __this, float delay, const MethodInfo* method);
// 0x5a0de70

void CustomLogic_CustomLogicCharacterBuiltin__Reveal
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,float delay,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this_00;
  
  __this_00 = (__this->fields).Character;
  if (__this_00 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  Characters_BaseCharacter__Reveal(__this_00,0.0,delay,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin$$AddOutline
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__AddOutline (CustomLogic_CustomLogicCharacterBuiltin_o* __this, CustomLogic_CustomLogicColorBuiltin_o* color, System_String_o* mode, const MethodInfo* method);
// 0x5a0de90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a0df70: jmp 0x5a0df00

void CustomLogic_CustomLogicCharacterBuiltin__AddOutline
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,CustomLogic_CustomLogicColorBuiltin_o *color
               ,System_String_o *mode,MethodInfo *method)

{
  uint32_t uVar1;
  Utility_Color255_o *__this_00;
  Characters_BaseCharacter_o *__this_01;
  bool bVar2;
  System_String_o *pSVar3;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_02;
  MethodInfo *lastManagedFrame;
  undefined4 extraout_XMM0_Dc;
  undefined4 extraout_XMM0_Dd;
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  UnityEngine_Color_o UVar4;
  int32_t local_3c;
  undefined1 local_38 [16];
  undefined1 local_28 [16];
  
  if (Il2CppMethodInitialized_07545f22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Enum_TryParse_Outline_Mode);
    Il2CppMethodInitialized_07545f22 = '\x01';
  }
  local_3c = 0;
  if (color == (CustomLogic_CustomLogicColorBuiltin_o *)0x0) {
    local_28 = ZEXT816(0x3f8000003f800000);
    local_38 = ZEXT816(0x3f8000003f800000);
    uVar1 = (g_data_07556760->_2).cctor_finished_or_no_cctor;
  }
  else {
    __this_00 = (color->fields).Value;
    if (__this_00 == (Utility_Color255_o *)0x0) goto label_05a0df72;
    UVar4 = Utility_Color255__ToColor(__this_00,(MethodInfo *)0x0);
    local_28._8_4_ = extraout_XMM0_Dc;
    local_28._0_8_ = UVar4.fields._0_8_;
    local_28._12_4_ = extraout_XMM0_Dd;
    local_38._8_4_ = in_XMM1_Dc;
    local_38._0_8_ = UVar4.fields._8_8_;
    local_38._12_4_ = in_XMM1_Dd;
    uVar1 = (g_data_07556760->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(g_data_07556760);
  }
  bVar2 = System_Enum__TryParse_Int32Enum_
                    (mode,&local_3c,(MethodInfo_34DC610 *)MethodInfo_System_Enum_TryParse_Outline_Mode);
  if (!bVar2) {
    pSVar3 = il2cpp_codegen_get_runtime_metadata(&"Unknown outline mode: ");
    pSVar3 = System_String__Concat_52f0320(pSVar3,mode,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_02 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_02,pSVar3,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicCharacterBuiltin_AddOutline);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,lastManagedFrame);
  }
  __this_01 = (__this->fields).Character;
  if (__this_01 != (Characters_BaseCharacter_o *)0x0) {
    UVar4.fields.b = (float)local_38._0_4_;
    UVar4.fields.a = (float)local_38._4_4_;
    UVar4.fields.r = (float)local_28._0_4_;
    UVar4.fields.g = (float)local_28._4_4_;
    Characters_BaseCharacter__AddOutlineWithColor(__this_01,UVar4,local_3c,(MethodInfo *)0x0);
    return;
  }
label_05a0df72:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicCharacterBuiltin$$RemoveOutline
// il2cpp: void CustomLogic_CustomLogicCharacterBuiltin__RemoveOutline (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0dfd0

void CustomLogic_CustomLogicCharacterBuiltin__RemoveOutline
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *__this_00;
  
  __this_00 = (__this->fields).Character;
  if (__this_00 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  Characters_BaseCharacter__RemoveOutline(__this_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicCharacterBuiltin$$Equals
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__Equals (CustomLogic_CustomLogicCharacterBuiltin_o* __this, Il2CppObject* other, const MethodInfo* method);
// 0x5a0dff0

bool CustomLogic_CustomLogicCharacterBuiltin__Equals
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,Il2CppObject *other,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *in_RCX;
  
  bVar1 = CustomLogic_CustomLogicCharacterBuiltin____Eq__(__this,(Il2CppObject *)__this,other,in_RCX);
  return bVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin$$__Eq__
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin____Eq__ (CustomLogic_CustomLogicCharacterBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x5a0e000
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a0e05e: jmp 0x5a0e09c
// asm:   0x5a0e072: test r14, r14
// asm:   0x5a0e075: je 0x5a0e09c
// asm:   0x5a0e1a1: jmp 0x5a0e0c0

bool CustomLogic_CustomLogicCharacterBuiltin____Eq__
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
               MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  Il2CppClass *x;
  Il2CppClass *x_00;
  
  if (Il2CppMethodInitialized_07545f23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicCharacterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545f23 = '\x01';
  }
  if (other == (Il2CppObject *)0x0) {
label_05a0e057:
    pIVar3 = (Il2CppObject *)0x0;
  }
  else {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin->_2).typeHierarchyDepth;
    if ((other->klass->_2).typeHierarchyDepth < bVar1) goto label_05a0e057;
    pIVar3 = (Il2CppObject *)0x0;
    if ((other->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin) {
      pIVar3 = other;
    }
  }
  if (self != (Il2CppObject *)0x0) {
    bVar1 = (TypeInfo_CustomLogic_CustomLogicCharacterBuiltin->_2).typeHierarchyDepth;
    if ((bVar1 <= (self->klass->_2).typeHierarchyDepth) &&
       ((self->klass->_2).typeHierarchy[(ulong)bVar1 - 1] ==
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicCharacterBuiltin)) {
      x_00 = self[3].klass;
      goto joined_r0x05a0e180;
    }
  }
  x_00 = (Il2CppClass *)0x0;
joined_r0x05a0e180:
  if (pIVar3 == (Il2CppObject *)0x0) {
    x = (Il2CppClass *)0x0;
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    x = pIVar3[3].klass;
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      return true;
    }
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar4 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar4) {
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar4 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)x_00,(UnityEngine_Object_o *)x,(MethodInfo *)0x0);
      return bVar4;
    }
  }
  return false;
}


// CustomLogic.CustomLogicCharacterBuiltin$$__Hash__
// il2cpp: int32_t CustomLogic_CustomLogicCharacterBuiltin____Hash__ (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0e1b0

int32_t CustomLogic_CustomLogicCharacterBuiltin____Hash__
                  (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = (*(__this->klass->vtable)._2_GetHashCode.methodPtr)
                    (__this,(__this->klass->vtable)._2_GetHashCode.method);
  return iVar1;
}


// CustomLogic.CustomLogicCharacterBuiltin$$GetHashCode
// il2cpp: int32_t CustomLogic_CustomLogicCharacterBuiltin__GetHashCode (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0e1d0

int32_t CustomLogic_CustomLogicCharacterBuiltin__GetHashCode
                  (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseCharacter_o *pCVar1;
  int32_t iVar2;
  
  pCVar1 = (__this->fields).Character;
  if (pCVar1 == (Characters_BaseCharacter_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar2 = (*(pCVar1->klass->vtable)._2_GetHashCode.methodPtr)
                    (pCVar1,(pCVar1->klass->vtable)._2_GetHashCode.method);
  return iVar2;
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicCharacterBuiltin__get_ClassName (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0e200

System_String_o *
CustomLogic_CustomLogicCharacterBuiltin__get_ClassName
          (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07545f24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Character");
    Il2CppMethodInitialized_07545f24 = '\x01';
  }
  return "Character";
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__get_IsAbstract (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0e230

bool CustomLogic_CustomLogicCharacterBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__get_IsStatic (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0e240

bool CustomLogic_CustomLogicCharacterBuiltin__get_IsStatic
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicCharacterBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicCharacterBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicCharacterBuiltin_o* __this, const MethodInfo* method);
// 0x5a0e250

bool CustomLogic_CustomLogicCharacterBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicCharacterBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


