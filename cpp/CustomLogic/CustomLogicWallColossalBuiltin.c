// Type: CustomLogic.CustomLogicWallColossalBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicWallColossalBuiltin.cs
// Prior source: NEW in this update
// --------------------------------

// CustomLogic.CustomLogicWallColossalBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicWallColossalBuiltin_o* CustomLogic_CustomLogicWallColossalBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e3c070

CustomLogic_CustomLogicWallColossalBuiltin_o *
CustomLogic_CustomLogicWallColossalBuiltin_Factory__CreateInstance
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
  str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicWallColossalBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
  pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
  System_ArgumentException___ctor(__this,pSVar1,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicWallColossalBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar2);
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3e3f340

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05702e58 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702e58 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3e3f3b0

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_o *__this,MethodInfo *method
               )

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings.<>c$$<__CreateMethodBinding__AttackSteam>b__23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_____CreateMethodBinding__AttackSteam_b__23_0 (CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicWallColossalBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e3f3c0

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_<>c__<__CreateMethodBinding__AttackSteam>b__23_0
          (CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicWallColossalBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  if (__c != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) {
    CustomLogic_CustomLogicWallColossalBuiltin__AttackSteam(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings.<>c$$<__CreateMethodBinding__StopSteam>b__24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_____CreateMethodBinding__StopSteam_b__24_0 (CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicWallColossalBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e3f3e0

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_<>c__<__CreateMethodBinding__StopSteam>b__24_0
          (CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicWallColossalBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  if (__c != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) {
    CustomLogic_CustomLogicWallColossalBuiltin__StopSteam(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings.<>c$$<__CreateMethodBinding__WallAttack>b__25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_____CreateMethodBinding__WallAttack_b__25_0 (CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicWallColossalBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e3f400

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_<>c__<__CreateMethodBinding__WallAttack>b__25_0
          (CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicWallColossalBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  if (__c != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) {
    CustomLogic_CustomLogicWallColossalBuiltin__WallAttack(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e3c100

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings__CreateMemberBinding
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
  System_Action_T__object__o *pSVar8;
  CustomLogic_CLPropertyBinding_T__o *pCVar9;
  System_Func_T__object____object__o *pSVar10;
  CustomLogic_CLMethodBinding_T__o *pCVar11;
  
  if (DAT_05702e2d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"AttackSteam");
    il2cpp_init_method_metadata(&"LeftHandState");
    il2cpp_init_method_metadata(&"CanDamageRightHand");
    il2cpp_init_method_metadata(&"RightHandState");
    il2cpp_init_method_metadata(&"LeftHandHealth");
    il2cpp_init_method_metadata(&"LeftHandSeverTimeLeft");
    il2cpp_init_method_metadata(&"WallAttackCooldown");
    il2cpp_init_method_metadata(&"StunDuration");
    il2cpp_init_method_metadata(&"MaxHandHealth");
    il2cpp_init_method_metadata(&"RecoveryTimeLeft");
    il2cpp_init_method_metadata(&"RightHandHealth");
    il2cpp_init_method_metadata(&"WallAttack");
    il2cpp_init_method_metadata(&"SteamState");
    il2cpp_init_method_metadata(&"StunState");
    il2cpp_init_method_metadata(&"MaxLeftHandHealth");
    il2cpp_init_method_metadata(&"MaxRightHandHealth");
    il2cpp_init_method_metadata(&"WallAttackCooldownLeft");
    il2cpp_init_method_metadata(&"CanDamageLeftHand");
    il2cpp_init_method_metadata(&"StunTimeLeft");
    il2cpp_init_method_metadata(&"RecoveryDuration");
    il2cpp_init_method_metadata(&"RightHandSeverTimeLeft");
    il2cpp_init_method_metadata(&"StopSteam");
    il2cpp_init_method_metadata(&"HandHealth");
    il2cpp_init_method_metadata(&"HandSeverWindow");
    DAT_05702e2d = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x848ecb43) {
    if (uVar3 < 0x40e3d514) {
      if (uVar3 < 0x32b26902) {
        if (uVar3 == 0x27dc816) {
          bVar4 = System_String__op_Equality(name,"RecoveryTimeLeft",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702e3e == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RecoveryTimeLef);
              il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__RecoveryTimeLeft);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
              DAT_05702e3e = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
            System_Func<object__object>___ctor();
            pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
            System_Action<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if (uVar3 == 0xa0c428d) {
          bVar4 = System_String__op_Equality(name,"WallAttack",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702e45 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicWallColossalBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicWallColossalBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object____o);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__WallAttack_b__25);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05702e45 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x18);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x18);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object____o);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0x18,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicWallColossalBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicWallColossalBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if ((uVar3 == 0x32b26901) &&
                (bVar4 = System_String__op_Equality(name,"HandSeverWindow",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702e38 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HandSeverWindow);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__HandSeverWindow_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
            DAT_05702e38 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0x3736fc29) {
        bVar4 = System_String__op_Equality(name,"RightHandSeverTimeLeft",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702e3a == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RightHandSeverT);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__RightHandSeverTim);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
            DAT_05702e3a = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0x3a204e3a) {
        bVar4 = System_String__op_Equality(name,"MaxRightHandHealth",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702e33 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MaxRightHandHea);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__MaxRightHandHealt);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
            DAT_05702e33 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0x40e3d513) &&
              (bVar4 = System_String__op_Equality(name,"LeftHandHealth",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702e30 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LeftHandHealth);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__LeftHandHealth_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
          DAT_05702e30 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 < 0x63ececc1) {
      if (uVar3 == 0x43369292) {
        bVar4 = System_String__op_Equality(name,"StunState",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702e3f == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__StunState_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
            DAT_05702e3f = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0x4f9fdfe6) {
        bVar4 = System_String__op_Equality(name,"HandHealth",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702e2e == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HandHealth_g);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__HandHealth_g____s);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
            DAT_05702e2e = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0x63ececc0) &&
              (bVar4 = System_String__op_Equality(name,"WallAttackCooldown",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702e40 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__WallAttackCoold);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__WallAttackCooldow);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
          DAT_05702e40 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0x848ecb42) {
      bVar4 = System_String__op_Equality(name,"MaxHandHealth",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702e2f == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MaxHandHealth_g);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__MaxHandHealth_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
          DAT_05702e2f = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0x662d291c) {
      bVar4 = System_String__op_Equality(name,"CanDamageLeftHand",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702e34 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CanDamageLeftHa);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__CanDamageLeftHand);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
          DAT_05702e34 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0x67ff8d2b) &&
            (bVar4 = System_String__op_Equality(name,"AttackSteam",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702e43 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicWallColossalBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicWallColossalBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object____o);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AttackSteam_b__23);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702e43 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object____o);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 8,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicWallColossalBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicWallColossalBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 < 0xa87e463f) {
    if (uVar3 < 0x9e7aa180) {
      if (uVar3 == 0x875ecbb5) {
        bVar4 = System_String__op_Equality(name,"RightHandState",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702e37 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RightHandState);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
            DAT_05702e37 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0x98c20b49) {
        bVar4 = System_String__op_Equality(name,"StunTimeLeft",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702e3c == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__StunTimeLeft_g);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__StunTimeLeft_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
            DAT_05702e3c = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0x9e7aa17f) &&
              (bVar4 = System_String__op_Equality(name,"MaxLeftHandHealth",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702e31 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MaxLeftHandHeal);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__MaxLeftHandHealth);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
          DAT_05702e31 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0xa2d6f7c7) {
      bVar4 = System_String__op_Equality(name,"CanDamageRightHand",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702e35 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CanDamageRightH);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__CanDamageRightHan);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
          DAT_05702e35 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0xa7e140ea) {
      bVar4 = System_String__op_Equality(name,"RecoveryDuration",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702e3d == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RecoveryDuratio);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__RecoveryDuration);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
          DAT_05702e3d = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0xa87e463e) &&
            (bVar4 = System_String__op_Equality(name,"LeftHandSeverTimeLeft",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702e39 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LeftHandSeverTi);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__LeftHandSeverTime);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
        DAT_05702e39 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 < 0xdf3a7932) {
    if (uVar3 == 0xb22e4ad3) {
      bVar4 = System_String__op_Equality(name,"StopSteam",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702e44 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicWallColossalBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicWallColossalBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object____o);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__StopSteam_b__24_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702e44 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object____o);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x10,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicWallColossalBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicWallColossalBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 == 0xbebdf4c1) {
      bVar4 = System_String__op_Equality(name,"WallAttackCooldownLeft",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702e41 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__WallAttackCoold);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__WallAttackCooldow);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
          DAT_05702e41 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0xdf3a7931) &&
            (bVar4 = System_String__op_Equality(name,"StunDuration",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702e3b == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__StunDuration_g);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__StunDuration_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
        DAT_05702e3b = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 == 0xf0344aa6) {
    bVar4 = System_String__op_Equality(name,"RightHandHealth",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702e32 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RightHandHealth);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__RightHandHealth_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
        DAT_05702e32 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 == 0xfbba1884) {
    bVar4 = System_String__op_Equality(name,"SteamState",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702e42 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SteamState_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
        DAT_05702e42 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
      System_Func<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if ((uVar3 == 0xfc51eb92) &&
          (bVar4 = System_String__op_Equality(name,"LeftHandState",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702e36 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LeftHandState_g);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
      DAT_05702e36 = '\x01';
    }
    pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
    System_Func<object__object>___ctor();
    pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
    return (CustomLogic_ICLMemberBinding_o *)pCVar9;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicWallColossalBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__HandHealth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__HandHealth (const MethodInfo* method);
// 0x3e3ca10

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__HandHealth
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this;
  
  if (DAT_05702e2e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HandHealth_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__HandHealth_g____s);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
    DAT_05702e2e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
  return __this;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__MaxHandHealth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__MaxHandHealth (const MethodInfo* method);
// 0x3e3caf0

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__MaxHandHealth
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this;
  
  if (DAT_05702e2f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MaxHandHealth_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__MaxHandHealth_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
    DAT_05702e2f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
  return __this;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__LeftHandHealth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__LeftHandHealth (const MethodInfo* method);
// 0x3e3cbd0

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__LeftHandHealth
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this;
  
  if (DAT_05702e30 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LeftHandHealth);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__LeftHandHealth_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
    DAT_05702e30 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
  return __this;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__MaxLeftHandHealth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__MaxLeftHandHealth (const MethodInfo* method);
// 0x3e3ccb0

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__MaxLeftHandHealth
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this;
  
  if (DAT_05702e31 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MaxLeftHandHeal);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__MaxLeftHandHealth);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
    DAT_05702e31 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
  return __this;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__RightHandHealth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__RightHandHealth (const MethodInfo* method);
// 0x3e3cd90

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__RightHandHealth
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this;
  
  if (DAT_05702e32 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RightHandHealth);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__RightHandHealth_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
    DAT_05702e32 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
  return __this;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__MaxRightHandHealth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__MaxRightHandHealth (const MethodInfo* method);
// 0x3e3ce70

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__MaxRightHandHealth
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this;
  
  if (DAT_05702e33 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MaxRightHandHea);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__MaxRightHandHealt);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
    DAT_05702e33 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
  return __this;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__CanDamageLeftHand
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__CanDamageLeftHand (const MethodInfo* method);
// 0x3e3cf50

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__CanDamageLeftHand
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this;
  
  if (DAT_05702e34 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CanDamageLeftHa);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__CanDamageLeftHand);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
    DAT_05702e34 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
  return __this;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__CanDamageRightHand
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__CanDamageRightHand (const MethodInfo* method);
// 0x3e3d030

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__CanDamageRightHand
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this;
  
  if (DAT_05702e35 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CanDamageRightH);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__CanDamageRightHan);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
    DAT_05702e35 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
  return __this;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__LeftHandState
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__LeftHandState (const MethodInfo* method);
// 0x3e3d110

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__LeftHandState
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this;
  
  if (DAT_05702e36 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LeftHandState_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
    DAT_05702e36 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
  return __this;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__RightHandState
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__RightHandState (const MethodInfo* method);
// 0x3e3d1b0

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__RightHandState
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this;
  
  if (DAT_05702e37 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RightHandState);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
    DAT_05702e37 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
  return __this;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__HandSeverWindow
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__HandSeverWindow (const MethodInfo* method);
// 0x3e3d250

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__HandSeverWindow
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this;
  
  if (DAT_05702e38 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HandSeverWindow);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__HandSeverWindow_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
    DAT_05702e38 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
  return __this;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__LeftHandSeverTimeLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__LeftHandSeverTimeLeft (const MethodInfo* method);
// 0x3e3d330

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__LeftHandSeverTimeLeft
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this;
  
  if (DAT_05702e39 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__LeftHandSeverTi);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__LeftHandSeverTime);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
    DAT_05702e39 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
  return __this;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__RightHandSeverTimeLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__RightHandSeverTimeLeft (const MethodInfo* method);
// 0x3e3d410

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__RightHandSeverTimeLeft
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this;
  
  if (DAT_05702e3a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RightHandSeverT);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__RightHandSeverTim);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
    DAT_05702e3a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
  return __this;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__StunDuration
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__StunDuration (const MethodInfo* method);
// 0x3e3d4f0

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__StunDuration
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this;
  
  if (DAT_05702e3b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__StunDuration_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__StunDuration_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
    DAT_05702e3b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
  return __this;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__StunTimeLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__StunTimeLeft (const MethodInfo* method);
// 0x3e3d5d0

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__StunTimeLeft
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this;
  
  if (DAT_05702e3c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__StunTimeLeft_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__StunTimeLeft_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
    DAT_05702e3c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
  return __this;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__RecoveryDuration
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__RecoveryDuration (const MethodInfo* method);
// 0x3e3d6b0

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__RecoveryDuration
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this;
  
  if (DAT_05702e3d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RecoveryDuratio);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__RecoveryDuration);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
    DAT_05702e3d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
  return __this;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__RecoveryTimeLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__RecoveryTimeLeft (const MethodInfo* method);
// 0x3e3d790

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__RecoveryTimeLeft
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this;
  
  if (DAT_05702e3e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RecoveryTimeLef);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__RecoveryTimeLeft);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
    DAT_05702e3e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
  return __this;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__StunState
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__StunState (const MethodInfo* method);
// 0x3e3d870

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__StunState
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this;
  
  if (DAT_05702e3f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__StunState_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
    DAT_05702e3f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
  return __this;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__WallAttackCooldown
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__WallAttackCooldown (const MethodInfo* method);
// 0x3e3d910

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__WallAttackCooldown
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this;
  
  if (DAT_05702e40 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__WallAttackCoold);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__WallAttackCooldow);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
    DAT_05702e40 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
  return __this;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__WallAttackCooldownLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__WallAttackCooldownLeft (const MethodInfo* method);
// 0x3e3d9f0

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__WallAttackCooldownLeft
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this;
  
  if (DAT_05702e41 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__WallAttackCoold);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__WallAttackCooldow);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
    DAT_05702e41 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicWallColossalBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
  return __this;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__SteamState
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__SteamState (const MethodInfo* method);
// 0x3e3dad0

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__SteamState
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this;
  
  if (DAT_05702e42 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SteamState_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
    DAT_05702e42 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicWallColossalBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicWallColossalBuilt);
  return __this;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreateMethodBinding__AttackSteam
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreateMethodBinding__AttackSteam (const MethodInfo* method);
// 0x3e3db70

CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreateMethodBinding__AttackSteam
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin__o *__this;
  
  if (DAT_05702e43 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object____o);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__AttackSteam_b__23);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702e43 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object____o);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicWallColossalBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicWallColossalBuiltin);
  return __this;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreateMethodBinding__StopSteam
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreateMethodBinding__StopSteam (const MethodInfo* method);
// 0x3e3dcc0

CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreateMethodBinding__StopSteam
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin__o *__this;
  
  if (DAT_05702e44 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object____o);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__StopSteam_b__24_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702e44 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object____o);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicWallColossalBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicWallColossalBuiltin);
  return __this;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreateMethodBinding__WallAttack
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreateMethodBinding__WallAttack (const MethodInfo* method);
// 0x3e3de10

CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreateMethodBinding__WallAttack
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin__o *__this;
  
  if (DAT_05702e45 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicWallColossalBuiltin__object____o);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__WallAttack_b__25);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702e45 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicWallColossalBuiltin__object____o);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicWallColossalBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicWallColossalBuiltin);
  return __this;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3e3df60

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702e46 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"AttackSteam");
    il2cpp_init_method_metadata(&"LeftHandState");
    il2cpp_init_method_metadata(&"CanDamageRightHand");
    il2cpp_init_method_metadata(&"RightHandState");
    il2cpp_init_method_metadata(&"LeftHandHealth");
    il2cpp_init_method_metadata(&"LeftHandSeverTimeLeft");
    il2cpp_init_method_metadata(&"WallAttackCooldown");
    il2cpp_init_method_metadata(&"StunDuration");
    il2cpp_init_method_metadata(&"MaxHandHealth");
    il2cpp_init_method_metadata(&"RecoveryTimeLeft");
    il2cpp_init_method_metadata(&"RightHandHealth");
    il2cpp_init_method_metadata(&"WallAttack");
    il2cpp_init_method_metadata(&"SteamState");
    il2cpp_init_method_metadata(&"StunState");
    il2cpp_init_method_metadata(&"MaxLeftHandHealth");
    il2cpp_init_method_metadata(&"MaxRightHandHealth");
    il2cpp_init_method_metadata(&"WallAttackCooldownLeft");
    il2cpp_init_method_metadata(&"CanDamageLeftHand");
    il2cpp_init_method_metadata(&"StunTimeLeft");
    il2cpp_init_method_metadata(&"RecoveryDuration");
    il2cpp_init_method_metadata(&"RightHandSeverTimeLeft");
    il2cpp_init_method_metadata(&"StopSteam");
    il2cpp_init_method_metadata(&"HandHealth");
    il2cpp_init_method_metadata(&"HandSeverWindow");
    DAT_05702e46 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"HandHealth",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MaxHandHealth",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"LeftHandHealth",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MaxLeftHandHealth",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RightHandHealth",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MaxRightHandHealth",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"CanDamageLeftHand",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"CanDamageRightHand",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"LeftHandState",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RightHandState",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HandSeverWindow",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"LeftHandSeverTimeLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RightHandSeverTimeLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"StunDuration",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"StunTimeLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RecoveryDuration",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RecoveryTimeLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"StunState",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"WallAttackCooldown",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"WallAttackCooldownLeft",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SteamState",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackSteam",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"StopSteam",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"WallAttack",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__HandHealth>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__HandHealth_g____getter_2_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x3e3e330

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__HandHealth>g____getter_2_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     ((__i->fields).Shifter != (Characters_WallColossalShifter_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__HandHealth>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__HandHealth_g____setter_2_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e3e380

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__HandHealth>g____setter_2_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  int32_t health;
  bool_conflict bVar2;
  
  if (DAT_05702e47 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e47 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  health = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__MaxHandHealth>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__MaxHandHealth_g____getter_3_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x3e3e430

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__MaxHandHealth>g____getter_3_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     ((__i->fields).Shifter != (Characters_WallColossalShifter_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__MaxHandHealth>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__MaxHandHealth_g____setter_3_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e3e480

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__MaxHandHealth>g____setter_3_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  int32_t maxHealth;
  bool_conflict bVar2;
  
  if (DAT_05702e48 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e48 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  maxHealth = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__LeftHandHealth>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__LeftHandHealth_g____getter_4_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x3e3e530

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__LeftHandHealth>g____getter_4_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     ((__i->fields).Shifter != (Characters_WallColossalShifter_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__LeftHandHealth>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__LeftHandHealth_g____setter_4_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e3e570

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__LeftHandHealth>g____setter_4_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  int32_t health;
  bool_conflict bVar2;
  
  if (DAT_05702e49 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e49 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  health = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      Characters_WallColossalShifter__SetCurrentLeftHandHealth(pCVar1,health,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__MaxLeftHandHealth>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__MaxLeftHandHealth_g____getter_5_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x3e3e610

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__MaxLeftHandHealth>g____getter_5_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     ((__i->fields).Shifter != (Characters_WallColossalShifter_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__MaxLeftHandHealth>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__MaxLeftHandHealth_g____setter_5_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e3e650

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__MaxLeftHandHealth>g____setter_5_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  int32_t maxHealth;
  bool_conflict bVar2;
  
  if (DAT_05702e4a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e4a = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  maxHealth = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      Characters_WallColossalShifter__SetMaxLeftHandHealth(pCVar1,maxHealth,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__RightHandHealth>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RightHandHealth_g____getter_6_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x3e3e6f0

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__RightHandHealth>g____getter_6_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     ((__i->fields).Shifter != (Characters_WallColossalShifter_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__RightHandHealth>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RightHandHealth_g____setter_6_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e3e730

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__RightHandHealth>g____setter_6_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  int32_t health;
  bool_conflict bVar2;
  
  if (DAT_05702e4b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e4b = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  health = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      Characters_WallColossalShifter__SetCurrentRightHandHealth(pCVar1,health,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__MaxRightHandHealth>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__MaxRightHandHealth_g____getter_7_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x3e3e7d0

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__MaxRightHandHealth>g____getter_7_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     ((__i->fields).Shifter != (Characters_WallColossalShifter_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__MaxRightHandHealth>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__MaxRightHandHealth_g____setter_7_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e3e810

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__MaxRightHandHealth>g____setter_7_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  int32_t maxHealth;
  bool_conflict bVar2;
  
  if (DAT_05702e4c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e4c = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  maxHealth = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(__v,MethodInfo_Int32_ConvertTo_Int32);
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      Characters_WallColossalShifter__SetMaxRightHandHealth(pCVar1,maxHealth,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__CanDamageLeftHand>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__CanDamageLeftHand_g____getter_8_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x3e3e8b0

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__CanDamageLeftHand>g____getter_8_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     ((__i->fields).Shifter != (Characters_WallColossalShifter_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&uStack_1);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__CanDamageLeftHand>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__CanDamageLeftHand_g____setter_8_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e3e8f0

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__CanDamageLeftHand>g____setter_8_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  
  if (DAT_05702e4d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e4d = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto LAB_03e3e97c;
      *(char *)((long)&(pCVar1->fields).ColossalAnimations + 4) = (char)bVar2;
    }
    return;
  }
LAB_03e3e97c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__CanDamageRightHand>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__CanDamageRightHand_g____getter_9_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x3e3e990

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__CanDamageRightHand>g____getter_9_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     ((__i->fields).Shifter != (Characters_WallColossalShifter_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&uStack_1);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__CanDamageRightHand>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__CanDamageRightHand_g____setter_9_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e3e9d0

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__CanDamageRightHand>g____setter_9_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool_conflict bVar2;
  bool_conflict bVar3;
  
  if (DAT_05702e4e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e4e = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto LAB_03e3ea5c;
      *(char *)((long)&(pCVar1->fields).ColossalAnimations + 5) = (char)bVar2;
    }
    return;
  }
LAB_03e3ea5c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__LeftHandState>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__LeftHandState_g____getter_10_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x3e3ea70

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__LeftHandState>g____getter_10_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     ((__i->fields).Shifter != (Characters_WallColossalShifter_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__RightHandState>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RightHandState_g____getter_11_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x3e3eab0

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__RightHandState>g____getter_11_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     ((__i->fields).Shifter != (Characters_WallColossalShifter_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__HandSeverWindow>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__HandSeverWindow_g____getter_12_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x3e3eaf0

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__HandSeverWindow>g____getter_12_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     ((__i->fields).Shifter != (Characters_WallColossalShifter_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__HandSeverWindow>g____setter|12_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__HandSeverWindow_g____setter_12_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e3eb30

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__HandSeverWindow>g____setter_12_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_05702e4f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e4f = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto LAB_03e3ebca;
        (pCVar1->fields).SteamDamageInterval = fVar3;
      }
      return;
    }
  }
LAB_03e3ebca:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__LeftHandSeverTimeLeft>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__LeftHandSeverTimeLeft_g____getter_13_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x3e3ebd0

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__LeftHandSeverTimeLeft>g____getter_13_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     ((__i->fields).Shifter != (Characters_WallColossalShifter_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__LeftHandSeverTimeLeft>g____setter|13_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__LeftHandSeverTimeLeft_g____setter_13_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e3ec10

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__LeftHandSeverTimeLeft>g____setter_13_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_05702e50 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e50 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto LAB_03e3ecaa;
        (pCVar1->fields)._steamState = (int32_t)fVar3;
      }
      return;
    }
  }
LAB_03e3ecaa:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__RightHandSeverTimeLeft>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RightHandSeverTimeLeft_g____getter_14_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x3e3ecb0

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__RightHandSeverTimeLeft>g____getter_14_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     ((__i->fields).Shifter != (Characters_WallColossalShifter_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__RightHandSeverTimeLeft>g____setter|14_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RightHandSeverTimeLeft_g____setter_14_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e3ecf0

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__RightHandSeverTimeLeft>g____setter_14_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_05702e51 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e51 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto LAB_03e3ed8a;
        (pCVar1->fields).WarningSteamTime = fVar3;
      }
      return;
    }
  }
LAB_03e3ed8a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__StunDuration>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__StunDuration_g____getter_15_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x3e3ed90

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__StunDuration>g____getter_15_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     ((__i->fields).Shifter != (Characters_WallColossalShifter_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__StunDuration>g____setter|15_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__StunDuration_g____setter_15_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e3edd0

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__StunDuration>g____setter_15_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_05702e52 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e52 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto LAB_03e3ee6a;
        (pCVar1->fields).SteamDamagePerSecond = (int32_t)fVar3;
      }
      return;
    }
  }
LAB_03e3ee6a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__StunTimeLeft>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__StunTimeLeft_g____getter_16_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x3e3ee70

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__StunTimeLeft>g____getter_16_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     ((__i->fields).Shifter != (Characters_WallColossalShifter_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__StunTimeLeft>g____setter|16_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__StunTimeLeft_g____setter_16_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e3eeb0

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__StunTimeLeft>g____setter_16_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_05702e53 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e53 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto LAB_03e3ef4a;
        (pCVar1->fields).MaxLeftHandHealth = (int32_t)fVar3;
      }
      return;
    }
  }
LAB_03e3ef4a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__RecoveryDuration>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RecoveryDuration_g____getter_17_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x3e3ef50

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__RecoveryDuration>g____getter_17_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     ((__i->fields).Shifter != (Characters_WallColossalShifter_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__RecoveryDuration>g____setter|17_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RecoveryDuration_g____setter_17_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e3ef90

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__RecoveryDuration>g____setter_17_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_05702e54 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e54 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto LAB_03e3f02a;
        (pCVar1->fields).CurrentLeftHandHealth = (int32_t)fVar3;
      }
      return;
    }
  }
LAB_03e3f02a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__RecoveryTimeLeft>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RecoveryTimeLeft_g____getter_18_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x3e3f030

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__RecoveryTimeLeft>g____getter_18_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     ((__i->fields).Shifter != (Characters_WallColossalShifter_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__RecoveryTimeLeft>g____setter|18_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RecoveryTimeLeft_g____setter_18_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e3f070

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__RecoveryTimeLeft>g____setter_18_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_05702e55 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e55 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto LAB_03e3f10a;
        (pCVar1->fields).CurrentRightHandHealth = (int32_t)fVar3;
      }
      return;
    }
  }
LAB_03e3f10a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__StunState>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__StunState_g____getter_19_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x3e3f110

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__StunState>g____getter_19_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  System_String_o *pSVar2;
  System_Enum_o local_20;
  float local_10;
  
  if (__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) {
    if (DAT_05702e2b == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_ColossalStunState);
      DAT_05702e2b = '\x01';
    }
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      local_10 = (pCVar1->fields)._steamDamageTimeLeft;
      local_20.klass = TypeInfo_ColossalStunState;
      local_20.monitor = (void *)0xffffffffffffffff;
      pSVar2 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
      return (Il2CppObject *)pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__WallAttackCooldown>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__WallAttackCooldown_g____getter_20_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x3e3f180

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__WallAttackCooldown>g____getter_20_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     ((__i->fields).Controller != (Controllers_WallColossalAIController_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__WallAttackCooldown>g____setter|20_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__WallAttackCooldown_g____setter_20_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e3f1c0

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__WallAttackCooldown>g____setter_20_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  Controllers_WallColossalAIController_o *pCVar1;
  float fVar2;
  
  if (DAT_05702e56 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e56 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Controller, pCVar1 != (Controllers_WallColossalAIController_o *)0x0)) {
    *(float *)((long)&(pCVar1->fields).LeftHandedAttacks + 4) = fVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__WallAttackCooldownLeft>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__WallAttackCooldownLeft_g____getter_21_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x3e3f240

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__WallAttackCooldownLeft>g____getter_21_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     ((__i->fields).Controller != (Controllers_WallColossalAIController_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__WallAttackCooldownLeft>g____setter|21_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__WallAttackCooldownLeft_g____setter_21_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e3f280

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__WallAttackCooldownLeft>g____setter_21_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  Controllers_WallColossalAIController_o *pCVar1;
  float fVar2;
  
  if (DAT_05702e57 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702e57 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Controller, pCVar1 != (Controllers_WallColossalAIController_o *)0x0)) {
    *(float *)&(pCVar1->fields).LeftHandedAttacks = fVar2;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__SteamState>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__SteamState_g____getter_22_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x3e3f300

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings__<__CreatePropertyBinding__SteamState>g____getter_22_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     ((__i->fields).Shifter != (Characters_WallColossalShifter_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin___ctor (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, Characters_WallColossalShifter_o* shifter, const MethodInfo* method);
// 0x3e301e0

void CustomLogic_CustomLogicWallColossalBuiltin___ctor
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,
               Characters_WallColossalShifter_o *shifter,MethodInfo *method)

{
  Controllers_BaseTitanAIController_o *pCVar1;
  Controllers_WallColossalAIController_o *pCVar2;
  
  if (DAT_05702e2a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_WallColossalAIController_GetComponent_WallColoss);
    DAT_05702e2a = '\x01';
  }
  if (DAT_05702d5d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseTitanAIController_GetComponent_BaseTitanAICo);
    DAT_05702d5d = '\x01';
  }
  CustomLogic_CustomLogicCharacterBuiltin___ctor
            ((CustomLogic_CustomLogicCharacterBuiltin_o *)__this,
             (Characters_BaseCharacter_o *)shifter,(MethodInfo *)0x0);
  (__this->fields).Shifter = (Characters_BaseShifter_o *)shifter;
  il2cpp_runtime_glue(&(__this->fields).Shifter,shifter);
  if (shifter != (Characters_WallColossalShifter_o *)0x0) {
    pCVar1 = (Controllers_BaseTitanAIController_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)shifter,MethodInfo_BaseTitanAIController_GetComponent_BaseTitanAICo);
    (__this->fields).Controller = pCVar1;
    il2cpp_runtime_glue(&(__this->fields).Controller,pCVar1);
    (__this->fields).Shifter = shifter;
    il2cpp_runtime_glue(&(__this->fields).Shifter,shifter);
    pCVar2 = (Controllers_WallColossalAIController_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)shifter,MethodInfo_WallColossalAIController_GetComponent_WallColoss);
    (__this->fields).Controller = pCVar2;
    il2cpp_runtime_glue(&(__this->fields).Controller,pCVar2);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_HandHealth
// il2cpp: int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_HandHealth (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x3e3b780

int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_HandHealth
                  (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    return (*(int *)&(pCVar1->fields).ColossalAnimations +
           *(int *)((long)&(pCVar1->fields).ColossalCache + 4)) / 2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_HandHealth
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_HandHealth (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3e3b7b0

void CustomLogic_CustomLogicWallColossalBuiltin__set_HandHealth
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,int32_t value,
               MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_MaxHandHealth
// il2cpp: int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_MaxHandHealth (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x3e3b810

int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_MaxHandHealth
                  (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    return (*(int *)&(pCVar1->fields).ColossalCache +
           *(int *)((long)&(pCVar1->fields)._customSkinLoader + 4)) / 2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_MaxHandHealth
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_MaxHandHealth (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3e3b840

void CustomLogic_CustomLogicWallColossalBuiltin__set_MaxHandHealth
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,int32_t value,
               MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
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
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_LeftHandHealth
// il2cpp: int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_LeftHandHealth (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x3e3b8a0

int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_LeftHandHealth
                  (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    return *(int32_t *)((long)&(pCVar1->fields).ColossalCache + 4);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_LeftHandHealth
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_LeftHandHealth (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3e3b8c0

void CustomLogic_CustomLogicWallColossalBuiltin__set_LeftHandHealth
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,int32_t value,
               MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      Characters_WallColossalShifter__SetCurrentLeftHandHealth(pCVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_MaxLeftHandHealth
// il2cpp: int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_MaxLeftHandHealth (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x3e3b900

int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_MaxLeftHandHealth
                  (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    return *(int32_t *)((long)&(pCVar1->fields)._customSkinLoader + 4);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_MaxLeftHandHealth
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_MaxLeftHandHealth (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3e3b920

void CustomLogic_CustomLogicWallColossalBuiltin__set_MaxLeftHandHealth
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,int32_t value,
               MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      Characters_WallColossalShifter__SetMaxLeftHandHealth(pCVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_RightHandHealth
// il2cpp: int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_RightHandHealth (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x3e3b960

int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_RightHandHealth
                  (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    return *(int32_t *)&(pCVar1->fields).ColossalAnimations;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_RightHandHealth
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_RightHandHealth (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3e3b980

void CustomLogic_CustomLogicWallColossalBuiltin__set_RightHandHealth
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,int32_t value,
               MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      Characters_WallColossalShifter__SetCurrentRightHandHealth(pCVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_MaxRightHandHealth
// il2cpp: int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_MaxRightHandHealth (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x3e3b9c0

int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_MaxRightHandHealth
                  (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    return *(int32_t *)&(pCVar1->fields).ColossalCache;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_MaxRightHandHealth
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_MaxRightHandHealth (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x3e3b9e0

void CustomLogic_CustomLogicWallColossalBuiltin__set_MaxRightHandHealth
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,int32_t value,
               MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      Characters_WallColossalShifter__SetMaxRightHandHealth(pCVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_CanDamageLeftHand
// il2cpp: bool CustomLogic_CustomLogicWallColossalBuiltin__get_CanDamageLeftHand (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x3e3ba20

bool_conflict
CustomLogic_CustomLogicWallColossalBuiltin__get_CanDamageLeftHand
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pCVar1 >> 8),
                    *(undefined1 *)((long)&(pCVar1->fields).ColossalAnimations + 4));
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_CanDamageLeftHand
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_CanDamageLeftHand (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3e3ba40

void CustomLogic_CustomLogicWallColossalBuiltin__set_CanDamageLeftHand
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto LAB_03e3ba73;
      *(char *)((long)&(pCVar1->fields).ColossalAnimations + 4) = (char)value;
    }
    return;
  }
LAB_03e3ba73:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_CanDamageRightHand
// il2cpp: bool CustomLogic_CustomLogicWallColossalBuiltin__get_CanDamageRightHand (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x3e3ba80

bool_conflict
CustomLogic_CustomLogicWallColossalBuiltin__get_CanDamageRightHand
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pCVar1 >> 8),
                    *(undefined1 *)((long)&(pCVar1->fields).ColossalAnimations + 5));
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_CanDamageRightHand
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_CanDamageRightHand (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3e3baa0

void CustomLogic_CustomLogicWallColossalBuiltin__set_CanDamageRightHand
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto LAB_03e3bad3;
      *(char *)((long)&(pCVar1->fields).ColossalAnimations + 5) = (char)value;
    }
    return;
  }
LAB_03e3bad3:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_LeftHandState
// il2cpp: int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_LeftHandState (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x3e3bae0

int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_LeftHandState
                  (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    return (int32_t)(pCVar1->fields)._steamTimeLeft;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_RightHandState
// il2cpp: int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_RightHandState (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x3e3bb00

int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_RightHandState
                  (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    return (int32_t)(pCVar1->fields)._steamBlowAwayTimeLeft;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_HandSeverWindow
// il2cpp: float CustomLogic_CustomLogicWallColossalBuiltin__get_HandSeverWindow (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x3e3bb20

float CustomLogic_CustomLogicWallColossalBuiltin__get_HandSeverWindow
                (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    return (pCVar1->fields).SteamDamageInterval;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_HandSeverWindow
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_HandSeverWindow (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e3bb40

void CustomLogic_CustomLogicWallColossalBuiltin__set_HandSeverWindow
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto LAB_03e3bb7f;
      (pCVar1->fields).SteamDamageInterval = value;
    }
    return;
  }
LAB_03e3bb7f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_LeftHandSeverTimeLeft
// il2cpp: float CustomLogic_CustomLogicWallColossalBuiltin__get_LeftHandSeverTimeLeft (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x3e3bb90

float CustomLogic_CustomLogicWallColossalBuiltin__get_LeftHandSeverTimeLeft
                (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    return (float)(pCVar1->fields)._steamState;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_LeftHandSeverTimeLeft
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_LeftHandSeverTimeLeft (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e3bbb0

void CustomLogic_CustomLogicWallColossalBuiltin__set_LeftHandSeverTimeLeft
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto LAB_03e3bbef;
      (pCVar1->fields)._steamState = (int32_t)value;
    }
    return;
  }
LAB_03e3bbef:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_RightHandSeverTimeLeft
// il2cpp: float CustomLogic_CustomLogicWallColossalBuiltin__get_RightHandSeverTimeLeft (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x3e3bc00

float CustomLogic_CustomLogicWallColossalBuiltin__get_RightHandSeverTimeLeft
                (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    return (pCVar1->fields).WarningSteamTime;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_RightHandSeverTimeLeft
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_RightHandSeverTimeLeft (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e3bc20

void CustomLogic_CustomLogicWallColossalBuiltin__set_RightHandSeverTimeLeft
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto LAB_03e3bc5f;
      (pCVar1->fields).WarningSteamTime = value;
    }
    return;
  }
LAB_03e3bc5f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_StunDuration
// il2cpp: float CustomLogic_CustomLogicWallColossalBuiltin__get_StunDuration (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x3e3bc70

float CustomLogic_CustomLogicWallColossalBuiltin__get_StunDuration
                (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    return (float)(pCVar1->fields).SteamDamagePerSecond;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_StunDuration
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_StunDuration (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e3bc90

void CustomLogic_CustomLogicWallColossalBuiltin__set_StunDuration
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto LAB_03e3bccf;
      (pCVar1->fields).SteamDamagePerSecond = (int32_t)value;
    }
    return;
  }
LAB_03e3bccf:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_StunTimeLeft
// il2cpp: float CustomLogic_CustomLogicWallColossalBuiltin__get_StunTimeLeft (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x3e3bce0

float CustomLogic_CustomLogicWallColossalBuiltin__get_StunTimeLeft
                (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    return (float)(pCVar1->fields).MaxLeftHandHealth;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_StunTimeLeft
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_StunTimeLeft (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e3bd00

void CustomLogic_CustomLogicWallColossalBuiltin__set_StunTimeLeft
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto LAB_03e3bd3f;
      (pCVar1->fields).MaxLeftHandHealth = (int32_t)value;
    }
    return;
  }
LAB_03e3bd3f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_RecoveryDuration
// il2cpp: float CustomLogic_CustomLogicWallColossalBuiltin__get_RecoveryDuration (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x3e3bd50

float CustomLogic_CustomLogicWallColossalBuiltin__get_RecoveryDuration
                (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    return (float)(pCVar1->fields).CurrentLeftHandHealth;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_RecoveryDuration
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_RecoveryDuration (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e3bd70

void CustomLogic_CustomLogicWallColossalBuiltin__set_RecoveryDuration
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto LAB_03e3bdaf;
      (pCVar1->fields).CurrentLeftHandHealth = (int32_t)value;
    }
    return;
  }
LAB_03e3bdaf:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_RecoveryTimeLeft
// il2cpp: float CustomLogic_CustomLogicWallColossalBuiltin__get_RecoveryTimeLeft (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x3e3bdc0

float CustomLogic_CustomLogicWallColossalBuiltin__get_RecoveryTimeLeft
                (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    return (float)(pCVar1->fields).CurrentRightHandHealth;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_RecoveryTimeLeft
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_RecoveryTimeLeft (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e3bde0

void CustomLogic_CustomLogicWallColossalBuiltin__set_RecoveryTimeLeft
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto LAB_03e3be1f;
      (pCVar1->fields).CurrentRightHandHealth = (int32_t)value;
    }
    return;
  }
LAB_03e3be1f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_StunState
// il2cpp: System_String_o* CustomLogic_CustomLogicWallColossalBuiltin__get_StunState (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x3e3be30

System_String_o *
CustomLogic_CustomLogicWallColossalBuiltin__get_StunState
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  System_String_o *pSVar2;
  System_Enum_o local_20;
  float local_10;
  
  if (DAT_05702e2b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ColossalStunState);
    DAT_05702e2b = '\x01';
  }
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    local_10 = (pCVar1->fields)._steamDamageTimeLeft;
    local_20.klass = TypeInfo_ColossalStunState;
    local_20.monitor = (void *)0xffffffffffffffff;
    pSVar2 = System_Enum__ToString(&local_20,(MethodInfo *)0x0);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_WallAttackCooldown
// il2cpp: float CustomLogic_CustomLogicWallColossalBuiltin__get_WallAttackCooldown (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x3e3bea0

float CustomLogic_CustomLogicWallColossalBuiltin__get_WallAttackCooldown
                (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Controllers_WallColossalAIController_o *pCVar1;
  
  pCVar1 = (__this->fields).Controller;
  if (pCVar1 != (Controllers_WallColossalAIController_o *)0x0) {
    return *(float *)((long)&(pCVar1->fields).LeftHandedAttacks + 4);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_WallAttackCooldown
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_WallAttackCooldown (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e3bec0

void CustomLogic_CustomLogicWallColossalBuiltin__set_WallAttackCooldown
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,float value,MethodInfo *method)

{
  Controllers_WallColossalAIController_o *pCVar1;
  
  pCVar1 = (__this->fields).Controller;
  if (pCVar1 != (Controllers_WallColossalAIController_o *)0x0) {
    *(float *)((long)&(pCVar1->fields).LeftHandedAttacks + 4) = value;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_WallAttackCooldownLeft
// il2cpp: float CustomLogic_CustomLogicWallColossalBuiltin__get_WallAttackCooldownLeft (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x3e3bee0

float CustomLogic_CustomLogicWallColossalBuiltin__get_WallAttackCooldownLeft
                (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Controllers_WallColossalAIController_o *pCVar1;
  
  pCVar1 = (__this->fields).Controller;
  if (pCVar1 != (Controllers_WallColossalAIController_o *)0x0) {
    return *(float *)&(pCVar1->fields).LeftHandedAttacks;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_WallAttackCooldownLeft
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_WallAttackCooldownLeft (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e3bf00

void CustomLogic_CustomLogicWallColossalBuiltin__set_WallAttackCooldownLeft
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,float value,MethodInfo *method)

{
  Controllers_WallColossalAIController_o *pCVar1;
  
  pCVar1 = (__this->fields).Controller;
  if (pCVar1 != (Controllers_WallColossalAIController_o *)0x0) {
    *(float *)&(pCVar1->fields).LeftHandedAttacks = value;
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_SteamState
// il2cpp: int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_SteamState (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x3e3bf20

int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_SteamState
                  (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    return *(int32_t *)((long)&(pCVar1->fields).PreviousHumanWeapon + 4);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$AttackSteam
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__AttackSteam (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x3e3bf40

void CustomLogic_CustomLogicWallColossalBuiltin__AttackSteam
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto LAB_03e3bf71;
      if (*(char *)&(pCVar1->fields).FeedVictimName == '\0') {
        Characters_WallColossalShifter__SteamAttack(pCVar1,(MethodInfo *)0x0);
        return;
      }
    }
    return;
  }
LAB_03e3bf71:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$StopSteam
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__StopSteam (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x3e3bf80

void CustomLogic_CustomLogicWallColossalBuiltin__StopSteam
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto LAB_03e3bfb1;
      if (*(char *)&(pCVar1->fields).FeedVictimName == '\0') {
        Characters_WallColossalShifter__StopSteam(pCVar1,(MethodInfo *)0x0);
        return;
      }
    }
    return;
  }
LAB_03e3bfb1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$WallAttack
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__WallAttack (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x3e3bfc0

void CustomLogic_CustomLogicWallColossalBuiltin__WallAttack
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  Controllers_WallColossalAIController_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
      if (*(char *)&(pCVar1->fields).FeedVictimName != '\0') {
        return;
      }
      if ((char)(pCVar1->fields).CustomDamage == '\0') {
        return;
      }
      __this_00 = (__this->fields).Controller;
      if (__this_00 != (Controllers_WallColossalAIController_o *)0x0) {
        Controllers_WallColossalAIController__WallAttack(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicWallColossalBuiltin__get_ClassName (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x3e3c010

System_String_o *
CustomLogic_CustomLogicWallColossalBuiltin__get_ClassName
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05702e2c == '\0') {
    il2cpp_init_method_metadata(&"WallColossal");
    DAT_05702e2c = '\x01';
  }
  return "WallColossal";
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicWallColossalBuiltin__get_IsAbstract (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x3e3c040

bool_conflict
CustomLogic_CustomLogicWallColossalBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicWallColossalBuiltin__get_IsStatic (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x3e3c050

bool_conflict
CustomLogic_CustomLogicWallColossalBuiltin__get_IsStatic
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicWallColossalBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x3e3c060

bool_conflict
CustomLogic_CustomLogicWallColossalBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


