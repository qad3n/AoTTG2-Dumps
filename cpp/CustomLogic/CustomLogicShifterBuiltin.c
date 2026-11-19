// Type: CustomLogic.CustomLogicShifterBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicShifterBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicShifterBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicShifterBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicShifterBuiltin_o* CustomLogic_CustomLogicShifterBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a3f810

CustomLogic_CustomLogicShifterBuiltin_o *
CustomLogic_CustomLogicShifterBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicShifterBuiltin constructor found that takes ");
  str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
  pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_54186d0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5a43460

void CustomLogic_CustomLogicShifterBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075461b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
    Il2CppMethodInitialized_075461b3 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c)
  ;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5a434d0

void CustomLogic_CustomLogicShifterBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$<__CreateMethodBinding__MoveToExact>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__MoveToExact_b__22_0 (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicShifterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a434e0

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__MoveToExact_b__22_0
          (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicShifterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  float timeoutPadding;
  
  if (Il2CppMethodInitialized_075461b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461b4 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    position = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                         (pIVar1,(MethodInfo_34BDE00 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin
                         );
    if ((int)__a->max_length < 2) {
      timeoutPadding = 1.0;
      method_00 = extraout_RDX;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      timeoutPadding =
           CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     (pIVar1,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float
                     );
      method_00 = extraout_RDX_00;
    }
    if (__c != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
      CustomLogic_CustomLogicShifterBuiltin__MoveToExact(__c,position,timeoutPadding,method_00);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$<__CreateMethodBinding__MoveToExactCallback>b__23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__MoveToExactCallback_b__23_0 (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicShifterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a435d0

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__MoveToExactCallback_b__23_0
          (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicShifterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  CustomLogic_UserMethod_o *method_00;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  float range;
  float timeoutPadding;
  
  if (Il2CppMethodInitialized_075461b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461b5 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05a43734:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    method_00 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (pIVar1,(MethodInfo_34BDE00 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_UserMethod);
    if ((__a->max_length & 0xfffffffe) != 0) {
      position = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                           (__a->m_Items[1],
                            (MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
      timeoutPadding = 1.0;
      if ((int)__a->max_length < 3) {
        range = 10.0;
      }
      else {
        pIVar1 = __a->m_Items[2];
        if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
        }
        range = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                          (pIVar1,(MethodInfo_34BDFE0 *)
                                  MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        if ((int)__a->max_length < 4) {
          timeoutPadding = 1.0;
        }
        else {
          pIVar1 = __a->m_Items[3];
          if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
          }
          timeoutPadding =
               CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                         (pIVar1,(MethodInfo_34BDFE0 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
        }
      }
      if (__c != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
        CustomLogic_CustomLogicShifterBuiltin__MoveToExactCallback
                  (__c,method_00,position,range,timeoutPadding,method);
        return (Il2CppObject *)0x0;
      }
      goto label_05a43734;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$<__CreateMethodBinding__Target>b__24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__Target_b__24_0 (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicShifterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a43740

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__Target_b__24_0
          (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicShifterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *target;
  Il2CppObject *obj;
  float focusDuration;
  
  if (Il2CppMethodInitialized_075461b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461b6 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
      ThrowIndexOutOfRangeException();
    }
    target = __a->m_Items[0];
    obj = __a->m_Items[1];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    focusDuration =
         CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                   (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
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
// 0x5a437e0

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
    if (!bVar2) {
      return (Il2CppObject *)0x0;
    }
    pCVar1 = (__c->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
      if ((pCVar1->fields).Dead != false) {
        return (Il2CppObject *)0x0;
      }
      if ((pCVar1->fields).AI == false) {
        return (Il2CppObject *)0x0;
      }
      __this_00 = (__c->fields).Controller;
      if (__this_00 != (Controllers_BaseTitanAIController_o *)0x0) {
        Controllers_BaseTitanAIController__CancelOrder(__this_00,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$<__CreateMethodBinding__Blind>b__26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__Blind_b__26_0 (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicShifterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a43840

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__Blind_b__26_0
          (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicShifterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  
  if ((__c == (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) ||
     (pCVar1 = (__c->fields).Shifter, pCVar1 == (Characters_BaseShifter_o *)0x0)) {
label_05a4388d:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__c->fields).Shifter;
    if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a4388d;
    if ((pCVar1->fields).Dead == false) {
      (*(pCVar1->klass->vtable)._168_Blind.methodPtr)(pCVar1,(pCVar1->klass->vtable)._168_Blind.method);
      return (Il2CppObject *)0x0;
    }
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$<__CreateMethodBinding__Cripple>b__27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__Cripple_b__27_0 (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicShifterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a438a0

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__Cripple_b__27_0
          (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicShifterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_075461b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461b7 = '\x01';
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
                      (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if ((__c != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
       (pCVar1 = (__c->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__c->fields).Shifter;
        if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a4396a;
        if ((pCVar1->fields).Dead == false) {
          (*(pCVar1->klass->vtable)._169_Cripple.methodPtr)
                    (pCVar1,fVar3,(pCVar1->klass->vtable)._169_Cripple.method);
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
label_05a4396a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$<__CreateMethodBinding__Attack>b__28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__Attack_b__28_0 (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicShifterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a43980

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__Attack_b__28_0
          (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicShifterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_075461b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461b8 = '\x01';
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
    if ((__c != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
       (pCVar1 = (__c->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__c->fields).Shifter;
        if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a43a60;
        if ((pCVar1->fields).Dead == false) {
          bVar2 = (*(pCVar1->klass->vtable)._151_CanAttack.methodPtr)
                            (pCVar1,(pCVar1->klass->vtable)._151_CanAttack.method);
          if (bVar2) {
            pCVar1 = (__c->fields).Shifter;
            if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a43a60;
            (*(pCVar1->klass->vtable)._150_Attack.methodPtr)
                      (pCVar1,pSVar3,(pCVar1->klass->vtable)._150_Attack.method);
          }
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
label_05a43a60:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$<__CreateMethodBinding__Stun>b__29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__Stun_b__29_0 (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicShifterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a43a70

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__Stun_b__29_0
          (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicShifterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  MethodInfo *method_00;
  float duration;
  
  method_00 = (MethodInfo *)__c;
  if (Il2CppMethodInitialized_075461b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461b9 = '\x01';
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
      method_00 = MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float;
      duration = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                           (obj,(MethodInfo_34BDFE0 *)
                                MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    }
    if (__c != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
      CustomLogic_CustomLogicShifterBuiltin__Stun(__c,duration,method_00);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicShifterBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a3f8a0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicShifterBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *pCVar3;
  CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicShifterBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_07546184 == '\0') {
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
    Il2CppMethodInitialized_07546184 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x8b67f169) {
    if (uVar2 < 0x3da81e8e) {
      if (uVar2 < 0x246c98e1) {
        if (uVar2 == 0x7186f3c) {
          bVar1 = System_String__op_Equality(name,"NapePosition",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__NapePosition
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x1d46812f) {
          bVar1 = System_String__op_Equality(name,"AttackSpeedMultiplier",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__AttackSpeedMultiplier
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x246c98e0) {
          bVar1 = System_String__op_Equality(name,"RunSpeedBase",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__RunSpeedBase
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 < 0x320c4020) {
        if (uVar2 == 0x2ae002cc) {
          bVar1 = System_String__op_Equality(name,"JumpForce",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__JumpForce
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x320c401f) {
          bVar1 = System_String__op_Equality(name,"ActionPause",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__ActionPause
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x384157d7) {
        bVar1 = System_String__op_Equality(name,"MoveToExactCallback",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__MoveToExactCallback
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x3da81e8d) {
        bVar1 = System_String__op_Equality(name,"RotateSpeed",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__RotateSpeed
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x6709f835) {
      if (uVar2 == 0x46b92be8) {
        bVar1 = System_String__op_Equality(name,"FocusRange",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__FocusRange
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x5d992b41) {
        bVar1 = System_String__op_Equality(name,"Stun",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Stun
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x6709f834) {
        bVar1 = System_String__op_Equality(name,"Wander",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Wander
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 < 0x6fd42729) {
      if (uVar2 == 0x69ba519b) {
        bVar1 = System_String__op_Equality(name,"FarAttackCooldown",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__FarAttackCooldown
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x6fd42728) {
        bVar1 = System_String__op_Equality(name,"WalkSpeedPerLevel",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__WalkSpeedPerLevel
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x8b67f168) {
      bVar1 = System_String__op_Equality(name,"Target",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Target
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0x7c69a11c) {
      bVar1 = System_String__op_Equality(name,"MoveToExact",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__MoveToExact
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 < 0xbb10b4ad) {
    if (uVar2 < 0x90cf188b) {
      if (uVar2 == 0x8ba9331d) {
        bVar1 = System_String__op_Equality(name,"Attack",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Attack
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x8dc5a9a3) {
        bVar1 = System_String__op_Equality(name,"NeckMount",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__NeckMount
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x90cf188a) {
        bVar1 = System_String__op_Equality(name,"FocusTime",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__FocusTime
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0xa6478e7d) {
      if (uVar2 == 0x9891bf88) {
        bVar1 = System_String__op_Equality(name,"AttackWait",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__AttackWait
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xa6478e7c) {
        bVar1 = System_String__op_Equality(name,"Size",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__Size
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0xb5f3afdd) {
      bVar1 = System_String__op_Equality(name,"TurnSpeed",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__TurnSpeed
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xbb10b4ac) {
      bVar1 = System_String__op_Equality(name,"HeadMount",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__HeadMount
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xd0d86e03) {
    if (uVar2 == 0xc746e5f5) {
      bVar1 = System_String__op_Equality(name,"AttackPause",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__AttackPause
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xcf6befb4) {
      bVar1 = System_String__op_Equality(name,"DeathAnimLength",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__DeathAnimLength
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xd0d86e02) {
      bVar1 = System_String__op_Equality(name,"RunSpeedPerLevel",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__RunSpeedPerLevel
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xe4d66f55) {
    if (uVar2 == 0xd2528dac) {
      bVar1 = System_String__op_Equality(name,"TurnPause",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__TurnPause
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xe4d66f54) {
      bVar1 = System_String__op_Equality(name,"Blind",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Blind
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 == 0xedff5766) {
    bVar1 = System_String__op_Equality(name,"WalkSpeedBase",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__WalkSpeedBase
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xf96e74c8) {
    bVar1 = System_String__op_Equality(name,"Cripple",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings);
      }
      pCVar4 = CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Cripple
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar4;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicShifterBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__Size
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__Size (const MethodInfo* method);
// 0x5a40330

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__Size(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  System_Action_CustomLogicShifterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546185 == '\0') {
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
    Il2CppMethodInitialized_07546185 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__Size_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__Size_g____setter_2_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__RunSpeedBase
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__RunSpeedBase (const MethodInfo* method);
// 0x5a40410

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__RunSpeedBase(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  System_Action_CustomLogicShifterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546186 == '\0') {
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
    Il2CppMethodInitialized_07546186 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__RunSpeedBase_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__RunSpeedBase_g____setter
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__WalkSpeedBase
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__WalkSpeedBase (const MethodInfo* method);
// 0x5a404f0

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__WalkSpeedBase(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  System_Action_CustomLogicShifterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546187 == '\0') {
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
    Il2CppMethodInitialized_07546187 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__WalkSpeedBase_g____gette
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__WalkSpeedBase_g____sette
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__WalkSpeedPerLevel
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__WalkSpeedPerLevel (const MethodInfo* method);
// 0x5a405d0

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__WalkSpeedPerLevel(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  System_Action_CustomLogicShifterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546188 == '\0') {
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
    Il2CppMethodInitialized_07546188 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__WalkSpeedPerLevel_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__WalkSpeedPerLevel_g____s
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__RunSpeedPerLevel
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__RunSpeedPerLevel (const MethodInfo* method);
// 0x5a406b0

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__RunSpeedPerLevel(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  System_Action_CustomLogicShifterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546189 == '\0') {
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
    Il2CppMethodInitialized_07546189 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__RunSpeedPerLevel_g____ge
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__RunSpeedPerLevel_g____se
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__TurnSpeed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__TurnSpeed (const MethodInfo* method);
// 0x5a40790

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__TurnSpeed(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  System_Action_CustomLogicShifterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_0754618a == '\0') {
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
    Il2CppMethodInitialized_0754618a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__TurnSpeed_g____getter_7
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__TurnSpeed_g____setter_7
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__RotateSpeed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__RotateSpeed (const MethodInfo* method);
// 0x5a40870

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__RotateSpeed(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  System_Action_CustomLogicShifterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_0754618b == '\0') {
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
    Il2CppMethodInitialized_0754618b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__RotateSpeed_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__RotateSpeed_g____setter
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__JumpForce
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__JumpForce (const MethodInfo* method);
// 0x5a40950

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__JumpForce(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  System_Action_CustomLogicShifterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_0754618c == '\0') {
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
    Il2CppMethodInitialized_0754618c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__JumpForce_g____getter_9
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__JumpForce_g____setter_9
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__ActionPause
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__ActionPause (const MethodInfo* method);
// 0x5a40a30

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__ActionPause(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  System_Action_CustomLogicShifterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_0754618d == '\0') {
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
    Il2CppMethodInitialized_0754618d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__ActionPause_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__ActionPause_g____setter
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__AttackPause
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__AttackPause (const MethodInfo* method);
// 0x5a40b10

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__AttackPause(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  System_Action_CustomLogicShifterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_0754618e == '\0') {
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
    Il2CppMethodInitialized_0754618e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackPause_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackPause_g____setter
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__TurnPause
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__TurnPause (const MethodInfo* method);
// 0x5a40bf0

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__TurnPause(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  System_Action_CustomLogicShifterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_0754618f == '\0') {
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
    Il2CppMethodInitialized_0754618f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__TurnPause_g____getter_12
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__TurnPause_g____setter_12
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__FocusRange
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__FocusRange (const MethodInfo* method);
// 0x5a40cd0

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__FocusRange(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  System_Action_CustomLogicShifterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546190 == '\0') {
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
    Il2CppMethodInitialized_07546190 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__FocusRange_g____getter_1
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__FocusRange_g____setter_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__FocusTime
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__FocusTime (const MethodInfo* method);
// 0x5a40db0

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__FocusTime(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  System_Action_CustomLogicShifterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546191 == '\0') {
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
    Il2CppMethodInitialized_07546191 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__FocusTime_g____getter_14
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__FocusTime_g____setter_14
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__FarAttackCooldown
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__FarAttackCooldown (const MethodInfo* method);
// 0x5a40e90

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__FarAttackCooldown(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  System_Action_CustomLogicShifterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546192 == '\0') {
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
    Il2CppMethodInitialized_07546192 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__FarAttackCooldown_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__FarAttackCooldown_g____s
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__AttackWait
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__AttackWait (const MethodInfo* method);
// 0x5a40f70

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__AttackWait(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  System_Action_CustomLogicShifterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546193 == '\0') {
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
    Il2CppMethodInitialized_07546193 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackWait_g____getter_1
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackWait_g____setter_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__AttackSpeedMultiplier
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__AttackSpeedMultiplier (const MethodInfo* method);
// 0x5a41050

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__AttackSpeedMultiplier
          (MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  System_Action_CustomLogicShifterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546194 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackSpeedMultiplier_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackSpeedMultiplier_g_71c1638
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
    Il2CppMethodInitialized_07546194 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackSpeedMultiplier_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__AttackSpeedMultiplier_g_71c1638
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__NapePosition
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__NapePosition (const MethodInfo* method);
// 0x5a41130

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__NapePosition(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546195 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__NapePosition_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
    Il2CppMethodInitialized_07546195 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__NapePosition_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__HeadMount
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__HeadMount (const MethodInfo* method);
// 0x5a411d0

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__HeadMount(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546196 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__HeadMount_g____getter_19
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
    Il2CppMethodInitialized_07546196 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__HeadMount_g____getter_19
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__NeckMount
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__NeckMount (const MethodInfo* method);
// 0x5a41270

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__NeckMount(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546197 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__NeckMount_g____getter_20
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
    Il2CppMethodInitialized_07546197 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__NeckMount_g____getter_20
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__DeathAnimLength
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__DeathAnimLength (const MethodInfo* method);
// 0x5a41310

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__DeathAnimLength(MethodInfo *method)

{
  System_Func_CustomLogicShifterBuiltin__object__o *__this;
  System_Action_CustomLogicShifterBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546198 == '\0') {
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
    Il2CppMethodInitialized_07546198 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__DeathAnimLength_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicShifterBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings___CreatePropertyBinding__DeathAnimLength_g____set
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreateMethodBinding__MoveToExact
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__MoveToExact (const MethodInfo* method);
// 0x5a413f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a41425: jmp 0x5a41495

CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__MoveToExact(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicShifterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicShifterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546199 == '\0') {
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
    Il2CppMethodInitialized_07546199 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__22_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__22_0;
  }
  if (__this == (System_Func_CustomLogicShifterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__MoveToExact_b__22_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__22_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__22_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreateMethodBinding__MoveToExactCallback
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__MoveToExactCallback (const MethodInfo* method);
// 0x5a41530
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a41565: jmp 0x5a415d5

CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__MoveToExactCallback(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicShifterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicShifterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754619a == '\0') {
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
    Il2CppMethodInitialized_0754619a = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__23_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__23_0;
  }
  if (__this == (System_Func_CustomLogicShifterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__MoveToExactCallback_b__2
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__23_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__23_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreateMethodBinding__Target
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Target (const MethodInfo* method);
// 0x5a41670
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a416a5: jmp 0x5a41715

CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Target(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicShifterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicShifterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754619b == '\0') {
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
    Il2CppMethodInitialized_0754619b = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__24_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__24_0;
  }
  if (__this == (System_Func_CustomLogicShifterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__Target_b__24_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__24_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__24_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreateMethodBinding__Wander
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Wander (const MethodInfo* method);
// 0x5a417b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a417e5: jmp 0x5a41855

CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Wander(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicShifterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicShifterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754619c == '\0') {
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
    Il2CppMethodInitialized_0754619c = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__25_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__25_0;
  }
  if (__this == (System_Func_CustomLogicShifterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__Wander_b__25_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__25_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__25_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreateMethodBinding__Blind
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Blind (const MethodInfo* method);
// 0x5a418f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a41925: jmp 0x5a41995

CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Blind(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicShifterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicShifterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754619d == '\0') {
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
    Il2CppMethodInitialized_0754619d = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__26_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__26_0;
  }
  if (__this == (System_Func_CustomLogicShifterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__Blind_b__26_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__26_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__26_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreateMethodBinding__Cripple
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Cripple (const MethodInfo* method);
// 0x5a41a30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a41a65: jmp 0x5a41ad5

CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Cripple(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicShifterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicShifterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754619e == '\0') {
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
    Il2CppMethodInitialized_0754619e = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__27_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__27_0;
  }
  if (__this == (System_Func_CustomLogicShifterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__Cripple_b__27_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__27_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__27_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreateMethodBinding__Attack
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Attack (const MethodInfo* method);
// 0x5a41b70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a41ba5: jmp 0x5a41c15

CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Attack(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicShifterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicShifterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754619f == '\0') {
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
    Il2CppMethodInitialized_0754619f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__28_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__28_0;
  }
  if (__this == (System_Func_CustomLogicShifterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__Attack_b__28_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__28_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__28_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreateMethodBinding__Stun
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Stun (const MethodInfo* method);
// 0x5a41cb0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a41ce5: jmp 0x5a41d55

CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Stun(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicShifterBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicShifterBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075461a0 == '\0') {
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
    Il2CppMethodInitialized_075461a0 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__29_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__29_0;
  }
  if (__this == (System_Func_CustomLogicShifterBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicShifterBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c___CreateMethodBinding__Stun_b__29_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings_c->static_fields;
    pCVar2->__9__29_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__29_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5a41df0

void CustomLogic_CustomLogicShifterBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_075461a1 == '\0') {
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
    Il2CppMethodInitialized_075461a1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Size",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RunSpeedBase",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"WalkSpeedBase",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"WalkSpeedPerLevel",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RunSpeedPerLevel",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TurnSpeed",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RotateSpeed",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"JumpForce",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ActionPause",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackPause",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TurnPause",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FocusRange",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FocusTime",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FarAttackCooldown",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackWait",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSpeedMultiplier",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"NapePosition",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HeadMount",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"NeckMount",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DeathAnimLength",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MoveToExact",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MoveToExactCallback",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Target",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Wander",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Blind",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Cripple",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Attack",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Stun",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__Size>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__Size_g____getter_2_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x5a42240

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__Size_g____getter_2_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) ||
     ((__i->fields).Shifter == (Characters_BaseShifter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__Size>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__Size_g____setter_2_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a42280

void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__Size_g____setter_2_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  float size;
  
  if (Il2CppMethodInitialized_075461a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461a2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  size = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                   (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (!bVar2) {
        return;
      }
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
        Characters_BaseTitan__SetSize((Characters_BaseTitan_o *)pCVar1,size,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeedBase>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__RunSpeedBase_g____getter_3_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x5a42330

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__RunSpeedBase_g____getter_3_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) ||
     ((__i->fields).Shifter == (Characters_BaseShifter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeedBase>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__RunSpeedBase_g____setter_3_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a42370

void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__RunSpeedBase_g____setter_3_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_075461a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461a3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a42413;
        (pCVar1->fields).RunSpeedBase = fVar3;
      }
      return;
    }
  }
label_05a42413:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__WalkSpeedBase>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedBase_g____getter_4_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x5a42420

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedBase_g____getter_4_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) ||
     ((__i->fields).Shifter == (Characters_BaseShifter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__WalkSpeedBase>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedBase_g____setter_4_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a42460

void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedBase_g____setter_4_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_075461a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461a4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a42503;
        (pCVar1->fields).WalkSpeedBase = fVar3;
      }
      return;
    }
  }
label_05a42503:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__WalkSpeedPerLevel>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedPerLevel_g____getter_5_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x5a42510

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedPerLevel_g____getter_5_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) ||
     ((__i->fields).Shifter == (Characters_BaseShifter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__WalkSpeedPerLevel>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedPerLevel_g____setter_5_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a42550

void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedPerLevel_g____setter_5_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_075461a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461a5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a425f3;
        (pCVar1->fields).WalkSpeedPerLevel = fVar3;
      }
      return;
    }
  }
label_05a425f3:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeedPerLevel>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__RunSpeedPerLevel_g____getter_6_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x5a42600

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__RunSpeedPerLevel_g____getter_6_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) ||
     ((__i->fields).Shifter == (Characters_BaseShifter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeedPerLevel>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__RunSpeedPerLevel_g____setter_6_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a42640

void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__RunSpeedPerLevel_g____setter_6_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_075461a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461a6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a426e3;
        (pCVar1->fields).RunSpeedPerLevel = fVar3;
      }
      return;
    }
  }
label_05a426e3:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__TurnSpeed>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__TurnSpeed_g____getter_7_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x5a426f0

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__TurnSpeed_g____getter_7_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) ||
     ((__i->fields).Shifter == (Characters_BaseShifter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__TurnSpeed>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__TurnSpeed_g____setter_7_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a42730

void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__TurnSpeed_g____setter_7_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_075461a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461a7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a427d3;
        (pCVar1->fields).TurnSpeed = fVar3;
      }
      return;
    }
  }
label_05a427d3:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__RotateSpeed>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__RotateSpeed_g____getter_8_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x5a427e0

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__RotateSpeed_g____getter_8_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) ||
     ((__i->fields).Shifter == (Characters_BaseShifter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__RotateSpeed>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__RotateSpeed_g____setter_8_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a42820

void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__RotateSpeed_g____setter_8_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_075461a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461a8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a428c3;
        (pCVar1->fields).RotateSpeed = fVar3;
      }
      return;
    }
  }
label_05a428c3:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__JumpForce>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__JumpForce_g____getter_9_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x5a428d0

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__JumpForce_g____getter_9_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) ||
     ((__i->fields).Shifter == (Characters_BaseShifter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__JumpForce>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__JumpForce_g____setter_9_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a42910

void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__JumpForce_g____setter_9_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_075461a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461a9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a429b3;
        (pCVar1->fields).JumpForce = fVar3;
      }
      return;
    }
  }
label_05a429b3:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__ActionPause>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__ActionPause_g____getter_10_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x5a429c0

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__ActionPause_g____getter_10_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) ||
     ((__i->fields).Shifter == (Characters_BaseShifter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__ActionPause>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__ActionPause_g____setter_10_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a42a00

void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__ActionPause_g____setter_10_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_075461aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461aa = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a42aa3;
        (pCVar1->fields).ActionPause = fVar3;
      }
      return;
    }
  }
label_05a42aa3:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__AttackPause>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__AttackPause_g____getter_11_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x5a42ab0

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__AttackPause_g____getter_11_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) ||
     ((__i->fields).Shifter == (Characters_BaseShifter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__AttackPause>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__AttackPause_g____setter_11_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a42af0

void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__AttackPause_g____setter_11_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_075461ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461ab = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a42b93;
        (pCVar1->fields).AttackPause = fVar3;
      }
      return;
    }
  }
label_05a42b93:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__TurnPause>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__TurnPause_g____getter_12_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x5a42ba0

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__TurnPause_g____getter_12_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) ||
     ((__i->fields).Shifter == (Characters_BaseShifter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__TurnPause>g____setter|12_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__TurnPause_g____setter_12_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a42be0

void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__TurnPause_g____setter_12_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_075461ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461ac = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a42c83;
        (pCVar1->fields).TurnPause = fVar3;
      }
      return;
    }
  }
label_05a42c83:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__FocusRange>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__FocusRange_g____getter_13_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x5a42c90

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__FocusRange_g____getter_13_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  float local_c;
  
  if ((__i == (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Shifter, pCVar1 == (Characters_BaseShifter_o *)0x0)) {
label_05a42cfe:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  local_c = 0.0;
  if (bVar3) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a42cfe;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__i->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05a42cfe;
      local_c = (pCVar2->fields).FocusRange;
    }
  }
  pIVar4 = il2cpp_vm_Object_Box(g_data_07556740,&local_c);
  return pIVar4;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__FocusRange>g____setter|13_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__FocusRange_g____setter_13_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a42d10

void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__FocusRange_g____setter_13_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_075461ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461ad = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i == (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Shifter, pCVar1 == (Characters_BaseShifter_o *)0x0)) {
label_05a42dc2:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar3) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a42dc2;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__i->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05a42dc2;
      (pCVar2->fields).FocusRange = fVar4;
    }
  }
  return;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__FocusTime>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__FocusTime_g____getter_14_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x5a42dd0

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__FocusTime_g____getter_14_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  float local_c;
  
  if ((__i == (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Shifter, pCVar1 == (Characters_BaseShifter_o *)0x0)) {
label_05a42e3e:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  local_c = 0.0;
  if (bVar3) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a42e3e;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__i->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05a42e3e;
      local_c = (pCVar2->fields).FocusTime;
    }
  }
  pIVar4 = il2cpp_vm_Object_Box(g_data_07556740,&local_c);
  return pIVar4;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__FocusTime>g____setter|14_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__FocusTime_g____setter_14_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a42e50

void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__FocusTime_g____setter_14_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_075461ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461ae = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i == (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Shifter, pCVar1 == (Characters_BaseShifter_o *)0x0)) {
label_05a42f02:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar3) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a42f02;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__i->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05a42f02;
      (pCVar2->fields).FocusTime = fVar4;
    }
  }
  return;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__FarAttackCooldown>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__FarAttackCooldown_g____getter_15_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x5a42f10

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__FarAttackCooldown_g____getter_15_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  float local_c;
  
  if ((__i == (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Shifter, pCVar1 == (Characters_BaseShifter_o *)0x0)) {
label_05a42f81:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  local_c = 0.0;
  if (bVar3) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a42f81;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__i->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05a42f81;
      local_c = (pCVar2->fields).FarAttackCooldown;
    }
  }
  pIVar4 = il2cpp_vm_Object_Box(g_data_07556740,&local_c);
  return pIVar4;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__FarAttackCooldown>g____setter|15_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__FarAttackCooldown_g____setter_15_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a42f90

void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__FarAttackCooldown_g____setter_15_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_075461af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461af = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i == (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Shifter, pCVar1 == (Characters_BaseShifter_o *)0x0)) {
label_05a43045:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar3) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a43045;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__i->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05a43045;
      (pCVar2->fields).FarAttackCooldown = fVar4;
    }
  }
  return;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__AttackWait>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__AttackWait_g____getter_16_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x5a43050

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__AttackWait_g____getter_16_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  float local_c;
  
  if ((__i == (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Shifter, pCVar1 == (Characters_BaseShifter_o *)0x0)) {
label_05a430c1:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  local_c = 0.0;
  if (bVar3) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a430c1;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__i->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05a430c1;
      local_c = (pCVar2->fields).AttackWait;
    }
  }
  pIVar4 = il2cpp_vm_Object_Box(g_data_07556740,&local_c);
  return pIVar4;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__AttackWait>g____setter|16_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__AttackWait_g____setter_16_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a430d0

void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__AttackWait_g____setter_16_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_075461b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461b0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i == (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Shifter, pCVar1 == (Characters_BaseShifter_o *)0x0)) {
label_05a43185:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar3) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a43185;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__i->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05a43185;
      (pCVar2->fields).AttackWait = fVar4;
    }
  }
  return;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__AttackSpeedMultiplier>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__AttackSpeedMultiplier_g____getter_17_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x5a43190

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__AttackSpeedMultiplier_g____getter_17_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) ||
     ((__i->fields).Shifter == (Characters_BaseShifter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__AttackSpeedMultiplier>g____setter|17_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__AttackSpeedMultiplier_g____setter_17_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a431d0

void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__AttackSpeedMultiplier_g____setter_17_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_075461b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461b1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a43273;
        (pCVar1->fields).AttackSpeedMultiplier = fVar3;
      }
      return;
    }
  }
label_05a43273:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__NapePosition>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__NapePosition_g____getter_18_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x5a43280

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__NapePosition_g____getter_18_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicShifterBuiltin__get_NapePosition(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__HeadMount>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__HeadMount_g____getter_19_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x5a43290

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__HeadMount_g____getter_19_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Characters_BaseTitanComponentCache_o *pCVar2;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this;
  MethodInfo *method_00;
  
  if (((__i == (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) ||
      (pCVar1 = (__i->fields).Shifter, pCVar1 == (Characters_BaseShifter_o *)0x0)) ||
     (pCVar2 = (pCVar1->fields).BaseTitanCache, pCVar2 == (Characters_BaseTitanComponentCache_o *)0x0)) {
    ThrowNullReferenceException();
  }
  transform = (pCVar2->fields).Head;
  if (Il2CppMethodInitialized_07546205 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    Il2CppMethodInitialized_07546205 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
  CustomLogic_CustomLogicTransformBuiltin___ctor(__this,transform,method_00);
  return (Il2CppObject *)__this;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__NeckMount>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__NeckMount_g____getter_20_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x5a43300

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__NeckMount_g____getter_20_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Characters_BaseTitanComponentCache_o *pCVar2;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this;
  MethodInfo *method_00;
  
  if (((__i == (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) ||
      (pCVar1 = (__i->fields).Shifter, pCVar1 == (Characters_BaseShifter_o *)0x0)) ||
     (pCVar2 = (pCVar1->fields).BaseTitanCache, pCVar2 == (Characters_BaseTitanComponentCache_o *)0x0)) {
    ThrowNullReferenceException();
  }
  transform = (pCVar2->fields).Neck;
  if (Il2CppMethodInitialized_07546205 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    Il2CppMethodInitialized_07546205 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
  CustomLogic_CustomLogicTransformBuiltin___ctor(__this,transform,method_00);
  return (Il2CppObject *)__this;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__DeathAnimLength>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__DeathAnimLength_g____getter_21_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x5a43370

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__DeathAnimLength_g____getter_21_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) ||
     ((__i->fields).Shifter == (Characters_BaseShifter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__DeathAnimLength>g____setter|21_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__DeathAnimLength_g____setter_21_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a433b0

void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__DeathAnimLength_g____setter_21_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_075461b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461b2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a43453;
        (pCVar1->fields).DeathAnimationLength = fVar3;
      }
      return;
    }
  }
label_05a43453:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin.<>c__DisplayClass61_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin___c__DisplayClass61_0___ctor (CustomLogic_CustomLogicShifterBuiltin___c__DisplayClass61_0_o* __this, const MethodInfo* method);
// 0x5a3f510

void CustomLogic_CustomLogicShifterBuiltin___c__DisplayClass61_0___ctor
               (CustomLogic_CustomLogicShifterBuiltin___c__DisplayClass61_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicShifterBuiltin.<>c__DisplayClass61_0$$<MoveToExactCallback>b__0
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin___c__DisplayClass61_0___MoveToExactCallback_b__0 (CustomLogic_CustomLogicShifterBuiltin___c__DisplayClass61_0_o* __this, const MethodInfo* method);
// 0x5a43b10

void CustomLogic_CustomLogicShifterBuiltin___c__DisplayClass61_0___MoveToExactCallback_b__0
               (CustomLogic_CustomLogicShifterBuiltin___c__DisplayClass61_0_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_UserMethod_o *userMethod;
  CustomLogic_CustomLogicShifterBuiltin_o *obj;
  System_Object_array *parameterValues;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_075461ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    Il2CppMethodInitialized_075461ba = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  __this_00 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  userMethod = (__this->fields).method;
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
    Il2CppCodeGenWriteBarrier(parameterValues->m_Items);
    if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      CustomLogic_CustomLogicEvaluator__EvaluateMethod_5a8b7e0
                (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin___ctor (CustomLogic_CustomLogicShifterBuiltin_o* __this, Characters_BaseShifter_o* shifter, const MethodInfo* method);
// 0x5a3e860

void CustomLogic_CustomLogicShifterBuiltin___ctor
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,Characters_BaseShifter_o *shifter,
               MethodInfo *method)

{
  Controllers_BaseTitanAIController_o *pCVar1;
  
  if (Il2CppMethodInitialized_0754617f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_BaseTitanAIController);
    Il2CppMethodInitialized_0754617f = '\x01';
  }
  CustomLogic_CustomLogicCharacterBuiltin___ctor
            ((CustomLogic_CustomLogicCharacterBuiltin_o *)__this,(Characters_BaseCharacter_o *)shifter,
             (MethodInfo *)0x0);
  (__this->fields).Shifter = shifter;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Shifter);
  if (shifter == (Characters_BaseShifter_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)shifter,
                      (MethodInfo_34B0830 *)
                      MethodInfo_UnityEngine_Component_GetComponent_BaseTitanAIController);
  (__this->fields).Controller = pCVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Controller);
  return;
}


// CustomLogic.CustomLogicShifterBuiltin$$get_Size
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_Size (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x5a3e8e0

float CustomLogic_CustomLogicShifterBuiltin__get_Size
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).Size;
}


// CustomLogic.CustomLogicShifterBuiltin$$set_Size
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_Size (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a3e900

void CustomLogic_CustomLogicShifterBuiltin__set_Size
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
      Characters_BaseTitan__SetSize((Characters_BaseTitan_o *)pCVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_RunSpeedBase
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_RunSpeedBase (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x5a3e960

float CustomLogic_CustomLogicShifterBuiltin__get_RunSpeedBase
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).RunSpeedBase;
}


// CustomLogic.CustomLogicShifterBuiltin$$set_RunSpeedBase
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_RunSpeedBase (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a3e980

void CustomLogic_CustomLogicShifterBuiltin__set_RunSpeedBase
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
label_05a3e9c8:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a3e9c8;
    (pCVar1->fields).RunSpeedBase = value;
  }
  return;
}


// CustomLogic.CustomLogicShifterBuiltin$$get_WalkSpeedBase
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_WalkSpeedBase (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x5a3e9d0

float CustomLogic_CustomLogicShifterBuiltin__get_WalkSpeedBase
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).WalkSpeedBase;
}


// CustomLogic.CustomLogicShifterBuiltin$$set_WalkSpeedBase
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_WalkSpeedBase (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a3e9f0

void CustomLogic_CustomLogicShifterBuiltin__set_WalkSpeedBase
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
label_05a3ea38:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a3ea38;
    (pCVar1->fields).WalkSpeedBase = value;
  }
  return;
}


// CustomLogic.CustomLogicShifterBuiltin$$get_WalkSpeedPerLevel
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_WalkSpeedPerLevel (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x5a3ea40

float CustomLogic_CustomLogicShifterBuiltin__get_WalkSpeedPerLevel
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).WalkSpeedPerLevel;
}


// CustomLogic.CustomLogicShifterBuiltin$$set_WalkSpeedPerLevel
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_WalkSpeedPerLevel (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a3ea60

void CustomLogic_CustomLogicShifterBuiltin__set_WalkSpeedPerLevel
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
label_05a3eaa8:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a3eaa8;
    (pCVar1->fields).WalkSpeedPerLevel = value;
  }
  return;
}


// CustomLogic.CustomLogicShifterBuiltin$$get_RunSpeedPerLevel
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_RunSpeedPerLevel (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x5a3eab0

float CustomLogic_CustomLogicShifterBuiltin__get_RunSpeedPerLevel
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).RunSpeedPerLevel;
}


// CustomLogic.CustomLogicShifterBuiltin$$set_RunSpeedPerLevel
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_RunSpeedPerLevel (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a3ead0

void CustomLogic_CustomLogicShifterBuiltin__set_RunSpeedPerLevel
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
label_05a3eb18:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a3eb18;
    (pCVar1->fields).RunSpeedPerLevel = value;
  }
  return;
}


// CustomLogic.CustomLogicShifterBuiltin$$get_TurnSpeed
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_TurnSpeed (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x5a3eb20

float CustomLogic_CustomLogicShifterBuiltin__get_TurnSpeed
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).TurnSpeed;
}


// CustomLogic.CustomLogicShifterBuiltin$$set_TurnSpeed
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_TurnSpeed (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a3eb40

void CustomLogic_CustomLogicShifterBuiltin__set_TurnSpeed
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
label_05a3eb88:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a3eb88;
    (pCVar1->fields).TurnSpeed = value;
  }
  return;
}


// CustomLogic.CustomLogicShifterBuiltin$$get_RotateSpeed
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_RotateSpeed (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x5a3eb90

float CustomLogic_CustomLogicShifterBuiltin__get_RotateSpeed
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).RotateSpeed;
}


// CustomLogic.CustomLogicShifterBuiltin$$set_RotateSpeed
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_RotateSpeed (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a3ebb0

void CustomLogic_CustomLogicShifterBuiltin__set_RotateSpeed
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
label_05a3ebf8:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a3ebf8;
    (pCVar1->fields).RotateSpeed = value;
  }
  return;
}


// CustomLogic.CustomLogicShifterBuiltin$$get_JumpForce
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_JumpForce (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x5a3ec00

float CustomLogic_CustomLogicShifterBuiltin__get_JumpForce
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).JumpForce;
}


// CustomLogic.CustomLogicShifterBuiltin$$set_JumpForce
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_JumpForce (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a3ec20

void CustomLogic_CustomLogicShifterBuiltin__set_JumpForce
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
label_05a3ec68:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a3ec68;
    (pCVar1->fields).JumpForce = value;
  }
  return;
}


// CustomLogic.CustomLogicShifterBuiltin$$get_ActionPause
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_ActionPause (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x5a3ec70

float CustomLogic_CustomLogicShifterBuiltin__get_ActionPause
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).ActionPause;
}


// CustomLogic.CustomLogicShifterBuiltin$$set_ActionPause
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_ActionPause (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a3ec90

void CustomLogic_CustomLogicShifterBuiltin__set_ActionPause
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
label_05a3ecd8:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a3ecd8;
    (pCVar1->fields).ActionPause = value;
  }
  return;
}


// CustomLogic.CustomLogicShifterBuiltin$$get_AttackPause
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_AttackPause (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x5a3ece0

float CustomLogic_CustomLogicShifterBuiltin__get_AttackPause
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).AttackPause;
}


// CustomLogic.CustomLogicShifterBuiltin$$set_AttackPause
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_AttackPause (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a3ed00

void CustomLogic_CustomLogicShifterBuiltin__set_AttackPause
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
label_05a3ed48:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a3ed48;
    (pCVar1->fields).AttackPause = value;
  }
  return;
}


// CustomLogic.CustomLogicShifterBuiltin$$get_TurnPause
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_TurnPause (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x5a3ed50

float CustomLogic_CustomLogicShifterBuiltin__get_TurnPause
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).TurnPause;
}


// CustomLogic.CustomLogicShifterBuiltin$$set_TurnPause
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_TurnPause (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a3ed70

void CustomLogic_CustomLogicShifterBuiltin__set_TurnPause
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
label_05a3edb8:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a3edb8;
    (pCVar1->fields).TurnPause = value;
  }
  return;
}


// CustomLogic.CustomLogicShifterBuiltin$$get_FocusRange
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_FocusRange (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x5a3edc0

float CustomLogic_CustomLogicShifterBuiltin__get_FocusRange
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  float fVar4;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
label_05a3ee06:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  fVar4 = 0.0;
  if (bVar3) {
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a3ee06;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__this->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05a3ee06;
      fVar4 = (pCVar2->fields).FocusRange;
    }
  }
  return fVar4;
}


// CustomLogic.CustomLogicShifterBuiltin$$set_FocusRange
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_FocusRange (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a3ee10

void CustomLogic_CustomLogicShifterBuiltin__set_FocusRange
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
label_05a3ee67:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar3) {
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a3ee67;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__this->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05a3ee67;
      (pCVar2->fields).FocusRange = value;
    }
  }
  return;
}


// CustomLogic.CustomLogicShifterBuiltin$$get_FocusTime
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_FocusTime (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x5a3ee70

float CustomLogic_CustomLogicShifterBuiltin__get_FocusTime
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  float fVar4;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
label_05a3eeb6:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  fVar4 = 0.0;
  if (bVar3) {
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a3eeb6;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__this->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05a3eeb6;
      fVar4 = (pCVar2->fields).FocusTime;
    }
  }
  return fVar4;
}


// CustomLogic.CustomLogicShifterBuiltin$$set_FocusTime
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_FocusTime (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a3eec0

void CustomLogic_CustomLogicShifterBuiltin__set_FocusTime
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
label_05a3ef17:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar3) {
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a3ef17;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__this->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05a3ef17;
      (pCVar2->fields).FocusTime = value;
    }
  }
  return;
}


// CustomLogic.CustomLogicShifterBuiltin$$get_FarAttackCooldown
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_FarAttackCooldown (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x5a3ef20

float CustomLogic_CustomLogicShifterBuiltin__get_FarAttackCooldown
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  float fVar4;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
label_05a3ef69:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  fVar4 = 0.0;
  if (bVar3) {
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a3ef69;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__this->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05a3ef69;
      fVar4 = (pCVar2->fields).FarAttackCooldown;
    }
  }
  return fVar4;
}


// CustomLogic.CustomLogicShifterBuiltin$$set_FarAttackCooldown
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_FarAttackCooldown (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a3ef70

void CustomLogic_CustomLogicShifterBuiltin__set_FarAttackCooldown
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
label_05a3efca:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar3) {
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a3efca;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__this->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05a3efca;
      (pCVar2->fields).FarAttackCooldown = value;
    }
  }
  return;
}


// CustomLogic.CustomLogicShifterBuiltin$$get_AttackWait
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_AttackWait (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x5a3efd0

float CustomLogic_CustomLogicShifterBuiltin__get_AttackWait
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  float fVar4;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
label_05a3f019:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  fVar4 = 0.0;
  if (bVar3) {
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a3f019;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__this->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05a3f019;
      fVar4 = (pCVar2->fields).AttackWait;
    }
  }
  return fVar4;
}


// CustomLogic.CustomLogicShifterBuiltin$$set_AttackWait
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_AttackWait (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a3f020

void CustomLogic_CustomLogicShifterBuiltin__set_AttackWait
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
label_05a3f07a:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar3) {
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a3f07a;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__this->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05a3f07a;
      (pCVar2->fields).AttackWait = value;
    }
  }
  return;
}


// CustomLogic.CustomLogicShifterBuiltin$$get_AttackSpeedMultiplier
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_AttackSpeedMultiplier (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x5a3f080

float CustomLogic_CustomLogicShifterBuiltin__get_AttackSpeedMultiplier
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).AttackSpeedMultiplier;
}


// CustomLogic.CustomLogicShifterBuiltin$$set_AttackSpeedMultiplier
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_AttackSpeedMultiplier (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a3f0a0

void CustomLogic_CustomLogicShifterBuiltin__set_AttackSpeedMultiplier
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
label_05a3f0e8:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a3f0e8;
    (pCVar1->fields).AttackSpeedMultiplier = value;
  }
  return;
}


// CustomLogic.CustomLogicShifterBuiltin$$get_NapePosition
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicShifterBuiltin__get_NapePosition (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x5a3f0f0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicShifterBuiltin__get_NapePosition
          (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Characters_BaseTitanComponentCache_o *pCVar2;
  UnityEngine_Component_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  UnityEngine_Vector3_o value;
  
  if (Il2CppMethodInitialized_07546180 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_07546180 = '\x01';
  }
  pCVar1 = (__this->fields).Shifter;
  if (((pCVar1 != (Characters_BaseShifter_o *)0x0) &&
      (pCVar2 = (pCVar1->fields).BaseTitanCache, pCVar2 != (Characters_BaseTitanComponentCache_o *)0x0)) &&
     (__this_00 = (UnityEngine_Component_o *)(pCVar2->fields).NapeHurtbox,
     __this_00 != (UnityEngine_Component_o *)0x0)) {
    __this_01 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      value = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor_58df850(__this_02,value,(MethodInfo *)0x0);
      return __this_02;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_HeadMount
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicShifterBuiltin__get_HeadMount (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x5a3f190

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicShifterBuiltin__get_HeadMount
          (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Characters_BaseTitanComponentCache_o *pCVar2;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_00;
  MethodInfo *method_00;
  
  pCVar1 = (__this->fields).Shifter;
  if ((pCVar1 == (Characters_BaseShifter_o *)0x0) ||
     (pCVar2 = (pCVar1->fields).BaseTitanCache, pCVar2 == (Characters_BaseTitanComponentCache_o *)0x0)) {
    ThrowNullReferenceException();
  }
  transform = (pCVar2->fields).Head;
  if (Il2CppMethodInitialized_07546205 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    Il2CppMethodInitialized_07546205 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
  CustomLogic_CustomLogicTransformBuiltin___ctor(__this_00,transform,method_00);
  return __this_00;
}


// CustomLogic.CustomLogicShifterBuiltin$$get_NeckMount
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicShifterBuiltin__get_NeckMount (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x5a3f250

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicShifterBuiltin__get_NeckMount
          (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Characters_BaseTitanComponentCache_o *pCVar2;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_00;
  MethodInfo *method_00;
  
  pCVar1 = (__this->fields).Shifter;
  if ((pCVar1 == (Characters_BaseShifter_o *)0x0) ||
     (pCVar2 = (pCVar1->fields).BaseTitanCache, pCVar2 == (Characters_BaseTitanComponentCache_o *)0x0)) {
    ThrowNullReferenceException();
  }
  transform = (pCVar2->fields).Neck;
  if (Il2CppMethodInitialized_07546205 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
    Il2CppMethodInitialized_07546205 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTransformBuiltin);
  CustomLogic_CustomLogicTransformBuiltin___ctor(__this_00,transform,method_00);
  return __this_00;
}


// CustomLogic.CustomLogicShifterBuiltin$$get_DeathAnimLength
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_DeathAnimLength (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x5a3f2c0

float CustomLogic_CustomLogicShifterBuiltin__get_DeathAnimLength
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).DeathAnimationLength;
}


// CustomLogic.CustomLogicShifterBuiltin$$set_DeathAnimLength
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_DeathAnimLength (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a3f2e0

void CustomLogic_CustomLogicShifterBuiltin__set_DeathAnimLength
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
label_05a3f328:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a3f328;
    (pCVar1->fields).DeathAnimationLength = value;
  }
  return;
}


// CustomLogic.CustomLogicShifterBuiltin$$MoveToExact
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__MoveToExact (CustomLogic_CustomLogicShifterBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* position, float timeoutPadding, const MethodInfo* method);
// 0x5a3f330

void CustomLogic_CustomLogicShifterBuiltin__MoveToExact
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *position,float timeoutPadding,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
      if ((pCVar1->fields).Dead != false) {
        return;
      }
      if ((pCVar1->fields).AI == false) {
        return;
      }
      if ((position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
         (__this_00 = (__this->fields).Controller, __this_00 != (Controllers_BaseTitanAIController_o *)0x0)) {
        Controllers_BaseTitanAIController__MoveToExact
                  (__this_00,(UnityEngine_Vector3_o)(position->fields).Value.fields,10.0,timeoutPadding,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$MoveToExactCallback
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__MoveToExactCallback (CustomLogic_CustomLogicShifterBuiltin_o* __this, CustomLogic_UserMethod_o* method, CustomLogic_CustomLogicVector3Builtin_o* position, float range, float timeoutPadding, const MethodInfo* method);
// 0x5a3f3c0

void CustomLogic_CustomLogicShifterBuiltin__MoveToExactCallback
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,CustomLogic_UserMethod_o *method,
               CustomLogic_CustomLogicVector3Builtin_o *position,float range,float timeoutPadding,
               MethodInfo *methodInfo)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *__this_00;
  bool bVar2;
  CustomLogic_CustomLogicShifterBuiltin___c__DisplayClass61_0_o *__this_01;
  System_Action_o *__this_02;
  
  if (Il2CppMethodInitialized_07546181 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicShifterBuiltin_c__DisplayClass61_0_MoveToExactCallback_b__0)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicShifterBuiltin_c__DisplayClass61_0);
    Il2CppMethodInitialized_07546181 = '\x01';
  }
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicShifterBuiltin_c__DisplayClass61_0);
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  if (__this_01 != (CustomLogic_CustomLogicShifterBuiltin___c__DisplayClass61_0_o *)0x0) {
    (__this_01->fields).method = method;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).method);
    (__this_01->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (!bVar2) {
        return;
      }
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
        if ((pCVar1->fields).Dead != false) {
          return;
        }
        if ((pCVar1->fields).AI == false) {
          return;
        }
        __this_00 = (__this->fields).Controller;
        __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
        System_Action___ctor
                  (__this_02,(Il2CppObject *)__this_01,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicShifterBuiltin_c__DisplayClass61_0_MoveToExactCallback_b__0
                   ,(MethodInfo *)0x0);
        if ((position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
           (__this_00 != (Controllers_BaseTitanAIController_o *)0x0)) {
          Controllers_BaseTitanAIController__MoveToExactCallback
                    (__this_00,__this_02,(UnityEngine_Vector3_o)(position->fields).Value.fields,range,
                     timeoutPadding,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicShifterBuiltin$$Target
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__Target (CustomLogic_CustomLogicShifterBuiltin_o* __this, Il2CppObject* enemyObj, float focus, const MethodInfo* method);
// 0x5a3f520

void CustomLogic_CustomLogicShifterBuiltin__Target
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,Il2CppObject *enemyObj,float focus,
               MethodInfo *method)

{
  CustomLogic_CustomLogicCharacterBuiltin__SetTarget
            ((CustomLogic_CustomLogicCharacterBuiltin_o *)__this,enemyObj,focus,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicShifterBuiltin$$Wander
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__Wander (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x5a3f530

void CustomLogic_CustomLogicShifterBuiltin__Wander
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
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
// 0x5a3f590

void CustomLogic_CustomLogicShifterBuiltin__Blind
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
label_05a3f5d6:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a3f5d6;
    if ((pCVar1->fields).Dead == false) {
      (*(pCVar1->klass->vtable)._168_Blind.methodPtr)(pCVar1,(pCVar1->klass->vtable)._168_Blind.method);
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicShifterBuiltin$$Cripple
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__Cripple (CustomLogic_CustomLogicShifterBuiltin_o* __this, float time, const MethodInfo* method);
// 0x5a3f5e0

void CustomLogic_CustomLogicShifterBuiltin__Cripple
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float time,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
label_05a3f63e:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a3f63e;
    if ((pCVar1->fields).Dead == false) {
      (*(pCVar1->klass->vtable)._169_Cripple.methodPtr)
                (pCVar1,time,(pCVar1->klass->vtable)._169_Cripple.method);
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicShifterBuiltin$$Attack
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__Attack (CustomLogic_CustomLogicShifterBuiltin_o* __this, System_String_o* attack, const MethodInfo* method);
// 0x5a3f650

void CustomLogic_CustomLogicShifterBuiltin__Attack
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,System_String_o *attack,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_BaseShifter_o *)0x0) {
label_05a3f6c8:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto label_05a3f6c8;
    if ((pCVar1->fields).Dead == false) {
      bVar2 = (*(pCVar1->klass->vtable)._151_CanAttack.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._151_CanAttack.method);
      if (bVar2) {
        pCVar1 = (__this->fields).Shifter;
        if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
          (*(pCVar1->klass->vtable)._150_Attack.methodPtr)
                    (pCVar1,attack,(pCVar1->klass->vtable)._150_Attack.method);
          return;
        }
        goto label_05a3f6c8;
      }
    }
  }
  return;
}


// CustomLogic.CustomLogicShifterBuiltin$$Stun
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__Stun (CustomLogic_CustomLogicShifterBuiltin_o* __this, float duration, const MethodInfo* method);
// 0x5a3f6d0

void CustomLogic_CustomLogicShifterBuiltin__Stun
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float duration,MethodInfo *method)

{
  byte bVar1;
  Characters_BaseShifter_o *pCVar2;
  Characters_WallColossalShifter_o *__this_00;
  Characters_WallColossalShifter_c *pCVar3;
  bool bVar4;
  
  if (Il2CppMethodInitialized_07546182 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_WallColossalShifter);
    Il2CppMethodInitialized_07546182 = '\x01';
  }
  pCVar2 = (__this->fields).Shifter;
  if (pCVar2 == (Characters_BaseShifter_o *)0x0) {
label_05a3f7aa:
    ThrowNullReferenceException();
  }
  bVar4 = (*(pCVar2->klass->vtable)._74_IsMine.methodPtr)(pCVar2,(pCVar2->klass->vtable)._74_IsMine.method);
  if (bVar4) {
    __this_00 = (Characters_WallColossalShifter_o *)(__this->fields).Shifter;
    if (__this_00 == (Characters_WallColossalShifter_o *)0x0) goto label_05a3f7aa;
    if ((__this_00->fields).Dead == false) {
      pCVar3 = __this_00->klass;
      bVar1 = (TypeInfo_Characters_WallColossalShifter->_2).typeHierarchyDepth;
      if ((bVar1 <= (pCVar3->_2).typeHierarchyDepth) &&
         ((pCVar3->_2).typeHierarchy[(ulong)bVar1 - 1] ==
          (Il2CppClass *)TypeInfo_Characters_WallColossalShifter)) {
        Characters_WallColossalShifter__EnterStunState(__this_00,duration,true,(MethodInfo *)0x0);
        return;
      }
      if ((duration == 0.0) && (!NAN(duration))) {
        duration = (__this_00->fields).StunTime;
      }
      (*(pCVar3->vtable)._155_Stun.methodPtr)(__this_00,duration,true,(pCVar3->vtable)._155_Stun.method);
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicShifterBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterBuiltin__get_ClassName (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x5a3f7b0

System_String_o *
CustomLogic_CustomLogicShifterBuiltin__get_ClassName
          (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546183 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Shifter");
    Il2CppMethodInitialized_07546183 = '\x01';
  }
  return "Shifter";
}


// CustomLogic.CustomLogicShifterBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicShifterBuiltin__get_IsAbstract (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x5a3f7e0

bool CustomLogic_CustomLogicShifterBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicShifterBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicShifterBuiltin__get_IsStatic (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x5a3f7f0

bool CustomLogic_CustomLogicShifterBuiltin__get_IsStatic
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicShifterBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicShifterBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x5a3f800

bool CustomLogic_CustomLogicShifterBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


