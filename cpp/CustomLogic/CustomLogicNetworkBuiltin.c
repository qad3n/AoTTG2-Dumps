// Type: CustomLogic.CustomLogicNetworkBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicNetworkBuiltin.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Builtin/CustomLogicNetworkBuiltin.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicNetworkBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicNetworkBuiltin_o* CustomLogic_CustomLogicNetworkBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3ed12b0

CustomLogic_CustomLogicNetworkBuiltin_o *
CustomLogic_CustomLogicNetworkBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  uint in_EAX;
  CustomLogic_BuiltinClassInstance_o *__this;
  System_String_o *pSVar1;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar2;
  System_ArgumentException_o *__this_00;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_057039d6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicNetworkBuiltin);
    DAT_057039d6 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    if (args->max_length == 0) {
      __this = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicNetworkBuiltin);
      if (DAT_057039c8 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
        DAT_057039c8 = '\x01';
      }
      if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
        il2cpp_init_class();
      }
      CustomLogic_BuiltinClassInstance___ctor(__this,(MethodInfo *)0x0);
      return (CustomLogic_CustomLogicNetworkBuiltin_o *)__this;
    }
    il2cpp_glue_01f2f1a0(args);
    uStack_18 = CONCAT44((int)args->max_length,(uint)uStack_18);
    pSVar1 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicNetworkBuiltin constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar1 = System_String__Concat(str0,pSVar1,str2,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this_00 = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar2);
    System_ArgumentException___ctor(__this_00,pSVar1,(MethodInfo *)0x0);
    uVar2 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicNetworkBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_00,uVar2);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicNetworkBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3ed2970

void CustomLogic_CustomLogicNetworkBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_057039e5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057039e5 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicNetworkBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3ed29e0

void CustomLogic_CustomLogicNetworkBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$<__CreateMethodBinding__SendMessage>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__SendMessage_b__8_0 (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ed29f0

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings_<>c__<__CreateMethodBinding__SendMessage>b__8_0
          (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicPlayerBuiltin_o *player;
  System_String_o *message;
  MethodInfo *method_00;
  
  if (DAT_057039e6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicPlayerBuiltin_ConvertTo_CustomLogicPl);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057039e6 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    obj = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    player = (CustomLogic_CustomLogicPlayerBuiltin_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicPlayerBuiltin_ConvertTo_CustomLogicPl);
    if (1 < (uint)__a->max_length) {
      message = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_String_ConvertTo_String);
      CustomLogic_CustomLogicNetworkBuiltin__SendMessage(player,message,method_00);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$<__CreateMethodBinding__SendMessageAll>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__SendMessageAll_b__9_0 (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ed2aa0

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings_<>c__<__CreateMethodBinding__SendMessageAll>b__9_0
          (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *message;
  MethodInfo *method_00;
  
  if (DAT_057039e7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057039e7 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      method_00 = MethodInfo_String_ConvertTo_String;
      message = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                          (obj,(MethodInfo_24AB7B0 *)MethodInfo_String_ConvertTo_String);
      CustomLogic_CustomLogicNetworkBuiltin__SendMessageAll(message,method_00);
      return (Il2CppObject *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$<__CreateMethodBinding__SendMessageOthers>b__10_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__SendMessageOthers_b__10_0 (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ed2b20

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings_<>c__<__CreateMethodBinding__SendMessageOthers>b__10_0
          (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  System_String_o *message;
  MethodInfo *method_00;
  
  if (DAT_057039e8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057039e8 = '\x01';
  }
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length != 0) {
      obj = __a->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      method_00 = MethodInfo_String_ConvertTo_String;
      message = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo<object>
                          (obj,(MethodInfo_24AB7B0 *)MethodInfo_String_ConvertTo_String);
      CustomLogic_CustomLogicNetworkBuiltin__SendMessageOthers(message,method_00);
      return (Il2CppObject *)0x0;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$<__CreateMethodBinding__FindPlayer>b__11_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__FindPlayer_b__11_0 (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ed2ba0

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings_<>c__<__CreateMethodBinding__FindPlayer>b__11_0
          (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *obj;
  int32_t id;
  Photon_Realtime_Player_o *player;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_00;
  
  if (DAT_057039e9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_ConvertTo_Int32);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057039e9 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  obj = __a->m_Items[0];
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  id = CustomLogic_CustomLogicEvaluator__ConvertTo<int>(obj,MethodInfo_Int32_ConvertTo_Int32);
  if (DAT_057039d2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_057039d2 = '\x01';
  }
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_init_class();
  }
  player = Utility_Util__FindPlayerById(id,(MethodInfo *)0x0);
  if (player != (Photon_Realtime_Player_o *)0x0) {
    __this_00 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicPlayerBuiltin);
    CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_00,player,(MethodInfo *)0x0);
    return (Il2CppObject *)__this_00;
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$<__CreateMethodBinding__GetTimestampDifference>b__12_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__GetTimestampDifference_b__12_0 (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ed2cb0

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings_<>c__<__CreateMethodBinding__GetTimestampDifference>b__12_0
          (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  double sentTime;
  double serverTime;
  double local_20;
  
  if (DAT_057039ea == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Double_ConvertTo_Double);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_057039ea = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    sentTime = CustomLogic_CustomLogicEvaluator__ConvertTo<double>(pIVar1,MethodInfo_Double_ConvertTo_Double);
    if (1 < (uint)__a->max_length) {
      serverTime = CustomLogic_CustomLogicEvaluator__ConvertTo<double>(__a->m_Items[1],MethodInfo_Double_ConvertTo_Double)
      ;
      if (DAT_057039d3 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_Util);
        DAT_057039d3 = '\x01';
      }
      if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
        il2cpp_init_class();
      }
      local_20 = Utility_Util__GetPhotonTimestampDifference(sentTime,serverTime,(MethodInfo *)0x0);
      pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_057110a0,&local_20);
      return pIVar1;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings.<>c$$<__CreateMethodBinding__KickPlayer>b__13_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_____CreateMethodBinding__KickPlayer_b__13_0 (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3ed2dd0

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings_<>c__<__CreateMethodBinding__KickPlayer>b__13_0
          (CustomLogic_CustomLogicNetworkBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkBuiltin_o *__c,System_Object_array *__a,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *target;
  Il2CppObject *obj;
  System_String_o *reason;
  System_Object_array *extraout_RDX;
  System_Object_array *extraout_RDX_00;
  System_Object_array *method_00;
  
  method_00 = __a;
  if (DAT_057039eb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&".");
    DAT_057039eb = '\x01';
    method_00 = extraout_RDX;
  }
  if (__a == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar1 = (int)__a->max_length;
  if (iVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  target = __a->m_Items[0];
  reason = ".";
  if (1 < iVar1) {
    obj = __a->m_Items[1];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    reason = (System_String_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    method_00 = extraout_RDX_00;
  }
  CustomLogic_CustomLogicNetworkBuiltin__KickPlayer(target,reason,(MethodInfo *)method_00);
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicNetworkBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3ed13d0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings__CreateMemberBinding
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
  CustomLogic_CLPropertyBinding_T__o *pCVar8;
  System_Func_T__object____object__o *pSVar9;
  CustomLogic_CLMethodBinding_T__o *pCVar10;
  
  if (DAT_057039d7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"MyPlayer");
    il2cpp_init_method_metadata(&"FindPlayer");
    il2cpp_init_method_metadata(&"MasterClient");
    il2cpp_init_method_metadata(&"SendMessage");
    il2cpp_init_method_metadata(&"Players");
    il2cpp_init_method_metadata(&"Ping");
    il2cpp_init_method_metadata(&"SendMessageAll");
    il2cpp_init_method_metadata(&"NetworkTime");
    il2cpp_init_method_metadata(&"SendMessageOthers");
    il2cpp_init_method_metadata(&"IsMasterClient");
    il2cpp_init_method_metadata(&"KickPlayer");
    il2cpp_init_method_metadata(&"GetTimestampDifference");
    DAT_057039d7 = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x396d88ce) {
    if (uVar3 < 0x20e62365) {
      if (uVar3 == 0x121de31d) {
        bVar4 = System_String__op_Equality(name,"SendMessageAll",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057039df == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkBuiltin__object____object);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SendMessageAll_b);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_057039df = '\x01';
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_c + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_init_class();
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10)
            ;
          }
          else {
            pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10)
            ;
          }
          if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
            if (*(int *)(TypeInfo_c + 0xe4) == 0) {
              il2cpp_init_class();
            }
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkBuiltin__object____object);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar9;
            il2cpp_runtime_glue(lVar2 + 0x10,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if (uVar3 == 0x18dd36a9) {
        bVar4 = System_String__op_Equality(name,"Players",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_057039d9 == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Players_g____ge);
            il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkBuiltin__object);
            DAT_057039d9 = '\x01';
          }
          pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkBuiltin__object);
          System_Func<object__object>___ctor();
          pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
          CustomLogic_CLPropertyBinding<object>___ctor
                    (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar8;
        }
      }
      else if ((uVar3 == 0x20e62364) &&
              (bVar4 = System_String__op_Equality(name,"NetworkTime",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057039dc == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__NetworkTime_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkBuiltin__object);
          DAT_057039dc = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x3442c773) {
      bVar4 = System_String__op_Equality(name,"FindPlayer",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057039e1 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FindPlayer_b__11);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057039e1 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x20);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0x20,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 == 0x34be13e4) {
      bVar4 = System_String__op_Equality(name,"MasterClient",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057039da == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MasterClient_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkBuiltin__object);
          DAT_057039da = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x396d88cd) &&
            (bVar4 = System_String__op_Equality(name,"SendMessageOthers",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057039e0 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SendMessageOthers);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_057039e0 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x18);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar9;
        il2cpp_runtime_glue(lVar2 + 0x18,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 < 0x603b3855) {
    if (uVar3 == 0x396f5fc2) {
      bVar4 = System_String__op_Equality(name,"MyPlayer",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057039db == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MyPlayer_g____g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkBuiltin__object);
          DAT_057039db = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkBuiltin__object);
        System_Func<object__object>___ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor
                  (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if (uVar3 == 0x5a740462) {
      bVar4 = System_String__op_Equality(name,"GetTimestampDifference",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_057039e2 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkBuiltin__object____object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetTimestampDiffe);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_057039e2 = '\x01';
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        else {
          iVar1 = *(int *)(TypeInfo_c + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        else {
          pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x28);
        }
        if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
          if (*(int *)(TypeInfo_c + 0xe4) == 0) {
            il2cpp_init_class();
          }
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkBuiltin__object____object);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0x28,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if ((uVar3 == 0x603b3854) &&
            (bVar4 = System_String__op_Equality(name,"IsMasterClient",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057039d8 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsMasterClient);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkBuiltin__object);
        DAT_057039d8 = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkBuiltin__object);
      System_Func<object__object>___ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if (uVar3 == 0xce859b1e) {
    bVar4 = System_String__op_Equality(name,"KickPlayer",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057039e3 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__KickPlayer_b__13);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_057039e3 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x30);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar9;
        il2cpp_runtime_glue(lVar2 + 0x30,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 == 0x67ac82ce) {
    bVar4 = System_String__op_Equality(name,"SendMessage",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_057039de == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkBuiltin__object____object);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SendMessage_b__8);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_057039de = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkBuiltin__object____object);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar9;
        il2cpp_runtime_glue(lVar2 + 8,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if ((uVar3 == 0x7fb7f0a9) &&
          (bVar4 = System_String__op_Equality(name,"Ping",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_057039dd == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Ping_g____gette);
      il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkBuiltin__object);
      DAT_057039dd = '\x01';
    }
    pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkBuiltin__object);
    System_Func<object__object>___ctor();
    pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
    CustomLogic_CLPropertyBinding<object>___ctor
              (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar8;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicNetworkBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreatePropertyBinding__IsMasterClient
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__IsMasterClient (const MethodInfo* method);
// 0x3ed1960

CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__IsMasterClient
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *__this;
  
  if (DAT_057039d8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__IsMasterClient);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkBuiltin__object);
    DAT_057039d8 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
  return __this;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreatePropertyBinding__Players
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__Players (const MethodInfo* method);
// 0x3ed1a00

CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__Players(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *__this;
  
  if (DAT_057039d9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Players_g____ge);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkBuiltin__object);
    DAT_057039d9 = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
  return __this;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreatePropertyBinding__MasterClient
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__MasterClient (const MethodInfo* method);
// 0x3ed1aa0

CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__MasterClient
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *__this;
  
  if (DAT_057039da == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MasterClient_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkBuiltin__object);
    DAT_057039da = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
  return __this;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreatePropertyBinding__MyPlayer
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__MyPlayer (const MethodInfo* method);
// 0x3ed1b40

CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__MyPlayer
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *__this;
  
  if (DAT_057039db == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__MyPlayer_g____g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkBuiltin__object);
    DAT_057039db = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
  return __this;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreatePropertyBinding__NetworkTime
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__NetworkTime (const MethodInfo* method);
// 0x3ed1be0

CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__NetworkTime
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *__this;
  
  if (DAT_057039dc == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__NetworkTime_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkBuiltin__object);
    DAT_057039dc = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
  return __this;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreatePropertyBinding__Ping
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__Ping (const MethodInfo* method);
// 0x3ed1c80

CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreatePropertyBinding__Ping(MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *__this;
  
  if (DAT_057039dd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Ping_g____gette);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkBuiltin__object);
    DAT_057039dd = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicNetworkBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicNetworkBuiltin);
  return __this;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreateMethodBinding__SendMessage
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__SendMessage (const MethodInfo* method);
// 0x3ed1d20

CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__SendMessage
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *__this;
  
  if (DAT_057039de == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SendMessage_b__8);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057039de = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
  return __this;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreateMethodBinding__SendMessageAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__SendMessageAll (const MethodInfo* method);
// 0x3ed1e70

CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__SendMessageAll
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *__this;
  
  if (DAT_057039df == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SendMessageAll_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057039df = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
  return __this;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreateMethodBinding__SendMessageOthers
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__SendMessageOthers (const MethodInfo* method);
// 0x3ed1fc0

CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__SendMessageOthers
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *__this;
  
  if (DAT_057039e0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SendMessageOthers);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057039e0 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
  return __this;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreateMethodBinding__FindPlayer
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__FindPlayer (const MethodInfo* method);
// 0x3ed2110

CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__FindPlayer
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *__this;
  
  if (DAT_057039e1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__FindPlayer_b__11);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057039e1 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
  return __this;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreateMethodBinding__GetTimestampDifference
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__GetTimestampDifference (const MethodInfo* method);
// 0x3ed2260

CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__GetTimestampDifference
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *__this;
  
  if (DAT_057039e2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__GetTimestampDiffe);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057039e2 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_glue(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
  return __this;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$__CreateMethodBinding__KickPlayer
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o* CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__KickPlayer (const MethodInfo* method);
// 0x3ed23b0

CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings____CreateMethodBinding__KickPlayer
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *__this;
  
  if (DAT_057039e3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkBuiltin__object____object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__KickPlayer_b__13);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_057039e3 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkBuiltin__object____object);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_glue(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicNetworkBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicNetworkBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicNetworkBuiltin);
  return __this;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicNetworkBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3ed2500

void CustomLogic_CustomLogicNetworkBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_057039e4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"MyPlayer");
    il2cpp_init_method_metadata(&"FindPlayer");
    il2cpp_init_method_metadata(&"MasterClient");
    il2cpp_init_method_metadata(&"SendMessage");
    il2cpp_init_method_metadata(&"Players");
    il2cpp_init_method_metadata(&"Ping");
    il2cpp_init_method_metadata(&"SendMessageAll");
    il2cpp_init_method_metadata(&"NetworkTime");
    il2cpp_init_method_metadata(&"SendMessageOthers");
    il2cpp_init_method_metadata(&"IsMasterClient");
    il2cpp_init_method_metadata(&"KickPlayer");
    il2cpp_init_method_metadata(&"GetTimestampDifference");
    DAT_057039e4 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"IsMasterClient",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Players",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MasterClient",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"MyPlayer",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"NetworkTime",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Ping",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SendMessage",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SendMessageAll",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SendMessageOthers",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"FindPlayer",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"GetTimestampDifference",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"KickPlayer",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$<__CreatePropertyBinding__IsMasterClient>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__IsMasterClient_g____getter_2_0 (CustomLogic_CustomLogicNetworkBuiltin_o* __i, const MethodInfo* method);
// 0x3ed2740

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings__<__CreatePropertyBinding__IsMasterClient>g____getter_2_0
          (CustomLogic_CustomLogicNetworkBuiltin_o *__i,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 in_RAX;
  Il2CppObject *pIVar2;
  undefined8 uStack_8;
  
  uStack_8 = in_RAX;
  if (DAT_057039c9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_057039c9 = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  uStack_8 = CONCAT17((char)bVar1,(undefined7)uStack_8);
  pIVar2 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,(long)&uStack_8 + 7);
  return pIVar2;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$<__CreatePropertyBinding__Players>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__Players_g____getter_3_0 (CustomLogic_CustomLogicNetworkBuiltin_o* __i, const MethodInfo* method);
// 0x3ed27a0

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicNetworkBuiltin_Bindings__<__CreatePropertyBinding__Players>g____getter_3_0
          (MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Photon_Realtime_Player_o *player;
  System_Collections_Generic_List_object__o *__this;
  System_Object_array *pSVar3;
  long lVar4;
  int iVar5;
  CustomLogic_CustomLogicListBuiltin_o *__this_00;
  Photon_Realtime_Player_array *pPVar6;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_01;
  ulong uVar7;
  
  if (DAT_057039ca == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_057039ca = '\x01';
  }
  __this_00 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_00,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pPVar6 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
  if (pPVar6 != (Photon_Realtime_Player_array *)0x0) {
    iVar5 = (int)pPVar6->max_length;
    if (__this_00 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      if (0 < iVar5) goto LAB_03ed0a60;
    }
    else if (0 < iVar5) {
      uVar7 = 0;
      if ((pPVar6->max_length & 0xffffffff) != 0) {
        do {
          player = pPVar6->m_Items[uVar7];
          __this = (__this_00->fields).List;
          __this_01 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicPlayerBuiltin);
          CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_01,player,(MethodInfo *)0x0);
          lVar4 = MethodInfo_Void_Add;
          if (__this == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03ed0a60;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) goto LAB_03ed0a60;
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)__this_01;
            il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,__this_01);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this,(Il2CppObject *)__this_01,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          uVar7 = uVar7 + 1;
          uVar2 = (uint)pPVar6->max_length;
          if ((long)(int)uVar2 <= (long)uVar7) {
            return __this_00;
          }
        } while (uVar7 < uVar2);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    return __this_00;
  }
LAB_03ed0a60:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$<__CreatePropertyBinding__MasterClient>g____getter|4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__MasterClient_g____getter_4_0 (CustomLogic_CustomLogicNetworkBuiltin_o* __i, const MethodInfo* method);
// 0x3ed27b0

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings__<__CreatePropertyBinding__MasterClient>g____getter_4_0
          (CustomLogic_CustomLogicNetworkBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this;
  
  if (DAT_057039cb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_057039cb = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  player = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  __this = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicPlayerBuiltin);
  CustomLogic_CustomLogicPlayerBuiltin___ctor(__this,player,(MethodInfo *)0x0);
  return (Il2CppObject *)__this;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$<__CreatePropertyBinding__MyPlayer>g____getter|5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__MyPlayer_g____getter_5_0 (CustomLogic_CustomLogicNetworkBuiltin_o* __i, const MethodInfo* method);
// 0x3ed2830

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings__<__CreatePropertyBinding__MyPlayer>g____getter_5_0
          (CustomLogic_CustomLogicNetworkBuiltin_o *__i,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this;
  
  if (DAT_057039cc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_057039cc = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  __this = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicPlayerBuiltin);
  CustomLogic_CustomLogicPlayerBuiltin___ctor(__this,player,(MethodInfo *)0x0);
  return (Il2CppObject *)__this;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$<__CreatePropertyBinding__NetworkTime>g____getter|6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__NetworkTime_g____getter_6_0 (CustomLogic_CustomLogicNetworkBuiltin_o* __i, const MethodInfo* method);
// 0x3ed28b0

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings__<__CreatePropertyBinding__NetworkTime>g____getter_6_0
          (CustomLogic_CustomLogicNetworkBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  double dStack_8;
  
  if (DAT_057039cd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_057039cd = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  dStack_8 = Photon_Pun_PhotonNetwork__get_Time((MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_057110a0,&dStack_8);
  return pIVar1;
}


// CustomLogic.CustomLogicNetworkBuiltin.Bindings$$<__CreatePropertyBinding__Ping>g____getter|7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkBuiltin_Bindings_____CreatePropertyBinding__Ping_g____getter_7_0 (CustomLogic_CustomLogicNetworkBuiltin_o* __i, const MethodInfo* method);
// 0x3ed2910

Il2CppObject *
CustomLogic_CustomLogicNetworkBuiltin_Bindings__<__CreatePropertyBinding__Ping>g____getter_7_0
          (CustomLogic_CustomLogicNetworkBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 auStack_4 [4];
  
  if (DAT_057039ce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_057039ce = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Photon_Pun_PhotonNetwork__GetPing((MethodInfo *)0x0);
  pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711068,auStack_4);
  return pIVar1;
}


// CustomLogic.CustomLogicNetworkBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicNetworkBuiltin___ctor (CustomLogic_CustomLogicNetworkBuiltin_o* __this, const MethodInfo* method);
// 0x3ed0810

void CustomLogic_CustomLogicNetworkBuiltin___ctor
               (CustomLogic_CustomLogicNetworkBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_057039c8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    DAT_057039c8 = '\x01';
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_BuiltinClassInstance + 0xe4);
  }
  if (iVar1 != 0) {
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_IsMasterClient
// il2cpp: bool CustomLogic_CustomLogicNetworkBuiltin__get_IsMasterClient (const MethodInfo* method);
// 0x3ed0880

bool_conflict CustomLogic_CustomLogicNetworkBuiltin__get_IsMasterClient(MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  
  if (DAT_057039c9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_057039c9 = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 != 0) {
    bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    return bVar2;
  }
  il2cpp_init_class();
  bVar2 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  return bVar2;
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_Players
// il2cpp: CustomLogic_CustomLogicListBuiltin_o* CustomLogic_CustomLogicNetworkBuiltin__get_Players (const MethodInfo* method);
// 0x3ed08e0

CustomLogic_CustomLogicListBuiltin_o *
CustomLogic_CustomLogicNetworkBuiltin__get_Players(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Photon_Realtime_Player_o *player;
  System_Collections_Generic_List_object__o *__this;
  System_Object_array *pSVar3;
  long lVar4;
  int iVar5;
  CustomLogic_CustomLogicListBuiltin_o *__this_00;
  Photon_Realtime_Player_array *pPVar6;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_01;
  ulong uVar7;
  
  if (DAT_057039ca == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicListBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_057039ca = '\x01';
  }
  __this_00 = (CustomLogic_CustomLogicListBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicListBuiltin);
  CustomLogic_CustomLogicListBuiltin___ctor(__this_00,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pPVar6 = Photon_Pun_PhotonNetwork__get_PlayerList((MethodInfo *)0x0);
  if (pPVar6 != (Photon_Realtime_Player_array *)0x0) {
    iVar5 = (int)pPVar6->max_length;
    if (__this_00 == (CustomLogic_CustomLogicListBuiltin_o *)0x0) {
      if (0 < iVar5) goto LAB_03ed0a60;
    }
    else if (0 < iVar5) {
      uVar7 = 0;
      if ((pPVar6->max_length & 0xffffffff) != 0) {
        do {
          player = pPVar6->m_Items[uVar7];
          __this = (__this_00->fields).List;
          __this_01 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicPlayerBuiltin);
          CustomLogic_CustomLogicPlayerBuiltin___ctor(__this_01,player,(MethodInfo *)0x0);
          lVar4 = MethodInfo_Void_Add;
          if (__this == (System_Collections_Generic_List_object__o *)0x0) goto LAB_03ed0a60;
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (__this->fields)._items;
          if (pSVar3 == (System_Object_array *)0x0) goto LAB_03ed0a60;
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (__this->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)__this_01;
            il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,__this_01);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (__this,(Il2CppObject *)__this_01,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          uVar7 = uVar7 + 1;
          uVar2 = (uint)pPVar6->max_length;
          if ((long)(int)uVar2 <= (long)uVar7) {
            return __this_00;
          }
        } while (uVar7 < uVar2);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    return __this_00;
  }
LAB_03ed0a60:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_MasterClient
// il2cpp: CustomLogic_CustomLogicPlayerBuiltin_o* CustomLogic_CustomLogicNetworkBuiltin__get_MasterClient (const MethodInfo* method);
// 0x3ed0a70

CustomLogic_CustomLogicPlayerBuiltin_o *
CustomLogic_CustomLogicNetworkBuiltin__get_MasterClient(MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this;
  
  if (DAT_057039cb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_057039cb = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  player = Photon_Pun_PhotonNetwork__get_MasterClient((MethodInfo *)0x0);
  __this = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicPlayerBuiltin);
  CustomLogic_CustomLogicPlayerBuiltin___ctor(__this,player,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_MyPlayer
// il2cpp: CustomLogic_CustomLogicPlayerBuiltin_o* CustomLogic_CustomLogicNetworkBuiltin__get_MyPlayer (const MethodInfo* method);
// 0x3ed0af0

CustomLogic_CustomLogicPlayerBuiltin_o *
CustomLogic_CustomLogicNetworkBuiltin__get_MyPlayer(MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this;
  
  if (DAT_057039cc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_057039cc = '\x01';
  }
  if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
    il2cpp_init_class();
  }
  player = Photon_Pun_PhotonNetwork__get_LocalPlayer((MethodInfo *)0x0);
  __this = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicPlayerBuiltin);
  CustomLogic_CustomLogicPlayerBuiltin___ctor(__this,player,(MethodInfo *)0x0);
  return __this;
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_NetworkTime
// il2cpp: double CustomLogic_CustomLogicNetworkBuiltin__get_NetworkTime (const MethodInfo* method);
// 0x3ed0b70

double CustomLogic_CustomLogicNetworkBuiltin__get_NetworkTime(MethodInfo *method)

{
  int iVar1;
  double dVar2;
  
  if (DAT_057039cd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_057039cd = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 != 0) {
    dVar2 = Photon_Pun_PhotonNetwork__get_Time((MethodInfo *)0x0);
    return dVar2;
  }
  il2cpp_init_class();
  dVar2 = Photon_Pun_PhotonNetwork__get_Time((MethodInfo *)0x0);
  return dVar2;
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_Ping
// il2cpp: int32_t CustomLogic_CustomLogicNetworkBuiltin__get_Ping (const MethodInfo* method);
// 0x3ed0bd0

int32_t CustomLogic_CustomLogicNetworkBuiltin__get_Ping(MethodInfo *method)

{
  int iVar1;
  int32_t iVar2;
  
  if (DAT_057039ce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_057039ce = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 != 0) {
    iVar2 = Photon_Pun_PhotonNetwork__GetPing((MethodInfo *)0x0);
    return iVar2;
  }
  il2cpp_init_class();
  iVar2 = Photon_Pun_PhotonNetwork__GetPing((MethodInfo *)0x0);
  return iVar2;
}


// CustomLogic.CustomLogicNetworkBuiltin$$SendMessage
// il2cpp: void CustomLogic_CustomLogicNetworkBuiltin__SendMessage (CustomLogic_CustomLogicPlayerBuiltin_o* player, System_String_o* message, const MethodInfo* method);
// 0x3ed0c30

void CustomLogic_CustomLogicNetworkBuiltin__SendMessage
               (CustomLogic_CustomLogicPlayerBuiltin_o *player,System_String_o *message,
               MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this;
  Photon_Realtime_Player_o *targetPlayer;
  System_Object_array *parameters;
  long lVar1;
  undefined8 uVar2;
  MethodInfo *extraout_RDX;
  
  if (DAT_057039cf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&"SendMessageRPC");
    DAT_057039cf = '\x01';
    method = extraout_RDX;
  }
  if (player != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
    __this = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
    targetPlayer = (player->fields).Player;
    parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1,method);
    if (parameters != (System_Object_array *)0x0) {
      if (message != (System_String_o *)0x0) {
        lVar1 = il2cpp_runtime_glue(message,(((parameters->obj).klass)->_1).element_class);
        if (lVar1 == 0) {
          uVar2 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar2,0);
        }
      }
      if ((int)parameters->max_length == 0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      parameters->m_Items[0] = (Il2CppObject *)message;
      il2cpp_runtime_glue(parameters->m_Items,message);
      if (__this != (Photon_Pun_PhotonView_o *)0x0) {
        Photon_Pun_PhotonView__RPC(__this,"SendMessageRPC",targetPlayer,parameters,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNetworkBuiltin$$SendMessageAll
// il2cpp: void CustomLogic_CustomLogicNetworkBuiltin__SendMessageAll (System_String_o* message, const MethodInfo* method);
// 0x3ed0d30

void CustomLogic_CustomLogicNetworkBuiltin__SendMessageAll
               (System_String_o *message,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this;
  System_Object_array *parameters;
  long lVar1;
  undefined8 uVar2;
  
  if (DAT_057039d0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&"SendMessageRPC");
    DAT_057039d0 = '\x01';
  }
  __this = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
  if (parameters != (System_Object_array *)0x0) {
    if (message != (System_String_o *)0x0) {
      lVar1 = il2cpp_runtime_glue(message,(((parameters->obj).klass)->_1).element_class);
      if (lVar1 == 0) {
        uVar2 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar2,0);
      }
    }
    if ((int)parameters->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    parameters->m_Items[0] = (Il2CppObject *)message;
    il2cpp_runtime_glue(parameters->m_Items,message);
    if (__this != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this,"SendMessageRPC",0,parameters,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNetworkBuiltin$$SendMessageOthers
// il2cpp: void CustomLogic_CustomLogicNetworkBuiltin__SendMessageOthers (System_String_o* message, const MethodInfo* method);
// 0x3ed0e10

void CustomLogic_CustomLogicNetworkBuiltin__SendMessageOthers
               (System_String_o *message,MethodInfo *method)

{
  Photon_Pun_PhotonView_o *__this;
  System_Object_array *parameters;
  long lVar1;
  undefined8 uVar2;
  
  if (DAT_057039d1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_RPCManager);
    il2cpp_init_method_metadata(&"SendMessageRPC");
    DAT_057039d1 = '\x01';
  }
  __this = (Photon_Pun_PhotonView_o *)**(undefined8 **)(TypeInfo_RPCManager + 0xb8);
  parameters = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,1);
  if (parameters != (System_Object_array *)0x0) {
    if (message != (System_String_o *)0x0) {
      lVar1 = il2cpp_runtime_glue(message,(((parameters->obj).klass)->_1).element_class);
      if (lVar1 == 0) {
        uVar2 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar2,0);
      }
    }
    if ((int)parameters->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    parameters->m_Items[0] = (Il2CppObject *)message;
    il2cpp_runtime_glue(parameters->m_Items,message);
    if (__this != (Photon_Pun_PhotonView_o *)0x0) {
      Photon_Pun_PhotonView__RPC(__this,"SendMessageRPC",1,parameters,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNetworkBuiltin$$FindPlayer
// il2cpp: CustomLogic_CustomLogicPlayerBuiltin_o* CustomLogic_CustomLogicNetworkBuiltin__FindPlayer (int32_t id, const MethodInfo* method);
// 0x3ed0ef0

CustomLogic_CustomLogicPlayerBuiltin_o *
CustomLogic_CustomLogicNetworkBuiltin__FindPlayer(int32_t id,MethodInfo *method)

{
  Photon_Realtime_Player_o *player;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this;
  
  if (DAT_057039d2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_057039d2 = '\x01';
  }
  if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
    il2cpp_init_class();
  }
  player = Utility_Util__FindPlayerById(id,(MethodInfo *)0x0);
  if (player != (Photon_Realtime_Player_o *)0x0) {
    __this = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicPlayerBuiltin);
    CustomLogic_CustomLogicPlayerBuiltin___ctor(__this,player,(MethodInfo *)0x0);
    return __this;
  }
  return (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0;
}


// CustomLogic.CustomLogicNetworkBuiltin$$GetTimestampDifference
// il2cpp: double CustomLogic_CustomLogicNetworkBuiltin__GetTimestampDifference (double timestamp1, double timestamp2, const MethodInfo* method);
// 0x3ed0f80

double CustomLogic_CustomLogicNetworkBuiltin__GetTimestampDifference
                 (double timestamp1,double timestamp2,MethodInfo *method)

{
  int iVar1;
  double dVar2;
  
  if (DAT_057039d3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Util);
    DAT_057039d3 = '\x01';
    iVar1 = *(int *)(TypeInfo_Util + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Util + 0xe4);
  }
  if (iVar1 != 0) {
    dVar2 = Utility_Util__GetPhotonTimestampDifference(timestamp1,timestamp2,(MethodInfo *)0x0);
    return dVar2;
  }
  il2cpp_init_class();
  dVar2 = Utility_Util__GetPhotonTimestampDifference(timestamp1,timestamp2,(MethodInfo *)0x0);
  return dVar2;
}


// CustomLogic.CustomLogicNetworkBuiltin$$KickPlayer
// il2cpp: void CustomLogic_CustomLogicNetworkBuiltin__KickPlayer (Il2CppObject* target, System_String_o* reason, const MethodInfo* method);
// 0x3ed1020

void CustomLogic_CustomLogicNetworkBuiltin__KickPlayer
               (Il2CppObject *target,System_String_o *reason,MethodInfo *method)

{
  byte bVar1;
  int iVar2;
  bool_conflict bVar3;
  uint uVar4;
  Photon_Realtime_Room_o *pPVar5;
  Il2CppClass *pIVar6;
  System_Type_o *arg0;
  Il2CppObject *arg1;
  undefined8 uVar7;
  System_ArgumentException_o *__this;
  System_String_o *pSVar8;
  
  if (DAT_057039d4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ChatManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_MiscExtensions);
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_057039d4 = '\x01';
  }
  if (target == (Il2CppObject *)0x0) {
LAB_03ed119a:
    il2cpp_glue_01f2f1a0(target);
    arg0 = System_Object__GetType(target,(MethodInfo *)0x0);
    pSVar8 = (System_String_o *)il2cpp_init_method_metadata(&"Invalid player parameter type {0}. Valid types are {1}, int (id).");
    arg1 = (Il2CppObject *)il2cpp_init_method_metadata(&"CustomLogicPlayerBuiltin");
    pSVar8 = System_String__Format(pSVar8,(Il2CppObject *)arg0,arg1,(MethodInfo *)0x0);
    uVar7 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar7);
    System_ArgumentException___ctor(__this,pSVar8,(MethodInfo *)0x0);
  }
  else {
    pIVar6 = target->klass;
    if (pIVar6 == DAT_05711068) {
      if (*(int *)(TypeInfo_PhotonNetwork + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pPVar5 = Photon_Pun_PhotonNetwork__get_CurrentRoom((MethodInfo *)0x0);
      if (*(int *)(TypeInfo_MiscExtensions + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar4 = MiscExtensions__UnboxToInt(target,(MethodInfo *)0x0);
      if (pPVar5 == (Photon_Realtime_Room_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pIVar6 = (Il2CppClass *)
               (*(pPVar5->klass->vtable)._10_GetPlayer.methodPtr)
                         (pPVar5,(ulong)uVar4,1,(pPVar5->klass->vtable)._10_GetPlayer.method);
      iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
    }
    else {
      bVar1 = (TypeInfo_CustomLogicPlayerBuiltin->_2).naturalAligment;
      if (((pIVar6->_2).naturalAligment < bVar1) ||
         ((pIVar6->_2).typeHierarchy[(ulong)bVar1 - 1] != TypeInfo_CustomLogicPlayerBuiltin)) goto LAB_03ed119a;
      pIVar6 = target[3].klass;
      iVar2 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
    }
    if (iVar2 == 0) {
      il2cpp_init_class();
    }
    bVar3 = Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    if ((char)bVar3 != '\0') {
      if (*(int *)(TypeInfo_ChatManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      GameManagers_ChatManager__KickPlayer
                ((Photon_Realtime_Player_o *)pIVar6,1,0,reason,(MethodInfo *)0x0);
      return;
    }
    uVar7 = il2cpp_init_method_metadata(&TypeInfo_Exception);
    __this = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar7);
    pSVar8 = (System_String_o *)il2cpp_init_method_metadata(&"Only the master client can kick players.");
    System_Exception___ctor((System_Exception_o *)__this,pSVar8,(MethodInfo *)0x0);
  }
  uVar7 = il2cpp_init_method_metadata(&MethodInfo_Void_KickPlayer);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar7);
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicNetworkBuiltin__get_ClassName (CustomLogic_CustomLogicNetworkBuiltin_o* __this, const MethodInfo* method);
// 0x3ed1250

System_String_o *
CustomLogic_CustomLogicNetworkBuiltin__get_ClassName
          (CustomLogic_CustomLogicNetworkBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_057039d5 == '\0') {
    il2cpp_init_method_metadata(&"Network");
    DAT_057039d5 = '\x01';
  }
  return "Network";
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicNetworkBuiltin__get_IsAbstract (CustomLogic_CustomLogicNetworkBuiltin_o* __this, const MethodInfo* method);
// 0x3ed1280

bool_conflict
CustomLogic_CustomLogicNetworkBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicNetworkBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicNetworkBuiltin__get_IsStatic (CustomLogic_CustomLogicNetworkBuiltin_o* __this, const MethodInfo* method);
// 0x3ed1290

bool_conflict
CustomLogic_CustomLogicNetworkBuiltin__get_IsStatic
          (CustomLogic_CustomLogicNetworkBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicNetworkBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicNetworkBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicNetworkBuiltin_o* __this, const MethodInfo* method);
// 0x3ed12a0

bool_conflict
CustomLogic_CustomLogicNetworkBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicNetworkBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


