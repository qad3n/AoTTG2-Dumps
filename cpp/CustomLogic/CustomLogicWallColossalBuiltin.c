// Type: CustomLogic.CustomLogicWallColossalBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicWallColossalBuiltin.cs
// Prior real C# source: none
// --------------------------------

// CustomLogic.CustomLogicWallColossalBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicWallColossalBuiltin_o* CustomLogic_CustomLogicWallColossalBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181fa3930

CustomLogic_CustomLogicWallColossalBuiltin_o *
CustomLogic_CustomLogicWallColossalBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

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
  str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicWallColossalBuiltin constructor found that takes ");
  pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
  System_ArgumentException___ctor_1a77cc0(__this,pSVar1,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Factory_CreateInstance);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x181fa62e0

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_1843458c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843458c2 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings.<>c$$<__CreateMethodBinding__AttackSteam>b__23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_____CreateMethodBinding__AttackSteam_b__23_0 (CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicWallColossalBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181fa4d70

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_____CreateMethodBinding__AttackSteam_b__23_0
          (CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicWallColossalBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  
  if ((__c != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__c->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__c->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_181fa4dbc;
      if ((pCVar1->fields).Dead == false) {
        Characters_WallColossalShifter__SteamAttack(pCVar1,(MethodInfo *)0x0);
      }
    }
    return (Il2CppObject *)0x0;
  }
label_181fa4dbc:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings.<>c$$<__CreateMethodBinding__StopSteam>b__24_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_____CreateMethodBinding__StopSteam_b__24_0 (CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicWallColossalBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181fa5b20

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_____CreateMethodBinding__StopSteam_b__24_0
          (CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicWallColossalBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  
  if ((__c != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__c->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__c->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_181fa5b6c;
      if ((pCVar1->fields).Dead == false) {
        Characters_WallColossalShifter__StopSteam(pCVar1,(MethodInfo *)0x0);
      }
    }
    return (Il2CppObject *)0x0;
  }
label_181fa5b6c:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings.<>c$$<__CreateMethodBinding__WallAttack>b__25_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_____CreateMethodBinding__WallAttack_b__25_0 (CustomLogic_CustomLogicWallColossalBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicWallColossalBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181fa5f90

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
    if (bVar2) {
      pCVar1 = (__c->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_181fa5feb;
      if (((pCVar1->fields).Dead == false) && ((pCVar1->fields).AI != false)) {
        __this_00 = (__c->fields).Controller;
        if (__this_00 == (Controllers_WallColossalAIController_o *)0x0) goto label_181fa5feb;
        Controllers_WallColossalAIController__WallAttack(__this_00,(MethodInfo *)0x0);
      }
    }
    return (Il2CppObject *)0x0;
  }
label_181fa5feb:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181f8b3d0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *__this_00;
  ExitGames_Client_Photon_SerializeStreamMethod_o *pEVar4;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *pSVar5;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_01;
  System_String_o *pSVar6;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_02;
  MethodInfo *pMVar7;
  
  if (Il2CppMethodInitialized_184345897 == '\0') {
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
    Il2CppMethodInitialized_184345897 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x848ecb43) {
    if (uVar3 < 0x40e3d514) {
      if (uVar3 < 0x32b26902) {
        if (uVar3 == 0x27dc816) {
          bVar2 = System_String__op_Equality(name,"RecoveryTimeLeft",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f8c9bf;
          if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843458a8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RecoveryTimeLeft_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RecoveryTimeLeft_g_40f5fe0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
            Il2CppMethodInitialized_1843458a8 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
          System_Func_object__object____ctor
                    (__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RecoveryTimeLeft_g
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RecoveryTimeLeft_g_40f5fe0
          ;
        }
        else {
          if (uVar3 == 0xa0c428d) {
            bVar2 = System_String__op_Equality(name,"WallAttack",(MethodInfo *)0x0);
            if (bVar2) {
              if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
              }
              if (Il2CppMethodInitialized_1843458af == '\0') {
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
                Il2CppMethodInitialized_1843458af = '\x01';
              }
              if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->_2).
                  cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c);
              }
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields->
                       __9__25_0;
              if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
                if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->_2).
                    cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c);
                }
                pIVar1 = (Il2CppObject *)
                         TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields->__9;
                pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                         il2cpp_codegen_object_new
                                   ((Il2CppClass *)
                                    TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object_array_object);
                System_Func_object__object__object____ctor
                          (pEVar4,pIVar1,
                           (intptr_t)
                           MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c___CreateMethodBinding__WallAttack_b__25_0
                           ,(MethodInfo *)0x0);
                TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields->__9__25_0 =
                     (System_Func_CustomLogicWallColossalBuiltin__object____object__o *)pEVar4;
                Il2CppCodeGenWriteBarrier
                          (&TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields->
                            __9__25_0,pEVar4);
              }
              pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin);
              CustomLogic_CLMethodBinding_object____ctor
                        (pSVar5,(System_String_o *)pEVar4,
                         MethodInfo_CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin_ctor);
              return (CustomLogic_ICLMemberBinding_o *)pSVar5;
            }
            goto label_181f8c9bf;
          }
          if (uVar3 != 0x32b26901) goto label_181f8c9bf;
          bVar2 = System_String__op_Equality(name,"HandSeverWindow",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f8c9bf;
          if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843458a2 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__HandSeverWindow_g
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__HandSeverWindow_g_40f5300
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
            Il2CppMethodInitialized_1843458a2 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
          System_Func_object__object____ctor
                    (__this,(Il2CppObject *)0x0,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__HandSeverWindow_g
                     ,(MethodInfo_16E67D0 *)0x0);
          __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                      il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__HandSeverWindow_g_40f5300
          ;
        }
      }
      else if (uVar3 == 0x3736fc29) {
        bVar2 = System_String__op_Equality(name,"RightHandSeverTimeLeft",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f8c9bf;
        if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843458a4 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RightHandSeverTimeL
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RightHandSeverTimeL_40f6350
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
          Il2CppMethodInitialized_1843458a4 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RightHandSeverTimeL
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RightHandSeverTimeL_40f6350
        ;
      }
      else if (uVar3 == 0x3a204e3a) {
        bVar2 = System_String__op_Equality(name,"MaxRightHandHealth",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f8c9bf;
        if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434589d == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxRightHandHealth
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxRightHandHealth_40f5c70
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
          Il2CppMethodInitialized_18434589d = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxRightHandHealth
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxRightHandHealth_40f5c70
        ;
      }
      else {
        if (uVar3 != 0x40e3d513) goto label_181f8c9bf;
        bVar2 = System_String__op_Equality(name,"LeftHandHealth",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f8c9bf;
        if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434589a == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__LeftHandHealth_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__LeftHandHealth_g_40f54b8
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
          Il2CppMethodInitialized_18434589a = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__LeftHandHealth_g
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__LeftHandHealth_g_40f54b8
        ;
      }
    }
    else if (uVar3 < 0x63ececc1) {
      if (uVar3 == 0x43369292) {
        bVar2 = System_String__op_Equality(name,"StunState",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f8c9bf;
        if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843458a9 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__StunState_g____gett
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
          Il2CppMethodInitialized_1843458a9 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__StunState_g____gett
        ;
        goto label_181f8b6a8;
      }
      if (uVar3 == 0x4f9fdfe6) {
        bVar2 = System_String__op_Equality(name,"HandHealth",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f8c9bf;
        if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345898 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
          Il2CppMethodInitialized_184345898 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__HandHealth_g____get
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__HandHealth_g____set
        ;
      }
      else {
        if (uVar3 != 0x63ececc0) goto label_181f8c9bf;
        bVar2 = System_String__op_Equality(name,"WallAttackCooldown",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f8c9bf;
        if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843458aa == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__WallAttackCooldown
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__WallAttackCooldown_40f6b10
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
          Il2CppMethodInitialized_1843458aa = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__WallAttackCooldown
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__WallAttackCooldown_40f6b10
        ;
      }
    }
    else if (uVar3 == 0x662d291c) {
      bVar2 = System_String__op_Equality(name,"CanDamageLeftHand",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f8c9bf;
      if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434589e == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__CanDamageLeftHand_g
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__CanDamageLeftHand_g_40f4dd8
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
        Il2CppMethodInitialized_18434589e = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__CanDamageLeftHand_g
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__CanDamageLeftHand_g_40f4dd8
      ;
    }
    else {
      if (uVar3 == 0x67ff8d2b) {
        bVar2 = System_String__op_Equality(name,"AttackSteam",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843458ad == '\0') {
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
            Il2CppMethodInitialized_1843458ad = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields->__9__23_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->_2).
                cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c___CreateMethodBinding__AttackSteam_b__23_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields->__9__23_0 =
                 (System_Func_CustomLogicWallColossalBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields->
                        __9__23_0,pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
label_181f8c9bf:
        pSVar6 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicWallColossalBuiltin not found");
        str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
        pSVar6 = System_String__Concat_1969b70(str0,name,pSVar6,(MethodInfo *)0x0);
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
        System_Exception___ctor_1b6abf0(__this_02,pSVar6,(MethodInfo *)0x0);
        pMVar7 = il2cpp_codegen_get_runtime_metadata
                           (&
                            MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_CreateMemberBinding
                           );
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,pMVar7);
      }
      if (uVar3 != 0x848ecb42) goto label_181f8c9bf;
      bVar2 = System_String__op_Equality(name,"MaxHandHealth",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f8c9bf;
      if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345899 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxHandHealth_g
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxHandHealth_g_40f5900
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
        Il2CppMethodInitialized_184345899 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxHandHealth_g
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxHandHealth_g_40f5900
      ;
    }
  }
  else if (uVar3 < 0xa87e463f) {
    if (uVar3 < 0x9e7aa180) {
      if (uVar3 == 0x875ecbb5) {
        bVar2 = System_String__op_Equality(name,"RightHandState",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f8c9bf;
        if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843458a1 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RightHandState_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
          Il2CppMethodInitialized_1843458a1 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RightHandState_g
        ;
        goto label_181f8b6a8;
      }
      if (uVar3 == 0x98c20b49) {
        bVar2 = System_String__op_Equality(name,"StunTimeLeft",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f8c9bf;
        if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843458a6 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
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
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
          Il2CppMethodInitialized_1843458a6 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__StunTimeLeft_g____g
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__StunTimeLeft_g____s
        ;
      }
      else {
        if (uVar3 != 0x9e7aa17f) goto label_181f8c9bf;
        bVar2 = System_String__op_Equality(name,"MaxLeftHandHealth",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f8c9bf;
        if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434589b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxLeftHandHealth_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxLeftHandHealth_g_40f5ab8
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
          Il2CppMethodInitialized_18434589b = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxLeftHandHealth_g
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxLeftHandHealth_g_40f5ab8
        ;
      }
    }
    else if (uVar3 == 0xa2d6f7c7) {
      bVar2 = System_String__op_Equality(name,"CanDamageRightHand",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f8c9bf;
      if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434589f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__CanDamageRightHand
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__CanDamageRightHand_40f4f90
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
        Il2CppMethodInitialized_18434589f = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__CanDamageRightHand
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__CanDamageRightHand_40f4f90
      ;
    }
    else if (uVar3 == 0xa7e140ea) {
      bVar2 = System_String__op_Equality(name,"RecoveryDuration",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f8c9bf;
      if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843458a7 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RecoveryDuration_g
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RecoveryDuration_g_40f5e28
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
        Il2CppMethodInitialized_1843458a7 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RecoveryDuration_g
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RecoveryDuration_g_40f5e28
      ;
    }
    else {
      if (uVar3 != 0xa87e463e) goto label_181f8c9bf;
      bVar2 = System_String__op_Equality(name,"LeftHandSeverTimeLeft",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f8c9bf;
      if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843458a3 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__LeftHandSeverTimeLe
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__LeftHandSeverTimeLe_40f5670
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
        Il2CppMethodInitialized_1843458a3 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__LeftHandSeverTimeLe
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__LeftHandSeverTimeLe_40f5670
      ;
    }
  }
  else if (uVar3 < 0xdf3a7932) {
    if (uVar3 == 0xb22e4ad3) {
      bVar2 = System_String__op_Equality(name,"StopSteam",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843458ae == '\0') {
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
          Il2CppMethodInitialized_1843458ae = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
            0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c);
        }
        pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields->__9__24_0;
        if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor
              == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields->__9;
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (pEVar4,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c___CreateMethodBinding__StopSteam_b__24_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields->__9__24_0 =
               (System_Func_CustomLogicWallColossalBuiltin__object____object__o *)pEVar4;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields->__9__24_0
                     ,pEVar4);
        }
        pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin
                           );
        CustomLogic_CLMethodBinding_object____ctor
                  (pSVar5,(System_String_o *)pEVar4,
                   MethodInfo_CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)pSVar5;
      }
      goto label_181f8c9bf;
    }
    if (uVar3 == 0xbebdf4c1) {
      bVar2 = System_String__op_Equality(name,"WallAttackCooldownLeft",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f8c9bf;
      if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843458ab == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__WallAttackCooldownL
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__WallAttackCooldownL_40f6cc0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
        Il2CppMethodInitialized_1843458ab = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__WallAttackCooldownL
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__WallAttackCooldownL_40f6cc0
      ;
    }
    else {
      if (uVar3 != 0xdf3a7931) goto label_181f8c9bf;
      bVar2 = System_String__op_Equality(name,"StunDuration",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f8c9bf;
      if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843458a5 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
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
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
        Il2CppMethodInitialized_1843458a5 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,
                 (intptr_t)
                 MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__StunDuration_g____g
                 ,(MethodInfo_16E67D0 *)0x0);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                  il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__StunDuration_g____s
      ;
    }
  }
  else {
    if (uVar3 != 0xf0344aa6) {
      if (uVar3 == 0xfbba1884) {
        bVar2 = System_String__op_Equality(name,"SteamState",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f8c9bf;
        if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843458ac == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__SteamState_g____get
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
          Il2CppMethodInitialized_1843458ac = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__SteamState_g____get
        ;
      }
      else {
        if (uVar3 != 0xfc51eb92) goto label_181f8c9bf;
        bVar2 = System_String__op_Equality(name,"LeftHandState",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f8c9bf;
        if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843458a0 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__LeftHandState_g
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
          Il2CppMethodInitialized_1843458a0 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__LeftHandState_g
        ;
      }
label_181f8b6a8:
      System_Func_object__object____ctor
                (__this,(Il2CppObject *)0x0,(intptr_t)pMVar7,(MethodInfo_16E67D0 *)0x0);
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)
                             TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
      __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)0x0;
      goto label_181f8c99a;
    }
    bVar2 = System_String__op_Equality(name,"RightHandHealth",(MethodInfo *)0x0);
    if (!bVar2) goto label_181f8c9bf;
    if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings);
    }
    if (Il2CppMethodInitialized_18434589c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RightHandHealth_g
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&
                 MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RightHandHealth_g_40f6198
                );
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
      Il2CppMethodInitialized_18434589c = '\x01';
    }
    __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    System_Func_object__object____ctor
              (__this,(Il2CppObject *)0x0,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RightHandHealth_g
               ,(MethodInfo_16E67D0 *)0x0);
    __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
    pMVar7 = 
    MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RightHandHealth_g_40f6198
    ;
  }
  System_Action_object__object____ctor
            (__this_00,(Il2CppObject *)0x0,(intptr_t)pMVar7,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
label_181f8c99a:
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_01;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__HandHealth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__HandHealth (const MethodInfo* method);
// 0x181f977f0

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__HandHealth(MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  System_Action_CustomLogicWallColossalBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345898 == '\0') {
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
    Il2CppMethodInitialized_184345898 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__HandHealth_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__HandHealth_g____set
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__MaxHandHealth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__MaxHandHealth (const MethodInfo* method);
// 0x181f98e70

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__MaxHandHealth
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  System_Action_CustomLogicWallColossalBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345899 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxHandHealth_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxHandHealth_g_40f5900
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_184345899 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxHandHealth_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxHandHealth_g_40f5900
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__LeftHandHealth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__LeftHandHealth (const MethodInfo* method);
// 0x181f98830

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__LeftHandHealth
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  System_Action_CustomLogicWallColossalBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434589a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__LeftHandHealth_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__LeftHandHealth_g_40f54b8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_18434589a = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__LeftHandHealth_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__LeftHandHealth_g_40f54b8
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__MaxLeftHandHealth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__MaxLeftHandHealth (const MethodInfo* method);
// 0x181f98f60

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__MaxLeftHandHealth
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  System_Action_CustomLogicWallColossalBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434589b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxLeftHandHealth_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxLeftHandHealth_g_40f5ab8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_18434589b = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxLeftHandHealth_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxLeftHandHealth_g_40f5ab8
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__RightHandHealth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__RightHandHealth (const MethodInfo* method);
// 0x181f99eb0

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__RightHandHealth
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  System_Action_CustomLogicWallColossalBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434589c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RightHandHealth_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RightHandHealth_g_40f6198
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_18434589c = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RightHandHealth_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RightHandHealth_g_40f6198
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__MaxRightHandHealth
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__MaxRightHandHealth (const MethodInfo* method);
// 0x181f99050

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__MaxRightHandHealth
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  System_Action_CustomLogicWallColossalBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434589d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxRightHandHealth
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxRightHandHealth_40f5c70
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_18434589d = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxRightHandHealth
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__MaxRightHandHealth_40f5c70
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__CanDamageLeftHand
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__CanDamageLeftHand (const MethodInfo* method);
// 0x181f959a0

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__CanDamageLeftHand
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  System_Action_CustomLogicWallColossalBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434589e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__CanDamageLeftHand_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__CanDamageLeftHand_g_40f4dd8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_18434589e = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__CanDamageLeftHand_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__CanDamageLeftHand_g_40f4dd8
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__CanDamageRightHand
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__CanDamageRightHand (const MethodInfo* method);
// 0x181f95a90

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__CanDamageRightHand
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  System_Action_CustomLogicWallColossalBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_18434589f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__CanDamageRightHand
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__CanDamageRightHand_40f4f90
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_18434589f = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__CanDamageRightHand
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__CanDamageRightHand_40f4f90
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__LeftHandState
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__LeftHandState (const MethodInfo* method);
// 0x181f98a10

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__LeftHandState
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843458a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__LeftHandState_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_1843458a0 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__LeftHandState_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__RightHandState
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__RightHandState (const MethodInfo* method);
// 0x181f9a090

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__RightHandState
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843458a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RightHandState_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_1843458a1 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RightHandState_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__HandSeverWindow
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__HandSeverWindow (const MethodInfo* method);
// 0x181f978e0

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__HandSeverWindow
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  System_Action_CustomLogicWallColossalBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843458a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__HandSeverWindow_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__HandSeverWindow_g_40f5300
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_1843458a2 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__HandSeverWindow_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__HandSeverWindow_g_40f5300
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__LeftHandSeverTimeLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__LeftHandSeverTimeLeft (const MethodInfo* method);
// 0x181f98920

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__LeftHandSeverTimeLeft
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  System_Action_CustomLogicWallColossalBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843458a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__LeftHandSeverTimeLe
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__LeftHandSeverTimeLe_40f5670
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_1843458a3 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__LeftHandSeverTimeLe
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__LeftHandSeverTimeLe_40f5670
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__RightHandSeverTimeLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__RightHandSeverTimeLeft (const MethodInfo* method);
// 0x181f99fa0

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__RightHandSeverTimeLeft
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  System_Action_CustomLogicWallColossalBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843458a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RightHandSeverTimeL
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RightHandSeverTimeL_40f6350
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_1843458a4 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RightHandSeverTimeL
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RightHandSeverTimeL_40f6350
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__StunDuration
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__StunDuration (const MethodInfo* method);
// 0x181f9b5d0

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__StunDuration(MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  System_Action_CustomLogicWallColossalBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843458a5 == '\0') {
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
    Il2CppMethodInitialized_1843458a5 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__StunDuration_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__StunDuration_g____s
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__StunTimeLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__StunTimeLeft (const MethodInfo* method);
// 0x181f9b760

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__StunTimeLeft(MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  System_Action_CustomLogicWallColossalBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843458a6 == '\0') {
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
    Il2CppMethodInitialized_1843458a6 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__StunTimeLeft_g____g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__StunTimeLeft_g____s
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__RecoveryDuration
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__RecoveryDuration (const MethodInfo* method);
// 0x181f99c30

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__RecoveryDuration
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  System_Action_CustomLogicWallColossalBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843458a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RecoveryDuration_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RecoveryDuration_g_40f5e28
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_1843458a7 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RecoveryDuration_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RecoveryDuration_g_40f5e28
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__RecoveryTimeLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__RecoveryTimeLeft (const MethodInfo* method);
// 0x181f99d20

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__RecoveryTimeLeft
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  System_Action_CustomLogicWallColossalBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843458a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RecoveryTimeLeft_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RecoveryTimeLeft_g_40f5fe0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_1843458a8 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RecoveryTimeLeft_g
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__RecoveryTimeLeft_g_40f5fe0
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__StunState
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__StunState (const MethodInfo* method);
// 0x181f9b6c0

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__StunState(MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843458a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__StunState_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_1843458a9 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__StunState_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__WallAttackCooldown
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__WallAttackCooldown (const MethodInfo* method);
// 0x181f9c750

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__WallAttackCooldown
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  System_Action_CustomLogicWallColossalBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843458aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__WallAttackCooldown
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__WallAttackCooldown_40f6b10
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_1843458aa = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__WallAttackCooldown
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__WallAttackCooldown_40f6b10
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__WallAttackCooldownLeft
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__WallAttackCooldownLeft (const MethodInfo* method);
// 0x181f9c660

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__WallAttackCooldownLeft
          (MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  System_Action_CustomLogicWallColossalBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_1843458ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__WallAttackCooldownL
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__WallAttackCooldownL_40f6cc0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_1843458ab = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__WallAttackCooldownL
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicWallColossalBuiltin_object);
  System_Action_object__object____ctor
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__WallAttackCooldownL_40f6cc0
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreatePropertyBinding__SteamState
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__SteamState (const MethodInfo* method);
// 0x181f9b490

CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreatePropertyBinding__SteamState(MethodInfo *method)

{
  System_Func_CustomLogicWallColossalBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843458ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__SteamState_g____get
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
    Il2CppMethodInitialized_1843458ac = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings___CreatePropertyBinding__SteamState_g____get
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin)
  ;
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)
             MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicWallColossalBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreateMethodBinding__AttackSteam
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreateMethodBinding__AttackSteam (const MethodInfo* method);
// 0x181f91bd0

CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreateMethodBinding__AttackSteam(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843458ad == '\0') {
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
    Il2CppMethodInitialized_1843458ad = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields->__9__23_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)
             TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object_array_object
                       );
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c___CreateMethodBinding__AttackSteam_b__23_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields->__9__23_0 =
         (System_Func_CustomLogicWallColossalBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields->__9__23_0,
               __this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreateMethodBinding__StopSteam
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreateMethodBinding__StopSteam (const MethodInfo* method);
// 0x181f93040

CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreateMethodBinding__StopSteam(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843458ae == '\0') {
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
    Il2CppMethodInitialized_1843458ae = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields->__9__24_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)
             TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object_array_object
                       );
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c___CreateMethodBinding__StopSteam_b__24_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields->__9__24_0 =
         (System_Func_CustomLogicWallColossalBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields->__9__24_0,
               __this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$__CreateMethodBinding__WallAttack
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin__o* CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreateMethodBinding__WallAttack (const MethodInfo* method);
// 0x181f93700

CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin__o *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings____CreateMethodBinding__WallAttack(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843458af == '\0') {
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
    Il2CppMethodInitialized_1843458af = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields->__9__25_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
    {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)
             TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicWallColossalBuiltin_object_array_object
                       );
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c___CreateMethodBinding__WallAttack_b__25_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields->__9__25_0 =
         (System_Func_CustomLogicWallColossalBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings_c->static_fields->__9__25_0,
               __this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicWallColossalBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x181f9dcc0

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_1843458b0 == '\0') {
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
    Il2CppMethodInitialized_1843458b0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HandHealth",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MaxHandHealth",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LeftHandHealth",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MaxLeftHandHealth",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RightHandHealth",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MaxRightHandHealth",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CanDamageLeftHand",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CanDamageRightHand",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LeftHandState",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RightHandState",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HandSeverWindow",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"LeftHandSeverTimeLeft",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RightHandSeverTimeLeft",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"StunDuration",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"StunTimeLeft",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RecoveryDuration",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"RecoveryTimeLeft",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"StunState",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"WallAttackCooldown",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"WallAttackCooldownLeft",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SteamState",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"AttackSteam",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"StopSteam",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"WallAttack",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicWallColossalBuiltin_Bindings->static_fields->MemberNames,
               __this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__HandHealth>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__HandHealth_g____getter_2_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x181f8e630

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__HandHealth_g____getter_2_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  Il2CppObject *pIVar2;
  int local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    local_res8[0] = ((pCVar1->fields).CurrentRightHandHealth + (pCVar1->fields).CurrentLeftHandHealth) / 2;
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__HandHealth>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__HandHealth_g____setter_2_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f8e680

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__HandHealth_g____setter_2_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  int32_t health;
  
  if (Il2CppMethodInitialized_1843458b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843458b1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  health = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                     (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
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
// 0x181f8f4d0

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__MaxHandHealth_g____getter_3_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  Il2CppObject *pIVar2;
  int local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    local_res8[0] = ((pCVar1->fields).MaxRightHandHealth + (pCVar1->fields).MaxLeftHandHealth) / 2;
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__MaxHandHealth>g____setter|3_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__MaxHandHealth_g____setter_3_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f8f520

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__MaxHandHealth_g____setter_3_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  int32_t maxHealth;
  
  if (Il2CppMethodInitialized_1843458b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843458b2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  maxHealth = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
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
// 0x181f8ee10

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__LeftHandHealth_g____getter_4_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  Il2CppObject *pIVar2;
  int32_t local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).CurrentLeftHandHealth;
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__LeftHandHealth>g____setter|4_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__LeftHandHealth_g____setter_4_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f8ee50

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__LeftHandHealth_g____setter_4_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  int32_t health;
  
  if (Il2CppMethodInitialized_1843458b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843458b3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  health = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                     (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_181f8eeef;
      Characters_WallColossalShifter__SetCurrentLeftHandHealth(pCVar1,health,(MethodInfo *)0x0);
    }
    return;
  }
label_181f8eeef:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__MaxLeftHandHealth>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__MaxLeftHandHealth_g____getter_5_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x181f8f5e0

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__MaxLeftHandHealth_g____getter_5_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  Il2CppObject *pIVar2;
  int32_t local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).MaxLeftHandHealth;
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__MaxLeftHandHealth>g____setter|5_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__MaxLeftHandHealth_g____setter_5_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f8f620

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__MaxLeftHandHealth_g____setter_5_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  int32_t maxHealth;
  
  if (Il2CppMethodInitialized_1843458b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843458b4 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  maxHealth = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_181f8f6bf;
      Characters_WallColossalShifter__SetMaxLeftHandHealth(pCVar1,maxHealth,(MethodInfo *)0x0);
    }
    return;
  }
label_181f8f6bf:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__RightHandHealth>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RightHandHealth_g____getter_6_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x181f90110

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RightHandHealth_g____getter_6_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  Il2CppObject *pIVar2;
  int32_t local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).CurrentRightHandHealth;
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__RightHandHealth>g____setter|6_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RightHandHealth_g____setter_6_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f90150

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RightHandHealth_g____setter_6_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  int32_t health;
  
  if (Il2CppMethodInitialized_1843458b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843458b5 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  health = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                     (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_181f901ef;
      Characters_WallColossalShifter__SetCurrentRightHandHealth(pCVar1,health,(MethodInfo *)0x0);
    }
    return;
  }
label_181f901ef:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__MaxRightHandHealth>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__MaxRightHandHealth_g____getter_7_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x181f8f6d0

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__MaxRightHandHealth_g____getter_7_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  Il2CppObject *pIVar2;
  int32_t local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).MaxRightHandHealth;
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__MaxRightHandHealth>g____setter|7_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__MaxRightHandHealth_g____setter_7_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f8f710

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__MaxRightHandHealth_g____setter_7_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  int32_t maxHealth;
  
  if (Il2CppMethodInitialized_1843458b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843458b6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  maxHealth = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                        (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_181f8f7af;
      Characters_WallColossalShifter__SetMaxRightHandHealth(pCVar1,maxHealth,(MethodInfo *)0x0);
    }
    return;
  }
label_181f8f7af:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__CanDamageLeftHand>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__CanDamageLeftHand_g____getter_8_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x181f8d8b0

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__CanDamageLeftHand_g____getter_8_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).CanDamageLeftHand;
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__CanDamageLeftHand>g____setter|8_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__CanDamageLeftHand_g____setter_8_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f8d8f0

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__CanDamageLeftHand_g____setter_8_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_1843458b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843458b7 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar3) {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_181f8d98d;
      (pCVar1->fields).CanDamageLeftHand = bVar2;
    }
    return;
  }
label_181f8d98d:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__CanDamageRightHand>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__CanDamageRightHand_g____getter_9_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x181f8d9a0

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__CanDamageRightHand_g____getter_9_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).CanDamageRightHand;
    pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__CanDamageRightHand>g____setter|9_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__CanDamageRightHand_g____setter_9_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f8d9e0

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__CanDamageRightHand_g____setter_9_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_1843458b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843458b8 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  bVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_66E400 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    bVar3 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar3) {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_181f8da7d;
      (pCVar1->fields).CanDamageRightHand = bVar2;
    }
    return;
  }
label_181f8da7d:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__LeftHandState>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__LeftHandState_g____getter_10_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x181f8eff0

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__LeftHandState_g____getter_10_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  Il2CppObject *pIVar2;
  int32_t local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    local_res8[0] = (pCVar1->fields)._leftHandState;
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__RightHandState>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RightHandState_g____getter_11_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x181f902f0

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RightHandState_g____getter_11_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  Il2CppObject *pIVar2;
  int32_t local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    local_res8[0] = (pCVar1->fields)._rightHandState;
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__HandSeverWindow>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__HandSeverWindow_g____getter_12_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x181f8e740

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__HandSeverWindow_g____getter_12_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).HandSeverWindow;
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__HandSeverWindow>g____setter|12_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__HandSeverWindow_g____setter_12_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f8e780

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__HandSeverWindow_g____setter_12_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_1843458b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843458b9 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_181f8e827;
      (pCVar1->fields).HandSeverWindow = fVar3;
    }
    return;
  }
label_181f8e827:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__LeftHandSeverTimeLeft>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__LeftHandSeverTimeLeft_g____getter_13_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x181f8ef00

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__LeftHandSeverTimeLeft_g____getter_13_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).LeftHandSeverTimeLeft;
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__LeftHandSeverTimeLeft>g____setter|13_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__LeftHandSeverTimeLeft_g____setter_13_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f8ef40

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__LeftHandSeverTimeLeft_g____setter_13_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_1843458ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843458ba = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_181f8efe7;
      (pCVar1->fields).LeftHandSeverTimeLeft = fVar3;
    }
    return;
  }
label_181f8efe7:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__RightHandSeverTimeLeft>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RightHandSeverTimeLeft_g____getter_14_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x181f90200

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RightHandSeverTimeLeft_g____getter_14_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).RightHandSeverTimeLeft;
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__RightHandSeverTimeLeft>g____setter|14_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RightHandSeverTimeLeft_g____setter_14_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f90240

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RightHandSeverTimeLeft_g____setter_14_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_1843458bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843458bb = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_181f902e7;
      (pCVar1->fields).RightHandSeverTimeLeft = fVar3;
    }
    return;
  }
label_181f902e7:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__StunDuration>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__StunDuration_g____getter_15_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x181f90f70

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__StunDuration_g____getter_15_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).StunDuration;
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__StunDuration>g____setter|15_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__StunDuration_g____setter_15_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f90fb0

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__StunDuration_g____setter_15_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_1843458bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843458bc = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_181f91057;
      (pCVar1->fields).StunDuration = fVar3;
    }
    return;
  }
label_181f91057:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__StunTimeLeft>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__StunTimeLeft_g____getter_16_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x181f910d0

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__StunTimeLeft_g____getter_16_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).StunTimeLeft;
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__StunTimeLeft>g____setter|16_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__StunTimeLeft_g____setter_16_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f91110

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__StunTimeLeft_g____setter_16_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_1843458bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843458bd = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_181f911b7;
      (pCVar1->fields).StunTimeLeft = fVar3;
    }
    return;
  }
label_181f911b7:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__RecoveryDuration>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RecoveryDuration_g____getter_17_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x181f8fee0

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RecoveryDuration_g____getter_17_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).RecoveryDuration;
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__RecoveryDuration>g____setter|17_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RecoveryDuration_g____setter_17_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f8ff20

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RecoveryDuration_g____setter_17_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_1843458be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843458be = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_181f8ffc7;
      (pCVar1->fields).RecoveryDuration = fVar3;
    }
    return;
  }
label_181f8ffc7:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__RecoveryTimeLeft>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RecoveryTimeLeft_g____getter_18_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x181f8ffd0

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RecoveryTimeLeft_g____getter_18_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).RecoveryTimeLeft;
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__RecoveryTimeLeft>g____setter|18_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RecoveryTimeLeft_g____setter_18_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f90010

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__RecoveryTimeLeft_g____setter_18_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  float fVar3;
  
  if (Il2CppMethodInitialized_1843458bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843458bf = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__i->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_181f900b7;
      (pCVar1->fields).RecoveryTimeLeft = fVar3;
    }
    return;
  }
label_181f900b7:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__StunState>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__StunState_g____getter_19_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x181f91060

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__StunState_g____getter_19_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  System_String_o *pSVar2;
  System_Enum_o local_28;
  int32_t local_18;
  
  if (__i == (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_184345895 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ColossalStunState);
    Il2CppMethodInitialized_184345895 = '\x01';
  }
  pCVar1 = (__i->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    local_18 = (pCVar1->fields)._stunState;
    local_28.klass = (System_Enum_c *)TypeInfo_Characters_ColossalStunState;
    local_28.monitor = &g_data_ffffffffffffffff;
    pSVar2 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__WallAttackCooldown>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__WallAttackCooldown_g____getter_20_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x181f91aa0

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__WallAttackCooldown_g____getter_20_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Controllers_WallColossalAIController_o *pCVar1;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Controller, pCVar1 != (Controllers_WallColossalAIController_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).WallAttackCooldown;
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__WallAttackCooldown>g____setter|20_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__WallAttackCooldown_g____setter_20_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f91ae0

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__WallAttackCooldown_g____setter_20_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Controllers_WallColossalAIController_o *pCVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_1843458c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843458c0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Controller, pCVar1 != (Controllers_WallColossalAIController_o *)0x0)) {
    (pCVar1->fields).WallAttackCooldown = fVar2;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__WallAttackCooldownLeft>g____getter|21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__WallAttackCooldownLeft_g____getter_21_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x181f919d0

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__WallAttackCooldownLeft_g____getter_21_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Controllers_WallColossalAIController_o *pCVar1;
  Il2CppObject *pIVar2;
  float local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Controller, pCVar1 != (Controllers_WallColossalAIController_o *)0x0)) {
    local_res8[0] = (pCVar1->fields).WallAttackCooldownLeft;
    pIVar2 = il2cpp_value_box(g_data_184354e38,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__WallAttackCooldownLeft>g____setter|21_1
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__WallAttackCooldownLeft_g____setter_21_1 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f91a10

void CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__WallAttackCooldownLeft_g____setter_21_1
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Controllers_WallColossalAIController_o *pCVar1;
  float fVar2;
  
  if (Il2CppMethodInitialized_1843458c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843458c1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  fVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo_float_
                    (__v,(MethodInfo_66ED40 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_float);
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Controller, pCVar1 != (Controllers_WallColossalAIController_o *)0x0)) {
    (pCVar1->fields).WallAttackCooldownLeft = fVar2;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin.Bindings$$<__CreatePropertyBinding__SteamState>g____getter|22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__SteamState_g____getter_22_0 (CustomLogic_CustomLogicWallColossalBuiltin_o* __i, const MethodInfo* method);
// 0x181f90f00

Il2CppObject *
CustomLogic_CustomLogicWallColossalBuiltin_Bindings_____CreatePropertyBinding__SteamState_g____getter_22_0
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__i,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  Il2CppObject *pIVar2;
  int32_t local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicWallColossalBuiltin_o *)0x0) &&
     (pCVar1 = (__i->fields).Shifter, pCVar1 != (Characters_WallColossalShifter_o *)0x0)) {
    local_res8[0] = (pCVar1->fields)._steamState;
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin___ctor (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, Characters_WallColossalShifter_o* shifter, const MethodInfo* method);
// 0x181fa2e70

void CustomLogic_CustomLogicWallColossalBuiltin___ctor
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,Characters_WallColossalShifter_o *shifter
               ,MethodInfo *method)

{
  Controllers_WallColossalAIController_o *value;
  
  if (Il2CppMethodInitialized_184345894 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Component_GetComponent_WallColossalAIController);
    Il2CppMethodInitialized_184345894 = '\x01';
  }
  CustomLogic_CustomLogicShifterBuiltin___ctor
            ((CustomLogic_CustomLogicShifterBuiltin_o *)__this,(Characters_BaseShifter_o *)shifter,
             (MethodInfo *)0x0);
  (__this->fields).Shifter = shifter;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Shifter,shifter);
  if (shifter != (Characters_WallColossalShifter_o *)0x0) {
    value = UnityEngine_Component__GetComponent_object_
                      ((UnityEngine_Component_o *)shifter,
                       (MethodInfo_6651A0 *)
                       MethodInfo_UnityEngine_Component_GetComponent_WallColossalAIController);
    (__this->fields).Controller = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Controller,value);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_HandHealth
// il2cpp: int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_HandHealth (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x181fa2f60

int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_HandHealth
                  (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    return ((pCVar1->fields).CurrentRightHandHealth + (pCVar1->fields).CurrentLeftHandHealth) / 2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_HandHealth
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_HandHealth (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181fa32d0

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
// 0x181fa3010

int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_MaxHandHealth
                  (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    return ((pCVar1->fields).MaxRightHandHealth + (pCVar1->fields).MaxLeftHandHealth) / 2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_MaxHandHealth
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_MaxHandHealth (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181fa3430

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
// 0x181fa2fb0

int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_LeftHandHealth
                  (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    return (pCVar1->fields).CurrentLeftHandHealth;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_LeftHandHealth
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_LeftHandHealth (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181fa3390

void CustomLogic_CustomLogicWallColossalBuiltin__set_LeftHandHealth
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_181fa33da;
      Characters_WallColossalShifter__SetCurrentLeftHandHealth(pCVar1,value,(MethodInfo *)0x0);
    }
    return;
  }
label_181fa33da:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_MaxLeftHandHealth
// il2cpp: int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_MaxLeftHandHealth (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x181fa3040

int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_MaxLeftHandHealth
                  (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    return (pCVar1->fields).MaxLeftHandHealth;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_MaxLeftHandHealth
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_MaxLeftHandHealth (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181fa34a0

void CustomLogic_CustomLogicWallColossalBuiltin__set_MaxLeftHandHealth
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_181fa34ea;
      Characters_WallColossalShifter__SetMaxLeftHandHealth(pCVar1,value,(MethodInfo *)0x0);
    }
    return;
  }
label_181fa34ea:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_RightHandHealth
// il2cpp: int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_RightHandHealth (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x181fa30c0

int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_RightHandHealth
                  (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    return (pCVar1->fields).CurrentRightHandHealth;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_RightHandHealth
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_RightHandHealth (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181fa35e0

void CustomLogic_CustomLogicWallColossalBuiltin__set_RightHandHealth
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_181fa362a;
      Characters_WallColossalShifter__SetCurrentRightHandHealth(pCVar1,value,(MethodInfo *)0x0);
    }
    return;
  }
label_181fa362a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_MaxRightHandHealth
// il2cpp: int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_MaxRightHandHealth (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x181fa3060

int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_MaxRightHandHealth
                  (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    return (pCVar1->fields).MaxRightHandHealth;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_MaxRightHandHealth
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_MaxRightHandHealth (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181fa34f0

void CustomLogic_CustomLogicWallColossalBuiltin__set_MaxRightHandHealth
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_181fa353a;
      Characters_WallColossalShifter__SetMaxRightHandHealth(pCVar1,value,(MethodInfo *)0x0);
    }
    return;
  }
label_181fa353a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_CanDamageLeftHand
// il2cpp: bool CustomLogic_CustomLogicWallColossalBuiltin__get_CanDamageLeftHand (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x181fa2ef0

bool CustomLogic_CustomLogicWallColossalBuiltin__get_CanDamageLeftHand
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    return (pCVar1->fields).CanDamageLeftHand;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_CanDamageLeftHand
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_CanDamageLeftHand (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181fa3230

void CustomLogic_CustomLogicWallColossalBuiltin__set_CanDamageLeftHand
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,bool value,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_181fa3278;
      (pCVar1->fields).CanDamageLeftHand = value;
    }
    return;
  }
label_181fa3278:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_CanDamageRightHand
// il2cpp: bool CustomLogic_CustomLogicWallColossalBuiltin__get_CanDamageRightHand (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x181fa2f10

bool CustomLogic_CustomLogicWallColossalBuiltin__get_CanDamageRightHand
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    return (pCVar1->fields).CanDamageRightHand;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_CanDamageRightHand
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_CanDamageRightHand (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x181fa3280

void CustomLogic_CustomLogicWallColossalBuiltin__set_CanDamageRightHand
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,bool value,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_181fa32c8;
      (pCVar1->fields).CanDamageRightHand = value;
    }
    return;
  }
label_181fa32c8:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_LeftHandState
// il2cpp: int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_LeftHandState (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x181fa2ff0

int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_LeftHandState
                  (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    return (pCVar1->fields)._leftHandState;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_RightHandState
// il2cpp: int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_RightHandState (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x181fa3100

int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_RightHandState
                  (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    return (pCVar1->fields)._rightHandState;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_HandSeverWindow
// il2cpp: float CustomLogic_CustomLogicWallColossalBuiltin__get_HandSeverWindow (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x181fa2f90

float CustomLogic_CustomLogicWallColossalBuiltin__get_HandSeverWindow
                (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    return (pCVar1->fields).HandSeverWindow;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_HandSeverWindow
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_HandSeverWindow (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181fa3340

void CustomLogic_CustomLogicWallColossalBuiltin__set_HandSeverWindow
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_181fa338a;
      (pCVar1->fields).HandSeverWindow = value;
    }
    return;
  }
label_181fa338a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_LeftHandSeverTimeLeft
// il2cpp: float CustomLogic_CustomLogicWallColossalBuiltin__get_LeftHandSeverTimeLeft (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x181fa2fd0

float CustomLogic_CustomLogicWallColossalBuiltin__get_LeftHandSeverTimeLeft
                (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    return (pCVar1->fields).LeftHandSeverTimeLeft;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_LeftHandSeverTimeLeft
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_LeftHandSeverTimeLeft (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181fa33e0

void CustomLogic_CustomLogicWallColossalBuiltin__set_LeftHandSeverTimeLeft
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_181fa342a;
      (pCVar1->fields).LeftHandSeverTimeLeft = value;
    }
    return;
  }
label_181fa342a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_RightHandSeverTimeLeft
// il2cpp: float CustomLogic_CustomLogicWallColossalBuiltin__get_RightHandSeverTimeLeft (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x181fa30e0

float CustomLogic_CustomLogicWallColossalBuiltin__get_RightHandSeverTimeLeft
                (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    return (pCVar1->fields).RightHandSeverTimeLeft;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_RightHandSeverTimeLeft
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_RightHandSeverTimeLeft (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181fa3630

void CustomLogic_CustomLogicWallColossalBuiltin__set_RightHandSeverTimeLeft
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_181fa367a;
      (pCVar1->fields).RightHandSeverTimeLeft = value;
    }
    return;
  }
label_181fa367a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_StunDuration
// il2cpp: float CustomLogic_CustomLogicWallColossalBuiltin__get_StunDuration (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x181fa3140

float CustomLogic_CustomLogicWallColossalBuiltin__get_StunDuration
                (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    return (pCVar1->fields).StunDuration;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_StunDuration
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_StunDuration (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181fa3680

void CustomLogic_CustomLogicWallColossalBuiltin__set_StunDuration
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_181fa36ca;
      (pCVar1->fields).StunDuration = value;
    }
    return;
  }
label_181fa36ca:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_StunTimeLeft
// il2cpp: float CustomLogic_CustomLogicWallColossalBuiltin__get_StunTimeLeft (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x181fa31d0

float CustomLogic_CustomLogicWallColossalBuiltin__get_StunTimeLeft
                (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    return (pCVar1->fields).StunTimeLeft;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_StunTimeLeft
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_StunTimeLeft (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181fa36d0

void CustomLogic_CustomLogicWallColossalBuiltin__set_StunTimeLeft
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_181fa371a;
      (pCVar1->fields).StunTimeLeft = value;
    }
    return;
  }
label_181fa371a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_RecoveryDuration
// il2cpp: float CustomLogic_CustomLogicWallColossalBuiltin__get_RecoveryDuration (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x181fa3080

float CustomLogic_CustomLogicWallColossalBuiltin__get_RecoveryDuration
                (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    return (pCVar1->fields).RecoveryDuration;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_RecoveryDuration
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_RecoveryDuration (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181fa3540

void CustomLogic_CustomLogicWallColossalBuiltin__set_RecoveryDuration
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_181fa358a;
      (pCVar1->fields).RecoveryDuration = value;
    }
    return;
  }
label_181fa358a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_RecoveryTimeLeft
// il2cpp: float CustomLogic_CustomLogicWallColossalBuiltin__get_RecoveryTimeLeft (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x181fa30a0

float CustomLogic_CustomLogicWallColossalBuiltin__get_RecoveryTimeLeft
                (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    return (pCVar1->fields).RecoveryTimeLeft;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_RecoveryTimeLeft
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_RecoveryTimeLeft (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181fa3590

void CustomLogic_CustomLogicWallColossalBuiltin__set_RecoveryTimeLeft
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,float value,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_181fa35da;
      (pCVar1->fields).RecoveryTimeLeft = value;
    }
    return;
  }
label_181fa35da:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_StunState
// il2cpp: System_String_o* CustomLogic_CustomLogicWallColossalBuiltin__get_StunState (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x181fa3160

System_String_o *
CustomLogic_CustomLogicWallColossalBuiltin__get_StunState
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  System_String_o *pSVar2;
  System_Enum_o local_28;
  int32_t local_18;
  
  if (Il2CppMethodInitialized_184345895 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Characters_ColossalStunState);
    Il2CppMethodInitialized_184345895 = '\x01';
  }
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    local_18 = (pCVar1->fields)._stunState;
    local_28.klass = (System_Enum_c *)TypeInfo_Characters_ColossalStunState;
    local_28.monitor = &g_data_ffffffffffffffff;
    pSVar2 = System_Enum__ToString(&local_28,(MethodInfo *)0x0);
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_WallAttackCooldown
// il2cpp: float CustomLogic_CustomLogicWallColossalBuiltin__get_WallAttackCooldown (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x181fa3210

float CustomLogic_CustomLogicWallColossalBuiltin__get_WallAttackCooldown
                (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Controllers_WallColossalAIController_o *pCVar1;
  
  pCVar1 = (__this->fields).Controller;
  if (pCVar1 != (Controllers_WallColossalAIController_o *)0x0) {
    return (pCVar1->fields).WallAttackCooldown;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_WallAttackCooldown
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_WallAttackCooldown (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181fa3740

void CustomLogic_CustomLogicWallColossalBuiltin__set_WallAttackCooldown
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,float value,MethodInfo *method)

{
  Controllers_WallColossalAIController_o *pCVar1;
  
  pCVar1 = (__this->fields).Controller;
  if (pCVar1 != (Controllers_WallColossalAIController_o *)0x0) {
    (pCVar1->fields).WallAttackCooldown = value;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_WallAttackCooldownLeft
// il2cpp: float CustomLogic_CustomLogicWallColossalBuiltin__get_WallAttackCooldownLeft (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x181fa31f0

float CustomLogic_CustomLogicWallColossalBuiltin__get_WallAttackCooldownLeft
                (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Controllers_WallColossalAIController_o *pCVar1;
  
  pCVar1 = (__this->fields).Controller;
  if (pCVar1 != (Controllers_WallColossalAIController_o *)0x0) {
    return (pCVar1->fields).WallAttackCooldownLeft;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$set_WallAttackCooldownLeft
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__set_WallAttackCooldownLeft (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, float value, const MethodInfo* method);
// 0x181fa3720

void CustomLogic_CustomLogicWallColossalBuiltin__set_WallAttackCooldownLeft
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,float value,MethodInfo *method)

{
  Controllers_WallColossalAIController_o *pCVar1;
  
  pCVar1 = (__this->fields).Controller;
  if (pCVar1 != (Controllers_WallColossalAIController_o *)0x0) {
    (pCVar1->fields).WallAttackCooldownLeft = value;
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_SteamState
// il2cpp: int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_SteamState (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x181fa3120

int32_t CustomLogic_CustomLogicWallColossalBuiltin__get_SteamState
                  (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    return (pCVar1->fields)._steamState;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$AttackSteam
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__AttackSteam (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x181fa2d70

void CustomLogic_CustomLogicWallColossalBuiltin__AttackSteam
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_181fa2dba;
      if ((pCVar1->fields).Dead == false) {
        Characters_WallColossalShifter__SteamAttack(pCVar1,(MethodInfo *)0x0);
        return;
      }
    }
    return;
  }
label_181fa2dba:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$StopSteam
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__StopSteam (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x181fa2dc0

void CustomLogic_CustomLogicWallColossalBuiltin__StopSteam
               (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  Characters_WallColossalShifter_o *pCVar1;
  bool bVar2;
  
  pCVar1 = (__this->fields).Shifter;
  if (pCVar1 != (Characters_WallColossalShifter_o *)0x0) {
    bVar2 = (*(pCVar1->klass->vtable)._74_IsMine.methodPtr)(pCVar1,(pCVar1->klass->vtable)._74_IsMine.method);
    if (bVar2) {
      pCVar1 = (__this->fields).Shifter;
      if (pCVar1 == (Characters_WallColossalShifter_o *)0x0) goto label_181fa2e0a;
      if ((pCVar1->fields).Dead == false) {
        Characters_WallColossalShifter__StopSteam(pCVar1,(MethodInfo *)0x0);
        return;
      }
    }
    return;
  }
label_181fa2e0a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicWallColossalBuiltin$$WallAttack
// il2cpp: void CustomLogic_CustomLogicWallColossalBuiltin__WallAttack (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x181fa2e10

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
// 0x181fa2f30

System_String_o *
CustomLogic_CustomLogicWallColossalBuiltin__get_ClassName
          (CustomLogic_CustomLogicWallColossalBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345896 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"WallColossal");
    Il2CppMethodInitialized_184345896 = '\x01';
  }
  return "WallColossal";
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicWallColossalBuiltin__get_IsAbstract (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicWallColossalBuiltin__get_IsAbstract(CustomLogic_CustomLogicWallColossalBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicWallColossalBuiltin__get_IsStatic (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicWallColossalBuiltin__get_IsStatic(CustomLogic_CustomLogicWallColossalBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicWallColossalBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicWallColossalBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicWallColossalBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicWallColossalBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicWallColossalBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


