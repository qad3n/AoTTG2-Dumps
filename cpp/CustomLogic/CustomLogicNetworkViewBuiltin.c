// Type: CustomLogic.CustomLogicNetworkViewBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicNetworkViewBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicNetworkViewBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicNetworkViewBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicNetworkViewBuiltin_o* CustomLogic_CustomLogicNetworkViewBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5a365b0

CustomLogic_CustomLogicNetworkViewBuiltin_o *
CustomLogic_CustomLogicNetworkViewBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  Il2CppObject *obj;
  Map_MapObject_o *obj_00;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  MethodInfo *method_00;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_0754610d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_MapObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin);
    Il2CppMethodInitialized_0754610d = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)args->max_length != 1) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicNetworkViewBuiltin constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  obj = args->m_Items[0];
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  obj_00 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                     (obj,(MethodInfo_34BDE00 *)
                          MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_MapObject);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin);
  CustomLogic_CustomLogicNetworkViewBuiltin___ctor(__this,obj_00,method_00);
  return __this;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5a376b0

void CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07546119 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_07546119 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5a37720

void CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__Transfer>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__Transfer_b__4_0 (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a37730

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__Transfer_b__4_0
          (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkViewBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicPhotonSync_o *pCVar1;
  CustomLogic_CustomLogicPlayerBuiltin_o *player;
  Photon_Pun_PhotonView_o *pPVar2;
  
  if (Il2CppMethodInitialized_0754611a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754611a = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    player = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicPlayerBuiltin);
    if ((__c != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) &&
       (pCVar1 = (__c->fields).Sync, pCVar1 != (CustomLogic_CustomLogicPhotonSync_o *)0x0)) {
      pPVar2 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)pCVar1,(MethodInfo *)0x0);
      if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
        if ((pPVar2->fields)._IsMine_k__BackingField != false) {
          pCVar1 = (__c->fields).Sync;
          if (pCVar1 == (CustomLogic_CustomLogicPhotonSync_o *)0x0) goto label_05a377da;
          CustomLogic_CustomLogicPhotonSync__Transfer(pCVar1,player,(MethodInfo *)0x0);
        }
        return (Il2CppObject *)0x0;
      }
    }
  }
label_05a377da:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__SendMessage>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__SendMessage_b__5_0 (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a377f0

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__SendMessage_b__5_0
          (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkViewBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCVar1;
  System_String_o *message;
  
  if (Il2CppMethodInitialized_0754611b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754611b = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
label_05a378b0:
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    pCVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicPlayerBuiltin);
    if ((__a->max_length & 0xfffffffe) != 0) {
      message = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (__a->m_Items[1],
                           (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
      ;
      if (((__c != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) &&
          (pCVar1 != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0)) &&
         (__this_00 = (__c->fields).Sync, __this_00 != (CustomLogic_CustomLogicPhotonSync_o *)0x0)) {
        CustomLogic_CustomLogicPhotonSync__SendMessage
                  (__this_00,(pCVar1->fields).Player,message,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto label_05a378b0;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__SendMessageAll>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__SendMessageAll_b__6_0 (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a378c0

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__SendMessageAll_b__6_0
          (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkViewBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  System_String_o *message;
  
  if (Il2CppMethodInitialized_0754611c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754611c = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    message = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (obj,(MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__c != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Sync, __this_00 != (CustomLogic_CustomLogicPhotonSync_o *)0x0)) {
      CustomLogic_CustomLogicPhotonSync__SendMessageAll(__this_00,message,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__SendMessageOthers>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__SendMessageOthers_b__7_0 (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a37960

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__SendMessageOthers_b__7_0
          (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkViewBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  System_String_o *message;
  
  if (Il2CppMethodInitialized_0754611d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_0754611d = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    message = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                        (obj,(MethodInfo_34BDE00 *)
                             MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    if ((__c != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Sync, __this_00 != (CustomLogic_CustomLogicPhotonSync_o *)0x0)) {
      CustomLogic_CustomLogicPhotonSync__SendMessageOthers(__this_00,message,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__SendStream>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__SendStream_b__8_0 (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a37a00

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__SendStream_b__8_0
          (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkViewBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    if (__c != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
      CustomLogic_CustomLogicNetworkViewBuiltin__SendStream(__c,__a->m_Items[0],(MethodInfo *)__a);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__ReceiveStream>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__ReceiveStream_b__9_0 (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5a37a30

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__ReceiveStream_b__9_0
          (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkViewBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__c == (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = CustomLogic_CustomLogicNetworkViewBuiltin__ReceiveStream(__c,(MethodInfo *)__c);
  return pIVar1;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5a366e0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings__CreateMemberBinding
          (System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *pCVar3;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_0754610e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&"SendStream");
    il2cpp_codegen_initialize_runtime_metadata(&"Transfer");
    il2cpp_codegen_initialize_runtime_metadata(&"ReceiveStream");
    il2cpp_codegen_initialize_runtime_metadata(&"SendMessage");
    il2cpp_codegen_initialize_runtime_metadata(&"SyncTransforms");
    il2cpp_codegen_initialize_runtime_metadata(&"SendMessageAll");
    il2cpp_codegen_initialize_runtime_metadata(&"Owner");
    il2cpp_codegen_initialize_runtime_metadata(&"SendMessageOthers");
    Il2CppMethodInitialized_0754610e = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x396d88ce) {
    if (uVar2 < 0x121de31e) {
      if (uVar2 == 0x895e8a6) {
        bVar1 = System_String__op_Equality(name,"Transfer",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__Transfer
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__Transfer
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x121de31d) {
        bVar1 = System_String__op_Equality(name,"SendMessageAll",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings->_2).cctor_finished_or_no_cctor ==
              0) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendMessageAll
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendMessageAll
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x1de8ebcf) {
      bVar1 = System_String__op_Equality(name,"SendStream",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendStream
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendStream
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x396d88cd) {
      bVar1 = System_String__op_Equality(name,"SendMessageOthers",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendMessageOthers
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendMessageOthers
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0x8b3137a4) {
    if (uVar2 == 0x8b3137a3) {
      bVar1 = System_String__op_Equality(name,"SyncTransforms",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings);
          pCVar4 = CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreatePropertyBinding__SyncTransforms
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
        pCVar4 = CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreatePropertyBinding__SyncTransforms
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0x67ac82ce) {
      bVar1 = System_String__op_Equality(name,"SendMessage",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0)
        {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendMessage
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendMessage
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 == 0x9b22be74) {
    bVar1 = System_String__op_Equality(name,"Owner",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings);
        pCVar4 = CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreatePropertyBinding__Owner
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
      pCVar4 = CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreatePropertyBinding__Owner
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar4;
    }
  }
  else if (uVar2 == 0xf3e2723a) {
    bVar1 = System_String__op_Equality(name,"ReceiveStream",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings;
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings);
        pCVar3 = CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__ReceiveStream
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
      pCVar3 = CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__ReceiveStream
                         ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicNetworkViewBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreatePropertyBinding__SyncTransforms
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin__o* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreatePropertyBinding__SyncTransforms (const MethodInfo* method);
// 0x5a36ad0

CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin__o *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreatePropertyBinding__SyncTransforms
          (MethodInfo *method)

{
  System_Func_CustomLogicNetworkViewBuiltin__object__o *__this;
  System_Action_CustomLogicNetworkViewBuiltin__object__o *__this_00;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin__o *__this_01;
  
  if (Il2CppMethodInitialized_0754610f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_CustomLogicNetworkViewBuiltin_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___CreatePropertyBinding__SyncTransforms_g
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___CreatePropertyBinding__SyncTransforms_g_71c0ae0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object);
    Il2CppMethodInitialized_0754610f = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___CreatePropertyBinding__SyncTransforms_g
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Action_CustomLogicNetworkViewBuiltin_object);
  System_Action_object__object____ctor
            ((System_Action_object__object__o *)__this_00,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___CreatePropertyBinding__SyncTransforms_g_71c0ae0
             ,(MethodInfo_4A89FC0 *)0x0);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_01,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)__this_00,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin_ctor
            );
  return __this_01;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreatePropertyBinding__Owner
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin__o* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreatePropertyBinding__Owner (const MethodInfo* method);
// 0x5a36bb0

CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin__o *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreatePropertyBinding__Owner(MethodInfo *method)

{
  System_Func_CustomLogicNetworkViewBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546110 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___CreatePropertyBinding__Owner_g____getter_3
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object);
    Il2CppMethodInitialized_07546110 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object)
  ;
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___CreatePropertyBinding__Owner_g____getter_3
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin_ctor
            );
  return __this_00;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreateMethodBinding__Transfer
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__Transfer (const MethodInfo* method);
// 0x5a36c50
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a36c85: jmp 0x5a36cf5

CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__Transfer(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicNetworkViewBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546111 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__Transfer_b__4_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_07546111 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__4_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__4_0;
  }
  if (__this == (System_Func_CustomLogicNetworkViewBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object_array_object)
    ;
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__Transfer_b__4_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields;
    pCVar2->__9__4_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__4_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreateMethodBinding__SendMessage
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendMessage (const MethodInfo* method);
// 0x5a36d90
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a36dc5: jmp 0x5a36e35

CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendMessage(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicNetworkViewBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546112 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__SendMessage_b__5_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_07546112 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__5_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__5_0;
  }
  if (__this == (System_Func_CustomLogicNetworkViewBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object_array_object)
    ;
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__SendMessage_b__5_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields;
    pCVar2->__9__5_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__5_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreateMethodBinding__SendMessageAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendMessageAll (const MethodInfo* method);
// 0x5a36ed0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a36f05: jmp 0x5a36f75

CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendMessageAll(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicNetworkViewBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546113 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__SendMessageAll_b__6
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_07546113 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__6_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__6_0;
  }
  if (__this == (System_Func_CustomLogicNetworkViewBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object_array_object)
    ;
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__SendMessageAll_b__6
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields;
    pCVar2->__9__6_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__6_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreateMethodBinding__SendMessageOthers
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendMessageOthers (const MethodInfo* method);
// 0x5a37010
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a37045: jmp 0x5a370b5

CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendMessageOthers
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicNetworkViewBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546114 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__SendMessageOthers_b
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_07546114 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__7_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__7_0;
  }
  if (__this == (System_Func_CustomLogicNetworkViewBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object_array_object)
    ;
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__SendMessageOthers_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields;
    pCVar2->__9__7_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__7_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreateMethodBinding__SendStream
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendStream (const MethodInfo* method);
// 0x5a37150
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a37185: jmp 0x5a371f5

CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendStream(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicNetworkViewBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546115 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__SendStream_b__8_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_07546115 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__8_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__8_0;
  }
  if (__this == (System_Func_CustomLogicNetworkViewBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object_array_object)
    ;
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__SendStream_b__8_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields;
    pCVar2->__9__8_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__8_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreateMethodBinding__ReceiveStream
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__ReceiveStream (const MethodInfo* method);
// 0x5a37290
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a372c5: jmp 0x5a37335

CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__ReceiveStream(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicNetworkViewBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546116 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object_array_object);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__ReceiveStream_b__9_0
              );
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c)
    ;
    Il2CppMethodInitialized_07546116 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__9_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__9_0;
  }
  if (__this == (System_Func_CustomLogicNetworkViewBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkViewBuiltin_object_array_object)
    ;
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c___CreateMethodBinding__ReceiveStream_b__9_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_c->static_fields;
    pCVar2->__9__9_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__9_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5a373d0

void CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546117 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&"SendStream");
    il2cpp_codegen_initialize_runtime_metadata(&"Transfer");
    il2cpp_codegen_initialize_runtime_metadata(&"ReceiveStream");
    il2cpp_codegen_initialize_runtime_metadata(&"SendMessage");
    il2cpp_codegen_initialize_runtime_metadata(&"SyncTransforms");
    il2cpp_codegen_initialize_runtime_metadata(&"SendMessageAll");
    il2cpp_codegen_initialize_runtime_metadata(&"Owner");
    il2cpp_codegen_initialize_runtime_metadata(&"SendMessageOthers");
    Il2CppMethodInitialized_07546117 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SyncTransforms",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Owner",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Transfer",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SendMessage",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SendMessageAll",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SendMessageOthers",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"SendStream",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"ReceiveStream",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicNetworkViewBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$<__CreatePropertyBinding__SyncTransforms>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_____CreatePropertyBinding__SyncTransforms_g____getter_2_0 (CustomLogic_CustomLogicNetworkViewBuiltin_o* __i, const MethodInfo* method);
// 0x5a37590

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_____CreatePropertyBinding__SyncTransforms_g____getter_2_0
          (CustomLogic_CustomLogicNetworkViewBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if (__i == (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pIVar1 = il2cpp_vm_Object_Box(g_data_075566f0,&uStack_1);
  return pIVar1;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$<__CreatePropertyBinding__SyncTransforms>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_____CreatePropertyBinding__SyncTransforms_g____setter_2_1 (CustomLogic_CustomLogicNetworkViewBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x5a375c0

void CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_____CreatePropertyBinding__SyncTransforms_g____setter_2_1
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__i,Il2CppObject *__v,MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o *pCVar1;
  bool value;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07546118 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546118 = '\x01';
  }
  if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
  }
  value = CustomLogic_CustomLogicEvaluator__ConvertTo_bool_
                    (__v,(MethodInfo_34BD860 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_bool);
  if (__i != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
    if (Il2CppMethodInitialized_075460fd == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
      Il2CppMethodInitialized_075460fd = '\x01';
    }
    (__i->fields)._isTransformSynced = value;
    pCVar1 = (__i->fields).Sync;
    if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar2 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar2) {
      return;
    }
    pCVar1 = (__i->fields).Sync;
    if (pCVar1 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
      CustomLogic_CustomLogicPhotonSync__set_SyncTransforms(pCVar1,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$<__CreatePropertyBinding__Owner>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_____CreatePropertyBinding__Owner_g____getter_3_0 (CustomLogic_CustomLogicNetworkViewBuiltin_o* __i, const MethodInfo* method);
// 0x5a376a0

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_____CreatePropertyBinding__Owner_g____getter_3_0
          (CustomLogic_CustomLogicNetworkViewBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicPlayerBuiltin_o *pCVar1;
  
  if (__i == (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
    ThrowNullReferenceException();
  }
  pCVar1 = CustomLogic_CustomLogicNetworkViewBuiltin__get_Owner(__i,method);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin___ctor (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x5a34670

void CustomLogic_CustomLogicNetworkViewBuiltin___ctor
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,Map_MapObject_o *obj,MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  System_Collections_Generic_List_CustomLogicClassInstance__o *__this_01;
  
  if (Il2CppMethodInitialized_075460fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_CustomLogicComponentInstance);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_CustomLogicClassInstance);
    Il2CppMethodInitialized_075460fc = '\x01';
  }
  (__this->fields).OwnerId = -1;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_CustomLogicComponentInstance)
  ;
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)
             MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_ctor);
  (__this->fields)._classInstances = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._classInstances);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_CustomLogicClassInstance);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_01,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_ctor);
  (__this->fields)._addonInstances = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._addonInstances);
  (__this->fields)._isTransformSynced = true;
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).MapObject = obj;
  Il2CppCodeGenWriteBarrier(&(__this->fields).MapObject);
  return;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$get_SyncTransforms
// il2cpp: bool CustomLogic_CustomLogicNetworkViewBuiltin__get_SyncTransforms (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, const MethodInfo* method);
// 0x5a34780

bool CustomLogic_CustomLogicNetworkViewBuiltin__get_SyncTransforms
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,MethodInfo *method)

{
  return (__this->fields)._isTransformSynced;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$set_SyncTransforms
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__set_SyncTransforms (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x5a34790

void CustomLogic_CustomLogicNetworkViewBuiltin__set_SyncTransforms
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,bool value,MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o *pCVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075460fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075460fd = '\x01';
  }
  (__this->fields)._isTransformSynced = value;
  pCVar1 = (__this->fields).Sync;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    pCVar1 = (__this->fields).Sync;
    if (pCVar1 == (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
      ThrowNullReferenceException();
    }
    CustomLogic_CustomLogicPhotonSync__set_SyncTransforms(pCVar1,value,(MethodInfo *)0x0);
    return;
  }
  return;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$get_Owner
// il2cpp: CustomLogic_CustomLogicPlayerBuiltin_o* CustomLogic_CustomLogicNetworkViewBuiltin__get_Owner (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, const MethodInfo* method);
// 0x5a34810

CustomLogic_CustomLogicPlayerBuiltin_o *
CustomLogic_CustomLogicNetworkViewBuiltin__get_Owner
          (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o *pCVar1;
  Photon_Realtime_Player_o *pPVar2;
  bool bVar3;
  Photon_Pun_PhotonView_o *pPVar4;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_00;
  
  if (Il2CppMethodInitialized_075460fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075460fe = '\x01';
  }
  pCVar1 = (__this->fields).Sync;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0;
  }
  pCVar1 = (__this->fields).Sync;
  if ((pCVar1 == (CustomLogic_CustomLogicPhotonSync_o *)0x0) ||
     (pPVar4 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)pCVar1,(MethodInfo *)0x0),
     pPVar4 == (Photon_Pun_PhotonView_o *)0x0)) {
    ThrowNullReferenceException();
  }
  pPVar2 = (pPVar4->fields)._Owner_k__BackingField;
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
  if (Il2CppMethodInitialized_0754611e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_0754611e = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).Player = pPVar2;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).Player);
  return __this_00;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$OnSecond
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__OnSecond (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, const MethodInfo* method);
// 0x5a34970

void CustomLogic_CustomLogicNetworkViewBuiltin__OnSecond
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_075460ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_075460ff = '\x01';
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    return;
  }
  Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$RegisterComponentInstance
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__RegisterComponentInstance (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, CustomLogic_CustomLogicComponentInstance_o* instance, const MethodInfo* method);
// 0x5a349d0

void CustomLogic_CustomLogicNetworkViewBuiltin__RegisterComponentInstance
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,
               CustomLogic_CustomLogicComponentInstance_o *instance,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  CustomLogic_CustomLogicComponentInstance_array *pCVar3;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_07546100 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_Add);
    Il2CppMethodInitialized_07546100 = '\x01';
  }
  pMVar4 = MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_Add;
  __this_00 = (__this->fields)._classInstances;
  if (__this_00 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pCVar3 = (__this_00->fields)._items;
    if (pCVar3 != (CustomLogic_CustomLogicComponentInstance_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pCVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pCVar3->m_Items[(int)uVar2] = instance;
        Il2CppCodeGenWriteBarrier(pCVar3->m_Items + (int)uVar2);
        return;
      }
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)instance,
                 (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$RegisterAddonInstance
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__RegisterAddonInstance (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, CustomLogic_CustomLogicClassInstance_o* instance, const MethodInfo* method);
// 0x5a34a70

void CustomLogic_CustomLogicNetworkViewBuiltin__RegisterAddonInstance
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,
               CustomLogic_CustomLogicClassInstance_o *instance,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_CustomLogicClassInstance__o *pSVar3;
  CustomLogic_CustomLogicClassInstance_array *pCVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  
  if (Il2CppMethodInitialized_07546101 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_Contains);
    Il2CppMethodInitialized_07546101 = '\x01';
  }
  pSVar3 = (__this->fields)._addonInstances;
  if (pSVar3 != (System_Collections_Generic_List_CustomLogicClassInstance__o *)0x0) {
    bVar6 = System_Collections_Generic_List_object___Contains
                      ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)instance,
                       (MethodInfo_395D6D0 *)
                       MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_Contains);
    pMVar5 = MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_Add;
    if (bVar6) {
      return;
    }
    pSVar3 = (__this->fields)._addonInstances;
    if (pSVar3 != (System_Collections_Generic_List_CustomLogicClassInstance__o *)0x0) {
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      pCVar4 = (pSVar3->fields)._items;
      if (pCVar4 != (CustomLogic_CustomLogicClassInstance_array *)0x0) {
        uVar2 = (pSVar3->fields)._size;
        if (uVar2 < (uint)pCVar4->max_length) {
          (pSVar3->fields)._size = uVar2 + 1;
          pCVar4->m_Items[(int)uVar2] = instance;
          Il2CppCodeGenWriteBarrier(pCVar4->m_Items + (int)uVar2);
          return;
        }
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)instance,
                   (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$OnNetworkTransfer
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__OnNetworkTransfer (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* oldOwner, CustomLogic_CustomLogicPlayerBuiltin_o* newOwner, const MethodInfo* method);
// 0x5a34b40
// eh: try 0x5a34c74..0x5a34fbe -> pad 0x5a34fd7 (+19 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5a34ffd..0x5a35002 -> pad 0x5a35025 cleanup
// eh: try 0x5a35028..0x5a35032 -> pad 0x5a3503a catch (...) [compiler noexcept guard]
// asm: 54 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a34c66: mov r15, rsp
// asm:   0x5a34c69: nop dword ptr [rax]
// asm:   0x5a34d41: lea rbp, [rip + 0x1858cf0]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
// asm:   0x5a34d48: mov r15, rsp
// asm:   0x5a34d4b: lea r13, [rip + 0x18af736]  ; "OnNetworkTransfer"
// asm:   0x5a34d52: nop word ptr cs:[rax + rax]
// asm:   0x5a34e0d: mov r14, rsp
// asm:   0x5a34e10: lea r13, [rip + 0x18af671]  ; "OnNetworkTransfer"
// asm:   0x5a34e17: nop word ptr [rax + rax]
// asm:   0x5a34ecd: lea r13, [rip + 0x1858b64]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
// asm:   0x5a34ed4: mov r14, rsp
// asm:   0x5a34ed7: lea r12, [rip + 0x183f7ca]  ; TypeInfo_object_array
// asm:   0x5a34ede: lea rbp, [rip + 0x18af5a3]  ; "OnNetworkTransfer"
// asm:   0x5a34ee5: nop word ptr cs:[rax + rax]
// asm:   0x5a34fc3: jmp 0x5a34fe5
// asm:   0x5a34fc5: jmp 0x5a34fe5
// asm:   0x5a34fc7: jmp 0x5a34fe5
// asm:   0x5a34fc9: jmp 0x5a34fe5
// asm:   0x5a34fcb: jmp 0x5a34fe5
// asm:   0x5a34fcd: jmp 0x5a34fe5
// asm:   0x5a34fcf: jmp 0x5a34fe5
// asm:   0x5a34fd1: jmp 0x5a34fe5
// asm:   0x5a34fd3: jmp 0x5a34fe5
// asm:   0x5a34fd5: jmp 0x5a34fe5
// asm:   0x5a34fd7: jmp 0x5a34fe5
// asm:   0x5a34fd9: jmp 0x5a34fe5
// asm:   0x5a34fdb: jmp 0x5a34fe5
// asm:   0x5a34fdd: jmp 0x5a34fe5
// asm:   0x5a34fdf: jmp 0x5a34fe5
// asm:   0x5a34fe1: jmp 0x5a34fe5
// asm:   0x5a34fe3: jmp 0x5a34fe5
// asm:   0x5a34fe5: mov rbx, rax
// asm:   0x5a34fe8: cmp edx, 1
// asm:   0x5a34feb: jne 0x5a35028
// asm:   0x5a34fed: mov rdi, rbx
// asm:   0x5a34ff0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5a34ff5: mov rbx, qword ptr [rax]
// asm:   0x5a34ff8: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5a34ffd: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5a35002: lea rax, [rip + 0x1858a27]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x5a35009: mov rsi, qword ptr [rax]
// asm:   0x5a3500c: mov rdi, rsp
// asm:   0x5a3500f: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5a35014: test rbx, rbx
// asm:   0x5a35017: je 0x5a34f7d
// asm:   0x5a3501d: mov rdi, rbx
// asm:   0x5a35020: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5a35025: mov rbx, rax
// asm:   0x5a35028: lea rdi, [rsp + 0x20]
// asm:   0x5a3502d: call 0x2fd5d00  ; il2cpp_runtime_helper_02fd5d00()
// asm:   0x5a35032: mov rdi, rbx
// asm:   0x5a35035: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5a3503a: mov rdi, rax
// asm:   0x5a3503d: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicNetworkViewBuiltin__OnNetworkTransfer
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,
               CustomLogic_CustomLogicPlayerBuiltin_o *oldOwner,
               CustomLogic_CustomLogicPlayerBuiltin_o *newOwner,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o *pSVar2;
  bool bVar3;
  System_Object_array *pSVar4;
  Il2CppObject *pIVar5;
  Il2CppObject *pIVar6;
  System_Collections_Generic_List_Enumerator_object__o SStack_68;
  undefined1 auStack_48 [16];
  CustomLogic_CustomLogicComponentInstance_o *pCStack_38;
  
  if (Il2CppMethodInitialized_07546102 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"OnNetworkTransfer");
    Il2CppMethodInitialized_07546102 = '\x01';
  }
  SStack_68.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  SStack_68.fields._index = 0;
  SStack_68.fields._version = 0;
  SStack_68.fields._current = (Il2CppObject *)0x0;
  pMVar1 = (__this->fields).MapObject;
  if (pMVar1 == (Map_MapObject_o *)0x0) {
label_05a34fbe:
    ThrowNullReferenceException();
  }
  x = (UnityEngine_Object_o *)(pMVar1->fields).GameObject;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    __this_00 = (__this->fields)._classInstances;
    if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0)
    goto label_05a34fbe;
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)auStack_48,
               (System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)
               MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    SStack_68.fields._current = (Il2CppObject *)pCStack_38;
    SStack_68.fields._list = (System_Collections_Generic_List_T__o *)auStack_48._0_8_;
    SStack_68.fields._index = auStack_48._8_4_;
    SStack_68.fields._version = auStack_48._12_4_;
    auStack_48._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    if (oldOwner == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
      auStack_48._8_8_ = &SStack_68;
      pSVar2 = &SStack_68;
      if (newOwner == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
        while (auStack_48._8_8_ = pSVar2,
              bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (&SStack_68,
                                 (MethodInfo_4C45C50 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                                ), pIVar6 = SStack_68.fields._current, bVar3) {
          pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
          if (pSVar4 == (System_Object_array *)0x0) goto label_05a34f96;
          if ((int)pSVar4->max_length == 0) goto label_05a34f9b;
          pSVar4->m_Items[0] = (Il2CppObject *)0x0;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
          if ((pSVar4->max_length & 0xfffffffe) == 0) goto label_05a34f8c;
          pSVar4->m_Items[1] = (Il2CppObject *)0x0;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1);
          if ((CustomLogic_CustomLogicComponentInstance_o *)pIVar6 ==
              (CustomLogic_CustomLogicComponentInstance_o *)0x0) goto label_05a34f91;
          CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                    ((CustomLogic_CustomLogicComponentInstance_o *)pIVar6,"OnNetworkTransfer",pSVar4,
                     (MethodInfo *)0x0);
          pSVar2 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_48._8_8_;
        }
      }
      else {
        while (bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 (&SStack_68,
                                  (MethodInfo_4C45C50 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                                 ), pIVar6 = SStack_68.fields._current, bVar3) {
          pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
          if (pSVar4 == (System_Object_array *)0x0) goto label_05a34f96;
          if ((int)pSVar4->max_length == 0) goto label_05a34f9b;
          pSVar4->m_Items[0] = (Il2CppObject *)0x0;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
          pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)newOwner,(((pSVar4->obj).klass)->_1).element_class)
          ;
          if (pIVar5 == (Il2CppObject *)0x0) goto label_05a34fa0;
          if ((pSVar4->max_length & 0xfffffffe) == 0) goto label_05a34f8c;
          pSVar4->m_Items[1] = (Il2CppObject *)newOwner;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1);
          if ((CustomLogic_CustomLogicComponentInstance_o *)pIVar6 ==
              (CustomLogic_CustomLogicComponentInstance_o *)0x0) goto label_05a34f91;
          CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                    ((CustomLogic_CustomLogicComponentInstance_o *)pIVar6,"OnNetworkTransfer",pSVar4,
                     (MethodInfo *)0x0);
        }
      }
    }
    else {
      auStack_48._8_8_ = &SStack_68;
      pSVar2 = &SStack_68;
      if (newOwner == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
        while (auStack_48._8_8_ = pSVar2,
              bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                (&SStack_68,
                                 (MethodInfo_4C45C50 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                                ), pIVar6 = SStack_68.fields._current, bVar3) {
          pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
          if (pSVar4 == (System_Object_array *)0x0) goto label_05a34f96;
          pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)oldOwner,(((pSVar4->obj).klass)->_1).element_class)
          ;
          if (pIVar5 == (Il2CppObject *)0x0) goto label_05a34faf;
          if ((int)pSVar4->max_length == 0) goto label_05a34f9b;
          pSVar4->m_Items[0] = (Il2CppObject *)oldOwner;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
          if ((pSVar4->max_length & 0xfffffffe) == 0) goto label_05a34f8c;
          pSVar4->m_Items[1] = (Il2CppObject *)0x0;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1);
          if ((CustomLogic_CustomLogicComponentInstance_o *)pIVar6 ==
              (CustomLogic_CustomLogicComponentInstance_o *)0x0) goto label_05a34f91;
          CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                    ((CustomLogic_CustomLogicComponentInstance_o *)pIVar6,"OnNetworkTransfer",pSVar4,
                     (MethodInfo *)0x0);
          pSVar2 = (System_Collections_Generic_List_Enumerator_object__o *)auStack_48._8_8_;
        }
      }
      else {
        while (bVar3 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                 (&SStack_68,
                                  (MethodInfo_4C45C50 *)
                                  MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                                 ), pIVar6 = SStack_68.fields._current, bVar3) {
          pSVar4 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
          if (pSVar4 == (System_Object_array *)0x0) {
label_05a34f96:
            ThrowNullReferenceException();
          }
          pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)oldOwner,(((pSVar4->obj).klass)->_1).element_class)
          ;
          if (pIVar5 == (Il2CppObject *)0x0) {
label_05a34faf:
            pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
          }
          if ((int)pSVar4->max_length == 0) {
label_05a34f9b:
            ThrowIndexOutOfRangeException();
          }
          pSVar4->m_Items[0] = (Il2CppObject *)oldOwner;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items);
          pIVar5 = il2cpp_vm_Object_IsInst((Il2CppObject *)newOwner,(((pSVar4->obj).klass)->_1).element_class)
          ;
          if (pIVar5 == (Il2CppObject *)0x0) {
label_05a34fa0:
            pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
          }
          if ((pSVar4->max_length & 0xfffffffe) == 0) {
label_05a34f8c:
            ThrowIndexOutOfRangeException();
          }
          pSVar4->m_Items[1] = (Il2CppObject *)newOwner;
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1);
          if ((CustomLogic_CustomLogicComponentInstance_o *)pIVar6 ==
              (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
label_05a34f91:
            ThrowNullReferenceException();
          }
          CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                    ((CustomLogic_CustomLogicComponentInstance_o *)pIVar6,"OnNetworkTransfer",pSVar4,
                     (MethodInfo *)0x0);
        }
      }
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              (&SStack_68,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
  }
  return;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$SetSyncDynamic
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__SetSyncDynamic (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, CustomLogic_CustomLogicPhotonSync_o* sync, const MethodInfo* method);
// 0x5a35050

void CustomLogic_CustomLogicNetworkViewBuiltin__SetSyncDynamic
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,CustomLogic_CustomLogicPhotonSync_o *sync,
               MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  Photon_Pun_PhotonView_o *pPVar2;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar3;
  
  if (Il2CppMethodInitialized_07546103 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    Il2CppMethodInitialized_07546103 = '\x01';
  }
  (__this->fields).Sync = sync;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Sync);
  if (sync != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
    pPVar2 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)sync,(MethodInfo *)0x0);
    if ((pPVar2 != (Photon_Pun_PhotonView_o *)0x0) &&
       (pPVar1 = (pPVar2->fields)._Owner_k__BackingField, pPVar1 != (Photon_Realtime_Player_o *)0x0)) {
      (__this->fields).OwnerId = (pPVar1->fields).actorNumber;
      __this_00 = (__this->fields).Sync;
      if (__this_00 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
        CustomLogic_CustomLogicPhotonSync__set_SyncTransforms
                  (__this_00,(__this->fields)._isTransformSynced,(MethodInfo *)0x0);
        if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
        }
        __this_01 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
        if (__this_01 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pCVar3 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                             (__this_01,(__this->fields).MapObject,(MethodInfo *)0x0);
          if (pCVar3 == (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
            return;
          }
          (pCVar3->fields)._NetworkView_k__BackingField = __this;
          Il2CppCodeGenWriteBarrier(&(pCVar3->fields)._NetworkView_k__BackingField);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$SetSync
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__SetSync (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, CustomLogic_CustomLogicPhotonSync_o* sync, const MethodInfo* method);
// 0x5a35130
// eh: try 0x5a35403..0x5a35638 -> pad 0x5a35640 (+10 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5a35662..0x5a35667 -> pad 0x5a3568a cleanup
// eh: try 0x5a3568d..0x5a35697 -> pad 0x5a3569f catch (...) [compiler noexcept guard]
// asm: 37 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a353f4: mov r12, rsp
// asm:   0x5a353f7: nop word ptr [rax + rax]
// asm:   0x5a354c9: mov r15, rsp
// asm:   0x5a354cc: lea r12, [rip + 0x18aefb5]  ; "OnNetworkTransfer"
// asm:   0x5a354d3: nop word ptr cs:[rax + rax]
// asm:   0x5a35638: jmp 0x5a3564a
// asm:   0x5a3563a: jmp 0x5a3564a
// asm:   0x5a3563c: jmp 0x5a3564a
// asm:   0x5a3563e: jmp 0x5a3564a
// asm:   0x5a35640: jmp 0x5a3564a
// asm:   0x5a35642: jmp 0x5a3564a
// asm:   0x5a35644: jmp 0x5a3564a
// asm:   0x5a35646: jmp 0x5a3564a
// asm:   0x5a35648: jmp 0x5a3564a
// asm:   0x5a3564a: mov rbx, rax
// asm:   0x5a3564d: cmp edx, 1
// asm:   0x5a35650: jne 0x5a3568d
// asm:   0x5a35652: mov rdi, rbx
// asm:   0x5a35655: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5a3565a: mov rbx, qword ptr [rax]
// asm:   0x5a3565d: mov qword ptr [rsp + 0x18], rbx
// asm:   0x5a35662: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5a35667: lea rax, [rip + 0x18583c2]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x5a3566e: mov rsi, qword ptr [rax]
// asm:   0x5a35671: mov rdi, rsp
// asm:   0x5a35674: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5a35679: test rbx, rbx
// asm:   0x5a3567c: je 0x5a3559f
// asm:   0x5a35682: mov rdi, rbx
// asm:   0x5a35685: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5a3568a: mov rbx, rax
// asm:   0x5a3568d: lea rdi, [rsp + 0x18]
// asm:   0x5a35692: call 0x2fd5d30  ; il2cpp_runtime_helper_02fd5d30()
// asm:   0x5a35697: mov rdi, rbx
// asm:   0x5a3569a: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5a3569f: mov rdi, rax
// asm:   0x5a356a2: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicNetworkViewBuiltin__SetSync
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,CustomLogic_CustomLogicPhotonSync_o *sync,
               MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o **targetAddress;
  int32_t id;
  CustomLogic_CustomLogicPhotonSync_o *pCVar1;
  Map_MapObject_o *pMVar2;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  CustomLogic_CustomLogicComponentInstance_o *pCVar3;
  undefined1 *puVar4;
  bool bVar5;
  Photon_Pun_PhotonView_o *pPVar6;
  Photon_Realtime_Player_o *pPVar7;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_02;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_03;
  System_Object_array *pSVar8;
  Il2CppObject *pIVar9;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar10;
  undefined1 local_68 [8];
  undefined1 *puStack_60;
  CustomLogic_CustomLogicComponentInstance_o *local_58;
  undefined1 local_50 [16];
  CustomLogic_CustomLogicComponentInstance_o *local_40;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *local_38;
  
  if (Il2CppMethodInitialized_07546104 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    il2cpp_codegen_initialize_runtime_metadata(&"OnNetworkTransfer");
    Il2CppMethodInitialized_07546104 = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  local_58 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  id = (__this->fields).OwnerId;
  targetAddress = &(__this->fields).Sync;
  (__this->fields).Sync = sync;
  Il2CppCodeGenWriteBarrier(targetAddress);
  if (((sync != (CustomLogic_CustomLogicPhotonSync_o *)0x0) &&
      (pPVar6 = Photon_Pun_MonoBehaviourPun__get_photonView
                          ((Photon_Pun_MonoBehaviourPun_o *)sync,(MethodInfo *)0x0),
      pPVar6 != (Photon_Pun_PhotonView_o *)0x0)) &&
     (pPVar7 = (pPVar6->fields)._Owner_k__BackingField, pPVar7 != (Photon_Realtime_Player_o *)0x0)) {
    (__this->fields).OwnerId = (pPVar7->fields).actorNumber;
    pCVar1 = (__this->fields).Sync;
    if (pCVar1 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
      CustomLogic_CustomLogicPhotonSync__set_SyncTransforms
                (pCVar1,(__this->fields)._isTransformSynced,(MethodInfo *)0x0);
      if (-1 < id) {
        if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
        }
        __this_02 = (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0;
        pPVar7 = Utility_Util__FindPlayerById(id,(MethodInfo *)0x0);
        if (pPVar7 != (Photon_Realtime_Player_o *)0x0) {
          __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
          if (Il2CppMethodInitialized_0754611e == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
            Il2CppMethodInitialized_0754611e = '\x01';
          }
          if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
          }
          CustomLogic_BuiltinClassInstance___ctor
                    ((CustomLogic_BuiltinClassInstance_o *)__this_02,(MethodInfo *)0x0);
          (__this_02->fields).Player = pPVar7;
          Il2CppCodeGenWriteBarrier(&(__this_02->fields).Player);
        }
        pCVar1 = *targetAddress;
        if ((pCVar1 == (CustomLogic_CustomLogicPhotonSync_o *)0x0) ||
           (pPVar6 = Photon_Pun_MonoBehaviourPun__get_photonView
                               ((Photon_Pun_MonoBehaviourPun_o *)pCVar1,(MethodInfo *)0x0),
           pPVar6 == (Photon_Pun_PhotonView_o *)0x0)) goto label_05a35624;
        pPVar7 = (pPVar6->fields)._Owner_k__BackingField;
        __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
        if (Il2CppMethodInitialized_0754611e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
          Il2CppMethodInitialized_0754611e = '\x01';
        }
        if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
        }
        CustomLogic_BuiltinClassInstance___ctor
                  ((CustomLogic_BuiltinClassInstance_o *)__this_03,(MethodInfo *)0x0);
        (__this_03->fields).Player = pPVar7;
        Il2CppCodeGenWriteBarrier(&(__this_03->fields).Player);
        pMVar2 = (__this->fields).MapObject;
        if (pMVar2 == (Map_MapObject_o *)0x0) goto label_05a35624;
        x = (UnityEngine_Object_o *)(pMVar2->fields).GameObject;
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar5) {
          __this_00 = (__this->fields)._classInstances;
          if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0)
          goto label_05a35624;
          local_38 = __this;
          System_Collections_Generic_List_object___GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_50,
                     (System_Collections_Generic_List_object__o *)__this_00,
                     (MethodInfo_395E050 *)
                     MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
          local_58 = local_40;
          local_68 = (undefined1  [8])local_50._0_8_;
          puStack_60 = (undefined1 *)local_50._8_8_;
          local_50._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
          local_50._8_8_ = local_68;
          puVar4 = local_68;
          if (__this_02 == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
            while (local_50._8_8_ = puVar4,
                  bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                    ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                                     (MethodInfo_4C45C50 *)
                                     MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                                    ), pCVar3 = local_58, bVar5) {
              pSVar8 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
              if (pSVar8 == (System_Object_array *)0x0) goto label_05a3561a;
              if ((int)pSVar8->max_length == 0) goto label_05a3561f;
              pSVar8->m_Items[0] = (Il2CppObject *)0x0;
              Il2CppCodeGenWriteBarrier(pSVar8->m_Items);
              pIVar9 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)__this_03,(((pSVar8->obj).klass)->_1).element_class);
              if (pIVar9 == (Il2CppObject *)0x0) goto label_05a35606;
              if ((pSVar8->max_length & 0xfffffffe) == 0) goto label_05a35615;
              pSVar8->m_Items[1] = (Il2CppObject *)__this_03;
              Il2CppCodeGenWriteBarrier(pSVar8->m_Items + 1);
              if (pCVar3 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) goto label_05a35601;
              CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                        (pCVar3,"OnNetworkTransfer",pSVar8,(MethodInfo *)0x0);
              puVar4 = (undefined1 *)local_50._8_8_;
            }
          }
          else {
            while (bVar5 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                     ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                                      (MethodInfo_4C45C50 *)
                                      MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                                     ), pCVar3 = local_58, bVar5) {
              pSVar8 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,2);
              if (pSVar8 == (System_Object_array *)0x0) {
label_05a3561a:
                ThrowNullReferenceException();
              }
              pIVar9 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)__this_02,(((pSVar8->obj).klass)->_1).element_class);
              if (pIVar9 == (Il2CppObject *)0x0) {
                pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
              }
              if ((int)pSVar8->max_length == 0) {
label_05a3561f:
                ThrowIndexOutOfRangeException();
              }
              pSVar8->m_Items[0] = (Il2CppObject *)__this_02;
              Il2CppCodeGenWriteBarrier(pSVar8->m_Items);
              pIVar9 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)__this_03,(((pSVar8->obj).klass)->_1).element_class);
              if (pIVar9 == (Il2CppObject *)0x0) {
label_05a35606:
                pIVar9 = il2cpp_codegen_get_array_type_mismatch_exception();
                il2cpp_codegen_raise_exception(pIVar9,(MethodInfo *)0x0);
              }
              if ((pSVar8->max_length & 0xfffffffe) == 0) {
label_05a35615:
                ThrowIndexOutOfRangeException();
              }
              pSVar8->m_Items[1] = (Il2CppObject *)__this_03;
              Il2CppCodeGenWriteBarrier(pSVar8->m_Items + 1);
              if (pCVar3 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
label_05a35601:
                ThrowNullReferenceException();
              }
              CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                        (pCVar3,"OnNetworkTransfer",pSVar8,(MethodInfo *)0x0);
            }
          }
          System_Collections_Generic_List_Enumerator_object___Dispose
                    ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                     (MethodInfo_4C45C40 *)
                     MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
                    );
          __this = local_38;
        }
      }
      if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
      }
      __this_01 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
      if (__this_01 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pCVar10 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                            (__this_01,(__this->fields).MapObject,(MethodInfo *)0x0);
        if (pCVar10 != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
          (pCVar10->fields)._NetworkView_k__BackingField = __this;
          Il2CppCodeGenWriteBarrier(&(pCVar10->fields)._NetworkView_k__BackingField);
        }
        return;
      }
    }
  }
label_05a35624:
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$SendNetworkStream
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__SendNetworkStream (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, Photon_Pun_PhotonStream_o* stream, const MethodInfo* method);
// 0x5a356b0
// eh: try 0x5a357c3..0x5a35836 -> pad 0x5a3583f (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5a35857..0x5a3585c -> pad 0x5a3587b cleanup
// eh: try 0x5a3587e..0x5a35888 -> pad 0x5a35890 catch (...) [compiler noexcept guard]
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a3583b: jmp 0x5a3583f
// asm:   0x5a3583d: jmp 0x5a3583f
// asm:   0x5a3583f: mov rbx, rax
// asm:   0x5a35842: cmp edx, 1
// asm:   0x5a35845: jne 0x5a3587e
// asm:   0x5a35847: mov rdi, rbx
// asm:   0x5a3584a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5a3584f: mov rbx, qword ptr [rax]
// asm:   0x5a35852: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5a35857: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5a3585c: lea rax, [rip + 0x18581cd]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x5a35863: mov rsi, qword ptr [rax]
// asm:   0x5a35866: mov rdi, rsp
// asm:   0x5a35869: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5a3586e: test rbx, rbx
// asm:   0x5a35871: je 0x5a357fa
// asm:   0x5a35873: mov rdi, rbx
// asm:   0x5a35876: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5a3587b: mov rbx, rax
// asm:   0x5a3587e: lea rdi, [rsp + 0x20]
// asm:   0x5a35883: call 0x2fd5d60  ; il2cpp_runtime_helper_02fd5d60()
// asm:   0x5a35888: mov rdi, rbx
// asm:   0x5a3588b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5a35890: mov rdi, rax
// asm:   0x5a35893: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicNetworkViewBuiltin__SendNetworkStream
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,Photon_Pun_PhotonStream_o *stream,
               MethodInfo *method)

{
  System_Collections_Generic_List_object__o **targetAddress;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  bool bVar1;
  System_Collections_Generic_List_object__o *pSVar2;
  System_Object_array *obj;
  System_Collections_Generic_List_Enumerator_T__o local_58;
  undefined8 local_38;
  undefined1 *local_30;
  
  if (Il2CppMethodInitialized_07546105 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_object);
    il2cpp_codegen_initialize_runtime_metadata(&"SendNetworkStream");
    Il2CppMethodInitialized_07546105 = '\x01';
  }
  local_58.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_object);
  System_Collections_Generic_List_object____ctor
            (pSVar2,(MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_object_ctor);
  targetAddress = &(__this->fields)._streamObjects;
  (__this->fields)._streamObjects = pSVar2;
  Il2CppCodeGenWriteBarrier(targetAddress);
  __this_00 = (__this->fields)._classInstances;
  if (__this_00 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              (&local_58,(System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)
               MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    local_38 = 0;
    local_30 = (undefined1 *)&local_58;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                        );
      if (!bVar1) break;
      if ((CustomLogic_CustomLogicComponentInstance_o *)local_58.fields._current ==
          (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
        ThrowNullReferenceException();
      }
      CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                ((CustomLogic_CustomLogicComponentInstance_o *)local_58.fields._current,"SendNetworkStream",
                 (System_Object_array *)0x0,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&local_58,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    pSVar2 = *targetAddress;
    if (pSVar2 != (System_Collections_Generic_List_object__o *)0x0) {
      obj = System_Collections_Generic_List_object___ToArray
                      (pSVar2,(MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_object_ToArray)
      ;
      if (stream != (Photon_Pun_PhotonStream_o *)0x0) {
        Photon_Pun_PhotonStream__SendNext(stream,&obj->obj,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$OnNetworkStream
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__OnNetworkStream (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, System_Object_array* objs, const MethodInfo* method);
// 0x5a358a0
// eh: try 0x5a359e3..0x5a35a28 -> pad 0x5a35a31 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5a35a49..0x5a35a4e -> pad 0x5a35a6d cleanup
// eh: try 0x5a35a70..0x5a35a7a -> pad 0x5a35a82 catch (...) [compiler noexcept guard]
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a359dd: nop dword ptr [rax]
// asm:   0x5a35a2d: jmp 0x5a35a31
// asm:   0x5a35a2f: jmp 0x5a35a31
// asm:   0x5a35a31: mov rbx, rax
// asm:   0x5a35a34: cmp edx, 1
// asm:   0x5a35a37: jne 0x5a35a70
// asm:   0x5a35a39: mov rdi, rbx
// asm:   0x5a35a3c: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5a35a41: mov rbx, qword ptr [rax]
// asm:   0x5a35a44: mov qword ptr [rsp + 0x20], rbx
// asm:   0x5a35a49: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5a35a4e: lea rax, [rip + 0x1857fdb]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x5a35a55: mov rsi, qword ptr [rax]
// asm:   0x5a35a58: mov rdi, rsp
// asm:   0x5a35a5b: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5a35a60: test rbx, rbx
// asm:   0x5a35a63: je 0x5a35a19
// asm:   0x5a35a65: mov rdi, rbx
// asm:   0x5a35a68: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5a35a6d: mov rbx, rax
// asm:   0x5a35a70: lea rdi, [rsp + 0x20]
// asm:   0x5a35a75: call 0x2fd5d90  ; il2cpp_runtime_helper_02fd5d90()
// asm:   0x5a35a7a: mov rdi, rbx
// asm:   0x5a35a7d: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5a35a82: mov rdi, rax
// asm:   0x5a35a85: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicNetworkViewBuiltin__OnNetworkStream
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,System_Object_array *objs,
               MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  bool bVar2;
  System_Collections_Generic_List_object__o *__this_01;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  undefined8 local_28;
  undefined1 *local_20;
  
  if (Il2CppMethodInitialized_07546106 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_object_ctor_7195bf0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"OnNetworkStream");
    Il2CppMethodInitialized_07546106 = '\x01';
  }
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_object);
  System_Collections_Generic_List_object____ctor_395ca70
            (__this_01,(System_Collections_Generic_IEnumerable_T__o *)objs,
             (MethodInfo_395CA70 *)MethodInfo_System_Collections_Generic_List_object_ctor_7195bf0);
  (__this->fields)._streamObjects = __this_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._streamObjects);
  pMVar1 = (__this->fields).MapObject;
  if (pMVar1 == (Map_MapObject_o *)0x0) {
label_05a35a28:
    ThrowNullReferenceException();
  }
  x = (UnityEngine_Object_o *)(pMVar1->fields).GameObject;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    __this_00 = (__this->fields)._classInstances;
    if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0)
    goto label_05a35a28;
    System_Collections_Generic_List_object___GetEnumerator
              (&local_48,(System_Collections_Generic_List_object__o *)__this_00,
               (MethodInfo_395E050 *)
               MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    local_28 = 0;
    local_20 = (undefined1 *)&local_48;
    while( true ) {
      bVar2 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
                         (MethodInfo_4C45C50 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                        );
      if (!bVar2) break;
      if ((CustomLogic_CustomLogicComponentInstance_o *)local_48.fields._current ==
          (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
        ThrowNullReferenceException();
      }
      CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                ((CustomLogic_CustomLogicComponentInstance_o *)local_48.fields._current,"OnNetworkStream",
                 (System_Object_array *)0x0,(MethodInfo *)0x0);
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)&local_48,
               (MethodInfo_4C45C40 *)
               MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
  }
  return;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$OnNetworkMessage
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__OnNetworkMessage (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* player, System_String_o* message, double sentServerTime, const MethodInfo* method);
// 0x5a35a90
// eh: try 0x5a35c5a..0x5a36084 -> pad 0x5a3609e (+27 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5a360b8..0x5a360bd -> pad 0x5a360dc cleanup
// eh: try 0x5a360df..0x5a360e9 -> pad 0x5a36153 catch (...) [compiler noexcept guard]
// eh: try 0x5a36114..0x5a36119 -> pad 0x5a3613e cleanup
// eh: try 0x5a36141..0x5a3614b -> pad 0x5a36153 catch (...) [compiler noexcept guard]
// asm: 68 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a35b94: jmp 0x5a35fe4
// asm:   0x5a35c4c: nop dword ptr [rax]
// asm:   0x5a35df0: lea rbp, [rip + 0x1857bf9]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicClassInstance_MoveNext
// asm:   0x5a35df7: nop word ptr [rax + rax]
// asm:   0x5a35e5c: jmp 0x5a35e00
// asm:   0x5a36084: jmp 0x5a360a0
// asm:   0x5a36086: jmp 0x5a360a0
// asm:   0x5a36088: jmp 0x5a360a0
// asm:   0x5a3608a: jmp 0x5a360a0
// asm:   0x5a3608c: jmp 0x5a360a0
// asm:   0x5a3608e: jmp 0x5a360a0
// asm:   0x5a36090: jmp 0x5a360a0
// asm:   0x5a36092: jmp 0x5a360a0
// asm:   0x5a36094: jmp 0x5a360a0
// asm:   0x5a36096: jmp 0x5a360a0
// asm:   0x5a36098: jmp 0x5a360fc
// asm:   0x5a3609a: jmp 0x5a360a0
// asm:   0x5a3609c: jmp 0x5a360a0
// asm:   0x5a3609e: jmp 0x5a360fc
// asm:   0x5a360a0: mov rbx, rax
// asm:   0x5a360a3: cmp edx, 1
// asm:   0x5a360a6: jne 0x5a360df
// asm:   0x5a360a8: mov rdi, rbx
// asm:   0x5a360ab: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5a360b0: mov rbx, qword ptr [rax]
// asm:   0x5a360b3: mov qword ptr [rsp + 8], rbx
// asm:   0x5a360b8: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5a360bd: lea rax, [rip + 0x1857924]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicClassInstance_Dispose
// asm:   0x5a360c4: mov rsi, qword ptr [rax]
// asm:   0x5a360c7: lea rdi, [rsp + 0x40]
// asm:   0x5a360cc: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5a360d1: test rbx, rbx
// asm:   0x5a360d4: je 0x5a35fe4
// asm:   0x5a360da: jmp 0x5a36136
// asm:   0x5a360dc: mov rbx, rax
// asm:   0x5a360df: lea rdi, [rsp + 8]
// asm:   0x5a360e4: call 0x2fd5df0  ; il2cpp_runtime_helper_02fd5df0()
// asm:   0x5a360e9: jmp 0x5a3614b
// asm:   0x5a360eb: jmp 0x5a360fc
// asm:   0x5a360ed: jmp 0x5a360fc
// asm:   0x5a360ef: jmp 0x5a360f3
// asm:   0x5a360f1: jmp 0x5a360f3
// asm:   0x5a360f3: mov rbx, rax
// asm:   0x5a360f6: mov r14, qword ptr [rsp]
// asm:   0x5a360fa: jmp 0x5a360ff
// asm:   0x5a360fc: mov rbx, rax
// asm:   0x5a360ff: cmp edx, 1
// asm:   0x5a36102: jne 0x5a36141
// asm:   0x5a36104: mov rdi, rbx
// asm:   0x5a36107: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5a3610c: mov rbx, qword ptr [rax]
// asm:   0x5a3610f: mov qword ptr [rsp + 8], rbx
// asm:   0x5a36114: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5a36119: lea rax, [rip + 0x1857910]  ; MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose
// asm:   0x5a36120: mov rsi, qword ptr [rax]
// asm:   0x5a36123: lea rdi, [rsp + 0x60]
// asm:   0x5a36128: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5a3612d: test rbx, rbx
// asm:   0x5a36130: je 0x5a35d9d
// asm:   0x5a36136: mov rdi, rbx
// asm:   0x5a36139: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5a3613e: mov rbx, rax
// asm:   0x5a36141: lea rdi, [rsp + 8]
// asm:   0x5a36146: call 0x2fd5dc0  ; il2cpp_runtime_helper_02fd5dc0()
// asm:   0x5a3614b: mov rdi, rbx
// asm:   0x5a3614e: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5a36153: mov rdi, rax
// asm:   0x5a36156: call 0x2ab61e0  ; __clang_call_terminate()

void CustomLogic_CustomLogicNetworkViewBuiltin__OnNetworkMessage
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,
               CustomLogic_CustomLogicPlayerBuiltin_o *player,System_String_o *message,double sentServerTime,
               MethodInfo *method)

{
  CustomLogic_CustomLogicEvaluator_o *pCVar1;
  Map_MapObject_o *pMVar2;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  System_Collections_Generic_List_CustomLogicClassInstance__o *__this_01;
  CustomLogic_CustomLogicComponentInstance_o *pCVar3;
  bool bVar4;
  System_Object_array *pSVar5;
  Il2CppObject *pIVar6;
  Il2CppObject *pIVar7;
  undefined1 local_a0 [16];
  CustomLogic_CustomLogicComponentInstance_o *local_90;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *local_88;
  CustomLogic_CustomLogicPlayerBuiltin_o *local_80;
  double local_78;
  double local_70;
  undefined1 local_68 [8];
  undefined8 uStack_60;
  CustomLogic_CustomLogicComponentInstance_o *local_58;
  undefined1 local_48 [8];
  System_Collections_Generic_List_Enumerator_object__o *pSStack_40;
  CustomLogic_CustomLogicComponentInstance_o *local_38;
  
  local_88 = __this;
  local_70 = sentServerTime;
  if (Il2CppMethodInitialized_07546107 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicClassInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicClassInstance_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_get_Current
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicClassInstance_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"OnNetworkMessage");
    Il2CppMethodInitialized_07546107 = '\x01';
  }
  local_48 = (undefined1  [8])0x0;
  pSStack_40 = (System_Collections_Generic_List_Enumerator_object__o *)0x0;
  local_38 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  local_68 = (undefined1  [8])0x0;
  uStack_60._0_4_ = 0;
  uStack_60._4_4_ = 0;
  local_58 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
    pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  else {
    pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
  }
  if (pCVar1 == (CustomLogic_CustomLogicEvaluator_o *)0x0) {
    return;
  }
  pMVar2 = (local_88->fields).MapObject;
  if (pMVar2 != (Map_MapObject_o *)0x0) {
    x = (UnityEngine_Object_o *)(pMVar2->fields).GameObject;
    if ((((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      return;
    }
    __this_00 = (local_88->fields)._classInstances;
    if (__this_00 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
      System_Collections_Generic_List_object___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_a0,
                 (System_Collections_Generic_List_object__o *)__this_00,
                 (MethodInfo_395E050 *)
                 MethodInfo_System_Collections_Generic_List_CustomLogicComponentInstance_GetEnumerator);
      local_38 = local_90;
      local_48 = (undefined1  [8])local_a0._0_8_;
      pSStack_40 = (System_Collections_Generic_List_Enumerator_object__o *)local_a0._8_8_;
      local_a0._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_a0._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_48;
      local_80 = player;
      while (bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                               ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                                (MethodInfo_4C45C50 *)
                                MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_MoveNext
                               ), pCVar3 = local_38, bVar4) {
        pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
        if (pSVar5 == (System_Object_array *)0x0) {
          ThrowNullReferenceException();
        }
        if ((player != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) &&
           (pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)player,(((pSVar5->obj).klass)->_1).element_class)
           , pIVar6 == (Il2CppObject *)0x0)) {
          pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
        }
        if ((int)pSVar5->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        pSVar5->m_Items[0] = (Il2CppObject *)player;
        Il2CppCodeGenWriteBarrier(pSVar5->m_Items);
        if ((message != (System_String_o *)0x0) &&
           (pIVar6 = il2cpp_vm_Object_IsInst
                               ((Il2CppObject *)message,(((pSVar5->obj).klass)->_1).element_class),
           pIVar6 == (Il2CppObject *)0x0)) {
          pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
        }
        if ((pSVar5->max_length & 0xfffffffe) == 0) {
          ThrowIndexOutOfRangeException();
        }
        pSVar5->m_Items[1] = (Il2CppObject *)message;
        Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 1);
        local_78 = local_70;
        pIVar6 = il2cpp_vm_Object_Box(g_data_07556748,&local_78);
        if ((pIVar6 != (Il2CppObject *)0x0) &&
           (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
           pIVar7 == (Il2CppObject *)0x0)) {
          pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
        }
        if ((uint)pSVar5->max_length < 3) {
          ThrowIndexOutOfRangeException();
        }
        pSVar5->m_Items[2] = pIVar6;
        Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 2);
        if (pCVar3 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
          ThrowNullReferenceException();
        }
        CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                  (pCVar3,"OnNetworkMessage",pSVar5,(MethodInfo *)0x0);
      }
      System_Collections_Generic_List_Enumerator_object___Dispose
                ((System_Collections_Generic_List_Enumerator_object__o *)local_48,
                 (MethodInfo_4C45C40 *)
                 MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicComponentInstance_Dispose);
      __this_01 = (local_88->fields)._addonInstances;
      if (__this_01 != (System_Collections_Generic_List_CustomLogicClassInstance__o *)0x0) {
        System_Collections_Generic_List_object___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_a0,
                   (System_Collections_Generic_List_object__o *)__this_01,
                   (MethodInfo_395E050 *)
                   MethodInfo_System_Collections_Generic_List_CustomLogicClassInstance_GetEnumerator);
        local_58 = local_90;
        local_68 = (undefined1  [8])local_a0._0_8_;
        uStack_60 = (System_Collections_Generic_List_Enumerator_object__o *)local_a0._8_8_;
        local_a0._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
        local_a0._8_8_ = (System_Collections_Generic_List_Enumerator_object__o *)local_68;
        while( true ) {
          do {
            do {
              bVar4 = System_Collections_Generic_List_Enumerator_object___MoveNext
                                ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                                 (MethodInfo_4C45C50 *)
                                 MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicClassInstance_MoveNext
                                );
              pCVar3 = local_58;
              if (!bVar4) {
                System_Collections_Generic_List_Enumerator_object___Dispose
                          ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                           (MethodInfo_4C45C40 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_CustomLogicClassInstance_Dispose
                          );
                return;
              }
              if (local_58 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
                ThrowNullReferenceException();
              }
              bVar4 = (*(local_58->klass->vtable)._4_get_Enabled.methodPtr)
                                (local_58,(local_58->klass->vtable)._4_get_Enabled.method);
            } while (!bVar4);
            if ((TypeInfo_CustomLogic_CustomLogicManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicManager);
              pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
            }
            else {
              pCVar1 = TypeInfo_CustomLogic_CustomLogicManager->static_fields->Evaluator;
            }
          } while ((pCVar1 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
                  (bVar4 = CustomLogic_CustomLogicEvaluator__HasMethod
                                     (pCVar1,(CustomLogic_CustomLogicClassInstance_o *)pCVar3,
                                      "OnNetworkMessage",(MethodInfo *)0x0), !bVar4));
          pSVar5 = (System_Object_array *)SZArrayNew(TypeInfo_object_array,3);
          if (pSVar5 == (System_Object_array *)0x0) {
            ThrowNullReferenceException();
          }
          if ((local_80 != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) &&
             (pIVar6 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)local_80,(((pSVar5->obj).klass)->_1).element_class),
             pIVar6 == (Il2CppObject *)0x0)) {
            pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
          }
          if ((int)pSVar5->max_length == 0) {
            ThrowIndexOutOfRangeException();
          }
          pSVar5->m_Items[0] = (Il2CppObject *)local_80;
          Il2CppCodeGenWriteBarrier(pSVar5->m_Items);
          if ((message != (System_String_o *)0x0) &&
             (pIVar6 = il2cpp_vm_Object_IsInst
                                 ((Il2CppObject *)message,(((pSVar5->obj).klass)->_1).element_class),
             pIVar6 == (Il2CppObject *)0x0)) {
            pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
            il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
          }
          if ((pSVar5->max_length & 0xfffffffe) == 0) {
            ThrowIndexOutOfRangeException();
          }
          pSVar5->m_Items[1] = (Il2CppObject *)message;
          Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 1);
          local_78 = local_70;
          pIVar6 = il2cpp_vm_Object_Box(g_data_07556748,&local_78);
          if ((pIVar6 != (Il2CppObject *)0x0) &&
             (pIVar7 = il2cpp_vm_Object_IsInst(pIVar6,(((pSVar5->obj).klass)->_1).element_class),
             pIVar7 == (Il2CppObject *)0x0)) break;
          if ((uint)pSVar5->max_length < 3) {
            ThrowIndexOutOfRangeException();
          }
          pSVar5->m_Items[2] = pIVar6;
          Il2CppCodeGenWriteBarrier(pSVar5->m_Items + 2);
          CustomLogic_CustomLogicEvaluator__EvaluateMethod
                    (pCVar1,(CustomLogic_CustomLogicClassInstance_o *)pCVar3,"OnNetworkMessage",pSVar5,0,
                     (MethodInfo *)0x0);
        }
        pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$Transfer
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__Transfer (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* player, const MethodInfo* method);
// 0x5a36160

void CustomLogic_CustomLogicNetworkViewBuiltin__Transfer
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,
               CustomLogic_CustomLogicPlayerBuiltin_o *player,MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o *pCVar1;
  Photon_Pun_PhotonView_o *pPVar2;
  
  pCVar1 = (__this->fields).Sync;
  if (pCVar1 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
    pPVar2 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)pCVar1,(MethodInfo *)0x0);
    if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
      if ((pPVar2->fields)._IsMine_k__BackingField == false) {
        return;
      }
      pCVar1 = (__this->fields).Sync;
      if (pCVar1 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
        CustomLogic_CustomLogicPhotonSync__Transfer(pCVar1,player,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$SendMessage
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__SendMessage (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* target, System_String_o* msg, const MethodInfo* method);
// 0x5a361b0

void CustomLogic_CustomLogicNetworkViewBuiltin__SendMessage
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,
               CustomLogic_CustomLogicPlayerBuiltin_o *target,System_String_o *msg,MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  
  if ((target == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) ||
     (__this_00 = (__this->fields).Sync, __this_00 == (CustomLogic_CustomLogicPhotonSync_o *)0x0)) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicPhotonSync__SendMessage(__this_00,(target->fields).Player,msg,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$SendMessageAll
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__SendMessageAll (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, System_String_o* msg, const MethodInfo* method);
// 0x5a361d0

void CustomLogic_CustomLogicNetworkViewBuiltin__SendMessageAll
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,System_String_o *msg,MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  
  __this_00 = (__this->fields).Sync;
  if (__this_00 == (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicPhotonSync__SendMessageAll(__this_00,msg,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$SendMessageOthers
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__SendMessageOthers (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, System_String_o* msg, const MethodInfo* method);
// 0x5a361f0

void CustomLogic_CustomLogicNetworkViewBuiltin__SendMessageOthers
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,System_String_o *msg,MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  
  __this_00 = (__this->fields).Sync;
  if (__this_00 == (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
    ThrowNullReferenceException();
  }
  CustomLogic_CustomLogicPhotonSync__SendMessageOthers(__this_00,msg,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$SendStream
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__SendStream (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x5a36210

void CustomLogic_CustomLogicNetworkViewBuiltin__SendStream
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,Il2CppObject *obj,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar3;
  Il2CppObject *item;
  MethodInfo *pMVar4;
  
  pMVar4 = (MethodInfo *)obj;
  if (Il2CppMethodInitialized_07546108 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    Il2CppMethodInitialized_07546108 = '\x01';
  }
  item = CustomLogic_CustomLogicNetworkViewBuiltin__SerializeStreamObj(obj,pMVar4);
  pMVar4 = MethodInfo_System_Collections_Generic_List_object_Add;
  __this_00 = (__this->fields)._streamObjects;
  if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (__this_00->fields)._items;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar2 = (__this_00->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this_00->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = item;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
        return;
      }
      System_Collections_Generic_List_object___AddWithResize
                (__this_00,item,(MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$ReceiveStream
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin__ReceiveStream (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, const MethodInfo* method);
// 0x5a363b0

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin__ReceiveStream
          (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *pSVar1;
  Il2CppObject *pIVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07546109 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_RemoveAt);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_get_Item);
    Il2CppMethodInitialized_07546109 = '\x01';
  }
  pSVar1 = (__this->fields)._streamObjects;
  if (pSVar1 != (System_Collections_Generic_List_object__o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    pIVar2 = System_Collections_Generic_List_object___get_Item
                       (pSVar1,0,(MethodInfo_395CF20 *)
                                 MethodInfo_System_Collections_Generic_List_object_get_Item);
    pIVar2 = CustomLogic_CustomLogicNetworkViewBuiltin__DeserializeStreamObj(pIVar2,method_00);
    pSVar1 = (__this->fields)._streamObjects;
    if (pSVar1 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List_object___RemoveAt
                (pSVar1,0,(MethodInfo_395F100 *)MethodInfo_System_Collections_Generic_List_object_RemoveAt);
      return pIVar2;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$SerializeStreamObj
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin__SerializeStreamObj (Il2CppObject* obj, const MethodInfo* method);
// 0x5a362b0

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin__SerializeStreamObj(Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Il2CppClass *pIVar3;
  UnityEngine_Quaternion_c **ppUVar4;
  Il2CppObject *pIVar5;
  Il2CppClass *local_18;
  void *pvStack_10;
  
  if (Il2CppMethodInitialized_0754610a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0754610a = '\x01';
  }
  if (obj == (Il2CppObject *)0x0) {
    return (Il2CppObject *)0x0;
  }
  pIVar3 = obj->klass;
  bVar1 = (pIVar3->_2).typeHierarchyDepth;
  bVar2 = (TypeInfo_CustomLogic_CustomLogicVector3Builtin->_2).typeHierarchyDepth;
  if ((bVar1 < bVar2) ||
     ((pIVar3->_2).typeHierarchy[(ulong)bVar2 - 1] !=
      (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin)) {
    bVar2 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin->_2).typeHierarchyDepth;
    if ((bVar1 < bVar2) ||
       ((pIVar3->_2).typeHierarchy[(ulong)bVar2 - 1] !=
        (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin)) {
      return obj;
    }
    local_18 = obj[3].klass;
    pvStack_10 = obj[3].monitor;
    ppUVar4 = &TypeInfo_UnityEngine_Quaternion;
  }
  else {
    pvStack_10 = (void *)CONCAT44(pvStack_10._4_4_,*(undefined4 *)&obj[3].monitor);
    local_18 = obj[3].klass;
    ppUVar4 = (UnityEngine_Quaternion_c **)&TypeInfo_UnityEngine_Vector3;
  }
  pIVar5 = il2cpp_vm_Object_Box((Il2CppClass *)*ppUVar4,&local_18);
  return pIVar5;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$DeserializeStreamObj
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin__DeserializeStreamObj (Il2CppObject* obj, const MethodInfo* method);
// 0x5a36430
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5a36538: mov rbx, r14

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin__DeserializeStreamObj(Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this;
  UnityEngine_Quaternion_Fields *pUVar3;
  UnityEngine_Vector3_Fields *pUVar4;
  
  if (Il2CppMethodInitialized_0754610b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicVector3Builtin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Quaternion);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector3);
    Il2CppMethodInitialized_0754610b = '\x01';
  }
  if (obj == (Il2CppObject *)0x0) {
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0;
  }
  else {
    pIVar2 = obj->klass;
    if (pIVar2 == (Il2CppClass *)TypeInfo_UnityEngine_Vector3) {
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicVector3Builtin);
      if ((obj->klass->_1).element_class != (TypeInfo_UnityEngine_Vector3->_1).element_class)
      goto label_05a36544;
      pUVar4 = il2cpp_vm_Object_Unbox(obj);
      CustomLogic_CustomLogicVector3Builtin___ctor_58df850
                ((CustomLogic_CustomLogicVector3Builtin_o *)__this,(UnityEngine_Vector3_o)*pUVar4,
                 (MethodInfo *)0x0);
    }
    else {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin->_2).typeHierarchyDepth;
      if ((pIVar2->_2).typeHierarchyDepth < bVar1) {
        return obj;
      }
      if ((pIVar2->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin) {
        return obj;
      }
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicQuaternionBuiltin);
      if ((obj->klass->_1).element_class != (TypeInfo_UnityEngine_Quaternion->_1).element_class) {
label_05a36544:
        il2cpp_codegen_raise_invalid_cast_exception(obj);
      }
      pUVar3 = il2cpp_vm_Object_Unbox(obj);
      CustomLogic_CustomLogicQuaternionBuiltin___ctor_58b4df0
                (__this,(UnityEngine_Quaternion_o)*pUVar3,(MethodInfo *)0x0);
    }
  }
  return (Il2CppObject *)__this;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicNetworkViewBuiltin__get_ClassName (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, const MethodInfo* method);
// 0x5a36550

System_String_o *
CustomLogic_CustomLogicNetworkViewBuiltin__get_ClassName
          (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754610c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"NetworkView");
    Il2CppMethodInitialized_0754610c = '\x01';
  }
  return "NetworkView";
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicNetworkViewBuiltin__get_IsAbstract (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, const MethodInfo* method);
// 0x5a36580

bool CustomLogic_CustomLogicNetworkViewBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicNetworkViewBuiltin__get_IsStatic (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, const MethodInfo* method);
// 0x5a36590

bool CustomLogic_CustomLogicNetworkViewBuiltin__get_IsStatic
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,MethodInfo *method)

{
  return false;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicNetworkViewBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, const MethodInfo* method);
// 0x5a365a0

bool CustomLogic_CustomLogicNetworkViewBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


