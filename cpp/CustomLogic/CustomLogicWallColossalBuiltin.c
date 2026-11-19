// Type: CustomLogic.CustomLogicWallColossalBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicWallColossalBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicWallColossalBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicWallColossalBuiltin_o* CustomLogic_CustomLogicWallColossalBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a50fe0

CustomLogic_CustomLogicWallColossalBuiltin_o *
CustomLogic_CustomLogicWallColossalBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

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
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicWallColossalBuiltin constructor found that takes ");
  str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
  pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_54186d0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5a54310

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_0754627b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c);
    Il2CppMethodInitialized_0754627b = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5a54380

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings.<>c$$<__CreateMethodBinding__AttackSteam>b__23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_____CreateMethodBinding__AttackSteam_b__23_0 (CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicWallColossalBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a54390

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_____CreateMethodBinding__AttackSteam_b__23_0
          (CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicWallColossalBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  
  if ((__c == (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) ||
     (pCVar1 = (__c->fields).Shifter, pCVar1 == (Characters_WallColossalShifter_o *)0x0)) {
label_05a543d4:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__c->fields).Shifter;
    if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_05a543d4;
    if ((pCVar1->fields).Dead == false) {
      Characters_WallColossalShifter__SteamAttack(pCVar1,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings.<>c$$<__CreateMethodBinding__StopSteam>b__24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_____CreateMethodBinding__StopSteam_b__24_0 (CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicWallColossalBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a543e0

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_____CreateMethodBinding__StopSteam_b__24_0
          (CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicWallColossalBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  
  if ((__c == (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) ||
     (pCVar1 = (__c->fields).Shifter, pCVar1 == (Characters_WallColossalShifter_o *)0x0)) {
label_05a54424:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__c->fields).Shifter;
    if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_05a54424;
    if ((pCVar1->fields).Dead == false) {
      Characters_WallColossalShifter__StopSteam(pCVar1,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings.<>c$$<__CreateMethodBinding__WallAttack>b__25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_____CreateMethodBinding__WallAttack_b__25_0 (CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicWallColossalBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a54430

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_____CreateMethodBinding__WallAttack_b__25_0
          (CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicWallColossalBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  Controllers_WallColossalAIController_o *__this_00;
  bool bVar2;
  
  if ((__c != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__c->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return (Il2CppObject *)0x0;
    }
    pCVar1 = (__c->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      if ((pCVar1->fields).Dead != false) {
        return (Il2CppObject *)0x0;
      }
      if ((pCVar1->fields).AI == false) {
        return (Il2CppObject *)0x0;
      }
      __this_00 = (__c->fields).Controller;
      if (__this_00 != (Controllers_WallColossalAIController_o *)0x0) {
        Controllers_WallColossalAIController__WallAttack(__this_00,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a51070

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *pCVar3;
  CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_07546250 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSteam");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftHandState");
    il2cpp_codegen_initialize_runtime_metadata(&"CanDamageRightHand");
    il2cpp_codegen_initialize_runtime_metadata(&"RightHandState");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftHandHealth");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftHandSeverTimeLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"WallAttackCooldown");
    il2cpp_codegen_initialize_runtime_metadata(&"StunDuration");
    il2cpp_codegen_initialize_runtime_metadata(&"MaxHandHealth");
    il2cpp_codegen_initialize_runtime_metadata(&"RecoveryTimeLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"RightHandHealth");
    il2cpp_codegen_initialize_runtime_metadata(&"WallAttack");
    il2cpp_codegen_initialize_runtime_metadata(&"SteamState");
    il2cpp_codegen_initialize_runtime_metadata(&"StunState");
    il2cpp_codegen_initialize_runtime_metadata(&"MaxLeftHandHealth");
    il2cpp_codegen_initialize_runtime_metadata(&"MaxRightHandHealth");
    il2cpp_codegen_initialize_runtime_metadata(&"WallAttackCooldownLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"CanDamageLeftHand");
    il2cpp_codegen_initialize_runtime_metadata(&"StunTimeLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"RecoveryDuration");
    il2cpp_codegen_initialize_runtime_metadata(&"RightHandSeverTimeLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"StopSteam");
    il2cpp_codegen_initialize_runtime_metadata(&"HandHealth");
    il2cpp_codegen_initialize_runtime_metadata(&"HandSeverWindow");
    Il2CppMethodInitialized_07546250 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x848ecb43) {
    if (uVar2 < 0x40e3d514) {
      if (uVar2 < 0x32b26902) {
        if (uVar2 == 0x27dc816) {
          bVar1 = System_String__op_Equality(name,"RecoveryTimeLeft",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__RecoveryTimeLeft
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
        else if (uVar2 == 0xa0c428d) {
          bVar1 = System_String__op_Equality(name,"WallAttack",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
            }
            pCVar4 = CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreateMethodBinding__WallAttack
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
        }
        else if (uVar2 == 0x32b26901) {
          bVar1 = System_String__op_Equality(name,"HandSeverWindow",(MethodInfo *)0x0);
          if (bVar1) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings;
            if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
            }
            pCVar3 = CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__HandSeverWindow
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
        }
      }
      else if (uVar2 == 0x3736fc29) {
        bVar1 = System_String__op_Equality(name,"RightHandSeverTimeLeft",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__RightHandSeverTimeLeft
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x3a204e3a) {
        bVar1 = System_String__op_Equality(name,"MaxRightHandHealth",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__MaxRightHandHealth
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x40e3d513) {
        bVar1 = System_String__op_Equality(name,"LeftHandHealth",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__LeftHandHealth
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 < 0x63ececc1) {
      if (uVar2 == 0x43369292) {
        bVar1 = System_String__op_Equality(name,"StunState",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__StunState
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x4f9fdfe6) {
        bVar1 = System_String__op_Equality(name,"HandHealth",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__HandHealth
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x63ececc0) {
        bVar1 = System_String__op_Equality(name,"WallAttackCooldown",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__WallAttackCooldown
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x848ecb42) {
      bVar1 = System_String__op_Equality(name,"MaxHandHealth",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__MaxHandHealth
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x662d291c) {
      bVar1 = System_String__op_Equality(name,"CanDamageLeftHand",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__CanDamageLeftHand
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x67ff8d2b) {
      bVar1 = System_String__op_Equality(name,"AttackSteam",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreateMethodBinding__AttackSteam
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 < 0xa87e463f) {
    if (uVar2 < 0x9e7aa180) {
      if (uVar2 == 0x875ecbb5) {
        bVar1 = System_String__op_Equality(name,"RightHandState",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__RightHandState
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x98c20b49) {
        bVar1 = System_String__op_Equality(name,"StunTimeLeft",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__StunTimeLeft
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x9e7aa17f) {
        bVar1 = System_String__op_Equality(name,"MaxLeftHandHealth",(MethodInfo *)0x0);
        if (bVar1) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings;
          if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
          }
          pCVar3 = CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__MaxLeftHandHealth
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0xa2d6f7c7) {
      bVar1 = System_String__op_Equality(name,"CanDamageRightHand",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__CanDamageRightHand
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xa7e140ea) {
      bVar1 = System_String__op_Equality(name,"RecoveryDuration",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__RecoveryDuration
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xa87e463e) {
      bVar1 = System_String__op_Equality(name,"LeftHandSeverTimeLeft",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__LeftHandSeverTimeLeft
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0xdf3a7932) {
    if (uVar2 == 0xb22e4ad3) {
      bVar1 = System_String__op_Equality(name,"StopSteam",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreateMethodBinding__StopSteam
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0xbebdf4c1) {
      bVar1 = System_String__op_Equality(name,"WallAttackCooldownLeft",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__WallAttackCooldownLeft
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0xdf3a7931) {
      bVar1 = System_String__op_Equality(name,"StunDuration",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__StunDuration
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0xf0344aa6) {
    bVar1 = System_String__op_Equality(name,"RightHandHealth",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__RightHandHealth
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xfbba1884) {
    bVar1 = System_String__op_Equality(name,"SteamState",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__SteamState
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  else if (uVar2 == 0xfc51eb92) {
    bVar1 = System_String__op_Equality(name,"LeftHandState",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__LeftHandState
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicWallColossalBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__HandHealth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__HandHealth (const MethodInfo* method);
// 0x5a51980

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__HandHealth(MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  System_Action_CustomLogicWallColossalBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546251 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__HandHealth_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__HandHealth_g____set
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_07546251 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__HandHealth_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__HandHealth_g____set
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__MaxHandHealth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__MaxHandHealth (const MethodInfo* method);
// 0x5a51a60

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__MaxHandHealth
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  System_Action_CustomLogicWallColossalBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546252 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxHandHealth_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxHandHealth_g_71c26a0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_07546252 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxHandHealth_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxHandHealth_g_71c26a0
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__LeftHandHealth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__LeftHandHealth (const MethodInfo* method);
// 0x5a51b40

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__LeftHandHealth
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  System_Action_CustomLogicWallColossalBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546253 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__LeftHandHealth_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__LeftHandHealth_g_71c2678
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_07546253 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__LeftHandHealth_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__LeftHandHealth_g_71c2678
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__MaxLeftHandHealth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__MaxLeftHandHealth (const MethodInfo* method);
// 0x5a51c20

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__MaxLeftHandHealth
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  System_Action_CustomLogicWallColossalBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546254 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxLeftHandHealth_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxLeftHandHealth_g_71c26b0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_07546254 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxLeftHandHealth_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxLeftHandHealth_g_71c26b0
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__RightHandHealth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__RightHandHealth (const MethodInfo* method);
// 0x5a51d00

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__RightHandHealth
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  System_Action_CustomLogicWallColossalBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546255 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RightHandHealth_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RightHandHealth_g_71c26f0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_07546255 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RightHandHealth_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RightHandHealth_g_71c26f0
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__MaxRightHandHealth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__MaxRightHandHealth (const MethodInfo* method);
// 0x5a51de0

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__MaxRightHandHealth
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  System_Action_CustomLogicWallColossalBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546256 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxRightHandHealth
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxRightHandHealth_71c26c0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_07546256 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxRightHandHealth
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxRightHandHealth_71c26c0
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__CanDamageLeftHand
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__CanDamageLeftHand (const MethodInfo* method);
// 0x5a51ec0

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__CanDamageLeftHand
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  System_Action_CustomLogicWallColossalBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546257 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__CanDamageLeftHand_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__CanDamageLeftHand_g_71c2638
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_07546257 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__CanDamageLeftHand_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__CanDamageLeftHand_g_71c2638
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__CanDamageRightHand
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__CanDamageRightHand (const MethodInfo* method);
// 0x5a51fa0

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__CanDamageRightHand
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  System_Action_CustomLogicWallColossalBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546258 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__CanDamageRightHand
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__CanDamageRightHand_71c2648
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_07546258 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__CanDamageRightHand
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__CanDamageRightHand_71c2648
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__LeftHandState
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__LeftHandState (const MethodInfo* method);
// 0x5a52080

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__LeftHandState
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546259 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__LeftHandState_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_07546259 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__LeftHandState_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__RightHandState
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__RightHandState (const MethodInfo* method);
// 0x5a52120

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__RightHandState
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_0754625a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RightHandState_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_0754625a = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RightHandState_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__HandSeverWindow
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__HandSeverWindow (const MethodInfo* method);
// 0x5a521c0

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__HandSeverWindow
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  System_Action_CustomLogicWallColossalBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_0754625b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__HandSeverWindow_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__HandSeverWindow_g_71c2668
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_0754625b = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__HandSeverWindow_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__HandSeverWindow_g_71c2668
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__LeftHandSeverTimeLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__LeftHandSeverTimeLeft (const MethodInfo* method);
// 0x5a522a0

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__LeftHandSeverTimeLeft
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  System_Action_CustomLogicWallColossalBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_0754625c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__LeftHandSeverTimeLe
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__LeftHandSeverTimeLe_71c2688
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_0754625c = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__LeftHandSeverTimeLe
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__LeftHandSeverTimeLe_71c2688
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__RightHandSeverTimeLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__RightHandSeverTimeLeft (const MethodInfo* method);
// 0x5a52380

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__RightHandSeverTimeLeft
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  System_Action_CustomLogicWallColossalBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_0754625d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RightHandSeverTimeL
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RightHandSeverTimeL_71c2700
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_0754625d = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RightHandSeverTimeL
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RightHandSeverTimeL_71c2700
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__StunDuration
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__StunDuration (const MethodInfo* method);
// 0x5a52460

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__StunDuration(MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  System_Action_CustomLogicWallColossalBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_0754625e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__StunDuration_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__StunDuration_g____s
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_0754625e = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__StunDuration_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__StunDuration_g____s
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__StunTimeLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__StunTimeLeft (const MethodInfo* method);
// 0x5a52540

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__StunTimeLeft(MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  System_Action_CustomLogicWallColossalBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_0754625f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__StunTimeLeft_g____g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__StunTimeLeft_g____s
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_0754625f = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__StunTimeLeft_g____g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__StunTimeLeft_g____s
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__RecoveryDuration
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__RecoveryDuration (const MethodInfo* method);
// 0x5a52620

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__RecoveryDuration
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  System_Action_CustomLogicWallColossalBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546260 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RecoveryDuration_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RecoveryDuration_g_71c26d0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_07546260 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RecoveryDuration_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RecoveryDuration_g_71c26d0
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__RecoveryTimeLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__RecoveryTimeLeft (const MethodInfo* method);
// 0x5a52700

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__RecoveryTimeLeft
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  System_Action_CustomLogicWallColossalBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546261 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RecoveryTimeLeft_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RecoveryTimeLeft_g_71c26e0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_07546261 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RecoveryTimeLeft_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RecoveryTimeLeft_g_71c26e0
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__StunState
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__StunState (const MethodInfo* method);
// 0x5a527e0

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__StunState(MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546262 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__StunState_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_07546262 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__StunState_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__WallAttackCooldown
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__WallAttackCooldown (const MethodInfo* method);
// 0x5a52880

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__WallAttackCooldown
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  System_Action_CustomLogicWallColossalBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546263 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__WallAttackCooldown
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__WallAttackCooldown_71c2748
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_07546263 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__WallAttackCooldown
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__WallAttackCooldown_71c2748
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__WallAttackCooldownLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__WallAttackCooldownLeft (const MethodInfo* method);
// 0x5a52960

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__WallAttackCooldownLeft
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  System_Action_CustomLogicWallColossalBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_07546264 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__WallAttackCooldownL
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__WallAttackCooldownL_71c2758
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_07546264 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__WallAttackCooldownL
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__WallAttackCooldownL_71c2758
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__SteamState
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__SteamState (const MethodInfo* method);
// 0x5a52a40

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__SteamState(MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546265 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__SteamState_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_07546265 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__SteamState_g____get
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreateMethodBinding__AttackSteam
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreateMethodBinding__AttackSteam (const MethodInfo* method);
// 0x5a52ae0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a52b15: jmp 0x5a52b85

CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreateMethodBinding__AttackSteam(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicWallColossalBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546266 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c___CreateMethodBinding__AttackSteam_b__23_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546266 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__23_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__23_0;
  }
  if (__this == (System_Func_CustomLogicWallColossalBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object_array_object
                       );
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c___CreateMethodBinding__AttackSteam_b__23_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields;
    pCVar2->__9__23_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__23_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreateMethodBinding__StopSteam
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreateMethodBinding__StopSteam (const MethodInfo* method);
// 0x5a52c20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a52c55: jmp 0x5a52cc5

CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreateMethodBinding__StopSteam(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicWallColossalBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546267 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c___CreateMethodBinding__StopSteam_b__24_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546267 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__24_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__24_0;
  }
  if (__this == (System_Func_CustomLogicWallColossalBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object_array_object
                       );
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c___CreateMethodBinding__StopSteam_b__24_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields;
    pCVar2->__9__24_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__24_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreateMethodBinding__WallAttack
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreateMethodBinding__WallAttack (const MethodInfo* method);
// 0x5a52d60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a52d95: jmp 0x5a52e05

CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreateMethodBinding__WallAttack(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicWallColossalBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546268 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c___CreateMethodBinding__WallAttack_b__25_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546268 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__25_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__25_0;
  }
  if (__this == (System_Func_CustomLogicWallColossalBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object_array_object
                       );
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c___CreateMethodBinding__WallAttack_b__25_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields;
    pCVar2->__9__25_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__25_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin_ctor)
  ;
  return __this_00;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5a52ea0

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546269 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"AttackSteam");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftHandState");
    il2cpp_codegen_initialize_runtime_metadata(&"CanDamageRightHand");
    il2cpp_codegen_initialize_runtime_metadata(&"RightHandState");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftHandHealth");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftHandSeverTimeLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"WallAttackCooldown");
    il2cpp_codegen_initialize_runtime_metadata(&"StunDuration");
    il2cpp_codegen_initialize_runtime_metadata(&"MaxHandHealth");
    il2cpp_codegen_initialize_runtime_metadata(&"RecoveryTimeLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"RightHandHealth");
    il2cpp_codegen_initialize_runtime_metadata(&"WallAttack");
    il2cpp_codegen_initialize_runtime_metadata(&"SteamState");
    il2cpp_codegen_initialize_runtime_metadata(&"StunState");
    il2cpp_codegen_initialize_runtime_metadata(&"MaxLeftHandHealth");
    il2cpp_codegen_initialize_runtime_metadata(&"MaxRightHandHealth");
    il2cpp_codegen_initialize_runtime_metadata(&"WallAttackCooldownLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"CanDamageLeftHand");
    il2cpp_codegen_initialize_runtime_metadata(&"StunTimeLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"RecoveryDuration");
    il2cpp_codegen_initialize_runtime_metadata(&"RightHandSeverTimeLeft");
    il2cpp_codegen_initialize_runtime_metadata(&"StopSteam");
    il2cpp_codegen_initialize_runtime_metadata(&"HandHealth");
    il2cpp_codegen_initialize_runtime_metadata(&"HandSeverWindow");
    Il2CppMethodInitialized_07546269 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HandHealth",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MaxHandHealth",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LeftHandHealth",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MaxLeftHandHealth",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RightHandHealth",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MaxRightHandHealth",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CanDamageLeftHand",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CanDamageRightHand",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LeftHandState",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RightHandState",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HandSeverWindow",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LeftHandSeverTimeLeft",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RightHandSeverTimeLeft",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"StunDuration",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"StunTimeLeft",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RecoveryDuration",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RecoveryTimeLeft",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"StunState",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"WallAttackCooldown",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"WallAttackCooldownLeft",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SteamState",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSteam",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"StopSteam",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"WallAttack",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__HandHealth>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__HandHealth_g____getter_2_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x5a53270

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__HandHealth_g____getter_2_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) ||
     ((__i->fields).Shifter == (Characters_WallColossalShifter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__HandHealth>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__HandHealth_g____setter_2_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a532c0

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__HandHealth_g____setter_2_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  int32_t health;
  
  if (Il2CppMethodInitialized_0754626a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754626a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  health = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                     (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      Characters_WallColossalShifter__SetCurrentLeftHandHealth(pCVar1,health,(MethodInfo *)0x0);
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
        Characters_WallColossalShifter__SetCurrentRightHandHealth(pCVar1,health,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__MaxHandHealth>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__MaxHandHealth_g____getter_3_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x5a53380

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__MaxHandHealth_g____getter_3_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) ||
     ((__i->fields).Shifter == (Characters_WallColossalShifter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__MaxHandHealth>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__MaxHandHealth_g____setter_3_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a533d0

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__MaxHandHealth_g____setter_3_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  int32_t maxHealth;
  
  if (Il2CppMethodInitialized_0754626b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754626b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  maxHealth = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      Characters_WallColossalShifter__SetMaxLeftHandHealth(pCVar1,maxHealth,(MethodInfo *)0x0);
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
        Characters_WallColossalShifter__SetMaxRightHandHealth(pCVar1,maxHealth,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__LeftHandHealth>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__LeftHandHealth_g____getter_4_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x5a53490

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__LeftHandHealth_g____getter_4_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) ||
     ((__i->fields).Shifter == (Characters_WallColossalShifter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__LeftHandHealth>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__LeftHandHealth_g____setter_4_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a534d0

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__LeftHandHealth_g____setter_4_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  int32_t health;
  
  if (Il2CppMethodInitialized_0754626c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754626c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  health = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                     (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      Characters_WallColossalShifter__SetCurrentLeftHandHealth(pCVar1,health,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__MaxLeftHandHealth>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__MaxLeftHandHealth_g____getter_5_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x5a53570

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__MaxLeftHandHealth_g____getter_5_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) ||
     ((__i->fields).Shifter == (Characters_WallColossalShifter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__MaxLeftHandHealth>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__MaxLeftHandHealth_g____setter_5_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a535b0

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__MaxLeftHandHealth_g____setter_5_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  int32_t maxHealth;
  
  if (Il2CppMethodInitialized_0754626d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754626d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  maxHealth = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      Characters_WallColossalShifter__SetMaxLeftHandHealth(pCVar1,maxHealth,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__RightHandHealth>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RightHandHealth_g____getter_6_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x5a53650

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RightHandHealth_g____getter_6_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) ||
     ((__i->fields).Shifter == (Characters_WallColossalShifter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__RightHandHealth>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RightHandHealth_g____setter_6_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a53690

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RightHandHealth_g____setter_6_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  int32_t health;
  
  if (Il2CppMethodInitialized_0754626e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754626e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  health = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                     (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      Characters_WallColossalShifter__SetCurrentRightHandHealth(pCVar1,health,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__MaxRightHandHealth>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__MaxRightHandHealth_g____getter_7_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x5a53730

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__MaxRightHandHealth_g____getter_7_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) ||
     ((__i->fields).Shifter == (Characters_WallColossalShifter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__MaxRightHandHealth>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__MaxRightHandHealth_g____setter_7_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a53770

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__MaxRightHandHealth_g____setter_7_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  int32_t maxHealth;
  
  if (Il2CppMethodInitialized_0754626f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754626f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  maxHealth = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        (__v,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      Characters_WallColossalShifter__SetMaxRightHandHealth(pCVar1,maxHealth,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__CanDamageLeftHand>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__CanDamageLeftHand_g____getter_8_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x5a53810

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__CanDamageLeftHand_g____getter_8_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i == (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) ||
     ((__i->fields).Shifter == (Characters_WallColossalShifter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_1);
  return pIVar1;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__CanDamageLeftHand>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__CanDamageLeftHand_g____setter_8_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a53850

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__CanDamageLeftHand_g____setter_8_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07546270 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546270 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i == (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Shifter, pCVar1 == (Characters_WallColossalShifter_o *)0x0)) {
label_05a538e5:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar3) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_05a538e5;
    (pCVar1->fields).CanDamageLeftHand = bVar2;
  }
  return;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__CanDamageRightHand>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__CanDamageRightHand_g____getter_9_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x5a538f0

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__CanDamageRightHand_g____getter_9_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i == (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) ||
     ((__i->fields).Shifter == (Characters_WallColossalShifter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_1);
  return pIVar1;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__CanDamageRightHand>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__CanDamageRightHand_g____setter_9_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a53930

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__CanDamageRightHand_g____setter_9_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07546271 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546271 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i == (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Shifter, pCVar1 == (Characters_WallColossalShifter_o *)0x0)) {
label_05a539c5:
    ThrowNullReferenceException();
  }
  bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar3) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_05a539c5;
    (pCVar1->fields).CanDamageRightHand = bVar2;
  }
  return;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__LeftHandState>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__LeftHandState_g____getter_10_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x5a539d0

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__LeftHandState_g____getter_10_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) ||
     ((__i->fields).Shifter == (Characters_WallColossalShifter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__RightHandState>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RightHandState_g____getter_11_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x5a53a10

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RightHandState_g____getter_11_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) ||
     ((__i->fields).Shifter == (Characters_WallColossalShifter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__HandSeverWindow>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__HandSeverWindow_g____getter_12_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x5a53a50

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__HandSeverWindow_g____getter_12_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) ||
     ((__i->fields).Shifter == (Characters_WallColossalShifter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__HandSeverWindow>g____setter|12_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__HandSeverWindow_g____setter_12_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a53a90

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__HandSeverWindow_g____setter_12_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_07546272 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546272 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_05a53b33;
        (pCVar1->fields).HandSeverWindow = fVar3;
      }
      return;
    }
  }
label_05a53b33:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__LeftHandSeverTimeLeft>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__LeftHandSeverTimeLeft_g____getter_13_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x5a53b40

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__LeftHandSeverTimeLeft_g____getter_13_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) ||
     ((__i->fields).Shifter == (Characters_WallColossalShifter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__LeftHandSeverTimeLeft>g____setter|13_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__LeftHandSeverTimeLeft_g____setter_13_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a53b80

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__LeftHandSeverTimeLeft_g____setter_13_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_07546273 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546273 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_05a53c23;
        (pCVar1->fields).LeftHandSeverTimeLeft = fVar3;
      }
      return;
    }
  }
label_05a53c23:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__RightHandSeverTimeLeft>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RightHandSeverTimeLeft_g____getter_14_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x5a53c30

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RightHandSeverTimeLeft_g____getter_14_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) ||
     ((__i->fields).Shifter == (Characters_WallColossalShifter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__RightHandSeverTimeLeft>g____setter|14_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RightHandSeverTimeLeft_g____setter_14_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a53c70

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RightHandSeverTimeLeft_g____setter_14_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_07546274 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546274 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_05a53d13;
        (pCVar1->fields).RightHandSeverTimeLeft = fVar3;
      }
      return;
    }
  }
label_05a53d13:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__StunDuration>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__StunDuration_g____getter_15_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x5a53d20

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__StunDuration_g____getter_15_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) ||
     ((__i->fields).Shifter == (Characters_WallColossalShifter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__StunDuration>g____setter|15_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__StunDuration_g____setter_15_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a53d60

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__StunDuration_g____setter_15_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_07546275 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546275 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_05a53e03;
        (pCVar1->fields).StunDuration = fVar3;
      }
      return;
    }
  }
label_05a53e03:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__StunTimeLeft>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__StunTimeLeft_g____getter_16_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x5a53e10

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__StunTimeLeft_g____getter_16_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) ||
     ((__i->fields).Shifter == (Characters_WallColossalShifter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__StunTimeLeft>g____setter|16_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__StunTimeLeft_g____setter_16_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a53e50

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__StunTimeLeft_g____setter_16_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_07546276 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546276 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_05a53ef3;
        (pCVar1->fields).StunTimeLeft = fVar3;
      }
      return;
    }
  }
label_05a53ef3:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__RecoveryDuration>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RecoveryDuration_g____getter_17_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x5a53f00

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RecoveryDuration_g____getter_17_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) ||
     ((__i->fields).Shifter == (Characters_WallColossalShifter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__RecoveryDuration>g____setter|17_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RecoveryDuration_g____setter_17_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a53f40

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RecoveryDuration_g____setter_17_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_07546277 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546277 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_05a53fe3;
        (pCVar1->fields).RecoveryDuration = fVar3;
      }
      return;
    }
  }
label_05a53fe3:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__RecoveryTimeLeft>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RecoveryTimeLeft_g____getter_18_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x5a53ff0

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RecoveryTimeLeft_g____getter_18_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) ||
     ((__i->fields).Shifter == (Characters_WallColossalShifter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__RecoveryTimeLeft>g____setter|18_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RecoveryTimeLeft_g____setter_18_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a54030

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RecoveryTimeLeft_g____setter_18_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_07546278 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546278 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)
                        (pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
      if (bVar2) {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_05a540d3;
        (pCVar1->fields).RecoveryTimeLeft = fVar3;
      }
      return;
    }
  }
label_05a540d3:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__StunState>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__StunState_g____getter_19_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x5a540e0

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__StunState_g____getter_19_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  System_String_o *pSVar2;
  System_Enum_o local_20;
  int32_t local_10;
  
  if (__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_0754624e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ColossalStunState);
      Il2CppMethodInitialized_0754624e = '\x01';
    }
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      local_10 = (pCVar1->fields)._stunState;
      local_20.klass = (System_Enum_c *)TypeInfo_Characters_ColossalStunState;
      local_20.monitor = (void *)0xffffffffffffffff;
      pSVar2 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__WallAttackCooldown>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__WallAttackCooldown_g____getter_20_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x5a54150

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__WallAttackCooldown_g____getter_20_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) ||
     ((__i->fields).Controller == (Controllers_WallColossalAIController_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__WallAttackCooldown>g____setter|20_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__WallAttackCooldown_g____setter_20_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a54190

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__WallAttackCooldown_g____setter_20_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Controllers_WallColossalAIController_o *pCVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_07546279 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546279 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i == (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Controller, pCVar1 == (Controllers_WallColossalAIController_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (pCVar1->fields).WallAttackCooldown = fVar2;
  return;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__WallAttackCooldownLeft>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__WallAttackCooldownLeft_g____getter_21_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x5a54210

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__WallAttackCooldownLeft_g____getter_21_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) ||
     ((__i->fields).Controller == (Controllers_WallColossalAIController_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556740,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__WallAttackCooldownLeft>g____setter|21_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__WallAttackCooldownLeft_g____setter_21_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a54250

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__WallAttackCooldownLeft_g____setter_21_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Controllers_WallColossalAIController_o *pCVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_0754627a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754627a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_34BDFE0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i == (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) ||
     (pCVar1 = (__i->fields).Controller, pCVar1 == (Controllers_WallColossalAIController_o *)0x0)) {
    ThrowNullReferenceException();
  }
  (pCVar1->fields).WallAttackCooldownLeft = fVar2;
  return;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__SteamState>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__SteamState_g____getter_22_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x5a542d0

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__SteamState_g____getter_22_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i == (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) ||
     ((__i->fields).Shifter == (Characters_WallColossalShifter_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin___ctor (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, Characters_WallColossalShifter_o* shifter, const MethodInfo* method);
// 0x5a505b0

void CustomLogic_CustomLogicWallColossalBuiltin___ctor
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,Characters_WallColossalShifter_o *shifter
               ,MethodInfo *method)

{
  Controllers_BaseTitanAIController_o *pCVar1;
  Controllers_WallColossalAIController_o *pCVar2;
  
  if (Il2CppMethodInitialized_0754624d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_WallColossalAIController);
    Il2CppMethodInitialized_0754624d = '\x01';
  }
  if (Il2CppMethodInitialized_0754617f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_BaseTitanAIController);
    Il2CppMethodInitialized_0754617f = '\x01';
  }
  CustomLogic_CustomLogicCharacterBuiltin___ctor
            ((CustomLogic_CustomLogicCharacterBuiltin_o *)__this,(Characters_BaseCharacter_o *)shifter,
             (MethodInfo *)0x0);
  (__this->fields).Shifter__base0 = (Characters_BaseShifter_o *)shifter;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Shifter__base0);
  if (shifter == (Characters_WallColossalShifter_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)shifter,
                      (MethodInfo_34B0830 *)
                      MethodInfo_UnityEngine_Component_GetComponent_BaseTitanAIController);
  (__this->fields).Controller__base1 = pCVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Controller__base1);
  (__this->fields).Shifter = shifter;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Shifter);
  pCVar2 = UnityEngine_Component__GetComponent_object_
                     ((UnityEngine_Component_o *)shifter,
                      (MethodInfo_34B0830 *)
                      MethodInfo_UnityEngine_Component_GetComponent_WallColossalAIController);
  (__this->fields).Controller = pCVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Controller);
  return;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_HandHealth
// il2cpp: int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_HandHealth (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x5a50680

int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_HandHealth
                  (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return ((pCVar1->fields).CurrentRightHandHealth + (pCVar1->fields).CurrentLeftHandHealth) / 2;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_HandHealth
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_HandHealth (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5a506b0

void CustomLogic_CustomLogicWallColossalBuiltin__set_HandHealth
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      Characters_WallColossalShifter__SetCurrentLeftHandHealth(pCVar1,value,(MethodInfo *)0x0);
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
        Characters_WallColossalShifter__SetCurrentRightHandHealth(pCVar1,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_MaxHandHealth
// il2cpp: int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_MaxHandHealth (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x5a50710

int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_MaxHandHealth
                  (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return ((pCVar1->fields).MaxRightHandHealth + (pCVar1->fields).MaxLeftHandHealth) / 2;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_MaxHandHealth
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_MaxHandHealth (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5a50740

void CustomLogic_CustomLogicWallColossalBuiltin__set_MaxHandHealth
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      Characters_WallColossalShifter__SetMaxLeftHandHealth(pCVar1,value,(MethodInfo *)0x0);
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
        Characters_WallColossalShifter__SetMaxRightHandHealth(pCVar1,value,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_LeftHandHealth
// il2cpp: int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_LeftHandHealth (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x5a507a0

int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_LeftHandHealth
                  (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).CurrentLeftHandHealth;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_LeftHandHealth
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_LeftHandHealth (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5a507c0

void CustomLogic_CustomLogicWallColossalBuiltin__set_LeftHandHealth
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      Characters_WallColossalShifter__SetCurrentLeftHandHealth(pCVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_MaxLeftHandHealth
// il2cpp: int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_MaxLeftHandHealth (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x5a50810

int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_MaxLeftHandHealth
                  (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).MaxLeftHandHealth;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_MaxLeftHandHealth
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_MaxLeftHandHealth (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5a50830

void CustomLogic_CustomLogicWallColossalBuiltin__set_MaxLeftHandHealth
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      Characters_WallColossalShifter__SetMaxLeftHandHealth(pCVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_RightHandHealth
// il2cpp: int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_RightHandHealth (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x5a50880

int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_RightHandHealth
                  (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).CurrentRightHandHealth;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_RightHandHealth
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_RightHandHealth (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5a508a0

void CustomLogic_CustomLogicWallColossalBuiltin__set_RightHandHealth
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      Characters_WallColossalShifter__SetCurrentRightHandHealth(pCVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_MaxRightHandHealth
// il2cpp: int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_MaxRightHandHealth (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x5a508f0

int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_MaxRightHandHealth
                  (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).MaxRightHandHealth;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_MaxRightHandHealth
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_MaxRightHandHealth (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x5a50910

void CustomLogic_CustomLogicWallColossalBuiltin__set_MaxRightHandHealth
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      Characters_WallColossalShifter__SetMaxRightHandHealth(pCVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_CanDamageLeftHand
// il2cpp: bool CustomLogic_CustomLogicWallColossalBuiltin__get_CanDamageLeftHand (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x5a50960

bool CustomLogic_CustomLogicWallColossalBuiltin__get_CanDamageLeftHand
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).CanDamageLeftHand;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_CanDamageLeftHand
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_CanDamageLeftHand (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5a50980

void CustomLogic_CustomLogicWallColossalBuiltin__set_CanDamageLeftHand
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,bool value,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) {
label_05a509bc:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_05a509bc;
    (pCVar1->fields).CanDamageLeftHand = value;
  }
  return;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_CanDamageRightHand
// il2cpp: bool CustomLogic_CustomLogicWallColossalBuiltin__get_CanDamageRightHand (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x5a509d0

bool CustomLogic_CustomLogicWallColossalBuiltin__get_CanDamageRightHand
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).CanDamageRightHand;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_CanDamageRightHand
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_CanDamageRightHand (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5a509f0

void CustomLogic_CustomLogicWallColossalBuiltin__set_CanDamageRightHand
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,bool value,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) {
label_05a50a2c:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_05a50a2c;
    (pCVar1->fields).CanDamageRightHand = value;
  }
  return;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_LeftHandState
// il2cpp: int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_LeftHandState (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x5a50a40

int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_LeftHandState
                  (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields)._leftHandState;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_RightHandState
// il2cpp: int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_RightHandState (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x5a50a60

int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_RightHandState
                  (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields)._rightHandState;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_HandSeverWindow
// il2cpp: float CustomLogic_CustomLogicWallColossalBuiltin__get_HandSeverWindow (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x5a50a80

float CustomLogic_CustomLogicWallColossalBuiltin__get_HandSeverWindow
                (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).HandSeverWindow;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_HandSeverWindow
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_HandSeverWindow (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a50aa0

void CustomLogic_CustomLogicWallColossalBuiltin__set_HandSeverWindow
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) {
label_05a50ae8:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_05a50ae8;
    (pCVar1->fields).HandSeverWindow = value;
  }
  return;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_LeftHandSeverTimeLeft
// il2cpp: float CustomLogic_CustomLogicWallColossalBuiltin__get_LeftHandSeverTimeLeft (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x5a50af0

float CustomLogic_CustomLogicWallColossalBuiltin__get_LeftHandSeverTimeLeft
                (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).LeftHandSeverTimeLeft;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_LeftHandSeverTimeLeft
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_LeftHandSeverTimeLeft (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a50b10

void CustomLogic_CustomLogicWallColossalBuiltin__set_LeftHandSeverTimeLeft
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) {
label_05a50b58:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_05a50b58;
    (pCVar1->fields).LeftHandSeverTimeLeft = value;
  }
  return;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_RightHandSeverTimeLeft
// il2cpp: float CustomLogic_CustomLogicWallColossalBuiltin__get_RightHandSeverTimeLeft (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x5a50b60

float CustomLogic_CustomLogicWallColossalBuiltin__get_RightHandSeverTimeLeft
                (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).RightHandSeverTimeLeft;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_RightHandSeverTimeLeft
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_RightHandSeverTimeLeft (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a50b80

void CustomLogic_CustomLogicWallColossalBuiltin__set_RightHandSeverTimeLeft
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) {
label_05a50bc8:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_05a50bc8;
    (pCVar1->fields).RightHandSeverTimeLeft = value;
  }
  return;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_StunDuration
// il2cpp: float CustomLogic_CustomLogicWallColossalBuiltin__get_StunDuration (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x5a50bd0

float CustomLogic_CustomLogicWallColossalBuiltin__get_StunDuration
                (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).StunDuration;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_StunDuration
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_StunDuration (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a50bf0

void CustomLogic_CustomLogicWallColossalBuiltin__set_StunDuration
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) {
label_05a50c38:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_05a50c38;
    (pCVar1->fields).StunDuration = value;
  }
  return;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_StunTimeLeft
// il2cpp: float CustomLogic_CustomLogicWallColossalBuiltin__get_StunTimeLeft (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x5a50c40

float CustomLogic_CustomLogicWallColossalBuiltin__get_StunTimeLeft
                (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).StunTimeLeft;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_StunTimeLeft
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_StunTimeLeft (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a50c60

void CustomLogic_CustomLogicWallColossalBuiltin__set_StunTimeLeft
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) {
label_05a50ca8:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_05a50ca8;
    (pCVar1->fields).StunTimeLeft = value;
  }
  return;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_RecoveryDuration
// il2cpp: float CustomLogic_CustomLogicWallColossalBuiltin__get_RecoveryDuration (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x5a50cb0

float CustomLogic_CustomLogicWallColossalBuiltin__get_RecoveryDuration
                (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).RecoveryDuration;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_RecoveryDuration
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_RecoveryDuration (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a50cd0

void CustomLogic_CustomLogicWallColossalBuiltin__set_RecoveryDuration
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) {
label_05a50d18:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_05a50d18;
    (pCVar1->fields).RecoveryDuration = value;
  }
  return;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_RecoveryTimeLeft
// il2cpp: float CustomLogic_CustomLogicWallColossalBuiltin__get_RecoveryTimeLeft (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x5a50d20

float CustomLogic_CustomLogicWallColossalBuiltin__get_RecoveryTimeLeft
                (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).RecoveryTimeLeft;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_RecoveryTimeLeft
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_RecoveryTimeLeft (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a50d40

void CustomLogic_CustomLogicWallColossalBuiltin__set_RecoveryTimeLeft
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) {
label_05a50d88:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_05a50d88;
    (pCVar1->fields).RecoveryTimeLeft = value;
  }
  return;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_StunState
// il2cpp: System_String_o* CustomLogic_CustomLogicWallColossalBuiltin__get_StunState (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x5a50d90

System_String_o *
CustomLogic_CustomLogicWallColossalBuiltin__get_StunState
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  System_String_o *pSVar2;
  System_Enum_o local_20;
  int32_t local_10;
  
  if (Il2CppMethodInitialized_0754624e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ColossalStunState);
    Il2CppMethodInitialized_0754624e = '\x01';
  }
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) {
    ThrowNullReferenceException();
  }
  local_10 = (pCVar1->fields)._stunState;
  local_20.klass = (System_Enum_c *)TypeInfo_Characters_ColossalStunState;
  local_20.monitor = (void *)0xffffffffffffffff;
  pSVar2 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
  return pSVar2;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_WallAttackCooldown
// il2cpp: float CustomLogic_CustomLogicWallColossalBuiltin__get_WallAttackCooldown (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x5a50e00

float CustomLogic_CustomLogicWallColossalBuiltin__get_WallAttackCooldown
                (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Controllers_WallColossalAIController_o *pCVar1;
  
  pCVar1 = (__this->fields).Controller;
  if (pCVar1 == (Controllers_WallColossalAIController_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).WallAttackCooldown;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_WallAttackCooldown
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_WallAttackCooldown (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a50e20

void CustomLogic_CustomLogicWallColossalBuiltin__set_WallAttackCooldown
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,float value,MethodInfo *method)

{
  Controllers_WallColossalAIController_o *pCVar1;
  
  pCVar1 = (__this->fields).Controller;
  if (pCVar1 == (Controllers_WallColossalAIController_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pCVar1->fields).WallAttackCooldown = value;
  return;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_WallAttackCooldownLeft
// il2cpp: float CustomLogic_CustomLogicWallColossalBuiltin__get_WallAttackCooldownLeft (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x5a50e40

float CustomLogic_CustomLogicWallColossalBuiltin__get_WallAttackCooldownLeft
                (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Controllers_WallColossalAIController_o *pCVar1;
  
  pCVar1 = (__this->fields).Controller;
  if (pCVar1 == (Controllers_WallColossalAIController_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields).WallAttackCooldownLeft;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_WallAttackCooldownLeft
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_WallAttackCooldownLeft (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, float value, const MethodInfo* method);
// 0x5a50e60

void CustomLogic_CustomLogicWallColossalBuiltin__set_WallAttackCooldownLeft
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,float value,MethodInfo *method)

{
  Controllers_WallColossalAIController_o *pCVar1;
  
  pCVar1 = (__this->fields).Controller;
  if (pCVar1 == (Controllers_WallColossalAIController_o *)0x0) {
    ThrowNullReferenceException();
  }
  (pCVar1->fields).WallAttackCooldownLeft = value;
  return;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_SteamState
// il2cpp: int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_SteamState (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x5a50e80

int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_SteamState
                  (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) {
    ThrowNullReferenceException();
  }
  return (pCVar1->fields)._steamState;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$AttackSteam
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__AttackSteam (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x5a50ea0

void CustomLogic_CustomLogicWallColossalBuiltin__AttackSteam
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) {
label_05a50eda:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_05a50eda;
    if ((pCVar1->fields).Dead == false) {
      Characters_WallColossalShifter__SteamAttack(pCVar1,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$StopSteam
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__StopSteam (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x5a50ee0

void CustomLogic_CustomLogicWallColossalBuiltin__StopSteam
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) {
label_05a50f1a:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_05a50f1a;
    if ((pCVar1->fields).Dead == false) {
      Characters_WallColossalShifter__StopSteam(pCVar1,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$WallAttack
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__WallAttack (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x5a50f20

void CustomLogic_CustomLogicWallColossalBuiltin__WallAttack
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  Controllers_WallColossalAIController_o *__this_00;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      if ((pCVar1->fields).Dead != false) {
        return;
      }
      if ((pCVar1->fields).AI == false) {
        return;
      }
      __this_00 = (__this->fields).Controller;
      if (__this_00 != (Controllers_WallColossalAIController_o *)0x0) {
        Controllers_WallColossalAIController__WallAttack(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicWallColossalBuiltin__get_ClassName (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x5a50f80

System_String_o *
CustomLogic_CustomLogicWallColossalBuiltin__get_ClassName
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754624f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"WallColossal");
    Il2CppMethodInitialized_0754624f = '\x01';
  }
  return "WallColossal";
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicWallColossalBuiltin__get_IsAbstract (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x5a50fb0

bool CustomLogic_CustomLogicWallColossalBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicWallColossalBuiltin__get_IsStatic (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x5a50fc0

bool CustomLogic_CustomLogicWallColossalBuiltin__get_IsStatic
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicWallColossalBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x5a50fd0

bool CustomLogic_CustomLogicWallColossalBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


