// Type: CustomLogic.CustomLogicPlayerBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicPlayerBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicPlayerBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicPlayerBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicPlayerBuiltin_o* CustomLogic_CustomLogicPlayerBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x181f7bac0

CustomLogic_CustomLogicPlayerBuiltin_o *
CustomLogic_CustomLogicPlayerBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  Il2CppObject *obj;
  Photon_Realtime_Player_o *value;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_184345782 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_Player);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    Il2CppMethodInitialized_184345782 = '\x01';
  }
  local_res8[0] = 0;
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)args->max_length != 1) {
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicPlayerBuiltin constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  if ((int)args->max_length != 0) {
    obj = args->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_Player);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    if (Il2CppMethodInitialized_184345766 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
      Il2CppMethodInitialized_184345766 = '\x01';
    }
    if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    }
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    (__this->fields).Player = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).Player,value);
    return __this;
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x181f80970

void CustomLogic_CustomLogicPlayerBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_1843457a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843457a0 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicPlayerBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetCustomProperty>b__21_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_____CreateMethodBinding__GetCustomProperty_b__21_0 (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7d7e0

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_____CreateMethodBinding__GetCustomProperty_b__21_0
          (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPlayerBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_1843457a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843457a1 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar2,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (__c != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
      if (Il2CppMethodInitialized_18434577c == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"CL:");
        Il2CppMethodInitialized_18434577c = '\x01';
      }
      player = (__c->fields).Player;
      pSVar1 = System_String__Concat_1969e50("CL:",pSVar1,(MethodInfo *)0x0);
      pIVar2 = PhotonExtensions__GetCustomProperty(player,pSVar1,(MethodInfo *)0x0);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__SetCustomProperty>b__22_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_____CreateMethodBinding__SetCustomProperty_b__22_0 (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7f870

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_____CreateMethodBinding__SetCustomProperty_b__22_0
          (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPlayerBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Photon_Realtime_Player_o *pPVar2;
  bool bVar3;
  System_String_o *pSVar4;
  Photon_Realtime_Player_o *pPVar5;
  System_String_o *property;
  Il2CppClass *klass;
  System_Exception_o *__this_00;
  MethodInfo *lastManagedFrame;
  Il2CppObject *pIVar6;
  
  if (Il2CppMethodInitialized_1843457a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843457a2 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_181f7fa2d:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pSVar4 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar1,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if (1 < (uint)__a->max_length) {
      if (__c != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
        pIVar1 = __a->m_Items[1];
        if (Il2CppMethodInitialized_18434577d == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
          il2cpp_codegen_initialize_runtime_metadata(&"CL:");
          Il2CppMethodInitialized_18434577d = '\x01';
        }
        if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
        }
        bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
        if (!bVar3) {
          pPVar2 = (__c->fields).Player;
          if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
          }
          pPVar5 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
          if (pPVar2 != pPVar5) {
            return (Il2CppObject *)0x0;
          }
        }
        if (pIVar1 == (Il2CppObject *)0x0) {
label_181f7fa33:
          klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
          __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
          pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Player.SetCustomProperty only supports float, int, string, or bool values.");
          System_Exception___ctor_1b6abf0(__this_00,pSVar4,(MethodInfo *)0x0);
          lastManagedFrame =
               il2cpp_codegen_get_runtime_metadata
                         (&MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_SetCustomProperty);
          il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
        }
        pIVar6 = (Il2CppObject *)0x0;
        if (pIVar1->klass == g_data_184354e38) {
          pIVar6 = pIVar1;
        }
        if (pIVar6 == (Il2CppObject *)0x0) {
          pIVar6 = (Il2CppObject *)0x0;
          if (pIVar1->klass == g_data_184354e08) {
            pIVar6 = pIVar1;
          }
          if (pIVar6 == (Il2CppObject *)0x0) {
            pIVar6 = (Il2CppObject *)0x0;
            if (pIVar1->klass == g_data_184354e50) {
              pIVar6 = pIVar1;
            }
            if (pIVar6 == (Il2CppObject *)0x0) {
              pIVar6 = (Il2CppObject *)0x0;
              if (pIVar1->klass == g_data_184354de8) {
                pIVar6 = pIVar1;
              }
              if (pIVar6 == (Il2CppObject *)0x0) goto label_181f7fa33;
            }
          }
        }
        property = System_String__Concat_1969e50("CL:",pSVar4,(MethodInfo *)0x0);
        CustomLogic_CustomLogicPlayerBuiltin__CheckPropertyRateLimit(__c,property,(MethodInfo *)0x0);
        pPVar2 = (__c->fields).Player;
        pSVar4 = System_String__Concat_1969e50("CL:",pSVar4,(MethodInfo *)0x0);
        PhotonExtensions__SetCustomProperty(pPVar2,pSVar4,pIVar1,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_181f7fa2d;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings.<>c$$<__CreateMethodBinding__ClearKDR>b__23_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_____CreateMethodBinding__ClearKDR_b__23_0 (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x181f7cbc0

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_____CreateMethodBinding__ClearKDR_b__23_0
          (CustomLogic_CustomLogicPlayerBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicPlayerBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__c != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__ClearKDR(__c,(MethodInfo *)0x0);
    return (Il2CppObject *)0x0;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicPlayerBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x181f60ea0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_01;
  ExitGames_Client_Photon_SerializeStreamMethod_o *pEVar4;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *pSVar5;
  System_String_o *pSVar6;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_02;
  MethodInfo *pMVar7;
  
  if (Il2CppMethodInitialized_184345783 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"SetCustomProperty");
    il2cpp_codegen_initialize_runtime_metadata(&"Guild");
    il2cpp_codegen_initialize_runtime_metadata(&"Team");
    il2cpp_codegen_initialize_runtime_metadata(&"IsAnonymous");
    il2cpp_codegen_initialize_runtime_metadata(&"Kills");
    il2cpp_codegen_initialize_runtime_metadata(&"ClearKDR");
    il2cpp_codegen_initialize_runtime_metadata(&"Deaths");
    il2cpp_codegen_initialize_runtime_metadata(&"SpectateID");
    il2cpp_codegen_initialize_runtime_metadata(&"Character");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Loadout");
    il2cpp_codegen_initialize_runtime_metadata(&"GetCustomProperty");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterType");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnPoint");
    il2cpp_codegen_initialize_runtime_metadata(&"TotalDamage");
    il2cpp_codegen_initialize_runtime_metadata(&"UserID");
    il2cpp_codegen_initialize_runtime_metadata(&"Ping");
    il2cpp_codegen_initialize_runtime_metadata(&"Status");
    il2cpp_codegen_initialize_runtime_metadata(&"Connected");
    il2cpp_codegen_initialize_runtime_metadata(&"DisplayName");
    il2cpp_codegen_initialize_runtime_metadata(&"ID");
    il2cpp_codegen_initialize_runtime_metadata(&"HighestDamage");
    Il2CppMethodInitialized_184345783 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x7bf69371) {
    if (uVar3 < 0x2329c92d) {
      if (uVar3 < 0xfe07307) {
        if (uVar3 == 0x5ef20f) {
          bVar2 = System_String__op_Equality(name,"Status",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f6208f;
          if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434578d == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Status_g____getter_11_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
            Il2CppMethodInitialized_18434578d = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Status_g____getter_11_0
          ;
        }
        else {
          if (uVar3 != 0xfe07306) goto label_181f6208f;
          bVar2 = System_String__op_Equality(name,"Name",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f6208f;
          if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345789 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Name_g____getter_7_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
            Il2CppMethodInitialized_184345789 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Name_g____getter_7_0
          ;
        }
      }
      else if (uVar3 == 0x209c92df) {
        bVar2 = System_String__op_Equality(name,"UserID",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f6208f;
        if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345788 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__UserID_g____getter_6_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
          Il2CppMethodInitialized_184345788 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__UserID_g____getter_6_0
        ;
      }
      else {
        if (uVar3 == 0x2267fabd) {
          bVar2 = System_String__op_Equality(name,"ClearKDR",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345799 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c___CreateMethodBinding__ClearKDR_b__23_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345799 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields->__9__23_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicPlayerBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c___CreateMethodBinding__ClearKDR_b__23_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields->__9__23_0 =
                   (System_Func_CustomLogicPlayerBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields->__9__23_0,
                         pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
          goto label_181f6208f;
        }
        if (uVar3 != 0x2329c92c) goto label_181f6208f;
        bVar2 = System_String__op_Equality(name,"Team",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f6208f;
        if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434578c == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Team_g____getter_10_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
          Il2CppMethodInitialized_18434578c = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Team_g____getter_10_0
        ;
      }
    }
    else if (uVar3 < 0x537d6b99) {
      if (uVar3 == 0x33b0223e) {
        bVar2 = System_String__op_Equality(name,"IsAnonymous",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f6208f;
        if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345787 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__IsAnonymous_g____getter_5
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
          Il2CppMethodInitialized_184345787 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__IsAnonymous_g____getter_5
        ;
      }
      else if (uVar3 == 0x369870e0) {
        bVar2 = System_String__op_Equality(name,"Guild",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f6208f;
        if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434578b == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Guild_g____getter_9_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
          Il2CppMethodInitialized_18434578b = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Guild_g____getter_9_0
        ;
      }
      else {
        if (uVar3 != 0x537d6b98) goto label_181f6208f;
        bVar2 = System_String__op_Equality(name,"CharacterType",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f6208f;
        if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_18434578e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__CharacterType_g____getter
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
          Il2CppMethodInitialized_18434578e = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__CharacterType_g____getter
        ;
      }
    }
    else if (uVar3 == 0x56e8eb60) {
      bVar2 = System_String__op_Equality(name,"ID",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f6208f;
      if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345786 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__ID_g____getter_4_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
        Il2CppMethodInitialized_184345786 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__ID_g____getter_4_0;
    }
    else {
      if (uVar3 == 0x72527c0e) {
        bVar2 = System_String__op_Equality(name,"SpawnPoint",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f6208f;
        if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345796 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPlayerBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__SpawnPoint_g____getter_20
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__SpawnPoint_g____setter_20
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
          Il2CppMethodInitialized_184345796 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__SpawnPoint_g____getter_20
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicPlayerBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__SpawnPoint_g____setter_20
        ;
        goto label_181f610ce;
      }
      if (uVar3 != 0x7bf69370) goto label_181f6208f;
      bVar2 = System_String__op_Equality(name,"Connected",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f6208f;
      if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345785 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Connected_g____getter_3_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
        Il2CppMethodInitialized_184345785 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Connected_g____getter_3_0
      ;
    }
  }
  else if (uVar3 < 0xdbaad9bb) {
    if (uVar3 < 0xb404b03a) {
      if (uVar3 != 0x7fb7f0a9) {
        if (uVar3 == 0xb404b039) {
          bVar2 = System_String__op_Equality(name,"SetCustomProperty",(MethodInfo *)0x0);
          if (bVar2) {
            if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
            }
            if (Il2CppMethodInitialized_184345798 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin_ctor);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object_array_object);
              il2cpp_codegen_initialize_runtime_metadata
                        (&
                         MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c___CreateMethodBinding__SetCustomProperty_b__22_0
                        );
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c);
              Il2CppMethodInitialized_184345798 = '\x01';
            }
            if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c);
            }
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields->__9__22_0;
            if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
              if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                  0) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c);
              }
              pIVar1 = (Il2CppObject *)
                       TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields->__9;
              pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                       il2cpp_codegen_object_new
                                 ((Il2CppClass *)
                                  TypeInfo_System_Func_CustomLogicPlayerBuiltin_object_array_object);
              System_Func_object__object__object____ctor
                        (pEVar4,pIVar1,
                         (intptr_t)
                         MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c___CreateMethodBinding__SetCustomProperty_b__22_0
                         ,(MethodInfo *)0x0);
              TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields->__9__22_0 =
                   (System_Func_CustomLogicPlayerBuiltin__object____object__o *)pEVar4;
              Il2CppCodeGenWriteBarrier
                        (&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields->__9__22_0,
                         pEVar4);
            }
            pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin);
            CustomLogic_CLMethodBinding_object____ctor
                      (pSVar5,(System_String_o *)pEVar4,
                       MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin_ctor);
            return (CustomLogic_ICLMemberBinding_o *)pSVar5;
          }
        }
label_181f6208f:
        pSVar6 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicPlayerBuiltin not found");
        str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
        pSVar6 = System_String__Concat_1969b70(str0,name,pSVar6,(MethodInfo *)0x0);
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
        __this_02 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
        System_Exception___ctor_1b6abf0(__this_02,pSVar6,(MethodInfo *)0x0);
        pMVar7 = il2cpp_codegen_get_runtime_metadata
                           (&MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_CreateMemberBinding);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_02,pMVar7);
      }
      bVar2 = System_String__op_Equality(name,"Ping",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f6208f;
      if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345794 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Ping_g____getter_18_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
        Il2CppMethodInitialized_184345794 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Ping_g____getter_18_0;
    }
    else {
      if (uVar3 == 0xc835e055) {
        bVar2 = System_String__op_Equality(name,"GetCustomProperty",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_184345797 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c___CreateMethodBinding__GetCustomProperty_b__21_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c);
            Il2CppMethodInitialized_184345797 = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields->__9__21_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0
               ) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicPlayerBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c___CreateMethodBinding__GetCustomProperty_b__21_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields->__9__21_0 =
                 (System_Func_CustomLogicPlayerBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields->__9__21_0,
                       pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
        goto label_181f6208f;
      }
      if (uVar3 != 0xcd8e1e97) {
        if (uVar3 != 0xdbaad9ba) goto label_181f6208f;
        bVar2 = System_String__op_Equality(name,"Deaths",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f6208f;
        if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345791 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPlayerBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Deaths_g____getter_15_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Deaths_g____setter_15_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
          Il2CppMethodInitialized_184345791 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Deaths_g____getter_15_0
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicPlayerBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Deaths_g____setter_15_1
        ;
        goto label_181f610ce;
      }
      bVar2 = System_String__op_Equality(name,"SpectateID",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f6208f;
      if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345795 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__SpectateID_g____getter_19
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
        Il2CppMethodInitialized_184345795 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__SpectateID_g____getter_19
      ;
    }
  }
  else {
    if (0xf30591fe < uVar3) {
      if (uVar3 == 0xf4b21828) {
        bVar2 = System_String__op_Equality(name,"TotalDamage",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f6208f;
        if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345793 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPlayerBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__TotalDamage_g____getter_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__TotalDamage_g____setter_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
          Il2CppMethodInitialized_184345793 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__TotalDamage_g____getter_1
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicPlayerBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__TotalDamage_g____setter_1
        ;
      }
      else {
        if (uVar3 == 0xf8eca4b6) {
          bVar2 = System_String__op_Equality(name,"DisplayName",(MethodInfo *)0x0);
          if (!bVar2) goto label_181f6208f;
          if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_18434578a == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__DisplayName_g____getter_8
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
            Il2CppMethodInitialized_18434578a = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__DisplayName_g____getter_8
          ;
          goto label_181f62048;
        }
        if (uVar3 != 0xffbdd3de) goto label_181f6208f;
        bVar2 = System_String__op_Equality(name,"HighestDamage",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f6208f;
        if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345792 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPlayerBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__HighestDamage_g____getter
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__HighestDamage_g____setter
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
          Il2CppMethodInitialized_184345792 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__HighestDamage_g____getter
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicPlayerBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__HighestDamage_g____setter
        ;
      }
label_181f610ce:
      System_Action_object__object____ctor
                (__this_00,(Il2CppObject *)0x0,(intptr_t)pMVar7,(MethodInfo *)0x0);
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
      goto label_181f6206a;
    }
    if (uVar3 == 0xe078d003) {
      bVar2 = System_String__op_Equality(name,"Loadout",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f6208f;
      if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_18434578f == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Loadout_g____getter_13_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
        Il2CppMethodInitialized_18434578f = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Loadout_g____getter_13_0
      ;
    }
    else {
      if (uVar3 != 0xec7340b0) {
        if (uVar3 != 0xf30591fe) goto label_181f6208f;
        bVar2 = System_String__op_Equality(name,"Kills",(MethodInfo *)0x0);
        if (!bVar2) goto label_181f6208f;
        if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_184345790 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPlayerBuiltin_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Kills_g____getter_14_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Kills_g____setter_14_1
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
          Il2CppMethodInitialized_184345790 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Kills_g____getter_14_0
                   ,(MethodInfo_16E67D0 *)0x0);
        __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Action_CustomLogicPlayerBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Kills_g____setter_14_1
        ;
        goto label_181f610ce;
      }
      bVar2 = System_String__op_Equality(name,"Character",(MethodInfo *)0x0);
      if (!bVar2) goto label_181f6208f;
      if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_184345784 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Character_g____getter_2_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
        Il2CppMethodInitialized_184345784 = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Character_g____getter_2_0
      ;
    }
  }
label_181f62048:
  System_Func_object__object____ctor
            (__this,(Il2CppObject *)0x0,(intptr_t)pMVar7,(MethodInfo_16E67D0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  __this_00 = (Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)0x0;
label_181f6206a:
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return (CustomLogic_ICLMemberBinding_o *)__this_01;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Character
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Character (const MethodInfo* method);
// 0x181f6b4d0

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Character(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345784 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Character_g____getter_2_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_184345784 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Character_g____getter_2_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Connected
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Connected (const MethodInfo* method);
// 0x181f6b840

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Connected(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345785 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Connected_g____getter_3_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_184345785 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Connected_g____getter_3_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__ID
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__ID (const MethodInfo* method);
// 0x181f6c1f0

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__ID(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345786 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__ID_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_184345786 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__ID_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__IsAnonymous
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__IsAnonymous (const MethodInfo* method);
// 0x181f6c330

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__IsAnonymous(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345787 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__IsAnonymous_g____getter_5
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_184345787 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__IsAnonymous_g____getter_5
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__UserID
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__UserID (const MethodInfo* method);
// 0x181f6ebd0

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__UserID(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345788 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__UserID_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_184345788 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__UserID_g____getter_6_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Name
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Name (const MethodInfo* method);
// 0x181f6c920

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Name(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345789 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Name_g____getter_7_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_184345789 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Name_g____getter_7_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__DisplayName
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__DisplayName (const MethodInfo* method);
// 0x181f6bac0

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__DisplayName(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434578a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__DisplayName_g____getter_8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_18434578a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__DisplayName_g____getter_8
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Guild
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Guild (const MethodInfo* method);
// 0x181f6bf20

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Guild(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434578b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Guild_g____getter_9_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_18434578b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Guild_g____getter_9_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Team
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Team (const MethodInfo* method);
// 0x181f6e310

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Team(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434578c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Team_g____getter_10_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_18434578c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Team_g____getter_10_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Status
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Status (const MethodInfo* method);
// 0x181f6e090

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Status(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434578d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Status_g____getter_11_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_18434578d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Status_g____getter_11_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__CharacterType
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__CharacterType (const MethodInfo* method);
// 0x181f6b430

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__CharacterType(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434578e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__CharacterType_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_18434578e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__CharacterType_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Loadout
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Loadout (const MethodInfo* method);
// 0x181f6c6a0

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Loadout(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_18434578f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Loadout_g____getter_13_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_18434578f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Loadout_g____getter_13_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Kills
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Kills (const MethodInfo* method);
// 0x181f6c4c0

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Kills(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  System_Action_CustomLogicPlayerBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345790 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPlayerBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Kills_g____getter_14_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Kills_g____setter_14_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_184345790 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Kills_g____getter_14_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicPlayerBuiltin_object)
  ;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor_129b060
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Kills_g____setter_14_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Deaths
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Deaths (const MethodInfo* method);
// 0x181f6b9d0

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Deaths(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  System_Action_CustomLogicPlayerBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345791 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPlayerBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Deaths_g____getter_15_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Deaths_g____setter_15_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_184345791 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Deaths_g____getter_15_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicPlayerBuiltin_object)
  ;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor_129b060
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Deaths_g____setter_15_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__HighestDamage
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__HighestDamage (const MethodInfo* method);
// 0x181f6c100

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__HighestDamage(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  System_Action_CustomLogicPlayerBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345792 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPlayerBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__HighestDamage_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__HighestDamage_g____setter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_184345792 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__HighestDamage_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicPlayerBuiltin_object)
  ;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor_129b060
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__HighestDamage_g____setter
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__TotalDamage
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__TotalDamage (const MethodInfo* method);
// 0x181f6e770

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__TotalDamage(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  System_Action_CustomLogicPlayerBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345793 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPlayerBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__TotalDamage_g____getter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__TotalDamage_g____setter_1
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_184345793 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__TotalDamage_g____getter_1
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicPlayerBuiltin_object)
  ;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor_129b060
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__TotalDamage_g____setter_1
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__Ping
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Ping (const MethodInfo* method);
// 0x181f6d000

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__Ping(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345794 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Ping_g____getter_18_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_184345794 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__Ping_g____getter_18_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__SpectateID
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__SpectateID (const MethodInfo* method);
// 0x181f6de60

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__SpectateID(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_184345795 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__SpectateID_g____getter_19
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_184345795 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__SpectateID_g____getter_19
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreatePropertyBinding__SpawnPoint
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__SpawnPoint (const MethodInfo* method);
// 0x181f6dd70

CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreatePropertyBinding__SpawnPoint(MethodInfo *method)

{
  System_Func_CustomLogicPlayerBuiltin__object__o *__this;
  System_Action_CustomLogicPlayerBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_184345796 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicPlayerBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__SpawnPoint_g____getter_20
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__SpawnPoint_g____setter_20
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
    Il2CppMethodInitialized_184345796 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__SpawnPoint_g____getter_20
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_CustomLogicPlayerBuiltin_object)
  ;
  Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler___ctor_129b060
            ((Mono_Security_Cryptography_RSAManaged_KeyGeneratedEventHandler_1_o *)__this_00,
             (Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings___CreatePropertyBinding__SpawnPoint_g____setter_20
             ,(MethodInfo *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicPlayerBuiltin_ctor);
  return __this_01;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreateMethodBinding__GetCustomProperty
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreateMethodBinding__GetCustomProperty (const MethodInfo* method);
// 0x181f690d0

CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreateMethodBinding__GetCustomProperty(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345797 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c___CreateMethodBinding__GetCustomProperty_b__21_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345797 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields->__9__21_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c___CreateMethodBinding__GetCustomProperty_b__21_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields->__9__21_0 =
         (System_Func_CustomLogicPlayerBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields->__9__21_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreateMethodBinding__SetCustomProperty
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreateMethodBinding__SetCustomProperty (const MethodInfo* method);
// 0x181f6a670

CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreateMethodBinding__SetCustomProperty(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345798 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c___CreateMethodBinding__SetCustomProperty_b__22_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345798 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields->__9__22_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c___CreateMethodBinding__SetCustomProperty_b__22_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields->__9__22_0 =
         (System_Func_CustomLogicPlayerBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields->__9__22_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$__CreateMethodBinding__ClearKDR
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o* CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreateMethodBinding__ClearKDR (const MethodInfo* method);
// 0x181f68080

CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o *
CustomLogic_CustomLogicPlayerBuiltin_Bindings____CreateMethodBinding__ClearKDR(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_184345799 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicPlayerBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c___CreateMethodBinding__ClearKDR_b__23_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c);
    Il2CppMethodInitialized_184345799 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c)
    ;
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields->__9__23_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicPlayerBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c___CreateMethodBinding__ClearKDR_b__23_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields->__9__23_0 =
         (System_Func_CustomLogicPlayerBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings_c->static_fields->__9__23_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicPlayerBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x181f6f7e0

void CustomLogic_CustomLogicPlayerBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_18434579a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"SetCustomProperty");
    il2cpp_codegen_initialize_runtime_metadata(&"Guild");
    il2cpp_codegen_initialize_runtime_metadata(&"Team");
    il2cpp_codegen_initialize_runtime_metadata(&"IsAnonymous");
    il2cpp_codegen_initialize_runtime_metadata(&"Kills");
    il2cpp_codegen_initialize_runtime_metadata(&"ClearKDR");
    il2cpp_codegen_initialize_runtime_metadata(&"Deaths");
    il2cpp_codegen_initialize_runtime_metadata(&"SpectateID");
    il2cpp_codegen_initialize_runtime_metadata(&"Character");
    il2cpp_codegen_initialize_runtime_metadata(&"Name");
    il2cpp_codegen_initialize_runtime_metadata(&"Loadout");
    il2cpp_codegen_initialize_runtime_metadata(&"GetCustomProperty");
    il2cpp_codegen_initialize_runtime_metadata(&"CharacterType");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnPoint");
    il2cpp_codegen_initialize_runtime_metadata(&"TotalDamage");
    il2cpp_codegen_initialize_runtime_metadata(&"UserID");
    il2cpp_codegen_initialize_runtime_metadata(&"Ping");
    il2cpp_codegen_initialize_runtime_metadata(&"Status");
    il2cpp_codegen_initialize_runtime_metadata(&"Connected");
    il2cpp_codegen_initialize_runtime_metadata(&"DisplayName");
    il2cpp_codegen_initialize_runtime_metadata(&"ID");
    il2cpp_codegen_initialize_runtime_metadata(&"HighestDamage");
    Il2CppMethodInitialized_18434579a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Character",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Connected",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ID",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsAnonymous",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"UserID",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Name",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"DisplayName",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Guild",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Team",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Status",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"CharacterType",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Loadout",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Kills",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Deaths",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"HighestDamage",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"TotalDamage",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Ping",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpectateID",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SpawnPoint",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetCustomProperty",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SetCustomProperty",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ClearKDR",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Character>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Character_g____getter_2_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x181f629b0

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Character_g____getter_2_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  Utility_BaseComponentCache_o *pUVar1;
  bool bVar2;
  int32_t viewID;
  Photon_Pun_PhotonView_o *pPVar3;
  Characters_BaseCharacter_o *character;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar4;
  
  if (__i == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) goto label_181f62b20;
  if (Il2CppMethodInitialized_184345767 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_184345767 = '\x01';
  }
  player = (__i->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  viewID = PhotonExtensions__GetIntProperty
                     (player,TypeInfo_GameManagers_PlayerProperty->static_fields->CharacterViewId,0,
                      (MethodInfo *)0x0);
  if (0 < viewID) {
    pPVar3 = Photon_Pun_PhotonView__Find(viewID,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pPVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if (pPVar3 == (Photon_Pun_PhotonView_o *)0x0) {
label_181f62b20:
        ThrowNullReferenceException();
      }
      character = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pPVar3,
                             (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter)
      ;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar2) {
        if (character == (Characters_BaseCharacter_o *)0x0) goto label_181f62b20;
        if ((character->fields).Dead == false) {
          pUVar1 = (character->fields).Cache;
          if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
             (pPVar3 = (pUVar1->fields).PhotonView, pPVar3 == (Photon_Pun_PhotonView_o *)0x0))
          goto label_181f62b20;
          if ((pPVar3->fields)._Owner_k__BackingField == (__i->fields).Player) {
            if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
            }
            pCVar4 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(character,(MethodInfo *)0x0);
            return (Il2CppObject *)pCVar4;
          }
        }
      }
    }
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Connected>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Connected_g____getter_3_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x181f62f00

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Connected_g____getter_3_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 local_res8 [32];
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    local_res8[0] = (__i->fields).Player != (Photon_Realtime_Player_o *)0x0;
    pIVar1 = il2cpp_value_box(g_data_184354de8,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__ID>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__ID_g____getter_4_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x181ec3850

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__ID_g____getter_4_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  Il2CppObject *pIVar2;
  int32_t local_res8 [8];
  
  if ((__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) &&
     (pPVar1 = (__i->fields).Player, pPVar1 != (Photon_Realtime_Player_o *)0x0)) {
    local_res8[0] = (pPVar1->fields).actorNumber;
    pIVar2 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__IsAnonymous>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__IsAnonymous_g____getter_5_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x181f63b20

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__IsAnonymous_g____getter_5_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  Il2CppObject *pIVar2;
  undefined1 local_res8 [32];
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345768 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"anon_");
      Il2CppMethodInitialized_184345768 = '\x01';
    }
    pPVar1 = (__i->fields).Player;
    if (pPVar1 != (Photon_Realtime_Player_o *)0x0) {
      if ((pPVar1->fields)._UserId_k__BackingField == (System_String_o *)0x0) {
        local_res8[0] = true;
      }
      else {
        local_res8[0] =
             System_String__StartsWith
                       ((pPVar1->fields)._UserId_k__BackingField,"anon_",(MethodInfo *)0x0);
      }
      pIVar2 = il2cpp_value_box(g_data_184354de8,local_res8);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__UserID>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__UserID_g____getter_6_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x181f67210

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__UserID_g____getter_6_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  
  if ((__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) &&
     (pPVar1 = (__i->fields).Player, pPVar1 != (Photon_Realtime_Player_o *)0x0)) {
    return (Il2CppObject *)(pPVar1->fields)._UserId_k__BackingField;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Name>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Name_g____getter_7_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x181f64400

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Name_g____getter_7_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345769 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
      il2cpp_codegen_initialize_runtime_metadata(&"");
      Il2CppMethodInitialized_184345769 = '\x01';
    }
    player = (__i->fields).Player;
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    pSVar1 = PhotonExtensions__GetStringProperty
                       (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,""
                        ,(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__DisplayName>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__DisplayName_g____getter_8_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x181f63200

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__DisplayName_g____getter_8_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_18434576a == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
      il2cpp_codegen_initialize_runtime_metadata(&"");
      Il2CppMethodInitialized_18434576a = '\x01';
    }
    player = (__i->fields).Player;
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    pSVar1 = PhotonExtensions__GetStringProperty
                       (player,TypeInfo_GameManagers_PlayerProperty->static_fields->DisplayName,
                        "",(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Guild>g____getter|9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Guild_g____getter_9_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x181f637f0

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Guild_g____getter_9_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_18434576b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
      il2cpp_codegen_initialize_runtime_metadata(&"");
      Il2CppMethodInitialized_18434576b = '\x01';
    }
    player = (__i->fields).Player;
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    pSVar1 = PhotonExtensions__GetStringProperty
                       (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Guild,
                        "",(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Team>g____getter|10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Team_g____getter_10_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x181f66500

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Team_g____getter_10_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_18434576c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
      il2cpp_codegen_initialize_runtime_metadata(&"");
      Il2CppMethodInitialized_18434576c = '\x01';
    }
    player = (__i->fields).Player;
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    pSVar1 = PhotonExtensions__GetStringProperty
                       (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Team,""
                        ,(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Status>g____getter|11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Status_g____getter_11_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x181f66270

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Status_g____getter_11_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_18434576d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
      il2cpp_codegen_initialize_runtime_metadata(&"");
      Il2CppMethodInitialized_18434576d = '\x01';
    }
    player = (__i->fields).Player;
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    pSVar1 = PhotonExtensions__GetStringProperty
                       (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Status,
                        "",(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__CharacterType>g____getter|12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__CharacterType_g____getter_12_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x181f62920

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__CharacterType_g____getter_12_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_18434576e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
      il2cpp_codegen_initialize_runtime_metadata(&"");
      Il2CppMethodInitialized_18434576e = '\x01';
    }
    player = (__i->fields).Player;
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    pSVar1 = PhotonExtensions__GetStringProperty
                       (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Character,
                        "",(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Loadout>g____getter|13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Loadout_g____getter_13_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x181f63f50

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Loadout_g____getter_13_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_18434576f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
      il2cpp_codegen_initialize_runtime_metadata(&"");
      Il2CppMethodInitialized_18434576f = '\x01';
    }
    player = (__i->fields).Player;
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    pSVar1 = PhotonExtensions__GetStringProperty
                       (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Loadout,
                        "",(MethodInfo *)0x0);
    return (Il2CppObject *)pSVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Kills>g____getter|14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Kills_g____getter_14_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x181f63c90

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Kills_g____getter_14_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  Il2CppObject *pIVar1;
  int32_t local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345770 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
      Il2CppMethodInitialized_184345770 = '\x01';
    }
    player = (__i->fields).Player;
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    local_res8[0] =
         PhotonExtensions__GetIntProperty
                   (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Kills,0,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Kills>g____setter|14_1
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Kills_g____setter_14_1 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f63d20

void CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Kills_g____setter_14_1
               (CustomLogic_CustomLogicPlayerBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  System_String_o *key;
  bool bVar2;
  int32_t iVar3;
  Photon_Realtime_Player_o *pPVar4;
  Il2CppObject *value;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_18434579b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434579b = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  iVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345771 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
      Il2CppMethodInitialized_184345771 = '\x01';
    }
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (!bVar2) {
      pPVar1 = (__i->fields).Player;
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      if (pPVar1 != pPVar4) {
        return;
      }
    }
    pPVar1 = (__i->fields).Player;
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    key = TypeInfo_GameManagers_PlayerProperty->static_fields->Kills;
    local_res8[0] = iVar3;
    value = il2cpp_value_box(g_data_184354e08,local_res8);
    PhotonExtensions__SetCustomProperty(pPVar1,key,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Deaths>g____getter|15_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Deaths_g____getter_15_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x181f63020

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Deaths_g____getter_15_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  Il2CppObject *pIVar1;
  int32_t local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345772 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
      Il2CppMethodInitialized_184345772 = '\x01';
    }
    player = (__i->fields).Player;
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    local_res8[0] =
         PhotonExtensions__GetIntProperty
                   (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Deaths,0,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Deaths>g____setter|15_1
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Deaths_g____setter_15_1 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f630b0

void CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Deaths_g____setter_15_1
               (CustomLogic_CustomLogicPlayerBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  System_String_o *key;
  bool bVar2;
  int32_t iVar3;
  Photon_Realtime_Player_o *pPVar4;
  Il2CppObject *value;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_18434579c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434579c = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  iVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345773 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
      Il2CppMethodInitialized_184345773 = '\x01';
    }
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (!bVar2) {
      pPVar1 = (__i->fields).Player;
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      if (pPVar1 != pPVar4) {
        return;
      }
    }
    pPVar1 = (__i->fields).Player;
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    key = TypeInfo_GameManagers_PlayerProperty->static_fields->Deaths;
    local_res8[0] = iVar3;
    value = il2cpp_value_box(g_data_184354e08,local_res8);
    PhotonExtensions__SetCustomProperty(pPVar1,key,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__HighestDamage>g____getter|16_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__HighestDamage_g____getter_16_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x181f63900

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__HighestDamage_g____getter_16_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  Il2CppObject *pIVar1;
  int32_t local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345774 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
      Il2CppMethodInitialized_184345774 = '\x01';
    }
    player = (__i->fields).Player;
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    local_res8[0] =
         PhotonExtensions__GetIntProperty
                   (player,TypeInfo_GameManagers_PlayerProperty->static_fields->HighestDamage,0,
                    (MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__HighestDamage>g____setter|16_1
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__HighestDamage_g____setter_16_1 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f63990

void CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__HighestDamage_g____setter_16_1
               (CustomLogic_CustomLogicPlayerBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  System_String_o *key;
  bool bVar2;
  int32_t iVar3;
  Photon_Realtime_Player_o *pPVar4;
  Il2CppObject *value;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_18434579d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434579d = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  iVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345775 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
      Il2CppMethodInitialized_184345775 = '\x01';
    }
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (!bVar2) {
      pPVar1 = (__i->fields).Player;
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      if (pPVar1 != pPVar4) {
        return;
      }
    }
    pPVar1 = (__i->fields).Player;
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    key = TypeInfo_GameManagers_PlayerProperty->static_fields->HighestDamage;
    local_res8[0] = iVar3;
    value = il2cpp_value_box(g_data_184354e08,local_res8);
    PhotonExtensions__SetCustomProperty(pPVar1,key,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__TotalDamage>g____getter|17_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__TotalDamage_g____getter_17_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x181f66c30

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__TotalDamage_g____getter_17_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  Il2CppObject *pIVar1;
  int32_t local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345776 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
      Il2CppMethodInitialized_184345776 = '\x01';
    }
    player = (__i->fields).Player;
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    local_res8[0] =
         PhotonExtensions__GetIntProperty
                   (player,TypeInfo_GameManagers_PlayerProperty->static_fields->TotalDamage,0,
                    (MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__TotalDamage>g____setter|17_1
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__TotalDamage_g____setter_17_1 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f66cc0

void CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__TotalDamage_g____setter_17_1
               (CustomLogic_CustomLogicPlayerBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  System_String_o *key;
  bool bVar2;
  int32_t iVar3;
  Photon_Realtime_Player_o *pPVar4;
  Il2CppObject *value;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_18434579e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434579e = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  iVar3 = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                    (__v,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345777 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
      Il2CppMethodInitialized_184345777 = '\x01';
    }
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (!bVar2) {
      pPVar1 = (__i->fields).Player;
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
      if (pPVar1 != pPVar4) {
        return;
      }
    }
    pPVar1 = (__i->fields).Player;
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    key = TypeInfo_GameManagers_PlayerProperty->static_fields->TotalDamage;
    local_res8[0] = iVar3;
    value = il2cpp_value_box(g_data_184354e08,local_res8);
    PhotonExtensions__SetCustomProperty(pPVar1,key,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__Ping>g____getter|18_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Ping_g____getter_18_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x181f64c20

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__Ping_g____getter_18_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  Il2CppObject *pIVar1;
  int32_t local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345778 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
      Il2CppMethodInitialized_184345778 = '\x01';
    }
    player = (__i->fields).Player;
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    local_res8[0] =
         PhotonExtensions__GetIntProperty
                   (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Ping,0,(MethodInfo *)0x0);
    pIVar1 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__SpectateID>g____getter|19_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__SpectateID_g____getter_19_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x181f660a0

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__SpectateID_g____getter_19_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  Il2CppObject *pIVar1;
  int32_t local_res8 [8];
  
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_184345779 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
      Il2CppMethodInitialized_184345779 = '\x01';
    }
    player = (__i->fields).Player;
    if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    }
    local_res8[0] =
         PhotonExtensions__GetIntProperty
                   (player,TypeInfo_GameManagers_PlayerProperty->static_fields->SpectateID,0,(MethodInfo *)0x0
                   );
    pIVar1 = il2cpp_value_box(g_data_184354e08,local_res8);
    return pIVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__SpawnPoint>g____getter|20_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__SpawnPoint_g____getter_20_0 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, const MethodInfo* method);
// 0x181f65f70

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__SpawnPoint_g____getter_20_0
          (CustomLogic_CustomLogicPlayerBuiltin_o *__i,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  bool bVar3;
  UnityEngine_Vector3_o *pUVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (__i == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_18434577a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_18434577a = '\x01';
  }
  bVar3 = PhotonExtensions__HasSpawnPoint((__i->fields).Player,(MethodInfo *)0x0);
  if (!bVar3) {
    return (Il2CppObject *)0x0;
  }
  pUVar4 = PhotonExtensions__GetSpawnPoint
                     ((UnityEngine_Vector3_o *)local_28,(__i->fields).Player,(MethodInfo *)0x0);
  uVar1._0_4_ = (pUVar4->fields).x;
  uVar1._4_4_ = (pUVar4->fields).y;
  fVar2 = (pUVar4->fields).z;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  local_28[0]._0_8_ = uVar1;
  local_28[0].z = fVar2;
  CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
            (__this,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
  return (Il2CppObject *)__this;
}


// CustomLogic.CustomLogicPlayerBuiltin.Bindings$$<__CreatePropertyBinding__SpawnPoint>g____setter|20_1
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__SpawnPoint_g____setter_20_1 (CustomLogic_CustomLogicPlayerBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x181f66020

void CustomLogic_CustomLogicPlayerBuiltin_Bindings_____CreatePropertyBinding__SpawnPoint_g____setter_20_1
               (CustomLogic_CustomLogicPlayerBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicVector3Builtin_o *value;
  
  if (Il2CppMethodInitialized_18434579f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_18434579f = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (__v,(MethodInfo_66EB70 *)
                         MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicVector3Builtin);
  if (__i != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    CustomLogic_CustomLogicPlayerBuiltin__set_SpawnPoint(__i,value,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin___ctor (CustomLogic_CustomLogicPlayerBuiltin_o* __this, Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x181f78780

void CustomLogic_CustomLogicPlayerBuiltin___ctor
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,Photon_Realtime_Player_o *player,
               MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345766 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_184345766 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Player = player;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Player,player);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Character
// il2cpp: CustomLogic_CustomLogicCharacterBuiltin_o* CustomLogic_CustomLogicPlayerBuiltin__get_Character (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f78870

CustomLogic_CustomLogicCharacterBuiltin_o *
CustomLogic_CustomLogicPlayerBuiltin__get_Character
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  Utility_BaseComponentCache_o *pUVar1;
  bool bVar2;
  int32_t viewID;
  Photon_Pun_PhotonView_o *pPVar3;
  Characters_BaseCharacter_o *character;
  CustomLogic_CustomLogicCharacterBuiltin_o *pCVar4;
  
  if (Il2CppMethodInitialized_184345767 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_184345767 = '\x01';
  }
  player = (__this->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  viewID = PhotonExtensions__GetIntProperty
                     (player,TypeInfo_GameManagers_PlayerProperty->static_fields->CharacterViewId,0,
                      (MethodInfo *)0x0);
  if (0 < viewID) {
    pPVar3 = Photon_Pun_PhotonView__Find(viewID,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pPVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if (pPVar3 == (Photon_Pun_PhotonView_o *)0x0) {
label_181f789d7:
        ThrowNullReferenceException();
      }
      character = UnityEngine_Component__GetComponent_object_
                            ((UnityEngine_Component_o *)pPVar3,
                             (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_BaseCharacter)
      ;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Equality
                        ((UnityEngine_Object_o *)character,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (!bVar2) {
        if (character == (Characters_BaseCharacter_o *)0x0) goto label_181f789d7;
        if ((character->fields).Dead == false) {
          pUVar1 = (character->fields).Cache;
          if ((pUVar1 == (Utility_BaseComponentCache_o *)0x0) ||
             (pPVar3 = (pUVar1->fields).PhotonView, pPVar3 == (Photon_Pun_PhotonView_o *)0x0))
          goto label_181f789d7;
          if ((pPVar3->fields)._Owner_k__BackingField == (__this->fields).Player) {
            if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
            }
            pCVar4 = CustomLogic_CustomLogicEvaluator__GetCharacterBuiltin(character,(MethodInfo *)0x0);
            return pCVar4;
          }
        }
      }
    }
  }
  return (CustomLogic_CustomLogicCharacterBuiltin_o *)0x0;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Connected
// il2cpp: bool CustomLogic_CustomLogicPlayerBuiltin__get_Connected (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181a1e5d0

bool
CustomLogic_CustomLogicPlayerBuiltin__get_Connected(CustomLogic_CustomLogicPlayerBuiltin_o* __this, MethodInfo* method)

{
  return (__this->fields).Player != (UnityEngine_UIElements_UxmlAsset_o *)0x0;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_ID
// il2cpp: int32_t CustomLogic_CustomLogicPlayerBuiltin__get_ID (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181ecf540

int32_t CustomLogic_CustomLogicPlayerBuiltin__get_ID
                  (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  
  pPVar1 = (__this->fields).Player;
  if (pPVar1 != (Photon_Realtime_Player_o *)0x0) {
    return (pPVar1->fields).actorNumber;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_IsAnonymous
// il2cpp: bool CustomLogic_CustomLogicPlayerBuiltin__get_IsAnonymous (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f78bf0

bool CustomLogic_CustomLogicPlayerBuiltin__get_IsAnonymous
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_184345768 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"anon_");
    Il2CppMethodInitialized_184345768 = '\x01';
  }
  pPVar1 = (__this->fields).Player;
  if (pPVar1 != (Photon_Realtime_Player_o *)0x0) {
    if ((pPVar1->fields)._UserId_k__BackingField == (System_String_o *)0x0) {
      return true;
    }
    bVar2 = System_String__StartsWith
                      ((pPVar1->fields)._UserId_k__BackingField,"anon_",(MethodInfo *)0x0);
    return bVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_UserID
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerBuiltin__get_UserID (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f790b0

System_String_o *
CustomLogic_CustomLogicPlayerBuiltin__get_UserID
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  
  pPVar1 = (__this->fields).Player;
  if (pPVar1 != (Photon_Realtime_Player_o *)0x0) {
    return (pPVar1->fields)._UserId_k__BackingField;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Name
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerBuiltin__get_Name (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f78d40

System_String_o *
CustomLogic_CustomLogicPlayerBuiltin__get_Name
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184345769 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_184345769 = '\x01';
  }
  player = (__this->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Name,"",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_DisplayName
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerBuiltin__get_DisplayName (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f78a80

System_String_o *
CustomLogic_CustomLogicPlayerBuiltin__get_DisplayName
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434576a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_18434576a = '\x01';
  }
  player = (__this->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (player,TypeInfo_GameManagers_PlayerProperty->static_fields->DisplayName,
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Guild
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerBuiltin__get_Guild (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f78b00

System_String_o *
CustomLogic_CustomLogicPlayerBuiltin__get_Guild
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434576b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_18434576b = '\x01';
  }
  player = (__this->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Guild,"",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Team
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerBuiltin__get_Team (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f78fc0

System_String_o *
CustomLogic_CustomLogicPlayerBuiltin__get_Team
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434576c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_18434576c = '\x01';
  }
  player = (__this->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Team,"",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Status
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerBuiltin__get_Status (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f78f40

System_String_o *
CustomLogic_CustomLogicPlayerBuiltin__get_Status
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434576d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_18434576d = '\x01';
  }
  player = (__this->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Status,""
                      ,(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_CharacterType
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerBuiltin__get_CharacterType (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f787f0

System_String_o *
CustomLogic_CustomLogicPlayerBuiltin__get_CharacterType
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434576e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_18434576e = '\x01';
  }
  player = (__this->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Character,
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Loadout
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerBuiltin__get_Loadout (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f78cc0

System_String_o *
CustomLogic_CustomLogicPlayerBuiltin__get_Loadout
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_18434576f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"");
    Il2CppMethodInitialized_18434576f = '\x01';
  }
  player = (__this->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar1 = PhotonExtensions__GetStringProperty
                     (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Loadout,
                      "",(MethodInfo *)0x0);
  return pSVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Kills
// il2cpp: int32_t CustomLogic_CustomLogicPlayerBuiltin__get_Kills (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f78c50

int32_t CustomLogic_CustomLogicPlayerBuiltin__get_Kills
                  (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_184345770 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_184345770 = '\x01';
  }
  player = (__this->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  iVar1 = PhotonExtensions__GetIntProperty
                    (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Kills,0,(MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$set_Kills
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin__set_Kills (CustomLogic_CustomLogicPlayerBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181f792b0

void CustomLogic_CustomLogicPlayerBuiltin__set_Kills
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  System_String_o *key;
  bool bVar2;
  Photon_Realtime_Player_o *pPVar3;
  Il2CppObject *value_00;
  int32_t local_res20 [2];
  
  if (Il2CppMethodInitialized_184345771 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_184345771 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar2) {
    pPVar1 = (__this->fields).Player;
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar1 != pPVar3) {
      return;
    }
  }
  pPVar1 = (__this->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  key = TypeInfo_GameManagers_PlayerProperty->static_fields->Kills;
  local_res20[0] = value;
  value_00 = il2cpp_value_box(g_data_184354e08,local_res20);
  PhotonExtensions__SetCustomProperty(pPVar1,key,value_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Deaths
// il2cpp: int32_t CustomLogic_CustomLogicPlayerBuiltin__get_Deaths (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f78a10

int32_t CustomLogic_CustomLogicPlayerBuiltin__get_Deaths
                  (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_184345772 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_184345772 = '\x01';
  }
  player = (__this->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  iVar1 = PhotonExtensions__GetIntProperty
                    (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Deaths,0,(MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$set_Deaths
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin__set_Deaths (CustomLogic_CustomLogicPlayerBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181f790d0

void CustomLogic_CustomLogicPlayerBuiltin__set_Deaths
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  System_String_o *key;
  bool bVar2;
  Photon_Realtime_Player_o *pPVar3;
  Il2CppObject *value_00;
  int32_t local_res20 [2];
  
  if (Il2CppMethodInitialized_184345773 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_184345773 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar2) {
    pPVar1 = (__this->fields).Player;
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar1 != pPVar3) {
      return;
    }
  }
  pPVar1 = (__this->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  key = TypeInfo_GameManagers_PlayerProperty->static_fields->Deaths;
  local_res20[0] = value;
  value_00 = il2cpp_value_box(g_data_184354e08,local_res20);
  PhotonExtensions__SetCustomProperty(pPVar1,key,value_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_HighestDamage
// il2cpp: int32_t CustomLogic_CustomLogicPlayerBuiltin__get_HighestDamage (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f78b80

int32_t CustomLogic_CustomLogicPlayerBuiltin__get_HighestDamage
                  (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_184345774 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_184345774 = '\x01';
  }
  player = (__this->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  iVar1 = PhotonExtensions__GetIntProperty
                    (player,TypeInfo_GameManagers_PlayerProperty->static_fields->HighestDamage,0,
                     (MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$set_HighestDamage
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin__set_HighestDamage (CustomLogic_CustomLogicPlayerBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181f791c0

void CustomLogic_CustomLogicPlayerBuiltin__set_HighestDamage
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  System_String_o *key;
  bool bVar2;
  Photon_Realtime_Player_o *pPVar3;
  Il2CppObject *value_00;
  int32_t local_res20 [2];
  
  if (Il2CppMethodInitialized_184345775 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_184345775 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar2) {
    pPVar1 = (__this->fields).Player;
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar1 != pPVar3) {
      return;
    }
  }
  pPVar1 = (__this->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  key = TypeInfo_GameManagers_PlayerProperty->static_fields->HighestDamage;
  local_res20[0] = value;
  value_00 = il2cpp_value_box(g_data_184354e08,local_res20);
  PhotonExtensions__SetCustomProperty(pPVar1,key,value_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_TotalDamage
// il2cpp: int32_t CustomLogic_CustomLogicPlayerBuiltin__get_TotalDamage (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f79040

int32_t CustomLogic_CustomLogicPlayerBuiltin__get_TotalDamage
                  (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_184345776 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_184345776 = '\x01';
  }
  player = (__this->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  iVar1 = PhotonExtensions__GetIntProperty
                    (player,TypeInfo_GameManagers_PlayerProperty->static_fields->TotalDamage,0,
                     (MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$set_TotalDamage
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin__set_TotalDamage (CustomLogic_CustomLogicPlayerBuiltin_o* __this, int32_t value, const MethodInfo* method);
// 0x181f795c0

void CustomLogic_CustomLogicPlayerBuiltin__set_TotalDamage
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,int32_t value,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  System_String_o *key;
  bool bVar2;
  Photon_Realtime_Player_o *pPVar3;
  Il2CppObject *value_00;
  int32_t local_res20 [2];
  
  if (Il2CppMethodInitialized_184345777 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_184345777 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar2) {
    pPVar1 = (__this->fields).Player;
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar1 != pPVar3) {
      return;
    }
  }
  pPVar1 = (__this->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  key = TypeInfo_GameManagers_PlayerProperty->static_fields->TotalDamage;
  local_res20[0] = value;
  value_00 = il2cpp_value_box(g_data_184354e08,local_res20);
  PhotonExtensions__SetCustomProperty(pPVar1,key,value_00,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_Ping
// il2cpp: int32_t CustomLogic_CustomLogicPlayerBuiltin__get_Ping (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f78dc0

int32_t CustomLogic_CustomLogicPlayerBuiltin__get_Ping
                  (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_184345778 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_184345778 = '\x01';
  }
  player = (__this->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  iVar1 = PhotonExtensions__GetIntProperty
                    (player,TypeInfo_GameManagers_PlayerProperty->static_fields->Ping,0,(MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_SpectateID
// il2cpp: int32_t CustomLogic_CustomLogicPlayerBuiltin__get_SpectateID (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f78ed0

int32_t CustomLogic_CustomLogicPlayerBuiltin__get_SpectateID
                  (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_184345779 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    Il2CppMethodInitialized_184345779 = '\x01';
  }
  player = (__this->fields).Player;
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  iVar1 = PhotonExtensions__GetIntProperty
                    (player,TypeInfo_GameManagers_PlayerProperty->static_fields->SpectateID,0,
                     (MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_SpawnPoint
// il2cpp: CustomLogic_CustomLogicVector3Builtin_o* CustomLogic_CustomLogicPlayerBuiltin__get_SpawnPoint (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f78e30

CustomLogic_CustomLogicVector3Builtin_o *
CustomLogic_CustomLogicPlayerBuiltin__get_SpawnPoint
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  float fVar2;
  bool bVar3;
  UnityEngine_Vector3_o *pUVar4;
  CustomLogic_CustomLogicVector3Builtin_o *__this_00;
  UnityEngine_Vector3_Fields local_28 [2];
  
  if (Il2CppMethodInitialized_18434577a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    Il2CppMethodInitialized_18434577a = '\x01';
  }
  bVar3 = PhotonExtensions__HasSpawnPoint((__this->fields).Player,(MethodInfo *)0x0);
  if (!bVar3) {
    return (CustomLogic_CustomLogicVector3Builtin_o *)0x0;
  }
  pUVar4 = PhotonExtensions__GetSpawnPoint
                     ((UnityEngine_Vector3_o *)local_28,(__this->fields).Player,(MethodInfo *)0x0);
  uVar1._0_4_ = (pUVar4->fields).x;
  uVar1._4_4_ = (pUVar4->fields).y;
  fVar2 = (pUVar4->fields).z;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
  local_28[0]._0_8_ = uVar1;
  local_28[0].z = fVar2;
  CustomLogic_CustomLogicVector3Builtin___ctor_1ed7cc0
            (__this_00,(UnityEngine_Vector3_o *)local_28,(MethodInfo *)0x0);
  return __this_00;
}


// CustomLogic.CustomLogicPlayerBuiltin$$set_SpawnPoint
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin__set_SpawnPoint (CustomLogic_CustomLogicPlayerBuiltin_o* __this, CustomLogic_CustomLogicVector3Builtin_o* value, const MethodInfo* method);
// 0x181f793a0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181f79559: mov r8, rbx
// asm:   0x181f7955c: mov rcx, rdi
// asm:   0x181f7955f: jmp 0x181f7958e
// asm:   0x181f79584: mov r8, qword ptr [rip + 0x212c0bd]  ; "null"
// asm:   0x181f7958b: mov rcx, rbx

void CustomLogic_CustomLogicPlayerBuiltin__set_SpawnPoint
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,CustomLogic_CustomLogicVector3Builtin_o *value,
               MethodInfo *method)

{
  bool bVar1;
  Photon_Realtime_Player_o *pPVar2;
  System_String_array *value_00;
  System_String_o *pSVar3;
  Photon_Realtime_Player_o *pPVar4;
  undefined8 local_18;
  float local_10 [2];
  
  if (Il2CppMethodInitialized_18434577b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"null");
    il2cpp_codegen_initialize_runtime_metadata(&"SpawnPoint");
    il2cpp_codegen_initialize_runtime_metadata(&",");
    Il2CppMethodInitialized_18434577b = '\x01';
  }
  local_18 = 0;
  local_10[0] = 0.0;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar1) {
    pPVar4 = (__this->fields).Player;
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar2 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar4 != pPVar2) {
      return;
    }
  }
  CustomLogic_CustomLogicPlayerBuiltin__CheckPropertyRateLimit(__this,"SpawnPoint",(MethodInfo *)0x0)
  ;
  if (value != (CustomLogic_CustomLogicVector3Builtin_o *)0x0) {
    local_18._0_4_ = (value->fields).Value.fields.x;
    local_18._4_4_ = (value->fields).Value.fields.y;
    local_10[0] = (value->fields).Value.fields.z;
    value_00 = (System_String_array *)SZArrayNew(TypeInfo_string_array,3);
    pSVar3 = System_Single__ToString((float *)&local_18,(MethodInfo *)0x0);
    if (value_00 == (System_String_array *)0x0) {
      ThrowNullReferenceException();
    }
    if ((int)value_00->max_length != 0) {
      value_00->m_Items[0] = pSVar3;
      Il2CppCodeGenWriteBarrier(value_00->m_Items,pSVar3);
      pSVar3 = System_Single__ToString((float *)((longlong)&local_18 + 4),(MethodInfo *)0x0);
      if (1 < (uint)value_00->max_length) {
        value_00->m_Items[1] = pSVar3;
        Il2CppCodeGenWriteBarrier(value_00->m_Items + 1,pSVar3);
        pSVar3 = System_Single__ToString(local_10,(MethodInfo *)0x0);
        if (2 < (uint)value_00->max_length) {
          value_00->m_Items[2] = pSVar3;
          Il2CppCodeGenWriteBarrier(value_00->m_Items + 2,pSVar3);
          pSVar3 = System_String__Join(",",value_00,(MethodInfo *)0x0);
          pPVar4 = (__this->fields).Player;
          if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
          }
          goto label_181f7958e;
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
  pPVar4 = (__this->fields).Player;
  pSVar3 = "null";
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
    pSVar3 = "null";
  }
label_181f7958e:
  PhotonExtensions__SetCustomProperty
            (pPVar4,TypeInfo_GameManagers_PlayerProperty->static_fields->SpawnPoint,(Il2CppObject *)pSVar3,
             (MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin$$GetCustomProperty
// il2cpp: Il2CppObject* CustomLogic_CustomLogicPlayerBuiltin__GetCustomProperty (CustomLogic_CustomLogicPlayerBuiltin_o* __this, System_String_o* property, const MethodInfo* method);
// 0x181f78560

Il2CppObject *
CustomLogic_CustomLogicPlayerBuiltin__GetCustomProperty
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,System_String_o *property,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  System_String_o *key;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_18434577c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"CL:");
    Il2CppMethodInitialized_18434577c = '\x01';
  }
  player = (__this->fields).Player;
  key = System_String__Concat_1969e50("CL:",property,(MethodInfo *)0x0);
  pIVar1 = PhotonExtensions__GetCustomProperty(player,key,(MethodInfo *)0x0);
  return pIVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$SetCustomProperty
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin__SetCustomProperty (CustomLogic_CustomLogicPlayerBuiltin_o* __this, System_String_o* property, Il2CppObject* value, const MethodInfo* method);
// 0x181f785c0

void CustomLogic_CustomLogicPlayerBuiltin__SetCustomProperty
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,System_String_o *property,Il2CppObject *value,
               MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  bool bVar2;
  Photon_Realtime_Player_o *pPVar3;
  System_String_o *pSVar4;
  Il2CppClass *klass;
  System_Exception_o *__this_00;
  MethodInfo *lastManagedFrame;
  Il2CppObject *pIVar5;
  
  if (Il2CppMethodInitialized_18434577d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&"CL:");
    Il2CppMethodInitialized_18434577d = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar2) {
    pPVar1 = (__this->fields).Player;
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar3 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar1 != pPVar3) {
      return;
    }
  }
  if (value == (Il2CppObject *)0x0) {
label_181f78701:
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
    pSVar4 = il2cpp_codegen_get_runtime_metadata(&"Player.SetCustomProperty only supports float, int, string, or bool values.");
    System_Exception___ctor_1b6abf0(__this_00,pSVar4,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_SetCustomProperty);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  pIVar5 = (Il2CppObject *)0x0;
  if (value->klass == g_data_184354e38) {
    pIVar5 = value;
  }
  if (pIVar5 == (Il2CppObject *)0x0) {
    pIVar5 = (Il2CppObject *)0x0;
    if (value->klass == g_data_184354e08) {
      pIVar5 = value;
    }
    if (pIVar5 == (Il2CppObject *)0x0) {
      pIVar5 = (Il2CppObject *)0x0;
      if (value->klass == g_data_184354e50) {
        pIVar5 = value;
      }
      if (pIVar5 == (Il2CppObject *)0x0) {
        pIVar5 = (Il2CppObject *)0x0;
        if (value->klass == g_data_184354de8) {
          pIVar5 = value;
        }
        if (pIVar5 == (Il2CppObject *)0x0) goto label_181f78701;
      }
    }
  }
  pSVar4 = System_String__Concat_1969e50("CL:",property,(MethodInfo *)0x0);
  CustomLogic_CustomLogicPlayerBuiltin__CheckPropertyRateLimit(__this,pSVar4,(MethodInfo *)0x0);
  pPVar1 = (__this->fields).Player;
  pSVar4 = System_String__Concat_1969e50("CL:",property,(MethodInfo *)0x0);
  PhotonExtensions__SetCustomProperty(pPVar1,pSVar4,value,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicPlayerBuiltin$$ClearKDR
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin__ClearKDR (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f78270

void CustomLogic_CustomLogicPlayerBuiltin__ClearKDR
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  System_String_o *pSVar2;
  bool bVar3;
  Photon_Realtime_Player_o *pPVar4;
  System_Collections_Generic_Dictionary_string__object__o *__this_00;
  Il2CppObject *pIVar5;
  undefined4 local_res18 [2];
  undefined4 local_res20 [2];
  undefined4 local_28;
  undefined4 local_24 [3];
  
  if (Il2CppMethodInitialized_18434577e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_PlayerProperty);
    il2cpp_codegen_initialize_runtime_metadata(&"ClearKDR");
    Il2CppMethodInitialized_18434577e = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  if (!bVar3) {
    pPVar1 = (__this->fields).Player;
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
    if (pPVar1 != pPVar4) {
      return;
    }
  }
  CustomLogic_CustomLogicPlayerBuiltin__CheckPropertyRateLimit(__this,"ClearKDR",(MethodInfo *)0x0)
  ;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_object);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_00,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_ctor);
  if ((TypeInfo_GameManagers_PlayerProperty->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_PlayerProperty);
  }
  pSVar2 = TypeInfo_GameManagers_PlayerProperty->static_fields->Kills;
  local_res18[0] = 0;
  pIVar5 = il2cpp_value_box(g_data_184354e08,local_res18);
  if (__this_00 != (System_Collections_Generic_Dictionary_string__object__o *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,(Il2CppObject *)pSVar2,
               pIVar5,(MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add
              );
    pSVar2 = TypeInfo_GameManagers_PlayerProperty->static_fields->Deaths;
    local_res20[0] = 0;
    pIVar5 = il2cpp_value_box(g_data_184354e08,local_res20);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,(Il2CppObject *)pSVar2,
               pIVar5,(MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add
              );
    pSVar2 = TypeInfo_GameManagers_PlayerProperty->static_fields->HighestDamage;
    local_28 = 0;
    pIVar5 = il2cpp_value_box(g_data_184354e08,&local_28);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,(Il2CppObject *)pSVar2,
               pIVar5,(MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add
              );
    pSVar2 = TypeInfo_GameManagers_PlayerProperty->static_fields->TotalDamage;
    local_24[0] = 0;
    pIVar5 = il2cpp_value_box(g_data_184354e08,local_24);
    System_Collections_Generic_Dictionary_object__object___Add
              ((System_Collections_Generic_Dictionary_object__object__o *)__this_00,(Il2CppObject *)pSVar2,
               pIVar5,(MethodInfo_146B4B0 *)MethodInfo_System_Collections_Generic_Dictionary_string_object_Add
              );
    PhotonExtensions__SetCustomProperties((__this->fields).Player,__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerBuiltin$$CheckPropertyRateLimit
// il2cpp: void CustomLogic_CustomLogicPlayerBuiltin__CheckPropertyRateLimit (CustomLogic_CustomLogicPlayerBuiltin_o* __this, System_String_o* property, const MethodInfo* method);
// 0x181f77fd0

void CustomLogic_CustomLogicPlayerBuiltin__CheckPropertyRateLimit
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,System_String_o *property,MethodInfo *method)

{
  int32_t key;
  Photon_Realtime_Player_o *pPVar1;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  System_Collections_Generic_Dictionary_int__ulong__o *__this_00;
  bool bVar3;
  Photon_Realtime_Player_o *pPVar4;
  System_Collections_Generic_Dictionary_string__float__o *__this_01;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_02;
  System_String_o *pSVar5;
  Il2CppClass *klass;
  System_Exception_o *__this_03;
  MethodInfo *lastManagedFrame;
  float fVar6;
  float fVar7;
  
  if (Il2CppMethodInitialized_18434577f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_Dictionary_string_float_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_Dictionary_string_float_get_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_int_Dictionary_string_float_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_float);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_18434577f = '\x01';
  }
  pPVar1 = (__this->fields).Player;
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar4 = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  if (pPVar1 == pPVar4) {
    return;
  }
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
  }
  pCVar2 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  if (((pCVar2 != (CustomLogic_CustomLogicEvaluator_o *)0x0) &&
      (pPVar1 = (__this->fields).Player, pPVar1 != (Photon_Realtime_Player_o *)0x0)) &&
     (__this_00 = (System_Collections_Generic_Dictionary_int__ulong__o *)
                  (pCVar2->fields).PlayerIdToLastPropertyChanges,
     __this_00 != (System_Collections_Generic_Dictionary_int__ulong__o *)0x0)) {
    bVar3 = System_Collections_Generic_Dictionary_int__ulong___ContainsKey
                      (__this_00,(pPVar1->fields).actorNumber,
                       (MethodInfo_1407110 *)
                       MethodInfo_System_Collections_Generic_Dictionary_int_Dictionary_string_float_ContainsKey
                      );
    if (!bVar3) {
      pPVar1 = (__this->fields).Player;
      if (pPVar1 == (Photon_Realtime_Player_o *)0x0) goto label_181f7820a;
      key = (pPVar1->fields).actorNumber;
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_float);
      System_Collections_Generic_Dictionary_object__float____ctor
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this_01,
                 (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_float_ctor);
      System_Collections_Generic_Dictionary_int__object___set_Item
                ((System_Collections_Generic_Dictionary_int__object__o *)__this_00,key,
                 (Il2CppObject *)__this_01,
                 (MethodInfo_1423510 *)
                 MethodInfo_System_Collections_Generic_Dictionary_int_Dictionary_string_float_set_Item);
    }
    pPVar1 = (__this->fields).Player;
    if ((pPVar1 != (Photon_Realtime_Player_o *)0x0) &&
       (__this_02 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)
                    System_Collections_Generic_Dictionary_int__ulong___get_Item
                              (__this_00,(pPVar1->fields).actorNumber,
                               (MethodInfo_14156F0 *)
                               MethodInfo_System_Collections_Generic_Dictionary_int_Dictionary_string_float_get_Item
                              ), __this_02 != (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0)) {
      bVar3 = System_Collections_Generic_Dictionary_object__StyleComplexSelector_PseudoStateData___ContainsKey
                        (__this_02,(Il2CppObject *)property,
                         (MethodInfo_1455450 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_float_ContainsKey);
      if (!bVar3) {
        System_Collections_Generic_Dictionary_object__float___set_Item
                  (__this_02,(Il2CppObject *)property,0.0,
                   (MethodInfo_1488DA0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
      }
      fVar6 = UnityEngine_Time__get_time((MethodInfo *)0x0);
      fVar7 = System_Collections_Generic_Dictionary_object__float___get_Item
                        (__this_02,(Il2CppObject *)property,
                         (MethodInfo_1488BA0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_float_get_Item);
      if (1.0 <= fVar6 - fVar7) {
        fVar6 = UnityEngine_Time__get_time((MethodInfo *)0x0);
        System_Collections_Generic_Dictionary_object__float___set_Item
                  (__this_02,(Il2CppObject *)property,fVar6,
                   (MethodInfo_1488DA0 *)
                   MethodInfo_System_Collections_Generic_Dictionary_string_float_set_Item);
        return;
      }
      pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Exceeded set property rate limit on non-local client: ");
      pSVar5 = System_String__Concat_1969e50(pSVar5,property,(MethodInfo *)0x0);
      klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
      __this_03 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
      System_Exception___ctor_1b6abf0(__this_03,pSVar5,(MethodInfo *)0x0);
      lastManagedFrame =
           il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicPlayerBuiltin_CheckPropertyRateLimit);
      il2cpp_codegen_raise_exception((Il2CppObject *)__this_03,lastManagedFrame);
    }
  }
label_181f7820a:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerBuiltin$$Equals
// il2cpp: bool CustomLogic_CustomLogicPlayerBuiltin__Equals (CustomLogic_CustomLogicPlayerBuiltin_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x181f784a0

bool CustomLogic_CustomLogicPlayerBuiltin__Equals
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  
  if (Il2CppMethodInitialized_184345780 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    Il2CppMethodInitialized_184345780 = '\x01';
  }
  if (obj == (Il2CppObject *)0x0) {
    return (__this->fields).Player == (Photon_Realtime_Player_o *)0x0;
  }
  pIVar2 = obj->klass;
  bVar1 = (TypeInfo_CustomLogic_CustomLogicPlayerBuiltin->_2).typeHierarchyDepth;
  if (((pIVar2->_2).typeHierarchyDepth < bVar1) ||
     ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
      (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin)) {
    return false;
  }
  bVar1 = (TypeInfo_CustomLogic_CustomLogicPlayerBuiltin->_2).typeHierarchyDepth;
  if ((bVar1 <= (pIVar2->_2).typeHierarchyDepth) &&
     ((pIVar2->_2).typeHierarchy[(ulonglong)bVar1 - 1] ==
      (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin)) {
    return (Il2CppClass *)(__this->fields).Player == obj[3].klass;
  }
  il2cpp_codegen_raise_invalid_cast_exception(obj);
}


// CustomLogic.CustomLogicPlayerBuiltin$$GetHashCode
// il2cpp: int32_t CustomLogic_CustomLogicPlayerBuiltin__GetHashCode (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181ece090

int32_t
CustomLogic_CustomLogicPlayerBuiltin__GetHashCode(CustomLogic_CustomLogicPlayerBuiltin_o* __this, MethodInfo* method)

{
  System_Type_o *pSVar1;
  int32_t iVar2;
  
  pSVar1 = (__this->fields).Player;
  if (pSVar1 != (System_Type_o *)0x0) {
    iVar2 = (*(pSVar1->klass->vtable)._2_GetHashCode.methodPtr)
                      (pSVar1,(pSVar1->klass->vtable)._2_GetHashCode.method);
    return iVar2;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerBuiltin$$__Eq__
// il2cpp: bool CustomLogic_CustomLogicPlayerBuiltin____Eq__ (CustomLogic_CustomLogicPlayerBuiltin_o* __this, Il2CppObject* self, Il2CppObject* other, const MethodInfo* method);
// 0x181f78750

bool CustomLogic_CustomLogicPlayerBuiltin____Eq__
               (CustomLogic_CustomLogicPlayerBuiltin_o *__this,Il2CppObject *self,Il2CppObject *other,
               MethodInfo *method)

{
  undefined1 uVar1;
  
  if (self != (Il2CppObject *)0x0) {
    uVar1 = (*self->klass->vtable[0].methodPtr)(self,other,self->klass->vtable[0].method);
    return (bool)uVar1;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicPlayerBuiltin$$__Hash__
// il2cpp: int32_t CustomLogic_CustomLogicPlayerBuiltin____Hash__ (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f4f9f0

int32_t CustomLogic_CustomLogicPlayerBuiltin____Hash__
                  (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  
  iVar1 = (*(__this->klass->vtable)._2_GetHashCode.methodPtr)
                    (__this,(__this->klass->vtable)._2_GetHashCode.method);
  return iVar1;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicPlayerBuiltin__get_ClassName (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x181f789e0

System_String_o *
CustomLogic_CustomLogicPlayerBuiltin__get_ClassName
          (CustomLogic_CustomLogicPlayerBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345781 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Player");
    Il2CppMethodInitialized_184345781 = '\x01';
  }
  return "Player";
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicPlayerBuiltin__get_IsAbstract (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicPlayerBuiltin__get_IsAbstract(CustomLogic_CustomLogicPlayerBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicPlayerBuiltin__get_IsStatic (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x180668280

bool
CustomLogic_CustomLogicPlayerBuiltin__get_IsStatic(CustomLogic_CustomLogicPlayerBuiltin_o* __this, MethodInfo* method)

{
  return false;
}


// CustomLogic.CustomLogicPlayerBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicPlayerBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicPlayerBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicPlayerBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicPlayerBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


