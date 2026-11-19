// Type: CustomLogic.CustomLogicTitanBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicTitanBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicTitanBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicTitanBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTitanBuiltin_o* CustomLogic_CustomLogicTitanBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a44cc0

CustomLogic_CustomLogicTitanBuiltin_o *
CustomLogic_CustomLogicTitanBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicTitanBuiltin constructor found that takes ");
  str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
  pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_54186d0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5a495a0

void CustomLogic_CustomLogicTitanBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075461f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
    Il2CppMethodInitialized_075461f9 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5a49610

void CustomLogic_CustomLogicTitanBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Target>b__31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings___c_____CreateMethodBinding__Target_b__31_0 (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTitanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a49620

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings___c_____CreateMethodBinding__Target_b__31_0
          (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTitanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *target;
  Il2CppObject *obj;
  float focusDuration;
  
  if (Il2CppMethodInitialized_075461fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461fa = '\x01';
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
    if (__c != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicCharacterBuiltin__SetTarget
                ((CustomLogic_CustomLogicCharacterBuiltin_o *)__c,target,focusDuration,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Wander>b__32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings___c_____CreateMethodBinding__Wander_b__32_0 (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTitanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a496c0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings___c_____CreateMethodBinding__Wander_b__32_0
          (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTitanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *__this_00;
  bool bVar2;
  
  if ((__c != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
     (pCVar1 = (__c->fields).Titan, pCVar1 != (Characters_BasicTitan_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return (Il2CppObject *)0x0;
    }
    pCVar1 = (__c->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
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


// CustomLogic.CustomLogicTitanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Blind>b__33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings___c_____CreateMethodBinding__Blind_b__33_0 (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTitanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a49720

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings___c_____CreateMethodBinding__Blind_b__33_0
          (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTitanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  if ((__c == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
     (pCVar1 = (__c->fields).Titan, pCVar1 == (Characters_BasicTitan_o *)0x0)) {
label_05a4976d:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__c->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a4976d;
    if ((pCVar1->fields).Dead == false) {
      (*(pCVar1->klass->vtable)._168_Blind.methodPtr)(pCVar1,(pCVar1->klass->vtable)._168_Blind.method);
      return (Il2CppObject *)0x0;
    }
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Cripple>b__34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings___c_____CreateMethodBinding__Cripple_b__34_0 (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTitanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a49780

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings___c_____CreateMethodBinding__Cripple_b__34_0
          (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTitanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_075461fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461fb = '\x01';
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
    if ((__c != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
       (pCVar1 = (__c->fields).Titan, pCVar1 != (Characters_BasicTitan_o *)0x0)) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__c->fields).Titan;
        if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a4984a;
        if ((pCVar1->fields).Dead == false) {
          (*(pCVar1->klass->vtable)._169_Cripple.methodPtr)
                    (pCVar1,fVar3,(pCVar1->klass->vtable)._169_Cripple.method);
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
label_05a4984a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Stun>b__35_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings___c_____CreateMethodBinding__Stun_b__35_0 (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTitanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a49860
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a498df: jmp 0x5a49955

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings___c_____CreateMethodBinding__Stun_b__35_0
          (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTitanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_075461fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461fc = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if (__a->max_length == 0) {
      fVar3 = 0.0;
    }
    else {
      if ((int)__a->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      obj = __a->m_Items[0];
      if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
      }
      fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                        (obj,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float
                        );
    }
    if ((__c != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
       (pCVar1 = (__c->fields).Titan, pCVar1 != (Characters_BasicTitan_o *)0x0)) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__c->fields).Titan;
        if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a49955;
        if ((pCVar1->fields).Dead == false) {
          if ((fVar3 == 0.0) && (!NAN(fVar3))) {
            fVar3 = (pCVar1->fields).StunTime;
          }
          (*(pCVar1->klass->vtable)._155_Stun.methodPtr)
                    (pCVar1,fVar3,true,(pCVar1->klass->vtable)._155_Stun.method);
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
label_05a49955:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTitanBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a44d50

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTitanBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *pCVar3;
  CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicTitanBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_075461be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"FocusTime");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackPause");
    il2cpp_codegen_initialize_runtime_metadata(&"RunSpeedPerLevel");
    il2cpp_codegen_initialize_runtime_metadata(&"DeathType");
    il2cpp_codegen_initialize_runtime_metadata(&"WalkSpeedBase");
    il2cpp_codegen_initialize_runtime_metadata(&"DeathVelocity");
    il2cpp_codegen_initialize_runtime_metadata(&"ActionPause");
    il2cpp_codegen_initialize_runtime_metadata(&"WalkSpeedPerLevel");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackWait");
    il2cpp_codegen_initialize_runtime_metadata(&"HeadSize");
    il2cpp_codegen_initialize_runtime_metadata(&"Cripple");
    il2cpp_codegen_initialize_runtime_metadata(&"Target");
    il2cpp_codegen_initialize_runtime_metadata(&"Blind");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSpeedMultiplier");
    il2cpp_codegen_initialize_runtime_metadata(&"Stun");
    il2cpp_codegen_initialize_runtime_metadata(&"MaxStamina");
    il2cpp_codegen_initialize_runtime_metadata(&"Stamina");
    il2cpp_codegen_initialize_runtime_metadata(&"IsCrawler");
    il2cpp_codegen_initialize_runtime_metadata(&"NeckMount");
    il2cpp_codegen_initialize_runtime_metadata(&"HeadMount");
    il2cpp_codegen_initialize_runtime_metadata(&"NapePosition");
    il2cpp_codegen_initialize_runtime_metadata(&"FocusRange");
    il2cpp_codegen_initialize_runtime_metadata(&"IsWarded");
    il2cpp_codegen_initialize_runtime_metadata(&"RunSpeedBase");
    il2cpp_codegen_initialize_runtime_metadata(&"IsBald");
    il2cpp_codegen_initialize_runtime_metadata(&"Size");
    il2cpp_codegen_initialize_runtime_metadata(&"JumpForce");
    il2cpp_codegen_initialize_runtime_metadata(&"IsHardened");
    il2cpp_codegen_initialize_runtime_metadata(&"RotateSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"Wander");
    il2cpp_codegen_initialize_runtime_metadata(&"FarAttackCooldown");
    il2cpp_codegen_initialize_runtime_metadata(&"CanRun");
    il2cpp_codegen_initialize_runtime_metadata(&"TurnPause");
    il2cpp_codegen_initialize_runtime_metadata(&"TurnSpeed");
    Il2CppMethodInitialized_075461be = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x7b41749d) {
    if (uVar2 < 0x320c4020) {
      if (uVar2 < 0x22bd3b3f) {
        if (uVar2 < 0x17a0b8d7) {
          if (uVar2 == 0x7186f3c) {
            bVar1 = System_String__op_Equality(name,"NapePosition",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__NapePosition
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
          else if (uVar2 == 0x17a0b8d6) {
            bVar1 = System_String__op_Equality(name,"Stamina",(MethodInfo *)0x0);
            if (bVar1) {
              pCVar6 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings;
              if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
              {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
              }
              pCVar3 = CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__Stamina
                                 ((MethodInfo *)pCVar6);
              return (CustomLogic_ICLMemberBinding_o *)pCVar3;
            }
          }
        }
        else if (uVar2 == 0x1d46812f) {
          bVar1 = System_String__op_Equality(name,"AttackSpeedMultiplier",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__AttackSpeedMultiplier
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x22bd3b3e) {
          bVar1 = System_String__op_Equality(name,"IsHardened",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__IsHardened
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 < 0x2ae002cd) {
        if (uVar2 == 0x246c98e0) {
          bVar1 = System_String__op_Equality(name,"RunSpeedBase",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__RunSpeedBase
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x2ae002cc) {
          bVar1 = System_String__op_Equality(name,"JumpForce",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__JumpForce
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x2b5690da) {
        bVar1 = System_String__op_Equality(name,"DeathVelocity",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__DeathVelocity
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x320c401f) {
        bVar1 = System_String__op_Equality(name,"ActionPause",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__ActionPause
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x6709f835) {
      if (uVar2 < 0x46b92be9) {
        if (uVar2 == 0x3da81e8d) {
          bVar1 = System_String__op_Equality(name,"RotateSpeed",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__RotateSpeed
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0x46b92be8) {
          bVar1 = System_String__op_Equality(name,"FocusRange",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__FocusRange
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x5d992b41) {
        bVar1 = System_String__op_Equality(name,"Stun",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__Stun
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x6709f834) {
        bVar1 = System_String__op_Equality(name,"Wander",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
          }
          pCVar4 = CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__Wander
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
    }
    else if (uVar2 < 0x6b178ac3) {
      if (uVar2 == 0x69ba519b) {
        bVar1 = System_String__op_Equality(name,"FarAttackCooldown",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__FarAttackCooldown
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x6b178ac2) {
        bVar1 = System_String__op_Equality(name,"IsWarded",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__IsWarded
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x6fd42728) {
      bVar1 = System_String__op_Equality(name,"WalkSpeedPerLevel",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__WalkSpeedPerLevel
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x783cf542) {
      bVar1 = System_String__op_Equality(name,"HeadSize",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__HeadSize
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x7b41749c) {
      bVar1 = System_String__op_Equality(name,"IsBald",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__IsBald
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xb5f3afde) {
    if (uVar2 < 0x9891bf89) {
      if (uVar2 < 0x8dc5a9a4) {
        if (uVar2 == 0x8b67f168) {
          bVar1 = System_String__op_Equality(name,"Target",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__Target
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x8dc5a9a3) {
          bVar1 = System_String__op_Equality(name,"NeckMount",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__NeckMount
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x90cf188a) {
        bVar1 = System_String__op_Equality(name,"FocusTime",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__FocusTime
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x9891bf88) {
        bVar1 = System_String__op_Equality(name,"AttackWait",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__AttackWait
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0xab8d157b) {
      if (uVar2 == 0xa6478e7c) {
        bVar1 = System_String__op_Equality(name,"Size",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__Size
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xab8d157a) {
        bVar1 = System_String__op_Equality(name,"MaxStamina",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__MaxStamina
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0xb20fe4aa) {
      bVar1 = System_String__op_Equality(name,"CanRun",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__CanRun
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xb5f3afdd) {
      bVar1 = System_String__op_Equality(name,"TurnSpeed",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__TurnSpeed
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xd0d86e03) {
    if (uVar2 < 0xbfccc708) {
      if (uVar2 == 0xbb10b4ac) {
        bVar1 = System_String__op_Equality(name,"HeadMount",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__HeadMount
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0xbfccc707) {
        bVar1 = System_String__op_Equality(name,"IsCrawler",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__IsCrawler
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0xc746e5f5) {
      bVar1 = System_String__op_Equality(name,"AttackPause",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__AttackPause
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xd0d86e02) {
      bVar1 = System_String__op_Equality(name,"RunSpeedPerLevel",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__RunSpeedPerLevel
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xe4d66f55) {
    if (uVar2 == 0xd2528dac) {
      bVar1 = System_String__op_Equality(name,"TurnPause",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__TurnPause
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xe4d66f54) {
      bVar1 = System_String__op_Equality(name,"Blind",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__Blind
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 == 0xf96e74c8) {
    bVar1 = System_String__op_Equality(name,"Cripple",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
      }
      pCVar4 = CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__Cripple
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar4;
    }
  }
  else if (uVar2 == 0xedff5766) {
    bVar1 = System_String__op_Equality(name,"WalkSpeedBase",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__WalkSpeedBase
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xeb9a5ec5) {
    bVar1 = System_String__op_Equality(name,"DeathType",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__DeathType
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicTitanBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__DeathType
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__DeathType (const MethodInfo* method);
// 0x5a45a20

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__DeathType(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_075461bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__DeathType_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__DeathType_g____setter_2_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_075461bf = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__DeathType_g____getter_2_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__DeathType_g____setter_2_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__DeathVelocity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__DeathVelocity (const MethodInfo* method);
// 0x5a45b00

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__DeathVelocity(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_075461c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__DeathVelocity_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__DeathVelocity_g____setter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_075461c0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__DeathVelocity_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__DeathVelocity_g____setter
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__Size
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__Size (const MethodInfo* method);
// 0x5a45be0

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__Size(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_075461c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__Size_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__Size_g____setter_4_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_075461c1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__Size_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__Size_g____setter_4_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__HeadSize
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__HeadSize (const MethodInfo* method);
// 0x5a45cc0

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__HeadSize(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_075461c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__HeadSize_g____getter_5_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__HeadSize_g____setter_5_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_075461c2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__HeadSize_g____getter_5_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__HeadSize_g____setter_5_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__RunSpeedBase
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__RunSpeedBase (const MethodInfo* method);
// 0x5a45da0

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__RunSpeedBase(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_075461c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__RunSpeedBase_g____getter_6
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__RunSpeedBase_g____setter_6
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_075461c3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__RunSpeedBase_g____getter_6
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__RunSpeedBase_g____setter_6
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__WalkSpeedBase
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__WalkSpeedBase (const MethodInfo* method);
// 0x5a45e80

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__WalkSpeedBase(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_075461c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__WalkSpeedBase_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__WalkSpeedBase_g____setter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_075461c4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__WalkSpeedBase_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__WalkSpeedBase_g____setter
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__WalkSpeedPerLevel
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__WalkSpeedPerLevel (const MethodInfo* method);
// 0x5a45f60

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__WalkSpeedPerLevel(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_075461c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__WalkSpeedPerLevel_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__WalkSpeedPerLevel_g____set
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_075461c5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__WalkSpeedPerLevel_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__WalkSpeedPerLevel_g____set
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__RunSpeedPerLevel
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__RunSpeedPerLevel (const MethodInfo* method);
// 0x5a46040

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__RunSpeedPerLevel(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_075461c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__RunSpeedPerLevel_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__RunSpeedPerLevel_g____sett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_075461c6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__RunSpeedPerLevel_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__RunSpeedPerLevel_g____sett
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__TurnSpeed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__TurnSpeed (const MethodInfo* method);
// 0x5a46120

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__TurnSpeed(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_075461c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__TurnSpeed_g____getter_10_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__TurnSpeed_g____setter_10_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_075461c7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__TurnSpeed_g____getter_10_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__TurnSpeed_g____setter_10_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__RotateSpeed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__RotateSpeed (const MethodInfo* method);
// 0x5a46200

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__RotateSpeed(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_075461c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__RotateSpeed_g____getter_11
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__RotateSpeed_g____setter_11
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_075461c8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__RotateSpeed_g____getter_11
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__RotateSpeed_g____setter_11
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__JumpForce
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__JumpForce (const MethodInfo* method);
// 0x5a462e0

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__JumpForce(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_075461c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__JumpForce_g____getter_12_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__JumpForce_g____setter_12_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_075461c9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__JumpForce_g____getter_12_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__JumpForce_g____setter_12_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__ActionPause
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__ActionPause (const MethodInfo* method);
// 0x5a463c0

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__ActionPause(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_075461ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__ActionPause_g____getter_13
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__ActionPause_g____setter_13
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_075461ca = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__ActionPause_g____getter_13
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__ActionPause_g____setter_13
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__AttackPause
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__AttackPause (const MethodInfo* method);
// 0x5a464a0

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__AttackPause(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_075461cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackPause_g____getter_14
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackPause_g____setter_14
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_075461cb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackPause_g____getter_14
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackPause_g____setter_14
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__TurnPause
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__TurnPause (const MethodInfo* method);
// 0x5a46580

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__TurnPause(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_075461cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__TurnPause_g____getter_15_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__TurnPause_g____setter_15_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_075461cc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__TurnPause_g____getter_15_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__TurnPause_g____setter_15_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__Stamina
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__Stamina (const MethodInfo* method);
// 0x5a46660

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__Stamina(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_075461cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__Stamina_g____getter_16_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__Stamina_g____setter_16_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_075461cd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__Stamina_g____getter_16_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__Stamina_g____setter_16_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__MaxStamina
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__MaxStamina (const MethodInfo* method);
// 0x5a46740

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__MaxStamina(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_075461ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__MaxStamina_g____getter_17
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__MaxStamina_g____setter_17
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_075461ce = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__MaxStamina_g____getter_17
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__MaxStamina_g____setter_17
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__NapePosition
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__NapePosition (const MethodInfo* method);
// 0x5a46820

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__NapePosition(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075461cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__NapePosition_g____getter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_075461cf = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__NapePosition_g____getter_1
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__IsCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__IsCrawler (const MethodInfo* method);
// 0x5a468c0

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__IsCrawler(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075461d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__IsCrawler_g____getter_19_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_075461d0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__IsCrawler_g____getter_19_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__IsBald
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__IsBald (const MethodInfo* method);
// 0x5a46960

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__IsBald(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075461d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__IsBald_g____getter_20_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_075461d1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__IsBald_g____getter_20_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__IsWarded
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__IsWarded (const MethodInfo* method);
// 0x5a46a00

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__IsWarded(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_075461d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__IsWarded_g____getter_21_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__IsWarded_g____setter_21_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_075461d2 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__IsWarded_g____getter_21_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__IsWarded_g____setter_21_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__IsHardened
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__IsHardened (const MethodInfo* method);
// 0x5a46ae0

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__IsHardened(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075461d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__IsHardened_g____getter_22
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_075461d3 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__IsHardened_g____getter_22
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__FocusRange
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__FocusRange (const MethodInfo* method);
// 0x5a46b80

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__FocusRange(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_075461d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FocusRange_g____getter_23
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FocusRange_g____setter_23
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_075461d4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FocusRange_g____getter_23
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FocusRange_g____setter_23
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__FocusTime
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__FocusTime (const MethodInfo* method);
// 0x5a46c60

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__FocusTime(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_075461d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FocusTime_g____getter_24_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FocusTime_g____setter_24_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_075461d5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FocusTime_g____getter_24_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FocusTime_g____setter_24_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__FarAttackCooldown
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__FarAttackCooldown (const MethodInfo* method);
// 0x5a46d40

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__FarAttackCooldown(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_075461d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FarAttackCooldown_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FarAttackCooldown_g____set
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_075461d6 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FarAttackCooldown_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FarAttackCooldown_g____set
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__AttackWait
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__AttackWait (const MethodInfo* method);
// 0x5a46e20

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__AttackWait(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_075461d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackWait_g____getter_26
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackWait_g____setter_26
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_075461d7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackWait_g____getter_26
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackWait_g____setter_26
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__CanRun
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__CanRun (const MethodInfo* method);
// 0x5a46f00

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__CanRun(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_075461d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__CanRun_g____getter_27_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__CanRun_g____setter_27_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_075461d8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__CanRun_g____getter_27_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__CanRun_g____setter_27_1
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__AttackSpeedMultiplier
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__AttackSpeedMultiplier (const MethodInfo* method);
// 0x5a46fe0

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__AttackSpeedMultiplier
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_075461d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackSpeedMultiplier_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackSpeedMultiplier_g_71c1e38
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_075461d9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackSpeedMultiplier_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackSpeedMultiplier_g_71c1e38
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__HeadMount
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__HeadMount (const MethodInfo* method);
// 0x5a470c0

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__HeadMount(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075461da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__HeadMount_g____getter_29_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_075461da = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__HeadMount_g____getter_29_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__NeckMount
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__NeckMount (const MethodInfo* method);
// 0x5a47160

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__NeckMount(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075461db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__NeckMount_g____getter_30_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_075461db = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__NeckMount_g____getter_30_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreateMethodBinding__Target
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__Target (const MethodInfo* method);
// 0x5a47200
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a47235: jmp 0x5a472a5

CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__Target(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicTitanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicTitanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075461dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicTitanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c___CreateMethodBinding__Target_b__31_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
    Il2CppMethodInitialized_075461dc = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__31_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__31_0;
  }
  if (__this == (System_Func_CustomLogicTitanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c___CreateMethodBinding__Target_b__31_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__31_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__31_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreateMethodBinding__Wander
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__Wander (const MethodInfo* method);
// 0x5a47340
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a47375: jmp 0x5a473e5

CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__Wander(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicTitanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicTitanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075461dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicTitanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c___CreateMethodBinding__Wander_b__32_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
    Il2CppMethodInitialized_075461dd = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__32_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__32_0;
  }
  if (__this == (System_Func_CustomLogicTitanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c___CreateMethodBinding__Wander_b__32_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__32_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__32_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreateMethodBinding__Blind
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__Blind (const MethodInfo* method);
// 0x5a47480
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a474b5: jmp 0x5a47525

CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__Blind(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicTitanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicTitanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075461de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicTitanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c___CreateMethodBinding__Blind_b__33_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
    Il2CppMethodInitialized_075461de = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__33_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__33_0;
  }
  if (__this == (System_Func_CustomLogicTitanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c___CreateMethodBinding__Blind_b__33_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__33_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__33_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreateMethodBinding__Cripple
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__Cripple (const MethodInfo* method);
// 0x5a475c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a475f5: jmp 0x5a47665

CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__Cripple(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicTitanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicTitanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075461df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicTitanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c___CreateMethodBinding__Cripple_b__34_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
    Il2CppMethodInitialized_075461df = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__34_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__34_0;
  }
  if (__this == (System_Func_CustomLogicTitanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c___CreateMethodBinding__Cripple_b__34_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__34_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__34_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreateMethodBinding__Stun
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__Stun (const MethodInfo* method);
// 0x5a47700
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a47735: jmp 0x5a477a5

CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__Stun(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicTitanBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicTitanBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_075461e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicTitanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c___CreateMethodBinding__Stun_b__35_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
    Il2CppMethodInitialized_075461e0 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__35_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__35_0;
  }
  if (__this == (System_Func_CustomLogicTitanBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c___CreateMethodBinding__Stun_b__35_0,
               (MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields;
    pCVar2->__9__35_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__35_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5a47840

void CustomLogic_CustomLogicTitanBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_075461e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"FocusTime");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackPause");
    il2cpp_codegen_initialize_runtime_metadata(&"RunSpeedPerLevel");
    il2cpp_codegen_initialize_runtime_metadata(&"DeathType");
    il2cpp_codegen_initialize_runtime_metadata(&"WalkSpeedBase");
    il2cpp_codegen_initialize_runtime_metadata(&"DeathVelocity");
    il2cpp_codegen_initialize_runtime_metadata(&"ActionPause");
    il2cpp_codegen_initialize_runtime_metadata(&"WalkSpeedPerLevel");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackWait");
    il2cpp_codegen_initialize_runtime_metadata(&"HeadSize");
    il2cpp_codegen_initialize_runtime_metadata(&"Cripple");
    il2cpp_codegen_initialize_runtime_metadata(&"Target");
    il2cpp_codegen_initialize_runtime_metadata(&"Blind");
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSpeedMultiplier");
    il2cpp_codegen_initialize_runtime_metadata(&"Stun");
    il2cpp_codegen_initialize_runtime_metadata(&"MaxStamina");
    il2cpp_codegen_initialize_runtime_metadata(&"Stamina");
    il2cpp_codegen_initialize_runtime_metadata(&"IsCrawler");
    il2cpp_codegen_initialize_runtime_metadata(&"NeckMount");
    il2cpp_codegen_initialize_runtime_metadata(&"HeadMount");
    il2cpp_codegen_initialize_runtime_metadata(&"NapePosition");
    il2cpp_codegen_initialize_runtime_metadata(&"FocusRange");
    il2cpp_codegen_initialize_runtime_metadata(&"IsWarded");
    il2cpp_codegen_initialize_runtime_metadata(&"RunSpeedBase");
    il2cpp_codegen_initialize_runtime_metadata(&"IsBald");
    il2cpp_codegen_initialize_runtime_metadata(&"Size");
    il2cpp_codegen_initialize_runtime_metadata(&"JumpForce");
    il2cpp_codegen_initialize_runtime_metadata(&"IsHardened");
    il2cpp_codegen_initialize_runtime_metadata(&"RotateSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"Wander");
    il2cpp_codegen_initialize_runtime_metadata(&"FarAttackCooldown");
    il2cpp_codegen_initialize_runtime_metadata(&"CanRun");
    il2cpp_codegen_initialize_runtime_metadata(&"TurnPause");
    il2cpp_codegen_initialize_runtime_metadata(&"TurnSpeed");
    Il2CppMethodInitialized_075461e1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DeathType",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DeathVelocity",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Size",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HeadSize",
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
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Stamina",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MaxStamina",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"NapePosition",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsCrawler",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsBald",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsWarded",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsHardened",
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
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CanRun",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSpeedMultiplier",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HeadMount",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"NeckMount",
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
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Stun",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__DeathType>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__DeathType_g____getter_2_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x5a47d50

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__DeathType_g____getter_2_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
     ((__i->fields).Titan == (Characters_BasicTitan_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__DeathType>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__DeathType_g____setter_2_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a47d90

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__DeathType_g____setter_2_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int32_t value;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075461e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461e2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicTitanBuiltin__set_DeathType(__i,value,method_00);
  return;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__DeathVelocity>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__DeathVelocity_g____getter_3_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x5a47e10

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__DeathVelocity_g____getter_3_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  
  if ((__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Titan, pCVar1 == (Characters_BasicTitan_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0
                     ((UnityEngine_Vector3_o)(pCVar1->fields).DeathVelocity.fields,(MethodInfo *)0x0);
  return (Il2CppObject *)pCVar2;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__DeathVelocity>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__DeathVelocity_g____setter_3_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a47e40

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__DeathVelocity_g____setter_3_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar5;
  
  if (Il2CppMethodInitialized_075461e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461e3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  pCVar5 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (__v,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if ((__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Titan, pCVar1 == (Characters_BasicTitan_o *)0x0)) {
label_05a47eeb:
    ThrowNullReferenceException();
  }
  bVar4 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar4) {
    if ((pCVar5 == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
       (pCVar1 = (__i->fields).Titan, pCVar1 == (Characters_BasicTitan_o *)0x0)) goto label_05a47eeb;
    fVar2 = (pCVar5->fields).Value.fields.x;
    fVar3 = (pCVar5->fields).Value.fields.y;
    (pCVar1->fields).DeathVelocity.fields.z = (pCVar5->fields).Value.fields.z;
    (pCVar1->fields).DeathVelocity.fields.x = fVar2;
    (pCVar1->fields).DeathVelocity.fields.y = fVar3;
  }
  return;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__Size>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__Size_g____getter_4_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x5a47ef0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__Size_g____getter_4_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
     ((__i->fields).Titan == (Characters_BasicTitan_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__Size>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__Size_g____setter_4_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a47f30

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__Size_g____setter_4_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  float size;
  
  if (Il2CppMethodInitialized_075461e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461e4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  size = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                   (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (!bVar2) {
        return;
      }
      pCVar1 = (__i->fields).Titan;
      if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
        Characters_BaseTitan__SetSize((Characters_BaseTitan_o *)pCVar1,size,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__HeadSize>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__HeadSize_g____getter_5_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x5a47fe0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__HeadSize_g____getter_5_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
     ((__i->fields).Titan == (Characters_BasicTitan_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__HeadSize>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__HeadSize_g____setter_5_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a48020

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__HeadSize_g____setter_5_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_075461e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461e5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Titan, pCVar1 == (Characters_BasicTitan_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (pCVar1->fields).HeadSize = fVar2;
  return;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeedBase>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__RunSpeedBase_g____getter_6_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x5a480a0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__RunSpeedBase_g____getter_6_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
     ((__i->fields).Titan == (Characters_BasicTitan_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeedBase>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__RunSpeedBase_g____setter_6_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a480e0

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__RunSpeedBase_g____setter_6_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_075461e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461e6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__i->fields).Titan;
        if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a48183;
        (pCVar1->fields).RunSpeedBase = fVar3;
      }
      return;
    }
  }
label_05a48183:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__WalkSpeedBase>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedBase_g____getter_7_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x5a48190

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedBase_g____getter_7_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
     ((__i->fields).Titan == (Characters_BasicTitan_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__WalkSpeedBase>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedBase_g____setter_7_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a481d0

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedBase_g____setter_7_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_075461e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461e7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__i->fields).Titan;
        if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a48273;
        (pCVar1->fields).WalkSpeedBase = fVar3;
      }
      return;
    }
  }
label_05a48273:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__WalkSpeedPerLevel>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedPerLevel_g____getter_8_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x5a48280

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedPerLevel_g____getter_8_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
     ((__i->fields).Titan == (Characters_BasicTitan_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__WalkSpeedPerLevel>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedPerLevel_g____setter_8_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a482c0

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedPerLevel_g____setter_8_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_075461e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461e8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__i->fields).Titan;
        if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a48363;
        (pCVar1->fields).WalkSpeedPerLevel = fVar3;
      }
      return;
    }
  }
label_05a48363:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeedPerLevel>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__RunSpeedPerLevel_g____getter_9_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x5a48370

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__RunSpeedPerLevel_g____getter_9_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
     ((__i->fields).Titan == (Characters_BasicTitan_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeedPerLevel>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__RunSpeedPerLevel_g____setter_9_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a483b0

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__RunSpeedPerLevel_g____setter_9_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_075461e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461e9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__i->fields).Titan;
        if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a48453;
        (pCVar1->fields).RunSpeedPerLevel = fVar3;
      }
      return;
    }
  }
label_05a48453:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__TurnSpeed>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__TurnSpeed_g____getter_10_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x5a48460

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__TurnSpeed_g____getter_10_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
     ((__i->fields).Titan == (Characters_BasicTitan_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__TurnSpeed>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__TurnSpeed_g____setter_10_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a484a0

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__TurnSpeed_g____setter_10_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_075461ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461ea = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__i->fields).Titan;
        if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a48543;
        (pCVar1->fields).TurnSpeed = fVar3;
      }
      return;
    }
  }
label_05a48543:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__RotateSpeed>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__RotateSpeed_g____getter_11_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x5a48550

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__RotateSpeed_g____getter_11_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
     ((__i->fields).Titan == (Characters_BasicTitan_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__RotateSpeed>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__RotateSpeed_g____setter_11_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a48590

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__RotateSpeed_g____setter_11_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_075461eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461eb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__i->fields).Titan;
        if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a48633;
        (pCVar1->fields).RotateSpeed = fVar3;
      }
      return;
    }
  }
label_05a48633:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__JumpForce>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__JumpForce_g____getter_12_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x5a48640

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__JumpForce_g____getter_12_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
     ((__i->fields).Titan == (Characters_BasicTitan_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__JumpForce>g____setter|12_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__JumpForce_g____setter_12_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a48680

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__JumpForce_g____setter_12_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_075461ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461ec = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__i->fields).Titan;
        if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a48723;
        (pCVar1->fields).JumpForce = fVar3;
      }
      return;
    }
  }
label_05a48723:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__ActionPause>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__ActionPause_g____getter_13_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x5a48730

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__ActionPause_g____getter_13_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
     ((__i->fields).Titan == (Characters_BasicTitan_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__ActionPause>g____setter|13_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__ActionPause_g____setter_13_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a48770

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__ActionPause_g____setter_13_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_075461ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461ed = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__i->fields).Titan;
        if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a48813;
        (pCVar1->fields).ActionPause = fVar3;
      }
      return;
    }
  }
label_05a48813:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__AttackPause>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__AttackPause_g____getter_14_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x5a48820

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__AttackPause_g____getter_14_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
     ((__i->fields).Titan == (Characters_BasicTitan_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__AttackPause>g____setter|14_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__AttackPause_g____setter_14_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a48860

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__AttackPause_g____setter_14_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_075461ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461ee = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__i->fields).Titan;
        if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a48903;
        (pCVar1->fields).AttackPause = fVar3;
      }
      return;
    }
  }
label_05a48903:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__TurnPause>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__TurnPause_g____getter_15_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x5a48910

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__TurnPause_g____getter_15_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
     ((__i->fields).Titan == (Characters_BasicTitan_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__TurnPause>g____setter|15_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__TurnPause_g____setter_15_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a48950

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__TurnPause_g____setter_15_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_075461ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461ef = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__i->fields).Titan;
        if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a489f3;
        (pCVar1->fields).TurnPause = fVar3;
      }
      return;
    }
  }
label_05a489f3:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__Stamina>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__Stamina_g____getter_16_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x5a48a00

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__Stamina_g____getter_16_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
     ((__i->fields).Titan == (Characters_BasicTitan_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__Stamina>g____setter|16_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__Stamina_g____setter_16_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a48a40

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__Stamina_g____setter_16_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_075461f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461f0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__i->fields).Titan;
        if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a48ae3;
        (pCVar1->fields).CurrentSprintStamina = fVar3;
      }
      return;
    }
  }
label_05a48ae3:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__MaxStamina>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__MaxStamina_g____getter_17_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x5a48af0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__MaxStamina_g____getter_17_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
     ((__i->fields).Titan == (Characters_BasicTitan_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__MaxStamina>g____setter|17_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__MaxStamina_g____setter_17_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a48b30

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__MaxStamina_g____setter_17_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_075461f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461f1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__i->fields).Titan;
        if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a48bd3;
        (pCVar1->fields).MaxSprintStamina = fVar3;
      }
      return;
    }
  }
label_05a48bd3:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__NapePosition>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__NapePosition_g____getter_18_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x5a48be0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__NapePosition_g____getter_18_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicTitanBuiltin__get_NapePosition(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__IsCrawler>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__IsCrawler_g____getter_19_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x5a48bf0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__IsCrawler_g____getter_19_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
     ((__i->fields).Titan == (Characters_BasicTitan_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_1);
  return pIVar1;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__IsBald>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__IsBald_g____getter_20_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x5a48c30

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__IsBald_g____getter_20_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
     ((__i->fields).Titan == (Characters_BasicTitan_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_1);
  return pIVar1;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__IsWarded>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__IsWarded_g____getter_21_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x5a48c70

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__IsWarded_g____getter_21_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
     ((__i->fields).Titan == (Characters_BasicTitan_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_1);
  return pIVar1;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__IsWarded>g____setter|21_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__IsWarded_g____setter_21_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a48cb0

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__IsWarded_g____setter_21_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *__this;
  bool warded;
  
  if (Il2CppMethodInitialized_075461f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461f2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  warded = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                     (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
     (__this = (__i->fields).Titan, __this == (Characters_BasicTitan_o *)0x0)) {
    ThrowNullReferenceException();
  }
  Characters_BasicTitan__SetWarded(__this,warded,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__IsHardened>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__IsHardened_g____getter_22_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x5a48d30

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__IsHardened_g____getter_22_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
     ((__i->fields).Titan == (Characters_BasicTitan_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_1);
  return pIVar1;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__FocusRange>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__FocusRange_g____getter_23_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x5a48d70

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__FocusRange_g____getter_23_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  float local_c;
  
  if ((__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Titan, pCVar1 == (Characters_BasicTitan_o *)0x0)) {
label_05a48dde:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  local_c = 0.0;
  if (bVar3) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a48dde;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__i->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05a48dde;
      local_c = (pCVar2->fields).FocusRange;
    }
  }
  pIVar4 = il2cpp_vm_Object_Box(g_data_07556740,&local_c);
  return pIVar4;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__FocusRange>g____setter|23_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__FocusRange_g____setter_23_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a48df0

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__FocusRange_g____setter_23_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_075461f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461f3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Titan, pCVar1 == (Characters_BasicTitan_o *)0x0)) {
label_05a48ea2:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar3) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a48ea2;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__i->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05a48ea2;
      (pCVar2->fields).FocusRange = fVar4;
    }
  }
  return;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__FocusTime>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__FocusTime_g____getter_24_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x5a48eb0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__FocusTime_g____getter_24_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  float local_c;
  
  if ((__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Titan, pCVar1 == (Characters_BasicTitan_o *)0x0)) {
label_05a48f1e:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  local_c = 0.0;
  if (bVar3) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a48f1e;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__i->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05a48f1e;
      local_c = (pCVar2->fields).FocusTime;
    }
  }
  pIVar4 = il2cpp_vm_Object_Box(g_data_07556740,&local_c);
  return pIVar4;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__FocusTime>g____setter|24_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__FocusTime_g____setter_24_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a48f30

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__FocusTime_g____setter_24_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_075461f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461f4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Titan, pCVar1 == (Characters_BasicTitan_o *)0x0)) {
label_05a48fe2:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar3) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a48fe2;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__i->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05a48fe2;
      (pCVar2->fields).FocusTime = fVar4;
    }
  }
  return;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__FarAttackCooldown>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__FarAttackCooldown_g____getter_25_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x5a48ff0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__FarAttackCooldown_g____getter_25_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  float local_c;
  
  if ((__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Titan, pCVar1 == (Characters_BasicTitan_o *)0x0)) {
label_05a49061:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  local_c = 0.0;
  if (bVar3) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a49061;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__i->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05a49061;
      local_c = (pCVar2->fields).FarAttackCooldown;
    }
  }
  pIVar4 = il2cpp_vm_Object_Box(g_data_07556740,&local_c);
  return pIVar4;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__FarAttackCooldown>g____setter|25_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__FarAttackCooldown_g____setter_25_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a49070

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__FarAttackCooldown_g____setter_25_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_075461f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461f5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Titan, pCVar1 == (Characters_BasicTitan_o *)0x0)) {
label_05a49125:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar3) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a49125;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__i->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05a49125;
      (pCVar2->fields).FarAttackCooldown = fVar4;
    }
  }
  return;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__AttackWait>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__AttackWait_g____getter_26_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x5a49130

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__AttackWait_g____getter_26_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  float local_c;
  
  if ((__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Titan, pCVar1 == (Characters_BasicTitan_o *)0x0)) {
label_05a491a1:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  local_c = 0.0;
  if (bVar3) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a491a1;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__i->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05a491a1;
      local_c = (pCVar2->fields).AttackWait;
    }
  }
  pIVar4 = il2cpp_vm_Object_Box(g_data_07556740,&local_c);
  return pIVar4;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__AttackWait>g____setter|26_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__AttackWait_g____setter_26_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a491b0

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__AttackWait_g____setter_26_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_075461f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461f6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Titan, pCVar1 == (Characters_BasicTitan_o *)0x0)) {
label_05a49265:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar3) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a49265;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__i->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05a49265;
      (pCVar2->fields).AttackWait = fVar4;
    }
  }
  return;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__CanRun>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__CanRun_g____getter_27_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x5a49270

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__CanRun_g____getter_27_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  undefined1 local_9;
  
  if ((__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Titan, pCVar1 == (Characters_BasicTitan_o *)0x0)) {
label_05a492df:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar3) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a492df;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__i->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05a492df;
      local_9 = (pCVar2->fields).IsRun;
      goto label_05a492c0;
    }
  }
  local_9 = 0;
label_05a492c0:
  pIVar4 = il2cpp_vm_Object_Box(g_data_075566f0,&local_9);
  return pIVar4;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__CanRun>g____setter|27_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__CanRun_g____setter_27_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a492f0

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__CanRun_g____setter_27_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  bool bVar4;
  
  if (Il2CppMethodInitialized_075461f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461f7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Titan, pCVar1 == (Characters_BasicTitan_o *)0x0)) {
label_05a49398:
    ThrowNullReferenceException();
  }
  bVar4 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar4) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a49398;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__i->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05a49398;
      (pCVar2->fields).IsRun = bVar3;
    }
  }
  return;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__AttackSpeedMultiplier>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__AttackSpeedMultiplier_g____getter_28_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x5a493a0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__AttackSpeedMultiplier_g____getter_28_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  Il2CppObject *pIVar3;
  float local_c;
  
  if ((__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Titan, pCVar1 == (Characters_BasicTitan_o *)0x0)) {
label_05a493ff:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  local_c = 0.0;
  if (bVar2) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a493ff;
    local_c = (pCVar1->fields).AttackSpeedMultiplier;
  }
  pIVar3 = il2cpp_vm_Object_Box(g_data_07556740,&local_c);
  return pIVar3;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__AttackSpeedMultiplier>g____setter|28_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__AttackSpeedMultiplier_g____setter_28_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a49410

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__AttackSpeedMultiplier_g____setter_28_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_075461f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_075461f8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__i->fields).Titan;
        if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a494b3;
        (pCVar1->fields).AttackSpeedMultiplier = fVar3;
      }
      return;
    }
  }
label_05a494b3:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__HeadMount>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__HeadMount_g____getter_29_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x5a494c0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__HeadMount_g____getter_29_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Characters_BasicTitanComponentCache_o *pCVar2;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this;
  MethodInfo *method_00;
  
  if (((__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
      (pCVar1 = (__i->fields).Titan, pCVar1 == (Characters_BasicTitan_o *)0x0)) ||
     (pCVar2 = (pCVar1->fields).BasicCache, pCVar2 == (Characters_BasicTitanComponentCache_o *)0x0)) {
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


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__NeckMount>g____getter|30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__NeckMount_g____getter_30_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x5a49530

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__NeckMount_g____getter_30_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Characters_BasicTitanComponentCache_o *pCVar2;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this;
  MethodInfo *method_00;
  
  if (((__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) ||
      (pCVar1 = (__i->fields).Titan, pCVar1 == (Characters_BasicTitan_o *)0x0)) ||
     (pCVar2 = (pCVar1->fields).BasicCache, pCVar2 == (Characters_BasicTitanComponentCache_o *)0x0)) {
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


// CustomLogic.CustomLogicTitanBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin___ctor (CustomLogic_CustomLogicTitanBuiltin_o* __this, Characters_BasicTitan_o* titan, const MethodInfo* method);
// 0x5a43c00

void CustomLogic_CustomLogicTitanBuiltin___ctor
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,Characters_BasicTitan_o *titan,
               MethodInfo *method)

{
  Characters_BasicTitan_o *__this_00;
  Controllers_BaseTitanAIController_o *pCVar1;
  
  if (Il2CppMethodInitialized_075461bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_BaseTitanAIController);
    Il2CppMethodInitialized_075461bb = '\x01';
  }
  CustomLogic_CustomLogicCharacterBuiltin___ctor
            ((CustomLogic_CustomLogicCharacterBuiltin_o *)__this,(Characters_BaseCharacter_o *)titan,
             (MethodInfo *)0x0);
  (__this->fields).Titan = titan;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Titan);
  __this_00 = (__this->fields).Titan;
  if (__this_00 == (Characters_BasicTitan_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)__this_00,
                      (MethodInfo_34B0830 *)
                      MethodInfo_UnityEngine_Component_GetComponent_BaseTitanAIController);
  (__this->fields).Controller = pCVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Controller);
  return;
}


// CustomLogic.CustomLogicTitanBuiltin$$get_DeathType
// il2cpp: int32_t CustomLogic_CustomLogicTitanBuiltin__get_DeathType (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x5a43c80

int32_t CustomLogic_CustomLogicTitanBuiltin__get_DeathType
                  (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).DeathType;
}


// CustomLogic.CustomLogicTitanBuiltin$$set_DeathType
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_DeathType (CustomLogic_CustomLogicTitanBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5a43ca0

void CustomLogic_CustomLogicTitanBuiltin__set_DeathType
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Il2CppType *handle;
  bool bVar2;
  System_Type_o *enumType;
  Il2CppObject *pIVar3;
  System_String_o *pSVar4;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t iStack_30;
  int32_t iStack_2c;
  
  if (Il2CppMethodInitialized_075461bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Characters_TitanDeathType);
    Il2CppMethodInitialized_075461bc = '\x01';
  }
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
label_05a43d82:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  handle = TypeRef_Characters_TitanDeathType;
  if (bVar2) {
    if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_075567a8);
    }
    enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
    iStack_2c = value;
    pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_2c);
    if ((g_data_07556760->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(g_data_07556760);
    }
    bVar2 = System_Enum__IsDefined(enumType,pIVar3,(MethodInfo *)0x0);
    if (!bVar2) {
      iStack_30 = value;
      pIVar3 = il2cpp_vm_Object_Box(g_data_07556710,&iStack_30);
      pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Unknown death type: {0}");
      pSVar4 = System_String__Format(pSVar4,pIVar3,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
      __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
      System_ArgumentException___ctor_54186d0(__this_00,pSVar4,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicTitanBuiltin_set_DeathType);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
    }
    pCVar1 = (__this->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a43d82;
    (pCVar1->fields).DeathType = value;
  }
  return;
}


// CustomLogic.CustomLogicTitanBuiltin$$get_DeathVelocity
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTitanBuiltin__get_DeathVelocity (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x5a43e00

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTitanBuiltin__get_DeathVelocity
          (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0
                     ((UnityEngine_Vector3_o)(pCVar1->fields).DeathVelocity.fields,(MethodInfo *)0x0);
  return pCVar2;
}


// CustomLogic.CustomLogicTitanBuiltin$$set_DeathVelocity
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_DeathVelocity (CustomLogic_CustomLogicTitanBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x5a43e30

void CustomLogic_CustomLogicTitanBuiltin__set_DeathVelocity
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,CustomLogic_CustomLogicVector3Builtin_o *value,
               MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  float fVar2;
  float fVar3;
  bool bVar4;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
label_05a43e82:
    ThrowNullReferenceException();
  }
  bVar4 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar4) {
    if ((value == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
       (pCVar1 = (__this->fields).Titan, pCVar1 == (Characters_BasicTitan_o *)0x0)) goto label_05a43e82;
    fVar2 = (value->fields).Value.fields.x;
    fVar3 = (value->fields).Value.fields.y;
    (pCVar1->fields).DeathVelocity.fields.z = (value->fields).Value.fields.z;
    (pCVar1->fields).DeathVelocity.fields.x = fVar2;
    (pCVar1->fields).DeathVelocity.fields.y = fVar3;
  }
  return;
}


// CustomLogic.CustomLogicTitanBuiltin$$get_Size
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_Size (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x5a43e90

float CustomLogic_CustomLogicTitanBuiltin__get_Size
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).Size;
}


// CustomLogic.CustomLogicTitanBuiltin$$set_Size
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_Size (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a43eb0

void CustomLogic_CustomLogicTitanBuiltin__set_Size
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      Characters_BaseTitan__SetSize((Characters_BaseTitan_o *)pCVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_HeadSize
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_HeadSize (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x5a43f10

float CustomLogic_CustomLogicTitanBuiltin__get_HeadSize
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).HeadSize;
}


// CustomLogic.CustomLogicTitanBuiltin$$set_HeadSize
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_HeadSize (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a43f30

void CustomLogic_CustomLogicTitanBuiltin__set_HeadSize
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pCVar1->fields).HeadSize = value;
  return;
}


// CustomLogic.CustomLogicTitanBuiltin$$get_RunSpeedBase
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_RunSpeedBase (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x5a43f50

float CustomLogic_CustomLogicTitanBuiltin__get_RunSpeedBase
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).RunSpeedBase;
}


// CustomLogic.CustomLogicTitanBuiltin$$set_RunSpeedBase
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_RunSpeedBase (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a43f70

void CustomLogic_CustomLogicTitanBuiltin__set_RunSpeedBase
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
label_05a43fb8:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a43fb8;
    (pCVar1->fields).RunSpeedBase = value;
  }
  return;
}


// CustomLogic.CustomLogicTitanBuiltin$$get_WalkSpeedBase
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_WalkSpeedBase (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x5a43fc0

float CustomLogic_CustomLogicTitanBuiltin__get_WalkSpeedBase
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).WalkSpeedBase;
}


// CustomLogic.CustomLogicTitanBuiltin$$set_WalkSpeedBase
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_WalkSpeedBase (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a43fe0

void CustomLogic_CustomLogicTitanBuiltin__set_WalkSpeedBase
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
label_05a44028:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a44028;
    (pCVar1->fields).WalkSpeedBase = value;
  }
  return;
}


// CustomLogic.CustomLogicTitanBuiltin$$get_WalkSpeedPerLevel
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_WalkSpeedPerLevel (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x5a44030

float CustomLogic_CustomLogicTitanBuiltin__get_WalkSpeedPerLevel
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).WalkSpeedPerLevel;
}


// CustomLogic.CustomLogicTitanBuiltin$$set_WalkSpeedPerLevel
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_WalkSpeedPerLevel (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a44050

void CustomLogic_CustomLogicTitanBuiltin__set_WalkSpeedPerLevel
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
label_05a44098:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a44098;
    (pCVar1->fields).WalkSpeedPerLevel = value;
  }
  return;
}


// CustomLogic.CustomLogicTitanBuiltin$$get_RunSpeedPerLevel
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_RunSpeedPerLevel (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x5a440a0

float CustomLogic_CustomLogicTitanBuiltin__get_RunSpeedPerLevel
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).RunSpeedPerLevel;
}


// CustomLogic.CustomLogicTitanBuiltin$$set_RunSpeedPerLevel
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_RunSpeedPerLevel (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a440c0

void CustomLogic_CustomLogicTitanBuiltin__set_RunSpeedPerLevel
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
label_05a44108:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a44108;
    (pCVar1->fields).RunSpeedPerLevel = value;
  }
  return;
}


// CustomLogic.CustomLogicTitanBuiltin$$get_TurnSpeed
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_TurnSpeed (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x5a44110

float CustomLogic_CustomLogicTitanBuiltin__get_TurnSpeed
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).TurnSpeed;
}


// CustomLogic.CustomLogicTitanBuiltin$$set_TurnSpeed
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_TurnSpeed (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a44130

void CustomLogic_CustomLogicTitanBuiltin__set_TurnSpeed
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
label_05a44178:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a44178;
    (pCVar1->fields).TurnSpeed = value;
  }
  return;
}


// CustomLogic.CustomLogicTitanBuiltin$$get_RotateSpeed
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_RotateSpeed (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x5a44180

float CustomLogic_CustomLogicTitanBuiltin__get_RotateSpeed
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).RotateSpeed;
}


// CustomLogic.CustomLogicTitanBuiltin$$set_RotateSpeed
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_RotateSpeed (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a441a0

void CustomLogic_CustomLogicTitanBuiltin__set_RotateSpeed
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
label_05a441e8:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a441e8;
    (pCVar1->fields).RotateSpeed = value;
  }
  return;
}


// CustomLogic.CustomLogicTitanBuiltin$$get_JumpForce
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_JumpForce (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x5a441f0

float CustomLogic_CustomLogicTitanBuiltin__get_JumpForce
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).JumpForce;
}


// CustomLogic.CustomLogicTitanBuiltin$$set_JumpForce
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_JumpForce (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a44210

void CustomLogic_CustomLogicTitanBuiltin__set_JumpForce
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
label_05a44258:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a44258;
    (pCVar1->fields).JumpForce = value;
  }
  return;
}


// CustomLogic.CustomLogicTitanBuiltin$$get_ActionPause
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_ActionPause (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x5a44260

float CustomLogic_CustomLogicTitanBuiltin__get_ActionPause
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).ActionPause;
}


// CustomLogic.CustomLogicTitanBuiltin$$set_ActionPause
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_ActionPause (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a44280

void CustomLogic_CustomLogicTitanBuiltin__set_ActionPause
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
label_05a442c8:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a442c8;
    (pCVar1->fields).ActionPause = value;
  }
  return;
}


// CustomLogic.CustomLogicTitanBuiltin$$get_AttackPause
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_AttackPause (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x5a442d0

float CustomLogic_CustomLogicTitanBuiltin__get_AttackPause
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).AttackPause;
}


// CustomLogic.CustomLogicTitanBuiltin$$set_AttackPause
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_AttackPause (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a442f0

void CustomLogic_CustomLogicTitanBuiltin__set_AttackPause
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
label_05a44338:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a44338;
    (pCVar1->fields).AttackPause = value;
  }
  return;
}


// CustomLogic.CustomLogicTitanBuiltin$$get_TurnPause
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_TurnPause (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x5a44340

float CustomLogic_CustomLogicTitanBuiltin__get_TurnPause
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).TurnPause;
}


// CustomLogic.CustomLogicTitanBuiltin$$set_TurnPause
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_TurnPause (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a44360

void CustomLogic_CustomLogicTitanBuiltin__set_TurnPause
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
label_05a443a8:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a443a8;
    (pCVar1->fields).TurnPause = value;
  }
  return;
}


// CustomLogic.CustomLogicTitanBuiltin$$get_Stamina
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_Stamina (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x5a443b0

float CustomLogic_CustomLogicTitanBuiltin__get_Stamina
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).CurrentSprintStamina;
}


// CustomLogic.CustomLogicTitanBuiltin$$set_Stamina
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_Stamina (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a443d0

void CustomLogic_CustomLogicTitanBuiltin__set_Stamina
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
label_05a44418:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a44418;
    (pCVar1->fields).CurrentSprintStamina = value;
  }
  return;
}


// CustomLogic.CustomLogicTitanBuiltin$$get_MaxStamina
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_MaxStamina (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x5a44420

float CustomLogic_CustomLogicTitanBuiltin__get_MaxStamina
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).MaxSprintStamina;
}


// CustomLogic.CustomLogicTitanBuiltin$$set_MaxStamina
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_MaxStamina (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a44440

void CustomLogic_CustomLogicTitanBuiltin__set_MaxStamina
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
label_05a44488:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a44488;
    (pCVar1->fields).MaxSprintStamina = value;
  }
  return;
}


// CustomLogic.CustomLogicTitanBuiltin$$get_NapePosition
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTitanBuiltin__get_NapePosition (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x5a44490

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTitanBuiltin__get_NapePosition
          (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Characters_BasicTitanComponentCache_o *pCVar2;
  UnityEngine_Component_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar3;
  UnityEngine_Vector3_o v;
  
  pCVar1 = (__this->fields).Titan;
  if (((pCVar1 != (Characters_BasicTitan_o *)0x0) &&
      (pCVar2 = (pCVar1->fields).BasicCache, pCVar2 != (Characters_BasicTitanComponentCache_o *)0x0)) &&
     (__this_00 = (UnityEngine_Component_o *)(pCVar2->fields).NapeHurtbox,
     __this_00 != (UnityEngine_Component_o *)0x0)) {
    __this_01 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      v = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
      pCVar3 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_58dfaf0(v,(MethodInfo *)0x0);
      return pCVar3;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_IsCrawler
// il2cpp: bool CustomLogic_CustomLogicTitanBuiltin__get_IsCrawler (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x5a444e0

bool CustomLogic_CustomLogicTitanBuiltin__get_IsCrawler
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).IsCrawler;
}


// CustomLogic.CustomLogicTitanBuiltin$$get_IsBald
// il2cpp: bool CustomLogic_CustomLogicTitanBuiltin__get_IsBald (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x5a44500

bool CustomLogic_CustomLogicTitanBuiltin__get_IsBald
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields)._hairCut;
}


// CustomLogic.CustomLogicTitanBuiltin$$get_IsWarded
// il2cpp: bool CustomLogic_CustomLogicTitanBuiltin__get_IsWarded (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x5a44520

bool CustomLogic_CustomLogicTitanBuiltin__get_IsWarded
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).isWarded;
}


// CustomLogic.CustomLogicTitanBuiltin$$set_IsWarded
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_IsWarded (CustomLogic_CustomLogicTitanBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5a44540

void CustomLogic_CustomLogicTitanBuiltin__set_IsWarded
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,bool value,MethodInfo *method)

{
  Characters_BasicTitan_o *__this_00;
  
  __this_00 = (__this->fields).Titan;
  if (__this_00 == (Characters_BasicTitan_o *)0x0) {
    ThrowNullReferenceException();
  }
  Characters_BasicTitan__SetWarded(__this_00,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTitanBuiltin$$get_IsHardened
// il2cpp: bool CustomLogic_CustomLogicTitanBuiltin__get_IsHardened (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x5a44560

bool CustomLogic_CustomLogicTitanBuiltin__get_IsHardened
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).CurrentWardedWeakSpot != 0;
}


// CustomLogic.CustomLogicTitanBuiltin$$get_FocusRange
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_FocusRange (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x5a44580

float CustomLogic_CustomLogicTitanBuiltin__get_FocusRange
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  float fVar4;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
label_05a445c6:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  fVar4 = 0.0;
  if (bVar3) {
    pCVar1 = (__this->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a445c6;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__this->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05a445c6;
      fVar4 = (pCVar2->fields).FocusRange;
    }
  }
  return fVar4;
}


// CustomLogic.CustomLogicTitanBuiltin$$set_FocusRange
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_FocusRange (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a445d0

void CustomLogic_CustomLogicTitanBuiltin__set_FocusRange
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
label_05a44627:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar3) {
    pCVar1 = (__this->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a44627;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__this->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05a44627;
      (pCVar2->fields).FocusRange = value;
    }
  }
  return;
}


// CustomLogic.CustomLogicTitanBuiltin$$get_FocusTime
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_FocusTime (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x5a44630

float CustomLogic_CustomLogicTitanBuiltin__get_FocusTime
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  float fVar4;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
label_05a44676:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  fVar4 = 0.0;
  if (bVar3) {
    pCVar1 = (__this->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a44676;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__this->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05a44676;
      fVar4 = (pCVar2->fields).FocusTime;
    }
  }
  return fVar4;
}


// CustomLogic.CustomLogicTitanBuiltin$$set_FocusTime
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_FocusTime (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a44680

void CustomLogic_CustomLogicTitanBuiltin__set_FocusTime
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
label_05a446d7:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar3) {
    pCVar1 = (__this->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a446d7;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__this->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05a446d7;
      (pCVar2->fields).FocusTime = value;
    }
  }
  return;
}


// CustomLogic.CustomLogicTitanBuiltin$$get_FarAttackCooldown
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_FarAttackCooldown (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x5a446e0

float CustomLogic_CustomLogicTitanBuiltin__get_FarAttackCooldown
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  float fVar4;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
label_05a44729:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  fVar4 = 0.0;
  if (bVar3) {
    pCVar1 = (__this->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a44729;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__this->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05a44729;
      fVar4 = (pCVar2->fields).FarAttackCooldown;
    }
  }
  return fVar4;
}


// CustomLogic.CustomLogicTitanBuiltin$$set_FarAttackCooldown
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_FarAttackCooldown (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a44730

void CustomLogic_CustomLogicTitanBuiltin__set_FarAttackCooldown
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
label_05a4478a:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar3) {
    pCVar1 = (__this->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a4478a;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__this->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05a4478a;
      (pCVar2->fields).FarAttackCooldown = value;
    }
  }
  return;
}


// CustomLogic.CustomLogicTitanBuiltin$$get_AttackWait
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_AttackWait (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x5a44790

float CustomLogic_CustomLogicTitanBuiltin__get_AttackWait
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  float fVar4;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
label_05a447d9:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  fVar4 = 0.0;
  if (bVar3) {
    pCVar1 = (__this->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a447d9;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__this->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05a447d9;
      fVar4 = (pCVar2->fields).AttackWait;
    }
  }
  return fVar4;
}


// CustomLogic.CustomLogicTitanBuiltin$$set_AttackWait
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_AttackWait (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a447e0

void CustomLogic_CustomLogicTitanBuiltin__set_AttackWait
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
label_05a4483a:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar3) {
    pCVar1 = (__this->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a4483a;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__this->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05a4483a;
      (pCVar2->fields).AttackWait = value;
    }
  }
  return;
}


// CustomLogic.CustomLogicTitanBuiltin$$get_CanRun
// il2cpp: bool CustomLogic_CustomLogicTitanBuiltin__get_CanRun (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x5a44840

bool CustomLogic_CustomLogicTitanBuiltin__get_CanRun
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar3) {
      return false;
    }
    pCVar1 = (__this->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      if ((pCVar1->fields).AI == false) {
        return false;
      }
      pCVar2 = (__this->fields).Controller;
      if (pCVar2 != (Controllers_BaseTitanAIController_o *)0x0) {
        return (pCVar2->fields).IsRun != false;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_CanRun
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_CanRun (CustomLogic_CustomLogicTitanBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5a448a0

void CustomLogic_CustomLogicTitanBuiltin__set_CanRun
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,bool value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
label_05a448ee:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar3) {
    pCVar1 = (__this->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a448ee;
    if ((pCVar1->fields).AI != false) {
      pCVar2 = (__this->fields).Controller;
      if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_05a448ee;
      (pCVar2->fields).IsRun = value;
    }
  }
  return;
}


// CustomLogic.CustomLogicTitanBuiltin$$get_AttackSpeedMultiplier
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_AttackSpeedMultiplier (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x5a44900

float CustomLogic_CustomLogicTitanBuiltin__get_AttackSpeedMultiplier
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
label_05a44937:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  fVar3 = 0.0;
  if (bVar2) {
    pCVar1 = (__this->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a44937;
    fVar3 = (pCVar1->fields).AttackSpeedMultiplier;
  }
  return fVar3;
}


// CustomLogic.CustomLogicTitanBuiltin$$set_AttackSpeedMultiplier
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_AttackSpeedMultiplier (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a44940

void CustomLogic_CustomLogicTitanBuiltin__set_AttackSpeedMultiplier
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
label_05a44988:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a44988;
    (pCVar1->fields).AttackSpeedMultiplier = value;
  }
  return;
}


// CustomLogic.CustomLogicTitanBuiltin$$get_HeadMount
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicTitanBuiltin__get_HeadMount (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x5a44990

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicTitanBuiltin__get_HeadMount
          (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Characters_BasicTitanComponentCache_o *pCVar2;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_00;
  MethodInfo *method_00;
  
  pCVar1 = (__this->fields).Titan;
  if ((pCVar1 == (Characters_BasicTitan_o *)0x0) ||
     (pCVar2 = (pCVar1->fields).BasicCache, pCVar2 == (Characters_BasicTitanComponentCache_o *)0x0)) {
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


// CustomLogic.CustomLogicTitanBuiltin$$get_NeckMount
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicTitanBuiltin__get_NeckMount (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x5a44a00

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicTitanBuiltin__get_NeckMount
          (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Characters_BasicTitanComponentCache_o *pCVar2;
  UnityEngine_Transform_o *transform;
  CustomLogic_CustomLogicTransformBuiltin_o *__this_00;
  MethodInfo *method_00;
  
  pCVar1 = (__this->fields).Titan;
  if ((pCVar1 == (Characters_BasicTitan_o *)0x0) ||
     (pCVar2 = (pCVar1->fields).BasicCache, pCVar2 == (Characters_BasicTitanComponentCache_o *)0x0)) {
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


// CustomLogic.CustomLogicTitanBuiltin$$Target
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__Target (CustomLogic_CustomLogicTitanBuiltin_o* __this, Il2CppObject* enemyObj, float focus, const MethodInfo* method);
// 0x5a44a70

void CustomLogic_CustomLogicTitanBuiltin__Target
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,Il2CppObject *enemyObj,float focus,
               MethodInfo *method)

{
  CustomLogic_CustomLogicCharacterBuiltin__SetTarget
            ((CustomLogic_CustomLogicCharacterBuiltin_o *)__this,enemyObj,focus,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTitanBuiltin$$Wander
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__Wander (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x5a44a80

void CustomLogic_CustomLogicTitanBuiltin__Wander
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Titan;
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


// CustomLogic.CustomLogicTitanBuiltin$$Blind
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__Blind (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x5a44b20

void CustomLogic_CustomLogicTitanBuiltin__Blind
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
label_05a44b66:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a44b66;
    if ((pCVar1->fields).Dead == false) {
      (*(pCVar1->klass->vtable)._168_Blind.methodPtr)(pCVar1,(pCVar1->klass->vtable)._168_Blind.method);
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicTitanBuiltin$$Cripple
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__Cripple (CustomLogic_CustomLogicTitanBuiltin_o* __this, float time, const MethodInfo* method);
// 0x5a44b70

void CustomLogic_CustomLogicTitanBuiltin__Cripple
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float time,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
label_05a44bce:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a44bce;
    if ((pCVar1->fields).Dead == false) {
      (*(pCVar1->klass->vtable)._169_Cripple.methodPtr)
                (pCVar1,time,(pCVar1->klass->vtable)._169_Cripple.method);
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicTitanBuiltin$$Stun
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__Stun (CustomLogic_CustomLogicTitanBuiltin_o* __this, float duration, const MethodInfo* method);
// 0x5a44be0

void CustomLogic_CustomLogicTitanBuiltin__Stun
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float duration,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
label_05a44c58:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_05a44c58;
    if ((pCVar1->fields).Dead == false) {
      if ((duration == 0.0) && (!NAN(duration))) {
        duration = (pCVar1->fields).StunTime;
      }
      (*(pCVar1->klass->vtable)._155_Stun.methodPtr)
                (pCVar1,duration,true,(pCVar1->klass->vtable)._155_Stun.method);
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicTitanBuiltin$$IsAlive
// il2cpp: bool CustomLogic_CustomLogicTitanBuiltin__IsAlive (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x5a44ae0

bool CustomLogic_CustomLogicTitanBuiltin__IsAlive
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return false;
    }
    pCVar1 = (__this->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      return (pCVar1->fields).Dead == false;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanBuiltin__get_ClassName (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x5a44c60

System_String_o *
CustomLogic_CustomLogicTitanBuiltin__get_ClassName
          (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075461bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    Il2CppMethodInitialized_075461bd = '\x01';
  }
  return "Titan";
}


// CustomLogic.CustomLogicTitanBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTitanBuiltin__get_IsAbstract (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x5a44c90

bool CustomLogic_CustomLogicTitanBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicTitanBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTitanBuiltin__get_IsStatic (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x5a44ca0

bool CustomLogic_CustomLogicTitanBuiltin__get_IsStatic
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicTitanBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTitanBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x5a44cb0

bool CustomLogic_CustomLogicTitanBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


