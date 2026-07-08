// Type: CustomLogic.CustomLogicNetworkViewBuiltin
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/CustomLogic/CustomLogicNetworkViewBuiltin.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/CustomLogic/Builtin/CustomLogicNetworkViewBuiltin.cs  [CHANGED since prior version]
// --------------------------------

// CustomLogic.CustomLogicNetworkViewBuiltin.Factory$$CreateInstance
// il2cpp: CustomLogic_CustomLogicNetworkViewBuiltin_o* CustomLogic_CustomLogicNetworkViewBuiltin_Factory__CreateInstance (System_Object_array* args, const MethodInfo* method);
// 0x3e212a0

CustomLogic_CustomLogicNetworkViewBuiltin_o *
CustomLogic_CustomLogicNetworkViewBuiltin_Factory__CreateInstance
          (System_Object_array *args,MethodInfo *method)

{
  int iVar1;
  Il2CppObject *obj;
  uint uVar2;
  uint in_EAX;
  Map_MapObject_o *obj_00;
  System_String_o *pSVar3;
  System_String_o *str0;
  System_String_o *str2;
  undefined8 uVar4;
  System_ArgumentException_o *__this;
  undefined1 auVar5 [16];
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (DAT_05702ceb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_MapObject_ConvertTo_MapObject);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicNetworkViewBuiltin);
    DAT_05702ceb = '\x01';
  }
  uVar2 = (uint)uStack_18;
  uStack_18 = (ulong)(uint)uStack_18;
  if (args != (System_Object_array *)0x0) {
    iVar1 = (int)args->max_length;
    if (iVar1 == 1) {
      obj = args->m_Items[0];
      if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
        il2cpp_init_class();
      }
      obj_00 = (Map_MapObject_o *)
               CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_MapObject_ConvertTo_MapObject);
      auVar5 = il2cpp_runtime_glue(TypeInfo_CustomLogicNetworkViewBuiltin);
      CustomLogic_CustomLogicNetworkViewBuiltin___ctor(auVar5._0_8_,obj_00,auVar5._8_8_);
      return auVar5._0_8_;
    }
    uStack_18 = CONCAT44(iVar1,uVar2);
    pSVar3 = System_Int32__ToString((int)&uStack_18 + 4,(MethodInfo *)0x0);
    str0 = (System_String_o *)il2cpp_init_method_metadata(&"No CustomLogicNetworkViewBuiltin constructor found that takes ");
    str2 = (System_String_o *)il2cpp_init_method_metadata(&" arguments");
    pSVar3 = System_String__Concat(str0,pSVar3,str2,(MethodInfo *)0x0);
    uVar4 = il2cpp_init_method_metadata(&TypeInfo_ArgumentException);
    __this = (System_ArgumentException_o *)il2cpp_runtime_glue(uVar4);
    System_ArgumentException___ctor(__this,pSVar3,(MethodInfo *)0x0);
    uVar4 = il2cpp_init_method_metadata(&MethodInfo_CustomLogicNetworkViewBuiltin_CreateInstance);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this,uVar4);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$.cctor
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c___cctor (const MethodInfo* method);
// 0x3e22410

void CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05702cf7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702cf7 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$.ctor
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c___ctor (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o* __this, const MethodInfo* method);
// 0x3e22480

void CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_<>c___ctor
               (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__Transfer>b__4_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__Transfer_b__4_0 (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e22490

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_<>c__<__CreateMethodBinding__Transfer>b__4_0
          (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkViewBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicPhotonSync_o *pCVar1;
  CustomLogic_CustomLogicPlayerBuiltin_o *player;
  Photon_Pun_PhotonView_o *pPVar2;
  
  if (DAT_05702cf8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicPlayerBuiltin_ConvertTo_CustomLogicPl);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cf8 = '\x01';
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
    player = (CustomLogic_CustomLogicPlayerBuiltin_o *)
             CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_CustomLogicPlayerBuiltin_ConvertTo_CustomLogicPl);
    if ((__c != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) &&
       (pCVar1 = (__c->fields).Sync, pCVar1 != (CustomLogic_CustomLogicPhotonSync_o *)0x0)) {
      pPVar2 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)pCVar1,(MethodInfo *)0x0);
      if (pPVar2 != (Photon_Pun_PhotonView_o *)0x0) {
        if ((char)(pPVar2->fields)._IsMine_k__BackingField != '\0') {
          pCVar1 = (__c->fields).Sync;
          if (pCVar1 == (CustomLogic_CustomLogicPhotonSync_o *)0x0) goto LAB_03e2253a;
          CustomLogic_CustomLogicPhotonSync__Transfer(pCVar1,player,(MethodInfo *)0x0);
        }
        return (Il2CppObject *)0x0;
      }
    }
  }
LAB_03e2253a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__SendMessage>b__5_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__SendMessage_b__5_0 (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e22550

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_<>c__<__CreateMethodBinding__SendMessage>b__5_0
          (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkViewBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  Il2CppObject *pIVar1;
  System_String_o *message;
  
  if (DAT_05702cf9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicPlayerBuiltin_ConvertTo_CustomLogicPl);
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cf9 = '\x01';
  }
  if (__a == (System_Object_array *)0x0) {
LAB_03e2260d:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)__a->max_length != 0) {
    pIVar1 = __a->m_Items[0];
    if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pIVar1 = CustomLogic_CustomLogicEvaluator__ConvertTo<object>(pIVar1,MethodInfo_CustomLogicPlayerBuiltin_ConvertTo_CustomLogicPl);
    if (1 < (uint)__a->max_length) {
      message = (System_String_o *)
                CustomLogic_CustomLogicEvaluator__ConvertTo<object>(__a->m_Items[1],MethodInfo_String_ConvertTo_String);
      if (((__c != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) &&
          (pIVar1 != (Il2CppObject *)0x0)) &&
         (__this_00 = (__c->fields).Sync, __this_00 != (CustomLogic_CustomLogicPhotonSync_o *)0x0))
      {
        CustomLogic_CustomLogicPhotonSync__SendMessage
                  (__this_00,(Photon_Realtime_Player_o *)pIVar1[3].klass,message,(MethodInfo *)0x0);
        return (Il2CppObject *)0x0;
      }
      goto LAB_03e2260d;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__SendMessageAll>b__6_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__SendMessageAll_b__6_0 (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e22620

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_<>c__<__CreateMethodBinding__SendMessageAll>b__6_0
          (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkViewBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  System_String_o *message;
  
  if (DAT_05702cfa == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cfa = '\x01';
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
    message = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if ((__c != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Sync, __this_00 != (CustomLogic_CustomLogicPhotonSync_o *)0x0)) {
      CustomLogic_CustomLogicPhotonSync__SendMessageAll(__this_00,message,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__SendMessageOthers>b__7_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__SendMessageOthers_b__7_0 (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e226c0

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_<>c__<__CreateMethodBinding__SendMessageOthers>b__7_0
          (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkViewBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *obj;
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  System_String_o *message;
  
  if (DAT_05702cfb == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_String_ConvertTo_String);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cfb = '\x01';
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
    message = (System_String_o *)
              CustomLogic_CustomLogicEvaluator__ConvertTo<object>(obj,MethodInfo_String_ConvertTo_String);
    if ((__c != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) &&
       (__this_00 = (__c->fields).Sync, __this_00 != (CustomLogic_CustomLogicPhotonSync_o *)0x0)) {
      CustomLogic_CustomLogicPhotonSync__SendMessageOthers(__this_00,message,(MethodInfo *)0x0);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__SendStream>b__8_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__SendStream_b__8_0 (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e22760

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_<>c__<__CreateMethodBinding__SendStream>b__8_0
          (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkViewBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  if (__a != (System_Object_array *)0x0) {
    if ((int)__a->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    __this = (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *)0x0;
    if (__c != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
      CustomLogic_CustomLogicNetworkViewBuiltin__SendStream(__c,__a->m_Items[0],(MethodInfo *)__a);
      return (Il2CppObject *)0x0;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception(__this);
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings.<>c$$<__CreateMethodBinding__ReceiveStream>b__9_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_____CreateMethodBinding__ReceiveStream_b__9_0 (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o* __this, CustomLogic_CustomLogicNetworkViewBuiltin_o* __c, System_Object_array* __a, const MethodInfo* method);
// 0x3e22790

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_<>c__<__CreateMethodBinding__ReceiveStream>b__9_0
          (CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___c_o *__this,
          CustomLogic_CustomLogicNetworkViewBuiltin_o *__c,System_Object_array *__a,
          MethodInfo *method)

{
  Il2CppObject *pIVar1;
  
  if (__c != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
    pIVar1 = CustomLogic_CustomLogicNetworkViewBuiltin__ReceiveStream(__c,(MethodInfo *)__c);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$CreateMemberBinding
// il2cpp: CustomLogic_ICLMemberBinding_o* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings__CreateMemberBinding (System_String_o* name, const MethodInfo* method);
// 0x3e213d0

CustomLogic_ICLMemberBinding_o *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings__CreateMemberBinding
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
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_T__o *pCVar8;
  System_Func_T__object____object__o *pSVar9;
  CustomLogic_CLMethodBinding_T__o *pCVar10;
  
  if (DAT_05702cec == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&"SendStream");
    il2cpp_init_method_metadata(&"Transfer");
    il2cpp_init_method_metadata(&"ReceiveStream");
    il2cpp_init_method_metadata(&"SendMessage");
    il2cpp_init_method_metadata(&"SyncTransforms");
    il2cpp_init_method_metadata(&"SendMessageAll");
    il2cpp_init_method_metadata(&"Owner");
    il2cpp_init_method_metadata(&"SendMessageOthers");
    DAT_05702cec = '\x01';
  }
  uVar3 = <PrivateImplementationDetails>__ComputeStringHash(name,(MethodInfo *)0x0);
  if (uVar3 < 0x396d88ce) {
    if (uVar3 < 0x121de31e) {
      if (uVar3 == 0x895e8a6) {
        bVar4 = System_String__op_Equality(name,"Transfer",(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
            il2cpp_init_class();
          }
          if (DAT_05702cef == '\0') {
            il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
            il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkViewBuiltin__object____ob);
            il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Transfer_b__4_0);
            il2cpp_init_method_metadata(&TypeInfo_c);
            DAT_05702cef = '\x01';
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
            pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkViewBuiltin__object____ob);
            System_Func<object__object__object>___ctor();
            lVar2 = *(long *)(TypeInfo_c + 0xb8);
            *(System_Func_T__object____object__o **)(lVar2 + 8) = pSVar9;
            il2cpp_runtime_glue(lVar2 + 8,pSVar9);
          }
          pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
          CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
          return (CustomLogic_ICLMemberBinding_o *)pCVar10;
        }
      }
      else if ((uVar3 == 0x121de31d) &&
              (bVar4 = System_String__op_Equality(name,"SendMessageAll",(MethodInfo *)0x0),
              (char)bVar4 != '\0')) {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702cf1 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkViewBuiltin__object____ob);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SendMessageAll_b);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702cf1 = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkViewBuiltin__object____ob);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x18) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0x18,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if (uVar3 == 0x1de8ebcf) {
      bVar4 = System_String__op_Equality(name,"SendStream",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702cf3 == '\0') {
          il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkViewBuiltin__object____ob);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SendStream_b__8_0);
          il2cpp_init_method_metadata(&TypeInfo_c);
          DAT_05702cf3 = '\x01';
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
          pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkViewBuiltin__object____ob);
          System_Func<object__object__object>___ctor();
          lVar2 = *(long *)(TypeInfo_c + 0xb8);
          *(System_Func_T__object____object__o **)(lVar2 + 0x28) = pSVar9;
          il2cpp_runtime_glue(lVar2 + 0x28,pSVar9);
        }
        pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
        CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
        return (CustomLogic_ICLMemberBinding_o *)pCVar10;
      }
    }
    else if ((uVar3 == 0x396d88cd) &&
            (bVar4 = System_String__op_Equality(name,"SendMessageOthers",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702cf2 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkViewBuiltin__object____ob);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SendMessageOthers);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702cf2 = '\x01';
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
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkViewBuiltin__object____ob);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x20) = pSVar9;
        il2cpp_runtime_glue(lVar2 + 0x20,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 < 0x8b3137a4) {
    if (uVar3 == 0x8b3137a3) {
      bVar4 = System_String__op_Equality(name,"SyncTransforms",(MethodInfo *)0x0);
      if ((char)bVar4 != '\0') {
        if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05702ced == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicNetworkViewBuiltin__object);
          il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SyncTransforms);
          il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__SyncTransforms_g);
          il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkViewBuilti);
          il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicNetworkViewBuiltin);
          il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkViewBuiltin__object);
          DAT_05702ced = '\x01';
        }
        pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkViewBuiltin__object);
        System_Func<object__object>___ctor();
        setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicNetworkViewBuiltin__object);
        System_Action<object__object>___ctor();
        pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicNetworkViewBuiltin);
        CustomLogic_CLPropertyBinding<object>___ctor(pCVar8,pSVar7,setter,MethodInfo_CLPropertyBinding_1_CustomLogicNetworkViewBuilti);
        return (CustomLogic_ICLMemberBinding_o *)pCVar8;
      }
    }
    else if ((uVar3 == 0x67ac82ce) &&
            (bVar4 = System_String__op_Equality(name,"SendMessage",(MethodInfo *)0x0),
            (char)bVar4 != '\0')) {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702cf0 == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkViewBuiltin__object____ob);
        il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SendMessage_b__5);
        il2cpp_init_method_metadata(&TypeInfo_c);
        DAT_05702cf0 = '\x01';
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_c + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      else {
        pSVar9 = *(System_Func_T__object____object__o **)(*(long *)(TypeInfo_c + 0xb8) + 0x10);
      }
      if (pSVar9 == (System_Func_T__object____object__o *)0x0) {
        if (*(int *)(TypeInfo_c + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkViewBuiltin__object____ob);
        System_Func<object__object__object>___ctor();
        lVar2 = *(long *)(TypeInfo_c + 0xb8);
        *(System_Func_T__object____object__o **)(lVar2 + 0x10) = pSVar9;
        il2cpp_runtime_glue(lVar2 + 0x10,pSVar9);
      }
      pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
      CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
      return (CustomLogic_ICLMemberBinding_o *)pCVar10;
    }
  }
  else if (uVar3 == 0x9b22be74) {
    bVar4 = System_String__op_Equality(name,"Owner",(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05702cee == '\0') {
        il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Owner_g____gett);
        il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkViewBuilti);
        il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicNetworkViewBuiltin);
        il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkViewBuiltin__object);
        DAT_05702cee = '\x01';
      }
      pSVar7 = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkViewBuiltin__object);
      System_Func<object__object>___ctor();
      pCVar8 = (CustomLogic_CLPropertyBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicNetworkViewBuiltin);
      CustomLogic_CLPropertyBinding<object>___ctor
                (pCVar8,pSVar7,(System_Action_T__object__o *)0x0,MethodInfo_CLPropertyBinding_1_CustomLogicNetworkViewBuilti);
      return (CustomLogic_ICLMemberBinding_o *)pCVar8;
    }
  }
  else if ((uVar3 == 0xf3e2723a) &&
          (bVar4 = System_String__op_Equality(name,"ReceiveStream",(MethodInfo *)0x0),
          (char)bVar4 != '\0')) {
    if (*(int *)(TypeInfo_Bindings + 0xe4) == 0) {
      il2cpp_init_class();
    }
    if (DAT_05702cf4 == '\0') {
      il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
      il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkViewBuiltin__object____ob);
      il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ReceiveStream_b);
      il2cpp_init_method_metadata(&TypeInfo_c);
      DAT_05702cf4 = '\x01';
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
      pSVar9 = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkViewBuiltin__object____ob);
      System_Func<object__object__object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Func_T__object____object__o **)(lVar2 + 0x30) = pSVar9;
      il2cpp_runtime_glue(lVar2 + 0x30,pSVar9);
    }
    pCVar10 = (CustomLogic_CLMethodBinding_T__o *)il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
    CustomLogic_CLMethodBinding<object>___ctor(pCVar10,pSVar9,MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
    return (CustomLogic_ICLMemberBinding_o *)pCVar10;
  }
  pSVar5 = (System_String_o *)il2cpp_init_method_metadata(&"Binding for '");
  str2 = (System_String_o *)il2cpp_init_method_metadata(&"' in CustomLogicNetworkViewBuiltin not found");
  pSVar5 = System_String__Concat(pSVar5,name,str2,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&TypeInfo_Exception);
  __this = (System_Exception_o *)il2cpp_runtime_glue(uVar6);
  System_Exception___ctor(__this,pSVar5,(MethodInfo *)0x0);
  uVar6 = il2cpp_init_method_metadata(&MethodInfo_ICLMemberBinding_CreateMemberBinding);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this,uVar6);
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreatePropertyBinding__SyncTransforms
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin__o* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreatePropertyBinding__SyncTransforms (const MethodInfo* method);
// 0x3e217c0

CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin__o *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreatePropertyBinding__SyncTransforms
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  System_Action_T__object__o *setter;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin__o *__this;
  
  if (DAT_05702ced == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_CustomLogicNetworkViewBuiltin__object);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__SyncTransforms);
    il2cpp_init_method_metadata(&MethodInfo_Void____CreatePropertyBinding__SyncTransforms_g);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkViewBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicNetworkViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkViewBuiltin__object);
    DAT_05702ced = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkViewBuiltin__object);
  System_Func<object__object>___ctor();
  setter = (System_Action_T__object__o *)il2cpp_runtime_glue(TypeInfo_Action_CustomLogicNetworkViewBuiltin__object);
  System_Action<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicNetworkViewBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,setter,MethodInfo_CLPropertyBinding_1_CustomLogicNetworkViewBuilti);
  return __this;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreatePropertyBinding__Owner
// il2cpp: CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin__o* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreatePropertyBinding__Owner (const MethodInfo* method);
// 0x3e218a0

CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin__o *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreatePropertyBinding__Owner
          (MethodInfo *method)

{
  System_Func_T__object__o *getter;
  CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin__o *__this;
  
  if (DAT_05702cee == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Object____CreatePropertyBinding__Owner_g____gett);
    il2cpp_init_method_metadata(&MethodInfo_CLPropertyBinding_1_CustomLogicNetworkViewBuilti);
    il2cpp_init_method_metadata(&TypeInfo_CLPropertyBinding_CustomLogicNetworkViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkViewBuiltin__object);
    DAT_05702cee = '\x01';
  }
  getter = (System_Func_T__object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkViewBuiltin__object);
  System_Func<object__object>___ctor();
  __this = (CustomLogic_CLPropertyBinding_CustomLogicNetworkViewBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLPropertyBinding_CustomLogicNetworkViewBuiltin);
  CustomLogic_CLPropertyBinding<object>___ctor
            ((CustomLogic_CLPropertyBinding_T__o *)__this,getter,(System_Action_T__object__o *)0x0,
             MethodInfo_CLPropertyBinding_1_CustomLogicNetworkViewBuilti);
  return __this;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreateMethodBinding__Transfer
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__Transfer (const MethodInfo* method);
// 0x3e21940

CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__Transfer
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *__this;
  
  if (DAT_05702cef == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkViewBuiltin__object____ob);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__Transfer_b__4_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702cef = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkViewBuiltin__object____ob);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 8) = function;
    il2cpp_runtime_glue(lVar2 + 8,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
  return __this;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreateMethodBinding__SendMessage
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendMessage (const MethodInfo* method);
// 0x3e21a90

CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendMessage
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *__this;
  
  if (DAT_05702cf0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkViewBuiltin__object____ob);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SendMessage_b__5);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702cf0 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkViewBuiltin__object____ob);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x10) = function;
    il2cpp_runtime_glue(lVar2 + 0x10,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
  return __this;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreateMethodBinding__SendMessageAll
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendMessageAll (const MethodInfo* method);
// 0x3e21be0

CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendMessageAll
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *__this;
  
  if (DAT_05702cf1 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkViewBuiltin__object____ob);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SendMessageAll_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702cf1 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkViewBuiltin__object____ob);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x18) = function;
    il2cpp_runtime_glue(lVar2 + 0x18,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
  return __this;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreateMethodBinding__SendMessageOthers
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendMessageOthers (const MethodInfo* method);
// 0x3e21d30

CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendMessageOthers
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *__this;
  
  if (DAT_05702cf2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkViewBuiltin__object____ob);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SendMessageOthers);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702cf2 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkViewBuiltin__object____ob);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x20) = function;
    il2cpp_runtime_glue(lVar2 + 0x20,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
  return __this;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreateMethodBinding__SendStream
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendStream (const MethodInfo* method);
// 0x3e21e80

CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__SendStream
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *__this;
  
  if (DAT_05702cf3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkViewBuiltin__object____ob);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__SendStream_b__8_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702cf3 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkViewBuiltin__object____ob);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x28) = function;
    il2cpp_runtime_glue(lVar2 + 0x28,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
  return __this;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$__CreateMethodBinding__ReceiveStream
// il2cpp: CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__ReceiveStream (const MethodInfo* method);
// 0x3e21fd0

CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings____CreateMethodBinding__ReceiveStream
          (MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Func_T__object____object__o *function;
  CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *__this;
  
  if (DAT_05702cf4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Func_CustomLogicNetworkViewBuiltin__object____ob);
    il2cpp_init_method_metadata(&MethodInfo_Object____CreateMethodBinding__ReceiveStream_b);
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05702cf4 = '\x01';
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
    function = (System_Func_T__object____object__o *)il2cpp_runtime_glue(TypeInfo_Func_CustomLogicNetworkViewBuiltin__object____ob);
    System_Func<object__object__object>___ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Func_T__object____object__o **)(lVar2 + 0x30) = function;
    il2cpp_runtime_glue(lVar2 + 0x30,function);
  }
  __this = (CustomLogic_CLMethodBinding_CustomLogicNetworkViewBuiltin__o *)
           il2cpp_runtime_glue(TypeInfo_CLMethodBinding_CustomLogicNetworkViewBuiltin);
  CustomLogic_CLMethodBinding<object>___ctor
            ((CustomLogic_CLMethodBinding_T__o *)__this,function,MethodInfo_CLMethodBinding_1_CustomLogicNetworkViewBuiltin);
  return __this;
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$.cctor
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___cctor (const MethodInfo* method);
// 0x3e22120

void CustomLogic_CustomLogicNetworkViewBuiltin_Bindings___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  
  if (DAT_05702cf5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Bindings);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&"SendStream");
    il2cpp_init_method_metadata(&"Transfer");
    il2cpp_init_method_metadata(&"ReceiveStream");
    il2cpp_init_method_metadata(&"SendMessage");
    il2cpp_init_method_metadata(&"SyncTransforms");
    il2cpp_init_method_metadata(&"SendMessageAll");
    il2cpp_init_method_metadata(&"Owner");
    il2cpp_init_method_metadata(&"SendMessageOthers");
    DAT_05702cf5 = '\x01';
  }
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this,MethodInfo_HashSet_1_System_String);
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet<object>__Add(__this,"SyncTransforms",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Owner",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"Transfer",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SendMessage",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SendMessageAll",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SendMessageOthers",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"SendStream",MethodInfo_Boolean_Add);
    System_Collections_Generic_HashSet<object>__Add(__this,"ReceiveStream",MethodInfo_Boolean_Add);
    **(undefined8 **)(TypeInfo_Bindings + 0xb8) = __this;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_Bindings + 0xb8),__this);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$<__CreatePropertyBinding__SyncTransforms>g____getter|2_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_____CreatePropertyBinding__SyncTransforms_g____getter_2_0 (CustomLogic_CustomLogicNetworkViewBuiltin_o* __i, const MethodInfo* method);
// 0x3e222e0

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings__<__CreatePropertyBinding__SyncTransforms>g____getter_2_0
          (CustomLogic_CustomLogicNetworkViewBuiltin_o *__i,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  undefined1 uStack_1;
  
  if (__i != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
    pIVar1 = (Il2CppObject *)il2cpp_runtime_glue(DAT_05711048,&uStack_1);
    return pIVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$<__CreatePropertyBinding__SyncTransforms>g____setter|2_1
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_____CreatePropertyBinding__SyncTransforms_g____setter_2_1 (CustomLogic_CustomLogicNetworkViewBuiltin_o* __i, Il2CppObject* __v, const MethodInfo* method);
// 0x3e22310

void CustomLogic_CustomLogicNetworkViewBuiltin_Bindings__<__CreatePropertyBinding__SyncTransforms>g____setter_2_1
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__i,Il2CppObject *__v,
               MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o *pCVar1;
  uint uVar2;
  bool_conflict bVar3;
  
  if (DAT_05702cf6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_ConvertTo_Boolean);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicEvaluator);
    DAT_05702cf6 = '\x01';
  }
  if (*(int *)(TypeInfo_CustomLogicEvaluator + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar2 = CustomLogic_CustomLogicEvaluator__ConvertTo<bool>(__v,MethodInfo_Boolean_ConvertTo_Boolean);
  if (__i != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
    if (DAT_05702cdb == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Object);
      DAT_05702cdb = '\x01';
    }
    *(char *)&(__i->fields)._isTransformSynced = (char)uVar2;
    pCVar1 = (__i->fields).Sync;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar3 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
    ;
    if ((char)bVar3 == '\0') {
      return;
    }
    pCVar1 = (__i->fields).Sync;
    if (pCVar1 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
      CustomLogic_CustomLogicPhotonSync__set_SyncTransforms(pCVar1,uVar2 & 0xff,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNetworkViewBuiltin.Bindings$$<__CreatePropertyBinding__Owner>g____getter|3_0
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin_Bindings_____CreatePropertyBinding__Owner_g____getter_3_0 (CustomLogic_CustomLogicNetworkViewBuiltin_o* __i, const MethodInfo* method);
// 0x3e223f0

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin_Bindings__<__CreatePropertyBinding__Owner>g____getter_3_0
          (CustomLogic_CustomLogicNetworkViewBuiltin_o *__i,MethodInfo *method)

{
  CustomLogic_CustomLogicPlayerBuiltin_o *pCVar1;
  
  if (__i != (CustomLogic_CustomLogicNetworkViewBuiltin_o *)0x0) {
    pCVar1 = CustomLogic_CustomLogicNetworkViewBuiltin__get_Owner(__i,method);
    return (Il2CppObject *)pCVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$.ctor
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin___ctor (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, Map_MapObject_o* obj, const MethodInfo* method);
// 0x3e1ef80

void CustomLogic_CustomLogicNetworkViewBuiltin___ctor
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,Map_MapObject_o *obj,
               MethodInfo *method)

{
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  System_Collections_Generic_List_CustomLogicClassInstance__o *__this_01;
  
  if (DAT_05702cda == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
    il2cpp_init_method_metadata(&MethodInfo_List_1_CustomLogic_CustomLogicClassInstance);
    il2cpp_init_method_metadata(&MethodInfo_List_1_CustomLogic_CustomLogicComponentInstance);
    il2cpp_init_method_metadata(&TypeInfo_List_CustomLogicComponentInstance);
    il2cpp_init_method_metadata(&TypeInfo_List_CustomLogicClassInstance);
    DAT_05702cda = '\x01';
  }
  (__this->fields).OwnerId = -1;
  __this_00 = (System_Collections_Generic_List_CustomLogicComponentInstance__o *)
              il2cpp_runtime_glue(TypeInfo_List_CustomLogicComponentInstance);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_CustomLogic_CustomLogicComponentInstance);
  (__this->fields)._classInstances = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._classInstances,__this_00);
  __this_01 = (System_Collections_Generic_List_CustomLogicClassInstance__o *)
              il2cpp_runtime_glue(TypeInfo_List_CustomLogicClassInstance);
  System_Collections_Generic_List<object>___ctor
            ((System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_CustomLogic_CustomLogicClassInstance);
  (__this->fields)._addonInstances = __this_01;
  il2cpp_runtime_glue(&(__this->fields)._addonInstances);
  *(undefined1 *)&(__this->fields)._isTransformSynced = 1;
  if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
    il2cpp_init_class();
  }
  CustomLogic_BuiltinClassInstance___ctor
            ((CustomLogic_BuiltinClassInstance_o *)__this,(MethodInfo *)0x0);
  (__this->fields).MapObject = obj;
  il2cpp_runtime_glue(&(__this->fields).MapObject,obj);
  return;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$get_SyncTransforms
// il2cpp: bool CustomLogic_CustomLogicNetworkViewBuiltin__get_SyncTransforms (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, const MethodInfo* method);
// 0x3e1f090

bool_conflict
CustomLogic_CustomLogicNetworkViewBuiltin__get_SyncTransforms
          (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._isTransformSynced);
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$set_SyncTransforms
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__set_SyncTransforms (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, bool value, const MethodInfo* method);
// 0x3e1f0a0

void CustomLogic_CustomLogicNetworkViewBuiltin__set_SyncTransforms
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,bool_conflict value,
               MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o *pCVar1;
  bool_conflict bVar2;
  
  if (DAT_05702cdb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05702cdb = '\x01';
  }
  *(char *)&(__this->fields)._isTransformSynced = (char)value;
  pCVar1 = (__this->fields).Sync;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pCVar1 = (__this->fields).Sync;
    if (pCVar1 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
      CustomLogic_CustomLogicPhotonSync__set_SyncTransforms(pCVar1,value & 0xff,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$get_Owner
// il2cpp: CustomLogic_CustomLogicPlayerBuiltin_o* CustomLogic_CustomLogicNetworkViewBuiltin__get_Owner (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, const MethodInfo* method);
// 0x3e1f120

CustomLogic_CustomLogicPlayerBuiltin_o *
CustomLogic_CustomLogicNetworkViewBuiltin__get_Owner
          (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o *pCVar1;
  Photon_Realtime_Player_o *pPVar2;
  bool_conflict bVar3;
  Photon_Pun_PhotonView_o *pPVar4;
  CustomLogic_CustomLogicPlayerBuiltin_o *__this_00;
  
  if (DAT_05702cdc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05702cdc = '\x01';
  }
  pCVar1 = (__this->fields).Sync;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pCVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0;
  }
  pCVar1 = (__this->fields).Sync;
  if ((pCVar1 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) &&
     (pPVar4 = Photon_Pun_MonoBehaviourPun__get_photonView
                         ((Photon_Pun_MonoBehaviourPun_o *)pCVar1,(MethodInfo *)0x0),
     pPVar4 != (Photon_Pun_PhotonView_o *)0x0)) {
    pPVar2 = (pPVar4->fields)._Owner_k__BackingField;
    __this_00 = (CustomLogic_CustomLogicPlayerBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicPlayerBuiltin);
    if (DAT_05702cfc == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
      DAT_05702cfc = '\x01';
    }
    if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
      il2cpp_init_class();
    }
    CustomLogic_BuiltinClassInstance___ctor
              ((CustomLogic_BuiltinClassInstance_o *)__this_00,(MethodInfo *)0x0);
    (__this_00->fields).Player = pPVar2;
    il2cpp_runtime_glue(&(__this_00->fields).Player,pPVar2);
    return __this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$OnSecond
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__OnSecond (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, const MethodInfo* method);
// 0x3e1f280

void CustomLogic_CustomLogicNetworkViewBuiltin__OnSecond
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05702cdd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PhotonNetwork);
    DAT_05702cdd = '\x01';
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_PhotonNetwork + 0xe4);
  }
  if (iVar1 != 0) {
    Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
    return;
  }
  il2cpp_init_class();
  Photon_Pun_PhotonNetwork__get_IsMasterClient((MethodInfo *)0x0);
  return;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$RegisterComponentInstance
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__RegisterComponentInstance (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, CustomLogic_CustomLogicComponentInstance_o* instance, const MethodInfo* method);
// 0x3e1f2e0

void CustomLogic_CustomLogicNetworkViewBuiltin__RegisterComponentInstance
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,
               CustomLogic_CustomLogicComponentInstance_o *instance,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  CustomLogic_CustomLogicComponentInstance_array *pCVar3;
  long lVar4;
  
  if (DAT_05702cde == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_05702cde = '\x01';
  }
  lVar4 = MethodInfo_Void_Add;
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
        il2cpp_runtime_glue(pCVar3->m_Items + (int)uVar2,instance);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)instance,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$RegisterAddonInstance
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__RegisterAddonInstance (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, CustomLogic_CustomLogicClassInstance_o* instance, const MethodInfo* method);
// 0x3e1f380

void CustomLogic_CustomLogicNetworkViewBuiltin__RegisterAddonInstance
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,
               CustomLogic_CustomLogicClassInstance_o *instance,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_CustomLogicClassInstance__o *pSVar3;
  CustomLogic_CustomLogicClassInstance_array *pCVar4;
  long lVar5;
  bool_conflict bVar6;
  
  if (DAT_05702cdf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    DAT_05702cdf = '\x01';
  }
  pSVar3 = (__this->fields)._addonInstances;
  if (pSVar3 != (System_Collections_Generic_List_CustomLogicClassInstance__o *)0x0) {
    bVar6 = System_Collections_Generic_List<object>__Contains
                      ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)instance,
                       MethodInfo_Boolean_Contains);
    lVar5 = MethodInfo_Void_Add;
    if ((char)bVar6 != '\0') {
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
          il2cpp_runtime_glue(pCVar4->m_Items + (int)uVar2,instance);
          return;
        }
        System_Collections_Generic_List<object>__AddWithResize
                  ((System_Collections_Generic_List_object__o *)pSVar3,(Il2CppObject *)instance,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$OnNetworkTransfer
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__OnNetworkTransfer (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* oldOwner, CustomLogic_CustomLogicPlayerBuiltin_o* newOwner, const MethodInfo* method);
// 0x3e1f450

void CustomLogic_CustomLogicNetworkViewBuiltin__OnNetworkTransfer
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,
               CustomLogic_CustomLogicPlayerBuiltin_o *oldOwner,
               CustomLogic_CustomLogicPlayerBuiltin_o *newOwner,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  bool_conflict bVar2;
  System_Object_array *pSVar3;
  long lVar4;
  undefined8 uVar5;
  System_Collections_Generic_List_Enumerator_T__c *pSVar6;
  Il2CppType *pIVar7;
  CustomLogic_CustomLogicComponentInstance_o *__this_04;
  CustomLogic_CustomLogicComponentInstance_o *pCVar8;
  undefined1 local_48 [16];
  CustomLogic_CustomLogicComponentInstance_o *local_38;
  
  if (DAT_05702ce0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"OnNetworkTransfer");
    DAT_05702ce0 = '\x01';
  }
  pMVar1 = (__this->fields).MapObject;
  if (pMVar1 == (Map_MapObject_o *)0x0) {
LAB_03e1f739:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  x = (UnityEngine_Object_o *)(pMVar1->fields).GameObject;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    __this_00 = (__this->fields)._classInstances;
    if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0)
    goto LAB_03e1f739;
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
    pSVar6 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
    pIVar7 = (Il2CppType *)local_48._8_8_;
    __this_04 = local_38;
    if (oldOwner == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
      while (__this_02.fields._8_8_ = pIVar7,
            __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar6,
            __this_02.fields._current = (Il2CppObject *)__this_04,
            bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
            (char)bVar2 != '\0') {
        pCVar8 = __this_04;
        pSVar3 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
        if (pSVar3 == (System_Object_array *)0x0) goto LAB_03e1f70c;
        if ((int)pSVar3->max_length == 0) goto LAB_03e1f711;
        pSVar3->m_Items[0] = (Il2CppObject *)0x0;
        il2cpp_runtime_glue(pSVar3->m_Items,0);
        if ((newOwner != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) &&
           (lVar4 = il2cpp_runtime_glue(newOwner,(((pSVar3->obj).klass)->_1).element_class),
           lVar4 == 0)) goto LAB_03e1f71b;
        if ((uint)pSVar3->max_length < 2) goto LAB_03e1f707;
        pSVar3->m_Items[1] = (Il2CppObject *)newOwner;
        il2cpp_runtime_glue(pSVar3->m_Items + 1,newOwner);
        if (__this_04 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) goto LAB_03e1f716;
        CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                  (__this_04,"OnNetworkTransfer",pSVar3,(MethodInfo *)0x0);
        __this_04 = pCVar8;
      }
    }
    else {
      while (__this_01.fields._8_8_ = pIVar7,
            __this_01.fields._list = (System_Collections_Generic_List_T__o *)pSVar6,
            __this_01.fields._current = (Il2CppObject *)__this_04,
            bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                              (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
            (char)bVar2 != '\0') {
        pCVar8 = __this_04;
        pSVar3 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
        if (pSVar3 == (System_Object_array *)0x0) {
LAB_03e1f70c:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        lVar4 = il2cpp_runtime_glue(oldOwner,(((pSVar3->obj).klass)->_1).element_class);
        if (lVar4 == 0) {
          uVar5 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar5,0);
        }
        if ((int)pSVar3->max_length == 0) {
LAB_03e1f711:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar3->m_Items[0] = (Il2CppObject *)oldOwner;
        il2cpp_runtime_glue(pSVar3->m_Items,oldOwner);
        if ((newOwner != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) &&
           (lVar4 = il2cpp_runtime_glue(newOwner,(((pSVar3->obj).klass)->_1).element_class),
           lVar4 == 0)) {
LAB_03e1f71b:
          uVar5 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
          il2cpp_glue_02274a00(uVar5,0);
        }
        if ((uint)pSVar3->max_length < 2) {
LAB_03e1f707:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        pSVar3->m_Items[1] = (Il2CppObject *)newOwner;
        il2cpp_runtime_glue(pSVar3->m_Items + 1,newOwner);
        if (__this_04 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
LAB_03e1f716:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                  (__this_04,"OnNetworkTransfer",pSVar3,(MethodInfo *)0x0);
        __this_04 = pCVar8;
      }
    }
    __this_03.fields._8_8_ = pIVar7;
    __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar6;
    __this_03.fields._current = (Il2CppObject *)__this_04;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_03,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
  }
  return;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$SetSyncDynamic
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__SetSyncDynamic (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, CustomLogic_CustomLogicPhotonSync_o* sync, const MethodInfo* method);
// 0x3e1f810

void CustomLogic_CustomLogicNetworkViewBuiltin__SetSyncDynamic
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,
               CustomLogic_CustomLogicPhotonSync_o *sync,MethodInfo *method)

{
  Photon_Realtime_Player_o *pPVar1;
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  Photon_Pun_PhotonView_o *pPVar2;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar3;
  MethodInfo *extraout_RDX;
  
  if (DAT_05702ce1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    DAT_05702ce1 = '\x01';
    method = extraout_RDX;
  }
  (__this->fields).Sync = sync;
  il2cpp_runtime_glue(&(__this->fields).Sync,sync,method);
  if (sync != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
    pPVar2 = Photon_Pun_MonoBehaviourPun__get_photonView
                       ((Photon_Pun_MonoBehaviourPun_o *)sync,(MethodInfo *)0x0);
    if ((pPVar2 != (Photon_Pun_PhotonView_o *)0x0) &&
       (pPVar1 = (pPVar2->fields)._Owner_k__BackingField, pPVar1 != (Photon_Realtime_Player_o *)0x0)
       ) {
      (__this->fields).OwnerId = (pPVar1->fields).actorNumber;
      __this_00 = (__this->fields).Sync;
      if (__this_00 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
        CustomLogic_CustomLogicPhotonSync__set_SyncTransforms
                  (__this_00,(uint)(byte)(__this->fields)._isTransformSynced,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        __this_01 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
        if (__this_01 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
          pCVar3 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                             (__this_01,(__this->fields).MapObject,(MethodInfo *)0x0);
          if (pCVar3 != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
            (pCVar3->fields)._NetworkView_k__BackingField = __this;
            il2cpp_runtime_glue(&(pCVar3->fields)._NetworkView_k__BackingField,__this);
            return;
          }
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$SetSync
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__SetSync (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, CustomLogic_CustomLogicPhotonSync_o* sync, const MethodInfo* method);
// 0x3e1f8f0

void CustomLogic_CustomLogicNetworkViewBuiltin__SetSync
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,
               CustomLogic_CustomLogicPhotonSync_o *sync,MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o **ppCVar1;
  int32_t id;
  Photon_Realtime_Player_o *pPVar2;
  CustomLogic_CustomLogicPhotonSync_o *pCVar3;
  Map_MapObject_o *pMVar4;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  CustomLogic_CustomLogicEvaluator_o *__this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  bool_conflict bVar5;
  Photon_Pun_PhotonView_o *pPVar6;
  CustomLogic_BuiltinClassInstance_c *pCVar7;
  CustomLogic_BuiltinClassInstance_o *__this_05;
  CustomLogic_BuiltinClassInstance_o *__this_06;
  System_Object_array *pSVar8;
  long lVar9;
  CustomLogic_CustomLogicMapObjectBuiltin_o *pCVar10;
  undefined8 uVar11;
  MethodInfo *extraout_RDX;
  System_Collections_Generic_List_Enumerator_T__c *pSVar12;
  Il2CppType *pIVar13;
  CustomLogic_CustomLogicComponentInstance_o *__this_07;
  CustomLogic_CustomLogicComponentInstance_o *pCVar14;
  undefined1 local_48 [16];
  CustomLogic_CustomLogicComponentInstance_o *local_38;
  
  if (DAT_05702ce2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicPlayerBuiltin);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_Util);
    il2cpp_init_method_metadata(&"OnNetworkTransfer");
    DAT_05702ce2 = '\x01';
    method = extraout_RDX;
  }
  id = (__this->fields).OwnerId;
  ppCVar1 = &(__this->fields).Sync;
  (__this->fields).Sync = sync;
  il2cpp_runtime_glue(ppCVar1,sync,method);
  if (((sync != (CustomLogic_CustomLogicPhotonSync_o *)0x0) &&
      (pPVar6 = Photon_Pun_MonoBehaviourPun__get_photonView
                          ((Photon_Pun_MonoBehaviourPun_o *)sync,(MethodInfo *)0x0),
      pPVar6 != (Photon_Pun_PhotonView_o *)0x0)) &&
     (pPVar2 = (pPVar6->fields)._Owner_k__BackingField, pPVar2 != (Photon_Realtime_Player_o *)0x0))
  {
    (__this->fields).OwnerId = (pPVar2->fields).actorNumber;
    pCVar3 = (__this->fields).Sync;
    if (pCVar3 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
      CustomLogic_CustomLogicPhotonSync__set_SyncTransforms
                (pCVar3,(uint)(byte)(__this->fields)._isTransformSynced,(MethodInfo *)0x0);
      if (-1 < id) {
        if (*(int *)(TypeInfo_Util + 0xe4) == 0) {
          il2cpp_init_class();
        }
        __this_05 = (CustomLogic_BuiltinClassInstance_o *)0x0;
        pCVar7 = (CustomLogic_BuiltinClassInstance_c *)
                 Utility_Util__FindPlayerById(id,(MethodInfo *)0x0);
        if (pCVar7 != (CustomLogic_BuiltinClassInstance_c *)0x0) {
          __this_05 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicPlayerBuiltin);
          if (DAT_05702cfc == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
            DAT_05702cfc = '\x01';
          }
          if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
            il2cpp_init_class();
          }
          CustomLogic_BuiltinClassInstance___ctor(__this_05,(MethodInfo *)0x0);
          __this_05[1].klass = pCVar7;
          il2cpp_runtime_glue(__this_05 + 1);
        }
        pCVar3 = *ppCVar1;
        if ((pCVar3 == (CustomLogic_CustomLogicPhotonSync_o *)0x0) ||
           (pPVar6 = Photon_Pun_MonoBehaviourPun__get_photonView
                               ((Photon_Pun_MonoBehaviourPun_o *)pCVar3,(MethodInfo *)0x0),
           pPVar6 == (Photon_Pun_PhotonView_o *)0x0)) goto LAB_03e1fdc4;
        pCVar7 = (CustomLogic_BuiltinClassInstance_c *)(pPVar6->fields)._Owner_k__BackingField;
        __this_06 = (CustomLogic_BuiltinClassInstance_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicPlayerBuiltin);
        if (DAT_05702cfc == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_BuiltinClassInstance);
          DAT_05702cfc = '\x01';
        }
        if (*(int *)(TypeInfo_BuiltinClassInstance + 0xe4) == 0) {
          il2cpp_init_class();
        }
        CustomLogic_BuiltinClassInstance___ctor(__this_06,(MethodInfo *)0x0);
        __this_06[1].klass = pCVar7;
        il2cpp_runtime_glue(__this_06 + 1);
        pMVar4 = (__this->fields).MapObject;
        if (pMVar4 == (Map_MapObject_o *)0x0) goto LAB_03e1fdc4;
        x = (UnityEngine_Object_o *)(pMVar4->fields).GameObject;
        if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
          il2cpp_init_class();
        }
        bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if ((char)bVar5 != '\0') {
          __this_00 = (__this->fields)._classInstances;
          if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0)
          goto LAB_03e1fdc4;
          System_Collections_Generic_List<object>__GetEnumerator
                    ((System_Collections_Generic_List_Enumerator_T__o *)local_48,
                     (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
          pSVar12 = (System_Collections_Generic_List_Enumerator_T__c *)local_48._0_8_;
          pIVar13 = (Il2CppType *)local_48._8_8_;
          __this_07 = local_38;
          if (__this_05 == (CustomLogic_BuiltinClassInstance_o *)0x0) {
            while (__this_03.fields._8_8_ = pIVar13,
                  __this_03.fields._list = (System_Collections_Generic_List_T__o *)pSVar12,
                  __this_03.fields._current = (Il2CppObject *)__this_07,
                  bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                    (__this_03,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
                  (char)bVar5 != '\0') {
              pCVar14 = __this_07;
              pSVar8 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
              if (pSVar8 == (System_Object_array *)0x0) goto LAB_03e1fda1;
              if ((int)pSVar8->max_length == 0) goto LAB_03e1fda6;
              pSVar8->m_Items[0] = (Il2CppObject *)0x0;
              il2cpp_runtime_glue(pSVar8->m_Items,0);
              lVar9 = il2cpp_runtime_glue(__this_06,(((pSVar8->obj).klass)->_1).element_class);
              if (lVar9 == 0) goto LAB_03e1fdab;
              if ((uint)pSVar8->max_length < 2) goto LAB_03e1fdbf;
              pSVar8->m_Items[1] = (Il2CppObject *)__this_06;
              il2cpp_runtime_glue(pSVar8->m_Items + 1,__this_06);
              if (__this_07 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) goto LAB_03e1fdba;
              CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                        (__this_07,"OnNetworkTransfer",pSVar8,(MethodInfo *)0x0);
              __this_07 = pCVar14;
            }
          }
          else {
            while (__this_02.fields._8_8_ = pIVar13,
                  __this_02.fields._list = (System_Collections_Generic_List_T__o *)pSVar12,
                  __this_02.fields._current = (Il2CppObject *)__this_07,
                  bVar5 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                    (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffff98),
                  (char)bVar5 != '\0') {
              pCVar14 = __this_07;
              pSVar8 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,2);
              if (pSVar8 == (System_Object_array *)0x0) {
LAB_03e1fda1:
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              lVar9 = il2cpp_runtime_glue(__this_05,(((pSVar8->obj).klass)->_1).element_class);
              if (lVar9 == 0) {
                uVar11 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
                il2cpp_glue_02274a00(uVar11,0);
              }
              if ((int)pSVar8->max_length == 0) {
LAB_03e1fda6:
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pSVar8->m_Items[0] = (Il2CppObject *)__this_05;
              il2cpp_runtime_glue(pSVar8->m_Items,__this_05);
              lVar9 = il2cpp_runtime_glue(__this_06,(((pSVar8->obj).klass)->_1).element_class);
              if (lVar9 == 0) {
LAB_03e1fdab:
                uVar11 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
                il2cpp_glue_02274a00(uVar11,0);
              }
              if ((uint)pSVar8->max_length < 2) {
LAB_03e1fdbf:
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              pSVar8->m_Items[1] = (Il2CppObject *)__this_06;
              il2cpp_runtime_glue(pSVar8->m_Items + 1,__this_06);
              if (__this_07 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
LAB_03e1fdba:
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                        (__this_07,"OnNetworkTransfer",pSVar8,(MethodInfo *)0x0);
              __this_07 = pCVar14;
            }
          }
          __this_04.fields._8_8_ = pIVar13;
          __this_04.fields._list = (System_Collections_Generic_List_T__o *)pSVar12;
          __this_04.fields._current = (Il2CppObject *)__this_07;
          System_Collections_Generic_List_Enumerator<object>__Dispose
                    (__this_04,(MethodInfo_3185E10 *)&stack0xffffffffffffff98);
        }
      }
      if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this_01 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
      if (__this_01 != (CustomLogic_CustomLogicEvaluator_o *)0x0) {
        pCVar10 = CustomLogic_CustomLogicEvaluator__GetOrCreateMapObjectBuiltin
                            (__this_01,(__this->fields).MapObject,(MethodInfo *)0x0);
        if (pCVar10 != (CustomLogic_CustomLogicMapObjectBuiltin_o *)0x0) {
          (pCVar10->fields)._NetworkView_k__BackingField = __this;
          il2cpp_runtime_glue(&(pCVar10->fields)._NetworkView_k__BackingField,__this);
        }
        return;
      }
    }
  }
LAB_03e1fdc4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$SendNetworkStream
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__SendNetworkStream (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, Photon_Pun_PhotonStream_o* stream, const MethodInfo* method);
// 0x3e1feb0

void CustomLogic_CustomLogicNetworkViewBuiltin__SendNetworkStream
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,
               Photon_Pun_PhotonStream_o *stream,MethodInfo *method)

{
  System_Collections_Generic_List_object__o **ppSVar1;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar2;
  System_Collections_Generic_List_object__o *pSVar3;
  System_Object_array *obj;
  System_Collections_Generic_List_T__o *pSVar4;
  Il2CppMethodPointer pIVar5;
  CustomLogic_CustomLogicComponentInstance_o *__this_03;
  
  if (DAT_05702ce3 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
    il2cpp_init_method_metadata(&MethodInfo_Object___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_List_object);
    il2cpp_init_method_metadata(&"SendNetworkStream");
    DAT_05702ce3 = '\x01';
  }
  pSVar4 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar5 = (Il2CppMethodPointer)0x0;
  __this_03 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  pSVar3 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_object);
  System_Collections_Generic_List<object>___ctor(pSVar3,MethodInfo_List_1_System_Object);
  ppSVar1 = &(__this->fields)._streamObjects;
  (__this->fields)._streamObjects = pSVar3;
  il2cpp_runtime_glue(ppSVar1,pSVar3);
  __this_00 = (__this->fields)._classInstances;
  if (__this_00 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
    System_Collections_Generic_List<object>__GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffb8,
               (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
    while( true ) {
      __this_01.fields._8_8_ = pIVar5;
      __this_01.fields._list = pSVar4;
      __this_01.fields._current = (Il2CppObject *)__this_03;
      bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffb8);
      if ((char)bVar2 == '\0') break;
      if (__this_03 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                (__this_03,"SendNetworkStream",(System_Object_array *)0x0,(MethodInfo *)0x0);
    }
    __this_02.fields._8_8_ = pIVar5;
    __this_02.fields._list = pSVar4;
    __this_02.fields._current = (Il2CppObject *)__this_03;
    System_Collections_Generic_List_Enumerator<object>__Dispose
              (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffb8);
    pSVar3 = *ppSVar1;
    if (pSVar3 != (System_Collections_Generic_List_object__o *)0x0) {
      obj = System_Collections_Generic_List<object>__ToArray(pSVar3,MethodInfo_Object___ToArray);
      if (stream != (Photon_Pun_PhotonStream_o *)0x0) {
        Photon_Pun_PhotonStream__SendNext(stream,&obj->obj,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$OnNetworkStream
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__OnNetworkStream (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, System_Object_array* objs, const MethodInfo* method);
// 0x3e200b0

void CustomLogic_CustomLogicNetworkViewBuiltin__OnNetworkStream
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,System_Object_array *objs,
               MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  System_Collections_Generic_List_Enumerator_object__o __this_01;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  bool_conflict bVar2;
  System_Collections_Generic_List_object__o *__this_03;
  System_Collections_Generic_List_T__o *pSVar3;
  Il2CppMethodPointer pIVar4;
  CustomLogic_CustomLogicComponentInstance_o *__this_04;
  
  if (DAT_05702ce4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Object);
    il2cpp_init_method_metadata(&TypeInfo_List_object);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"OnNetworkStream");
    DAT_05702ce4 = '\x01';
  }
  pSVar3 = (System_Collections_Generic_List_T__o *)0x0;
  pIVar4 = (Il2CppMethodPointer)0x0;
  __this_04 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  __this_03 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_object);
  System_Collections_Generic_List<object>___ctor
            (__this_03,(System_Collections_Generic_IEnumerable_T__o *)objs,MethodInfo_List_1_System_Object);
  (__this->fields)._streamObjects = __this_03;
  il2cpp_runtime_glue(&(__this->fields)._streamObjects);
  pMVar1 = (__this->fields).MapObject;
  if (pMVar1 != (Map_MapObject_o *)0x0) {
    x = (UnityEngine_Object_o *)(pMVar1->fields).GameObject;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      __this_00 = (__this->fields)._classInstances;
      if (__this_00 == (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0)
      goto LAB_03e20228;
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)&stack0xffffffffffffffc8,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
      while( true ) {
        __this_01.fields._8_8_ = pIVar4;
        __this_01.fields._list = pSVar3;
        __this_01.fields._current = (Il2CppObject *)__this_04;
        bVar2 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                          (__this_01,(MethodInfo_3185E20 *)&stack0xffffffffffffffc8);
        if ((char)bVar2 == '\0') break;
        if (__this_04 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                  (__this_04,"OnNetworkStream",(System_Object_array *)0x0,(MethodInfo *)0x0);
      }
      __this_02.fields._8_8_ = pIVar4;
      __this_02.fields._list = pSVar3;
      __this_02.fields._current = (Il2CppObject *)__this_04;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_02,(MethodInfo_3185E10 *)&stack0xffffffffffffffc8);
    }
    return;
  }
LAB_03e20228:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$OnNetworkMessage
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__OnNetworkMessage (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* player, System_String_o* message, double sentServerTime, const MethodInfo* method);
// 0x3e202b0

void CustomLogic_CustomLogicNetworkViewBuiltin__OnNetworkMessage
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,
               CustomLogic_CustomLogicPlayerBuiltin_o *player,System_String_o *message,
               double sentServerTime,MethodInfo *method)

{
  Map_MapObject_o *pMVar1;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_CustomLogicComponentInstance__o *__this_00;
  System_Collections_Generic_List_CustomLogicClassInstance__o *__this_01;
  CustomLogic_CustomLogicEvaluator_o *pCVar2;
  System_Collections_Generic_List_Enumerator_object__o __this_02;
  System_Collections_Generic_List_Enumerator_object__o __this_03;
  System_Collections_Generic_List_Enumerator_object__o __this_04;
  System_Collections_Generic_List_Enumerator_object__o __this_05;
  System_Collections_Generic_List_Enumerator_object__o __this_06;
  System_Collections_Generic_List_Enumerator_object__o __this_07;
  CustomLogic_CustomLogicComponentInstance_o *pCVar3;
  bool_conflict bVar4;
  System_Object_array *pSVar5;
  long lVar6;
  Il2CppObject *pIVar7;
  undefined8 uVar8;
  undefined8 in_stack_ffffffffffffff68;
  CustomLogic_CustomLogicPlayerBuiltin_o *pCVar9;
  undefined1 local_80 [16];
  CustomLogic_CustomLogicComponentInstance_o *local_70;
  System_Collections_Generic_List_Enumerator_T__c *local_68;
  Il2CppType *pIStack_60;
  CustomLogic_CustomLogicComponentInstance_o *local_58;
  CustomLogic_CustomLogicNetworkViewBuiltin_o *local_50;
  System_Collections_Generic_List_Enumerator_T__c *local_48;
  Il2CppType *pIStack_40;
  CustomLogic_CustomLogicComponentInstance_o *local_38;
  
  local_50 = __this;
  if (DAT_05702ce5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicComponentInstance_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_CustomLogicClassInstance_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicClas);
    il2cpp_init_method_metadata(&MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
    il2cpp_init_method_metadata(&TypeInfo_object);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"OnNetworkMessage");
    DAT_05702ce5 = '\x01';
  }
  local_48 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_40 = (Il2CppType *)0x0;
  local_38 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  local_68 = (System_Collections_Generic_List_Enumerator_T__c *)0x0;
  pIStack_60 = (Il2CppType *)0x0;
  local_58 = (CustomLogic_CustomLogicComponentInstance_o *)0x0;
  if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
    il2cpp_init_class();
    lVar6 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  else {
    lVar6 = *(long *)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
  }
  if (lVar6 == 0) {
    return;
  }
  pMVar1 = (local_50->fields).MapObject;
  if (pMVar1 != (Map_MapObject_o *)0x0) {
    x = (UnityEngine_Object_o *)(pMVar1->fields).GameObject;
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return;
    }
    __this_00 = (local_50->fields)._classInstances;
    if (__this_00 != (System_Collections_Generic_List_CustomLogicComponentInstance__o *)0x0) {
      System_Collections_Generic_List<object>__GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
                 (System_Collections_Generic_List_object__o *)__this_00,MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicComp);
      local_38 = local_70;
      local_48 = (System_Collections_Generic_List_Enumerator_T__c *)local_80._0_8_;
      pIStack_40 = (Il2CppType *)local_80._8_8_;
      pCVar9 = player;
      if (player == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
        while (__this_03.fields._8_8_ = pCVar9,
              __this_03.fields._list =
                   (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68,
              __this_03.fields._current = (Il2CppObject *)sentServerTime,
              bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (__this_03,(MethodInfo_3185E20 *)&stack0xffffffffffffffb8),
              pCVar3 = local_38, (char)bVar4 != '\0') {
          pSVar5 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,3);
          if (pSVar5 == (System_Object_array *)0x0) goto LAB_03e20a9d;
          if ((int)pSVar5->max_length == 0) goto LAB_03e20aa2;
          pSVar5->m_Items[0] = (Il2CppObject *)0x0;
          il2cpp_runtime_glue(pSVar5->m_Items,0);
          if ((message != (System_String_o *)0x0) &&
             (lVar6 = il2cpp_runtime_glue(message,(((pSVar5->obj).klass)->_1).element_class),
             lVar6 == 0)) goto LAB_03e20aac;
          if ((uint)pSVar5->max_length < 2) goto LAB_03e20a93;
          pSVar5->m_Items[1] = (Il2CppObject *)message;
          il2cpp_runtime_glue(pSVar5->m_Items + 1,message);
          local_80._0_8_ = sentServerTime;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(DAT_057110a0,local_80);
          if ((pIVar7 != (Il2CppObject *)0x0) &&
             (lVar6 = il2cpp_runtime_glue(pIVar7,(((pSVar5->obj).klass)->_1).element_class),
             lVar6 == 0)) goto LAB_03e20abb;
          if ((uint)pSVar5->max_length < 3) goto LAB_03e20a98;
          pSVar5->m_Items[2] = pIVar7;
          il2cpp_runtime_glue(pSVar5->m_Items + 2,pIVar7);
          if (pCVar3 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) goto LAB_03e20aa7;
          CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                    (pCVar3,"OnNetworkMessage",pSVar5,(MethodInfo *)0x0);
        }
      }
      else {
        while (__this_02.fields._8_8_ = pCVar9,
              __this_02.fields._list =
                   (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68,
              __this_02.fields._current = (Il2CppObject *)sentServerTime,
              bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (__this_02,(MethodInfo_3185E20 *)&stack0xffffffffffffffb8),
              pCVar3 = local_38, (char)bVar4 != '\0') {
          pSVar5 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,3);
          if (pSVar5 == (System_Object_array *)0x0) {
LAB_03e20a9d:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          lVar6 = il2cpp_runtime_glue(player,(((pSVar5->obj).klass)->_1).element_class);
          if (lVar6 == 0) {
            uVar8 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
            il2cpp_glue_02274a00(uVar8,0);
          }
          if ((int)pSVar5->max_length == 0) {
LAB_03e20aa2:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar5->m_Items[0] = (Il2CppObject *)player;
          il2cpp_runtime_glue(pSVar5->m_Items,player);
          if ((message != (System_String_o *)0x0) &&
             (lVar6 = il2cpp_runtime_glue(message,(((pSVar5->obj).klass)->_1).element_class),
             lVar6 == 0)) {
LAB_03e20aac:
            uVar8 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
            il2cpp_glue_02274a00(uVar8,0);
          }
          if ((uint)pSVar5->max_length < 2) {
LAB_03e20a93:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar5->m_Items[1] = (Il2CppObject *)message;
          il2cpp_runtime_glue(pSVar5->m_Items + 1,message);
          local_80._0_8_ = sentServerTime;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(DAT_057110a0,local_80);
          if ((pIVar7 != (Il2CppObject *)0x0) &&
             (lVar6 = il2cpp_runtime_glue(pIVar7,(((pSVar5->obj).klass)->_1).element_class),
             lVar6 == 0)) {
LAB_03e20abb:
            uVar8 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
            il2cpp_glue_02274a00(uVar8,0);
          }
          if ((uint)pSVar5->max_length < 3) {
LAB_03e20a98:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          pSVar5->m_Items[2] = pIVar7;
          il2cpp_runtime_glue(pSVar5->m_Items + 2,pIVar7);
          if (pCVar3 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
LAB_03e20aa7:
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          CustomLogic_CustomLogicComponentInstance__EvaluateMethodForCallbacks
                    (pCVar3,"OnNetworkMessage",pSVar5,(MethodInfo *)0x0);
        }
      }
      __this_04.fields._8_8_ = pCVar9;
      __this_04.fields._list = (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
      __this_04.fields._current = (Il2CppObject *)sentServerTime;
      System_Collections_Generic_List_Enumerator<object>__Dispose
                (__this_04,(MethodInfo_3185E10 *)&stack0xffffffffffffffb8);
      __this_01 = (local_50->fields)._addonInstances;
      if (__this_01 != (System_Collections_Generic_List_CustomLogicClassInstance__o *)0x0) {
        System_Collections_Generic_List<object>__GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
                   (System_Collections_Generic_List_object__o *)__this_01,MethodInfo_List_1_T__Enumerator_CustomLogic_CustomLogicClas);
        local_58 = local_70;
        local_68 = (System_Collections_Generic_List_Enumerator_T__c *)local_80._0_8_;
        pIStack_60 = (Il2CppType *)local_80._8_8_;
        if (player == (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) {
          do {
            do {
              do {
                __this_06.fields._8_8_ = pCVar9;
                __this_06.fields._list =
                     (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
                __this_06.fields._current = (Il2CppObject *)sentServerTime;
                bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                  (__this_06,(MethodInfo_3185E20 *)&local_68);
                pCVar3 = local_58;
                if ((char)bVar4 == '\0') {
LAB_03e20a6b:
                  __this_07.fields._8_8_ = pCVar9;
                  __this_07.fields._list =
                       (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
                  __this_07.fields._current = (Il2CppObject *)sentServerTime;
                  System_Collections_Generic_List_Enumerator<object>__Dispose
                            (__this_07,(MethodInfo_3185E10 *)&local_68);
                  return;
                }
                if (local_58 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) {
LAB_03e20a8e:
                    /* WARNING: Subroutine does not return */
                  il2cpp_raise_exception();
                }
              } while ((char)(local_58->fields).Enabled == '\0');
              if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
                il2cpp_init_class();
                pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
                          (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
              }
              else {
                pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)
                          (*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
              }
            } while ((pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
                    (bVar4 = CustomLogic_CustomLogicEvaluator__HasMethod
                                       (pCVar2,(CustomLogic_CustomLogicClassInstance_o *)pCVar3,
                                        "OnNetworkMessage",(MethodInfo *)0x0), (char)bVar4 == '\0'));
            pSVar5 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,3);
            if (pSVar5 == (System_Object_array *)0x0) {
LAB_03e20ade:
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            if ((int)pSVar5->max_length == 0) {
LAB_03e20ae3:
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar5->m_Items[0] = (Il2CppObject *)pCVar9;
            il2cpp_runtime_glue(pSVar5->m_Items);
            if ((message != (System_String_o *)0x0) &&
               (lVar6 = il2cpp_runtime_glue(message,(((pSVar5->obj).klass)->_1).element_class),
               lVar6 == 0)) {
LAB_03e20b10:
              uVar8 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
              il2cpp_glue_02274a00(uVar8,0);
            }
            if ((uint)pSVar5->max_length < 2) {
LAB_03e20aed:
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            pSVar5->m_Items[1] = (Il2CppObject *)message;
            il2cpp_runtime_glue(pSVar5->m_Items + 1,message);
            local_80._0_8_ = sentServerTime;
            pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(DAT_057110a0,local_80);
            if ((pIVar7 != (Il2CppObject *)0x0) &&
               (lVar6 = il2cpp_runtime_glue(pIVar7,(((pSVar5->obj).klass)->_1).element_class),
               lVar6 == 0)) {
LAB_03e20b01:
              uVar8 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
              il2cpp_glue_02274a00(uVar8,0);
            }
            if ((uint)pSVar5->max_length < 3) goto LAB_03e20ae8;
            pSVar5->m_Items[2] = pIVar7;
            il2cpp_runtime_glue(pSVar5->m_Items + 2,pIVar7);
            CustomLogic_CustomLogicEvaluator__EvaluateMethod
                      (pCVar2,(CustomLogic_CustomLogicClassInstance_o *)pCVar3,"OnNetworkMessage",pSVar5,0
                       ,(MethodInfo *)0x0);
          } while( true );
        }
        while( true ) {
          do {
            do {
              __this_05.fields._8_8_ = pCVar9;
              __this_05.fields._list =
                   (System_Collections_Generic_List_T__o *)in_stack_ffffffffffffff68;
              __this_05.fields._current = (Il2CppObject *)sentServerTime;
              bVar4 = System_Collections_Generic_List_Enumerator<object>__MoveNext
                                (__this_05,(MethodInfo_3185E20 *)&local_68);
              pCVar3 = local_58;
              if ((char)bVar4 == '\0') goto LAB_03e20a6b;
              if (local_58 == (CustomLogic_CustomLogicComponentInstance_o *)0x0) goto LAB_03e20a8e;
            } while ((char)(local_58->fields).Enabled == '\0');
            if (*(int *)(TypeInfo_CustomLogicManager + 0xe4) == 0) {
              il2cpp_init_class();
              pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
            }
            else {
              pCVar2 = *(CustomLogic_CustomLogicEvaluator_o **)(*(long *)(TypeInfo_CustomLogicManager + 0xb8) + 8);
            }
          } while ((pCVar2 == (CustomLogic_CustomLogicEvaluator_o *)0x0) ||
                  (bVar4 = CustomLogic_CustomLogicEvaluator__HasMethod
                                     (pCVar2,(CustomLogic_CustomLogicClassInstance_o *)pCVar3,
                                      "OnNetworkMessage",(MethodInfo *)0x0), (char)bVar4 == '\0'));
          pSVar5 = (System_Object_array *)il2cpp_glue_02274930(TypeInfo_object,3);
          if (pSVar5 == (System_Object_array *)0x0) goto LAB_03e20ade;
          lVar6 = il2cpp_runtime_glue(pCVar9,(((pSVar5->obj).klass)->_1).element_class);
          if (lVar6 == 0) {
            uVar8 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
            il2cpp_glue_02274a00(uVar8,0);
          }
          if ((int)pSVar5->max_length == 0) goto LAB_03e20ae3;
          pSVar5->m_Items[0] = (Il2CppObject *)pCVar9;
          il2cpp_runtime_glue(pSVar5->m_Items);
          if ((message != (System_String_o *)0x0) &&
             (lVar6 = il2cpp_runtime_glue(message,(((pSVar5->obj).klass)->_1).element_class),
             lVar6 == 0)) goto LAB_03e20b10;
          if ((uint)pSVar5->max_length < 2) goto LAB_03e20aed;
          pSVar5->m_Items[1] = (Il2CppObject *)message;
          il2cpp_runtime_glue(pSVar5->m_Items + 1,message);
          local_80._0_8_ = sentServerTime;
          pIVar7 = (Il2CppObject *)il2cpp_runtime_glue(DAT_057110a0,local_80);
          if ((pIVar7 != (Il2CppObject *)0x0) &&
             (lVar6 = il2cpp_runtime_glue(pIVar7,(((pSVar5->obj).klass)->_1).element_class),
             lVar6 == 0)) goto LAB_03e20b01;
          if ((uint)pSVar5->max_length < 3) break;
          pSVar5->m_Items[2] = pIVar7;
          il2cpp_runtime_glue(pSVar5->m_Items + 2,pIVar7);
          CustomLogic_CustomLogicEvaluator__EvaluateMethod
                    (pCVar2,(CustomLogic_CustomLogicClassInstance_o *)pCVar3,"OnNetworkMessage",pSVar5,0,
                     (MethodInfo *)0x0);
        }
LAB_03e20ae8:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$Transfer
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__Transfer (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* player, const MethodInfo* method);
// 0x3e20e60

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
      if ((char)(pPVar2->fields)._IsMine_k__BackingField == '\0') {
        return;
      }
      pCVar1 = (__this->fields).Sync;
      if (pCVar1 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
        CustomLogic_CustomLogicPhotonSync__Transfer(pCVar1,player,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$SendMessage
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__SendMessage (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, CustomLogic_CustomLogicPlayerBuiltin_o* target, System_String_o* msg, const MethodInfo* method);
// 0x3e20eb0

void CustomLogic_CustomLogicNetworkViewBuiltin__SendMessage
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,
               CustomLogic_CustomLogicPlayerBuiltin_o *target,System_String_o *msg,
               MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  
  if ((target != (CustomLogic_CustomLogicPlayerBuiltin_o *)0x0) &&
     (__this_00 = (__this->fields).Sync, __this_00 != (CustomLogic_CustomLogicPhotonSync_o *)0x0)) {
    CustomLogic_CustomLogicPhotonSync__SendMessage
              (__this_00,(target->fields).Player,msg,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$SendMessageAll
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__SendMessageAll (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, System_String_o* msg, const MethodInfo* method);
// 0x3e20ed0

void CustomLogic_CustomLogicNetworkViewBuiltin__SendMessageAll
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,System_String_o *msg,
               MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  
  __this_00 = (__this->fields).Sync;
  if (__this_00 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
    CustomLogic_CustomLogicPhotonSync__SendMessageAll(__this_00,msg,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$SendMessageOthers
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__SendMessageOthers (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, System_String_o* msg, const MethodInfo* method);
// 0x3e20ef0

void CustomLogic_CustomLogicNetworkViewBuiltin__SendMessageOthers
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,System_String_o *msg,
               MethodInfo *method)

{
  CustomLogic_CustomLogicPhotonSync_o *__this_00;
  
  __this_00 = (__this->fields).Sync;
  if (__this_00 != (CustomLogic_CustomLogicPhotonSync_o *)0x0) {
    CustomLogic_CustomLogicPhotonSync__SendMessageOthers(__this_00,msg,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$SendStream
// il2cpp: void CustomLogic_CustomLogicNetworkViewBuiltin__SendStream (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, Il2CppObject* obj, const MethodInfo* method);
// 0x3e20f10

void CustomLogic_CustomLogicNetworkViewBuiltin__SendStream
               (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,Il2CppObject *obj,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this_00;
  System_Object_array *pSVar3;
  long lVar4;
  Il2CppObject *item;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)obj;
  if (DAT_05702ce6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    DAT_05702ce6 = '\x01';
  }
  item = CustomLogic_CustomLogicNetworkViewBuiltin__SerializeStreamObj(obj,method_00);
  lVar4 = MethodInfo_Void_Add;
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
        il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,item);
        return;
      }
      System_Collections_Generic_List<object>__AddWithResize
                (__this_00,item,
                 *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$ReceiveStream
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin__ReceiveStream (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, const MethodInfo* method);
// 0x3e210a0

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin__ReceiveStream
          (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,MethodInfo *method)

{
  System_Collections_Generic_List_object__o *pSVar1;
  Il2CppObject *pIVar2;
  MethodInfo *method_00;
  
  if (DAT_05702ce7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_RemoveAt);
    il2cpp_init_method_metadata(&MethodInfo_Object_get_Item);
    DAT_05702ce7 = '\x01';
  }
  pSVar1 = (__this->fields)._streamObjects;
  if (pSVar1 != (System_Collections_Generic_List_object__o *)0x0) {
    method_00 = (MethodInfo *)0x0;
    pIVar2 = System_Collections_Generic_List<object>__get_Item(pSVar1,0,MethodInfo_Object_get_Item);
    pIVar2 = CustomLogic_CustomLogicNetworkViewBuiltin__DeserializeStreamObj(pIVar2,method_00);
    pSVar1 = (__this->fields)._streamObjects;
    if (pSVar1 != (System_Collections_Generic_List_object__o *)0x0) {
      System_Collections_Generic_List<object>__RemoveAt(pSVar1,0,MethodInfo_Void_RemoveAt);
      return pIVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$SerializeStreamObj
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin__SerializeStreamObj (Il2CppObject* obj, const MethodInfo* method);
// 0x3e20fb0

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin__SerializeStreamObj(Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  byte bVar2;
  Il2CppClass *pIVar3;
  undefined8 *puVar4;
  Il2CppObject *pIVar5;
  Il2CppClass *local_18;
  void *pvStack_10;
  
  if (DAT_05702ce8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Quaternion);
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_05702ce8 = '\x01';
  }
  if (obj != (Il2CppObject *)0x0) {
    pIVar3 = obj->klass;
    bVar1 = (pIVar3->_2).naturalAligment;
    bVar2 = (TypeInfo_CustomLogicVector3Builtin->_2).naturalAligment;
    if ((bVar1 < bVar2) || ((pIVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicVector3Builtin)) {
      bVar2 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
      if ((bVar1 < bVar2) || ((pIVar3->_2).typeHierarchy[(ulong)bVar2 - 1] != TypeInfo_CustomLogicQuaternionBuiltin)) {
        return obj;
      }
      local_18 = obj[3].klass;
      pvStack_10 = obj[3].monitor;
      puVar4 = &TypeInfo_Quaternion;
    }
    else {
      pvStack_10 = (void *)CONCAT44(pvStack_10._4_4_,*(undefined4 *)&obj[3].monitor);
      local_18 = obj[3].klass;
      puVar4 = &TypeInfo_Vector3;
    }
    pIVar5 = (Il2CppObject *)il2cpp_runtime_glue(*puVar4,&local_18);
    return pIVar5;
  }
  return (Il2CppObject *)0x0;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$DeserializeStreamObj
// il2cpp: Il2CppObject* CustomLogic_CustomLogicNetworkViewBuiltin__DeserializeStreamObj (Il2CppObject* obj, const MethodInfo* method);
// 0x3e21120

Il2CppObject *
CustomLogic_CustomLogicNetworkViewBuiltin__DeserializeStreamObj
          (Il2CppObject *obj,MethodInfo *method)

{
  byte bVar1;
  Il2CppClass *pIVar2;
  CustomLogic_CustomLogicQuaternionBuiltin_o *__this;
  UnityEngine_Quaternion_Fields *pUVar3;
  UnityEngine_Vector3_Fields *pUVar4;
  
  if (DAT_05702ce9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicQuaternionBuiltin);
    il2cpp_init_method_metadata(&TypeInfo_CustomLogicVector3Builtin);
    il2cpp_init_method_metadata(&TypeInfo_Quaternion);
    il2cpp_init_method_metadata(&TypeInfo_Vector3);
    DAT_05702ce9 = '\x01';
  }
  if (obj == (Il2CppObject *)0x0) {
    __this = (CustomLogic_CustomLogicQuaternionBuiltin_o *)0x0;
  }
  else {
    pIVar2 = obj->klass;
    if (pIVar2 == TypeInfo_Vector3) {
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_glue(TypeInfo_CustomLogicVector3Builtin);
      if ((obj->klass->_1).element_class != (TypeInfo_Vector3->_1).element_class) {
LAB_03e21234:
                    /* WARNING: Subroutine does not return */
        il2cpp_unwind_resume(obj);
      }
      pUVar4 = (UnityEngine_Vector3_Fields *)il2cpp_glue_022c7330(obj);
      CustomLogic_CustomLogicVector3Builtin___ctor
                ((CustomLogic_CustomLogicVector3Builtin_o *)__this,(UnityEngine_Vector3_o)*pUVar4,
                 (MethodInfo *)0x0);
    }
    else {
      bVar1 = (TypeInfo_CustomLogicQuaternionBuiltin->_2).naturalAligment;
      __this = (CustomLogic_CustomLogicQuaternionBuiltin_o *)obj;
      if ((bVar1 <= (pIVar2->_2).naturalAligment) &&
         ((pIVar2->_2).typeHierarchy[(ulong)bVar1 - 1] == TypeInfo_CustomLogicQuaternionBuiltin)) {
        __this = (CustomLogic_CustomLogicQuaternionBuiltin_o *)il2cpp_runtime_glue();
        if ((obj->klass->_1).element_class != *(Il2CppClass **)(TypeInfo_Quaternion + 0x40))
        goto LAB_03e21234;
        pUVar3 = (UnityEngine_Quaternion_Fields *)il2cpp_glue_022c7330(obj);
        CustomLogic_CustomLogicQuaternionBuiltin___ctor
                  (__this,(UnityEngine_Quaternion_o)*pUVar3,(MethodInfo *)0x0);
      }
    }
  }
  return (Il2CppObject *)__this;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$get_ClassName
// il2cpp: System_String_o* CustomLogic_CustomLogicNetworkViewBuiltin__get_ClassName (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, const MethodInfo* method);
// 0x3e21240

System_String_o *
CustomLogic_CustomLogicNetworkViewBuiltin__get_ClassName
          (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,MethodInfo *method)

{
  if (DAT_05702cea == '\0') {
    il2cpp_init_method_metadata(&"NetworkView");
    DAT_05702cea = '\x01';
  }
  return "NetworkView";
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$get_IsAbstract
// il2cpp: bool CustomLogic_CustomLogicNetworkViewBuiltin__get_IsAbstract (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, const MethodInfo* method);
// 0x3e21270

bool_conflict
CustomLogic_CustomLogicNetworkViewBuiltin__get_IsAbstract
          (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$get_IsStatic
// il2cpp: bool CustomLogic_CustomLogicNetworkViewBuiltin__get_IsStatic (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, const MethodInfo* method);
// 0x3e21280

bool_conflict
CustomLogic_CustomLogicNetworkViewBuiltin__get_IsStatic
          (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,MethodInfo *method)

{
  return 0;
}


// CustomLogic.CustomLogicNetworkViewBuiltin$$get_InheritBaseMembers
// il2cpp: bool CustomLogic_CustomLogicNetworkViewBuiltin__get_InheritBaseMembers (CustomLogic_CustomLogicNetworkViewBuiltin_o* __this, const MethodInfo* method);
// 0x3e21290

bool_conflict
CustomLogic_CustomLogicNetworkViewBuiltin__get_InheritBaseMembers
          (CustomLogic_CustomLogicNetworkViewBuiltin_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),1);
}


