// Type: CustomLogic.CustomLogicNetworkBuiltin
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicNetworkBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicNetworkBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicNetworkBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicNetworkBuiltin_o* CustomLogic_CustomLogicNetworkBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x18203cd50

CustomLogic_CustomLogicNetworkBuiltin_o *
CustomLogic_CustomLogicNetworkBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str2;
  System_String_o *str0;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_res8 [2];
  
  if (Il2CppMethodInitialized_1843464c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNetworkBuiltin);
    Il2CppMethodInitialized_1843464c5 = '\x01';
  }
  local_res8[0] = 0;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin);
      if (Il2CppMethodInitialized_1843464b6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
        Il2CppMethodInitialized_1843464b6 = '\x01';
      }
      if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicNetworkBuiltin_o *)__this;
    }
    NullCheck(args);
    local_res8[0] = (int32_t)args->max_length;
    pSVar1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicNetworkBuiltin constructor found that takes ");
    pSVar1 = System_String__Concat_1969b70(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_1a77cc0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicNetworkBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x182044b20

void CustomLogic_CustomLogicNetworkBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *__this;
  
  if (Il2CppMethodInitialized_1843464d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843464d5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9,__this);
  return;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicNetworkBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
CustomLogic_CustomLogicNetworkBuiltin_Bindings___c___ctor(CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$<__CreateMethodBinding__SendMessage>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__SendMessage_b__9_0 (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182041370

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__SendMessage_b__9_0
          (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Photon_Realtime_Player_o *targetPlayer;
  Photon_Pun_PhotonView_o *__this_00;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCVar1;
  System_String_o *obj;
  System_Object_array *parameters;
  Il2CppObject *pIVar2;
  
  if (Il2CppMethodInitialized_1843464d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843464d6 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_1820414eb:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar2 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (pIVar2,(MethodInfo_66EB70 *)
                               MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicPlayerBuiltin)
    ;
    if (1 < (uint)__a->max_length) {
      obj = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (__a->m_Items[1],
                       (MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
      if (Il2CppMethodInitialized_1843464be == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
        il2cpp_codegen_initialize_runtime_metadata(&"SendMessageRPC");
        Il2CppMethodInitialized_1843464be = '\x01';
      }
      if (pCVar1 != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
        targetPlayer = (pCVar1->fields).Player;
        __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
        parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
        if (parameters != (System_Object_array *)0x0) {
          if (obj != (System_String_o *)0x0) {
            pIVar2 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class);
            if (pIVar2 == (Il2CppObject *)0x0) {
              pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
              il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
            }
          }
          if ((int)parameters->max_length == 0) goto label_182041501;
          parameters->m_Items[0] = (Il2CppObject *)obj;
          Il2CppCodeGenWriteBarrier(parameters->m_Items,obj);
          if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
            Photon_Pun_PhotonView__RPC_1d4d8d0
                      (__this_00,"SendMessageRPC",targetPlayer,parameters,(MethodInfo *)0x0);
            return (Il2CppObject *)0x0;
          }
        }
      }
      goto label_1820414eb;
    }
  }
label_182041501:
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$<__CreateMethodBinding__SendMessageAll>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__SendMessageAll_b__10_0 (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820410b0

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__SendMessageAll_b__10_0
          (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  System_String_o *obj;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_1843464d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843464d7 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
label_182041201:
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    obj = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (pIVar1,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
    if (Il2CppMethodInitialized_1843464bf == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
      il2cpp_codegen_initialize_runtime_metadata(&"SendMessageRPC");
      Il2CppMethodInitialized_1843464bf = '\x01';
    }
    __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    if (parameters != (System_Object_array *)0x0) {
      if (obj != (System_String_o *)0x0) {
        pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class);
        if (pIVar1 == (Il2CppObject *)0x0) {
          pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
        }
      }
      if ((int)parameters->max_length == 0) goto label_182041201;
      parameters->m_Items[0] = (Il2CppObject *)obj;
      Il2CppCodeGenWriteBarrier(parameters->m_Items,obj);
      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_00,"SendMessageRPC",0,parameters,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$<__CreateMethodBinding__SendMessageOthers>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__SendMessageOthers_b__11_0 (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x182041210

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__SendMessageOthers_b__11_0
          (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this_00;
  System_String_o *obj;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_1843464d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843464d8 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
label_182041364:
      ThrowIndexOutOfRangeException();
    }
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    obj = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                    (pIVar1,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
    if (Il2CppMethodInitialized_1843464c0 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
      il2cpp_codegen_initialize_runtime_metadata(&"SendMessageRPC");
      Il2CppMethodInitialized_1843464c0 = '\x01';
    }
    __this_00 = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    if (parameters != (System_Object_array *)0x0) {
      if (obj != (System_String_o *)0x0) {
        pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((parameters->obj).klass)->_1).element_class);
        if (pIVar1 == (Il2CppObject *)0x0) {
          pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
        }
      }
      if ((int)parameters->max_length == 0) goto label_182041364;
      parameters->m_Items[0] = (Il2CppObject *)obj;
      Il2CppCodeGenWriteBarrier(parameters->m_Items,obj);
      if (__this_00 != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this_00,"SendMessageRPC",1,parameters,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindPlayer>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__FindPlayer_b__12_0 (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203f430

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__FindPlayer_b__12_0
          (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t id;
  Photon_Realtime_Player_o *player;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_1843464d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843464d9 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  obj = __a->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  id = CustomLogic_CustomLogicEvaluator__ConvertTo_int_
                 (obj,(MethodInfo_66E9A0 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  if (Il2CppMethodInitialized_1843464c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_1843464c1 = '\x01';
  }
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  player = Utility_Util__FindPlayerById(id,(MethodInfo *)0x0);
  if (player == (Photon_Realtime_Player_o *)0x0) {
    return (Il2CppObject *)0x0;
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
  CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_00,player,(MethodInfo *)0x0);
  return (Il2CppObject *)__this_00;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetTimestampDifference>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__GetTimestampDifference_b__13_0 (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x18203ff80

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__GetTimestampDifference_b__13_0
          (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  double sentTime;
  double serverTime;
  double local_res18 [2];
  
  if (Il2CppMethodInitialized_1843464da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_double);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_1843464da = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    sentTime = CustomLogic_CustomLogicEvaluator__ConvertTo_double_
                         (pIVar1,(MethodInfo_66E5D0 *)
                                 MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_double);
    if (1 < (uint)__a->max_length) {
      serverTime = CustomLogic_CustomLogicEvaluator__ConvertTo_double_
                             (__a->m_Items[1],
                              (MethodInfo_66E5D0 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_double);
      if (Il2CppMethodInitialized_1843464c2 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
        Il2CppMethodInitialized_1843464c2 = '\x01';
      }
      if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
      }
      local_res18[0] = Utility_Util__GetPhotonTimestampDifference(sentTime,serverTime,(MethodInfo *)0x0);
      pIVar1 = il2cpp_value_box(g_data_184354e40,local_res18);
      return pIVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$<__CreateMethodBinding__KickPlayer>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__KickPlayer_b__14_0 (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x1820403b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182040433: mov rax, qword ptr [rip + 0x209c9b6]  ; "."

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__KickPlayer_b__14_0
          (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  uint uVar1;
  Il2CppObject *target;
  Il2CppObject *obj;
  System_String_o *reason;
  
  if (Il2CppMethodInitialized_1843464db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_1843464db = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length == 0) {
label_18204045b:
    ThrowIndexOutOfRangeException();
  }
  uVar1 = (uint)__a->max_length;
  target = __a->m_Items[0];
  reason = ".";
  if (1 < (int)uVar1) {
    if (uVar1 < 2) goto label_18204045b;
    obj = __a->m_Items[1];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    reason = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_66EB70 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
    ;
  }
  CustomLogic_CustomLogicNetworkBuiltin__KickPlayer(target,reason,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicNetworkBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x18201a7b0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  bool bVar2;
  uint32_t uVar3;
  System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *__this;
  ExitGames_Client_Photon_SerializeStreamMethod_o *pEVar4;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *pSVar5;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *__this_00;
  System_String_o *pSVar6;
  System_String_o *str0;
  Il2CppClass *klass;
  System_Exception_o *__this_01;
  MethodInfo *pMVar7;
  
  if (Il2CppMethodInitialized_1843464c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"MyPlayer");
    il2cpp_codegen_initialize_runtime_metadata(&"IsSingleplayer");
    il2cpp_codegen_initialize_runtime_metadata(&"FindPlayer");
    il2cpp_codegen_initialize_runtime_metadata(&"MasterClient");
    il2cpp_codegen_initialize_runtime_metadata(&"SendMessage");
    il2cpp_codegen_initialize_runtime_metadata(&"Players");
    il2cpp_codegen_initialize_runtime_metadata(&"Ping");
    il2cpp_codegen_initialize_runtime_metadata(&"SendMessageAll");
    il2cpp_codegen_initialize_runtime_metadata(&"NetworkTime");
    il2cpp_codegen_initialize_runtime_metadata(&"SendMessageOthers");
    il2cpp_codegen_initialize_runtime_metadata(&"IsMasterClient");
    il2cpp_codegen_initialize_runtime_metadata(&"KickPlayer");
    il2cpp_codegen_initialize_runtime_metadata(&"GetTimestampDifference");
    Il2CppMethodInitialized_1843464c6 = '\x01';
  }
  uVar3 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x34be13e5) {
    if (uVar3 < 0x18dd36aa) {
      if (uVar3 == 0x6bf1664) {
        bVar2 = System_String__op_Equality(name,"IsSingleplayer",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843464c8 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__IsSingleplayer_g____gett
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNetworkBuiltin_object)
            ;
            Il2CppMethodInitialized_1843464c8 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__IsSingleplayer_g____gett
          ;
          goto label_18201b4a6;
        }
      }
      else if (uVar3 == 0x121de31d) {
        bVar2 = System_String__op_Equality(name,"SendMessageAll",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843464cf == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_System_Func_CustomLogicNetworkBuiltin_object_array_object);
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c___CreateMethodBinding__SendMessageAll_b__10_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
            Il2CppMethodInitialized_1843464cf = '\x01';
          }
          if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
          }
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9__10_0;
          if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
            if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor ==
                0) {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
            }
            pIVar1 = (Il2CppObject *)
                     TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9;
            pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                     il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Func_CustomLogicNetworkBuiltin_object_array_object);
            System_Func_object__object__object____ctor
                      (pEVar4,pIVar1,
                       (intptr_t)
                       MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c___CreateMethodBinding__SendMessageAll_b__10_0
                       ,(MethodInfo *)0x0);
            TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9__10_0 =
                 (System_Func_CustomLogicNetworkBuiltin__object____object__o *)pEVar4;
            Il2CppCodeGenWriteBarrier
                      (&TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9__10_0,
                       pEVar4);
          }
          pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin);
          CustomLogic_CLMethodBinding_object____ctor
                    (pSVar5,(System_String_o *)pEVar4,
                     MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin_ctor);
          return (CustomLogic_ICLMemberBinding_o *)pSVar5;
        }
      }
      else if (uVar3 == 0x18dd36a9) {
        bVar2 = System_String__op_Equality(name,"Players",(MethodInfo *)0x0);
        if (bVar2) {
          if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
          }
          if (Il2CppMethodInitialized_1843464c9 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&
                       MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__Players_g____getter_4_0
                      );
            il2cpp_codegen_initialize_runtime_metadata
                      (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin_ctor);
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNetworkBuiltin_object)
            ;
            Il2CppMethodInitialized_1843464c9 = '\x01';
          }
          __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
          pMVar7 = 
          MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__Players_g____getter_4_0
          ;
          goto label_18201b4a6;
        }
      }
    }
    else if (uVar3 == 0x20e62364) {
      bVar2 = System_String__op_Equality(name,"NetworkTime",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843464cc == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__NetworkTime_g____getter
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
          Il2CppMethodInitialized_1843464cc = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__NetworkTime_g____getter
        ;
label_18201b4a6:
        System_Func_object__object____ctor
                  (__this,(Il2CppObject *)0x0,(intptr_t)pMVar7,(MethodInfo_16E67D0 *)0x0);
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin
                              );
        CustomLogic_CLPropertyBinding_object____ctor
                  ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
                   (System_Action_T__object__o *)0x0,
                   (MethodInfo_12B8EE0 *)
                   MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)__this_00;
      }
    }
    else if (uVar3 == 0x3442c773) {
      bVar2 = System_String__op_Equality(name,"FindPlayer",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843464d1 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicNetworkBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c___CreateMethodBinding__FindPlayer_b__12_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843464d1 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
        }
        pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9__12_0;
        if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9;
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicNetworkBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (pEVar4,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c___CreateMethodBinding__FindPlayer_b__12_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9__12_0 =
               (System_Func_CustomLogicNetworkBuiltin__object____object__o *)pEVar4;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9__12_0,
                     pEVar4);
        }
        pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  (pSVar5,(System_String_o *)pEVar4,
                   MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)pSVar5;
      }
    }
    else if (uVar3 == 0x34be13e4) {
      bVar2 = System_String__op_Equality(name,"MasterClient",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843464ca == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__MasterClient_g____getter
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
          Il2CppMethodInitialized_1843464ca = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__MasterClient_g____getter
        ;
        goto label_18201b4a6;
      }
    }
  }
  else if (uVar3 < 0x5a740463) {
    if (uVar3 == 0x396d88cd) {
      bVar2 = System_String__op_Equality(name,"SendMessageOthers",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843464d0 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicNetworkBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c___CreateMethodBinding__SendMessageOthers_b__11
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843464d0 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
        }
        pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9__11_0;
        if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9;
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicNetworkBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (pEVar4,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c___CreateMethodBinding__SendMessageOthers_b__11
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9__11_0 =
               (System_Func_CustomLogicNetworkBuiltin__object____object__o *)pEVar4;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9__11_0,
                     pEVar4);
        }
        pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  (pSVar5,(System_String_o *)pEVar4,
                   MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)pSVar5;
      }
    }
    else if (uVar3 == 0x396f5fc2) {
      bVar2 = System_String__op_Equality(name,"MyPlayer",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843464cb == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__MyPlayer_g____getter_6_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
          Il2CppMethodInitialized_1843464cb = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__MyPlayer_g____getter_6_0
        ;
        goto label_18201b4a6;
      }
    }
    else if (uVar3 == 0x5a740462) {
      bVar2 = System_String__op_Equality(name,"GetTimestampDifference",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843464d2 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicNetworkBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c___CreateMethodBinding__GetTimestampDifference_b
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843464d2 = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
        }
        pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9__13_0;
        if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9;
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicNetworkBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (pEVar4,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c___CreateMethodBinding__GetTimestampDifference_b
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9__13_0 =
               (System_Func_CustomLogicNetworkBuiltin__object____object__o *)pEVar4;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9__13_0,
                     pEVar4);
        }
        pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  (pSVar5,(System_String_o *)pEVar4,
                   MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)pSVar5;
      }
    }
  }
  else if (uVar3 < 0x67ac82cf) {
    if (uVar3 == 0x603b3854) {
      bVar2 = System_String__op_Equality(name,"IsMasterClient",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843464c7 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__IsMasterClient_g____gett
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
          Il2CppMethodInitialized_1843464c7 = '\x01';
        }
        __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
        pMVar7 = 
        MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__IsMasterClient_g____gett
        ;
        goto label_18201b4a6;
      }
    }
    else if (uVar3 == 0x67ac82ce) {
      bVar2 = System_String__op_Equality(name,"SendMessage",(MethodInfo *)0x0);
      if (bVar2) {
        if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
        }
        if (Il2CppMethodInitialized_1843464ce == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin_ctor);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin);
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_System_Func_CustomLogicNetworkBuiltin_object_array_object);
          il2cpp_codegen_initialize_runtime_metadata
                    (&
                     MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c___CreateMethodBinding__SendMessage_b__9_0
                    );
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
          Il2CppMethodInitialized_1843464ce = '\x01';
        }
        if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
        }
        pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9__9_0;
        if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
          if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0)
          {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
          }
          pIVar1 = (Il2CppObject *)
                   TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9;
          pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                   il2cpp_codegen_object_new
                             ((Il2CppClass *)
                              TypeInfo_System_Func_CustomLogicNetworkBuiltin_object_array_object);
          System_Func_object__object__object____ctor
                    (pEVar4,pIVar1,
                     (intptr_t)
                     MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c___CreateMethodBinding__SendMessage_b__9_0
                     ,(MethodInfo *)0x0);
          TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9__9_0 =
               (System_Func_CustomLogicNetworkBuiltin__object____object__o *)pEVar4;
          Il2CppCodeGenWriteBarrier
                    (&TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9__9_0,
                     pEVar4);
        }
        pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin);
        CustomLogic_CLMethodBinding_object____ctor
                  (pSVar5,(System_String_o *)pEVar4,
                   MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin_ctor);
        return (CustomLogic_ICLMemberBinding_o *)pSVar5;
      }
    }
  }
  else if (uVar3 == 0x7fb7f0a9) {
    bVar2 = System_String__op_Equality(name,"Ping",(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843464cd == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__Ping_g____getter_8_0
                  );
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
        Il2CppMethodInitialized_1843464cd = '\x01';
      }
      __this = (System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkBuiltin_object)
      ;
      pMVar7 = 
      MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__Ping_g____getter_8_0;
      goto label_18201b4a6;
    }
  }
  else if (uVar3 == 0xce859b1e) {
    bVar2 = System_String__op_Equality(name,"KickPlayer",(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
      }
      if (Il2CppMethodInitialized_1843464d3 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin_ctor);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin);
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_System_Func_CustomLogicNetworkBuiltin_object_array_object);
        il2cpp_codegen_initialize_runtime_metadata
                  (&
                   MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c___CreateMethodBinding__KickPlayer_b__14_0
                  );
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c)
        ;
        Il2CppMethodInitialized_1843464d3 = '\x01';
      }
      if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
      }
      pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
               TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9__14_0;
      if (pEVar4 == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
        if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
        }
        pIVar1 = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9
        ;
        pEVar4 = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
                 il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkBuiltin_object_array_object)
        ;
        System_Func_object__object__object____ctor
                  (pEVar4,pIVar1,
                   (intptr_t)
                   MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c___CreateMethodBinding__KickPlayer_b__14_0
                   ,(MethodInfo *)0x0);
        TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9__14_0 =
             (System_Func_CustomLogicNetworkBuiltin__object____object__o *)pEVar4;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9__14_0,pEVar4
                  );
      }
      pSVar5 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
               il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin);
      CustomLogic_CLMethodBinding_object____ctor
                (pSVar5,(System_String_o *)pEVar4,
                 MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin_ctor);
      return (CustomLogic_ICLMemberBinding_o *)pSVar5;
    }
  }
  pSVar6 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicNetworkBuiltin not found");
  str0 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  pSVar6 = System_String__Concat_1969b70(str0,name,pSVar6,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this_01 = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_1b6abf0(__this_01,pSVar6,(MethodInfo *)0x0);
  pMVar7 = il2cpp_codegen_get_runtime_metadata
                     (&MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,pMVar7);
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreatePropertyBinding__IsMasterClient
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__IsMasterClient (const MethodInfo* method);
// 0x18202e8d0

CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__IsMasterClient(MethodInfo *method)

{
  System_Func_CustomLogicNetworkBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843464c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__IsMasterClient_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
    Il2CppMethodInitialized_1843464c7 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__IsMasterClient_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreatePropertyBinding__IsSingleplayer
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__IsSingleplayer (const MethodInfo* method);
// 0x18202e970

CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__IsSingleplayer(MethodInfo *method)

{
  System_Func_CustomLogicNetworkBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843464c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__IsSingleplayer_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
    Il2CppMethodInitialized_1843464c8 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__IsSingleplayer_g____gett
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreatePropertyBinding__Players
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__Players (const MethodInfo* method);
// 0x18202efb0

CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__Players(MethodInfo *method)

{
  System_Func_CustomLogicNetworkBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843464c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__Players_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
    Il2CppMethodInitialized_1843464c9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__Players_g____getter_4_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreatePropertyBinding__MasterClient
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__MasterClient (const MethodInfo* method);
// 0x18202eb50

CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__MasterClient(MethodInfo *method)

{
  System_Func_CustomLogicNetworkBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843464ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__MasterClient_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
    Il2CppMethodInitialized_1843464ca = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__MasterClient_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreatePropertyBinding__MyPlayer
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__MyPlayer (const MethodInfo* method);
// 0x18202ebf0

CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__MyPlayer(MethodInfo *method)

{
  System_Func_CustomLogicNetworkBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843464cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__MyPlayer_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
    Il2CppMethodInitialized_1843464cb = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__MyPlayer_g____getter_6_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreatePropertyBinding__NetworkTime
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__NetworkTime (const MethodInfo* method);
// 0x18202ec90

CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__NetworkTime(MethodInfo *method)

{
  System_Func_CustomLogicNetworkBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843464cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__NetworkTime_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
    Il2CppMethodInitialized_1843464cc = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__NetworkTime_g____getter
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreatePropertyBinding__Ping
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__Ping (const MethodInfo* method);
// 0x18202ed30

CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__Ping(MethodInfo *method)

{
  System_Func_CustomLogicNetworkBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_1843464cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__Ping_g____getter_8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
    Il2CppMethodInitialized_1843464cd = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__Ping_g____getter_8_0
             ,(MethodInfo_16E67D0 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_12B8EE0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreateMethodBinding__SendMessage
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__SendMessage (const MethodInfo* method);
// 0x18202a5f0

CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__SendMessage(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843464ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicNetworkBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c___CreateMethodBinding__SendMessage_b__9_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843464ce = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9__9_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c___CreateMethodBinding__SendMessage_b__9_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9__9_0 =
         (System_Func_CustomLogicNetworkBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9__9_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreateMethodBinding__SendMessageAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__SendMessageAll (const MethodInfo* method);
// 0x18202a3b0

CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__SendMessageAll(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843464cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicNetworkBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c___CreateMethodBinding__SendMessageAll_b__10_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843464cf = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9__10_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c___CreateMethodBinding__SendMessageAll_b__10_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9__10_0 =
         (System_Func_CustomLogicNetworkBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9__10_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreateMethodBinding__SendMessageOthers
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__SendMessageOthers (const MethodInfo* method);
// 0x18202a4d0

CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__SendMessageOthers(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843464d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicNetworkBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c___CreateMethodBinding__SendMessageOthers_b__11
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843464d0 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9__11_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c___CreateMethodBinding__SendMessageOthers_b__11
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9__11_0 =
         (System_Func_CustomLogicNetworkBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9__11_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreateMethodBinding__FindPlayer
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__FindPlayer (const MethodInfo* method);
// 0x182027570

CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__FindPlayer(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843464d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicNetworkBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c___CreateMethodBinding__FindPlayer_b__12_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843464d1 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9__12_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c___CreateMethodBinding__FindPlayer_b__12_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9__12_0 =
         (System_Func_CustomLogicNetworkBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9__12_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreateMethodBinding__GetTimestampDifference
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__GetTimestampDifference (const MethodInfo* method);
// 0x182028890

CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__GetTimestampDifference
          (MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843464d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicNetworkBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c___CreateMethodBinding__GetTimestampDifference_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843464d2 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9__13_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c___CreateMethodBinding__GetTimestampDifference_b
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9__13_0 =
         (System_Func_CustomLogicNetworkBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9__13_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreateMethodBinding__KickPlayer
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__KickPlayer (const MethodInfo* method);
// 0x182028e30

CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__KickPlayer(MethodInfo *method)

{
  Il2CppObject *object;
  ExitGames_Client_Photon_SerializeStreamMethod_o *__this;
  System_Xml_Serialization_XmlTypeConvertorAttribute_o *__this_00;
  
  if (Il2CppMethodInitialized_1843464d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicNetworkBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c___CreateMethodBinding__KickPlayer_b__14_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
    Il2CppMethodInitialized_1843464d3 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
  }
  __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
           TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9__14_0;
  if (__this == (ExitGames_Client_Photon_SerializeStreamMethod_o *)0x0) {
    if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
    }
    object = (Il2CppObject *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9;
    __this = (ExitGames_Client_Photon_SerializeStreamMethod_o *)
             il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              (__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c___CreateMethodBinding__KickPlayer_b__14_0
               ,(MethodInfo *)0x0);
    TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9__14_0 =
         (System_Func_CustomLogicNetworkBuiltin__object____object__o *)__this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9__14_0,__this);
  }
  __this_00 = (System_Xml_Serialization_XmlTypeConvertorAttribute_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            (__this_00,(System_String_o *)__this,
             MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin_ctor);
  return (CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *)__this_00;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicNetworkBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x1820304c0

void CustomLogic_CustomLogicNetworkBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_1843464d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"MyPlayer");
    il2cpp_codegen_initialize_runtime_metadata(&"IsSingleplayer");
    il2cpp_codegen_initialize_runtime_metadata(&"FindPlayer");
    il2cpp_codegen_initialize_runtime_metadata(&"MasterClient");
    il2cpp_codegen_initialize_runtime_metadata(&"SendMessage");
    il2cpp_codegen_initialize_runtime_metadata(&"Players");
    il2cpp_codegen_initialize_runtime_metadata(&"Ping");
    il2cpp_codegen_initialize_runtime_metadata(&"SendMessageAll");
    il2cpp_codegen_initialize_runtime_metadata(&"NetworkTime");
    il2cpp_codegen_initialize_runtime_metadata(&"SendMessageOthers");
    il2cpp_codegen_initialize_runtime_metadata(&"IsMasterClient");
    il2cpp_codegen_initialize_runtime_metadata(&"KickPlayer");
    il2cpp_codegen_initialize_runtime_metadata(&"GetTimestampDifference");
    Il2CppMethodInitialized_1843464d4 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_176CE80 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsMasterClient",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsSingleplayer",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Players",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MasterClient",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MyPlayer",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"NetworkTime",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Ping",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SendMessage",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SendMessageAll",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SendMessageOthers",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FindPlayer",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetTimestampDifference",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"KickPlayer",
               (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings->static_fields->MemberNames = __this;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings->static_fields->MemberNames,__this);
    return;
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$<__CreatePropertyBinding__IsMasterClient>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__IsMasterClient_g____getter_2_0 (CustomLogic_CustomLogicNetworkBuiltin_o* __i, const MethodInfo* method);
// 0x182024e00

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__IsMasterClient_g____getter_2_0
          (CustomLogic_CustomLogicNetworkBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 local_res18 [16];
  
  if (Il2CppMethodInitialized_1843464b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_1843464b7 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  local_res18[0] = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  pIVar1 = il2cpp_value_box(g_data_184354de8,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$<__CreatePropertyBinding__IsSingleplayer>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__IsSingleplayer_g____getter_3_0 (CustomLogic_CustomLogicNetworkBuiltin_o* __i, const MethodInfo* method);
// 0x182024e60

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__IsSingleplayer_g____getter_3_0
          (CustomLogic_CustomLogicNetworkBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 local_res18 [16];
  
  if (Il2CppMethodInitialized_1843464b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_1843464b8 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  if (Il2CppMethodInitialized_184344524 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184344524 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  local_res18[0] = TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode;
  pIVar1 = il2cpp_value_box(g_data_184354de8,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$<__CreatePropertyBinding__Players>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__Players_g____getter_4_0 (CustomLogic_CustomLogicNetworkBuiltin_o* __i, const MethodInfo* method);
// 0x182025160

Il2CppObject*
CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__Players_g____getter_4_0(CustomLogic_CustomLogicNetworkBuiltin_o* __i, MethodInfo* method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this;
  Photon_Realtime_Player_o *player;
  System_Object_array *pSVar3;
  MethodInfo *pMVar4;
  CustomLogic_CustomLogicListBuiltin_o *__this_00;
  Photon_Realtime_Player_array *pPVar5;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_01;
  uint uVar6;
  
  if (Il2CppMethodInitialized_1843464b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_1843464b9 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_00,(MethodInfo *)0x0);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar5 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
  if (pPVar5 != (Photon_Realtime_Player_array *)0x0) {
    uVar6 = 0;
    do {
      if ((int)pPVar5->max_length <= (int)uVar6) {
        return __this_00;
      }
      if ((uint)pPVar5->max_length <= uVar6) {
label_1820252db:
        ThrowIndexOutOfRangeException();
      }
      if (__this_00 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) break;
      __this = (__this_00->fields).List;
      player = pPVar5->m_Items[(int)uVar6];
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
      CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_01,player,(MethodInfo *)0x0);
      pMVar4 = MethodInfo_System_Collections_Generic_List_object_Add;
      if (__this == (System_Collections_Generic_List_object__o *)0x0) break;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this->fields)._items;
      if (pSVar3 == (System_Object_array *)0x0) break;
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this->fields)._size = uVar2 + 1;
        if ((uint)pSVar3->max_length <= uVar2) goto label_1820252db;
        pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)__this_01;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,__this_01);
        uVar6 = uVar6 + 1;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this,(Il2CppObject *)__this_01,(MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method
                  );
        uVar6 = uVar6 + 1;
      }
    } while( true );
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$<__CreatePropertyBinding__MasterClient>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__MasterClient_g____getter_5_0 (CustomLogic_CustomLogicNetworkBuiltin_o* __i, const MethodInfo* method);
// 0x182024f40

Il2CppObject*
CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__MasterClient_g____getter_5_0(CustomLogic_CustomLogicNetworkBuiltin_o* __i, MethodInfo* method)

{
  Photon_Realtime_Player_o *player;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this;
  
  if (Il2CppMethodInitialized_1843464ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_1843464ba = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  player = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
  CustomLogic_CustomLogicPlayerBuiltin___ctor(__this,player,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$<__CreatePropertyBinding__MyPlayer>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__MyPlayer_g____getter_6_0 (CustomLogic_CustomLogicNetworkBuiltin_o* __i, const MethodInfo* method);
// 0x182024fc0

Il2CppObject*
CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__MyPlayer_g____getter_6_0(CustomLogic_CustomLogicNetworkBuiltin_o* __i, MethodInfo* method)

{
  Photon_Realtime_Player_o *player;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this;
  
  if (Il2CppMethodInitialized_1843464bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_1843464bb = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
  CustomLogic_CustomLogicPlayerBuiltin___ctor(__this,player,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$<__CreatePropertyBinding__NetworkTime>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__NetworkTime_g____getter_7_0 (CustomLogic_CustomLogicNetworkBuiltin_o* __i, const MethodInfo* method);
// 0x182025040

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__NetworkTime_g____getter_7_0
          (CustomLogic_CustomLogicNetworkBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  double local_res18 [2];
  
  if (Il2CppMethodInitialized_1843464bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_1843464bc = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  local_res18[0] = Photon_Pun_PhotonNetwork__get_Time((MethodInfo *)0x0);
  pIVar1 = il2cpp_value_box(g_data_184354e40,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$<__CreatePropertyBinding__Ping>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__Ping_g____getter_8_0 (CustomLogic_CustomLogicNetworkBuiltin_o* __i, const MethodInfo* method);
// 0x1820250a0

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__Ping_g____getter_8_0
          (CustomLogic_CustomLogicNetworkBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  int32_t local_res18 [4];
  
  if (Il2CppMethodInitialized_1843464bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_1843464bd = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  local_res18[0] = Photon_Pun_PhotonNetwork__GetPing((MethodInfo *)0x0);
  pIVar1 = il2cpp_value_box(g_data_184354e08,local_res18);
  return pIVar1;
}


// CustomLogic.CustomLogicNetworkBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicNetworkBuiltin___ctor (CustomLogic_CustomLogicNetworkBuiltin_o* __this, const MethodInfo* method);
// 0x182036ee0

void CustomLogic_CustomLogicNetworkBuiltin___ctor
               (CustomLogic_CustomLogicNetworkBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843464b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_1843464b6 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_IsMasterClient
// il2cpp: bool CustomLogic_CustomLogicNetworkBuiltin__get_IsMasterClient (const MethodInfo* method);
// 0x182036f60

bool CustomLogic_CustomLogicNetworkBuiltin__get_IsMasterClient(MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843464b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_1843464b7 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  return bVar1;
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_IsSingleplayer
// il2cpp: bool CustomLogic_CustomLogicNetworkBuiltin__get_IsSingleplayer (const MethodInfo* method);
// 0x182036fa0

bool CustomLogic_CustomLogicNetworkBuiltin__get_IsSingleplayer(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843464b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_1843464b8 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  if (Il2CppMethodInitialized_184344524 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_184344524 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  return TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode;
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_Players
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicNetworkBuiltin__get_Players (const MethodInfo* method);
// 0x182025160

CustomLogic_CustomLogicListBuiltin_o * CustomLogic_CustomLogicNetworkBuiltin__get_Players(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this;
  Photon_Realtime_Player_o *player;
  System_Object_array *pSVar3;
  MethodInfo *pMVar4;
  CustomLogic_CustomLogicListBuiltin_o *__this_00;
  Photon_Realtime_Player_array *pPVar5;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_01;
  uint uVar6;
  
  if (Il2CppMethodInitialized_1843464b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_1843464b9 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_00,(MethodInfo *)0x0);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar5 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
  if (pPVar5 != (Photon_Realtime_Player_array *)0x0) {
    uVar6 = 0;
    do {
      if ((int)pPVar5->max_length <= (int)uVar6) {
        return __this_00;
      }
      if ((uint)pPVar5->max_length <= uVar6) {
label_1820252db:
        ThrowIndexOutOfRangeException();
      }
      if (__this_00 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) break;
      __this = (__this_00->fields).List;
      player = pPVar5->m_Items[(int)uVar6];
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
      CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_01,player,(MethodInfo *)0x0);
      pMVar4 = MethodInfo_System_Collections_Generic_List_object_Add;
      if (__this == (System_Collections_Generic_List_object__o *)0x0) break;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this->fields)._items;
      if (pSVar3 == (System_Object_array *)0x0) break;
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this->fields)._size = uVar2 + 1;
        if ((uint)pSVar3->max_length <= uVar2) goto label_1820252db;
        pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)__this_01;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,__this_01);
        uVar6 = uVar6 + 1;
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this,(Il2CppObject *)__this_01,(MethodInfo_93DD50 *)pMVar4->klass->rgctx_data[0xe].method
                  );
        uVar6 = uVar6 + 1;
      }
    } while( true );
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_MasterClient
// il2cpp: CustomLogic_CustomLogicPlayerBuiltin_o* CustomLogic_CustomLogicNetworkBuiltin__get_MasterClient (const MethodInfo* method);
// 0x182024f40

CustomLogic_CustomLogicPlayerBuiltin_o *
CustomLogic_CustomLogicNetworkBuiltin__get_MasterClient(MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this;
  
  if (Il2CppMethodInitialized_1843464ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_1843464ba = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  player = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
  CustomLogic_CustomLogicPlayerBuiltin___ctor(__this,player,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_MyPlayer
// il2cpp: CustomLogic_CustomLogicPlayerBuiltin_o* CustomLogic_CustomLogicNetworkBuiltin__get_MyPlayer (const MethodInfo* method);
// 0x182024fc0

CustomLogic_CustomLogicPlayerBuiltin_o *
CustomLogic_CustomLogicNetworkBuiltin__get_MyPlayer(MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this;
  
  if (Il2CppMethodInitialized_1843464bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_1843464bb = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
  CustomLogic_CustomLogicPlayerBuiltin___ctor(__this,player,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_NetworkTime
// il2cpp: double CustomLogic_CustomLogicNetworkBuiltin__get_NetworkTime (const MethodInfo* method);
// 0x182037030

double CustomLogic_CustomLogicNetworkBuiltin__get_NetworkTime(MethodInfo *method)

{
  double dVar1;
  
  if (Il2CppMethodInitialized_1843464bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_1843464bc = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  dVar1 = Photon_Pun_PhotonNetwork__get_Time((MethodInfo *)0x0);
  return dVar1;
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_Ping
// il2cpp: int32_t CustomLogic_CustomLogicNetworkBuiltin__get_Ping (const MethodInfo* method);
// 0x182037070

int32_t CustomLogic_CustomLogicNetworkBuiltin__get_Ping(MethodInfo *method)

{
  int32_t iVar1;
  
  if (Il2CppMethodInitialized_1843464bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_1843464bd = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  iVar1 = Photon_Pun_PhotonNetwork__GetPing((MethodInfo *)0x0);
  return iVar1;
}


// CustomLogic.CustomLogicNetworkBuiltin$$SendMessage
// il2cpp: void CustomLogic_CustomLogicNetworkBuiltin__SendMessage (CustomLogic_CustomLogicPlayerBuiltin_o* player, System_String_o* message, const MethodInfo* method);
// 0x182036dd0

void CustomLogic_CustomLogicNetworkBuiltin__SendMessage
               (CustomLogic_CustomLogicPlayerBuiltin_o *player,System_String_o *message,MethodInfo *method)

{
  Photon_Realtime_Player_o *targetPlayer;
  Photon_Pun_PhotonView_o *__this;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_1843464be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SendMessageRPC");
    Il2CppMethodInitialized_1843464be = '\x01';
  }
  if (player != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    targetPlayer = (player->fields).Player;
    __this = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
    parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
    if (parameters != (System_Object_array *)0x0) {
      if (message != (System_String_o *)0x0) {
        pIVar1 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)message,(((parameters->obj).klass)->_1).element_class);
        if (pIVar1 == (Il2CppObject *)0x0) {
          pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
        }
      }
      if ((int)parameters->max_length == 0) {
        ThrowIndexOutOfRangeException();
      }
      parameters->m_Items[0] = (Il2CppObject *)message;
      Il2CppCodeGenWriteBarrier(parameters->m_Items,message);
      if (__this != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC_1d4d8d0
                  (__this,"SendMessageRPC",targetPlayer,parameters,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkBuiltin$$SendMessageAll
// il2cpp: void CustomLogic_CustomLogicNetworkBuiltin__SendMessageAll (System_String_o* message, const MethodInfo* method);
// 0x182036be0

void CustomLogic_CustomLogicNetworkBuiltin__SendMessageAll(System_String_o *message,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_1843464bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SendMessageRPC");
    Il2CppMethodInitialized_1843464bf = '\x01';
  }
  __this = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  if (parameters != (System_Object_array *)0x0) {
    if (message != (System_String_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)message,(((parameters->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((int)parameters->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    parameters->m_Items[0] = (Il2CppObject *)message;
    Il2CppCodeGenWriteBarrier(parameters->m_Items,message);
    if (__this != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this,"SendMessageRPC",0,parameters,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkBuiltin$$SendMessageOthers
// il2cpp: void CustomLogic_CustomLogicNetworkBuiltin__SendMessageOthers (System_String_o* message, const MethodInfo* method);
// 0x182036cd0

void CustomLogic_CustomLogicNetworkBuiltin__SendMessageOthers(System_String_o *message,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_1843464c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SendMessageRPC");
    Il2CppMethodInitialized_1843464c0 = '\x01';
  }
  __this = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
  parameters = (System_Object_array *)SZArrayNew(TypeInfo_object_array,1);
  if (parameters != (System_Object_array *)0x0) {
    if (message != (System_String_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)message,(((parameters->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((int)parameters->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    parameters->m_Items[0] = (Il2CppObject *)message;
    Il2CppCodeGenWriteBarrier(parameters->m_Items,message);
    if (__this != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this,"SendMessageRPC",1,parameters,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkBuiltin$$FindPlayer
// il2cpp: CustomLogic_CustomLogicPlayerBuiltin_o* CustomLogic_CustomLogicNetworkBuiltin__FindPlayer (int32_t id, const MethodInfo* method);
// 0x182036860

CustomLogic_CustomLogicPlayerBuiltin_o *
CustomLogic_CustomLogicNetworkBuiltin__FindPlayer(int32_t id,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this;
  
  if (Il2CppMethodInitialized_1843464c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_1843464c1 = '\x01';
  }
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  player = Utility_Util__FindPlayerById(id,(MethodInfo *)0x0);
  if (player == (Photon_Realtime_Player_o *)0x0) {
    return (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0;
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
  CustomLogic_CustomLogicPlayerBuiltin___ctor(__this,player,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicNetworkBuiltin$$GetTimestampDifference
// il2cpp: double CustomLogic_CustomLogicNetworkBuiltin__GetTimestampDifference (double timestamp1, double timestamp2, const MethodInfo* method);
// 0x1820368f0

double CustomLogic_CustomLogicNetworkBuiltin__GetTimestampDifference
                 (double timestamp1,double timestamp2,MethodInfo *method)

{
  double dVar1;
  
  if (Il2CppMethodInitialized_1843464c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_1843464c2 = '\x01';
  }
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  dVar1 = Utility_Util__GetPhotonTimestampDifference(timestamp1,timestamp2,(MethodInfo *)0x0);
  return dVar1;
}


// CustomLogic.CustomLogicNetworkBuiltin$$KickPlayer
// il2cpp: void CustomLogic_CustomLogicNetworkBuiltin__KickPlayer (Il2CppObject* target, System_String_o* reason, const MethodInfo* method);
// 0x182036960

void CustomLogic_CustomLogicNetworkBuiltin__KickPlayer
               (Il2CppObject *target,System_String_o *reason,MethodInfo *method)

{
  byte bVar1;
  bool bVar2;
  int32_t iVar3;
  Photon_Realtime_Room_o *pPVar4;
  System_Type_o *arg0;
  Il2CppObject *pIVar5;
  System_ArgumentException_o *__this;
  Il2CppClass *pIVar6;
  System_Exception_o *__this_00;
  System_String_o *pSVar7;
  MethodInfo *pMVar8;
  
  if (Il2CppMethodInitialized_1843464c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_1843464c3 = '\x01';
  }
  if (target != (Il2CppObject *)0x0) {
    pIVar5 = (Il2CppObject *)0x0;
    if (target->klass == g_data_184354e08) {
      pIVar5 = target;
    }
    if (pIVar5 == (Il2CppObject *)0x0) {
      pIVar6 = target->klass;
      bVar1 = (TypeInfo_CustomLogic_CustomLogicPlayerBuiltin->_2).typeHierarchyDepth;
      if (((pIVar6->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar6->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin)) goto label_182036af9;
      bVar1 = (TypeInfo_CustomLogic_CustomLogicPlayerBuiltin->_2).typeHierarchyDepth;
      if (((pIVar6->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar6->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin)) {
        il2cpp_codegen_raise_invalid_cast_exception(target);
      }
      pIVar6 = target[3].klass;
    }
    else {
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar4 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
      if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
      }
      iVar3 = MiscExtensions__UnboxToInt(target,(MethodInfo *)0x0);
      if (pPVar4 == (Photon_Realtime_Room_o *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar6 = (Il2CppClass *)
               (*(pPVar4->klass->vtable)._10_GetPlayer.methodPtr)
                         (pPVar4,iVar3,true,(pPVar4->klass->vtable)._10_GetPlayer.method);
    }
    if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      GameManagers_ChatManager__KickPlayer
                ((Photon_Realtime_Player_o *)pIVar6,true,false,reason,(MethodInfo *)0x0);
      return;
    }
    pIVar6 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this_00 = (System_Exception_o *)il2cpp_codegen_object_new(pIVar6);
    pSVar7 = il2cpp_codegen_get_runtime_metadata(&"Only the master client can kick players.");
    System_Exception___ctor_1b6abf0(__this_00,pSVar7,(MethodInfo *)0x0);
    pMVar8 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_KickPlayer)
    ;
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,pMVar8);
  }
label_182036af9:
  NullCheck(target);
  arg0 = System_Object__GetType(target,(MethodInfo *)0x0);
  pIVar5 = il2cpp_codegen_get_runtime_metadata(&"CustomLogicPlayerBuiltin");
  pSVar7 = il2cpp_codegen_get_runtime_metadata(&"Invalid player parameter type {0}. Valid types are {1}, int (id).");
  pSVar7 = System_String__Format_196d440(pSVar7,(Il2CppObject *)arg0,pIVar5,(MethodInfo *)0x0);
  pIVar6 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
  __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar6);
  System_ArgumentException___ctor_1a77cc0(__this,pSVar7,(MethodInfo *)0x0);
  pMVar8 = il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_KickPlayer);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,pMVar8);
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicNetworkBuiltin__get_ClassName (CustomLogic_CustomLogicNetworkBuiltin_o* __this, const MethodInfo* method);
// 0x182036f30

System_String_o *
CustomLogic_CustomLogicNetworkBuiltin__get_ClassName
          (CustomLogic_CustomLogicNetworkBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843464c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Network");
    Il2CppMethodInitialized_1843464c4 = '\x01';
  }
  return "Network";
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicNetworkBuiltin__get_IsAbstract (CustomLogic_CustomLogicNetworkBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicNetworkBuiltin__get_IsAbstract(CustomLogic_CustomLogicNetworkBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicNetworkBuiltin__get_IsStatic (CustomLogic_CustomLogicNetworkBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicNetworkBuiltin__get_IsStatic(CustomLogic_CustomLogicNetworkBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicNetworkBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicNetworkBuiltin_o* __this, const MethodInfo* method);
// 0x1808ed110

bool
CustomLogic_CustomLogicNetworkBuiltin__get_InheritBaseMembers(CustomLogic_CustomLogicNetworkBuiltin_o* __this, MethodInfo* method)

{
  return true;
}


