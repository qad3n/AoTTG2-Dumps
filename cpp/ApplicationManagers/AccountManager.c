// Type: ApplicationManagers.AccountManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/AccountManager.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.AccountManager.<>c$$.cctor
// il2cpp: void ApplicationManagers_AccountManager___c___cctor (const MethodInfo* method);
// 0x44a6f40

void ApplicationManagers_AccountManager___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057ae9cd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057ae9cd = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// ApplicationManagers.AccountManager.<>c$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c___ctor (ApplicationManagers_AccountManager___c_o* __this, const MethodInfo* method);
// 0x44a6fb0

void ApplicationManagers_AccountManager___c___ctor
               (ApplicationManagers_AccountManager___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c$$<Register>b__88_1
// il2cpp: void ApplicationManagers_AccountManager___c___Register_b__88_1 (ApplicationManagers_AccountManager___c_o* __this, System_String_o* t, const MethodInfo* method);
// 0x44a6fc0

void ApplicationManagers_AccountManager___c___Register_b__88_1
               (ApplicationManagers_AccountManager___c_o *__this,System_String_o *t,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (g_data_057ae9ce == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae9ce = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aea1b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea1b = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(System_String_o **)(lVar2 + 0x50) = t;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x50,t);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass101_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass101_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass101_0_o* __this, const MethodInfo* method);
// 0x44a7080

void ApplicationManagers_AccountManager___c__DisplayClass101_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass101_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass101_0$$<SendApiJson>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass101_0___SendApiJson_b__0 (ApplicationManagers_AccountManager___c__DisplayClass101_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* result, const MethodInfo* method);
// 0x44a7090

void ApplicationManagers_AccountManager___c__DisplayClass101_0___SendApiJson_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass101_0_o *__this,
               ApplicationManagers_Api_AottgApiResult_o *result,MethodInfo *method)

{
  System_Action_AottgApiResult__o *pSVar1;
  code *vtableDispatch;
  
  *(undefined1 *)&(__this->fields).done = 1;
  pSVar1 = (__this->fields).onComplete;
  if (pSVar1 != (System_Action_AottgApiResult__o *)0x0) {
    vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
    (*vtableDispatch)
              ((pSVar1->fields).method_code,result,(pSVar1->fields).method,vtableDispatch);
    return;
  }
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass105_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass105_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass105_0_o* __this, const MethodInfo* method);
// 0x44a70b0

void ApplicationManagers_AccountManager___c__DisplayClass105_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass105_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass105_0$$<DeleteJson>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass105_0___DeleteJson_b__0 (ApplicationManagers_AccountManager___c__DisplayClass105_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, const MethodInfo* method);
// 0x44a70c0

void ApplicationManagers_AccountManager___c__DisplayClass105_0___DeleteJson_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass105_0_o *__this,
               ApplicationManagers_Api_AottgApiResult_o *r,MethodInfo *method)

{
  (__this->fields).result = r;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass106_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass106_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass106_0_o* __this, const MethodInfo* method);
// 0x44a70d0

void ApplicationManagers_AccountManager___c__DisplayClass106_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass106_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass106_0$$<PostJson>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass106_0___PostJson_b__0 (ApplicationManagers_AccountManager___c__DisplayClass106_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, const MethodInfo* method);
// 0x44a70e0

void ApplicationManagers_AccountManager___c__DisplayClass106_0___PostJson_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass106_0_o *__this,
               ApplicationManagers_Api_AottgApiResult_o *r,MethodInfo *method)

{
  (__this->fields).result = r;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass124_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass124_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass124_0_o* __this, const MethodInfo* method);
// 0x44a70f0

void ApplicationManagers_AccountManager___c__DisplayClass124_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass124_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass124_0$$<OAuthFlow>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass124_0___OAuthFlow_b__0 (ApplicationManagers_AccountManager___c__DisplayClass124_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, const MethodInfo* method);
// 0x44a7100

void ApplicationManagers_AccountManager___c__DisplayClass124_0___OAuthFlow_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass124_0_o *__this,
               ApplicationManagers_Api_AottgApiResult_o *r,MethodInfo *method)

{
  (__this->fields).result = r;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass125_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass125_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass125_0_o* __this, const MethodInfo* method);
// 0x44a7110

void ApplicationManagers_AccountManager___c__DisplayClass125_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass125_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass125_0$$<PollUnityOAuth>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass125_0___PollUnityOAuth_b__0 (ApplicationManagers_AccountManager___c__DisplayClass125_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, const MethodInfo* method);
// 0x44a7120

void ApplicationManagers_AccountManager___c__DisplayClass125_0___PollUnityOAuth_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass125_0_o *__this,
               ApplicationManagers_Api_AottgApiResult_o *r,MethodInfo *method)

{
  (__this->fields).result = r;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass126_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass126_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass126_0_o* __this, const MethodInfo* method);
// 0x44a7130

void ApplicationManagers_AccountManager___c__DisplayClass126_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass126_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass126_0$$<ExchangeOAuthCode>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass126_0___ExchangeOAuthCode_b__0 (ApplicationManagers_AccountManager___c__DisplayClass126_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, const MethodInfo* method);
// 0x44a7140

void ApplicationManagers_AccountManager___c__DisplayClass126_0___ExchangeOAuthCode_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass126_0_o *__this,
               ApplicationManagers_Api_AottgApiResult_o *r,MethodInfo *method)

{
  (__this->fields).result = r;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass166_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass166_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass166_0_o* __this, const MethodInfo* method);
// 0x44a7150

void ApplicationManagers_AccountManager___c__DisplayClass166_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass166_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass166_0$$<GetProfileJson>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass166_0___GetProfileJson_b__0 (ApplicationManagers_AccountManager___c__DisplayClass166_0_o* __this, bool success, System_String_o* error, SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x44a7160

void ApplicationManagers_AccountManager___c__DisplayClass166_0___GetProfileJson_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass166_0_o *__this,bool_conflict success,
               System_String_o *error,SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  System_Action_bool__string__o *pSVar1;
  code *vtableDispatch;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,success);
  if (g_data_057ae9cf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae9cf = '\x01';
  }
  if ((char)success == '\0') {
    pSVar1 = (__this->fields).onComplete;
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    ApplicationManagers_AccountManager__ApplyProfileResponse(node,method_00);
    pSVar1 = (__this->fields).onComplete;
  }
  if (pSVar1 == (System_Action_bool__string__o *)0x0) {
    return;
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)
            ((pSVar1->fields).method_code,success & 0xff,error,(pSVar1->fields).method,vtableDispatch);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass167_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass167_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass167_0_o* __this, const MethodInfo* method);
// 0x44a7200

void ApplicationManagers_AccountManager___c__DisplayClass167_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass167_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass167_0$$<PatchProfileJson>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass167_0___PatchProfileJson_b__0 (ApplicationManagers_AccountManager___c__DisplayClass167_0_o* __this, bool success, System_String_o* error, SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x44a7210

void ApplicationManagers_AccountManager___c__DisplayClass167_0___PatchProfileJson_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass167_0_o *__this,bool_conflict success,
               System_String_o *error,SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  System_Action_bool__string__o *pSVar1;
  code *vtableDispatch;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,success);
  if (g_data_057ae9d0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae9d0 = '\x01';
  }
  if ((char)success == '\0') {
    pSVar1 = (__this->fields).onComplete;
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    ApplicationManagers_AccountManager__ApplyProfileResponse(node,method_00);
    ApplicationManagers_AccountManager__MarkOwnProfileCacheFresh((MethodInfo *)node);
    pSVar1 = (__this->fields).onComplete;
  }
  if (pSVar1 == (System_Action_bool__string__o *)0x0) {
    return;
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)
            ((pSVar1->fields).method_code,success & 0xff,error,(pSVar1->fields).method,vtableDispatch);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass168_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass168_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass168_0_o* __this, const MethodInfo* method);
// 0x44a72b0

void ApplicationManagers_AccountManager___c__DisplayClass168_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass168_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass168_0$$<GetCharacterInfoJson>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass168_0___GetCharacterInfoJson_b__0 (ApplicationManagers_AccountManager___c__DisplayClass168_0_o* __this, bool success, System_String_o* error, SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x44a72c0

void ApplicationManagers_AccountManager___c__DisplayClass168_0___GetCharacterInfoJson_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass168_0_o *__this,bool_conflict success,
               System_String_o *error,SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  System_Action_bool__string__JSONNode__o *pSVar1;
  bool_conflict bVar2;
  undefined8 uVar3;
  Il2CppObject *__this_00;
  
  if (g_data_057ae9d1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"characterInfo");
    g_data_057ae9d1 = '\x01';
  }
  pSVar1 = (__this->fields).onComplete;
  if (pSVar1 != (System_Action_bool__string__JSONNode__o *)0x0) {
    if ((char)success == '\0') {
      uVar3 = 0;
    }
    else {
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar3 = 0;
      __this_00 = (Il2CppObject *)node;
      bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          System_Object___ctor(__this_00,(MethodInfo *)0x0);
          return;
        }
        uVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                          (node,"characterInfo",(node->klass->vtable)._7_get_Item.method);
      }
    }
    (*(code *)(pSVar1->fields).invoke_impl)
              ((pSVar1->fields).method_code,success & 0xff,error,uVar3,(pSVar1->fields).method);
    return;
  }
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass169_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass169_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass169_0_o* __this, const MethodInfo* method);
// 0x44a7390

void ApplicationManagers_AccountManager___c__DisplayClass169_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass169_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass169_0$$<PutCharacterInfoJson>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass169_0___PutCharacterInfoJson_b__0 (ApplicationManagers_AccountManager___c__DisplayClass169_0_o* __this, bool success, System_String_o* error, SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x44a73a0

void ApplicationManagers_AccountManager___c__DisplayClass169_0___PutCharacterInfoJson_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass169_0_o *__this,bool_conflict success,
               System_String_o *error,SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  int iVar1;
  code *vtableDispatch;
  System_Action_bool__string__JSONNode__o *pSVar2;
  bool_conflict bVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  MethodInfo *method_00;
  Il2CppObject *__this_00;
  
  if (g_data_057ae9d2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"characterInfo");
    g_data_057ae9d2 = '\x01';
  }
  if ((char)success == '\0') {
    pSVar4 = (__this->fields).fallbackCharacterInfo;
    pSVar2 = (__this->fields).onComplete;
    goto joined_r0x044a74ae;
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)0x0;
  __this_00 = (Il2CppObject *)node;
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
label_044a74d7:
    pSVar4 = (__this->fields).fallbackCharacterInfo;
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor(__this_00,(MethodInfo *)0x0);
      return;
    }
    pSVar4 = (SimpleJSONFixed_JSONNode_o *)
             (*(node->klass->vtable)._7_get_Item.methodPtr)
                       (node,"characterInfo",(node->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    method_00 = (MethodInfo *)0x0;
    bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar4,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') goto label_044a74d7;
    method_00 = "characterInfo";
    pSVar4 = (SimpleJSONFixed_JSONNode_o *)
             (*(node->klass->vtable)._7_get_Item.methodPtr)
                       (node,"characterInfo",(node->klass->vtable)._7_get_Item.method);
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ApplicationManagers_AccountManager__MarkCharacterInfoCacheFresh(pSVar4,method_00);
  pSVar2 = (__this->fields).onComplete;
joined_r0x044a74ae:
  if (pSVar2 == (System_Action_bool__string__JSONNode__o *)0x0) {
    return;
  }
  vtableDispatch = (code *)(pSVar2->fields).invoke_impl;
  (*vtableDispatch)
            ((pSVar2->fields).method_code,success & 0xff,error,pSVar4,(pSVar2->fields).method,
             vtableDispatch);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass170_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass170_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass170_0_o* __this, const MethodInfo* method);
// 0x44a7520

void ApplicationManagers_AccountManager___c__DisplayClass170_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass170_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass170_0$$<SendMeJson>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass170_0___SendMeJson_b__0 (ApplicationManagers_AccountManager___c__DisplayClass170_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, const MethodInfo* method);
// 0x44a7530

void ApplicationManagers_AccountManager___c__DisplayClass170_0___SendMeJson_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass170_0_o *__this,
               ApplicationManagers_Api_AottgApiResult_o *r,MethodInfo *method)

{
  (__this->fields).result = r;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass171_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass171_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass171_0_o* __this, const MethodInfo* method);
// 0x44a7540

void ApplicationManagers_AccountManager___c__DisplayClass171_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass171_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass171_0$$<SendMeReadJson>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass171_0___SendMeReadJson_b__0 (ApplicationManagers_AccountManager___c__DisplayClass171_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, const MethodInfo* method);
// 0x44a7550

void ApplicationManagers_AccountManager___c__DisplayClass171_0___SendMeReadJson_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass171_0_o *__this,
               ApplicationManagers_Api_AottgApiResult_o *r,MethodInfo *method)

{
  (__this->fields).result = r;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass88_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass88_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass88_0_o* __this, const MethodInfo* method);
// 0x44a0330

void ApplicationManagers_AccountManager___c__DisplayClass88_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass88_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass88_0$$<Register>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass88_0___Register_b__0 (ApplicationManagers_AccountManager___c__DisplayClass88_0_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x44a7560

void ApplicationManagers_AccountManager___c__DisplayClass88_0___Register_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass88_0_o *__this,bool_conflict success,
               System_String_o *error,MethodInfo *method)

{
  int iVar1;
  System_Action_bool__string__o *pSVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  long lVar3;
  
  if (cRam00000000057ae9d3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    cRam00000000057ae9d3 = '\x01';
  }
  if ((char)success != '\0') {
    pSVar2 = (__this->fields).onComplete;
    if (pSVar2 == (System_Action_bool__string__o *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE_00 = (code *)(pSVar2->fields).invoke_impl;
    (*UNRECOVERED_JUMPTABLE_00)
              ((pSVar2->fields).method_code,1,0,(pSVar2->fields).method,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aea1c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea1c = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar3 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(undefined8 *)(lVar3 + 0x58) = 0;
  il2cpp_runtime_helper_022b4080(lVar3 + 0x58,0);
  pSVar2 = (__this->fields).onComplete;
  if (pSVar2 == (System_Action_bool__string__o *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE_00 = (code *)(pSVar2->fields).invoke_impl;
  (*UNRECOVERED_JUMPTABLE_00)
            ((pSVar2->fields).method_code,0,error,(pSVar2->fields).method,UNRECOVERED_JUMPTABLE_00);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass90_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass90_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass90_0_o* __this, const MethodInfo* method);
// 0x44a05e0

void ApplicationManagers_AccountManager___c__DisplayClass90_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass90_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass90_0$$<Refresh>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass90_0___Refresh_b__0 (ApplicationManagers_AccountManager___c__DisplayClass90_0_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x44a7660

void ApplicationManagers_AccountManager___c__DisplayClass90_0___Refresh_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass90_0_o *__this,bool_conflict success,
               System_String_o *error,MethodInfo *method)

{
  int iVar1;
  System_Action_bool__string__o *pSVar2;
  code *vtableDispatch;
  
  if (cRam00000000057ae9d4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    cRam00000000057ae9d4 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aea1d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea1d = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x48) = 0;
  pSVar2 = (__this->fields).onComplete;
  if (pSVar2 != (System_Action_bool__string__o *)0x0) {
    vtableDispatch = (code *)(pSVar2->fields).invoke_impl;
    (*vtableDispatch)
              ((pSVar2->fields).method_code,success & 0xff,error,(pSVar2->fields).method,vtableDispatch
              );
    return;
  }
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass95_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass95_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass95_0_o* __this, const MethodInfo* method);
// 0x44a1210

void ApplicationManagers_AccountManager___c__DisplayClass95_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass95_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass95_0$$<VerifyEmail>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass95_0___VerifyEmail_b__0 (ApplicationManagers_AccountManager___c__DisplayClass95_0_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x44a7760

void ApplicationManagers_AccountManager___c__DisplayClass95_0___VerifyEmail_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass95_0_o *__this,bool_conflict success,
               System_String_o *error,MethodInfo *method)

{
  int iVar1;
  System_Action_bool__string__o *pSVar2;
  code *vtableDispatch;
  long lVar3;
  
  if (g_data_057ae9d5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae9d5 = '\x01';
  }
  if ((char)success == '\0') {
    pSVar2 = (__this->fields).onComplete;
    goto joined_r0x044a780b;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aea1b == '\0') goto label_044a782a;
label_044a77de:
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (g_data_057aea1b != '\0') goto label_044a77de;
label_044a782a:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea1b = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar3 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(undefined8 *)(lVar3 + 0x50) = 0;
  il2cpp_runtime_helper_022b4080(lVar3 + 0x50,0);
  pSVar2 = (__this->fields).onComplete;
joined_r0x044a780b:
  if (pSVar2 == (System_Action_bool__string__o *)0x0) {
    return;
  }
  vtableDispatch = (code *)(pSVar2->fields).invoke_impl;
  (*vtableDispatch)
            ((pSVar2->fields).method_code,success & 0xff,error,(pSVar2->fields).method,vtableDispatch);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass98_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass98_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass98_0_o* __this, const MethodInfo* method);
// 0x44a7860

void ApplicationManagers_AccountManager___c__DisplayClass98_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass98_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass98_0$$<GetAuthMethods>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass98_0___GetAuthMethods_b__0 (ApplicationManagers_AccountManager___c__DisplayClass98_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, const MethodInfo* method);
// 0x44a7870

void ApplicationManagers_AccountManager___c__DisplayClass98_0___GetAuthMethods_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass98_0_o *__this,
               ApplicationManagers_Api_AottgApiResult_o *r,MethodInfo *method)

{
  (__this->fields).result = r;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass99_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass99_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass99_0_o* __this, const MethodInfo* method);
// 0x44a7880

void ApplicationManagers_AccountManager___c__DisplayClass99_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass99_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass99_0$$<SendApiGet>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass99_0___SendApiGet_b__0 (ApplicationManagers_AccountManager___c__DisplayClass99_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* result, const MethodInfo* method);
// 0x44a7890

void ApplicationManagers_AccountManager___c__DisplayClass99_0___SendApiGet_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass99_0_o *__this,
               ApplicationManagers_Api_AottgApiResult_o *result,MethodInfo *method)

{
  System_Action_AottgApiResult__o *pSVar1;
  code *vtableDispatch;
  
  *(undefined1 *)&(__this->fields).done = 1;
  pSVar1 = (__this->fields).onComplete;
  if (pSVar1 != (System_Action_AottgApiResult__o *)0x0) {
    vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
    (*vtableDispatch)
              ((pSVar1->fields).method_code,result,(pSVar1->fields).method,vtableDispatch);
    return;
  }
  return;
}


// ApplicationManagers.AccountManager.<DeleteJson>d__105$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__DeleteJson_d__105___ctor (ApplicationManagers_AccountManager__DeleteJson_d__105_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x44a1dd0

void ApplicationManagers_AccountManager__DeleteJson_d__105___ctor
               (ApplicationManagers_AccountManager__DeleteJson_d__105_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<DeleteJson>d__105$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__DeleteJson_d__105__System_IDisposable_Dispose (ApplicationManagers_AccountManager__DeleteJson_d__105_o* __this, const MethodInfo* method);
// 0x44a78b0

void ApplicationManagers_AccountManager__DeleteJson_d__105__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__DeleteJson_d__105_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<DeleteJson>d__105$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__DeleteJson_d__105__MoveNext (ApplicationManagers_AccountManager__DeleteJson_d__105_o* __this, const MethodInfo* method);
// 0x44a78c0

bool_conflict
ApplicationManagers_AccountManager__DeleteJson_d__105__MoveNext
          (ApplicationManagers_AccountManager__DeleteJson_d__105_o *__this,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_AccountManager_o *pAVar2;
  ApplicationManagers_Api_AottgApiResult_o *pAVar3;
  ApplicationManagers_AccountManager___c__DisplayClass105_0_o *pAVar4;
  Il2CppObject *pIVar5;
  System_Action_bool__string__o *pSVar6;
  System_String_o **ppSVar7;
  intptr_t iVar8;
  System_String_o *pSVar9;
  undefined8 uVar10;
  ApplicationManagers_AccountManager__DeleteJson_d__105_o *pAVar11;
  intptr_t iVar12;
  
  pAVar11 = __this;
  if (g_data_057ae9d6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgApiResult);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_DeleteJson_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass105_0);
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    pAVar11 = (ApplicationManagers_AccountManager__DeleteJson_d__105_o *)&"DELETE";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae9d6 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    pAVar4 = (__this->fields).__8__1;
    if (pAVar4 != (ApplicationManagers_AccountManager___c__DisplayClass105_0_o *)0x0) {
      pAVar3 = (pAVar4->fields).result;
      if ((pAVar3 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) ||
         ((char)(pAVar3->fields)._Success_k__BackingField == '\0')) {
        pSVar6 = (__this->fields).onComplete;
        if (pSVar6 != (System_Action_bool__string__o *)0x0) {
          if (pAVar3 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
            ppSVar7 = (System_String_o **)&"unknown_error";
          }
          else {
            ppSVar7 = &(pAVar3->fields)._Error_k__BackingField;
          }
          pSVar9 = *ppSVar7;
          iVar8 = (pSVar6->fields).method;
          iVar12 = (pSVar6->fields).method_code;
          uVar10 = 0;
          goto label_044a7a78;
        }
      }
      else {
        pSVar6 = (__this->fields).onComplete;
        if (pSVar6 != (System_Action_bool__string__o *)0x0) {
          iVar8 = (pSVar6->fields).method;
          iVar12 = (pSVar6->fields).method_code;
          uVar10 = 1;
          pSVar9 = (System_String_o *)0x0;
label_044a7a78:
          (*(code *)(pSVar6->fields).invoke_impl)(iVar12,uVar10,pSVar9,iVar8);
          return 0;
        }
      }
      return 0;
    }
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    pAVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    pAVar4 = (ApplicationManagers_AccountManager___c__DisplayClass105_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass105_0);
    System_Object___ctor((Il2CppObject *)pAVar4,(MethodInfo *)0x0);
    (__this->fields).__8__1 = pAVar4;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__8__1,pAVar4);
    pAVar4 = (__this->fields).__8__1;
    pAVar11 = (ApplicationManagers_AccountManager__DeleteJson_d__105_o *)0x0;
    if (pAVar4 != (ApplicationManagers_AccountManager___c__DisplayClass105_0_o *)0x0) {
      (pAVar4->fields).result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
      il2cpp_runtime_helper_022b4080(&pAVar4->fields,0);
      pAVar11 = (ApplicationManagers_AccountManager__DeleteJson_d__105_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgApiResult);
      System_Action_object____ctor();
      if (pAVar2 != (ApplicationManagers_AccountManager_o *)0x0) {
        pIVar5 = (Il2CppObject *)ApplicationManagers_AccountManager__SendApiJson();
        (__this->fields).__2__current = pIVar5;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar5);
        (__this->fields).__1__state = 1;
        return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)(pAVar11->fields).__2__current;
}


// ApplicationManagers.AccountManager.<DeleteJson>d__105$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__DeleteJson_d__105__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__DeleteJson_d__105_o* __this, const MethodInfo* method);
// 0x44a7aa0

Il2CppObject *
ApplicationManagers_AccountManager__DeleteJson_d__105__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_AccountManager__DeleteJson_d__105_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<DeleteJson>d__105$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__DeleteJson_d__105__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__DeleteJson_d__105_o* __this, const MethodInfo* method);
// 0x44a7ab0

void ApplicationManagers_AccountManager__DeleteJson_d__105__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__DeleteJson_d__105_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// ApplicationManagers.AccountManager.<DeleteJson>d__105$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__DeleteJson_d__105__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__DeleteJson_d__105_o* __this, const MethodInfo* method);
// 0x44a7af0

Il2CppObject *
ApplicationManagers_AccountManager__DeleteJson_d__105__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__DeleteJson_d__105_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<ExchangeOAuthCode>d__126$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__ExchangeOAuthCode_d__126___ctor (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__126_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x44a3dd0

void ApplicationManagers_AccountManager__ExchangeOAuthCode_d__126___ctor
               (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__126_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<ExchangeOAuthCode>d__126$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__ExchangeOAuthCode_d__126__System_IDisposable_Dispose (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__126_o* __this, const MethodInfo* method);
// 0x44a7b00

void ApplicationManagers_AccountManager__ExchangeOAuthCode_d__126__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__126_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<ExchangeOAuthCode>d__126$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__ExchangeOAuthCode_d__126__MoveNext (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__126_o* __this, const MethodInfo* method);
// 0x44a7b10

bool_conflict
ApplicationManagers_AccountManager__ExchangeOAuthCode_d__126__MoveNext
          (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__126_o *__this,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_AccountManager_o *pAVar2;
  ApplicationManagers_Api_AottgApiResult_o *pAVar3;
  undefined1 auVar4 [16];
  char cVar5;
  ApplicationManagers_AccountManager___c__DisplayClass126_0_o *pAVar6;
  System_String_o *pSVar7;
  System_String_o *pSVar8;
  Il2CppObject *pIVar9;
  System_String_o **ppSVar10;
  long *plVar11;
  undefined8 uVar12;
  long lVar13;
  long *plVar14;
  undefined8 in_RDX;
  undefined8 extraout_RDX;
  ulong extraout_RDX_00;
  ulong extraout_RDX_01;
  ulong uVar15;
  undefined8 extraout_RDX_02;
  bool_conflict success;
  undefined1 auVar16 [12];
  undefined1 auVar17 [16];
  undefined8 local_30;
  
  if (g_data_057ae9d7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgApiResult);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ExchangeOAuthCode_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass126_0);
    il2cpp_runtime_helper_023445d0(&"GET");
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    il2cpp_runtime_helper_023445d0(&"/v1/auth/oauth/session?code=");
    g_data_057ae9d7 = '\x01';
    in_RDX = extraout_RDX;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    pAVar6 = (__this->fields).__8__1;
    if (pAVar6 == (ApplicationManagers_AccountManager___c__DisplayClass126_0_o *)0x0) goto label_044a7e62;
    pAVar3 = (pAVar6->fields).result;
    if (pAVar3 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
      ppSVar10 = (System_String_o **)&"unknown_error";
label_044a7ddf:
      pSVar7 = *ppSVar10;
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        in_RDX = extraout_RDX_02;
      }
      auVar17._8_8_ = in_RDX;
      auVar17._0_8_ = pSVar7;
      success = 0;
      goto label_044a7e01;
    }
    if ((char)(pAVar3->fields)._Success_k__BackingField == '\0') {
      ppSVar10 = &(pAVar3->fields)._Error_k__BackingField;
      goto label_044a7ddf;
    }
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057aea1a == '\0') goto label_044a7e28;
label_044a7d63:
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    else {
      if (g_data_057aea1a != '\0') goto label_044a7d63;
label_044a7e28:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057aea1a = '\x01';
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar13 = TypeInfo_AccountManager;
    *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x49) = 1;
    pAVar6 = (__this->fields).__8__1;
    if (pAVar6 == (ApplicationManagers_AccountManager___c__DisplayClass126_0_o *)0x0) goto label_044a7e6c;
    pAVar3 = (pAVar6->fields).result;
    if (pAVar3 != (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
      pSVar7 = (pAVar3->fields)._ResponseText_k__BackingField;
      if (*(int *)(lVar13 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_AccountManager__ApplyAuthResponse(pSVar7,method);
      uVar15 = extraout_RDX_00;
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        uVar15 = extraout_RDX_01;
      }
      success = 1;
      auVar4._8_8_ = 0;
      auVar4._0_8_ = uVar15;
      auVar17 = auVar4 << 0x40;
      goto label_044a7e01;
    }
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    pAVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    pAVar6 = (ApplicationManagers_AccountManager___c__DisplayClass126_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass126_0);
    System_Object___ctor((Il2CppObject *)pAVar6,(MethodInfo *)0x0);
    (__this->fields).__8__1 = pAVar6;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__8__1,pAVar6);
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar7 = *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x10);
    if (pSVar7 == (System_String_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
label_044a7e5d:
      il2cpp_runtime_helper_022b2c90();
label_044a7e62:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      pSVar7 = System_String__TrimEnd_3afbd10(pSVar7,0x2f,(MethodInfo *)0x0);
      pSVar8 = UnityEngine_Networking_UnityWebRequest__EscapeURL((__this->fields).code,(MethodInfo *)0x0);
      System_String__Concat_3af7150(pSVar7,"/v1/auth/oauth/session?code=",pSVar8,(MethodInfo *)0x0);
      pAVar6 = (__this->fields).__8__1;
      if (pAVar6 == (ApplicationManagers_AccountManager___c__DisplayClass126_0_o *)0x0) goto label_044a7e5d;
      (pAVar6->fields).result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
      il2cpp_runtime_helper_022b4080(&pAVar6->fields,0);
      pAVar6 = (__this->fields).__8__1;
      il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgApiResult);
      System_Action_object____ctor();
      local_30 = 0;
      System_Nullable_int____ctor((System_Nullable_int__o)&local_30,10,MethodInfo_Nullable_1_Int32);
      if (pAVar2 != (ApplicationManagers_AccountManager_o *)0x0) {
        pIVar9 = (Il2CppObject *)ApplicationManagers_AccountManager__SendApiJson();
        (__this->fields).__2__current = pIVar9;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar9);
        (__this->fields).__1__state = 1;
        return (bool_conflict)CONCAT71((int7)((ulong)pAVar6 >> 8),1);
      }
    }
    il2cpp_runtime_helper_022b2c90();
label_044a7e6c:
    il2cpp_runtime_helper_022b2c90();
  }
  auVar16 = il2cpp_runtime_helper_022b2c90();
  if (auVar16._8_4_ != 1) {
    _Unwind_Resume(auVar16._0_8_);
  }
  plVar11 = (long *)__cxa_begin_catch(auVar16._0_8_);
  uVar12 = il2cpp_runtime_helper_023445d0(&TypeInfo_Exception);
  cVar5 = il2cpp_runtime_helper_0233e000(uVar12,*(undefined8 *)*plVar11);
  if (cVar5 != '\0') {
    plVar11 = (long *)*plVar11;
    __cxa_end_catch();
    if (plVar11 != (long *)0x0) {
      pSVar7 = (System_String_o *)(**(code **)(*plVar11 + 0x188))(plVar11,*(undefined8 *)(*plVar11 + 400));
      pSVar8 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"AccountManager: failed to apply OAuth session response: ");
      pSVar7 = System_String__Concat_3ae5ba0(pSVar8,pSVar7,(MethodInfo *)0x0);
      lVar13 = il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
      if (*(int *)(lVar13 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(lVar13);
      }
      UnityEngine_Debug__LogError((Il2CppObject *)pSVar7,(MethodInfo *)0x0);
      lVar13 = il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      if (*(int *)(lVar13 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0(lVar13);
      }
      auVar17 = il2cpp_runtime_helper_023445d0();
      success = 0;
label_044a7e01:
      ApplicationManagers_AccountManager__CompleteOAuth(success,auVar17._0_8_,auVar17._8_8_);
      return 0;
    }
    il2cpp_runtime_helper_022b2c90();
    plVar11 = (long *)0x0;
  }
  plVar14 = (long *)__cxa_allocate_exception(8);
  *plVar14 = *plVar11;
  __cxa_throw(plVar14,&PTR_PTR_05215060,0);
}


// ApplicationManagers.AccountManager.<ExchangeOAuthCode>d__126$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__ExchangeOAuthCode_d__126__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__126_o* __this, const MethodInfo* method);
// 0x44a7fb0

Il2CppObject *
ApplicationManagers_AccountManager__ExchangeOAuthCode_d__126__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__126_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<ExchangeOAuthCode>d__126$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__ExchangeOAuthCode_d__126__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__126_o* __this, const MethodInfo* method);
// 0x44a7fc0

void ApplicationManagers_AccountManager__ExchangeOAuthCode_d__126__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__126_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// ApplicationManagers.AccountManager.<ExchangeOAuthCode>d__126$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__ExchangeOAuthCode_d__126__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__126_o* __this, const MethodInfo* method);
// 0x44a8000

Il2CppObject *
ApplicationManagers_AccountManager__ExchangeOAuthCode_d__126__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__126_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<GetAuthMethods>d__98$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__GetAuthMethods_d__98___ctor (ApplicationManagers_AccountManager__GetAuthMethods_d__98_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x44a1630

void ApplicationManagers_AccountManager__GetAuthMethods_d__98___ctor
               (ApplicationManagers_AccountManager__GetAuthMethods_d__98_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<GetAuthMethods>d__98$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__GetAuthMethods_d__98__System_IDisposable_Dispose (ApplicationManagers_AccountManager__GetAuthMethods_d__98_o* __this, const MethodInfo* method);
// 0x44a8010

void ApplicationManagers_AccountManager__GetAuthMethods_d__98__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__GetAuthMethods_d__98_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<GetAuthMethods>d__98$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__GetAuthMethods_d__98__MoveNext (ApplicationManagers_AccountManager__GetAuthMethods_d__98_o* __this, const MethodInfo* method);
// 0x44a8020

bool_conflict
ApplicationManagers_AccountManager__GetAuthMethods_d__98__MoveNext
          (ApplicationManagers_AccountManager__GetAuthMethods_d__98_o *__this,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_AccountManager_o *__this_00;
  ApplicationManagers_AccountManager___c__DisplayClass98_0_o *pAVar2;
  ApplicationManagers_Api_AottgApiResult_o *pAVar3;
  System_String_o *json;
  long lVar4;
  System_Action_bool__string__o *pSVar5;
  bool_conflict bVar6;
  Il2CppObject *pIVar7;
  System_String_o **ppSVar8;
  undefined8 *puVar9;
  System_Action_AottgApiResult__o *unaff_RBX;
  MethodInfo *in_R9;
  
  if (g_data_057ae9d8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgApiResult);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_GetAuthMethods_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass98_0);
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    il2cpp_runtime_helper_023445d0(&"/v1/auth/methods");
    g_data_057ae9d8 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    pAVar2 = (__this->fields).__8__1;
    if (pAVar2 == (ApplicationManagers_AccountManager___c__DisplayClass98_0_o *)0x0) goto label_044a8321;
    pAVar3 = (pAVar2->fields).result;
    if ((pAVar3 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) ||
       ((char)(pAVar3->fields)._Success_k__BackingField == '\0')) {
      pSVar5 = (__this->fields).onComplete;
      if (pSVar5 != (System_Action_bool__string__o *)0x0) {
        if (pAVar3 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
          ppSVar8 = (System_String_o **)&"unknown_error";
        }
        else {
          ppSVar8 = &(pAVar3->fields)._Error_k__BackingField;
        }
        (*(code *)(pSVar5->fields).invoke_impl)
                  ((pSVar5->fields).method_code,0,*ppSVar8,(pSVar5->fields).method);
        return 0;
      }
    }
    else {
      json = (pAVar3->fields)._ResponseText_k__BackingField;
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = ApplicationManagers_AccountManager__ApplyAuthMethodsResponse(json,method);
      if ((char)bVar6 != '\0') {
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar4 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x80);
        if (lVar4 != 0) {
          (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
        }
      }
      pSVar5 = (__this->fields).onComplete;
      if (pSVar5 != (System_Action_bool__string__o *)0x0) {
        (*(code *)(pSVar5->fields).invoke_impl)((pSVar5->fields).method_code,1,0,(pSVar5->fields).method);
        return 0;
      }
    }
  }
  else if (iVar1 == 0) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    unaff_RBX = (System_Action_AottgApiResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass98_0);
    System_Object___ctor((Il2CppObject *)unaff_RBX,(MethodInfo *)0x0);
    (__this->fields).__8__1 = (ApplicationManagers_AccountManager___c__DisplayClass98_0_o *)unaff_RBX;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__8__1,unaff_RBX);
    pAVar2 = (__this->fields).__8__1;
    if (pAVar2 != (ApplicationManagers_AccountManager___c__DisplayClass98_0_o *)0x0) {
      (pAVar2->fields).result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
      il2cpp_runtime_helper_022b4080(&pAVar2->fields,0);
      unaff_RBX = (System_Action_AottgApiResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgApiResult);
      System_Action_object____ctor();
      if (__this_00 != (ApplicationManagers_AccountManager_o *)0x0) {
        pIVar7 = (Il2CppObject *)
                 ApplicationManagers_AccountManager__SendApiGet
                           (__this_00,"/v1/auth/methods",(System_String_o *)0x0,0,unaff_RBX,in_R9);
        (__this->fields).__2__current = pIVar7;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar7);
        (__this->fields).__1__state = 1;
        return (bool_conflict)CONCAT71((int7)((ulong)unaff_RBX >> 8),1);
      }
    }
label_044a8321:
    il2cpp_runtime_helper_022b2c90();
    puVar9 = (undefined8 *)__cxa_allocate_exception(8);
    *puVar9 = (Il2CppClass *)unaff_RBX->klass;
    __cxa_throw(puVar9,&PTR_PTR_05215060,0);
  }
  return 0;
}


// ApplicationManagers.AccountManager.<GetAuthMethods>d__98$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__GetAuthMethods_d__98__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__GetAuthMethods_d__98_o* __this, const MethodInfo* method);
// 0x44a8360

Il2CppObject *
ApplicationManagers_AccountManager__GetAuthMethods_d__98__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_AccountManager__GetAuthMethods_d__98_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<GetAuthMethods>d__98$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__GetAuthMethods_d__98__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__GetAuthMethods_d__98_o* __this, const MethodInfo* method);
// 0x44a8370

void ApplicationManagers_AccountManager__GetAuthMethods_d__98__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__GetAuthMethods_d__98_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// ApplicationManagers.AccountManager.<GetAuthMethods>d__98$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__GetAuthMethods_d__98__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__GetAuthMethods_d__98_o* __this, const MethodInfo* method);
// 0x44a83b0

Il2CppObject *
ApplicationManagers_AccountManager__GetAuthMethods_d__98__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__GetAuthMethods_d__98_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<GetCharacterInfoJson>d__168$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__GetCharacterInfoJson_d__168___ctor (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__168_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x44a61c0

void ApplicationManagers_AccountManager__GetCharacterInfoJson_d__168___ctor
               (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__168_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<GetCharacterInfoJson>d__168$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__GetCharacterInfoJson_d__168__System_IDisposable_Dispose (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__168_o* __this, const MethodInfo* method);
// 0x44a83c0

void ApplicationManagers_AccountManager__GetCharacterInfoJson_d__168__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__168_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<GetCharacterInfoJson>d__168$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__GetCharacterInfoJson_d__168__MoveNext (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__168_o* __this, const MethodInfo* method);
// 0x44a83d0

bool_conflict
ApplicationManagers_AccountManager__GetCharacterInfoJson_d__168__MoveNext
          (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__168_o *__this,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_AccountManager_o *pAVar2;
  bool_conflict bVar3;
  Il2CppObject *__this_00;
  Il2CppObject *pIVar4;
  undefined8 uVar5;
  int32_t iVar6;
  
  if (g_data_057ae9d9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_bool_string_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_GetCharacterInfoJson_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass168_0);
    il2cpp_runtime_helper_023445d0(&"GET");
    il2cpp_runtime_helper_023445d0(&"/v1/me/character-info");
    g_data_057ae9d9 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  bVar3 = 0;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0;
    }
    pAVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass168_0);
    pIVar4 = __this_00;
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Il2CppObject *)0x0) {
      __this_00[1].klass = (Il2CppClass *)(__this->fields).onComplete;
      il2cpp_runtime_helper_022b4080(__this_00 + 1);
      pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_bool_string_JSONNode);
      System_Action_bool__object__object____ctor();
      if (pAVar2 != (ApplicationManagers_AccountManager_o *)0x0) {
        iVar6 = 1;
        pIVar4 = (Il2CppObject *)ApplicationManagers_AccountManager__SendMeJson();
        (__this->fields).__2__current = pIVar4;
        uVar5 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar4);
        bVar3 = (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),1);
        goto label_044a84f6;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    return (bool_conflict)pIVar4[1].monitor;
  }
  iVar6 = -1;
label_044a84f6:
  (__this->fields).__1__state = iVar6;
  return bVar3;
}


// ApplicationManagers.AccountManager.<GetCharacterInfoJson>d__168$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__GetCharacterInfoJson_d__168__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__168_o* __this, const MethodInfo* method);
// 0x44a8510

Il2CppObject *
ApplicationManagers_AccountManager__GetCharacterInfoJson_d__168__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__168_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<GetCharacterInfoJson>d__168$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__GetCharacterInfoJson_d__168__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__168_o* __this, const MethodInfo* method);
// 0x44a8520

void ApplicationManagers_AccountManager__GetCharacterInfoJson_d__168__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__168_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// ApplicationManagers.AccountManager.<GetCharacterInfoJson>d__168$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__GetCharacterInfoJson_d__168__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__168_o* __this, const MethodInfo* method);
// 0x44a8560

Il2CppObject *
ApplicationManagers_AccountManager__GetCharacterInfoJson_d__168__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__168_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<GetProfileJson>d__166$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__GetProfileJson_d__166___ctor (ApplicationManagers_AccountManager__GetProfileJson_d__166_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x44a6180

void ApplicationManagers_AccountManager__GetProfileJson_d__166___ctor
               (ApplicationManagers_AccountManager__GetProfileJson_d__166_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<GetProfileJson>d__166$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__GetProfileJson_d__166__System_IDisposable_Dispose (ApplicationManagers_AccountManager__GetProfileJson_d__166_o* __this, const MethodInfo* method);
// 0x44a8570

void ApplicationManagers_AccountManager__GetProfileJson_d__166__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__GetProfileJson_d__166_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<GetProfileJson>d__166$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__GetProfileJson_d__166__MoveNext (ApplicationManagers_AccountManager__GetProfileJson_d__166_o* __this, const MethodInfo* method);
// 0x44a8580

bool_conflict
ApplicationManagers_AccountManager__GetProfileJson_d__166__MoveNext
          (ApplicationManagers_AccountManager__GetProfileJson_d__166_o *__this,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_AccountManager_o *pAVar2;
  bool_conflict bVar3;
  Il2CppObject *__this_00;
  Il2CppObject *pIVar4;
  undefined8 uVar5;
  int32_t iVar6;
  
  if (g_data_057ae9da == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_bool_string_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_GetProfileJson_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass166_0);
    il2cpp_runtime_helper_023445d0(&"GET");
    il2cpp_runtime_helper_023445d0(&"/v1/me");
    g_data_057ae9da = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  bVar3 = 0;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0;
    }
    pAVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass166_0);
    pIVar4 = __this_00;
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Il2CppObject *)0x0) {
      __this_00[1].klass = (Il2CppClass *)(__this->fields).onComplete;
      il2cpp_runtime_helper_022b4080(__this_00 + 1);
      pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_bool_string_JSONNode);
      System_Action_bool__object__object____ctor();
      if (pAVar2 != (ApplicationManagers_AccountManager_o *)0x0) {
        iVar6 = 1;
        pIVar4 = (Il2CppObject *)ApplicationManagers_AccountManager__SendMeJson();
        (__this->fields).__2__current = pIVar4;
        uVar5 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar4);
        bVar3 = (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),1);
        goto label_044a86a6;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    return (bool_conflict)pIVar4[1].monitor;
  }
  iVar6 = -1;
label_044a86a6:
  (__this->fields).__1__state = iVar6;
  return bVar3;
}


// ApplicationManagers.AccountManager.<GetProfileJson>d__166$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__GetProfileJson_d__166__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__GetProfileJson_d__166_o* __this, const MethodInfo* method);
// 0x44a86c0

Il2CppObject *
ApplicationManagers_AccountManager__GetProfileJson_d__166__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_AccountManager__GetProfileJson_d__166_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<GetProfileJson>d__166$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__GetProfileJson_d__166__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__GetProfileJson_d__166_o* __this, const MethodInfo* method);
// 0x44a86d0

void ApplicationManagers_AccountManager__GetProfileJson_d__166__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__GetProfileJson_d__166_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// ApplicationManagers.AccountManager.<GetProfileJson>d__166$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__GetProfileJson_d__166__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__GetProfileJson_d__166_o* __this, const MethodInfo* method);
// 0x44a8710

Il2CppObject *
ApplicationManagers_AccountManager__GetProfileJson_d__166__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__GetProfileJson_d__166_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<OAuthFlow>d__124$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__OAuthFlow_d__124___ctor (ApplicationManagers_AccountManager__OAuthFlow_d__124_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x44a3c50

void ApplicationManagers_AccountManager__OAuthFlow_d__124___ctor
               (ApplicationManagers_AccountManager__OAuthFlow_d__124_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<OAuthFlow>d__124$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__OAuthFlow_d__124__System_IDisposable_Dispose (ApplicationManagers_AccountManager__OAuthFlow_d__124_o* __this, const MethodInfo* method);
// 0x44a8720

void ApplicationManagers_AccountManager__OAuthFlow_d__124__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__OAuthFlow_d__124_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<OAuthFlow>d__124$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__OAuthFlow_d__124__MoveNext (ApplicationManagers_AccountManager__OAuthFlow_d__124_o* __this, const MethodInfo* method);
// 0x44a8730

bool_conflict
ApplicationManagers_AccountManager__OAuthFlow_d__124__MoveNext
          (ApplicationManagers_AccountManager__OAuthFlow_d__124_o *__this,MethodInfo *method)

{
  ApplicationManagers_AccountManager___c__DisplayClass124_0_o **ppAVar1;
  int iVar2;
  int32_t iVar3;
  ApplicationManagers_AccountManager_o *pAVar4;
  ApplicationManagers_Api_AottgApiResult_o *pAVar5;
  bool_conflict bVar6;
  ApplicationManagers_AccountManager___c__DisplayClass124_0_o *pAVar7;
  ApplicationManagers_AccountManager__OAuthFlow_d__124_o *pAVar8;
  System_String_o *pSVar9;
  undefined8 *puVar10;
  SimpleJSONFixed_JSONObject_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar11;
  Il2CppObject *pIVar12;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  System_String_o **ppSVar13;
  ApplicationManagers_AccountManager__OAuthFlow_d__124_o *value;
  undefined1 auStack_98 [48];
  ApplicationManagers_AccountManager_UnityOAuthStart_o AStack_68;
  
  pAVar8 = (ApplicationManagers_AccountManager__OAuthFlow_d__124_o *)auStack_98;
  ppSVar13 = (System_String_o **)__this;
  if (g_data_057ae9db == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgApiResult);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Int32);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OAuthFlow_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass124_0);
    il2cpp_runtime_helper_023445d0(&"google");
    il2cpp_runtime_helper_023445d0(&"Provider is not supported.");
    il2cpp_runtime_helper_023445d0(&"POST");
    il2cpp_runtime_helper_023445d0(&"bad_response");
    il2cpp_runtime_helper_023445d0(&"provider");
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    il2cpp_runtime_helper_023445d0(&"/v1/auth/oauth/unity/start");
    ppSVar13 = &"discord";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae9db = '\x01';
    in_RDX = extraout_RDX;
  }
  AStack_68.fields.ExpiresAt.fields._offsetMinutes = 0;
  AStack_68.fields.ExpiresAt.fields._10_6_ = 0;
  AStack_68.fields.PollIntervalSeconds = 0;
  AStack_68.fields._44_4_ = 0;
  AStack_68.fields.AuthorizationUrl = (System_String_o *)0x0;
  AStack_68.fields.ExpiresAt.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
  AStack_68.fields.SessionId = (System_String_o *)0x0;
  AStack_68.fields.PollToken = (System_String_o *)0x0;
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 2) {
    (__this->fields).__1__state = -1;
    return 0;
  }
  pAVar4 = (__this->fields).__4__this;
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    if (pAVar4 == (ApplicationManagers_AccountManager_o *)0x0) {
label_044a8cdf:
      il2cpp_runtime_helper_022b2c90();
      return (bool_conflict)
             (((ApplicationManagers_AccountManager__OAuthFlow_d__124_o *)ppSVar13)->fields).__2__current;
    }
    iVar2 = (__this->fields).attemptId;
    if (g_data_057ae9ab == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae9ab = '\x01';
      in_RDX = extraout_RDX_00;
    }
    if ((pAVar4->fields)._oauthAttemptId != iVar2) {
      return 0;
    }
    if (*(int *)((long)&TypeInfo_AccountManager[3].fields.provider + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      in_RDX = extraout_RDX_01;
    }
    if (TypeInfo_AccountManager[2].fields.__8__1[5].fields.result == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
      return 0;
    }
    pAVar7 = (__this->fields).__8__1;
    ppSVar13 = (System_String_o **)TypeInfo_AccountManager;
    if (pAVar7 == (ApplicationManagers_AccountManager___c__DisplayClass124_0_o *)0x0) goto label_044a8cdf;
    pAVar5 = (pAVar7->fields).result;
    if (pAVar5 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
      iVar2 = *(int *)((long)&TypeInfo_AccountManager[3].fields.provider + 4);
      pSVar9 = "unknown_error";
    }
    else {
      if ((char)(pAVar5->fields)._Success_k__BackingField != '\0') {
        pSVar9 = (pAVar5->fields)._ResponseText_k__BackingField;
        if (*(int *)((long)&TypeInfo_AccountManager[3].fields.provider + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          in_RDX = extraout_RDX_02;
        }
        bVar6 = ApplicationManagers_AccountManager__TryParseUnityOAuthStart(pSVar9,&AStack_68,in_RDX);
        pSVar9 = AStack_68.fields.AuthorizationUrl;
        if ((char)bVar6 != '\0') {
          if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          UnityEngine_Application__OpenURL(pSVar9,(MethodInfo *)0x0);
          iVar3 = (__this->fields).attemptId;
          bVar6 = (__this->fields).reportNetworkError;
          auStack_98._32_4_ = AStack_68.fields.ExpiresAt.fields._8_4_;
          auStack_98._36_4_ = AStack_68.fields.ExpiresAt.fields._12_4_;
          auStack_98._40_4_ = AStack_68.fields.PollIntervalSeconds;
          auStack_98._44_4_ = AStack_68.fields._44_4_;
          auStack_98._16_4_ = (bool_conflict)AStack_68.fields.AuthorizationUrl;
          auStack_98._20_4_ = AStack_68.fields.AuthorizationUrl._4_4_;
          auStack_98._24_4_ = (undefined4)AStack_68.fields.ExpiresAt.fields._dateTime.fields._dateData;
          auStack_98._28_4_ = AStack_68.fields.ExpiresAt.fields._dateTime.fields._dateData._4_4_;
          auStack_98._0_8_ = AStack_68.fields.SessionId;
          auStack_98._8_4_ = AStack_68.fields.PollToken._0_4_;
          auStack_98._12_4_ = AStack_68.fields.PollToken._4_4_;
          if (g_data_057ae9a8 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_PollUnityOAuth_d__125);
            g_data_057ae9a8 = '\x01';
          }
          pAVar8 = (ApplicationManagers_AccountManager__OAuthFlow_d__124_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PollUnityOAuth_d__125);
          ppSVar13 = (System_String_o **)pAVar8;
          System_Object___ctor((Il2CppObject *)pAVar8,(MethodInfo *)0x0);
          (pAVar8->fields).__1__state = 0;
          if (pAVar8 != (ApplicationManagers_AccountManager__OAuthFlow_d__124_o *)0x0) {
            *(ApplicationManagers_AccountManager_o **)&pAVar8[1].fields = pAVar4;
            il2cpp_runtime_helper_022b4080(&pAVar8[1].fields,pAVar4);
            *(undefined4 *)&pAVar8[1].klass = auStack_98._32_4_;
            *(undefined4 *)((long)&pAVar8[1].klass + 4) = auStack_98._36_4_;
            *(undefined4 *)&pAVar8[1].monitor = auStack_98._40_4_;
            *(undefined4 *)((long)&pAVar8[1].monitor + 4) = auStack_98._44_4_;
            (pAVar8->fields).reportNetworkError = auStack_98._16_4_;
            (pAVar8->fields).attemptId = auStack_98._20_4_;
            *(undefined4 *)&(pAVar8->fields).__8__1 = auStack_98._24_4_;
            *(undefined4 *)((long)&(pAVar8->fields).__8__1 + 4) = auStack_98._28_4_;
            *(undefined4 *)&(pAVar8->fields).provider = auStack_98._0_4_;
            *(undefined4 *)((long)&(pAVar8->fields).provider + 4) = auStack_98._4_4_;
            *(undefined4 *)&(pAVar8->fields).__4__this = auStack_98._8_4_;
            *(undefined4 *)((long)&(pAVar8->fields).__4__this + 4) = auStack_98._12_4_;
            il2cpp_runtime_helper_022b4080(&(pAVar8->fields).provider,0);
            *(int32_t *)((long)&pAVar8[1].fields.__2__current + 4) = iVar3;
            *(char *)&pAVar8[1].fields.__2__current = (char)bVar6;
            (__this->fields).__2__current = (Il2CppObject *)pAVar8;
            il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pAVar8);
            (__this->fields).__1__state = 2;
            return (bool_conflict)CONCAT71((int7)((ulong)pAVar8 >> 8),1);
          }
          goto label_044a8cdf;
        }
        in_RDX = extraout_RDX_03;
        if (*(int *)((long)&TypeInfo_AccountManager[3].fields.provider + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          in_RDX = extraout_RDX_07;
        }
        puVar10 = &"bad_response";
        goto label_044a8b16;
      }
      pSVar9 = (pAVar5->fields)._Error_k__BackingField;
      iVar2 = *(int *)((long)&TypeInfo_AccountManager[3].fields.provider + 4);
    }
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
      in_RDX = extraout_RDX_06;
    }
  }
  else {
    if (iVar2 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    pAVar7 = (ApplicationManagers_AccountManager___c__DisplayClass124_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass124_0);
    System_Object___ctor((Il2CppObject *)pAVar7,(MethodInfo *)0x0);
    ppAVar1 = &(__this->fields).__8__1;
    (__this->fields).__8__1 = pAVar7;
    il2cpp_runtime_helper_022b4080(ppAVar1);
    value = (ApplicationManagers_AccountManager__OAuthFlow_d__124_o *)(__this->fields).provider;
    if (*(int *)((long)&TypeInfo_AccountManager[3].fields.provider + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    ppSVar13 = (System_String_o **)value;
    bVar6 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      if ((value == (ApplicationManagers_AccountManager__OAuthFlow_d__124_o *)0x0) ||
         (pSVar9 = System_String__Trim((System_String_o *)value,(MethodInfo *)0x0),
         ppSVar13 = (System_String_o **)value, pSVar9 == (System_String_o *)0x0)) goto label_044a8cdf;
      pSVar9 = System_String__ToLowerInvariant(pSVar9,(MethodInfo *)0x0);
    }
    else {
      pSVar9 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    ppSVar13 = &(__this->fields).provider;
    *ppSVar13 = pSVar9;
    il2cpp_runtime_helper_022b4080(ppSVar13);
    bVar6 = System_String__op_Inequality(*ppSVar13,"discord",(MethodInfo *)0x0);
    if (((char)bVar6 == '\0') ||
       (bVar6 = System_String__op_Inequality(*ppSVar13,"google",(MethodInfo *)0x0), (char)bVar6 == '\0'))
    {
      __this_00 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
      SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
      ppSVar13 = (System_String_o **)*ppSVar13;
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar11 = SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)ppSVar13,(MethodInfo *)0x0);
      if (__this_00 != (SimpleJSONFixed_JSONObject_o *)0x0) {
        (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
                  (__this_00,"provider",pSVar11,(__this_00->klass->vtable)._8_set_Item.method);
        pAVar7 = *ppAVar1;
        ppSVar13 = (System_String_o **)(ApplicationManagers_AccountManager__OAuthFlow_d__124_o *)0x0;
        if (pAVar7 != (ApplicationManagers_AccountManager___c__DisplayClass124_0_o *)0x0) {
          (pAVar7->fields).result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
          il2cpp_runtime_helper_022b4080(&pAVar7->fields,0);
          (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                    (__this_00,(__this_00->klass->vtable)._3_ToString.method);
          pAVar7 = (__this->fields).__8__1;
          il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgApiResult);
          System_Action_object____ctor();
          auStack_98._0_8_ = (ApplicationManagers_AccountManager__OAuthFlow_d__124_c *)0x0;
          System_Nullable_int____ctor((System_Nullable_int__o)auStack_98,10,MethodInfo_Nullable_1_Int32);
          ppSVar13 = (System_String_o **)pAVar8;
          if (pAVar4 != (ApplicationManagers_AccountManager_o *)0x0) {
            pIVar12 = (Il2CppObject *)ApplicationManagers_AccountManager__SendApiJson();
            (__this->fields).__2__current = pIVar12;
            il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar12);
            (__this->fields).__1__state = 1;
            return (bool_conflict)CONCAT71((int7)((ulong)pAVar7 >> 8),1);
          }
        }
      }
      goto label_044a8cdf;
    }
    in_RDX = extraout_RDX_04;
    if (*(int *)((long)&TypeInfo_AccountManager[3].fields.provider + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      in_RDX = extraout_RDX_05;
    }
    puVar10 = &"Provider is not supported.";
label_044a8b16:
    pSVar9 = (System_String_o *)*puVar10;
  }
  ApplicationManagers_AccountManager__CompleteOAuth(0,pSVar9,in_RDX);
  return 0;
}


// ApplicationManagers.AccountManager.<OAuthFlow>d__124$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__OAuthFlow_d__124__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__OAuthFlow_d__124_o* __this, const MethodInfo* method);
// 0x44a8cf0

Il2CppObject *
ApplicationManagers_AccountManager__OAuthFlow_d__124__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_AccountManager__OAuthFlow_d__124_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<OAuthFlow>d__124$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__OAuthFlow_d__124__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__OAuthFlow_d__124_o* __this, const MethodInfo* method);
// 0x44a8d00

void ApplicationManagers_AccountManager__OAuthFlow_d__124__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__OAuthFlow_d__124_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// ApplicationManagers.AccountManager.<OAuthFlow>d__124$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__OAuthFlow_d__124__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__OAuthFlow_d__124_o* __this, const MethodInfo* method);
// 0x44a8d40

Il2CppObject *
ApplicationManagers_AccountManager__OAuthFlow_d__124__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__OAuthFlow_d__124_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<PatchProfileJson>d__167$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__PatchProfileJson_d__167___ctor (ApplicationManagers_AccountManager__PatchProfileJson_d__167_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x44a61a0

void ApplicationManagers_AccountManager__PatchProfileJson_d__167___ctor
               (ApplicationManagers_AccountManager__PatchProfileJson_d__167_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<PatchProfileJson>d__167$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__PatchProfileJson_d__167__System_IDisposable_Dispose (ApplicationManagers_AccountManager__PatchProfileJson_d__167_o* __this, const MethodInfo* method);
// 0x44a8d50

void ApplicationManagers_AccountManager__PatchProfileJson_d__167__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__PatchProfileJson_d__167_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<PatchProfileJson>d__167$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__PatchProfileJson_d__167__MoveNext (ApplicationManagers_AccountManager__PatchProfileJson_d__167_o* __this, const MethodInfo* method);
// 0x44a8d60

bool_conflict
ApplicationManagers_AccountManager__PatchProfileJson_d__167__MoveNext
          (ApplicationManagers_AccountManager__PatchProfileJson_d__167_o *__this,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_AccountManager_o *pAVar2;
  bool_conflict bVar3;
  Il2CppObject *__this_00;
  Il2CppObject *pIVar4;
  undefined8 uVar5;
  int32_t iVar6;
  
  if (g_data_057ae9dc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_bool_string_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_PatchProfileJson_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass167_0);
    il2cpp_runtime_helper_023445d0(&"/v1/me");
    il2cpp_runtime_helper_023445d0(&"PATCH");
    g_data_057ae9dc = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  bVar3 = 0;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0;
    }
    pAVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass167_0);
    pIVar4 = __this_00;
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Il2CppObject *)0x0) {
      __this_00[1].klass = (Il2CppClass *)(__this->fields).onComplete;
      il2cpp_runtime_helper_022b4080(__this_00 + 1);
      pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_bool_string_JSONNode);
      System_Action_bool__object__object____ctor();
      if (pAVar2 != (ApplicationManagers_AccountManager_o *)0x0) {
        pIVar4 = (Il2CppObject *)ApplicationManagers_AccountManager__SendMeJson();
        (__this->fields).__2__current = pIVar4;
        uVar5 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar4);
        bVar3 = (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),1);
        iVar6 = 1;
        goto label_044a8e8f;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    return (bool_conflict)pIVar4[1].monitor;
  }
  iVar6 = -1;
label_044a8e8f:
  (__this->fields).__1__state = iVar6;
  return bVar3;
}


// ApplicationManagers.AccountManager.<PatchProfileJson>d__167$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__PatchProfileJson_d__167__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__PatchProfileJson_d__167_o* __this, const MethodInfo* method);
// 0x44a8eb0

Il2CppObject *
ApplicationManagers_AccountManager__PatchProfileJson_d__167__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_AccountManager__PatchProfileJson_d__167_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<PatchProfileJson>d__167$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__PatchProfileJson_d__167__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__PatchProfileJson_d__167_o* __this, const MethodInfo* method);
// 0x44a8ec0

void ApplicationManagers_AccountManager__PatchProfileJson_d__167__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__PatchProfileJson_d__167_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// ApplicationManagers.AccountManager.<PatchProfileJson>d__167$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__PatchProfileJson_d__167__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__PatchProfileJson_d__167_o* __this, const MethodInfo* method);
// 0x44a8f00

Il2CppObject *
ApplicationManagers_AccountManager__PatchProfileJson_d__167__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__PatchProfileJson_d__167_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<PollUnityOAuth>d__125$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__PollUnityOAuth_d__125___ctor (ApplicationManagers_AccountManager__PollUnityOAuth_d__125_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x44a3d20

void ApplicationManagers_AccountManager__PollUnityOAuth_d__125___ctor
               (ApplicationManagers_AccountManager__PollUnityOAuth_d__125_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<PollUnityOAuth>d__125$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__PollUnityOAuth_d__125__System_IDisposable_Dispose (ApplicationManagers_AccountManager__PollUnityOAuth_d__125_o* __this, const MethodInfo* method);
// 0x44a8f10

void ApplicationManagers_AccountManager__PollUnityOAuth_d__125__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__PollUnityOAuth_d__125_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<PollUnityOAuth>d__125$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__PollUnityOAuth_d__125__MoveNext (ApplicationManagers_AccountManager__PollUnityOAuth_d__125_o* __this, const MethodInfo* method);
// 0x44a8f20

bool_conflict
ApplicationManagers_AccountManager__PollUnityOAuth_d__125__MoveNext
          (ApplicationManagers_AccountManager__PollUnityOAuth_d__125_o *__this,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  ApplicationManagers_AccountManager_o *pAVar3;
  long lVar4;
  ApplicationManagers_Api_AottgApiResult_o *pAVar5;
  undefined1 auVar6 [12];
  undefined8 uVar7;
  undefined2 uVar8;
  undefined2 uVar9;
  undefined8 uVar10;
  undefined2 uVar11;
  ApplicationManagers_AccountManager_UnityOAuthStart_o *pAVar12;
  bool_conflict bVar13;
  ApplicationManagers_AccountManager___c__DisplayClass125_0_o *pAVar14;
  undefined8 *puVar15;
  System_String_o *pSVar16;
  System_String_o *str2;
  Il2CppObject *pIVar17;
  ApplicationManagers_AccountManager__PollUnityOAuth_d__125_o *__this_00;
  UnityEngine_WaitForSecondsRealtime_o *__this_01;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *extraout_RDX_10;
  undefined7 uVar18;
  ApplicationManagers_AccountManager__PollUnityOAuth_d__125_o *pAVar19;
  MethodInfo *in_R8;
  System_String_o **error;
  float fVar20;
  double dVar21;
  float fVar22;
  System_DateTimeOffset_o SVar23;
  System_DateTimeOffset_o SVar24;
  System_DateTimeOffset_o right;
  System_DateTimeOffset_o right_00;
  System_String_o *pSStack_60;
  double dStack_58;
  System_String_o *pSStack_50;
  undefined8 uStack_48;
  System_TimeSpan_Fields SStack_40;
  System_String_o *pSStack_38;
  MethodInfo *extraout_RDX_05;
  
  pAVar19 = __this;
  if (g_data_057ae9dd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgApiResult);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Math);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Nullable_1_Int32);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TimeSpan);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_PollUnityOAuth_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass125_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_WaitForSecondsRealtime);
    il2cpp_runtime_helper_023445d0(&"oauth_failed");
    il2cpp_runtime_helper_023445d0(&"bad_response");
    il2cpp_runtime_helper_023445d0(&"GET");
    il2cpp_runtime_helper_023445d0(&"oauth_missing_code");
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    il2cpp_runtime_helper_023445d0(&"/v1/auth/oauth/unity/status?sessionId=");
    il2cpp_runtime_helper_023445d0(&"oauth_timeout");
    il2cpp_runtime_helper_023445d0(&"failed");
    il2cpp_runtime_helper_023445d0(&"pending");
    pAVar19 = (ApplicationManagers_AccountManager__PollUnityOAuth_d__125_o *)&"complete";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae9dd = '\x01';
    in_RDX = extraout_RDX;
  }
  pSStack_60 = (System_String_o *)0x0;
  pSStack_50 = (System_String_o *)0x0;
  pSStack_38 = (System_String_o *)0x0;
  SStack_40._ticks = 0;
  uVar1 = (__this->fields).__1__state;
  if (uVar1 < 4) {
    pAVar3 = (__this->fields).__4__this;
    uVar18 = (undefined7)((ulong)__this >> 8);
    switch(uVar1) {
    case 0:
      (__this->fields).__1__state = -1;
      fVar20 = (float)(__this->fields).start.fields.PollIntervalSeconds;
      fVar22 = 1.0;
      if (1.0 <= fVar20) {
        fVar22 = fVar20;
      }
      (__this->fields)._pollSeconds_5__2 = fVar22;
      break;
    case 1:
      (__this->fields).__1__state = -1;
      if (pAVar3 != (ApplicationManagers_AccountManager_o *)0x0) {
        iVar2 = (__this->fields).attemptId;
        if (g_data_057ae9ab == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
          g_data_057ae9ab = '\x01';
          in_RDX = extraout_RDX_00;
        }
        if ((pAVar3->fields)._oauthAttemptId != iVar2) {
          return 0;
        }
        if (*(int *)((long)&TypeInfo_AccountManager[2].klass + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          in_RDX = extraout_RDX_01;
        }
        if (*(long *)(*(long *)&TypeInfo_AccountManager[1].fields.start.fields.PollIntervalSeconds + 0x88) == 0) {
          return 0;
        }
        pAVar14 = (__this->fields).__8__1;
        pAVar19 = TypeInfo_AccountManager;
        if (pAVar14 == (ApplicationManagers_AccountManager___c__DisplayClass125_0_o *)0x0) goto label_044a964b;
        pAVar5 = (pAVar14->fields).result;
        if (pAVar5 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
          iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].klass + 4);
          pSVar16 = "unknown_error";
joined_r0x044a9418:
          if (iVar2 == 0) {
            il2cpp_runtime_helper_02337ed0();
            in_RDX = extraout_RDX_07;
          }
          ApplicationManagers_AccountManager__CompleteOAuth(0,pSVar16,in_RDX);
          return 0;
        }
        if ((char)(pAVar5->fields)._Success_k__BackingField == '\0') {
          pSVar16 = (pAVar5->fields)._Error_k__BackingField;
          iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].klass + 4);
          goto joined_r0x044a9418;
        }
        pSVar16 = (pAVar5->fields)._ResponseText_k__BackingField;
        if (*(int *)((long)&TypeInfo_AccountManager[2].klass + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        error = &pSStack_38;
        bVar13 = ApplicationManagers_AccountManager__TryParseUnityOAuthStatus
                           (pSVar16,&pSStack_60,&pSStack_50,error,in_R8);
        method_00 = extraout_RDX_02;
        if ((char)bVar13 != '\0') {
          bVar13 = System_String__op_Equality(pSStack_60,"complete",(MethodInfo *)0x0);
          if ((char)bVar13 != '\0') {
            bVar13 = System_String__IsNullOrEmpty(pSStack_50,(MethodInfo *)0x0);
            pSVar16 = pSStack_50;
            if ((char)bVar13 == '\0') {
              bVar13 = (__this->fields).reportNetworkError;
              if (g_data_057ae9a9 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_ExchangeOAuthCode_d__126);
                g_data_057ae9a9 = '\x01';
              }
              __this_00 = (ApplicationManagers_AccountManager__PollUnityOAuth_d__125_o *)
                          il2cpp_runtime_helper_023052d0(TypeInfo_ExchangeOAuthCode_d__126);
              pAVar19 = __this_00;
              System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
              (__this_00->fields).__1__state = 0;
              if (__this_00 != (ApplicationManagers_AccountManager__PollUnityOAuth_d__125_o *)0x0) {
                (__this_00->fields).start.fields.PollToken = (System_String_o *)pAVar3;
                il2cpp_runtime_helper_022b4080(&(__this_00->fields).start.fields.PollToken,pAVar3);
                (__this_00->fields).start.fields.SessionId = pSVar16;
                il2cpp_runtime_helper_022b4080(&(__this_00->fields).start,pSVar16);
                *(char *)&(__this_00->fields).start.fields.AuthorizationUrl = (char)bVar13;
                (__this->fields).__2__current = (Il2CppObject *)__this_00;
                il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_00);
                (__this->fields).__1__state = 2;
                return (bool_conflict)CONCAT71(uVar18,1);
              }
              goto label_044a964b;
            }
            method_00 = extraout_RDX_03;
            if (*(int *)((long)&TypeInfo_AccountManager[2].klass + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              method_00 = extraout_RDX_04;
            }
            puVar15 = &"oauth_missing_code";
            goto label_044a92ca;
          }
          bVar13 = System_String__op_Equality(pSStack_60,"failed",(MethodInfo *)0x0);
          if ((char)bVar13 != '\0') {
            bVar13 = System_String__IsNullOrEmpty(pSStack_38,(MethodInfo *)0x0);
            if ((char)bVar13 != '\0') {
              error = (System_String_o **)&"oauth_failed";
            }
            iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].klass + 4);
            in_RDX = extraout_RDX_08;
            pSVar16 = *error;
            goto joined_r0x044a9418;
          }
          bVar13 = System_String__op_Inequality(pSStack_60,"pending",(MethodInfo *)0x0);
          method_00 = extraout_RDX_09;
          if ((char)bVar13 == '\0') {
            pAVar12 = &(__this->fields).start;
            uVar10 = (pAVar12->fields).ExpiresAt.fields._dateTime;
            uVar11 = (pAVar12->fields).ExpiresAt.fields._offsetMinutes;
            SVar23.fields._offsetMinutes = uVar11;
            SVar23.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)uVar10;
            if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            SVar24 = System_DateTimeOffset__get_UtcNow((MethodInfo *)0x0);
            right_00.fields._8_8_ = SVar24.fields._8_8_ & 0xffffffff;
            SVar23.fields._10_6_ = 0;
            right_00.fields._dateTime.fields._dateData = SVar24.fields._dateTime.fields._dateData.fields;
            SStack_40._ticks =
                 (int64_t)System_DateTimeOffset__op_Subtraction(SVar23,right_00,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            dVar21 = System_TimeSpan__get_TotalSeconds((System_TimeSpan_o)&SStack_40,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
              dStack_58 = dVar21;
              il2cpp_runtime_helper_02337ed0();
              dVar21 = dStack_58;
            }
            dVar21 = System_Math__Max_3cb7bf0(0.1,dVar21,(MethodInfo *)0x0);
            fVar22 = (__this->fields)._pollSeconds_5__2;
            if ((float)dVar21 <= fVar22) {
              fVar22 = (float)dVar21;
            }
            dStack_58 = (double)CONCAT44(dStack_58._4_4_,fVar22);
            __this_01 = (UnityEngine_WaitForSecondsRealtime_o *)il2cpp_runtime_helper_023052d0(TypeInfo_WaitForSecondsRealtime);
            UnityEngine_WaitForSecondsRealtime___ctor(__this_01,dStack_58._0_4_,(MethodInfo *)0x0);
            (__this->fields).__2__current = (Il2CppObject *)__this_01;
            il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,__this_01);
            (__this->fields).__1__state = 3;
            return (bool_conflict)CONCAT71(uVar18,1);
          }
        }
        if (*(int *)((long)&TypeInfo_AccountManager[2].klass + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          method_00 = extraout_RDX_10;
        }
        puVar15 = &"bad_response";
        goto label_044a92ca;
      }
      goto label_044a964b;
    case 2:
      (__this->fields).__1__state = -1;
      return 0;
    case 3:
      (__this->fields).__1__state = -1;
      pAVar19 = (ApplicationManagers_AccountManager__PollUnityOAuth_d__125_o *)&(__this->fields).__8__1;
      (__this->fields).__8__1 = (ApplicationManagers_AccountManager___c__DisplayClass125_0_o *)0x0;
      il2cpp_runtime_helper_022b4080();
    }
    if (pAVar3 == (ApplicationManagers_AccountManager_o *)0x0) {
label_044a964b:
      il2cpp_runtime_helper_022b2c90();
      return (bool_conflict)(pAVar19->fields).__2__current;
    }
    iVar2 = (__this->fields).attemptId;
    if (g_data_057ae9ab == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae9ab = '\x01';
    }
    if ((pAVar3->fields)._oauthAttemptId == iVar2) {
      if (*(int *)((long)&TypeInfo_AccountManager[2].klass + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        lVar4 = *(long *)(*(long *)&TypeInfo_AccountManager[1].fields.start.fields.PollIntervalSeconds + 0x88);
      }
      else {
        lVar4 = *(long *)(*(long *)&TypeInfo_AccountManager[1].fields.start.fields.PollIntervalSeconds + 0x88);
      }
      if (lVar4 != 0) {
        pAVar14 = (ApplicationManagers_AccountManager___c__DisplayClass125_0_o *)
                  il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass125_0);
        System_Object___ctor((Il2CppObject *)pAVar14,(MethodInfo *)0x0);
        (__this->fields).__8__1 = pAVar14;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__8__1,pAVar14);
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        SVar23 = System_DateTimeOffset__get_UtcNow((MethodInfo *)0x0);
        pAVar12 = &(__this->fields).start;
        uVar7 = (pAVar12->fields).ExpiresAt.fields._dateTime;
        uVar8 = (pAVar12->fields).ExpiresAt.fields._offsetMinutes;
        uVar9 = *(undefined2 *)&(pAVar12->fields).ExpiresAt.fields.field_0xa;
        right.fields._10_2_ = uVar9;
        right.fields._offsetMinutes = uVar8;
        right.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)uVar7;
        auVar6 = SVar23.fields._0_12_;
        SVar24.fields._12_4_ = 0;
        SVar24.fields._dateTime.fields._dateData =
             (System_DateTime_Fields)(System_DateTime_Fields)auVar6._0_8_;
        SVar24.fields._offsetMinutes = auVar6._8_2_;
        SVar24.fields._10_2_ = auVar6._10_2_;
        right.fields._12_4_ = 0;
        bVar13 = System_DateTimeOffset__op_GreaterThanOrEqual(SVar24,right,(MethodInfo *)0x0);
        method_00 = extraout_RDX_05;
        if (*(int *)((long)&TypeInfo_AccountManager[2].klass + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          method_00 = extraout_RDX_06;
        }
        if ((char)bVar13 != '\0') {
          puVar15 = &"oauth_timeout";
label_044a92ca:
          ApplicationManagers_AccountManager__CompleteOAuth(0,(System_String_o *)*puVar15,method_00);
          return 0;
        }
        pSVar16 = *(System_String_o **)
                   (*(long *)&TypeInfo_AccountManager[1].fields.start.fields.PollIntervalSeconds + 0x10);
        pAVar19 = (ApplicationManagers_AccountManager__PollUnityOAuth_d__125_o *)0x0;
        if (pSVar16 != (System_String_o *)0x0) {
          pSVar16 = System_String__TrimEnd_3afbd10(pSVar16,0x2f,(MethodInfo *)0x0);
          str2 = UnityEngine_Networking_UnityWebRequest__EscapeURL
                           ((__this->fields).start.fields.SessionId,(MethodInfo *)0x0);
          System_String__Concat_3af7150(pSVar16,"/v1/auth/oauth/unity/status?sessionId=",str2,(MethodInfo *)0x0);
          pAVar14 = (__this->fields).__8__1;
          pAVar19 = (ApplicationManagers_AccountManager__PollUnityOAuth_d__125_o *)0x0;
          if (pAVar14 != (ApplicationManagers_AccountManager___c__DisplayClass125_0_o *)0x0) {
            (pAVar14->fields).result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
            il2cpp_runtime_helper_022b4080(&pAVar14->fields,0);
            il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgApiResult);
            System_Action_object____ctor();
            uStack_48 = 0;
            System_Nullable_int____ctor((System_Nullable_int__o)&uStack_48,10,MethodInfo_Nullable_1_Int32);
            pIVar17 = (Il2CppObject *)ApplicationManagers_AccountManager__SendApiJson();
            (__this->fields).__2__current = pIVar17;
            il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar17);
            (__this->fields).__1__state = 1;
            return (bool_conflict)CONCAT71(uVar18,1);
          }
        }
        goto label_044a964b;
      }
    }
  }
  return 0;
}


// ApplicationManagers.AccountManager.<PollUnityOAuth>d__125$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__PollUnityOAuth_d__125__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__PollUnityOAuth_d__125_o* __this, const MethodInfo* method);
// 0x44a9650

Il2CppObject *
ApplicationManagers_AccountManager__PollUnityOAuth_d__125__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_AccountManager__PollUnityOAuth_d__125_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<PollUnityOAuth>d__125$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__PollUnityOAuth_d__125__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__PollUnityOAuth_d__125_o* __this, const MethodInfo* method);
// 0x44a9660

void ApplicationManagers_AccountManager__PollUnityOAuth_d__125__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__PollUnityOAuth_d__125_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// ApplicationManagers.AccountManager.<PollUnityOAuth>d__125$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__PollUnityOAuth_d__125__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__PollUnityOAuth_d__125_o* __this, const MethodInfo* method);
// 0x44a96a0

Il2CppObject *
ApplicationManagers_AccountManager__PollUnityOAuth_d__125__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__PollUnityOAuth_d__125_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<PostJson>d__106$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__PostJson_d__106___ctor (ApplicationManagers_AccountManager__PostJson_d__106_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x44a1df0

void ApplicationManagers_AccountManager__PostJson_d__106___ctor
               (ApplicationManagers_AccountManager__PostJson_d__106_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<PostJson>d__106$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__PostJson_d__106__System_IDisposable_Dispose (ApplicationManagers_AccountManager__PostJson_d__106_o* __this, const MethodInfo* method);
// 0x44a96b0

void ApplicationManagers_AccountManager__PostJson_d__106__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__PostJson_d__106_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<PostJson>d__106$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__PostJson_d__106__MoveNext (ApplicationManagers_AccountManager__PostJson_d__106_o* __this, const MethodInfo* method);
// 0x44a96c0

bool_conflict
ApplicationManagers_AccountManager__PostJson_d__106__MoveNext
          (ApplicationManagers_AccountManager__PostJson_d__106_o *__this,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_AccountManager_o *pAVar2;
  System_String_o *pSVar3;
  ApplicationManagers_Api_AottgApiResult_o *pAVar4;
  System_Action_string__o *pSVar5;
  char cVar6;
  bool_conflict bVar7;
  ApplicationManagers_AccountManager___c__DisplayClass106_0_o *pAVar8;
  Il2CppObject *pIVar9;
  SimpleJSONFixed_JSONNode_o *a;
  SimpleJSONFixed_JSONNode_o *a_00;
  long *plVar10;
  System_String_o **ppSVar11;
  System_Action_bool__string__o *pSVar12;
  undefined8 *puVar13;
  undefined8 *puVar14;
  intptr_t iVar15;
  undefined8 uVar16;
  MethodInfo *method_00;
  intptr_t iVar17;
  System_String_o *unaff_R14;
  undefined1 auVar18 [12];
  
  if (g_data_057ae9de == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgApiResult);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_PostJson_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass106_0);
    il2cpp_runtime_helper_023445d0(&"POST");
    il2cpp_runtime_helper_023445d0(&"/v1/auth/refresh");
    il2cpp_runtime_helper_023445d0(&"unknown_error");
    il2cpp_runtime_helper_023445d0(&"invalid_refresh_token");
    g_data_057ae9de = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    pAVar8 = (__this->fields).__8__1;
    if (pAVar8 == (ApplicationManagers_AccountManager___c__DisplayClass106_0_o *)0x0) goto label_044a9aae;
    pAVar4 = (pAVar8->fields).result;
    if (pAVar4 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
      ppSVar11 = (System_String_o **)&"unknown_error";
label_044a99c6:
      unaff_R14 = *ppSVar11;
      method_00 = "/v1/auth/refresh";
      bVar7 = System_String__Equals_3af50f0
                        ((__this->fields).path,(System_String_o *)"/v1/auth/refresh",5,(MethodInfo *)0x0);
      pAVar8 = (__this->fields).__8__1;
      if ((char)bVar7 != '\0') {
        if (pAVar8 != (ApplicationManagers_AccountManager___c__DisplayClass106_0_o *)0x0) {
          pAVar4 = (pAVar8->fields).result;
          if ((pAVar4 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) ||
             ((pAVar4->fields)._StatusCode_k__BackingField < 1)) goto label_044a9a27;
          if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
label_044a9a6a:
          ApplicationManagers_AccountManager__ClearSession(1,method_00);
          goto label_044a9a74;
        }
        goto label_044a9ab3;
      }
      if (pAVar8 != (ApplicationManagers_AccountManager___c__DisplayClass106_0_o *)0x0) {
label_044a9a27:
        pAVar4 = (pAVar8->fields).result;
        if (((pAVar4 != (ApplicationManagers_Api_AottgApiResult_o *)0x0) &&
            ((pAVar4->fields)._StatusCode_k__BackingField == 0x191)) &&
           (method_00 = "invalid_refresh_token",
           bVar7 = System_String__op_Equality(unaff_R14,(System_String_o *)"invalid_refresh_token",(MethodInfo *)0x0),
           (char)bVar7 != '\0')) {
          if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          goto label_044a9a6a;
        }
label_044a9a74:
        pSVar12 = (__this->fields).onComplete;
        if (pSVar12 == (System_Action_bool__string__o *)0x0) {
          return 0;
        }
        iVar15 = (pSVar12->fields).method;
        iVar17 = (pSVar12->fields).method_code;
        uVar16 = 0;
        goto label_044a9a8c;
      }
      goto label_044a9ab8;
    }
    if ((char)(pAVar4->fields)._Success_k__BackingField == '\0') {
      ppSVar11 = &(pAVar4->fields)._Error_k__BackingField;
      goto label_044a99c6;
    }
    unaff_R14 = (pAVar4->fields)._ResponseText_k__BackingField;
    if (((__this->fields).captureField != (System_String_o *)0x0) &&
       ((__this->fields).captureTarget != (System_Action_string__o *)0x0)) {
      method = (MethodInfo *)0x0;
      bVar7 = System_String__IsNullOrEmpty(unaff_R14,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') goto label_044a9970;
      a = SimpleJSONFixed_JSON__Parse(unaff_R14,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method = (MethodInfo *)0x0;
      bVar7 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') goto label_044a9970;
      if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_044a9abd;
      a_00 = (SimpleJSONFixed_JSONNode_o *)
             (*(a->klass->vtable)._7_get_Item.methodPtr)
                       (a,(__this->fields).captureField,(a->klass->vtable)._7_get_Item.method);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      method = (MethodInfo *)0x0;
      bVar7 = SimpleJSONFixed_JSONNode__op_Inequality(a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 == '\0') goto label_044a9970;
      pSVar5 = (__this->fields).captureTarget;
      plVar10 = (long *)(*(a->klass->vtable)._7_get_Item.methodPtr)
                                  (a,(__this->fields).captureField,(a->klass->vtable)._7_get_Item.method);
      if (plVar10 == (long *)0x0) goto label_044a9ac2;
      method = (MethodInfo *)(**(code **)(*plVar10 + 0x1c8))(plVar10,*(undefined8 *)(*plVar10 + 0x1d0));
      if (pSVar5 != (System_Action_string__o *)0x0) {
        (*(code *)(pSVar5->fields).invoke_impl)((pSVar5->fields).method_code,method,(pSVar5->fields).method);
        goto label_044a9970;
      }
      goto label_044a9ac7;
    }
label_044a9970:
    cVar6 = (char)(__this->fields).applyAuthResponse;
  }
  else {
    if (iVar1 != 0) {
      return 0;
    }
    pAVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    pAVar8 = (ApplicationManagers_AccountManager___c__DisplayClass106_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass106_0);
    System_Object___ctor((Il2CppObject *)pAVar8,(MethodInfo *)0x0);
    (__this->fields).__8__1 = pAVar8;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__8__1,pAVar8);
    pAVar8 = (__this->fields).__8__1;
    if (pAVar8 == (ApplicationManagers_AccountManager___c__DisplayClass106_0_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      (pAVar8->fields).result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
      il2cpp_runtime_helper_022b4080(&pAVar8->fields,0);
      pSVar3 = (__this->fields).path;
      unaff_R14 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgApiResult);
      System_Action_object____ctor();
      if (pAVar2 != (ApplicationManagers_AccountManager_o *)0x0) {
        pIVar9 = (Il2CppObject *)ApplicationManagers_AccountManager__SendApiJson();
        (__this->fields).__2__current = pIVar9;
        il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar9);
        (__this->fields).__1__state = 1;
        return (bool_conflict)CONCAT71((int7)((ulong)pSVar3 >> 8),1);
      }
    }
    il2cpp_runtime_helper_022b2c90();
label_044a9aae:
    il2cpp_runtime_helper_022b2c90();
label_044a9ab3:
    il2cpp_runtime_helper_022b2c90();
label_044a9ab8:
    il2cpp_runtime_helper_022b2c90();
label_044a9abd:
    il2cpp_runtime_helper_022b2c90();
label_044a9ac2:
    il2cpp_runtime_helper_022b2c90();
label_044a9ac7:
    auVar18 = il2cpp_runtime_helper_022b2c90();
    if (auVar18._8_4_ != 1) {
      _Unwind_Resume(auVar18._0_8_);
    }
    puVar13 = (undefined8 *)__cxa_begin_catch(auVar18._0_8_);
    method = *(MethodInfo **)*puVar13;
    cVar6 = il2cpp_runtime_helper_0233e000(g_data_057b9b80);
    if (cVar6 == '\0') {
      puVar14 = (undefined8 *)__cxa_allocate_exception(8);
      *puVar14 = *puVar13;
      __cxa_throw(puVar14,&PTR_PTR_05215060,0);
    }
    __cxa_end_catch();
    cVar6 = (char)(__this->fields).applyAuthResponse;
  }
  if (cVar6 != '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    ApplicationManagers_AccountManager__ApplyAuthResponse(unaff_R14,method);
  }
  pSVar12 = (__this->fields).onComplete;
  if (pSVar12 == (System_Action_bool__string__o *)0x0) {
    return 0;
  }
  iVar15 = (pSVar12->fields).method;
  iVar17 = (pSVar12->fields).method_code;
  uVar16 = 1;
  unaff_R14 = (System_String_o *)0x0;
label_044a9a8c:
  (*(code *)(pSVar12->fields).invoke_impl)(iVar17,uVar16,unaff_R14,iVar15);
  return 0;
}


// ApplicationManagers.AccountManager.<PostJson>d__106$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__PostJson_d__106__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__PostJson_d__106_o* __this, const MethodInfo* method);
// 0x44a9cc0

Il2CppObject *
ApplicationManagers_AccountManager__PostJson_d__106__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_AccountManager__PostJson_d__106_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<PostJson>d__106$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__PostJson_d__106__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__PostJson_d__106_o* __this, const MethodInfo* method);
// 0x44a9cd0

void ApplicationManagers_AccountManager__PostJson_d__106__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__PostJson_d__106_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// ApplicationManagers.AccountManager.<PostJson>d__106$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__PostJson_d__106__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__PostJson_d__106_o* __this, const MethodInfo* method);
// 0x44a9d10

Il2CppObject *
ApplicationManagers_AccountManager__PostJson_d__106__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__PostJson_d__106_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<PutCharacterInfoJson>d__169$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__PutCharacterInfoJson_d__169___ctor (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__169_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x44a61e0

void ApplicationManagers_AccountManager__PutCharacterInfoJson_d__169___ctor
               (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__169_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<PutCharacterInfoJson>d__169$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__PutCharacterInfoJson_d__169__System_IDisposable_Dispose (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__169_o* __this, const MethodInfo* method);
// 0x44a9d20

void ApplicationManagers_AccountManager__PutCharacterInfoJson_d__169__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__169_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<PutCharacterInfoJson>d__169$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__PutCharacterInfoJson_d__169__MoveNext (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__169_o* __this, const MethodInfo* method);
// 0x44a9d30

bool_conflict
ApplicationManagers_AccountManager__PutCharacterInfoJson_d__169__MoveNext
          (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__169_o *__this,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_AccountManager_o *pAVar2;
  bool_conflict bVar3;
  Il2CppObject *__this_00;
  Il2CppObject *pIVar4;
  undefined8 uVar5;
  int32_t iVar6;
  
  if (g_data_057ae9df == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_bool_string_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_PutCharacterInfoJson_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass169_0);
    il2cpp_runtime_helper_023445d0(&"PUT");
    il2cpp_runtime_helper_023445d0(&"/v1/me/character-info");
    g_data_057ae9df = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  bVar3 = 0;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0;
    }
    pAVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass169_0);
    pIVar4 = __this_00;
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    if (__this_00 != (Il2CppObject *)0x0) {
      __this_00[1].klass = (Il2CppClass *)(__this->fields).fallbackCharacterInfo;
      il2cpp_runtime_helper_022b4080(__this_00 + 1);
      __this_00[1].monitor = (__this->fields).onComplete;
      il2cpp_runtime_helper_022b4080(&__this_00[1].monitor);
      pIVar4 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_bool_string_JSONNode);
      System_Action_bool__object__object____ctor();
      if (pAVar2 != (ApplicationManagers_AccountManager_o *)0x0) {
        pIVar4 = (Il2CppObject *)ApplicationManagers_AccountManager__SendMeJson();
        (__this->fields).__2__current = pIVar4;
        uVar5 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar4);
        bVar3 = (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),1);
        iVar6 = 1;
        goto label_044a9e70;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    return (bool_conflict)pIVar4[1].monitor;
  }
  iVar6 = -1;
label_044a9e70:
  (__this->fields).__1__state = iVar6;
  return bVar3;
}


// ApplicationManagers.AccountManager.<PutCharacterInfoJson>d__169$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__PutCharacterInfoJson_d__169__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__169_o* __this, const MethodInfo* method);
// 0x44a9e90

Il2CppObject *
ApplicationManagers_AccountManager__PutCharacterInfoJson_d__169__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__169_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<PutCharacterInfoJson>d__169$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__PutCharacterInfoJson_d__169__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__169_o* __this, const MethodInfo* method);
// 0x44a9ea0

void ApplicationManagers_AccountManager__PutCharacterInfoJson_d__169__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__169_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// ApplicationManagers.AccountManager.<PutCharacterInfoJson>d__169$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__PutCharacterInfoJson_d__169__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__169_o* __this, const MethodInfo* method);
// 0x44a9ee0

Il2CppObject *
ApplicationManagers_AccountManager__PutCharacterInfoJson_d__169__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__169_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<SendApiGet>d__99$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__SendApiGet_d__99___ctor (ApplicationManagers_AccountManager__SendApiGet_d__99_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x44a1710

void ApplicationManagers_AccountManager__SendApiGet_d__99___ctor
               (ApplicationManagers_AccountManager__SendApiGet_d__99_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<SendApiGet>d__99$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__SendApiGet_d__99__System_IDisposable_Dispose (ApplicationManagers_AccountManager__SendApiGet_d__99_o* __this, const MethodInfo* method);
// 0x44a9ef0

void ApplicationManagers_AccountManager__SendApiGet_d__99__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__SendApiGet_d__99_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<SendApiGet>d__99$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__SendApiGet_d__99__MoveNext (ApplicationManagers_AccountManager__SendApiGet_d__99_o* __this, const MethodInfo* method);
// 0x44a9f00

bool_conflict
ApplicationManagers_AccountManager__SendApiGet_d__99__MoveNext
          (ApplicationManagers_AccountManager__SendApiGet_d__99_o *__this,MethodInfo *method)

{
  ApplicationManagers_AccountManager___c__DisplayClass99_0_o **ppAVar1;
  int iVar2;
  ApplicationManagers_AccountManager_o *pAVar3;
  System_String_o *path;
  System_String_o *bearer;
  undefined1 auVar4 [12];
  bool_conflict bVar5;
  ApplicationManagers_AccountManager___c__DisplayClass99_0_o *pAVar6;
  System_Action_AottgApiResult__o *onComplete;
  undefined8 uVar7;
  System_Action_AottgApiResult__o *__this_00;
  MethodInfo *in_R9;
  Cysharp_Threading_Tasks_UniTask_o CVar8;
  
  __this_00 = (System_Action_AottgApiResult__o *)__this;
  if (g_data_057ae9e0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgApiResult);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SendApiGet_b__0);
    __this_00 = (System_Action_AottgApiResult__o *)&TypeInfo_c__DisplayClass99_0;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae9e0 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    pAVar6 = (__this->fields).__8__1;
  }
  else {
    if (iVar2 != 0) {
      return 0;
    }
    pAVar3 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    pAVar6 = (ApplicationManagers_AccountManager___c__DisplayClass99_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass99_0);
    System_Object___ctor((Il2CppObject *)pAVar6,(MethodInfo *)0x0);
    ppAVar1 = &(__this->fields).__8__1;
    (__this->fields).__8__1 = pAVar6;
    il2cpp_runtime_helper_022b4080(ppAVar1,pAVar6);
    pAVar6 = (__this->fields).__8__1;
    __this_00 = (System_Action_AottgApiResult__o *)0x0;
    if (pAVar6 == (ApplicationManagers_AccountManager___c__DisplayClass99_0_o *)0x0) goto label_044aa06e;
    (pAVar6->fields).onComplete = (__this->fields).onComplete;
    __this_00 = (System_Action_AottgApiResult__o *)&(pAVar6->fields).onComplete;
    il2cpp_runtime_helper_022b4080();
    pAVar6 = *ppAVar1;
    if (pAVar6 == (ApplicationManagers_AccountManager___c__DisplayClass99_0_o *)0x0) goto label_044aa06e;
    *(undefined1 *)&(pAVar6->fields).done = 0;
    path = (__this->fields).path;
    bearer = (__this->fields).bearer;
    bVar5 = (__this->fields).parseJson;
    onComplete = (System_Action_AottgApiResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgApiResult);
    __this_00 = onComplete;
    System_Action_object____ctor();
    if (pAVar3 == (ApplicationManagers_AccountManager_o *)0x0) goto label_044aa06e;
    CVar8 = ApplicationManagers_AccountManager__SendApiGetAsync
                      ((ApplicationManagers_AccountManager_o *)__this_00,path,bearer,(uint)(byte)bVar5,
                       onComplete,in_R9);
    __this_00 = (System_Action_AottgApiResult__o *)CVar8.fields.source;
    auVar4 = CVar8.fields._0_12_;
    CVar8.fields._12_4_ = 0;
    CVar8.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_o *)auVar4._0_8_;
    CVar8.fields.token = auVar4._8_2_;
    CVar8.fields._10_2_ = auVar4._10_2_;
    Cysharp_Threading_Tasks_UniTaskExtensions__Forget(CVar8,(MethodInfo *)0x0);
    pAVar6 = (__this->fields).__8__1;
  }
  if (pAVar6 != (ApplicationManagers_AccountManager___c__DisplayClass99_0_o *)0x0) {
    if ((char)(pAVar6->fields).done != '\0') {
      return 0;
    }
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    uVar7 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)uVar7 >> 8),1);
  }
label_044aa06e:
  il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)(__this_00->fields).invoke_impl;
}


// ApplicationManagers.AccountManager.<SendApiGet>d__99$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__SendApiGet_d__99__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__SendApiGet_d__99_o* __this, const MethodInfo* method);
// 0x44aa080

Il2CppObject *
ApplicationManagers_AccountManager__SendApiGet_d__99__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_AccountManager__SendApiGet_d__99_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<SendApiGet>d__99$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__SendApiGet_d__99__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__SendApiGet_d__99_o* __this, const MethodInfo* method);
// 0x44aa090

void ApplicationManagers_AccountManager__SendApiGet_d__99__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__SendApiGet_d__99_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// ApplicationManagers.AccountManager.<SendApiGet>d__99$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__SendApiGet_d__99__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__SendApiGet_d__99_o* __this, const MethodInfo* method);
// 0x44aa0d0

Il2CppObject *
ApplicationManagers_AccountManager__SendApiGet_d__99__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__SendApiGet_d__99_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<SendApiGetAsync>d__100$$MoveNext
// il2cpp: void ApplicationManagers_AccountManager__SendApiGetAsync_d__100__MoveNext (ApplicationManagers_AccountManager__SendApiGetAsync_d__100_o __this, const MethodInfo* method);
// 0x44aa0e0

void ApplicationManagers_AccountManager__SendApiGetAsync_d__100__MoveNext
               (ApplicationManagers_AccountManager__SendApiGetAsync_d__100_o __this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  Cysharp_Threading_Tasks_IUniTaskSource_T__c *pCVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Il2CppType **ppIVar5;
  Il2CppMethodPointer pIVar6;
  Cysharp_Threading_Tasks_IUniTaskSource_T__o *pCVar7;
  short sVar8;
  int iVar9;
  long lVar10;
  Il2CppMethodPointer *ppIVar11;
  ApplicationManagers_Api_AottgApiResult_o *pAVar12;
  undefined8 *puVar13;
  long lVar14;
  undefined8 local_88;
  undefined8 uStack_80;
  undefined8 local_78;
  Cysharp_Threading_Tasks_UniTask_AottgApiResult__o local_68;
  Cysharp_Threading_Tasks_IUniTaskSource_T__o *local_48;
  ApplicationManagers_Api_AottgApiResult_o *pAStack_40;
  undefined8 local_38;
  
  if (g_data_057ae9e1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T_Awaiter_Applicat);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgApiResult_GetResult);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_IsCompleted);
    il2cpp_runtime_helper_023445d0(&MethodInfo_UniTask_1_T_Awaiter_ApplicationManagers_Api_AottgApiResu);
    il2cpp_runtime_helper_023445d0();
    g_data_057ae9e1 = '\x01';
  }
  local_88 = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
  uStack_80 = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
  local_78 = 0;
  local_48 = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
  pAStack_40 = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
  local_38._0_2_ = 0;
  local_38._2_6_ = 0;
  if (*(int *)&method->methodPointer == 0) {
    local_78 = *(undefined8 *)&method->token;
    pCVar7 = (method->field7_0x38).methodMetadataHandle;
    uStack_80 = (method->field8_0x40).genericMethod;
    (method->field7_0x38).rgctx_data = (Il2CppRGCTXData *)0x0;
    (method->field8_0x40).genericMethod = (void *)0x0;
    method->token = 0;
    method->flags = 0;
    method->iflags = 0;
    *(undefined4 *)&method->methodPointer = 0xffffffff;
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    ApplicationManagers_AccountManager__SendApiJsonAsync_43a1a60(&local_68);
    local_38._0_2_ = local_68.fields.token;
    local_38._2_6_ = local_68.fields._18_6_;
    local_48 = local_68.fields.source;
    pAStack_40 = local_68.fields.result;
    local_68.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    local_68.fields.result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
    local_68.fields.token = 0;
    local_68.fields._18_6_ = 0;
    if ((*(byte *)(*(long *)(MethodInfo_UniTask_1_T_Awaiter_ApplicationManagers_Api_AottgApiResu + 0x20) + 0x135) & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    local_68.fields.token = (int16_t)local_38;
    local_68.fields._18_6_ = local_38._2_6_;
    local_68.fields.source = local_48;
    local_68.fields.result = pAStack_40;
    il2cpp_runtime_helper_022b4080(&local_68,0);
    local_78._0_2_ = local_68.fields.token;
    local_78._2_6_ = local_68.fields._18_6_;
    local_88 = local_68.fields.source;
    uStack_80 = local_68.fields.result;
    lVar10 = *(long *)(MethodInfo_Boolean_get_IsCompleted + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = il2cpp_runtime_helper_023009c0();
    }
    pCVar7 = local_88;
    if (local_88 != (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0) {
      sVar8 = (int16_t)local_78;
      lVar10 = *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x18) + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = il2cpp_runtime_helper_023009c0();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = il2cpp_runtime_helper_023009c0();
      }
      pCVar3 = pCVar7->klass;
      uVar1._0_1_ = (pCVar3->_2).rank;
      uVar1._1_1_ = (pCVar3->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar4 = (pCVar3->_1).interfaceOffsets;
        lVar14 = 0;
        do {
          if (*(long *)((long)&pIVar4->interfaceType + lVar14) == lVar10) {
            ppIVar11 = &pCVar3->vtable[*(int *)((long)&pIVar4->offset + lVar14) + 1].methodPtr;
            goto label_044aa342;
          }
          lVar14 = lVar14 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar14);
      }
      ppIVar11 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pCVar7,lVar10,1);
label_044aa342:
      iVar9 = (**ppIVar11)(pCVar7,(ulong)(uint)(int)sVar8,(MethodInfo *)ppIVar11[1]);
      pCVar7 = local_88;
      if (iVar9 == 0) {
        *(undefined4 *)&method->methodPointer = 0;
        *(undefined4 *)&method->field7_0x38 = (undefined4)local_88;
        *(undefined4 *)((long)&method->field7_0x38 + 4) = local_88._4_4_;
        *(undefined4 *)&method->field8_0x40 = (undefined4)uStack_80;
        *(undefined4 *)((long)&method->field8_0x40 + 4) = uStack_80._4_4_;
        *(undefined8 *)&method->token = local_78;
        il2cpp_runtime_helper_022b4080(&method->field7_0x38,0);
        il2cpp_runtime_helper_025bd1e0(&method->virtualMethodPointer,&local_88,method,MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T_Awaiter_Applicat);
        return;
      }
    }
  }
  local_88 = pCVar7;
  if (pCVar7 == (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0) {
    ppIVar5 = method->parameters;
    pAVar12 = uStack_80;
  }
  else {
    sVar8 = (int16_t)local_78;
    lVar10 = *(long *)(MethodInfo_AottgApiResult_GetResult + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = il2cpp_runtime_helper_023009c0();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = il2cpp_runtime_helper_023009c0();
    }
    pCVar3 = pCVar7->klass;
    uVar2._0_1_ = (pCVar3->_2).rank;
    uVar2._1_1_ = (pCVar3->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar4 = (pCVar3->_1).interfaceOffsets;
      lVar14 = 0;
      do {
        if (*(long *)((long)&pIVar4->interfaceType + lVar14) == lVar10) {
          ppIVar11 = &pCVar3->vtable[*(int *)((long)&pIVar4->offset + lVar14)].methodPtr;
          goto label_044aa412;
        }
        lVar14 = lVar14 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar14);
    }
    ppIVar11 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pCVar7,lVar10,0);
label_044aa412:
    pAVar12 = (ApplicationManagers_Api_AottgApiResult_o *)
              (**ppIVar11)(pCVar7,(ulong)(uint)(int)sVar8,(MethodInfo *)ppIVar11[1]);
    ppIVar5 = method->parameters;
  }
  if (ppIVar5 != (Il2CppType **)0x0) {
    (*(code *)ppIVar5[3])(ppIVar5[8],pAVar12,ppIVar5[5]);
  }
  *(undefined4 *)&method->methodPointer = 0xfffffffe;
  if (g_data_057a6b79 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057a6b79 = '\x01';
  }
  pIVar6 = method->virtualMethodPointer;
  if (pIVar6 != (Il2CppMethodPointer)0x0) {
    lVar10 = *(long *)pIVar6;
    if ((ulong)*(ushort *)(lVar10 + 0x12e) != 0) {
      lVar14 = 0;
      do {
        if (*(long *)(*(long *)(lVar10 + 0xb0) + lVar14) == TypeInfo_IStateMachineRunnerPromise) {
          puVar13 = (undefined8 *)
                    (lVar10 + (long)(*(int *)(*(long *)(lVar10 + 0xb0) + 8 + lVar14) + 2) * 0x10 + 0x138);
          goto label_044aa4c5;
        }
        lVar14 = lVar14 + 0x10;
      } while ((ulong)*(ushort *)(lVar10 + 0x12e) << 4 != lVar14);
    }
    puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar6,TypeInfo_IStateMachineRunnerPromise,2);
label_044aa4c5:
    (*(code *)*puVar13)(pIVar6,puVar13[1]);
  }
  return;
}


// ApplicationManagers.AccountManager.<SendApiGetAsync>d__100$$SetStateMachine
// il2cpp: void ApplicationManagers_AccountManager__SendApiGetAsync_d__100__SetStateMachine (ApplicationManagers_AccountManager__SendApiGetAsync_d__100_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x44aa850

void ApplicationManagers_AccountManager__SendApiGetAsync_d__100__SetStateMachine
               (ApplicationManagers_AccountManager__SendApiGetAsync_d__100_o __this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<SendApiJson>d__101$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__SendApiJson_d__101___ctor (ApplicationManagers_AccountManager__SendApiJson_d__101_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x44a1910

void ApplicationManagers_AccountManager__SendApiJson_d__101___ctor
               (ApplicationManagers_AccountManager__SendApiJson_d__101_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<SendApiJson>d__101$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__SendApiJson_d__101__System_IDisposable_Dispose (ApplicationManagers_AccountManager__SendApiJson_d__101_o* __this, const MethodInfo* method);
// 0x44aa860

void ApplicationManagers_AccountManager__SendApiJson_d__101__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__SendApiJson_d__101_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<SendApiJson>d__101$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__SendApiJson_d__101__MoveNext (ApplicationManagers_AccountManager__SendApiJson_d__101_o* __this, const MethodInfo* method);
// 0x44aa870

bool_conflict
ApplicationManagers_AccountManager__SendApiJson_d__101__MoveNext
          (ApplicationManagers_AccountManager__SendApiJson_d__101_o *__this,MethodInfo *method)

{
  ApplicationManagers_AccountManager___c__DisplayClass101_0_o **ppAVar1;
  int iVar2;
  ApplicationManagers_AccountManager_o *pAVar3;
  undefined1 auVar4 [12];
  ApplicationManagers_AccountManager___c__DisplayClass101_0_o *pAVar5;
  undefined8 uVar6;
  ApplicationManagers_AccountManager__SendApiJson_d__101_o *pAVar7;
  Cysharp_Threading_Tasks_UniTask_o CVar8;
  
  pAVar7 = __this;
  if (g_data_057ae9e2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgApiResult);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SendApiJson_b__0);
    pAVar7 = (ApplicationManagers_AccountManager__SendApiJson_d__101_o *)&TypeInfo_c__DisplayClass101_0;
    il2cpp_runtime_helper_023445d0();
    g_data_057ae9e2 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    pAVar5 = (__this->fields).__8__1;
  }
  else {
    if (iVar2 != 0) {
      return 0;
    }
    pAVar3 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    pAVar5 = (ApplicationManagers_AccountManager___c__DisplayClass101_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass101_0);
    System_Object___ctor((Il2CppObject *)pAVar5,(MethodInfo *)0x0);
    ppAVar1 = &(__this->fields).__8__1;
    (__this->fields).__8__1 = pAVar5;
    il2cpp_runtime_helper_022b4080(ppAVar1,pAVar5);
    pAVar5 = (__this->fields).__8__1;
    pAVar7 = (ApplicationManagers_AccountManager__SendApiJson_d__101_o *)0x0;
    if (pAVar5 == (ApplicationManagers_AccountManager___c__DisplayClass101_0_o *)0x0) goto label_044aaa24;
    (pAVar5->fields).onComplete = (__this->fields).onComplete;
    pAVar7 = (ApplicationManagers_AccountManager__SendApiJson_d__101_o *)&(pAVar5->fields).onComplete;
    il2cpp_runtime_helper_022b4080();
    pAVar5 = *ppAVar1;
    if (pAVar5 == (ApplicationManagers_AccountManager___c__DisplayClass101_0_o *)0x0) goto label_044aaa24;
    *(undefined1 *)&(pAVar5->fields).done = 0;
    pAVar7 = (ApplicationManagers_AccountManager__SendApiJson_d__101_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgApiResult);
    System_Action_object____ctor();
    if (pAVar3 == (ApplicationManagers_AccountManager_o *)0x0) goto label_044aaa24;
    CVar8 = ApplicationManagers_AccountManager__SendApiJsonAsync();
    pAVar7 = (ApplicationManagers_AccountManager__SendApiJson_d__101_o *)CVar8.fields.source;
    auVar4 = CVar8.fields._0_12_;
    CVar8.fields._12_4_ = 0;
    CVar8.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_o *)auVar4._0_8_;
    CVar8.fields.token = auVar4._8_2_;
    CVar8.fields._10_2_ = auVar4._10_2_;
    Cysharp_Threading_Tasks_UniTaskExtensions__Forget(CVar8,(MethodInfo *)0x0);
    pAVar5 = (__this->fields).__8__1;
  }
  if (pAVar5 != (ApplicationManagers_AccountManager___c__DisplayClass101_0_o *)0x0) {
    if ((char)(pAVar5->fields).done != '\0') {
      return 0;
    }
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    uVar6 = il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,0);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)uVar6 >> 8),1);
  }
label_044aaa24:
  il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)(pAVar7->fields).__2__current;
}


// ApplicationManagers.AccountManager.<SendApiJson>d__101$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__SendApiJson_d__101__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__SendApiJson_d__101_o* __this, const MethodInfo* method);
// 0x44aaa30

Il2CppObject *
ApplicationManagers_AccountManager__SendApiJson_d__101__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_AccountManager__SendApiJson_d__101_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<SendApiJson>d__101$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__SendApiJson_d__101__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__SendApiJson_d__101_o* __this, const MethodInfo* method);
// 0x44aaa40

void ApplicationManagers_AccountManager__SendApiJson_d__101__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__SendApiJson_d__101_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// ApplicationManagers.AccountManager.<SendApiJson>d__101$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__SendApiJson_d__101__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__SendApiJson_d__101_o* __this, const MethodInfo* method);
// 0x44aaa80

Il2CppObject *
ApplicationManagers_AccountManager__SendApiJson_d__101__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__SendApiJson_d__101_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<SendApiJsonAsync>d__102$$MoveNext
// il2cpp: void ApplicationManagers_AccountManager__SendApiJsonAsync_d__102__MoveNext (ApplicationManagers_AccountManager__SendApiJsonAsync_d__102_o __this, const MethodInfo* method);
// 0x44aaa90

void ApplicationManagers_AccountManager__SendApiJsonAsync_d__102__MoveNext
               (ApplicationManagers_AccountManager__SendApiJsonAsync_d__102_o __this,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  Cysharp_Threading_Tasks_IUniTaskSource_T__c *pCVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Il2CppMethodPointer pIVar5;
  Cysharp_Threading_Tasks_IUniTaskSource_T__o *pCVar6;
  short sVar7;
  int iVar8;
  long lVar9;
  Il2CppMethodPointer *ppIVar10;
  ApplicationManagers_Api_AottgApiResult_o *pAVar11;
  undefined8 *puVar12;
  long lVar13;
  undefined8 local_98;
  undefined8 uStack_90;
  Il2CppMethodPointer local_88;
  undefined1 local_78 [16];
  undefined8 local_68;
  Cysharp_Threading_Tasks_IUniTaskSource_T__o *local_58;
  ApplicationManagers_Api_AottgApiResult_o *pAStack_50;
  Il2CppMethodPointer local_48;
  char *local_38;
  
  if (g_data_057ae9e3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T_Awaiter_Applicat);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgApiResult_GetResult);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_get_IsCompleted);
    il2cpp_runtime_helper_023445d0();
    g_data_057ae9e3 = '\x01';
  }
  local_98 = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
  uStack_90 = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
  local_88 = (Il2CppMethodPointer)0x0;
  local_58 = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
  pAStack_50 = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
  local_48 = (Il2CppMethodPointer)0x0;
  if (*(int *)&method->methodPointer == 0) {
    local_88 = method[1].virtualMethodPointer;
    pCVar6 = *(Cysharp_Threading_Tasks_IUniTaskSource_T__o **)&method->slot;
    uStack_90 = (ApplicationManagers_Api_AottgApiResult_o *)method[1].methodPointer;
    method->slot = 0;
    method->parameters_count = '\0';
    method->bitflags = '\0';
    *(undefined4 *)&method->field_0x54 = 0;
    method[1].methodPointer = (Il2CppMethodPointer)0x0;
    method[1].virtualMethodPointer = (Il2CppMethodPointer)0x0;
    *(undefined4 *)&method->methodPointer = 0xffffffff;
  }
  else {
    local_38 = method->name;
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    ApplicationManagers_AccountManager__SendApiJsonAsync_43a1a60
              ((Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *)local_78);
    local_48 = local_68;
    local_58 = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)local_78._0_8_;
    pAStack_50 = (ApplicationManagers_Api_AottgApiResult_o *)local_78._8_8_;
    local_78._0_8_ = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    local_78._8_8_ = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
    local_68._0_2_ = 0;
    local_68._2_6_ = 0;
    if ((*(byte *)(*(long *)(MethodInfo_UniTask_1_T_Awaiter_ApplicationManagers_Api_AottgApiResu + 0x20) + 0x135) & 1) == 0) {
      il2cpp_runtime_helper_023009c0();
    }
    local_68 = local_48;
    local_78._0_8_ = local_58;
    local_78._8_8_ = pAStack_50;
    il2cpp_runtime_helper_022b4080(local_78,0);
    local_88 = local_68;
    local_98 = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)local_78._0_8_;
    uStack_90 = (ApplicationManagers_Api_AottgApiResult_o *)local_78._8_8_;
    lVar9 = *(long *)(MethodInfo_Boolean_get_IsCompleted + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = il2cpp_runtime_helper_023009c0();
    }
    pCVar6 = local_98;
    if (local_98 != (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0) {
      sVar7 = (short)local_88;
      lVar9 = *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x18) + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = il2cpp_runtime_helper_023009c0();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = il2cpp_runtime_helper_023009c0();
      }
      pCVar3 = pCVar6->klass;
      uVar1._0_1_ = (pCVar3->_2).rank;
      uVar1._1_1_ = (pCVar3->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar4 = (pCVar3->_1).interfaceOffsets;
        lVar13 = 0;
        do {
          if (*(long *)((long)&pIVar4->interfaceType + lVar13) == lVar9) {
            ppIVar10 = &pCVar3->vtable[*(int *)((long)&pIVar4->offset + lVar13) + 1].methodPtr;
            goto label_044aacfc;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar13);
      }
      ppIVar10 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pCVar6,lVar9,1);
label_044aacfc:
      iVar8 = (**ppIVar10)(pCVar6,(ulong)(uint)(int)sVar7,(MethodInfo *)ppIVar10[1]);
      pCVar6 = local_98;
      if (iVar8 == 0) {
        *(undefined4 *)&method->methodPointer = 0;
        method->slot = (undefined2)local_98;
        method->parameters_count = local_98._2_1_;
        method->bitflags = local_98._3_1_;
        *(undefined4 *)&method->field_0x54 = local_98._4_4_;
        *(undefined4 *)&method[1].methodPointer = (undefined4)uStack_90;
        *(undefined4 *)((long)&method[1].methodPointer + 4) = uStack_90._4_4_;
        method[1].virtualMethodPointer = local_88;
        local_98 = pCVar6;
        il2cpp_runtime_helper_022b4080(&method->slot,0);
        il2cpp_runtime_helper_025bd310(&method->virtualMethodPointer,&local_98,method,MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T_Awaiter_Applicat);
        return;
      }
    }
  }
  local_98 = pCVar6;
  if (pCVar6 == (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0) {
    lVar9._0_4_ = method->token;
    lVar9._4_2_ = method->flags;
    lVar9._6_2_ = method->iflags;
    pAVar11 = uStack_90;
  }
  else {
    sVar7 = (short)local_88;
    lVar9 = *(long *)(MethodInfo_AottgApiResult_GetResult + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = il2cpp_runtime_helper_023009c0();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = il2cpp_runtime_helper_023009c0();
    }
    pCVar3 = pCVar6->klass;
    uVar2._0_1_ = (pCVar3->_2).rank;
    uVar2._1_1_ = (pCVar3->_2).minimumAlignment;
    if ((ulong)uVar2 != 0) {
      pIVar4 = (pCVar3->_1).interfaceOffsets;
      lVar13 = 0;
      do {
        if (*(long *)((long)&pIVar4->interfaceType + lVar13) == lVar9) {
          ppIVar10 = &pCVar3->vtable[*(int *)((long)&pIVar4->offset + lVar13)].methodPtr;
          goto label_044aadc6;
        }
        lVar13 = lVar13 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar13);
    }
    ppIVar10 = (Il2CppMethodPointer *)il2cpp_runtime_helper_02300d20(pCVar6,lVar9,0);
label_044aadc6:
    pAVar11 = (ApplicationManagers_Api_AottgApiResult_o *)
              (**ppIVar10)(pCVar6,(ulong)(uint)(int)sVar7,(MethodInfo *)ppIVar10[1]);
    lVar9._0_4_ = method->token;
    lVar9._4_2_ = method->flags;
    lVar9._6_2_ = method->iflags;
  }
  if (lVar9 != 0) {
    (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),pAVar11,*(undefined8 *)(lVar9 + 0x28));
  }
  *(undefined4 *)&method->methodPointer = 0xfffffffe;
  if (g_data_057a6b79 == '\0') {
    il2cpp_runtime_helper_023445d0();
    g_data_057a6b79 = '\x01';
  }
  pIVar5 = method->virtualMethodPointer;
  if (pIVar5 != (Il2CppMethodPointer)0x0) {
    lVar9 = *(long *)pIVar5;
    if ((ulong)*(ushort *)(lVar9 + 0x12e) != 0) {
      lVar13 = 0;
      do {
        if (*(long *)(*(long *)(lVar9 + 0xb0) + lVar13) == TypeInfo_IStateMachineRunnerPromise) {
          puVar12 = (undefined8 *)
                    (lVar9 + (long)(*(int *)(*(long *)(lVar9 + 0xb0) + 8 + lVar13) + 2) * 0x10 + 0x138);
          goto label_044aae85;
        }
        lVar13 = lVar13 + 0x10;
      } while ((ulong)*(ushort *)(lVar9 + 0x12e) << 4 != lVar13);
    }
    puVar12 = (undefined8 *)il2cpp_runtime_helper_02300d20(pIVar5,TypeInfo_IStateMachineRunnerPromise,2);
label_044aae85:
    (*(code *)*puVar12)(pIVar5,puVar12[1]);
  }
  return;
}


// ApplicationManagers.AccountManager.<SendApiJsonAsync>d__102$$SetStateMachine
// il2cpp: void ApplicationManagers_AccountManager__SendApiJsonAsync_d__102__SetStateMachine (ApplicationManagers_AccountManager__SendApiJsonAsync_d__102_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x44ab420

void ApplicationManagers_AccountManager__SendApiJsonAsync_d__102__SetStateMachine
               (ApplicationManagers_AccountManager__SendApiJsonAsync_d__102_o __this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<SendMeJson>d__170$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__SendMeJson_d__170___ctor (ApplicationManagers_AccountManager__SendMeJson_d__170_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x44a62e0

void ApplicationManagers_AccountManager__SendMeJson_d__170___ctor
               (ApplicationManagers_AccountManager__SendMeJson_d__170_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<SendMeJson>d__170$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__SendMeJson_d__170__System_IDisposable_Dispose (ApplicationManagers_AccountManager__SendMeJson_d__170_o* __this, const MethodInfo* method);
// 0x44ab430

void ApplicationManagers_AccountManager__SendMeJson_d__170__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__SendMeJson_d__170_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<SendMeJson>d__170$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__SendMeJson_d__170__MoveNext (ApplicationManagers_AccountManager__SendMeJson_d__170_o* __this, const MethodInfo* method);
// 0x44ab440

bool_conflict
ApplicationManagers_AccountManager__SendMeJson_d__170__MoveNext
          (ApplicationManagers_AccountManager__SendMeJson_d__170_o *__this,MethodInfo *method)

{
  ApplicationManagers_AccountManager___c__DisplayClass170_0_o **ppAVar1;
  int iVar2;
  ApplicationManagers_AccountManager_o *__this_00;
  ApplicationManagers_Api_AottgApiResult_o *pAVar3;
  bool_conflict bVar4;
  ApplicationManagers_AccountManager___c__DisplayClass170_0_o *pAVar5;
  Il2CppObject *pIVar6;
  System_Action_bool__string__JSONNode__o *pSVar7;
  MethodInfo *method_00;
  System_String_o **ppSVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  System_String_o *pSVar10;
  undefined7 uVar11;
  undefined8 uVar12;
  MethodInfo *method_01;
  intptr_t iVar13;
  intptr_t iVar14;
  
  method_01 = (MethodInfo *)__this;
  if (g_data_057ae9e4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgApiResult);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SendMeJson_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass170_0);
    il2cpp_runtime_helper_023445d0(&"GET");
    method_01 = (MethodInfo *)&"unknown_error";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae9e4 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 2) {
    (__this->fields).__1__state = -1;
    pAVar5 = (__this->fields).__8__1;
    if (pAVar5 != (ApplicationManagers_AccountManager___c__DisplayClass170_0_o *)0x0) {
      pAVar3 = (pAVar5->fields).result;
      if ((pAVar3 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) ||
         ((char)(pAVar3->fields)._Success_k__BackingField == '\0')) {
        pSVar7 = (__this->fields).onComplete;
        if (pSVar7 != (System_Action_bool__string__JSONNode__o *)0x0) {
          if (pAVar3 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
            ppSVar8 = (System_String_o **)&"unknown_error";
          }
          else {
            ppSVar8 = &(pAVar3->fields)._Error_k__BackingField;
          }
          pSVar10 = *ppSVar8;
          iVar14 = (pSVar7->fields).method;
          iVar13 = (pSVar7->fields).method_code;
          uVar12 = 0;
          pSVar9 = (SimpleJSONFixed_JSONNode_o *)0x0;
label_044ab712:
          (*(code *)(pSVar7->fields).invoke_impl)(iVar13,uVar12,pSVar10,pSVar9,iVar14);
          return 0;
        }
      }
      else {
        method_01 = TypeInfo_AccountManager;
        if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        ApplicationManagers_AccountManager__ClearOwnPublicProfileCache(method_01);
        pSVar7 = (__this->fields).onComplete;
        if (pSVar7 != (System_Action_bool__string__JSONNode__o *)0x0) {
          pAVar5 = (__this->fields).__8__1;
          if ((pAVar5 != (ApplicationManagers_AccountManager___c__DisplayClass170_0_o *)0x0) &&
             (pAVar3 = (pAVar5->fields).result, pAVar3 != (ApplicationManagers_Api_AottgApiResult_o *)0x0)) {
            pSVar9 = (pAVar3->fields)._Json_k__BackingField;
            iVar14 = (pSVar7->fields).method;
            iVar13 = (pSVar7->fields).method_code;
            uVar12 = 1;
            pSVar10 = (System_String_o *)0x0;
            goto label_044ab712;
          }
          goto label_044ab76f;
        }
      }
      return 0;
    }
    goto label_044ab76f;
  }
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    return 0;
  }
  if (iVar2 != 0) {
    return 0;
  }
  __this_00 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  pAVar5 = (ApplicationManagers_AccountManager___c__DisplayClass170_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass170_0);
  System_Object___ctor((Il2CppObject *)pAVar5,(MethodInfo *)0x0);
  ppAVar1 = &(__this->fields).__8__1;
  (__this->fields).__8__1 = pAVar5;
  il2cpp_runtime_helper_022b4080(ppAVar1,pAVar5);
  method_01 = (MethodInfo *)(__this->fields).method;
  method_00 = (MethodInfo *)0x0;
  bVar4 = System_String__Equals_3af50f0((System_String_o *)method_01,"GET",5,(MethodInfo *)0x0);
  uVar11 = (undefined7)((ulong)__this >> 8);
  if ((char)bVar4 != '\0') {
    if (__this_00 != (ApplicationManagers_AccountManager_o *)0x0) {
      pIVar6 = (Il2CppObject *)
               ApplicationManagers_AccountManager__SendMeReadJson
                         (__this_00,(__this->fields).path,(__this->fields).onComplete,method_00);
      (__this->fields).__2__current = pIVar6;
      il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar6);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71(uVar11,1);
    }
    goto label_044ab76f;
  }
  pAVar5 = *ppAVar1;
  method_01 = (MethodInfo *)0x0;
  if (pAVar5 == (ApplicationManagers_AccountManager___c__DisplayClass170_0_o *)0x0) goto label_044ab76f;
  (pAVar5->fields).result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
  il2cpp_runtime_helper_022b4080(&pAVar5->fields,0);
  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aea19 != '\0') goto label_044ab65e;
label_044ab738:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea19 = '\x01';
    iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
  else {
    if (g_data_057aea19 == '\0') goto label_044ab738;
label_044ab65e:
    iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_01 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgApiResult);
  System_Action_object____ctor();
  if (__this_00 != (ApplicationManagers_AccountManager_o *)0x0) {
    pIVar6 = (Il2CppObject *)ApplicationManagers_AccountManager__SendApiJson();
    (__this->fields).__2__current = pIVar6;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar6);
    (__this->fields).__1__state = 2;
    return (bool_conflict)CONCAT71(uVar11,1);
  }
label_044ab76f:
  il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)(Il2CppObject *)method_01->name;
}


// ApplicationManagers.AccountManager.<SendMeJson>d__170$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__SendMeJson_d__170__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__SendMeJson_d__170_o* __this, const MethodInfo* method);
// 0x44ab780

Il2CppObject *
ApplicationManagers_AccountManager__SendMeJson_d__170__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_AccountManager__SendMeJson_d__170_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<SendMeJson>d__170$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__SendMeJson_d__170__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__SendMeJson_d__170_o* __this, const MethodInfo* method);
// 0x44ab790

void ApplicationManagers_AccountManager__SendMeJson_d__170__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__SendMeJson_d__170_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// ApplicationManagers.AccountManager.<SendMeJson>d__170$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__SendMeJson_d__170__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__SendMeJson_d__170_o* __this, const MethodInfo* method);
// 0x44ab7d0

Il2CppObject *
ApplicationManagers_AccountManager__SendMeJson_d__170__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__SendMeJson_d__170_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<SendMeReadJson>d__171$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__SendMeReadJson_d__171___ctor (ApplicationManagers_AccountManager__SendMeReadJson_d__171_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x44a63a0

void ApplicationManagers_AccountManager__SendMeReadJson_d__171___ctor
               (ApplicationManagers_AccountManager__SendMeReadJson_d__171_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<SendMeReadJson>d__171$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__SendMeReadJson_d__171__System_IDisposable_Dispose (ApplicationManagers_AccountManager__SendMeReadJson_d__171_o* __this, const MethodInfo* method);
// 0x44ab7e0

void ApplicationManagers_AccountManager__SendMeReadJson_d__171__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__SendMeReadJson_d__171_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<SendMeReadJson>d__171$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__SendMeReadJson_d__171__MoveNext (ApplicationManagers_AccountManager__SendMeReadJson_d__171_o* __this, const MethodInfo* method);
// 0x44ab7f0

bool_conflict
ApplicationManagers_AccountManager__SendMeReadJson_d__171__MoveNext
          (ApplicationManagers_AccountManager__SendMeReadJson_d__171_o *__this,MethodInfo *method)

{
  ApplicationManagers_AccountManager___c__DisplayClass171_0_o **ppAVar1;
  int iVar2;
  ApplicationManagers_AccountManager_o *__this_00;
  System_String_o *bearer;
  ApplicationManagers_Api_AottgApiResult_o *pAVar3;
  ApplicationManagers_AccountManager___c__DisplayClass171_0_o *pAVar4;
  System_Action_AottgApiResult__o *onComplete;
  Il2CppObject *pIVar5;
  System_String_o **ppSVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  System_String_o *pSVar8;
  System_Action_bool__string__JSONNode__o *pSVar9;
  undefined8 uVar10;
  System_Action_AottgApiResult__o *pSVar11;
  intptr_t iVar12;
  intptr_t iVar13;
  MethodInfo *in_R9;
  
  pSVar11 = (System_Action_AottgApiResult__o *)__this;
  if (g_data_057ae9e5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgApiResult);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SendMeReadJson_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass171_0);
    pSVar11 = (System_Action_AottgApiResult__o *)&"unknown_error";
    il2cpp_runtime_helper_023445d0();
    g_data_057ae9e5 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    pAVar4 = (__this->fields).__8__1;
    if (pAVar4 != (ApplicationManagers_AccountManager___c__DisplayClass171_0_o *)0x0) {
      pAVar3 = (pAVar4->fields).result;
      if ((pAVar3 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) ||
         ((char)(pAVar3->fields)._Success_k__BackingField == '\0')) {
        pSVar9 = (__this->fields).onComplete;
        if (pSVar9 != (System_Action_bool__string__JSONNode__o *)0x0) {
          if (pAVar3 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
            ppSVar6 = (System_String_o **)&"unknown_error";
          }
          else {
            ppSVar6 = &(pAVar3->fields)._Error_k__BackingField;
          }
          pSVar8 = *ppSVar6;
          iVar13 = (pSVar9->fields).method;
          iVar12 = (pSVar9->fields).method_code;
          uVar10 = 0;
          pSVar7 = (SimpleJSONFixed_JSONNode_o *)0x0;
          goto label_044aba1a;
        }
      }
      else {
        pSVar9 = (__this->fields).onComplete;
        if (pSVar9 != (System_Action_bool__string__JSONNode__o *)0x0) {
          pSVar7 = (pAVar3->fields)._Json_k__BackingField;
          iVar13 = (pSVar9->fields).method;
          iVar12 = (pSVar9->fields).method_code;
          uVar10 = 1;
          pSVar8 = (System_String_o *)0x0;
label_044aba1a:
          (*(code *)(pSVar9->fields).invoke_impl)(iVar12,uVar10,pSVar8,pSVar7,iVar13);
          return 0;
        }
      }
      return 0;
    }
    goto label_044aba2e;
  }
  if (iVar2 != 0) {
    return 0;
  }
  __this_00 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  pAVar4 = (ApplicationManagers_AccountManager___c__DisplayClass171_0_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass171_0);
  System_Object___ctor((Il2CppObject *)pAVar4,(MethodInfo *)0x0);
  ppAVar1 = &(__this->fields).__8__1;
  (__this->fields).__8__1 = pAVar4;
  il2cpp_runtime_helper_022b4080(ppAVar1,pAVar4);
  pAVar4 = (__this->fields).__8__1;
  pSVar11 = (System_Action_AottgApiResult__o *)0x0;
  if (pAVar4 == (ApplicationManagers_AccountManager___c__DisplayClass171_0_o *)0x0) goto label_044aba2e;
  (pAVar4->fields).result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
  il2cpp_runtime_helper_022b4080(&pAVar4->fields,0);
  pSVar8 = (__this->fields).path;
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aea19 != '\0') goto label_044ab8e0;
label_044ab9d5:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea19 = '\x01';
    iVar2 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (g_data_057aea19 == '\0') goto label_044ab9d5;
label_044ab8e0:
    iVar2 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bearer = *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x18);
  pAVar4 = *ppAVar1;
  onComplete = (System_Action_AottgApiResult__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgApiResult);
  pSVar11 = onComplete;
  System_Action_object____ctor();
  if (__this_00 != (ApplicationManagers_AccountManager_o *)0x0) {
    pIVar5 = (Il2CppObject *)
             ApplicationManagers_AccountManager__SendApiGet(__this_00,pSVar8,bearer,1,onComplete,in_R9);
    (__this->fields).__2__current = pIVar5;
    il2cpp_runtime_helper_022b4080(&(__this->fields).__2__current,pIVar5);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)pAVar4 >> 8),1);
  }
label_044aba2e:
  il2cpp_runtime_helper_022b2c90();
  return (bool_conflict)(pSVar11->fields).invoke_impl;
}


// ApplicationManagers.AccountManager.<SendMeReadJson>d__171$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__SendMeReadJson_d__171__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__SendMeReadJson_d__171_o* __this, const MethodInfo* method);
// 0x44aba40

Il2CppObject *
ApplicationManagers_AccountManager__SendMeReadJson_d__171__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_AccountManager__SendMeReadJson_d__171_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<SendMeReadJson>d__171$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__SendMeReadJson_d__171__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__SendMeReadJson_d__171_o* __this, const MethodInfo* method);
// 0x44aba50

void ApplicationManagers_AccountManager__SendMeReadJson_d__171__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__SendMeReadJson_d__171_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_runtime_helper_023445d0(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_helper_023052d0(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_runtime_helper_023445d0(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
  il2cpp_runtime_helper_022b2b10(__this_00,uVar1);
  return;
}


// ApplicationManagers.AccountManager.<SendMeReadJson>d__171$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__SendMeReadJson_d__171__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__SendMeReadJson_d__171_o* __this, const MethodInfo* method);
// 0x44aba90

Il2CppObject *
ApplicationManagers_AccountManager__SendMeReadJson_d__171__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__SendMeReadJson_d__171_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager$$get_AuthToken
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_AuthToken (const MethodInfo* method);
// 0x449cc70

System_String_o * ApplicationManagers_AccountManager__get_AuthToken(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ae95d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae95d = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x18);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x18);
}


// ApplicationManagers.AccountManager$$set_AuthToken
// il2cpp: void ApplicationManagers_AccountManager__set_AuthToken (System_String_o* value, const MethodInfo* method);
// 0x449cce0

void ApplicationManagers_AccountManager__set_AuthToken(System_String_o *value,MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057ae95e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae95e = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar1 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(System_String_o **)(lVar1 + 0x18) = value;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x18,value);
  return;
}


// ApplicationManagers.AccountManager$$get_AuthTokenExpiresUnix
// il2cpp: int64_t ApplicationManagers_AccountManager__get_AuthTokenExpiresUnix (const MethodInfo* method);
// 0x449cd40

int64_t ApplicationManagers_AccountManager__get_AuthTokenExpiresUnix(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ae95f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae95f = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(int64_t *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x20);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(int64_t *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x20);
}


// ApplicationManagers.AccountManager$$set_AuthTokenExpiresUnix
// il2cpp: void ApplicationManagers_AccountManager__set_AuthTokenExpiresUnix (int64_t value, const MethodInfo* method);
// 0x449cdb0

void ApplicationManagers_AccountManager__set_AuthTokenExpiresUnix(int64_t value,MethodInfo *method)

{
  if (g_data_057ae960 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae960 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(int64_t *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x20) = value;
  return;
}


// ApplicationManagers.AccountManager$$get_PhotonToken
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_PhotonToken (const MethodInfo* method);
// 0x449ce10

System_String_o * ApplicationManagers_AccountManager__get_PhotonToken(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ae961 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae961 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x28);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x28);
}


// ApplicationManagers.AccountManager$$set_PhotonToken
// il2cpp: void ApplicationManagers_AccountManager__set_PhotonToken (System_String_o* value, const MethodInfo* method);
// 0x449ce80

void ApplicationManagers_AccountManager__set_PhotonToken(System_String_o *value,MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057ae962 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae962 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar1 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(System_String_o **)(lVar1 + 0x28) = value;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x28,value);
  return;
}


// ApplicationManagers.AccountManager$$get_PhotonTokenExpiresUnix
// il2cpp: int64_t ApplicationManagers_AccountManager__get_PhotonTokenExpiresUnix (const MethodInfo* method);
// 0x449cee0

int64_t ApplicationManagers_AccountManager__get_PhotonTokenExpiresUnix(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ae963 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae963 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(int64_t *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x30);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(int64_t *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x30);
}


// ApplicationManagers.AccountManager$$set_PhotonTokenExpiresUnix
// il2cpp: void ApplicationManagers_AccountManager__set_PhotonTokenExpiresUnix (int64_t value, const MethodInfo* method);
// 0x449cf50

void ApplicationManagers_AccountManager__set_PhotonTokenExpiresUnix(int64_t value,MethodInfo *method)

{
  if (g_data_057ae964 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae964 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(int64_t *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x30) = value;
  return;
}


// ApplicationManagers.AccountManager$$get_LoginResponse
// il2cpp: ApplicationManagers_AccountLoginResponse_o* ApplicationManagers_AccountManager__get_LoginResponse (const MethodInfo* method);
// 0x449cfb0

ApplicationManagers_AccountLoginResponse_o *
ApplicationManagers_AccountManager__get_LoginResponse(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ae965 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae965 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(ApplicationManagers_AccountLoginResponse_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x38);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(ApplicationManagers_AccountLoginResponse_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x38);
}


// ApplicationManagers.AccountManager$$set_LoginResponse
// il2cpp: void ApplicationManagers_AccountManager__set_LoginResponse (ApplicationManagers_AccountLoginResponse_o* value, const MethodInfo* method);
// 0x449d020

void ApplicationManagers_AccountManager__set_LoginResponse
               (ApplicationManagers_AccountLoginResponse_o *value,MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057ae966 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae966 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar1 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(ApplicationManagers_AccountLoginResponse_o **)(lVar1 + 0x38) = value;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x38,value);
  return;
}


// ApplicationManagers.AccountManager$$get_UserId
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_UserId (const MethodInfo* method);
// 0x449d080

System_String_o * ApplicationManagers_AccountManager__get_UserId(MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  int32_t n;
  Il2CppMethodPointer vtableDispatch;
  long lVar3;
  unkuint10 Var4;
  char cVar5;
  bool_conflict bVar6;
  SimpleJSONFixed_JSONObject_o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  SimpleJSONFixed_JSONArray_o *__this_00;
  System_Globalization_CultureInfo_o *format;
  System_String_o *pSVar8;
  long lVar9;
  System_String_o *extraout_RAX;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *pAVar10;
  ulong uVar11;
  undefined8 uVar12;
  MethodInfo *in_RSI;
  System_String_o *__this_01;
  MethodInfo *method_00;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o __this_02;
  
  if (g_data_057ae967 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae967 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d198;
label_0449d0a5:
    if (g_data_057ae0d4 != '\0') goto label_0449d0b2;
label_0449d1aa:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d1cd;
label_0449d0c2:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d0a5;
label_0449d198:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449d1aa;
label_0449d0b2:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d0c2;
label_0449d1cd:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 == 0) {
    return (System_String_o *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449d1fd;
label_0449d0ee:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d0fe;
label_0449d220:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449d0ee;
label_0449d1fd:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d220;
label_0449d0fe:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x48) == 0) {
      return (System_String_o *)0x0;
    }
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae0d4 == '\0') goto label_0449d250;
label_0449d137:
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d147;
label_0449d273:
      il2cpp_runtime_helper_02337ed0();
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    else {
      if (g_data_057ae0d4 != '\0') goto label_0449d137;
label_0449d250:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae0d4 = '\x01';
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d273;
label_0449d147:
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    if (lVar3 != 0) {
      if (*(long *)(lVar3 + 0x48) != 0) {
        return *(System_String_o **)(*(long *)(lVar3 + 0x48) + 0x10);
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae968 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae968 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d3b8;
label_0449d2c5:
    if (g_data_057ae0d4 != '\0') goto label_0449d2d2;
label_0449d3ca:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d3ed;
label_0449d2e2:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d2c5;
label_0449d3b8:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449d3ca;
label_0449d2d2:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d2e2;
label_0449d3ed:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 == 0) {
    return (System_String_o *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449d41d;
label_0449d30e:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d31e;
label_0449d440:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449d30e;
label_0449d41d:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d440;
label_0449d31e:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x48) == 0) {
      return (System_String_o *)0x0;
    }
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae0d4 == '\0') goto label_0449d470;
label_0449d357:
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d367;
label_0449d493:
      il2cpp_runtime_helper_02337ed0();
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    else {
      if (g_data_057ae0d4 != '\0') goto label_0449d357;
label_0449d470:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae0d4 = '\x01';
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d493;
label_0449d367:
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    if (lVar3 != 0) {
      if (*(long *)(lVar3 + 0x48) != 0) {
        return *(System_String_o **)(*(long *)(lVar3 + 0x48) + 0x20);
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae969 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae969 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d5d8;
label_0449d4e5:
    if (g_data_057ae0d4 != '\0') goto label_0449d4f2;
label_0449d5ea:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d60d;
label_0449d502:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d4e5;
label_0449d5d8:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449d5ea;
label_0449d4f2:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d502;
label_0449d60d:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 == 0) {
    return (System_String_o *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449d63d;
label_0449d52e:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d53e;
label_0449d660:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449d52e;
label_0449d63d:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d660;
label_0449d53e:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x48) == 0) {
      return (System_String_o *)0x0;
    }
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae0d4 == '\0') goto label_0449d690;
label_0449d577:
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d587;
label_0449d6b3:
      il2cpp_runtime_helper_02337ed0();
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    else {
      if (g_data_057ae0d4 != '\0') goto label_0449d577;
label_0449d690:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae0d4 = '\x01';
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d6b3;
label_0449d587:
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    if (lVar3 != 0) {
      if (*(long *)(lVar3 + 0x48) != 0) {
        return *(System_String_o **)(*(long *)(lVar3 + 0x48) + 0x18);
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae96a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae96a = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d7fb;
label_0449d705:
    if (g_data_057ae0d4 != '\0') goto label_0449d712;
label_0449d80d:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d830;
label_0449d722:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d705;
label_0449d7fb:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449d80d;
label_0449d712:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d722;
label_0449d830:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 == 0) {
    return (System_String_o *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449d860;
label_0449d74e:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d75e;
label_0449d883:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449d74e;
label_0449d860:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d883;
label_0449d75e:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x48) == 0) {
      return (System_String_o *)0x0;
    }
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae0d4 == '\0') goto label_0449d8b3;
label_0449d797:
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d7a7;
label_0449d8d6:
      il2cpp_runtime_helper_02337ed0();
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    else {
      if (g_data_057ae0d4 != '\0') goto label_0449d797;
label_0449d8b3:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae0d4 = '\x01';
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d8d6;
label_0449d7a7:
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    if (lVar3 != 0) {
      lVar3 = *(long *)(lVar3 + 0x48);
      if (lVar3 != 0) {
        return (System_String_o *)CONCAT71((int7)((ulong)lVar3 >> 8),*(char *)(lVar3 + 0x30) != '\0');
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae96b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae96b = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449da18;
label_0449d925:
    if (g_data_057ae0d4 != '\0') goto label_0449d932;
label_0449da2a:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449da4d;
label_0449d942:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d925;
label_0449da18:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449da2a;
label_0449d932:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d942;
label_0449da4d:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 == 0) {
    return (System_String_o *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449da7d;
label_0449d96e:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d97e;
label_0449daa0:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449d96e;
label_0449da7d:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449daa0;
label_0449d97e:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x48) == 0) {
      return (System_String_o *)0x0;
    }
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae0d4 == '\0') goto label_0449dad0;
label_0449d9b7:
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d9c7;
label_0449daf3:
      il2cpp_runtime_helper_02337ed0();
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    else {
      if (g_data_057ae0d4 != '\0') goto label_0449d9b7;
label_0449dad0:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae0d4 = '\x01';
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449daf3;
label_0449d9c7:
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    if (lVar3 != 0) {
      if (*(long *)(lVar3 + 0x48) != 0) {
        return *(System_String_o **)(*(long *)(lVar3 + 0x48) + 0x38);
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae96c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae96c = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449dc38;
label_0449db45:
    if (g_data_057ae0d4 != '\0') goto label_0449db52;
label_0449dc4a:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449dc6d;
label_0449db62:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449db45;
label_0449dc38:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449dc4a;
label_0449db52:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449db62;
label_0449dc6d:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 == 0) {
    return (System_String_o *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449dc9d;
label_0449db8e:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449db9e;
label_0449dcc0:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449db8e;
label_0449dc9d:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449dcc0;
label_0449db9e:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x48) == 0) {
      return (System_String_o *)0x0;
    }
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae0d4 == '\0') goto label_0449dcf0;
label_0449dbd7:
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449dbe7;
label_0449dd13:
      il2cpp_runtime_helper_02337ed0();
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    else {
      if (g_data_057ae0d4 != '\0') goto label_0449dbd7;
label_0449dcf0:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae0d4 = '\x01';
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449dd13;
label_0449dbe7:
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    if (lVar3 != 0) {
      if (*(long *)(lVar3 + 0x48) != 0) {
        return *(System_String_o **)(*(long *)(lVar3 + 0x48) + 0x28);
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae96d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae96d = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449debb;
label_0449dd65:
    if (g_data_057ae0d4 != '\0') goto label_0449dd72;
label_0449decd:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449def0;
label_0449dd82:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449dd65;
label_0449debb:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449decd;
label_0449dd72:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449dd82;
label_0449def0:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 == 0) {
    return (System_String_o *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449df20;
label_0449ddae:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449ddbe;
label_0449df43:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449ddae;
label_0449df20:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449df43;
label_0449ddbe:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  pSVar8 = TypeInfo_AccountManager;
  if (lVar3 == 0) goto label_0449e008;
  if (*(long *)(lVar3 + 0x48) == 0) {
    return (System_String_o *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449df76;
label_0449ddf7:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449de07;
label_0449df99:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449ddf7;
label_0449df76:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449df99;
label_0449de07:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  pSVar8 = TypeInfo_AccountManager;
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x48) == 0)) goto label_0449e008;
  if (*(long *)(*(long *)(lVar3 + 0x48) + 0x58) == 0) {
    return (System_String_o *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449dfc9;
label_0449de4d:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449de5d;
label_0449dfec:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449de4d;
label_0449dfc9:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449dfec;
label_0449de5d:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  pSVar8 = TypeInfo_AccountManager;
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x48) != 0)) {
    lVar3 = *(long *)(*(long *)(lVar3 + 0x48) + 0x58);
    pSVar8 = (System_String_o *)0x0;
    if (lVar3 != 0) {
      if (g_data_057ae952 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
        il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
        il2cpp_runtime_helper_023445d0(&"o");
        il2cpp_runtime_helper_023445d0(&"tierIds");
        il2cpp_runtime_helper_023445d0(&"linked");
        il2cpp_runtime_helper_023445d0(&"entitledAmountCents");
        il2cpp_runtime_helper_023445d0(&"lastSyncedAt");
        il2cpp_runtime_helper_023445d0(&"manualOverride");
        il2cpp_runtime_helper_023445d0(&"patronStatus");
        g_data_057ae952 = '\x01';
      }
      __this = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
      SimpleJSONFixed_JSONObject___ctor(__this,(MethodInfo *)0x0);
      bVar1 = *(byte *)(lVar3 + 0x10);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450((uint)bVar1,(MethodInfo *)0x0);
      if (__this != (SimpleJSONFixed_JSONObject_o *)0x0) {
        (*(__this->klass->vtable)._8_set_Item.methodPtr)
                  (__this,"linked",pSVar7,(__this->klass->vtable)._8_set_Item.method);
        bVar6 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar3 + 0x18),(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          pSVar8 = *(System_String_o **)(lVar3 + 0x18);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar8,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._8_set_Item.methodPtr)
                    (__this,"patronStatus",pSVar7,(__this->klass->vtable)._8_set_Item.method);
        }
        __this_00 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
        SimpleJSONFixed_JSONArray___ctor(__this_00,(MethodInfo *)0x0);
        lVar9 = *(long *)(lVar3 + 0x20);
        if (lVar9 != 0) {
          if (__this_00 == (SimpleJSONFixed_JSONArray_o *)0x0) {
            if (0 < *(int *)(lVar9 + 0x18)) goto label_0449c8c9;
          }
          else {
            uVar11 = 0;
            uVar2 = *(uint *)(lVar9 + 0x18);
            if (0 < (int)uVar2) {
              do {
                if (uVar2 <= uVar11) goto label_0449c8c4;
                pSVar8 = *(System_String_o **)(lVar9 + 0x20 + uVar11 * 8);
                if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar8,(MethodInfo *)0x0);
                (*(__this_00->klass->vtable)._21_Add.methodPtr)
                          (__this_00,pSVar7,(__this_00->klass->vtable)._21_Add.method);
                uVar11 = uVar11 + 1;
                lVar9 = *(long *)(lVar3 + 0x20);
                if (lVar9 == 0) goto label_0449c8bf;
                uVar2 = *(uint *)(lVar9 + 0x18);
              } while ((long)uVar11 < (long)(int)uVar2);
            }
          }
        }
        (*(__this->klass->vtable)._8_set_Item.methodPtr)
                  (__this,"tierIds",__this_00,(__this->klass->vtable)._8_set_Item.method);
        n = *(int32_t *)(lVar3 + 0x28);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_3f79f40(n,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._8_set_Item.methodPtr)
                  (__this,"entitledAmountCents",pSVar7,(__this->klass->vtable)._8_set_Item.method);
        pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450
                           ((uint)*(byte *)(lVar3 + 0x2c),(MethodInfo *)0x0);
        (*(__this->klass->vtable)._8_set_Item.methodPtr)(__this,"manualOverride",pSVar7);
        Var4 = *(unkuint10 *)(lVar3 + 0x30);
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method_00 = (MethodInfo *)0x0;
        left.fields._10_6_ = 0;
        left.fields._0_10_ = Var4;
        bVar6 = System_DateTimeOffset__op_Inequality
                          (left,(System_DateTimeOffset_o)ZEXT816(0),(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          format = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
          if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_02.fields._8_8_ = "o";
          __this_02.fields._dateTime.fields._dateData =
               (System_DateTime_Fields)(System_DateTime_Fields)(lVar3 + 0x30);
          pSVar8 = System_DateTimeOffset__ToString_3c98830
                             (__this_02,(System_String_o *)format,(System_IFormatProvider_o *)0x0,method_00);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar8,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._8_set_Item.methodPtr)
                    (__this,"lastSyncedAt",pSVar7,(__this->klass->vtable)._8_set_Item.method);
        }
        return (System_String_o *)__this;
      }
label_0449c8bf:
      il2cpp_runtime_helper_022b2c90();
label_0449c8c4:
      lVar9 = il2cpp_runtime_helper_022b2ca0();
label_0449c8c9:
      pSVar8 = *(System_String_o **)(lVar9 + 0x20);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar12 = 0;
      SimpleJSONFixed_JSONNode__op_Implicit(pSVar8,(MethodInfo *)0x0);
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae958 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        g_data_057ae958 = '\x01';
      }
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = pSVar8;
      bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                        ((SimpleJSONFixed_JSONNode_o *)pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        if (pSVar8 == (System_String_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
          return extraout_RAX;
        }
        cVar5 = (*(code *)pSVar8->klass[1]._1.name)(pSVar8,uVar12,pSVar8->klass[1]._1.namespaze);
        if (cVar5 != '\0') {
          vtableDispatch = (pSVar8->klass->vtable)._7_CompareTo.methodPtr;
          pSVar8 = (System_String_o *)
                   (*vtableDispatch)
                             (pSVar8,uVar12,(pSVar8->klass->vtable)._7_CompareTo.method,vtableDispatch)
          ;
          return pSVar8;
        }
      }
      return (System_String_o *)0x0;
    }
  }
label_0449e008:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae96e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae96e = '\x01';
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pAVar10 = ApplicationManagers_AccountManager__GetOAuthLink(pSVar8,in_RSI);
  return (System_String_o *)
         CONCAT71((int7)((ulong)pAVar10 >> 8),
                  pAVar10 != (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0);
}


// ApplicationManagers.AccountManager$$get_Username
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_Username (const MethodInfo* method);
// 0x449d2a0

System_String_o * ApplicationManagers_AccountManager__get_Username(MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  int32_t n;
  Il2CppMethodPointer vtableDispatch;
  long lVar3;
  unkuint10 Var4;
  char cVar5;
  bool_conflict bVar6;
  SimpleJSONFixed_JSONObject_o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  SimpleJSONFixed_JSONArray_o *__this_00;
  System_Globalization_CultureInfo_o *format;
  System_String_o *pSVar8;
  long lVar9;
  System_String_o *extraout_RAX;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *pAVar10;
  ulong uVar11;
  undefined8 uVar12;
  MethodInfo *in_RSI;
  System_String_o *__this_01;
  MethodInfo *method_00;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o __this_02;
  
  if (g_data_057ae968 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae968 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d3b8;
label_0449d2c5:
    if (g_data_057ae0d4 != '\0') goto label_0449d2d2;
label_0449d3ca:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d3ed;
label_0449d2e2:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d2c5;
label_0449d3b8:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449d3ca;
label_0449d2d2:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d2e2;
label_0449d3ed:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 == 0) {
    return (System_String_o *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449d41d;
label_0449d30e:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d31e;
label_0449d440:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449d30e;
label_0449d41d:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d440;
label_0449d31e:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x48) == 0) {
      return (System_String_o *)0x0;
    }
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae0d4 == '\0') goto label_0449d470;
label_0449d357:
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d367;
label_0449d493:
      il2cpp_runtime_helper_02337ed0();
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    else {
      if (g_data_057ae0d4 != '\0') goto label_0449d357;
label_0449d470:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae0d4 = '\x01';
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d493;
label_0449d367:
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    if (lVar3 != 0) {
      if (*(long *)(lVar3 + 0x48) != 0) {
        return *(System_String_o **)(*(long *)(lVar3 + 0x48) + 0x20);
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae969 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae969 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d5d8;
label_0449d4e5:
    if (g_data_057ae0d4 != '\0') goto label_0449d4f2;
label_0449d5ea:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d60d;
label_0449d502:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d4e5;
label_0449d5d8:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449d5ea;
label_0449d4f2:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d502;
label_0449d60d:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 == 0) {
    return (System_String_o *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449d63d;
label_0449d52e:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d53e;
label_0449d660:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449d52e;
label_0449d63d:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d660;
label_0449d53e:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x48) == 0) {
      return (System_String_o *)0x0;
    }
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae0d4 == '\0') goto label_0449d690;
label_0449d577:
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d587;
label_0449d6b3:
      il2cpp_runtime_helper_02337ed0();
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    else {
      if (g_data_057ae0d4 != '\0') goto label_0449d577;
label_0449d690:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae0d4 = '\x01';
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d6b3;
label_0449d587:
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    if (lVar3 != 0) {
      if (*(long *)(lVar3 + 0x48) != 0) {
        return *(System_String_o **)(*(long *)(lVar3 + 0x48) + 0x18);
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae96a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae96a = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d7fb;
label_0449d705:
    if (g_data_057ae0d4 != '\0') goto label_0449d712;
label_0449d80d:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d830;
label_0449d722:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d705;
label_0449d7fb:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449d80d;
label_0449d712:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d722;
label_0449d830:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 == 0) {
    return (System_String_o *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449d860;
label_0449d74e:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d75e;
label_0449d883:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449d74e;
label_0449d860:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d883;
label_0449d75e:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x48) == 0) {
      return (System_String_o *)0x0;
    }
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae0d4 == '\0') goto label_0449d8b3;
label_0449d797:
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d7a7;
label_0449d8d6:
      il2cpp_runtime_helper_02337ed0();
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    else {
      if (g_data_057ae0d4 != '\0') goto label_0449d797;
label_0449d8b3:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae0d4 = '\x01';
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d8d6;
label_0449d7a7:
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    if (lVar3 != 0) {
      lVar3 = *(long *)(lVar3 + 0x48);
      if (lVar3 != 0) {
        return (System_String_o *)CONCAT71((int7)((ulong)lVar3 >> 8),*(char *)(lVar3 + 0x30) != '\0');
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae96b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae96b = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449da18;
label_0449d925:
    if (g_data_057ae0d4 != '\0') goto label_0449d932;
label_0449da2a:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449da4d;
label_0449d942:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d925;
label_0449da18:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449da2a;
label_0449d932:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d942;
label_0449da4d:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 == 0) {
    return (System_String_o *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449da7d;
label_0449d96e:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d97e;
label_0449daa0:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449d96e;
label_0449da7d:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449daa0;
label_0449d97e:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x48) == 0) {
      return (System_String_o *)0x0;
    }
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae0d4 == '\0') goto label_0449dad0;
label_0449d9b7:
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d9c7;
label_0449daf3:
      il2cpp_runtime_helper_02337ed0();
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    else {
      if (g_data_057ae0d4 != '\0') goto label_0449d9b7;
label_0449dad0:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae0d4 = '\x01';
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449daf3;
label_0449d9c7:
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    if (lVar3 != 0) {
      if (*(long *)(lVar3 + 0x48) != 0) {
        return *(System_String_o **)(*(long *)(lVar3 + 0x48) + 0x38);
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae96c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae96c = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449dc38;
label_0449db45:
    if (g_data_057ae0d4 != '\0') goto label_0449db52;
label_0449dc4a:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449dc6d;
label_0449db62:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449db45;
label_0449dc38:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449dc4a;
label_0449db52:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449db62;
label_0449dc6d:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 == 0) {
    return (System_String_o *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449dc9d;
label_0449db8e:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449db9e;
label_0449dcc0:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449db8e;
label_0449dc9d:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449dcc0;
label_0449db9e:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x48) == 0) {
      return (System_String_o *)0x0;
    }
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae0d4 == '\0') goto label_0449dcf0;
label_0449dbd7:
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449dbe7;
label_0449dd13:
      il2cpp_runtime_helper_02337ed0();
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    else {
      if (g_data_057ae0d4 != '\0') goto label_0449dbd7;
label_0449dcf0:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae0d4 = '\x01';
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449dd13;
label_0449dbe7:
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    if (lVar3 != 0) {
      if (*(long *)(lVar3 + 0x48) != 0) {
        return *(System_String_o **)(*(long *)(lVar3 + 0x48) + 0x28);
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae96d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae96d = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449debb;
label_0449dd65:
    if (g_data_057ae0d4 != '\0') goto label_0449dd72;
label_0449decd:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449def0;
label_0449dd82:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449dd65;
label_0449debb:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449decd;
label_0449dd72:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449dd82;
label_0449def0:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 == 0) {
    return (System_String_o *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449df20;
label_0449ddae:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449ddbe;
label_0449df43:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449ddae;
label_0449df20:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449df43;
label_0449ddbe:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  pSVar8 = TypeInfo_AccountManager;
  if (lVar3 == 0) goto label_0449e008;
  if (*(long *)(lVar3 + 0x48) == 0) {
    return (System_String_o *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449df76;
label_0449ddf7:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449de07;
label_0449df99:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449ddf7;
label_0449df76:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449df99;
label_0449de07:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  pSVar8 = TypeInfo_AccountManager;
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x48) == 0)) goto label_0449e008;
  if (*(long *)(*(long *)(lVar3 + 0x48) + 0x58) == 0) {
    return (System_String_o *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449dfc9;
label_0449de4d:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449de5d;
label_0449dfec:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449de4d;
label_0449dfc9:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449dfec;
label_0449de5d:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  pSVar8 = TypeInfo_AccountManager;
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x48) != 0)) {
    lVar3 = *(long *)(*(long *)(lVar3 + 0x48) + 0x58);
    pSVar8 = (System_String_o *)0x0;
    if (lVar3 != 0) {
      if (g_data_057ae952 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
        il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
        il2cpp_runtime_helper_023445d0(&"o");
        il2cpp_runtime_helper_023445d0(&"tierIds");
        il2cpp_runtime_helper_023445d0(&"linked");
        il2cpp_runtime_helper_023445d0(&"entitledAmountCents");
        il2cpp_runtime_helper_023445d0(&"lastSyncedAt");
        il2cpp_runtime_helper_023445d0(&"manualOverride");
        il2cpp_runtime_helper_023445d0(&"patronStatus");
        g_data_057ae952 = '\x01';
      }
      __this = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
      SimpleJSONFixed_JSONObject___ctor(__this,(MethodInfo *)0x0);
      bVar1 = *(byte *)(lVar3 + 0x10);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450((uint)bVar1,(MethodInfo *)0x0);
      if (__this != (SimpleJSONFixed_JSONObject_o *)0x0) {
        (*(__this->klass->vtable)._8_set_Item.methodPtr)
                  (__this,"linked",pSVar7,(__this->klass->vtable)._8_set_Item.method);
        bVar6 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar3 + 0x18),(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          pSVar8 = *(System_String_o **)(lVar3 + 0x18);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar8,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._8_set_Item.methodPtr)
                    (__this,"patronStatus",pSVar7,(__this->klass->vtable)._8_set_Item.method);
        }
        __this_00 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
        SimpleJSONFixed_JSONArray___ctor(__this_00,(MethodInfo *)0x0);
        lVar9 = *(long *)(lVar3 + 0x20);
        if (lVar9 != 0) {
          if (__this_00 == (SimpleJSONFixed_JSONArray_o *)0x0) {
            if (0 < *(int *)(lVar9 + 0x18)) goto label_0449c8c9;
          }
          else {
            uVar11 = 0;
            uVar2 = *(uint *)(lVar9 + 0x18);
            if (0 < (int)uVar2) {
              do {
                if (uVar2 <= uVar11) goto label_0449c8c4;
                pSVar8 = *(System_String_o **)(lVar9 + 0x20 + uVar11 * 8);
                if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar8,(MethodInfo *)0x0);
                (*(__this_00->klass->vtable)._21_Add.methodPtr)
                          (__this_00,pSVar7,(__this_00->klass->vtable)._21_Add.method);
                uVar11 = uVar11 + 1;
                lVar9 = *(long *)(lVar3 + 0x20);
                if (lVar9 == 0) goto label_0449c8bf;
                uVar2 = *(uint *)(lVar9 + 0x18);
              } while ((long)uVar11 < (long)(int)uVar2);
            }
          }
        }
        (*(__this->klass->vtable)._8_set_Item.methodPtr)
                  (__this,"tierIds",__this_00,(__this->klass->vtable)._8_set_Item.method);
        n = *(int32_t *)(lVar3 + 0x28);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_3f79f40(n,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._8_set_Item.methodPtr)
                  (__this,"entitledAmountCents",pSVar7,(__this->klass->vtable)._8_set_Item.method);
        pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450
                           ((uint)*(byte *)(lVar3 + 0x2c),(MethodInfo *)0x0);
        (*(__this->klass->vtable)._8_set_Item.methodPtr)(__this,"manualOverride",pSVar7);
        Var4 = *(unkuint10 *)(lVar3 + 0x30);
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method_00 = (MethodInfo *)0x0;
        left.fields._10_6_ = 0;
        left.fields._0_10_ = Var4;
        bVar6 = System_DateTimeOffset__op_Inequality
                          (left,(System_DateTimeOffset_o)ZEXT816(0),(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          format = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
          if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_02.fields._8_8_ = "o";
          __this_02.fields._dateTime.fields._dateData =
               (System_DateTime_Fields)(System_DateTime_Fields)(lVar3 + 0x30);
          pSVar8 = System_DateTimeOffset__ToString_3c98830
                             (__this_02,(System_String_o *)format,(System_IFormatProvider_o *)0x0,method_00);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar8,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._8_set_Item.methodPtr)
                    (__this,"lastSyncedAt",pSVar7,(__this->klass->vtable)._8_set_Item.method);
        }
        return (System_String_o *)__this;
      }
label_0449c8bf:
      il2cpp_runtime_helper_022b2c90();
label_0449c8c4:
      lVar9 = il2cpp_runtime_helper_022b2ca0();
label_0449c8c9:
      pSVar8 = *(System_String_o **)(lVar9 + 0x20);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar12 = 0;
      SimpleJSONFixed_JSONNode__op_Implicit(pSVar8,(MethodInfo *)0x0);
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae958 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        g_data_057ae958 = '\x01';
      }
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = pSVar8;
      bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                        ((SimpleJSONFixed_JSONNode_o *)pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        if (pSVar8 == (System_String_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
          return extraout_RAX;
        }
        cVar5 = (*(code *)pSVar8->klass[1]._1.name)(pSVar8,uVar12,pSVar8->klass[1]._1.namespaze);
        if (cVar5 != '\0') {
          vtableDispatch = (pSVar8->klass->vtable)._7_CompareTo.methodPtr;
          pSVar8 = (System_String_o *)
                   (*vtableDispatch)
                             (pSVar8,uVar12,(pSVar8->klass->vtable)._7_CompareTo.method,vtableDispatch)
          ;
          return pSVar8;
        }
      }
      return (System_String_o *)0x0;
    }
  }
label_0449e008:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae96e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae96e = '\x01';
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pAVar10 = ApplicationManagers_AccountManager__GetOAuthLink(pSVar8,in_RSI);
  return (System_String_o *)
         CONCAT71((int7)((ulong)pAVar10 >> 8),
                  pAVar10 != (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0);
}


// ApplicationManagers.AccountManager$$get_Email
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_Email (const MethodInfo* method);
// 0x449d4c0

System_String_o * ApplicationManagers_AccountManager__get_Email(MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  int32_t n;
  Il2CppMethodPointer vtableDispatch;
  long lVar3;
  unkuint10 Var4;
  char cVar5;
  bool_conflict bVar6;
  SimpleJSONFixed_JSONObject_o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  SimpleJSONFixed_JSONArray_o *__this_00;
  System_Globalization_CultureInfo_o *format;
  System_String_o *pSVar8;
  long lVar9;
  System_String_o *extraout_RAX;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *pAVar10;
  ulong uVar11;
  undefined8 uVar12;
  MethodInfo *in_RSI;
  System_String_o *__this_01;
  MethodInfo *method_00;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o __this_02;
  
  if (g_data_057ae969 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae969 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d5d8;
label_0449d4e5:
    if (g_data_057ae0d4 != '\0') goto label_0449d4f2;
label_0449d5ea:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d60d;
label_0449d502:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d4e5;
label_0449d5d8:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449d5ea;
label_0449d4f2:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d502;
label_0449d60d:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 == 0) {
    return (System_String_o *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449d63d;
label_0449d52e:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d53e;
label_0449d660:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449d52e;
label_0449d63d:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d660;
label_0449d53e:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x48) == 0) {
      return (System_String_o *)0x0;
    }
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae0d4 == '\0') goto label_0449d690;
label_0449d577:
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d587;
label_0449d6b3:
      il2cpp_runtime_helper_02337ed0();
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    else {
      if (g_data_057ae0d4 != '\0') goto label_0449d577;
label_0449d690:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae0d4 = '\x01';
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d6b3;
label_0449d587:
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    if (lVar3 != 0) {
      if (*(long *)(lVar3 + 0x48) != 0) {
        return *(System_String_o **)(*(long *)(lVar3 + 0x48) + 0x18);
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae96a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae96a = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d7fb;
label_0449d705:
    if (g_data_057ae0d4 != '\0') goto label_0449d712;
label_0449d80d:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d830;
label_0449d722:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d705;
label_0449d7fb:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449d80d;
label_0449d712:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d722;
label_0449d830:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 == 0) {
    return (System_String_o *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449d860;
label_0449d74e:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d75e;
label_0449d883:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449d74e;
label_0449d860:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d883;
label_0449d75e:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x48) == 0) {
      return (System_String_o *)0x0;
    }
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae0d4 == '\0') goto label_0449d8b3;
label_0449d797:
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d7a7;
label_0449d8d6:
      il2cpp_runtime_helper_02337ed0();
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    else {
      if (g_data_057ae0d4 != '\0') goto label_0449d797;
label_0449d8b3:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae0d4 = '\x01';
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d8d6;
label_0449d7a7:
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    if (lVar3 != 0) {
      lVar3 = *(long *)(lVar3 + 0x48);
      if (lVar3 != 0) {
        return (System_String_o *)CONCAT71((int7)((ulong)lVar3 >> 8),*(char *)(lVar3 + 0x30) != '\0');
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae96b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae96b = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449da18;
label_0449d925:
    if (g_data_057ae0d4 != '\0') goto label_0449d932;
label_0449da2a:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449da4d;
label_0449d942:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d925;
label_0449da18:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449da2a;
label_0449d932:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d942;
label_0449da4d:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 == 0) {
    return (System_String_o *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449da7d;
label_0449d96e:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d97e;
label_0449daa0:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449d96e;
label_0449da7d:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449daa0;
label_0449d97e:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x48) == 0) {
      return (System_String_o *)0x0;
    }
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae0d4 == '\0') goto label_0449dad0;
label_0449d9b7:
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d9c7;
label_0449daf3:
      il2cpp_runtime_helper_02337ed0();
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    else {
      if (g_data_057ae0d4 != '\0') goto label_0449d9b7;
label_0449dad0:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae0d4 = '\x01';
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449daf3;
label_0449d9c7:
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    if (lVar3 != 0) {
      if (*(long *)(lVar3 + 0x48) != 0) {
        return *(System_String_o **)(*(long *)(lVar3 + 0x48) + 0x38);
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae96c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae96c = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449dc38;
label_0449db45:
    if (g_data_057ae0d4 != '\0') goto label_0449db52;
label_0449dc4a:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449dc6d;
label_0449db62:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449db45;
label_0449dc38:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449dc4a;
label_0449db52:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449db62;
label_0449dc6d:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 == 0) {
    return (System_String_o *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449dc9d;
label_0449db8e:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449db9e;
label_0449dcc0:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449db8e;
label_0449dc9d:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449dcc0;
label_0449db9e:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x48) == 0) {
      return (System_String_o *)0x0;
    }
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae0d4 == '\0') goto label_0449dcf0;
label_0449dbd7:
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449dbe7;
label_0449dd13:
      il2cpp_runtime_helper_02337ed0();
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    else {
      if (g_data_057ae0d4 != '\0') goto label_0449dbd7;
label_0449dcf0:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae0d4 = '\x01';
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449dd13;
label_0449dbe7:
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    if (lVar3 != 0) {
      if (*(long *)(lVar3 + 0x48) != 0) {
        return *(System_String_o **)(*(long *)(lVar3 + 0x48) + 0x28);
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae96d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae96d = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449debb;
label_0449dd65:
    if (g_data_057ae0d4 != '\0') goto label_0449dd72;
label_0449decd:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449def0;
label_0449dd82:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449dd65;
label_0449debb:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449decd;
label_0449dd72:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449dd82;
label_0449def0:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 == 0) {
    return (System_String_o *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449df20;
label_0449ddae:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449ddbe;
label_0449df43:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449ddae;
label_0449df20:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449df43;
label_0449ddbe:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  pSVar8 = TypeInfo_AccountManager;
  if (lVar3 == 0) goto label_0449e008;
  if (*(long *)(lVar3 + 0x48) == 0) {
    return (System_String_o *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449df76;
label_0449ddf7:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449de07;
label_0449df99:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449ddf7;
label_0449df76:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449df99;
label_0449de07:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  pSVar8 = TypeInfo_AccountManager;
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x48) == 0)) goto label_0449e008;
  if (*(long *)(*(long *)(lVar3 + 0x48) + 0x58) == 0) {
    return (System_String_o *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449dfc9;
label_0449de4d:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449de5d;
label_0449dfec:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449de4d;
label_0449dfc9:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449dfec;
label_0449de5d:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  pSVar8 = TypeInfo_AccountManager;
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x48) != 0)) {
    lVar3 = *(long *)(*(long *)(lVar3 + 0x48) + 0x58);
    pSVar8 = (System_String_o *)0x0;
    if (lVar3 != 0) {
      if (g_data_057ae952 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
        il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
        il2cpp_runtime_helper_023445d0(&"o");
        il2cpp_runtime_helper_023445d0(&"tierIds");
        il2cpp_runtime_helper_023445d0(&"linked");
        il2cpp_runtime_helper_023445d0(&"entitledAmountCents");
        il2cpp_runtime_helper_023445d0(&"lastSyncedAt");
        il2cpp_runtime_helper_023445d0(&"manualOverride");
        il2cpp_runtime_helper_023445d0(&"patronStatus");
        g_data_057ae952 = '\x01';
      }
      __this = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
      SimpleJSONFixed_JSONObject___ctor(__this,(MethodInfo *)0x0);
      bVar1 = *(byte *)(lVar3 + 0x10);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450((uint)bVar1,(MethodInfo *)0x0);
      if (__this != (SimpleJSONFixed_JSONObject_o *)0x0) {
        (*(__this->klass->vtable)._8_set_Item.methodPtr)
                  (__this,"linked",pSVar7,(__this->klass->vtable)._8_set_Item.method);
        bVar6 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar3 + 0x18),(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          pSVar8 = *(System_String_o **)(lVar3 + 0x18);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar8,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._8_set_Item.methodPtr)
                    (__this,"patronStatus",pSVar7,(__this->klass->vtable)._8_set_Item.method);
        }
        __this_00 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
        SimpleJSONFixed_JSONArray___ctor(__this_00,(MethodInfo *)0x0);
        lVar9 = *(long *)(lVar3 + 0x20);
        if (lVar9 != 0) {
          if (__this_00 == (SimpleJSONFixed_JSONArray_o *)0x0) {
            if (0 < *(int *)(lVar9 + 0x18)) goto label_0449c8c9;
          }
          else {
            uVar11 = 0;
            uVar2 = *(uint *)(lVar9 + 0x18);
            if (0 < (int)uVar2) {
              do {
                if (uVar2 <= uVar11) goto label_0449c8c4;
                pSVar8 = *(System_String_o **)(lVar9 + 0x20 + uVar11 * 8);
                if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar8,(MethodInfo *)0x0);
                (*(__this_00->klass->vtable)._21_Add.methodPtr)
                          (__this_00,pSVar7,(__this_00->klass->vtable)._21_Add.method);
                uVar11 = uVar11 + 1;
                lVar9 = *(long *)(lVar3 + 0x20);
                if (lVar9 == 0) goto label_0449c8bf;
                uVar2 = *(uint *)(lVar9 + 0x18);
              } while ((long)uVar11 < (long)(int)uVar2);
            }
          }
        }
        (*(__this->klass->vtable)._8_set_Item.methodPtr)
                  (__this,"tierIds",__this_00,(__this->klass->vtable)._8_set_Item.method);
        n = *(int32_t *)(lVar3 + 0x28);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_3f79f40(n,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._8_set_Item.methodPtr)
                  (__this,"entitledAmountCents",pSVar7,(__this->klass->vtable)._8_set_Item.method);
        pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450
                           ((uint)*(byte *)(lVar3 + 0x2c),(MethodInfo *)0x0);
        (*(__this->klass->vtable)._8_set_Item.methodPtr)(__this,"manualOverride",pSVar7);
        Var4 = *(unkuint10 *)(lVar3 + 0x30);
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method_00 = (MethodInfo *)0x0;
        left.fields._10_6_ = 0;
        left.fields._0_10_ = Var4;
        bVar6 = System_DateTimeOffset__op_Inequality
                          (left,(System_DateTimeOffset_o)ZEXT816(0),(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          format = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
          if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_02.fields._8_8_ = "o";
          __this_02.fields._dateTime.fields._dateData =
               (System_DateTime_Fields)(System_DateTime_Fields)(lVar3 + 0x30);
          pSVar8 = System_DateTimeOffset__ToString_3c98830
                             (__this_02,(System_String_o *)format,(System_IFormatProvider_o *)0x0,method_00);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar8,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._8_set_Item.methodPtr)
                    (__this,"lastSyncedAt",pSVar7,(__this->klass->vtable)._8_set_Item.method);
        }
        return (System_String_o *)__this;
      }
label_0449c8bf:
      il2cpp_runtime_helper_022b2c90();
label_0449c8c4:
      lVar9 = il2cpp_runtime_helper_022b2ca0();
label_0449c8c9:
      pSVar8 = *(System_String_o **)(lVar9 + 0x20);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar12 = 0;
      SimpleJSONFixed_JSONNode__op_Implicit(pSVar8,(MethodInfo *)0x0);
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae958 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        g_data_057ae958 = '\x01';
      }
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = pSVar8;
      bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                        ((SimpleJSONFixed_JSONNode_o *)pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        if (pSVar8 == (System_String_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
          return extraout_RAX;
        }
        cVar5 = (*(code *)pSVar8->klass[1]._1.name)(pSVar8,uVar12,pSVar8->klass[1]._1.namespaze);
        if (cVar5 != '\0') {
          vtableDispatch = (pSVar8->klass->vtable)._7_CompareTo.methodPtr;
          pSVar8 = (System_String_o *)
                   (*vtableDispatch)
                             (pSVar8,uVar12,(pSVar8->klass->vtable)._7_CompareTo.method,vtableDispatch)
          ;
          return pSVar8;
        }
      }
      return (System_String_o *)0x0;
    }
  }
label_0449e008:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae96e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae96e = '\x01';
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pAVar10 = ApplicationManagers_AccountManager__GetOAuthLink(pSVar8,in_RSI);
  return (System_String_o *)
         CONCAT71((int7)((ulong)pAVar10 >> 8),
                  pAVar10 != (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0);
}


// ApplicationManagers.AccountManager$$get_EmailVerified
// il2cpp: bool ApplicationManagers_AccountManager__get_EmailVerified (const MethodInfo* method);
// 0x449d6e0

bool_conflict ApplicationManagers_AccountManager__get_EmailVerified(MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  int32_t n;
  Il2CppMethodPointer vtableDispatch;
  long lVar3;
  unkuint10 Var4;
  char cVar5;
  bool_conflict bVar6;
  bool_conflict extraout_EAX;
  SimpleJSONFixed_JSONObject_o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  SimpleJSONFixed_JSONArray_o *__this_00;
  System_Globalization_CultureInfo_o *format;
  System_String_o *pSVar8;
  long lVar9;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *pAVar10;
  ulong uVar11;
  undefined8 uVar12;
  MethodInfo *in_RSI;
  System_String_o *__this_01;
  MethodInfo *method_00;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o __this_02;
  
  if (g_data_057ae96a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae96a = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d7fb;
label_0449d705:
    if (g_data_057ae0d4 != '\0') goto label_0449d712;
label_0449d80d:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d830;
label_0449d722:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d705;
label_0449d7fb:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449d80d;
label_0449d712:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d722;
label_0449d830:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 == 0) {
    return 0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449d860;
label_0449d74e:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d75e;
label_0449d883:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449d74e;
label_0449d860:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d883;
label_0449d75e:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x48) == 0) {
      return 0;
    }
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae0d4 == '\0') goto label_0449d8b3;
label_0449d797:
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d7a7;
label_0449d8d6:
      il2cpp_runtime_helper_02337ed0();
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    else {
      if (g_data_057ae0d4 != '\0') goto label_0449d797;
label_0449d8b3:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae0d4 = '\x01';
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449d8d6;
label_0449d7a7:
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    if (lVar3 != 0) {
      lVar3 = *(long *)(lVar3 + 0x48);
      if (lVar3 != 0) {
        return (bool_conflict)CONCAT71((int7)((ulong)lVar3 >> 8),*(char *)(lVar3 + 0x30) != '\0');
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae96b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae96b = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449da18;
label_0449d925:
    if (g_data_057ae0d4 != '\0') goto label_0449d932;
label_0449da2a:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449da4d;
label_0449d942:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d925;
label_0449da18:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449da2a;
label_0449d932:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d942;
label_0449da4d:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 == 0) {
    return 0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449da7d;
label_0449d96e:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d97e;
label_0449daa0:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449d96e;
label_0449da7d:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449daa0;
label_0449d97e:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x48) == 0) {
      return 0;
    }
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae0d4 == '\0') goto label_0449dad0;
label_0449d9b7:
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d9c7;
label_0449daf3:
      il2cpp_runtime_helper_02337ed0();
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    else {
      if (g_data_057ae0d4 != '\0') goto label_0449d9b7;
label_0449dad0:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae0d4 = '\x01';
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449daf3;
label_0449d9c7:
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    if (lVar3 != 0) {
      if (*(long *)(lVar3 + 0x48) != 0) {
        return (bool_conflict)*(undefined8 *)(*(long *)(lVar3 + 0x48) + 0x38);
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae96c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae96c = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449dc38;
label_0449db45:
    if (g_data_057ae0d4 != '\0') goto label_0449db52;
label_0449dc4a:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449dc6d;
label_0449db62:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449db45;
label_0449dc38:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449dc4a;
label_0449db52:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449db62;
label_0449dc6d:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 == 0) {
    return 0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449dc9d;
label_0449db8e:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449db9e;
label_0449dcc0:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449db8e;
label_0449dc9d:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449dcc0;
label_0449db9e:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x48) == 0) {
      return 0;
    }
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae0d4 == '\0') goto label_0449dcf0;
label_0449dbd7:
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449dbe7;
label_0449dd13:
      il2cpp_runtime_helper_02337ed0();
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    else {
      if (g_data_057ae0d4 != '\0') goto label_0449dbd7;
label_0449dcf0:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae0d4 = '\x01';
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449dd13;
label_0449dbe7:
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    if (lVar3 != 0) {
      if (*(long *)(lVar3 + 0x48) != 0) {
        return (bool_conflict)*(undefined8 *)(*(long *)(lVar3 + 0x48) + 0x28);
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae96d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae96d = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449debb;
label_0449dd65:
    if (g_data_057ae0d4 != '\0') goto label_0449dd72;
label_0449decd:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449def0;
label_0449dd82:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449dd65;
label_0449debb:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449decd;
label_0449dd72:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449dd82;
label_0449def0:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 == 0) {
    return 0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449df20;
label_0449ddae:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449ddbe;
label_0449df43:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449ddae;
label_0449df20:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449df43;
label_0449ddbe:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  pSVar8 = TypeInfo_AccountManager;
  if (lVar3 == 0) goto label_0449e008;
  if (*(long *)(lVar3 + 0x48) == 0) {
    return 0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449df76;
label_0449ddf7:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449de07;
label_0449df99:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449ddf7;
label_0449df76:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449df99;
label_0449de07:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  pSVar8 = TypeInfo_AccountManager;
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x48) == 0)) goto label_0449e008;
  if (*(long *)(*(long *)(lVar3 + 0x48) + 0x58) == 0) {
    return 0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449dfc9;
label_0449de4d:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449de5d;
label_0449dfec:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449de4d;
label_0449dfc9:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449dfec;
label_0449de5d:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  pSVar8 = TypeInfo_AccountManager;
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x48) != 0)) {
    lVar3 = *(long *)(*(long *)(lVar3 + 0x48) + 0x58);
    pSVar8 = (System_String_o *)0x0;
    if (lVar3 != 0) {
      if (g_data_057ae952 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
        il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
        il2cpp_runtime_helper_023445d0(&"o");
        il2cpp_runtime_helper_023445d0(&"tierIds");
        il2cpp_runtime_helper_023445d0(&"linked");
        il2cpp_runtime_helper_023445d0(&"entitledAmountCents");
        il2cpp_runtime_helper_023445d0(&"lastSyncedAt");
        il2cpp_runtime_helper_023445d0(&"manualOverride");
        il2cpp_runtime_helper_023445d0(&"patronStatus");
        g_data_057ae952 = '\x01';
      }
      __this = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
      SimpleJSONFixed_JSONObject___ctor(__this,(MethodInfo *)0x0);
      bVar1 = *(byte *)(lVar3 + 0x10);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450((uint)bVar1,(MethodInfo *)0x0);
      if (__this != (SimpleJSONFixed_JSONObject_o *)0x0) {
        (*(__this->klass->vtable)._8_set_Item.methodPtr)
                  (__this,"linked",pSVar7,(__this->klass->vtable)._8_set_Item.method);
        bVar6 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar3 + 0x18),(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          pSVar8 = *(System_String_o **)(lVar3 + 0x18);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar8,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._8_set_Item.methodPtr)
                    (__this,"patronStatus",pSVar7,(__this->klass->vtable)._8_set_Item.method);
        }
        __this_00 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
        SimpleJSONFixed_JSONArray___ctor(__this_00,(MethodInfo *)0x0);
        lVar9 = *(long *)(lVar3 + 0x20);
        if (lVar9 != 0) {
          if (__this_00 == (SimpleJSONFixed_JSONArray_o *)0x0) {
            if (0 < *(int *)(lVar9 + 0x18)) goto label_0449c8c9;
          }
          else {
            uVar11 = 0;
            uVar2 = *(uint *)(lVar9 + 0x18);
            if (0 < (int)uVar2) {
              do {
                if (uVar2 <= uVar11) goto label_0449c8c4;
                pSVar8 = *(System_String_o **)(lVar9 + 0x20 + uVar11 * 8);
                if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar8,(MethodInfo *)0x0);
                (*(__this_00->klass->vtable)._21_Add.methodPtr)
                          (__this_00,pSVar7,(__this_00->klass->vtable)._21_Add.method);
                uVar11 = uVar11 + 1;
                lVar9 = *(long *)(lVar3 + 0x20);
                if (lVar9 == 0) goto label_0449c8bf;
                uVar2 = *(uint *)(lVar9 + 0x18);
              } while ((long)uVar11 < (long)(int)uVar2);
            }
          }
        }
        (*(__this->klass->vtable)._8_set_Item.methodPtr)
                  (__this,"tierIds",__this_00,(__this->klass->vtable)._8_set_Item.method);
        n = *(int32_t *)(lVar3 + 0x28);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_3f79f40(n,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._8_set_Item.methodPtr)
                  (__this,"entitledAmountCents",pSVar7,(__this->klass->vtable)._8_set_Item.method);
        pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450
                           ((uint)*(byte *)(lVar3 + 0x2c),(MethodInfo *)0x0);
        (*(__this->klass->vtable)._8_set_Item.methodPtr)(__this,"manualOverride",pSVar7);
        Var4 = *(unkuint10 *)(lVar3 + 0x30);
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method_00 = (MethodInfo *)0x0;
        left.fields._10_6_ = 0;
        left.fields._0_10_ = Var4;
        bVar6 = System_DateTimeOffset__op_Inequality
                          (left,(System_DateTimeOffset_o)ZEXT816(0),(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          format = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
          if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_02.fields._8_8_ = "o";
          __this_02.fields._dateTime.fields._dateData =
               (System_DateTime_Fields)(System_DateTime_Fields)(lVar3 + 0x30);
          pSVar8 = System_DateTimeOffset__ToString_3c98830
                             (__this_02,(System_String_o *)format,(System_IFormatProvider_o *)0x0,method_00);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar8,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._8_set_Item.methodPtr)
                    (__this,"lastSyncedAt",pSVar7,(__this->klass->vtable)._8_set_Item.method);
        }
        return (bool_conflict)__this;
      }
label_0449c8bf:
      il2cpp_runtime_helper_022b2c90();
label_0449c8c4:
      lVar9 = il2cpp_runtime_helper_022b2ca0();
label_0449c8c9:
      pSVar8 = *(System_String_o **)(lVar9 + 0x20);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar12 = 0;
      SimpleJSONFixed_JSONNode__op_Implicit(pSVar8,(MethodInfo *)0x0);
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae958 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        g_data_057ae958 = '\x01';
      }
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = pSVar8;
      bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                        ((SimpleJSONFixed_JSONNode_o *)pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        if (pSVar8 == (System_String_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
          return extraout_EAX;
        }
        cVar5 = (*(code *)pSVar8->klass[1]._1.name)(pSVar8,uVar12,pSVar8->klass[1]._1.namespaze);
        if (cVar5 != '\0') {
          vtableDispatch = (pSVar8->klass->vtable)._7_CompareTo.methodPtr;
          bVar6 = (*vtableDispatch)
                            (pSVar8,uVar12,(pSVar8->klass->vtable)._7_CompareTo.method,vtableDispatch);
          return bVar6;
        }
      }
      return 0;
    }
  }
label_0449e008:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae96e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae96e = '\x01';
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pAVar10 = ApplicationManagers_AccountManager__GetOAuthLink(pSVar8,in_RSI);
  return (bool_conflict)
         CONCAT71((int7)((ulong)pAVar10 >> 8),
                  pAVar10 != (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0);
}


// ApplicationManagers.AccountManager$$get_Roles
// il2cpp: System_String_array* ApplicationManagers_AccountManager__get_Roles (const MethodInfo* method);
// 0x449d900

System_String_array * ApplicationManagers_AccountManager__get_Roles(MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  int32_t n;
  Il2CppClass *pIVar3;
  Il2CppMethodPointer vtableDispatch;
  long lVar4;
  unkuint10 Var5;
  char cVar6;
  bool_conflict bVar7;
  System_String_array *pSVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  SimpleJSONFixed_JSONArray_o *__this;
  System_Globalization_CultureInfo_o *format;
  System_String_o *pSVar10;
  long lVar11;
  System_String_array *extraout_RAX;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *pAVar12;
  ulong uVar13;
  undefined8 uVar14;
  MethodInfo *in_RSI;
  System_String_o *__this_00;
  MethodInfo *method_00;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o __this_01;
  
  if (g_data_057ae96b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae96b = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449da18;
label_0449d925:
    if (g_data_057ae0d4 != '\0') goto label_0449d932;
label_0449da2a:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449da4d;
label_0449d942:
    lVar4 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d925;
label_0449da18:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449da2a;
label_0449d932:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d942;
label_0449da4d:
    il2cpp_runtime_helper_02337ed0();
    lVar4 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar4 == 0) {
    return (System_String_array *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449da7d;
label_0449d96e:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d97e;
label_0449daa0:
    il2cpp_runtime_helper_02337ed0();
    lVar4 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449d96e;
label_0449da7d:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449daa0;
label_0449d97e:
    lVar4 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar4 != 0) {
    if (*(long *)(lVar4 + 0x48) == 0) {
      return (System_String_array *)0x0;
    }
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae0d4 == '\0') goto label_0449dad0;
label_0449d9b7:
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449d9c7;
label_0449daf3:
      il2cpp_runtime_helper_02337ed0();
      lVar4 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    else {
      if (g_data_057ae0d4 != '\0') goto label_0449d9b7;
label_0449dad0:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae0d4 = '\x01';
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449daf3;
label_0449d9c7:
      lVar4 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    if (lVar4 != 0) {
      if (*(long *)(lVar4 + 0x48) != 0) {
        return *(System_String_array **)(*(long *)(lVar4 + 0x48) + 0x38);
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae96c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae96c = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449dc38;
label_0449db45:
    if (g_data_057ae0d4 != '\0') goto label_0449db52;
label_0449dc4a:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449dc6d;
label_0449db62:
    lVar4 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449db45;
label_0449dc38:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449dc4a;
label_0449db52:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449db62;
label_0449dc6d:
    il2cpp_runtime_helper_02337ed0();
    lVar4 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar4 == 0) {
    return (System_String_array *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449dc9d;
label_0449db8e:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449db9e;
label_0449dcc0:
    il2cpp_runtime_helper_02337ed0();
    lVar4 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449db8e;
label_0449dc9d:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449dcc0;
label_0449db9e:
    lVar4 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar4 != 0) {
    if (*(long *)(lVar4 + 0x48) == 0) {
      return (System_String_array *)0x0;
    }
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae0d4 == '\0') goto label_0449dcf0;
label_0449dbd7:
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449dbe7;
label_0449dd13:
      il2cpp_runtime_helper_02337ed0();
      lVar4 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    else {
      if (g_data_057ae0d4 != '\0') goto label_0449dbd7;
label_0449dcf0:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae0d4 = '\x01';
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449dd13;
label_0449dbe7:
      lVar4 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    if (lVar4 != 0) {
      if (*(long *)(lVar4 + 0x48) != 0) {
        return *(System_String_array **)(*(long *)(lVar4 + 0x48) + 0x28);
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae96d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae96d = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449debb;
label_0449dd65:
    if (g_data_057ae0d4 != '\0') goto label_0449dd72;
label_0449decd:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449def0;
label_0449dd82:
    lVar4 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449dd65;
label_0449debb:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449decd;
label_0449dd72:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449dd82;
label_0449def0:
    il2cpp_runtime_helper_02337ed0();
    lVar4 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar4 == 0) {
    return (System_String_array *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449df20;
label_0449ddae:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449ddbe;
label_0449df43:
    il2cpp_runtime_helper_02337ed0();
    lVar4 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449ddae;
label_0449df20:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449df43;
label_0449ddbe:
    lVar4 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  pSVar10 = TypeInfo_AccountManager;
  if (lVar4 == 0) goto label_0449e008;
  if (*(long *)(lVar4 + 0x48) == 0) {
    return (System_String_array *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449df76;
label_0449ddf7:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449de07;
label_0449df99:
    il2cpp_runtime_helper_02337ed0();
    lVar4 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449ddf7;
label_0449df76:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449df99;
label_0449de07:
    lVar4 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  pSVar10 = TypeInfo_AccountManager;
  if ((lVar4 == 0) || (*(long *)(lVar4 + 0x48) == 0)) goto label_0449e008;
  if (*(long *)(*(long *)(lVar4 + 0x48) + 0x58) == 0) {
    return (System_String_array *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449dfc9;
label_0449de4d:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449de5d;
label_0449dfec:
    il2cpp_runtime_helper_02337ed0();
    lVar4 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449de4d;
label_0449dfc9:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449dfec;
label_0449de5d:
    lVar4 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  pSVar10 = TypeInfo_AccountManager;
  if ((lVar4 != 0) && (*(long *)(lVar4 + 0x48) != 0)) {
    lVar4 = *(long *)(*(long *)(lVar4 + 0x48) + 0x58);
    pSVar10 = (System_String_o *)0x0;
    if (lVar4 != 0) {
      if (g_data_057ae952 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
        il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
        il2cpp_runtime_helper_023445d0(&"o");
        il2cpp_runtime_helper_023445d0(&"tierIds");
        il2cpp_runtime_helper_023445d0(&"linked");
        il2cpp_runtime_helper_023445d0(&"entitledAmountCents");
        il2cpp_runtime_helper_023445d0(&"lastSyncedAt");
        il2cpp_runtime_helper_023445d0(&"manualOverride");
        il2cpp_runtime_helper_023445d0(&"patronStatus");
        g_data_057ae952 = '\x01';
      }
      pSVar8 = (System_String_array *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
      SimpleJSONFixed_JSONObject___ctor((SimpleJSONFixed_JSONObject_o *)pSVar8,(MethodInfo *)0x0);
      bVar1 = *(byte *)(lVar4 + 0x10);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450((uint)bVar1,(MethodInfo *)0x0);
      if (pSVar8 != (System_String_array *)0x0) {
        pIVar3 = (pSVar8->obj).klass;
        (*(((SimpleJSONFixed_JSONObject_VTable *)pIVar3->vtable)->_8_set_Item).methodPtr)
                  (pSVar8,"linked",pSVar9,
                   (((SimpleJSONFixed_JSONObject_VTable *)pIVar3->vtable)->_8_set_Item).method);
        bVar7 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar4 + 0x18),(MethodInfo *)0x0);
        if ((char)bVar7 == '\0') {
          pSVar10 = *(System_String_o **)(lVar4 + 0x18);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar10,(MethodInfo *)0x0);
          pIVar3 = (pSVar8->obj).klass;
          (*(((SimpleJSONFixed_JSONObject_VTable *)pIVar3->vtable)->_8_set_Item).methodPtr)
                    (pSVar8,"patronStatus",pSVar9,
                     (((SimpleJSONFixed_JSONObject_VTable *)pIVar3->vtable)->_8_set_Item).method);
        }
        __this = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
        SimpleJSONFixed_JSONArray___ctor(__this,(MethodInfo *)0x0);
        lVar11 = *(long *)(lVar4 + 0x20);
        if (lVar11 != 0) {
          if (__this == (SimpleJSONFixed_JSONArray_o *)0x0) {
            if (0 < *(int *)(lVar11 + 0x18)) goto label_0449c8c9;
          }
          else {
            uVar13 = 0;
            uVar2 = *(uint *)(lVar11 + 0x18);
            if (0 < (int)uVar2) {
              do {
                if (uVar2 <= uVar13) goto label_0449c8c4;
                pSVar10 = *(System_String_o **)(lVar11 + 0x20 + uVar13 * 8);
                if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar10,(MethodInfo *)0x0);
                (*(__this->klass->vtable)._21_Add.methodPtr)
                          (__this,pSVar9,(__this->klass->vtable)._21_Add.method);
                uVar13 = uVar13 + 1;
                lVar11 = *(long *)(lVar4 + 0x20);
                if (lVar11 == 0) goto label_0449c8bf;
                uVar2 = *(uint *)(lVar11 + 0x18);
              } while ((long)uVar13 < (long)(int)uVar2);
            }
          }
        }
        pIVar3 = (pSVar8->obj).klass;
        (*(((SimpleJSONFixed_JSONObject_VTable *)pIVar3->vtable)->_8_set_Item).methodPtr)
                  (pSVar8,"tierIds",__this,
                   (((SimpleJSONFixed_JSONObject_VTable *)pIVar3->vtable)->_8_set_Item).method);
        n = *(int32_t *)(lVar4 + 0x28);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit_3f79f40(n,(MethodInfo *)0x0);
        pIVar3 = (pSVar8->obj).klass;
        (*(((SimpleJSONFixed_JSONObject_VTable *)pIVar3->vtable)->_8_set_Item).methodPtr)
                  (pSVar8,"entitledAmountCents",pSVar9,
                   (((SimpleJSONFixed_JSONObject_VTable *)pIVar3->vtable)->_8_set_Item).method);
        pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450
                           ((uint)*(byte *)(lVar4 + 0x2c),(MethodInfo *)0x0);
        (*(((SimpleJSONFixed_JSONObject_VTable *)((pSVar8->obj).klass)->vtable)->_8_set_Item).methodPtr)
                  (pSVar8,"manualOverride",pSVar9);
        Var5 = *(unkuint10 *)(lVar4 + 0x30);
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method_00 = (MethodInfo *)0x0;
        left.fields._10_6_ = 0;
        left.fields._0_10_ = Var5;
        bVar7 = System_DateTimeOffset__op_Inequality
                          (left,(System_DateTimeOffset_o)ZEXT816(0),(MethodInfo *)0x0);
        if ((char)bVar7 != '\0') {
          if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          format = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
          if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_01.fields._8_8_ = "o";
          __this_01.fields._dateTime.fields._dateData =
               (System_DateTime_Fields)(System_DateTime_Fields)(lVar4 + 0x30);
          pSVar10 = System_DateTimeOffset__ToString_3c98830
                              (__this_01,(System_String_o *)format,(System_IFormatProvider_o *)0x0,method_00);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar10,(MethodInfo *)0x0);
          pIVar3 = (pSVar8->obj).klass;
          (*(((SimpleJSONFixed_JSONObject_VTable *)pIVar3->vtable)->_8_set_Item).methodPtr)
                    (pSVar8,"lastSyncedAt",pSVar9,
                     (((SimpleJSONFixed_JSONObject_VTable *)pIVar3->vtable)->_8_set_Item).method);
        }
        return pSVar8;
      }
label_0449c8bf:
      il2cpp_runtime_helper_022b2c90();
label_0449c8c4:
      lVar11 = il2cpp_runtime_helper_022b2ca0();
label_0449c8c9:
      pSVar10 = *(System_String_o **)(lVar11 + 0x20);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar14 = 0;
      SimpleJSONFixed_JSONNode__op_Implicit(pSVar10,(MethodInfo *)0x0);
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae958 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        g_data_057ae958 = '\x01';
      }
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_00 = pSVar10;
      bVar7 = SimpleJSONFixed_JSONNode__op_Inequality
                        ((SimpleJSONFixed_JSONNode_o *)pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        if (pSVar10 == (System_String_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
          return extraout_RAX;
        }
        cVar6 = (*(code *)pSVar10->klass[1]._1.name)(pSVar10,uVar14,pSVar10->klass[1]._1.namespaze);
        if (cVar6 != '\0') {
          vtableDispatch = (pSVar10->klass->vtable)._7_CompareTo.methodPtr;
          pSVar8 = (System_String_array *)
                   (*vtableDispatch)
                             (pSVar10,uVar14,(pSVar10->klass->vtable)._7_CompareTo.method,
                              vtableDispatch);
          return pSVar8;
        }
      }
      return (System_String_array *)0x0;
    }
  }
label_0449e008:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae96e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae96e = '\x01';
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pAVar12 = ApplicationManagers_AccountManager__GetOAuthLink(pSVar10,in_RSI);
  return (System_String_array *)
         CONCAT71((int7)((ulong)pAVar12 >> 8),
                  pAVar12 != (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0);
}


// ApplicationManagers.AccountManager$$get_PhotonUserId
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_PhotonUserId (const MethodInfo* method);
// 0x449db20

System_String_o * ApplicationManagers_AccountManager__get_PhotonUserId(MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  int32_t n;
  Il2CppMethodPointer vtableDispatch;
  long lVar3;
  unkuint10 Var4;
  char cVar5;
  bool_conflict bVar6;
  SimpleJSONFixed_JSONObject_o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  SimpleJSONFixed_JSONArray_o *__this_00;
  System_Globalization_CultureInfo_o *format;
  System_String_o *pSVar8;
  long lVar9;
  System_String_o *extraout_RAX;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *pAVar10;
  ulong uVar11;
  undefined8 uVar12;
  MethodInfo *in_RSI;
  System_String_o *__this_01;
  MethodInfo *method_00;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o __this_02;
  
  if (g_data_057ae96c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae96c = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449dc38;
label_0449db45:
    if (g_data_057ae0d4 != '\0') goto label_0449db52;
label_0449dc4a:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449dc6d;
label_0449db62:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449db45;
label_0449dc38:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449dc4a;
label_0449db52:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449db62;
label_0449dc6d:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 == 0) {
    return (System_String_o *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449dc9d;
label_0449db8e:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449db9e;
label_0449dcc0:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449db8e;
label_0449dc9d:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449dcc0;
label_0449db9e:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 != 0) {
    if (*(long *)(lVar3 + 0x48) == 0) {
      return (System_String_o *)0x0;
    }
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae0d4 == '\0') goto label_0449dcf0;
label_0449dbd7:
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449dbe7;
label_0449dd13:
      il2cpp_runtime_helper_02337ed0();
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    else {
      if (g_data_057ae0d4 != '\0') goto label_0449dbd7;
label_0449dcf0:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae0d4 = '\x01';
      if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449dd13;
label_0449dbe7:
      lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
    }
    if (lVar3 != 0) {
      if (*(long *)(lVar3 + 0x48) != 0) {
        return *(System_String_o **)(*(long *)(lVar3 + 0x48) + 0x28);
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae96d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae96d = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449debb;
label_0449dd65:
    if (g_data_057ae0d4 != '\0') goto label_0449dd72;
label_0449decd:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449def0;
label_0449dd82:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449dd65;
label_0449debb:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449decd;
label_0449dd72:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449dd82;
label_0449def0:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 == 0) {
    return (System_String_o *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449df20;
label_0449ddae:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449ddbe;
label_0449df43:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449ddae;
label_0449df20:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449df43;
label_0449ddbe:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  pSVar8 = TypeInfo_AccountManager;
  if (lVar3 == 0) goto label_0449e008;
  if (*(long *)(lVar3 + 0x48) == 0) {
    return (System_String_o *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449df76;
label_0449ddf7:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449de07;
label_0449df99:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449ddf7;
label_0449df76:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449df99;
label_0449de07:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  pSVar8 = TypeInfo_AccountManager;
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x48) == 0)) goto label_0449e008;
  if (*(long *)(*(long *)(lVar3 + 0x48) + 0x58) == 0) {
    return (System_String_o *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449dfc9;
label_0449de4d:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449de5d;
label_0449dfec:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449de4d;
label_0449dfc9:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449dfec;
label_0449de5d:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  pSVar8 = TypeInfo_AccountManager;
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x48) != 0)) {
    lVar3 = *(long *)(*(long *)(lVar3 + 0x48) + 0x58);
    pSVar8 = (System_String_o *)0x0;
    if (lVar3 != 0) {
      if (g_data_057ae952 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
        il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
        il2cpp_runtime_helper_023445d0(&"o");
        il2cpp_runtime_helper_023445d0(&"tierIds");
        il2cpp_runtime_helper_023445d0(&"linked");
        il2cpp_runtime_helper_023445d0(&"entitledAmountCents");
        il2cpp_runtime_helper_023445d0(&"lastSyncedAt");
        il2cpp_runtime_helper_023445d0(&"manualOverride");
        il2cpp_runtime_helper_023445d0(&"patronStatus");
        g_data_057ae952 = '\x01';
      }
      __this = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
      SimpleJSONFixed_JSONObject___ctor(__this,(MethodInfo *)0x0);
      bVar1 = *(byte *)(lVar3 + 0x10);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450((uint)bVar1,(MethodInfo *)0x0);
      if (__this != (SimpleJSONFixed_JSONObject_o *)0x0) {
        (*(__this->klass->vtable)._8_set_Item.methodPtr)
                  (__this,"linked",pSVar7,(__this->klass->vtable)._8_set_Item.method);
        bVar6 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar3 + 0x18),(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          pSVar8 = *(System_String_o **)(lVar3 + 0x18);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar8,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._8_set_Item.methodPtr)
                    (__this,"patronStatus",pSVar7,(__this->klass->vtable)._8_set_Item.method);
        }
        __this_00 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
        SimpleJSONFixed_JSONArray___ctor(__this_00,(MethodInfo *)0x0);
        lVar9 = *(long *)(lVar3 + 0x20);
        if (lVar9 != 0) {
          if (__this_00 == (SimpleJSONFixed_JSONArray_o *)0x0) {
            if (0 < *(int *)(lVar9 + 0x18)) goto label_0449c8c9;
          }
          else {
            uVar11 = 0;
            uVar2 = *(uint *)(lVar9 + 0x18);
            if (0 < (int)uVar2) {
              do {
                if (uVar2 <= uVar11) goto label_0449c8c4;
                pSVar8 = *(System_String_o **)(lVar9 + 0x20 + uVar11 * 8);
                if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar8,(MethodInfo *)0x0);
                (*(__this_00->klass->vtable)._21_Add.methodPtr)
                          (__this_00,pSVar7,(__this_00->klass->vtable)._21_Add.method);
                uVar11 = uVar11 + 1;
                lVar9 = *(long *)(lVar3 + 0x20);
                if (lVar9 == 0) goto label_0449c8bf;
                uVar2 = *(uint *)(lVar9 + 0x18);
              } while ((long)uVar11 < (long)(int)uVar2);
            }
          }
        }
        (*(__this->klass->vtable)._8_set_Item.methodPtr)
                  (__this,"tierIds",__this_00,(__this->klass->vtable)._8_set_Item.method);
        n = *(int32_t *)(lVar3 + 0x28);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_3f79f40(n,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._8_set_Item.methodPtr)
                  (__this,"entitledAmountCents",pSVar7,(__this->klass->vtable)._8_set_Item.method);
        pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450
                           ((uint)*(byte *)(lVar3 + 0x2c),(MethodInfo *)0x0);
        (*(__this->klass->vtable)._8_set_Item.methodPtr)(__this,"manualOverride",pSVar7);
        Var4 = *(unkuint10 *)(lVar3 + 0x30);
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method_00 = (MethodInfo *)0x0;
        left.fields._10_6_ = 0;
        left.fields._0_10_ = Var4;
        bVar6 = System_DateTimeOffset__op_Inequality
                          (left,(System_DateTimeOffset_o)ZEXT816(0),(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          format = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
          if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_02.fields._8_8_ = "o";
          __this_02.fields._dateTime.fields._dateData =
               (System_DateTime_Fields)(System_DateTime_Fields)(lVar3 + 0x30);
          pSVar8 = System_DateTimeOffset__ToString_3c98830
                             (__this_02,(System_String_o *)format,(System_IFormatProvider_o *)0x0,method_00);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar8,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._8_set_Item.methodPtr)
                    (__this,"lastSyncedAt",pSVar7,(__this->klass->vtable)._8_set_Item.method);
        }
        return (System_String_o *)__this;
      }
label_0449c8bf:
      il2cpp_runtime_helper_022b2c90();
label_0449c8c4:
      lVar9 = il2cpp_runtime_helper_022b2ca0();
label_0449c8c9:
      pSVar8 = *(System_String_o **)(lVar9 + 0x20);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar12 = 0;
      SimpleJSONFixed_JSONNode__op_Implicit(pSVar8,(MethodInfo *)0x0);
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae958 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        g_data_057ae958 = '\x01';
      }
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = pSVar8;
      bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                        ((SimpleJSONFixed_JSONNode_o *)pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        if (pSVar8 == (System_String_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
          return extraout_RAX;
        }
        cVar5 = (*(code *)pSVar8->klass[1]._1.name)(pSVar8,uVar12,pSVar8->klass[1]._1.namespaze);
        if (cVar5 != '\0') {
          vtableDispatch = (pSVar8->klass->vtable)._7_CompareTo.methodPtr;
          pSVar8 = (System_String_o *)
                   (*vtableDispatch)
                             (pSVar8,uVar12,(pSVar8->klass->vtable)._7_CompareTo.method,vtableDispatch)
          ;
          return pSVar8;
        }
      }
      return (System_String_o *)0x0;
    }
  }
label_0449e008:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae96e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae96e = '\x01';
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pAVar10 = ApplicationManagers_AccountManager__GetOAuthLink(pSVar8,in_RSI);
  return (System_String_o *)
         CONCAT71((int7)((ulong)pAVar10 >> 8),
                  pAVar10 != (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0);
}


// ApplicationManagers.AccountManager$$get_Patreon
// il2cpp: SimpleJSONFixed_JSONNode_o* ApplicationManagers_AccountManager__get_Patreon (const MethodInfo* method);
// 0x449dd40

SimpleJSONFixed_JSONNode_o * ApplicationManagers_AccountManager__get_Patreon(MethodInfo *method)

{
  byte bVar1;
  uint uVar2;
  int32_t n;
  Il2CppMethodPointer vtableDispatch;
  long lVar3;
  unkuint10 Var4;
  char cVar5;
  bool_conflict bVar6;
  SimpleJSONFixed_JSONObject_o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  SimpleJSONFixed_JSONArray_o *__this_00;
  System_Globalization_CultureInfo_o *format;
  System_String_o *pSVar8;
  long lVar9;
  SimpleJSONFixed_JSONNode_o *extraout_RAX;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *pAVar10;
  ulong uVar11;
  undefined8 uVar12;
  MethodInfo *in_RSI;
  System_String_o *__this_01;
  MethodInfo *method_00;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o __this_02;
  
  if (g_data_057ae96d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae96d = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449debb;
label_0449dd65:
    if (g_data_057ae0d4 != '\0') goto label_0449dd72;
label_0449decd:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449def0;
label_0449dd82:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449dd65;
label_0449debb:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449decd;
label_0449dd72:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449dd82;
label_0449def0:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  if (lVar3 == 0) {
    return (SimpleJSONFixed_JSONNode_o *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449df20;
label_0449ddae:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449ddbe;
label_0449df43:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449ddae;
label_0449df20:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449df43;
label_0449ddbe:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  pSVar8 = TypeInfo_AccountManager;
  if (lVar3 == 0) goto label_0449e008;
  if (*(long *)(lVar3 + 0x48) == 0) {
    return (SimpleJSONFixed_JSONNode_o *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449df76;
label_0449ddf7:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449de07;
label_0449df99:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449ddf7;
label_0449df76:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449df99;
label_0449de07:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  pSVar8 = TypeInfo_AccountManager;
  if ((lVar3 == 0) || (*(long *)(lVar3 + 0x48) == 0)) goto label_0449e008;
  if (*(long *)(*(long *)(lVar3 + 0x48) + 0x58) == 0) {
    return (SimpleJSONFixed_JSONNode_o *)0x0;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_0449dfc9;
label_0449de4d:
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) != 0) goto label_0449de5d;
label_0449dfec:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_0449de4d;
label_0449dfc9:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) goto label_0449dfec;
label_0449de5d:
    lVar3 = *(long *)((long)TypeInfo_AccountManager[7].fields + 0x38);
  }
  pSVar8 = TypeInfo_AccountManager;
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x48) != 0)) {
    lVar3 = *(long *)(*(long *)(lVar3 + 0x48) + 0x58);
    pSVar8 = (System_String_o *)0x0;
    if (lVar3 != 0) {
      if (g_data_057ae952 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_CultureInfo);
        il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONArray);
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
        il2cpp_runtime_helper_023445d0(&"o");
        il2cpp_runtime_helper_023445d0(&"tierIds");
        il2cpp_runtime_helper_023445d0(&"linked");
        il2cpp_runtime_helper_023445d0(&"entitledAmountCents");
        il2cpp_runtime_helper_023445d0(&"lastSyncedAt");
        il2cpp_runtime_helper_023445d0(&"manualOverride");
        il2cpp_runtime_helper_023445d0(&"patronStatus");
        g_data_057ae952 = '\x01';
      }
      __this = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
      SimpleJSONFixed_JSONObject___ctor(__this,(MethodInfo *)0x0);
      bVar1 = *(byte *)(lVar3 + 0x10);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450((uint)bVar1,(MethodInfo *)0x0);
      if (__this != (SimpleJSONFixed_JSONObject_o *)0x0) {
        (*(__this->klass->vtable)._8_set_Item.methodPtr)
                  (__this,"linked",pSVar7,(__this->klass->vtable)._8_set_Item.method);
        bVar6 = System_String__IsNullOrEmpty(*(System_String_o **)(lVar3 + 0x18),(MethodInfo *)0x0);
        if ((char)bVar6 == '\0') {
          pSVar8 = *(System_String_o **)(lVar3 + 0x18);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar8,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._8_set_Item.methodPtr)
                    (__this,"patronStatus",pSVar7,(__this->klass->vtable)._8_set_Item.method);
        }
        __this_00 = (SimpleJSONFixed_JSONArray_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONArray);
        SimpleJSONFixed_JSONArray___ctor(__this_00,(MethodInfo *)0x0);
        lVar9 = *(long *)(lVar3 + 0x20);
        if (lVar9 != 0) {
          if (__this_00 == (SimpleJSONFixed_JSONArray_o *)0x0) {
            if (0 < *(int *)(lVar9 + 0x18)) goto label_0449c8c9;
          }
          else {
            uVar11 = 0;
            uVar2 = *(uint *)(lVar9 + 0x18);
            if (0 < (int)uVar2) {
              do {
                if (uVar2 <= uVar11) goto label_0449c8c4;
                pSVar8 = *(System_String_o **)(lVar9 + 0x20 + uVar11 * 8);
                if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar8,(MethodInfo *)0x0);
                (*(__this_00->klass->vtable)._21_Add.methodPtr)
                          (__this_00,pSVar7,(__this_00->klass->vtable)._21_Add.method);
                uVar11 = uVar11 + 1;
                lVar9 = *(long *)(lVar3 + 0x20);
                if (lVar9 == 0) goto label_0449c8bf;
                uVar2 = *(uint *)(lVar9 + 0x18);
              } while ((long)uVar11 < (long)(int)uVar2);
            }
          }
        }
        (*(__this->klass->vtable)._8_set_Item.methodPtr)
                  (__this,"tierIds",__this_00,(__this->klass->vtable)._8_set_Item.method);
        n = *(int32_t *)(lVar3 + 0x28);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_3f79f40(n,(MethodInfo *)0x0);
        (*(__this->klass->vtable)._8_set_Item.methodPtr)
                  (__this,"entitledAmountCents",pSVar7,(__this->klass->vtable)._8_set_Item.method);
        pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_3f7a450
                           ((uint)*(byte *)(lVar3 + 0x2c),(MethodInfo *)0x0);
        (*(__this->klass->vtable)._8_set_Item.methodPtr)(__this,"manualOverride",pSVar7);
        Var4 = *(unkuint10 *)(lVar3 + 0x30);
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        method_00 = (MethodInfo *)0x0;
        left.fields._10_6_ = 0;
        left.fields._0_10_ = Var4;
        bVar6 = System_DateTimeOffset__op_Inequality
                          (left,(System_DateTimeOffset_o)ZEXT816(0),(MethodInfo *)0x0);
        if ((char)bVar6 != '\0') {
          if (*(int *)(TypeInfo_CultureInfo + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          format = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
          if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          __this_02.fields._8_8_ = "o";
          __this_02.fields._dateTime.fields._dateData =
               (System_DateTime_Fields)(System_DateTime_Fields)(lVar3 + 0x30);
          pSVar8 = System_DateTimeOffset__ToString_3c98830
                             (__this_02,(System_String_o *)format,(System_IFormatProvider_o *)0x0,method_00);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar8,(MethodInfo *)0x0);
          (*(__this->klass->vtable)._8_set_Item.methodPtr)
                    (__this,"lastSyncedAt",pSVar7,(__this->klass->vtable)._8_set_Item.method);
        }
        return (SimpleJSONFixed_JSONNode_o *)__this;
      }
label_0449c8bf:
      il2cpp_runtime_helper_022b2c90();
label_0449c8c4:
      lVar9 = il2cpp_runtime_helper_022b2ca0();
label_0449c8c9:
      pSVar8 = *(System_String_o **)(lVar9 + 0x20);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      uVar12 = 0;
      SimpleJSONFixed_JSONNode__op_Implicit(pSVar8,(MethodInfo *)0x0);
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae958 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        g_data_057ae958 = '\x01';
      }
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_01 = pSVar8;
      bVar6 = SimpleJSONFixed_JSONNode__op_Inequality
                        ((SimpleJSONFixed_JSONNode_o *)pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') {
        if (pSVar8 == (System_String_o *)0x0) {
          il2cpp_runtime_helper_022b2c90();
          System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
          return extraout_RAX;
        }
        cVar5 = (*(code *)pSVar8->klass[1]._1.name)(pSVar8,uVar12,pSVar8->klass[1]._1.namespaze);
        if (cVar5 != '\0') {
          vtableDispatch = (pSVar8->klass->vtable)._7_CompareTo.methodPtr;
          pSVar7 = (SimpleJSONFixed_JSONNode_o *)
                   (*vtableDispatch)
                             (pSVar8,uVar12,(pSVar8->klass->vtable)._7_CompareTo.method,vtableDispatch)
          ;
          return pSVar7;
        }
      }
      return (SimpleJSONFixed_JSONNode_o *)0x0;
    }
  }
label_0449e008:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae96e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae96e = '\x01';
  }
  if (*(int *)((long)&TypeInfo_AccountManager[9].monitor + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pAVar10 = ApplicationManagers_AccountManager__GetOAuthLink(pSVar8,in_RSI);
  return (SimpleJSONFixed_JSONNode_o *)
         CONCAT71((int7)((ulong)pAVar10 >> 8),
                  pAVar10 != (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0);
}


// ApplicationManagers.AccountManager$$IsOAuthProviderLinked
// il2cpp: bool ApplicationManagers_AccountManager__IsOAuthProviderLinked (System_String_o* provider, const MethodInfo* method);
// 0x449e010

bool_conflict
ApplicationManagers_AccountManager__IsOAuthProviderLinked(System_String_o *provider,MethodInfo *method)

{
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *pAVar1;
  
  if (g_data_057ae96e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae96e = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pAVar1 = ApplicationManagers_AccountManager__GetOAuthLink(provider,method);
  return (bool_conflict)
         CONCAT71((int7)((ulong)pAVar1 >> 8),
                  pAVar1 != (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0);
}


// ApplicationManagers.AccountManager$$get_RefreshTokenExpiresUnix
// il2cpp: int64_t ApplicationManagers_AccountManager__get_RefreshTokenExpiresUnix (const MethodInfo* method);
// 0x449e3b0

int64_t ApplicationManagers_AccountManager__get_RefreshTokenExpiresUnix(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ae96f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae96f = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(int64_t *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x40);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(int64_t *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x40);
}


// ApplicationManagers.AccountManager$$set_RefreshTokenExpiresUnix
// il2cpp: void ApplicationManagers_AccountManager__set_RefreshTokenExpiresUnix (int64_t value, const MethodInfo* method);
// 0x449e420

void ApplicationManagers_AccountManager__set_RefreshTokenExpiresUnix(int64_t value,MethodInfo *method)

{
  if (g_data_057ae970 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae970 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(int64_t *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x40) = value;
  return;
}


// ApplicationManagers.AccountManager$$get_IsLoggedIn
// il2cpp: bool ApplicationManagers_AccountManager__get_IsLoggedIn (const MethodInfo* method);
// 0x449e480

bool_conflict ApplicationManagers_AccountManager__get_IsLoggedIn(MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  
  if (g_data_057ae971 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae971 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aea19 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea19 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar2 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x18),(MethodInfo *)0x0);
  return uVar2 ^ 1;
}


// ApplicationManagers.AccountManager$$get_HasRefreshToken
// il2cpp: bool ApplicationManagers_AccountManager__get_HasRefreshToken (const MethodInfo* method);
// 0x449e530

bool_conflict ApplicationManagers_AccountManager__get_HasRefreshToken(MethodInfo *method)

{
  uint uVar1;
  
  if (g_data_057ae972 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae972 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  uVar1 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x60),(MethodInfo *)0x0);
  return uVar1 ^ 1;
}


// ApplicationManagers.AccountManager$$get_IsRefreshInProgress
// il2cpp: bool ApplicationManagers_AccountManager__get_IsRefreshInProgress (const MethodInfo* method);
// 0x449e580

bool_conflict ApplicationManagers_AccountManager__get_IsRefreshInProgress(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ae973 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae973 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)*(long *)(TypeInfo_AccountManager + 0xb8) >> 8),
                    *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x48));
  }
  il2cpp_runtime_helper_02337ed0();
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(long *)(TypeInfo_AccountManager + 0xb8) >> 8),
                  *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x48));
}


// ApplicationManagers.AccountManager$$set_IsRefreshInProgress
// il2cpp: void ApplicationManagers_AccountManager__set_IsRefreshInProgress (bool value, const MethodInfo* method);
// 0x449e5f0

void ApplicationManagers_AccountManager__set_IsRefreshInProgress(bool_conflict value,MethodInfo *method)

{
  if (g_data_057ae974 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae974 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(char *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x48) = (char)value;
  return;
}


// ApplicationManagers.AccountManager$$get_KeepSignedIn
// il2cpp: bool ApplicationManagers_AccountManager__get_KeepSignedIn (const MethodInfo* method);
// 0x449e640

bool_conflict ApplicationManagers_AccountManager__get_KeepSignedIn(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ae975 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae975 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)*(long *)(TypeInfo_AccountManager + 0xb8) >> 8),
                    *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x49));
  }
  il2cpp_runtime_helper_02337ed0();
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(long *)(TypeInfo_AccountManager + 0xb8) >> 8),
                  *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x49));
}


// ApplicationManagers.AccountManager$$set_KeepSignedIn
// il2cpp: void ApplicationManagers_AccountManager__set_KeepSignedIn (bool value, const MethodInfo* method);
// 0x449e6b0

void ApplicationManagers_AccountManager__set_KeepSignedIn(bool_conflict value,MethodInfo *method)

{
  if (g_data_057ae976 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae976 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(char *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x49) = (char)value;
  return;
}


// ApplicationManagers.AccountManager$$get_HasAuthMethodsSnapshot
// il2cpp: bool ApplicationManagers_AccountManager__get_HasAuthMethodsSnapshot (const MethodInfo* method);
// 0x449e700

bool_conflict ApplicationManagers_AccountManager__get_HasAuthMethodsSnapshot(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ae977 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae977 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)*(long *)(TypeInfo_AccountManager + 0xb8) >> 8),
                    *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x4a));
  }
  il2cpp_runtime_helper_02337ed0();
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(long *)(TypeInfo_AccountManager + 0xb8) >> 8),
                  *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x4a));
}


// ApplicationManagers.AccountManager$$set_HasAuthMethodsSnapshot
// il2cpp: void ApplicationManagers_AccountManager__set_HasAuthMethodsSnapshot (bool value, const MethodInfo* method);
// 0x449e770

void ApplicationManagers_AccountManager__set_HasAuthMethodsSnapshot(bool_conflict value,MethodInfo *method)

{
  if (g_data_057ae978 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae978 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(char *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x4a) = (char)value;
  return;
}


// ApplicationManagers.AccountManager$$get_DevMode
// il2cpp: bool ApplicationManagers_AccountManager__get_DevMode (const MethodInfo* method);
// 0x449e7c0

bool_conflict ApplicationManagers_AccountManager__get_DevMode(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ae979 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ApplicationConfig);
    g_data_057ae979 = '\x01';
    iVar1 = *(int *)(TypeInfo_ApplicationConfig + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_ApplicationConfig + 0xe4);
  }
  if (iVar1 != 0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)*(long *)(TypeInfo_ApplicationConfig + 0xb8) >> 8),
                    *(undefined1 *)(*(long *)(TypeInfo_ApplicationConfig + 0xb8) + 8));
  }
  il2cpp_runtime_helper_02337ed0();
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(long *)(TypeInfo_ApplicationConfig + 0xb8) >> 8),
                  *(undefined1 *)(*(long *)(TypeInfo_ApplicationConfig + 0xb8) + 8));
}


// ApplicationManagers.AccountManager$$get_PendingVerifyToken
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_PendingVerifyToken (const MethodInfo* method);
// 0x449e830

System_String_o * ApplicationManagers_AccountManager__get_PendingVerifyToken(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ae97a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae97a = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x50);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x50);
}


// ApplicationManagers.AccountManager$$set_PendingVerifyToken
// il2cpp: void ApplicationManagers_AccountManager__set_PendingVerifyToken (System_String_o* value, const MethodInfo* method);
// 0x449e8a0

void ApplicationManagers_AccountManager__set_PendingVerifyToken(System_String_o *value,MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057ae97b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae97b = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar1 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(System_String_o **)(lVar1 + 0x50) = value;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x50,value);
  return;
}


// ApplicationManagers.AccountManager$$get_PendingEmail
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_PendingEmail (const MethodInfo* method);
// 0x449e900

System_String_o * ApplicationManagers_AccountManager__get_PendingEmail(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ae97c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae97c = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x58);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x58);
}


// ApplicationManagers.AccountManager$$set_PendingEmail
// il2cpp: void ApplicationManagers_AccountManager__set_PendingEmail (System_String_o* value, const MethodInfo* method);
// 0x449e970

void ApplicationManagers_AccountManager__set_PendingEmail(System_String_o *value,MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057ae97d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae97d = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar1 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(System_String_o **)(lVar1 + 0x58) = value;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x58,value);
  return;
}


// ApplicationManagers.AccountManager$$add_OnLoggedIn
// il2cpp: void ApplicationManagers_AccountManager__add_OnLoggedIn (System_Action_o* value, const MethodInfo* method);
// 0x449e9d0

void ApplicationManagers_AccountManager__add_OnLoggedIn(System_Action_o *value,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  System_Delegate_o *pSVar3;
  System_Delegate_o *pSVar4;
  Il2CppObject *pIVar5;
  System_String_o *path;
  Events_OnPreLoadScene_o *value_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *pMVar6;
  System_Delegate_o *pSVar7;
  bool bVar8;
  
  if (g_data_057ae97e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    g_data_057ae97e = '\x01';
  }
  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = *(System_Delegate_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x70);
  do {
    pSVar3 = System_Delegate__Combine(pSVar7,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((pSVar3 != (System_Delegate_o *)0x0) && (pSVar3->klass != TypeInfo_Action)) {
      il2cpp_runtime_helper_022b2fd0();
      if (g_data_057ae97f == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
        g_data_057ae97f = '\x01';
      }
      if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = *(System_Delegate_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x70);
      do {
        pSVar4 = System_Delegate__Remove(pSVar7,pSVar3,(MethodInfo *)0x0);
        if ((pSVar4 != (System_Delegate_o *)0x0) && (pSVar4->klass != TypeInfo_Action)) {
          il2cpp_runtime_helper_022b2fd0();
          if (g_data_057ae980 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
            g_data_057ae980 = '\x01';
          }
          if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar7 = *(System_Delegate_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x78);
          do {
            pSVar3 = System_Delegate__Combine(pSVar7,pSVar4,(MethodInfo *)0x0);
            if ((pSVar3 != (System_Delegate_o *)0x0) && (pSVar3->klass != TypeInfo_Action)) {
              il2cpp_runtime_helper_022b2fd0();
              if (g_data_057ae981 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
                g_data_057ae981 = '\x01';
              }
              if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar7 = *(System_Delegate_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x78);
              do {
                pSVar4 = System_Delegate__Remove(pSVar7,pSVar3,(MethodInfo *)0x0);
                if ((pSVar4 != (System_Delegate_o *)0x0) && (pSVar4->klass != TypeInfo_Action)) {
                  il2cpp_runtime_helper_022b2fd0();
                  if (g_data_057ae982 == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
                    g_data_057ae982 = '\x01';
                  }
                  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar7 = *(System_Delegate_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x80);
                  do {
                    pSVar3 = System_Delegate__Combine(pSVar7,pSVar4,(MethodInfo *)0x0);
                    if ((pSVar3 != (System_Delegate_o *)0x0) && (pSVar3->klass != TypeInfo_Action)) {
                      il2cpp_runtime_helper_022b2fd0();
                      if (g_data_057ae983 == '\0') {
                        il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
                        il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
                        g_data_057ae983 = '\x01';
                      }
                      if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pSVar7 = *(System_Delegate_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x80);
                      do {
                        pSVar4 = System_Delegate__Remove(pSVar7,pSVar3,(MethodInfo *)0x0);
                        if ((pSVar4 != (System_Delegate_o *)0x0) && (pSVar4->klass != TypeInfo_Action)) {
                          il2cpp_runtime_helper_022b2fd0(pSVar4);
                          if (g_data_057ae984 == '\0') {
                            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnPreLoadScene);
                            il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
                            il2cpp_runtime_helper_023445d0(&TypeInfo_OnPreLoadScene);
                            il2cpp_runtime_helper_023445d0(&MethodInfo_AccountManager_CreateSingleton_AccountManager);
                            g_data_057ae984 = '\x01';
                          }
                          if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          pIVar5 = Utility_SingletonFactory__CreateSingleton_object_
                                             (*(Il2CppObject **)TypeInfo_AccountManager[2].virtualMethodPointer,
                                              MethodInfo_AccountManager_CreateSingleton_AccountManager);
                          *(Il2CppObject **)TypeInfo_AccountManager[2].virtualMethodPointer = pIVar5;
                          il2cpp_runtime_helper_022b4080(TypeInfo_AccountManager[2].virtualMethodPointer);
                          if (TypeInfo_AccountManager[2].virtualMethodPointer[8] == (Il2CppMethodPointer)0x0) {
                            value_00 = (Events_OnPreLoadScene_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnPreLoadScene);
                            Events_OnPreLoadScene___ctor();
                            Events_EventManager__add_OnPreLoadScene(value_00,(MethodInfo *)0x0);
                            pMVar6 = TypeInfo_AccountManager;
                            if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
                              il2cpp_runtime_helper_02337ed0();
                              pMVar6 = TypeInfo_AccountManager;
                              TypeInfo_AccountManager[2].virtualMethodPointer[8] = (code)0x1;
                              iVar1 = *(int *)((long)&pMVar6[2].parameters + 4);
                            }
                            else {
                              TypeInfo_AccountManager[2].virtualMethodPointer[8] = (code)0x1;
                              iVar1 = *(int *)((long)&pMVar6[2].parameters + 4);
                            }
                          }
                          else {
                            iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
                          }
                          if (iVar1 == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          if (g_data_057ae9a1 == '\0') {
                            il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
                            il2cpp_runtime_helper_023445d0(&"/AccountRefresh.dat");
                            g_data_057ae9a1 = '\x01';
                            iVar1 = *(int *)(TypeInfo_FolderPaths + 0xe4);
                          }
                          else {
                            iVar1 = *(int *)(TypeInfo_FolderPaths + 0xe4);
                          }
                          if (iVar1 == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          path = System_String__Concat_3ae5ba0
                                           (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x30),
                                            "/AccountRefresh.dat",(MethodInfo *)0x0);
                          bVar2 = System_IO_File__Exists(path,(MethodInfo *)0x0);
                          if (g_data_057aea1a == '\0') {
                            il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
                            g_data_057aea1a = '\x01';
                            iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
                          }
                          else {
                            iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
                          }
                          if (iVar1 == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          pMVar6 = TypeInfo_AccountManager;
                          TypeInfo_AccountManager[2].virtualMethodPointer[0x49] = SUB41(bVar2,0);
                          ApplicationManagers_AccountManager__LoadRefreshToken(pMVar6);
                          pMVar6 = (MethodInfo *)0x0;
                          bVar2 = System_String__IsNullOrEmpty
                                            (*(System_String_o **)
                                              (TypeInfo_AccountManager[2].virtualMethodPointer + 0x60),(MethodInfo *)0x0)
                          ;
                          if ((char)bVar2 == '\0') {
                            method_00 = extraout_RDX;
                            if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
                              il2cpp_runtime_helper_02337ed0();
                              method_00 = extraout_RDX_00;
                            }
                            pMVar6 = (MethodInfo *)0x1;
                            ApplicationManagers_AccountManager__Refresh
                                      ((System_Action_bool__string__o *)0x0,1,method_00);
                          }
                          if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
                            il2cpp_runtime_helper_02337ed0();
                          }
                          ApplicationManagers_AccountManager__RefreshAuthMethods
                                    ((System_Action_bool__string__o *)0x0,pMVar6);
                          return;
                        }
                        if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                        }
                        pSVar4 = (System_Delegate_o *)
                                 il2cpp_runtime_helper_02300640(TypeInfo_AccountManager[2].virtualMethodPointer + 0x80,pSVar4,pSVar7);
                        bVar8 = pSVar7 != pSVar4;
                        pSVar7 = pSVar4;
                      } while (bVar8);
                      return;
                    }
                    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar3 = (System_Delegate_o *)
                             il2cpp_runtime_helper_02300640(TypeInfo_AccountManager[2].virtualMethodPointer + 0x80,pSVar3,pSVar7);
                    bVar8 = pSVar7 != pSVar3;
                    pSVar7 = pSVar3;
                  } while (bVar8);
                  return;
                }
                if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar4 = (System_Delegate_o *)
                         il2cpp_runtime_helper_02300640(TypeInfo_AccountManager[2].virtualMethodPointer + 0x78,pSVar4,pSVar7);
                bVar8 = pSVar7 != pSVar4;
                pSVar7 = pSVar4;
              } while (bVar8);
              return;
            }
            if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar3 = (System_Delegate_o *)
                     il2cpp_runtime_helper_02300640(TypeInfo_AccountManager[2].virtualMethodPointer + 0x78,pSVar3,pSVar7);
            bVar8 = pSVar7 != pSVar3;
            pSVar7 = pSVar3;
          } while (bVar8);
          return;
        }
        if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar4 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(TypeInfo_AccountManager[2].virtualMethodPointer + 0x70,pSVar4,pSVar7);
        bVar8 = pSVar7 != pSVar4;
        pSVar7 = pSVar4;
      } while (bVar8);
      return;
    }
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(TypeInfo_AccountManager[2].virtualMethodPointer + 0x70,pSVar3,pSVar7);
    bVar8 = pSVar7 != pSVar3;
    pSVar7 = pSVar3;
  } while (bVar8);
  return;
}


// ApplicationManagers.AccountManager$$remove_OnLoggedIn
// il2cpp: void ApplicationManagers_AccountManager__remove_OnLoggedIn (System_Action_o* value, const MethodInfo* method);
// 0x449eab0

void ApplicationManagers_AccountManager__remove_OnLoggedIn(System_Action_o *value,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  System_Delegate_o *pSVar3;
  System_Delegate_o *pSVar4;
  Il2CppObject *pIVar5;
  System_String_o *path;
  Events_OnPreLoadScene_o *value_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *pMVar6;
  System_Delegate_o *pSVar7;
  bool bVar8;
  
  if (g_data_057ae97f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    g_data_057ae97f = '\x01';
  }
  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = *(System_Delegate_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x70);
  do {
    pSVar3 = System_Delegate__Remove(pSVar7,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((pSVar3 != (System_Delegate_o *)0x0) && (pSVar3->klass != TypeInfo_Action)) {
      il2cpp_runtime_helper_022b2fd0();
      if (g_data_057ae980 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
        g_data_057ae980 = '\x01';
      }
      if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = *(System_Delegate_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x78);
      do {
        pSVar4 = System_Delegate__Combine(pSVar7,pSVar3,(MethodInfo *)0x0);
        if ((pSVar4 != (System_Delegate_o *)0x0) && (pSVar4->klass != TypeInfo_Action)) {
          il2cpp_runtime_helper_022b2fd0();
          if (g_data_057ae981 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
            g_data_057ae981 = '\x01';
          }
          if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar7 = *(System_Delegate_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x78);
          do {
            pSVar3 = System_Delegate__Remove(pSVar7,pSVar4,(MethodInfo *)0x0);
            if ((pSVar3 != (System_Delegate_o *)0x0) && (pSVar3->klass != TypeInfo_Action)) {
              il2cpp_runtime_helper_022b2fd0();
              if (g_data_057ae982 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
                g_data_057ae982 = '\x01';
              }
              if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar7 = *(System_Delegate_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x80);
              do {
                pSVar4 = System_Delegate__Combine(pSVar7,pSVar3,(MethodInfo *)0x0);
                if ((pSVar4 != (System_Delegate_o *)0x0) && (pSVar4->klass != TypeInfo_Action)) {
                  il2cpp_runtime_helper_022b2fd0();
                  if (g_data_057ae983 == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
                    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
                    g_data_057ae983 = '\x01';
                  }
                  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar7 = *(System_Delegate_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x80);
                  do {
                    pSVar3 = System_Delegate__Remove(pSVar7,pSVar4,(MethodInfo *)0x0);
                    if ((pSVar3 != (System_Delegate_o *)0x0) && (pSVar3->klass != TypeInfo_Action)) {
                      il2cpp_runtime_helper_022b2fd0(pSVar3);
                      if (g_data_057ae984 == '\0') {
                        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnPreLoadScene);
                        il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
                        il2cpp_runtime_helper_023445d0(&TypeInfo_OnPreLoadScene);
                        il2cpp_runtime_helper_023445d0(&MethodInfo_AccountManager_CreateSingleton_AccountManager);
                        g_data_057ae984 = '\x01';
                      }
                      if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pIVar5 = Utility_SingletonFactory__CreateSingleton_object_
                                         (*(Il2CppObject **)TypeInfo_AccountManager[2].virtualMethodPointer,MethodInfo_AccountManager_CreateSingleton_AccountManager)
                      ;
                      *(Il2CppObject **)TypeInfo_AccountManager[2].virtualMethodPointer = pIVar5;
                      il2cpp_runtime_helper_022b4080(TypeInfo_AccountManager[2].virtualMethodPointer);
                      if (TypeInfo_AccountManager[2].virtualMethodPointer[8] == (Il2CppMethodPointer)0x0) {
                        value_00 = (Events_OnPreLoadScene_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnPreLoadScene);
                        Events_OnPreLoadScene___ctor();
                        Events_EventManager__add_OnPreLoadScene(value_00,(MethodInfo *)0x0);
                        pMVar6 = TypeInfo_AccountManager;
                        if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                          pMVar6 = TypeInfo_AccountManager;
                          TypeInfo_AccountManager[2].virtualMethodPointer[8] = (code)0x1;
                          iVar1 = *(int *)((long)&pMVar6[2].parameters + 4);
                        }
                        else {
                          TypeInfo_AccountManager[2].virtualMethodPointer[8] = (code)0x1;
                          iVar1 = *(int *)((long)&pMVar6[2].parameters + 4);
                        }
                      }
                      else {
                        iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
                      }
                      if (iVar1 == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      if (g_data_057ae9a1 == '\0') {
                        il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
                        il2cpp_runtime_helper_023445d0(&"/AccountRefresh.dat");
                        g_data_057ae9a1 = '\x01';
                        iVar1 = *(int *)(TypeInfo_FolderPaths + 0xe4);
                      }
                      else {
                        iVar1 = *(int *)(TypeInfo_FolderPaths + 0xe4);
                      }
                      if (iVar1 == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      path = System_String__Concat_3ae5ba0
                                       (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x30),
                                        "/AccountRefresh.dat",(MethodInfo *)0x0);
                      bVar2 = System_IO_File__Exists(path,(MethodInfo *)0x0);
                      if (g_data_057aea1a == '\0') {
                        il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
                        g_data_057aea1a = '\x01';
                        iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
                      }
                      else {
                        iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
                      }
                      if (iVar1 == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      pMVar6 = TypeInfo_AccountManager;
                      TypeInfo_AccountManager[2].virtualMethodPointer[0x49] = SUB41(bVar2,0);
                      ApplicationManagers_AccountManager__LoadRefreshToken(pMVar6);
                      pMVar6 = (MethodInfo *)0x0;
                      bVar2 = System_String__IsNullOrEmpty
                                        (*(System_String_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x60),
                                         (MethodInfo *)0x0);
                      if ((char)bVar2 == '\0') {
                        method_00 = extraout_RDX;
                        if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
                          il2cpp_runtime_helper_02337ed0();
                          method_00 = extraout_RDX_00;
                        }
                        pMVar6 = (MethodInfo *)0x1;
                        ApplicationManagers_AccountManager__Refresh
                                  ((System_Action_bool__string__o *)0x0,1,method_00);
                      }
                      if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
                        il2cpp_runtime_helper_02337ed0();
                      }
                      ApplicationManagers_AccountManager__RefreshAuthMethods
                                ((System_Action_bool__string__o *)0x0,pMVar6);
                      return;
                    }
                    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                    }
                    pSVar3 = (System_Delegate_o *)
                             il2cpp_runtime_helper_02300640(TypeInfo_AccountManager[2].virtualMethodPointer + 0x80,pSVar3,pSVar7);
                    bVar8 = pSVar7 != pSVar3;
                    pSVar7 = pSVar3;
                  } while (bVar8);
                  return;
                }
                if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar4 = (System_Delegate_o *)
                         il2cpp_runtime_helper_02300640(TypeInfo_AccountManager[2].virtualMethodPointer + 0x80,pSVar4,pSVar7);
                bVar8 = pSVar7 != pSVar4;
                pSVar7 = pSVar4;
              } while (bVar8);
              return;
            }
            if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar3 = (System_Delegate_o *)
                     il2cpp_runtime_helper_02300640(TypeInfo_AccountManager[2].virtualMethodPointer + 0x78,pSVar3,pSVar7);
            bVar8 = pSVar7 != pSVar3;
            pSVar7 = pSVar3;
          } while (bVar8);
          return;
        }
        if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar4 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(TypeInfo_AccountManager[2].virtualMethodPointer + 0x78,pSVar4,pSVar7);
        bVar8 = pSVar7 != pSVar4;
        pSVar7 = pSVar4;
      } while (bVar8);
      return;
    }
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(TypeInfo_AccountManager[2].virtualMethodPointer + 0x70,pSVar3,pSVar7);
    bVar8 = pSVar7 != pSVar3;
    pSVar7 = pSVar3;
  } while (bVar8);
  return;
}


// ApplicationManagers.AccountManager$$add_OnLoggedOut
// il2cpp: void ApplicationManagers_AccountManager__add_OnLoggedOut (System_Action_o* value, const MethodInfo* method);
// 0x449eb90

void ApplicationManagers_AccountManager__add_OnLoggedOut(System_Action_o *value,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  System_Delegate_o *pSVar3;
  System_Delegate_o *pSVar4;
  Il2CppObject *pIVar5;
  System_String_o *path;
  Events_OnPreLoadScene_o *value_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *pMVar6;
  System_Delegate_o *pSVar7;
  bool bVar8;
  
  if (g_data_057ae980 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    g_data_057ae980 = '\x01';
  }
  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = *(System_Delegate_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x78);
  do {
    pSVar3 = System_Delegate__Combine(pSVar7,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((pSVar3 != (System_Delegate_o *)0x0) && (pSVar3->klass != TypeInfo_Action)) {
      il2cpp_runtime_helper_022b2fd0();
      if (g_data_057ae981 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
        g_data_057ae981 = '\x01';
      }
      if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = *(System_Delegate_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x78);
      do {
        pSVar4 = System_Delegate__Remove(pSVar7,pSVar3,(MethodInfo *)0x0);
        if ((pSVar4 != (System_Delegate_o *)0x0) && (pSVar4->klass != TypeInfo_Action)) {
          il2cpp_runtime_helper_022b2fd0();
          if (g_data_057ae982 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
            g_data_057ae982 = '\x01';
          }
          if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar7 = *(System_Delegate_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x80);
          do {
            pSVar3 = System_Delegate__Combine(pSVar7,pSVar4,(MethodInfo *)0x0);
            if ((pSVar3 != (System_Delegate_o *)0x0) && (pSVar3->klass != TypeInfo_Action)) {
              il2cpp_runtime_helper_022b2fd0();
              if (g_data_057ae983 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
                il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
                g_data_057ae983 = '\x01';
              }
              if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pSVar7 = *(System_Delegate_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x80);
              do {
                pSVar4 = System_Delegate__Remove(pSVar7,pSVar3,(MethodInfo *)0x0);
                if ((pSVar4 != (System_Delegate_o *)0x0) && (pSVar4->klass != TypeInfo_Action)) {
                  il2cpp_runtime_helper_022b2fd0(pSVar4);
                  if (g_data_057ae984 == '\0') {
                    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnPreLoadScene);
                    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
                    il2cpp_runtime_helper_023445d0(&TypeInfo_OnPreLoadScene);
                    il2cpp_runtime_helper_023445d0(&MethodInfo_AccountManager_CreateSingleton_AccountManager);
                    g_data_057ae984 = '\x01';
                  }
                  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pIVar5 = Utility_SingletonFactory__CreateSingleton_object_
                                     (*(Il2CppObject **)TypeInfo_AccountManager[2].virtualMethodPointer,MethodInfo_AccountManager_CreateSingleton_AccountManager);
                  *(Il2CppObject **)TypeInfo_AccountManager[2].virtualMethodPointer = pIVar5;
                  il2cpp_runtime_helper_022b4080(TypeInfo_AccountManager[2].virtualMethodPointer);
                  if (TypeInfo_AccountManager[2].virtualMethodPointer[8] == (Il2CppMethodPointer)0x0) {
                    value_00 = (Events_OnPreLoadScene_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnPreLoadScene);
                    Events_OnPreLoadScene___ctor();
                    Events_EventManager__add_OnPreLoadScene(value_00,(MethodInfo *)0x0);
                    pMVar6 = TypeInfo_AccountManager;
                    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                      pMVar6 = TypeInfo_AccountManager;
                      TypeInfo_AccountManager[2].virtualMethodPointer[8] = (code)0x1;
                      iVar1 = *(int *)((long)&pMVar6[2].parameters + 4);
                    }
                    else {
                      TypeInfo_AccountManager[2].virtualMethodPointer[8] = (code)0x1;
                      iVar1 = *(int *)((long)&pMVar6[2].parameters + 4);
                    }
                  }
                  else {
                    iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
                  }
                  if (iVar1 == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  if (g_data_057ae9a1 == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
                    il2cpp_runtime_helper_023445d0(&"/AccountRefresh.dat");
                    g_data_057ae9a1 = '\x01';
                    iVar1 = *(int *)(TypeInfo_FolderPaths + 0xe4);
                  }
                  else {
                    iVar1 = *(int *)(TypeInfo_FolderPaths + 0xe4);
                  }
                  if (iVar1 == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  path = System_String__Concat_3ae5ba0
                                   (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x30),"/AccountRefresh.dat",
                                    (MethodInfo *)0x0);
                  bVar2 = System_IO_File__Exists(path,(MethodInfo *)0x0);
                  if (g_data_057aea1a == '\0') {
                    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
                    g_data_057aea1a = '\x01';
                    iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
                  }
                  else {
                    iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
                  }
                  if (iVar1 == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pMVar6 = TypeInfo_AccountManager;
                  TypeInfo_AccountManager[2].virtualMethodPointer[0x49] = SUB41(bVar2,0);
                  ApplicationManagers_AccountManager__LoadRefreshToken(pMVar6);
                  pMVar6 = (MethodInfo *)0x0;
                  bVar2 = System_String__IsNullOrEmpty
                                    (*(System_String_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x60),
                                     (MethodInfo *)0x0);
                  if ((char)bVar2 == '\0') {
                    method_00 = extraout_RDX;
                    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
                      il2cpp_runtime_helper_02337ed0();
                      method_00 = extraout_RDX_00;
                    }
                    pMVar6 = (MethodInfo *)0x1;
                    ApplicationManagers_AccountManager__Refresh
                              ((System_Action_bool__string__o *)0x0,1,method_00);
                  }
                  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  ApplicationManagers_AccountManager__RefreshAuthMethods
                            ((System_Action_bool__string__o *)0x0,pMVar6);
                  return;
                }
                if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar4 = (System_Delegate_o *)
                         il2cpp_runtime_helper_02300640(TypeInfo_AccountManager[2].virtualMethodPointer + 0x80,pSVar4,pSVar7);
                bVar8 = pSVar7 != pSVar4;
                pSVar7 = pSVar4;
              } while (bVar8);
              return;
            }
            if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar3 = (System_Delegate_o *)
                     il2cpp_runtime_helper_02300640(TypeInfo_AccountManager[2].virtualMethodPointer + 0x80,pSVar3,pSVar7);
            bVar8 = pSVar7 != pSVar3;
            pSVar7 = pSVar3;
          } while (bVar8);
          return;
        }
        if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar4 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(TypeInfo_AccountManager[2].virtualMethodPointer + 0x78,pSVar4,pSVar7);
        bVar8 = pSVar7 != pSVar4;
        pSVar7 = pSVar4;
      } while (bVar8);
      return;
    }
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(TypeInfo_AccountManager[2].virtualMethodPointer + 0x78,pSVar3,pSVar7);
    bVar8 = pSVar7 != pSVar3;
    pSVar7 = pSVar3;
  } while (bVar8);
  return;
}


// ApplicationManagers.AccountManager$$remove_OnLoggedOut
// il2cpp: void ApplicationManagers_AccountManager__remove_OnLoggedOut (System_Action_o* value, const MethodInfo* method);
// 0x449ec70

void ApplicationManagers_AccountManager__remove_OnLoggedOut(System_Action_o *value,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  System_Delegate_o *pSVar3;
  System_Delegate_o *pSVar4;
  Il2CppObject *pIVar5;
  System_String_o *path;
  Events_OnPreLoadScene_o *value_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *pMVar6;
  System_Delegate_o *pSVar7;
  bool bVar8;
  
  if (g_data_057ae981 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    g_data_057ae981 = '\x01';
  }
  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = *(System_Delegate_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x78);
  do {
    pSVar3 = System_Delegate__Remove(pSVar7,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((pSVar3 != (System_Delegate_o *)0x0) && (pSVar3->klass != TypeInfo_Action)) {
      il2cpp_runtime_helper_022b2fd0();
      if (g_data_057ae982 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
        g_data_057ae982 = '\x01';
      }
      if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = *(System_Delegate_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x80);
      do {
        pSVar4 = System_Delegate__Combine(pSVar7,pSVar3,(MethodInfo *)0x0);
        if ((pSVar4 != (System_Delegate_o *)0x0) && (pSVar4->klass != TypeInfo_Action)) {
          il2cpp_runtime_helper_022b2fd0();
          if (g_data_057ae983 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
            il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
            g_data_057ae983 = '\x01';
          }
          if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar7 = *(System_Delegate_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x80);
          do {
            pSVar3 = System_Delegate__Remove(pSVar7,pSVar4,(MethodInfo *)0x0);
            if ((pSVar3 != (System_Delegate_o *)0x0) && (pSVar3->klass != TypeInfo_Action)) {
              il2cpp_runtime_helper_022b2fd0(pSVar3);
              if (g_data_057ae984 == '\0') {
                il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnPreLoadScene);
                il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
                il2cpp_runtime_helper_023445d0(&TypeInfo_OnPreLoadScene);
                il2cpp_runtime_helper_023445d0(&MethodInfo_AccountManager_CreateSingleton_AccountManager);
                g_data_057ae984 = '\x01';
              }
              if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pIVar5 = Utility_SingletonFactory__CreateSingleton_object_
                                 (*(Il2CppObject **)TypeInfo_AccountManager[2].virtualMethodPointer,MethodInfo_AccountManager_CreateSingleton_AccountManager);
              *(Il2CppObject **)TypeInfo_AccountManager[2].virtualMethodPointer = pIVar5;
              il2cpp_runtime_helper_022b4080(TypeInfo_AccountManager[2].virtualMethodPointer);
              if (TypeInfo_AccountManager[2].virtualMethodPointer[8] == (Il2CppMethodPointer)0x0) {
                value_00 = (Events_OnPreLoadScene_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnPreLoadScene);
                Events_OnPreLoadScene___ctor();
                Events_EventManager__add_OnPreLoadScene(value_00,(MethodInfo *)0x0);
                pMVar6 = TypeInfo_AccountManager;
                if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                  pMVar6 = TypeInfo_AccountManager;
                  TypeInfo_AccountManager[2].virtualMethodPointer[8] = (code)0x1;
                  iVar1 = *(int *)((long)&pMVar6[2].parameters + 4);
                }
                else {
                  TypeInfo_AccountManager[2].virtualMethodPointer[8] = (code)0x1;
                  iVar1 = *(int *)((long)&pMVar6[2].parameters + 4);
                }
              }
              else {
                iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
              }
              if (iVar1 == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              if (g_data_057ae9a1 == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
                il2cpp_runtime_helper_023445d0(&"/AccountRefresh.dat");
                g_data_057ae9a1 = '\x01';
                iVar1 = *(int *)(TypeInfo_FolderPaths + 0xe4);
              }
              else {
                iVar1 = *(int *)(TypeInfo_FolderPaths + 0xe4);
              }
              if (iVar1 == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              path = System_String__Concat_3ae5ba0
                               (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x30),"/AccountRefresh.dat",
                                (MethodInfo *)0x0);
              bVar2 = System_IO_File__Exists(path,(MethodInfo *)0x0);
              if (g_data_057aea1a == '\0') {
                il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
                g_data_057aea1a = '\x01';
                iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
              }
              else {
                iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
              }
              if (iVar1 == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              pMVar6 = TypeInfo_AccountManager;
              TypeInfo_AccountManager[2].virtualMethodPointer[0x49] = SUB41(bVar2,0);
              ApplicationManagers_AccountManager__LoadRefreshToken(pMVar6);
              pMVar6 = (MethodInfo *)0x0;
              bVar2 = System_String__IsNullOrEmpty
                                (*(System_String_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x60),
                                 (MethodInfo *)0x0);
              if ((char)bVar2 == '\0') {
                method_00 = extraout_RDX;
                if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                  method_00 = extraout_RDX_00;
                }
                pMVar6 = (MethodInfo *)0x1;
                ApplicationManagers_AccountManager__Refresh((System_Action_bool__string__o *)0x0,1,method_00);
              }
              if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
                il2cpp_runtime_helper_02337ed0();
              }
              ApplicationManagers_AccountManager__RefreshAuthMethods
                        ((System_Action_bool__string__o *)0x0,pMVar6);
              return;
            }
            if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar3 = (System_Delegate_o *)
                     il2cpp_runtime_helper_02300640(TypeInfo_AccountManager[2].virtualMethodPointer + 0x80,pSVar3,pSVar7);
            bVar8 = pSVar7 != pSVar3;
            pSVar7 = pSVar3;
          } while (bVar8);
          return;
        }
        if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar4 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(TypeInfo_AccountManager[2].virtualMethodPointer + 0x80,pSVar4,pSVar7);
        bVar8 = pSVar7 != pSVar4;
        pSVar7 = pSVar4;
      } while (bVar8);
      return;
    }
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(TypeInfo_AccountManager[2].virtualMethodPointer + 0x78,pSVar3,pSVar7);
    bVar8 = pSVar7 != pSVar3;
    pSVar7 = pSVar3;
  } while (bVar8);
  return;
}


// ApplicationManagers.AccountManager$$add_OnAuthMethodsChanged
// il2cpp: void ApplicationManagers_AccountManager__add_OnAuthMethodsChanged (System_Action_o* value, const MethodInfo* method);
// 0x449ed50

void ApplicationManagers_AccountManager__add_OnAuthMethodsChanged(System_Action_o *value,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  System_Delegate_o *pSVar3;
  System_Delegate_o *pSVar4;
  Il2CppObject *pIVar5;
  System_String_o *path;
  Events_OnPreLoadScene_o *value_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *pMVar6;
  System_Delegate_o *pSVar7;
  bool bVar8;
  
  if (g_data_057ae982 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    g_data_057ae982 = '\x01';
  }
  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = *(System_Delegate_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x80);
  do {
    pSVar3 = System_Delegate__Combine(pSVar7,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((pSVar3 != (System_Delegate_o *)0x0) && (pSVar3->klass != TypeInfo_Action)) {
      il2cpp_runtime_helper_022b2fd0();
      if (g_data_057ae983 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
        g_data_057ae983 = '\x01';
      }
      if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = *(System_Delegate_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x80);
      do {
        pSVar4 = System_Delegate__Remove(pSVar7,pSVar3,(MethodInfo *)0x0);
        if ((pSVar4 != (System_Delegate_o *)0x0) && (pSVar4->klass != TypeInfo_Action)) {
          il2cpp_runtime_helper_022b2fd0(pSVar4);
          if (g_data_057ae984 == '\0') {
            il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnPreLoadScene);
            il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
            il2cpp_runtime_helper_023445d0(&TypeInfo_OnPreLoadScene);
            il2cpp_runtime_helper_023445d0(&MethodInfo_AccountManager_CreateSingleton_AccountManager);
            g_data_057ae984 = '\x01';
          }
          if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pIVar5 = Utility_SingletonFactory__CreateSingleton_object_
                             (*(Il2CppObject **)TypeInfo_AccountManager[2].virtualMethodPointer,MethodInfo_AccountManager_CreateSingleton_AccountManager);
          *(Il2CppObject **)TypeInfo_AccountManager[2].virtualMethodPointer = pIVar5;
          il2cpp_runtime_helper_022b4080(TypeInfo_AccountManager[2].virtualMethodPointer);
          if (TypeInfo_AccountManager[2].virtualMethodPointer[8] == (Il2CppMethodPointer)0x0) {
            value_00 = (Events_OnPreLoadScene_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnPreLoadScene);
            Events_OnPreLoadScene___ctor();
            Events_EventManager__add_OnPreLoadScene(value_00,(MethodInfo *)0x0);
            pMVar6 = TypeInfo_AccountManager;
            if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              pMVar6 = TypeInfo_AccountManager;
              TypeInfo_AccountManager[2].virtualMethodPointer[8] = (code)0x1;
              iVar1 = *(int *)((long)&pMVar6[2].parameters + 4);
            }
            else {
              TypeInfo_AccountManager[2].virtualMethodPointer[8] = (code)0x1;
              iVar1 = *(int *)((long)&pMVar6[2].parameters + 4);
            }
          }
          else {
            iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057ae9a1 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
            il2cpp_runtime_helper_023445d0(&"/AccountRefresh.dat");
            g_data_057ae9a1 = '\x01';
            iVar1 = *(int *)(TypeInfo_FolderPaths + 0xe4);
          }
          else {
            iVar1 = *(int *)(TypeInfo_FolderPaths + 0xe4);
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          path = System_String__Concat_3ae5ba0
                           (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x30),"/AccountRefresh.dat",
                            (MethodInfo *)0x0);
          bVar2 = System_IO_File__Exists(path,(MethodInfo *)0x0);
          if (g_data_057aea1a == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
            g_data_057aea1a = '\x01';
            iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
          }
          else {
            iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
          }
          if (iVar1 == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pMVar6 = TypeInfo_AccountManager;
          TypeInfo_AccountManager[2].virtualMethodPointer[0x49] = SUB41(bVar2,0);
          ApplicationManagers_AccountManager__LoadRefreshToken(pMVar6);
          pMVar6 = (MethodInfo *)0x0;
          bVar2 = System_String__IsNullOrEmpty
                            (*(System_String_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x60),
                             (MethodInfo *)0x0);
          if ((char)bVar2 == '\0') {
            method_00 = extraout_RDX;
            if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              method_00 = extraout_RDX_00;
            }
            pMVar6 = (MethodInfo *)0x1;
            ApplicationManagers_AccountManager__Refresh((System_Action_bool__string__o *)0x0,1,method_00);
          }
          if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          ApplicationManagers_AccountManager__RefreshAuthMethods((System_Action_bool__string__o *)0x0,pMVar6);
          return;
        }
        if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar4 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(TypeInfo_AccountManager[2].virtualMethodPointer + 0x80,pSVar4,pSVar7);
        bVar8 = pSVar7 != pSVar4;
        pSVar7 = pSVar4;
      } while (bVar8);
      return;
    }
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(TypeInfo_AccountManager[2].virtualMethodPointer + 0x80,pSVar3,pSVar7);
    bVar8 = pSVar7 != pSVar3;
    pSVar7 = pSVar3;
  } while (bVar8);
  return;
}


// ApplicationManagers.AccountManager$$remove_OnAuthMethodsChanged
// il2cpp: void ApplicationManagers_AccountManager__remove_OnAuthMethodsChanged (System_Action_o* value, const MethodInfo* method);
// 0x449ee30

void ApplicationManagers_AccountManager__remove_OnAuthMethodsChanged
               (System_Action_o *value,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  System_Delegate_o *pSVar3;
  Il2CppObject *pIVar4;
  System_String_o *path;
  Events_OnPreLoadScene_o *value_00;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *pMVar5;
  System_Delegate_o *source;
  bool bVar6;
  
  if (g_data_057ae983 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action);
    g_data_057ae983 = '\x01';
  }
  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  source = *(System_Delegate_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x80);
  do {
    pSVar3 = System_Delegate__Remove(source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((pSVar3 != (System_Delegate_o *)0x0) && (pSVar3->klass != TypeInfo_Action)) {
      il2cpp_runtime_helper_022b2fd0(pSVar3);
      if (g_data_057ae984 == '\0') {
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnPreLoadScene);
        il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
        il2cpp_runtime_helper_023445d0(&TypeInfo_OnPreLoadScene);
        il2cpp_runtime_helper_023445d0(&MethodInfo_AccountManager_CreateSingleton_AccountManager);
        g_data_057ae984 = '\x01';
      }
      if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar4 = Utility_SingletonFactory__CreateSingleton_object_
                         (*(Il2CppObject **)TypeInfo_AccountManager[2].virtualMethodPointer,MethodInfo_AccountManager_CreateSingleton_AccountManager);
      *(Il2CppObject **)TypeInfo_AccountManager[2].virtualMethodPointer = pIVar4;
      il2cpp_runtime_helper_022b4080(TypeInfo_AccountManager[2].virtualMethodPointer);
      if (TypeInfo_AccountManager[2].virtualMethodPointer[8] == (Il2CppMethodPointer)0x0) {
        value_00 = (Events_OnPreLoadScene_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnPreLoadScene);
        Events_OnPreLoadScene___ctor();
        Events_EventManager__add_OnPreLoadScene(value_00,(MethodInfo *)0x0);
        pMVar5 = TypeInfo_AccountManager;
        if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pMVar5 = TypeInfo_AccountManager;
          TypeInfo_AccountManager[2].virtualMethodPointer[8] = (code)0x1;
          iVar1 = *(int *)((long)&pMVar5[2].parameters + 4);
        }
        else {
          TypeInfo_AccountManager[2].virtualMethodPointer[8] = (code)0x1;
          iVar1 = *(int *)((long)&pMVar5[2].parameters + 4);
        }
      }
      else {
        iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057ae9a1 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
        il2cpp_runtime_helper_023445d0(&"/AccountRefresh.dat");
        g_data_057ae9a1 = '\x01';
        iVar1 = *(int *)(TypeInfo_FolderPaths + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_FolderPaths + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      path = System_String__Concat_3ae5ba0
                       (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x30),"/AccountRefresh.dat",
                        (MethodInfo *)0x0);
      bVar2 = System_IO_File__Exists(path,(MethodInfo *)0x0);
      if (g_data_057aea1a == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
        g_data_057aea1a = '\x01';
        iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
      }
      else {
        iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pMVar5 = TypeInfo_AccountManager;
      TypeInfo_AccountManager[2].virtualMethodPointer[0x49] = SUB41(bVar2,0);
      ApplicationManagers_AccountManager__LoadRefreshToken(pMVar5);
      pMVar5 = (MethodInfo *)0x0;
      bVar2 = System_String__IsNullOrEmpty
                        (*(System_String_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x60),(MethodInfo *)0x0)
      ;
      if ((char)bVar2 == '\0') {
        method_00 = extraout_RDX;
        if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          method_00 = extraout_RDX_00;
        }
        pMVar5 = (MethodInfo *)0x1;
        ApplicationManagers_AccountManager__Refresh((System_Action_bool__string__o *)0x0,1,method_00);
      }
      if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_AccountManager__RefreshAuthMethods((System_Action_bool__string__o *)0x0,pMVar5);
      return;
    }
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = (System_Delegate_o *)il2cpp_runtime_helper_02300640(TypeInfo_AccountManager[2].virtualMethodPointer + 0x80,pSVar3,source);
    bVar6 = source != pSVar3;
    source = pSVar3;
  } while (bVar6);
  return;
}


// ApplicationManagers.AccountManager$$Init
// il2cpp: void ApplicationManagers_AccountManager__Init (const MethodInfo* method);
// 0x449ef10

void ApplicationManagers_AccountManager__Init(MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  Il2CppObject *pIVar3;
  System_String_o *path;
  Events_OnPreLoadScene_o *value;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *pMVar4;
  
  if (g_data_057ae984 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnPreLoadScene);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OnPreLoadScene);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AccountManager_CreateSingleton_AccountManager);
    g_data_057ae984 = '\x01';
  }
  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar3 = Utility_SingletonFactory__CreateSingleton_object_
                     (*(Il2CppObject **)TypeInfo_AccountManager[2].virtualMethodPointer,MethodInfo_AccountManager_CreateSingleton_AccountManager);
  *(Il2CppObject **)TypeInfo_AccountManager[2].virtualMethodPointer = pIVar3;
  il2cpp_runtime_helper_022b4080(TypeInfo_AccountManager[2].virtualMethodPointer);
  if (TypeInfo_AccountManager[2].virtualMethodPointer[8] == (Il2CppMethodPointer)0x0) {
    value = (Events_OnPreLoadScene_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnPreLoadScene);
    Events_OnPreLoadScene___ctor();
    Events_EventManager__add_OnPreLoadScene(value,(MethodInfo *)0x0);
    pMVar4 = TypeInfo_AccountManager;
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar4 = TypeInfo_AccountManager;
      TypeInfo_AccountManager[2].virtualMethodPointer[8] = (code)0x1;
      iVar1 = *(int *)((long)&pMVar4[2].parameters + 4);
    }
    else {
      TypeInfo_AccountManager[2].virtualMethodPointer[8] = (code)0x1;
      iVar1 = *(int *)((long)&pMVar4[2].parameters + 4);
    }
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ae9a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    il2cpp_runtime_helper_023445d0(&"/AccountRefresh.dat");
    g_data_057ae9a1 = '\x01';
    iVar1 = *(int *)(TypeInfo_FolderPaths + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_FolderPaths + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  path = System_String__Concat_3ae5ba0
                   (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x30),"/AccountRefresh.dat",
                    (MethodInfo *)0x0);
  bVar2 = System_IO_File__Exists(path,(MethodInfo *)0x0);
  if (g_data_057aea1a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea1a = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar4 = TypeInfo_AccountManager;
  TypeInfo_AccountManager[2].virtualMethodPointer[0x49] = SUB41(bVar2,0);
  ApplicationManagers_AccountManager__LoadRefreshToken(pMVar4);
  pMVar4 = (MethodInfo *)0x0;
  bVar2 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x60),(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    method_00 = extraout_RDX;
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      method_00 = extraout_RDX_00;
    }
    pMVar4 = (MethodInfo *)0x1;
    ApplicationManagers_AccountManager__Refresh((System_Action_bool__string__o *)0x0,1,method_00);
  }
  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ApplicationManagers_AccountManager__RefreshAuthMethods((System_Action_bool__string__o *)0x0,pMVar4);
  return;
}


// ApplicationManagers.AccountManager$$SetKeepSignedIn
// il2cpp: void ApplicationManagers_AccountManager__SetKeepSignedIn (bool value, const MethodInfo* method);
// 0x449f940

void ApplicationManagers_AccountManager__SetKeepSignedIn(bool_conflict value,MethodInfo *method)

{
  int iVar1;
  code cVar2;
  bool_conflict bVar3;
  MethodInfo *pMVar4;
  
  cVar2 = SUB41(value,0);
  if (g_data_057ae985 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae985 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aea1a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea1a = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
    pMVar4 = TypeInfo_AccountManager;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
    pMVar4 = TypeInfo_AccountManager;
  }
  TypeInfo_AccountManager = pMVar4;
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar4 = TypeInfo_AccountManager;
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
    TypeInfo_AccountManager[2].virtualMethodPointer[0x49] = cVar2;
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
  }
  else {
    pMVar4[2].virtualMethodPointer[0x49] = cVar2;
  }
  if (cVar2 == (code)0x0) {
    ApplicationManagers_AccountManager__DeleteRefreshToken(pMVar4);
    return;
  }
  bVar3 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x60),(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
    pMVar4 = TypeInfo_AccountManager;
    il2cpp_runtime_helper_02337ed0();
    ApplicationManagers_AccountManager__SaveRefreshToken(pMVar4);
    return;
  }
  ApplicationManagers_AccountManager__SaveRefreshToken(TypeInfo_AccountManager);
  return;
}


// ApplicationManagers.AccountManager$$IsAuthMethodEnabled
// il2cpp: bool ApplicationManagers_AccountManager__IsAuthMethodEnabled (System_String_o* key, const MethodInfo* method);
// 0x449fdf0

bool_conflict ApplicationManagers_AccountManager__IsAuthMethodEnabled(System_String_o *key,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  ApplicationManagers_AccountManager_o *__this;
  System_String_Fields SVar3;
  bool_conflict bVar4;
  bool_conflict extraout_EAX;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  SimpleJSONFixed_JSONObject_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  System_String_o *pSVar8;
  System_Action_bool__string__o *onComplete;
  System_Action_string__o *captureTarget;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *pUVar9;
  System_String_Fields in_RCX;
  System_String_o *s;
  Il2CppClass *pIVar10;
  System_String_o *pSVar11;
  System_Collections_Generic_HashSet_object__o *__this_01;
  uint in_R8D;
  MethodInfo *method_00;
  
  if (g_data_057ae986 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    g_data_057ae986 = '\x01';
  }
  pIVar10 = (Il2CppClass *)0x0;
  bVar4 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return 0;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x68);
  if (__this_01 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar4 = System_Collections_Generic_HashSet_object___Contains(__this_01,(Il2CppObject *)key,MethodInfo_Boolean_Contains);
    return bVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae993 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GetAuthMethods_d__98);
    g_data_057ae993 = '\x01';
  }
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GetAuthMethods_d__98);
  pSVar11 = (System_String_o *)0x0;
  pSVar8 = pSVar5;
  System_Object___ctor((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
  (pSVar5->fields)._stringLength = 0;
  if (pSVar5 != (System_String_o *)0x0) {
    pSVar5[1].monitor = __this_01;
    il2cpp_runtime_helper_022b4080(&pSVar5[1].monitor,__this_01);
    pSVar5[2].klass = (System_String_c *)pIVar10;
    il2cpp_runtime_helper_022b4080(pSVar5 + 2,pIVar10);
    return (bool_conflict)pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae989 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_bool_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Register_b__88_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Register_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass88_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"verificationToken");
    il2cpp_runtime_helper_023445d0(&"email");
    il2cpp_runtime_helper_023445d0(&"displayName");
    il2cpp_runtime_helper_023445d0(&"/v1/auth/register");
    il2cpp_runtime_helper_023445d0(&"password");
    g_data_057ae989 = '\x01';
  }
  pSVar6 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass88_0);
  pSVar5 = pSVar6;
  System_Object___ctor((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
  if (pSVar6 == (System_String_o *)0x0) goto label_044a0329;
  pSVar6->fields = in_RCX;
  il2cpp_runtime_helper_022b4080(&pSVar6->fields,in_RCX);
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aea1b == '\0') goto label_044a01d0;
label_044a0037:
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (g_data_057aea1b != '\0') goto label_044a0037;
label_044a01d0:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea1b = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(undefined8 *)(lVar2 + 0x50) = 0;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x50,0);
  if (g_data_057aea1c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea1c = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(System_String_o **)(lVar2 + 0x58) = pSVar11;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x58);
  __this_00 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar8,(MethodInfo *)0x0);
  pSVar5 = pSVar8;
  if (__this_00 != (SimpleJSONFixed_JSONObject_o *)0x0) {
    (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
              (__this_00,"displayName",pSVar7,(__this_00->klass->vtable)._8_set_Item.method);
    pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar11,(MethodInfo *)0x0);
    (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
              (__this_00,"email",pSVar7,(__this_00->klass->vtable)._8_set_Item.method);
    pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(s,(MethodInfo *)0x0);
    (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
              (__this_00,"password",pSVar7,(__this_00->klass->vtable)._8_set_Item.method);
    __this = (ApplicationManagers_AccountManager_o *)**(undefined8 **)(TypeInfo_AccountManager + 0xb8);
    pSVar8 = (System_String_o *)
             (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                       (__this_00,(__this_00->klass->vtable)._3_ToString.method);
    onComplete = (System_Action_bool__string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_bool_string);
    method_00 = (MethodInfo *)0x44a01a3;
    System_Action_bool__object____ctor();
    if (*(int *)((long)&TypeInfo_c[9].monitor + 4) == 0) {
      method_00 = (MethodInfo *)0x44a023a;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = "verificationToken";
    pSVar11 = "/v1/auth/register";
    captureTarget = *(System_Action_string__o **)((long)TypeInfo_c[7].fields + 8);
    pSVar5 = TypeInfo_c;
    if (captureTarget == (System_Action_string__o *)0x0) {
      if (*(int *)((long)&TypeInfo_c[9].monitor + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      captureTarget = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
      System_Action_object____ctor();
      SVar3 = TypeInfo_c[7].fields;
      *(System_Action_string__o **)((long)SVar3 + 8) = captureTarget;
      pSVar5 = (System_String_o *)((long)SVar3 + 8);
      method_00 = (MethodInfo *)0x44a02d1;
      il2cpp_runtime_helper_022b4080(pSVar5,captureTarget);
    }
    if (__this != (ApplicationManagers_AccountManager_o *)0x0) {
      routine = ApplicationManagers_AccountManager__PostJson
                          (__this,pSVar11,pSVar8,(System_String_o *)0x0,onComplete,0,pSVar6,captureTarget,
                           in_R8D & 0xff,method_00);
      pUVar9 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                         ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
      return (bool_conflict)pUVar9;
    }
  }
label_044a0329:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
  return extraout_EAX;
}


// ApplicationManagers.AccountManager$$GetOAuthLink
// il2cpp: ApplicationManagers_AccountLoginResponse_OAuthLinkData_o* ApplicationManagers_AccountManager__GetOAuthLink (System_String_o* provider, const MethodInfo* method);
// 0x449e060

ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *
ApplicationManagers_AccountManager__GetOAuthLink(System_String_o *provider,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *pAVar3;
  bool_conflict bVar4;
  ulong uVar5;
  
  if (g_data_057ae987 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae987 = '\x01';
  }
  bVar4 = System_String__IsNullOrEmpty(provider,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 != '\0') goto label_0449e0c0;
label_0449e251:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_0449e0d0;
label_0449e274:
    il2cpp_runtime_helper_02337ed0();
    lVar2 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x38);
  }
  else {
    if (g_data_057ae0d4 == '\0') goto label_0449e251;
label_0449e0c0:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_0449e274;
label_0449e0d0:
    lVar2 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x38);
  }
  if (lVar2 == 0) {
    return (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 != '\0') goto label_0449e0fc;
label_0449e2b2:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_0449e10c;
label_0449e2d5:
    il2cpp_runtime_helper_02337ed0();
    lVar2 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x38);
  }
  else {
    if (g_data_057ae0d4 == '\0') goto label_0449e2b2;
label_0449e0fc:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_0449e2d5;
label_0449e10c:
    lVar2 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x38);
  }
  if (lVar2 != 0) {
    if (*(long *)(lVar2 + 0x48) == 0) {
      return (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0;
    }
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae0d4 != '\0') goto label_0449e145;
label_0449e308:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae0d4 = '\x01';
      if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_0449e155;
label_0449e32b:
      il2cpp_runtime_helper_02337ed0();
      lVar2 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x38);
    }
    else {
      if (g_data_057ae0d4 == '\0') goto label_0449e308;
label_0449e145:
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_0449e32b;
label_0449e155:
      lVar2 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x38);
    }
    if ((lVar2 != 0) && (*(long *)(lVar2 + 0x48) != 0)) {
      if (*(long *)(*(long *)(lVar2 + 0x48) + 0x60) == 0) {
        return (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0;
      }
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057ae0d4 != '\0') goto label_0449e19b;
label_0449e35b:
        il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
        g_data_057ae0d4 = '\x01';
        if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_0449e1ab;
label_0449e37e:
        il2cpp_runtime_helper_02337ed0();
        lVar2 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x38);
      }
      else {
        if (g_data_057ae0d4 == '\0') goto label_0449e35b;
label_0449e19b:
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_0449e37e;
label_0449e1ab:
        lVar2 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x38);
      }
      if (((lVar2 != 0) && (*(long *)(lVar2 + 0x48) != 0)) &&
         (lVar2 = *(long *)(*(long *)(lVar2 + 0x48) + 0x60), lVar2 != 0)) {
        if ((int)*(ulong *)(lVar2 + 0x18) < 1) {
          return (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0;
        }
        uVar5 = 0;
        if ((*(ulong *)(lVar2 + 0x18) & 0xffffffff) != 0) {
          do {
            pAVar3 = *(ApplicationManagers_AccountLoginResponse_OAuthLinkData_o **)(lVar2 + 0x20 + uVar5 * 8);
            if ((pAVar3 != (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0) &&
               (bVar4 = System_String__Equals_3af50f0((pAVar3->fields).Provider,provider,5,(MethodInfo *)0x0),
               (char)bVar4 != '\0')) {
              return pAVar3;
            }
            uVar5 = uVar5 + 1;
            if ((long)(int)*(uint *)(lVar2 + 0x18) <= (long)uVar5) {
              return (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0;
            }
          } while (uVar5 < *(uint *)(lVar2 + 0x18));
        }
        goto label_0449e39f;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_0449e39f:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057ae96f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae96f = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(ApplicationManagers_AccountLoginResponse_OAuthLinkData_o **)
            (*(long *)(TypeInfo_AccountManager + 0xb8) + 0x40);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(ApplicationManagers_AccountLoginResponse_OAuthLinkData_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x40)
  ;
}


// ApplicationManagers.AccountManager$$RefreshAuthMethods
// il2cpp: void ApplicationManagers_AccountManager__RefreshAuthMethods (System_Action_bool__string__o* onComplete, const MethodInfo* method);
// 0x449f7e0

void ApplicationManagers_AccountManager__RefreshAuthMethods
               (System_Action_bool__string__o *onComplete,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  Il2CppClass *__this;
  bool_conflict bVar2;
  MethodInfo *__this_00;
  code cVar3;
  MethodInfo *pMVar4;
  
  if (g_data_057ae988 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"not_initialized");
    g_data_057ae988 = '\x01';
  }
  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = *(UnityEngine_Object_o **)TypeInfo_AccountManager[2].virtualMethodPointer;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (onComplete == (System_Action_bool__string__o *)0x0) {
      return;
    }
    (*(code *)(onComplete->fields).invoke_impl)
              ((onComplete->fields).method_code,0,"not_initialized",(onComplete->fields).method);
    return;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = *(Il2CppClass **)TypeInfo_AccountManager[2].virtualMethodPointer;
  pMVar4 = TypeInfo_AccountManager;
  if (__this != (Il2CppClass *)0x0) {
    if (g_data_057ae993 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GetAuthMethods_d__98);
      g_data_057ae993 = '\x01';
    }
    __this_00 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_GetAuthMethods_d__98);
    pMVar4 = __this_00;
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&__this_00->invoker_method = 0;
    if (__this_00 != (MethodInfo *)0x0) {
      __this_00->klass = __this;
      il2cpp_runtime_helper_022b4080(&__this_00->klass,__this);
      __this_00->parameters = (Il2CppType **)onComplete;
      il2cpp_runtime_helper_022b4080(&__this_00->parameters,onComplete);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                 (MethodInfo *)0x0);
      return;
    }
  }
  cVar3 = SUB81(pMVar4,0);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae985 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae985 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aea1a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea1a = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
    pMVar4 = TypeInfo_AccountManager;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
    pMVar4 = TypeInfo_AccountManager;
  }
  TypeInfo_AccountManager = pMVar4;
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar4 = TypeInfo_AccountManager;
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
    TypeInfo_AccountManager[2].virtualMethodPointer[0x49] = cVar3;
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
  }
  else {
    pMVar4[2].virtualMethodPointer[0x49] = cVar3;
  }
  if (cVar3 == (code)0x0) {
    ApplicationManagers_AccountManager__DeleteRefreshToken(pMVar4);
    return;
  }
  bVar2 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x60),(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
    pMVar4 = TypeInfo_AccountManager;
    il2cpp_runtime_helper_02337ed0();
    ApplicationManagers_AccountManager__SaveRefreshToken(pMVar4);
    return;
  }
  ApplicationManagers_AccountManager__SaveRefreshToken(TypeInfo_AccountManager);
  return;
}


// ApplicationManagers.AccountManager$$Register
// il2cpp: void ApplicationManagers_AccountManager__Register (System_String_o* displayName, System_String_o* email, System_String_o* password, System_Action_bool__string__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x449ff00

void ApplicationManagers_AccountManager__Register
               (System_String_o *displayName,System_String_o *email,System_String_o *password,
               System_Action_bool__string__o *onComplete,bool_conflict reportNetworkError,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  ApplicationManagers_AccountManager_o *__this;
  System_String_Fields SVar3;
  System_String_o *path;
  System_String_o *captureField;
  System_String_o *pSVar4;
  SimpleJSONFixed_JSONObject_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_Action_bool__string__o *onComplete_00;
  System_Action_string__o *captureTarget;
  System_Collections_IEnumerator_o *routine;
  System_String_o *__this_01;
  MethodInfo *method_00;
  
  if (g_data_057ae989 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_bool_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Register_b__88_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Register_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass88_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"verificationToken");
    il2cpp_runtime_helper_023445d0(&"email");
    il2cpp_runtime_helper_023445d0(&"displayName");
    il2cpp_runtime_helper_023445d0(&"/v1/auth/register");
    il2cpp_runtime_helper_023445d0(&"password");
    g_data_057ae989 = '\x01';
  }
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass88_0);
  __this_01 = pSVar4;
  System_Object___ctor((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
  if (pSVar4 == (System_String_o *)0x0) goto label_044a0329;
  pSVar4->fields = (System_String_Fields)onComplete;
  il2cpp_runtime_helper_022b4080(&pSVar4->fields,onComplete);
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aea1b == '\0') goto label_044a01d0;
label_044a0037:
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (g_data_057aea1b != '\0') goto label_044a0037;
label_044a01d0:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea1b = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(undefined8 *)(lVar2 + 0x50) = 0;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x50,0);
  if (g_data_057aea1c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea1c = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(System_String_o **)(lVar2 + 0x58) = email;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x58);
  __this_00 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(displayName,(MethodInfo *)0x0);
  __this_01 = displayName;
  if (__this_00 != (SimpleJSONFixed_JSONObject_o *)0x0) {
    (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
              (__this_00,"displayName",pSVar5,(__this_00->klass->vtable)._8_set_Item.method);
    pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(email,(MethodInfo *)0x0);
    (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
              (__this_00,"email",pSVar5,(__this_00->klass->vtable)._8_set_Item.method);
    pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(password,(MethodInfo *)0x0);
    (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
              (__this_00,"password",pSVar5,(__this_00->klass->vtable)._8_set_Item.method);
    __this = (ApplicationManagers_AccountManager_o *)**(undefined8 **)(TypeInfo_AccountManager + 0xb8);
    pSVar4 = (System_String_o *)
             (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                       (__this_00,(__this_00->klass->vtable)._3_ToString.method);
    onComplete_00 = (System_Action_bool__string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_bool_string);
    method_00 = (MethodInfo *)0x44a01a3;
    System_Action_bool__object____ctor();
    if (*(int *)((long)&TypeInfo_c[9].monitor + 4) == 0) {
      method_00 = (MethodInfo *)0x44a023a;
      il2cpp_runtime_helper_02337ed0();
    }
    captureField = "verificationToken";
    path = "/v1/auth/register";
    captureTarget = *(System_Action_string__o **)((long)TypeInfo_c[7].fields + 8);
    __this_01 = TypeInfo_c;
    if (captureTarget == (System_Action_string__o *)0x0) {
      if (*(int *)((long)&TypeInfo_c[9].monitor + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      captureTarget = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
      System_Action_object____ctor();
      SVar3 = TypeInfo_c[7].fields;
      *(System_Action_string__o **)((long)SVar3 + 8) = captureTarget;
      __this_01 = (System_String_o *)((long)SVar3 + 8);
      method_00 = (MethodInfo *)0x44a02d1;
      il2cpp_runtime_helper_022b4080(__this_01,captureTarget);
    }
    if (__this != (ApplicationManagers_AccountManager_o *)0x0) {
      routine = ApplicationManagers_AccountManager__PostJson
                          (__this,path,pSVar4,(System_String_o *)0x0,onComplete_00,0,captureField,
                           captureTarget,reportNetworkError & 0xff,method_00);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
      return;
    }
  }
label_044a0329:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager$$Login
// il2cpp: void ApplicationManagers_AccountManager__Login (System_String_o* email, System_String_o* password, System_Action_bool__string__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x44a0450

void ApplicationManagers_AccountManager__Login
               (System_String_o *email,System_String_o *password,System_Action_bool__string__o *onComplete,
               bool_conflict reportNetworkError,MethodInfo *method)

{
  ApplicationManagers_AccountManager_o *__this;
  SimpleJSONFixed_JSONObject_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar1;
  System_String_o *json;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (g_data_057ae98a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&"email");
    il2cpp_runtime_helper_023445d0(&"/v1/auth/login");
    il2cpp_runtime_helper_023445d0(&"password");
    g_data_057ae98a = '\x01';
  }
  __this_00 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = SimpleJSONFixed_JSONNode__op_Implicit(email,(MethodInfo *)0x0);
  if (__this_00 != (SimpleJSONFixed_JSONObject_o *)0x0) {
    (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
              (__this_00,"email",pSVar1,(__this_00->klass->vtable)._8_set_Item.method);
    pSVar1 = SimpleJSONFixed_JSONNode__op_Implicit(password,(MethodInfo *)0x0);
    (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
              (__this_00,"password",pSVar1,(__this_00->klass->vtable)._8_set_Item.method);
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this = (ApplicationManagers_AccountManager_o *)**(undefined8 **)(TypeInfo_AccountManager + 0xb8);
    json = (System_String_o *)(*(__this_00->klass->vtable)._3_ToString.methodPtr)();
    email = (System_String_o *)__this_00;
    if (__this != (ApplicationManagers_AccountManager_o *)0x0) {
      routine = ApplicationManagers_AccountManager__PostJson
                          (__this,"/v1/auth/login",json,(System_String_o *)0x0,onComplete,1,(System_String_o *)0x0
                           ,(System_Action_string__o *)0x0,reportNetworkError & 0xff,in_stack_ffffffffffffffd0
                          );
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)email,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager$$Refresh
// il2cpp: void ApplicationManagers_AccountManager__Refresh (System_Action_bool__string__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x449f4a0

void ApplicationManagers_AccountManager__Refresh
               (System_Action_bool__string__o *onComplete,bool_conflict reportNetworkError,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  Il2CppMethodPointer pIVar3;
  ApplicationManagers_AccountManager_o *__this;
  UnityEngine_Object_o *x;
  Il2CppClass *__this_00;
  bool_conflict bVar4;
  System_Action_bool__string__o *pSVar5;
  SimpleJSONFixed_JSONObject_o *__this_01;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  System_String_o *json;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *__this_02;
  code cVar7;
  System_Action_bool__string__o *s;
  MethodInfo *pMVar8;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (g_data_057ae98b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_bool_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Refresh_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass90_0);
    il2cpp_runtime_helper_023445d0(&"refreshToken");
    il2cpp_runtime_helper_023445d0(&"/v1/auth/refresh");
    il2cpp_runtime_helper_023445d0(&"no_refresh_token");
    g_data_057ae98b = '\x01';
  }
  pSVar5 = (System_Action_bool__string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass90_0);
  s = pSVar5;
  System_Object___ctor((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
  if (pSVar5 != (System_Action_bool__string__o *)0x0) {
    (pSVar5->fields).method_ptr = (intptr_t)onComplete;
    il2cpp_runtime_helper_022b4080(&pSVar5->fields);
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar4 = System_String__IsNullOrEmpty
                      (*(System_String_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x60),(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      if (g_data_057aea1d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
        g_data_057aea1d = '\x01';
        iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
      }
      else {
        iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      TypeInfo_AccountManager[2].virtualMethodPointer[0x48] = (code)0x0;
      lVar2 = (pSVar5->fields).method_ptr;
      if (lVar2 == 0) {
        return;
      }
      (**(code **)(lVar2 + 0x18))
                (*(undefined8 *)(lVar2 + 0x40),0,"no_refresh_token",*(undefined8 *)(lVar2 + 0x28),
                 *(code **)(lVar2 + 0x18));
      return;
    }
    __this_01 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
    SimpleJSONFixed_JSONObject___ctor(__this_01,(MethodInfo *)0x0);
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    s = *(System_Action_bool__string__o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x60);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)s,(MethodInfo *)0x0);
    if (__this_01 != (SimpleJSONFixed_JSONObject_o *)0x0) {
      (*(__this_01->klass->vtable)._8_set_Item.methodPtr)(__this_01,"refreshToken",pSVar6);
      if (g_data_057aea1d == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
        g_data_057aea1d = '\x01';
        iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
      }
      else {
        iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
      }
      if (iVar1 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pIVar3 = TypeInfo_AccountManager[2].virtualMethodPointer;
      pIVar3[0x48] = (code)0x1;
      __this = *(ApplicationManagers_AccountManager_o **)pIVar3;
      json = (System_String_o *)
             (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                       (__this_01,(__this_01->klass->vtable)._3_ToString.method);
      pSVar5 = (System_Action_bool__string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_bool_string);
      s = pSVar5;
      System_Action_bool__object____ctor();
      if (__this != (ApplicationManagers_AccountManager_o *)0x0) {
        routine = ApplicationManagers_AccountManager__PostJson
                            (__this,"/v1/auth/refresh",json,(System_String_o *)0x0,pSVar5,1,(System_String_o *)0x0,
                             (System_Action_string__o *)0x0,reportNetworkError & 0xff,
                             in_stack_ffffffffffffffd0);
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae988 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"not_initialized");
    g_data_057ae988 = '\x01';
  }
  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = *(UnityEngine_Object_o **)TypeInfo_AccountManager[2].virtualMethodPointer;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    if (s == (System_Action_bool__string__o *)0x0) {
      return;
    }
    (*(code *)(s->fields).invoke_impl)((s->fields).method_code,0,"not_initialized",(s->fields).method);
    return;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_00 = *(Il2CppClass **)TypeInfo_AccountManager[2].virtualMethodPointer;
  pMVar8 = TypeInfo_AccountManager;
  if (__this_00 != (Il2CppClass *)0x0) {
    if (g_data_057ae993 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_GetAuthMethods_d__98);
      g_data_057ae993 = '\x01';
    }
    __this_02 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_GetAuthMethods_d__98);
    pMVar8 = __this_02;
    System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
    *(undefined4 *)&__this_02->invoker_method = 0;
    if (__this_02 != (MethodInfo *)0x0) {
      __this_02->klass = __this_00;
      il2cpp_runtime_helper_022b4080(&__this_02->klass,__this_00);
      __this_02->parameters = (Il2CppType **)s;
      il2cpp_runtime_helper_022b4080(&__this_02->parameters,s);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this_00,(System_Collections_IEnumerator_o *)__this_02,
                 (MethodInfo *)0x0);
      return;
    }
  }
  cVar7 = SUB81(pMVar8,0);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae985 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae985 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aea1a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea1a = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
    pMVar8 = TypeInfo_AccountManager;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
    pMVar8 = TypeInfo_AccountManager;
  }
  TypeInfo_AccountManager = pMVar8;
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar8 = TypeInfo_AccountManager;
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
    TypeInfo_AccountManager[2].virtualMethodPointer[0x49] = cVar7;
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
  }
  else {
    pMVar8[2].virtualMethodPointer[0x49] = cVar7;
  }
  if (cVar7 == (code)0x0) {
    ApplicationManagers_AccountManager__DeleteRefreshToken(pMVar8);
    return;
  }
  bVar4 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x60),(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
    pMVar8 = TypeInfo_AccountManager;
    il2cpp_runtime_helper_02337ed0();
    ApplicationManagers_AccountManager__SaveRefreshToken(pMVar8);
    return;
  }
  ApplicationManagers_AccountManager__SaveRefreshToken(TypeInfo_AccountManager);
  return;
}


// ApplicationManagers.AccountManager$$Logout
// il2cpp: void ApplicationManagers_AccountManager__Logout (System_Action_bool__string__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x44a05f0

void ApplicationManagers_AccountManager__Logout
               (System_Action_bool__string__o *onComplete,bool_conflict reportNetworkError,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_AccountManager_o *__this;
  byte bVar2;
  bool_conflict bVar3;
  SimpleJSONFixed_JSONObject_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  System_String_o *pSVar5;
  System_Collections_IEnumerator_o *routine;
  long lVar6;
  undefined4 in_register_00000034;
  char cVar7;
  long lVar8;
  MethodInfo *pMVar9;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  pMVar9 = (MethodInfo *)CONCAT44(in_register_00000034,reportNetworkError);
  if (g_data_057ae98c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&"refreshToken");
    il2cpp_runtime_helper_023445d0(&"/v1/auth/logout");
    g_data_057ae98c = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar5 = *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x60);
  ApplicationManagers_AccountManager__ClearSession(1,pMVar9);
  bVar3 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if (onComplete == (System_Action_bool__string__o *)0x0) {
      return;
    }
    (*(code *)(onComplete->fields).invoke_impl)
              ((onComplete->fields).method_code,1,0,(onComplete->fields).method);
    return;
  }
  __this_00 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar5,(MethodInfo *)0x0);
  cVar7 = (char)pSVar5;
  if (__this_00 != (SimpleJSONFixed_JSONObject_o *)0x0) {
    (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
              (__this_00,"refreshToken",pSVar4,(__this_00->klass->vtable)._8_set_Item.method);
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this = (ApplicationManagers_AccountManager_o *)**(undefined8 **)(TypeInfo_AccountManager + 0xb8);
    pSVar5 = (System_String_o *)(*(__this_00->klass->vtable)._3_ToString.methodPtr)();
    cVar7 = (char)__this_00;
    if (__this != (ApplicationManagers_AccountManager_o *)0x0) {
      routine = ApplicationManagers_AccountManager__PostJson
                          (__this,"/v1/auth/logout",pSVar5,(System_String_o *)0x0,onComplete,0,
                           (System_String_o *)0x0,(System_Action_string__o *)0x0,reportNetworkError & 0xff,
                           in_stack_ffffffffffffffd0);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae9a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae9a0 = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_044a07db;
label_044a09fb:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae971 != '\0') goto label_044a07e8;
label_044a0a0d:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae971 = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_044a07f8;
label_044a0a30:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aea19 != '\0') goto label_044a0805;
label_044a0a42:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea19 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_044a09fb;
label_044a07db:
    if (g_data_057ae971 == '\0') goto label_044a0a0d;
label_044a07e8:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_044a0a30;
label_044a07f8:
    if (g_data_057aea19 == '\0') goto label_044a0a42;
label_044a0805:
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x18),(MethodInfo *)0x0);
  bVar2 = 1;
  if ((char)bVar3 == '\0') {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    goto joined_r0x044a0ac0;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae972 != '\0') goto label_044a0a8f;
label_044a0d07:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae972 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (g_data_057ae972 == '\0') goto label_044a0d07;
label_044a0a8f:
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x60),(MethodInfo *)0x0);
  bVar2 = (byte)bVar3 ^ 1;
  iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
joined_r0x044a0ac0:
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aea21 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea21 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar8 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(undefined8 *)(lVar8 + 0x18) = 0;
  il2cpp_runtime_helper_022b4080(lVar8 + 0x18,0);
  if (g_data_057aea23 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea23 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    lVar8 = TypeInfo_AccountManager;
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    lVar8 = TypeInfo_AccountManager;
  }
  TypeInfo_AccountManager = lVar8;
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar8 = TypeInfo_AccountManager;
    *(undefined8 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x20) = 0;
  }
  else {
    *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x20) = 0;
  }
  if (g_data_057aea22 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea22 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    lVar8 = TypeInfo_AccountManager;
  }
  else {
    iVar1 = *(int *)(lVar8 + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar8 = TypeInfo_AccountManager;
  }
  lVar8 = *(long *)(lVar8 + 0xb8);
  *(undefined8 *)(lVar8 + 0x28) = 0;
  il2cpp_runtime_helper_022b4080(lVar8 + 0x28,0);
  if (g_data_057aea24 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea24 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    lVar8 = TypeInfo_AccountManager;
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    lVar8 = TypeInfo_AccountManager;
  }
  TypeInfo_AccountManager = lVar8;
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar8 = TypeInfo_AccountManager;
    *(undefined8 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x30) = 0;
  }
  else {
    *(undefined8 *)(*(long *)(lVar8 + 0xb8) + 0x30) = 0;
  }
  if (g_data_057aea20 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea20 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    lVar8 = TypeInfo_AccountManager;
  }
  else {
    iVar1 = *(int *)(lVar8 + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar8 = TypeInfo_AccountManager;
  }
  lVar8 = *(long *)(lVar8 + 0xb8);
  *(undefined8 *)(lVar8 + 0x38) = 0;
  pMVar9 = (MethodInfo *)(lVar8 + 0x38);
  il2cpp_runtime_helper_022b4080(pMVar9,0);
  ApplicationManagers_AccountManager__ClearProfileResponse(pMVar9);
  if (g_data_057aea25 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea25 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    lVar8 = TypeInfo_AccountManager;
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    lVar8 = TypeInfo_AccountManager;
  }
  TypeInfo_AccountManager = lVar8;
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar8 = TypeInfo_AccountManager;
    lVar6 = *(long *)(TypeInfo_AccountManager + 0xb8);
    *(undefined8 *)(lVar6 + 0x40) = 0;
  }
  else {
    lVar6 = *(long *)(lVar8 + 0xb8);
    *(undefined8 *)(lVar6 + 0x40) = 0;
  }
  if (cVar7 == '\0') {
    iVar1 = *(int *)(lVar8 + 0xe4);
  }
  else {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar6 = *(long *)(TypeInfo_AccountManager + 0xb8);
    }
    *(undefined8 *)(lVar6 + 0x60) = 0;
    pMVar9 = (MethodInfo *)(lVar6 + 0x60);
    il2cpp_runtime_helper_022b4080(pMVar9,0);
    ApplicationManagers_AccountManager__DeleteRefreshToken(pMVar9);
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aea1d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea1d = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    lVar8 = TypeInfo_AccountManager;
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    lVar8 = TypeInfo_AccountManager;
  }
  TypeInfo_AccountManager = lVar8;
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar8 = TypeInfo_AccountManager;
    lVar6 = *(long *)(TypeInfo_AccountManager + 0xb8);
    *(undefined1 *)(lVar6 + 0x48) = 0;
  }
  else {
    lVar6 = *(long *)(lVar8 + 0xb8);
    *(undefined1 *)(lVar6 + 0x48) = 0;
  }
  if (bVar2 != 0) {
    if (*(int *)(lVar8 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar8 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x78);
    }
    else {
      lVar8 = *(long *)(lVar6 + 0x78);
    }
    if (lVar8 != 0) {
      (**(code **)(lVar8 + 0x18))(*(undefined8 *)(lVar8 + 0x40),*(undefined8 *)(lVar8 + 0x28));
      return;
    }
  }
  return;
}


// ApplicationManagers.AccountManager$$GoOffline
// il2cpp: void ApplicationManagers_AccountManager__GoOffline (const MethodInfo* method);
// 0x44a0d40

void ApplicationManagers_AccountManager__GoOffline(MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  MethodInfo *method_00;
  
  if (g_data_057ae98d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae98d = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ae972 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae972 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)0x0;
  uVar2 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x60),(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  ApplicationManagers_AccountManager__ClearSession(uVar2 & 0xff,method_00);
  return;
}


// ApplicationManagers.AccountManager$$GoOnline
// il2cpp: void ApplicationManagers_AccountManager__GoOnline (System_Action_bool__string__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x44a0e20

void ApplicationManagers_AccountManager__GoOnline
               (System_Action_bool__string__o *onComplete,bool_conflict reportNetworkError,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (g_data_057ae98e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae98e = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ae971 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae971 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aea19 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea19 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x18),(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    method_00 = extraout_RDX;
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      method_00 = extraout_RDX_00;
    }
    ApplicationManagers_AccountManager__Refresh(onComplete,reportNetworkError & 0xff,method_00);
    return;
  }
  if (onComplete != (System_Action_bool__string__o *)0x0) {
    (*(code *)(onComplete->fields).invoke_impl)
              ((onComplete->fields).method_code,1,0,(onComplete->fields).method);
    return;
  }
  return;
}


// ApplicationManagers.AccountManager$$GetWebLoginUrlWithSession
// il2cpp: System_String_o* ApplicationManagers_AccountManager__GetWebLoginUrlWithSession (const MethodInfo* method);
// 0x44a0f90

System_String_o * ApplicationManagers_AccountManager__GetWebLoginUrlWithSession(MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_AccountManager_o *__this;
  System_String_o *pSVar2;
  System_Action_bool__string__o *__this_00;
  SimpleJSONFixed_JSONObject_o *__this_01;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  System_Action_bool__string__o *pSVar4;
  System_Collections_IEnumerator_o *routine;
  System_String_o *extraout_RAX;
  intptr_t in_RSI;
  System_Action_bool__string__o *__this_02;
  MethodInfo *in_stack_ffffffffffffffc8;
  
  if (g_data_057ae98f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&"/login");
    g_data_057ae98f = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar4 = *(System_Action_bool__string__o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x10);
  }
  else {
    pSVar4 = *(System_Action_bool__string__o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x10);
  }
  if (pSVar4 != (System_Action_bool__string__o *)0x0) {
    pSVar2 = System_String__TrimEnd_3afbd10((System_String_o *)pSVar4,0x2f,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat_3ae5ba0(pSVar2,"/login",(MethodInfo *)0x0);
    return pSVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae990 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_bool_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_VerifyEmail_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass95_0);
    il2cpp_runtime_helper_023445d0(&"token");
    il2cpp_runtime_helper_023445d0(&"/v1/auth/verify-email");
    g_data_057ae990 = '\x01';
  }
  __this_00 = (System_Action_bool__string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass95_0);
  __this_02 = __this_00;
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (System_Action_bool__string__o *)0x0) {
    (__this_00->fields).method_ptr = in_RSI;
    il2cpp_runtime_helper_022b4080(&__this_00->fields);
    __this_01 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
    SimpleJSONFixed_JSONObject___ctor(__this_01,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)pSVar4,(MethodInfo *)0x0);
    __this_02 = pSVar4;
    if (__this_01 != (SimpleJSONFixed_JSONObject_o *)0x0) {
      (*(__this_01->klass->vtable)._8_set_Item.methodPtr)(__this_01,"token",pSVar3);
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = (ApplicationManagers_AccountManager_o *)**(undefined8 **)(TypeInfo_AccountManager + 0xb8);
      pSVar2 = (System_String_o *)
               (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                         (__this_01,(__this_01->klass->vtable)._3_ToString.method);
      pSVar4 = (System_Action_bool__string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_bool_string);
      __this_02 = pSVar4;
      System_Action_bool__object____ctor();
      if (__this != (ApplicationManagers_AccountManager_o *)0x0) {
        routine = ApplicationManagers_AccountManager__PostJson
                            (__this,"/v1/auth/verify-email",pSVar2,(System_String_o *)0x0,pSVar4,0,(System_String_o *)0x0
                             ,(System_Action_string__o *)0x0,1,in_stack_ffffffffffffffc8);
        pSVar2 = (System_String_o *)
                 UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                           ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
        return pSVar2;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
  return extraout_RAX;
}


// ApplicationManagers.AccountManager$$VerifyEmail
// il2cpp: void ApplicationManagers_AccountManager__VerifyEmail (System_String_o* token, System_Action_bool__string__o* onComplete, const MethodInfo* method);
// 0x44a1030

void ApplicationManagers_AccountManager__VerifyEmail
               (System_String_o *token,System_Action_bool__string__o *onComplete,MethodInfo *method)

{
  ApplicationManagers_AccountManager_o *__this;
  System_Action_bool__string__o *pSVar1;
  SimpleJSONFixed_JSONObject_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_String_o *json;
  System_Collections_IEnumerator_o *routine;
  System_Action_bool__string__o *__this_01;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (g_data_057ae990 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_bool_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_VerifyEmail_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass95_0);
    il2cpp_runtime_helper_023445d0(&"token");
    il2cpp_runtime_helper_023445d0(&"/v1/auth/verify-email");
    g_data_057ae990 = '\x01';
  }
  pSVar1 = (System_Action_bool__string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass95_0);
  __this_01 = pSVar1;
  System_Object___ctor((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  if (pSVar1 != (System_Action_bool__string__o *)0x0) {
    (pSVar1->fields).method_ptr = (intptr_t)onComplete;
    il2cpp_runtime_helper_022b4080(&pSVar1->fields);
    __this_00 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
    SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit(token,(MethodInfo *)0x0);
    __this_01 = (System_Action_bool__string__o *)token;
    if (__this_00 != (SimpleJSONFixed_JSONObject_o *)0x0) {
      (*(__this_00->klass->vtable)._8_set_Item.methodPtr)(__this_00,"token",pSVar2);
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = (ApplicationManagers_AccountManager_o *)**(undefined8 **)(TypeInfo_AccountManager + 0xb8);
      json = (System_String_o *)
             (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                       (__this_00,(__this_00->klass->vtable)._3_ToString.method);
      pSVar1 = (System_Action_bool__string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_bool_string);
      __this_01 = pSVar1;
      System_Action_bool__object____ctor();
      if (__this != (ApplicationManagers_AccountManager_o *)0x0) {
        routine = ApplicationManagers_AccountManager__PostJson
                            (__this,"/v1/auth/verify-email",json,(System_String_o *)0x0,pSVar1,0,(System_String_o *)0x0,
                             (System_Action_string__o *)0x0,1,in_stack_ffffffffffffffd0);
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager$$ForgotPassword
// il2cpp: void ApplicationManagers_AccountManager__ForgotPassword (System_String_o* email, System_Action_bool__string__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x44a1220

void ApplicationManagers_AccountManager__ForgotPassword
               (System_String_o *email,System_Action_bool__string__o *onComplete,
               bool_conflict reportNetworkError,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_AccountManager_o *pAVar2;
  bool_conflict bVar3;
  System_Action_bool__string__o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  System_String_o *json;
  System_Collections_IEnumerator_o *pSVar5;
  Il2CppObject *__this_00;
  Il2CppClass *extraout_RDX;
  undefined4 uVar6;
  void *pvVar7;
  Il2CppClass *pIVar8;
  Il2CppObject *__this_01;
  MethodInfo *in_R8;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (g_data_057ae991 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&"/v1/auth/forgot-password");
    il2cpp_runtime_helper_023445d0(&"email");
    g_data_057ae991 = '\x01';
  }
  __this = (System_Action_bool__string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor((SimpleJSONFixed_JSONObject_o *)__this,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit(email,(MethodInfo *)0x0);
  if (__this != (System_Action_bool__string__o *)0x0) {
    method = (((SimpleJSONFixed_JSONObject_c *)__this->klass)->vtable)._8_set_Item.method;
    (*(((SimpleJSONFixed_JSONObject_c *)__this->klass)->vtable)._8_set_Item.methodPtr)
              (__this,"email",pSVar4);
    if (*(int *)&(TypeInfo_AccountManager->_2).field_0x1c == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pAVar2 = *(ApplicationManagers_AccountManager_o **)TypeInfo_AccountManager->static_fields;
    json = (System_String_o *)
           (*(((SimpleJSONFixed_JSONObject_c *)__this->klass)->vtable)._3_ToString.methodPtr)();
    email = (System_String_o *)__this;
    if (pAVar2 != (ApplicationManagers_AccountManager_o *)0x0) {
      pSVar5 = ApplicationManagers_AccountManager__PostJson
                         (pAVar2,"/v1/auth/forgot-password",json,(System_String_o *)0x0,onComplete,0,(System_String_o *)0x0,
                          (System_Action_string__o *)0x0,reportNetworkError & 0xff,in_stack_ffffffffffffffd0);
      UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                ((UnityEngine_MonoBehaviour_o *)pAVar2,pSVar5,(MethodInfo *)0x0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae992 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&"not_logged_in");
    il2cpp_runtime_helper_023445d0(&"/v1/patreon/link");
    g_data_057ae992 = '\x01';
    iVar1 = *(int *)&(TypeInfo_AccountManager->_2).field_0x1c;
  }
  else {
    iVar1 = *(int *)&(TypeInfo_AccountManager->_2).field_0x1c;
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ae971 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae971 = '\x01';
    iVar1 = *(int *)&(TypeInfo_AccountManager->_2).field_0x1c;
  }
  else {
    iVar1 = *(int *)&(TypeInfo_AccountManager->_2).field_0x1c;
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aea19 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea19 = '\x01';
    iVar1 = *(int *)&(TypeInfo_AccountManager->_2).field_0x1c;
  }
  else {
    iVar1 = *(int *)&(TypeInfo_AccountManager->_2).field_0x1c;
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pvVar7 = (void *)0x0;
  bVar3 = System_String__IsNullOrEmpty
                    (*(System_String_o **)((long)TypeInfo_AccountManager->static_fields + 0x18),(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    if ((System_Action_bool__string__o *)email == (System_Action_bool__string__o *)0x0) {
      return;
    }
    (*(code *)(((System_Action_bool__string__o *)email)->fields).invoke_impl)
              ((((System_Action_bool__string__o *)email)->fields).method_code,0,"not_logged_in",
               (((System_Action_bool__string__o *)email)->fields).method);
    return;
  }
  if (*(int *)&(TypeInfo_AccountManager->_2).field_0x1c == 0) {
    il2cpp_runtime_helper_02337ed0();
    pAVar2 = *(ApplicationManagers_AccountManager_o **)TypeInfo_AccountManager->static_fields;
  }
  else {
    pAVar2 = *(ApplicationManagers_AccountManager_o **)TypeInfo_AccountManager->static_fields;
  }
  if (g_data_057aea19 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea19 = '\x01';
    iVar1 = *(int *)&(TypeInfo_AccountManager->_2).field_0x1c;
  }
  else {
    iVar1 = *(int *)&(TypeInfo_AccountManager->_2).field_0x1c;
  }
  pIVar8 = TypeInfo_AccountManager;
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pIVar8 = TypeInfo_AccountManager;
  }
  TypeInfo_AccountManager = pIVar8;
  if (pAVar2 != (ApplicationManagers_AccountManager_o *)0x0) {
    pSVar5 = ApplicationManagers_AccountManager__DeleteJson
                       (pAVar2,"/v1/patreon/link",*(System_String_o **)((long)pIVar8->static_fields + 0x18),
                        (System_Action_bool__string__o *)email,in_R8);
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              ((UnityEngine_MonoBehaviour_o *)pAVar2,pSVar5,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae99a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteJson_d__105);
    g_data_057ae99a = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteJson_d__105);
  uVar6 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(__this_01,(MethodInfo *)0x0);
    *(undefined4 *)&__this_01[1].klass = uVar6;
    return;
  }
  __this_00[2].klass = pIVar8;
  il2cpp_runtime_helper_022b4080(__this_00 + 2,pIVar8);
  __this_00[2].monitor = pvVar7;
  il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,pvVar7);
  __this_00[3].klass = extraout_RDX;
  il2cpp_runtime_helper_022b4080(__this_00 + 3,extraout_RDX);
  __this_00[4].klass = (Il2CppClass *)method;
  il2cpp_runtime_helper_022b4080(__this_00 + 4,method);
  return;
}


// ApplicationManagers.AccountManager$$PatreonUnlink
// il2cpp: void ApplicationManagers_AccountManager__PatreonUnlink (System_Action_bool__string__o* onComplete, const MethodInfo* method);
// 0x44a1370

void ApplicationManagers_AccountManager__PatreonUnlink
               (System_Action_bool__string__o *onComplete,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_AccountManager_o *__this;
  bool_conflict bVar2;
  System_Collections_IEnumerator_o *routine;
  Il2CppObject *__this_00;
  Il2CppClass *in_RCX;
  Il2CppClass *extraout_RDX;
  undefined4 uVar3;
  void *pvVar4;
  Il2CppClass *pIVar5;
  Il2CppObject *__this_01;
  MethodInfo *in_R8;
  
  if (g_data_057ae992 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&"not_logged_in");
    il2cpp_runtime_helper_023445d0(&"/v1/patreon/link");
    g_data_057ae992 = '\x01';
    iVar1 = *(int *)&(TypeInfo_AccountManager->_2).field_0x1c;
  }
  else {
    iVar1 = *(int *)&(TypeInfo_AccountManager->_2).field_0x1c;
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ae971 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae971 = '\x01';
    iVar1 = *(int *)&(TypeInfo_AccountManager->_2).field_0x1c;
  }
  else {
    iVar1 = *(int *)&(TypeInfo_AccountManager->_2).field_0x1c;
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aea19 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea19 = '\x01';
    iVar1 = *(int *)&(TypeInfo_AccountManager->_2).field_0x1c;
  }
  else {
    iVar1 = *(int *)&(TypeInfo_AccountManager->_2).field_0x1c;
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pvVar4 = (void *)0x0;
  bVar2 = System_String__IsNullOrEmpty
                    (*(System_String_o **)((long)TypeInfo_AccountManager->static_fields + 0x18),(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (onComplete == (System_Action_bool__string__o *)0x0) {
      return;
    }
    (*(code *)(onComplete->fields).invoke_impl)
              ((onComplete->fields).method_code,0,"not_logged_in",(onComplete->fields).method);
    return;
  }
  if (*(int *)&(TypeInfo_AccountManager->_2).field_0x1c == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this = *(ApplicationManagers_AccountManager_o **)TypeInfo_AccountManager->static_fields;
  }
  else {
    __this = *(ApplicationManagers_AccountManager_o **)TypeInfo_AccountManager->static_fields;
  }
  if (g_data_057aea19 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea19 = '\x01';
    iVar1 = *(int *)&(TypeInfo_AccountManager->_2).field_0x1c;
  }
  else {
    iVar1 = *(int *)&(TypeInfo_AccountManager->_2).field_0x1c;
  }
  pIVar5 = TypeInfo_AccountManager;
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pIVar5 = TypeInfo_AccountManager;
  }
  TypeInfo_AccountManager = pIVar5;
  if (__this != (ApplicationManagers_AccountManager_o *)0x0) {
    routine = ApplicationManagers_AccountManager__DeleteJson
                        (__this,"/v1/patreon/link",*(System_String_o **)((long)pIVar5->static_fields + 0x18),
                         onComplete,in_R8);
    UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae99a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteJson_d__105);
    g_data_057ae99a = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteJson_d__105);
  uVar3 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    System_Object___ctor(__this_01,(MethodInfo *)0x0);
    *(undefined4 *)&__this_01[1].klass = uVar3;
    return;
  }
  __this_00[2].klass = pIVar5;
  il2cpp_runtime_helper_022b4080(__this_00 + 2,pIVar5);
  __this_00[2].monitor = pvVar4;
  il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,pvVar4);
  __this_00[3].klass = extraout_RDX;
  il2cpp_runtime_helper_022b4080(__this_00 + 3,extraout_RDX);
  __this_00[4].klass = in_RCX;
  il2cpp_runtime_helper_022b4080(__this_00 + 4,in_RCX);
  return;
}


// ApplicationManagers.AccountManager$$GetAuthMethods
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__GetAuthMethods (ApplicationManagers_AccountManager_o* __this, System_Action_bool__string__o* onComplete, const MethodInfo* method);
// 0x449fe80

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__GetAuthMethods
          (ApplicationManagers_AccountManager_o *__this,System_Action_bool__string__o *onComplete,
          MethodInfo *method)

{
  int iVar1;
  long lVar2;
  ApplicationManagers_AccountManager_o *__this_00;
  System_String_Fields SVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  SimpleJSONFixed_JSONObject_o *__this_01;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  System_String_o *pSVar7;
  System_Action_bool__string__o *onComplete_00;
  System_Action_string__o *captureTarget;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *pUVar8;
  System_Collections_IEnumerator_o *extraout_RAX;
  System_String_Fields in_RCX;
  System_String_o *s;
  System_String_o *pSVar9;
  uint in_R8D;
  MethodInfo *method_00;
  
  if (g_data_057ae993 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GetAuthMethods_d__98);
    g_data_057ae993 = '\x01';
  }
  pSVar4 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GetAuthMethods_d__98);
  pSVar9 = (System_String_o *)0x0;
  pSVar7 = pSVar4;
  System_Object___ctor((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
  (pSVar4->fields)._stringLength = 0;
  if (pSVar4 != (System_String_o *)0x0) {
    pSVar4[1].monitor = __this;
    il2cpp_runtime_helper_022b4080(&pSVar4[1].monitor,__this);
    pSVar4[2].klass = (System_String_c *)onComplete;
    il2cpp_runtime_helper_022b4080(pSVar4 + 2,onComplete);
    return (System_Collections_IEnumerator_o *)pSVar4;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae989 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_bool_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Register_b__88_1);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Register_b__0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c__DisplayClass88_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"verificationToken");
    il2cpp_runtime_helper_023445d0(&"email");
    il2cpp_runtime_helper_023445d0(&"displayName");
    il2cpp_runtime_helper_023445d0(&"/v1/auth/register");
    il2cpp_runtime_helper_023445d0(&"password");
    g_data_057ae989 = '\x01';
  }
  pSVar5 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_c__DisplayClass88_0);
  pSVar4 = pSVar5;
  System_Object___ctor((Il2CppObject *)pSVar5,(MethodInfo *)0x0);
  if (pSVar5 == (System_String_o *)0x0) goto label_044a0329;
  pSVar5->fields = in_RCX;
  il2cpp_runtime_helper_022b4080(&pSVar5->fields,in_RCX);
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aea1b == '\0') goto label_044a01d0;
label_044a0037:
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (g_data_057aea1b != '\0') goto label_044a0037;
label_044a01d0:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea1b = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(undefined8 *)(lVar2 + 0x50) = 0;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x50,0);
  if (g_data_057aea1c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea1c = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(System_String_o **)(lVar2 + 0x58) = pSVar9;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x58);
  __this_01 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_01,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
  pSVar4 = pSVar7;
  if (__this_01 != (SimpleJSONFixed_JSONObject_o *)0x0) {
    (*(__this_01->klass->vtable)._8_set_Item.methodPtr)
              (__this_01,"displayName",pSVar6,(__this_01->klass->vtable)._8_set_Item.method);
    pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar9,(MethodInfo *)0x0);
    (*(__this_01->klass->vtable)._8_set_Item.methodPtr)
              (__this_01,"email",pSVar6,(__this_01->klass->vtable)._8_set_Item.method);
    pSVar6 = SimpleJSONFixed_JSONNode__op_Implicit(s,(MethodInfo *)0x0);
    (*(__this_01->klass->vtable)._8_set_Item.methodPtr)
              (__this_01,"password",pSVar6,(__this_01->klass->vtable)._8_set_Item.method);
    __this_00 = (ApplicationManagers_AccountManager_o *)**(undefined8 **)(TypeInfo_AccountManager + 0xb8);
    pSVar7 = (System_String_o *)
             (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                       (__this_01,(__this_01->klass->vtable)._3_ToString.method);
    onComplete_00 = (System_Action_bool__string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_bool_string);
    method_00 = (MethodInfo *)0x44a01a3;
    System_Action_bool__object____ctor();
    if (*(int *)((long)&TypeInfo_c[9].monitor + 4) == 0) {
      method_00 = (MethodInfo *)0x44a023a;
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar5 = "verificationToken";
    pSVar9 = "/v1/auth/register";
    captureTarget = *(System_Action_string__o **)((long)TypeInfo_c[7].fields + 8);
    pSVar4 = TypeInfo_c;
    if (captureTarget == (System_Action_string__o *)0x0) {
      if (*(int *)((long)&TypeInfo_c[9].monitor + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      captureTarget = (System_Action_string__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_string);
      System_Action_object____ctor();
      SVar3 = TypeInfo_c[7].fields;
      *(System_Action_string__o **)((long)SVar3 + 8) = captureTarget;
      pSVar4 = (System_String_o *)((long)SVar3 + 8);
      method_00 = (MethodInfo *)0x44a02d1;
      il2cpp_runtime_helper_022b4080(pSVar4,captureTarget);
    }
    if (__this_00 != (ApplicationManagers_AccountManager_o *)0x0) {
      routine = ApplicationManagers_AccountManager__PostJson
                          (__this_00,pSVar9,pSVar7,(System_String_o *)0x0,onComplete_00,0,pSVar5,captureTarget
                           ,in_R8D & 0xff,method_00);
      pUVar8 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                         ((UnityEngine_MonoBehaviour_o *)__this_00,routine,(MethodInfo *)0x0);
      return (System_Collections_IEnumerator_o *)pUVar8;
    }
  }
label_044a0329:
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
  return extraout_RAX;
}


// ApplicationManagers.AccountManager$$SendApiGet
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__SendApiGet (ApplicationManagers_AccountManager_o* __this, System_String_o* path, System_String_o* bearer, bool parseJson, System_Action_AottgApiResult__o* onComplete, const MethodInfo* method);
// 0x44a1650

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__SendApiGet
          (ApplicationManagers_AccountManager_o *__this,System_String_o *path,System_String_o *bearer,
          bool_conflict parseJson,System_Action_AottgApiResult__o *onComplete,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057ae994 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SendApiGet_d__99);
    g_data_057ae994 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SendApiGet_d__99);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,__this);
    __this_00[3].klass = (Il2CppClass *)path;
    il2cpp_runtime_helper_022b4080(__this_00 + 3,path);
    __this_00[3].monitor = bearer;
    il2cpp_runtime_helper_022b4080(&__this_00[3].monitor,bearer);
    *(char *)&__this_00[4].klass = (char)parseJson;
    __this_00[2].klass = (Il2CppClass *)onComplete;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,onComplete);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// ApplicationManagers.AccountManager$$SendApiGetAsync
// il2cpp: Cysharp_Threading_Tasks_UniTask_o ApplicationManagers_AccountManager__SendApiGetAsync (ApplicationManagers_AccountManager_o* __this, System_String_o* path, System_String_o* bearer, bool parseJson, System_Action_AottgApiResult__o* onComplete, const MethodInfo* method);
// 0x44a1730

Cysharp_Threading_Tasks_UniTask_o
ApplicationManagers_AccountManager__SendApiGetAsync
          (ApplicationManagers_AccountManager_o *__this,System_String_o *path,System_String_o *bearer,
          bool_conflict parseJson,System_Action_AottgApiResult__o *onComplete,MethodInfo *method)

{
  ApplicationManagers_AccountManager__SendApiGetAsync_d__100_o __this_00;
  undefined1 uVar1;
  Cysharp_Threading_Tasks_UniTask_o CVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  Il2CppMethodPointer pIVar5;
  InvokerMethod pIVar6;
  undefined7 uVar7;
  _union_13 _Var8;
  _union_14 _Var9;
  undefined8 uVar10;
  
  if (g_data_057ae995 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_AccountManager_SendApiGetAsync_d__100);
    g_data_057ae995 = '\x01';
  }
  _Var9.genericMethod = (void *)0x0;
  uVar10._0_4_ = 0;
  uVar10._4_2_ = 0;
  uVar10._6_2_ = 0;
  _Var8.rgctx_data = (Il2CppRGCTXData *)0x0;
  uVar7 = 0;
  pIVar6 = (InvokerMethod)0x0;
  uVar4 = 0;
  pIVar5 = (Il2CppMethodPointer)0x0;
  il2cpp_runtime_helper_022b4080(&stack0xffffffffffffff80,0);
  il2cpp_runtime_helper_022b4080(&stack0xffffffffffffff90,path);
  il2cpp_runtime_helper_022b4080(&stack0xffffffffffffff98,bearer);
  uVar1 = (undefined1)parseJson;
  il2cpp_runtime_helper_022b4080(&stack0xffffffffffffffa8,onComplete);
  uVar3 = 0xffffffff;
  if (*(long *)(MethodInfo_Void_Start_AccountManager_SendApiGetAsync_d__100 + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20();
  }
  __this_00.fields._4_4_ = uVar4;
  __this_00.fields.__1__state = uVar3;
  __this_00.fields.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)pIVar5;
  __this_00.fields.__t__builder.fields.ex = (System_Exception_o *)pIVar6;
  __this_00.fields.path = path;
  __this_00.fields.bearer = bearer;
  __this_00.fields.parseJson._0_1_ = uVar1;
  __this_00.fields._41_7_ = uVar7;
  __this_00.fields.onComplete = onComplete;
  __this_00.fields.__u__1.fields.task.fields.source =
       (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)_Var8.rgctx_data;
  __this_00.fields.__u__1.fields.task.fields.result = _Var9.genericMethod;
  __this_00.fields.__u__1.fields.task.fields._16_8_ = uVar10;
  ApplicationManagers_AccountManager__SendApiGetAsync_d__100__MoveNext
            (__this_00,(MethodInfo *)&stack0xffffffffffffff78);
  CVar2.fields = (Cysharp_Threading_Tasks_UniTask_Fields)il2cpp_runtime_helper_0274e690(&stack0xffffffffffffff80,0);
  return (Cysharp_Threading_Tasks_UniTask_o)CVar2.fields;
}


// ApplicationManagers.AccountManager$$SendApiJson
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__SendApiJson (ApplicationManagers_AccountManager_o* __this, System_String_o* method, System_String_o* path, System_String_o* json, System_String_o* bearer, bool parseJson, System_Action_AottgApiResult__o* onComplete, bool reportNetworkError, System_Nullable_int__o timeoutSeconds, const MethodInfo* method);
// 0x44a1810

System_Collections_IEnumerator_o * ApplicationManagers_AccountManager__SendApiJson(void)

{
  Il2CppObject *__this;
  System_Collections_IEnumerator_o *extraout_RAX;
  Il2CppClass *in_RCX;
  void *in_RDX;
  undefined4 uVar1;
  Il2CppClass *in_RSI;
  void *in_RDI;
  Il2CppObject *__this_00;
  void *in_R8;
  undefined1 in_R9B;
  Il2CppClass *in_stack_00000008;
  undefined1 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (g_data_057ae996 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SendApiJson_d__101);
    g_data_057ae996 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SendApiJson_d__101);
  uVar1 = 0;
  __this_00 = __this;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0;
  if (__this != (Il2CppObject *)0x0) {
    __this[2].monitor = in_RDI;
    il2cpp_runtime_helper_022b4080(&__this[2].monitor);
    __this[3].klass = in_RSI;
    il2cpp_runtime_helper_022b4080(__this + 3);
    __this[3].monitor = in_RDX;
    il2cpp_runtime_helper_022b4080(&__this[3].monitor);
    __this[4].klass = in_RCX;
    il2cpp_runtime_helper_022b4080(__this + 4);
    __this[4].monitor = in_R8;
    il2cpp_runtime_helper_022b4080(&__this[4].monitor);
    *(undefined1 *)&__this[5].klass = in_R9B;
    __this[2].klass = in_stack_00000008;
    il2cpp_runtime_helper_022b4080(__this + 2);
    *(undefined1 *)((long)&__this[5].klass + 1) = in_stack_00000010;
    *(undefined8 *)((long)&__this[5].klass + 4) = in_stack_00000018;
    return (System_Collections_IEnumerator_o *)__this;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = uVar1;
  return extraout_RAX;
}


// ApplicationManagers.AccountManager$$SendApiJsonAsync
// il2cpp: Cysharp_Threading_Tasks_UniTask_o ApplicationManagers_AccountManager__SendApiJsonAsync (ApplicationManagers_AccountManager_o* __this, System_String_o* method, System_String_o* path, System_String_o* json, System_String_o* bearer, bool parseJson, bool reportNetworkError, System_Nullable_int__o timeoutSeconds, System_Action_AottgApiResult__o* onComplete, const MethodInfo* method);
// 0x44a1930

Cysharp_Threading_Tasks_UniTask_o ApplicationManagers_AccountManager__SendApiJsonAsync(void)

{
  ApplicationManagers_AccountManager__SendApiJsonAsync_d__102_o __this;
  Il2CppType *in_RCX;
  Il2CppClass *in_RDX;
  char *in_RSI;
  Il2CppType **in_R8;
  undefined1 in_R9B;
  Cysharp_Threading_Tasks_UniTask_o CVar1;
  undefined1 in_stack_00000008;
  undefined8 in_stack_00000010;
  undefined8 in_stack_00000018;
  undefined4 uVar2;
  undefined4 uVar3;
  Il2CppMethodPointer pIVar4;
  InvokerMethod pIVar5;
  undefined2 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  undefined8 uVar12;
  
  if (g_data_057ae997 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Start_AccountManager_SendApiJsonAsync_d__102);
    g_data_057ae997 = '\x01';
  }
  uVar10._0_2_ = 0;
  uVar10._2_1_ = '\0';
  uVar10._3_1_ = '\0';
  uVar10._4_4_ = 0;
  uVar11 = 0;
  uVar9 = 0;
  uVar6 = 0;
  pIVar5 = (InvokerMethod)0x0;
  uVar3 = 0;
  pIVar4 = (Il2CppMethodPointer)0x0;
  uVar12 = 0;
  il2cpp_runtime_helper_022b4080(&stack0xffffffffffffff70,0);
  il2cpp_runtime_helper_022b4080(&stack0xffffffffffffff80);
  il2cpp_runtime_helper_022b4080(&stack0xffffffffffffff88);
  il2cpp_runtime_helper_022b4080(&stack0xffffffffffffff90);
  il2cpp_runtime_helper_022b4080(&stack0xffffffffffffff98);
  uVar7 = (undefined4)in_stack_00000010;
  uVar8 = (undefined4)((ulong)in_stack_00000010 >> 0x20);
  il2cpp_runtime_helper_022b4080(&stack0xffffffffffffffb0);
  uVar2 = 0xffffffff;
  if (*(long *)(MethodInfo_Void_Start_AccountManager_SendApiJsonAsync_d__102 + 0x38) == 0) {
    il2cpp_runtime_helper_02300a20();
  }
  __this.fields._4_4_ = uVar3;
  __this.fields.__1__state = uVar2;
  __this.fields.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)pIVar4;
  __this.fields.__t__builder.fields.ex = (System_Exception_o *)pIVar5;
  __this.fields.method = (System_String_o *)in_RSI;
  __this.fields.path = (System_String_o *)in_RDX;
  __this.fields.json = (System_String_o *)in_RCX;
  __this.fields.bearer = (System_String_o *)in_R8;
  __this.fields.parseJson._0_1_ = in_R9B;
  __this.fields.parseJson._1_1_ = in_stack_00000008;
  __this.fields.parseJson._2_2_ = uVar6;
  __this.fields.reportNetworkError = uVar7;
  __this.fields.timeoutSeconds.fields.hasValue = uVar8;
  __this.fields.timeoutSeconds.fields.value = uVar9;
  __this.fields.onComplete = (System_Action_AottgApiResult__o *)in_stack_00000018;
  __this.fields.__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)uVar10;
  __this.fields.__u__1.fields.task.fields.result = (Il2CppObject *)uVar11;
  __this.fields.__u__1.fields.task.fields._16_8_ = uVar12;
  ApplicationManagers_AccountManager__SendApiJsonAsync_d__102__MoveNext
            (__this,(MethodInfo *)&stack0xffffffffffffff68);
  CVar1.fields = (Cysharp_Threading_Tasks_UniTask_Fields)il2cpp_runtime_helper_0274e690(&stack0xffffffffffffff70,0);
  return (Cysharp_Threading_Tasks_UniTask_o)CVar1.fields;
}


// ApplicationManagers.AccountManager$$SendApiJsonAsync
// il2cpp: Cysharp_Threading_Tasks_UniTask_AottgApiResult__o ApplicationManagers_AccountManager__SendApiJsonAsync (System_String_o* method, System_String_o* path, System_String_o* json, System_String_o* bearer, bool parseJson, bool reportNetworkError, System_Nullable_int__o timeoutSeconds, const MethodInfo* method);
// 0x44a1a60

Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *
ApplicationManagers_AccountManager__SendApiJsonAsync_43a1a60
          (Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *__return_storage_ptr__)

{
  System_String_o **ppSVar1;
  char cVar2;
  int iVar3;
  System_String_o *routine;
  long lVar4;
  ApplicationManagers_Api_AottgApiClient_o *__this;
  ApplicationManagers_Api_AottgApiRequest_o *__this_00;
  Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *pCVar5;
  Events_OnPreLoadScene_o *value;
  System_String_o *in_RCX;
  System_String_o *in_RDX;
  System_String_o *in_RSI;
  ApplicationManagers_Api_AottgApiRequest_o *__this_01;
  System_String_o *in_R8;
  undefined1 in_R9B;
  undefined1 in_stack_00000008;
  System_Nullable_int__Fields in_stack_00000010;
  Cysharp_Threading_Tasks_UniTask_AottgApiResult__o local_48;
  
  if (g_data_057ae998 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgApiClient);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgApiRequest);
    g_data_057ae998 = '\x01';
  }
  __this = (ApplicationManagers_Api_AottgApiClient_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgApiClient);
  ApplicationManagers_Api_AottgApiClient___ctor(__this,(MethodInfo *)0x0);
  __this_00 = (ApplicationManagers_Api_AottgApiRequest_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgApiRequest);
  __this_01 = __this_00;
  ApplicationManagers_Api_AottgApiRequest___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (ApplicationManagers_Api_AottgApiRequest_o *)0x0) {
    (__this_00->fields).Method = in_RSI;
    il2cpp_runtime_helper_022b4080(&__this_00->fields);
    (__this_00->fields).Path = in_RDX;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).Path);
    (__this_00->fields).JsonBody = in_RCX;
    il2cpp_runtime_helper_022b4080(&(__this_00->fields).JsonBody);
    __this_01 = (ApplicationManagers_Api_AottgApiRequest_o *)&(__this_00->fields).BearerToken;
    (__this_00->fields).BearerToken = in_R8;
    il2cpp_runtime_helper_022b4080();
    *(undefined1 *)&(__this_00->fields).ParseJson = in_R9B;
    (__this_00->fields).TimeoutSeconds.fields = in_stack_00000010;
    *(undefined1 *)((long)&(__this_00->fields).ParseJson + 1) = in_stack_00000008;
    if (__this != (ApplicationManagers_Api_AottgApiClient_o *)0x0) {
      ApplicationManagers_Api_AottgApiClient__SendAsync
                (&local_48,__this,__this_00,(System_Threading_CancellationToken_o)0x0,(MethodInfo *)0x0);
      (__return_storage_ptr__->fields).token = local_48.fields.token;
      *(undefined6 *)&(__return_storage_ptr__->fields).field_0x12 = local_48.fields._18_6_;
      (__return_storage_ptr__->fields).source = local_48.fields.source;
      (__return_storage_ptr__->fields).result = local_48.fields.result;
      return __return_storage_ptr__;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae999 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnPreLoadScene);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OnPreLoadScene);
    g_data_057ae999 = '\x01';
    iVar3 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar3 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar2 = *(char *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 8);
  }
  else {
    cVar2 = *(char *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 8);
  }
  if (cVar2 != '\0') {
    value = (Events_OnPreLoadScene_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnPreLoadScene);
    Events_OnPreLoadScene___ctor();
    Events_EventManager__remove_OnPreLoadScene(value,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 8) = 0;
    }
    else {
      *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 8) = 0;
    }
  }
  if (g_data_057ae9aa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae9aa = '\x01';
  }
  routine = (__this_01->fields).JsonBody;
  if (routine != (System_String_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_4dfdad0
              ((UnityEngine_MonoBehaviour_o *)__this_01,(UnityEngine_Coroutine_o *)routine,(MethodInfo *)0x0);
    (__this_01->fields).JsonBody = (System_String_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this_01->fields).JsonBody,0);
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar4 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(undefined8 *)(lVar4 + 0x88) = 0;
  pCVar5 = (Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *)il2cpp_runtime_helper_022b4080(lVar4 + 0x88,0);
  ppSVar1 = &(__this_01->fields).BearerToken;
  *(int *)ppSVar1 = *(int *)ppSVar1 + 1;
  return pCVar5;
}


// ApplicationManagers.AccountManager$$OnDestroy
// il2cpp: void ApplicationManagers_AccountManager__OnDestroy (ApplicationManagers_AccountManager_o* __this, const MethodInfo* method);
// 0x44a1b90

void ApplicationManagers_AccountManager__OnDestroy
               (ApplicationManagers_AccountManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  char cVar2;
  int iVar3;
  UnityEngine_Coroutine_o *routine;
  long lVar4;
  Events_OnPreLoadScene_o *value;
  
  if (g_data_057ae999 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_OnPreLoadScene);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_OnPreLoadScene);
    g_data_057ae999 = '\x01';
    iVar3 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar3 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_runtime_helper_02337ed0();
    cVar2 = *(char *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 8);
  }
  else {
    cVar2 = *(char *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 8);
  }
  if (cVar2 != '\0') {
    value = (Events_OnPreLoadScene_o *)il2cpp_runtime_helper_023052d0(TypeInfo_OnPreLoadScene);
    Events_OnPreLoadScene___ctor();
    Events_EventManager__remove_OnPreLoadScene(value,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 8) = 0;
    }
    else {
      *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 8) = 0;
    }
  }
  if (g_data_057ae9aa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae9aa = '\x01';
  }
  routine = (__this->fields)._oauthFlowCoroutine;
  if (routine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_4dfdad0
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
    (__this->fields)._oauthFlowCoroutine = (UnityEngine_Coroutine_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._oauthFlowCoroutine,0);
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar4 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(undefined8 *)(lVar4 + 0x88) = 0;
  il2cpp_runtime_helper_022b4080(lVar4 + 0x88,0);
  piVar1 = &(__this->fields)._oauthAttemptId;
  *piVar1 = *piVar1 + 1;
  return;
}


// ApplicationManagers.AccountManager$$DeleteJson
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__DeleteJson (ApplicationManagers_AccountManager_o* __this, System_String_o* path, System_String_o* bearer, System_Action_bool__string__o* onComplete, const MethodInfo* method);
// 0x44a1580

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__DeleteJson
          (ApplicationManagers_AccountManager_o *__this,System_String_o *path,System_String_o *bearer,
          System_Action_bool__string__o *onComplete,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057ae99a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DeleteJson_d__105);
    g_data_057ae99a = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_DeleteJson_d__105);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
    __this_00[2].monitor = path;
    il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,path);
    __this_00[3].klass = (Il2CppClass *)bearer;
    il2cpp_runtime_helper_022b4080(__this_00 + 3,bearer);
    __this_00[4].klass = (Il2CppClass *)onComplete;
    il2cpp_runtime_helper_022b4080(__this_00 + 4,onComplete);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// ApplicationManagers.AccountManager$$PostJson
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__PostJson (ApplicationManagers_AccountManager_o* __this, System_String_o* path, System_String_o* json, System_String_o* bearer, System_Action_bool__string__o* onComplete, bool applyAuthResponse, System_String_o* captureField, System_Action_string__o* captureTarget, bool reportNetworkError, const MethodInfo* method);
// 0x44a0340

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__PostJson
          (ApplicationManagers_AccountManager_o *__this,System_String_o *path,System_String_o *json,
          System_String_o *bearer,System_Action_bool__string__o *onComplete,bool_conflict applyAuthResponse,
          System_String_o *captureField,System_Action_string__o *captureTarget,
          bool_conflict reportNetworkError,MethodInfo *method)

{
  ApplicationManagers_AccountManager_o *__this_00;
  SimpleJSONFixed_JSONObject_o *pSVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_String_o *pSVar3;
  System_Collections_IEnumerator_o *routine;
  UnityEngine_Coroutine_o *pUVar4;
  System_Collections_IEnumerator_o *extraout_RAX;
  uint uVar5;
  System_Action_bool__string__o *onComplete_00;
  SimpleJSONFixed_JSONObject_o *s;
  MethodInfo *in_stack_ffffffffffffff98;
  
  pSVar3 = bearer;
  if (g_data_057ae99b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PostJson_d__106);
    g_data_057ae99b = '\x01';
  }
  uVar5 = (uint)pSVar3;
  pSVar1 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_PostJson_d__106);
  pSVar3 = (System_String_o *)0x0;
  s = pSVar1;
  System_Object___ctor((Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  *(undefined4 *)&(pSVar1->fields).m_Dict = 0;
  if (pSVar1 != (SimpleJSONFixed_JSONObject_o *)0x0) {
    pSVar1[1].klass = (SimpleJSONFixed_JSONObject_c *)__this;
    il2cpp_runtime_helper_022b4080(pSVar1 + 1,__this);
    pSVar1[1].monitor = path;
    il2cpp_runtime_helper_022b4080(&pSVar1[1].monitor,path);
    pSVar1[1].fields.m_Dict = (System_Collections_Generic_Dictionary_string__JSONNode__o *)json;
    il2cpp_runtime_helper_022b4080(&pSVar1[1].fields,json);
    *(System_String_o **)&pSVar1[1].fields.field1_0x8 = bearer;
    il2cpp_runtime_helper_022b4080(&pSVar1[1].fields.field1_0x8,bearer);
    pSVar1[3].monitor = onComplete;
    il2cpp_runtime_helper_022b4080(&pSVar1[3].monitor,onComplete);
    *(char *)&pSVar1[3].klass = (char)applyAuthResponse;
    pSVar1[2].fields.m_Dict = (System_Collections_Generic_Dictionary_string__JSONNode__o *)captureField;
    il2cpp_runtime_helper_022b4080(&pSVar1[2].fields);
    *(System_Action_string__o **)&pSVar1[2].fields.field1_0x8 = captureTarget;
    il2cpp_runtime_helper_022b4080(&pSVar1[2].fields.field1_0x8);
    *(undefined1 *)&pSVar1[2].klass = (undefined1)reportNetworkError;
    return (System_Collections_IEnumerator_o *)pSVar1;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae98a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&"email");
    il2cpp_runtime_helper_023445d0(&"/v1/auth/login");
    il2cpp_runtime_helper_023445d0(&"password");
    g_data_057ae98a = '\x01';
  }
  pSVar1 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(pSVar1,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)s,(MethodInfo *)0x0);
  if (pSVar1 != (SimpleJSONFixed_JSONObject_o *)0x0) {
    (*(pSVar1->klass->vtable)._8_set_Item.methodPtr)
              (pSVar1,"email",pSVar2,(pSVar1->klass->vtable)._8_set_Item.method);
    pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar3,(MethodInfo *)0x0);
    (*(pSVar1->klass->vtable)._8_set_Item.methodPtr)
              (pSVar1,"password",pSVar2,(pSVar1->klass->vtable)._8_set_Item.method);
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    __this_00 = (ApplicationManagers_AccountManager_o *)**(undefined8 **)(TypeInfo_AccountManager + 0xb8);
    pSVar3 = (System_String_o *)(*(pSVar1->klass->vtable)._3_ToString.methodPtr)();
    s = pSVar1;
    if (__this_00 != (ApplicationManagers_AccountManager_o *)0x0) {
      routine = ApplicationManagers_AccountManager__PostJson
                          (__this_00,"/v1/auth/login",pSVar3,(System_String_o *)0x0,onComplete_00,1,
                           (System_String_o *)0x0,(System_Action_string__o *)0x0,uVar5 & 0xff,
                           in_stack_ffffffffffffff98);
      pUVar4 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                         ((UnityEngine_MonoBehaviour_o *)__this_00,routine,(MethodInfo *)0x0);
      return (System_Collections_IEnumerator_o *)pUVar4;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)s,(MethodInfo *)0x0);
  return extraout_RAX;
}


// ApplicationManagers.AccountManager$$ApplyAuthMethodsResponse
// il2cpp: bool ApplicationManagers_AccountManager__ApplyAuthMethodsResponse (System_String_o* json, const MethodInfo* method);
// 0x44a1e10

bool_conflict
ApplicationManagers_AccountManager__ApplyAuthMethodsResponse(System_String_o *json,MethodInfo *method)

{
  System_Collections_Generic_IEqualityComparer_T__o *comparer;
  long lVar1;
  System_Collections_Generic_HashSet_Enumerator_T__o __this;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_03;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_04;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_05;
  char cVar2;
  bool_conflict bVar3;
  int iVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  long *plVar6;
  System_Collections_Generic_HashSet_object__o *pSVar7;
  long *plVar8;
  System_String_StaticFields *pSVar9;
  undefined8 uVar10;
  System_FormatException_o *__this_06;
  System_String_o *pSVar11;
  uint uVar12;
  System_String_c *pSVar13;
  System_String_c **unaff_R12;
  undefined8 *unaff_R13;
  ulong uVar14;
  MethodInfo_33E1AF0 **unaff_R15;
  undefined7 uVar15;
  bool bVar16;
  undefined1 auVar17 [12];
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar18;
  Il2CppType *pIVar19;
  Il2CppObject *pIVar20;
  Il2CppObject *pIVar21;
  System_Collections_Generic_HashSet_object__o *local_50;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (g_data_057ae99c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Current);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_T_Enumerator_System_String_GetEnumerator);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    il2cpp_runtime_helper_023445d0(&"methods");
    il2cpp_runtime_helper_023445d0(&"key");
    il2cpp_runtime_helper_023445d0(&"enabled");
    g_data_057ae99c = '\x01';
  }
  pSVar18 = (System_Collections_Generic_HashSet_Enumerator_T__c *)0x0;
  pIVar19 = (Il2CppType *)0x0;
  pIVar20 = (Il2CppObject *)0x0;
  pSVar5 = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
  if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_044a2526;
  plVar6 = (long *)(*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar5,"methods",(pSVar5->klass->vtable)._7_get_Item.method);
  if (plVar6 == (long *)0x0) goto label_044a2526;
  unaff_R15 = (MethodInfo_33E1AF0 **)(**(code **)(*plVar6 + 0x408))(plVar6);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)unaff_R15,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') goto label_044a2535;
  if (*(int *)(TypeInfo_StringComparer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057a9c88 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    g_data_057a9c88 = '\x01';
    iVar4 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar4 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar4 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  comparer = *(System_Collections_Generic_IEqualityComparer_T__o **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
  pSVar7 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_33e0600(pSVar7,comparer,MethodInfo_HashSet_1_System_String);
  if ((SimpleJSONFixed_JSONNode_o *)unaff_R15 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_044a2526;
  iVar4 = (*(((SimpleJSONFixed_JSONNode_o *)unaff_R15)->klass->vtable)._11_get_Count.methodPtr)
                    (unaff_R15,(((SimpleJSONFixed_JSONNode_o *)unaff_R15)->klass->vtable)._11_get_Count.method
                    );
  local_50 = pSVar7;
  if (pSVar7 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    if (0 < iVar4) {
      uVar12 = 0;
      unaff_R12 = (System_String_c **)&"enabled";
      do {
        plVar6 = (long *)(*(((SimpleJSONFixed_JSONNode_o *)unaff_R15)->klass->vtable)._5_get_Item.methodPtr)
                                   (unaff_R15,(ulong)uVar12,
                                    (((SimpleJSONFixed_JSONNode_o *)unaff_R15)->klass->vtable)._5_get_Item.
                                    method);
        if (plVar6 == (long *)0x0) goto label_044a2526;
        plVar8 = (long *)(**(code **)(*plVar6 + 0x1a8))(plVar6,"key",*(undefined8 *)(*plVar6 + 0x1b0));
        if (plVar8 == (long *)0x0) goto label_044a2526;
        pSVar11 = (System_String_o *)(**(code **)(*plVar8 + 0x1c8))(plVar8);
        bVar3 = System_String__IsNullOrEmpty(pSVar11,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          plVar6 = (long *)(**(code **)(*plVar6 + 0x1a8))
                                     (plVar6,"enabled",*(undefined8 *)(*plVar6 + 0x1b0));
          if (plVar6 == (long *)0x0) goto label_044a2526;
          cVar2 = (**(code **)(*plVar6 + 0x3a8))(plVar6,*(undefined8 *)(*plVar6 + 0x3b0));
          if (cVar2 != '\0') goto label_044a2526;
        }
        uVar12 = uVar12 + 1;
        iVar4 = (*(((SimpleJSONFixed_JSONNode_o *)unaff_R15)->klass->vtable)._11_get_Count.methodPtr)
                          (unaff_R15,
                           (((SimpleJSONFixed_JSONNode_o *)unaff_R15)->klass->vtable)._11_get_Count.method);
      } while ((int)uVar12 < iVar4);
    }
  }
  else if (0 < iVar4) {
    uVar12 = 0;
    unaff_R13 = &"key";
    do {
      plVar6 = (long *)(*(((SimpleJSONFixed_JSONNode_o *)unaff_R15)->klass->vtable)._5_get_Item.methodPtr)
                                 (unaff_R15,(ulong)uVar12,
                                  (((SimpleJSONFixed_JSONNode_o *)unaff_R15)->klass->vtable)._5_get_Item.
                                  method);
      if (plVar6 == (long *)0x0) goto label_044a2526;
      plVar8 = (long *)(**(code **)(*plVar6 + 0x1a8))(plVar6,"key",*(undefined8 *)(*plVar6 + 0x1b0));
      if (plVar8 == (long *)0x0) goto label_044a2526;
      unaff_R12 = (System_String_c **)(**(code **)(*plVar8 + 0x1c8))(plVar8);
      bVar3 = System_String__IsNullOrEmpty((System_String_o *)unaff_R12,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        plVar6 = (long *)(**(code **)(*plVar6 + 0x1a8))(plVar6,"enabled",*(undefined8 *)(*plVar6 + 0x1b0));
        if (plVar6 == (long *)0x0) goto label_044a2526;
        cVar2 = (**(code **)(*plVar6 + 0x3a8))(plVar6,*(undefined8 *)(*plVar6 + 0x3b0));
        if (cVar2 != '\0') {
          System_Collections_Generic_HashSet_object___Add(pSVar7,(Il2CppObject *)unaff_R12,MethodInfo_Boolean_Add);
        }
      }
      uVar12 = uVar12 + 1;
      iVar4 = (*(((SimpleJSONFixed_JSONNode_o *)unaff_R15)->klass->vtable)._11_get_Count.methodPtr)
                        (unaff_R15,
                         (((SimpleJSONFixed_JSONNode_o *)unaff_R15)->klass->vtable)._11_get_Count.method);
    } while ((int)uVar12 < iVar4);
  }
  unaff_R12 = &TypeInfo_AccountManager;
  uVar15 = (undefined7)((ulong)unaff_R13 >> 8);
  if (*(int *)&(TypeInfo_AccountManager->_2).field_0x1c == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aea1e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea1e = '\x01';
    iVar4 = *(int *)&(TypeInfo_AccountManager->_2).field_0x1c;
  }
  else {
    iVar4 = *(int *)&(TypeInfo_AccountManager->_2).field_0x1c;
  }
  if (iVar4 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar9 = TypeInfo_AccountManager->static_fields;
    cVar2 = *(char *)((long)&pSVar9[9].Empty + 2);
  }
  else {
    pSVar9 = TypeInfo_AccountManager->static_fields;
    cVar2 = *(char *)((long)&pSVar9[9].Empty + 2);
  }
  uVar14 = CONCAT71(uVar15,1);
  if (cVar2 == '\0') goto label_044a23d2;
  uVar14 = CONCAT71(uVar15,1);
  if (pSVar7 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_044a2526;
  iVar4 = (pSVar7->fields)._count;
  if (*(int *)&(TypeInfo_AccountManager->_2).field_0x1c == 0) {
    il2cpp_runtime_helper_02337ed0();
    pSVar9 = TypeInfo_AccountManager->static_fields;
  }
  if (pSVar9[0xd].Empty == (System_String_o *)0x0) goto label_044a2526;
  bVar16 = iVar4 != *(int *)&pSVar9[0xd].Empty[1].monitor;
  uVar15 = (undefined7)((ulong)unaff_R15 >> 8);
  unaff_R15 = (MethodInfo_33E1AF0 **)CONCAT71(uVar15,bVar16);
  if (bVar16) goto label_044a23d2;
  System_Collections_Generic_HashSet_object___GetEnumerator
            ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,pSVar7,MethodInfo_HashSet_1_T_Enumerator_System_String_GetEnumerator);
  pSVar18 = (System_Collections_Generic_HashSet_Enumerator_T__c *)local_48._0_8_;
  pIVar19 = (Il2CppType *)local_48._8_8_;
  pIVar21 = local_38;
  do {
    __this.fields._8_8_ = pIVar19;
    __this.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar18;
    __this.fields._current = pIVar21;
    bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                      (__this,(MethodInfo_3219C40 *)&stack0xffffffffffffff98);
    pIVar20 = pIVar21;
    if ((char)bVar3 == '\0') goto label_044a2351;
    if (*(int *)&(TypeInfo_AccountManager->_2).field_0x1c == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)TypeInfo_AccountManager->static_fields[0xd].Empty;
    if (pSVar7 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_044a2530;
    bVar3 = System_Collections_Generic_HashSet_object___Contains(pSVar7,pIVar21,MethodInfo_Boolean_Contains);
    pIVar21 = pIVar20;
  } while ((char)bVar3 != '\0');
  unaff_R15 = (MethodInfo_33E1AF0 **)CONCAT71(uVar15,1);
label_044a2351:
  __this_00.fields._8_8_ = pIVar19;
  __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar18;
  __this_00.fields._current = pIVar20;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_00,(MethodInfo_3219C30 *)&stack0xffffffffffffff98);
  uVar14 = (ulong)unaff_R15 & 0xffffffff;
  iVar4 = *(int *)&(TypeInfo_AccountManager->_2).field_0x1c;
  pSVar13 = TypeInfo_AccountManager;
  while( true ) {
    if (iVar4 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pSVar13 = ((System_String_o *)unaff_R12)->klass;
    }
    pSVar7 = (System_Collections_Generic_HashSet_object__o *)pSVar13->static_fields[0xd].Empty;
    if ((pSVar7 == (System_Collections_Generic_HashSet_object__o *)0x0) ||
       (System_Collections_Generic_HashSet_object___Clear(pSVar7,MethodInfo_Void_Clear),
       local_50 == (System_Collections_Generic_HashSet_object__o *)0x0)) {
label_044a2526:
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      System_Collections_Generic_HashSet_object___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,local_50,MethodInfo_HashSet_1_T_Enumerator_System_String_GetEnumerator);
      unaff_R15 = &MethodInfo_Boolean_Add;
      pSVar18 = (System_Collections_Generic_HashSet_Enumerator_T__c *)local_48._0_8_;
      pIVar19 = (Il2CppType *)local_48._8_8_;
      pIVar21 = local_38;
      while( true ) {
        __this_01.fields._8_8_ = pIVar19;
        __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar18;
        __this_01.fields._current = pIVar21;
        bVar3 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          (__this_01,(MethodInfo_3219C40 *)&stack0xffffffffffffff98);
        if ((char)bVar3 == '\0') {
          __this_02.fields._8_8_ = pIVar19;
          __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar18;
          __this_02.fields._current = pIVar21;
          System_Collections_Generic_HashSet_Enumerator_object___Dispose
                    (__this_02,(MethodInfo_3219C30 *)&stack0xffffffffffffff98);
          if (*(int *)&(((System_String_o *)unaff_R12)->klass->_2).field_0x1c == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          if (g_data_057aea1f == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
            g_data_057aea1f = '\x01';
            pSVar13 = ((System_String_o *)unaff_R12)->klass;
            iVar4 = *(int *)&(pSVar13->_2).field_0x1c;
          }
          else {
            pSVar13 = ((System_String_o *)unaff_R12)->klass;
            iVar4 = *(int *)&(pSVar13->_2).field_0x1c;
          }
          if (iVar4 == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar13 = ((System_String_o *)unaff_R12)->klass;
          }
          *(undefined1 *)((long)&pSVar13->static_fields[9].Empty + 2) = 1;
          return (bool_conflict)uVar14;
        }
        pSVar13 = ((System_String_o *)unaff_R12)->klass;
        pIVar20 = pIVar21;
        if (*(int *)&(pSVar13->_2).field_0x1c == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar13 = ((System_String_o *)unaff_R12)->klass;
        }
        pSVar7 = (System_Collections_Generic_HashSet_object__o *)pSVar13->static_fields[0xd].Empty;
        if (pSVar7 == (System_Collections_Generic_HashSet_object__o *)0x0) break;
        System_Collections_Generic_HashSet_object___Add(pSVar7,pIVar21,MethodInfo_Boolean_Add);
        pIVar21 = pIVar20;
      }
    }
    il2cpp_runtime_helper_022b2c90();
label_044a2530:
    il2cpp_runtime_helper_022b2c90();
label_044a2535:
    uVar10 = il2cpp_runtime_helper_023445d0(&TypeInfo_FormatException);
    __this_06 = (System_FormatException_o *)il2cpp_runtime_helper_023052d0(uVar10);
    pSVar11 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Missing methods array.");
    System_FormatException___ctor_3c9afc0(__this_06,pSVar11,(MethodInfo *)0x0);
    uVar10 = il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_ApplyAuthMethodsResponse);
    auVar17 = il2cpp_runtime_helper_022b2b10(__this_06,uVar10);
    if (auVar17._8_4_ != 1) break;
    plVar6 = (long *)__cxa_begin_catch(auVar17._0_8_);
    lVar1 = *plVar6;
    __cxa_end_catch();
    __this_03.fields._8_8_ = pIVar19;
    __this_03.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar18;
    __this_03.fields._current = pIVar20;
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (__this_03,(MethodInfo_3219C30 *)&stack0xffffffffffffff98);
    uVar14 = (ulong)unaff_R15 & 0xffffffff;
    if (lVar1 != 0) {
      il2cpp_runtime_helper_022fefe0(lVar1);
      __this_05.fields._8_8_ = pIVar19;
      __this_05.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar18;
      __this_05.fields._current = pIVar20;
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                (__this_05,(MethodInfo_3219C30 *)&stack0xffffffffffffff98);
label_044a267b:
      _Unwind_Resume(local_50);
    }
label_044a23d2:
    pSVar13 = ((System_String_o *)unaff_R12)->klass;
    iVar4 = *(int *)&(pSVar13->_2).field_0x1c;
  }
  __this_04.fields._8_8_ = pIVar19;
  __this_04.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar18;
  __this_04.fields._current = pIVar20;
  System_Collections_Generic_HashSet_Enumerator_object___Dispose
            (__this_04,(MethodInfo_3219C30 *)&stack0xffffffffffffff98);
  local_50 = auVar17._0_8_;
  goto label_044a267b;
}


// ApplicationManagers.AccountManager$$ApplyAuthResponse
// il2cpp: void ApplicationManagers_AccountManager__ApplyAuthResponse (System_String_o* json, const MethodInfo* method);
// 0x44a26a0

void ApplicationManagers_AccountManager__ApplyAuthResponse(System_String_o *json,MethodInfo *method)

{
  code cVar1;
  int iVar2;
  long lVar3;
  Il2CppMethodPointer pIVar4;
  undefined8 uVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  undefined2 uVar8;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_00;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_01;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_02;
  char cVar9;
  bool_conflict bVar10;
  SimpleJSONFixed_JSONNode_o *pSVar11;
  ApplicationManagers_AccountLoginResponse_o *pAVar12;
  int64_t iVar13;
  System_String_o *pSVar14;
  undefined8 uVar15;
  System_FormatException_o *__this_03;
  ApplicationManagers_AccountLoginResponse_ProfileData_o *pAVar16;
  long *plVar17;
  System_String_o *value;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar18;
  System_FormatException_o *a;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o left_00;
  System_DateTimeOffset_o __this_04;
  System_DateTimeOffset_o __this_05;
  Il2CppMethodPointer pIVar19;
  Il2CppMethodPointer pIVar20;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar21;
  InvokerMethod pIVar22;
  char *pcVar23;
  Il2CppObject *pIVar24;
  Il2CppClass *pIVar25;
  Il2CppType *pIVar26;
  Il2CppType **ppIVar27;
  System_Collections_Generic_List_T__o *pSVar28;
  _union_13 _Var29;
  _union_14 _Var30;
  Il2CppMethodPointer pIStack_f8;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_f0;
  InvokerMethod pIStack_e8;
  Il2CppObject *pIStack_e0;
  Il2CppClass *pIStack_d8;
  Il2CppType *pIStack_d0;
  System_Collections_Generic_List_T__o *pSStack_c8;
  _union_13 _Stack_c0;
  _union_14 _Stack_b8;
  Il2CppMethodPointer pIStack_b0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_a8;
  InvokerMethod pIStack_a0;
  Il2CppObject *pIStack_98;
  Il2CppClass *pIStack_90;
  Il2CppType *pIStack_88;
  System_Collections_Generic_List_T__o *pSStack_80;
  _union_13 _Stack_78;
  _union_14 _Stack_70;
  System_FormatException_o *pSStack_68;
  
  if (g_data_057ae99d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&"profile");
    g_data_057ae99d = '\x01';
  }
  pMVar18 = (MethodInfo *)0x0;
  pSVar11 = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
  pAVar12 = ApplicationManagers_AccountLoginResponse__Parse(pSVar11,pMVar18);
  if (pAVar12 == (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    uVar15 = il2cpp_runtime_helper_023445d0(&TypeInfo_FormatException);
    __this_03 = (System_FormatException_o *)il2cpp_runtime_helper_023052d0(uVar15);
    pSVar14 = (System_String_o *)il2cpp_runtime_helper_023445d0(&"Missing login response payload.");
    System_FormatException___ctor_3c9afc0(__this_03,pSVar14,(MethodInfo *)0x0);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_ApplyAuthResponse);
    a = __this_03;
    il2cpp_runtime_helper_022b2b10();
    pSStack_68 = __this_03;
    if (g_data_057ae9c2 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ae9c2 = '\x01';
    }
    ppIVar27 = (Il2CppType **)0x0;
    _Var29.rgctx_data = (Il2CppRGCTXData *)0x0;
    pIVar25 = (Il2CppClass *)0x0;
    pIVar26 = (Il2CppType *)0x0;
    pIVar22 = (InvokerMethod)0x0;
    pcVar23 = (char *)0x0;
    pIVar19 = (Il2CppMethodPointer)0x0;
    pIVar20 = (Il2CppMethodPointer)0x0;
    _Var30.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
    pSStack_80 = (System_Collections_Generic_List_T__o *)0x0;
    _Stack_78.rgctx_data = (Il2CppRGCTXData *)0x0;
    pIStack_90 = (Il2CppClass *)0x0;
    pIStack_88 = (Il2CppType *)0x0;
    pIStack_a0 = (InvokerMethod)0x0;
    pIStack_98 = (Il2CppObject *)0x0;
    pIStack_b0 = (Il2CppMethodPointer)0x0;
    pSStack_a8 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    _Stack_70.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar18 = (MethodInfo *)0x0;
    bVar10 = SimpleJSONFixed_JSONNode__op_Equality
                       ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      return;
    }
    pAVar16 = ApplicationManagers_AccountLoginResponse_ProfileData__Parse
                        ((SimpleJSONFixed_JSONNode_o *)a,pMVar18);
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae0d4 != '\0') goto label_044a2d93;
label_044a2dfa:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae0d4 = '\x01';
      if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) != 0) goto label_044a2d9f;
label_044a2e19:
      il2cpp_runtime_helper_02337ed0();
      lVar3 = *(long *)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x38);
    }
    else {
      if (g_data_057ae0d4 == '\0') goto label_044a2dfa;
label_044a2d93:
      if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) goto label_044a2e19;
label_044a2d9f:
      lVar3 = *(long *)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x38);
    }
    if (lVar3 != 0) {
      if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057ae0d4 != '\0') goto label_044a2dc3;
label_044a2e3f:
        il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
        g_data_057ae0d4 = '\x01';
        if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) != 0) goto label_044a2dd3;
label_044a2e62:
        il2cpp_runtime_helper_02337ed0();
        lVar3 = *(long *)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x38);
      }
      else {
        if (g_data_057ae0d4 == '\0') goto label_044a2e3f;
label_044a2dc3:
        if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) goto label_044a2e62;
label_044a2dd3:
        lVar3 = *(long *)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x38);
      }
      if (lVar3 == 0) goto label_044a336a;
      *(ApplicationManagers_AccountLoginResponse_ProfileData_o **)(lVar3 + 0x48) = pAVar16;
      il2cpp_runtime_helper_022b4080(lVar3 + 0x48,pAVar16);
    }
    if (pAVar16 == (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0) goto label_044a336a;
    pSVar14 = (pAVar16->fields).Description;
    if (pSVar14 == (System_String_o *)0x0) {
      pSVar14 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
      if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) != 0) goto label_044a2eb4;
label_044a2ffd:
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057aea26 != '\0') goto label_044a2ec1;
label_044a300f:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057aea26 = '\x01';
      iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
    }
    else {
      if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) goto label_044a2ffd;
label_044a2eb4:
      if (g_data_057aea26 == '\0') goto label_044a300f;
label_044a2ec1:
      iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
    }
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar4 = TypeInfo_AccountManager[2].virtualMethodPointer;
    *(System_String_o **)(pIVar4 + 0x90) = pSVar14;
    il2cpp_runtime_helper_022b4080(pIVar4 + 0x90,pSVar14);
    pSVar14 = (pAVar16->fields).AvatarKey;
    if (pSVar14 == (System_String_o *)0x0) {
      pSVar14 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
      if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) != 0) goto label_044a2f0b;
label_044a3067:
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057aea27 != '\0') goto label_044a2f18;
label_044a3079:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057aea27 = '\x01';
      iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
    }
    else {
      if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) goto label_044a3067;
label_044a2f0b:
      if (g_data_057aea27 == '\0') goto label_044a3079;
label_044a2f18:
      iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
    }
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar4 = TypeInfo_AccountManager[2].virtualMethodPointer;
    *(System_String_o **)(pIVar4 + 0x98) = pSVar14;
    il2cpp_runtime_helper_022b4080(pIVar4 + 0x98,pSVar14);
    pSVar14 = (pAVar16->fields).BannerKey;
    if (pSVar14 == (System_String_o *)0x0) {
      pSVar14 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
      if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) != 0) goto label_044a2f62;
label_044a30d1:
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057aea28 != '\0') goto label_044a2f6f;
label_044a30e3:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057aea28 = '\x01';
      iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
    }
    else {
      if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) goto label_044a30d1;
label_044a2f62:
      if (g_data_057aea28 == '\0') goto label_044a30e3;
label_044a2f6f:
      iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
    }
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar4 = TypeInfo_AccountManager[2].virtualMethodPointer;
    *(System_String_o **)(pIVar4 + 0xa0) = pSVar14;
    il2cpp_runtime_helper_022b4080(pIVar4 + 0xa0,pSVar14);
    if (g_data_057aea29 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057aea29 = '\x01';
      if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) != 0) goto label_044a2fb9;
label_044a3136:
      il2cpp_runtime_helper_02337ed0();
      pMVar18 = *(MethodInfo **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0xa8);
    }
    else {
      if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) goto label_044a3136;
label_044a2fb9:
      pMVar18 = *(MethodInfo **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0xa8);
    }
    if (pMVar18 != (MethodInfo *)0x0) {
      System_Collections_Generic_Dictionary_object__object___Clear
                ((System_Collections_Generic_Dictionary_object__object__o *)pMVar18,MethodInfo_Void_Clear);
      ApplicationManagers_AccountManager__MarkOwnProfileCacheFresh(pMVar18);
      pSVar11 = (pAVar16->fields).Socials;
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar10 = SimpleJSONFixed_JSONNode__op_Equality(pSVar11,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar10 == '\0') {
        if (pSVar11 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_044a336a;
        SimpleJSONFixed_JSONNode__get_Keys
                  ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&pIStack_f8,pSVar11,(MethodInfo *)0x0);
        _Stack_70.genericMethod = _Stack_b8.genericMethod;
        pSStack_80 = pSStack_c8;
        _Stack_78.methodMetadataHandle = _Stack_c0.methodMetadataHandle;
        pIStack_90 = pIStack_d8;
        pIStack_88 = pIStack_d0;
        pIStack_a0 = pIStack_e8;
        pIStack_98 = pIStack_e0;
        pIStack_b0 = pIStack_f8;
        pSStack_a8 = pSStack_f0;
        __this.fields.m_Enumerator.fields.m_Object.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar20;
        __this.fields.m_Enumerator.fields._0_8_ = pIVar19;
        __this.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar22;
        __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar23;
        __this.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar25;
        __this.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar26;
        __this.fields.m_Enumerator.fields.m_Array.fields._list =
             (System_Collections_Generic_List_T__o *)ppIVar27;
        __this.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var29.rgctx_data;
        __this.fields.m_Enumerator.fields.m_Array.fields._current = _Var30.genericMethod;
        SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                  ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&pIStack_f8,__this,(MethodInfo *)&pIStack_b0);
        __this_00.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSStack_f0;
        __this_00.fields.m_Enumerator.fields._0_8_ = pIStack_f8;
        __this_00.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIStack_e8;
        __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIStack_e0;
        __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
             (Il2CppObject *)pIStack_d8;
        __this_00.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIStack_d0;
        __this_00.fields.m_Enumerator.fields.m_Array.fields._list = pSStack_c8;
        __this_00.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Stack_c0.rgctx_data;
        __this_00.fields.m_Enumerator.fields.m_Array.fields._current = _Stack_b8.genericMethod;
        bVar10 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                           (__this_00,(MethodInfo *)&stack0xfffffffffffffec0);
        cVar9 = (char)bVar10;
        pIVar19 = pIStack_f8;
        pSVar21 = pSStack_f0;
        pIVar22 = pIStack_e8;
        pIVar24 = pIStack_e0;
        pIVar25 = pIStack_d8;
        pIVar26 = pIStack_d0;
        pSVar28 = pSStack_c8;
        _Var29 = _Stack_c0;
        _Var30 = _Stack_b8;
        while (cVar9 != '\0') {
          __this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar21;
          __this_02.fields.m_Enumerator.fields._0_8_ = pIVar19;
          __this_02.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar22;
          __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar24;
          __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar25
          ;
          __this_02.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar26;
          __this_02.fields.m_Enumerator.fields.m_Array.fields._list = pSVar28;
          __this_02.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var29.rgctx_data;
          __this_02.fields.m_Enumerator.fields.m_Array.fields._current = _Var30.genericMethod;
          pSVar14 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                              (__this_02,(MethodInfo *)&stack0xfffffffffffffec0);
          plVar17 = (long *)(*(pSVar11->klass->vtable)._7_get_Item.methodPtr)
                                      (pSVar11,pSVar14,(pSVar11->klass->vtable)._7_get_Item.method);
          if (plVar17 == (long *)0x0) goto label_044a336a;
          value = (System_String_o *)(**(code **)(*plVar17 + 0x1c8))(plVar17);
          bVar10 = System_String__IsNullOrWhiteSpace(pSVar14,(MethodInfo *)0x0);
          if (((char)bVar10 == '\0') &&
             (bVar10 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0), (char)bVar10 == '\0')) {
            if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
              il2cpp_runtime_helper_02337ed0();
              if (g_data_057aea29 != '\0') goto label_044a330c;
label_044a332c:
              il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
              g_data_057aea29 = '\x01';
              iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
            }
            else {
              if (g_data_057aea29 == '\0') goto label_044a332c;
label_044a330c:
              iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
            }
            if (iVar2 == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            if (*(System_Collections_Generic_Dictionary_object__object__o **)
                 (TypeInfo_AccountManager[2].virtualMethodPointer + 0xa8) ==
                (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044a336a;
            System_Collections_Generic_Dictionary_object__object___set_Item
                      (*(System_Collections_Generic_Dictionary_object__object__o **)
                        (TypeInfo_AccountManager[2].virtualMethodPointer + 0xa8),(Il2CppObject *)pSVar14,
                       (Il2CppObject *)value,MethodInfo_Void_set_Item);
          }
          __this_01.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar21;
          __this_01.fields.m_Enumerator.fields._0_8_ = pIVar19;
          __this_01.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar22;
          __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar24;
          __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar25
          ;
          __this_01.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar26;
          __this_01.fields.m_Enumerator.fields.m_Array.fields._list = pSVar28;
          __this_01.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var29.rgctx_data;
          __this_01.fields.m_Enumerator.fields.m_Array.fields._current = _Var30.genericMethod;
          bVar10 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                             (__this_01,(MethodInfo *)&stack0xfffffffffffffec0);
          cVar9 = (char)bVar10;
        }
      }
      return;
    }
label_044a336a:
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae99e == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae99e = '\x01';
      iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
    }
    else {
      iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
    }
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ae9c8 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae9c8 = '\x01';
      iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
    }
    else {
      iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
    }
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pIVar19 = TypeInfo_AccountManager[2].virtualMethodPointer;
    pIVar19[0xb1] = (code)0x0;
    pIVar19[0xc1] = (code)0x0;
    return;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aea20 != '\0') goto label_044a2738;
label_044a2b26:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea20 = '\x01';
    iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
  else {
    if (g_data_057aea20 == '\0') goto label_044a2b26;
label_044a2738:
    iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar19 = TypeInfo_AccountManager[2].virtualMethodPointer;
  *(ApplicationManagers_AccountLoginResponse_o **)(pIVar19 + 0x38) = pAVar12;
  il2cpp_runtime_helper_022b4080(pIVar19 + 0x38,pAVar12);
  pSVar14 = (pAVar12->fields).AccessToken;
  if (g_data_057aea21 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea21 = '\x01';
    iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
  else {
    iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar19 = TypeInfo_AccountManager[2].virtualMethodPointer;
  *(System_String_o **)(pIVar19 + 0x18) = pSVar14;
  il2cpp_runtime_helper_022b4080(pIVar19 + 0x18,pSVar14);
  pSVar14 = (pAVar12->fields).PhotonToken;
  if (g_data_057aea22 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea22 = '\x01';
    iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
  else {
    iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar19 = TypeInfo_AccountManager[2].virtualMethodPointer;
  *(System_String_o **)(pIVar19 + 0x28) = pSVar14;
  il2cpp_runtime_helper_022b4080(pIVar19 + 0x28,pSVar14);
  uVar5 = (pAVar12->fields).AccessTokenExpiresAt.fields._dateTime;
  uVar6 = (pAVar12->fields).AccessTokenExpiresAt.fields._offsetMinutes;
  left.fields._offsetMinutes = uVar6;
  left.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)uVar5;
  if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  iVar13 = 0;
  left.fields._10_6_ = 0;
  bVar10 = System_DateTimeOffset__op_Equality(left,(System_DateTimeOffset_o)ZEXT816(0),(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    pMVar18 = extraout_RDX;
    if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar18 = extraout_RDX_01;
    }
    __this_04.fields._8_8_ = 0;
    __this_04.fields._dateTime.fields._dateData =
         (System_DateTime_Fields)(System_DateTime_Fields)&(pAVar12->fields).AccessTokenExpiresAt;
    iVar13 = System_DateTimeOffset__ToUnixTimeSeconds(__this_04,pMVar18);
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) != 0) goto label_044a2824;
label_044a29c4:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aea23 != '\0') goto label_044a2831;
label_044a29d6:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea23 = '\x01';
    iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
  else {
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) goto label_044a29c4;
label_044a2824:
    if (g_data_057aea23 == '\0') goto label_044a29d6;
label_044a2831:
    iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  *(int64_t *)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x20) = iVar13;
  uVar7 = (pAVar12->fields).PhotonTokenExpiresAt.fields._dateTime;
  uVar8 = (pAVar12->fields).PhotonTokenExpiresAt.fields._offsetMinutes;
  left_00.fields._offsetMinutes = uVar8;
  left_00.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)uVar7;
  if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar14 = (System_String_o *)0x0;
  left_00.fields._10_6_ = 0;
  bVar10 = System_DateTimeOffset__op_Equality(left_00,(System_DateTimeOffset_o)ZEXT816(0),(MethodInfo *)0x0);
  if ((char)bVar10 == '\0') {
    pMVar18 = extraout_RDX_00;
    if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar18 = extraout_RDX_02;
    }
    __this_05.fields._8_8_ = 0;
    __this_05.fields._dateTime.fields._dateData =
         (System_DateTime_Fields)(System_DateTime_Fields)&(pAVar12->fields).PhotonTokenExpiresAt;
    pSVar14 = (System_String_o *)System_DateTimeOffset__ToUnixTimeSeconds(__this_05,pMVar18);
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) != 0) goto label_044a289d;
label_044a2a45:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aea24 != '\0') goto label_044a28aa;
label_044a2a57:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea24 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) != 0) goto label_044a28bb;
label_044a2a7b:
    il2cpp_runtime_helper_02337ed0();
    *(System_String_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x30) = pSVar14;
    if (pSVar11 != (SimpleJSONFixed_JSONNode_o *)0x0) goto label_044a28cf;
label_044a2a98:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) goto label_044a2a45;
label_044a289d:
    if (g_data_057aea24 == '\0') goto label_044a2a57;
label_044a28aa:
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) goto label_044a2a7b;
label_044a28bb:
    *(System_String_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x30) = pSVar14;
    if (pSVar11 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_044a2a98;
label_044a28cf:
    pSVar14 = (pAVar12->fields).RefreshToken;
    pSVar11 = (SimpleJSONFixed_JSONNode_o *)
              (*(pSVar11->klass->vtable)._7_get_Item.methodPtr)
                        (pSVar11,"profile",(pSVar11->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pMVar18 = (MethodInfo *)0x0;
    bVar10 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar11,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_AccountManager__ApplyProfileResponse(pSVar11,pMVar18);
    }
    bVar10 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
      goto joined_r0x044a2b09;
    }
  }
  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar19 = TypeInfo_AccountManager[2].virtualMethodPointer;
  *(System_String_o **)(pIVar19 + 0x60) = pSVar14;
  il2cpp_runtime_helper_022b4080(pIVar19 + 0x60,pSVar14);
  if (g_data_057ae57f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae57f = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) != 0) goto label_044a2ae8;
label_044a2be0:
    il2cpp_runtime_helper_02337ed0();
    cVar1 = TypeInfo_AccountManager[2].virtualMethodPointer[0x49];
    pMVar18 = TypeInfo_AccountManager;
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
  }
  else {
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) goto label_044a2be0;
label_044a2ae8:
    cVar1 = TypeInfo_AccountManager[2].virtualMethodPointer[0x49];
    pMVar18 = TypeInfo_AccountManager;
  }
  if (cVar1 == (code)0x0) {
    ApplicationManagers_AccountManager__DeleteRefreshToken(pMVar18);
    iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
  else {
    ApplicationManagers_AccountManager__SaveRefreshToken(pMVar18);
    iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
joined_r0x044a2b09:
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x70);
  }
  else {
    lVar3 = *(long *)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x70);
  }
  if (lVar3 == 0) {
    return;
  }
  (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
  return;
}


// ApplicationManagers.AccountManager$$OnPreLoadScene
// il2cpp: void ApplicationManagers_AccountManager__OnPreLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x44a3370

void ApplicationManagers_AccountManager__OnPreLoadScene(int32_t sceneName,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (g_data_057ae99e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae99e = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ae9c8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae9c8 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(undefined1 *)(lVar2 + 0xb1) = 0;
  *(undefined1 *)(lVar2 + 0xc1) = 0;
  return;
}


// ApplicationManagers.AccountManager$$ParseIsoToUnix
// il2cpp: int64_t ApplicationManagers_AccountManager__ParseIsoToUnix (System_String_o* iso, const MethodInfo* method);
// 0x44a3470

int64_t ApplicationManagers_AccountManager__ParseIsoToUnix(System_String_o *iso,MethodInfo *method)

{
  bool_conflict bVar1;
  System_DateTime_o d1;
  int64_t iVar2;
  double dVar3;
  System_DateTime_Fields SStack_28;
  System_TimeSpan_Fields SStack_20;
  System_DateTime_Fields SStack_18;
  
  if (cRam00000000057ae99f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTime);
    il2cpp_runtime_helper_023445d0(&TypeInfo_TimeSpan);
    cRam00000000057ae99f = '\x01';
  }
  SStack_18._dateData = 0;
  SStack_20._ticks = 0;
  iVar2 = 0;
  bVar1 = System_String__IsNullOrEmpty(iso,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    SStack_18._dateData =
         (uint64_t)System_DateTime__Parse_3c92f10(iso,(System_IFormatProvider_o *)0x0,0x80,(MethodInfo *)0x0);
    d1 = System_DateTime__ToUniversalTime((System_DateTime_o)&SStack_18,(MethodInfo *)0x0);
    SStack_28._dateData = 0;
    System_DateTime___ctor_3c903a0((System_DateTime_o)&SStack_28,0x7b2,1,1,0,0,0,1,(MethodInfo *)0x0);
    SStack_20._ticks =
         (int64_t)System_DateTime__op_Subtraction_3c94570
                            (d1,(System_DateTime_o)SStack_28._dateData,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    dVar3 = System_TimeSpan__get_TotalSeconds((System_TimeSpan_o)&SStack_20,(MethodInfo *)0x0);
    iVar2 = (int64_t)dVar3;
  }
  return iVar2;
}


// ApplicationManagers.AccountManager$$ClearSession
// il2cpp: void ApplicationManagers_AccountManager__ClearSession (bool clearRefreshToken, const MethodInfo* method);
// 0x44a07b0

void ApplicationManagers_AccountManager__ClearSession(bool_conflict clearRefreshToken,MethodInfo *method)

{
  int iVar1;
  undefined8 uVar2;
  byte bVar3;
  bool_conflict bVar4;
  long lVar5;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  long lVar6;
  MethodInfo *pMVar7;
  
  if (g_data_057ae9a0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae9a0 = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_044a07db;
label_044a09fb:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae971 != '\0') goto label_044a07e8;
label_044a0a0d:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae971 = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_044a07f8;
label_044a0a30:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aea19 != '\0') goto label_044a0805;
label_044a0a42:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea19 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_044a09fb;
label_044a07db:
    if (g_data_057ae971 == '\0') goto label_044a0a0d;
label_044a07e8:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_044a0a30;
label_044a07f8:
    if (g_data_057aea19 == '\0') goto label_044a0a42;
label_044a0805:
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x18),(MethodInfo *)0x0);
  bVar3 = 1;
  if ((char)bVar4 == '\0') {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    goto joined_r0x044a0ac0;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae972 != '\0') goto label_044a0a8f;
label_044a0d07:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae972 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (g_data_057ae972 == '\0') goto label_044a0d07;
label_044a0a8f:
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x60),(MethodInfo *)0x0);
  bVar3 = (byte)bVar4 ^ 1;
  iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
joined_r0x044a0ac0:
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aea21 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea21 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar6 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(undefined8 *)(lVar6 + 0x18) = 0;
  il2cpp_runtime_helper_022b4080(lVar6 + 0x18,0);
  if (g_data_057aea23 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea23 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    lVar6 = TypeInfo_AccountManager;
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    lVar6 = TypeInfo_AccountManager;
  }
  TypeInfo_AccountManager = lVar6;
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar6 = TypeInfo_AccountManager;
    *(undefined8 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x20) = 0;
  }
  else {
    *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x20) = 0;
  }
  if (g_data_057aea22 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea22 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    lVar6 = TypeInfo_AccountManager;
  }
  else {
    iVar1 = *(int *)(lVar6 + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar6 = TypeInfo_AccountManager;
  }
  lVar6 = *(long *)(lVar6 + 0xb8);
  *(undefined8 *)(lVar6 + 0x28) = 0;
  il2cpp_runtime_helper_022b4080(lVar6 + 0x28,0);
  if (g_data_057aea24 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea24 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    lVar6 = TypeInfo_AccountManager;
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    lVar6 = TypeInfo_AccountManager;
  }
  TypeInfo_AccountManager = lVar6;
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar6 = TypeInfo_AccountManager;
    *(undefined8 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x30) = 0;
  }
  else {
    *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x30) = 0;
  }
  if (g_data_057aea20 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea20 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    lVar6 = TypeInfo_AccountManager;
  }
  else {
    iVar1 = *(int *)(lVar6 + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar6 = TypeInfo_AccountManager;
  }
  lVar6 = *(long *)(lVar6 + 0xb8);
  *(undefined8 *)(lVar6 + 0x38) = 0;
  pMVar7 = (MethodInfo *)(lVar6 + 0x38);
  il2cpp_runtime_helper_022b4080(pMVar7,0);
  ApplicationManagers_AccountManager__ClearProfileResponse(pMVar7);
  if (g_data_057aea25 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea25 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    lVar6 = TypeInfo_AccountManager;
    uVar2 = extraout_RDX_00;
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    lVar6 = TypeInfo_AccountManager;
    uVar2 = extraout_RDX;
  }
  TypeInfo_AccountManager = lVar6;
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar6 = TypeInfo_AccountManager;
    lVar5 = *(long *)(TypeInfo_AccountManager + 0xb8);
    *(undefined8 *)(lVar5 + 0x40) = 0;
    uVar2 = extraout_RDX_01;
  }
  else {
    lVar5 = *(long *)(lVar6 + 0xb8);
    *(undefined8 *)(lVar5 + 0x40) = 0;
  }
  if ((char)clearRefreshToken == '\0') {
    iVar1 = *(int *)(lVar6 + 0xe4);
  }
  else {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar5 = *(long *)(TypeInfo_AccountManager + 0xb8);
    }
    *(undefined8 *)(lVar5 + 0x60) = 0;
    pMVar7 = (MethodInfo *)(lVar5 + 0x60);
    il2cpp_runtime_helper_022b4080(pMVar7,0);
    ApplicationManagers_AccountManager__DeleteRefreshToken(pMVar7);
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    uVar2 = extraout_RDX_02;
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    uVar2 = extraout_RDX_03;
  }
  if (g_data_057aea1d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea1d = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    lVar6 = TypeInfo_AccountManager;
    uVar2 = extraout_RDX_04;
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    lVar6 = TypeInfo_AccountManager;
  }
  TypeInfo_AccountManager = lVar6;
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar6 = TypeInfo_AccountManager;
    lVar5 = *(long *)(TypeInfo_AccountManager + 0xb8);
    *(undefined1 *)(lVar5 + 0x48) = 0;
    uVar2 = extraout_RDX_05;
  }
  else {
    lVar5 = *(long *)(lVar6 + 0xb8);
    *(undefined1 *)(lVar5 + 0x48) = 0;
  }
  if (bVar3 != 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar6 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x78);
      uVar2 = extraout_RDX_06;
    }
    else {
      lVar6 = *(long *)(lVar5 + 0x78);
    }
    if (lVar6 != 0) {
      (**(code **)(lVar6 + 0x18))
                (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28),uVar2,*(code **)(lVar6 + 0x18));
      return;
    }
  }
  return;
}


// ApplicationManagers.AccountManager$$GetRefreshTokenPath
// il2cpp: System_String_o* ApplicationManagers_AccountManager__GetRefreshTokenPath (const MethodInfo* method);
// 0x449f1a0

System_String_o * ApplicationManagers_AccountManager__GetRefreshTokenPath(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (g_data_057ae9a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    il2cpp_runtime_helper_023445d0(&"/AccountRefresh.dat");
    g_data_057ae9a1 = '\x01';
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = System_String__Concat_3ae5ba0
                     (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x30),"/AccountRefresh.dat",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// ApplicationManagers.AccountManager$$SaveRefreshToken
// il2cpp: void ApplicationManagers_AccountManager__SaveRefreshToken (const MethodInfo* method);
// 0x449fba0

void ApplicationManagers_AccountManager__SaveRefreshToken(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *path;
  
  if (g_data_057ae9a2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DeviceLockedEncryption);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    g_data_057ae9a2 = '\x01';
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  System_IO_Directory__CreateDirectory
            (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x30),(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x60);
  if (*(int *)(TypeInfo_DeviceLockedEncryption + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar1 = Utility_DeviceLockedEncryption__Encrypt(pSVar1,(MethodInfo *)0x0);
  if (g_data_057ae9a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    il2cpp_runtime_helper_023445d0(&"/AccountRefresh.dat");
    g_data_057ae9a1 = '\x01';
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  path = System_String__Concat_3ae5ba0
                   (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x30),"/AccountRefresh.dat",
                    (MethodInfo *)0x0);
  System_IO_File__WriteAllText(path,pSVar1,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager$$LoadRefreshToken
// il2cpp: void ApplicationManagers_AccountManager__LoadRefreshToken (const MethodInfo* method);
// 0x449f210

void ApplicationManagers_AccountManager__LoadRefreshToken(MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  
  if (g_data_057ae9a3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_DeviceLockedEncryption);
    g_data_057ae9a3 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ae9a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    il2cpp_runtime_helper_023445d0(&"/AccountRefresh.dat");
    g_data_057ae9a1 = '\x01';
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = System_String__Concat_3ae5ba0
                     (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x30),"/AccountRefresh.dat",
                      (MethodInfo *)0x0);
  bVar2 = System_IO_File__Exists(pSVar3,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pSVar3 = System_IO_File__ReadAllText(pSVar3,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_DeviceLockedEncryption + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar3 = Utility_DeviceLockedEncryption__Decrypt(pSVar3,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar1 = *(long *)(TypeInfo_AccountManager + 0xb8);
    *(System_String_o **)(lVar1 + 0x60) = pSVar3;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x60,pSVar3);
  }
  return;
}


// ApplicationManagers.AccountManager$$DeleteRefreshToken
// il2cpp: void ApplicationManagers_AccountManager__DeleteRefreshToken (const MethodInfo* method);
// 0x449fa60

void ApplicationManagers_AccountManager__DeleteRefreshToken(MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *path;
  
  if (g_data_057ae9a4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae9a4 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057ae9a1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_FolderPaths);
    il2cpp_runtime_helper_023445d0(&"/AccountRefresh.dat");
    g_data_057ae9a1 = '\x01';
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  path = System_String__Concat_3ae5ba0
                   (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x30),"/AccountRefresh.dat",
                    (MethodInfo *)0x0);
  bVar1 = System_IO_File__Exists(path,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    System_IO_File__Delete(path,(MethodInfo *)0x0);
  }
  return;
}


// ApplicationManagers.AccountManager$$LoginWithOAuth
// il2cpp: void ApplicationManagers_AccountManager__LoginWithOAuth (System_String_o* provider, System_Action_bool__string__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x44a3890

void ApplicationManagers_AccountManager__LoginWithOAuth
               (System_String_o *provider,System_Action_bool__string__o *onComplete,
               bool_conflict reportNetworkError,MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  UnityEngine_MonoBehaviour_o *pUVar3;
  void *pvVar4;
  long lVar5;
  Il2CppObject *pIVar6;
  UnityEngine_MonoBehaviour_c *pUVar7;
  undefined1 uVar8;
  undefined4 extraout_EDX;
  Il2CppClass *pIVar9;
  Il2CppObject *pIVar10;
  
  uVar8 = SUB81(method,0);
  pIVar9 = (Il2CppClass *)onComplete;
  if (g_data_057ae9a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae9a5 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[0xe].klass + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[0xe].klass + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pUVar3 = *(UnityEngine_MonoBehaviour_o **)TypeInfo_AccountManager[0xb].monitor;
    pIVar10 = TypeInfo_AccountManager;
  }
  else {
    pUVar3 = *(UnityEngine_MonoBehaviour_o **)TypeInfo_AccountManager[0xb].monitor;
    pIVar10 = TypeInfo_AccountManager;
  }
  TypeInfo_AccountManager = pIVar10;
  if (pUVar3 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if (g_data_057ae9aa == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae9aa = '\x01';
    }
    if (pUVar3[1].klass != (UnityEngine_MonoBehaviour_c *)0x0) {
      UnityEngine_MonoBehaviour__StopCoroutine_4dfdad0
                (pUVar3,(UnityEngine_Coroutine_o *)pUVar3[1].klass,(MethodInfo *)0x0);
      pUVar3[1].klass = (UnityEngine_MonoBehaviour_c *)0x0;
      il2cpp_runtime_helper_022b4080(pUVar3 + 1,0);
    }
    if (*(int *)((long)&TypeInfo_AccountManager[0xe].klass + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pvVar4 = TypeInfo_AccountManager[0xb].monitor;
    *(undefined8 *)((long)pvVar4 + 0x88) = 0;
    il2cpp_runtime_helper_022b4080((long)pvVar4 + 0x88,0);
    *(int *)&pUVar3[1].monitor = *(int *)&pUVar3[1].monitor + 1;
    pvVar4 = TypeInfo_AccountManager[0xb].monitor;
    *(System_Action_bool__string__o **)((long)pvVar4 + 0x88) = onComplete;
    pIVar10 = (Il2CppObject *)((long)pvVar4 + 0x88);
    il2cpp_runtime_helper_022b4080();
    pUVar3 = *(UnityEngine_MonoBehaviour_o **)TypeInfo_AccountManager[0xb].monitor;
    pIVar9 = (Il2CppClass *)onComplete;
    if (pUVar3 != (UnityEngine_MonoBehaviour_o *)0x0) {
      uVar2 = *(undefined4 *)&pUVar3[1].monitor;
      if (g_data_057ae9a7 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_OAuthFlow_d__124);
        g_data_057ae9a7 = '\x01';
      }
      pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_OAuthFlow_d__124);
      pIVar9 = (Il2CppClass *)0x0;
      pIVar10 = pIVar6;
      System_Object___ctor(pIVar6,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar6[1].klass = 0;
      if (pIVar6 != (Il2CppObject *)0x0) {
        pIVar6[2].monitor = pUVar3;
        il2cpp_runtime_helper_022b4080(&pIVar6[2].monitor,pUVar3);
        pIVar6[2].klass = (Il2CppClass *)provider;
        il2cpp_runtime_helper_022b4080(pIVar6 + 2,provider);
        *(undefined4 *)((long)&pIVar6[3].klass + 4) = uVar2;
        *(char *)&pIVar6[3].klass = (char)reportNetworkError;
        pUVar7 = (UnityEngine_MonoBehaviour_c *)
                 UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                           (pUVar3,(System_Collections_IEnumerator_o *)pIVar6,(MethodInfo *)0x0);
        pUVar3[1].klass = pUVar7;
        il2cpp_runtime_helper_022b4080(pUVar3 + 1,pUVar7);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae9a7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_OAuthFlow_d__124);
    g_data_057ae9a7 = '\x01';
  }
  pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_OAuthFlow_d__124);
  System_Object___ctor(pIVar6,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar6[1].klass = 0;
  if (pIVar6 == (Il2CppObject *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae9a6 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      il2cpp_runtime_helper_023445d0(&"oauth_denied");
      g_data_057ae9a6 = '\x01';
    }
    if (*(int *)((long)&TypeInfo_AccountManager[0xe].klass + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pUVar3 = *(UnityEngine_MonoBehaviour_o **)TypeInfo_AccountManager[0xb].monitor;
    lVar5 = *(long *)((long)TypeInfo_AccountManager[0xb].monitor + 0x88);
    if (pUVar3 != (UnityEngine_MonoBehaviour_o *)0x0) {
      if (g_data_057ae9aa == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
        g_data_057ae9aa = '\x01';
      }
      if (pUVar3[1].klass != (UnityEngine_MonoBehaviour_c *)0x0) {
        UnityEngine_MonoBehaviour__StopCoroutine_4dfdad0
                  (pUVar3,(UnityEngine_Coroutine_o *)pUVar3[1].klass,(MethodInfo *)0x0);
        pUVar3[1].klass = (UnityEngine_MonoBehaviour_c *)0x0;
        il2cpp_runtime_helper_022b4080(pUVar3 + 1,0);
      }
      if (*(int *)((long)&TypeInfo_AccountManager[0xe].klass + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pvVar4 = TypeInfo_AccountManager[0xb].monitor;
      *(undefined8 *)((long)pvVar4 + 0x88) = 0;
      il2cpp_runtime_helper_022b4080((long)pvVar4 + 0x88,0);
      *(int *)&pUVar3[1].monitor = *(int *)&pUVar3[1].monitor + 1;
    }
    if (lVar5 != 0) {
      (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),0,"oauth_denied",*(undefined8 *)(lVar5 + 0x28));
      return;
    }
    return;
  }
  pIVar6[2].monitor = pIVar10;
  il2cpp_runtime_helper_022b4080(&pIVar6[2].monitor,pIVar10);
  pIVar6[2].klass = pIVar9;
  il2cpp_runtime_helper_022b4080(pIVar6 + 2,pIVar9);
  *(undefined4 *)((long)&pIVar6[3].klass + 4) = extraout_EDX;
  *(undefined1 *)&pIVar6[3].klass = uVar8;
  return;
}


// ApplicationManagers.AccountManager$$CancelOAuthLogin
// il2cpp: void ApplicationManagers_AccountManager__CancelOAuthLogin (const MethodInfo* method);
// 0x44a3b30

void ApplicationManagers_AccountManager__CancelOAuthLogin(MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *__this;
  long lVar1;
  long lVar2;
  
  if (g_data_057ae9a6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&"oauth_denied");
    g_data_057ae9a6 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this = (UnityEngine_MonoBehaviour_o *)**(undefined8 **)(TypeInfo_AccountManager + 0xb8);
  lVar1 = (*(undefined8 **)(TypeInfo_AccountManager + 0xb8))[0x11];
  if (__this != (UnityEngine_MonoBehaviour_o *)0x0) {
    if (g_data_057ae9aa == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae9aa = '\x01';
    }
    if (__this[1].klass != (UnityEngine_MonoBehaviour_c *)0x0) {
      UnityEngine_MonoBehaviour__StopCoroutine_4dfdad0
                (__this,(UnityEngine_Coroutine_o *)__this[1].klass,(MethodInfo *)0x0);
      __this[1].klass = (UnityEngine_MonoBehaviour_c *)0x0;
      il2cpp_runtime_helper_022b4080(__this + 1,0);
    }
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
    *(undefined8 *)(lVar2 + 0x88) = 0;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x88,0);
    *(int *)&__this[1].monitor = *(int *)&__this[1].monitor + 1;
  }
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))(*(undefined8 *)(lVar1 + 0x40),0,"oauth_denied",*(undefined8 *)(lVar1 + 0x28));
    return;
  }
  return;
}


// ApplicationManagers.AccountManager$$OAuthFlow
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__OAuthFlow (ApplicationManagers_AccountManager_o* __this, System_String_o* provider, int32_t attemptId, bool reportNetworkError, const MethodInfo* method);
// 0x44a3a90

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__OAuthFlow
          (ApplicationManagers_AccountManager_o *__this,System_String_o *provider,int32_t attemptId,
          bool_conflict reportNetworkError,MethodInfo *method)

{
  uint *puVar1;
  System_Collections_IEnumerator_c *__this_00;
  void *pvVar2;
  UnityEngine_Coroutine_o *routine;
  long lVar3;
  Il2CppObject *__this_01;
  System_Collections_IEnumerator_o *pSVar4;
  
  if (g_data_057ae9a7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_OAuthFlow_d__124);
    g_data_057ae9a7 = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_OAuthFlow_d__124);
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[2].monitor = __this;
    il2cpp_runtime_helper_022b4080(&__this_01[2].monitor,__this);
    __this_01[2].klass = (Il2CppClass *)provider;
    il2cpp_runtime_helper_022b4080(__this_01 + 2,provider);
    *(int32_t *)((long)&__this_01[3].klass + 4) = attemptId;
    *(char *)&__this_01[3].klass = (char)reportNetworkError;
    return (System_Collections_IEnumerator_o *)__this_01;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae9a6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&"oauth_denied");
    g_data_057ae9a6 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = *(System_Collections_IEnumerator_o **)(TypeInfo_AccountManager + 0xb8);
  __this_00 = pSVar4->klass;
  pvVar2 = pSVar4[8].monitor;
  if (__this_00 != (System_Collections_IEnumerator_c *)0x0) {
    if (g_data_057ae9aa == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae9aa = '\x01';
    }
    routine = (__this_00->_1).byval_arg.data;
    if (routine != (UnityEngine_Coroutine_o *)0x0) {
      UnityEngine_MonoBehaviour__StopCoroutine_4dfdad0
                ((UnityEngine_MonoBehaviour_o *)__this_00,routine,(MethodInfo *)0x0);
      (__this_00->_1).byval_arg.data = (void *)0x0;
      il2cpp_runtime_helper_022b4080(&(__this_00->_1).byval_arg,0);
    }
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar3 = *(long *)(TypeInfo_AccountManager + 0xb8);
    *(undefined8 *)(lVar3 + 0x88) = 0;
    pSVar4 = (System_Collections_IEnumerator_o *)il2cpp_runtime_helper_022b4080(lVar3 + 0x88,0);
    puVar1 = &(__this_00->_1).byval_arg.bits;
    *puVar1 = *puVar1 + 1;
  }
  if (pvVar2 != (void *)0x0) {
    pSVar4 = (System_Collections_IEnumerator_o *)
             (**(code **)((long)pvVar2 + 0x18))
                       (*(undefined8 *)((long)pvVar2 + 0x40),0,"oauth_denied",
                        *(undefined8 *)((long)pvVar2 + 0x28));
    return pSVar4;
  }
  return pSVar4;
}


// ApplicationManagers.AccountManager$$PollUnityOAuth
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__PollUnityOAuth (ApplicationManagers_AccountManager_o* __this, ApplicationManagers_AccountManager_UnityOAuthStart_o start, int32_t attemptId, bool reportNetworkError, const MethodInfo* method);
// 0x44a3c70

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__PollUnityOAuth
          (ApplicationManagers_AccountManager_o *__this,
          ApplicationManagers_AccountManager_UnityOAuthStart_o start,int32_t attemptId,
          bool_conflict reportNetworkError,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057ae9a8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PollUnityOAuth_d__125);
    g_data_057ae9a8 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_PollUnityOAuth_d__125);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[5].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 5,__this);
    *(undefined4 *)&__this_00[4].klass = start.fields.ExpiresAt.fields._8_4_;
    *(undefined4 *)((long)&__this_00[4].klass + 4) = start.fields.ExpiresAt.fields._12_4_;
    *(int32_t *)&__this_00[4].monitor = start.fields.PollIntervalSeconds;
    *(undefined4 *)((long)&__this_00[4].monitor + 4) = start.fields._44_4_;
    *(undefined4 *)&__this_00[3].klass = start.fields.AuthorizationUrl._0_4_;
    *(undefined4 *)((long)&__this_00[3].klass + 4) = start.fields.AuthorizationUrl._4_4_;
    *(undefined4 *)&__this_00[3].monitor =
         (undefined4)start.fields.ExpiresAt.fields._dateTime.fields._dateData;
    *(undefined4 *)((long)&__this_00[3].monitor + 4) =
         start.fields.ExpiresAt.fields._dateTime.fields._dateData._4_4_;
    *(undefined4 *)&__this_00[2].klass = start.fields.SessionId._0_4_;
    *(undefined4 *)((long)&__this_00[2].klass + 4) = start.fields.SessionId._4_4_;
    *(undefined4 *)&__this_00[2].monitor = start.fields.PollToken._0_4_;
    *(undefined4 *)((long)&__this_00[2].monitor + 4) = start.fields.PollToken._4_4_;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,0);
    *(int32_t *)((long)&__this_00[5].monitor + 4) = attemptId;
    *(char *)&__this_00[5].monitor = (char)reportNetworkError;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// ApplicationManagers.AccountManager$$ExchangeOAuthCode
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__ExchangeOAuthCode (ApplicationManagers_AccountManager_o* __this, System_String_o* code, bool reportNetworkError, const MethodInfo* method);
// 0x44a3d40

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__ExchangeOAuthCode
          (ApplicationManagers_AccountManager_o *__this,System_String_o *code,bool_conflict reportNetworkError
          ,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057ae9a9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_ExchangeOAuthCode_d__126);
    g_data_057ae9a9 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_ExchangeOAuthCode_d__126);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,__this);
    __this_00[2].klass = (Il2CppClass *)code;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,code);
    *(char *)&__this_00[3].klass = (char)reportNetworkError;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// ApplicationManagers.AccountManager$$CancelOAuthFlow
// il2cpp: void ApplicationManagers_AccountManager__CancelOAuthFlow (ApplicationManagers_AccountManager_o* __this, const MethodInfo* method);
// 0x44a1d30

void ApplicationManagers_AccountManager__CancelOAuthFlow
               (ApplicationManagers_AccountManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Coroutine_o *routine;
  long lVar2;
  
  if (g_data_057ae9aa == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae9aa = '\x01';
  }
  routine = (__this->fields)._oauthFlowCoroutine;
  if (routine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_4dfdad0
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
    (__this->fields)._oauthFlowCoroutine = (UnityEngine_Coroutine_o *)0x0;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._oauthFlowCoroutine,0);
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(undefined8 *)(lVar2 + 0x88) = 0;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x88,0);
  piVar1 = &(__this->fields)._oauthAttemptId;
  *piVar1 = *piVar1 + 1;
  return;
}


// ApplicationManagers.AccountManager$$IsCurrentOAuthAttempt
// il2cpp: bool ApplicationManagers_AccountManager__IsCurrentOAuthAttempt (ApplicationManagers_AccountManager_o* __this, int32_t attemptId, const MethodInfo* method);
// 0x44a3df0

bool_conflict
ApplicationManagers_AccountManager__IsCurrentOAuthAttempt
          (ApplicationManagers_AccountManager_o *__this,int32_t attemptId,MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ae9ab == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae9ab = '\x01';
    iVar1 = (__this->fields)._oauthAttemptId;
  }
  else {
    iVar1 = (__this->fields)._oauthAttemptId;
  }
  if (iVar1 == attemptId) {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    return (bool_conflict)
           CONCAT71((int7)((ulong)*(long *)(TypeInfo_AccountManager + 0xb8) >> 8),
                    *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88) != 0);
  }
  return 0;
}


// ApplicationManagers.AccountManager$$CompleteOAuth
// il2cpp: void ApplicationManagers_AccountManager__CompleteOAuth (bool success, System_String_o* error, const MethodInfo* method);
// 0x44a3e60

void ApplicationManagers_AccountManager__CompleteOAuth
               (bool_conflict success,System_String_o *error,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  long lVar1;
  long lVar2;
  char cVar3;
  bool_conflict bVar4;
  int iVar5;
  int iVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  long *plVar8;
  System_String_o *pSVar9;
  System_String_o *value;
  System_String_o *value_00;
  System_String_o *value_01;
  undefined8 *puVar10;
  undefined8 *puVar11;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  undefined1 auVar12 [12];
  System_DateTimeOffset_o SVar13;
  System_DateTimeOffset_o __this;
  int16_t iStack_d6;
  undefined4 uStack_c6;
  undefined2 uStack_c2;
  undefined8 uStack_c0;
  undefined8 uStack_b8;
  System_String_o *pSStack_b0;
  uint64_t uStack_a8;
  undefined8 uStack_a0;
  undefined8 uStack_98;
  System_DateTime_Fields SStack_90;
  undefined8 uStack_88;
  System_DateTime_Fields SStack_78;
  System_DateTimeOffset_o SStack_70;
  UnityEngine_Object_o *pUStack_58;
  
  if (g_data_057ae9ac == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057ae9ac = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_AccountManager + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  puVar10 = (undefined8 *)0x0;
  bVar4 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
label_044a3f1c:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar1 = *(long *)(TypeInfo_AccountManager + 0xb8);
    lVar2 = *(long *)(lVar1 + 0x88);
    *(undefined8 *)(lVar1 + 0x88) = 0;
    il2cpp_runtime_helper_022b4080(lVar1 + 0x88,0);
    if (lVar2 != 0) {
      (**(code **)(lVar2 + 0x18))
                (*(undefined8 *)(lVar2 + 0x40),success & 0xff,error,*(undefined8 *)(lVar2 + 0x28));
      return;
    }
    return;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar9 = (System_String_o *)**(long **)(TypeInfo_AccountManager + 0xb8);
  if (pSVar9 != (System_String_o *)0x0) {
    pSVar9[1].monitor = (void *)0x0;
    il2cpp_runtime_helper_022b4080(&pSVar9[1].monitor,0);
    goto label_044a3f1c;
  }
  il2cpp_runtime_helper_022b2c90();
  pUStack_58 = x;
  if (g_data_057ae9ad == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    il2cpp_runtime_helper_023445d0(&"pollToken");
    il2cpp_runtime_helper_023445d0(&"authorizationUrl");
    il2cpp_runtime_helper_023445d0(&"sessionId");
    il2cpp_runtime_helper_023445d0(&"pollIntervalSeconds");
    il2cpp_runtime_helper_023445d0(&"expiresAt");
    g_data_057ae9ad = '\x01';
  }
  SStack_70.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
  SStack_70.fields._offsetMinutes = 0;
  SStack_70.fields._10_6_ = 0;
  SStack_90._dateData = 0;
  uStack_88 = 0;
  uStack_a0 = 0;
  uStack_98 = 0;
  pSStack_b0 = (System_String_o *)0x0;
  uStack_a8 = 0;
  uStack_c0 = (System_String_o *)0x0;
  uStack_b8 = (System_String_o *)0x0;
  puVar10[4] = 0;
  puVar10[5] = 0;
  puVar10[2] = 0;
  puVar10[3] = 0;
  *puVar10 = 0;
  puVar10[1] = 0;
  pSVar7 = SimpleJSONFixed_JSON__Parse(pSVar9,(MethodInfo *)0x0);
  if (pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_044a438b:
    il2cpp_runtime_helper_022b2c90();
label_044a4390:
    il2cpp_runtime_helper_022b2c90();
label_044a4395:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    plVar8 = (long *)(*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar7,"sessionId",(pSVar7->klass->vtable)._7_get_Item.method);
    if (plVar8 == (long *)0x0) goto label_044a438b;
    pSVar9 = (System_String_o *)(**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
    plVar8 = (long *)(*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar7,"pollToken",(pSVar7->klass->vtable)._7_get_Item.method);
    if (plVar8 == (long *)0x0) goto label_044a4390;
    value = (System_String_o *)(**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
    plVar8 = (long *)(*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar7,"authorizationUrl",(pSVar7->klass->vtable)._7_get_Item.method);
    if (plVar8 == (long *)0x0) goto label_044a4395;
    value_00 = (System_String_o *)(**(code **)(*plVar8 + 0x1c8))(plVar8);
    bVar4 = System_String__IsNullOrEmpty(pSVar9,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return;
    }
    bVar4 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return;
    }
    bVar4 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      return;
    }
    if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    SVar13 = System_DateTimeOffset__get_UtcNow((MethodInfo *)0x0);
    SStack_90._dateData = (uint64_t)SVar13.fields._dateTime.fields._dateData;
    uStack_88 = CONCAT26(uStack_c2,CONCAT42(uStack_c6,SVar13.fields._offsetMinutes));
    __this.fields._8_8_ = 0;
    __this.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)&SStack_90;
    SVar13 = System_DateTimeOffset__AddMinutes(__this,10.0,SVar13.fields._8_8_);
    SStack_78._dateData = (uint64_t)SVar13.fields._dateTime.fields._dateData;
    iStack_d6 = SVar13.fields._offsetMinutes;
    plVar8 = (long *)(*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar7,"expiresAt",(pSVar7->klass->vtable)._7_get_Item.method);
    if (plVar8 != (long *)0x0) {
      value_01 = (System_String_o *)(**(code **)(*plVar8 + 0x1c8))(plVar8);
      bVar4 = System_String__IsNullOrEmpty(value_01,(MethodInfo *)0x0);
      if ((char)bVar4 == '\0') {
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar4 = System_DateTimeOffset__TryParse
                          (value_01,(System_IFormatProvider_o *)0x0,0x80,&SStack_70,(MethodInfo *)0x0);
        if ((char)bVar4 != '\0') {
          method_00 = extraout_RDX;
          if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            method_00 = extraout_RDX_00;
          }
          SVar13.fields._8_8_ = 0;
          SVar13.fields._dateTime.fields._dateData =
               (System_DateTime_Fields)(System_DateTime_Fields)&SStack_70;
          SVar13 = System_DateTimeOffset__ToUniversalTime(SVar13,method_00);
          SStack_78._dateData = (uint64_t)SVar13.fields._dateTime.fields._dateData;
          iStack_d6 = SVar13.fields._offsetMinutes;
        }
      }
      plVar8 = (long *)(*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar7,"pollIntervalSeconds",(pSVar7->klass->vtable)._7_get_Item.method);
      if (plVar8 != (long *)0x0) {
        iVar5 = (**(code **)(*plVar8 + 0x368))(plVar8,*(undefined8 *)(*plVar8 + 0x370));
        uStack_a8 = 0;
        uStack_a0 = 0;
        uStack_b8 = (System_String_o *)0x0;
        pSStack_b0 = (System_String_o *)0x0;
        uStack_98 = 0;
        uStack_c0 = pSVar9;
        il2cpp_runtime_helper_022b4080(&uStack_c0,pSVar9);
        uStack_b8 = value;
        il2cpp_runtime_helper_022b4080(&uStack_b8,value);
        pSStack_b0 = value_00;
        il2cpp_runtime_helper_022b4080(&pSStack_b0,value_00);
        uStack_a8 = SStack_78._dateData;
        uStack_a0 = CONCAT26(uStack_c2,CONCAT42(uStack_c6,iStack_d6));
        iVar6 = 2;
        if (0 < iVar5) {
          iVar6 = iVar5;
        }
        uStack_98 = CONCAT44(uStack_98._4_4_,iVar6);
        *(undefined4 *)puVar10 = (undefined4)uStack_c0;
        *(undefined4 *)((long)puVar10 + 4) = uStack_c0._4_4_;
        *(undefined4 *)(puVar10 + 1) = (undefined4)uStack_b8;
        *(undefined4 *)((long)puVar10 + 0xc) = uStack_b8._4_4_;
        puVar10[2] = pSStack_b0;
        puVar10[3] = SStack_78._dateData;
        *(int16_t *)(puVar10 + 4) = iStack_d6;
        *(undefined4 *)((long)puVar10 + 0x22) = uStack_c6;
        *(undefined2 *)((long)puVar10 + 0x26) = uStack_c2;
        *(int *)(puVar10 + 5) = iVar6;
        *(undefined4 *)((long)puVar10 + 0x2c) = uStack_98._4_4_;
        il2cpp_runtime_helper_022b4080(puVar10,0);
        return;
      }
      goto label_044a439f;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_044a439f:
  auVar12 = il2cpp_runtime_helper_022b2c90();
  if (auVar12._8_4_ != 1) {
    _Unwind_Resume(auVar12._0_8_);
  }
  puVar10 = (undefined8 *)__cxa_begin_catch(auVar12._0_8_);
  cVar3 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar10);
  if (cVar3 != '\0') {
    __cxa_end_catch();
    return;
  }
  puVar11 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar11 = *puVar10;
  __cxa_throw(puVar11,&PTR_PTR_05215060,0);
}


// ApplicationManagers.AccountManager$$TryParseUnityOAuthStart
// il2cpp: bool ApplicationManagers_AccountManager__TryParseUnityOAuthStart (System_String_o* json, ApplicationManagers_AccountManager_UnityOAuthStart_o* start, const MethodInfo* method);
// 0x44a3f90

bool_conflict
ApplicationManagers_AccountManager__TryParseUnityOAuthStart
          (System_String_o *json,ApplicationManagers_AccountManager_UnityOAuthStart_o *start,
          MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  int iVar3;
  int iVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  long *plVar6;
  System_String_o *value;
  System_String_o *value_00;
  System_String_o *value_01;
  System_String_o *value_02;
  undefined8 *puVar7;
  undefined8 *puVar8;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  undefined1 auVar9 [12];
  System_DateTimeOffset_o SVar10;
  System_DateTimeOffset_o __this;
  int16_t local_ae;
  undefined4 local_9e;
  undefined2 local_9a;
  undefined8 local_98;
  undefined8 uStack_90;
  System_String_o *local_88;
  uint64_t uStack_80;
  undefined8 local_78;
  undefined8 uStack_70;
  System_DateTime_Fields local_68;
  undefined8 uStack_60;
  System_DateTime_Fields local_50;
  System_DateTimeOffset_o local_48;
  
  if (g_data_057ae9ad == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_DateTimeOffset);
    il2cpp_runtime_helper_023445d0(&"pollToken");
    il2cpp_runtime_helper_023445d0(&"authorizationUrl");
    il2cpp_runtime_helper_023445d0(&"sessionId");
    il2cpp_runtime_helper_023445d0(&"pollIntervalSeconds");
    il2cpp_runtime_helper_023445d0(&"expiresAt");
    g_data_057ae9ad = '\x01';
  }
  local_48.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
  local_48.fields._offsetMinutes = 0;
  local_48.fields._10_6_ = 0;
  local_68._dateData = 0;
  uStack_60 = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = (System_String_o *)0x0;
  uStack_80 = 0;
  local_98 = (System_String_o *)0x0;
  uStack_90 = (System_String_o *)0x0;
  *(undefined8 *)&(start->fields).ExpiresAt.fields._offsetMinutes = 0;
  *(undefined8 *)&(start->fields).PollIntervalSeconds = 0;
  (start->fields).AuthorizationUrl = (System_String_o *)0x0;
  (start->fields).ExpiresAt.fields._dateTime.fields._dateData = 0;
  (start->fields).SessionId = (System_String_o *)0x0;
  (start->fields).PollToken = (System_String_o *)0x0;
  pSVar5 = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
  if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_044a438b:
    il2cpp_runtime_helper_022b2c90();
label_044a4390:
    il2cpp_runtime_helper_022b2c90();
label_044a4395:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    plVar6 = (long *)(*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar5,"sessionId",(pSVar5->klass->vtable)._7_get_Item.method);
    if (plVar6 == (long *)0x0) goto label_044a438b;
    value = (System_String_o *)(**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
    plVar6 = (long *)(*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar5,"pollToken",(pSVar5->klass->vtable)._7_get_Item.method);
    if (plVar6 == (long *)0x0) goto label_044a4390;
    value_00 = (System_String_o *)(**(code **)(*plVar6 + 0x1c8))(plVar6,*(undefined8 *)(*plVar6 + 0x1d0));
    plVar6 = (long *)(*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar5,"authorizationUrl",(pSVar5->klass->vtable)._7_get_Item.method);
    if (plVar6 == (long *)0x0) goto label_044a4395;
    value_01 = (System_String_o *)(**(code **)(*plVar6 + 0x1c8))(plVar6);
    bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if ((((char)bVar2 != '\0') ||
        (bVar2 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0), (char)bVar2 != '\0')) ||
       (bVar2 = System_String__IsNullOrEmpty(value_01,(MethodInfo *)0x0), (char)bVar2 != '\0')) {
      return 0;
    }
    if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    SVar10 = System_DateTimeOffset__get_UtcNow((MethodInfo *)0x0);
    local_68._dateData = (uint64_t)SVar10.fields._dateTime.fields._dateData;
    uStack_60 = CONCAT26(local_9a,CONCAT42(local_9e,SVar10.fields._offsetMinutes));
    __this.fields._8_8_ = 0;
    __this.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)&local_68;
    SVar10 = System_DateTimeOffset__AddMinutes(__this,10.0,SVar10.fields._8_8_);
    local_50._dateData = (uint64_t)SVar10.fields._dateTime.fields._dateData;
    local_ae = SVar10.fields._offsetMinutes;
    plVar6 = (long *)(*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar5,"expiresAt",(pSVar5->klass->vtable)._7_get_Item.method);
    if (plVar6 != (long *)0x0) {
      value_02 = (System_String_o *)(**(code **)(*plVar6 + 0x1c8))(plVar6);
      bVar2 = System_String__IsNullOrEmpty(value_02,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar2 = System_DateTimeOffset__TryParse
                          (value_02,(System_IFormatProvider_o *)0x0,0x80,&local_48,(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          method_00 = extraout_RDX;
          if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            method_00 = extraout_RDX_00;
          }
          SVar10.fields._8_8_ = 0;
          SVar10.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)&local_48
          ;
          SVar10 = System_DateTimeOffset__ToUniversalTime(SVar10,method_00);
          local_50._dateData = (uint64_t)SVar10.fields._dateTime.fields._dateData;
          local_ae = SVar10.fields._offsetMinutes;
        }
      }
      plVar6 = (long *)(*(pSVar5->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar5,"pollIntervalSeconds",(pSVar5->klass->vtable)._7_get_Item.method);
      if (plVar6 != (long *)0x0) {
        iVar3 = (**(code **)(*plVar6 + 0x368))(plVar6,*(undefined8 *)(*plVar6 + 0x370));
        uStack_80 = 0;
        local_78 = 0;
        uStack_90 = (System_String_o *)0x0;
        local_88 = (System_String_o *)0x0;
        uStack_70 = 0;
        local_98 = value;
        il2cpp_runtime_helper_022b4080(&local_98,value);
        uStack_90 = value_00;
        il2cpp_runtime_helper_022b4080(&uStack_90,value_00);
        local_88 = value_01;
        il2cpp_runtime_helper_022b4080(&local_88,value_01);
        uStack_80 = local_50._dateData;
        local_78 = CONCAT26(local_9a,CONCAT42(local_9e,local_ae));
        iVar4 = 2;
        if (0 < iVar3) {
          iVar4 = iVar3;
        }
        uStack_70 = CONCAT44(uStack_70._4_4_,iVar4);
        *(undefined4 *)&(start->fields).SessionId = (undefined4)local_98;
        *(undefined4 *)((long)&(start->fields).SessionId + 4) = local_98._4_4_;
        *(undefined4 *)&(start->fields).PollToken = (undefined4)uStack_90;
        *(undefined4 *)((long)&(start->fields).PollToken + 4) = uStack_90._4_4_;
        (start->fields).AuthorizationUrl = local_88;
        (start->fields).ExpiresAt.fields._dateTime.fields._dateData = local_50._dateData;
        (start->fields).ExpiresAt.fields._offsetMinutes = local_ae;
        *(undefined4 *)&(start->fields).ExpiresAt.fields.field_0xa = local_9e;
        *(undefined2 *)&(start->fields).ExpiresAt.fields.field_0xe = local_9a;
        (start->fields).PollIntervalSeconds = iVar4;
        *(undefined4 *)&(start->fields).field_0x2c = uStack_70._4_4_;
        il2cpp_runtime_helper_022b4080(start,0);
        return (bool_conflict)CONCAT71((uint7)(uint3)((uint)iVar3 >> 8),1);
      }
      goto label_044a439f;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_044a439f:
  auVar9 = il2cpp_runtime_helper_022b2c90();
  if (auVar9._8_4_ != 1) {
    _Unwind_Resume(auVar9._0_8_);
  }
  puVar7 = (undefined8 *)__cxa_begin_catch(auVar9._0_8_);
  cVar1 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar7);
  if (cVar1 != '\0') {
    __cxa_end_catch();
    return 0;
  }
  puVar8 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar8 = *puVar7;
  __cxa_throw(puVar8,&PTR_PTR_05215060,0);
}


// ApplicationManagers.AccountManager$$TryParseUnityOAuthStatus
// il2cpp: bool ApplicationManagers_AccountManager__TryParseUnityOAuthStatus (System_String_o* json, System_String_o** status, System_String_o** code, System_String_o** error, const MethodInfo* method);
// 0x44a4590

bool_conflict
ApplicationManagers_AccountManager__TryParseUnityOAuthStatus
          (System_String_o *json,System_String_o **status,System_String_o **code,System_String_o **error,
          MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  uint uVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  long *plVar5;
  System_String_o *pSVar6;
  undefined8 *puVar7;
  undefined8 *puVar8;
  undefined1 auVar9 [12];
  
  if (g_data_057ae9ae == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&"code");
    il2cpp_runtime_helper_023445d0(&"error");
    il2cpp_runtime_helper_023445d0(&"status");
    g_data_057ae9ae = '\x01';
  }
  *status = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b4080(status);
  *code = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b4080(code);
  *error = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b4080(error);
  pSVar4 = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
  if (pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
label_044a478d:
    il2cpp_runtime_helper_022b2c90();
label_044a4792:
    il2cpp_runtime_helper_022b2c90();
label_044a4797:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    plVar5 = (long *)(*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar4,"status",(pSVar4->klass->vtable)._7_get_Item.method);
    if (plVar5 == (long *)0x0) goto label_044a478d;
    pSVar6 = (System_String_o *)(**(code **)(*plVar5 + 0x1c8))(plVar5);
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar2 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      pSVar6 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
label_044a46d5:
      *status = pSVar6;
      il2cpp_runtime_helper_022b4080(status);
      plVar5 = (long *)(*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar4,"code",(pSVar4->klass->vtable)._7_get_Item.method);
      if (plVar5 == (long *)0x0) goto label_044a4792;
      pSVar6 = (System_String_o *)(**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
      *code = pSVar6;
      il2cpp_runtime_helper_022b4080(code,pSVar6);
      plVar5 = (long *)(*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar4,"error",(pSVar4->klass->vtable)._7_get_Item.method);
      if (plVar5 != (long *)0x0) {
        pSVar6 = (System_String_o *)(**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
        *error = pSVar6;
        il2cpp_runtime_helper_022b4080(error);
        uVar3 = System_String__IsNullOrEmpty(*status,(MethodInfo *)0x0);
        return uVar3 ^ 1;
      }
      goto label_044a4797;
    }
    if (pSVar6 != (System_String_o *)0x0) {
      pSVar6 = System_String__Trim(pSVar6,(MethodInfo *)0x0);
      if (pSVar6 == (System_String_o *)0x0) goto label_044a47a1;
      pSVar6 = System_String__ToLowerInvariant(pSVar6,(MethodInfo *)0x0);
      goto label_044a46d5;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_044a47a1:
  auVar9 = il2cpp_runtime_helper_022b2c90();
  if (auVar9._8_4_ != 1) {
    _Unwind_Resume(auVar9._0_8_);
  }
  puVar7 = (undefined8 *)__cxa_begin_catch(auVar9._0_8_);
  cVar1 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar7);
  if (cVar1 != '\0') {
    __cxa_end_catch();
    return 0;
  }
  puVar8 = (undefined8 *)__cxa_allocate_exception(8);
  *puVar8 = *puVar7;
  __cxa_throw(puVar8,&PTR_PTR_05215060,0);
}


// ApplicationManagers.AccountManager$$NormalizeOAuthProvider
// il2cpp: System_String_o* ApplicationManagers_AccountManager__NormalizeOAuthProvider (System_String_o* provider, const MethodInfo* method);
// 0x44a4890

System_String_o *
ApplicationManagers_AccountManager__NormalizeOAuthProvider(System_String_o *provider,MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  
  bVar2 = System_String__IsNullOrEmpty(provider,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if ((provider != (System_String_o *)0x0) &&
     (pSVar3 = System_String__Trim(provider,(MethodInfo *)0x0), pSVar3 != (System_String_o *)0x0)) {
    pSVar3 = System_String__ToLowerInvariant(pSVar3,(MethodInfo *)0x0);
    return pSVar3;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae9af == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae9af = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x90);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x90);
}


// ApplicationManagers.AccountManager$$get_ProfileDescription
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_ProfileDescription (const MethodInfo* method);
// 0x44a48e0

System_String_o * ApplicationManagers_AccountManager__get_ProfileDescription(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ae9af == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae9af = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x90);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x90);
}


// ApplicationManagers.AccountManager$$set_ProfileDescription
// il2cpp: void ApplicationManagers_AccountManager__set_ProfileDescription (System_String_o* value, const MethodInfo* method);
// 0x44a4950

void ApplicationManagers_AccountManager__set_ProfileDescription(System_String_o *value,MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057ae9b0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae9b0 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar1 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(System_String_o **)(lVar1 + 0x90) = value;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x90,value);
  return;
}


// ApplicationManagers.AccountManager$$get_ProfileAvatarKey
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_ProfileAvatarKey (const MethodInfo* method);
// 0x44a49c0

System_String_o * ApplicationManagers_AccountManager__get_ProfileAvatarKey(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ae9b1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae9b1 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x98);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x98);
}


// ApplicationManagers.AccountManager$$set_ProfileAvatarKey
// il2cpp: void ApplicationManagers_AccountManager__set_ProfileAvatarKey (System_String_o* value, const MethodInfo* method);
// 0x44a4a30

void ApplicationManagers_AccountManager__set_ProfileAvatarKey(System_String_o *value,MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057ae9b2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae9b2 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar1 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(System_String_o **)(lVar1 + 0x98) = value;
  il2cpp_runtime_helper_022b4080(lVar1 + 0x98,value);
  return;
}


// ApplicationManagers.AccountManager$$get_ProfileBannerKey
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_ProfileBannerKey (const MethodInfo* method);
// 0x44a4aa0

System_String_o * ApplicationManagers_AccountManager__get_ProfileBannerKey(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ae9b3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae9b3 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xa0);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xa0);
}


// ApplicationManagers.AccountManager$$set_ProfileBannerKey
// il2cpp: void ApplicationManagers_AccountManager__set_ProfileBannerKey (System_String_o* value, const MethodInfo* method);
// 0x44a4b10

void ApplicationManagers_AccountManager__set_ProfileBannerKey(System_String_o *value,MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057ae9b4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae9b4 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar1 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(System_String_o **)(lVar1 + 0xa0) = value;
  il2cpp_runtime_helper_022b4080(lVar1 + 0xa0,value);
  return;
}


// ApplicationManagers.AccountManager$$get_ProfileSocials
// il2cpp: System_Collections_Generic_Dictionary_string__string__o* ApplicationManagers_AccountManager__get_ProfileSocials (const MethodInfo* method);
// 0x44a4b80

System_Collections_Generic_Dictionary_string__string__o *
ApplicationManagers_AccountManager__get_ProfileSocials(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ae9b5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae9b5 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_Collections_Generic_Dictionary_string__string__o **)
            (*(long *)(TypeInfo_AccountManager + 0xb8) + 0xa8);
  }
  il2cpp_runtime_helper_02337ed0();
  return *(System_Collections_Generic_Dictionary_string__string__o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xa8);
}


// ApplicationManagers.AccountManager$$get_HasCachedOwnProfile
// il2cpp: bool ApplicationManagers_AccountManager__get_HasCachedOwnProfile (const MethodInfo* method);
// 0x44a4bf0

bool_conflict ApplicationManagers_AccountManager__get_HasCachedOwnProfile(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ae9b6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae9b6 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)*(long *)(TypeInfo_AccountManager + 0xb8) >> 8),
                    *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xb0));
  }
  il2cpp_runtime_helper_02337ed0();
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(long *)(TypeInfo_AccountManager + 0xb8) >> 8),
                  *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xb0));
}


// ApplicationManagers.AccountManager$$get_HasCachedCharacterInfo
// il2cpp: bool ApplicationManagers_AccountManager__get_HasCachedCharacterInfo (const MethodInfo* method);
// 0x44a4c60

bool_conflict ApplicationManagers_AccountManager__get_HasCachedCharacterInfo(MethodInfo *method)

{
  int iVar1;
  
  if (g_data_057ae9b7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae9b7 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)*(long *)(TypeInfo_AccountManager + 0xb8) >> 8),
                    *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xc0));
  }
  il2cpp_runtime_helper_02337ed0();
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(long *)(TypeInfo_AccountManager + 0xb8) >> 8),
                  *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xc0));
}


// ApplicationManagers.AccountManager$$GetProfile
// il2cpp: void ApplicationManagers_AccountManager__GetProfile (System_Action_bool__string__o* onComplete, bool forceRefresh, const MethodInfo* method);
// 0x44a4cd0

void ApplicationManagers_AccountManager__GetProfile
               (System_Action_bool__string__o *onComplete,bool_conflict forceRefresh,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  UnityEngine_Object_o *pUVar4;
  System_Object_array *pSVar5;
  System_Collections_Generic_List_object__c *__this;
  ApplicationManagers_AccountManager_o *__this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_04;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_05;
  bool_conflict bVar6;
  code *vtableDispatch;
  long lVar7;
  undefined8 *puVar8;
  System_String_Fields SVar9;
  System_String_Fields __this_06;
  System_String_o *__this_07;
  SimpleJSONFixed_JSONObject_o *__this_08;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  SimpleJSONFixed_JSONObject_o *pSVar11;
  System_String_o *pSVar12;
  System_Collections_IEnumerator_o *routine;
  long *plVar13;
  System_String_o *in_RCX;
  intptr_t iVar14;
  undefined8 uVar15;
  SimpleJSONFixed_JSONObject_o *s;
  System_String_o *s_00;
  void *pvVar16;
  undefined8 uVar17;
  System_String_o *s_01;
  intptr_t iVar18;
  long lVar19;
  System_String_Fields __this_09;
  MethodInfo *in_R8;
  MethodInfo *method_00;
  System_Action_bool__string__o *in_R9;
  undefined1 auVar20 [12];
  undefined1 auVar21 [16];
  undefined8 in_stack_ffffffffffffff08;
  SimpleJSONFixed_JSONObject_o *pSVar22;
  _union_231609 _Var23;
  Il2CppMethodPointer pIVar24;
  InvokerMethod pIVar25;
  System_Action_bool__string__o *pSStack_c0;
  _union_231609 _Stack_a8;
  Il2CppMethodPointer pIStack_a0;
  InvokerMethod pIStack_98;
  System_String_o *pSStack_80;
  byte bStack_48;
  
  if (g_data_057ae9b8 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CompleteProfileFetch);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_bool_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"not_logged_in");
    g_data_057ae9b8 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar4 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_AccountManager + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae971 == '\0') goto label_044a4e52;
label_044a4d9f:
      if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_044a4daf;
label_044a4e75:
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057aea19 == '\0') goto label_044a4e87;
label_044a4dbc:
      iVar2 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    else {
      if (g_data_057ae971 != '\0') goto label_044a4d9f;
label_044a4e52:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae971 = '\x01';
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_044a4e75;
label_044a4daf:
      if (g_data_057aea19 != '\0') goto label_044a4dbc;
label_044a4e87:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057aea19 = '\x01';
      iVar2 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    if (iVar2 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pvVar16 = (void *)0x0;
    bVar6 = System_String__IsNullOrEmpty
                      (*(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x18),(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      if ((char)forceRefresh == '\0') {
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar7 = *(long *)(TypeInfo_AccountManager + 0xb8);
        lVar19 = TypeInfo_AccountManager;
        if (*(char *)(lVar7 + 0xb1) != '\0') {
          if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            lVar7 = *(long *)(TypeInfo_AccountManager + 0xb8);
          }
          lVar19 = TypeInfo_AccountManager;
          if (*(char *)(lVar7 + 0xb0) != '\0') {
            if (onComplete == (System_Action_bool__string__o *)0x0) {
              return;
            }
            iVar18 = (onComplete->fields).method_code;
            vtableDispatch = (code *)(onComplete->fields).invoke_impl;
            iVar14 = (onComplete->fields).method;
            uVar17 = 1;
            uVar15 = 0;
            goto label_044a4e03;
          }
        }
      }
      else {
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        lVar19 = TypeInfo_AccountManager;
        *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xb1) = 0;
      }
      if (*(int *)(lVar19 + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        lVar19 = TypeInfo_AccountManager;
      }
      pSVar12 = MethodInfo_Void_Add;
      __this_09 = *(System_String_Fields *)(*(long *)(lVar19 + 0xb8) + 0xb8);
      if (__this_09 != (System_String_Fields)0x0) {
        *(int32_t *)((long)__this_09 + 0x1c) = *(int32_t *)((long)__this_09 + 0x1c) + 1;
        pSVar5 = ((System_Collections_Generic_List_object__Fields *)((long)__this_09 + 0x10))->_items;
        in_RCX = pSVar12;
        if (pSVar5 != (System_Object_array *)0x0) {
          uVar3 = *(int32_t *)((long)__this_09 + 0x18);
          if (uVar3 < (uint)pSVar5->max_length) {
            *(uint *)((long)__this_09 + 0x18) = uVar3 + 1;
            pSVar5->m_Items[(int)uVar3] = (Il2CppObject *)onComplete;
            il2cpp_runtime_helper_022b4080(pSVar5->m_Items + (int)uVar3);
            puVar8 = *(undefined8 **)(TypeInfo_AccountManager + 0xb8);
            cVar1 = *(char *)((long)puVar8 + 0xb2);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_09,(Il2CppObject *)onComplete,
                       *(MethodInfo_362C220 **)(*(long *)((long)pSVar12[1].monitor + 0xc0) + 0x70));
            puVar8 = *(undefined8 **)(TypeInfo_AccountManager + 0xb8);
            cVar1 = *(char *)((long)puVar8 + 0xb2);
          }
          if (cVar1 != '\0') {
            return;
          }
          if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            puVar8 = *(undefined8 **)(TypeInfo_AccountManager + 0xb8);
          }
          *(undefined1 *)((long)puVar8 + 0xb2) = 1;
          __this = (System_Collections_Generic_List_object__c *)*puVar8;
          SVar9 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_Action_bool_string);
          pvVar16 = (void *)0x0;
          in_RCX = (System_String_o *)0x0;
          __this_09 = SVar9;
          System_Action_bool__object____ctor();
          if (__this != (System_Collections_Generic_List_object__c *)0x0) {
            if (g_data_057ae9bc == '\0') {
              il2cpp_runtime_helper_023445d0(&TypeInfo_GetProfileJson_d__166);
              g_data_057ae9bc = '\x01';
            }
            __this_06 = (System_String_Fields)il2cpp_runtime_helper_023052d0(TypeInfo_GetProfileJson_d__166);
            pvVar16 = (void *)0x0;
            __this_09 = __this_06;
            System_Object___ctor((Il2CppObject *)__this_06,(MethodInfo *)0x0);
            *(undefined4 *)
             &((System_Collections_Generic_List_object__Fields *)((long)__this_06 + 0x10))->_items = 0;
            if (__this_06 != (System_String_Fields)0x0) {
              ((System_Collections_Generic_List_object__o *)((long)__this_06 + 0x28))->klass = __this;
              il2cpp_runtime_helper_022b4080((System_Collections_Generic_List_object__o *)((long)__this_06 + 0x28),__this)
              ;
              *(System_String_Fields *)((long)__this_06 + 0x20) = SVar9;
              il2cpp_runtime_helper_022b4080((Il2CppObject **)((long)__this_06 + 0x20),SVar9);
              UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                        ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_06,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      il2cpp_runtime_helper_022b2c90();
      if (g_data_057ae9bc == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_GetProfileJson_d__166);
        g_data_057ae9bc = '\x01';
      }
      __this_07 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GetProfileJson_d__166);
      s_01 = (System_String_o *)0x0;
      pSVar12 = __this_07;
      System_Object___ctor((Il2CppObject *)__this_07,(MethodInfo *)0x0);
      (__this_07->fields)._stringLength = 0;
      if (__this_07 != (System_String_o *)0x0) {
        __this_07[1].fields = __this_09;
        il2cpp_runtime_helper_022b4080(&__this_07[1].fields,__this_09);
        __this_07[1].monitor = pvVar16;
        il2cpp_runtime_helper_022b4080(&__this_07[1].monitor,pvVar16);
        return;
      }
      il2cpp_runtime_helper_022b2c90();
      method_00 = in_R8;
      pSStack_80 = __this_07;
      if (g_data_057ae9b9 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_System);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
        il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
        il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_System_String_get_Current);
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
        il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
        il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
        il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
        il2cpp_runtime_helper_023445d0(&"displayName");
        il2cpp_runtime_helper_023445d0(&"not_logged_in");
        il2cpp_runtime_helper_023445d0(&"socials");
        il2cpp_runtime_helper_023445d0(&"avatarKey");
        il2cpp_runtime_helper_023445d0(&"description");
        il2cpp_runtime_helper_023445d0(&"bannerKey");
        g_data_057ae9b9 = '\x01';
      }
      pIVar25 = (InvokerMethod)0x0;
      _Var23.genericMethod = (void *)0x0;
      pIVar24 = (Il2CppMethodPointer)0x0;
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pUVar4 = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_AccountManager + 0xb8);
      if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = UnityEngine_Object__op_Equality(pUVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if ((char)bVar6 != '\0') goto label_044a52eb;
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057ae971 == '\0') goto label_044a5575;
label_044a52a8:
        if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_044a52b8;
label_044a5598:
        il2cpp_runtime_helper_02337ed0();
        if (g_data_057aea19 == '\0') goto label_044a55aa;
label_044a52c5:
        iVar2 = *(int *)(TypeInfo_AccountManager + 0xe4);
      }
      else {
        if (g_data_057ae971 != '\0') goto label_044a52a8;
label_044a5575:
        il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
        g_data_057ae971 = '\x01';
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_044a5598;
label_044a52b8:
        if (g_data_057aea19 != '\0') goto label_044a52c5;
label_044a55aa:
        il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
        g_data_057aea19 = '\x01';
        iVar2 = *(int *)(TypeInfo_AccountManager + 0xe4);
      }
      if (iVar2 == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      bVar6 = System_String__IsNullOrEmpty
                        (*(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x18),(MethodInfo *)0x0);
      if ((char)bVar6 == '\0') {
        __this_08 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
        SimpleJSONFixed_JSONObject___ctor(__this_08,(MethodInfo *)0x0);
        pSVar11 = s;
        if (pSVar12 != (System_String_o *)0x0) {
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar12,(MethodInfo *)0x0);
          pSVar22 = __this_08;
          if (__this_08 == (SimpleJSONFixed_JSONObject_o *)0x0) goto label_044a56b3;
          (*(__this_08->klass->vtable)._8_set_Item.methodPtr)(__this_08,"displayName",pSVar10);
        }
        if (s_01 != (System_String_o *)0x0) {
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit(s_01,(MethodInfo *)0x0);
          pSVar22 = __this_08;
          if (__this_08 == (SimpleJSONFixed_JSONObject_o *)0x0) goto label_044a56b3;
          (*(__this_08->klass->vtable)._8_set_Item.methodPtr)(__this_08,"description",pSVar10);
        }
        pSVar22 = __this_08;
        if (s != (SimpleJSONFixed_JSONObject_o *)0x0) {
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)s,(MethodInfo *)0x0);
          if (__this_08 == (SimpleJSONFixed_JSONObject_o *)0x0) goto label_044a56b3;
          (*(__this_08->klass->vtable)._8_set_Item.methodPtr)(__this_08,"avatarKey",pSVar10);
        }
        if (in_RCX != (System_String_o *)0x0) {
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit(in_RCX,(MethodInfo *)0x0);
          if (__this_08 == (SimpleJSONFixed_JSONObject_o *)0x0) goto label_044a56b3;
          (*(__this_08->klass->vtable)._8_set_Item.methodPtr)(__this_08,"bannerKey",pSVar10);
        }
        if (in_R8 == (MethodInfo *)0x0) goto label_044a563e;
        pSVar11 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
        SimpleJSONFixed_JSONObject___ctor(pSVar11,(MethodInfo *)0x0);
        System_Collections_Generic_Dictionary_object__object___GetEnumerator
                  ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&_Stack_a8,
                   (System_Collections_Generic_Dictionary_object__object__o *)in_R8,MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_System);
        pSStack_c0 = in_R9;
        if (pSVar11 == (SimpleJSONFixed_JSONObject_o *)0x0) {
          __this_02.fields._8_8_ = pSVar22;
          __this_02.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff08;
          __this_02.fields._current.fields.key = _Stack_a8.genericMethod;
          __this_02.fields._current.fields.value = (Il2CppObject *)pIStack_a0;
          __this_02.fields._32_8_ = pIStack_98;
          bVar6 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                            (__this_02,(MethodInfo_3251160 *)&stack0xffffffffffffff18);
          _Var23 = _Stack_a8;
          pIVar24 = pIStack_a0;
          pIVar25 = pIStack_98;
          if ((char)bVar6 != '\0') goto label_044a56b8;
        }
        else {
          _Var23 = _Stack_a8;
          pIVar24 = pIStack_a0;
          pIVar25 = pIStack_98;
          while (__this_01.fields._8_8_ = pSVar22,
                __this_01.fields._dictionary =
                     (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff08,
                __this_01.fields._current.fields.key = _Var23.genericMethod,
                __this_01.fields._current.fields.value = (Il2CppObject *)pIVar24,
                __this_01.fields._32_8_ = pIVar25,
                bVar6 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                                  (__this_01,(MethodInfo_3251160 *)&stack0xffffffffffffff18),
                (char)bVar6 != '\0') {
            auVar21 = il2cpp_runtime_helper_03343020((MethodInfo_3251160 *)&stack0xffffffffffffff18);
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            pSVar10 = SimpleJSONFixed_JSONNode__op_Implicit(auVar21._8_8_,(MethodInfo *)0x0);
            (*(pSVar11->klass->vtable)._8_set_Item.methodPtr)(pSVar11,auVar21._0_8_,pSVar10);
          }
        }
        __this_03.fields._8_8_ = pSVar22;
        __this_03.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff08;
        __this_03.fields._current.fields.key = _Var23.genericMethod;
        __this_03.fields._current.fields.value = (Il2CppObject *)pIVar24;
        __this_03.fields._32_8_ = pIVar25;
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                  (__this_03,(MethodInfo_3251280 *)&stack0xffffffffffffff18);
        __this_08 = pSVar22;
        do {
          pSVar22 = __this_08;
          if (__this_08 != (SimpleJSONFixed_JSONObject_o *)0x0) {
            (*(__this_08->klass->vtable)._8_set_Item.methodPtr)(__this_08,"socials",pSVar11);
            in_R9 = pSStack_c0;
label_044a563e:
            if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
              il2cpp_runtime_helper_02337ed0();
            }
            if (__this_08 != (SimpleJSONFixed_JSONObject_o *)0x0) {
              __this_00 = (ApplicationManagers_AccountManager_o *)**(undefined8 **)(TypeInfo_AccountManager + 0xb8);
              pSVar12 = (System_String_o *)
                        (*(__this_08->klass->vtable)._3_ToString.methodPtr)
                                  (__this_08,(__this_08->klass->vtable)._3_ToString.method);
              if (__this_00 != (ApplicationManagers_AccountManager_o *)0x0) {
                bStack_48 = (byte)onComplete;
                routine = ApplicationManagers_AccountManager__PatchProfileJson
                                    (__this_00,pSVar12,in_R9,(uint)bStack_48,method_00);
                UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                          ((UnityEngine_MonoBehaviour_o *)__this_00,routine,(MethodInfo *)0x0);
                return;
              }
            }
          }
label_044a56b3:
          il2cpp_runtime_helper_022b2c90();
label_044a56b8:
          il2cpp_runtime_helper_03343020(&stack0xffffffffffffff18);
          __this_08 = pSVar22;
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            __this_08 = pSVar22;
          }
          SimpleJSONFixed_JSONNode__op_Implicit(s_00,(MethodInfo *)0x0);
          auVar20 = il2cpp_runtime_helper_022b2c90();
          if (auVar20._8_4_ != 1) goto label_044a5786;
          plVar13 = (long *)__cxa_begin_catch(auVar20._0_8_);
          lVar7 = *plVar13;
          __cxa_end_catch();
          __this_04.fields._8_8_ = __this_08;
          __this_04.fields._dictionary =
               (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff08;
          __this_04.fields._current.fields.key = _Var23.genericMethod;
          __this_04.fields._current.fields.value = (Il2CppObject *)pIVar24;
          __this_04.fields._32_8_ = pIVar25;
          System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                    (__this_04,(MethodInfo_3251280 *)&stack0xffffffffffffff18);
        } while (lVar7 == 0);
        il2cpp_runtime_helper_022fefe0(lVar7);
label_044a5786:
        __this_05.fields._8_8_ = __this_08;
        __this_05.fields._dictionary =
             (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff08;
        __this_05.fields._current.fields.key = _Var23.genericMethod;
        __this_05.fields._current.fields.value = (Il2CppObject *)pIVar24;
        __this_05.fields._32_8_ = pIVar25;
        System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                  (__this_05,(MethodInfo_3251280 *)&stack0xffffffffffffff18);
        _Unwind_Resume(auVar20._0_8_);
      }
label_044a52eb:
      if (in_R9 != (System_Action_bool__string__o *)0x0) {
        (*(code *)(in_R9->fields).invoke_impl)
                  ((in_R9->fields).method_code,0,"not_logged_in",(in_R9->fields).method);
      }
      return;
    }
  }
  if (onComplete == (System_Action_bool__string__o *)0x0) {
    return;
  }
  iVar18 = (onComplete->fields).method_code;
  vtableDispatch = (code *)(onComplete->fields).invoke_impl;
  iVar14 = (onComplete->fields).method;
  uVar17 = 0;
  uVar15 = "not_logged_in";
label_044a4e03:
  (*vtableDispatch)(iVar18,uVar17,uVar15,iVar14);
  return;
}


// ApplicationManagers.AccountManager$$UpdateProfile
// il2cpp: void ApplicationManagers_AccountManager__UpdateProfile (System_String_o* displayName, System_String_o* description, System_String_o* avatarKey, System_String_o* bannerKey, System_Collections_Generic_Dictionary_string__string__o* socials, System_Action_bool__string__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x44a5130

void ApplicationManagers_AccountManager__UpdateProfile
               (System_String_o *displayName,System_String_o *description,System_String_o *avatarKey,
               System_String_o *bannerKey,System_Collections_Generic_Dictionary_string__string__o *socials,
               System_Action_bool__string__o *onComplete,bool_conflict reportNetworkError,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  ApplicationManagers_AccountManager_o *__this;
  long lVar2;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_04;
  bool_conflict bVar3;
  SimpleJSONFixed_JSONObject_o *__this_05;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  System_String_o *json;
  System_Collections_IEnumerator_o *routine;
  long *plVar5;
  System_String_o *s;
  MethodInfo *method_00;
  undefined1 auVar6 [12];
  undefined1 auVar7 [16];
  undefined8 in_stack_ffffffffffffff58;
  SimpleJSONFixed_JSONObject_o *pSVar8;
  _union_231609 _Var9;
  Il2CppMethodPointer pIVar10;
  InvokerMethod pIVar11;
  System_Action_bool__string__o *local_70;
  _union_231609 local_58;
  Il2CppMethodPointer pIStack_50;
  InvokerMethod local_48;
  
  method_00 = (MethodInfo *)socials;
  if (g_data_057ae9b9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_System);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_System_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"displayName");
    il2cpp_runtime_helper_023445d0(&"not_logged_in");
    il2cpp_runtime_helper_023445d0(&"socials");
    il2cpp_runtime_helper_023445d0(&"avatarKey");
    il2cpp_runtime_helper_023445d0(&"description");
    il2cpp_runtime_helper_023445d0(&"bannerKey");
    g_data_057ae9b9 = '\x01';
  }
  pIVar11 = (InvokerMethod)0x0;
  _Var9.genericMethod = (void *)0x0;
  pIVar10 = (Il2CppMethodPointer)0x0;
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_AccountManager + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') goto label_044a52eb;
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae971 == '\0') goto label_044a5575;
label_044a52a8:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_044a52b8;
label_044a5598:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aea19 == '\0') goto label_044a55aa;
label_044a52c5:
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (g_data_057ae971 != '\0') goto label_044a52a8;
label_044a5575:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae971 = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_044a5598;
label_044a52b8:
    if (g_data_057aea19 != '\0') goto label_044a52c5;
label_044a55aa:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea19 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x18),(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    __this_05 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
    SimpleJSONFixed_JSONObject___ctor(__this_05,(MethodInfo *)0x0);
    if (displayName != (System_String_o *)0x0) {
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit(displayName,(MethodInfo *)0x0);
      pSVar8 = __this_05;
      if (__this_05 == (SimpleJSONFixed_JSONObject_o *)0x0) goto label_044a56b3;
      (*(__this_05->klass->vtable)._8_set_Item.methodPtr)(__this_05,"displayName",pSVar4);
    }
    if (description != (System_String_o *)0x0) {
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit(description,(MethodInfo *)0x0);
      pSVar8 = __this_05;
      if (__this_05 == (SimpleJSONFixed_JSONObject_o *)0x0) goto label_044a56b3;
      (*(__this_05->klass->vtable)._8_set_Item.methodPtr)(__this_05,"description",pSVar4);
    }
    pSVar8 = __this_05;
    if (avatarKey != (System_String_o *)0x0) {
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit(avatarKey,(MethodInfo *)0x0);
      if (__this_05 == (SimpleJSONFixed_JSONObject_o *)0x0) goto label_044a56b3;
      (*(__this_05->klass->vtable)._8_set_Item.methodPtr)(__this_05,"avatarKey",pSVar4);
    }
    if (bannerKey != (System_String_o *)0x0) {
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit(bannerKey,(MethodInfo *)0x0);
      if (__this_05 == (SimpleJSONFixed_JSONObject_o *)0x0) goto label_044a56b3;
      (*(__this_05->klass->vtable)._8_set_Item.methodPtr)(__this_05,"bannerKey",pSVar4);
    }
    if (socials == (System_Collections_Generic_Dictionary_string__string__o *)0x0) goto label_044a563e;
    avatarKey = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
    SimpleJSONFixed_JSONObject___ctor((SimpleJSONFixed_JSONObject_o *)avatarKey,(MethodInfo *)0x0);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&local_58,
               (System_Collections_Generic_Dictionary_object__object__o *)socials,MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_System);
    local_70 = onComplete;
    if ((SimpleJSONFixed_JSONObject_o *)avatarKey == (SimpleJSONFixed_JSONObject_o *)0x0) {
      __this_01.fields._8_8_ = pSVar8;
      __this_01.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff58;
      __this_01.fields._current.fields.key = local_58.genericMethod;
      __this_01.fields._current.fields.value = (Il2CppObject *)pIStack_50;
      __this_01.fields._32_8_ = local_48;
      bVar3 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        (__this_01,(MethodInfo_3251160 *)&stack0xffffffffffffff68);
      _Var9 = local_58;
      pIVar10 = pIStack_50;
      pIVar11 = local_48;
      if ((char)bVar3 != '\0') goto label_044a56b8;
    }
    else {
      _Var9 = local_58;
      pIVar10 = pIStack_50;
      pIVar11 = local_48;
      while (__this_00.fields._8_8_ = pSVar8,
            __this_00.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff58,
            __this_00.fields._current.fields.key = _Var9.genericMethod,
            __this_00.fields._current.fields.value = (Il2CppObject *)pIVar10,
            __this_00.fields._32_8_ = pIVar11,
            bVar3 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                              (__this_00,(MethodInfo_3251160 *)&stack0xffffffffffffff68), (char)bVar3 != '\0')
      {
        auVar7 = il2cpp_runtime_helper_03343020((MethodInfo_3251160 *)&stack0xffffffffffffff68);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit(auVar7._8_8_,(MethodInfo *)0x0);
        (*(((SimpleJSONFixed_JSONObject_o *)avatarKey)->klass->vtable)._8_set_Item.methodPtr)
                  (avatarKey,auVar7._0_8_,pSVar4);
      }
    }
    __this_02.fields._8_8_ = pSVar8;
    __this_02.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff58;
    __this_02.fields._current.fields.key = _Var9.genericMethod;
    __this_02.fields._current.fields.value = (Il2CppObject *)pIVar10;
    __this_02.fields._32_8_ = pIVar11;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_02,(MethodInfo_3251280 *)&stack0xffffffffffffff68);
    __this_05 = pSVar8;
    do {
      pSVar8 = __this_05;
      if (__this_05 != (SimpleJSONFixed_JSONObject_o *)0x0) {
        (*(__this_05->klass->vtable)._8_set_Item.methodPtr)(__this_05,"socials",avatarKey);
        onComplete = local_70;
label_044a563e:
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (__this_05 != (SimpleJSONFixed_JSONObject_o *)0x0) {
          __this = (ApplicationManagers_AccountManager_o *)**(undefined8 **)(TypeInfo_AccountManager + 0xb8);
          json = (System_String_o *)
                 (*(__this_05->klass->vtable)._3_ToString.methodPtr)
                           (__this_05,(__this_05->klass->vtable)._3_ToString.method);
          if (__this != (ApplicationManagers_AccountManager_o *)0x0) {
            routine = ApplicationManagers_AccountManager__PatchProfileJson
                                (__this,json,onComplete,reportNetworkError & 0xff,method_00);
            UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                      ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
            return;
          }
        }
      }
label_044a56b3:
      il2cpp_runtime_helper_022b2c90();
label_044a56b8:
      il2cpp_runtime_helper_03343020(&stack0xffffffffffffff68);
      __this_05 = pSVar8;
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        __this_05 = pSVar8;
      }
      SimpleJSONFixed_JSONNode__op_Implicit(s,(MethodInfo *)0x0);
      auVar6 = il2cpp_runtime_helper_022b2c90();
      if (auVar6._8_4_ != 1) goto label_044a5786;
      plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
      lVar2 = *plVar5;
      __cxa_end_catch();
      __this_03.fields._8_8_ = __this_05;
      __this_03.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff58;
      __this_03.fields._current.fields.key = _Var9.genericMethod;
      __this_03.fields._current.fields.value = (Il2CppObject *)pIVar10;
      __this_03.fields._32_8_ = pIVar11;
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                (__this_03,(MethodInfo_3251280 *)&stack0xffffffffffffff68);
    } while (lVar2 == 0);
    il2cpp_runtime_helper_022fefe0(lVar2);
label_044a5786:
    __this_04.fields._8_8_ = __this_05;
    __this_04.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff58;
    __this_04.fields._current.fields.key = _Var9.genericMethod;
    __this_04.fields._current.fields.value = (Il2CppObject *)pIVar10;
    __this_04.fields._32_8_ = pIVar11;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_04,(MethodInfo_3251280 *)&stack0xffffffffffffff68);
    _Unwind_Resume(auVar6._0_8_);
  }
label_044a52eb:
  if (onComplete != (System_Action_bool__string__o *)0x0) {
    (*(code *)(onComplete->fields).invoke_impl)
              ((onComplete->fields).method_code,0,"not_logged_in",(onComplete->fields).method);
  }
  return;
}


// ApplicationManagers.AccountManager$$GetCharacterInfo
// il2cpp: void ApplicationManagers_AccountManager__GetCharacterInfo (System_Action_bool__string__JSONNode__o* onComplete, bool forceRefresh, const MethodInfo* method);
// 0x44a5870

void ApplicationManagers_AccountManager__GetCharacterInfo
               (System_Action_bool__string__JSONNode__o *onComplete,bool_conflict forceRefresh,
               MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  UnityEngine_Object_o *x;
  code *vtableDispatch;
  System_Object_array *pSVar4;
  System_Collections_Generic_List_object__c *__this;
  char cVar5;
  bool_conflict bVar6;
  long lVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  System_Collections_Generic_List_object__o *pSVar9;
  System_Collections_Generic_List_object__o *__this_00;
  System_String_o *aJSON;
  undefined8 *puVar10;
  undefined8 *puVar11;
  MethodInfo *method_00;
  long lVar12;
  System_Collections_Generic_List_object__o *__this_01;
  undefined1 auVar13 [12];
  
  if (g_data_057ae9ba == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CompleteCharacterInfoFetch);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_bool_string_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"not_logged_in");
    g_data_057ae9ba = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_AccountManager + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar6 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') goto label_044a5982;
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae971 == '\0') goto label_044a59f4;
label_044a593f:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_044a594f;
label_044a5a17:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aea19 == '\0') goto label_044a5a29;
label_044a595c:
    iVar2 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (g_data_057ae971 != '\0') goto label_044a593f;
label_044a59f4:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae971 = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_044a5a17;
label_044a594f:
    if (g_data_057aea19 != '\0') goto label_044a595c;
label_044a5a29:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea19 = '\x01';
    iVar2 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)0x0;
  bVar6 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x18),(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    if ((char)forceRefresh == '\0') {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar7 = *(long *)(TypeInfo_AccountManager + 0xb8);
      lVar12 = TypeInfo_AccountManager;
      if (*(char *)(lVar7 + 0xc1) != '\0') {
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          lVar7 = *(long *)(TypeInfo_AccountManager + 0xb8);
        }
        lVar12 = TypeInfo_AccountManager;
        if (*(char *)(lVar7 + 0xc0) != '\0') {
          if (onComplete == (System_Action_bool__string__JSONNode__o *)0x0) {
            return;
          }
          if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            lVar7 = *(long *)(TypeInfo_AccountManager + 0xb8);
          }
          pSVar8 = ApplicationManagers_AccountManager__CloneJson
                             (*(SimpleJSONFixed_JSONNode_o **)(lVar7 + 200),method_00);
          vtableDispatch = (code *)(onComplete->fields).invoke_impl;
          (*vtableDispatch)
                    ((onComplete->fields).method_code,1,0,pSVar8,(onComplete->fields).method,
                     vtableDispatch);
          return;
        }
      }
    }
    else {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar12 = TypeInfo_AccountManager;
      *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xc1) = 0;
    }
    if (*(int *)(lVar12 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar12 = TypeInfo_AccountManager;
    }
    lVar7 = MethodInfo_Void_Add;
    __this_01 = *(System_Collections_Generic_List_object__o **)(*(long *)(lVar12 + 0xb8) + 0xd0);
    if (__this_01 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(__this_01->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (__this_01->fields)._items;
      if (pSVar4 != (System_Object_array *)0x0) {
        uVar3 = (__this_01->fields)._size;
        if (uVar3 < (uint)pSVar4->max_length) {
          (__this_01->fields)._size = uVar3 + 1;
          pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)onComplete;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
          puVar10 = *(undefined8 **)(TypeInfo_AccountManager + 0xb8);
          cVar5 = *(char *)((long)puVar10 + 0xc2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_01,(Il2CppObject *)onComplete,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          puVar10 = *(undefined8 **)(TypeInfo_AccountManager + 0xb8);
          cVar5 = *(char *)((long)puVar10 + 0xc2);
        }
        if (cVar5 != '\0') {
          return;
        }
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          puVar10 = *(undefined8 **)(TypeInfo_AccountManager + 0xb8);
        }
        *(undefined1 *)((long)puVar10 + 0xc2) = 1;
        __this = (System_Collections_Generic_List_object__c *)*puVar10;
        pSVar9 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_bool_string_JSONNode);
        __this_01 = pSVar9;
        System_Action_bool__object__object____ctor();
        if (__this != (System_Collections_Generic_List_object__c *)0x0) {
          if (g_data_057ae9be == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_GetCharacterInfoJson_d__168);
            g_data_057ae9be = '\x01';
          }
          __this_00 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_GetCharacterInfoJson_d__168);
          __this_01 = __this_00;
          System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
          *(undefined4 *)&(__this_00->fields)._items = 0;
          if (__this_00 != (System_Collections_Generic_List_object__o *)0x0) {
            __this_00[1].klass = __this;
            il2cpp_runtime_helper_022b4080(__this_00 + 1,__this);
            (__this_00->fields)._syncRoot = (Il2CppObject *)pSVar9;
            il2cpp_runtime_helper_022b4080(&(__this_00->fields)._syncRoot,pSVar9);
            UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                      ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae9c7 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ae9c7 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar6 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)__this_01,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
        auVar13 = il2cpp_runtime_helper_022b2c90();
        if (auVar13._8_4_ != 1) {
          _Unwind_Resume(auVar13._0_8_);
        }
        puVar10 = (undefined8 *)__cxa_begin_catch(auVar13._0_8_);
        cVar5 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar10);
        if (cVar5 == '\0') {
          puVar11 = (undefined8 *)__cxa_allocate_exception(8);
          *puVar11 = *puVar10;
          __cxa_throw(puVar11,&PTR_PTR_05215060,0);
        }
        __cxa_end_catch();
      }
      else {
        aJSON = (System_String_o *)(*(__this_01->klass->vtable)._3_ToString.methodPtr)(__this_01);
        SimpleJSONFixed_JSON__Parse(aJSON,(MethodInfo *)0x0);
      }
    }
    return;
  }
label_044a5982:
  if (onComplete == (System_Action_bool__string__JSONNode__o *)0x0) {
    return;
  }
  (*(code *)(onComplete->fields).invoke_impl)
            ((onComplete->fields).method_code,0,"not_logged_in",0,(onComplete->fields).method);
  return;
}


// ApplicationManagers.AccountManager$$UpdateCharacterInfo
// il2cpp: void ApplicationManagers_AccountManager__UpdateCharacterInfo (SimpleJSONFixed_JSONNode_o* characterInfo, System_Action_bool__string__JSONNode__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x44a5e10

void ApplicationManagers_AccountManager__UpdateCharacterInfo
               (SimpleJSONFixed_JSONNode_o *characterInfo,System_Action_bool__string__JSONNode__o *onComplete,
               bool_conflict reportNetworkError,MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  SimpleJSONFixed_JSONObject_c *pSVar2;
  ApplicationManagers_AccountManager_o *__this;
  undefined8 uVar3;
  bool_conflict bVar4;
  Il2CppClass *__this_00;
  Il2CppClass *__this_01;
  System_String_o *json;
  System_Collections_IEnumerator_o *routine;
  Il2CppObject *__this_02;
  Il2CppClass *extraout_RDX;
  undefined4 uVar5;
  MethodInfo *pMVar6;
  Il2CppClass *pIVar7;
  Il2CppObject *__this_03;
  undefined1 in_R8B;
  MethodInfo *in_R9;
  
  if (g_data_057ae9bb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"characterInfo");
    il2cpp_runtime_helper_023445d0(&"not_logged_in");
    g_data_057ae9bb = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_AccountManager + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') goto label_044a5f1c;
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae971 != '\0') goto label_044a5ed9;
label_044a604a:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae971 = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_044a5ee9;
label_044a606d:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aea19 != '\0') goto label_044a5ef6;
label_044a607f:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea19 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (g_data_057ae971 == '\0') goto label_044a604a;
label_044a5ed9:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_044a606d;
label_044a5ee9:
    if (g_data_057aea19 == '\0') goto label_044a607f;
label_044a5ef6:
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x18),(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    __this_00 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
    pMVar6 = (MethodInfo *)0x0;
    pIVar7 = __this_00;
    SimpleJSONFixed_JSONObject___ctor((SimpleJSONFixed_JSONObject_o *)__this_00,(MethodInfo *)0x0);
    uVar3 = "characterInfo";
    __this_01 = (Il2CppClass *)characterInfo;
    if (characterInfo == (SimpleJSONFixed_JSONNode_o *)0x0) {
      __this_01 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
      pMVar6 = (MethodInfo *)0x0;
      pIVar7 = __this_01;
      SimpleJSONFixed_JSONObject___ctor((SimpleJSONFixed_JSONObject_o *)__this_01,(MethodInfo *)0x0);
    }
    if (__this_00 != (Il2CppClass *)0x0) {
      pSVar2 = (__this_00->_1).image;
      method = (pSVar2->vtable)._8_set_Item.method;
      (*(pSVar2->vtable)._8_set_Item.methodPtr)(__this_00,uVar3,__this_01);
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this = (ApplicationManagers_AccountManager_o *)**(undefined8 **)(TypeInfo_AccountManager + 0xb8);
      pSVar2 = (__this_00->_1).image;
      pMVar6 = (pSVar2->vtable)._3_ToString.method;
      json = (System_String_o *)(*(pSVar2->vtable)._3_ToString.methodPtr)();
      pIVar7 = __this_00;
      if (__this != (ApplicationManagers_AccountManager_o *)0x0) {
        routine = ApplicationManagers_AccountManager__PutCharacterInfoJson
                            (__this,json,characterInfo,onComplete,reportNetworkError & 0xff,in_R9);
        UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                  ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae9bf == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PutCharacterInfoJson_d__169);
      g_data_057ae9bf = '\x01';
    }
    __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_PutCharacterInfoJson_d__169);
    uVar5 = 0;
    __this_03 = __this_02;
    System_Object___ctor(__this_02,(MethodInfo *)0x0);
    *(undefined4 *)&__this_02[1].klass = 0;
    if (__this_02 == (Il2CppObject *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor(__this_03,(MethodInfo *)0x0);
      *(undefined4 *)&__this_03[1].klass = uVar5;
      return;
    }
    __this_02[3].klass = pIVar7;
    il2cpp_runtime_helper_022b4080(__this_02 + 3,pIVar7);
    __this_02[3].monitor = pMVar6;
    il2cpp_runtime_helper_022b4080(&__this_02[3].monitor,pMVar6);
    __this_02[2].klass = extraout_RDX;
    il2cpp_runtime_helper_022b4080(__this_02 + 2,extraout_RDX);
    __this_02[2].monitor = method;
    il2cpp_runtime_helper_022b4080(&__this_02[2].monitor,method);
    *(undefined1 *)&__this_02[4].klass = in_R8B;
    return;
  }
label_044a5f1c:
  if (onComplete == (System_Action_bool__string__JSONNode__o *)0x0) {
    return;
  }
  (*(code *)(onComplete->fields).invoke_impl)
            ((onComplete->fields).method_code,0,"not_logged_in",0,(onComplete->fields).method);
  return;
}


// ApplicationManagers.AccountManager$$GetProfileJson
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__GetProfileJson (ApplicationManagers_AccountManager_o* __this, System_Action_bool__string__o* onComplete, const MethodInfo* method);
// 0x44a50a0

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__GetProfileJson
          (ApplicationManagers_AccountManager_o *__this,System_Action_bool__string__o *onComplete,
          MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  ApplicationManagers_AccountManager_o *__this_00;
  long lVar2;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_03;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_04;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_05;
  bool_conflict bVar3;
  System_String_o *__this_06;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  System_Collections_IEnumerator_o *pSVar4;
  SimpleJSONFixed_JSONObject_o *__this_07;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  SimpleJSONFixed_JSONObject_o *pSVar6;
  System_String_o *pSVar7;
  UnityEngine_Coroutine_o *pUVar8;
  long *plVar9;
  System_String_o *in_RCX;
  SimpleJSONFixed_JSONObject_o *s;
  System_String_o *s_00;
  byte unaff_BL;
  System_String_o *s_01;
  MethodInfo *in_R8;
  MethodInfo *method_00;
  System_Action_bool__string__o *in_R9;
  undefined1 auVar10 [12];
  undefined1 auVar11 [16];
  undefined8 in_stack_ffffffffffffff30;
  SimpleJSONFixed_JSONObject_o *pSVar12;
  _union_231609 _Var13;
  Il2CppMethodPointer pIVar14;
  InvokerMethod pIVar15;
  System_Action_bool__string__o *pSStack_98;
  _union_231609 _Stack_80;
  Il2CppMethodPointer pIStack_78;
  InvokerMethod pIStack_70;
  System_String_o *pSStack_58;
  
  if (g_data_057ae9bc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GetProfileJson_d__166);
    g_data_057ae9bc = '\x01';
  }
  __this_06 = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GetProfileJson_d__166);
  s_01 = (System_String_o *)0x0;
  pSVar7 = __this_06;
  System_Object___ctor((Il2CppObject *)__this_06,(MethodInfo *)0x0);
  (__this_06->fields)._stringLength = 0;
  if (__this_06 != (System_String_o *)0x0) {
    __this_06[1].fields = (System_String_Fields)__this;
    il2cpp_runtime_helper_022b4080(&__this_06[1].fields,__this);
    __this_06[1].monitor = onComplete;
    il2cpp_runtime_helper_022b4080(&__this_06[1].monitor,onComplete);
    return (System_Collections_IEnumerator_o *)__this_06;
  }
  il2cpp_runtime_helper_022b2c90();
  method_00 = in_R8;
  pSStack_58 = __this_06;
  if (g_data_057ae9b9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_System);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Dispose);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_MoveNext);
    il2cpp_runtime_helper_023445d0(&MethodInfo_KeyValuePair_2_System_String_System_String_get_Current);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Key);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"displayName");
    il2cpp_runtime_helper_023445d0(&"not_logged_in");
    il2cpp_runtime_helper_023445d0(&"socials");
    il2cpp_runtime_helper_023445d0(&"avatarKey");
    il2cpp_runtime_helper_023445d0(&"description");
    il2cpp_runtime_helper_023445d0(&"bannerKey");
    g_data_057ae9b9 = '\x01';
  }
  pIVar15 = (InvokerMethod)0x0;
  _Var13.genericMethod = (void *)0x0;
  pIVar14 = (Il2CppMethodPointer)0x0;
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_AccountManager + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pSVar4 = (System_Collections_IEnumerator_o *)CONCAT44(extraout_var,bVar3);
  if ((char)bVar3 != '\0') goto label_044a52eb;
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae971 == '\0') goto label_044a5575;
label_044a52a8:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_044a52b8;
label_044a5598:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aea19 == '\0') goto label_044a55aa;
label_044a52c5:
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (g_data_057ae971 != '\0') goto label_044a52a8;
label_044a5575:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae971 = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_044a5598;
label_044a52b8:
    if (g_data_057aea19 != '\0') goto label_044a52c5;
label_044a55aa:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea19 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x18),(MethodInfo *)0x0);
  pSVar4 = (System_Collections_IEnumerator_o *)CONCAT44(extraout_var_00,bVar3);
  if ((char)bVar3 == '\0') {
    __this_07 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
    SimpleJSONFixed_JSONObject___ctor(__this_07,(MethodInfo *)0x0);
    pSVar6 = s;
    if (pSVar7 != (System_String_o *)0x0) {
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar7,(MethodInfo *)0x0);
      pSVar12 = __this_07;
      if (__this_07 == (SimpleJSONFixed_JSONObject_o *)0x0) goto label_044a56b3;
      (*(__this_07->klass->vtable)._8_set_Item.methodPtr)(__this_07,"displayName",pSVar5);
    }
    if (s_01 != (System_String_o *)0x0) {
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(s_01,(MethodInfo *)0x0);
      pSVar12 = __this_07;
      if (__this_07 == (SimpleJSONFixed_JSONObject_o *)0x0) goto label_044a56b3;
      (*(__this_07->klass->vtable)._8_set_Item.methodPtr)(__this_07,"description",pSVar5);
    }
    pSVar12 = __this_07;
    if (s != (SimpleJSONFixed_JSONObject_o *)0x0) {
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)s,(MethodInfo *)0x0);
      if (__this_07 == (SimpleJSONFixed_JSONObject_o *)0x0) goto label_044a56b3;
      (*(__this_07->klass->vtable)._8_set_Item.methodPtr)(__this_07,"avatarKey",pSVar5);
    }
    if (in_RCX != (System_String_o *)0x0) {
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(in_RCX,(MethodInfo *)0x0);
      if (__this_07 == (SimpleJSONFixed_JSONObject_o *)0x0) goto label_044a56b3;
      (*(__this_07->klass->vtable)._8_set_Item.methodPtr)(__this_07,"bannerKey",pSVar5);
    }
    if (in_R8 == (MethodInfo *)0x0) goto label_044a563e;
    pSVar6 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
    SimpleJSONFixed_JSONObject___ctor(pSVar6,(MethodInfo *)0x0);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&_Stack_80,
               (System_Collections_Generic_Dictionary_object__object__o *)in_R8,MethodInfo_Dictionary_2_TKey_TValue_Enumerator_System_String_System);
    pSStack_98 = in_R9;
    if (pSVar6 == (SimpleJSONFixed_JSONObject_o *)0x0) {
      __this_02.fields._8_8_ = pSVar12;
      __this_02.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff30;
      __this_02.fields._current.fields.key = _Stack_80.genericMethod;
      __this_02.fields._current.fields.value = (Il2CppObject *)pIStack_78;
      __this_02.fields._32_8_ = pIStack_70;
      bVar3 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        (__this_02,(MethodInfo_3251160 *)&stack0xffffffffffffff40);
      _Var13 = _Stack_80;
      pIVar14 = pIStack_78;
      pIVar15 = pIStack_70;
      if ((char)bVar3 != '\0') goto label_044a56b8;
    }
    else {
      _Var13 = _Stack_80;
      pIVar14 = pIStack_78;
      pIVar15 = pIStack_70;
      while (__this_01.fields._8_8_ = pSVar12,
            __this_01.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff30,
            __this_01.fields._current.fields.key = _Var13.genericMethod,
            __this_01.fields._current.fields.value = (Il2CppObject *)pIVar14,
            __this_01.fields._32_8_ = pIVar15,
            bVar3 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                              (__this_01,(MethodInfo_3251160 *)&stack0xffffffffffffff40), (char)bVar3 != '\0')
      {
        auVar11 = il2cpp_runtime_helper_03343020((MethodInfo_3251160 *)&stack0xffffffffffffff40);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(auVar11._8_8_,(MethodInfo *)0x0);
        (*(pSVar6->klass->vtable)._8_set_Item.methodPtr)(pSVar6,auVar11._0_8_,pSVar5);
      }
    }
    __this_03.fields._8_8_ = pSVar12;
    __this_03.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff30;
    __this_03.fields._current.fields.key = _Var13.genericMethod;
    __this_03.fields._current.fields.value = (Il2CppObject *)pIVar14;
    __this_03.fields._32_8_ = pIVar15;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_03,(MethodInfo_3251280 *)&stack0xffffffffffffff40);
    __this_07 = pSVar12;
    do {
      pSVar12 = __this_07;
      if (__this_07 != (SimpleJSONFixed_JSONObject_o *)0x0) {
        (*(__this_07->klass->vtable)._8_set_Item.methodPtr)(__this_07,"socials",pSVar6);
        in_R9 = pSStack_98;
label_044a563e:
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        if (__this_07 != (SimpleJSONFixed_JSONObject_o *)0x0) {
          __this_00 = (ApplicationManagers_AccountManager_o *)**(undefined8 **)(TypeInfo_AccountManager + 0xb8);
          pSVar7 = (System_String_o *)
                   (*(__this_07->klass->vtable)._3_ToString.methodPtr)
                             (__this_07,(__this_07->klass->vtable)._3_ToString.method);
          if (__this_00 != (ApplicationManagers_AccountManager_o *)0x0) {
            pSVar4 = ApplicationManagers_AccountManager__PatchProfileJson
                               (__this_00,pSVar7,in_R9,(uint)unaff_BL,method_00);
            pUVar8 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                               ((UnityEngine_MonoBehaviour_o *)__this_00,pSVar4,(MethodInfo *)0x0);
            return (System_Collections_IEnumerator_o *)pUVar8;
          }
        }
      }
label_044a56b3:
      il2cpp_runtime_helper_022b2c90();
label_044a56b8:
      il2cpp_runtime_helper_03343020(&stack0xffffffffffffff40);
      __this_07 = pSVar12;
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        __this_07 = pSVar12;
      }
      SimpleJSONFixed_JSONNode__op_Implicit(s_00,(MethodInfo *)0x0);
      auVar10 = il2cpp_runtime_helper_022b2c90();
      if (auVar10._8_4_ != 1) goto label_044a5786;
      plVar9 = (long *)__cxa_begin_catch(auVar10._0_8_);
      lVar2 = *plVar9;
      __cxa_end_catch();
      __this_04.fields._8_8_ = __this_07;
      __this_04.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff30;
      __this_04.fields._current.fields.key = _Var13.genericMethod;
      __this_04.fields._current.fields.value = (Il2CppObject *)pIVar14;
      __this_04.fields._32_8_ = pIVar15;
      System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
                (__this_04,(MethodInfo_3251280 *)&stack0xffffffffffffff40);
    } while (lVar2 == 0);
    il2cpp_runtime_helper_022fefe0(lVar2);
label_044a5786:
    __this_05.fields._8_8_ = __this_07;
    __this_05.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff30;
    __this_05.fields._current.fields.key = _Var13.genericMethod;
    __this_05.fields._current.fields.value = (Il2CppObject *)pIVar14;
    __this_05.fields._32_8_ = pIVar15;
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              (__this_05,(MethodInfo_3251280 *)&stack0xffffffffffffff40);
    _Unwind_Resume(auVar10._0_8_);
  }
label_044a52eb:
  if (in_R9 != (System_Action_bool__string__o *)0x0) {
    pSVar4 = (System_Collections_IEnumerator_o *)
             (*(code *)(in_R9->fields).invoke_impl)
                       ((in_R9->fields).method_code,0,"not_logged_in",(in_R9->fields).method);
  }
  return pSVar4;
}


// ApplicationManagers.AccountManager$$PatchProfileJson
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__PatchProfileJson (ApplicationManagers_AccountManager_o* __this, System_String_o* json, System_Action_bool__string__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x44a57c0

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__PatchProfileJson
          (ApplicationManagers_AccountManager_o *__this,System_String_o *json,
          System_Action_bool__string__o *onComplete,bool_conflict reportNetworkError,MethodInfo *method)

{
  int32_t *piVar1;
  int iVar2;
  uint uVar3;
  UnityEngine_Object_o *x;
  System_Object_array *pSVar4;
  System_Collections_Generic_List_object__c *__this_00;
  long lVar5;
  char cVar6;
  bool_conflict bVar7;
  Il2CppObject *__this_01;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  System_Collections_IEnumerator_o *pSVar8;
  System_Collections_Generic_List_object__o *pSVar9;
  System_Collections_Generic_List_object__o *__this_02;
  UnityEngine_Coroutine_o *pUVar10;
  System_String_o *aJSON;
  SimpleJSONFixed_JSONNode_o *pSVar11;
  undefined8 *puVar12;
  undefined8 *puVar13;
  MethodInfo *method_00;
  Il2CppObject *item;
  long lVar14;
  System_Collections_Generic_List_object__o *__this_03;
  undefined1 auVar15 [12];
  
  if (g_data_057ae9bd == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PatchProfileJson_d__167);
    g_data_057ae9bd = '\x01';
  }
  __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_PatchProfileJson_d__167);
  cVar6 = '\0';
  item = __this_01;
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = 0;
  if (__this_01 != (Il2CppObject *)0x0) {
    __this_01[2].monitor = __this;
    il2cpp_runtime_helper_022b4080(&__this_01[2].monitor,__this);
    __this_01[3].klass = (Il2CppClass *)json;
    il2cpp_runtime_helper_022b4080(__this_01 + 3,json);
    __this_01[2].klass = (Il2CppClass *)onComplete;
    il2cpp_runtime_helper_022b4080(__this_01 + 2,onComplete);
    *(char *)&__this_01[3].monitor = (char)reportNetworkError;
    return (System_Collections_IEnumerator_o *)__this_01;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae9ba == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_CompleteCharacterInfoFetch);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_bool_string_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"not_logged_in");
    g_data_057ae9ba = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_AccountManager + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar7 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pSVar8 = (System_Collections_IEnumerator_o *)CONCAT44(extraout_var,bVar7);
  if ((char)bVar7 != '\0') goto label_044a5982;
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae971 == '\0') goto label_044a59f4;
label_044a593f:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_044a594f;
label_044a5a17:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aea19 == '\0') goto label_044a5a29;
label_044a595c:
    iVar2 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (g_data_057ae971 != '\0') goto label_044a593f;
label_044a59f4:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae971 = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_044a5a17;
label_044a594f:
    if (g_data_057aea19 != '\0') goto label_044a595c;
label_044a5a29:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea19 = '\x01';
    iVar2 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method_00 = (MethodInfo *)0x0;
  bVar7 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x18),(MethodInfo *)0x0);
  pSVar8 = (System_Collections_IEnumerator_o *)CONCAT44(extraout_var_00,bVar7);
  if ((char)bVar7 == '\0') {
    if (cVar6 == '\0') {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar8 = *(System_Collections_IEnumerator_o **)(TypeInfo_AccountManager + 0xb8);
      lVar14 = TypeInfo_AccountManager;
      if (*(char *)((long)&pSVar8[0xc].klass + 1) != '\0') {
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar8 = *(System_Collections_IEnumerator_o **)(TypeInfo_AccountManager + 0xb8);
        }
        lVar14 = TypeInfo_AccountManager;
        if (*(char *)&pSVar8[0xc].klass != '\0') {
          if (item == (Il2CppObject *)0x0) {
            return pSVar8;
          }
          if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
            pSVar8 = *(System_Collections_IEnumerator_o **)(TypeInfo_AccountManager + 0xb8);
          }
          pSVar11 = ApplicationManagers_AccountManager__CloneJson(pSVar8[0xc].monitor,method_00);
          pSVar8 = (System_Collections_IEnumerator_o *)
                   (*item[1].monitor)(item[4].klass,1,0,pSVar11,item[2].monitor,item[1].monitor);
          return pSVar8;
        }
      }
    }
    else {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      lVar14 = TypeInfo_AccountManager;
      *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xc1) = 0;
    }
    if (*(int *)(lVar14 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      lVar14 = TypeInfo_AccountManager;
    }
    lVar5 = MethodInfo_Void_Add;
    __this_03 = *(System_Collections_Generic_List_object__o **)(*(long *)(lVar14 + 0xb8) + 0xd0);
    if (__this_03 != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(__this_03->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (__this_03->fields)._items;
      if (pSVar4 != (System_Object_array *)0x0) {
        uVar3 = (__this_03->fields)._size;
        if (uVar3 < (uint)pSVar4->max_length) {
          (__this_03->fields)._size = uVar3 + 1;
          pSVar4->m_Items[(int)uVar3] = item;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar3);
          pSVar8 = *(System_Collections_IEnumerator_o **)(TypeInfo_AccountManager + 0xb8);
          cVar6 = *(char *)((long)&pSVar8[0xc].klass + 2);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this_03,item,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70)
                    );
          pSVar8 = *(System_Collections_IEnumerator_o **)(TypeInfo_AccountManager + 0xb8);
          cVar6 = *(char *)((long)&pSVar8[0xc].klass + 2);
        }
        if (cVar6 != '\0') {
          return pSVar8;
        }
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          pSVar8 = *(System_Collections_IEnumerator_o **)(TypeInfo_AccountManager + 0xb8);
        }
        *(undefined1 *)((long)&pSVar8[0xc].klass + 2) = 1;
        __this_00 = (System_Collections_Generic_List_object__c *)pSVar8->klass;
        pSVar9 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_bool_string_JSONNode);
        __this_03 = pSVar9;
        System_Action_bool__object__object____ctor();
        if (__this_00 != (System_Collections_Generic_List_object__c *)0x0) {
          if (g_data_057ae9be == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_GetCharacterInfoJson_d__168);
            g_data_057ae9be = '\x01';
          }
          __this_02 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_GetCharacterInfoJson_d__168);
          __this_03 = __this_02;
          System_Object___ctor((Il2CppObject *)__this_02,(MethodInfo *)0x0);
          *(undefined4 *)&(__this_02->fields)._items = 0;
          if (__this_02 != (System_Collections_Generic_List_object__o *)0x0) {
            __this_02[1].klass = __this_00;
            il2cpp_runtime_helper_022b4080(__this_02 + 1,__this_00);
            (__this_02->fields)._syncRoot = (Il2CppObject *)pSVar9;
            il2cpp_runtime_helper_022b4080(&(__this_02->fields)._syncRoot,pSVar9);
            pUVar10 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                                ((UnityEngine_MonoBehaviour_o *)__this_00,
                                 (System_Collections_IEnumerator_o *)__this_02,(MethodInfo *)0x0);
            return (System_Collections_IEnumerator_o *)pUVar10;
          }
        }
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae9c7 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
      g_data_057ae9c7 = '\x01';
    }
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar11 = (SimpleJSONFixed_JSONNode_o *)0x0;
    bVar7 = SimpleJSONFixed_JSONNode__op_Equality
                      ((SimpleJSONFixed_JSONNode_o *)__this_03,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar7 == '\0') {
      if (__this_03 == (System_Collections_Generic_List_object__o *)0x0) {
        auVar15 = il2cpp_runtime_helper_022b2c90();
        if (auVar15._8_4_ != 1) {
          _Unwind_Resume(auVar15._0_8_);
        }
        puVar12 = (undefined8 *)__cxa_begin_catch(auVar15._0_8_);
        cVar6 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar12);
        if (cVar6 == '\0') {
          puVar13 = (undefined8 *)__cxa_allocate_exception(8);
          *puVar13 = *puVar12;
          __cxa_throw(puVar13,&PTR_PTR_05215060,0);
        }
        __cxa_end_catch();
        pSVar11 = (SimpleJSONFixed_JSONNode_o *)0x0;
      }
      else {
        aJSON = (System_String_o *)(*(__this_03->klass->vtable)._3_ToString.methodPtr)(__this_03);
        pSVar11 = SimpleJSONFixed_JSON__Parse(aJSON,(MethodInfo *)0x0);
      }
    }
    return (System_Collections_IEnumerator_o *)pSVar11;
  }
label_044a5982:
  if (item == (Il2CppObject *)0x0) {
    return pSVar8;
  }
  pSVar8 = (System_Collections_IEnumerator_o *)
           (*item[1].monitor)(item[4].klass,0,"not_logged_in",0,item[2].monitor);
  return pSVar8;
}


// ApplicationManagers.AccountManager$$GetCharacterInfoJson
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__GetCharacterInfoJson (ApplicationManagers_AccountManager_o* __this, System_Action_bool__string__JSONNode__o* onComplete, const MethodInfo* method);
// 0x44a5d80

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__GetCharacterInfoJson
          (ApplicationManagers_AccountManager_o *__this,System_Action_bool__string__JSONNode__o *onComplete,
          MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  SimpleJSONFixed_JSONObject_c *pSVar2;
  ApplicationManagers_AccountManager_o *__this_00;
  undefined8 uVar3;
  bool_conflict bVar4;
  Il2CppClass *pIVar5;
  undefined4 extraout_var;
  undefined4 extraout_var_00;
  System_Collections_IEnumerator_o *pSVar6;
  Il2CppClass *__this_01;
  System_String_o *json;
  UnityEngine_Coroutine_o *pUVar7;
  Il2CppObject *__this_02;
  System_Collections_IEnumerator_o *extraout_RAX;
  MethodInfo *in_RCX;
  uint extraout_EDX;
  Il2CppClass *extraout_RDX;
  undefined4 uVar8;
  System_Action_bool__string__JSONNode__o *onComplete_00;
  MethodInfo *pMVar9;
  Il2CppClass *fallbackCharacterInfo;
  Il2CppClass *pIVar10;
  Il2CppObject *__this_03;
  undefined1 in_R8B;
  MethodInfo *in_R9;
  
  if (g_data_057ae9be == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GetCharacterInfoJson_d__168);
    g_data_057ae9be = '\x01';
  }
  pIVar5 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_GetCharacterInfoJson_d__168);
  onComplete_00 = (System_Action_bool__string__JSONNode__o *)0x0;
  fallbackCharacterInfo = pIVar5;
  System_Object___ctor((Il2CppObject *)pIVar5,(MethodInfo *)0x0);
  *(undefined4 *)&(pIVar5->_1).name = 0;
  if (pIVar5 != (Il2CppClass *)0x0) {
    *(ApplicationManagers_AccountManager_o **)&(pIVar5->_1).byval_arg.bits = __this;
    il2cpp_runtime_helper_022b4080(&(pIVar5->_1).byval_arg.bits,__this);
    (pIVar5->_1).byval_arg.data = onComplete;
    il2cpp_runtime_helper_022b4080(&(pIVar5->_1).byval_arg,onComplete);
    return (System_Collections_IEnumerator_o *)pIVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae9bb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONObject);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&"characterInfo");
    il2cpp_runtime_helper_023445d0(&"not_logged_in");
    g_data_057ae9bb = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_AccountManager + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  pSVar6 = (System_Collections_IEnumerator_o *)CONCAT44(extraout_var,bVar4);
  if ((char)bVar4 != '\0') goto label_044a5f1c;
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae971 != '\0') goto label_044a5ed9;
label_044a604a:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae971 = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_044a5ee9;
label_044a606d:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aea19 != '\0') goto label_044a5ef6;
label_044a607f:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea19 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (g_data_057ae971 == '\0') goto label_044a604a;
label_044a5ed9:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_044a606d;
label_044a5ee9:
    if (g_data_057aea19 == '\0') goto label_044a607f;
label_044a5ef6:
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x18),(MethodInfo *)0x0);
  pSVar6 = (System_Collections_IEnumerator_o *)CONCAT44(extraout_var_00,bVar4);
  if ((char)bVar4 == '\0') {
    __this_01 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
    pMVar9 = (MethodInfo *)0x0;
    pIVar10 = __this_01;
    SimpleJSONFixed_JSONObject___ctor((SimpleJSONFixed_JSONObject_o *)__this_01,(MethodInfo *)0x0);
    uVar3 = "characterInfo";
    pIVar5 = fallbackCharacterInfo;
    if (fallbackCharacterInfo == (Il2CppClass *)0x0) {
      pIVar5 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_JSONObject);
      pMVar9 = (MethodInfo *)0x0;
      pIVar10 = pIVar5;
      SimpleJSONFixed_JSONObject___ctor((SimpleJSONFixed_JSONObject_o *)pIVar5,(MethodInfo *)0x0);
    }
    if (__this_01 != (Il2CppClass *)0x0) {
      pSVar2 = (__this_01->_1).image;
      in_RCX = (pSVar2->vtable)._8_set_Item.method;
      (*(pSVar2->vtable)._8_set_Item.methodPtr)(__this_01,uVar3,pIVar5);
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_00 = (ApplicationManagers_AccountManager_o *)**(undefined8 **)(TypeInfo_AccountManager + 0xb8);
      pSVar2 = (__this_01->_1).image;
      pMVar9 = (pSVar2->vtable)._3_ToString.method;
      json = (System_String_o *)(*(pSVar2->vtable)._3_ToString.methodPtr)();
      pIVar10 = __this_01;
      if (__this_00 != (ApplicationManagers_AccountManager_o *)0x0) {
        pSVar6 = ApplicationManagers_AccountManager__PutCharacterInfoJson
                           (__this_00,json,(SimpleJSONFixed_JSONNode_o *)fallbackCharacterInfo,onComplete_00,
                            extraout_EDX & 0xff,in_R9);
        pUVar7 = UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                           ((UnityEngine_MonoBehaviour_o *)__this_00,pSVar6,(MethodInfo *)0x0);
        return (System_Collections_IEnumerator_o *)pUVar7;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae9bf == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_PutCharacterInfoJson_d__169);
      g_data_057ae9bf = '\x01';
    }
    __this_02 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_PutCharacterInfoJson_d__169);
    uVar8 = 0;
    __this_03 = __this_02;
    System_Object___ctor(__this_02,(MethodInfo *)0x0);
    *(undefined4 *)&__this_02[1].klass = 0;
    if (__this_02 == (Il2CppObject *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor(__this_03,(MethodInfo *)0x0);
      *(undefined4 *)&__this_03[1].klass = uVar8;
      return extraout_RAX;
    }
    __this_02[3].klass = pIVar10;
    il2cpp_runtime_helper_022b4080(__this_02 + 3,pIVar10);
    __this_02[3].monitor = pMVar9;
    il2cpp_runtime_helper_022b4080(&__this_02[3].monitor,pMVar9);
    __this_02[2].klass = extraout_RDX;
    il2cpp_runtime_helper_022b4080(__this_02 + 2,extraout_RDX);
    __this_02[2].monitor = in_RCX;
    il2cpp_runtime_helper_022b4080(&__this_02[2].monitor,in_RCX);
    *(undefined1 *)&__this_02[4].klass = in_R8B;
    return (System_Collections_IEnumerator_o *)__this_02;
  }
label_044a5f1c:
  if (onComplete_00 == (System_Action_bool__string__JSONNode__o *)0x0) {
    return pSVar6;
  }
  pSVar6 = (System_Collections_IEnumerator_o *)
           (*(code *)(onComplete_00->fields).invoke_impl)
                     ((onComplete_00->fields).method_code,0,"not_logged_in",0,(onComplete_00->fields).method);
  return pSVar6;
}


// ApplicationManagers.AccountManager$$PutCharacterInfoJson
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__PutCharacterInfoJson (ApplicationManagers_AccountManager_o* __this, System_String_o* json, SimpleJSONFixed_JSONNode_o* fallbackCharacterInfo, System_Action_bool__string__JSONNode__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x44a60c0

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__PutCharacterInfoJson
          (ApplicationManagers_AccountManager_o *__this,System_String_o *json,
          SimpleJSONFixed_JSONNode_o *fallbackCharacterInfo,
          System_Action_bool__string__JSONNode__o *onComplete,bool_conflict reportNetworkError,
          MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057ae9bf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_PutCharacterInfoJson_d__169);
    g_data_057ae9bf = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_PutCharacterInfoJson_d__169);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[3].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 3,__this);
    __this_00[3].monitor = json;
    il2cpp_runtime_helper_022b4080(&__this_00[3].monitor,json);
    __this_00[2].klass = (Il2CppClass *)fallbackCharacterInfo;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,fallbackCharacterInfo);
    __this_00[2].monitor = onComplete;
    il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,onComplete);
    *(char *)&__this_00[4].klass = (char)reportNetworkError;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// ApplicationManagers.AccountManager$$SendMeJson
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__SendMeJson (ApplicationManagers_AccountManager_o* __this, System_String_o* method, System_String_o* path, System_String_o* json, System_Action_bool__string__JSONNode__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x44a6200

System_Collections_IEnumerator_o * ApplicationManagers_AccountManager__SendMeJson(void)

{
  Il2CppObject *__this;
  System_Collections_IEnumerator_o *extraout_RAX;
  Il2CppClass *in_RCX;
  Il2CppClass *in_RDX;
  undefined4 uVar1;
  Il2CppClass *in_RSI;
  void *in_RDI;
  Il2CppObject *__this_00;
  void *in_R8;
  undefined1 in_R9B;
  
  if (g_data_057ae9c0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SendMeJson_d__170);
    g_data_057ae9c0 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SendMeJson_d__170);
  uVar1 = 0;
  __this_00 = __this;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0;
  if (__this != (Il2CppObject *)0x0) {
    __this[2].monitor = in_RDI;
    il2cpp_runtime_helper_022b4080(&__this[2].monitor);
    __this[2].klass = in_RSI;
    il2cpp_runtime_helper_022b4080(__this + 2);
    __this[3].klass = in_RDX;
    il2cpp_runtime_helper_022b4080(__this + 3);
    __this[4].klass = in_RCX;
    il2cpp_runtime_helper_022b4080(__this + 4);
    __this[3].monitor = in_R8;
    il2cpp_runtime_helper_022b4080(&__this[3].monitor);
    *(undefined1 *)&__this[4].monitor = in_R9B;
    return (System_Collections_IEnumerator_o *)__this;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = uVar1;
  return extraout_RAX;
}


// ApplicationManagers.AccountManager$$SendMeReadJson
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__SendMeReadJson (ApplicationManagers_AccountManager_o* __this, System_String_o* path, System_Action_bool__string__JSONNode__o* onComplete, const MethodInfo* method);
// 0x44a6300

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__SendMeReadJson
          (ApplicationManagers_AccountManager_o *__this,System_String_o *path,
          System_Action_bool__string__JSONNode__o *onComplete,MethodInfo *method)

{
  Il2CppObject *__this_00;
  System_Collections_IEnumerator_o *extraout_RAX;
  undefined4 uVar1;
  Il2CppObject *__this_01;
  
  if (g_data_057ae9c1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SendMeReadJson_d__171);
    g_data_057ae9c1 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_SendMeReadJson_d__171);
  uVar1 = 0;
  __this_01 = __this_00;
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_helper_022b4080(__this_00 + 2,__this);
    __this_00[2].monitor = path;
    il2cpp_runtime_helper_022b4080(&__this_00[2].monitor,path);
    __this_00[3].monitor = onComplete;
    il2cpp_runtime_helper_022b4080(&__this_00[3].monitor,onComplete);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor(__this_01,(MethodInfo *)0x0);
  *(undefined4 *)&__this_01[1].klass = uVar1;
  return extraout_RAX;
}


// ApplicationManagers.AccountManager$$ApplyProfileResponse
// il2cpp: void ApplicationManagers_AccountManager__ApplyProfileResponse (SimpleJSONFixed_JSONNode_o* profile, const MethodInfo* method);
// 0x44a2ca0

void ApplicationManagers_AccountManager__ApplyProfileResponse
               (SimpleJSONFixed_JSONNode_o *profile,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  SimpleJSONFixed_JSONNode_o *a;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_00;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_01;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_02;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o __this_03;
  char cVar3;
  bool_conflict bVar4;
  ApplicationManagers_AccountLoginResponse_ProfileData_o *pAVar5;
  System_String_o *pSVar6;
  long *plVar7;
  System_String_o *value;
  MethodInfo *pMVar8;
  Il2CppMethodPointer pIVar9;
  Il2CppMethodPointer pIVar10;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar11;
  InvokerMethod pIVar12;
  char *pcVar13;
  Il2CppObject *pIVar14;
  Il2CppClass *pIVar15;
  Il2CppType *pIVar16;
  Il2CppType **ppIVar17;
  System_Collections_Generic_List_T__o *pSVar18;
  _union_13 _Var19;
  _union_14 _Var20;
  Il2CppMethodPointer local_c0;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_b8;
  InvokerMethod local_b0;
  Il2CppObject *pIStack_a8;
  Il2CppClass *local_a0;
  Il2CppType *pIStack_98;
  System_Collections_Generic_List_T__o *local_90;
  _union_13 _Stack_88;
  _union_14 local_80;
  Il2CppMethodPointer local_78;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSStack_70;
  InvokerMethod local_68;
  Il2CppObject *pIStack_60;
  Il2CppClass *local_58;
  Il2CppType *pIStack_50;
  System_Collections_Generic_List_T__o *local_48;
  _union_13 _Stack_40;
  _union_14 local_38;
  
  if (g_data_057ae9c2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_set_Item);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae9c2 = '\x01';
  }
  ppIVar17 = (Il2CppType **)0x0;
  _Var19.rgctx_data = (Il2CppRGCTXData *)0x0;
  pIVar15 = (Il2CppClass *)0x0;
  pIVar16 = (Il2CppType *)0x0;
  pIVar12 = (InvokerMethod)0x0;
  pcVar13 = (char *)0x0;
  pIVar9 = (Il2CppMethodPointer)0x0;
  pIVar10 = (Il2CppMethodPointer)0x0;
  _Var20.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_48 = (System_Collections_Generic_List_T__o *)0x0;
  _Stack_40.rgctx_data = (Il2CppRGCTXData *)0x0;
  local_58 = (Il2CppClass *)0x0;
  pIStack_50 = (Il2CppType *)0x0;
  local_68 = (InvokerMethod)0x0;
  pIStack_60 = (Il2CppObject *)0x0;
  local_78 = (Il2CppMethodPointer)0x0;
  pSStack_70 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_38.genericMethod = (SimpleJSONFixed_JSONNode_o *)0x0;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pMVar8 = (MethodInfo *)0x0;
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality(profile,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  pAVar5 = ApplicationManagers_AccountLoginResponse_ProfileData__Parse(profile,pMVar8);
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 == '\0') goto label_044a2dfa;
label_044a2d93:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_044a2d9f;
label_044a2e19:
    il2cpp_runtime_helper_02337ed0();
    lVar2 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x38);
  }
  else {
    if (g_data_057ae0d4 != '\0') goto label_044a2d93;
label_044a2dfa:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_044a2e19;
label_044a2d9f:
    lVar2 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x38);
  }
  if (lVar2 != 0) {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      if (g_data_057ae0d4 == '\0') goto label_044a2e3f;
label_044a2dc3:
      if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_044a2dd3;
label_044a2e62:
      il2cpp_runtime_helper_02337ed0();
      lVar2 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x38);
    }
    else {
      if (g_data_057ae0d4 != '\0') goto label_044a2dc3;
label_044a2e3f:
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae0d4 = '\x01';
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_044a2e62;
label_044a2dd3:
      lVar2 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x38);
    }
    if (lVar2 == 0) goto label_044a336a;
    *(ApplicationManagers_AccountLoginResponse_ProfileData_o **)(lVar2 + 0x48) = pAVar5;
    il2cpp_runtime_helper_022b4080(lVar2 + 0x48,pAVar5);
  }
  if (pAVar5 == (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0) goto label_044a336a;
  pSVar6 = (pAVar5->fields).Description;
  if (pSVar6 == (System_String_o *)0x0) {
    pSVar6 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_044a2ffd;
label_044a2eb4:
    if (g_data_057aea26 != '\0') goto label_044a2ec1;
label_044a300f:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea26 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_044a2eb4;
label_044a2ffd:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aea26 == '\0') goto label_044a300f;
label_044a2ec1:
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(System_String_o **)(lVar2 + 0x90) = pSVar6;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x90,pSVar6);
  pSVar6 = (pAVar5->fields).AvatarKey;
  if (pSVar6 == (System_String_o *)0x0) {
    pSVar6 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_044a3067;
label_044a2f0b:
    if (g_data_057aea27 != '\0') goto label_044a2f18;
label_044a3079:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea27 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_044a2f0b;
label_044a3067:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aea27 == '\0') goto label_044a3079;
label_044a2f18:
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(System_String_o **)(lVar2 + 0x98) = pSVar6;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x98,pSVar6);
  pSVar6 = (pAVar5->fields).BannerKey;
  if (pSVar6 == (System_String_o *)0x0) {
    pSVar6 = (System_String_o *)**(long **)(g_data_057b9c00 + 0xb8);
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_044a30d1;
label_044a2f62:
    if (g_data_057aea28 != '\0') goto label_044a2f6f;
label_044a30e3:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea28 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_044a2f62;
label_044a30d1:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057aea28 == '\0') goto label_044a30e3;
label_044a2f6f:
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(System_String_o **)(lVar2 + 0xa0) = pSVar6;
  il2cpp_runtime_helper_022b4080(lVar2 + 0xa0,pSVar6);
  if (g_data_057aea29 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea29 = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_044a3136;
label_044a2fb9:
    pMVar8 = *(MethodInfo **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xa8);
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_044a2fb9;
label_044a3136:
    il2cpp_runtime_helper_02337ed0();
    pMVar8 = *(MethodInfo **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xa8);
  }
  if (pMVar8 == (MethodInfo *)0x0) {
label_044a336a:
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae99e == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae99e = '\x01';
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    if (g_data_057ae9c8 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae9c8 = '\x01';
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
    *(undefined1 *)(lVar2 + 0xb1) = 0;
    *(undefined1 *)(lVar2 + 0xc1) = 0;
    return;
  }
  System_Collections_Generic_Dictionary_object__object___Clear
            ((System_Collections_Generic_Dictionary_object__object__o *)pMVar8,MethodInfo_Void_Clear);
  ApplicationManagers_AccountManager__MarkOwnProfileCacheFresh(pMVar8);
  a = (pAVar5->fields).Socials;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_044a336a;
    SimpleJSONFixed_JSONNode__get_Keys
              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c0,a,(MethodInfo *)0x0);
    local_38.genericMethod = local_80.genericMethod;
    local_48 = local_90;
    _Stack_40.methodMetadataHandle = _Stack_88.methodMetadataHandle;
    local_58 = local_a0;
    pIStack_50 = pIStack_98;
    local_68 = local_b0;
    pIStack_60 = pIStack_a8;
    local_78 = local_c0;
    pSStack_70 = pSStack_b8;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)pIVar10;
    __this_00.fields.m_Enumerator.fields._0_8_ = pIVar9;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar12;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = (Il2CppObject *)pcVar13;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar15;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar16;
    __this_00.fields.m_Enumerator.fields.m_Array.fields._list =
         (System_Collections_Generic_List_T__o *)ppIVar17;
    __this_00.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var19.rgctx_data;
    __this_00.fields.m_Enumerator.fields.m_Array.fields._current = _Var20.genericMethod;
    SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c0,__this_00,(MethodInfo *)&local_78);
    __this_01.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSStack_b8;
    __this_01.fields.m_Enumerator.fields._0_8_ = local_c0;
    __this_01.fields.m_Enumerator.fields.m_Object.fields._8_8_ = local_b0;
    __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIStack_a8;
    __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)local_a0;
    __this_01.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIStack_98;
    __this_01.fields.m_Enumerator.fields.m_Array.fields._list = local_90;
    __this_01.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Stack_88.rgctx_data;
    __this_01.fields.m_Enumerator.fields.m_Array.fields._current = local_80.genericMethod;
    bVar4 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext(__this_01,(MethodInfo *)&stack0xfffffffffffffef8)
    ;
    cVar3 = (char)bVar4;
    pIVar9 = local_c0;
    pSVar11 = pSStack_b8;
    pIVar12 = local_b0;
    pIVar14 = pIStack_a8;
    pIVar15 = local_a0;
    pIVar16 = pIStack_98;
    pSVar18 = local_90;
    _Var19 = _Stack_88;
    _Var20 = local_80;
    while (cVar3 != '\0') {
      __this_03.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar11;
      __this_03.fields.m_Enumerator.fields._0_8_ = pIVar9;
      __this_03.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar12;
      __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar14;
      __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar15;
      __this_03.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar16;
      __this_03.fields.m_Enumerator.fields.m_Array.fields._list = pSVar18;
      __this_03.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var19.rgctx_data;
      __this_03.fields.m_Enumerator.fields.m_Array.fields._current = _Var20.genericMethod;
      pSVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                         (__this_03,(MethodInfo *)&stack0xfffffffffffffef8);
      plVar7 = (long *)(*(a->klass->vtable)._7_get_Item.methodPtr)
                                 (a,pSVar6,(a->klass->vtable)._7_get_Item.method);
      if (plVar7 == (long *)0x0) goto label_044a336a;
      value = (System_String_o *)(**(code **)(*plVar7 + 0x1c8))(plVar7);
      bVar4 = System_String__IsNullOrWhiteSpace(pSVar6,(MethodInfo *)0x0);
      if (((char)bVar4 == '\0') &&
         (bVar4 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0), (char)bVar4 == '\0')) {
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
          if (g_data_057aea29 == '\0') goto label_044a332c;
label_044a330c:
          iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
        }
        else {
          if (g_data_057aea29 != '\0') goto label_044a330c;
label_044a332c:
          il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
          g_data_057aea29 = '\x01';
          iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        __this = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_AccountManager + 0xb8) + 0xa8);
        if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_044a336a;
        System_Collections_Generic_Dictionary_object__object___set_Item
                  (__this,(Il2CppObject *)pSVar6,(Il2CppObject *)value,MethodInfo_Void_set_Item);
      }
      __this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar11;
      __this_02.fields.m_Enumerator.fields._0_8_ = pIVar9;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar12;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar14;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.value = (Il2CppObject *)pIVar15;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar16;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._list = pSVar18;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var19.rgctx_data;
      __this_02.fields.m_Enumerator.fields.m_Array.fields._current = _Var20.genericMethod;
      bVar4 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        (__this_02,(MethodInfo *)&stack0xfffffffffffffef8);
      cVar3 = (char)bVar4;
    }
  }
  return;
}


// ApplicationManagers.AccountManager$$CompleteProfileFetch
// il2cpp: void ApplicationManagers_AccountManager__CompleteProfileFetch (bool success, System_String_o* error, const MethodInfo* method);
// 0x44a6570

void ApplicationManagers_AccountManager__CompleteProfileFetch
               (bool_conflict success,System_String_o *error,MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  System_Collections_Generic_List_object__o *__this;
  long lVar3;
  Il2CppObject *pIVar4;
  MethodInfo *pMVar5;
  bool_conflict bVar6;
  System_Object_array *pSVar7;
  Il2CppMethodPointer pIVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  int iVar11;
  SimpleJSONFixed_JSONNode_o *characterInfo;
  ulong uVar12;
  ulong uVar13;
  MethodInfo *pMVar14;
  MethodInfo *pMVar15;
  char cVar16;
  Il2CppClass *pIVar17;
  
  pMVar14 = (MethodInfo *)error;
  if (g_data_057ae9c3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Action_2_Boolean_String_ToArray);
    g_data_057ae9c3 = '\x01';
    iVar11 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
    pMVar15 = TypeInfo_AccountManager;
  }
  else {
    iVar11 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
    pMVar15 = TypeInfo_AccountManager;
  }
  TypeInfo_AccountManager = pMVar15;
  if (iVar11 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar15 = TypeInfo_AccountManager;
    TypeInfo_AccountManager[2].virtualMethodPointer[0xb2] = (code)0x0;
  }
  else {
    ((MethodInfo *)((long)pMVar15 + 0xb0))->virtualMethodPointer[0xb2] = (code)0x0;
  }
  if ((char)success == '\0') {
    iVar11 = *(int *)((long)&((MethodInfo *)((long)pMVar15 + 0xb0))->parameters + 4);
  }
  else if (*(int *)((long)&((MethodInfo *)((long)pMVar15 + 0xb0))->parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    ApplicationManagers_AccountManager__MarkOwnProfileCacheFresh(pMVar15);
    iVar11 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
    pMVar15 = TypeInfo_AccountManager;
  }
  else {
    ApplicationManagers_AccountManager__MarkOwnProfileCacheFresh(pMVar15);
    iVar11 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
    pMVar15 = TypeInfo_AccountManager;
  }
  if (iVar11 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pIVar17 = *(Il2CppClass **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0xb8);
    pMVar15 = MethodInfo_Action_2_Boolean_String_ToArray;
  }
  else {
    pIVar17 = *(Il2CppClass **)(((MethodInfo *)((long)pMVar15 + 0xb0))->virtualMethodPointer + 0xb8);
    pMVar15 = MethodInfo_Action_2_Boolean_String_ToArray;
  }
  MethodInfo_Action_2_Boolean_String_ToArray = pMVar15;
  if (pIVar17 != (Il2CppClass *)0x0) {
    pSVar7 = System_Collections_Generic_List_object___ToArray
                       ((System_Collections_Generic_List_object__o *)pIVar17,(MethodInfo_362E340 *)pMVar15);
    lVar3 = *(long *)(TypeInfo_AccountManager[2].virtualMethodPointer + 0xb8);
    pMVar14 = pMVar15;
    if (lVar3 != 0) {
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      iVar2 = *(int32_t *)(lVar3 + 0x18);
      *(undefined4 *)(lVar3 + 0x18) = 0;
      if (0 < iVar2) {
        pIVar17 = *(Il2CppClass **)(lVar3 + 0x10);
        pMVar14 = (MethodInfo *)0x0;
        System_Array__Clear((System_Array_o *)pIVar17,0,iVar2,(MethodInfo *)0x0);
      }
      if (pSVar7 != (System_Object_array *)0x0) {
        if ((int)pSVar7->max_length < 1) {
          return;
        }
        uVar13 = 0;
        if ((pSVar7->max_length & 0xffffffff) != 0) {
          do {
            pIVar4 = pSVar7->m_Items[uVar13];
            if (pIVar4 != (Il2CppObject *)0x0) {
              if (pIVar4 == (Il2CppObject *)0x0) goto label_044a674c;
              pIVar17 = pIVar4[4].klass;
              pMVar14 = (MethodInfo *)((ulong)(uint)success & 0xff);
              (*pIVar4[1].monitor)
                        (pIVar17,(MethodInfo *)((ulong)(uint)success & 0xff),error,pIVar4[2].monitor);
            }
            uVar13 = uVar13 + 1;
            uVar1 = (uint)pSVar7->max_length;
            if ((long)(int)uVar1 <= (long)uVar13) {
              return;
            }
          } while (uVar13 < uVar1);
        }
        il2cpp_runtime_helper_022b2ca0();
      }
    }
  }
label_044a674c:
  cVar16 = (char)pIVar17;
  il2cpp_runtime_helper_022b2c90();
  pMVar15 = pMVar14;
  if (g_data_057ae9c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Action_3_Boolean_String_SimpleJSONFixed_JSONNode_ToArray);
    g_data_057ae9c4 = '\x01';
    iVar11 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
    pMVar5 = TypeInfo_AccountManager;
  }
  else {
    iVar11 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
    pMVar5 = TypeInfo_AccountManager;
  }
  TypeInfo_AccountManager = pMVar5;
  if (iVar11 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pMVar5 = TypeInfo_AccountManager;
    TypeInfo_AccountManager[2].virtualMethodPointer[0xc2] = (code)0x0;
  }
  else {
    ((MethodInfo *)((long)pMVar5 + 0xb0))->virtualMethodPointer[0xc2] = (code)0x0;
  }
  if (cVar16 == '\0') {
    iVar11 = *(int *)((long)&((MethodInfo *)((long)pMVar5 + 0xb0))->parameters + 4);
  }
  else {
    if (*(int *)((long)&((MethodInfo *)((long)pMVar5 + 0xb0))->parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    ApplicationManagers_AccountManager__MarkCharacterInfoCacheFresh(characterInfo,pMVar15);
    iVar11 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
    pMVar5 = TypeInfo_AccountManager;
  }
  if (iVar11 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this = *(System_Collections_Generic_List_object__o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0xd0);
    pMVar15 = MethodInfo_Action_3_Boolean_String_SimpleJSONFixed_JSONNode_ToArray;
  }
  else {
    __this = *(System_Collections_Generic_List_object__o **)(pMVar5[2].virtualMethodPointer + 0xd0);
    pMVar15 = MethodInfo_Action_3_Boolean_String_SimpleJSONFixed_JSONNode_ToArray;
  }
  MethodInfo_Action_3_Boolean_String_SimpleJSONFixed_JSONNode_ToArray = pMVar15;
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar7 = System_Collections_Generic_List_object___ToArray(__this,(MethodInfo_362E340 *)pMVar15);
    pIVar8 = TypeInfo_AccountManager[2].virtualMethodPointer;
    lVar3 = *(long *)(pIVar8 + 0xd0);
    if (lVar3 != 0) {
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      iVar2 = *(int32_t *)(lVar3 + 0x18);
      *(undefined4 *)(lVar3 + 0x18) = 0;
      if (0 < iVar2) {
        pMVar15 = (MethodInfo *)0x0;
        System_Array__Clear(*(System_Array_o **)(lVar3 + 0x10),0,iVar2,(MethodInfo *)0x0);
        pIVar8 = TypeInfo_AccountManager[2].virtualMethodPointer;
      }
      pIVar17 = *(Il2CppClass **)(pIVar8 + 200);
      pSVar9 = ApplicationManagers_AccountManager__CloneJson((SimpleJSONFixed_JSONNode_o *)pIVar17,pMVar15);
      if (pSVar7 != (System_Object_array *)0x0) {
        iVar11 = (int)pSVar7->max_length;
        uVar13 = pSVar7->max_length & 0xffffffff;
        if (cVar16 == '\0') {
          if (iVar11 < 1) {
            return;
          }
          uVar12 = 0;
          if (uVar13 != 0) {
            do {
              pIVar4 = pSVar7->m_Items[uVar12];
              if (pIVar4 != (Il2CppObject *)0x0) {
                if (pIVar4 == (Il2CppObject *)0x0) goto label_044a69cc;
                pIVar17 = pIVar4[4].klass;
                pMVar15 = (MethodInfo *)0x0;
                (*pIVar4[1].monitor)(pIVar17,0,pMVar14,0,pIVar4[2].monitor);
              }
              uVar12 = uVar12 + 1;
              uVar1 = (uint)pSVar7->max_length;
              if ((long)(int)uVar1 <= (long)uVar12) {
                return;
              }
            } while (uVar12 < uVar1);
          }
        }
        else {
          if (iVar11 < 1) {
            return;
          }
          uVar12 = 0;
          if (uVar13 != 0) {
            do {
              pIVar4 = pSVar7->m_Items[uVar12];
              if (pIVar4 != (Il2CppObject *)0x0) {
                if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar10 = ApplicationManagers_AccountManager__CloneJson(pSVar9,pMVar15);
                if (pIVar4 == (Il2CppObject *)0x0) goto label_044a69cc;
                pIVar17 = pIVar4[4].klass;
                pMVar15 = (MethodInfo *)0x1;
                (*pIVar4[1].monitor)(pIVar17,1,pMVar14,pSVar10,pIVar4[2].monitor);
              }
              uVar12 = uVar12 + 1;
              uVar1 = (uint)pSVar7->max_length;
              if ((long)(int)uVar1 <= (long)uVar12) {
                return;
              }
            } while (uVar12 < uVar1);
          }
        }
        il2cpp_runtime_helper_022b2ca0();
        if (g_data_057ae9c6 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
          il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
          g_data_057ae9c6 = '\x01';
        }
        if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = ApplicationManagers_AccountManager__CloneJson((SimpleJSONFixed_JSONNode_o *)pIVar17,pMVar15);
        pIVar8 = TypeInfo_AccountManager[2].virtualMethodPointer;
        *(SimpleJSONFixed_JSONNode_o **)(pIVar8 + 200) = pSVar9;
        il2cpp_runtime_helper_022b4080(pIVar8 + 200);
        pSVar9 = *(SimpleJSONFixed_JSONNode_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 200);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar9,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        pIVar8 = TypeInfo_AccountManager[2].virtualMethodPointer;
        pIVar8[0xc0] = SUB41(bVar6,0);
        pIVar8[0xc1] = SUB41(bVar6,0);
        return;
      }
    }
  }
label_044a69cc:
  il2cpp_runtime_helper_022b2c90();
  return;
}


// ApplicationManagers.AccountManager$$CompleteCharacterInfoFetch
// il2cpp: void ApplicationManagers_AccountManager__CompleteCharacterInfoFetch (bool success, System_String_o* error, SimpleJSONFixed_JSONNode_o* characterInfo, const MethodInfo* method);
// 0x44a6760

void ApplicationManagers_AccountManager__CompleteCharacterInfoFetch
               (bool_conflict success,System_String_o *error,SimpleJSONFixed_JSONNode_o *characterInfo,
               MethodInfo *method)

{
  int32_t length;
  uint uVar1;
  System_Collections_Generic_List_object__o *__this;
  long lVar2;
  Il2CppObject *pIVar3;
  bool_conflict bVar4;
  System_Object_array *pSVar5;
  long lVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  ulong uVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  int iVar10;
  ulong uVar11;
  MethodInfo *pMVar12;
  Il2CppClass *node;
  
  pMVar12 = (MethodInfo *)error;
  if (g_data_057ae9c4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Action_3_Boolean_String_SimpleJSONFixed_JSONNode_ToArray);
    g_data_057ae9c4 = '\x01';
    iVar10 = *(int *)(TypeInfo_AccountManager + 0xe4);
    lVar6 = TypeInfo_AccountManager;
  }
  else {
    iVar10 = *(int *)(TypeInfo_AccountManager + 0xe4);
    lVar6 = TypeInfo_AccountManager;
  }
  TypeInfo_AccountManager = lVar6;
  if (iVar10 == 0) {
    il2cpp_runtime_helper_02337ed0();
    lVar6 = TypeInfo_AccountManager;
    *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xc2) = 0;
  }
  else {
    *(undefined1 *)(*(long *)(lVar6 + 0xb8) + 0xc2) = 0;
  }
  if ((char)success == '\0') {
    iVar10 = *(int *)(lVar6 + 0xe4);
  }
  else {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    ApplicationManagers_AccountManager__MarkCharacterInfoCacheFresh(characterInfo,pMVar12);
    iVar10 = *(int *)(TypeInfo_AccountManager + 0xe4);
    lVar6 = TypeInfo_AccountManager;
  }
  if (iVar10 == 0) {
    il2cpp_runtime_helper_02337ed0();
    __this = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xd0);
    pMVar12 = MethodInfo_Action_3_Boolean_String_SimpleJSONFixed_JSONNode_ToArray;
  }
  else {
    __this = *(System_Collections_Generic_List_object__o **)(*(long *)(lVar6 + 0xb8) + 0xd0);
    pMVar12 = MethodInfo_Action_3_Boolean_String_SimpleJSONFixed_JSONNode_ToArray;
  }
  MethodInfo_Action_3_Boolean_String_SimpleJSONFixed_JSONNode_ToArray = pMVar12;
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar5 = System_Collections_Generic_List_object___ToArray(__this,(MethodInfo_362E340 *)pMVar12);
    lVar6 = *(long *)(TypeInfo_AccountManager + 0xb8);
    lVar2 = *(long *)(lVar6 + 0xd0);
    if (lVar2 != 0) {
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      length = *(int32_t *)(lVar2 + 0x18);
      *(undefined4 *)(lVar2 + 0x18) = 0;
      if (0 < length) {
        pMVar12 = (MethodInfo *)0x0;
        System_Array__Clear(*(System_Array_o **)(lVar2 + 0x10),0,length,(MethodInfo *)0x0);
        lVar6 = *(long *)(TypeInfo_AccountManager + 0xb8);
      }
      node = *(Il2CppClass **)(lVar6 + 200);
      pSVar7 = ApplicationManagers_AccountManager__CloneJson((SimpleJSONFixed_JSONNode_o *)node,pMVar12);
      if (pSVar5 != (System_Object_array *)0x0) {
        iVar10 = (int)pSVar5->max_length;
        uVar8 = pSVar5->max_length & 0xffffffff;
        if ((char)success == '\0') {
          if (iVar10 < 1) {
            return;
          }
          uVar11 = 0;
          if (uVar8 != 0) {
            do {
              pIVar3 = pSVar5->m_Items[uVar11];
              if (pIVar3 != (Il2CppObject *)0x0) {
                if (pIVar3 == (Il2CppObject *)0x0) goto label_044a69cc;
                node = pIVar3[4].klass;
                pMVar12 = (MethodInfo *)0x0;
                (*pIVar3[1].monitor)(node,0,error,0,pIVar3[2].monitor);
              }
              uVar11 = uVar11 + 1;
              uVar1 = (uint)pSVar5->max_length;
              if ((long)(int)uVar1 <= (long)uVar11) {
                return;
              }
            } while (uVar11 < uVar1);
          }
        }
        else {
          if (iVar10 < 1) {
            return;
          }
          uVar11 = 0;
          if (uVar8 != 0) {
            do {
              pIVar3 = pSVar5->m_Items[uVar11];
              if (pIVar3 != (Il2CppObject *)0x0) {
                if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
                  il2cpp_runtime_helper_02337ed0();
                }
                pSVar9 = ApplicationManagers_AccountManager__CloneJson(pSVar7,pMVar12);
                if (pIVar3 == (Il2CppObject *)0x0) goto label_044a69cc;
                node = pIVar3[4].klass;
                pMVar12 = (MethodInfo *)0x1;
                (*pIVar3[1].monitor)(node,1,error,pSVar9,pIVar3[2].monitor);
              }
              uVar11 = uVar11 + 1;
              uVar1 = (uint)pSVar5->max_length;
              if ((long)(int)uVar1 <= (long)uVar11) {
                return;
              }
            } while (uVar11 < uVar1);
          }
        }
        il2cpp_runtime_helper_022b2ca0();
        if (g_data_057ae9c6 == '\0') {
          il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
          il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
          g_data_057ae9c6 = '\x01';
        }
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = ApplicationManagers_AccountManager__CloneJson((SimpleJSONFixed_JSONNode_o *)node,pMVar12);
        lVar6 = *(long *)(TypeInfo_AccountManager + 0xb8);
        *(SimpleJSONFixed_JSONNode_o **)(lVar6 + 200) = pSVar7;
        il2cpp_runtime_helper_022b4080(lVar6 + 200);
        pSVar7 = *(SimpleJSONFixed_JSONNode_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 200);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        lVar6 = *(long *)(TypeInfo_AccountManager + 0xb8);
        *(char *)(lVar6 + 0xc0) = (char)bVar4;
        *(char *)(lVar6 + 0xc1) = (char)bVar4;
        return;
      }
    }
  }
label_044a69cc:
  il2cpp_runtime_helper_022b2c90();
  return;
}


// ApplicationManagers.AccountManager$$MarkOwnProfileCacheFresh
// il2cpp: void ApplicationManagers_AccountManager__MarkOwnProfileCacheFresh (const MethodInfo* method);
// 0x44a63c0

void ApplicationManagers_AccountManager__MarkOwnProfileCacheFresh(MethodInfo *method)

{
  uint uVar1;
  int32_t iVar2;
  long lVar3;
  System_Collections_Generic_List_object__o *__this;
  Il2CppObject *pIVar4;
  bool_conflict bVar5;
  System_Object_array *pSVar6;
  Il2CppMethodPointer pIVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  int iVar10;
  SimpleJSONFixed_JSONNode_o *characterInfo;
  ulong uVar11;
  ulong uVar12;
  MethodInfo *in_RSI;
  MethodInfo *pMVar13;
  MethodInfo *pMVar14;
  MethodInfo *pMVar15;
  char cVar16;
  Il2CppClass *pIVar17;
  code cVar18;
  
  if (g_data_057ae9c5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae9c5 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) != 0) goto label_044a63e7;
label_044a64b4:
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 != '\0') goto label_044a63f4;
label_044a64c6:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) != 0) goto label_044a6404;
label_044a64e9:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x38);
  }
  else {
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) goto label_044a64b4;
label_044a63e7:
    if (g_data_057ae0d4 == '\0') goto label_044a64c6;
label_044a63f4:
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) goto label_044a64e9;
label_044a6404:
    lVar3 = *(long *)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x38);
  }
  if (lVar3 == 0) {
    cVar18 = (code)0x0;
    iVar10 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
    goto joined_r0x044a650c;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    if (g_data_057ae0d4 != '\0') goto label_044a6430;
label_044a6529:
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae0d4 = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) != 0) goto label_044a6440;
label_044a654c:
    il2cpp_runtime_helper_02337ed0();
    lVar3 = *(long *)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x38);
    pMVar15 = TypeInfo_AccountManager;
  }
  else {
    if (g_data_057ae0d4 == '\0') goto label_044a6529;
label_044a6430:
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) goto label_044a654c;
label_044a6440:
    lVar3 = *(long *)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x38);
    pMVar15 = TypeInfo_AccountManager;
  }
  TypeInfo_AccountManager = pMVar15;
  if (lVar3 == 0) {
    il2cpp_runtime_helper_022b2c90();
    pMVar14 = in_RSI;
    if (g_data_057ae9c3 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Action_2_Boolean_String_ToArray);
      g_data_057ae9c3 = '\x01';
      iVar10 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
      pMVar13 = TypeInfo_AccountManager;
    }
    else {
      iVar10 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
      pMVar13 = TypeInfo_AccountManager;
    }
    TypeInfo_AccountManager = pMVar13;
    if (iVar10 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar13 = TypeInfo_AccountManager;
      TypeInfo_AccountManager[2].virtualMethodPointer[0xb2] = (code)0x0;
    }
    else {
      ((MethodInfo *)((long)pMVar13 + 0xb0))->virtualMethodPointer[0xb2] = (code)0x0;
    }
    if ((char)pMVar15 == '\0') {
      iVar10 = *(int *)((long)&((MethodInfo *)((long)pMVar13 + 0xb0))->parameters + 4);
    }
    else if (*(int *)((long)&((MethodInfo *)((long)pMVar13 + 0xb0))->parameters + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      ApplicationManagers_AccountManager__MarkOwnProfileCacheFresh(pMVar13);
      iVar10 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
      pMVar13 = TypeInfo_AccountManager;
    }
    else {
      ApplicationManagers_AccountManager__MarkOwnProfileCacheFresh(pMVar13);
      iVar10 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
      pMVar13 = TypeInfo_AccountManager;
    }
    if (iVar10 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pIVar17 = *(Il2CppClass **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0xb8);
      pMVar13 = MethodInfo_Action_2_Boolean_String_ToArray;
    }
    else {
      pIVar17 = *(Il2CppClass **)(((MethodInfo *)((long)pMVar13 + 0xb0))->virtualMethodPointer + 0xb8);
      pMVar13 = MethodInfo_Action_2_Boolean_String_ToArray;
    }
    MethodInfo_Action_2_Boolean_String_ToArray = pMVar13;
    if (pIVar17 != (Il2CppClass *)0x0) {
      pSVar6 = System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)pIVar17,(MethodInfo_362E340 *)pMVar13);
      lVar3 = *(long *)(TypeInfo_AccountManager[2].virtualMethodPointer + 0xb8);
      pMVar14 = pMVar13;
      if (lVar3 != 0) {
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        iVar2 = *(int32_t *)(lVar3 + 0x18);
        *(undefined4 *)(lVar3 + 0x18) = 0;
        if (0 < iVar2) {
          pIVar17 = *(Il2CppClass **)(lVar3 + 0x10);
          pMVar14 = (MethodInfo *)0x0;
          System_Array__Clear((System_Array_o *)pIVar17,0,iVar2,(MethodInfo *)0x0);
        }
        if (pSVar6 != (System_Object_array *)0x0) {
          if ((int)pSVar6->max_length < 1) {
            return;
          }
          uVar12 = 0;
          if ((pSVar6->max_length & 0xffffffff) != 0) {
            do {
              pIVar4 = pSVar6->m_Items[uVar12];
              if (pIVar4 != (Il2CppObject *)0x0) {
                if (pIVar4 == (Il2CppObject *)0x0) goto label_044a674c;
                pIVar17 = pIVar4[4].klass;
                pMVar14 = (MethodInfo *)((ulong)pMVar15 & 0xff);
                (*pIVar4[1].monitor)(pIVar17,(MethodInfo *)((ulong)pMVar15 & 0xff),in_RSI,pIVar4[2].monitor);
              }
              uVar12 = uVar12 + 1;
              uVar1 = (uint)pSVar6->max_length;
              if ((long)(int)uVar1 <= (long)uVar12) {
                return;
              }
            } while (uVar12 < uVar1);
          }
          il2cpp_runtime_helper_022b2ca0();
        }
      }
    }
label_044a674c:
    cVar16 = (char)pIVar17;
    il2cpp_runtime_helper_022b2c90();
    pMVar15 = pMVar14;
    if (g_data_057ae9c4 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
      il2cpp_runtime_helper_023445d0(&MethodInfo_Action_3_Boolean_String_SimpleJSONFixed_JSONNode_ToArray);
      g_data_057ae9c4 = '\x01';
      iVar10 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
      pMVar13 = TypeInfo_AccountManager;
    }
    else {
      iVar10 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
      pMVar13 = TypeInfo_AccountManager;
    }
    TypeInfo_AccountManager = pMVar13;
    if (iVar10 == 0) {
      il2cpp_runtime_helper_02337ed0();
      pMVar13 = TypeInfo_AccountManager;
      TypeInfo_AccountManager[2].virtualMethodPointer[0xc2] = (code)0x0;
    }
    else {
      ((MethodInfo *)((long)pMVar13 + 0xb0))->virtualMethodPointer[0xc2] = (code)0x0;
    }
    if (cVar16 == '\0') {
      iVar10 = *(int *)((long)&((MethodInfo *)((long)pMVar13 + 0xb0))->parameters + 4);
    }
    else {
      if (*(int *)((long)&((MethodInfo *)((long)pMVar13 + 0xb0))->parameters + 4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      ApplicationManagers_AccountManager__MarkCharacterInfoCacheFresh(characterInfo,pMVar15);
      iVar10 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
      pMVar13 = TypeInfo_AccountManager;
    }
    if (iVar10 == 0) {
      il2cpp_runtime_helper_02337ed0();
      __this = *(System_Collections_Generic_List_object__o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0xd0);
      pMVar15 = MethodInfo_Action_3_Boolean_String_SimpleJSONFixed_JSONNode_ToArray;
    }
    else {
      __this = *(System_Collections_Generic_List_object__o **)(pMVar13[2].virtualMethodPointer + 0xd0);
      pMVar15 = MethodInfo_Action_3_Boolean_String_SimpleJSONFixed_JSONNode_ToArray;
    }
    MethodInfo_Action_3_Boolean_String_SimpleJSONFixed_JSONNode_ToArray = pMVar15;
    if (__this != (System_Collections_Generic_List_object__o *)0x0) {
      pSVar6 = System_Collections_Generic_List_object___ToArray(__this,(MethodInfo_362E340 *)pMVar15);
      pIVar7 = TypeInfo_AccountManager[2].virtualMethodPointer;
      lVar3 = *(long *)(pIVar7 + 0xd0);
      if (lVar3 != 0) {
        *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
        iVar2 = *(int32_t *)(lVar3 + 0x18);
        *(undefined4 *)(lVar3 + 0x18) = 0;
        if (0 < iVar2) {
          pMVar15 = (MethodInfo *)0x0;
          System_Array__Clear(*(System_Array_o **)(lVar3 + 0x10),0,iVar2,(MethodInfo *)0x0);
          pIVar7 = TypeInfo_AccountManager[2].virtualMethodPointer;
        }
        pIVar17 = *(Il2CppClass **)(pIVar7 + 200);
        pSVar8 = ApplicationManagers_AccountManager__CloneJson((SimpleJSONFixed_JSONNode_o *)pIVar17,pMVar15);
        if (pSVar6 != (System_Object_array *)0x0) {
          iVar10 = (int)pSVar6->max_length;
          uVar12 = pSVar6->max_length & 0xffffffff;
          if (cVar16 == '\0') {
            if (iVar10 < 1) {
              return;
            }
            uVar11 = 0;
            if (uVar12 != 0) {
              do {
                pIVar4 = pSVar6->m_Items[uVar11];
                if (pIVar4 != (Il2CppObject *)0x0) {
                  if (pIVar4 == (Il2CppObject *)0x0) goto label_044a69cc;
                  pIVar17 = pIVar4[4].klass;
                  pMVar15 = (MethodInfo *)0x0;
                  (*pIVar4[1].monitor)(pIVar17,0,pMVar14,0,pIVar4[2].monitor);
                }
                uVar11 = uVar11 + 1;
                uVar1 = (uint)pSVar6->max_length;
                if ((long)(int)uVar1 <= (long)uVar11) {
                  return;
                }
              } while (uVar11 < uVar1);
            }
          }
          else {
            if (iVar10 < 1) {
              return;
            }
            uVar11 = 0;
            if (uVar12 != 0) {
              do {
                pIVar4 = pSVar6->m_Items[uVar11];
                if (pIVar4 != (Il2CppObject *)0x0) {
                  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
                    il2cpp_runtime_helper_02337ed0();
                  }
                  pSVar9 = ApplicationManagers_AccountManager__CloneJson(pSVar8,pMVar15);
                  if (pIVar4 == (Il2CppObject *)0x0) goto label_044a69cc;
                  pIVar17 = pIVar4[4].klass;
                  pMVar15 = (MethodInfo *)0x1;
                  (*pIVar4[1].monitor)(pIVar17,1,pMVar14,pSVar9,pIVar4[2].monitor);
                }
                uVar11 = uVar11 + 1;
                uVar1 = (uint)pSVar6->max_length;
                if ((long)(int)uVar1 <= (long)uVar11) {
                  return;
                }
              } while (uVar11 < uVar1);
            }
          }
          il2cpp_runtime_helper_022b2ca0();
          if (g_data_057ae9c6 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
            il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
            g_data_057ae9c6 = '\x01';
          }
          if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar8 = ApplicationManagers_AccountManager__CloneJson
                             ((SimpleJSONFixed_JSONNode_o *)pIVar17,pMVar15);
          pIVar7 = TypeInfo_AccountManager[2].virtualMethodPointer;
          *(SimpleJSONFixed_JSONNode_o **)(pIVar7 + 200) = pSVar8;
          il2cpp_runtime_helper_022b4080(pIVar7 + 200);
          pSVar8 = *(SimpleJSONFixed_JSONNode_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 200);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_runtime_helper_02337ed0();
          }
          bVar5 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          pIVar7 = TypeInfo_AccountManager[2].virtualMethodPointer;
          pIVar7[0xc0] = SUB41(bVar5,0);
          pIVar7[0xc1] = SUB41(bVar5,0);
          return;
        }
      }
    }
label_044a69cc:
    il2cpp_runtime_helper_022b2c90();
    return;
  }
  cVar18 = (code)(*(long *)(lVar3 + 0x48) != 0);
  iVar10 = *(int *)((long)&pMVar15[2].parameters + 4);
joined_r0x044a650c:
  if (iVar10 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar7 = TypeInfo_AccountManager[2].virtualMethodPointer;
  pIVar7[0xb0] = cVar18;
  pIVar7[0xb1] = cVar18;
  return;
}


// ApplicationManagers.AccountManager$$MarkCharacterInfoCacheFresh
// il2cpp: void ApplicationManagers_AccountManager__MarkCharacterInfoCacheFresh (SimpleJSONFixed_JSONNode_o* characterInfo, const MethodInfo* method);
// 0x44a69f0

void ApplicationManagers_AccountManager__MarkCharacterInfoCacheFresh
               (SimpleJSONFixed_JSONNode_o *characterInfo,MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  
  if (g_data_057ae9c6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae9c6 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = ApplicationManagers_AccountManager__CloneJson(characterInfo,method);
  lVar1 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(SimpleJSONFixed_JSONNode_o **)(lVar1 + 200) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar1 + 200);
  pSVar3 = *(SimpleJSONFixed_JSONNode_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 200);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(char *)(lVar1 + 0xc0) = (char)bVar2;
  *(char *)(lVar1 + 0xc1) = (char)bVar2;
  return;
}


// ApplicationManagers.AccountManager$$CloneJson
// il2cpp: SimpleJSONFixed_JSONNode_o* ApplicationManagers_AccountManager__CloneJson (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x44a5c70

SimpleJSONFixed_JSONNode_o *
ApplicationManagers_AccountManager__CloneJson(SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  System_String_o *aJSON;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  undefined8 *puVar4;
  undefined8 *puVar5;
  undefined1 auVar6 [12];
  
  if (g_data_057ae9c7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057ae9c7 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
      auVar6 = il2cpp_runtime_helper_022b2c90();
      if (auVar6._8_4_ != 1) {
        _Unwind_Resume(auVar6._0_8_);
      }
      puVar4 = (undefined8 *)__cxa_begin_catch(auVar6._0_8_);
      cVar1 = il2cpp_runtime_helper_0233e000(g_data_057b9b80,*(undefined8 *)*puVar4);
      if (cVar1 == '\0') {
        puVar5 = (undefined8 *)__cxa_allocate_exception(8);
        *puVar5 = *puVar4;
        __cxa_throw(puVar5,&PTR_PTR_05215060,0);
      }
      __cxa_end_catch();
      pSVar3 = (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    else {
      aJSON = (System_String_o *)(*(node->klass->vtable)._3_ToString.methodPtr)(node);
      pSVar3 = SimpleJSONFixed_JSON__Parse(aJSON,(MethodInfo *)0x0);
    }
  }
  return pSVar3;
}


// ApplicationManagers.AccountManager$$InvalidateOwnAccountCache
// il2cpp: void ApplicationManagers_AccountManager__InvalidateOwnAccountCache (const MethodInfo* method);
// 0x44a3420

void ApplicationManagers_AccountManager__InvalidateOwnAccountCache(MethodInfo *method)

{
  long lVar1;
  
  if (g_data_057ae9c8 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae9c8 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  lVar1 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(undefined1 *)(lVar1 + 0xb1) = 0;
  *(undefined1 *)(lVar1 + 0xc1) = 0;
  return;
}


// ApplicationManagers.AccountManager$$ClearOwnAccountCache
// il2cpp: void ApplicationManagers_AccountManager__ClearOwnAccountCache (const MethodInfo* method);
// 0x44a6ac0

void ApplicationManagers_AccountManager__ClearOwnAccountCache(MethodInfo *method)

{
  int32_t length;
  int length_00;
  long lVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  Il2CppMethodPointer pIVar4;
  MethodInfo *pMVar5;
  
  if (g_data_057ae9c9 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057ae9c9 = '\x01';
  }
  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pIVar4 = TypeInfo_AccountManager[2].virtualMethodPointer;
  *(undefined2 *)(pIVar4 + 0xb0) = 0;
  pIVar4[0xb2] = (code)0x0;
  lVar1 = *(long *)(pIVar4 + 0xb8);
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
    length = *(int32_t *)(lVar1 + 0x18);
    *(undefined4 *)(lVar1 + 0x18) = 0;
    if (0 < length) {
      System_Array__Clear(*(System_Array_o **)(lVar1 + 0x10),0,length,(MethodInfo *)0x0);
      pIVar4 = TypeInfo_AccountManager[2].virtualMethodPointer;
    }
    *(undefined2 *)(pIVar4 + 0xc0) = 0;
    pIVar4[0xc2] = (code)0x0;
    lVar1 = *(long *)(pIVar4 + 0xd0);
    if (lVar1 != 0) {
      *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
      length_00 = *(int *)(lVar1 + 0x18);
      *(undefined4 *)(lVar1 + 0x18) = 0;
      if (0 < length_00) {
        System_Array__Clear(*(System_Array_o **)(lVar1 + 0x10),0,length_00,(MethodInfo *)0x0);
        pIVar4 = TypeInfo_AccountManager[2].virtualMethodPointer;
      }
      *(undefined8 *)(pIVar4 + 200) = 0;
      il2cpp_runtime_helper_022b4080(pIVar4 + 200,0);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae9cb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae9cb = '\x01';
  }
  pMVar5 = TypeInfo_AccountManager;
  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = ApplicationManagers_AccountManager__get_UserId(pMVar5);
  bVar2 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return;
  }
  pMVar5 = TypeInfo_AccountManager;
  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = ApplicationManagers_AccountManager__get_UserId(pMVar5);
  ApplicationManagers_PublicProfiles_AottgPublicProfileService__ClearProfile(pSVar3,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager$$ClearProfileResponse
// il2cpp: void ApplicationManagers_AccountManager__ClearProfileResponse (const MethodInfo* method);
// 0x44a3640

void ApplicationManagers_AccountManager__ClearProfileResponse(MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  UnityEngine_MonoBehaviour_o *pUVar4;
  long lVar5;
  Il2CppObject *pIVar6;
  UnityEngine_MonoBehaviour_c *pUVar7;
  undefined1 in_CL;
  undefined1 extraout_DL;
  undefined4 extraout_EDX;
  Il2CppClass *pIVar8;
  Il2CppClass *pIVar9;
  Il2CppClass *method_00;
  Il2CppObject *pIVar10;
  
  if (g_data_057ae9ca == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Clear);
    g_data_057ae9ca = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[0xe].klass + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[0xe].klass + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057aea26 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea26 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[0xe].klass + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[0xe].klass + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pvVar3 = TypeInfo_AccountManager[0xb].monitor;
  *(undefined8 *)((long)pvVar3 + 0x90) = 0;
  il2cpp_runtime_helper_022b4080((long)pvVar3 + 0x90);
  if (g_data_057aea27 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea27 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[0xe].klass + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[0xe].klass + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pvVar3 = TypeInfo_AccountManager[0xb].monitor;
  *(undefined8 *)((long)pvVar3 + 0x98) = 0;
  il2cpp_runtime_helper_022b4080((long)pvVar3 + 0x98);
  if (g_data_057aea28 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea28 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[0xe].klass + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[0xe].klass + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pvVar3 = TypeInfo_AccountManager[0xb].monitor;
  *(undefined8 *)((long)pvVar3 + 0xa0) = 0;
  pIVar8 = (Il2CppClass *)0x0;
  il2cpp_runtime_helper_022b4080((long)pvVar3 + 0xa0);
  if (g_data_057aea29 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057aea29 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[0xe].klass + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[0xe].klass + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    method_00 = *(Il2CppClass **)((long)TypeInfo_AccountManager[0xb].monitor + 0xa8);
  }
  else {
    method_00 = *(Il2CppClass **)((long)TypeInfo_AccountManager[0xb].monitor + 0xa8);
  }
  if (method_00 != (Il2CppClass *)0x0) {
    System_Collections_Generic_Dictionary_object__object___Clear
              ((System_Collections_Generic_Dictionary_object__object__o *)method_00,MethodInfo_Void_Clear);
    ApplicationManagers_AccountManager__ClearOwnAccountCache((MethodInfo *)method_00);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pIVar9 = pIVar8;
  if (g_data_057ae9a5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae9a5 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[0xe].klass + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[0xe].klass + 4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
    pUVar4 = *(UnityEngine_MonoBehaviour_o **)TypeInfo_AccountManager[0xb].monitor;
    pIVar10 = TypeInfo_AccountManager;
  }
  else {
    pUVar4 = *(UnityEngine_MonoBehaviour_o **)TypeInfo_AccountManager[0xb].monitor;
    pIVar10 = TypeInfo_AccountManager;
  }
  TypeInfo_AccountManager = pIVar10;
  if (pUVar4 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if (g_data_057ae9aa == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae9aa = '\x01';
    }
    if (pUVar4[1].klass != (UnityEngine_MonoBehaviour_c *)0x0) {
      UnityEngine_MonoBehaviour__StopCoroutine_4dfdad0
                (pUVar4,(UnityEngine_Coroutine_o *)pUVar4[1].klass,(MethodInfo *)0x0);
      pUVar4[1].klass = (UnityEngine_MonoBehaviour_c *)0x0;
      il2cpp_runtime_helper_022b4080(pUVar4 + 1,0);
    }
    if (*(int *)((long)&TypeInfo_AccountManager[0xe].klass + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pvVar3 = TypeInfo_AccountManager[0xb].monitor;
    *(undefined8 *)((long)pvVar3 + 0x88) = 0;
    il2cpp_runtime_helper_022b4080((long)pvVar3 + 0x88,0);
    *(int *)&pUVar4[1].monitor = *(int *)&pUVar4[1].monitor + 1;
    pvVar3 = TypeInfo_AccountManager[0xb].monitor;
    *(Il2CppClass **)((long)pvVar3 + 0x88) = pIVar8;
    pIVar10 = (Il2CppObject *)((long)pvVar3 + 0x88);
    il2cpp_runtime_helper_022b4080();
    pUVar4 = *(UnityEngine_MonoBehaviour_o **)TypeInfo_AccountManager[0xb].monitor;
    pIVar9 = pIVar8;
    if (pUVar4 != (UnityEngine_MonoBehaviour_o *)0x0) {
      uVar2 = *(undefined4 *)&pUVar4[1].monitor;
      if (g_data_057ae9a7 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_OAuthFlow_d__124);
        g_data_057ae9a7 = '\x01';
      }
      pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_OAuthFlow_d__124);
      pIVar9 = (Il2CppClass *)0x0;
      pIVar10 = pIVar6;
      System_Object___ctor(pIVar6,(MethodInfo *)0x0);
      *(undefined4 *)&pIVar6[1].klass = 0;
      if (pIVar6 != (Il2CppObject *)0x0) {
        pIVar6[2].monitor = pUVar4;
        il2cpp_runtime_helper_022b4080(&pIVar6[2].monitor,pUVar4);
        pIVar6[2].klass = method_00;
        il2cpp_runtime_helper_022b4080(pIVar6 + 2,method_00);
        *(undefined4 *)((long)&pIVar6[3].klass + 4) = uVar2;
        *(undefined1 *)&pIVar6[3].klass = extraout_DL;
        pUVar7 = (UnityEngine_MonoBehaviour_c *)
                 UnityEngine_MonoBehaviour__StartCoroutine_4dfd680
                           (pUVar4,(System_Collections_IEnumerator_o *)pIVar6,(MethodInfo *)0x0);
        pUVar4[1].klass = pUVar7;
        il2cpp_runtime_helper_022b4080(pUVar4 + 1,pUVar7);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae9a7 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_OAuthFlow_d__124);
    g_data_057ae9a7 = '\x01';
  }
  pIVar6 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_OAuthFlow_d__124);
  System_Object___ctor(pIVar6,(MethodInfo *)0x0);
  *(undefined4 *)&pIVar6[1].klass = 0;
  if (pIVar6 != (Il2CppObject *)0x0) {
    pIVar6[2].monitor = pIVar10;
    il2cpp_runtime_helper_022b4080(&pIVar6[2].monitor,pIVar10);
    pIVar6[2].klass = pIVar9;
    il2cpp_runtime_helper_022b4080(pIVar6 + 2,pIVar9);
    *(undefined4 *)((long)&pIVar6[3].klass + 4) = extraout_EDX;
    *(undefined1 *)&pIVar6[3].klass = in_CL;
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae9a6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&"oauth_denied");
    g_data_057ae9a6 = '\x01';
  }
  if (*(int *)((long)&TypeInfo_AccountManager[0xe].klass + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pUVar4 = *(UnityEngine_MonoBehaviour_o **)TypeInfo_AccountManager[0xb].monitor;
  lVar5 = *(long *)((long)TypeInfo_AccountManager[0xb].monitor + 0x88);
  if (pUVar4 != (UnityEngine_MonoBehaviour_o *)0x0) {
    if (g_data_057ae9aa == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
      g_data_057ae9aa = '\x01';
    }
    if (pUVar4[1].klass != (UnityEngine_MonoBehaviour_c *)0x0) {
      UnityEngine_MonoBehaviour__StopCoroutine_4dfdad0
                (pUVar4,(UnityEngine_Coroutine_o *)pUVar4[1].klass,(MethodInfo *)0x0);
      pUVar4[1].klass = (UnityEngine_MonoBehaviour_c *)0x0;
      il2cpp_runtime_helper_022b4080(pUVar4 + 1,0);
    }
    if (*(int *)((long)&TypeInfo_AccountManager[0xe].klass + 4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pvVar3 = TypeInfo_AccountManager[0xb].monitor;
    *(undefined8 *)((long)pvVar3 + 0x88) = 0;
    il2cpp_runtime_helper_022b4080((long)pvVar3 + 0x88,0);
    *(int *)&pUVar4[1].monitor = *(int *)&pUVar4[1].monitor + 1;
  }
  if (lVar5 != 0) {
    (**(code **)(lVar5 + 0x18))(*(undefined8 *)(lVar5 + 0x40),0,"oauth_denied",*(undefined8 *)(lVar5 + 0x28));
    return;
  }
  return;
}


// ApplicationManagers.AccountManager$$ClearOwnPublicProfileCache
// il2cpp: void ApplicationManagers_AccountManager__ClearOwnPublicProfileCache (const MethodInfo* method);
// 0x44a6bd0

void ApplicationManagers_AccountManager__ClearOwnPublicProfileCache(MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  MethodInfo *pMVar3;
  
  if (g_data_057ae9cb == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    g_data_057ae9cb = '\x01';
  }
  pMVar3 = TypeInfo_AccountManager;
  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = ApplicationManagers_AccountManager__get_UserId(pMVar3);
  bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  pMVar3 = TypeInfo_AccountManager;
  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = ApplicationManagers_AccountManager__get_UserId(pMVar3);
  ApplicationManagers_PublicProfiles_AottgPublicProfileService__ClearProfile(pSVar2,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___ctor (ApplicationManagers_AccountManager_o* __this, const MethodInfo* method);
// 0x44a6c40

void ApplicationManagers_AccountManager___ctor
               (ApplicationManagers_AccountManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager$$.cctor
// il2cpp: void ApplicationManagers_AccountManager___cctor (const MethodInfo* method);
// 0x44a6c50

void ApplicationManagers_AccountManager___cctor(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Collections_Generic_IEqualityComparer_T__o *comparer;
  System_Collections_Generic_HashSet_object__o *__this;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  System_Collections_Generic_List_object__o *pSVar3;
  Il2CppObject *__this_01;
  
  if (g_data_057ae9cc == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Dictionary_string_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_HashSet_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_HashSet_string);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Action_3_Boolean_String_SimpleJSONFixed_JS);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_Action_2_Boolean_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Action_bool_string_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_Action_bool_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    il2cpp_runtime_helper_023445d0(&"google");
    il2cpp_runtime_helper_023445d0(&"email_password");
    il2cpp_runtime_helper_023445d0(&"discord");
    il2cpp_runtime_helper_023445d0(&"https://aottg2.com");
    g_data_057ae9cc = '\x01';
  }
  lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(undefined8 *)(lVar2 + 0x10) = "https://aottg2.com";
  il2cpp_runtime_helper_022b4080(lVar2 + 0x10);
  *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x49) = 1;
  if (*(int *)(TypeInfo_StringComparer + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (g_data_057a9c88 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringComparer);
    g_data_057a9c88 = '\x01';
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  comparer = *(System_Collections_Generic_IEqualityComparer_T__o **)(*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
  __this = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_33e0600(__this,comparer,MethodInfo_HashSet_1_System_String);
  if (__this == (System_Collections_Generic_HashSet_object__o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057ae9cd == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_c);
      g_data_057ae9cd = '\x01';
    }
    __this_01 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
    System_Object___ctor(__this_01,(MethodInfo *)0x0);
    **(undefined8 **)(TypeInfo_c + 0xb8) = __this_01;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this_01);
    return;
  }
  System_Collections_Generic_HashSet_object___Add(__this,"email_password",MethodInfo_Boolean_Add);
  System_Collections_Generic_HashSet_object___Add(__this,"discord",MethodInfo_Boolean_Add);
  System_Collections_Generic_HashSet_object___Add(__this,"google",MethodInfo_Boolean_Add);
  lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(System_Collections_Generic_HashSet_object__o **)(lVar2 + 0x68) = __this;
  il2cpp_runtime_helper_022b4080(lVar2 + 0x68,__this);
  __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor(__this_00,MethodInfo_Dictionary_2_System_String_System_String);
  lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar2 + 0xa8) = __this_00;
  il2cpp_runtime_helper_022b4080(lVar2 + 0xa8,__this_00);
  pSVar3 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Action_bool_string);
  System_Collections_Generic_List_object____ctor(pSVar3,MethodInfo_List_1_System_Action_2_Boolean_String);
  lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(System_Collections_Generic_List_object__o **)(lVar2 + 0xb8) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar2 + 0xb8,pSVar3);
  pSVar3 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_Action_bool_string_JSONNode);
  System_Collections_Generic_List_object____ctor(pSVar3,MethodInfo_List_1_System_Action_3_Boolean_String_SimpleJSONFixed_JS);
  lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(System_Collections_Generic_List_object__o **)(lVar2 + 0xd0) = pSVar3;
  il2cpp_runtime_helper_022b4080(lVar2 + 0xd0,pSVar3);
  return;
}


