// Type: CustomLogic.CustomLogicNetworkBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/CustomLogic/CustomLogicNetworkBuiltin.cs
// Prior real C# source (older reference): Assets/Scripts/CustomLogic/Builtin/CustomLogicNetworkBuiltin.cs
// --------------------------------

// CustomLogic.CustomLogicNetworkBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicNetworkBuiltin_o* CustomLogic_CustomLogicNetworkBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x5aecab0

CustomLogic_CustomLogicNetworkBuiltin_o *
CustomLogic_CustomLogicNetworkBuiltin_Factory__CreateInstance(System_Object_array *args,MethodInfo *method)

{
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  Il2CppClass *klass;
  System_ArgumentException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int32_t local_14;
  
  if (Il2CppMethodInitialized_07546e86 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNetworkBuiltin);
    Il2CppMethodInitialized_07546e86 = '\x01';
  }
  if (args == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if (args->max_length != 0) {
    NullCheck(args);
    pSVar1 = System_Int32__ToString(&local_14,(MethodInfo *)0x0);
    str0 = il2cpp_codegen_get_runtime_metadata(&"No CustomLogicNetworkBuiltin constructor found that takes ");
    str2 = il2cpp_codegen_get_runtime_metadata(&" arguments");
    pSVar1 = System_String__Concat_5301f10(str0,pSVar1,str2,(MethodInfo *)0x0);
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_codegen_object_new(klass);
    System_ArgumentException___ctor_54186d0(__this_00,pSVar1,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Factory_CreateInstance);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  __this = (CustomLogic_BuiltinClassInstance_o *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin);
  if (Il2CppMethodInitialized_07546e77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546e77 = '\x01';
  }
  if ((TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
  }
  CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
  return (CustomLogic_CustomLogicNetworkBuiltin_o *)__this;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicNetworkBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x5aee2c0

void CustomLogic_CustomLogicNetworkBuiltin_Bindings___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07546e9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
    Il2CppMethodInitialized_07546e9c = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c)
  ;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9 =
       (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields->__9);
  return;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicNetworkBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x5aee330

void CustomLogic_CustomLogicNetworkBuiltin_Bindings___c___ctor
               (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$<__CreateMethodBinding__SendMessage>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__SendMessage_b__9_0 (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5aee340

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__SendMessage_b__9_0
          (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicPlayerBuiltin_o *player;
  System_String_o *message;
  
  if (Il2CppMethodInitialized_07546e9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546e9d = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    player = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)
                            MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_CustomLogicPlayerBuiltin);
    if ((__a->max_length & 0xfffffffe) != 0) {
      message = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                          (__a->m_Items[1],
                           (MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
      ;
      CustomLogic_CustomLogicNetworkBuiltin__SendMessage(player,message,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$<__CreateMethodBinding__SendMessageAll>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__SendMessageAll_b__10_0 (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5aee400

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__SendMessageAll_b__10_0
          (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *message;
  
  if (Il2CppMethodInitialized_07546e9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546e9e = '\x01';
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
  message = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
  ;
  CustomLogic_CustomLogicNetworkBuiltin__SendMessageAll(message,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$<__CreateMethodBinding__SendMessageOthers>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__SendMessageOthers_b__11_0 (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5aee480

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__SendMessageOthers_b__11_0
          (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *message;
  
  if (Il2CppMethodInitialized_07546e9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546e9f = '\x01';
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
  message = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                      (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string)
  ;
  CustomLogic_CustomLogicNetworkBuiltin__SendMessageOthers(message,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindPlayer>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__FindPlayer_b__12_0 (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5aee500

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__FindPlayer_b__12_0
          (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t id;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCVar1;
  
  if (Il2CppMethodInitialized_07546ea0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546ea0 = '\x01';
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
                 (obj,(MethodInfo_34BDC20 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_int);
  pCVar1 = CustomLogic_CustomLogicNetworkBuiltin__FindPlayer(id,(MethodInfo *)0x0);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetTimestampDifference>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__GetTimestampDifference_b__13_0 (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5aee580

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__GetTimestampDifference_b__13_0
          (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  double timestamp1;
  double timestamp2;
  double dStack_20;
  
  if (Il2CppMethodInitialized_07546ea1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_double);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    Il2CppMethodInitialized_07546ea1 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    timestamp1 = CustomLogic_CustomLogicEvaluator__ConvertTo_double_
                           (pIVar1,(MethodInfo_34BDA40 *)
                                   MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_double);
    if ((__a->max_length & 0xfffffffe) != 0) {
      timestamp2 = CustomLogic_CustomLogicEvaluator__ConvertTo_double_
                             (__a->m_Items[1],
                              (MethodInfo_34BDA40 *)
                              MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_double);
      dStack_20 = CustomLogic_CustomLogicNetworkBuiltin__GetTimestampDifference
                            (timestamp1,timestamp2,(MethodInfo *)0x0);
      pIVar1 = il2cpp_vm_Object_Box(g_data_07556748,&dStack_20);
      return pIVar1;
    }
  }
  ThrowIndexOutOfRangeException();
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$<__CreateMethodBinding__KickPlayer>b__14_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__KickPlayer_b__14_0 (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x5aee650

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__KickPlayer_b__14_0
          (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *target;
  Il2CppObject *obj;
  System_String_o *reason;
  
  if (Il2CppMethodInitialized_07546ea2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_07546ea2 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
    ThrowNullReferenceException();
  }
  iVar1 = (int)__a->max_length;
  if (iVar1 == 0) {
    ThrowIndexOutOfRangeException();
  }
  target = __a->m_Items[0];
  if (iVar1 < 2) {
    reason = ".";
  }
  else {
    obj = __a->m_Items[1];
    if ((TypeInfo_CustomLogic_CustomLogicEvaluator->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicEvaluator);
    }
    reason = CustomLogic_CustomLogicEvaluator__ConvertTo_object_
                       (obj,(MethodInfo_34BDE00 *)MethodInfo_CustomLogic_CustomLogicEvaluator_ConvertTo_string
                       );
  }
  CustomLogic_CustomLogicNetworkBuiltin__KickPlayer(target,reason,(MethodInfo *)0x0);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicNetworkBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x5aecbd0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings__CreateMemberBinding(System_String_o *name,MethodInfo *method)

{
  bool bVar1;
  uint32_t uVar2;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *pCVar3;
  CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *pCVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  Il2CppClass *klass;
  System_Exception_o *__this;
  MethodInfo *lastManagedFrame;
  CustomLogic_CustomLogicNetworkBuiltin_Bindings_c *pCVar6;
  
  if (Il2CppMethodInitialized_07546e87 == '\0') {
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
    Il2CppMethodInitialized_07546e87 = '\x01';
  }
  uVar2 = _PrivateImplementationDetails___ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar2 < 0x34be13e5) {
    if (uVar2 < 0x18dd36aa) {
      if (uVar2 == 0x6bf1664) {
        bVar1 = System_String__op_Equality(name,"IsSingleplayer",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__IsSingleplayer
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__IsSingleplayer
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
      else if (uVar2 == 0x121de31d) {
        bVar1 = System_String__op_Equality(name,"SendMessageAll",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
            pCVar4 = CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__SendMessageAll
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar4;
          }
          pCVar4 = CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__SendMessageAll
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
      }
      else if (uVar2 == 0x18dd36a9) {
        bVar1 = System_String__op_Equality(name,"Players",(MethodInfo *)0x0);
        if (bVar1) {
          if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
            pCVar6 = TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings;
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
            pCVar3 = CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__Players
                               ((MethodInfo *)pCVar6);
            return (CustomLogic_ICLMemberBinding_o *)pCVar3;
          }
          pCVar3 = CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__Players
                             ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
      }
    }
    else if (uVar2 == 0x20e62364) {
      bVar1 = System_String__op_Equality(name,"NetworkTime",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__NetworkTime
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__NetworkTime
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x3442c773) {
      bVar1 = System_String__op_Equality(name,"FindPlayer",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
          pCVar4 = CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__FindPlayer
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
        pCVar4 = CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__FindPlayer
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0x34be13e4) {
      bVar1 = System_String__op_Equality(name,"MasterClient",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__MasterClient
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__MasterClient
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
  }
  else if (uVar2 < 0x5a740463) {
    if (uVar2 == 0x396d88cd) {
      bVar1 = System_String__op_Equality(name,"SendMessageOthers",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
          pCVar4 = CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__SendMessageOthers
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
        pCVar4 = CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__SendMessageOthers
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
    else if (uVar2 == 0x396f5fc2) {
      bVar1 = System_String__op_Equality(name,"MyPlayer",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
          pCVar3 = CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__MyPlayer
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar3;
        }
        pCVar3 = CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__MyPlayer
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x5a740462) {
      bVar1 = System_String__op_Equality(name,"GetTimestampDifference",(MethodInfo *)0x0);
      if (bVar1) {
        if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          pCVar6 = TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings;
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
          pCVar4 = CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__GetTimestampDifference
                             ((MethodInfo *)pCVar6);
          return (CustomLogic_ICLMemberBinding_o *)pCVar4;
        }
        pCVar4 = CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__GetTimestampDifference
                           ((MethodInfo *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 < 0x67ac82cf) {
    if (uVar2 == 0x603b3854) {
      bVar1 = System_String__op_Equality(name,"IsMasterClient",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
        }
        pCVar3 = CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__IsMasterClient
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar3;
      }
    }
    else if (uVar2 == 0x67ac82ce) {
      bVar1 = System_String__op_Equality(name,"SendMessage",(MethodInfo *)0x0);
      if (bVar1) {
        pCVar6 = TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings;
        if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
        }
        pCVar4 = CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__SendMessage
                           ((MethodInfo *)pCVar6);
        return (CustomLogic_ICLMemberBinding_o *)pCVar4;
      }
    }
  }
  else if (uVar2 == 0xce859b1e) {
    bVar1 = System_String__op_Equality(name,"KickPlayer",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
      }
      pCVar4 = CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__KickPlayer
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar4;
    }
  }
  else if (uVar2 == 0x7fb7f0a9) {
    bVar1 = System_String__op_Equality(name,"Ping",(MethodInfo *)0x0);
    if (bVar1) {
      pCVar6 = TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings;
      if ((TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings);
      }
      pCVar3 = CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__Ping
                         ((MethodInfo *)pCVar6);
      return (CustomLogic_ICLMemberBinding_o *)pCVar3;
    }
  }
  pSVar5 = il2cpp_codegen_get_runtime_metadata(&"Binding for '");
  str2 = il2cpp_codegen_get_runtime_metadata(&"' in CustomLogicNetworkBuiltin not found");
  pSVar5 = System_String__Concat_5301f10(pSVar5,name,str2,(MethodInfo *)0x0);
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
  __this = (System_Exception_o *)il2cpp_codegen_object_new(klass);
  System_Exception___ctor_54fa440(__this,pSVar5,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_CreateMemberBinding);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreatePropertyBinding__IsMasterClient
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__IsMasterClient (const MethodInfo* method);
// 0x5aed190

CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__IsMasterClient(MethodInfo *method)

{
  System_Func_CustomLogicNetworkBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e88 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__IsMasterClient_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
    Il2CppMethodInitialized_07546e88 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__IsMasterClient_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreatePropertyBinding__IsSingleplayer
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__IsSingleplayer (const MethodInfo* method);
// 0x5aed230

CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__IsSingleplayer(MethodInfo *method)

{
  System_Func_CustomLogicNetworkBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e89 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__IsSingleplayer_g____gett
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
    Il2CppMethodInitialized_07546e89 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__IsSingleplayer_g____gett
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreatePropertyBinding__Players
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__Players (const MethodInfo* method);
// 0x5aed2d0

CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__Players(MethodInfo *method)

{
  System_Func_CustomLogicNetworkBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e8a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__Players_g____getter_4_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
    Il2CppMethodInitialized_07546e8a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__Players_g____getter_4_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreatePropertyBinding__MasterClient
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__MasterClient (const MethodInfo* method);
// 0x5aed370

CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__MasterClient(MethodInfo *method)

{
  System_Func_CustomLogicNetworkBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e8b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__MasterClient_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
    Il2CppMethodInitialized_07546e8b = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__MasterClient_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreatePropertyBinding__MyPlayer
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__MyPlayer (const MethodInfo* method);
// 0x5aed410

CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__MyPlayer(MethodInfo *method)

{
  System_Func_CustomLogicNetworkBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e8c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__MyPlayer_g____getter_6_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
    Il2CppMethodInitialized_07546e8c = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__MyPlayer_g____getter_6_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreatePropertyBinding__NetworkTime
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__NetworkTime (const MethodInfo* method);
// 0x5aed4b0

CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__NetworkTime(MethodInfo *method)

{
  System_Func_CustomLogicNetworkBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e8d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__NetworkTime_g____getter
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
    Il2CppMethodInitialized_07546e8d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__NetworkTime_g____getter
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreatePropertyBinding__Ping
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__Ping (const MethodInfo* method);
// 0x5aed550

CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__Ping(MethodInfo *method)

{
  System_Func_CustomLogicNetworkBuiltin__object__o *__this;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e8e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__Ping_g____getter_8_0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
    Il2CppMethodInitialized_07546e8e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkBuiltin_object);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this,(Il2CppObject *)0x0,
             (intptr_t)
             MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings___CreatePropertyBinding__Ping_g____getter_8_0
             ,(MethodInfo_4F19B50 *)0x0);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLPropertyBinding_object____ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this_00,(System_Func_T__object__o *)__this,
             (System_Action_T__object__o *)0x0,
             (MethodInfo_48379A0 *)MethodInfo_CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreateMethodBinding__SendMessage
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__SendMessage (const MethodInfo* method);
// 0x5aed5f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aed625: jmp 0x5aed695

CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__SendMessage(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicNetworkBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e8f == '\0') {
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
    Il2CppMethodInitialized_07546e8f = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__9_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__9_0;
  }
  if (__this == (System_Func_CustomLogicNetworkBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c___CreateMethodBinding__SendMessage_b__9_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields;
    pCVar2->__9__9_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__9_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreateMethodBinding__SendMessageAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__SendMessageAll (const MethodInfo* method);
// 0x5aed730
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aed765: jmp 0x5aed7d5

CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__SendMessageAll(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicNetworkBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e90 == '\0') {
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
    Il2CppMethodInitialized_07546e90 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__10_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__10_0;
  }
  if (__this == (System_Func_CustomLogicNetworkBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c___CreateMethodBinding__SendMessageAll_b__10_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields;
    pCVar2->__9__10_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__10_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreateMethodBinding__SendMessageOthers
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__SendMessageOthers (const MethodInfo* method);
// 0x5aed870
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aed8a5: jmp 0x5aed915

CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__SendMessageOthers(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicNetworkBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e91 == '\0') {
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
    Il2CppMethodInitialized_07546e91 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__11_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__11_0;
  }
  if (__this == (System_Func_CustomLogicNetworkBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c___CreateMethodBinding__SendMessageOthers_b__11
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields;
    pCVar2->__9__11_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__11_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreateMethodBinding__FindPlayer
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__FindPlayer (const MethodInfo* method);
// 0x5aed9b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aed9e5: jmp 0x5aeda55

CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__FindPlayer(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicNetworkBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e92 == '\0') {
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
    Il2CppMethodInitialized_07546e92 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__12_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__12_0;
  }
  if (__this == (System_Func_CustomLogicNetworkBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c___CreateMethodBinding__FindPlayer_b__12_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields;
    pCVar2->__9__12_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__12_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreateMethodBinding__GetTimestampDifference
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__GetTimestampDifference (const MethodInfo* method);
// 0x5aedaf0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aedb25: jmp 0x5aedb95

CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__GetTimestampDifference
          (MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicNetworkBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e93 == '\0') {
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
    Il2CppMethodInitialized_07546e93 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__13_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__13_0;
  }
  if (__this == (System_Func_CustomLogicNetworkBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c___CreateMethodBinding__GetTimestampDifference_b
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields;
    pCVar2->__9__13_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__13_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreateMethodBinding__KickPlayer
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__KickPlayer (const MethodInfo* method);
// 0x5aedc30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aedc65: jmp 0x5aedcd5

CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__KickPlayer(MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *object;
  CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_StaticFields *pCVar2;
  System_Func_CustomLogicNetworkBuiltin__object____object__o *__this;
  CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *__this_00;
  
  if (Il2CppMethodInitialized_07546e94 == '\0') {
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
    Il2CppMethodInitialized_07546e94 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields;
    __this = pCVar2->__9__14_0;
  }
  else {
    pCVar2 = ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c)->static_fields;
    __this = pCVar2->__9__14_0;
  }
  if (__this == (System_Func_CustomLogicNetworkBuiltin__object____object__o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c)->_2).
        cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c);
      pCVar2 = TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields;
    }
    object = (Il2CppObject *)pCVar2->__9;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_System_Func_CustomLogicNetworkBuiltin_object_array_object);
    System_Func_object__object__object____ctor
              ((System_Func_object__object__object__o *)__this,object,
               (intptr_t)
               MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c___CreateMethodBinding__KickPlayer_b__14_0
               ,(MethodInfo_4F20F30 *)0x0);
    pCVar2 = TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings_c->static_fields;
    pCVar2->__9__14_0 = __this;
    Il2CppCodeGenWriteBarrier(&pCVar2->__9__14_0);
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLMethodBinding_object____ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this_00,(System_Func_T__object____object__o *)__this,
             (MethodInfo_48378E0 *)MethodInfo_CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin_ctor);
  return __this_00;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicNetworkBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x5aedd70

void CustomLogic_CustomLogicNetworkBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_string__o *__this;
  
  if (Il2CppMethodInitialized_07546e95 == '\0') {
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
    Il2CppMethodInitialized_07546e95 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor);
  if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsMasterClient",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"IsSingleplayer",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Players",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MasterClient",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"MyPlayer",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"NetworkTime",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"Ping",
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
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"FindPlayer",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"GetTimestampDifference",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)"KickPlayer",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings->static_fields->MemberNames = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_CustomLogic_CustomLogicNetworkBuiltin_Bindings->static_fields->MemberNames);
  return;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$<__CreatePropertyBinding__IsMasterClient>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__IsMasterClient_g____getter_2_0 (CustomLogic_CustomLogicNetworkBuiltin_o* __i, const MethodInfo* method);
// 0x5aedfd0

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__IsMasterClient_g____getter_2_0
          (CustomLogic_CustomLogicNetworkBuiltin_o *__i,MethodInfo *method)

{
  bool bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  uStack_8 = in_RAX;
  if (Il2CppMethodInitialized_07546e78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07546e78 = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  uStack_8 = CONCAT17(bVar1,(undefined7)uStack_8);
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,(void *)((long)&uStack_8 + 7));
  return pIVar2;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$<__CreatePropertyBinding__IsSingleplayer>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__IsSingleplayer_g____getter_3_0 (CustomLogic_CustomLogicNetworkBuiltin_o* __i, const MethodInfo* method);
// 0x5aee030
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aee051: cmp byte ptr [rip + 0x1a56c6a], 0

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__IsSingleplayer_g____getter_3_0
          (CustomLogic_CustomLogicNetworkBuiltin_o *__i,MethodInfo *method)

{
  uint32_t uVar1;
  Il2CppObject *pIVar2;
  undefined1 local_9;
  
  if (Il2CppMethodInitialized_07546e79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07546e79 = '\x01';
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  if (Il2CppMethodInitialized_07544cc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07544cc2 = '\x01';
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  local_9 = TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode;
  pIVar2 = il2cpp_vm_Object_Box(g_data_075566f0,&local_9);
  return pIVar2;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$<__CreatePropertyBinding__Players>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__Players_g____getter_4_0 (CustomLogic_CustomLogicNetworkBuiltin_o* __i, const MethodInfo* method);
// 0x5aee0f0

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__Players_g____getter_4_0
          (CustomLogic_CustomLogicNetworkBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicListBuiltin_o *pCVar1;
  
  pCVar1 = CustomLogic_CustomLogicNetworkBuiltin__get_Players((MethodInfo *)__i);
  return (Il2CppObject *)pCVar1;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$<__CreatePropertyBinding__MasterClient>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__MasterClient_g____getter_5_0 (CustomLogic_CustomLogicNetworkBuiltin_o* __i, const MethodInfo* method);
// 0x5aee100

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__MasterClient_g____getter_5_0
          (CustomLogic_CustomLogicNetworkBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this;
  
  if (Il2CppMethodInitialized_07546e7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07546e7b = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  player = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
  CustomLogic_CustomLogicPlayerBuiltin___ctor(__this,player,(MethodInfo *)0x0);
  return (Il2CppObject *)__this;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$<__CreatePropertyBinding__MyPlayer>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__MyPlayer_g____getter_6_0 (CustomLogic_CustomLogicNetworkBuiltin_o* __i, const MethodInfo* method);
// 0x5aee180

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__MyPlayer_g____getter_6_0
          (CustomLogic_CustomLogicNetworkBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this;
  
  if (Il2CppMethodInitialized_07546e7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07546e7c = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
  CustomLogic_CustomLogicPlayerBuiltin___ctor(__this,player,(MethodInfo *)0x0);
  return (Il2CppObject *)__this;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$<__CreatePropertyBinding__NetworkTime>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__NetworkTime_g____getter_7_0 (CustomLogic_CustomLogicNetworkBuiltin_o* __i, const MethodInfo* method);
// 0x5aee200

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__NetworkTime_g____getter_7_0
          (CustomLogic_CustomLogicNetworkBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  double dStack_8;
  
  if (Il2CppMethodInitialized_07546e7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07546e7d = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  dStack_8 = Photon_Pun_PhotonNetwork__get_Time((MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556748,&dStack_8);
  return pIVar1;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$<__CreatePropertyBinding__Ping>g____getter|8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__Ping_g____getter_8_0 (CustomLogic_CustomLogicNetworkBuiltin_o* __i, const MethodInfo* method);
// 0x5aee260

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__Ping_g____getter_8_0
          (CustomLogic_CustomLogicNetworkBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (Il2CppMethodInitialized_07546e7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07546e7e = '\x01';
  }
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  Photon_Pun_PhotonNetwork__GetPing((MethodInfo *)0x0);
  pIVar1 = il2cpp_vm_Object_Box(g_data_07556710,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicNetworkBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicNetworkBuiltin___ctor (CustomLogic_CustomLogicNetworkBuiltin_o* __this, const MethodInfo* method);
// 0x5aebf80

void CustomLogic_CustomLogicNetworkBuiltin___ctor
               (CustomLogic_CustomLogicNetworkBuiltin_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546e77 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_BuiltinClassInstance);
    Il2CppMethodInitialized_07546e77 = '\x01';
    uVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_CustomLogic_BuiltinClassInstance->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_CustomLogic_BuiltinClassInstance);
    CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  CustomLogic_BuiltinClassInstance___ctor((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_IsMasterClient
// il2cpp: bool CustomLogic_CustomLogicNetworkBuiltin__get_IsMasterClient (const MethodInfo* method);
// 0x5aebff0

bool CustomLogic_CustomLogicNetworkBuiltin__get_IsMasterClient(MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07546e78 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07546e78 = '\x01';
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    return bVar2;
  }
  bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  return bVar2;
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_IsSingleplayer
// il2cpp: bool CustomLogic_CustomLogicNetworkBuiltin__get_IsSingleplayer (const MethodInfo* method);
// 0x5aec050
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aec06d: cmp byte ptr [rip + 0x1a58c4e], 0
// asm:   0x5aec074: je 0x5aec0c3

bool CustomLogic_CustomLogicNetworkBuiltin__get_IsSingleplayer(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07546e79 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07546e79 = '\x01';
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  if (Il2CppMethodInitialized_07544cc2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07544cc2 = '\x01';
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    return TypeInfo_Photon_Pun_PhotonNetwork->static_fields->offlineMode;
  }
  return (bool)*(undefined1 *)((long)((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork)->static_fields + 0x30)
  ;
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_Players
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicNetworkBuiltin__get_Players (const MethodInfo* method);
// 0x5aec100

CustomLogic_CustomLogicListBuiltin_o * CustomLogic_CustomLogicNetworkBuiltin__get_Players(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Photon_Realtime_Player_o *player;
  System_Collections_Generic_List_object__o *__this;
  System_Object_array *pSVar3;
  MethodInfo *pMVar4;
  int iVar5;
  CustomLogic_CustomLogicListBuiltin_o *__this_00;
  Photon_Realtime_Player_array *pPVar6;
  ulong uVar7;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_01;
  ulong uVar8;
  
  if (Il2CppMethodInitialized_07546e7a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicListBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_object_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07546e7a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_00,(MethodInfo *)0x0);
  if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
  }
  pPVar6 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
  if (pPVar6 == (Photon_Realtime_Player_array *)0x0) {
label_05aec266:
    ThrowNullReferenceException();
  }
  iVar5 = (int)pPVar6->max_length;
  if (__this_00 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
    if (0 < iVar5) goto label_05aec266;
  }
  else if (0 < iVar5) {
    uVar7 = pPVar6->max_length & 0xffffffff;
    uVar8 = 0;
    do {
      if (uVar7 <= uVar8) {
        ThrowIndexOutOfRangeException();
      }
      player = pPVar6->m_Items[uVar8];
      __this = (__this_00->fields).List;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
      CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_01,player,(MethodInfo *)0x0);
      pMVar4 = MethodInfo_System_Collections_Generic_List_object_Add;
      if (__this == (System_Collections_Generic_List_object__o *)0x0) goto label_05aec266;
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (__this->fields)._items;
      if (pSVar3 == (System_Object_array *)0x0) goto label_05aec266;
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (__this->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)__this_01;
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (__this,(Il2CppObject *)__this_01,
                   (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
      }
      uVar8 = uVar8 + 1;
      uVar2 = (uint)pPVar6->max_length;
      uVar7 = (ulong)uVar2;
    } while ((long)uVar8 < (long)(int)uVar2);
  }
  return __this_00;
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_MasterClient
// il2cpp: CustomLogic_CustomLogicPlayerBuiltin_o* CustomLogic_CustomLogicNetworkBuiltin__get_MasterClient (const MethodInfo* method);
// 0x5aec270

CustomLogic_CustomLogicPlayerBuiltin_o *
CustomLogic_CustomLogicNetworkBuiltin__get_MasterClient(MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this;
  
  if (Il2CppMethodInitialized_07546e7b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07546e7b = '\x01';
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
// 0x5aec2f0

CustomLogic_CustomLogicPlayerBuiltin_o *
CustomLogic_CustomLogicNetworkBuiltin__get_MyPlayer(MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this;
  
  if (Il2CppMethodInitialized_07546e7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07546e7c = '\x01';
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
// 0x5aec370

double CustomLogic_CustomLogicNetworkBuiltin__get_NetworkTime(MethodInfo *method)

{
  uint32_t uVar1;
  double dVar2;
  
  if (Il2CppMethodInitialized_07546e7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07546e7d = '\x01';
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    dVar2 = Photon_Pun_PhotonNetwork__get_Time((MethodInfo *)0x0);
    return dVar2;
  }
  dVar2 = Photon_Pun_PhotonNetwork__get_Time((MethodInfo *)0x0);
  return dVar2;
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_Ping
// il2cpp: int32_t CustomLogic_CustomLogicNetworkBuiltin__get_Ping (const MethodInfo* method);
// 0x5aec3d0

int32_t CustomLogic_CustomLogicNetworkBuiltin__get_Ping(MethodInfo *method)

{
  uint32_t uVar1;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_07546e7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07546e7e = '\x01';
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    iVar2 = Photon_Pun_PhotonNetwork__GetPing((MethodInfo *)0x0);
    return iVar2;
  }
  iVar2 = Photon_Pun_PhotonNetwork__GetPing((MethodInfo *)0x0);
  return iVar2;
}


// CustomLogic.CustomLogicNetworkBuiltin$$SendMessage
// il2cpp: void CustomLogic_CustomLogicNetworkBuiltin__SendMessage (CustomLogic_CustomLogicPlayerBuiltin_o* player, System_String_o* message, const MethodInfo* method);
// 0x5aec430

void CustomLogic_CustomLogicNetworkBuiltin__SendMessage
               (CustomLogic_CustomLogicPlayerBuiltin_o *player,System_String_o *message,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this;
  Photon_Realtime_Player_o *targetPlayer;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_07546e7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SendMessageRPC");
    Il2CppMethodInitialized_07546e7f = '\x01';
  }
  if (player != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    __this = TypeInfo_GameManagers_RPCManager->static_fields->PhotonView;
    targetPlayer = (player->fields).Player;
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
      Il2CppCodeGenWriteBarrier(parameters->m_Items);
      if (__this != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC_56e5850
                  (__this,"SendMessageRPC",targetPlayer,parameters,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkBuiltin$$SendMessageAll
// il2cpp: void CustomLogic_CustomLogicNetworkBuiltin__SendMessageAll (System_String_o* message, const MethodInfo* method);
// 0x5aec530

void CustomLogic_CustomLogicNetworkBuiltin__SendMessageAll(System_String_o *message,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_07546e80 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SendMessageRPC");
    Il2CppMethodInitialized_07546e80 = '\x01';
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
    Il2CppCodeGenWriteBarrier(parameters->m_Items);
    if (__this != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this,"SendMessageRPC",0,parameters,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkBuiltin$$SendMessageOthers
// il2cpp: void CustomLogic_CustomLogicNetworkBuiltin__SendMessageOthers (System_String_o* message, const MethodInfo* method);
// 0x5aec610

void CustomLogic_CustomLogicNetworkBuiltin__SendMessageOthers(System_String_o *message,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this;
  System_Object_array *parameters;
  Il2CppObject *pIVar1;
  
  if (Il2CppMethodInitialized_07546e81 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_object_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_RPCManager);
    il2cpp_codegen_initialize_runtime_metadata(&"SendMessageRPC");
    Il2CppMethodInitialized_07546e81 = '\x01';
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
    Il2CppCodeGenWriteBarrier(parameters->m_Items);
    if (__this != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this,"SendMessageRPC",1,parameters,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// CustomLogic.CustomLogicNetworkBuiltin$$FindPlayer
// il2cpp: CustomLogic_CustomLogicPlayerBuiltin_o* CustomLogic_CustomLogicNetworkBuiltin__FindPlayer (int32_t id, const MethodInfo* method);
// 0x5aec6f0

CustomLogic_CustomLogicPlayerBuiltin_o *
CustomLogic_CustomLogicNetworkBuiltin__FindPlayer(int32_t id,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this;
  
  if (Il2CppMethodInitialized_07546e82 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07546e82 = '\x01';
  }
  if ((TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
  }
  __this = (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0;
  player = Utility_Util__FindPlayerById(id,(MethodInfo *)0x0);
  if (player != (Photon_Realtime_Player_o *)0x0) {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    CustomLogic_CustomLogicPlayerBuiltin___ctor(__this,player,(MethodInfo *)0x0);
  }
  return __this;
}


// CustomLogic.CustomLogicNetworkBuiltin$$GetTimestampDifference
// il2cpp: double CustomLogic_CustomLogicNetworkBuiltin__GetTimestampDifference (double timestamp1, double timestamp2, const MethodInfo* method);
// 0x5aec780

double CustomLogic_CustomLogicNetworkBuiltin__GetTimestampDifference
                 (double timestamp1,double timestamp2,MethodInfo *method)

{
  uint32_t uVar1;
  double dVar2;
  
  if (Il2CppMethodInitialized_07546e83 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_Util);
    Il2CppMethodInitialized_07546e83 = '\x01';
    uVar1 = (TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Utility_Util->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_Util);
    dVar2 = Utility_Util__GetPhotonTimestampDifference(timestamp1,timestamp2,(MethodInfo *)0x0);
    return dVar2;
  }
  dVar2 = Utility_Util__GetPhotonTimestampDifference(timestamp1,timestamp2,(MethodInfo *)0x0);
  return dVar2;
}


// CustomLogic.CustomLogicNetworkBuiltin$$KickPlayer
// il2cpp: void CustomLogic_CustomLogicNetworkBuiltin__KickPlayer (Il2CppObject* target, System_String_o* reason, const MethodInfo* method);
// 0x5aec820
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5aec995: jmp 0x5aec8ce

void CustomLogic_CustomLogicNetworkBuiltin__KickPlayer
               (Il2CppObject *target,System_String_o *reason,MethodInfo *method)

{
  byte bVar1;
  uint32_t uVar2;
  bool bVar3;
  int32_t iVar4;
  Photon_Realtime_Room_o *pPVar5;
  System_Type_o *arg0;
  Il2CppObject *arg1;
  Il2CppClass *pIVar6;
  System_ArgumentException_o *__this;
  System_String_o *pSVar7;
  MethodInfo *lastManagedFrame;
  
  if (Il2CppMethodInitialized_07546e84 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameManagers_ChatManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_CustomLogic_CustomLogicPlayerBuiltin);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_MiscExtensions);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Photon_Pun_PhotonNetwork);
    Il2CppMethodInitialized_07546e84 = '\x01';
  }
  if (target == (Il2CppObject *)0x0) {
label_05aec99a:
    NullCheck(target);
    arg0 = System_Object__GetType(target,(MethodInfo *)0x0);
    pSVar7 = il2cpp_codegen_get_runtime_metadata(&"Invalid player parameter type {0}. Valid types are {1}, int (id).");
    arg1 = il2cpp_codegen_get_runtime_metadata(&"CustomLogicPlayerBuiltin");
    pSVar7 = System_String__Format_5302c50(pSVar7,(Il2CppObject *)arg0,arg1,(MethodInfo *)0x0);
    pIVar6 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_ArgumentException);
    __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar6);
    System_ArgumentException___ctor_54186d0(__this,pSVar7,(MethodInfo *)0x0);
  }
  else {
    pIVar6 = target->klass;
    if (pIVar6 == g_data_07556710) {
      if ((TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
      }
      pPVar5 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
      if ((TypeInfo_MiscExtensions->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_MiscExtensions);
      }
      iVar4 = MiscExtensions__UnboxToInt(target,(MethodInfo *)0x0);
      if (pPVar5 == (Photon_Realtime_Room_o *)0x0) {
        ThrowNullReferenceException();
      }
      pIVar6 = (Il2CppClass *)
               (*(pPVar5->klass->vtable)._10_GetPlayer.methodPtr)
                         (pPVar5,iVar4,true,(pPVar5->klass->vtable)._10_GetPlayer.method);
      uVar2 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
    }
    else {
      bVar1 = (TypeInfo_CustomLogic_CustomLogicPlayerBuiltin->_2).typeHierarchyDepth;
      if (((pIVar6->_2).typeHierarchyDepth < bVar1) ||
         ((pIVar6->_2).typeHierarchy[(ulong)bVar1 - 1] !=
          (Il2CppClass *)TypeInfo_CustomLogic_CustomLogicPlayerBuiltin)) goto label_05aec99a;
      pIVar6 = target[3].klass;
      uVar2 = (TypeInfo_Photon_Pun_PhotonNetwork->_2).cctor_finished_or_no_cctor;
    }
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Photon_Pun_PhotonNetwork);
    }
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if (bVar3) {
      if ((TypeInfo_GameManagers_ChatManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameManagers_ChatManager);
      }
      GameManagers_ChatManager__KickPlayer
                ((Photon_Realtime_Player_o *)pIVar6,true,false,reason,(MethodInfo *)0x0);
      return;
    }
    pIVar6 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_Exception);
    __this = (System_ArgumentException_o *)il2cpp_codegen_object_new(pIVar6);
    pSVar7 = il2cpp_codegen_get_runtime_metadata(&"Only the master client can kick players.");
    System_Exception___ctor_54fa440((System_Exception_o *)__this,pSVar7,(MethodInfo *)0x0);
  }
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata(&MethodInfo_CustomLogic_CustomLogicNetworkBuiltin_KickPlayer);
  il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicNetworkBuiltin__get_ClassName (CustomLogic_CustomLogicNetworkBuiltin_o* __this, const MethodInfo* method);
// 0x5aeca50

System_String_o *
CustomLogic_CustomLogicNetworkBuiltin__get_ClassName
          (CustomLogic_CustomLogicNetworkBuiltin_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07546e85 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Network");
    Il2CppMethodInitialized_07546e85 = '\x01';
  }
  return "Network";
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicNetworkBuiltin__get_IsAbstract (CustomLogic_CustomLogicNetworkBuiltin_o* __this, const MethodInfo* method);
// 0x5aeca80

bool CustomLogic_CustomLogicNetworkBuiltin__get_IsAbstract
               (CustomLogic_CustomLogicNetworkBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicNetworkBuiltin__get_IsStatic (CustomLogic_CustomLogicNetworkBuiltin_o* __this, const MethodInfo* method);
// 0x5aeca90

bool CustomLogic_CustomLogicNetworkBuiltin__get_IsStatic
               (CustomLogic_CustomLogicNetworkBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicNetworkBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicNetworkBuiltin_o* __this, const MethodInfo* method);
// 0x5aecaa0

bool CustomLogic_CustomLogicNetworkBuiltin__get_InheritBaseMembers
               (CustomLogic_CustomLogicNetworkBuiltin_o *__this,MethodInfo *method)

{
  return true;
}


