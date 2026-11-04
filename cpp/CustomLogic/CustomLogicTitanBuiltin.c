// Type: CustomLogic.CustomLogicTitanBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicTitanBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicTitanBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicTitanBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicTitanBuiltin_o* CustomLogic_CustomLogicTitanBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fa40f0

CustomLogic_CustomLogicTitanBuiltin_o *
CustomLogic_CustomLogicTitanBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

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
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicTitanBuiltin constructor found that takes ");
  pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_1a77cc0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x181fa6270

void CustomLogic_CustomLogicTitanBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_184345840 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345840 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicTitanBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Target>b__30_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings___c_____CreateMethodBinding__Target_b__30_0 (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTitanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181fa5c30

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings___c_____CreateMethodBinding__Target_b__30_0
          (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTitanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *enemyObj;
  Il2CppObject *obj;
  float focus;
  
  if (Il2CppMethodInitialized_184345841 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345841 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if (((int)__a->max_length == 0) || ((uint)__a->max_length < 2)) {
      ThrowIndexOutOfRangeException();
    }
    enemyObj = __a->m_Items[0];
    obj = __a->m_Items[1];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    focus = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                      (obj,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicTitanBuiltin__Target(__c,enemyObj,focus,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Wander>b__31_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings___c_____CreateMethodBinding__Wander_b__31_0 (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTitanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181fa6000

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings___c_____CreateMethodBinding__Wander_b__31_0
          (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTitanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicTitanBuiltin__Wander(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Blind>b__32_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings___c_____CreateMethodBinding__Blind_b__32_0 (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTitanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181fa4dd0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings___c_____CreateMethodBinding__Blind_b__32_0
          (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTitanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicTitanBuiltin__Blind(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Cripple>b__33_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings___c_____CreateMethodBinding__Cripple_b__33_0 (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTitanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181fa4e00

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings___c_____CreateMethodBinding__Cripple_b__33_0
          (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTitanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  float time;
  
  if (Il2CppMethodInitialized_184345842 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345842 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    time = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                     (obj,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    if (__c != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicTitanBuiltin__Cripple(__c,time,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings.<>c$$<__CreateMethodBinding__Stun>b__34_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings___c_____CreateMethodBinding__Stun_b__34_0 (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicTitanBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181fa5b80

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings___c_____CreateMethodBinding__Stun_b__34_0
          (CustomLogic_CustomLogicTitanBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicTitanBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  float duration;
  
  if (Il2CppMethodInitialized_184345843 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345843 = '\x01';
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
    if (__c != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
      CustomLogic_CustomLogicTitanBuiltin__Stun(__c,duration,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicTitanBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181f85e90

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicTitanBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *__this_00;
  ExitGames_Client_Photon_SerializeStreamMethod_o *pEVar4;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *pSVar5;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  System_String_o *pSVar6;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_02;
  MethodInfo *pMVar7;
  
  if (Il2CppMethodInitialized_184345806 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&"Size");
    il2cpp_codegen_initialize_runtime_metadata(&"JumpForce");
    il2cpp_codegen_initialize_runtime_metadata(&"IsHardened");
    il2cpp_codegen_initialize_runtime_metadata(&"RotateSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"Wander");
    il2cpp_codegen_initialize_runtime_metadata(&"FarAttackCooldown");
    il2cpp_codegen_initialize_runtime_metadata(&"CanRun");
    il2cpp_codegen_initialize_runtime_metadata(&"TurnPause");
    il2cpp_codegen_initialize_runtime_metadata(&"TurnSpeed");
    Il2CppMethodInitialized_184345806 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x783cf543) {
    if (uVar3 < 0x320c4020) {
      if (uVar3 < 0x22bd3b3f) {
        if (uVar3 < 0x17a0b8d7) {
          if (uVar3 == 0x7186f3c) {
            bVar2 = System_String__op_Equality(name,"NapePosition",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f87d4b;
            if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345817 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__NapePosition_g____getter_1
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object)
              ;
              Il2CppMethodInitialized_184345817 = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
            pMVar7 = 
            MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__NapePosition_g____getter_1
            ;
            goto label_181f867c6;
          }
          if (uVar3 != 0x17a0b8d6) goto label_181f87d4b;
          bVar2 = System_String__op_Equality(name,"Stamina",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f87d4b;
          if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345815 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object)
            ;
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
            Il2CppMethodInitialized_184345815 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
          System_Func_object__object____ctor
                    (__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__Stamina_g____getter_16_0
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__Stamina_g____setter_16_1
          ;
        }
        else {
          if (uVar3 != 0x1d46812f) {
            if (uVar3 != 0x22bd3b3e) goto label_181f87d4b;
            bVar2 = System_String__op_Equality(name,"IsHardened",(MethodInfo *)0x0);
            if (!bVar2) goto label_181f87d4b;
            if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_18434581a == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__IsHardened_g____getter_21
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object)
              ;
              Il2CppMethodInitialized_18434581a = '\x01';
            }
            __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
            pMVar7 = 
            MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__IsHardened_g____getter_21
            ;
label_181f867c6:
            System_Func_object__object____ctor
                      (__this,(Il2CppObject *)0x0,(intptr_t)pMVar7,(MethodInfo_16E67D0 *)0x0);
            __this_01 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
            __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)0x0;
            goto label_181f87d26;
          }
          bVar2 = System_String__op_Equality(name,"AttackSpeedMultiplier",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f87d4b;
          if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345820 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object)
            ;
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackSpeedMultiplier_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackSpeedMultiplier_g_40e72c0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
            Il2CppMethodInitialized_184345820 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
          System_Func_object__object____ctor
                    (__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackSpeedMultiplier_g
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackSpeedMultiplier_g_40e72c0
          ;
        }
      }
      else if (uVar3 < 0x2ae002cd) {
        if (uVar3 == 0x246c98e0) {
          bVar2 = System_String__op_Equality(name,"RunSpeedBase",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f87d4b;
          if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434580b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object)
            ;
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
            Il2CppMethodInitialized_18434580b = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
          System_Func_object__object____ctor
                    (__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__RunSpeedBase_g____getter_6
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__RunSpeedBase_g____setter_6
          ;
        }
        else {
          if (uVar3 != 0x2ae002cc) goto label_181f87d4b;
          bVar2 = System_String__op_Equality(name,"JumpForce",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f87d4b;
          if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345811 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object)
            ;
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
            Il2CppMethodInitialized_184345811 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
          System_Func_object__object____ctor
                    (__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__JumpForce_g____getter_12_0
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__JumpForce_g____setter_12_1
          ;
        }
      }
      else if (uVar3 == 0x2b5690da) {
        bVar2 = System_String__op_Equality(name,"DeathVelocity",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f87d4b;
        if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345808 == '\0') {
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
          Il2CppMethodInitialized_184345808 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object)
        ;
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__DeathVelocity_g____getter
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__DeathVelocity_g____setter
        ;
      }
      else {
        if (uVar3 != 0x320c401f) goto label_181f87d4b;
        bVar2 = System_String__op_Equality(name,"ActionPause",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f87d4b;
        if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345812 == '\0') {
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
          Il2CppMethodInitialized_184345812 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object)
        ;
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__ActionPause_g____getter_13
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__ActionPause_g____setter_13
        ;
      }
    }
    else if (uVar3 < 0x6709f835) {
      if (0x46b92be8 < uVar3) {
        if (uVar3 == 0x5d992b41) {
          bVar2 = System_String__op_Equality(name,"Stun",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345827 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c___CreateMethodBinding__Stun_b__34_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345827 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9__34_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicTitanBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c___CreateMethodBinding__Stun_b__34_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9__34_0 =
                   (System_Func_CustomLogicTitanBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9__34_0,
                         pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
        else if (uVar3 == 0x6709f834) {
          bVar2 = System_String__op_Equality(name,"Wander",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345824 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c___CreateMethodBinding__Wander_b__31_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345824 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9__31_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicTitanBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c___CreateMethodBinding__Wander_b__31_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9__31_0 =
                   (System_Func_CustomLogicTitanBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9__31_0,
                         pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
        goto label_181f87d4b;
      }
      if (uVar3 == 0x3da81e8d) {
        bVar2 = System_String__op_Equality(name,"RotateSpeed",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f87d4b;
        if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345810 == '\0') {
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
          Il2CppMethodInitialized_184345810 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object)
        ;
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__RotateSpeed_g____getter_11
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__RotateSpeed_g____setter_11
        ;
      }
      else {
        if (uVar3 != 0x46b92be8) goto label_181f87d4b;
        bVar2 = System_String__op_Equality(name,"FocusRange",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f87d4b;
        if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434581b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FocusRange_g____getter_22
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FocusRange_g____setter_22
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
          Il2CppMethodInitialized_18434581b = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object)
        ;
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FocusRange_g____getter_22
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FocusRange_g____setter_22
        ;
      }
    }
    else if (uVar3 < 0x6b178ac3) {
      if (uVar3 == 0x69ba519b) {
        bVar2 = System_String__op_Equality(name,"FarAttackCooldown",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f87d4b;
        if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434581d == '\0') {
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
          Il2CppMethodInitialized_18434581d = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object)
        ;
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FarAttackCooldown_g____get
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FarAttackCooldown_g____set
        ;
      }
      else {
        if (uVar3 != 0x6b178ac2) goto label_181f87d4b;
        bVar2 = System_String__op_Equality(name,"IsWarded",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f87d4b;
        if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345819 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__IsWarded_g____getter_20_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__IsWarded_g____setter_20_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
          Il2CppMethodInitialized_184345819 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object)
        ;
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__IsWarded_g____getter_20_0
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__IsWarded_g____setter_20_1
        ;
      }
    }
    else if (uVar3 == 0x6fd42728) {
      bVar2 = System_String__op_Equality(name,"WalkSpeedPerLevel",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f87d4b;
      if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434580d == '\0') {
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
        Il2CppMethodInitialized_18434580d = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__WalkSpeedPerLevel_g____get
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__WalkSpeedPerLevel_g____set
      ;
    }
    else {
      if (uVar3 != 0x783cf542) goto label_181f87d4b;
      bVar2 = System_String__op_Equality(name,"HeadSize",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f87d4b;
      if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434580a == '\0') {
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
        Il2CppMethodInitialized_18434580a = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__HeadSize_g____getter_5_0
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__HeadSize_g____setter_5_1
      ;
    }
  }
  else if (uVar3 < 0xb5f3afde) {
    if (uVar3 < 0x9891bf89) {
      if (uVar3 < 0x8dc5a9a4) {
        if (uVar3 == 0x8b67f168) {
          bVar2 = System_String__op_Equality(name,"Target",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345823 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicTitanBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c___CreateMethodBinding__Target_b__30_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345823 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9__30_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicTitanBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c___CreateMethodBinding__Target_b__30_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9__30_0 =
                   (System_Func_CustomLogicTitanBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9__30_0,
                         pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
          goto label_181f87d4b;
        }
        if (uVar3 != 0x8dc5a9a3) goto label_181f87d4b;
        bVar2 = System_String__op_Equality(name,"NeckMount",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f87d4b;
        if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345822 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__NeckMount_g____getter_29_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
          Il2CppMethodInitialized_184345822 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object)
        ;
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__NeckMount_g____getter_29_0
        ;
        goto label_181f867c6;
      }
      if (uVar3 == 0x90cf188a) {
        bVar2 = System_String__op_Equality(name,"FocusTime",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f87d4b;
        if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434581c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FocusTime_g____getter_23_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FocusTime_g____setter_23_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
          Il2CppMethodInitialized_18434581c = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object)
        ;
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FocusTime_g____getter_23_0
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FocusTime_g____setter_23_1
        ;
      }
      else {
        if (uVar3 != 0x9891bf88) goto label_181f87d4b;
        bVar2 = System_String__op_Equality(name,"AttackWait",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f87d4b;
        if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434581e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackWait_g____getter_25
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackWait_g____setter_25
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
          Il2CppMethodInitialized_18434581e = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object)
        ;
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackWait_g____getter_25
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackWait_g____setter_25
        ;
      }
    }
    else if (uVar3 < 0xab8d157b) {
      if (uVar3 == 0xa6478e7c) {
        bVar2 = System_String__op_Equality(name,"Size",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f87d4b;
        if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345809 == '\0') {
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
          Il2CppMethodInitialized_184345809 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object)
        ;
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__Size_g____getter_4_0
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__Size_g____setter_4_1;
      }
      else {
        if (uVar3 != 0xab8d157a) goto label_181f87d4b;
        bVar2 = System_String__op_Equality(name,"MaxStamina",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f87d4b;
        if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345816 == '\0') {
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
          Il2CppMethodInitialized_184345816 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object)
        ;
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__MaxStamina_g____getter_17
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__MaxStamina_g____setter_17
        ;
      }
    }
    else if (uVar3 == 0xb20fe4aa) {
      bVar2 = System_String__op_Equality(name,"CanRun",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f87d4b;
      if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434581f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__CanRun_g____getter_26_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__CanRun_g____setter_26_1
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
        Il2CppMethodInitialized_18434581f = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__CanRun_g____getter_26_0
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__CanRun_g____setter_26_1
      ;
    }
    else {
      if (uVar3 != 0xb5f3afdd) goto label_181f87d4b;
      bVar2 = System_String__op_Equality(name,"TurnSpeed",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f87d4b;
      if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434580f == '\0') {
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
        Il2CppMethodInitialized_18434580f = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__TurnSpeed_g____getter_10_0
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__TurnSpeed_g____setter_10_1
      ;
    }
  }
  else if (uVar3 < 0xd0d86e03) {
    if (uVar3 < 0xbfccc708) {
      if (uVar3 == 0xbb10b4ac) {
        bVar2 = System_String__op_Equality(name,"HeadMount",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f87d4b;
        if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345821 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__HeadMount_g____getter_28_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
          Il2CppMethodInitialized_184345821 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object)
        ;
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__HeadMount_g____getter_28_0
        ;
      }
      else {
        if (uVar3 != 0xbfccc707) goto label_181f87d4b;
        bVar2 = System_String__op_Equality(name,"IsCrawler",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f87d4b;
        if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345818 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__IsCrawler_g____getter_19_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
          Il2CppMethodInitialized_184345818 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object)
        ;
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__IsCrawler_g____getter_19_0
        ;
      }
      goto label_181f867c6;
    }
    if (uVar3 == 0xc746e5f5) {
      bVar2 = System_String__op_Equality(name,"AttackPause",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f87d4b;
      if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345813 == '\0') {
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
        Il2CppMethodInitialized_184345813 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackPause_g____getter_14
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackPause_g____setter_14
      ;
    }
    else {
      if (uVar3 != 0xd0d86e02) goto label_181f87d4b;
      bVar2 = System_String__op_Equality(name,"RunSpeedPerLevel",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f87d4b;
      if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434580e == '\0') {
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
        Il2CppMethodInitialized_18434580e = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__RunSpeedPerLevel_g____gett
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__RunSpeedPerLevel_g____sett
      ;
    }
  }
  else if (uVar3 < 0xe4d66f55) {
    if (uVar3 != 0xd2528dac) {
      if (uVar3 == 0xe4d66f54) {
        bVar2 = System_String__op_Equality(name,"Blind",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345825 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTitanBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c___CreateMethodBinding__Blind_b__32_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
            Il2CppMethodInitialized_184345825 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9__32_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicTitanBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c___CreateMethodBinding__Blind_b__32_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9__32_0 =
                 (System_Func_CustomLogicTitanBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9__32_0,
                       pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
label_181f87d4b:
      pSVar6 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicTitanBuiltin not found");
      str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
      pSVar6 = System_String__Concat_1969b70(str0,name,pSVar6,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      System_Exception___ctor_1b6abf0(__this_02,pSVar6,(MethodInfo *)0x0);
      pMVar7 = il2cpp_codegen_get_runtime_metadata
                         (&MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_CreateMemberBinding);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,pMVar7);
    }
    bVar2 = System_String__op_Equality(name,"TurnPause",(MethodInfo *)0x0);
    if (!bVar2) goto label_181f87d4b;
    if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_184345814 == '\0') {
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
      Il2CppMethodInitialized_184345814 = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    System_Func_object__object____ctor
              (__this,(Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__TurnPause_g____getter_15_0
               ,(MethodInfo_16E67D0 *)0x0);
    __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
    pMVar7 = 
    MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__TurnPause_g____setter_15_1
    ;
  }
  else if (uVar3 == 0xeb9a5ec5) {
    bVar2 = System_String__op_Equality(name,"DeathType",(MethodInfo *)0x0);
    if (!bVar2) goto label_181f87d4b;
    if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_184345807 == '\0') {
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
      Il2CppMethodInitialized_184345807 = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    System_Func_object__object____ctor
              (__this,(Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__DeathType_g____getter_2_0
               ,(MethodInfo_16E67D0 *)0x0);
    __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
    pMVar7 = 
    MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__DeathType_g____setter_2_1
    ;
  }
  else {
    if (uVar3 != 0xedff5766) {
      if (uVar3 == 0xf96e74c8) {
        bVar2 = System_String__op_Equality(name,"Cripple",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345826 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicTitanBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c___CreateMethodBinding__Cripple_b__33_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
            Il2CppMethodInitialized_184345826 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9__33_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicTitanBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c___CreateMethodBinding__Cripple_b__33_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9__33_0 =
                 (System_Func_CustomLogicTitanBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9__33_0,
                       pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      goto label_181f87d4b;
    }
    bVar2 = System_String__op_Equality(name,"WalkSpeedBase",(MethodInfo *)0x0);
    if (!bVar2) goto label_181f87d4b;
    if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_18434580c == '\0') {
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
      Il2CppMethodInitialized_18434580c = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    System_Func_object__object____ctor
              (__this,(Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__WalkSpeedBase_g____getter
               ,(MethodInfo_16E67D0 *)0x0);
    __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
    pMVar7 = 
    MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__WalkSpeedBase_g____setter
    ;
  }
  System_Action_object__object____ctor
            (__this_00,(Il2CppObject *)0x0,(intptr_t)pMVar7,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
label_181f87d26:
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__DeathType
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__DeathType (const MethodInfo* method);
// 0x181f963f0

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__DeathType(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345807 == '\0') {
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
    Il2CppMethodInitialized_184345807 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__DeathType_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__DeathType_g____setter_2_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__DeathVelocity
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__DeathVelocity (const MethodInfo* method);
// 0x181f964e0

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__DeathVelocity(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345808 == '\0') {
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
    Il2CppMethodInitialized_184345808 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__DeathVelocity_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__DeathVelocity_g____setter
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__Size
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__Size (const MethodInfo* method);
// 0x181f9b030

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__Size(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345809 == '\0') {
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
    Il2CppMethodInitialized_184345809 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__Size_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__Size_g____setter_4_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__HeadSize
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__HeadSize (const MethodInfo* method);
// 0x181f97a70

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__HeadSize(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434580a == '\0') {
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
    Il2CppMethodInitialized_18434580a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__HeadSize_g____getter_5_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__HeadSize_g____setter_5_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__RunSpeedBase
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__RunSpeedBase (const MethodInfo* method);
// 0x181f9a860

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__RunSpeedBase(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434580b == '\0') {
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
    Il2CppMethodInitialized_18434580b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__RunSpeedBase_g____getter_6
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__RunSpeedBase_g____setter_6
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__WalkSpeedBase
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__WalkSpeedBase (const MethodInfo* method);
// 0x181f9c340

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__WalkSpeedBase(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434580c == '\0') {
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
    Il2CppMethodInitialized_18434580c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__WalkSpeedBase_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__WalkSpeedBase_g____setter
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__WalkSpeedPerLevel
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__WalkSpeedPerLevel (const MethodInfo* method);
// 0x181f9c430

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__WalkSpeedPerLevel(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434580d == '\0') {
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
    Il2CppMethodInitialized_18434580d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__WalkSpeedPerLevel_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__WalkSpeedPerLevel_g____set
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__RunSpeedPerLevel
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__RunSpeedPerLevel (const MethodInfo* method);
// 0x181f9a950

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__RunSpeedPerLevel(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434580e == '\0') {
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
    Il2CppMethodInitialized_18434580e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__RunSpeedPerLevel_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__RunSpeedPerLevel_g____sett
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__TurnSpeed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__TurnSpeed (const MethodInfo* method);
// 0x181f9bf80

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__TurnSpeed(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434580f == '\0') {
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
    Il2CppMethodInitialized_18434580f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__TurnSpeed_g____getter_10_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__TurnSpeed_g____setter_10_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__RotateSpeed
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__RotateSpeed (const MethodInfo* method);
// 0x181f9a540

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__RotateSpeed(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345810 == '\0') {
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
    Il2CppMethodInitialized_184345810 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__RotateSpeed_g____getter_11
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__RotateSpeed_g____setter_11
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__JumpForce
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__JumpForce (const MethodInfo* method);
// 0x181f983d0

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__JumpForce(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345811 == '\0') {
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
    Il2CppMethodInitialized_184345811 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__JumpForce_g____getter_12_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__JumpForce_g____setter_12_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__ActionPause
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__ActionPause (const MethodInfo* method);
// 0x181f93ce0

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__ActionPause(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345812 == '\0') {
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
    Il2CppMethodInitialized_184345812 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__ActionPause_g____getter_13
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__ActionPause_g____setter_13
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__AttackPause
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__AttackPause (const MethodInfo* method);
// 0x181f94b90

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__AttackPause(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345813 == '\0') {
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
    Il2CppMethodInitialized_184345813 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackPause_g____getter_14
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackPause_g____setter_14
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__TurnPause
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__TurnPause (const MethodInfo* method);
// 0x181f9be90

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__TurnPause(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345814 == '\0') {
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
    Il2CppMethodInitialized_184345814 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__TurnPause_g____getter_15_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__TurnPause_g____setter_15_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__Stamina
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__Stamina (const MethodInfo* method);
// 0x181f9b3a0

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__Stamina(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345815 == '\0') {
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
    Il2CppMethodInitialized_184345815 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__Stamina_g____getter_16_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__Stamina_g____setter_16_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__MaxStamina
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__MaxStamina (const MethodInfo* method);
// 0x181f99140

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__MaxStamina(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345816 == '\0') {
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
    Il2CppMethodInitialized_184345816 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__MaxStamina_g____getter_17
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__MaxStamina_g____setter_17
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__NapePosition
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__NapePosition (const MethodInfo* method);
// 0x181f992d0

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__NapePosition(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345817 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__NapePosition_g____getter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_184345817 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__NapePosition_g____getter_1
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__IsCrawler
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__IsCrawler (const MethodInfo* method);
// 0x181f98100

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__IsCrawler(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345818 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__IsCrawler_g____getter_19_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_184345818 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__IsCrawler_g____getter_19_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__IsWarded
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__IsWarded (const MethodInfo* method);
// 0x181f98240

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__IsWarded(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345819 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__IsWarded_g____getter_20_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__IsWarded_g____setter_20_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_184345819 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__IsWarded_g____getter_20_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__IsWarded_g____setter_20_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__IsHardened
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__IsHardened (const MethodInfo* method);
// 0x181f981a0

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__IsHardened(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434581a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__IsHardened_g____getter_21
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_18434581a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__IsHardened_g____getter_21
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__FocusRange
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__FocusRange (const MethodInfo* method);
// 0x181f97200

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__FocusRange(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434581b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FocusRange_g____getter_22
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FocusRange_g____setter_22
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_18434581b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FocusRange_g____getter_22
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FocusRange_g____setter_22
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__FocusTime
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__FocusTime (const MethodInfo* method);
// 0x181f972f0

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__FocusTime(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434581c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FocusTime_g____getter_23_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FocusTime_g____setter_23_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_18434581c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FocusTime_g____getter_23_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FocusTime_g____setter_23_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__FarAttackCooldown
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__FarAttackCooldown (const MethodInfo* method);
// 0x181f96f30

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__FarAttackCooldown(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434581d == '\0') {
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
    Il2CppMethodInitialized_18434581d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FarAttackCooldown_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__FarAttackCooldown_g____set
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__AttackWait
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__AttackWait (const MethodInfo* method);
// 0x181f94eb0

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__AttackWait(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434581e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackWait_g____getter_25
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackWait_g____setter_25
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_18434581e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackWait_g____getter_25
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackWait_g____setter_25
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__CanRun
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__CanRun (const MethodInfo* method);
// 0x181f95b80

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__CanRun(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434581f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__CanRun_g____getter_26_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__CanRun_g____setter_26_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_18434581f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__CanRun_g____getter_26_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__CanRun_g____setter_26_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__AttackSpeedMultiplier
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__AttackSpeedMultiplier (const MethodInfo* method);
// 0x181f94c80

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__AttackSpeedMultiplier
          (MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  System_Action_CustomLogicTitanBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345820 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackSpeedMultiplier_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackSpeedMultiplier_g_40e72c0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_184345820 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackSpeedMultiplier_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicTitanBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__AttackSpeedMultiplier_g_40e72c0
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__HeadMount
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__HeadMount (const MethodInfo* method);
// 0x181f979d0

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__HeadMount(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345821 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__HeadMount_g____getter_28_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_184345821 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__HeadMount_g____getter_28_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreatePropertyBinding__NeckMount
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__NeckMount (const MethodInfo* method);
// 0x181f99370

CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreatePropertyBinding__NeckMount(MethodInfo *method)

{
  System_Func_CustomLogicTitanBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345822 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__NeckMount_g____getter_29_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
    Il2CppMethodInitialized_184345822 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings___CreatePropertyBinding__NeckMount_g____getter_29_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicTitanBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreateMethodBinding__Target
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__Target (const MethodInfo* method);
// 0x181f93280

CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__Target(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345823 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicTitanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c___CreateMethodBinding__Target_b__30_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345823 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9__30_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c___CreateMethodBinding__Target_b__30_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9__30_0 =
         (System_Func_CustomLogicTitanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9__30_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreateMethodBinding__Wander
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__Wander (const MethodInfo* method);
// 0x181f93820

CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__Wander(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345824 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicTitanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c___CreateMethodBinding__Wander_b__31_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345824 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9__31_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c___CreateMethodBinding__Wander_b__31_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9__31_0 =
         (System_Func_CustomLogicTitanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9__31_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreateMethodBinding__Blind
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__Blind (const MethodInfo* method);
// 0x181f91cf0

CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__Blind(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345825 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicTitanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c___CreateMethodBinding__Blind_b__32_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345825 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9__32_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c___CreateMethodBinding__Blind_b__32_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9__32_0 =
         (System_Func_CustomLogicTitanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9__32_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreateMethodBinding__Cripple
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__Cripple (const MethodInfo* method);
// 0x181f91e10

CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__Cripple(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345826 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicTitanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c___CreateMethodBinding__Cripple_b__33_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345826 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9__33_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c___CreateMethodBinding__Cripple_b__33_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9__33_0 =
         (System_Func_CustomLogicTitanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9__33_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$__CreateMethodBinding__Stun
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o* CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__Stun (const MethodInfo* method);
// 0x181f93160

CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *
CustomLogic_CustomLogicTitanBuiltin_Bindings____CreateMethodBinding__Stun(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345827 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicTitanBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c___CreateMethodBinding__Stun_b__34_0)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345827 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9__34_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicTitanBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c___CreateMethodBinding__Stun_b__34_0,
               (MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9__34_0 =
         (System_Func_CustomLogicTitanBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings_c->static_fields->__9__34_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicTitanBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x181f9d550

void CustomLogic_CustomLogicTitanBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_184345828 == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&"Size");
    il2cpp_codegen_initialize_runtime_metadata(&"JumpForce");
    il2cpp_codegen_initialize_runtime_metadata(&"IsHardened");
    il2cpp_codegen_initialize_runtime_metadata(&"RotateSpeed");
    il2cpp_codegen_initialize_runtime_metadata(&"Wander");
    il2cpp_codegen_initialize_runtime_metadata(&"FarAttackCooldown");
    il2cpp_codegen_initialize_runtime_metadata(&"CanRun");
    il2cpp_codegen_initialize_runtime_metadata(&"TurnPause");
    il2cpp_codegen_initialize_runtime_metadata(&"TurnSpeed");
    Il2CppMethodInitialized_184345828 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DeathType",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DeathVelocity",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Size",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HeadSize",
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
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Stamina",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MaxStamina",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"NapePosition",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsCrawler",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsWarded",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsHardened",
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
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CanRun",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSpeedMultiplier",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HeadMount",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"NeckMount",
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
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Stun",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicTitanBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__DeathType>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__DeathType_g____getter_2_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x181f8ddd0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__DeathType_g____getter_2_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  int32_t local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicTitanBuiltin__get_DeathType(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__DeathType>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__DeathType_g____setter_2_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f8de00

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__DeathType_g____setter_2_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  int32_t value;
  
  if (Il2CppMethodInitialized_184345829 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345829 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicTitanBuiltin__set_DeathType(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__DeathVelocity>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__DeathVelocity_g____getter_3_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x181f8de80

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__DeathVelocity_g____getter_3_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicTitanBuiltin__get_DeathVelocity(__i,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__DeathVelocity>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__DeathVelocity_g____setter_3_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f8dea0

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__DeathVelocity_g____setter_3_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *value;
  
  if (Il2CppMethodInitialized_18434582a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434582a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_66EB70 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicTitanBuiltin__set_DeathVelocity(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__Size>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__Size_g____getter_4_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x181f90c00

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__Size_g____getter_4_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicTitanBuiltin__get_Size(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__Size>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__Size_g____setter_4_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f90c40

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__Size_g____setter_4_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_18434582b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434582b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicTitanBuiltin__set_Size(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__HeadSize>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__HeadSize_g____getter_5_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x181f8e850

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__HeadSize_g____getter_5_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicTitanBuiltin__get_HeadSize(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__HeadSize>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__HeadSize_g____setter_5_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f8e890

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__HeadSize_g____setter_5_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_18434582c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434582c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicTitanBuiltin__set_HeadSize(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeedBase>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__RunSpeedBase_g____getter_6_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x181f90790

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__RunSpeedBase_g____getter_6_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicTitanBuiltin__get_RunSpeedBase(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeedBase>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__RunSpeedBase_g____setter_6_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f907d0

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__RunSpeedBase_g____setter_6_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_18434582d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434582d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicTitanBuiltin__set_RunSpeedBase(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__WalkSpeedBase>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedBase_g____getter_7_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x181f917f0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedBase_g____getter_7_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicTitanBuiltin__get_WalkSpeedBase(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__WalkSpeedBase>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedBase_g____setter_7_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f91830

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedBase_g____setter_7_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_18434582e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434582e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicTitanBuiltin__set_WalkSpeedBase(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__WalkSpeedPerLevel>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedPerLevel_g____getter_8_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x181f918b0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedPerLevel_g____getter_8_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicTitanBuiltin__get_WalkSpeedPerLevel(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__WalkSpeedPerLevel>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedPerLevel_g____setter_8_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f918f0

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__WalkSpeedPerLevel_g____setter_8_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_18434582f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434582f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicTitanBuiltin__set_WalkSpeedPerLevel(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeedPerLevel>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__RunSpeedPerLevel_g____getter_9_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x181f90850

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__RunSpeedPerLevel_g____getter_9_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicTitanBuiltin__get_RunSpeedPerLevel(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__RunSpeedPerLevel>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__RunSpeedPerLevel_g____setter_9_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f90890

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__RunSpeedPerLevel_g____setter_9_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_184345830 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345830 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicTitanBuiltin__set_RunSpeedPerLevel(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__TurnSpeed>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__TurnSpeed_g____getter_10_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x181f915b0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__TurnSpeed_g____getter_10_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicTitanBuiltin__get_TurnSpeed(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__TurnSpeed>g____setter|10_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__TurnSpeed_g____setter_10_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f915f0

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__TurnSpeed_g____setter_10_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_184345831 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345831 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicTitanBuiltin__set_TurnSpeed(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__RotateSpeed>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__RotateSpeed_g____getter_11_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x181f90510

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__RotateSpeed_g____getter_11_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicTitanBuiltin__get_RotateSpeed(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__RotateSpeed>g____setter|11_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__RotateSpeed_g____setter_11_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f90550

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__RotateSpeed_g____setter_11_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_184345832 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345832 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicTitanBuiltin__set_RotateSpeed(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__JumpForce>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__JumpForce_g____getter_12_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x181f8eba0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__JumpForce_g____getter_12_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicTitanBuiltin__get_JumpForce(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__JumpForce>g____setter|12_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__JumpForce_g____setter_12_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f8ebe0

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__JumpForce_g____setter_12_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_184345833 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345833 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicTitanBuiltin__set_JumpForce(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__ActionPause>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__ActionPause_g____getter_13_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x181f8cd50

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__ActionPause_g____getter_13_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicTitanBuiltin__get_ActionPause(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__ActionPause>g____setter|13_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__ActionPause_g____setter_13_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f8cd90

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__ActionPause_g____setter_13_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_184345834 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345834 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicTitanBuiltin__set_ActionPause(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__AttackPause>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__AttackPause_g____getter_14_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x181f8d210

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__AttackPause_g____getter_14_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicTitanBuiltin__get_AttackPause(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__AttackPause>g____setter|14_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__AttackPause_g____setter_14_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f8d250

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__AttackPause_g____setter_14_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_184345835 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345835 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicTitanBuiltin__set_AttackPause(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__TurnPause>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__TurnPause_g____getter_15_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x181f914f0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__TurnPause_g____getter_15_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicTitanBuiltin__get_TurnPause(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__TurnPause>g____setter|15_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__TurnPause_g____setter_15_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f91530

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__TurnPause_g____setter_15_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_184345836 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345836 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicTitanBuiltin__set_TurnPause(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__Stamina>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__Stamina_g____getter_16_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x181f90e40

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__Stamina_g____getter_16_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicTitanBuiltin__get_Stamina(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__Stamina>g____setter|16_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__Stamina_g____setter_16_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f90e80

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__Stamina_g____setter_16_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_184345837 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345837 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicTitanBuiltin__set_Stamina(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__MaxStamina>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__MaxStamina_g____getter_17_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x181f8f7c0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__MaxStamina_g____getter_17_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicTitanBuiltin__get_MaxStamina(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__MaxStamina>g____setter|17_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__MaxStamina_g____setter_17_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f8f800

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__MaxStamina_g____setter_17_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_184345838 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345838 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicTitanBuiltin__set_MaxStamina(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__NapePosition>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__NapePosition_g____getter_18_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x181f8f8b0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__NapePosition_g____getter_18_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicTitanBuiltin__get_NapePosition(__i,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__IsCrawler>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__IsCrawler_g____getter_19_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x181f8ea90

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__IsCrawler_g____getter_19_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicTitanBuiltin__get_IsCrawler(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__IsWarded>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__IsWarded_g____getter_20_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x181f8eaf0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__IsWarded_g____getter_20_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicTitanBuiltin__get_IsWarded(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__IsWarded>g____setter|20_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__IsWarded_g____setter_20_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f8eb20

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__IsWarded_g____setter_20_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  bool value;
  
  if (Il2CppMethodInitialized_184345839 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_184345839 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicTitanBuiltin__set_IsWarded(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__IsHardened>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__IsHardened_g____getter_21_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x181f8eac0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__IsHardened_g____getter_21_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicTitanBuiltin__get_IsHardened(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__FocusRange>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__FocusRange_g____getter_22_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x181f8e2d0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__FocusRange_g____getter_22_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicTitanBuiltin__get_FocusRange(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__FocusRange>g____setter|22_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__FocusRange_g____setter_22_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f8e310

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__FocusRange_g____setter_22_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_18434583a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434583a = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicTitanBuiltin__set_FocusRange(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__FocusTime>g____getter|23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__FocusTime_g____getter_23_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x181f8e390

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__FocusTime_g____getter_23_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicTitanBuiltin__get_FocusTime(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__FocusTime>g____setter|23_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__FocusTime_g____setter_23_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f8e3d0

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__FocusTime_g____setter_23_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_18434583b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434583b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicTitanBuiltin__set_FocusTime(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__FarAttackCooldown>g____getter|24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__FarAttackCooldown_g____getter_24_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x181f8e210

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__FarAttackCooldown_g____getter_24_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicTitanBuiltin__get_FarAttackCooldown(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__FarAttackCooldown>g____setter|24_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__FarAttackCooldown_g____setter_24_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f8e250

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__FarAttackCooldown_g____setter_24_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_18434583c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434583c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicTitanBuiltin__set_FarAttackCooldown(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__AttackWait>g____getter|25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__AttackWait_g____getter_25_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x181f8d3f0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__AttackWait_g____getter_25_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicTitanBuiltin__get_AttackWait(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__AttackWait>g____setter|25_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__AttackWait_g____setter_25_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f8d430

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__AttackWait_g____setter_25_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_18434583d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434583d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicTitanBuiltin__set_AttackWait(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__CanRun>g____getter|26_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__CanRun_g____getter_26_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x181f8da90

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__CanRun_g____getter_26_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicTitanBuiltin__get_CanRun(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__CanRun>g____setter|26_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__CanRun_g____setter_26_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f8dac0

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__CanRun_g____setter_26_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  bool value;
  
  if (Il2CppMethodInitialized_18434583e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434583e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicTitanBuiltin__set_CanRun(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__AttackSpeedMultiplier>g____getter|27_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__AttackSpeedMultiplier_g____getter_27_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x181f8d2d0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__AttackSpeedMultiplier_g____getter_27_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  float local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    local_res8[0] = CustomLogic_CustomLogicTitanBuiltin__get_AttackSpeedMultiplier(__i,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__AttackSpeedMultiplier>g____setter|27_1
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__AttackSpeedMultiplier_g____setter_27_1 (CustomLogic_CustomLogicTitanBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f8d310

void CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__AttackSpeedMultiplier_g____setter_27_1
               (CustomLogic_CustomLogicTitanBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  float value;
  
  if (Il2CppMethodInitialized_18434583f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434583f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    CustomLogic_CustomLogicTitanBuiltin__set_AttackSpeedMultiplier(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__HeadMount>g____getter|28_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__HeadMount_g____getter_28_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x181f8e830

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__HeadMount_g____getter_28_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicTransformBuiltin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicTitanBuiltin__get_HeadMount(__i,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin.Bindings$$<__CreatePropertyBinding__NeckMount>g____getter|29_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__NeckMount_g____getter_29_0 (CustomLogic_CustomLogicTitanBuiltin_o* __i, const MethodInfo* method);
// 0x181f8f8d0

Il2CppObject *
CustomLogic_CustomLogicTitanBuiltin_Bindings_____CreatePropertyBinding__NeckMount_g____getter_29_0
          (CustomLogic_CustomLogicTitanBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicTransformBuiltin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicTitanBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicTitanBuiltin__get_NeckMount(__i,(MethodInfo *)0x0);
    return (Il2CppObject *)pCVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin___ctor (CustomLogic_CustomLogicTitanBuiltin_o* __this, Characters_BasicTitan_o* titan, const MethodInfo* method);
// 0x181f7b170

void CustomLogic_CustomLogicTitanBuiltin___ctor
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,Characters_BasicTitan_o *titan,
               MethodInfo *method)

{
  Characters_BasicTitan_o *__this_00;
  Controllers_BaseTitanAIController_o *value;
  
  if (Il2CppMethodInitialized_184345803 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_BaseTitanAIController);
    Il2CppMethodInitialized_184345803 = '\x01';
  }
  CustomLogic_CustomLogicCharacterBuiltin___ctor
            ((CustomLogic_CustomLogicCharacterBuiltin_o *)__this,(Characters_BaseCharacter_o *)titan,
             (MethodInfo *)0x0);
  (__this->fields).Titan = titan;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Titan,titan);
  __this_00 = (__this->fields).Titan;
  if (__this_00 != (Characters_BasicTitan_o *)0x0) {
    value = UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)__this_00,
                       (MethodInfo_6651A0 *)
                       MethodInfo_UnityEngine_Component_GetComponent_BaseTitanAIController);
    (__this->fields).Controller = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Controller,value);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_DeathType
// il2cpp: int32_t CustomLogic_CustomLogicTitanBuiltin__get_DeathType (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x181f7b2d0

int32_t CustomLogic_CustomLogicTitanBuiltin__get_DeathType
                  (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return (pCVar1->fields).DeathType;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_DeathType
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_DeathType (CustomLogic_CustomLogicTitanBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181f7b530

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
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184345804 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_Characters_TitanDeathType);
    Il2CppMethodInitialized_184345804 = '\x01';
  }
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    handle = TypeRef_Characters_TitanDeathType;
    if (bVar2) {
      if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354ea0);
      }
      enumType = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
      local_res8[0] = value;
      pIVar3 = il2cpp_value_box(g_data_184354e08,local_res8);
      if ((g_data_184354e58->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354e58);
      }
      bVar2 = System_Enum__IsDefined(enumType,pIVar3,(MethodInfo *)0x0);
      if (!bVar2) {
        local_res8[0] = value;
        pIVar3 = il2cpp_value_box(g_data_184354e08,local_res8);
        pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Unknown death type: {0}");
        pSVar4 = System_String__Format(pSVar4,pIVar3,(MethodInfo *)0x0);
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
        __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
        System_ArgumentException___ctor_1a77cc0(__this_00,pSVar4,(MethodInfo *)0x0);
        lastManagedFrame =
             il2cpp_codegen_get_runtime_metadata
                       (&MethodInfo_CustomLogic_CustomLogicTitanBuiltin_set_DeathType);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
      }
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_181f7b616;
      (pCVar1->fields).DeathType = value;
    }
    return;
  }
label_181f7b616:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_DeathVelocity
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTitanBuiltin__get_DeathVelocity (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x181f7b2f0

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTitanBuiltin__get_DeathVelocity
          (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar2;
  UnityEngine_Vector3_Fields local_18 [2];
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    local_18[0].x = (pCVar1->fields).DeathVelocity.fields.x;
    local_18[0].y = (pCVar1->fields).DeathVelocity.fields.y;
    local_18[0].z = (pCVar1->fields).DeathVelocity.fields.z;
    pCVar2 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                       ((UnityEngine_Vector3_o *)local_18,(MethodInfo *)0x0);
    return pCVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_DeathVelocity
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_DeathVelocity (CustomLogic_CustomLogicTitanBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181f7b690

void CustomLogic_CustomLogicTitanBuiltin__set_DeathVelocity
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,CustomLogic_CustomLogicVector3Builtin_o *value,
               MethodInfo *method)

{
  float fVar1;
  Characters_BasicTitan_o *pCVar2;
  float fVar3;
  bool bVar4;
  
  pCVar2 = (__this->fields).Titan;
  if (pCVar2 != (Characters_BasicTitan_o *)0x0) {
    bVar4 = (*(pCVar2->klass->vtable)._74_IsMine.methodPtr)(pCVar2,(pCVar2->klass->vtable)._74_IsMine.method);
    if (bVar4) {
      if ((value == (CustomLogic_CustomLogicVector3Builtin_o *)0x0) ||
         (pCVar2 = (__this->fields).Titan, pCVar2 == (Characters_BasicTitan_o *)0x0)) goto label_181f7b6ec;
      fVar3 = (value->fields).Value.fields.y;
      fVar1 = (value->fields).Value.fields.z;
      (pCVar2->fields).DeathVelocity.fields.x = (value->fields).Value.fields.x;
      (pCVar2->fields).DeathVelocity.fields.y = fVar3;
      (pCVar2->fields).DeathVelocity.fields.z = fVar1;
    }
    return;
  }
label_181f7b6ec:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_Size
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_Size (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x181f7aa40

float CustomLogic_CustomLogicTitanBuiltin__get_Size
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return (pCVar1->fields).Size;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_Size
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_Size (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f7af00

void CustomLogic_CustomLogicTitanBuiltin__set_Size
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_181f7af4d;
      Characters_BaseTitan__SetSize((Characters_BaseTitan_o *)pCVar1,value,(MethodInfo *)0x0);
    }
    return;
  }
label_181f7af4d:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_HeadSize
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_HeadSize (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x181f7b360

float CustomLogic_CustomLogicTitanBuiltin__get_HeadSize
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return (pCVar1->fields).HeadSize;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_HeadSize
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_HeadSize (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f7b700

void CustomLogic_CustomLogicTitanBuiltin__set_HeadSize
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    (pCVar1->fields).HeadSize = value;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_RunSpeedBase
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_RunSpeedBase (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x181f7aa00

float CustomLogic_CustomLogicTitanBuiltin__get_RunSpeedBase
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return (pCVar1->fields).RunSpeedBase;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_RunSpeedBase
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_RunSpeedBase (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f7ae60

void CustomLogic_CustomLogicTitanBuiltin__set_RunSpeedBase
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_181f7aeaa;
      (pCVar1->fields).RunSpeedBase = value;
    }
    return;
  }
label_181f7aeaa:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_WalkSpeedBase
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_WalkSpeedBase (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x181f7aaa0

float CustomLogic_CustomLogicTitanBuiltin__get_WalkSpeedBase
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return (pCVar1->fields).WalkSpeedBase;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_WalkSpeedBase
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_WalkSpeedBase (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f7b000

void CustomLogic_CustomLogicTitanBuiltin__set_WalkSpeedBase
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_181f7b04a;
      (pCVar1->fields).WalkSpeedBase = value;
    }
    return;
  }
label_181f7b04a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_WalkSpeedPerLevel
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_WalkSpeedPerLevel (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x181f7aac0

float CustomLogic_CustomLogicTitanBuiltin__get_WalkSpeedPerLevel
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return (pCVar1->fields).WalkSpeedPerLevel;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_WalkSpeedPerLevel
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_WalkSpeedPerLevel (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f7b050

void CustomLogic_CustomLogicTitanBuiltin__set_WalkSpeedPerLevel
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_181f7b09a;
      (pCVar1->fields).WalkSpeedPerLevel = value;
    }
    return;
  }
label_181f7b09a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_RunSpeedPerLevel
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_RunSpeedPerLevel (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x181f7aa20

float CustomLogic_CustomLogicTitanBuiltin__get_RunSpeedPerLevel
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return (pCVar1->fields).RunSpeedPerLevel;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_RunSpeedPerLevel
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_RunSpeedPerLevel (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f7aeb0

void CustomLogic_CustomLogicTitanBuiltin__set_RunSpeedPerLevel
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_181f7aefa;
      (pCVar1->fields).RunSpeedPerLevel = value;
    }
    return;
  }
label_181f7aefa:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_TurnSpeed
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_TurnSpeed (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x181f7aa80

float CustomLogic_CustomLogicTitanBuiltin__get_TurnSpeed
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return (pCVar1->fields).TurnSpeed;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_TurnSpeed
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_TurnSpeed (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f7afb0

void CustomLogic_CustomLogicTitanBuiltin__set_TurnSpeed
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_181f7affa;
      (pCVar1->fields).TurnSpeed = value;
    }
    return;
  }
label_181f7affa:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_RotateSpeed
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_RotateSpeed (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x181f7a9e0

float CustomLogic_CustomLogicTitanBuiltin__get_RotateSpeed
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return (pCVar1->fields).RotateSpeed;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_RotateSpeed
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_RotateSpeed (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f7ae10

void CustomLogic_CustomLogicTitanBuiltin__set_RotateSpeed
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_181f7ae5a;
      (pCVar1->fields).RotateSpeed = value;
    }
    return;
  }
label_181f7ae5a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_JumpForce
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_JumpForce (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x181f7a8d0

float CustomLogic_CustomLogicTitanBuiltin__get_JumpForce
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return (pCVar1->fields).JumpForce;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_JumpForce
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_JumpForce (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f7adc0

void CustomLogic_CustomLogicTitanBuiltin__set_JumpForce
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_181f7ae0a;
      (pCVar1->fields).JumpForce = value;
    }
    return;
  }
label_181f7ae0a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_ActionPause
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_ActionPause (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x181f7a670

float CustomLogic_CustomLogicTitanBuiltin__get_ActionPause
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return (pCVar1->fields).ActionPause;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_ActionPause
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_ActionPause (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f7aae0

void CustomLogic_CustomLogicTitanBuiltin__set_ActionPause
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_181f7ab2a;
      (pCVar1->fields).ActionPause = value;
    }
    return;
  }
label_181f7ab2a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_AttackPause
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_AttackPause (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x181f7a690

float CustomLogic_CustomLogicTitanBuiltin__get_AttackPause
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return (pCVar1->fields).AttackPause;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_AttackPause
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_AttackPause (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f7ab30

void CustomLogic_CustomLogicTitanBuiltin__set_AttackPause
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_181f7ab7a;
      (pCVar1->fields).AttackPause = value;
    }
    return;
  }
label_181f7ab7a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_TurnPause
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_TurnPause (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x181f7aa60

float CustomLogic_CustomLogicTitanBuiltin__get_TurnPause
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return (pCVar1->fields).TurnPause;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_TurnPause
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_TurnPause (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f7af60

void CustomLogic_CustomLogicTitanBuiltin__set_TurnPause
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_181f7afaa;
      (pCVar1->fields).TurnPause = value;
    }
    return;
  }
label_181f7afaa:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_Stamina
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_Stamina (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x181f7b4b0

float CustomLogic_CustomLogicTitanBuiltin__get_Stamina
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return (pCVar1->fields).CurrentSprintStamina;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_Stamina
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_Stamina (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f7b790

void CustomLogic_CustomLogicTitanBuiltin__set_Stamina
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_181f7b7da;
      (pCVar1->fields).CurrentSprintStamina = value;
    }
    return;
  }
label_181f7b7da:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_MaxStamina
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_MaxStamina (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x181f7b3f0

float CustomLogic_CustomLogicTitanBuiltin__get_MaxStamina
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return (pCVar1->fields).MaxSprintStamina;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_MaxStamina
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_MaxStamina (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f7b740

void CustomLogic_CustomLogicTitanBuiltin__set_MaxStamina
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_181f7b78a;
      (pCVar1->fields).MaxSprintStamina = value;
    }
    return;
  }
label_181f7b78a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_NapePosition
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicTitanBuiltin__get_NapePosition (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x181f7b410

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicTitanBuiltin__get_NapePosition
          (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Characters_BasicTitanComponentCache_o *pCVar2;
  UnityEngine_Component_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Vector3_o *pUVar3;
  CustomLogic_CustomLogicVector3Builtin_o *pCVar4;
  UnityEngine_Vector3_Fields local_28;
  UnityEngine_Vector3_o local_18 [2];
  
  pCVar1 = (__this->fields).Titan;
  if (((pCVar1 != (Characters_BasicTitan_o *)0x0) &&
      (pCVar2 = (pCVar1->fields).BasicCache, pCVar2 != (Characters_BasicTitanComponentCache_o *)0x0)) &&
     (__this_00 = (UnityEngine_Component_o *)(pCVar2->fields).NapeHurtbox,
     __this_00 != (UnityEngine_Component_o *)0x0)) {
    __this_01 = UnityEngine_Component__get_transform(__this_00,(MethodInfo *)0x0);
    if (__this_01 != (UnityEngine_Transform_o *)0x0) {
      pUVar3 = UnityEngine_Transform__get_position(local_18,__this_01,(MethodInfo *)0x0);
      local_28.x = (pUVar3->fields).x;
      local_28.y = (pUVar3->fields).y;
      local_28.z = (pUVar3->fields).z;
      pCVar4 = CustomLogic_CustomLogicVector3Builtin__op_Implicit_1ed88b0
                         ((UnityEngine_Vector3_o *)&local_28,(MethodInfo *)0x0);
      return pCVar4;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_IsCrawler
// il2cpp: bool CustomLogic_CustomLogicTitanBuiltin__get_IsCrawler (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x181f7b380

bool CustomLogic_CustomLogicTitanBuiltin__get_IsCrawler
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return (pCVar1->fields).IsCrawler;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_IsWarded
// il2cpp: bool CustomLogic_CustomLogicTitanBuiltin__get_IsWarded (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x181f7b3d0

bool CustomLogic_CustomLogicTitanBuiltin__get_IsWarded
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return (pCVar1->fields).isWarded;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_IsWarded
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_IsWarded (CustomLogic_CustomLogicTitanBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f7b720

void CustomLogic_CustomLogicTitanBuiltin__set_IsWarded
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,bool value,MethodInfo *method)

{
  Characters_BasicTitan_o *__this_00;
  
  __this_00 = (__this->fields).Titan;
  if (__this_00 != (Characters_BasicTitan_o *)0x0) {
    Characters_BasicTitan__SetWarded(__this_00,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_IsHardened
// il2cpp: bool CustomLogic_CustomLogicTitanBuiltin__get_IsHardened (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x181f7b3a0

bool CustomLogic_CustomLogicTitanBuiltin__get_IsHardened
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    return (pCVar1->fields).CurrentWardedWeakSpot != 0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_FocusRange
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_FocusRange (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x181f7a7e0

float CustomLogic_CustomLogicTitanBuiltin__get_FocusRange
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar3) {
      return 0.0;
    }
    pCVar1 = (__this->fields).Titan;
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


// CustomLogic.CustomLogicTitanBuiltin$$set_FocusRange
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_FocusRange (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f7ad00

void CustomLogic_CustomLogicTitanBuiltin__set_FocusRange
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar3) {
      pCVar1 = (__this->fields).Titan;
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


// CustomLogic.CustomLogicTitanBuiltin$$get_FocusTime
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_FocusTime (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x181f7a840

float CustomLogic_CustomLogicTitanBuiltin__get_FocusTime
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar3) {
      return 0.0;
    }
    pCVar1 = (__this->fields).Titan;
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


// CustomLogic.CustomLogicTitanBuiltin$$set_FocusTime
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_FocusTime (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f7ad60

void CustomLogic_CustomLogicTitanBuiltin__set_FocusTime
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar3) {
      pCVar1 = (__this->fields).Titan;
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


// CustomLogic.CustomLogicTitanBuiltin$$get_FarAttackCooldown
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_FarAttackCooldown (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x181f7a780

float CustomLogic_CustomLogicTitanBuiltin__get_FarAttackCooldown
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar3) {
      return 0.0;
    }
    pCVar1 = (__this->fields).Titan;
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


// CustomLogic.CustomLogicTitanBuiltin$$set_FarAttackCooldown
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_FarAttackCooldown (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f7ac90

void CustomLogic_CustomLogicTitanBuiltin__set_FarAttackCooldown
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar3) {
      pCVar1 = (__this->fields).Titan;
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


// CustomLogic.CustomLogicTitanBuiltin$$get_AttackWait
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_AttackWait (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x181f7a6d0

float CustomLogic_CustomLogicTitanBuiltin__get_AttackWait
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar3) {
      return 0.0;
    }
    pCVar1 = (__this->fields).Titan;
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


// CustomLogic.CustomLogicTitanBuiltin$$set_AttackWait
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_AttackWait (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f7abd0

void CustomLogic_CustomLogicTitanBuiltin__set_AttackWait
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar3) {
      pCVar1 = (__this->fields).Titan;
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


// CustomLogic.CustomLogicTitanBuiltin$$get_CanRun
// il2cpp: bool CustomLogic_CustomLogicTitanBuiltin__get_CanRun (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x181f7b240

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
        return (pCVar2->fields).IsRun;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_CanRun
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_CanRun (CustomLogic_CustomLogicTitanBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181f7b4d0

void CustomLogic_CustomLogicTitanBuiltin__set_CanRun
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,bool value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Controllers_BaseTitanAIController_o *pCVar2;
  bool bVar3;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar3) {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_181f7b52a;
      if ((pCVar1->fields).AI != false) {
        pCVar2 = (__this->fields).Controller;
        if (pCVar2 == (Controllers_BaseTitanAIController_o *)0x0) goto label_181f7b52a;
        (pCVar2->fields).IsRun = value;
      }
    }
    return;
  }
label_181f7b52a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_AttackSpeedMultiplier
// il2cpp: float CustomLogic_CustomLogicTitanBuiltin__get_AttackSpeedMultiplier (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x181f7b1f0

float CustomLogic_CustomLogicTitanBuiltin__get_AttackSpeedMultiplier
                (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (!bVar2) {
      return 0.0;
    }
    pCVar1 = (__this->fields).Titan;
    if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
      return (pCVar1->fields).AttackSpeedMultiplier;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$set_AttackSpeedMultiplier
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__set_AttackSpeedMultiplier (CustomLogic_CustomLogicTitanBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181f7ab80

void CustomLogic_CustomLogicTitanBuiltin__set_AttackSpeedMultiplier
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Titan;
      if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_181f7abca;
      (pCVar1->fields).AttackSpeedMultiplier = value;
    }
    return;
  }
label_181f7abca:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_HeadMount
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicTitanBuiltin__get_HeadMount (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x181f7b330

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicTitanBuiltin__get_HeadMount
          (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Characters_BasicTitanComponentCache_o *pCVar2;
  CustomLogic_CustomLogicTransformBuiltin_o *pCVar3;
  
  pCVar1 = (__this->fields).Titan;
  if ((pCVar1 != (Characters_BasicTitan_o *)0x0) &&
     (pCVar2 = (pCVar1->fields).BasicCache, pCVar2 != (Characters_BasicTitanComponentCache_o *)0x0)) {
    pCVar3 = CustomLogic_CustomLogicTransformBuiltin__op_Implicit((pCVar2->fields).Head,(MethodInfo *)0x0);
    return pCVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$get_NeckMount
// il2cpp: CustomLogic_CustomLogicTransformBuiltin_o* CustomLogic_CustomLogicTitanBuiltin__get_NeckMount (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x181f7b480

CustomLogic_CustomLogicTransformBuiltin_o *
CustomLogic_CustomLogicTitanBuiltin__get_NeckMount
          (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  Characters_BasicTitanComponentCache_o *pCVar2;
  CustomLogic_CustomLogicTransformBuiltin_o *pCVar3;
  
  pCVar1 = (__this->fields).Titan;
  if ((pCVar1 != (Characters_BasicTitan_o *)0x0) &&
     (pCVar2 = (pCVar1->fields).BasicCache, pCVar2 != (Characters_BasicTitanComponentCache_o *)0x0)) {
    pCVar3 = CustomLogic_CustomLogicTransformBuiltin__op_Implicit((pCVar2->fields).Neck,(MethodInfo *)0x0);
    return pCVar3;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicTitanBuiltin$$Target
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__Target (CustomLogic_CustomLogicTitanBuiltin_o* __this, Il2CppObject* enemyObj, float focus, const MethodInfo* method);
// 0x181f7a580

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
// 0x181f7a590

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
// 0x181f7a1b0

void CustomLogic_CustomLogicTitanBuiltin__Blind
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Titan;
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


// CustomLogic.CustomLogicTitanBuiltin$$Cripple
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__Cripple (CustomLogic_CustomLogicTitanBuiltin_o* __this, float time, const MethodInfo* method);
// 0x181f7a210

void CustomLogic_CustomLogicTitanBuiltin__Cripple
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float time,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 != (Characters_BasicTitan_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Titan;
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


// CustomLogic.CustomLogicTitanBuiltin$$Stun
// il2cpp: void CustomLogic_CustomLogicTitanBuiltin__Stun (CustomLogic_CustomLogicTitanBuiltin_o* __this, float duration, const MethodInfo* method);
// 0x181f7b0f0

void CustomLogic_CustomLogicTitanBuiltin__Stun
               (CustomLogic_CustomLogicTitanBuiltin_o *__this,float duration,MethodInfo *method)

{
  Characters_BasicTitan_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Titan;
  if (pCVar1 == (Characters_BasicTitan_o *)0x0) {
label_181f7b163:
    ThrowNullReferenceException();
  }
  bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
  if (bVar2) {
    pCVar1 = (__this->fields).Titan;
    if (pCVar1 == (Characters_BasicTitan_o *)0x0) goto label_181f7b163;
    if ((pCVar1->fields).Dead == false) {
      if (duration == 0.0) {
        duration = (pCVar1->fields).StunTime;
      }
      (*(pCVar1->klass->vtable)._155_Stun.methodPtr)
                (pCVar1,duration,true,(pCVar1->klass->vtable)._155_Stun.method);
    }
  }
  return;
}


// CustomLogic.CustomLogicTitanBuiltin$$IsAlive
// il2cpp: bool CustomLogic_CustomLogicTitanBuiltin__IsAlive (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x181f7b0a0

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
// 0x181f7b2a0

System_String_o *
CustomLogic_CustomLogicTitanBuiltin__get_ClassName
          (CustomLogic_CustomLogicTitanBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345805 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Titan");
    Il2CppMethodInitialized_184345805 = '\x01';
  }
  return "Titan";
}


// CustomLogic.CustomLogicTitanBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicTitanBuiltin__get_IsAbstract (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicTitanBuiltin__get_IsAbstract(CustomLogic_CustomLogicTitanBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicTitanBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicTitanBuiltin__get_IsStatic (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicTitanBuiltin__get_IsStatic(CustomLogic_CustomLogicTitanBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicTitanBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicTitanBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicTitanBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicTitanBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicTitanBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


