// Type: CustomLogic.CustomLogicShifterBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicShifterBuiltin.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Builtin/CustomLogicShifterBuiltin.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicShifterBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicShifterBuiltin_o* CustomLogic_CustomLogicShifterBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e2a680

CustomLogic_CustomLogicShifterBuiltin_o *
CustomLogic_CustomLogicShifterBuiltin_Factory__CreateInstance
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
  str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicShifterBuiltin constructor found that takes ");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
  pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
  System_ArgumentException___ctor(__this,pSVar1,(MethodInfo *)0x0);
  uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicShifterBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar2);
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3e2e670

void CustomLogic_CustomLogicShifterBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05702d94 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702d94 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3e2e6e0

void CustomLogic_CustomLogicShifterBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$<__CreateMethodBinding__MoveTo>b__23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__MoveTo_b__23_0 (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicShifterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e2e6f0

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_<>c__<__CreateMethodBinding__MoveTo>b__23_0
          (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicShifterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  uint uVar1;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  float range;
  
  if (DAT_05702d95 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d95 = '\x01';
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
          if (__c != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
            CustomLogic_CustomLogicShifterBuiltin__MoveTo(__c,position,range,uVar1 & 0xff,method);
            return (Il2CppObject *)0x0;
          }
          goto LAB_03e2e7e5;
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03e2e7e5:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$<__CreateMethodBinding__MoveToExact>b__24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__MoveToExact_b__24_0 (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicShifterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e2e7f0

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_<>c__<__CreateMethodBinding__MoveToExact>b__24_0
          (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicShifterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  MethodInfo *method_00;
  CustomLogic_CustomLogicVector3Builtin_o *position;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  float timeoutPadding;
  
  if (DAT_05702d96 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d96 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    position = (CustomLogic_CustomLogicVector3Builtin_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if ((int)__a->max_length < 2) {
      timeoutPadding = 1.0;
      method_00 = extraout_RDX;
    }
    else {
      pIVar1 = __a->m_Items[1];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      timeoutPadding = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
      method_00 = extraout_RDX_00;
    }
    if (__c != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
      CustomLogic_CustomLogicShifterBuiltin__MoveToExact(__c,position,timeoutPadding,method_00);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$<__CreateMethodBinding__MoveToExactCallback>b__25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__MoveToExactCallback_b__25_0 (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicShifterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e2e8e0

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_<>c__<__CreateMethodBinding__MoveToExactCallback>b__25_0
          (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicShifterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (DAT_05702d97 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&MethodInfo_UserMethod_ConvertTo_UserMethod);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d97 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
LAB_03e2ea56:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_UserMethod_ConvertTo_UserMethod);
    if ((uint)__a->max_length < 2) goto LAB_03e2ea56;
    CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_CustomLogicVector3Builtin_ConvertTo_CustomLogicV);
    if (2 < (int)__a->max_length) {
      pIVar1 = __a->m_Items[2];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
      if ((int)__a->max_length < 4) {
        if (__c == (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) goto LAB_03e2ea51;
        goto LAB_03e2e9b5;
      }
      pIVar1 = __a->m_Items[3];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_CustomLogicEvaluator__ConvertTo<float>(pIVar1,MethodInfo_Single_ConvertTo_Single);
    }
    if (__c != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
LAB_03e2e9b5:
      CustomLogic_CustomLogicShifterBuiltin__MoveToExactCallback();
      return (Il2CppObject *)0x0;
    }
  }
LAB_03e2ea51:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$<__CreateMethodBinding__Target>b__26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__Target_b__26_0 (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicShifterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e2ea60

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_<>c__<__CreateMethodBinding__Target>b__26_0
          (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicShifterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *enemyObj;
  Il2CppObject *obj;
  MethodInfo *method_00;
  float focus;
  
  if (DAT_05702d98 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d98 = '\x01';
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
    if (__c != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
      CustomLogic_CustomLogicShifterBuiltin__Target(__c,enemyObj,focus,method_00);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$<__CreateMethodBinding__Idle>b__27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__Idle_b__27_0 (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicShifterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e2eb00

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_<>c__<__CreateMethodBinding__Idle>b__27_0
          (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicShifterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *__this_00;
  bool_conflict bVar2;
  float time;
  
  if (DAT_05702d99 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d99 = '\x01';
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
    if ((__c != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
       (pCVar1 = (__c->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__c->fields).Shifter;
        if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2ebc7;
        if ((*(char *)&(pCVar1->fields).FeedVictimName == '\0') &&
           ((char)(pCVar1->fields).CustomDamage != '\0')) {
          __this_00 = (__c->fields).Controller;
          if (__this_00 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e2ebc7;
          Controllers_BaseTitanAIController__ForceIdle(__this_00,time,(MethodInfo *)0x0);
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
LAB_03e2ebc7:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$<__CreateMethodBinding__Wander>b__28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__Wander_b__28_0 (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicShifterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e2ebe0

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_<>c__<__CreateMethodBinding__Wander>b__28_0
          (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicShifterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *__this_00;
  bool_conflict bVar2;
  
  if ((__c != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__c->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__c->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2ec26;
      if ((*(char *)&(pCVar1->fields).FeedVictimName == '\0') &&
         ((char)(pCVar1->fields).CustomDamage != '\0')) {
        __this_00 = (__c->fields).Controller;
        if (__this_00 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e2ec26;
        Controllers_BaseTitanAIController__CancelOrder(__this_00,(MethodInfo *)0x0);
      }
    }
    return (Il2CppObject *)0x0;
  }
LAB_03e2ec26:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$<__CreateMethodBinding__Blind>b__29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__Blind_b__29_0 (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicShifterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e2ec30

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_<>c__<__CreateMethodBinding__Blind>b__29_0
          (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicShifterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool_conflict bVar2;
  
  if ((__c != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__c->fields).Shifter,
     __this = (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o *)0x0,
     pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__c->fields).Shifter;
      __this = (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o *)0x0;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2ec74;
      if (*(char *)&(pCVar1->fields).FeedVictimName == '\0') {
        (*(pCVar1->klass->vtable)._144_Blind.methodPtr)
                  (pCVar1,(pCVar1->klass->vtable)._144_Blind.method);
        return (Il2CppObject *)0x0;
      }
    }
    return (Il2CppObject *)0x0;
  }
LAB_03e2ec74:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$<__CreateMethodBinding__Cripple>b__30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__Cripple_b__30_0 (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicShifterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e2ec80

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_<>c__<__CreateMethodBinding__Cripple>b__30_0
          (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicShifterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  Characters_BaseShifter_o *pCVar1;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_05702d9a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d9a = '\x01';
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
    if ((__c != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
       (pCVar1 = (__c->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__c->fields).Shifter;
        if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2ed41;
        if (*(char *)&(pCVar1->fields).FeedVictimName == '\0') {
          (*(pCVar1->klass->vtable)._145_Cripple.methodPtr)
                    (fVar3,pCVar1,(pCVar1->klass->vtable)._145_Cripple.method);
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
LAB_03e2ed41:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings.<>c$$<__CreateMethodBinding__Attack>b__31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings___c_____CreateMethodBinding__Attack_b__31_0 (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicShifterBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e2ed50

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings_<>c__<__CreateMethodBinding__Attack>b__31_0
          (CustomLogic_CustomLogicShifterBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicShifterBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  char cVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  
  if (DAT_05702d9b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d9b = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pIVar4 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar4,MethodInfo_String_ConvertTo_String);
    if ((__c != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
       (pCVar1 = (__c->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
      bVar3 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        pCVar1 = (__c->fields).Shifter;
        if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2ee27;
        if (*(char *)&(pCVar1->fields).FeedVictimName == '\0') {
          cVar2 = (*(pCVar1->klass->vtable)._129_CanAttack.methodPtr)
                            (pCVar1,(pCVar1->klass->vtable)._129_CanAttack.method);
          if (cVar2 != '\0') {
            pCVar1 = (__c->fields).Shifter;
            if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2ee27;
            (*(pCVar1->klass->vtable)._128_Attack.methodPtr)
                      (pCVar1,pIVar4,(pCVar1->klass->vtable)._128_Attack.method);
          }
        }
      }
      return (Il2CppObject *)0x0;
    }
  }
LAB_03e2ee27:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicShifterBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e2a710

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicShifterBuiltin_Bindings__CreateMemberBinding
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
  
  if (DAT_05702d62 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"FocusTime");
    il2cpp_init_method_metadata(&"AttackPause");
    il2cpp_init_method_metadata(&"RunSpeedPerLevel");
    il2cpp_init_method_metadata(&"WalkSpeedBase");
    il2cpp_init_method_metadata(&"DeathAnimLength");
    il2cpp_init_method_metadata(&"Attack");
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
    il2cpp_init_method_metadata(&"AIEnabled");
    il2cpp_init_method_metadata(&"MoveToExact");
    il2cpp_init_method_metadata(&"MoveToExactCallback");
    il2cpp_init_method_metadata(&"NapePosition");
    il2cpp_init_method_metadata(&"FocusRange");
    il2cpp_init_method_metadata(&"RunSpeedBase");
    il2cpp_init_method_metadata(&"Idle");
    il2cpp_init_method_metadata(&"Size");
    il2cpp_init_method_metadata(&"JumpForce");
    il2cpp_init_method_metadata(&"RotateSpeed");
    il2cpp_init_method_metadata(&"Wander");
    il2cpp_init_method_metadata(&"FarAttackCooldown");
    il2cpp_init_method_metadata(&"TurnPause");
    il2cpp_init_method_metadata(&"TurnSpeed");
    DAT_05702d62 = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x7c69a11d) {
    if (uVar3 < 0x384157d8) {
      if (uVar3 < 0x1d468130) {
        if (uVar3 == 0x1a14484) {
          bVar4 = System_String__op_Equality(name,"AIEnabled",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702d75 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicShifterBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AIEnabled_g);
              il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__AIEnabled_g____se);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
              DAT_05702d75 = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
            System_Func<object__object>___ctor();
            pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicShifterBuiltin__object);
            System_Action<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if (uVar3 == 0x7186f3c) {
          bVar4 = System_String__op_Equality(name,"NapePosition",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702d76 == '\0') {
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__NapePosition_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
              DAT_05702d76 = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
            System_Func<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor
                      (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if ((uVar3 == 0x1d46812f) &&
                (bVar4 = System_String__op_Equality(name,"AttackSpeedMultiplier",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702d73 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicShifterBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSpeedMult);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__AttackSpeedMultip);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
            DAT_05702d73 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicShifterBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
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
            if (DAT_05702d64 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicShifterBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RunSpeedBase_g);
              il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__RunSpeedBase_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
              DAT_05702d64 = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
            System_Func<object__object>___ctor();
            pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicShifterBuiltin__object);
            System_Action<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if ((uVar3 == 0x2ae002cc) &&
                (bVar4 = System_String__op_Equality(name,"JumpForce",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702d6a == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicShifterBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__JumpForce_g);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__JumpForce_g____se);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
            DAT_05702d6a = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicShifterBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if (uVar3 == 0x320c401f) {
        bVar4 = System_String__op_Equality(name,"ActionPause",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702d6b == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicShifterBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ActionPause_g);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ActionPause_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
            DAT_05702d6b = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicShifterBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0x384157d7) &&
              (bVar4 = System_String__op_Equality(name,"MoveToExactCallback",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702d7a == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicShifterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicShifterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MoveToExactCallba);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702d7a = '\x01';
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
          pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar10;
          il2cpp_runtime_glue(lVar2 + 0x18,pSVar10);
        }
        pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicShifterBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicShifterBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar11;
      }
    }
    else if (uVar3 < 0x53189420) {
      if (uVar3 < 0x45aa17b4) {
        if (uVar3 == 0x3da81e8d) {
          bVar4 = System_String__op_Equality(name,"RotateSpeed",(MethodInfo *)0x0);
          if ((char)bVar4 != '\0') {
            if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
              il2cpp_init_class();
            }
            if (DAT_05702d69 == '\0') {
              il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicShifterBuiltin__object);
              il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RotateSpeed_g);
              il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__RotateSpeed_g);
              il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
              il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
              DAT_05702d69 = '\x01';
            }
            pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
            System_Func<object__object>___ctor();
            pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicShifterBuiltin__object);
            System_Action<object__object>___ctor();
            pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
            CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
            return (CustomLogic_ICLMemberBinding_o *)pCVar9;
          }
        }
        else if ((uVar3 == 0x45aa17b3) &&
                (bVar4 = System_String__op_Equality(name,"Idle",(MethodInfo *)0x0),
                (char)bVar4 != '\0')) {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702d7c == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicShifterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicShifterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Idle_b__27_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702d7c = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x28);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x28);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x28,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicShifterBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicShifterBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 == 0x46b92be8) {
        bVar4 = System_String__op_Equality(name,"FocusRange",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702d6f == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicShifterBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FocusRange_g);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__FocusRange_g____s);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
            DAT_05702d6f = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicShifterBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0x5318941f) &&
              (bVar4 = System_String__op_Equality(name,"DetectRange",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702d6e == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicShifterBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DetectRange_g);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__DetectRange_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
          DAT_05702d6e = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicShifterBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 < 0x69ba519c) {
      if (uVar3 == 0x6709f834) {
        bVar4 = System_String__op_Equality(name,"Wander",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702d7d == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicShifterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicShifterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Wander_b__28_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702d7d = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x30);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x30);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x30,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicShifterBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicShifterBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x69ba519b) &&
              (bVar4 = System_String__op_Equality(name,"FarAttackCooldown",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702d71 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FarAttackCooldo);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
          DAT_05702d71 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0x6fd42728) {
      bVar4 = System_String__op_Equality(name,"WalkSpeedPerLevel",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702d66 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicShifterBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__WalkSpeedPerLev);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__WalkSpeedPerLevel);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
          DAT_05702d66 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicShifterBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0x7c69a11c) &&
            (bVar4 = System_String__op_Equality(name,"MoveToExact",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702d79 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicShifterBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicShifterBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MoveToExact_b__24);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702d79 = '\x01';
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
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x10,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicShifterBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicShifterBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 < 0xc746e5f6) {
    if (uVar3 < 0x90cf188b) {
      if (uVar3 == 0x8b67f168) {
        bVar4 = System_String__op_Equality(name,"Target",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702d7b == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicShifterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicShifterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Target_b__26_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702d7b = '\x01';
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
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x20,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicShifterBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicShifterBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if (uVar3 == 0x8ba9331d) {
        bVar4 = System_String__op_Equality(name,"Attack",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702d80 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicShifterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicShifterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Attack_b__31_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702d80 = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x48);
          }
          else {
            pSVar10 = *(System_Func_T__object____object__o **)
                       (*(long *)(TypeInfo_c + 0xb8) + 0x48);
          }
          if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x48) = pSVar10;
            il2cpp_runtime_glue(lVar2 + 0x48,pSVar10);
          }
          pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicShifterBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicShifterBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar11;
        }
      }
      else if ((uVar3 == 0x90cf188a) &&
              (bVar4 = System_String__op_Equality(name,"FocusTime",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702d70 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicShifterBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FocusTime_g);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__FocusTime_g____se);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
          DAT_05702d70 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicShifterBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 < 0xa6478e7d) {
      if (uVar3 == 0x9891bf88) {
        bVar4 = System_String__op_Equality(name,"AttackWait",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702d72 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackWait_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
            DAT_05702d72 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar9,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0xa6478e7c) &&
              (bVar4 = System_String__op_Equality(name,"Size",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702d63 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicShifterBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Size_g____gette);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Size_g____setter);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
          DAT_05702d63 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicShifterBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0xb5f3afdd) {
      bVar4 = System_String__op_Equality(name,"TurnSpeed",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702d68 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicShifterBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TurnSpeed_g);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__TurnSpeed_g____se);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
          DAT_05702d68 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicShifterBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0xc746e5f5) &&
            (bVar4 = System_String__op_Equality(name,"AttackPause",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702d6c == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicShifterBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackPause_g);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__AttackPause_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
        DAT_05702d6c = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicShifterBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 < 0xe4d66f55) {
    if (uVar3 < 0xd0d86e03) {
      if (uVar3 == 0xcf6befb4) {
        bVar4 = System_String__op_Equality(name,"DeathAnimLength",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702d77 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicShifterBuiltin__object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DeathAnimLength);
            il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__DeathAnimLength_g);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
            DAT_05702d77 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
          System_Func<object__object>___ctor();
          pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicShifterBuiltin__object);
          System_Action<object__object>___ctor();
          pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar9;
        }
      }
      else if ((uVar3 == 0xd0d86e02) &&
              (bVar4 = System_String__op_Equality(name,"RunSpeedPerLevel",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702d67 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicShifterBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RunSpeedPerLeve);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__RunSpeedPerLevel);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
          DAT_05702d67 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicShifterBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if (uVar3 == 0xd2528dac) {
      bVar4 = System_String__op_Equality(name,"TurnPause",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702d6d == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicShifterBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TurnPause_g);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__TurnPause_g____se);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
          DAT_05702d6d = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicShifterBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0xe4d66f54) &&
            (bVar4 = System_String__op_Equality(name,"Blind",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702d7e == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicShifterBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicShifterBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Blind_b__29_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702d7e = '\x01';
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
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x38) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 0x38,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicShifterBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicShifterBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if (uVar3 < 0xedff5767) {
    if (uVar3 == 0xe9a6b9e8) {
      bVar4 = System_String__op_Equality(name,"UsePathfinding",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702d74 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicShifterBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__UsePathfinding);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__UsePathfinding_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
          DAT_05702d74 = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
        System_Func<object__object>___ctor();
        pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicShifterBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar9;
      }
    }
    else if ((uVar3 == 0xedff5766) &&
            (bVar4 = System_String__op_Equality(name,"WalkSpeedBase",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702d65 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicShifterBuiltin__object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__WalkSpeedBase_g);
        il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__WalkSpeedBase_g);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
        DAT_05702d65 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
      System_Func<object__object>___ctor();
      pSVar8 = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicShifterBuiltin__object);
      System_Action<object__object>___ctor();
      pCVar9 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor(pCVar9,pSVar7,pSVar8,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar9;
    }
  }
  else if (uVar3 == 0xf90f6b5d) {
    bVar4 = System_String__op_Equality(name,"MoveTo",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702d78 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicShifterBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicShifterBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MoveTo_b__23_0);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702d78 = '\x01';
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
        pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar10;
        il2cpp_runtime_glue(lVar2 + 8,pSVar10);
      }
      pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicShifterBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicShifterBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar11;
    }
  }
  else if ((uVar3 == 0xf96e74c8) &&
          (bVar4 = System_String__op_Equality(name,"Cripple",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702d7f == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicShifterBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicShifterBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object____object);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Cripple_b__30_0);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_05702d7f = '\x01';
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_c + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
      pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
    }
    else {
      pSVar10 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
    }
    if (pSVar10 == (System_Func_T__object____object__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar10 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object____object);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x40) = pSVar10;
      il2cpp_runtime_glue(lVar2 + 0x40,pSVar10);
    }
    pCVar11 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicShifterBuiltin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar11,pSVar10,MethodInfo_CLMethodBinding_1_CustomLogicShifterBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar11;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicShifterBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__Size
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__Size (const MethodInfo* method);
// 0x3e2b260

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__Size(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this;
  
  if (DAT_05702d63 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicShifterBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Size_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__Size_g____setter);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
    DAT_05702d63 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicShifterBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__RunSpeedBase
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__RunSpeedBase (const MethodInfo* method);
// 0x3e2b340

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__RunSpeedBase
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this;
  
  if (DAT_05702d64 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicShifterBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RunSpeedBase_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__RunSpeedBase_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
    DAT_05702d64 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicShifterBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__WalkSpeedBase
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__WalkSpeedBase (const MethodInfo* method);
// 0x3e2b420

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__WalkSpeedBase
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this;
  
  if (DAT_05702d65 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicShifterBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__WalkSpeedBase_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__WalkSpeedBase_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
    DAT_05702d65 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicShifterBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__WalkSpeedPerLevel
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__WalkSpeedPerLevel (const MethodInfo* method);
// 0x3e2b500

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__WalkSpeedPerLevel
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this;
  
  if (DAT_05702d66 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicShifterBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__WalkSpeedPerLev);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__WalkSpeedPerLevel);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
    DAT_05702d66 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicShifterBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__RunSpeedPerLevel
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__RunSpeedPerLevel (const MethodInfo* method);
// 0x3e2b5e0

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__RunSpeedPerLevel
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this;
  
  if (DAT_05702d67 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicShifterBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RunSpeedPerLeve);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__RunSpeedPerLevel);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
    DAT_05702d67 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicShifterBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__TurnSpeed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__TurnSpeed (const MethodInfo* method);
// 0x3e2b6c0

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__TurnSpeed
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this;
  
  if (DAT_05702d68 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicShifterBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TurnSpeed_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__TurnSpeed_g____se);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
    DAT_05702d68 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicShifterBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__RotateSpeed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__RotateSpeed (const MethodInfo* method);
// 0x3e2b7a0

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__RotateSpeed
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this;
  
  if (DAT_05702d69 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicShifterBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__RotateSpeed_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__RotateSpeed_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
    DAT_05702d69 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicShifterBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__JumpForce
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__JumpForce (const MethodInfo* method);
// 0x3e2b880

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__JumpForce
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this;
  
  if (DAT_05702d6a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicShifterBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__JumpForce_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__JumpForce_g____se);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
    DAT_05702d6a = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicShifterBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__ActionPause
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__ActionPause (const MethodInfo* method);
// 0x3e2b960

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__ActionPause
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this;
  
  if (DAT_05702d6b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicShifterBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__ActionPause_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__ActionPause_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
    DAT_05702d6b = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicShifterBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__AttackPause
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__AttackPause (const MethodInfo* method);
// 0x3e2ba40

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__AttackPause
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this;
  
  if (DAT_05702d6c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicShifterBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackPause_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__AttackPause_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
    DAT_05702d6c = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicShifterBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__TurnPause
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__TurnPause (const MethodInfo* method);
// 0x3e2bb20

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__TurnPause
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this;
  
  if (DAT_05702d6d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicShifterBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__TurnPause_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__TurnPause_g____se);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
    DAT_05702d6d = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicShifterBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__DetectRange
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__DetectRange (const MethodInfo* method);
// 0x3e2bc00

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__DetectRange
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this;
  
  if (DAT_05702d6e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicShifterBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DetectRange_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__DetectRange_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
    DAT_05702d6e = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicShifterBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__FocusRange
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__FocusRange (const MethodInfo* method);
// 0x3e2bce0

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__FocusRange
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this;
  
  if (DAT_05702d6f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicShifterBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FocusRange_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__FocusRange_g____s);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
    DAT_05702d6f = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicShifterBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__FocusTime
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__FocusTime (const MethodInfo* method);
// 0x3e2bdc0

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__FocusTime
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this;
  
  if (DAT_05702d70 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicShifterBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FocusTime_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__FocusTime_g____se);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
    DAT_05702d70 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicShifterBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__FarAttackCooldown
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__FarAttackCooldown (const MethodInfo* method);
// 0x3e2bea0

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__FarAttackCooldown
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this;
  
  if (DAT_05702d71 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__FarAttackCooldo);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
    DAT_05702d71 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__AttackWait
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__AttackWait (const MethodInfo* method);
// 0x3e2bf40

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__AttackWait
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this;
  
  if (DAT_05702d72 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackWait_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
    DAT_05702d72 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__AttackSpeedMultiplier
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__AttackSpeedMultiplier (const MethodInfo* method);
// 0x3e2bfe0

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__AttackSpeedMultiplier
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this;
  
  if (DAT_05702d73 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicShifterBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AttackSpeedMult);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__AttackSpeedMultip);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
    DAT_05702d73 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicShifterBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__UsePathfinding
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__UsePathfinding (const MethodInfo* method);
// 0x3e2c0c0

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__UsePathfinding
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this;
  
  if (DAT_05702d74 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicShifterBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__UsePathfinding);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__UsePathfinding_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
    DAT_05702d74 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicShifterBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__AIEnabled
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__AIEnabled (const MethodInfo* method);
// 0x3e2c1a0

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__AIEnabled
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this;
  
  if (DAT_05702d75 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicShifterBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__AIEnabled_g);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__AIEnabled_g____se);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
    DAT_05702d75 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicShifterBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__NapePosition
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__NapePosition (const MethodInfo* method);
// 0x3e2c280

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__NapePosition
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this;
  
  if (DAT_05702d76 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__NapePosition_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
    DAT_05702d76 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreatePropertyBinding__DeathAnimLength
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__DeathAnimLength (const MethodInfo* method);
// 0x3e2c320

CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreatePropertyBinding__DeathAnimLength
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *__this;
  
  if (DAT_05702d77 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicShifterBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__DeathAnimLength);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__DeathAnimLength_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object);
    DAT_05702d77 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicShifterBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicShifterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicShifterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreateMethodBinding__MoveTo
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__MoveTo (const MethodInfo* method);
// 0x3e2c400

CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__MoveTo(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *__this;
  
  if (DAT_05702d78 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MoveTo_b__23_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702d78 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicShifterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreateMethodBinding__MoveToExact
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__MoveToExact (const MethodInfo* method);
// 0x3e2c550

CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__MoveToExact
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *__this;
  
  if (DAT_05702d79 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MoveToExact_b__24);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702d79 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicShifterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreateMethodBinding__MoveToExactCallback
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__MoveToExactCallback (const MethodInfo* method);
// 0x3e2c6a0

CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__MoveToExactCallback
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *__this;
  
  if (DAT_05702d7a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__MoveToExactCallba);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702d7a = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicShifterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreateMethodBinding__Target
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Target (const MethodInfo* method);
// 0x3e2c7f0

CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Target(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *__this;
  
  if (DAT_05702d7b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Target_b__26_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702d7b = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicShifterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreateMethodBinding__Idle
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Idle (const MethodInfo* method);
// 0x3e2c940

CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Idle(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *__this;
  
  if (DAT_05702d7c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Idle_b__27_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702d7c = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_glue(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicShifterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreateMethodBinding__Wander
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Wander (const MethodInfo* method);
// 0x3e2ca90

CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Wander(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *__this;
  
  if (DAT_05702d7d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Wander_b__28_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702d7d = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_glue(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicShifterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreateMethodBinding__Blind
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Blind (const MethodInfo* method);
// 0x3e2cbe0

CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Blind(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *__this;
  
  if (DAT_05702d7e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Blind_b__29_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702d7e = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x38) = function;
    il2cpp_runtime_glue(lVar2 + 0x38,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicShifterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreateMethodBinding__Cripple
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Cripple (const MethodInfo* method);
// 0x3e2cd30

CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Cripple(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *__this;
  
  if (DAT_05702d7f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Cripple_b__30_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702d7f = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x40);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x40) = function;
    il2cpp_runtime_glue(lVar2 + 0x40,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicShifterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$__CreateMethodBinding__Attack
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o* CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Attack (const MethodInfo* method);
// 0x3e2ce80

CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *
CustomLogic_CustomLogicShifterBuiltin_Bindings____CreateMethodBinding__Attack(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *__this;
  
  if (DAT_05702d80 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicShifterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicShifterBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Attack_b__31_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702d80 = '\x01';
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_c + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
  }
  else {
    function = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x48);
  }
  if (function == (System_Func_T__object____object__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicShifterBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x48) = function;
    il2cpp_runtime_glue(lVar2 + 0x48,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicShifterBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicShifterBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicShifterBuiltin);
  return __this;
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3e2cfd0

void CustomLogic_CustomLogicShifterBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702d81 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"FocusTime");
    il2cpp_init_method_metadata(&"AttackPause");
    il2cpp_init_method_metadata(&"RunSpeedPerLevel");
    il2cpp_init_method_metadata(&"WalkSpeedBase");
    il2cpp_init_method_metadata(&"DeathAnimLength");
    il2cpp_init_method_metadata(&"Attack");
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
    il2cpp_init_method_metadata(&"AIEnabled");
    il2cpp_init_method_metadata(&"MoveToExact");
    il2cpp_init_method_metadata(&"MoveToExactCallback");
    il2cpp_init_method_metadata(&"NapePosition");
    il2cpp_init_method_metadata(&"FocusRange");
    il2cpp_init_method_metadata(&"RunSpeedBase");
    il2cpp_init_method_metadata(&"Idle");
    il2cpp_init_method_metadata(&"Size");
    il2cpp_init_method_metadata(&"JumpForce");
    il2cpp_init_method_metadata(&"RotateSpeed");
    il2cpp_init_method_metadata(&"Wander");
    il2cpp_init_method_metadata(&"FarAttackCooldown");
    il2cpp_init_method_metadata(&"TurnPause");
    il2cpp_init_method_metadata(&"TurnSpeed");
    DAT_05702d81 = '\x01';
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
    System_Collections_Generic_HashSet<object>__Add(__this,"DetectRange",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FocusRange",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FocusTime",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FarAttackCooldown",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackWait",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AttackSpeedMultiplier",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"UsePathfinding",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"AIEnabled",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"NapePosition",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"DeathAnimLength",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MoveTo",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MoveToExact",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MoveToExactCallback",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Target",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Idle",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Wander",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Blind",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Cripple",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Attack",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__Size>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__Size_g____getter_2_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x3e2d460

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__Size>g____getter_2_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     ((__i->fields).Shifter != (Characters_BaseShifter_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__Size>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__Size_g____setter_2_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e2d4a0

void CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__Size>g____setter_2_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool_conflict bVar2;
  float size;
  
  if (DAT_05702d82 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d82 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  size = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return;
      }
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
        Characters_BaseTitan__SetSize((Characters_BaseTitan_o *)pCVar1,size,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeedBase>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__RunSpeedBase_g____getter_3_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x3e2d550

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__RunSpeedBase>g____getter_3_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     ((__i->fields).Shifter != (Characters_BaseShifter_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeedBase>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__RunSpeedBase_g____setter_3_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e2d590

void CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__RunSpeedBase>g____setter_3_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_05702d83 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d83 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2d62a;
        *(float *)&(pCVar1->fields).BaseTitanAnimations = fVar3;
      }
      return;
    }
  }
LAB_03e2d62a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__WalkSpeedBase>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedBase_g____getter_4_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x3e2d630

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__WalkSpeedBase>g____getter_4_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     ((__i->fields).Shifter != (Characters_BaseShifter_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__WalkSpeedBase>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedBase_g____setter_4_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e2d670

void CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__WalkSpeedBase>g____setter_4_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_05702d84 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d84 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2d70a;
        *(float *)((long)&(pCVar1->fields).BaseTitanAnimations + 4) = fVar3;
      }
      return;
    }
  }
LAB_03e2d70a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__WalkSpeedPerLevel>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedPerLevel_g____getter_5_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x3e2d710

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__WalkSpeedPerLevel>g____getter_5_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     ((__i->fields).Shifter != (Characters_BaseShifter_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__WalkSpeedPerLevel>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedPerLevel_g____setter_5_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e2d750

void CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__WalkSpeedPerLevel>g____setter_5_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_05702d85 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d85 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2d7ea;
        (pCVar1->fields).AttackSpeedMultiplier = fVar3;
      }
      return;
    }
  }
LAB_03e2d7ea:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeedPerLevel>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__RunSpeedPerLevel_g____getter_6_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x3e2d7f0

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__RunSpeedPerLevel>g____getter_6_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     ((__i->fields).Shifter != (Characters_BaseShifter_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeedPerLevel>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__RunSpeedPerLevel_g____setter_6_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e2d830

void CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__RunSpeedPerLevel>g____setter_6_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_05702d86 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d86 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2d8ca;
        (pCVar1->fields).TitanGroundMaskLayers.fields.m_Mask = (int32_t)fVar3;
      }
      return;
    }
  }
LAB_03e2d8ca:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__TurnSpeed>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__TurnSpeed_g____getter_7_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x3e2d8d0

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__TurnSpeed>g____getter_7_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     ((__i->fields).Shifter != (Characters_BaseShifter_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__TurnSpeed>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__TurnSpeed_g____setter_7_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e2d910

void CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__TurnSpeed>g____setter_7_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_05702d87 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d87 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2d9aa;
        *(float *)&(pCVar1->fields).AttackSpeeds = fVar3;
      }
      return;
    }
  }
LAB_03e2d9aa:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__RotateSpeed>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__RotateSpeed_g____getter_8_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x3e2d9b0

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__RotateSpeed>g____getter_8_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     ((__i->fields).Shifter != (Characters_BaseShifter_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__RotateSpeed>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__RotateSpeed_g____setter_8_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e2d9f0

void CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__RotateSpeed>g____setter_8_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_05702d88 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d88 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2da8a;
        (pCVar1->fields).PreviousAttackSpeedMultiplier = fVar3;
      }
      return;
    }
  }
LAB_03e2da8a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__JumpForce>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__JumpForce_g____getter_9_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x3e2da90

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__JumpForce>g____getter_9_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     ((__i->fields).Shifter != (Characters_BaseShifter_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__JumpForce>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__JumpForce_g____setter_9_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e2dad0

void CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__JumpForce>g____setter_9_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_05702d89 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d89 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2db6a;
        (pCVar1->fields).ConfusedTime = fVar3;
      }
      return;
    }
  }
LAB_03e2db6a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__ActionPause>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__ActionPause_g____getter_10_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x3e2db70

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__ActionPause>g____getter_10_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     ((__i->fields).Shifter != (Characters_BaseShifter_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__ActionPause>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__ActionPause_g____setter_10_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e2dbb0

void CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__ActionPause>g____setter_10_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_05702d8a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d8a = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2dc4a;
        (pCVar1->fields).IsSit = (bool_conflict)fVar3;
      }
      return;
    }
  }
LAB_03e2dc4a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__AttackPause>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__AttackPause_g____getter_11_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x3e2dc50

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__AttackPause>g____getter_11_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     ((__i->fields).Shifter != (Characters_BaseShifter_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__AttackPause>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__AttackPause_g____setter_11_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e2dc90

void CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__AttackPause>g____setter_11_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_05702d8b == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d8b = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2dd2a;
        *(float *)&(pCVar1->fields).field_0x11c = fVar3;
      }
      return;
    }
  }
LAB_03e2dd2a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__TurnPause>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__TurnPause_g____getter_12_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x3e2dd30

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__TurnPause>g____getter_12_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     ((__i->fields).Shifter != (Characters_BaseShifter_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__TurnPause>g____setter|12_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__TurnPause_g____setter_12_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e2dd70

void CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__TurnPause>g____setter_12_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_05702d8c == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d8c = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2de0a;
        *(float *)&(pCVar1->fields).HoldHuman = fVar3;
      }
      return;
    }
  }
LAB_03e2de0a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__DetectRange>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__DetectRange_g____getter_13_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x3e2de10

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__DetectRange>g____getter_13_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  float local_c;
  
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    local_c = 0.0;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2de72;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__i->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e2de72;
        local_c = (pCVar2->fields).DetectRange;
      }
    }
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_c);
    return pIVar4;
  }
LAB_03e2de72:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__DetectRange>g____setter|13_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__DetectRange_g____setter_13_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e2de80

void CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__DetectRange>g____setter_13_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  float fVar4;
  
  if (DAT_05702d8d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d8d = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2df26;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__i->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e2df26;
        (pCVar2->fields).DetectRange = fVar4;
      }
    }
    return;
  }
LAB_03e2df26:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__FocusRange>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__FocusRange_g____getter_14_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x3e2df30

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__FocusRange>g____getter_14_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  float local_c;
  
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    local_c = 0.0;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2df92;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__i->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e2df92;
        local_c = (pCVar2->fields).FocusRange;
      }
    }
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_c);
    return pIVar4;
  }
LAB_03e2df92:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__FocusRange>g____setter|14_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__FocusRange_g____setter_14_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e2dfa0

void CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__FocusRange>g____setter_14_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  float fVar4;
  
  if (DAT_05702d8e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d8e = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2e046;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__i->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e2e046;
        (pCVar2->fields).FocusRange = fVar4;
      }
    }
    return;
  }
LAB_03e2e046:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__FocusTime>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__FocusTime_g____getter_15_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x3e2e050

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__FocusTime>g____getter_15_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  float local_c;
  
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    local_c = 0.0;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2e0b2;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__i->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e2e0b2;
        local_c = (pCVar2->fields).FocusTime;
      }
    }
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_c);
    return pIVar4;
  }
LAB_03e2e0b2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__FocusTime>g____setter|15_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__FocusTime_g____setter_15_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e2e0c0

void CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__FocusTime>g____setter_15_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  float fVar4;
  
  if (DAT_05702d8f == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d8f = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2e166;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__i->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e2e166;
        (pCVar2->fields).FocusTime = fVar4;
      }
    }
    return;
  }
LAB_03e2e166:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__FarAttackCooldown>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__FarAttackCooldown_g____getter_16_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x3e2e170

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__FarAttackCooldown>g____getter_16_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  float local_c;
  
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    local_c = 0.0;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2e1d2;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__i->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e2e1d2;
        local_c = (pCVar2->fields).FarAttackCooldown;
      }
    }
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_c);
    return pIVar4;
  }
LAB_03e2e1d2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__AttackWait>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__AttackWait_g____getter_17_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x3e2e1e0

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__AttackWait>g____getter_17_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  float local_c;
  
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    local_c = 0.0;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2e242;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__i->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e2e242;
        local_c = (pCVar2->fields).AttackWait;
      }
    }
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,&local_c);
    return pIVar4;
  }
LAB_03e2e242:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__AttackSpeedMultiplier>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__AttackSpeedMultiplier_g____getter_18_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x3e2e250

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__AttackSpeedMultiplier>g____getter_18_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     ((__i->fields).Shifter != (Characters_BaseShifter_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__AttackSpeedMultiplier>g____setter|18_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__AttackSpeedMultiplier_g____setter_18_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e2e290

void CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__AttackSpeedMultiplier>g____setter_18_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_05702d90 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d90 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2e32a;
        (pCVar1->fields).SprintStaminaConsumption = fVar3;
      }
      return;
    }
  }
LAB_03e2e32a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__UsePathfinding>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__UsePathfinding_g____getter_19_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x3e2e330

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__UsePathfinding>g____getter_19_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  undefined8 in_RAX;
  Il2CppObject *pIVar4;
  undefined1 uVar5;
  undefined8 uStack_18;
  
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    uVar5 = 0;
    uStack_18 = in_RAX;
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2e399;
      if ((char)(pCVar1->fields).CustomDamage == '\0') {
        uVar5 = 0;
      }
      else {
        pCVar2 = (__i->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e2e399;
        uVar5 = *(undefined1 *)((long)&(pCVar2->fields)._waitAttackTimeLeft + 1);
      }
    }
    uStack_18 = CONCAT17(uVar5,(undefined7)uStack_18);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_18 + 7);
    return pIVar4;
  }
LAB_03e2e399:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__UsePathfinding>g____setter|19_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__UsePathfinding_g____setter_19_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e2e3a0

void CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__UsePathfinding>g____setter_19_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  bool_conflict bVar4;
  
  if (DAT_05702d91 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d91 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    bVar4 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar4 != '\0') {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2e43c;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__i->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e2e43c;
        *(char *)((long)&(pCVar2->fields)._waitAttackTimeLeft + 1) = (char)bVar3;
      }
    }
    return;
  }
LAB_03e2e43c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__AIEnabled>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__AIEnabled_g____getter_20_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x3e2e450

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__AIEnabled>g____getter_20_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  undefined8 in_RAX;
  Il2CppObject *pIVar4;
  undefined1 uVar5;
  undefined8 uStack_18;
  
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    uVar5 = 0;
    uStack_18 = in_RAX;
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2e4b9;
      if ((char)(pCVar1->fields).CustomDamage == '\0') {
        uVar5 = 0;
      }
      else {
        pCVar2 = (__i->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e2e4b9;
        uVar5 = *(undefined1 *)&(pCVar2->fields)._waitAttackTimeLeft;
      }
    }
    uStack_18 = CONCAT17(uVar5,(undefined7)uStack_18);
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_18 + 7);
    return pIVar4;
  }
LAB_03e2e4b9:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__AIEnabled>g____setter|20_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__AIEnabled_g____setter_20_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e2e4c0

void CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__AIEnabled>g____setter_20_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *__this;
  uint uVar2;
  bool_conflict bVar3;
  
  if (DAT_05702d92 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d92 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_BaseShifter_o *)0x0)) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 == '\0') {
      return;
    }
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
      if ((char)(pCVar1->fields).CustomDamage == '\0') {
        return;
      }
      __this = (__i->fields).Controller;
      if (__this != (Controllers_BaseTitanAIController_o *)0x0) {
        Controllers_BaseTitanAIController__set_AIEnabled(__this,uVar2 & 0xff,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__NapePosition>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__NapePosition_g____getter_21_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x3e2e570

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__NapePosition>g____getter_21_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicShifterBuiltin__get_NapePosition(__i,method);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__DeathAnimLength>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__DeathAnimLength_g____getter_22_0 (CustomLogic_CustomLogicShifterBuiltin_o* __i, const MethodInfo* method);
// 0x3e2e590

Il2CppObject *
CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__DeathAnimLength>g____getter_22_0
          (CustomLogic_CustomLogicShifterBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if ((__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) &&
     ((__i->fields).Shifter != (Characters_BaseShifter_o *)0x0)) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711098,auStack_4);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.Bindings$$<__CreatePropertyBinding__DeathAnimLength>g____setter|22_1
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin_Bindings_____CreatePropertyBinding__DeathAnimLength_g____setter_22_1 (CustomLogic_CustomLogicShifterBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e2e5d0

void CustomLogic_CustomLogicShifterBuiltin_Bindings__<__CreatePropertyBinding__DeathAnimLength>g____setter_22_1
               (CustomLogic_CustomLogicShifterBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool_conflict bVar2;
  float fVar3;
  
  if (DAT_05702d93 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Single_ConvertTo_Single);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702d93 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo<float>(__v,MethodInfo_Single_ConvertTo_Single);
  if (__i != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
    pCVar1 = (__i->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
      bVar2 = Characters_BaseCharacter__IsMine
                        ((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        pCVar1 = (__i->fields).Shifter;
        if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2e66a;
        (pCVar1->fields)._furthestCoreLocalPosition.fields.z = fVar3;
      }
      return;
    }
  }
LAB_03e2e66a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin.<>c__DisplayClass65_0$$.ctor
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin___c__DisplayClass65_0___ctor (CustomLogic_CustomLogicShifterBuiltin___c__DisplayClass65_0_o* __this, const MethodInfo* method);
// 0x3e2a300

void CustomLogic_CustomLogicShifterBuiltin_<>c__DisplayClass65_0___ctor
               (CustomLogic_CustomLogicShifterBuiltin___c__DisplayClass65_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicShifterBuiltin.<>c__DisplayClass65_0$$<MoveToExactCallback>b__0
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin___c__DisplayClass65_0___MoveToExactCallback_b__0 (CustomLogic_CustomLogicShifterBuiltin___c__DisplayClass65_0_o* __this, const MethodInfo* method);
// 0x3e2ee40

void CustomLogic_CustomLogicShifterBuiltin_<>c__DisplayClass65_0__<MoveToExactCallback>b__0
               (CustomLogic_CustomLogicShifterBuiltin___c__DisplayClass65_0_o *__this,
               MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *__this_00;
  CustomLogic_UserMethod_o *userMethod;
  CustomLogic_CustomLogicShifterBuiltin_o *pCVar1;
  System_Object_array *parameterValues;
  long lVar2;
  undefined8 uVar3;
  
  if (DAT_05702d9c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_object);
    DAT_05702d9c = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this_00 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  userMethod = (__this->fields).method;
  parameterValues = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
  if (parameterValues != (System_Object_array *)0x0) {
    pCVar1 = (__this->fields).__4__this;
    if (pCVar1 != (CustomLogic_CustomLogicShifterBuiltin_o *)0x0) {
      lVar2 = il2cpp_runtime_glue(pCVar1,(((parameterValues->obj).klass)->_1).element_class);
      if (lVar2 == 0) {
        uVar3 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar3,0);
      }
    }
    if ((int)parameterValues->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    parameterValues->m_Items[0] = (Il2CppObject *)pCVar1;
    il2cpp_runtime_glue(parameterValues->m_Items,pCVar1);
    if (__this_00 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
      CustomLogic_CustomLogicEvaluator__EvaluateMethod
                (__this_00,userMethod,parameterValues,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin___ctor (CustomLogic_CustomLogicShifterBuiltin_o* __this, Characters_BaseShifter_o* shifter, const MethodInfo* method);
// 0x3e29650

void CustomLogic_CustomLogicShifterBuiltin___ctor
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,Characters_BaseShifter_o *shifter,
               MethodInfo *method)

{
  Controllers_BaseTitanAIController_o *pCVar1;
  
  if (DAT_05702d5d == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_BaseTitanAIController_GetComponent_BaseTitanAICo);
    DAT_05702d5d = '\x01';
  }
  CustomLogic_CustomLogicCharacterBuiltin___ctor
            ((CustomLogic_CustomLogicCharacterBuiltin_o *)__this,
             (Characters_BaseCharacter_o *)shifter,(MethodInfo *)0x0);
  (__this->fields).Shifter = shifter;
  il2cpp_runtime_glue(&(__this->fields).Shifter,shifter);
  if (shifter != (Characters_BaseShifter_o *)0x0) {
    pCVar1 = (Controllers_BaseTitanAIController_o *)
             UnityEngine_Component__GetComponent<object>
                       ((UnityEngine_Component_o *)shifter,MethodInfo_BaseTitanAIController_GetComponent_BaseTitanAICo);
    (__this->fields).Controller = pCVar1;
    il2cpp_runtime_glue(&(__this->fields).Controller,pCVar1);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_Size
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_Size (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x3e296d0

float CustomLogic_CustomLogicShifterBuiltin__get_Size
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    return *(float *)((long)&(pCVar1->fields).TitanColliderToggler + 4);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$set_Size
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_Size (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e296f0

void CustomLogic_CustomLogicShifterBuiltin__set_Size
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
      Characters_BaseTitan__SetSize((Characters_BaseTitan_o *)pCVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_RunSpeedBase
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_RunSpeedBase (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x3e29740

float CustomLogic_CustomLogicShifterBuiltin__get_RunSpeedBase
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    return *(float *)&(pCVar1->fields).BaseTitanAnimations;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$set_RunSpeedBase
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_RunSpeedBase (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e29760

void CustomLogic_CustomLogicShifterBuiltin__set_RunSpeedBase
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2979f;
      *(float *)&(pCVar1->fields).BaseTitanAnimations = value;
    }
    return;
  }
LAB_03e2979f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_WalkSpeedBase
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_WalkSpeedBase (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x3e297b0

float CustomLogic_CustomLogicShifterBuiltin__get_WalkSpeedBase
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    return *(float *)((long)&(pCVar1->fields).BaseTitanAnimations + 4);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$set_WalkSpeedBase
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_WalkSpeedBase (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e297d0

void CustomLogic_CustomLogicShifterBuiltin__set_WalkSpeedBase
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2980f;
      *(float *)((long)&(pCVar1->fields).BaseTitanAnimations + 4) = value;
    }
    return;
  }
LAB_03e2980f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_WalkSpeedPerLevel
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_WalkSpeedPerLevel (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x3e29820

float CustomLogic_CustomLogicShifterBuiltin__get_WalkSpeedPerLevel
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    return (pCVar1->fields).AttackSpeedMultiplier;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$set_WalkSpeedPerLevel
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_WalkSpeedPerLevel (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e29840

void CustomLogic_CustomLogicShifterBuiltin__set_WalkSpeedPerLevel
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2987f;
      (pCVar1->fields).AttackSpeedMultiplier = value;
    }
    return;
  }
LAB_03e2987f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_RunSpeedPerLevel
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_RunSpeedPerLevel (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x3e29890

float CustomLogic_CustomLogicShifterBuiltin__get_RunSpeedPerLevel
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    return (float)(pCVar1->fields).TitanGroundMaskLayers.fields.m_Mask;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$set_RunSpeedPerLevel
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_RunSpeedPerLevel (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e298b0

void CustomLogic_CustomLogicShifterBuiltin__set_RunSpeedPerLevel
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e298ef;
      (pCVar1->fields).TitanGroundMaskLayers.fields.m_Mask = (int32_t)value;
    }
    return;
  }
LAB_03e298ef:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_TurnSpeed
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_TurnSpeed (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x3e29900

float CustomLogic_CustomLogicShifterBuiltin__get_TurnSpeed
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    return *(float *)&(pCVar1->fields).AttackSpeeds;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$set_TurnSpeed
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_TurnSpeed (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e29920

void CustomLogic_CustomLogicShifterBuiltin__set_TurnSpeed
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2995f;
      *(float *)&(pCVar1->fields).AttackSpeeds = value;
    }
    return;
  }
LAB_03e2995f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_RotateSpeed
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_RotateSpeed (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x3e29970

float CustomLogic_CustomLogicShifterBuiltin__get_RotateSpeed
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    return (pCVar1->fields).PreviousAttackSpeedMultiplier;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$set_RotateSpeed
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_RotateSpeed (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e29990

void CustomLogic_CustomLogicShifterBuiltin__set_RotateSpeed
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e299cf;
      (pCVar1->fields).PreviousAttackSpeedMultiplier = value;
    }
    return;
  }
LAB_03e299cf:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_JumpForce
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_JumpForce (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x3e299e0

float CustomLogic_CustomLogicShifterBuiltin__get_JumpForce
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    return (pCVar1->fields).ConfusedTime;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$set_JumpForce
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_JumpForce (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e29a00

void CustomLogic_CustomLogicShifterBuiltin__set_JumpForce
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e29a3f;
      (pCVar1->fields).ConfusedTime = value;
    }
    return;
  }
LAB_03e29a3f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_ActionPause
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_ActionPause (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x3e29a50

float CustomLogic_CustomLogicShifterBuiltin__get_ActionPause
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    return (float)(pCVar1->fields).IsSit;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$set_ActionPause
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_ActionPause (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e29a70

void CustomLogic_CustomLogicShifterBuiltin__set_ActionPause
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e29aaf;
      (pCVar1->fields).IsSit = (bool_conflict)value;
    }
    return;
  }
LAB_03e29aaf:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_AttackPause
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_AttackPause (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x3e29ac0

float CustomLogic_CustomLogicShifterBuiltin__get_AttackPause
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    return *(float *)&(pCVar1->fields).field_0x11c;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$set_AttackPause
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_AttackPause (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e29ae0

void CustomLogic_CustomLogicShifterBuiltin__set_AttackPause
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e29b1f;
      *(float *)&(pCVar1->fields).field_0x11c = value;
    }
    return;
  }
LAB_03e29b1f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_TurnPause
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_TurnPause (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x3e29b30

float CustomLogic_CustomLogicShifterBuiltin__get_TurnPause
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    return *(float *)&(pCVar1->fields).HoldHuman;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$set_TurnPause
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_TurnPause (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e29b50

void CustomLogic_CustomLogicShifterBuiltin__set_TurnPause
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e29b8f;
      *(float *)&(pCVar1->fields).HoldHuman = value;
    }
    return;
  }
LAB_03e29b8f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_DetectRange
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_DetectRange (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x3e29ba0

float CustomLogic_CustomLogicShifterBuiltin__get_DetectRange
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  float fVar4;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    fVar4 = 0.0;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e29bda;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e29bda;
        fVar4 = (pCVar2->fields).DetectRange;
      }
    }
    return fVar4;
  }
LAB_03e29bda:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$set_DetectRange
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_DetectRange (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e29be0

void CustomLogic_CustomLogicShifterBuiltin__set_DetectRange
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e29c2b;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e29c2b;
        (pCVar2->fields).DetectRange = value;
      }
    }
    return;
  }
LAB_03e29c2b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_FocusRange
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_FocusRange (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x3e29c30

float CustomLogic_CustomLogicShifterBuiltin__get_FocusRange
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  float fVar4;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    fVar4 = 0.0;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e29c6a;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e29c6a;
        fVar4 = (pCVar2->fields).FocusRange;
      }
    }
    return fVar4;
  }
LAB_03e29c6a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$set_FocusRange
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_FocusRange (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e29c70

void CustomLogic_CustomLogicShifterBuiltin__set_FocusRange
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e29cbb;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e29cbb;
        (pCVar2->fields).FocusRange = value;
      }
    }
    return;
  }
LAB_03e29cbb:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_FocusTime
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_FocusTime (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x3e29cc0

float CustomLogic_CustomLogicShifterBuiltin__get_FocusTime
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  float fVar4;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    fVar4 = 0.0;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e29cfa;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e29cfa;
        fVar4 = (pCVar2->fields).FocusTime;
      }
    }
    return fVar4;
  }
LAB_03e29cfa:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$set_FocusTime
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_FocusTime (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e29d00

void CustomLogic_CustomLogicShifterBuiltin__set_FocusTime
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e29d4b;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e29d4b;
        (pCVar2->fields).FocusTime = value;
      }
    }
    return;
  }
LAB_03e29d4b:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_FarAttackCooldown
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_FarAttackCooldown (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x3e29d50

float CustomLogic_CustomLogicShifterBuiltin__get_FarAttackCooldown
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  float fVar4;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    fVar4 = 0.0;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e29d8a;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e29d8a;
        fVar4 = (pCVar2->fields).FarAttackCooldown;
      }
    }
    return fVar4;
  }
LAB_03e29d8a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_AttackWait
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_AttackWait (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x3e29d90

float CustomLogic_CustomLogicShifterBuiltin__get_AttackWait
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  float fVar4;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    fVar4 = 0.0;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e29dca;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e29dca;
        fVar4 = (pCVar2->fields).AttackWait;
      }
    }
    return fVar4;
  }
LAB_03e29dca:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_AttackSpeedMultiplier
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_AttackSpeedMultiplier (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x3e29dd0

float CustomLogic_CustomLogicShifterBuiltin__get_AttackSpeedMultiplier
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    return (pCVar1->fields).SprintStaminaConsumption;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$set_AttackSpeedMultiplier
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_AttackSpeedMultiplier (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e29df0

void CustomLogic_CustomLogicShifterBuiltin__set_AttackSpeedMultiplier
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e29e2f;
      (pCVar1->fields).SprintStaminaConsumption = value;
    }
    return;
  }
LAB_03e29e2f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_UsePathfinding
// il2cpp: bool CustomLogic_CustomLogicShifterBuiltin__get_UsePathfinding (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x3e29e40

bool_conflict
CustomLogic_CustomLogicShifterBuiltin__get_UsePathfinding
          (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  uint uVar4;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    uVar4 = 0;
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e29e8d;
      if ((char)(pCVar1->fields).CustomDamage == '\0') {
        uVar4 = 0;
      }
      else {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e29e8d;
        uVar4 = (uint)(*(char *)((long)&(pCVar2->fields)._waitAttackTimeLeft + 1) != '\0');
      }
    }
    return uVar4;
  }
LAB_03e29e8d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$set_UsePathfinding
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_UsePathfinding (CustomLogic_CustomLogicShifterBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3e29ea0

void CustomLogic_CustomLogicShifterBuiltin__set_UsePathfinding
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e29ee2;
      if ((char)(pCVar1->fields).CustomDamage != '\0') {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e29ee2;
        *(char *)((long)&(pCVar2->fields)._waitAttackTimeLeft + 1) = (char)value;
      }
    }
    return;
  }
LAB_03e29ee2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_AIEnabled
// il2cpp: bool CustomLogic_CustomLogicShifterBuiltin__get_AIEnabled (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x3e29ef0

bool_conflict
CustomLogic_CustomLogicShifterBuiltin__get_AIEnabled
          (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool_conflict bVar3;
  uint uVar4;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    uVar4 = 0;
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e29f3d;
      if ((char)(pCVar1->fields).CustomDamage == '\0') {
        uVar4 = 0;
      }
      else {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto LAB_03e29f3d;
        uVar4 = (uint)(*(char *)&(pCVar2->fields)._waitAttackTimeLeft != '\0');
      }
    }
    return uVar4;
  }
LAB_03e29f3d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$set_AIEnabled
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_AIEnabled (CustomLogic_CustomLogicShifterBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3e29f50

void CustomLogic_CustomLogicShifterBuiltin__set_AIEnabled
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
      if ((char)(pCVar1->fields).CustomDamage == '\0') {
        return;
      }
      __this_00 = (__this->fields).Controller;
      if (__this_00 != (Controllers_BaseTitanAIController_o *)0x0) {
        Controllers_BaseTitanAIController__set_AIEnabled(__this_00,value & 0xff,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_NapePosition
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicShifterBuiltin__get_NapePosition (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x3e29fb0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicShifterBuiltin__get_NapePosition
          (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  System_Action_Hashtable__o *pSVar2;
  System_DelegateData_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  CustomLogic_CustomLogicVector3Builtin_o *__this_02;
  UnityEngine_Vector3_o value;
  
  if (DAT_05702d5e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    DAT_05702d5e = '\x01';
  }
  pCVar1 = (__this->fields).Shifter;
  if (((pCVar1 != (Characters_BaseShifter_o *)0x0) &&
      (pSVar2 = (pCVar1->fields).OnPlayerPropertiesChanged,
      pSVar2 != (System_Action_Hashtable__o *)0x0)) &&
     (__this_00 = (pSVar2->fields).data, __this_00 != (System_DelegateData_o *)0x0)) {
    __this_01 = UnityEngine_Component__get_transform
                          ((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      value = UnityEngine_Transform__get_position(__this_01,(MethodInfo *)0x0);
      __this_02 = (CustomLogic_CustomLogicVector3Builtin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      CustomLogic_CustomLogicVector3Builtin___ctor(__this_02,value,(MethodInfo *)0x0);
      return __this_02;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_DeathAnimLength
// il2cpp: float CustomLogic_CustomLogicShifterBuiltin__get_DeathAnimLength (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x3e2a050

float CustomLogic_CustomLogicShifterBuiltin__get_DeathAnimLength
                (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    return (pCVar1->fields)._furthestCoreLocalPosition.fields.z;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$set_DeathAnimLength
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__set_DeathAnimLength (CustomLogic_CustomLogicShifterBuiltin_o* __this, float value, const MethodInfo* method);
// 0x3e2a070

void CustomLogic_CustomLogicShifterBuiltin__set_DeathAnimLength
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2a0af;
      (pCVar1->fields)._furthestCoreLocalPosition.fields.z = value;
    }
    return;
  }
LAB_03e2a0af:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$MoveTo
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__MoveTo (CustomLogic_CustomLogicShifterBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* position, float range, bool ignoreEnemies, const MethodInfo* method);
// 0x3e2a0c0

void CustomLogic_CustomLogicShifterBuiltin__MoveTo
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *position,float range,
               bool_conflict ignoreEnemies,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
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


// CustomLogic.CustomLogicShifterBuiltin$$MoveToExact
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__MoveToExact (CustomLogic_CustomLogicShifterBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* position, float timeoutPadding, const MethodInfo* method);
// 0x3e2a140

void CustomLogic_CustomLogicShifterBuiltin__MoveToExact
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,
               CustomLogic_CustomLogicVector3Builtin_o *position,float timeoutPadding,
               MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
      if (*(char *)&(pCVar1->fields).FeedVictimName != '\0') {
        return;
      }
      if ((char)(pCVar1->fields).CustomDamage == '\0') {
        return;
      }
      if ((position != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) &&
         (__this_00 = (__this->fields).Controller,
         __this_00 != (Controllers_BaseTitanAIController_o *)0x0)) {
        Controllers_BaseTitanAIController__MoveToExact
                  (__this_00,(UnityEngine_Vector3_o)(position->fields).Value.fields,timeoutPadding,
                   1.0,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$MoveToExactCallback
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__MoveToExactCallback (CustomLogic_CustomLogicShifterBuiltin_o* __this, CustomLogic_UserMethod_o* method, CustomLogic_CustomLogicVector3Builtin_o* position, float range, float timeoutPadding, const MethodInfo* method);
// 0x3e2a1c0

void CustomLogic_CustomLogicShifterBuiltin__MoveToExactCallback(void)

{
  long lVar1;
  Controllers_BaseTitanAIController_o *__this;
  bool_conflict bVar2;
  Il2CppObject *__this_00;
  System_Action_o *action;
  long in_RDX;
  Il2CppClass *in_RSI;
  void *in_RDI;
  float in_XMM0_Da;
  float in_XMM1_Da;
  
  if (DAT_05702d5f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action);
    il2cpp_init_method_metadata(&MethodInfo_Void__MoveToExactCallback_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass65_0);
    DAT_05702d5f = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass65_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = in_RSI;
    il2cpp_runtime_glue(__this_00 + 1);
    __this_00[1].monitor = in_RDI;
    il2cpp_runtime_glue(&__this_00[1].monitor);
    if (*(Characters_BaseCharacter_o **)((long)in_RDI + 0x38) != (Characters_BaseCharacter_o *)0x0)
    {
      bVar2 = Characters_BaseCharacter__IsMine
                        (*(Characters_BaseCharacter_o **)((long)in_RDI + 0x38),(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return;
      }
      lVar1 = *(long *)((long)in_RDI + 0x38);
      if (lVar1 != 0) {
        if (*(char *)(lVar1 + 0x68) != '\0') {
          return;
        }
        if (*(char *)(lVar1 + 0x78) == '\0') {
          return;
        }
        __this = *(Controllers_BaseTitanAIController_o **)((long)in_RDI + 0x40);
        action = (System_Action_o *)il2cpp_runtime_glue(TypeInfo_Action);
        System_Action___ctor();
        if ((in_RDX != 0) && (__this != (Controllers_BaseTitanAIController_o *)0x0)) {
          Controllers_BaseTitanAIController__MoveToExactCallback
                    (__this,action,
                     (UnityEngine_Vector3_o)*(UnityEngine_Vector3_Fields *)(in_RDX + 0x30),
                     in_XMM0_Da,in_XMM1_Da,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$Target
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__Target (CustomLogic_CustomLogicShifterBuiltin_o* __this, Il2CppObject* enemyObj, float focus, const MethodInfo* method);
// 0x3e2a310

void CustomLogic_CustomLogicShifterBuiltin__Target
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,Il2CppObject *enemyObj,float focus,
               MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Characters_BaseShifter_o *pCVar3;
  Il2CppClass *pIVar4;
  Controllers_BaseTitanAIController_o *__this_00;
  bool_conflict bVar5;
  
  if (DAT_05702d60 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicCharacterBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicMapTargetableBuiltin);
    DAT_05702d60 = '\x01';
  }
  pCVar3 = (__this->fields).Shifter;
  if (pCVar3 != (Characters_BaseShifter_o *)0x0) {
    bVar5 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar3,(MethodInfo *)0x0)
    ;
    if ((char)bVar5 == '\0') {
      return;
    }
    pCVar3 = (__this->fields).Shifter;
    if (pCVar3 != (Characters_BaseShifter_o *)0x0) {
      if (*(char *)&(pCVar3->fields).FeedVictimName != '\0') {
        return;
      }
      if ((char)(pCVar3->fields).CustomDamage == '\0') {
        return;
      }
      if (enemyObj != (Il2CppObject *)0x0) {
        pIVar4 = enemyObj->klass;
        bVar1 = (pIVar4->_2).naturalAligment;
        bVar2 = (TypeInfo_CustomLogicMapTargetableBuiltin->_2).naturalAligment;
        if ((bVar1 < bVar2) || ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicMapTargetableBuiltin)) {
          bVar2 = (TypeInfo_CustomLogicCharacterBuiltin->_2).naturalAligment;
          if ((bVar1 < bVar2) || ((pIVar4->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicCharacterBuiltin)) {
LAB_03e2a42d:
                    /* WARNING: Subroutine does not return */
            il2cpp_unwind_resume(enemyObj);
          }
          bVar1 = (TypeInfo_CustomLogicCharacterBuiltin->_2).naturalAligment;
          if (((enemyObj->klass->_2).naturalAligment < bVar1) ||
             ((enemyObj->klass->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicCharacterBuiltin))
          goto LAB_03e2a42d;
          pIVar4 = enemyObj[3].klass;
          __this_00 = (__this->fields).Controller;
        }
        else {
          pIVar4 = enemyObj[3].monitor;
          __this_00 = (__this->fields).Controller;
        }
        if (__this_00 != (Controllers_BaseTitanAIController_o *)0x0) {
          Controllers_BaseTitanAIController__SetEnemy
                    (__this_00,(Characters_ITargetable_o *)pIVar4,focus,(MethodInfo *)0x0);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$Idle
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__Idle (CustomLogic_CustomLogicShifterBuiltin_o* __this, float time, const MethodInfo* method);
// 0x3e2a440

void CustomLogic_CustomLogicShifterBuiltin__Idle
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float time,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
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


// CustomLogic.CustomLogicShifterBuiltin$$Wander
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__Wander (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x3e2a4a0

void CustomLogic_CustomLogicShifterBuiltin__Wander
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Controllers_BaseTitanAIController_o *__this_00;
  bool_conflict bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 == '\0') {
      return;
    }
    pCVar1 = (__this->fields).Shifter;
    if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
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


// CustomLogic.CustomLogicShifterBuiltin$$Blind
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__Blind (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x3e2a4f0

void CustomLogic_CustomLogicShifterBuiltin__Blind
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar2;
  undefined8 extraout_RDX;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2a52d;
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
LAB_03e2a52d:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$Cripple
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__Cripple (CustomLogic_CustomLogicShifterBuiltin_o* __this, float time, const MethodInfo* method);
// 0x3e2a540

void CustomLogic_CustomLogicShifterBuiltin__Cripple
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,float time,MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Il2CppMethodPointer vtable_dispatch;
  bool_conflict bVar2;
  undefined8 extraout_RDX;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    bVar2 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar2 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2a595;
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
LAB_03e2a595:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$Attack
// il2cpp: void CustomLogic_CustomLogicShifterBuiltin__Attack (CustomLogic_CustomLogicShifterBuiltin_o* __this, System_String_o* attack, const MethodInfo* method);
// 0x3e2a5a0

void CustomLogic_CustomLogicShifterBuiltin__Attack
               (CustomLogic_CustomLogicShifterBuiltin_o *__this,System_String_o *attack,
               MethodInfo *method)

{
  Characters_BaseShifter_o *pCVar1;
  Il2CppMethodPointer vtable_dispatch;
  char cVar2;
  bool_conflict bVar3;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
    bVar3 = Characters_BaseCharacter__IsMine((Characters_BaseCharacter_o *)pCVar1,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 != '\0') {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_BaseShifter_o *)0x0) goto LAB_03e2a60f;
      if (*(char *)&(pCVar1->fields).FeedVictimName == '\0') {
        cVar2 = (*(pCVar1->klass->vtable)._129_CanAttack.methodPtr)
                          (pCVar1,(pCVar1->klass->vtable)._129_CanAttack.method);
        if (cVar2 != '\0') {
          pCVar1 = (__this->fields).Shifter;
          if (pCVar1 != (Characters_BaseShifter_o *)0x0) {
            vtable_dispatch = (pCVar1->klass->vtable)._128_Attack.methodPtr;
            (*vtable_dispatch)
                      (pCVar1,attack,(pCVar1->klass->vtable)._128_Attack.method,
                       vtable_dispatch);
            return;
          }
          goto LAB_03e2a60f;
        }
      }
    }
    return;
  }
LAB_03e2a60f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicShifterBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicShifterBuiltin__get_ClassName (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x3e2a620

System_String_o *
CustomLogic_CustomLogicShifterBuiltin__get_ClassName
          (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05702d61 == '\0') {
    il2cpp_init_method_metadata(&"Shifter");
    DAT_05702d61 = '\x01';
  }
  return "Shifter";
}


// CustomLogic.CustomLogicShifterBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicShifterBuiltin__get_IsAbstract (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x3e2a650

bool_conflict
CustomLogic_CustomLogicShifterBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicShifterBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicShifterBuiltin__get_IsStatic (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x3e2a660

bool_conflict
CustomLogic_CustomLogicShifterBuiltin__get_IsStatic
          (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicShifterBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicShifterBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicShifterBuiltin_o* __this, const MethodInfo* method);
// 0x3e2a670

bool_conflict
CustomLogic_CustomLogicShifterBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicShifterBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


