// Type: CustomLogic.CustomLogicTitanBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicTitanBuiltin.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Builtin/CustomLogicTitanBuiltin.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicTitanBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTitanBuiltin_o* CustomLogic_CustomLogicTitanBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e30470

CustomLogic_CustomLogicTitanBuiltin_o *
CustomLogic_CustomLogicTitanBuiltin_Factory__CreateInstance
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
  str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicTitanBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
  pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
  System_ArgumentException___ctor(__this,pSVar1,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicTitanBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar2);
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3e349c0

void CustomLogic_CustomLogicTitanBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05702dd9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702dd9 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3e34a30

void CustomLogic_CustomLogicTitanBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings.<>c$$<__CreateMethodBinding__MoveTo>b__28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings___c_____CreateMethodBinding__MoveTo_b__28_0 (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTitanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e34a40

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_<>c__<__CreateMethodBinding__MoveTo>b__28_0
          (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTitanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  uint uVar1;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  float range;
  
  if (DAT_05702dda == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702dda = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      position = (CustomLogic_CustomLogicVector3Builtin_o *)
                 CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
      if (1 < (uint)__a->max_length) {
        range = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__a->m_Items[1],MethodInfo_Single_ConvertTo_Single);
        if (2 < (uint)__a->max_length) {
          uVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__a->m_Items[2],MethodInfo_Boolean_ConvertTo_Boolean);
          if (__c != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
            CustomLogic_CustomLogicTitanBuiltin__MoveTo(__c,position,range,uVar1 & 0xff,method);
            return (Il2CppObject *)0x0;
          }
          goto LAB_03e34b35;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03e34b35:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Target>b__29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings___c_____CreateMethodBinding__Target_b__29_0 (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTitanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e34b40

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_<>c__<__CreateMethodBinding__Target>b__29_0
          (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTitanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *enemyObj;
  Il2CppObject *obj;
  MethodInfo *method_00;
  float focus;
  
  if (DAT_05702ddb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702ddb = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    iVar1 = (int)__a->max_length;
    if ((iVar1 == 0) || (iVar1 == 1)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    enemyObj = __a->m_Items[0];
    obj = __a->m_Items[1];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    focus = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if (__c != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicTitanBuiltin__Target(__c,enemyObj,focus,method_00);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetTarget>b__30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings___c_____CreateMethodBinding__GetTarget_b__30_0 (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTitanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e34be0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_<>c__<__CreateMethodBinding__GetTarget>b__30_0
          (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTitanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__c != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    pIVar1 = CustomLogic_CustomLogicTitanBuiltin__GetTarget(__c,(MethodInfo *)__c);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Idle>b__31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings___c_____CreateMethodBinding__Idle_b__31_0 (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTitanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e34c00

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_<>c__<__CreateMethodBinding__Idle>b__31_0
          (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTitanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *__this_00;
  bool_conflict bVar2;
  float time;
  
  if (DAT_05702ddc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702ddc = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    time = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if ((__c != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
       (pCVar1 = (__c->fields).Titan, pCVar1 != (Characters_BasicTitan_o *)0x0)) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__c->fields).Titan;
        if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e34cc7;
        if ((*(char *)&(pCVar1->fields).FeedVictimName == '\0') &&
           ((char)(pCVar1->fields).CustomDamage != '\0')) {
          __this_00 = (__c->fields).Controller;
          if (__this_00 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e34cc7;
          Controllers_BaseTitanAIController__ForceIdle(__this_00,time,(MethodInfo *)0x0);
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
LAB_03e34cc7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Wander>b__32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings___c_____CreateMethodBinding__Wander_b__32_0 (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTitanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e34ce0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_<>c__<__CreateMethodBinding__Wander>b__32_0
          (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTitanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *__this_00;
  bool_conflict bVar2;
  
  if ((__c != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
     (pCVar1 = (__c->fields).Titan, pCVar1 != (Characters_BasicTitan_o *)0x0)) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__c->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e34d26;
      if ((*(char *)&(pCVar1->fields).FeedVictimName == '\0') &&
         ((char)(pCVar1->fields).CustomDamage != '\0')) {
        __this_00 = (__c->fields).Controller;
        if (__this_00 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e34d26;
        Controllers_BaseTitanAIController__CancelOrder(__this_00,(MethodInfo *)0x0);
      }
    }
    return (Il2CppObject *)0x0;
  }
LAB_03e34d26:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Blind>b__33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings___c_____CreateMethodBinding__Blind_b__33_0 (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTitanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e34d30

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_<>c__<__CreateMethodBinding__Blind>b__33_0
          (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTitanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool_conflict bVar2;
  
  if ((__c != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
     (pCVar1 = (__c->fields).Titan,
     __this = (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o *)0x0,
     pCVar1 != (Characters_BasicTitan_o *)0x0)) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__c->fields).Titan;
      __this = (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o *)0x0;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e34d74;
      if (*(char *)&(pCVar1->fields).FeedVictimName == '\0') {
        (*(pCVar1->klass->vtable)._144_Blind.methodPtr)
                  (pCVar1,(pCVar1->klass->vtable)._144_Blind.method);
        return (Il2CppObject *)0x0;
      }
    }
    return (Il2CppObject *)0x0;
  }
LAB_03e34d74:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Cripple>b__34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings___c_____CreateMethodBinding__Cripple_b__34_0 (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTitanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e34d80

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_<>c__<__CreateMethodBinding__Cripple>b__34_0
          (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTitanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Characters_BasicTitan_o *pCVar1;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_05702ddd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702ddd = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(obj,MethodInfo_Single_ConvertTo_Single);
    if ((__c != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
       (pCVar1 = (__c->fields).Titan, pCVar1 != (Characters_BasicTitan_o *)0x0)) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__c->fields).Titan;
        if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e34e41;
        if (*(char *)&(pCVar1->fields).FeedVictimName == '\0') {
          (*(pCVar1->klass->vtable)._145_Cripple.methodPtr)
                    (fVar3,pCVar1,(pCVar1->klass->vtable)._145_Cripple.method);
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
LAB_03e34e41:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTitanBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e30500

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTitanBuiltin_Bindings__CreateMemberBinding
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
  
  if (DAT_05702da2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"FocusTime");
    il2cpp_init_method_metadata(&"AttackPause");
    il2cpp_init_method_metadata(&"RunSpeedPerLevel");
    il2cpp_init_method_metadata(&"WalkSpeedBase");
    il2cpp_init_method_metadata(&"ActionPause");
    il2cpp_init_method_metadata(&"WalkSpeedPerLevel");
    il2cpp_init_method_metadata(&"AttackWait");
    il2cpp_init_method_metadata(&"Cripple");
    il2cpp_init_method_metadata(&"DetectRange");
    il2cpp_init_method_metadata(&"Target");
    il2cpp_init_method_metadata(&"Blind");
    il2cpp_init_method_metadata(&"AttackSpeedMultiplier");
    il2cpp_init_method_metadata(&"MoveTo");
    il2cpp_init_method_metadata(&"UsePathfinding");
    il2cpp_init_method_metadata(&"State");
    il2cpp_init_method_metadata(&"MaxStamina");
    il2cpp_init_method_metadata(&"Stamina");
    il2cpp_init_method_metadata(&"IsCrawler");
    il2cpp_init_method_metadata(&"NeckMount");
    il2cpp_init_method_metadata(&"HeadMount");
    il2cpp_init_method_metadata(&"NapePosition");
    il2cpp_init_method_metadata(&"FocusRange");
    il2cpp_init_method_metadata(&"RunSpeedBase");
    il2cpp_init_method_metadata(&"Idle");
    il2cpp_init_method_metadata(&"Size");
    il2cpp_init_method_metadata(&"JumpForce");
    il2cpp_init_method_metadata(&"RotateSpeed");
    il2cpp_init_method_metadata(&"Wander");
    il2cpp_init_method_metadata(&"FarAttackCooldown");
    il2cpp_init_method_metadata(&"CanRun");
    il2cpp_init_method_metadata(&"TurnPause");
    il2cpp_init_method_metadata(&"TurnSpeed");
    il2cpp_init_method_metadata(&"GetTarget");
    DAT_05702da2 = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x8dc5a9a4) {
    if (uVar3 < 0x3da81e8e) {
      if (uVar3 < 0x1deca497) {
        if (uVar3 < 0x17a0b8d7) {
          if (uVar3 == 0x7186f3c) {
            bVar4 = System_String__op_Equality(name,"NapePosition",(MethodInfo *)0x0);
            if ((char)bVar4 != '\0') {
              if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
                il2cpp_init_class();
              }
              if (DAT_05702db0 == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__NapePosition_g);
                il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
                il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
                DAT_05702db0 = '\x01';
              }
              pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
              System_Func<object__object>___ctor();
              pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
              CustomLogic_CLPropertyBinding<object>___ctor
                        (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
              return (CustomLogic_ICLMemberBinding_o *)pCVar9;
            }
          }
          else if ((uVar3 == 0x17a0b8d6) &&
                  (bVar4 = System_String__op_Equality(name,"Stamina",(MethodInfo *)0x0),
                  (char)bVar4 != '\0')) {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702dae == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Stamina_g____ge);
              il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Stamina_g____sett);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
              DAT_05702dae = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
            System_Func<object__object>___ctor();
            pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
            System_Action<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if (uVar3 == 0x1d46812f) {
          bVar4 = System_String__op_Equality(name,"AttackSpeedMultiplier",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702db9 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSpeedMult);
              il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__AttackSpeedMultip);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
              DAT_05702db9 = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
            System_Func<object__object>___ctor();
            pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
            System_Action<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if ((uVar3 == 0x1deca496) &&
                (bVar4 = System_String__op_Equality(name,"State",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702db2 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__State_g____gett);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
            DAT_05702db2 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 < 0x2ae002cd) {
        if (uVar3 == 0x246c98e0) {
          bVar4 = System_String__op_Equality(name,"RunSpeedBase",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702da4 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RunSpeedBase_g);
              il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__RunSpeedBase_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
              DAT_05702da4 = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
            System_Func<object__object>___ctor();
            pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
            System_Action<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if ((uVar3 == 0x2ae002cc) &&
                (bVar4 = System_String__op_Equality(name,"JumpForce",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702daa == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__JumpForce_g);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__JumpForce_g____se);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
            DAT_05702daa = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0x320c401f) {
        bVar4 = System_String__op_Equality(name,"ActionPause",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702dab == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ActionPause_g);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ActionPause_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
            DAT_05702dab = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0x3da81e8d) &&
              (bVar4 = System_String__op_Equality(name,"RotateSpeed",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702da9 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RotateSpeed_g);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__RotateSpeed_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
          DAT_05702da9 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 < 0x6709f835) {
      if (uVar3 < 0x46b92be9) {
        if (uVar3 == 0x45aa17b3) {
          bVar4 = System_String__op_Equality(name,"Idle",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702dc0 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTitanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTitanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object____object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Idle_b__31_0);
              il2cpp_init_method_metadata(&TypeInfo_c);
              DAT_05702dc0 = '\x01';
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            else {
              iVar1 = *(int *)(TypeInfo_c + 0xe4);
            }
            if (iVar1 == 0) {
              il2cpp_init_class();
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x20);
            }
            else {
              pSVar10 = *(System_Func_T__object____object__o **)
                         (*(long *)(TypeInfo_c + 0xb8) + 0x20);
            }
            if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
              if (*(int *)(TypeInfo_c + 0xe4) == 0) {
                il2cpp_init_class();
              }
              pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object____object);
              System_Func<object__object__object>___ctor();
              lVar2 = *(long *)(TypeInfo_c + 0xb8);
              *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar10;
              il2cpp_runtime_glue(lVar2 + 0x20,pSVar10);
            }
            pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTitanBuiltin);
            CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicTitanBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar11;
          }
        }
        else if ((uVar3 == 0x46b92be8) &&
                (bVar4 = System_String__op_Equality(name,"FocusRange",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702db4 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FocusRange_g);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__FocusRange_g____s);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
            DAT_05702db4 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0x5318941f) {
        bVar4 = System_String__op_Equality(name,"DetectRange",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702db3 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DetectRange_g);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__DetectRange_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
            DAT_05702db3 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0x6709f834) &&
              (bVar4 = System_String__op_Equality(name,"Wander",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702dc1 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTitanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTitanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Wander_b__32_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702dc1 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x28,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTitanBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicTitanBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 < 0x6fd42729) {
      if (uVar3 == 0x69ba519b) {
        bVar4 = System_String__op_Equality(name,"FarAttackCooldown",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702db6 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FarAttackCooldo);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
            DAT_05702db6 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0x6fd42728) &&
              (bVar4 = System_String__op_Equality(name,"WalkSpeedPerLevel",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702da6 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__WalkSpeedPerLev);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__WalkSpeedPerLevel);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
          DAT_05702da6 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0x8b67f168) {
      bVar4 = System_String__op_Equality(name,"Target",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702dbe == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTitanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTitanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Target_b__29_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702dbe = '\x01';
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x10,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTitanBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicTitanBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if ((uVar3 == 0x8dc5a9a3) &&
            (bVar4 = System_String__op_Equality(name,"NeckMount",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702dbc == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__NeckMount_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
        DAT_05702dbc = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
      System_Func<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 < 0xbfccc708) {
    if (uVar3 < 0xab8d157b) {
      if (uVar3 < 0x9891bf89) {
        if (uVar3 == 0x90cf188a) {
          bVar4 = System_String__op_Equality(name,"FocusTime",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702db5 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FocusTime_g);
              il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__FocusTime_g____se);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
              DAT_05702db5 = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
            System_Func<object__object>___ctor();
            pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
            System_Action<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if ((uVar3 == 0x9891bf88) &&
                (bVar4 = System_String__op_Equality(name,"AttackWait",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702db7 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackWait_g);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__AttackWait_g____s);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
            DAT_05702db7 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0xa6478e7c) {
        bVar4 = System_String__op_Equality(name,"Size",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702da3 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Size_g____gette);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Size_g____setter);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
            DAT_05702da3 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0xab8d157a) &&
              (bVar4 = System_String__op_Equality(name,"MaxStamina",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702daf == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MaxStamina_g);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__MaxStamina_g____s);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
          DAT_05702daf = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 < 0xb5f3afde) {
      if (uVar3 == 0xb20fe4aa) {
        bVar4 = System_String__op_Equality(name,"CanRun",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702db8 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CanRun_g____get);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__CanRun_g____sette);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
            DAT_05702db8 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0xb5f3afdd) &&
              (bVar4 = System_String__op_Equality(name,"TurnSpeed",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702da8 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TurnSpeed_g);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__TurnSpeed_g____se);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
          DAT_05702da8 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0xbb10b4ac) {
      bVar4 = System_String__op_Equality(name,"HeadMount",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702dbb == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HeadMount_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
          DAT_05702dbb = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0xbfccc707) &&
            (bVar4 = System_String__op_Equality(name,"IsCrawler",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702db1 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsCrawler_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
        DAT_05702db1 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
      System_Func<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 < 0xe4d66f55) {
    if (uVar3 < 0xd0d86e03) {
      if (uVar3 == 0xc746e5f5) {
        bVar4 = System_String__op_Equality(name,"AttackPause",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702dac == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackPause_g);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__AttackPause_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
            DAT_05702dac = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0xd0d86e02) &&
              (bVar4 = System_String__op_Equality(name,"RunSpeedPerLevel",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702da7 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RunSpeedPerLeve);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__RunSpeedPerLevel);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
          DAT_05702da7 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0xd2528dac) {
      bVar4 = System_String__op_Equality(name,"TurnPause",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702dad == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TurnPause_g);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__TurnPause_g____se);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
          DAT_05702dad = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0xe4d66f54) &&
            (bVar4 = System_String__op_Equality(name,"Blind",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702dc2 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTitanBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTitanBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Blind_b__33_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702dc2 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
      }
      else {
        pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
      }
      if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x30,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTitanBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicTitanBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 < 0xe9a6b9e9) {
    if (uVar3 == 0xe694889a) {
      bVar4 = System_String__op_Equality(name,"GetTarget",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702dbf == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTitanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTitanBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetTarget_b__30_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702dbf = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
        }
        else {
          pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
        }
        if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x18,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTitanBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicTitanBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if ((uVar3 == 0xe9a6b9e8) &&
            (bVar4 = System_String__op_Equality(name,"UsePathfinding",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702dba == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__UsePathfinding);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__UsePathfinding_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
        DAT_05702dba = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 == 0xedff5766) {
    bVar4 = System_String__op_Equality(name,"WalkSpeedBase",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702da5 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__WalkSpeedBase_g);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__WalkSpeedBase_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
        DAT_05702da5 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 == 0xf90f6b5d) {
    bVar4 = System_String__op_Equality(name,"MoveTo",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702dbd == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTitanBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTitanBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MoveTo_b__28_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702dbd = '\x01';
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
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 8,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTitanBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicTitanBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if ((uVar3 == 0xf96e74c8) &&
          (bVar4 = System_String__op_Equality(name,"Cripple",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702dc3 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTitanBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTitanBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object____object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Cripple_b__34_0);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_05702dc3 = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
    }
    else {
      pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
    }
    if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object____object);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar10;
      il2cpp_runtime_glue(lVar2 + 0x38,pSVar10);
    }
    pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTitanBuiltin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicTitanBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar11;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicTitanBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__Size
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__Size (const MethodInfo* method);
// 0x3e31170

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__Size(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this;
  
  if (DAT_05702da3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Size_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Size_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
    DAT_05702da3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__RunSpeedBase
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__RunSpeedBase (const MethodInfo* method);
// 0x3e31250

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__RunSpeedBase
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this;
  
  if (DAT_05702da4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RunSpeedBase_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__RunSpeedBase_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
    DAT_05702da4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__WalkSpeedBase
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__WalkSpeedBase (const MethodInfo* method);
// 0x3e31330

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__WalkSpeedBase
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this;
  
  if (DAT_05702da5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__WalkSpeedBase_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__WalkSpeedBase_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
    DAT_05702da5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__WalkSpeedPerLevel
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__WalkSpeedPerLevel (const MethodInfo* method);
// 0x3e31410

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__WalkSpeedPerLevel
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this;
  
  if (DAT_05702da6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__WalkSpeedPerLev);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__WalkSpeedPerLevel);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
    DAT_05702da6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__RunSpeedPerLevel
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__RunSpeedPerLevel (const MethodInfo* method);
// 0x3e314f0

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__RunSpeedPerLevel
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this;
  
  if (DAT_05702da7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RunSpeedPerLeve);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__RunSpeedPerLevel);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
    DAT_05702da7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__TurnSpeed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__TurnSpeed (const MethodInfo* method);
// 0x3e315d0

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__TurnSpeed(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this;
  
  if (DAT_05702da8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TurnSpeed_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__TurnSpeed_g____se);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
    DAT_05702da8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__RotateSpeed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__RotateSpeed (const MethodInfo* method);
// 0x3e316b0

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__RotateSpeed
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this;
  
  if (DAT_05702da9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RotateSpeed_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__RotateSpeed_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
    DAT_05702da9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__JumpForce
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__JumpForce (const MethodInfo* method);
// 0x3e31790

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__JumpForce(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this;
  
  if (DAT_05702daa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__JumpForce_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__JumpForce_g____se);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
    DAT_05702daa = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__ActionPause
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__ActionPause (const MethodInfo* method);
// 0x3e31870

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__ActionPause
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this;
  
  if (DAT_05702dab == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ActionPause_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ActionPause_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
    DAT_05702dab = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__AttackPause
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__AttackPause (const MethodInfo* method);
// 0x3e31950

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__AttackPause
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this;
  
  if (DAT_05702dac == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackPause_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__AttackPause_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
    DAT_05702dac = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__TurnPause
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__TurnPause (const MethodInfo* method);
// 0x3e31a30

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__TurnPause(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this;
  
  if (DAT_05702dad == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TurnPause_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__TurnPause_g____se);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
    DAT_05702dad = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__Stamina
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__Stamina (const MethodInfo* method);
// 0x3e31b10

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__Stamina(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this;
  
  if (DAT_05702dae == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Stamina_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Stamina_g____sett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
    DAT_05702dae = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__MaxStamina
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__MaxStamina (const MethodInfo* method);
// 0x3e31bf0

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__MaxStamina
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this;
  
  if (DAT_05702daf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MaxStamina_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__MaxStamina_g____s);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
    DAT_05702daf = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__NapePosition
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__NapePosition (const MethodInfo* method);
// 0x3e31cd0

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__NapePosition
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this;
  
  if (DAT_05702db0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__NapePosition_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
    DAT_05702db0 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__IsCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__IsCrawler (const MethodInfo* method);
// 0x3e31d70

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__IsCrawler(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this;
  
  if (DAT_05702db1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsCrawler_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
    DAT_05702db1 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__State
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__State (const MethodInfo* method);
// 0x3e31e10

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__State(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this;
  
  if (DAT_05702db2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__State_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
    DAT_05702db2 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__DetectRange
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__DetectRange (const MethodInfo* method);
// 0x3e31eb0

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__DetectRange
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this;
  
  if (DAT_05702db3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DetectRange_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__DetectRange_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
    DAT_05702db3 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__FocusRange
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__FocusRange (const MethodInfo* method);
// 0x3e31f90

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__FocusRange
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this;
  
  if (DAT_05702db4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FocusRange_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__FocusRange_g____s);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
    DAT_05702db4 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__FocusTime
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__FocusTime (const MethodInfo* method);
// 0x3e32070

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__FocusTime(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this;
  
  if (DAT_05702db5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FocusTime_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__FocusTime_g____se);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
    DAT_05702db5 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__FarAttackCooldown
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__FarAttackCooldown (const MethodInfo* method);
// 0x3e32150

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__FarAttackCooldown
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this;
  
  if (DAT_05702db6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FarAttackCooldo);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
    DAT_05702db6 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__AttackWait
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__AttackWait (const MethodInfo* method);
// 0x3e321f0

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__AttackWait
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this;
  
  if (DAT_05702db7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackWait_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__AttackWait_g____s);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
    DAT_05702db7 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__CanRun
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__CanRun (const MethodInfo* method);
// 0x3e322d0

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__CanRun(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this;
  
  if (DAT_05702db8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__CanRun_g____get);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__CanRun_g____sette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
    DAT_05702db8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__AttackSpeedMultiplier
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__AttackSpeedMultiplier (const MethodInfo* method);
// 0x3e323b0

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__AttackSpeedMultiplier
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this;
  
  if (DAT_05702db9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSpeedMult);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__AttackSpeedMultip);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
    DAT_05702db9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__UsePathfinding
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__UsePathfinding (const MethodInfo* method);
// 0x3e32490

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__UsePathfinding
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this;
  
  if (DAT_05702dba == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicTitanBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__UsePathfinding);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__UsePathfinding_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
    DAT_05702dba = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicTitanBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__HeadMount
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__HeadMount (const MethodInfo* method);
// 0x3e32570

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__HeadMount(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this;
  
  if (DAT_05702dbb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__HeadMount_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
    DAT_05702dbb = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__NeckMount
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__NeckMount (const MethodInfo* method);
// 0x3e32610

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__NeckMount(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this;
  
  if (DAT_05702dbc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__NeckMount_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object);
    DAT_05702dbc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicTitanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreateMethodBinding__MoveTo
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__MoveTo (const MethodInfo* method);
// 0x3e326b0

CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__MoveTo(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *__this;
  
  if (DAT_05702dbd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MoveTo_b__28_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702dbd = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicTitanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreateMethodBinding__Target
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__Target (const MethodInfo* method);
// 0x3e32800

CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__Target(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *__this;
  
  if (DAT_05702dbe == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Target_b__29_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702dbe = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicTitanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreateMethodBinding__GetTarget
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__GetTarget (const MethodInfo* method);
// 0x3e32950

CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__GetTarget(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *__this;
  
  if (DAT_05702dbf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetTarget_b__30_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702dbf = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicTitanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreateMethodBinding__Idle
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__Idle (const MethodInfo* method);
// 0x3e32aa0

CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__Idle(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *__this;
  
  if (DAT_05702dc0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Idle_b__31_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702dc0 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicTitanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreateMethodBinding__Wander
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__Wander (const MethodInfo* method);
// 0x3e32bf0

CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__Wander(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *__this;
  
  if (DAT_05702dc1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Wander_b__32_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702dc1 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_glue(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicTitanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreateMethodBinding__Blind
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__Blind (const MethodInfo* method);
// 0x3e32d40

CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__Blind(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *__this;
  
  if (DAT_05702dc2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Blind_b__33_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702dc2 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_glue(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicTitanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreateMethodBinding__Cripple
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__Cripple (const MethodInfo* method);
// 0x3e32e90

CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__Cripple(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *__this;
  
  if (DAT_05702dc3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicTitanBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Cripple_b__34_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702dc3 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x38);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicTitanBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_glue(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicTitanBuiltin);
  return __this;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3e32fe0

void CustomLogic_CustomLogicTitanBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702dc4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"FocusTime");
    il2cpp_init_method_metadata(&"AttackPause");
    il2cpp_init_method_metadata(&"RunSpeedPerLevel");
    il2cpp_init_method_metadata(&"WalkSpeedBase");
    il2cpp_init_method_metadata(&"ActionPause");
    il2cpp_init_method_metadata(&"WalkSpeedPerLevel");
    il2cpp_init_method_metadata(&"AttackWait");
    il2cpp_init_method_metadata(&"Cripple");
    il2cpp_init_method_metadata(&"DetectRange");
    il2cpp_init_method_metadata(&"Target");
    il2cpp_init_method_metadata(&"Blind");
    il2cpp_init_method_metadata(&"AttackSpeedMultiplier");
    il2cpp_init_method_metadata(&"MoveTo");
    il2cpp_init_method_metadata(&"UsePathfinding");
    il2cpp_init_method_metadata(&"State");
    il2cpp_init_method_metadata(&"MaxStamina");
    il2cpp_init_method_metadata(&"Stamina");
    il2cpp_init_method_metadata(&"IsCrawler");
    il2cpp_init_method_metadata(&"NeckMount");
    il2cpp_init_method_metadata(&"HeadMount");
    il2cpp_init_method_metadata(&"NapePosition");
    il2cpp_init_method_metadata(&"FocusRange");
    il2cpp_init_method_metadata(&"RunSpeedBase");
    il2cpp_init_method_metadata(&"Idle");
    il2cpp_init_method_metadata(&"Size");
    il2cpp_init_method_metadata(&"JumpForce");
    il2cpp_init_method_metadata(&"RotateSpeed");
    il2cpp_init_method_metadata(&"Wander");
    il2cpp_init_method_metadata(&"FarAttackCooldown");
    il2cpp_init_method_metadata(&"CanRun");
    il2cpp_init_method_metadata(&"TurnPause");
    il2cpp_init_method_metadata(&"TurnSpeed");
    il2cpp_init_method_metadata(&"GetTarget");
    DAT_05702dc4 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"Size",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RunSpeedBase",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"WalkSpeedBase",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"WalkSpeedPerLevel",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RunSpeedPerLevel",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TurnSpeed",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"RotateSpeed",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"JumpForce",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ActionPause",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackPause",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"TurnPause",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Stamina",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MaxStamina",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"NapePosition",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"IsCrawler",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"State",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"DetectRange",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FocusRange",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FocusTime",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FarAttackCooldown",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackWait",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"CanRun",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackSpeedMultiplier",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"UsePathfinding",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"HeadMount",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"NeckMount",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MoveTo",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Target",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetTarget",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Idle",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Wander",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Blind",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Cripple",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__Size>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__Size_g____getter_2_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x3e334d0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__Size>g____getter_2_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
     ((__i->fields).Titan != (Characters_BasicTitan_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__Size>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__Size_g____setter_2_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e33510

void CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__Size>g____setter_2_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool_conflict bVar2;
  float size;
  
  if (DAT_05702dc5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702dc5 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  size = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return;
      }
      pCVar1 = (__i->fields).Titan;
      if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
        Characters_BaseTitan__SetSize((Characters_BaseTitan_o *)pCVar1,size,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeedBase>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__RunSpeedBase_g____getter_3_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x3e335c0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__RunSpeedBase>g____getter_3_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
     ((__i->fields).Titan != (Characters_BasicTitan_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeedBase>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__RunSpeedBase_g____setter_3_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e33600

void CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__RunSpeedBase>g____setter_3_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_05702dc6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702dc6 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__i->fields).Titan;
        if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e3369a;
        *(float *)&(pCVar1->fields).BaseTitanAnimations = fVar3;
      }
      return;
    }
  }
LAB_03e3369a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__WalkSpeedBase>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedBase_g____getter_4_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x3e336a0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__WalkSpeedBase>g____getter_4_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
     ((__i->fields).Titan != (Characters_BasicTitan_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__WalkSpeedBase>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedBase_g____setter_4_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e336e0

void CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__WalkSpeedBase>g____setter_4_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_05702dc7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702dc7 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__i->fields).Titan;
        if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e3377a;
        *(float *)((long)&(pCVar1->fields).BaseTitanAnimations + 4) = fVar3;
      }
      return;
    }
  }
LAB_03e3377a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__WalkSpeedPerLevel>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedPerLevel_g____getter_5_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x3e33780

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__WalkSpeedPerLevel>g____getter_5_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
     ((__i->fields).Titan != (Characters_BasicTitan_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__WalkSpeedPerLevel>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedPerLevel_g____setter_5_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e337c0

void CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__WalkSpeedPerLevel>g____setter_5_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_05702dc8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702dc8 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__i->fields).Titan;
        if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e3385a;
        (pCVar1->fields).AttackSpeedMultiplier = fVar3;
      }
      return;
    }
  }
LAB_03e3385a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeedPerLevel>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__RunSpeedPerLevel_g____getter_6_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x3e33860

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__RunSpeedPerLevel>g____getter_6_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
     ((__i->fields).Titan != (Characters_BasicTitan_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeedPerLevel>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__RunSpeedPerLevel_g____setter_6_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e338a0

void CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__RunSpeedPerLevel>g____setter_6_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_05702dc9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702dc9 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__i->fields).Titan;
        if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e3393a;
        (pCVar1->fields).TitanGroundMaskLayers.fields.m_Mask = (int32_t)fVar3;
      }
      return;
    }
  }
LAB_03e3393a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__TurnSpeed>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__TurnSpeed_g____getter_7_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x3e33940

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__TurnSpeed>g____getter_7_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
     ((__i->fields).Titan != (Characters_BasicTitan_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__TurnSpeed>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__TurnSpeed_g____setter_7_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e33980

void CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__TurnSpeed>g____setter_7_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_05702dca == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702dca = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__i->fields).Titan;
        if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e33a1a;
        *(float *)&(pCVar1->fields).AttackSpeeds = fVar3;
      }
      return;
    }
  }
LAB_03e33a1a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__RotateSpeed>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__RotateSpeed_g____getter_8_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x3e33a20

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__RotateSpeed>g____getter_8_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
     ((__i->fields).Titan != (Characters_BasicTitan_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__RotateSpeed>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__RotateSpeed_g____setter_8_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e33a60

void CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__RotateSpeed>g____setter_8_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_05702dcb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702dcb = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__i->fields).Titan;
        if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e33afa;
        (pCVar1->fields).PreviousAttackSpeedMultiplier = fVar3;
      }
      return;
    }
  }
LAB_03e33afa:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__JumpForce>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__JumpForce_g____getter_9_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x3e33b00

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__JumpForce>g____getter_9_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
     ((__i->fields).Titan != (Characters_BasicTitan_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__JumpForce>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__JumpForce_g____setter_9_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e33b40

void CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__JumpForce>g____setter_9_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_05702dcc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702dcc = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__i->fields).Titan;
        if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e33bda;
        (pCVar1->fields).ConfusedTime = fVar3;
      }
      return;
    }
  }
LAB_03e33bda:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__ActionPause>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__ActionPause_g____getter_10_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x3e33be0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__ActionPause>g____getter_10_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
     ((__i->fields).Titan != (Characters_BasicTitan_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__ActionPause>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__ActionPause_g____setter_10_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e33c20

void CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__ActionPause>g____setter_10_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_05702dcd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702dcd = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__i->fields).Titan;
        if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e33cba;
        (pCVar1->fields).IsSit = (bool_conflict)fVar3;
      }
      return;
    }
  }
LAB_03e33cba:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__AttackPause>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__AttackPause_g____getter_11_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x3e33cc0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__AttackPause>g____getter_11_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
     ((__i->fields).Titan != (Characters_BasicTitan_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__AttackPause>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__AttackPause_g____setter_11_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e33d00

void CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__AttackPause>g____setter_11_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_05702dce == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702dce = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__i->fields).Titan;
        if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e33d9a;
        *(float *)&(pCVar1->fields).field_0x11c = fVar3;
      }
      return;
    }
  }
LAB_03e33d9a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__TurnPause>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__TurnPause_g____getter_12_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x3e33da0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__TurnPause>g____getter_12_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
     ((__i->fields).Titan != (Characters_BasicTitan_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__TurnPause>g____setter|12_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__TurnPause_g____setter_12_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e33de0

void CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__TurnPause>g____setter_12_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_05702dcf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702dcf = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__i->fields).Titan;
        if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e33e7a;
        *(float *)&(pCVar1->fields).HoldHuman = fVar3;
      }
      return;
    }
  }
LAB_03e33e7a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__Stamina>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__Stamina_g____getter_13_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x3e33e80

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__Stamina>g____getter_13_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
     ((__i->fields).Titan != (Characters_BasicTitan_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__Stamina>g____setter|13_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__Stamina_g____setter_13_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e33ec0

void CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__Stamina>g____setter_13_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_05702dd0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702dd0 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__i->fields).Titan;
        if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e33f5a;
        (pCVar1->fields).ClimbCooldown = fVar3;
      }
      return;
    }
  }
LAB_03e33f5a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__MaxStamina>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__MaxStamina_g____getter_14_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x3e33f60

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__MaxStamina>g____getter_14_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
     ((__i->fields).Titan != (Characters_BasicTitan_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__MaxStamina>g____setter|14_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__MaxStamina_g____setter_14_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e33fa0

void CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__MaxStamina>g____setter_14_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_05702dd1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702dd1 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__i->fields).Titan;
        if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e3403a;
        *(float *)((long)&(pCVar1->fields).HoldHuman + 4) = fVar3;
      }
      return;
    }
  }
LAB_03e3403a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__NapePosition>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__NapePosition_g____getter_15_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x3e34040

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__NapePosition>g____getter_15_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  long lVar2;
  UnityEngine_Component_o *__this;
  UnityEngine_Transform_o *__this_00;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar3;
  UnityEngine_Vector3_o v;
  
  if (__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pCVar1 = (__i->fields).Titan;
  if (((pCVar1 != (Characters_BasicTitan_o *)0x0) &&
      (lVar2 = *(long *)&(pCVar1->fields)._furthestCoreLocalPosition.fields, lVar2 != 0)) &&
     (__this = *(UnityEngine_Component_o **)(lVar2 + 0x68), __this != (UnityEngine_Component_o *)0x0
     )) {
    __this_00 = UnityEngine_Component__get_transform(__this,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_Transform_o *)0x0) {
      v = UnityEngine_Transform__get_position(__this_00,(MethodInfo *)0x0);
      pCVar3 = CustomLogic_CustomLogicVector3Builtin__op_Implicit(v,(MethodInfo *)0x0);
      return (Il2CppObject *)pCVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__IsCrawler>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__IsCrawler_g____getter_16_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x3e34060

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__IsCrawler>g____getter_16_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if ((__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
     ((__i->fields).Titan != (Characters_BasicTitan_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&uStack_1);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__State>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__State_g____getter_17_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x3e340a0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__State>g____getter_17_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  System_Type_o *enumType;
  Il2CppObject *value;
  System_String_o *pSVar1;
  undefined1 auStack_24 [4];
  
  if (__i == (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (DAT_05702d9e == '\0') {
    il2cpp_init_method_metadata(&TypeRef_TitanState);
    il2cpp_init_method_metadata(&TypeInfo_TitanState);
    DAT_05702d9e = '\x01';
  }
  handle.fields.value = TypeRef_TitanState.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((__i->fields).Titan != (Characters_BasicTitan_o *)0x0) {
    value = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_TitanState,auStack_24);
    if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = System_Enum__GetName(enumType,value,(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__DetectRange>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__DetectRange_g____getter_18_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x3e340c0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__DetectRange>g____getter_18_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  float local_c;
  
  if ((__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Titan, pCVar1 != (Characters_BasicTitan_o *)0x0)) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    local_c = 0.0;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__i->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e34122;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__i->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e34122;
        local_c = (pCVar2->fields).DetectRange;
      }
    }
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_c);
    return pIVar4;
  }
LAB_03e34122:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__DetectRange>g____setter|18_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__DetectRange_g____setter_18_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e34130

void CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__DetectRange>g____setter_18_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  float fVar4;
  
  if (DAT_05702dd2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702dd2 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Titan, pCVar1 != (Characters_BasicTitan_o *)0x0)) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__i->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e341d6;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__i->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e341d6;
        (pCVar2->fields).DetectRange = fVar4;
      }
    }
    return;
  }
LAB_03e341d6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__FocusRange>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__FocusRange_g____getter_19_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x3e341e0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__FocusRange>g____getter_19_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  float local_c;
  
  if ((__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Titan, pCVar1 != (Characters_BasicTitan_o *)0x0)) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    local_c = 0.0;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__i->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e34242;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__i->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e34242;
        local_c = (pCVar2->fields).FocusRange;
      }
    }
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_c);
    return pIVar4;
  }
LAB_03e34242:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__FocusRange>g____setter|19_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__FocusRange_g____setter_19_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e34250

void CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__FocusRange>g____setter_19_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  float fVar4;
  
  if (DAT_05702dd3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702dd3 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Titan, pCVar1 != (Characters_BasicTitan_o *)0x0)) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__i->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e342f6;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__i->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e342f6;
        (pCVar2->fields).FocusRange = fVar4;
      }
    }
    return;
  }
LAB_03e342f6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__FocusTime>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__FocusTime_g____getter_20_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x3e34300

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__FocusTime>g____getter_20_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  float local_c;
  
  if ((__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Titan, pCVar1 != (Characters_BasicTitan_o *)0x0)) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    local_c = 0.0;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__i->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e34362;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__i->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e34362;
        local_c = (pCVar2->fields).FocusTime;
      }
    }
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_c);
    return pIVar4;
  }
LAB_03e34362:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__FocusTime>g____setter|20_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__FocusTime_g____setter_20_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e34370

void CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__FocusTime>g____setter_20_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  float fVar4;
  
  if (DAT_05702dd4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702dd4 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Titan, pCVar1 != (Characters_BasicTitan_o *)0x0)) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__i->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e34416;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__i->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e34416;
        (pCVar2->fields).FocusTime = fVar4;
      }
    }
    return;
  }
LAB_03e34416:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__FarAttackCooldown>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__FarAttackCooldown_g____getter_21_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x3e34420

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__FarAttackCooldown>g____getter_21_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  float local_c;
  
  if ((__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Titan, pCVar1 != (Characters_BasicTitan_o *)0x0)) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    local_c = 0.0;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__i->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e34482;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__i->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e34482;
        local_c = (pCVar2->fields).FarAttackCooldown;
      }
    }
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_c);
    return pIVar4;
  }
LAB_03e34482:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__AttackWait>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__AttackWait_g____getter_22_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x3e34490

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__AttackWait>g____getter_22_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  float local_c;
  
  if ((__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Titan, pCVar1 != (Characters_BasicTitan_o *)0x0)) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    local_c = 0.0;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__i->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e344f2;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__i->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e344f2;
        local_c = (pCVar2->fields).AttackWait;
      }
    }
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_c);
    return pIVar4;
  }
LAB_03e344f2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__AttackWait>g____setter|22_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__AttackWait_g____setter_22_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e34500

void CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__AttackWait>g____setter_22_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  float fVar4;
  
  if (DAT_05702dd5 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702dd5 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Titan, pCVar1 != (Characters_BasicTitan_o *)0x0)) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__i->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e345a6;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__i->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e345a6;
        (pCVar2->fields).AttackWait = fVar4;
      }
    }
    return;
  }
LAB_03e345a6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__CanRun>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__CanRun_g____getter_23_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x3e345b0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__CanRun>g____getter_23_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  undefined8 in_RAX;
  Il2CppObject *pIVar4;
  undefined1 uVar5;
  undefined8 uStack_18;
  
  if ((__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Titan, pCVar1 != (Characters_BasicTitan_o *)0x0)) {
    uVar5 = 0;
    uStack_18 = in_RAX;
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__i->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e34616;
      if ((char)(pCVar1->fields).CustomDamage == '\0') {
        uVar5 = 0;
      }
      else {
        pCVar2 = (__i->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e34616;
        uVar5 = (undefined1)(pCVar2->fields).IsRun;
      }
    }
    uStack_18 = CONCAT17(uVar5,(undefined7)uStack_18);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_18 + 7);
    return pIVar4;
  }
LAB_03e34616:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__CanRun>g____setter|23_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__CanRun_g____setter_23_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e34620

void CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__CanRun>g____setter_23_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  bool_conflict bVar4;
  
  if (DAT_05702dd6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702dd6 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Titan, pCVar1 != (Characters_BasicTitan_o *)0x0)) {
    bVar4 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar4 != '\0') {
      pCVar1 = (__i->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e346b9;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__i->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e346b9;
        *(char *)&(pCVar2->fields).IsRun = (char)bVar3;
      }
    }
    return;
  }
LAB_03e346b9:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__AttackSpeedMultiplier>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__AttackSpeedMultiplier_g____getter_24_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x3e346c0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__AttackSpeedMultiplier>g____getter_24_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  float local_c;
  
  if ((__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Titan, pCVar1 != (Characters_BasicTitan_o *)0x0)) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    local_c = 0.0;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__i->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e34716;
      local_c = (pCVar1->fields).SprintStaminaConsumption;
    }
    pIVar3 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_c);
    return pIVar3;
  }
LAB_03e34716:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__AttackSpeedMultiplier>g____setter|24_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__AttackSpeedMultiplier_g____setter_24_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e34720

void CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__AttackSpeedMultiplier>g____setter_24_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_05702dd7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702dd7 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__i->fields).Titan;
        if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e347ba;
        (pCVar1->fields).SprintStaminaConsumption = fVar3;
      }
      return;
    }
  }
LAB_03e347ba:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__UsePathfinding>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__UsePathfinding_g____getter_25_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x3e347c0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__UsePathfinding>g____getter_25_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  undefined8 in_RAX;
  Il2CppObject *pIVar4;
  undefined1 uVar5;
  undefined8 uStack_18;
  
  if ((__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Titan, pCVar1 != (Characters_BasicTitan_o *)0x0)) {
    uVar5 = 0;
    uStack_18 = in_RAX;
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__i->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e34829;
      if ((char)(pCVar1->fields).CustomDamage == '\0') {
        uVar5 = 0;
      }
      else {
        pCVar2 = (__i->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e34829;
        uVar5 = *(undefined1 *)((long)&(pCVar2->fields)._waitAttackTimeLeft + 1);
      }
    }
    uStack_18 = CONCAT17(uVar5,(undefined7)uStack_18);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_18 + 7);
    return pIVar4;
  }
LAB_03e34829:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__UsePathfinding>g____setter|25_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__UsePathfinding_g____setter_25_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e34830

void CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__UsePathfinding>g____setter_25_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  bool_conflict bVar4;
  
  if (DAT_05702dd8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702dd8 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Titan, pCVar1 != (Characters_BasicTitan_o *)0x0)) {
    bVar4 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar4 != '\0') {
      pCVar1 = (__i->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e348cc;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__i->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e348cc;
        *(char *)((long)&(pCVar2->fields)._waitAttackTimeLeft + 1) = (char)bVar3;
      }
    }
    return;
  }
LAB_03e348cc:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__HeadMount>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__HeadMount_g____getter_26_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x3e348e0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__HeadMount>g____getter_26_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  long lVar2;
  UnityEngine_Transform_o *transform;
  undefined1 auVar3 [16];
  
  if (((__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Titan, pCVar1 != (Characters_BasicTitan_o *)0x0)) &&
     (lVar2 = *(long *)&(pCVar1->fields)._furthestCoreLocalPosition.fields, lVar2 != 0)) {
    transform = *(UnityEngine_Transform_o **)(lVar2 + 0x38);
    if (DAT_05702de4 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransformBuiltin);
      DAT_05702de4 = '\x01';
    }
    auVar3 = il2cpp_runtime_glue(TypeInfo_CustomLogicTransformBuiltin);
    CustomLogic_CustomLogicTransformBuiltin___ctor(auVar3._0_8_,transform,auVar3._8_8_);
    return (Il2CppObject *)auVar3._0_8_;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__NeckMount>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__NeckMount_g____getter_27_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x3e34950

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings__<__CreatePropertyBinding__NeckMount>g____getter_27_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  long lVar2;
  UnityEngine_Transform_o *transform;
  undefined1 auVar3 [16];
  
  if (((__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) &&
      (pCVar1 = (__i->fields).Titan, pCVar1 != (Characters_BasicTitan_o *)0x0)) &&
     (lVar2 = *(long *)&(pCVar1->fields)._furthestCoreLocalPosition.fields, lVar2 != 0)) {
    transform = *(UnityEngine_Transform_o **)(lVar2 + 0x40);
    if (DAT_05702de4 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransformBuiltin);
      DAT_05702de4 = '\x01';
    }
    auVar3 = il2cpp_runtime_glue(TypeInfo_CustomLogicTransformBuiltin);
    CustomLogic_CustomLogicTransformBuiltin___ctor(auVar3._0_8_,transform,auVar3._8_8_);
    return (Il2CppObject *)auVar3._0_8_;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin___ctor (CustomLogic_CustomLogicTitanBuiltin_o* __this, Characters_BasicTitan_o* titan, const MethodInfo* method);
// 0x3e2ef30

void CustomLogic_CustomLogicTitanBuiltin___ctor
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,Characters_BasicTitan_o *titan,
               MethodInfo *method)

{
  Characters_BasicTitan_o *__this_00;
  Controllers_BaseTitanAIController_o *pCVar1;
  
  if (DAT_05702d9d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseTitanAIController_GetComponent_BaseTitanAICo);
    DAT_05702d9d = '\x01';
  }
  CustomLogic_CustomLogicCharacterBuiltin___ctor
            ((CustomLogic_CustomLogicCharacterBuiltin_o *)__this,(Characters_BaseCharacter_o *)titan
             ,(MethodInfo *)0x0);
  (__this->fields).Titan = titan;
  il2cpp_runtime_glue(&(__this->fields).Titan,titan);
  __this_00 = (__this->fields).Titan;
  if (__this_00 != (Characters_BasicTitan_o *)0x0) {
    pCVar1 = (Controllers_BaseTitanAIController_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)__this_00,MethodInfo_BaseTitanAIController_GetComponent_BaseTitanAICo);
    (__this->fields).Controller = pCVar1;
    il2cpp_runtime_glue(&(__this->fields).Controller,pCVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_Size
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_Size (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x3e2efb0

float CustomLogic_CustomLogicTitanBuiltin__get_Size
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return *(float *)((long)&(pCVar1->fields).TitanColliderToggler + 4);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_Size
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_Size (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e2efd0

void CustomLogic_CustomLogicTitanBuiltin__set_Size
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      Characters_BaseTitan__SetSize((Characters_BaseTitan_o *)pCVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_RunSpeedBase
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_RunSpeedBase (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x3e2f020

float CustomLogic_CustomLogicTitanBuiltin__get_RunSpeedBase
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return *(float *)&(pCVar1->fields).BaseTitanAnimations;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_RunSpeedBase
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_RunSpeedBase (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e2f040

void CustomLogic_CustomLogicTitanBuiltin__set_RunSpeedBase
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e2f07f;
      *(float *)&(pCVar1->fields).BaseTitanAnimations = value;
    }
    return;
  }
LAB_03e2f07f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_WalkSpeedBase
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_WalkSpeedBase (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x3e2f090

float CustomLogic_CustomLogicTitanBuiltin__get_WalkSpeedBase
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return *(float *)((long)&(pCVar1->fields).BaseTitanAnimations + 4);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_WalkSpeedBase
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_WalkSpeedBase (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e2f0b0

void CustomLogic_CustomLogicTitanBuiltin__set_WalkSpeedBase
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e2f0ef;
      *(float *)((long)&(pCVar1->fields).BaseTitanAnimations + 4) = value;
    }
    return;
  }
LAB_03e2f0ef:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_WalkSpeedPerLevel
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_WalkSpeedPerLevel (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x3e2f100

float CustomLogic_CustomLogicTitanBuiltin__get_WalkSpeedPerLevel
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return (pCVar1->fields).AttackSpeedMultiplier;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_WalkSpeedPerLevel
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_WalkSpeedPerLevel (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e2f120

void CustomLogic_CustomLogicTitanBuiltin__set_WalkSpeedPerLevel
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e2f15f;
      (pCVar1->fields).AttackSpeedMultiplier = value;
    }
    return;
  }
LAB_03e2f15f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_RunSpeedPerLevel
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_RunSpeedPerLevel (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x3e2f170

float CustomLogic_CustomLogicTitanBuiltin__get_RunSpeedPerLevel
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return (float)(pCVar1->fields).TitanGroundMaskLayers.fields.m_Mask;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_RunSpeedPerLevel
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_RunSpeedPerLevel (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e2f190

void CustomLogic_CustomLogicTitanBuiltin__set_RunSpeedPerLevel
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e2f1cf;
      (pCVar1->fields).TitanGroundMaskLayers.fields.m_Mask = (int32_t)value;
    }
    return;
  }
LAB_03e2f1cf:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_TurnSpeed
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_TurnSpeed (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x3e2f1e0

float CustomLogic_CustomLogicTitanBuiltin__get_TurnSpeed
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return *(float *)&(pCVar1->fields).AttackSpeeds;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_TurnSpeed
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_TurnSpeed (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e2f200

void CustomLogic_CustomLogicTitanBuiltin__set_TurnSpeed
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e2f23f;
      *(float *)&(pCVar1->fields).AttackSpeeds = value;
    }
    return;
  }
LAB_03e2f23f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_RotateSpeed
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_RotateSpeed (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x3e2f250

float CustomLogic_CustomLogicTitanBuiltin__get_RotateSpeed
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return (pCVar1->fields).PreviousAttackSpeedMultiplier;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_RotateSpeed
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_RotateSpeed (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e2f270

void CustomLogic_CustomLogicTitanBuiltin__set_RotateSpeed
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e2f2af;
      (pCVar1->fields).PreviousAttackSpeedMultiplier = value;
    }
    return;
  }
LAB_03e2f2af:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_JumpForce
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_JumpForce (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x3e2f2c0

float CustomLogic_CustomLogicTitanBuiltin__get_JumpForce
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return (pCVar1->fields).ConfusedTime;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_JumpForce
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_JumpForce (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e2f2e0

void CustomLogic_CustomLogicTitanBuiltin__set_JumpForce
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e2f31f;
      (pCVar1->fields).ConfusedTime = value;
    }
    return;
  }
LAB_03e2f31f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_ActionPause
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_ActionPause (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x3e2f330

float CustomLogic_CustomLogicTitanBuiltin__get_ActionPause
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return (float)(pCVar1->fields).IsSit;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_ActionPause
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_ActionPause (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e2f350

void CustomLogic_CustomLogicTitanBuiltin__set_ActionPause
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e2f38f;
      (pCVar1->fields).IsSit = (bool_conflict)value;
    }
    return;
  }
LAB_03e2f38f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_AttackPause
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_AttackPause (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x3e2f3a0

float CustomLogic_CustomLogicTitanBuiltin__get_AttackPause
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return *(float *)&(pCVar1->fields).field_0x11c;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_AttackPause
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_AttackPause (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e2f3c0

void CustomLogic_CustomLogicTitanBuiltin__set_AttackPause
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e2f3ff;
      *(float *)&(pCVar1->fields).field_0x11c = value;
    }
    return;
  }
LAB_03e2f3ff:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_TurnPause
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_TurnPause (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x3e2f410

float CustomLogic_CustomLogicTitanBuiltin__get_TurnPause
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return *(float *)&(pCVar1->fields).HoldHuman;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_TurnPause
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_TurnPause (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e2f430

void CustomLogic_CustomLogicTitanBuiltin__set_TurnPause
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e2f46f;
      *(float *)&(pCVar1->fields).HoldHuman = value;
    }
    return;
  }
LAB_03e2f46f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_Stamina
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_Stamina (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x3e2f480

float CustomLogic_CustomLogicTitanBuiltin__get_Stamina
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return (pCVar1->fields).ClimbCooldown;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_Stamina
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_Stamina (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e2f4a0

void CustomLogic_CustomLogicTitanBuiltin__set_Stamina
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e2f4df;
      (pCVar1->fields).ClimbCooldown = value;
    }
    return;
  }
LAB_03e2f4df:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_MaxStamina
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_MaxStamina (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x3e2f4f0

float CustomLogic_CustomLogicTitanBuiltin__get_MaxStamina
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return *(float *)((long)&(pCVar1->fields).HoldHuman + 4);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_MaxStamina
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_MaxStamina (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e2f510

void CustomLogic_CustomLogicTitanBuiltin__set_MaxStamina
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e2f54f;
      *(float *)((long)&(pCVar1->fields).HoldHuman + 4) = value;
    }
    return;
  }
LAB_03e2f54f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_NapePosition
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTitanBuiltin__get_NapePosition (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x3e2f560

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTitanBuiltin__get_NapePosition
          (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  long lVar2;
  UnityEngine_Component_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar3;
  UnityEngine_Vector3_o v;
  
  pCVar1 = (__this->fields).Titan;
  if (((pCVar1 != (Characters_BasicTitan_o *)0x0) &&
      (lVar2 = *(long *)&(pCVar1->fields)._furthestCoreLocalPosition.fields, lVar2 != 0)) &&
     (__this_00 = *(UnityEngine_Component_o **)(lVar2 + 0x68),
     __this_00 != (UnityEngine_Component_o *)0x0)) {
    __this_01 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      v = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
      pCVar3 = CustomLogic_CustomLogicVector3Builtin__op_Implicit(v,(MethodInfo *)0x0);
      return pCVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_IsCrawler
// il2cpp: bool CustomLogic_CustomLogicTitanBuiltin__get_IsCrawler (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x3e2f5b0

bool_conflict
CustomLogic_CustomLogicTitanBuiltin__get_IsCrawler
          (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)pCVar1 >> 8),
                    *(undefined1 *)&(pCVar1->fields)._rootMotionAnimations);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_State
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanBuiltin__get_State (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x3e2f5d0

System_String_o *
CustomLogic_CustomLogicTitanBuiltin__get_State
          (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  System_Type_o *enumType;
  Il2CppObject *value;
  System_String_o *pSVar1;
  undefined1 auStack_24 [4];
  
  if (DAT_05702d9e == '\0') {
    il2cpp_init_method_metadata(&TypeRef_TitanState);
    il2cpp_init_method_metadata(&TypeInfo_TitanState);
    DAT_05702d9e = '\x01';
  }
  handle.fields.value = TypeRef_TitanState.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  enumType = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if ((__this->fields).Titan != (Characters_BasicTitan_o *)0x0) {
    value = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_TitanState,auStack_24);
    if (*(int *)(DAT_057110b8 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = System_Enum__GetName(enumType,value,(MethodInfo *)0x0);
    return pSVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_DetectRange
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_DetectRange (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x3e2f6a0

float CustomLogic_CustomLogicTitanBuiltin__get_DetectRange
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  float fVar4;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    fVar4 = 0.0;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e2f6da;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e2f6da;
        fVar4 = (pCVar2->fields).DetectRange;
      }
    }
    return fVar4;
  }
LAB_03e2f6da:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_DetectRange
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_DetectRange (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e2f6e0

void CustomLogic_CustomLogicTitanBuiltin__set_DetectRange
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e2f72b;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e2f72b;
        (pCVar2->fields).DetectRange = value;
      }
    }
    return;
  }
LAB_03e2f72b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_FocusRange
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_FocusRange (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x3e2f730

float CustomLogic_CustomLogicTitanBuiltin__get_FocusRange
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  float fVar4;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    fVar4 = 0.0;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e2f76a;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e2f76a;
        fVar4 = (pCVar2->fields).FocusRange;
      }
    }
    return fVar4;
  }
LAB_03e2f76a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_FocusRange
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_FocusRange (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e2f770

void CustomLogic_CustomLogicTitanBuiltin__set_FocusRange
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e2f7bb;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e2f7bb;
        (pCVar2->fields).FocusRange = value;
      }
    }
    return;
  }
LAB_03e2f7bb:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_FocusTime
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_FocusTime (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x3e2f7c0

float CustomLogic_CustomLogicTitanBuiltin__get_FocusTime
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  float fVar4;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    fVar4 = 0.0;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e2f7fa;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e2f7fa;
        fVar4 = (pCVar2->fields).FocusTime;
      }
    }
    return fVar4;
  }
LAB_03e2f7fa:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_FocusTime
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_FocusTime (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e2f800

void CustomLogic_CustomLogicTitanBuiltin__set_FocusTime
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e2f84b;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e2f84b;
        (pCVar2->fields).FocusTime = value;
      }
    }
    return;
  }
LAB_03e2f84b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_FarAttackCooldown
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_FarAttackCooldown (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x3e2f850

float CustomLogic_CustomLogicTitanBuiltin__get_FarAttackCooldown
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  float fVar4;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    fVar4 = 0.0;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e2f88a;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e2f88a;
        fVar4 = (pCVar2->fields).FarAttackCooldown;
      }
    }
    return fVar4;
  }
LAB_03e2f88a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_AttackWait
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_AttackWait (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x3e2f890

float CustomLogic_CustomLogicTitanBuiltin__get_AttackWait
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  float fVar4;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    fVar4 = 0.0;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e2f8ca;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e2f8ca;
        fVar4 = (pCVar2->fields).AttackWait;
      }
    }
    return fVar4;
  }
LAB_03e2f8ca:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_AttackWait
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_AttackWait (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e2f8d0

void CustomLogic_CustomLogicTitanBuiltin__set_AttackWait
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e2f91b;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e2f91b;
        (pCVar2->fields).AttackWait = value;
      }
    }
    return;
  }
LAB_03e2f91b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_CanRun
// il2cpp: bool CustomLogic_CustomLogicTitanBuiltin__get_CanRun (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x3e2f920

bool_conflict
CustomLogic_CustomLogicTitanBuiltin__get_CanRun
          (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  uint uVar4;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    uVar4 = 0;
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e2f96a;
      if ((char)(pCVar1->fields).CustomDamage == '\0') {
        uVar4 = 0;
      }
      else {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e2f96a;
        uVar4 = (uint)((char)(pCVar2->fields).IsRun != '\0');
      }
    }
    return uVar4;
  }
LAB_03e2f96a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_CanRun
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_CanRun (CustomLogic_CustomLogicTitanBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3e2f970

void CustomLogic_CustomLogicTitanBuiltin__set_CanRun
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,bool_conflict value,MethodInfo *method
               )

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e2f9af;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e2f9af;
        *(char *)&(pCVar2->fields).IsRun = (char)value;
      }
    }
    return;
  }
LAB_03e2f9af:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_AttackSpeedMultiplier
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_AttackSpeedMultiplier (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x3e2f9c0

float CustomLogic_CustomLogicTitanBuiltin__get_AttackSpeedMultiplier
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool_conflict bVar2;
  float fVar3;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    fVar3 = 0.0;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e2f9ee;
      fVar3 = (pCVar1->fields).SprintStaminaConsumption;
    }
    return fVar3;
  }
LAB_03e2f9ee:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_AttackSpeedMultiplier
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_AttackSpeedMultiplier (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e2fa00

void CustomLogic_CustomLogicTitanBuiltin__set_AttackSpeedMultiplier
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e2fa3f;
      (pCVar1->fields).SprintStaminaConsumption = value;
    }
    return;
  }
LAB_03e2fa3f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_UsePathfinding
// il2cpp: bool CustomLogic_CustomLogicTitanBuiltin__get_UsePathfinding (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x3e2fa50

bool_conflict
CustomLogic_CustomLogicTitanBuiltin__get_UsePathfinding
          (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  uint uVar4;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    uVar4 = 0;
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e2fa9d;
      if ((char)(pCVar1->fields).CustomDamage == '\0') {
        uVar4 = 0;
      }
      else {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e2fa9d;
        uVar4 = (uint)(*(char *)((long)&(pCVar2->fields)._waitAttackTimeLeft + 1) != '\0');
      }
    }
    return uVar4;
  }
LAB_03e2fa9d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_UsePathfinding
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_UsePathfinding (CustomLogic_CustomLogicTitanBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3e2fab0

void CustomLogic_CustomLogicTitanBuiltin__set_UsePathfinding
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,bool_conflict value,MethodInfo *method
               )

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e2faf2;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e2faf2;
        *(char *)((long)&(pCVar2->fields)._waitAttackTimeLeft + 1) = (char)value;
      }
    }
    return;
  }
LAB_03e2faf2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_HeadMount
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicTitanBuiltin__get_HeadMount (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x3e2fb00

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicTitanBuiltin__get_HeadMount
          (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  long lVar2;
  UnityEngine_Transform_o *transform;
  undefined1 auVar3 [16];
  
  pCVar1 = (__this->fields).Titan;
  if ((pCVar1 != (Characters_BasicTitan_o *)0x0) &&
     (lVar2 = *(long *)&(pCVar1->fields)._furthestCoreLocalPosition.fields, lVar2 != 0)) {
    transform = *(UnityEngine_Transform_o **)(lVar2 + 0x38);
    if (DAT_05702de4 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransformBuiltin);
      DAT_05702de4 = '\x01';
    }
    auVar3 = il2cpp_runtime_glue(TypeInfo_CustomLogicTransformBuiltin);
    CustomLogic_CustomLogicTransformBuiltin___ctor(auVar3._0_8_,transform,auVar3._8_8_);
    return auVar3._0_8_;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_NeckMount
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicTitanBuiltin__get_NeckMount (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x3e2fbc0

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicTitanBuiltin__get_NeckMount
          (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  long lVar2;
  UnityEngine_Transform_o *transform;
  undefined1 auVar3 [16];
  
  pCVar1 = (__this->fields).Titan;
  if ((pCVar1 != (Characters_BasicTitan_o *)0x0) &&
     (lVar2 = *(long *)&(pCVar1->fields)._furthestCoreLocalPosition.fields, lVar2 != 0)) {
    transform = *(UnityEngine_Transform_o **)(lVar2 + 0x40);
    if (DAT_05702de4 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_CustomLogicTransformBuiltin);
      DAT_05702de4 = '\x01';
    }
    auVar3 = il2cpp_runtime_glue(TypeInfo_CustomLogicTransformBuiltin);
    CustomLogic_CustomLogicTransformBuiltin___ctor(auVar3._0_8_,transform,auVar3._8_8_);
    return auVar3._0_8_;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$MoveTo
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__MoveTo (CustomLogic_CustomLogicTitanBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* position, float range, bool ignoreEnemies, const MethodInfo* method);
// 0x3e2fc30

void CustomLogic_CustomLogicTitanBuiltin__MoveTo
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *position,float range,
               bool_conflict ignoreEnemies,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      if (*(char *)&(pCVar1->fields).FeedVictimName != '\0') {
        return;
      }
      if ((char)(pCVar1->fields).CustomDamage == '\0') {
        return;
      }
      if ((position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
         (__this_00 = (__this->fields).Controller,
         __this_00 != (Controllers_BaseTitanAIController_o *)0x0)) {
        Controllers_BaseTitanAIController__MoveTo
                  (__this_00,(UnityEngine_Vector3_o)(position->fields).Value.fields,range,
                   ignoreEnemies & 0xff,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$Target
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__Target (CustomLogic_CustomLogicTitanBuiltin_o* __this, Il2CppObject* enemyObj, float focus, const MethodInfo* method);
// 0x3e2fcf0

void CustomLogic_CustomLogicTitanBuiltin__Target
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,Il2CppObject *enemyObj,float focus,
               MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Characters_BasicTitan_o *pCVar3;
  bool_conflict bVar4;
  Il2CppClass *pIVar5;
  Controllers_BaseTitanAIController_o *__this_00;
  
  if (DAT_05702d9f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapTargetableBuiltin);
    DAT_05702d9f = '\x01';
  }
  pCVar3 = (__this->fields).Titan;
  if (pCVar3 != (Characters_BasicTitan_o *)0x0) {
    bVar4 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar3,(MethodInfo *)0x0)
    ;
    if ((char)bVar4 != '\0') {
      pCVar3 = (__this->fields).Titan;
      if (pCVar3 == (Characters_BasicTitan_o *)0x0) goto LAB_03e2fe04;
      if ((*(char *)&(pCVar3->fields).FeedVictimName == '\0') &&
         ((char)(pCVar3->fields).CustomDamage == '\0')) {
        return;
      }
    }
    if (enemyObj != (Il2CppObject *)0x0) {
      pIVar5 = enemyObj->klass;
      bVar1 = (pIVar5->_2).naturalAligment;
      bVar2 = (TypeInfo_CustomLogicMapTargetableBuiltin->_2).naturalAligment;
      if ((bVar1 < bVar2) || ((pIVar5->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicMapTargetableBuiltin)) {
        bVar2 = (TypeInfo_CustomLogicCharacterBuiltin->_2).naturalAligment;
        if ((bVar2 <= bVar1) && ((pIVar5->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_CustomLogicCharacterBuiltin)) {
          bVar1 = (TypeInfo_CustomLogicCharacterBuiltin->_2).naturalAligment;
          if ((bVar1 <= (enemyObj->klass->_2).naturalAligment) &&
             ((enemyObj->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicCharacterBuiltin)) {
            pIVar5 = enemyObj[3].klass;
            __this_00 = (__this->fields).Controller;
            if (__this_00 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e2fe04;
            goto LAB_03e2fde3;
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(enemyObj);
      }
      pIVar5 = enemyObj[3].monitor;
      __this_00 = (__this->fields).Controller;
      if (__this_00 != (Controllers_BaseTitanAIController_o *)0x0) {
LAB_03e2fde3:
        Controllers_BaseTitanAIController__SetEnemy
                  (__this_00,(Characters_ITargetable_o *)pIVar5,focus,(MethodInfo *)0x0);
        return;
      }
    }
  }
LAB_03e2fe04:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$GetTarget
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin__GetTarget (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x3e2fe20

/* WARNING: Type propagation algorithm not settling */

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin__GetTarget
          (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Characters_BasicTitan_o *pCVar3;
  Controllers_BaseTitanAIController_o *pCVar4;
  Characters_Human_c *pCVar5;
  bool_conflict bVar6;
  UnityEngine_GameObject_o *gameObject;
  CustomLogic_CustomLogicMapTargetableBuiltin_o *__this_00;
  CustomLogic_CustomLogicHumanBuiltin_o *__this_01;
  CustomLogic_CustomLogicCharacterBuiltin_o *__this_02;
  Il2CppObject *pIVar7;
  Characters_Human_o *human;
  undefined1 auVar8 [16];
  
  if (DAT_05702da0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BaseShifter);
    il2cpp_init_method_metadata(&TypeInfo_BasicTitan);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicHumanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapTargetableBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicTitanBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicWallColossalBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Human);
    il2cpp_init_method_metadata(&TypeInfo_MapTargetable);
    il2cpp_init_method_metadata(&TypeInfo_WallColossalShifter);
    DAT_05702da0 = '\x01';
  }
  pCVar3 = (__this->fields).Titan;
  if (pCVar3 != (Characters_BasicTitan_o *)0x0) {
    bVar6 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar3,(MethodInfo *)0x0)
    ;
    if ((char)bVar6 != '\0') {
      pCVar3 = (__this->fields).Titan;
      if (pCVar3 == (Characters_BasicTitan_o *)0x0) goto LAB_03e301d1;
      if ((*(char *)&(pCVar3->fields).FeedVictimName == '\0') &&
         ((char)(pCVar3->fields).CustomDamage == '\0')) {
        return (Il2CppObject *)0x0;
      }
    }
    pCVar4 = (__this->fields).Controller;
    if (pCVar4 != (Controllers_BaseTitanAIController_o *)0x0) {
      human = *(Characters_Human_o **)&(pCVar4->fields)._rangedCooldownLeft;
      if (human == (Characters_Human_o *)0x0) {
        return (Il2CppObject *)0x0;
      }
      pCVar5 = human->klass;
      bVar1 = (pCVar5->_2).naturalAligment;
      bVar2 = (TypeInfo_MapTargetable->_2).naturalAligment;
      if ((bVar2 <= bVar1) && ((pCVar5->_2).typeHierarchy[(ulong)bVar2 - 1] == TypeInfo_MapTargetable)) {
        gameObject = Map_MapTargetable__get_GameObject
                               ((Map_MapTargetable_o *)human,(MethodInfo *)0x0);
        __this_00 = (CustomLogic_CustomLogicMapTargetableBuiltin_o *)
                    il2cpp_runtime_glue(TypeInfo_CustomLogicMapTargetableBuiltin);
        CustomLogic_CustomLogicMapTargetableBuiltin___ctor
                  (__this_00,gameObject,(Map_MapTargetable_o *)human,(MethodInfo *)0x0);
        return (Il2CppObject *)__this_00;
      }
      bVar2 = (TypeInfo_Human->_2).naturalAligment;
      if ((bVar1 < bVar2) || ((pCVar5->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_Human)) {
        bVar2 = (TypeInfo_WallColossalShifter->_2).naturalAligment;
        if ((bVar1 < bVar2) || ((pCVar5->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_WallColossalShifter)) {
          bVar2 = (TypeInfo_BaseShifter->_2).naturalAligment;
          if ((bVar1 < bVar2) || ((pCVar5->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_BaseShifter)) {
            bVar2 = (TypeInfo_BasicTitan->_2).naturalAligment;
            if (bVar1 < bVar2) {
              return (Il2CppObject *)0x0;
            }
            if ((pCVar5->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_BasicTitan) {
              return (Il2CppObject *)0x0;
            }
            __this_02 = (CustomLogic_CustomLogicCharacterBuiltin_o *)
                        il2cpp_runtime_glue(TypeInfo_CustomLogicTitanBuiltin);
            bVar1 = (TypeInfo_BasicTitan->_2).naturalAligment;
            if ((bVar1 <= (human->klass->_2).naturalAligment) &&
               ((human->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BasicTitan)) {
              if (DAT_05702d9d == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_BaseTitanAIController_GetComponent_BaseTitanAICo);
                DAT_05702d9d = '\x01';
              }
              CustomLogic_CustomLogicCharacterBuiltin___ctor
                        (__this_02,(Characters_BaseCharacter_o *)human,(MethodInfo *)0x0);
              __this_02[1].klass = (CustomLogic_CustomLogicCharacterBuiltin_c *)human;
              il2cpp_runtime_glue(__this_02 + 1,human);
              human = (Characters_Human_o *)__this_02[1].klass;
              if (human == (Characters_Human_o *)0x0) goto LAB_03e301d1;
              goto LAB_03e301b4;
            }
          }
          else {
            __this_02 = (CustomLogic_CustomLogicCharacterBuiltin_o *)
                        il2cpp_runtime_glue(TypeInfo_CustomLogicShifterBuiltin);
            bVar1 = (TypeInfo_BaseShifter->_2).naturalAligment;
            if ((bVar1 <= (human->klass->_2).naturalAligment) &&
               ((human->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_BaseShifter)) {
              if (DAT_05702d5d == '\0') {
                il2cpp_init_method_metadata(&MethodInfo_BaseTitanAIController_GetComponent_BaseTitanAICo);
                DAT_05702d5d = '\x01';
              }
              CustomLogic_CustomLogicCharacterBuiltin___ctor
                        (__this_02,(Characters_BaseCharacter_o *)human,(MethodInfo *)0x0);
              __this_02[1].klass = (CustomLogic_CustomLogicCharacterBuiltin_c *)human;
              il2cpp_runtime_glue(__this_02 + 1,human);
LAB_03e301b4:
              pIVar7 = UnityEngine_Component__GetComponent<object>
                                 ((UnityEngine_Component_o *)human,MethodInfo_BaseTitanAIController_GetComponent_BaseTitanAICo);
              __this_02[1].monitor = pIVar7;
              il2cpp_runtime_glue(&__this_02[1].monitor,pIVar7);
              return (Il2CppObject *)__this_02;
            }
          }
        }
        else {
          auVar8 = il2cpp_runtime_glue(TypeInfo_CustomLogicWallColossalBuiltin);
          bVar1 = (TypeInfo_WallColossalShifter->_2).naturalAligment;
          if ((bVar1 <= (human->klass->_2).naturalAligment) &&
             ((human->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_WallColossalShifter)) {
            CustomLogic_CustomLogicWallColossalBuiltin___ctor
                      (auVar8._0_8_,(Characters_WallColossalShifter_o *)human,auVar8._8_8_);
            return (Il2CppObject *)auVar8._0_8_;
          }
        }
      }
      else {
        __this_01 = (CustomLogic_CustomLogicHumanBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicHumanBuiltin);
        bVar1 = (TypeInfo_Human->_2).naturalAligment;
        if ((bVar1 <= (human->klass->_2).naturalAligment) &&
           ((human->klass->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_Human)) {
          CustomLogic_CustomLogicHumanBuiltin___ctor(__this_01,human,(MethodInfo *)0x0);
          return (Il2CppObject *)__this_01;
        }
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(human);
    }
  }
LAB_03e301d1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$Idle
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__Idle (CustomLogic_CustomLogicTitanBuiltin_o* __this, float time, const MethodInfo* method);
// 0x3e302b0

void CustomLogic_CustomLogicTitanBuiltin__Idle
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float time,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      if (*(char *)&(pCVar1->fields).FeedVictimName != '\0') {
        return;
      }
      if ((char)(pCVar1->fields).CustomDamage == '\0') {
        return;
      }
      __this_00 = (__this->fields).Controller;
      if (__this_00 != (Controllers_BaseTitanAIController_o *)0x0) {
        Controllers_BaseTitanAIController__ForceIdle(__this_00,time,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$Wander
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__Wander (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x3e30310

void CustomLogic_CustomLogicTitanBuiltin__Wander
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      if (*(char *)&(pCVar1->fields).FeedVictimName != '\0') {
        return;
      }
      if ((char)(pCVar1->fields).CustomDamage == '\0') {
        return;
      }
      __this_00 = (__this->fields).Controller;
      if (__this_00 != (Controllers_BaseTitanAIController_o *)0x0) {
        Controllers_BaseTitanAIController__CancelOrder(__this_00,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$Blind
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__Blind (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x3e30360

void CustomLogic_CustomLogicTitanBuiltin__Blind
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar2;
  undefined8 extraout_RDX;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e3039d;
      if (*(char *)&(pCVar1->fields).FeedVictimName == '\0') {
        vtable_dispatch = (pCVar1->klass->vtable)._144_Blind.methodPtr;
        (*vtable_dispatch)
                  (pCVar1,(pCVar1->klass->vtable)._144_Blind.method,extraout_RDX,
                   vtable_dispatch);
        return;
      }
    }
    return;
  }
LAB_03e3039d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$Cripple
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__Cripple (CustomLogic_CustomLogicTitanBuiltin_o* __this, float time, const MethodInfo* method);
// 0x3e303b0

void CustomLogic_CustomLogicTitanBuiltin__Cripple
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float time,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar2;
  undefined8 extraout_RDX;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e30405;
      if (*(char *)&(pCVar1->fields).FeedVictimName == '\0') {
        vtable_dispatch = (pCVar1->klass->vtable)._145_Cripple.methodPtr;
        (*vtable_dispatch)
                  (time,pCVar1,(pCVar1->klass->vtable)._145_Cripple.method,extraout_RDX,
                   vtable_dispatch);
        return;
      }
    }
    return;
  }
LAB_03e30405:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$IsAlive
// il2cpp: bool CustomLogic_CustomLogicTitanBuiltin__IsAlive (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x3e2fcb0

bool_conflict
CustomLogic_CustomLogicTitanBuiltin__IsAlive
          (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool_conflict bVar2;
  uint uVar3;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    uVar3 = 0;
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto LAB_03e2fce7;
      uVar3 = (uint)(*(char *)&(pCVar1->fields).FeedVictimName == '\0');
    }
    return uVar3;
  }
LAB_03e2fce7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicTitanBuiltin__get_ClassName (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x3e30410

System_String_o *
CustomLogic_CustomLogicTitanBuiltin__get_ClassName
          (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05702da1 == '\0') {
    il2cpp_init_method_metadata(&"Titan");
    DAT_05702da1 = '\x01';
  }
  return "Titan";
}


// CustomLogic.CustomLogicTitanBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTitanBuiltin__get_IsAbstract (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x3e30440

bool_conflict
CustomLogic_CustomLogicTitanBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicTitanBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTitanBuiltin__get_IsStatic (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x3e30450

bool_conflict
CustomLogic_CustomLogicTitanBuiltin__get_IsStatic
          (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicTitanBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTitanBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x3e30460

bool_conflict
CustomLogic_CustomLogicTitanBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


