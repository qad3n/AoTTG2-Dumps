// Type: ApplicationManagers.AccountManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers/AccountManager.cs
// Prior source: NEW in this update
// --------------------------------

// ApplicationManagers.AccountManager.<>c$$.cctor
// il2cpp: void ApplicationManagers_AccountManager___c___cctor (const MethodInfo* method);
// 0x418eef0

void ApplicationManagers_AccountManager_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704c01 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704c01 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// ApplicationManagers.AccountManager.<>c$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c___ctor (ApplicationManagers_AccountManager___c_o* __this, const MethodInfo* method);
// 0x418ef60

void ApplicationManagers_AccountManager_<>c___ctor
               (ApplicationManagers_AccountManager___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c$$<Register>b__154_1
// il2cpp: void ApplicationManagers_AccountManager___c___Register_b__154_1 (ApplicationManagers_AccountManager___c_o* __this, System_String_o* t, const MethodInfo* method);
// 0x418ef70

void ApplicationManagers_AccountManager_<>c__<Register>b__154_1
               (ApplicationManagers_AccountManager___c_o *__this,System_String_o *t,
               MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (DAT_05704c02 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c02 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704c51 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c51 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(System_String_o **)(lVar2 + 0xa0) = t;
  il2cpp_runtime_glue(lVar2 + 0xa0,t);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass10_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass10_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass10_0_o* __this, const MethodInfo* method);
// 0x418f030

void ApplicationManagers_AccountManager_<>c__DisplayClass10_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass10_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass10_0$$<ExchangeOAuthCode>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass10_0___ExchangeOAuthCode_b__0 (ApplicationManagers_AccountManager___c__DisplayClass10_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, const MethodInfo* method);
// 0x418f040

void ApplicationManagers_AccountManager_<>c__DisplayClass10_0__<ExchangeOAuthCode>b__0
               (ApplicationManagers_AccountManager___c__DisplayClass10_0_o *__this,
               ApplicationManagers_Api_AottgApiResult_o *r,MethodInfo *method)

{
  (__this->fields).result = r;
  il2cpp_runtime_glue(&__this->fields);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass154_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass154_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass154_0_o* __this, const MethodInfo* method);
// 0x418c100

void ApplicationManagers_AccountManager_<>c__DisplayClass154_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass154_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass154_0$$<Register>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass154_0___Register_b__0 (ApplicationManagers_AccountManager___c__DisplayClass154_0_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x418f050

void ApplicationManagers_AccountManager_<>c__DisplayClass154_0__<Register>b__0
               (ApplicationManagers_AccountManager___c__DisplayClass154_0_o *__this,
               bool_conflict success,System_String_o *error,MethodInfo *method)

{
  int iVar1;
  System_Action_bool__string__o *pSVar2;
  code *vtable_dispatch_00;
  long lVar3;
  
  if (DAT_05704c03 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c03 = '\x01';
  }
  if ((char)success != '\0') {
    pSVar2 = (__this->fields).onComplete;
    if (pSVar2 == (System_Action_bool__string__o *)0x0) {
      return;
    }
    vtable_dispatch_00 = (code *)(pSVar2->fields).invoke_impl;
    (*vtable_dispatch_00)
              ((pSVar2->fields).method_code,1,0,(pSVar2->fields).method,vtable_dispatch_00);
    return;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704c52 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c52 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  lVar3 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(undefined8 *)(lVar3 + 0xa8) = 0;
  il2cpp_runtime_glue(lVar3 + 0xa8,0);
  pSVar2 = (__this->fields).onComplete;
  if (pSVar2 == (System_Action_bool__string__o *)0x0) {
    return;
  }
  vtable_dispatch_00 = (code *)(pSVar2->fields).invoke_impl;
  (*vtable_dispatch_00)
            ((pSVar2->fields).method_code,0,error,(pSVar2->fields).method,vtable_dispatch_00);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass156_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass156_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass156_0_o* __this, const MethodInfo* method);
// 0x418c3b0

void ApplicationManagers_AccountManager_<>c__DisplayClass156_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass156_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass156_0$$<Refresh>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass156_0___Refresh_b__0 (ApplicationManagers_AccountManager___c__DisplayClass156_0_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x418f160

void ApplicationManagers_AccountManager_<>c__DisplayClass156_0__<Refresh>b__0
               (ApplicationManagers_AccountManager___c__DisplayClass156_0_o *__this,
               bool_conflict success,System_String_o *error,MethodInfo *method)

{
  int iVar1;
  System_Action_bool__string__o *pSVar2;
  code *vtable_dispatch;
  
  if (DAT_05704c04 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c04 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704c53 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c53 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x98) = 0;
  pSVar2 = (__this->fields).onComplete;
  if (pSVar2 != (System_Action_bool__string__o *)0x0) {
    vtable_dispatch = (code *)(pSVar2->fields).invoke_impl;
    (*vtable_dispatch)
              ((pSVar2->fields).method_code,success & 0xff,error,(pSVar2->fields).method,
               vtable_dispatch);
    return;
  }
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass161_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass161_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass161_0_o* __this, const MethodInfo* method);
// 0x418d010

void ApplicationManagers_AccountManager_<>c__DisplayClass161_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass161_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass161_0$$<VerifyEmail>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass161_0___VerifyEmail_b__0 (ApplicationManagers_AccountManager___c__DisplayClass161_0_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x418f260

void ApplicationManagers_AccountManager_<>c__DisplayClass161_0__<VerifyEmail>b__0
               (ApplicationManagers_AccountManager___c__DisplayClass161_0_o *__this,
               bool_conflict success,System_String_o *error,MethodInfo *method)

{
  int iVar1;
  System_Action_bool__string__o *pSVar2;
  code *vtable_dispatch;
  long lVar3;
  
  if (DAT_05704c05 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c05 = '\x01';
  }
  if ((char)success == '\0') {
    pSVar2 = (__this->fields).onComplete;
    goto joined_r0x0418f311;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05704c51 == '\0') goto LAB_0418f330;
LAB_0418f2de:
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (DAT_05704c51 != '\0') goto LAB_0418f2de;
LAB_0418f330:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c51 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  lVar3 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(undefined8 *)(lVar3 + 0xa0) = 0;
  il2cpp_runtime_glue(lVar3 + 0xa0,0);
  pSVar2 = (__this->fields).onComplete;
joined_r0x0418f311:
  if (pSVar2 == (System_Action_bool__string__o *)0x0) {
    return;
  }
  vtable_dispatch = (code *)(pSVar2->fields).invoke_impl;
  (*vtable_dispatch)
            ((pSVar2->fields).method_code,success & 0xff,error,(pSVar2->fields).method,
             vtable_dispatch);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass164_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass164_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass164_0_o* __this, const MethodInfo* method);
// 0x418f360

void ApplicationManagers_AccountManager_<>c__DisplayClass164_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass164_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass164_0$$<GetAuthMethods>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass164_0___GetAuthMethods_b__0 (ApplicationManagers_AccountManager___c__DisplayClass164_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, const MethodInfo* method);
// 0x418f370

void ApplicationManagers_AccountManager_<>c__DisplayClass164_0__<GetAuthMethods>b__0
               (ApplicationManagers_AccountManager___c__DisplayClass164_0_o *__this,
               ApplicationManagers_Api_AottgApiResult_o *r,MethodInfo *method)

{
  (__this->fields).result = r;
  il2cpp_runtime_glue(&__this->fields);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass165_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass165_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass165_0_o* __this, const MethodInfo* method);
// 0x418f380

void ApplicationManagers_AccountManager_<>c__DisplayClass165_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass165_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass165_0$$<SendApiGet>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass165_0___SendApiGet_b__0 (ApplicationManagers_AccountManager___c__DisplayClass165_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* result, const MethodInfo* method);
// 0x418f390

void ApplicationManagers_AccountManager_<>c__DisplayClass165_0__<SendApiGet>b__0
               (ApplicationManagers_AccountManager___c__DisplayClass165_0_o *__this,
               ApplicationManagers_Api_AottgApiResult_o *result,MethodInfo *method)

{
  System_Action_AottgApiResult__o *pSVar1;
  code *vtable_dispatch;
  
  *(undefined1 *)&(__this->fields).done = 1;
  pSVar1 = (__this->fields).onComplete;
  if (pSVar1 != (System_Action_AottgApiResult__o *)0x0) {
    vtable_dispatch = (code *)(pSVar1->fields).invoke_impl;
    (*vtable_dispatch)
              ((pSVar1->fields).method_code,result,(pSVar1->fields).method,vtable_dispatch);
    return;
  }
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass167_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass167_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass167_0_o* __this, const MethodInfo* method);
// 0x418f3b0

void ApplicationManagers_AccountManager_<>c__DisplayClass167_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass167_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass167_0$$<SendApiJson>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass167_0___SendApiJson_b__0 (ApplicationManagers_AccountManager___c__DisplayClass167_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* result, const MethodInfo* method);
// 0x418f3c0

void ApplicationManagers_AccountManager_<>c__DisplayClass167_0__<SendApiJson>b__0
               (ApplicationManagers_AccountManager___c__DisplayClass167_0_o *__this,
               ApplicationManagers_Api_AottgApiResult_o *result,MethodInfo *method)

{
  System_Action_AottgApiResult__o *pSVar1;
  code *vtable_dispatch;
  
  *(undefined1 *)&(__this->fields).done = 1;
  pSVar1 = (__this->fields).onComplete;
  if (pSVar1 != (System_Action_AottgApiResult__o *)0x0) {
    vtable_dispatch = (code *)(pSVar1->fields).invoke_impl;
    (*vtable_dispatch)
              ((pSVar1->fields).method_code,result,(pSVar1->fields).method,vtable_dispatch);
    return;
  }
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass171_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass171_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass171_0_o* __this, const MethodInfo* method);
// 0x418f3e0

void ApplicationManagers_AccountManager_<>c__DisplayClass171_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass171_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass171_0$$<DeleteJson>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass171_0___DeleteJson_b__0 (ApplicationManagers_AccountManager___c__DisplayClass171_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, const MethodInfo* method);
// 0x418f3f0

void ApplicationManagers_AccountManager_<>c__DisplayClass171_0__<DeleteJson>b__0
               (ApplicationManagers_AccountManager___c__DisplayClass171_0_o *__this,
               ApplicationManagers_Api_AottgApiResult_o *r,MethodInfo *method)

{
  (__this->fields).result = r;
  il2cpp_runtime_glue(&__this->fields);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass172_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass172_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass172_0_o* __this, const MethodInfo* method);
// 0x418f400

void ApplicationManagers_AccountManager_<>c__DisplayClass172_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass172_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass172_0$$<PostJson>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass172_0___PostJson_b__0 (ApplicationManagers_AccountManager___c__DisplayClass172_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, const MethodInfo* method);
// 0x418f410

void ApplicationManagers_AccountManager_<>c__DisplayClass172_0__<PostJson>b__0
               (ApplicationManagers_AccountManager___c__DisplayClass172_0_o *__this,
               ApplicationManagers_Api_AottgApiResult_o *r,MethodInfo *method)

{
  (__this->fields).result = r;
  il2cpp_runtime_glue(&__this->fields);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass50_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass50_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass50_0_o* __this, const MethodInfo* method);
// 0x418f420

void ApplicationManagers_AccountManager_<>c__DisplayClass50_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass50_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass50_0$$<GetProfileJson>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass50_0___GetProfileJson_b__0 (ApplicationManagers_AccountManager___c__DisplayClass50_0_o* __this, bool success, System_String_o* error, SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x418f430

void ApplicationManagers_AccountManager_<>c__DisplayClass50_0__<GetProfileJson>b__0
               (ApplicationManagers_AccountManager___c__DisplayClass50_0_o *__this,
               bool_conflict success,System_String_o *error,SimpleJSONFixed_JSONNode_o *node,
               MethodInfo *method)

{
  System_Action_bool__string__o *pSVar1;
  code *vtable_dispatch;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,success);
  if (DAT_05704c06 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c06 = '\x01';
  }
  if ((char)success == '\0') {
    pSVar1 = (__this->fields).onComplete;
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    ApplicationManagers_AccountManager__ApplyProfileResponse(node,method_00);
    pSVar1 = (__this->fields).onComplete;
  }
  if (pSVar1 == (System_Action_bool__string__o *)0x0) {
    return;
  }
  vtable_dispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtable_dispatch)
            ((pSVar1->fields).method_code,success & 0xff,error,(pSVar1->fields).method,
             vtable_dispatch);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass51_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass51_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass51_0_o* __this, const MethodInfo* method);
// 0x418f4d0

void ApplicationManagers_AccountManager_<>c__DisplayClass51_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass51_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass51_0$$<PatchProfileJson>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass51_0___PatchProfileJson_b__0 (ApplicationManagers_AccountManager___c__DisplayClass51_0_o* __this, bool success, System_String_o* error, SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x418f4e0

void ApplicationManagers_AccountManager_<>c__DisplayClass51_0__<PatchProfileJson>b__0
               (ApplicationManagers_AccountManager___c__DisplayClass51_0_o *__this,
               bool_conflict success,System_String_o *error,SimpleJSONFixed_JSONNode_o *node,
               MethodInfo *method)

{
  System_Action_bool__string__o *pSVar1;
  code *vtable_dispatch;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,success);
  if (DAT_05704c07 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c07 = '\x01';
  }
  if ((char)success == '\0') {
    pSVar1 = (__this->fields).onComplete;
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    ApplicationManagers_AccountManager__ApplyProfileResponse(node,method_00);
    ApplicationManagers_AccountManager__MarkOwnProfileCacheFresh((MethodInfo *)node);
    pSVar1 = (__this->fields).onComplete;
  }
  if (pSVar1 == (System_Action_bool__string__o *)0x0) {
    return;
  }
  vtable_dispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtable_dispatch)
            ((pSVar1->fields).method_code,success & 0xff,error,(pSVar1->fields).method,
             vtable_dispatch);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass52_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass52_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass52_0_o* __this, const MethodInfo* method);
// 0x418f580

void ApplicationManagers_AccountManager_<>c__DisplayClass52_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass52_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass52_0$$<GetCharacterInfoJson>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass52_0___GetCharacterInfoJson_b__0 (ApplicationManagers_AccountManager___c__DisplayClass52_0_o* __this, bool success, System_String_o* error, SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x418f590

void ApplicationManagers_AccountManager_<>c__DisplayClass52_0__<GetCharacterInfoJson>b__0
               (ApplicationManagers_AccountManager___c__DisplayClass52_0_o *__this,
               bool_conflict success,System_String_o *error,SimpleJSONFixed_JSONNode_o *node,
               MethodInfo *method)

{
  System_Action_bool__string__JSONNode__o *pSVar1;
  bool_conflict bVar2;
  undefined8 uVar3;
  
  if (DAT_05704c08 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&"characterInfo");
    DAT_05704c08 = '\x01';
  }
  pSVar1 = (__this->fields).onComplete;
  if (pSVar1 != (System_Action_bool__string__JSONNode__o *)0x0) {
    if ((char)success == '\0') {
      uVar3 = 0;
    }
    else {
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      uVar3 = 0;
      bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 != '\0') {
        if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
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


// ApplicationManagers.AccountManager.<>c__DisplayClass53_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass53_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass53_0_o* __this, const MethodInfo* method);
// 0x418f660

void ApplicationManagers_AccountManager_<>c__DisplayClass53_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass53_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass53_0$$<PutCharacterInfoJson>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass53_0___PutCharacterInfoJson_b__0 (ApplicationManagers_AccountManager___c__DisplayClass53_0_o* __this, bool success, System_String_o* error, SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x418f670

void ApplicationManagers_AccountManager_<>c__DisplayClass53_0__<PutCharacterInfoJson>b__0
               (ApplicationManagers_AccountManager___c__DisplayClass53_0_o *__this,
               bool_conflict success,System_String_o *error,SimpleJSONFixed_JSONNode_o *node,
               MethodInfo *method)

{
  int iVar1;
  code *vtable_dispatch;
  System_Action_bool__string__JSONNode__o *pSVar2;
  bool_conflict bVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  MethodInfo *method_00;
  
  if (DAT_05704c09 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&"characterInfo");
    DAT_05704c09 = '\x01';
  }
  if ((char)success == '\0') {
    pSVar4 = (__this->fields).fallbackCharacterInfo;
    pSVar2 = (__this->fields).onComplete;
    goto joined_r0x0418f77e;
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
LAB_0418f7a7:
    pSVar4 = (__this->fields).fallbackCharacterInfo;
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar4 = (SimpleJSONFixed_JSONNode_o *)
             (*(node->klass->vtable)._7_get_Item.methodPtr)
                       (node,"characterInfo",(node->klass->vtable)._7_get_Item.method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    method_00 = (MethodInfo *)0x0;
    bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar4,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar3 == '\0') goto LAB_0418f7a7;
    method_00 = "characterInfo";
    pSVar4 = (SimpleJSONFixed_JSONNode_o *)
             (*(node->klass->vtable)._7_get_Item.methodPtr)
                       (node,"characterInfo",(node->klass->vtable)._7_get_Item.method);
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  ApplicationManagers_AccountManager__MarkCharacterInfoCacheFresh(pSVar4,method_00);
  pSVar2 = (__this->fields).onComplete;
joined_r0x0418f77e:
  if (pSVar2 == (System_Action_bool__string__JSONNode__o *)0x0) {
    return;
  }
  vtable_dispatch = (code *)(pSVar2->fields).invoke_impl;
  (*vtable_dispatch)
            ((pSVar2->fields).method_code,success & 0xff,error,pSVar4,(pSVar2->fields).method,
             vtable_dispatch);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass54_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass54_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass54_0_o* __this, const MethodInfo* method);
// 0x418f7f0

void ApplicationManagers_AccountManager_<>c__DisplayClass54_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass54_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass54_0$$<SendMeJson>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass54_0___SendMeJson_b__0 (ApplicationManagers_AccountManager___c__DisplayClass54_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, const MethodInfo* method);
// 0x418f800

void ApplicationManagers_AccountManager_<>c__DisplayClass54_0__<SendMeJson>b__0
               (ApplicationManagers_AccountManager___c__DisplayClass54_0_o *__this,
               ApplicationManagers_Api_AottgApiResult_o *r,MethodInfo *method)

{
  (__this->fields).result = r;
  il2cpp_runtime_glue(&__this->fields);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass55_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass55_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass55_0_o* __this, const MethodInfo* method);
// 0x418f810

void ApplicationManagers_AccountManager_<>c__DisplayClass55_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass55_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass55_0$$<SendMeReadJson>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass55_0___SendMeReadJson_b__0 (ApplicationManagers_AccountManager___c__DisplayClass55_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, const MethodInfo* method);
// 0x418f820

void ApplicationManagers_AccountManager_<>c__DisplayClass55_0__<SendMeReadJson>b__0
               (ApplicationManagers_AccountManager___c__DisplayClass55_0_o *__this,
               ApplicationManagers_Api_AottgApiResult_o *r,MethodInfo *method)

{
  (__this->fields).result = r;
  il2cpp_runtime_glue(&__this->fields);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass8_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass8_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x418f830

void ApplicationManagers_AccountManager_<>c__DisplayClass8_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass8_0_o *__this,MethodInfo *method
               )

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass8_0$$<OAuthFlow>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass8_0___OAuthFlow_b__0 (ApplicationManagers_AccountManager___c__DisplayClass8_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, const MethodInfo* method);
// 0x418f840

void ApplicationManagers_AccountManager_<>c__DisplayClass8_0__<OAuthFlow>b__0
               (ApplicationManagers_AccountManager___c__DisplayClass8_0_o *__this,
               ApplicationManagers_Api_AottgApiResult_o *r,MethodInfo *method)

{
  (__this->fields).result = r;
  il2cpp_runtime_glue(&__this->fields);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass9_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass9_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass9_0_o* __this, const MethodInfo* method);
// 0x418f850

void ApplicationManagers_AccountManager_<>c__DisplayClass9_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass9_0_o *__this,MethodInfo *method
               )

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass9_0$$<PollUnityOAuth>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass9_0___PollUnityOAuth_b__0 (ApplicationManagers_AccountManager___c__DisplayClass9_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, const MethodInfo* method);
// 0x418f860

void ApplicationManagers_AccountManager_<>c__DisplayClass9_0__<PollUnityOAuth>b__0
               (ApplicationManagers_AccountManager___c__DisplayClass9_0_o *__this,
               ApplicationManagers_Api_AottgApiResult_o *r,MethodInfo *method)

{
  (__this->fields).result = r;
  il2cpp_runtime_glue(&__this->fields);
  return;
}


// ApplicationManagers.AccountManager.<DeleteJson>d__171$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__DeleteJson_d__171___ctor (ApplicationManagers_AccountManager__DeleteJson_d__171_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x418da80

void ApplicationManagers_AccountManager_<DeleteJson>d__171___ctor
               (ApplicationManagers_AccountManager__DeleteJson_d__171_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<DeleteJson>d__171$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__DeleteJson_d__171__System_IDisposable_Dispose (ApplicationManagers_AccountManager__DeleteJson_d__171_o* __this, const MethodInfo* method);
// 0x418f870

void ApplicationManagers_AccountManager_<DeleteJson>d__171__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__DeleteJson_d__171_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<DeleteJson>d__171$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__DeleteJson_d__171__MoveNext (ApplicationManagers_AccountManager__DeleteJson_d__171_o* __this, const MethodInfo* method);
// 0x418f880

bool_conflict
ApplicationManagers_AccountManager_<DeleteJson>d__171__MoveNext
          (ApplicationManagers_AccountManager__DeleteJson_d__171_o *__this,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_AccountManager_o *pAVar2;
  ApplicationManagers_Api_AottgApiResult_o *pAVar3;
  ApplicationManagers_AccountManager___c__DisplayClass171_0_o *pAVar4;
  Il2CppObject *pIVar5;
  System_Action_bool__string__o *pSVar6;
  System_String_o **ppSVar7;
  intptr_t iVar8;
  System_String_o *pSVar9;
  undefined8 uVar10;
  intptr_t iVar11;
  
  if (DAT_05704c0a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgApiResult);
    il2cpp_init_method_metadata(&MethodInfo_Void__DeleteJson_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass171_0);
    il2cpp_init_method_metadata(&"unknown_error");
    il2cpp_init_method_metadata(&"DELETE");
    DAT_05704c0a = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    pAVar4 = (__this->fields).__8__1;
    if (pAVar4 != (ApplicationManagers_AccountManager___c__DisplayClass171_0_o *)0x0) {
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
          iVar11 = (pSVar6->fields).method_code;
          uVar10 = 0;
          goto LAB_0418fa38;
        }
      }
      else {
        pSVar6 = (__this->fields).onComplete;
        if (pSVar6 != (System_Action_bool__string__o *)0x0) {
          iVar8 = (pSVar6->fields).method;
          iVar11 = (pSVar6->fields).method_code;
          uVar10 = 1;
          pSVar9 = (System_String_o *)0x0;
LAB_0418fa38:
          (*(code *)(pSVar6->fields).invoke_impl)(iVar11,uVar10,pSVar9,iVar8);
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
    pAVar4 = (ApplicationManagers_AccountManager___c__DisplayClass171_0_o *)
             il2cpp_runtime_glue(TypeInfo_c__DisplayClass171_0);
    System_Object___ctor((Il2CppObject *)pAVar4,(MethodInfo *)0x0);
    (__this->fields).__8__1 = pAVar4;
    il2cpp_runtime_glue(&(__this->fields).__8__1,pAVar4);
    pAVar4 = (__this->fields).__8__1;
    if (pAVar4 != (ApplicationManagers_AccountManager___c__DisplayClass171_0_o *)0x0) {
      (pAVar4->fields).result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
      il2cpp_runtime_glue(&pAVar4->fields,0);
      il2cpp_runtime_glue(TypeInfo_Action_AottgApiResult);
      System_Action<object>___ctor();
      if (pAVar2 != (ApplicationManagers_AccountManager_o *)0x0) {
        pIVar5 = (Il2CppObject *)ApplicationManagers_AccountManager__SendApiJson();
        (__this->fields).__2__current = pIVar5;
        il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar5);
        (__this->fields).__1__state = 1;
        return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager.<DeleteJson>d__171$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__DeleteJson_d__171__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__DeleteJson_d__171_o* __this, const MethodInfo* method);
// 0x418fa60

Il2CppObject *
ApplicationManagers_AccountManager_<DeleteJson>d__171__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (ApplicationManagers_AccountManager__DeleteJson_d__171_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<DeleteJson>d__171$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__DeleteJson_d__171__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__DeleteJson_d__171_o* __this, const MethodInfo* method);
// 0x418fa70

void ApplicationManagers_AccountManager_<DeleteJson>d__171__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__DeleteJson_d__171_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// ApplicationManagers.AccountManager.<DeleteJson>d__171$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__DeleteJson_d__171__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__DeleteJson_d__171_o* __this, const MethodInfo* method);
// 0x418fab0

Il2CppObject *
ApplicationManagers_AccountManager_<DeleteJson>d__171__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__DeleteJson_d__171_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<ExchangeOAuthCode>d__10$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10___ctor (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4185140

void ApplicationManagers_AccountManager_<ExchangeOAuthCode>d__10___ctor
               (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<ExchangeOAuthCode>d__10$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10__System_IDisposable_Dispose (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o* __this, const MethodInfo* method);
// 0x418fac0

void ApplicationManagers_AccountManager_<ExchangeOAuthCode>d__10__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o *__this,
               MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<ExchangeOAuthCode>d__10$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10__MoveNext (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o* __this, const MethodInfo* method);
// 0x418fad0

bool_conflict
ApplicationManagers_AccountManager_<ExchangeOAuthCode>d__10__MoveNext
          (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o *__this,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_AccountManager_o *pAVar2;
  ApplicationManagers_Api_AottgApiResult_o *pAVar3;
  long lVar4;
  ApplicationManagers_AccountManager___c__DisplayClass10_0_o *pAVar5;
  System_String_o *pSVar6;
  System_String_o *str2;
  Il2CppObject *pIVar7;
  System_String_o **ppSVar8;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  bool_conflict success;
  undefined8 local_30;
  
  if (DAT_05704c0b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgApiResult);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Void__ExchangeOAuthCode_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass10_0);
    il2cpp_init_method_metadata(&"GET");
    il2cpp_init_method_metadata(&"unknown_error");
    il2cpp_init_method_metadata(&"/v1/auth/oauth/session?code=");
    DAT_05704c0b = '\x01';
    in_RDX = extraout_RDX;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0;
    }
    pAVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    pAVar5 = (ApplicationManagers_AccountManager___c__DisplayClass10_0_o *)
             il2cpp_runtime_glue(TypeInfo_c__DisplayClass10_0);
    System_Object___ctor((Il2CppObject *)pAVar5,(MethodInfo *)0x0);
    (__this->fields).__8__1 = pAVar5;
    il2cpp_runtime_glue(&(__this->fields).__8__1,pAVar5);
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar6 = *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x60);
    if (pSVar6 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar6 = System_String__TrimEnd(pSVar6,0x2f,(MethodInfo *)0x0);
    str2 = UnityEngine_Networking_UnityWebRequest__EscapeURL
                     ((__this->fields).code,(MethodInfo *)0x0);
    System_String__Concat(pSVar6,"/v1/auth/oauth/session?code=",str2,(MethodInfo *)0x0);
    pAVar5 = (__this->fields).__8__1;
    if (pAVar5 == (ApplicationManagers_AccountManager___c__DisplayClass10_0_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    (pAVar5->fields).result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
    il2cpp_runtime_glue(&pAVar5->fields,0);
    pAVar5 = (__this->fields).__8__1;
    il2cpp_runtime_glue(TypeInfo_Action_AottgApiResult);
    System_Action<object>___ctor();
    local_30 = 0;
    System_Nullable<int>___ctor((System_Nullable_int__o)&local_30,10,MethodInfo_Nullable_1_Int32);
    if (pAVar2 != (ApplicationManagers_AccountManager_o *)0x0) {
      pIVar7 = (Il2CppObject *)ApplicationManagers_AccountManager__SendApiJson();
      (__this->fields).__2__current = pIVar7;
      il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar7);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71((int7)((ulong)pAVar5 >> 8),1);
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (__this->fields).__1__state = -1;
  pAVar5 = (__this->fields).__8__1;
  if (pAVar5 == (ApplicationManagers_AccountManager___c__DisplayClass10_0_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pAVar3 = (pAVar5->fields).result;
  if (pAVar3 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
    ppSVar8 = (System_String_o **)&"unknown_error";
  }
  else {
    if ((char)(pAVar3->fields)._Success_k__BackingField != '\0') {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_init_class();
        if (DAT_05704c50 == '\0') goto LAB_0418fdeb;
LAB_0418fd23:
        iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
      }
      else {
        if (DAT_05704c50 != '\0') goto LAB_0418fd23;
LAB_0418fdeb:
        il2cpp_init_method_metadata(&TypeInfo_AccountManager);
        DAT_05704c50 = '\x01';
        iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
      }
      lVar4 = TypeInfo_AccountManager;
      *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x99) = 1;
      pAVar5 = (__this->fields).__8__1;
      if (pAVar5 == (ApplicationManagers_AccountManager___c__DisplayClass10_0_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pAVar3 = (pAVar5->fields).result;
      if (pAVar3 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pSVar6 = (pAVar3->fields)._ResponseText_k__BackingField;
      if (*(int *)(lVar4 + 0xe4) == 0) {
        il2cpp_init_class();
      }
      ApplicationManagers_AccountManager__ApplyAuthResponse(pSVar6,method);
      in_RDX = extraout_RDX_00;
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_init_class();
        in_RDX = extraout_RDX_01;
      }
      success = 1;
      pSVar6 = (System_String_o *)0x0;
      goto LAB_0418fdc4;
    }
    ppSVar8 = &(pAVar3->fields)._Error_k__BackingField;
  }
  pSVar6 = *ppSVar8;
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    in_RDX = extraout_RDX_02;
  }
  success = 0;
LAB_0418fdc4:
  ApplicationManagers_AccountManager__CompleteOAuth(success,pSVar6,in_RDX);
  return 0;
}


// ApplicationManagers.AccountManager.<ExchangeOAuthCode>d__10$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o* __this, const MethodInfo* method);
// 0x418ff70

Il2CppObject *
ApplicationManagers_AccountManager_<ExchangeOAuthCode>d__10__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<ExchangeOAuthCode>d__10$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o* __this, const MethodInfo* method);
// 0x418ff80

void ApplicationManagers_AccountManager_<ExchangeOAuthCode>d__10__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// ApplicationManagers.AccountManager.<ExchangeOAuthCode>d__10$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o* __this, const MethodInfo* method);
// 0x418ffc0

Il2CppObject *
ApplicationManagers_AccountManager_<ExchangeOAuthCode>d__10__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<GetAuthMethods>d__164$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__GetAuthMethods_d__164___ctor (ApplicationManagers_AccountManager__GetAuthMethods_d__164_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x418d430

void ApplicationManagers_AccountManager_<GetAuthMethods>d__164___ctor
               (ApplicationManagers_AccountManager__GetAuthMethods_d__164_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<GetAuthMethods>d__164$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__GetAuthMethods_d__164__System_IDisposable_Dispose (ApplicationManagers_AccountManager__GetAuthMethods_d__164_o* __this, const MethodInfo* method);
// 0x418ffd0

void ApplicationManagers_AccountManager_<GetAuthMethods>d__164__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__GetAuthMethods_d__164_o *__this,
               MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<GetAuthMethods>d__164$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__GetAuthMethods_d__164__MoveNext (ApplicationManagers_AccountManager__GetAuthMethods_d__164_o* __this, const MethodInfo* method);
// 0x418ffe0

bool_conflict
ApplicationManagers_AccountManager_<GetAuthMethods>d__164__MoveNext
          (ApplicationManagers_AccountManager__GetAuthMethods_d__164_o *__this,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_AccountManager_o *__this_00;
  ApplicationManagers_Api_AottgApiResult_o *pAVar2;
  System_String_o *json;
  long lVar3;
  System_Action_bool__string__o *pSVar4;
  bool_conflict bVar5;
  ApplicationManagers_AccountManager___c__DisplayClass164_0_o *pAVar6;
  System_Action_AottgApiResult__o *onComplete;
  Il2CppObject *pIVar7;
  System_String_o **ppSVar8;
  MethodInfo *in_R9;
  
  if (DAT_05704c0c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgApiResult);
    il2cpp_init_method_metadata(&MethodInfo_Void__GetAuthMethods_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass164_0);
    il2cpp_init_method_metadata(&"unknown_error");
    il2cpp_init_method_metadata(&"/v1/auth/methods");
    DAT_05704c0c = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    pAVar6 = (__this->fields).__8__1;
    if (pAVar6 == (ApplicationManagers_AccountManager___c__DisplayClass164_0_o *)0x0)
    goto LAB_041902e1;
    pAVar2 = (pAVar6->fields).result;
    if ((pAVar2 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) ||
       ((char)(pAVar2->fields)._Success_k__BackingField == '\0')) {
      pSVar4 = (__this->fields).onComplete;
      if (pSVar4 != (System_Action_bool__string__o *)0x0) {
        if (pAVar2 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
          ppSVar8 = (System_String_o **)&"unknown_error";
        }
        else {
          ppSVar8 = &(pAVar2->fields)._Error_k__BackingField;
        }
        (*(code *)(pSVar4->fields).invoke_impl)
                  ((pSVar4->fields).method_code,0,*ppSVar8,(pSVar4->fields).method);
        return 0;
      }
    }
    else {
      json = (pAVar2->fields)._ResponseText_k__BackingField;
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      bVar5 = ApplicationManagers_AccountManager__ApplyAuthMethodsResponse(json,method);
      if ((char)bVar5 != '\0') {
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar3 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xd0);
        if (lVar3 != 0) {
          (**(code **)(lVar3 + 0x18))(*(undefined8 *)(lVar3 + 0x40),*(undefined8 *)(lVar3 + 0x28));
        }
      }
      pSVar4 = (__this->fields).onComplete;
      if (pSVar4 != (System_Action_bool__string__o *)0x0) {
        (*(code *)(pSVar4->fields).invoke_impl)
                  ((pSVar4->fields).method_code,1,0,(pSVar4->fields).method);
        return 0;
      }
    }
  }
  else if (iVar1 == 0) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    pAVar6 = (ApplicationManagers_AccountManager___c__DisplayClass164_0_o *)
             il2cpp_runtime_glue(TypeInfo_c__DisplayClass164_0);
    System_Object___ctor((Il2CppObject *)pAVar6,(MethodInfo *)0x0);
    (__this->fields).__8__1 = pAVar6;
    il2cpp_runtime_glue(&(__this->fields).__8__1,pAVar6);
    pAVar6 = (__this->fields).__8__1;
    if (pAVar6 != (ApplicationManagers_AccountManager___c__DisplayClass164_0_o *)0x0) {
      (pAVar6->fields).result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
      il2cpp_runtime_glue(&pAVar6->fields,0);
      onComplete = (System_Action_AottgApiResult__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgApiResult);
      System_Action<object>___ctor();
      if (__this_00 != (ApplicationManagers_AccountManager_o *)0x0) {
        pIVar7 = (Il2CppObject *)
                 ApplicationManagers_AccountManager__SendApiGet
                           (__this_00,"/v1/auth/methods",(System_String_o *)0x0,0,onComplete,in_R9);
        (__this->fields).__2__current = pIVar7;
        il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar7);
        (__this->fields).__1__state = 1;
        return (bool_conflict)CONCAT71((int7)((ulong)onComplete >> 8),1);
      }
    }
LAB_041902e1:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return 0;
}


// ApplicationManagers.AccountManager.<GetAuthMethods>d__164$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__GetAuthMethods_d__164__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__GetAuthMethods_d__164_o* __this, const MethodInfo* method);
// 0x4190320

Il2CppObject *
ApplicationManagers_AccountManager_<GetAuthMethods>d__164__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (ApplicationManagers_AccountManager__GetAuthMethods_d__164_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<GetAuthMethods>d__164$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__GetAuthMethods_d__164__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__GetAuthMethods_d__164_o* __this, const MethodInfo* method);
// 0x4190330

void ApplicationManagers_AccountManager_<GetAuthMethods>d__164__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__GetAuthMethods_d__164_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// ApplicationManagers.AccountManager.<GetAuthMethods>d__164$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__GetAuthMethods_d__164__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__GetAuthMethods_d__164_o* __this, const MethodInfo* method);
// 0x4190370

Il2CppObject *
ApplicationManagers_AccountManager_<GetAuthMethods>d__164__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__GetAuthMethods_d__164_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<GetCharacterInfoJson>d__52$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52___ctor (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4187590

void ApplicationManagers_AccountManager_<GetCharacterInfoJson>d__52___ctor
               (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<GetCharacterInfoJson>d__52$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52__System_IDisposable_Dispose (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52_o* __this, const MethodInfo* method);
// 0x4190380

void ApplicationManagers_AccountManager_<GetCharacterInfoJson>d__52__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52_o *__this,
               MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<GetCharacterInfoJson>d__52$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52__MoveNext (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52_o* __this, const MethodInfo* method);
// 0x4190390

bool_conflict
ApplicationManagers_AccountManager_<GetCharacterInfoJson>d__52__MoveNext
          (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52_o *__this,
          MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_AccountManager_o *pAVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  undefined8 uVar5;
  int32_t iVar6;
  
  if (DAT_05704c0d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_bool__string__JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Void__GetCharacterInfoJson_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass52_0);
    il2cpp_init_method_metadata(&"GET");
    il2cpp_init_method_metadata(&"/v1/me/character-info");
    DAT_05704c0d = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  bVar3 = 0;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0;
    }
    pAVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass52_0);
    System_Object___ctor(pIVar4,(MethodInfo *)0x0);
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar4[1].klass = (Il2CppClass *)(__this->fields).onComplete;
      il2cpp_runtime_glue(pIVar4 + 1);
      il2cpp_runtime_glue(TypeInfo_Action_bool__string__JSONNode);
      System_Action<bool__object__object>___ctor();
      if (pAVar2 != (ApplicationManagers_AccountManager_o *)0x0) {
        iVar6 = 1;
        pIVar4 = (Il2CppObject *)ApplicationManagers_AccountManager__SendMeJson();
        (__this->fields).__2__current = pIVar4;
        uVar5 = il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar4);
        bVar3 = (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),1);
        goto LAB_041904b6;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar6 = -1;
LAB_041904b6:
  (__this->fields).__1__state = iVar6;
  return bVar3;
}


// ApplicationManagers.AccountManager.<GetCharacterInfoJson>d__52$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52_o* __this, const MethodInfo* method);
// 0x41904d0

Il2CppObject *
ApplicationManagers_AccountManager_<GetCharacterInfoJson>d__52__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<GetCharacterInfoJson>d__52$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52_o* __this, const MethodInfo* method);
// 0x41904e0

void ApplicationManagers_AccountManager_<GetCharacterInfoJson>d__52__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// ApplicationManagers.AccountManager.<GetCharacterInfoJson>d__52$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52_o* __this, const MethodInfo* method);
// 0x4190520

Il2CppObject *
ApplicationManagers_AccountManager_<GetCharacterInfoJson>d__52__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<GetProfileJson>d__50$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__GetProfileJson_d__50___ctor (ApplicationManagers_AccountManager__GetProfileJson_d__50_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4187550

void ApplicationManagers_AccountManager_<GetProfileJson>d__50___ctor
               (ApplicationManagers_AccountManager__GetProfileJson_d__50_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<GetProfileJson>d__50$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__GetProfileJson_d__50__System_IDisposable_Dispose (ApplicationManagers_AccountManager__GetProfileJson_d__50_o* __this, const MethodInfo* method);
// 0x4190530

void ApplicationManagers_AccountManager_<GetProfileJson>d__50__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__GetProfileJson_d__50_o *__this,
               MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<GetProfileJson>d__50$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__GetProfileJson_d__50__MoveNext (ApplicationManagers_AccountManager__GetProfileJson_d__50_o* __this, const MethodInfo* method);
// 0x4190540

bool_conflict
ApplicationManagers_AccountManager_<GetProfileJson>d__50__MoveNext
          (ApplicationManagers_AccountManager__GetProfileJson_d__50_o *__this,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_AccountManager_o *pAVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  undefined8 uVar5;
  int32_t iVar6;
  
  if (DAT_05704c0e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_bool__string__JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Void__GetProfileJson_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass50_0);
    il2cpp_init_method_metadata(&"GET");
    il2cpp_init_method_metadata(&"/v1/me");
    DAT_05704c0e = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  bVar3 = 0;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0;
    }
    pAVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass50_0);
    System_Object___ctor(pIVar4,(MethodInfo *)0x0);
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar4[1].klass = (Il2CppClass *)(__this->fields).onComplete;
      il2cpp_runtime_glue(pIVar4 + 1);
      il2cpp_runtime_glue(TypeInfo_Action_bool__string__JSONNode);
      System_Action<bool__object__object>___ctor();
      if (pAVar2 != (ApplicationManagers_AccountManager_o *)0x0) {
        iVar6 = 1;
        pIVar4 = (Il2CppObject *)ApplicationManagers_AccountManager__SendMeJson();
        (__this->fields).__2__current = pIVar4;
        uVar5 = il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar4);
        bVar3 = (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),1);
        goto LAB_04190666;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar6 = -1;
LAB_04190666:
  (__this->fields).__1__state = iVar6;
  return bVar3;
}


// ApplicationManagers.AccountManager.<GetProfileJson>d__50$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__GetProfileJson_d__50__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__GetProfileJson_d__50_o* __this, const MethodInfo* method);
// 0x4190680

Il2CppObject *
ApplicationManagers_AccountManager_<GetProfileJson>d__50__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (ApplicationManagers_AccountManager__GetProfileJson_d__50_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<GetProfileJson>d__50$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__GetProfileJson_d__50__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__GetProfileJson_d__50_o* __this, const MethodInfo* method);
// 0x4190690

void ApplicationManagers_AccountManager_<GetProfileJson>d__50__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__GetProfileJson_d__50_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// ApplicationManagers.AccountManager.<GetProfileJson>d__50$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__GetProfileJson_d__50__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__GetProfileJson_d__50_o* __this, const MethodInfo* method);
// 0x41906d0

Il2CppObject *
ApplicationManagers_AccountManager_<GetProfileJson>d__50__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__GetProfileJson_d__50_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<OAuthFlow>d__8$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__OAuthFlow_d__8___ctor (ApplicationManagers_AccountManager__OAuthFlow_d__8_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4184fc0

void ApplicationManagers_AccountManager_<OAuthFlow>d__8___ctor
               (ApplicationManagers_AccountManager__OAuthFlow_d__8_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<OAuthFlow>d__8$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__OAuthFlow_d__8__System_IDisposable_Dispose (ApplicationManagers_AccountManager__OAuthFlow_d__8_o* __this, const MethodInfo* method);
// 0x41906e0

void ApplicationManagers_AccountManager_<OAuthFlow>d__8__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__OAuthFlow_d__8_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<OAuthFlow>d__8$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__OAuthFlow_d__8__MoveNext (ApplicationManagers_AccountManager__OAuthFlow_d__8_o* __this, const MethodInfo* method);
// 0x41906f0

bool_conflict
ApplicationManagers_AccountManager_<OAuthFlow>d__8__MoveNext
          (ApplicationManagers_AccountManager__OAuthFlow_d__8_o *__this,MethodInfo *method)

{
  ApplicationManagers_AccountManager___c__DisplayClass8_0_o **ppAVar1;
  System_String_o **ppSVar2;
  int iVar3;
  uint uVar4;
  int32_t iVar5;
  Il2CppClass *pIVar6;
  ApplicationManagers_Api_AottgApiResult_o *pAVar7;
  undefined8 uVar8;
  bool_conflict bVar9;
  ApplicationManagers_AccountManager___c__DisplayClass8_0_o *pAVar10;
  System_String_o *pSVar11;
  undefined8 *puVar12;
  SimpleJSONFixed_JSONObject_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar13;
  Il2CppObject *pIVar14;
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
  undefined8 uStack_98;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  int16_t iStack_78;
  undefined2 uStack_76;
  undefined4 uStack_74;
  int32_t iStack_70;
  undefined4 uStack_6c;
  ApplicationManagers_AccountManager_UnityOAuthStart_o AStack_68;
  
  if (DAT_05704c0f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgApiResult);
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONObject);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Int32);
    il2cpp_init_method_metadata(&MethodInfo_Void__OAuthFlow_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass8_0);
    il2cpp_init_method_metadata(&"google");
    il2cpp_init_method_metadata(&"Provider is not supported.");
    il2cpp_init_method_metadata(&"POST");
    il2cpp_init_method_metadata(&"bad_response");
    il2cpp_init_method_metadata(&"provider");
    il2cpp_init_method_metadata(&"unknown_error");
    il2cpp_init_method_metadata(&"/v1/auth/oauth/unity/start");
    il2cpp_init_method_metadata(&"discord");
    DAT_05704c0f = '\x01';
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
  iVar3 = (__this->fields).__1__state;
  if (iVar3 == 2) {
    (__this->fields).__1__state = -1;
    return 0;
  }
  pIVar6 = (Il2CppClass *)(__this->fields).__4__this;
  if (iVar3 == 1) {
    (__this->fields).__1__state = -1;
    if (pIVar6 == (Il2CppClass *)0x0) {
LAB_04190c9b:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    uVar4 = (__this->fields).attemptId;
    if (DAT_05704b97 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AccountManager);
      DAT_05704b97 = '\x01';
      in_RDX = extraout_RDX_00;
    }
    if ((pIVar6->_1).byval_arg.bits != uVar4) {
      return 0;
    }
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
      in_RDX = extraout_RDX_01;
    }
    if (**(long **)(TypeInfo_AccountManager + 0xb8) == 0) {
      return 0;
    }
    pAVar10 = (__this->fields).__8__1;
    if (pAVar10 == (ApplicationManagers_AccountManager___c__DisplayClass8_0_o *)0x0)
    goto LAB_04190c9b;
    pAVar7 = (pAVar10->fields).result;
    if (pAVar7 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
      iVar3 = *(int *)(TypeInfo_AccountManager + 0xe4);
      pSVar11 = "unknown_error";
    }
    else {
      if ((char)(pAVar7->fields)._Success_k__BackingField != '\0') {
        pSVar11 = (pAVar7->fields)._ResponseText_k__BackingField;
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
          il2cpp_init_class();
          in_RDX = extraout_RDX_02;
        }
        bVar9 = ApplicationManagers_AccountManager__TryParseUnityOAuthStart
                          (pSVar11,&AStack_68,in_RDX);
        pSVar11 = AStack_68.fields.AuthorizationUrl;
        if ((char)bVar9 != '\0') {
          if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
            il2cpp_init_class();
          }
          UnityEngine_Application__OpenURL(pSVar11,(MethodInfo *)0x0);
          uVar8 = AStack_68.fields.ExpiresAt.fields._8_8_;
          iVar5 = (__this->fields).attemptId;
          bVar9 = (__this->fields).reportNetworkError;
          iStack_78 = AStack_68.fields.ExpiresAt.fields._offsetMinutes;
          uStack_76 = AStack_68.fields.ExpiresAt.fields._10_2_;
          uStack_74 = AStack_68.fields.ExpiresAt.fields._12_4_;
          iStack_70 = AStack_68.fields.PollIntervalSeconds;
          uStack_6c = AStack_68.fields._44_4_;
          uStack_88 = AStack_68.fields.AuthorizationUrl._0_4_;
          uStack_84 = AStack_68.fields.AuthorizationUrl._4_4_;
          uStack_80 = (undefined4)AStack_68.fields.ExpiresAt.fields._dateTime.fields._dateData;
          uStack_7c = AStack_68.fields.ExpiresAt.fields._dateTime.fields._dateData._4_4_;
          uStack_98 = AStack_68.fields.SessionId;
          uStack_90 = AStack_68.fields.PollToken._0_4_;
          uStack_8c = AStack_68.fields.PollToken._4_4_;
          AStack_68.fields.ExpiresAt.fields._8_8_ = uVar8;
          if (DAT_05704b94 == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_PollUnityOAuth_d__9);
            DAT_05704b94 = '\x01';
          }
          pIVar14 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_PollUnityOAuth_d__9);
          System_Object___ctor(pIVar14,(MethodInfo *)0x0);
          *(undefined4 *)&pIVar14[1].klass = 0;
          if (pIVar14 != (Il2CppObject *)0x0) {
            pIVar14[5].klass = pIVar6;
            il2cpp_runtime_glue(pIVar14 + 5,pIVar6);
            *(undefined4 *)&pIVar14[4].klass = _iStack_78;
            *(undefined4 *)((long)&pIVar14[4].klass + 4) = uStack_74;
            *(int32_t *)&pIVar14[4].monitor = iStack_70;
            *(undefined4 *)((long)&pIVar14[4].monitor + 4) = uStack_6c;
            *(undefined4 *)&pIVar14[3].klass = uStack_88;
            *(undefined4 *)((long)&pIVar14[3].klass + 4) = uStack_84;
            *(undefined4 *)&pIVar14[3].monitor = uStack_80;
            *(undefined4 *)((long)&pIVar14[3].monitor + 4) = uStack_7c;
            *(undefined4 *)&pIVar14[2].klass = (undefined4)uStack_98;
            *(undefined4 *)((long)&pIVar14[2].klass + 4) = uStack_98._4_4_;
            *(undefined4 *)&pIVar14[2].monitor = uStack_90;
            *(undefined4 *)((long)&pIVar14[2].monitor + 4) = uStack_8c;
            il2cpp_runtime_glue(pIVar14 + 2,0);
            *(int32_t *)((long)&pIVar14[5].monitor + 4) = iVar5;
            *(char *)&pIVar14[5].monitor = (char)bVar9;
            (__this->fields).__2__current = pIVar14;
            il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar14);
            (__this->fields).__1__state = 2;
            return (bool_conflict)CONCAT71((int7)((ulong)pIVar14 >> 8),1);
          }
          goto LAB_04190c9b;
        }
        in_RDX = extraout_RDX_03;
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
          il2cpp_init_class();
          in_RDX = extraout_RDX_07;
        }
        puVar12 = &"bad_response";
        goto LAB_04190ad2;
      }
      pSVar11 = (pAVar7->fields)._Error_k__BackingField;
      iVar3 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    if (iVar3 == 0) {
      il2cpp_init_class();
      in_RDX = extraout_RDX_06;
    }
  }
  else {
    if (iVar3 != 0) {
      return 0;
    }
    (__this->fields).__1__state = -1;
    pAVar10 = (ApplicationManagers_AccountManager___c__DisplayClass8_0_o *)
              il2cpp_runtime_glue(TypeInfo_c__DisplayClass8_0);
    System_Object___ctor((Il2CppObject *)pAVar10,(MethodInfo *)0x0);
    ppAVar1 = &(__this->fields).__8__1;
    (__this->fields).__8__1 = pAVar10;
    il2cpp_runtime_glue(ppAVar1);
    pSVar11 = (__this->fields).provider;
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar9 = System_String__IsNullOrEmpty(pSVar11,(MethodInfo *)0x0);
    if ((char)bVar9 == '\0') {
      if ((pSVar11 == (System_String_o *)0x0) ||
         (pSVar11 = System_String__Trim(pSVar11,(MethodInfo *)0x0),
         pSVar11 == (System_String_o *)0x0)) goto LAB_04190c9b;
      pSVar11 = System_String__ToLowerInvariant(pSVar11,(MethodInfo *)0x0);
    }
    else {
      pSVar11 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    }
    ppSVar2 = &(__this->fields).provider;
    *ppSVar2 = pSVar11;
    il2cpp_runtime_glue(ppSVar2);
    bVar9 = System_String__op_Inequality(*ppSVar2,"discord",(MethodInfo *)0x0);
    if (((char)bVar9 == '\0') ||
       (bVar9 = System_String__op_Inequality(*ppSVar2,"google",(MethodInfo *)0x0),
       (char)bVar9 == '\0')) {
      __this_00 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONObject);
      SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
      pSVar11 = *ppSVar2;
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar13 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar11,(MethodInfo *)0x0);
      if (__this_00 != (SimpleJSONFixed_JSONObject_o *)0x0) {
        (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
                  (__this_00,"provider",pSVar13,(__this_00->klass->vtable)._8_set_Item.method);
        pAVar10 = *ppAVar1;
        if (pAVar10 != (ApplicationManagers_AccountManager___c__DisplayClass8_0_o *)0x0) {
          (pAVar10->fields).result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
          il2cpp_runtime_glue(&pAVar10->fields,0);
          (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                    (__this_00,(__this_00->klass->vtable)._3_ToString.method);
          pAVar10 = (__this->fields).__8__1;
          il2cpp_runtime_glue(TypeInfo_Action_AottgApiResult);
          System_Action<object>___ctor();
          uStack_98 = (System_String_o *)0x0;
          System_Nullable<int>___ctor((System_Nullable_int__o)&uStack_98,10,MethodInfo_Nullable_1_Int32);
          if (pIVar6 != (Il2CppClass *)0x0) {
            pIVar14 = (Il2CppObject *)ApplicationManagers_AccountManager__SendApiJson();
            (__this->fields).__2__current = pIVar14;
            il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar14);
            (__this->fields).__1__state = 1;
            return (bool_conflict)CONCAT71((int7)((ulong)pAVar10 >> 8),1);
          }
        }
      }
      goto LAB_04190c9b;
    }
    in_RDX = extraout_RDX_04;
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
      in_RDX = extraout_RDX_05;
    }
    puVar12 = &"Provider is not supported.";
LAB_04190ad2:
    pSVar11 = (System_String_o *)*puVar12;
  }
  ApplicationManagers_AccountManager__CompleteOAuth(0,pSVar11,in_RDX);
  return 0;
}


// ApplicationManagers.AccountManager.<OAuthFlow>d__8$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__OAuthFlow_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__OAuthFlow_d__8_o* __this, const MethodInfo* method);
// 0x4190ca0

Il2CppObject *
ApplicationManagers_AccountManager_<OAuthFlow>d__8__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (ApplicationManagers_AccountManager__OAuthFlow_d__8_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<OAuthFlow>d__8$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__OAuthFlow_d__8__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__OAuthFlow_d__8_o* __this, const MethodInfo* method);
// 0x4190cb0

void ApplicationManagers_AccountManager_<OAuthFlow>d__8__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__OAuthFlow_d__8_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// ApplicationManagers.AccountManager.<OAuthFlow>d__8$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__OAuthFlow_d__8__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__OAuthFlow_d__8_o* __this, const MethodInfo* method);
// 0x4190cf0

Il2CppObject *
ApplicationManagers_AccountManager_<OAuthFlow>d__8__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__OAuthFlow_d__8_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<PatchProfileJson>d__51$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__PatchProfileJson_d__51___ctor (ApplicationManagers_AccountManager__PatchProfileJson_d__51_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4187570

void ApplicationManagers_AccountManager_<PatchProfileJson>d__51___ctor
               (ApplicationManagers_AccountManager__PatchProfileJson_d__51_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<PatchProfileJson>d__51$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__PatchProfileJson_d__51__System_IDisposable_Dispose (ApplicationManagers_AccountManager__PatchProfileJson_d__51_o* __this, const MethodInfo* method);
// 0x4190d00

void ApplicationManagers_AccountManager_<PatchProfileJson>d__51__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__PatchProfileJson_d__51_o *__this,
               MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<PatchProfileJson>d__51$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__PatchProfileJson_d__51__MoveNext (ApplicationManagers_AccountManager__PatchProfileJson_d__51_o* __this, const MethodInfo* method);
// 0x4190d10

bool_conflict
ApplicationManagers_AccountManager_<PatchProfileJson>d__51__MoveNext
          (ApplicationManagers_AccountManager__PatchProfileJson_d__51_o *__this,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_AccountManager_o *pAVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  undefined8 uVar5;
  int32_t iVar6;
  
  if (DAT_05704c10 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_bool__string__JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Void__PatchProfileJson_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass51_0);
    il2cpp_init_method_metadata(&"/v1/me");
    il2cpp_init_method_metadata(&"PATCH");
    DAT_05704c10 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  bVar3 = 0;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0;
    }
    pAVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass51_0);
    System_Object___ctor(pIVar4,(MethodInfo *)0x0);
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar4[1].klass = (Il2CppClass *)(__this->fields).onComplete;
      il2cpp_runtime_glue(pIVar4 + 1);
      il2cpp_runtime_glue(TypeInfo_Action_bool__string__JSONNode);
      System_Action<bool__object__object>___ctor();
      if (pAVar2 != (ApplicationManagers_AccountManager_o *)0x0) {
        pIVar4 = (Il2CppObject *)ApplicationManagers_AccountManager__SendMeJson();
        (__this->fields).__2__current = pIVar4;
        uVar5 = il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar4);
        bVar3 = (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),1);
        iVar6 = 1;
        goto LAB_04190e3f;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar6 = -1;
LAB_04190e3f:
  (__this->fields).__1__state = iVar6;
  return bVar3;
}


// ApplicationManagers.AccountManager.<PatchProfileJson>d__51$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__PatchProfileJson_d__51__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__PatchProfileJson_d__51_o* __this, const MethodInfo* method);
// 0x4190e60

Il2CppObject *
ApplicationManagers_AccountManager_<PatchProfileJson>d__51__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (ApplicationManagers_AccountManager__PatchProfileJson_d__51_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<PatchProfileJson>d__51$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__PatchProfileJson_d__51__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__PatchProfileJson_d__51_o* __this, const MethodInfo* method);
// 0x4190e70

void ApplicationManagers_AccountManager_<PatchProfileJson>d__51__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__PatchProfileJson_d__51_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// ApplicationManagers.AccountManager.<PatchProfileJson>d__51$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__PatchProfileJson_d__51__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__PatchProfileJson_d__51_o* __this, const MethodInfo* method);
// 0x4190eb0

Il2CppObject *
ApplicationManagers_AccountManager_<PatchProfileJson>d__51__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__PatchProfileJson_d__51_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<PollUnityOAuth>d__9$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__PollUnityOAuth_d__9___ctor (ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4185090

void ApplicationManagers_AccountManager_<PollUnityOAuth>d__9___ctor
               (ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o *__this,int32_t __1__state
               ,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<PollUnityOAuth>d__9$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__PollUnityOAuth_d__9__System_IDisposable_Dispose (ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o* __this, const MethodInfo* method);
// 0x4190ec0

void ApplicationManagers_AccountManager_<PollUnityOAuth>d__9__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o *__this,MethodInfo *method
               )

{
  return;
}


// ApplicationManagers.AccountManager.<PollUnityOAuth>d__9$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__PollUnityOAuth_d__9__MoveNext (ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o* __this, const MethodInfo* method);
// 0x4190ed0

/* WARNING: Type propagation algorithm not settling */

bool_conflict
ApplicationManagers_AccountManager_<PollUnityOAuth>d__9__MoveNext
          (ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o *__this,MethodInfo *method)

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
  Il2CppClass *pIVar13;
  bool_conflict bVar14;
  ApplicationManagers_AccountManager___c__DisplayClass9_0_o *pAVar15;
  undefined8 *puVar16;
  System_String_o *pSVar17;
  System_String_o *str2;
  Il2CppObject *pIVar18;
  UnityEngine_WaitForSecondsRealtime_o *__this_00;
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
  undefined7 uVar19;
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
  Il2CppClass *pIStack_50;
  undefined8 uStack_48;
  System_TimeSpan_Fields SStack_40;
  System_String_o *pSStack_38;
  MethodInfo *extraout_RDX_05;
  
  if (DAT_05704c11 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgApiResult);
    il2cpp_init_method_metadata(&TypeInfo_DateTimeOffset);
    il2cpp_init_method_metadata(&TypeInfo_Math);
    il2cpp_init_method_metadata(&MethodInfo_Nullable_1_Int32);
    il2cpp_init_method_metadata(&TypeInfo_TimeSpan);
    il2cpp_init_method_metadata(&MethodInfo_Void__PollUnityOAuth_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass9_0);
    il2cpp_init_method_metadata(&TypeInfo_WaitForSecondsRealtime);
    il2cpp_init_method_metadata(&"oauth_failed");
    il2cpp_init_method_metadata(&"bad_response");
    il2cpp_init_method_metadata(&"GET");
    il2cpp_init_method_metadata(&"oauth_missing_code");
    il2cpp_init_method_metadata(&"unknown_error");
    il2cpp_init_method_metadata(&"/v1/auth/oauth/unity/status?sessionId=");
    il2cpp_init_method_metadata(&"oauth_timeout");
    il2cpp_init_method_metadata(&"failed");
    il2cpp_init_method_metadata(&"pending");
    il2cpp_init_method_metadata(&"complete");
    DAT_05704c11 = '\x01';
    in_RDX = extraout_RDX;
  }
  pSStack_60 = (System_String_o *)0x0;
  pIStack_50 = (Il2CppClass *)0x0;
  pSStack_38 = (System_String_o *)0x0;
  SStack_40._ticks = 0;
  uVar1 = (__this->fields).__1__state;
  if (uVar1 < 4) {
    pAVar3 = (__this->fields).__4__this;
    uVar19 = (undefined7)((ulong)__this >> 8);
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
        if (DAT_05704b97 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_AccountManager);
          DAT_05704b97 = '\x01';
          in_RDX = extraout_RDX_00;
        }
        if ((pAVar3->fields)._oauthAttemptId != iVar2) {
          return 0;
        }
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
          il2cpp_init_class();
          in_RDX = extraout_RDX_01;
        }
        if (**(long **)(TypeInfo_AccountManager + 0xb8) == 0) {
          return 0;
        }
        pAVar15 = (__this->fields).__8__1;
        if (pAVar15 == (ApplicationManagers_AccountManager___c__DisplayClass9_0_o *)0x0)
        goto LAB_041915ef;
        pAVar5 = (pAVar15->fields).result;
        if (pAVar5 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
          iVar2 = *(int *)(TypeInfo_AccountManager + 0xe4);
          pSVar17 = "unknown_error";
joined_r0x041913bc:
          if (iVar2 == 0) {
            il2cpp_init_class();
            in_RDX = extraout_RDX_07;
          }
          ApplicationManagers_AccountManager__CompleteOAuth(0,pSVar17,in_RDX);
          return 0;
        }
        if ((char)(pAVar5->fields)._Success_k__BackingField == '\0') {
          pSVar17 = (pAVar5->fields)._Error_k__BackingField;
          iVar2 = *(int *)(TypeInfo_AccountManager + 0xe4);
          goto joined_r0x041913bc;
        }
        pSVar17 = (pAVar5->fields)._ResponseText_k__BackingField;
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        error = &pSStack_38;
        bVar14 = ApplicationManagers_AccountManager__TryParseUnityOAuthStatus
                           (pSVar17,&pSStack_60,(System_String_o **)&pIStack_50,error,in_R8);
        method_00 = extraout_RDX_02;
        if ((char)bVar14 != '\0') {
          bVar14 = System_String__op_Equality(pSStack_60,"complete",(MethodInfo *)0x0);
          if ((char)bVar14 != '\0') {
            bVar14 = System_String__IsNullOrEmpty((System_String_o *)pIStack_50,(MethodInfo *)0x0);
            pIVar13 = pIStack_50;
            if ((char)bVar14 == '\0') {
              bVar14 = (__this->fields).reportNetworkError;
              if (DAT_05704b95 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_ExchangeOAuthCode_d__10);
                DAT_05704b95 = '\x01';
              }
              pIVar18 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_ExchangeOAuthCode_d__10);
              System_Object___ctor(pIVar18,(MethodInfo *)0x0);
              *(undefined4 *)&pIVar18[1].klass = 0;
              if (pIVar18 != (Il2CppObject *)0x0) {
                pIVar18[2].monitor = pAVar3;
                il2cpp_runtime_glue(&pIVar18[2].monitor,pAVar3);
                pIVar18[2].klass = pIVar13;
                il2cpp_runtime_glue(pIVar18 + 2,pIVar13);
                *(char *)&pIVar18[3].klass = (char)bVar14;
                (__this->fields).__2__current = pIVar18;
                il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar18);
                (__this->fields).__1__state = 2;
                return (bool_conflict)CONCAT71(uVar19,1);
              }
              goto LAB_041915ef;
            }
            method_00 = extraout_RDX_03;
            if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
              il2cpp_init_class();
              method_00 = extraout_RDX_04;
            }
            puVar16 = &"oauth_missing_code";
            goto LAB_0419126e;
          }
          bVar14 = System_String__op_Equality(pSStack_60,"failed",(MethodInfo *)0x0);
          if ((char)bVar14 != '\0') {
            bVar14 = System_String__IsNullOrEmpty(pSStack_38,(MethodInfo *)0x0);
            if ((char)bVar14 != '\0') {
              error = (System_String_o **)&"oauth_failed";
            }
            iVar2 = *(int *)(TypeInfo_AccountManager + 0xe4);
            in_RDX = extraout_RDX_08;
            pSVar17 = *error;
            goto joined_r0x041913bc;
          }
          bVar14 = System_String__op_Inequality(pSStack_60,"pending",(MethodInfo *)0x0);
          method_00 = extraout_RDX_09;
          if ((char)bVar14 == '\0') {
            pAVar12 = &(__this->fields).start;
            uVar10 = (pAVar12->fields).ExpiresAt.fields._dateTime;
            uVar11 = (pAVar12->fields).ExpiresAt.fields._offsetMinutes;
            SVar23.fields._offsetMinutes = uVar11;
            SVar23.fields._dateTime.fields._dateData =
                 (System_DateTime_Fields)(System_DateTime_Fields)uVar10;
            if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
              il2cpp_init_class();
            }
            SVar24 = System_DateTimeOffset__get_UtcNow((MethodInfo *)0x0);
            right_00.fields._8_8_ = SVar24.fields._8_8_ & 0xffffffff;
            SVar23.fields._10_6_ = 0;
            right_00.fields._dateTime.fields._dateData =
                 SVar24.fields._dateTime.fields._dateData.fields;
            SStack_40._ticks =
                 (int64_t)System_DateTimeOffset__op_Subtraction(SVar23,right_00,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
              il2cpp_init_class();
            }
            dVar21 = System_TimeSpan__get_TotalSeconds
                               ((System_TimeSpan_o)&SStack_40,(MethodInfo *)0x0);
            if (*(int *)(TypeInfo_Math + 0xe4) == 0) {
              dStack_58 = dVar21;
              il2cpp_init_class();
              dVar21 = dStack_58;
            }
            dVar21 = System_Math__Max(0.1,dVar21,(MethodInfo *)0x0);
            fVar22 = (__this->fields)._pollSeconds_5__2;
            if ((float)dVar21 <= fVar22) {
              fVar22 = (float)dVar21;
            }
            dStack_58 = (double)CONCAT44(dStack_58._4_4_,fVar22);
            __this_00 = (UnityEngine_WaitForSecondsRealtime_o *)il2cpp_runtime_glue(TypeInfo_WaitForSecondsRealtime);
            UnityEngine_WaitForSecondsRealtime___ctor(__this_00,dStack_58._0_4_,(MethodInfo *)0x0);
            (__this->fields).__2__current = (Il2CppObject *)__this_00;
            il2cpp_runtime_glue(&(__this->fields).__2__current,__this_00);
            (__this->fields).__1__state = 3;
            return (bool_conflict)CONCAT71(uVar19,1);
          }
        }
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
          il2cpp_init_class();
          method_00 = extraout_RDX_10;
        }
        puVar16 = &"bad_response";
        goto LAB_0419126e;
      }
      goto LAB_041915ef;
    case 2:
      (__this->fields).__1__state = -1;
      return 0;
    case 3:
      (__this->fields).__1__state = -1;
      (__this->fields).__8__1 = (ApplicationManagers_AccountManager___c__DisplayClass9_0_o *)0x0;
      il2cpp_runtime_glue(&(__this->fields).__8__1);
    }
    if (pAVar3 == (ApplicationManagers_AccountManager_o *)0x0) {
LAB_041915ef:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    iVar2 = (__this->fields).attemptId;
    if (DAT_05704b97 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AccountManager);
      DAT_05704b97 = '\x01';
    }
    if ((pAVar3->fields)._oauthAttemptId == iVar2) {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_init_class();
        lVar4 = **(long **)(TypeInfo_AccountManager + 0xb8);
      }
      else {
        lVar4 = **(long **)(TypeInfo_AccountManager + 0xb8);
      }
      if (lVar4 != 0) {
        pAVar15 = (ApplicationManagers_AccountManager___c__DisplayClass9_0_o *)
                  il2cpp_runtime_glue(TypeInfo_c__DisplayClass9_0);
        System_Object___ctor((Il2CppObject *)pAVar15,(MethodInfo *)0x0);
        (__this->fields).__8__1 = pAVar15;
        il2cpp_runtime_glue(&(__this->fields).__8__1,pAVar15);
        if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
          il2cpp_init_class();
        }
        SVar23 = System_DateTimeOffset__get_UtcNow((MethodInfo *)0x0);
        pAVar12 = &(__this->fields).start;
        uVar7 = (pAVar12->fields).ExpiresAt.fields._dateTime;
        uVar8 = (pAVar12->fields).ExpiresAt.fields._offsetMinutes;
        uVar9 = *(undefined2 *)&(pAVar12->fields).ExpiresAt.fields.field_0xa;
        right.fields._10_2_ = uVar9;
        right.fields._offsetMinutes = uVar8;
        right.fields._dateTime.fields._dateData =
             (System_DateTime_Fields)(System_DateTime_Fields)uVar7;
        auVar6 = SVar23.fields._0_12_;
        SVar24.fields._12_4_ = 0;
        SVar24.fields._dateTime.fields._dateData =
             (System_DateTime_Fields)(System_DateTime_Fields)auVar6._0_8_;
        SVar24.fields._offsetMinutes = auVar6._8_2_;
        SVar24.fields._10_2_ = auVar6._10_2_;
        right.fields._12_4_ = 0;
        bVar14 = System_DateTimeOffset__op_GreaterThanOrEqual(SVar24,right,(MethodInfo *)0x0);
        method_00 = extraout_RDX_05;
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
          il2cpp_init_class();
          method_00 = extraout_RDX_06;
        }
        if ((char)bVar14 != '\0') {
          puVar16 = &"oauth_timeout";
LAB_0419126e:
          ApplicationManagers_AccountManager__CompleteOAuth(0,(System_String_o *)*puVar16,method_00)
          ;
          return 0;
        }
        pSVar17 = *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x60);
        if (pSVar17 != (System_String_o *)0x0) {
          pSVar17 = System_String__TrimEnd(pSVar17,0x2f,(MethodInfo *)0x0);
          str2 = UnityEngine_Networking_UnityWebRequest__EscapeURL
                           ((__this->fields).start.fields.SessionId,(MethodInfo *)0x0);
          System_String__Concat(pSVar17,"/v1/auth/oauth/unity/status?sessionId=",str2,(MethodInfo *)0x0);
          pAVar15 = (__this->fields).__8__1;
          if (pAVar15 != (ApplicationManagers_AccountManager___c__DisplayClass9_0_o *)0x0) {
            (pAVar15->fields).result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
            il2cpp_runtime_glue(&pAVar15->fields,0);
            il2cpp_runtime_glue(TypeInfo_Action_AottgApiResult);
            System_Action<object>___ctor();
            uStack_48 = 0;
            System_Nullable<int>___ctor((System_Nullable_int__o)&uStack_48,10,MethodInfo_Nullable_1_Int32);
            pIVar18 = (Il2CppObject *)ApplicationManagers_AccountManager__SendApiJson();
            (__this->fields).__2__current = pIVar18;
            il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar18);
            (__this->fields).__1__state = 1;
            return (bool_conflict)CONCAT71(uVar19,1);
          }
        }
        goto LAB_041915ef;
      }
    }
  }
  return 0;
}


// ApplicationManagers.AccountManager.<PollUnityOAuth>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__PollUnityOAuth_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o* __this, const MethodInfo* method);
// 0x4191600

Il2CppObject *
ApplicationManagers_AccountManager_<PollUnityOAuth>d__9__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<PollUnityOAuth>d__9$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__PollUnityOAuth_d__9__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o* __this, const MethodInfo* method);
// 0x4191610

void ApplicationManagers_AccountManager_<PollUnityOAuth>d__9__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o *__this,MethodInfo *method
               )

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// ApplicationManagers.AccountManager.<PollUnityOAuth>d__9$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__PollUnityOAuth_d__9__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o* __this, const MethodInfo* method);
// 0x4191650

Il2CppObject *
ApplicationManagers_AccountManager_<PollUnityOAuth>d__9__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<PostJson>d__172$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__PostJson_d__172___ctor (ApplicationManagers_AccountManager__PostJson_d__172_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x418daa0

void ApplicationManagers_AccountManager_<PostJson>d__172___ctor
               (ApplicationManagers_AccountManager__PostJson_d__172_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<PostJson>d__172$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__PostJson_d__172__System_IDisposable_Dispose (ApplicationManagers_AccountManager__PostJson_d__172_o* __this, const MethodInfo* method);
// 0x4191660

void ApplicationManagers_AccountManager_<PostJson>d__172__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__PostJson_d__172_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<PostJson>d__172$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__PostJson_d__172__MoveNext (ApplicationManagers_AccountManager__PostJson_d__172_o* __this, const MethodInfo* method);
// 0x4191670

bool_conflict
ApplicationManagers_AccountManager_<PostJson>d__172__MoveNext
          (ApplicationManagers_AccountManager__PostJson_d__172_o *__this,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_AccountManager_o *pAVar2;
  ApplicationManagers_Api_AottgApiResult_o *pAVar3;
  System_Action_string__o *pSVar4;
  bool_conflict bVar5;
  ApplicationManagers_AccountManager___c__DisplayClass172_0_o *pAVar6;
  Il2CppObject *pIVar7;
  SimpleJSONFixed_JSONNode_o *a;
  SimpleJSONFixed_JSONNode_o *a_00;
  long *plVar8;
  System_String_o **ppSVar9;
  System_Action_bool__string__o *pSVar10;
  intptr_t iVar11;
  System_String_o *pSVar12;
  undefined8 uVar13;
  MethodInfo *method_00;
  intptr_t iVar14;
  
  if (DAT_05704c12 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgApiResult);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Void__PostJson_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass172_0);
    il2cpp_init_method_metadata(&"POST");
    il2cpp_init_method_metadata(&"/v1/auth/refresh");
    il2cpp_init_method_metadata(&"unknown_error");
    il2cpp_init_method_metadata(&"invalid_refresh_token");
    DAT_05704c12 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0;
    }
    pAVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    pAVar6 = (ApplicationManagers_AccountManager___c__DisplayClass172_0_o *)
             il2cpp_runtime_glue(TypeInfo_c__DisplayClass172_0);
    System_Object___ctor((Il2CppObject *)pAVar6,(MethodInfo *)0x0);
    (__this->fields).__8__1 = pAVar6;
    il2cpp_runtime_glue(&(__this->fields).__8__1,pAVar6);
    pAVar6 = (__this->fields).__8__1;
    if (pAVar6 != (ApplicationManagers_AccountManager___c__DisplayClass172_0_o *)0x0) {
      (pAVar6->fields).result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
      il2cpp_runtime_glue(&pAVar6->fields,0);
      pSVar12 = (__this->fields).path;
      il2cpp_runtime_glue(TypeInfo_Action_AottgApiResult);
      System_Action<object>___ctor();
      if (pAVar2 != (ApplicationManagers_AccountManager_o *)0x0) {
        pIVar7 = (Il2CppObject *)ApplicationManagers_AccountManager__SendApiJson();
        (__this->fields).__2__current = pIVar7;
        il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar7);
        (__this->fields).__1__state = 1;
        return (bool_conflict)CONCAT71((int7)((ulong)pSVar12 >> 8),1);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  (__this->fields).__1__state = -1;
  pAVar6 = (__this->fields).__8__1;
  if (pAVar6 == (ApplicationManagers_AccountManager___c__DisplayClass172_0_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pAVar3 = (pAVar6->fields).result;
  if (pAVar3 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
    ppSVar9 = (System_String_o **)&"unknown_error";
  }
  else {
    if ((char)(pAVar3->fields)._Success_k__BackingField != '\0') {
      pSVar12 = (pAVar3->fields)._ResponseText_k__BackingField;
      if (((__this->fields).captureField != (System_String_o *)0x0) &&
         ((__this->fields).captureTarget != (System_Action_string__o *)0x0)) {
        method = (MethodInfo *)0x0;
        bVar5 = System_String__IsNullOrEmpty(pSVar12,(MethodInfo *)0x0);
        if ((char)bVar5 == '\0') {
          a = SimpleJSONFixed_JSON__Parse(pSVar12,(MethodInfo *)0x0);
          if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
            il2cpp_init_class();
          }
          method = (MethodInfo *)0x0;
          bVar5 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if ((char)bVar5 != '\0') {
            if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            a_00 = (SimpleJSONFixed_JSONNode_o *)
                   (*(a->klass->vtable)._7_get_Item.methodPtr)
                             (a,(__this->fields).captureField,(a->klass->vtable)._7_get_Item.method)
            ;
            if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
              il2cpp_init_class();
            }
            method = (MethodInfo *)0x0;
            bVar5 = SimpleJSONFixed_JSONNode__op_Inequality
                              (a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
            if ((char)bVar5 != '\0') {
              pSVar4 = (__this->fields).captureTarget;
              plVar8 = (long *)(*(a->klass->vtable)._7_get_Item.methodPtr)
                                         (a,(__this->fields).captureField,
                                          (a->klass->vtable)._7_get_Item.method);
              if (plVar8 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              method = (MethodInfo *)
                       (**(code **)(*plVar8 + 0x1c8))(plVar8,*(undefined8 *)(*plVar8 + 0x1d0));
              if (pSVar4 == (System_Action_string__o *)0x0) {
                    /* WARNING: Subroutine does not return */
                il2cpp_raise_exception();
              }
              (*(code *)(pSVar4->fields).invoke_impl)
                        ((pSVar4->fields).method_code,method,(pSVar4->fields).method);
            }
          }
        }
      }
      if ((char)(__this->fields).applyAuthResponse != '\0') {
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        ApplicationManagers_AccountManager__ApplyAuthResponse(pSVar12,method);
      }
      pSVar10 = (__this->fields).onComplete;
      if (pSVar10 == (System_Action_bool__string__o *)0x0) {
        return 0;
      }
      iVar11 = (pSVar10->fields).method;
      iVar14 = (pSVar10->fields).method_code;
      uVar13 = 1;
      pSVar12 = (System_String_o *)0x0;
      goto LAB_04191a3c;
    }
    ppSVar9 = &(pAVar3->fields)._Error_k__BackingField;
  }
  pSVar12 = *ppSVar9;
  method_00 = "/v1/auth/refresh";
  bVar5 = System_String__Equals
                    ((__this->fields).path,(System_String_o *)"/v1/auth/refresh",5,(MethodInfo *)0x0);
  pAVar6 = (__this->fields).__8__1;
  if ((char)bVar5 == '\0') {
    if (pAVar6 == (ApplicationManagers_AccountManager___c__DisplayClass172_0_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
LAB_041919d7:
    pAVar3 = (pAVar6->fields).result;
    if ((pAVar3 != (ApplicationManagers_Api_AottgApiResult_o *)0x0) &&
       (((pAVar3->fields)._StatusCode_k__BackingField == 0x191 &&
        (method_00 = "invalid_refresh_token",
        bVar5 = System_String__op_Equality
                          (pSVar12,(System_String_o *)"invalid_refresh_token",(MethodInfo *)0x0),
        (char)bVar5 != '\0')))) {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      goto LAB_04191a1a;
    }
  }
  else {
    if (pAVar6 == (ApplicationManagers_AccountManager___c__DisplayClass172_0_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pAVar3 = (pAVar6->fields).result;
    if ((pAVar3 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) ||
       ((pAVar3->fields)._StatusCode_k__BackingField < 1)) goto LAB_041919d7;
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
LAB_04191a1a:
    ApplicationManagers_AccountManager__ClearSession(1,method_00);
  }
  pSVar10 = (__this->fields).onComplete;
  if (pSVar10 == (System_Action_bool__string__o *)0x0) {
    return 0;
  }
  iVar11 = (pSVar10->fields).method;
  iVar14 = (pSVar10->fields).method_code;
  uVar13 = 0;
LAB_04191a3c:
  (*(code *)(pSVar10->fields).invoke_impl)(iVar14,uVar13,pSVar12,iVar11);
  return 0;
}


// ApplicationManagers.AccountManager.<PostJson>d__172$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__PostJson_d__172__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__PostJson_d__172_o* __this, const MethodInfo* method);
// 0x4191c70

Il2CppObject *
ApplicationManagers_AccountManager_<PostJson>d__172__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (ApplicationManagers_AccountManager__PostJson_d__172_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<PostJson>d__172$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__PostJson_d__172__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__PostJson_d__172_o* __this, const MethodInfo* method);
// 0x4191c80

void ApplicationManagers_AccountManager_<PostJson>d__172__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__PostJson_d__172_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// ApplicationManagers.AccountManager.<PostJson>d__172$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__PostJson_d__172__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__PostJson_d__172_o* __this, const MethodInfo* method);
// 0x4191cc0

Il2CppObject *
ApplicationManagers_AccountManager_<PostJson>d__172__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__PostJson_d__172_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<PutCharacterInfoJson>d__53$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53___ctor (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x41875b0

void ApplicationManagers_AccountManager_<PutCharacterInfoJson>d__53___ctor
               (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<PutCharacterInfoJson>d__53$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53__System_IDisposable_Dispose (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o* __this, const MethodInfo* method);
// 0x4191cd0

void ApplicationManagers_AccountManager_<PutCharacterInfoJson>d__53__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o *__this,
               MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<PutCharacterInfoJson>d__53$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53__MoveNext (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o* __this, const MethodInfo* method);
// 0x4191ce0

bool_conflict
ApplicationManagers_AccountManager_<PutCharacterInfoJson>d__53__MoveNext
          (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o *__this,
          MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_AccountManager_o *pAVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  undefined8 uVar5;
  int32_t iVar6;
  
  if (DAT_05704c13 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_bool__string__JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Void__PutCharacterInfoJson_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass53_0);
    il2cpp_init_method_metadata(&"PUT");
    il2cpp_init_method_metadata(&"/v1/me/character-info");
    DAT_05704c13 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  bVar3 = 0;
  if (iVar1 != 1) {
    if (iVar1 != 0) {
      return 0;
    }
    pAVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    pIVar4 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass53_0);
    System_Object___ctor(pIVar4,(MethodInfo *)0x0);
    if (pIVar4 != (Il2CppObject *)0x0) {
      pIVar4[1].klass = (Il2CppClass *)(__this->fields).fallbackCharacterInfo;
      il2cpp_runtime_glue(pIVar4 + 1);
      pIVar4[1].monitor = (__this->fields).onComplete;
      il2cpp_runtime_glue(&pIVar4[1].monitor);
      il2cpp_runtime_glue(TypeInfo_Action_bool__string__JSONNode);
      System_Action<bool__object__object>___ctor();
      if (pAVar2 != (ApplicationManagers_AccountManager_o *)0x0) {
        pIVar4 = (Il2CppObject *)ApplicationManagers_AccountManager__SendMeJson();
        (__this->fields).__2__current = pIVar4;
        uVar5 = il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar4);
        bVar3 = (bool_conflict)CONCAT71((int7)((ulong)uVar5 >> 8),1);
        iVar6 = 1;
        goto LAB_04191e20;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  iVar6 = -1;
LAB_04191e20:
  (__this->fields).__1__state = iVar6;
  return bVar3;
}


// ApplicationManagers.AccountManager.<PutCharacterInfoJson>d__53$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o* __this, const MethodInfo* method);
// 0x4191e40

Il2CppObject *
ApplicationManagers_AccountManager_<PutCharacterInfoJson>d__53__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<PutCharacterInfoJson>d__53$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o* __this, const MethodInfo* method);
// 0x4191e50

void ApplicationManagers_AccountManager_<PutCharacterInfoJson>d__53__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// ApplicationManagers.AccountManager.<PutCharacterInfoJson>d__53$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o* __this, const MethodInfo* method);
// 0x4191e90

Il2CppObject *
ApplicationManagers_AccountManager_<PutCharacterInfoJson>d__53__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o *__this,
          MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<SendApiGet>d__165$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__SendApiGet_d__165___ctor (ApplicationManagers_AccountManager__SendApiGet_d__165_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x418d510

void ApplicationManagers_AccountManager_<SendApiGet>d__165___ctor
               (ApplicationManagers_AccountManager__SendApiGet_d__165_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<SendApiGet>d__165$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__SendApiGet_d__165__System_IDisposable_Dispose (ApplicationManagers_AccountManager__SendApiGet_d__165_o* __this, const MethodInfo* method);
// 0x4191ea0

void ApplicationManagers_AccountManager_<SendApiGet>d__165__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__SendApiGet_d__165_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<SendApiGet>d__165$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__SendApiGet_d__165__MoveNext (ApplicationManagers_AccountManager__SendApiGet_d__165_o* __this, const MethodInfo* method);
// 0x4191eb0

bool_conflict
ApplicationManagers_AccountManager_<SendApiGet>d__165__MoveNext
          (ApplicationManagers_AccountManager__SendApiGet_d__165_o *__this,MethodInfo *method)

{
  ApplicationManagers_AccountManager___c__DisplayClass165_0_o **ppAVar1;
  int iVar2;
  ApplicationManagers_AccountManager_o *pAVar3;
  System_String_o *path;
  System_String_o *bearer;
  undefined1 auVar4 [12];
  bool_conflict bVar5;
  ApplicationManagers_AccountManager___c__DisplayClass165_0_o *pAVar6;
  System_Action_AottgApiResult__o *onComplete;
  undefined8 uVar7;
  System_Action_AottgApiResult__o *__this_00;
  MethodInfo *in_R9;
  Cysharp_Threading_Tasks_UniTask_o CVar8;
  
  if (DAT_05704c14 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgApiResult);
    il2cpp_init_method_metadata(&MethodInfo_Void__SendApiGet_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass165_0);
    DAT_05704c14 = '\x01';
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
    pAVar6 = (ApplicationManagers_AccountManager___c__DisplayClass165_0_o *)
             il2cpp_runtime_glue(TypeInfo_c__DisplayClass165_0);
    System_Object___ctor((Il2CppObject *)pAVar6,(MethodInfo *)0x0);
    ppAVar1 = &(__this->fields).__8__1;
    (__this->fields).__8__1 = pAVar6;
    il2cpp_runtime_glue(ppAVar1,pAVar6);
    pAVar6 = (__this->fields).__8__1;
    if (pAVar6 == (ApplicationManagers_AccountManager___c__DisplayClass165_0_o *)0x0)
    goto LAB_0419201e;
    (pAVar6->fields).onComplete = (__this->fields).onComplete;
    il2cpp_runtime_glue(&(pAVar6->fields).onComplete);
    pAVar6 = *ppAVar1;
    if (pAVar6 == (ApplicationManagers_AccountManager___c__DisplayClass165_0_o *)0x0)
    goto LAB_0419201e;
    *(undefined1 *)&(pAVar6->fields).done = 0;
    path = (__this->fields).path;
    bearer = (__this->fields).bearer;
    bVar5 = (__this->fields).parseJson;
    onComplete = (System_Action_AottgApiResult__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgApiResult);
    __this_00 = onComplete;
    System_Action<object>___ctor();
    if (pAVar3 == (ApplicationManagers_AccountManager_o *)0x0) goto LAB_0419201e;
    CVar8 = ApplicationManagers_AccountManager__SendApiGetAsync
                      ((ApplicationManagers_AccountManager_o *)__this_00,path,bearer,
                       (uint)(byte)bVar5,onComplete,in_R9);
    auVar4 = CVar8.fields._0_12_;
    CVar8.fields._12_4_ = 0;
    CVar8.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_o *)auVar4._0_8_;
    CVar8.fields.token = auVar4._8_2_;
    CVar8.fields._10_2_ = auVar4._10_2_;
    Cysharp_Threading_Tasks_UniTaskExtensions__Forget(CVar8,(MethodInfo *)0x0);
    pAVar6 = (__this->fields).__8__1;
  }
  if (pAVar6 != (ApplicationManagers_AccountManager___c__DisplayClass165_0_o *)0x0) {
    if ((char)(pAVar6->fields).done != '\0') {
      return 0;
    }
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    uVar7 = il2cpp_runtime_glue(&(__this->fields).__2__current,0);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)uVar7 >> 8),1);
  }
LAB_0419201e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager.<SendApiGet>d__165$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__SendApiGet_d__165__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__SendApiGet_d__165_o* __this, const MethodInfo* method);
// 0x4192030

Il2CppObject *
ApplicationManagers_AccountManager_<SendApiGet>d__165__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (ApplicationManagers_AccountManager__SendApiGet_d__165_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<SendApiGet>d__165$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__SendApiGet_d__165__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__SendApiGet_d__165_o* __this, const MethodInfo* method);
// 0x4192040

void ApplicationManagers_AccountManager_<SendApiGet>d__165__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__SendApiGet_d__165_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// ApplicationManagers.AccountManager.<SendApiGet>d__165$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__SendApiGet_d__165__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__SendApiGet_d__165_o* __this, const MethodInfo* method);
// 0x4192080

Il2CppObject *
ApplicationManagers_AccountManager_<SendApiGet>d__165__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__SendApiGet_d__165_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<SendApiGetAsync>d__166$$MoveNext
// il2cpp: void ApplicationManagers_AccountManager__SendApiGetAsync_d__166__MoveNext (ApplicationManagers_AccountManager__SendApiGetAsync_d__166_o __this, const MethodInfo* method);
// 0x4192090

void ApplicationManagers_AccountManager_<SendApiGetAsync>d__166__MoveNext
               (ApplicationManagers_AccountManager__SendApiGetAsync_d__166_o __this,
               MethodInfo *method)

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
  
  if (DAT_05704c15 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T__Awaiter);
    il2cpp_init_method_metadata(&MethodInfo_AottgApiResult_GetResult);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_IsCompleted);
    il2cpp_init_method_metadata(&MethodInfo_UniTask_1_T__Awaiter_ApplicationManagers_Api_Aot);
    il2cpp_init_method_metadata();
    DAT_05704c15 = '\x01';
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
      il2cpp_init_class();
    }
    ApplicationManagers_AccountManager__SendApiJsonAsync(&local_68);
    local_38._0_2_ = local_68.fields.token;
    local_38._2_6_ = local_68.fields._18_6_;
    local_48 = local_68.fields.source;
    pAStack_40 = local_68.fields.result;
    local_68.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    local_68.fields.result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
    local_68.fields.token = 0;
    local_68.fields._18_6_ = 0;
    if ((*(byte *)(*(long *)(MethodInfo_UniTask_1_T__Awaiter_ApplicationManagers_Api_Aot + 0x20) + 0x135) & 1) == 0) {
      il2cpp_glue_022c28b0();
    }
    local_68.fields.token = (int16_t)local_38;
    local_68.fields._18_6_ = local_38._2_6_;
    local_68.fields.source = local_48;
    local_68.fields.result = pAStack_40;
    il2cpp_runtime_glue(&local_68,0);
    local_78._0_2_ = local_68.fields.token;
    local_78._2_6_ = local_68.fields._18_6_;
    local_88 = local_68.fields.source;
    uStack_80 = local_68.fields.result;
    lVar10 = *(long *)(MethodInfo_Boolean_get_IsCompleted + 0x20);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = il2cpp_glue_022c28b0();
    }
    pCVar7 = local_88;
    if (local_88 != (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0) {
      sVar8 = (int16_t)local_78;
      lVar10 = *(long *)(*(long *)(*(long *)(lVar10 + 0xc0) + 0x18) + 0x20);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = il2cpp_glue_022c28b0();
      }
      lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 8);
      if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
        lVar10 = il2cpp_glue_022c28b0();
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
            goto LAB_041922f2;
          }
          lVar14 = lVar14 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar14);
      }
      ppIVar11 = (Il2CppMethodPointer *)il2cpp_runtime_glue(pCVar7,lVar10,1);
LAB_041922f2:
      iVar9 = (**ppIVar11)(pCVar7,(ulong)(uint)(int)sVar8,(MethodInfo *)ppIVar11[1]);
      pCVar7 = local_88;
      if (iVar9 == 0) {
        *(undefined4 *)&method->methodPointer = 0;
        *(undefined4 *)&method->field7_0x38 = (undefined4)local_88;
        *(undefined4 *)((long)&method->field7_0x38 + 4) = local_88._4_4_;
        *(undefined4 *)&method->field8_0x40 = (undefined4)uStack_80;
        *(undefined4 *)((long)&method->field8_0x40 + 4) = uStack_80._4_4_;
        *(undefined8 *)&method->token = local_78;
        il2cpp_runtime_glue(&method->field7_0x38,0);
        il2cpp_glue_02581c30(&method->virtualMethodPointer,&local_88,method,MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T__Awaiter);
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
      lVar10 = il2cpp_glue_022c28b0();
    }
    lVar10 = *(long *)(*(long *)(lVar10 + 0xc0) + 0x28);
    if ((*(byte *)(lVar10 + 0x135) & 1) == 0) {
      lVar10 = il2cpp_glue_022c28b0();
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
          goto LAB_041923c2;
        }
        lVar14 = lVar14 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar14);
    }
    ppIVar11 = (Il2CppMethodPointer *)il2cpp_runtime_glue(pCVar7,lVar10,0);
LAB_041923c2:
    pAVar12 = (ApplicationManagers_Api_AottgApiResult_o *)
              (**ppIVar11)(pCVar7,(ulong)(uint)(int)sVar8,(MethodInfo *)ppIVar11[1]);
    ppIVar5 = method->parameters;
  }
  if (ppIVar5 != (Il2CppType **)0x0) {
    (*(code *)ppIVar5[3])(ppIVar5[8],pAVar12,ppIVar5[5]);
  }
  *(undefined4 *)&method->methodPointer = 0xfffffffe;
  if (DAT_056fe2bb == '\0') {
    il2cpp_init_method_metadata();
    DAT_056fe2bb = '\x01';
  }
  pIVar6 = method->virtualMethodPointer;
  if (pIVar6 != (Il2CppMethodPointer)0x0) {
    lVar10 = *(long *)pIVar6;
    if ((ulong)*(ushort *)(lVar10 + 0x12e) != 0) {
      lVar14 = 0;
      do {
        if (*(long *)(*(long *)(lVar10 + 0xb0) + lVar14) == TypeInfo_IStateMachineRunnerPromise) {
          puVar13 = (undefined8 *)
                    (lVar10 + (long)(*(int *)(*(long *)(lVar10 + 0xb0) + 8 + lVar14) + 2) * 0x10 +
                    0x138);
          goto LAB_04192475;
        }
        lVar14 = lVar14 + 0x10;
      } while ((ulong)*(ushort *)(lVar10 + 0x12e) << 4 != lVar14);
    }
    puVar13 = (undefined8 *)il2cpp_runtime_glue(pIVar6,TypeInfo_IStateMachineRunnerPromise,2);
LAB_04192475:
    (*(code *)*puVar13)(pIVar6,puVar13[1]);
  }
  return;
}


// ApplicationManagers.AccountManager.<SendApiGetAsync>d__166$$SetStateMachine
// il2cpp: void ApplicationManagers_AccountManager__SendApiGetAsync_d__166__SetStateMachine (ApplicationManagers_AccountManager__SendApiGetAsync_d__166_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x4192800

void ApplicationManagers_AccountManager_<SendApiGetAsync>d__166__SetStateMachine
               (ApplicationManagers_AccountManager__SendApiGetAsync_d__166_o __this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method
               )

{
  return;
}


// ApplicationManagers.AccountManager.<SendApiJson>d__167$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__SendApiJson_d__167___ctor (ApplicationManagers_AccountManager__SendApiJson_d__167_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x418d710

void ApplicationManagers_AccountManager_<SendApiJson>d__167___ctor
               (ApplicationManagers_AccountManager__SendApiJson_d__167_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<SendApiJson>d__167$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__SendApiJson_d__167__System_IDisposable_Dispose (ApplicationManagers_AccountManager__SendApiJson_d__167_o* __this, const MethodInfo* method);
// 0x4192810

void ApplicationManagers_AccountManager_<SendApiJson>d__167__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__SendApiJson_d__167_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<SendApiJson>d__167$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__SendApiJson_d__167__MoveNext (ApplicationManagers_AccountManager__SendApiJson_d__167_o* __this, const MethodInfo* method);
// 0x4192820

bool_conflict
ApplicationManagers_AccountManager_<SendApiJson>d__167__MoveNext
          (ApplicationManagers_AccountManager__SendApiJson_d__167_o *__this,MethodInfo *method)

{
  ApplicationManagers_AccountManager___c__DisplayClass167_0_o **ppAVar1;
  int iVar2;
  ApplicationManagers_AccountManager_o *pAVar3;
  undefined1 auVar4 [12];
  ApplicationManagers_AccountManager___c__DisplayClass167_0_o *pAVar5;
  undefined8 uVar6;
  Cysharp_Threading_Tasks_UniTask_o CVar7;
  
  if (DAT_05704c16 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgApiResult);
    il2cpp_init_method_metadata(&MethodInfo_Void__SendApiJson_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass167_0);
    DAT_05704c16 = '\x01';
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
    pAVar5 = (ApplicationManagers_AccountManager___c__DisplayClass167_0_o *)
             il2cpp_runtime_glue(TypeInfo_c__DisplayClass167_0);
    System_Object___ctor((Il2CppObject *)pAVar5,(MethodInfo *)0x0);
    ppAVar1 = &(__this->fields).__8__1;
    (__this->fields).__8__1 = pAVar5;
    il2cpp_runtime_glue(ppAVar1,pAVar5);
    pAVar5 = (__this->fields).__8__1;
    if (pAVar5 == (ApplicationManagers_AccountManager___c__DisplayClass167_0_o *)0x0)
    goto LAB_041929d4;
    (pAVar5->fields).onComplete = (__this->fields).onComplete;
    il2cpp_runtime_glue(&(pAVar5->fields).onComplete);
    pAVar5 = *ppAVar1;
    if (pAVar5 == (ApplicationManagers_AccountManager___c__DisplayClass167_0_o *)0x0)
    goto LAB_041929d4;
    *(undefined1 *)&(pAVar5->fields).done = 0;
    il2cpp_runtime_glue(TypeInfo_Action_AottgApiResult);
    System_Action<object>___ctor();
    if (pAVar3 == (ApplicationManagers_AccountManager_o *)0x0) goto LAB_041929d4;
    CVar7 = ApplicationManagers_AccountManager__SendApiJsonAsync();
    auVar4 = CVar7.fields._0_12_;
    CVar7.fields._12_4_ = 0;
    CVar7.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_o *)auVar4._0_8_;
    CVar7.fields.token = auVar4._8_2_;
    CVar7.fields._10_2_ = auVar4._10_2_;
    Cysharp_Threading_Tasks_UniTaskExtensions__Forget(CVar7,(MethodInfo *)0x0);
    pAVar5 = (__this->fields).__8__1;
  }
  if (pAVar5 != (ApplicationManagers_AccountManager___c__DisplayClass167_0_o *)0x0) {
    if ((char)(pAVar5->fields).done != '\0') {
      return 0;
    }
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    uVar6 = il2cpp_runtime_glue(&(__this->fields).__2__current,0);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)uVar6 >> 8),1);
  }
LAB_041929d4:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager.<SendApiJson>d__167$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__SendApiJson_d__167__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__SendApiJson_d__167_o* __this, const MethodInfo* method);
// 0x41929e0

Il2CppObject *
ApplicationManagers_AccountManager_<SendApiJson>d__167__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (ApplicationManagers_AccountManager__SendApiJson_d__167_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<SendApiJson>d__167$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__SendApiJson_d__167__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__SendApiJson_d__167_o* __this, const MethodInfo* method);
// 0x41929f0

void ApplicationManagers_AccountManager_<SendApiJson>d__167__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__SendApiJson_d__167_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// ApplicationManagers.AccountManager.<SendApiJson>d__167$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__SendApiJson_d__167__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__SendApiJson_d__167_o* __this, const MethodInfo* method);
// 0x4192a30

Il2CppObject *
ApplicationManagers_AccountManager_<SendApiJson>d__167__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__SendApiJson_d__167_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<SendApiJsonAsync>d__168$$MoveNext
// il2cpp: void ApplicationManagers_AccountManager__SendApiJsonAsync_d__168__MoveNext (ApplicationManagers_AccountManager__SendApiJsonAsync_d__168_o __this, const MethodInfo* method);
// 0x4192a40

void ApplicationManagers_AccountManager_<SendApiJsonAsync>d__168__MoveNext
               (ApplicationManagers_AccountManager__SendApiJsonAsync_d__168_o __this,
               MethodInfo *method)

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
  
  if (DAT_05704c17 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T__Awaiter);
    il2cpp_init_method_metadata(&MethodInfo_AottgApiResult_GetResult);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_get_IsCompleted);
    il2cpp_init_method_metadata();
    DAT_05704c17 = '\x01';
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
      il2cpp_init_class();
    }
    ApplicationManagers_AccountManager__SendApiJsonAsync
              ((Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *)local_78);
    local_48 = local_68;
    local_58 = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)local_78._0_8_;
    pAStack_50 = (ApplicationManagers_Api_AottgApiResult_o *)local_78._8_8_;
    local_78._0_8_ = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    local_78._8_8_ = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
    local_68._0_2_ = 0;
    local_68._2_6_ = 0;
    if ((*(byte *)(*(long *)(MethodInfo_UniTask_1_T__Awaiter_ApplicationManagers_Api_Aot + 0x20) + 0x135) & 1) == 0) {
      il2cpp_glue_022c28b0();
    }
    local_68 = local_48;
    local_78._0_8_ = local_58;
    local_78._8_8_ = pAStack_50;
    il2cpp_runtime_glue(local_78,0);
    local_88 = local_68;
    local_98 = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)local_78._0_8_;
    uStack_90 = (ApplicationManagers_Api_AottgApiResult_o *)local_78._8_8_;
    lVar9 = *(long *)(MethodInfo_Boolean_get_IsCompleted + 0x20);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = il2cpp_glue_022c28b0();
    }
    pCVar6 = local_98;
    if (local_98 != (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0) {
      sVar7 = (short)local_88;
      lVar9 = *(long *)(*(long *)(*(long *)(lVar9 + 0xc0) + 0x18) + 0x20);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = il2cpp_glue_022c28b0();
      }
      lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 8);
      if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
        lVar9 = il2cpp_glue_022c28b0();
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
            goto LAB_04192cac;
          }
          lVar13 = lVar13 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar13);
      }
      ppIVar10 = (Il2CppMethodPointer *)il2cpp_runtime_glue(pCVar6,lVar9,1);
LAB_04192cac:
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
        il2cpp_runtime_glue(&method->slot,0);
        il2cpp_glue_02581d60(&method->virtualMethodPointer,&local_98,method,MethodInfo_Void_AwaitUnsafeOnCompleted_UniTask_1_T__Awaiter);
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
      lVar9 = il2cpp_glue_022c28b0();
    }
    lVar9 = *(long *)(*(long *)(lVar9 + 0xc0) + 0x28);
    if ((*(byte *)(lVar9 + 0x135) & 1) == 0) {
      lVar9 = il2cpp_glue_022c28b0();
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
          goto LAB_04192d76;
        }
        lVar13 = lVar13 + 0x10;
      } while ((ulong)uVar2 << 4 != lVar13);
    }
    ppIVar10 = (Il2CppMethodPointer *)il2cpp_runtime_glue(pCVar6,lVar9,0);
LAB_04192d76:
    pAVar11 = (ApplicationManagers_Api_AottgApiResult_o *)
              (**ppIVar10)(pCVar6,(ulong)(uint)(int)sVar7,(MethodInfo *)ppIVar10[1]);
    lVar9._0_4_ = method->token;
    lVar9._4_2_ = method->flags;
    lVar9._6_2_ = method->iflags;
  }
  if (lVar9 != 0) {
    (**(code **)(lVar9 + 0x18))(*(undefined8 *)(lVar9 + 0x40),pAVar11,*(undefined8 *)(lVar9 + 0x28))
    ;
  }
  *(undefined4 *)&method->methodPointer = 0xfffffffe;
  if (DAT_056fe2bb == '\0') {
    il2cpp_init_method_metadata();
    DAT_056fe2bb = '\x01';
  }
  pIVar5 = method->virtualMethodPointer;
  if (pIVar5 != (Il2CppMethodPointer)0x0) {
    lVar9 = *(long *)pIVar5;
    if ((ulong)*(ushort *)(lVar9 + 0x12e) != 0) {
      lVar13 = 0;
      do {
        if (*(long *)(*(long *)(lVar9 + 0xb0) + lVar13) == TypeInfo_IStateMachineRunnerPromise) {
          puVar12 = (undefined8 *)
                    (lVar9 + (long)(*(int *)(*(long *)(lVar9 + 0xb0) + 8 + lVar13) + 2) * 0x10 +
                    0x138);
          goto LAB_04192e35;
        }
        lVar13 = lVar13 + 0x10;
      } while ((ulong)*(ushort *)(lVar9 + 0x12e) << 4 != lVar13);
    }
    puVar12 = (undefined8 *)il2cpp_runtime_glue(pIVar5,TypeInfo_IStateMachineRunnerPromise,2);
LAB_04192e35:
    (*(code *)*puVar12)(pIVar5,puVar12[1]);
  }
  return;
}


// ApplicationManagers.AccountManager.<SendApiJsonAsync>d__168$$SetStateMachine
// il2cpp: void ApplicationManagers_AccountManager__SendApiJsonAsync_d__168__SetStateMachine (ApplicationManagers_AccountManager__SendApiJsonAsync_d__168_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x41933d0

void ApplicationManagers_AccountManager_<SendApiJsonAsync>d__168__SetStateMachine
               (ApplicationManagers_AccountManager__SendApiJsonAsync_d__168_o __this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method
               )

{
  return;
}


// ApplicationManagers.AccountManager.<SendMeJson>d__54$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__SendMeJson_d__54___ctor (ApplicationManagers_AccountManager__SendMeJson_d__54_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x41876b0

void ApplicationManagers_AccountManager_<SendMeJson>d__54___ctor
               (ApplicationManagers_AccountManager__SendMeJson_d__54_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<SendMeJson>d__54$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__SendMeJson_d__54__System_IDisposable_Dispose (ApplicationManagers_AccountManager__SendMeJson_d__54_o* __this, const MethodInfo* method);
// 0x41933e0

void ApplicationManagers_AccountManager_<SendMeJson>d__54__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__SendMeJson_d__54_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<SendMeJson>d__54$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__SendMeJson_d__54__MoveNext (ApplicationManagers_AccountManager__SendMeJson_d__54_o* __this, const MethodInfo* method);
// 0x41933f0

bool_conflict
ApplicationManagers_AccountManager_<SendMeJson>d__54__MoveNext
          (ApplicationManagers_AccountManager__SendMeJson_d__54_o *__this,MethodInfo *method)

{
  ApplicationManagers_AccountManager___c__DisplayClass54_0_o **ppAVar1;
  int iVar2;
  ApplicationManagers_AccountManager_o *__this_00;
  ApplicationManagers_Api_AottgApiResult_o *pAVar3;
  bool_conflict bVar4;
  ApplicationManagers_AccountManager___c__DisplayClass54_0_o *pAVar5;
  Il2CppObject *pIVar6;
  System_Action_bool__string__JSONNode__o *pSVar7;
  MethodInfo *pMVar8;
  System_String_o **ppSVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  System_String_o *pSVar11;
  undefined7 uVar12;
  undefined8 uVar13;
  intptr_t iVar14;
  intptr_t iVar15;
  
  if (DAT_05704c18 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgApiResult);
    il2cpp_init_method_metadata(&MethodInfo_Void__SendMeJson_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass54_0);
    il2cpp_init_method_metadata(&"GET");
    il2cpp_init_method_metadata(&"unknown_error");
    DAT_05704c18 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 2) {
    (__this->fields).__1__state = -1;
    pAVar5 = (__this->fields).__8__1;
    if (pAVar5 != (ApplicationManagers_AccountManager___c__DisplayClass54_0_o *)0x0) {
      pAVar3 = (pAVar5->fields).result;
      if ((pAVar3 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) ||
         ((char)(pAVar3->fields)._Success_k__BackingField == '\0')) {
        pSVar7 = (__this->fields).onComplete;
        if (pSVar7 != (System_Action_bool__string__JSONNode__o *)0x0) {
          if (pAVar3 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
            ppSVar9 = (System_String_o **)&"unknown_error";
          }
          else {
            ppSVar9 = &(pAVar3->fields)._Error_k__BackingField;
          }
          pSVar11 = *ppSVar9;
          iVar15 = (pSVar7->fields).method;
          iVar14 = (pSVar7->fields).method_code;
          uVar13 = 0;
          pSVar10 = (SimpleJSONFixed_JSONNode_o *)0x0;
LAB_041936c2:
          (*(code *)(pSVar7->fields).invoke_impl)(iVar14,uVar13,pSVar11,pSVar10,iVar15);
          return 0;
        }
      }
      else {
        pMVar8 = TypeInfo_AccountManager;
        if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
          il2cpp_init_class();
        }
        ApplicationManagers_AccountManager__ClearOwnPublicProfileCache(pMVar8);
        pSVar7 = (__this->fields).onComplete;
        if (pSVar7 != (System_Action_bool__string__JSONNode__o *)0x0) {
          pAVar5 = (__this->fields).__8__1;
          if ((pAVar5 != (ApplicationManagers_AccountManager___c__DisplayClass54_0_o *)0x0) &&
             (pAVar3 = (pAVar5->fields).result,
             pAVar3 != (ApplicationManagers_Api_AottgApiResult_o *)0x0)) {
            pSVar10 = (pAVar3->fields)._Json_k__BackingField;
            iVar15 = (pSVar7->fields).method;
            iVar14 = (pSVar7->fields).method_code;
            uVar13 = 1;
            pSVar11 = (System_String_o *)0x0;
            goto LAB_041936c2;
          }
          goto LAB_0419371f;
        }
      }
      return 0;
    }
    goto LAB_0419371f;
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
  pAVar5 = (ApplicationManagers_AccountManager___c__DisplayClass54_0_o *)
           il2cpp_runtime_glue(TypeInfo_c__DisplayClass54_0);
  System_Object___ctor((Il2CppObject *)pAVar5,(MethodInfo *)0x0);
  ppAVar1 = &(__this->fields).__8__1;
  (__this->fields).__8__1 = pAVar5;
  il2cpp_runtime_glue(ppAVar1,pAVar5);
  pMVar8 = (MethodInfo *)0x0;
  bVar4 = System_String__Equals((__this->fields).method,"GET",5,(MethodInfo *)0x0);
  uVar12 = (undefined7)((ulong)__this >> 8);
  if ((char)bVar4 != '\0') {
    if (__this_00 != (ApplicationManagers_AccountManager_o *)0x0) {
      pIVar6 = (Il2CppObject *)
               ApplicationManagers_AccountManager__SendMeReadJson
                         (__this_00,(__this->fields).path,(__this->fields).onComplete,pMVar8);
      (__this->fields).__2__current = pIVar6;
      il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar6);
      (__this->fields).__1__state = 1;
      return (bool_conflict)CONCAT71(uVar12,1);
    }
    goto LAB_0419371f;
  }
  pAVar5 = *ppAVar1;
  if (pAVar5 == (ApplicationManagers_AccountManager___c__DisplayClass54_0_o *)0x0)
  goto LAB_0419371f;
  (pAVar5->fields).result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
  il2cpp_runtime_glue(&pAVar5->fields,0);
  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
    il2cpp_init_class();
    if (DAT_05704c4f != '\0') goto LAB_0419360e;
LAB_041936e8:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c4f = '\x01';
    iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
  else {
    if (DAT_05704c4f == '\0') goto LAB_041936e8;
LAB_0419360e:
    iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  il2cpp_runtime_glue(TypeInfo_Action_AottgApiResult);
  System_Action<object>___ctor();
  if (__this_00 != (ApplicationManagers_AccountManager_o *)0x0) {
    pIVar6 = (Il2CppObject *)ApplicationManagers_AccountManager__SendApiJson();
    (__this->fields).__2__current = pIVar6;
    il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar6);
    (__this->fields).__1__state = 2;
    return (bool_conflict)CONCAT71(uVar12,1);
  }
LAB_0419371f:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager.<SendMeJson>d__54$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__SendMeJson_d__54__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__SendMeJson_d__54_o* __this, const MethodInfo* method);
// 0x4193730

Il2CppObject *
ApplicationManagers_AccountManager_<SendMeJson>d__54__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (ApplicationManagers_AccountManager__SendMeJson_d__54_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<SendMeJson>d__54$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__SendMeJson_d__54__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__SendMeJson_d__54_o* __this, const MethodInfo* method);
// 0x4193740

void ApplicationManagers_AccountManager_<SendMeJson>d__54__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__SendMeJson_d__54_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// ApplicationManagers.AccountManager.<SendMeJson>d__54$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__SendMeJson_d__54__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__SendMeJson_d__54_o* __this, const MethodInfo* method);
// 0x4193780

Il2CppObject *
ApplicationManagers_AccountManager_<SendMeJson>d__54__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__SendMeJson_d__54_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<SendMeReadJson>d__55$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__SendMeReadJson_d__55___ctor (ApplicationManagers_AccountManager__SendMeReadJson_d__55_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x4187770

void ApplicationManagers_AccountManager_<SendMeReadJson>d__55___ctor
               (ApplicationManagers_AccountManager__SendMeReadJson_d__55_o *__this,
               int32_t __1__state,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<SendMeReadJson>d__55$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__SendMeReadJson_d__55__System_IDisposable_Dispose (ApplicationManagers_AccountManager__SendMeReadJson_d__55_o* __this, const MethodInfo* method);
// 0x4193790

void ApplicationManagers_AccountManager_<SendMeReadJson>d__55__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__SendMeReadJson_d__55_o *__this,
               MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<SendMeReadJson>d__55$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__SendMeReadJson_d__55__MoveNext (ApplicationManagers_AccountManager__SendMeReadJson_d__55_o* __this, const MethodInfo* method);
// 0x41937a0

bool_conflict
ApplicationManagers_AccountManager_<SendMeReadJson>d__55__MoveNext
          (ApplicationManagers_AccountManager__SendMeReadJson_d__55_o *__this,MethodInfo *method)

{
  ApplicationManagers_AccountManager___c__DisplayClass55_0_o **ppAVar1;
  int iVar2;
  ApplicationManagers_AccountManager_o *__this_00;
  System_String_o *bearer;
  ApplicationManagers_Api_AottgApiResult_o *pAVar3;
  ApplicationManagers_AccountManager___c__DisplayClass55_0_o *pAVar4;
  System_Action_AottgApiResult__o *onComplete;
  Il2CppObject *pIVar5;
  System_String_o **ppSVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  System_String_o *pSVar8;
  System_Action_bool__string__JSONNode__o *pSVar9;
  undefined8 uVar10;
  intptr_t iVar11;
  intptr_t iVar12;
  MethodInfo *in_R9;
  
  if (DAT_05704c19 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgApiResult);
    il2cpp_init_method_metadata(&MethodInfo_Void__SendMeReadJson_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass55_0);
    il2cpp_init_method_metadata(&"unknown_error");
    DAT_05704c19 = '\x01';
  }
  iVar2 = (__this->fields).__1__state;
  if (iVar2 == 1) {
    (__this->fields).__1__state = -1;
    pAVar4 = (__this->fields).__8__1;
    if (pAVar4 != (ApplicationManagers_AccountManager___c__DisplayClass55_0_o *)0x0) {
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
          iVar12 = (pSVar9->fields).method;
          iVar11 = (pSVar9->fields).method_code;
          uVar10 = 0;
          pSVar7 = (SimpleJSONFixed_JSONNode_o *)0x0;
          goto LAB_041939ca;
        }
      }
      else {
        pSVar9 = (__this->fields).onComplete;
        if (pSVar9 != (System_Action_bool__string__JSONNode__o *)0x0) {
          pSVar7 = (pAVar3->fields)._Json_k__BackingField;
          iVar12 = (pSVar9->fields).method;
          iVar11 = (pSVar9->fields).method_code;
          uVar10 = 1;
          pSVar8 = (System_String_o *)0x0;
LAB_041939ca:
          (*(code *)(pSVar9->fields).invoke_impl)(iVar11,uVar10,pSVar8,pSVar7,iVar12);
          return 0;
        }
      }
      return 0;
    }
    goto LAB_041939de;
  }
  if (iVar2 != 0) {
    return 0;
  }
  __this_00 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  pAVar4 = (ApplicationManagers_AccountManager___c__DisplayClass55_0_o *)
           il2cpp_runtime_glue(TypeInfo_c__DisplayClass55_0);
  System_Object___ctor((Il2CppObject *)pAVar4,(MethodInfo *)0x0);
  ppAVar1 = &(__this->fields).__8__1;
  (__this->fields).__8__1 = pAVar4;
  il2cpp_runtime_glue(ppAVar1,pAVar4);
  pAVar4 = (__this->fields).__8__1;
  if (pAVar4 == (ApplicationManagers_AccountManager___c__DisplayClass55_0_o *)0x0)
  goto LAB_041939de;
  (pAVar4->fields).result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
  il2cpp_runtime_glue(&pAVar4->fields,0);
  pSVar8 = (__this->fields).path;
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05704c4f != '\0') goto LAB_04193890;
LAB_04193985:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c4f = '\x01';
    iVar2 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (DAT_05704c4f == '\0') goto LAB_04193985;
LAB_04193890:
    iVar2 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  bearer = *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x68);
  pAVar4 = *ppAVar1;
  onComplete = (System_Action_AottgApiResult__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgApiResult);
  System_Action<object>___ctor();
  if (__this_00 != (ApplicationManagers_AccountManager_o *)0x0) {
    pIVar5 = (Il2CppObject *)
             ApplicationManagers_AccountManager__SendApiGet
                       (__this_00,pSVar8,bearer,1,onComplete,in_R9);
    (__this->fields).__2__current = pIVar5;
    il2cpp_runtime_glue(&(__this->fields).__2__current,pIVar5);
    (__this->fields).__1__state = 1;
    return (bool_conflict)CONCAT71((int7)((ulong)pAVar4 >> 8),1);
  }
LAB_041939de:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager.<SendMeReadJson>d__55$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__SendMeReadJson_d__55__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__SendMeReadJson_d__55_o* __this, const MethodInfo* method);
// 0x41939f0

Il2CppObject *
ApplicationManagers_AccountManager_<SendMeReadJson>d__55__System_Collections_Generic_IEnumerator<System_Object>_get_Current
          (ApplicationManagers_AccountManager__SendMeReadJson_d__55_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<SendMeReadJson>d__55$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__SendMeReadJson_d__55__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__SendMeReadJson_d__55_o* __this, const MethodInfo* method);
// 0x4193a00

void ApplicationManagers_AccountManager_<SendMeReadJson>d__55__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__SendMeReadJson_d__55_o *__this,
               MethodInfo *method)

{
  undefined8 uVar1;
  System_NotSupportedException_o *__this_00;
  
  uVar1 = il2cpp_init_method_metadata(&TypeInfo_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_runtime_glue(uVar1);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  uVar1 = il2cpp_init_method_metadata(&MethodInfo_Void_System_Collections_IEnumerator_Reset);
                    /* WARNING: Subroutine does not return */
  il2cpp_glue_02274a00(__this_00,uVar1);
}


// ApplicationManagers.AccountManager.<SendMeReadJson>d__55$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__SendMeReadJson_d__55__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__SendMeReadJson_d__55_o* __this, const MethodInfo* method);
// 0x4193a40

Il2CppObject *
ApplicationManagers_AccountManager_<SendMeReadJson>d__55__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__SendMeReadJson_d__55_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager$$LoginWithOAuth
// il2cpp: void ApplicationManagers_AccountManager__LoginWithOAuth (System_String_o* provider, System_Action_bool__string__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x4184c90

void ApplicationManagers_AccountManager__LoginWithOAuth
               (System_String_o *provider,System_Action_bool__string__o *onComplete,
               bool_conflict reportNetworkError,MethodInfo *method)

{
  int iVar1;
  undefined4 uVar2;
  ApplicationManagers_AccountManager_o *__this;
  UnityEngine_MonoBehaviour_o *__this_00;
  Il2CppObject *__this_01;
  UnityEngine_MonoBehaviour_c *pUVar3;
  System_Action_bool__string__o *pSVar4;
  
  pSVar4 = onComplete;
  if (DAT_05704b91 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704b91 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = *(ApplicationManagers_AccountManager_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x50);
  }
  else {
    __this = *(ApplicationManagers_AccountManager_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x50);
  }
  if (__this != (ApplicationManagers_AccountManager_o *)0x0) {
    ApplicationManagers_AccountManager__CancelOAuthFlow(__this,(MethodInfo *)pSVar4);
    **(undefined8 **)(TypeInfo_AccountManager + 0xb8) = onComplete;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_AccountManager + 0xb8));
    __this_00 = *(UnityEngine_MonoBehaviour_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x50);
    if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
      uVar2 = *(undefined4 *)&__this_00[1].monitor;
      if (DAT_05704b93 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_OAuthFlow_d__8);
        DAT_05704b93 = '\x01';
      }
      __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_OAuthFlow_d__8);
      System_Object___ctor(__this_01,(MethodInfo *)0x0);
      *(undefined4 *)&__this_01[1].klass = 0;
      if (__this_01 != (Il2CppObject *)0x0) {
        __this_01[2].monitor = __this_00;
        il2cpp_runtime_glue(&__this_01[2].monitor,__this_00);
        __this_01[2].klass = (Il2CppClass *)provider;
        il2cpp_runtime_glue(__this_01 + 2,provider);
        *(undefined4 *)((long)&__this_01[3].klass + 4) = uVar2;
        *(char *)&__this_01[3].klass = (char)reportNetworkError;
        pUVar3 = (UnityEngine_MonoBehaviour_c *)
                 UnityEngine_MonoBehaviour__StartCoroutine
                           (__this_00,(System_Collections_IEnumerator_o *)__this_01,
                            (MethodInfo *)0x0);
        __this_00[1].klass = pUVar3;
        il2cpp_runtime_glue(__this_00 + 1,pUVar3);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$CancelOAuthLogin
// il2cpp: void ApplicationManagers_AccountManager__CancelOAuthLogin (const MethodInfo* method);
// 0x4184f40

void ApplicationManagers_AccountManager__CancelOAuthLogin(MethodInfo *method)

{
  long lVar1;
  ApplicationManagers_AccountManager_o *__this;
  MethodInfo *in_RSI;
  
  if (DAT_05704b92 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&"oauth_denied");
    DAT_05704b92 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar1 = **(long **)(TypeInfo_AccountManager + 0xb8);
  __this = (ApplicationManagers_AccountManager_o *)(*(long **)(TypeInfo_AccountManager + 0xb8))[10];
  if (__this != (ApplicationManagers_AccountManager_o *)0x0) {
    ApplicationManagers_AccountManager__CancelOAuthFlow(__this,in_RSI);
  }
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))
              (*(undefined8 *)(lVar1 + 0x40),0,"oauth_denied",*(undefined8 *)(lVar1 + 0x28));
    return;
  }
  return;
}


// ApplicationManagers.AccountManager$$OAuthFlow
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__OAuthFlow (ApplicationManagers_AccountManager_o* __this, System_String_o* provider, int32_t attemptId, bool reportNetworkError, const MethodInfo* method);
// 0x4184ea0

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__OAuthFlow
          (ApplicationManagers_AccountManager_o *__this,System_String_o *provider,int32_t attemptId,
          bool_conflict reportNetworkError,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704b93 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_OAuthFlow_d__8);
    DAT_05704b93 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_OAuthFlow_d__8);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_glue(&__this_00[2].monitor,__this);
    __this_00[2].klass = (Il2CppClass *)provider;
    il2cpp_runtime_glue(__this_00 + 2,provider);
    *(int32_t *)((long)&__this_00[3].klass + 4) = attemptId;
    *(char *)&__this_00[3].klass = (char)reportNetworkError;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$PollUnityOAuth
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__PollUnityOAuth (ApplicationManagers_AccountManager_o* __this, ApplicationManagers_AccountManager_UnityOAuthStart_o start, int32_t attemptId, bool reportNetworkError, const MethodInfo* method);
// 0x4184fe0

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__PollUnityOAuth
          (ApplicationManagers_AccountManager_o *__this,
          ApplicationManagers_AccountManager_UnityOAuthStart_o start,int32_t attemptId,
          bool_conflict reportNetworkError,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704b94 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PollUnityOAuth_d__9);
    DAT_05704b94 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_PollUnityOAuth_d__9);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[5].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 5,__this);
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
    il2cpp_runtime_glue(__this_00 + 2,0);
    *(int32_t *)((long)&__this_00[5].monitor + 4) = attemptId;
    *(char *)&__this_00[5].monitor = (char)reportNetworkError;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$ExchangeOAuthCode
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__ExchangeOAuthCode (ApplicationManagers_AccountManager_o* __this, System_String_o* code, bool reportNetworkError, const MethodInfo* method);
// 0x41850b0

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__ExchangeOAuthCode
          (ApplicationManagers_AccountManager_o *__this,System_String_o *code,
          bool_conflict reportNetworkError,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704b95 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ExchangeOAuthCode_d__10);
    DAT_05704b95 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_ExchangeOAuthCode_d__10);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_glue(&__this_00[2].monitor,__this);
    __this_00[2].klass = (Il2CppClass *)code;
    il2cpp_runtime_glue(__this_00 + 2,code);
    *(char *)&__this_00[3].klass = (char)reportNetworkError;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$CancelOAuthFlow
// il2cpp: void ApplicationManagers_AccountManager__CancelOAuthFlow (ApplicationManagers_AccountManager_o* __this, const MethodInfo* method);
// 0x4184e00

void ApplicationManagers_AccountManager__CancelOAuthFlow
               (ApplicationManagers_AccountManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Coroutine_o *routine;
  
  if (DAT_05704b96 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704b96 = '\x01';
  }
  routine = (__this->fields)._oauthFlowCoroutine;
  if (routine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
    (__this->fields)._oauthFlowCoroutine = (UnityEngine_Coroutine_o *)0x0;
    il2cpp_runtime_glue(&(__this->fields)._oauthFlowCoroutine,0);
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  **(undefined8 **)(TypeInfo_AccountManager + 0xb8) = 0;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_AccountManager + 0xb8),0);
  piVar1 = &(__this->fields)._oauthAttemptId;
  *piVar1 = *piVar1 + 1;
  return;
}


// ApplicationManagers.AccountManager$$IsCurrentOAuthAttempt
// il2cpp: bool ApplicationManagers_AccountManager__IsCurrentOAuthAttempt (ApplicationManagers_AccountManager_o* __this, int32_t attemptId, const MethodInfo* method);
// 0x4185160

bool_conflict
ApplicationManagers_AccountManager__IsCurrentOAuthAttempt
          (ApplicationManagers_AccountManager_o *__this,int32_t attemptId,MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704b97 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704b97 = '\x01';
    iVar1 = (__this->fields)._oauthAttemptId;
  }
  else {
    iVar1 = (__this->fields)._oauthAttemptId;
  }
  if (iVar1 == attemptId) {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    return (bool_conflict)
           CONCAT71((int7)((ulong)*(long **)(TypeInfo_AccountManager + 0xb8) >> 8),
                    **(long **)(TypeInfo_AccountManager + 0xb8) != 0);
  }
  return 0;
}


// ApplicationManagers.AccountManager$$CompleteOAuth
// il2cpp: void ApplicationManagers_AccountManager__CompleteOAuth (bool success, System_String_o* error, const MethodInfo* method);
// 0x41851d0

void ApplicationManagers_AccountManager__CompleteOAuth
               (bool_conflict success,System_String_o *error,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  long lVar1;
  bool_conflict bVar2;
  
  if (DAT_05704b98 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704b98 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  x = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x50);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x50);
    if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    *(undefined8 *)(lVar1 + 0x20) = 0;
    il2cpp_runtime_glue(lVar1 + 0x20,0);
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar1 = **(long **)(TypeInfo_AccountManager + 0xb8);
  **(long **)(TypeInfo_AccountManager + 0xb8) = 0;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_AccountManager + 0xb8),0);
  if (lVar1 != 0) {
    (**(code **)(lVar1 + 0x18))
              (*(undefined8 *)(lVar1 + 0x40),success & 0xff,error,*(undefined8 *)(lVar1 + 0x28));
    return;
  }
  return;
}


// ApplicationManagers.AccountManager$$TryParseUnityOAuthStart
// il2cpp: bool ApplicationManagers_AccountManager__TryParseUnityOAuthStart (System_String_o* json, ApplicationManagers_AccountManager_UnityOAuthStart_o* start, const MethodInfo* method);
// 0x4185300

bool_conflict
ApplicationManagers_AccountManager__TryParseUnityOAuthStart
          (System_String_o *json,ApplicationManagers_AccountManager_UnityOAuthStart_o *start,
          MethodInfo *method)

{
  bool_conflict bVar1;
  int iVar2;
  int iVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  long *plVar5;
  System_String_o *value;
  System_String_o *value_00;
  System_String_o *value_01;
  System_String_o *value_02;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  System_DateTimeOffset_o SVar6;
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
  
  if (DAT_05704b99 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DateTimeOffset);
    il2cpp_init_method_metadata(&"pollToken");
    il2cpp_init_method_metadata(&"authorizationUrl");
    il2cpp_init_method_metadata(&"sessionId");
    il2cpp_init_method_metadata(&"pollIntervalSeconds");
    il2cpp_init_method_metadata(&"expiresAt");
    DAT_05704b99 = '\x01';
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
  pSVar4 = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
  if (pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  plVar5 = (long *)(*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar4,"sessionId",(pSVar4->klass->vtable)._7_get_Item.method);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  value = (System_String_o *)(**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0))
  ;
  plVar5 = (long *)(*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar4,"pollToken",(pSVar4->klass->vtable)._7_get_Item.method);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  value_00 = (System_String_o *)
             (**(code **)(*plVar5 + 0x1c8))(plVar5,*(undefined8 *)(*plVar5 + 0x1d0));
  plVar5 = (long *)(*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar4,"authorizationUrl",(pSVar4->klass->vtable)._7_get_Item.method);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  value_01 = (System_String_o *)(**(code **)(*plVar5 + 0x1c8))(plVar5);
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((((char)bVar1 != '\0') ||
      (bVar1 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0), (char)bVar1 != '\0')) ||
     (bVar1 = System_String__IsNullOrEmpty(value_01,(MethodInfo *)0x0), (char)bVar1 != '\0')) {
    return 0;
  }
  if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
    il2cpp_init_class();
  }
  SVar6 = System_DateTimeOffset__get_UtcNow((MethodInfo *)0x0);
  local_68._dateData = (uint64_t)SVar6.fields._dateTime.fields._dateData;
  uStack_60 = CONCAT26(local_9a,CONCAT42(local_9e,SVar6.fields._offsetMinutes));
  __this.fields._8_8_ = 0;
  __this.fields._dateTime.fields._dateData =
       (System_DateTime_Fields)(System_DateTime_Fields)&local_68;
  SVar6 = System_DateTimeOffset__AddMinutes(__this,10.0,SVar6.fields._8_8_);
  local_50._dateData = (uint64_t)SVar6.fields._dateTime.fields._dateData;
  local_ae = SVar6.fields._offsetMinutes;
  plVar5 = (long *)(*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar4,"expiresAt",(pSVar4->klass->vtable)._7_get_Item.method);
  if (plVar5 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  value_02 = (System_String_o *)(**(code **)(*plVar5 + 0x1c8))(plVar5);
  bVar1 = System_String__IsNullOrEmpty(value_02,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = System_DateTimeOffset__TryParse
                      (value_02,(System_IFormatProvider_o *)0x0,0x80,&local_48,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      method_00 = extraout_RDX;
      if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
        il2cpp_init_class();
        method_00 = extraout_RDX_00;
      }
      SVar6.fields._8_8_ = 0;
      SVar6.fields._dateTime.fields._dateData =
           (System_DateTime_Fields)(System_DateTime_Fields)&local_48;
      SVar6 = System_DateTimeOffset__ToUniversalTime(SVar6,method_00);
      local_50._dateData = (uint64_t)SVar6.fields._dateTime.fields._dateData;
      local_ae = SVar6.fields._offsetMinutes;
    }
  }
  plVar5 = (long *)(*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar4,"pollIntervalSeconds",(pSVar4->klass->vtable)._7_get_Item.method);
  if (plVar5 != (long *)0x0) {
    iVar2 = (**(code **)(*plVar5 + 0x368))(plVar5,*(undefined8 *)(*plVar5 + 0x370));
    uStack_80 = 0;
    local_78 = 0;
    uStack_90 = (System_String_o *)0x0;
    local_88 = (System_String_o *)0x0;
    uStack_70 = 0;
    local_98 = value;
    il2cpp_runtime_glue(&local_98,value);
    uStack_90 = value_00;
    il2cpp_runtime_glue(&uStack_90,value_00);
    local_88 = value_01;
    il2cpp_runtime_glue(&local_88,value_01);
    uStack_80 = local_50._dateData;
    local_78 = CONCAT26(local_9a,CONCAT42(local_9e,local_ae));
    iVar3 = 2;
    if (0 < iVar2) {
      iVar3 = iVar2;
    }
    uStack_70 = CONCAT44(uStack_70._4_4_,iVar3);
    *(undefined4 *)&(start->fields).SessionId = (undefined4)local_98;
    *(undefined4 *)((long)&(start->fields).SessionId + 4) = local_98._4_4_;
    *(undefined4 *)&(start->fields).PollToken = (undefined4)uStack_90;
    *(undefined4 *)((long)&(start->fields).PollToken + 4) = uStack_90._4_4_;
    (start->fields).AuthorizationUrl = local_88;
    (start->fields).ExpiresAt.fields._dateTime.fields._dateData = local_50._dateData;
    (start->fields).ExpiresAt.fields._offsetMinutes = local_ae;
    *(undefined4 *)&(start->fields).ExpiresAt.fields.field_0xa = local_9e;
    *(undefined2 *)&(start->fields).ExpiresAt.fields.field_0xe = local_9a;
    (start->fields).PollIntervalSeconds = iVar3;
    *(undefined4 *)&(start->fields).field_0x2c = uStack_70._4_4_;
    il2cpp_runtime_glue(start,0);
    return (bool_conflict)CONCAT71((uint7)(uint3)((uint)iVar2 >> 8),1);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$TryParseUnityOAuthStatus
// il2cpp: bool ApplicationManagers_AccountManager__TryParseUnityOAuthStatus (System_String_o* json, System_String_o** status, System_String_o** code, System_String_o** error, const MethodInfo* method);
// 0x4185900

bool_conflict
ApplicationManagers_AccountManager__TryParseUnityOAuthStatus
          (System_String_o *json,System_String_o **status,System_String_o **code,
          System_String_o **error,MethodInfo *method)

{
  bool_conflict bVar1;
  uint uVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  long *plVar4;
  System_String_o *pSVar5;
  
  if (DAT_05704b9a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&"code");
    il2cpp_init_method_metadata(&"error");
    il2cpp_init_method_metadata(&"status");
    DAT_05704b9a = '\x01';
  }
  *status = (System_String_o *)0x0;
  il2cpp_runtime_glue(status);
  *code = (System_String_o *)0x0;
  il2cpp_runtime_glue(code);
  *error = (System_String_o *)0x0;
  il2cpp_runtime_glue(error);
  pSVar3 = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
  if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  plVar4 = (long *)(*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar3,"status",(pSVar3->klass->vtable)._7_get_Item.method);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar5 = (System_String_o *)(**(code **)(*plVar4 + 0x1c8))(plVar4);
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (pSVar5 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar5 = System_String__Trim(pSVar5,(MethodInfo *)0x0);
    if (pSVar5 == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pSVar5 = System_String__ToLowerInvariant(pSVar5,(MethodInfo *)0x0);
  }
  else {
    pSVar5 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  *status = pSVar5;
  il2cpp_runtime_glue(status);
  plVar4 = (long *)(*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar3,"code",(pSVar3->klass->vtable)._7_get_Item.method);
  if (plVar4 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar5 = (System_String_o *)
           (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
  *code = pSVar5;
  il2cpp_runtime_glue(code,pSVar5);
  plVar4 = (long *)(*(pSVar3->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar3,"error",(pSVar3->klass->vtable)._7_get_Item.method);
  if (plVar4 != (long *)0x0) {
    pSVar5 = (System_String_o *)
             (**(code **)(*plVar4 + 0x1c8))(plVar4,*(undefined8 *)(*plVar4 + 0x1d0));
    *error = pSVar5;
    il2cpp_runtime_glue(error);
    uVar2 = System_String__IsNullOrEmpty(*status,(MethodInfo *)0x0);
    return uVar2 ^ 1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$NormalizeOAuthProvider
// il2cpp: System_String_o* ApplicationManagers_AccountManager__NormalizeOAuthProvider (System_String_o* provider, const MethodInfo* method);
// 0x4185c00

System_String_o *
ApplicationManagers_AccountManager__NormalizeOAuthProvider
          (System_String_o *provider,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  
  bVar1 = System_String__IsNullOrEmpty(provider,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  if (provider != (System_String_o *)0x0) {
    pSVar2 = System_String__Trim(provider,(MethodInfo *)0x0);
    if (pSVar2 != (System_String_o *)0x0) {
      pSVar2 = System_String__ToLowerInvariant(pSVar2,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$get_ProfileDescription
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_ProfileDescription (const MethodInfo* method);
// 0x4185c50

System_String_o * ApplicationManagers_AccountManager__get_ProfileDescription(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704b9b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704b9b = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 8);
}


// ApplicationManagers.AccountManager$$set_ProfileDescription
// il2cpp: void ApplicationManagers_AccountManager__set_ProfileDescription (System_String_o* value, const MethodInfo* method);
// 0x4185cc0

void ApplicationManagers_AccountManager__set_ProfileDescription
               (System_String_o *value,MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05704b9c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704b9c = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar1 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(System_String_o **)(lVar1 + 8) = value;
  il2cpp_runtime_glue(lVar1 + 8,value);
  return;
}


// ApplicationManagers.AccountManager$$get_ProfileAvatarKey
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_ProfileAvatarKey (const MethodInfo* method);
// 0x4185d20

System_String_o * ApplicationManagers_AccountManager__get_ProfileAvatarKey(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704b9d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704b9d = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x10);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x10);
}


// ApplicationManagers.AccountManager$$set_ProfileAvatarKey
// il2cpp: void ApplicationManagers_AccountManager__set_ProfileAvatarKey (System_String_o* value, const MethodInfo* method);
// 0x4185d90

void ApplicationManagers_AccountManager__set_ProfileAvatarKey
               (System_String_o *value,MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05704b9e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704b9e = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar1 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(System_String_o **)(lVar1 + 0x10) = value;
  il2cpp_runtime_glue(lVar1 + 0x10,value);
  return;
}


// ApplicationManagers.AccountManager$$get_ProfileBannerKey
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_ProfileBannerKey (const MethodInfo* method);
// 0x4185df0

System_String_o * ApplicationManagers_AccountManager__get_ProfileBannerKey(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704b9f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704b9f = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x18);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x18);
}


// ApplicationManagers.AccountManager$$set_ProfileBannerKey
// il2cpp: void ApplicationManagers_AccountManager__set_ProfileBannerKey (System_String_o* value, const MethodInfo* method);
// 0x4185e60

void ApplicationManagers_AccountManager__set_ProfileBannerKey
               (System_String_o *value,MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05704ba0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704ba0 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar1 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(System_String_o **)(lVar1 + 0x18) = value;
  il2cpp_runtime_glue(lVar1 + 0x18,value);
  return;
}


// ApplicationManagers.AccountManager$$get_ProfileSocials
// il2cpp: System_Collections_Generic_Dictionary_string__string__o* ApplicationManagers_AccountManager__get_ProfileSocials (const MethodInfo* method);
// 0x4185ec0

System_Collections_Generic_Dictionary_string__string__o *
ApplicationManagers_AccountManager__get_ProfileSocials(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704ba1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704ba1 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_Collections_Generic_Dictionary_string__string__o **)
            (*(long *)(TypeInfo_AccountManager + 0xb8) + 0x20);
  }
  il2cpp_init_class();
  return *(System_Collections_Generic_Dictionary_string__string__o **)
          (*(long *)(TypeInfo_AccountManager + 0xb8) + 0x20);
}


// ApplicationManagers.AccountManager$$get_HasCachedOwnProfile
// il2cpp: bool ApplicationManagers_AccountManager__get_HasCachedOwnProfile (const MethodInfo* method);
// 0x4185f30

bool_conflict ApplicationManagers_AccountManager__get_HasCachedOwnProfile(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704ba2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704ba2 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)*(long *)(TypeInfo_AccountManager + 0xb8) >> 8),
                    *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x28));
  }
  il2cpp_init_class();
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(long *)(TypeInfo_AccountManager + 0xb8) >> 8),
                  *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x28));
}


// ApplicationManagers.AccountManager$$get_HasCachedCharacterInfo
// il2cpp: bool ApplicationManagers_AccountManager__get_HasCachedCharacterInfo (const MethodInfo* method);
// 0x4185fa0

bool_conflict ApplicationManagers_AccountManager__get_HasCachedCharacterInfo(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704ba3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704ba3 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)*(long *)(TypeInfo_AccountManager + 0xb8) >> 8),
                    *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x38));
  }
  il2cpp_init_class();
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(long *)(TypeInfo_AccountManager + 0xb8) >> 8),
                  *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x38));
}


// ApplicationManagers.AccountManager$$GetProfile
// il2cpp: void ApplicationManagers_AccountManager__GetProfile (System_Action_bool__string__o* onComplete, bool forceRefresh, const MethodInfo* method);
// 0x4186010

void ApplicationManagers_AccountManager__GetProfile
               (System_Action_bool__string__o *onComplete,bool_conflict forceRefresh,
               MethodInfo *method)

{
  int32_t *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  UnityEngine_Object_o *x;
  System_Collections_Generic_List_object__o *__this;
  System_Object_array *pSVar5;
  UnityEngine_MonoBehaviour_o *__this_00;
  bool_conflict bVar6;
  code *vtable_dispatch;
  long lVar7;
  Il2CppClass *pIVar8;
  Il2CppObject *__this_01;
  intptr_t iVar9;
  undefined8 uVar10;
  undefined8 uVar11;
  intptr_t iVar12;
  long lVar13;
  
  if (DAT_05704ba4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_CompleteProfileFetch);
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action_bool__string);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"not_logged_in");
    DAT_05704ba4 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  x = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x50);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
      if (DAT_05704bcc == '\0') goto LAB_04186190;
LAB_041860e0:
      if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_041860f0;
LAB_041861b3:
      il2cpp_init_class();
      if (DAT_05704c4f == '\0') goto LAB_041861c5;
LAB_041860fd:
      iVar3 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    else {
      if (DAT_05704bcc != '\0') goto LAB_041860e0;
LAB_04186190:
      il2cpp_init_method_metadata(&TypeInfo_AccountManager);
      DAT_05704bcc = '\x01';
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_041861b3;
LAB_041860f0:
      if (DAT_05704c4f != '\0') goto LAB_041860fd;
LAB_041861c5:
      il2cpp_init_method_metadata(&TypeInfo_AccountManager);
      DAT_05704c4f = '\x01';
      iVar3 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    if (iVar3 == 0) {
      il2cpp_init_class();
    }
    bVar6 = System_String__IsNullOrEmpty
                      (*(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x68),
                       (MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      if ((char)forceRefresh != '\0') {
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        lVar13 = TypeInfo_AccountManager;
        *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x29) = 0;
LAB_0418624d:
        if (*(int *)(lVar13 + 0xe4) == 0) {
          il2cpp_init_class();
          lVar13 = TypeInfo_AccountManager;
        }
        lVar7 = MethodInfo_Void_Add;
        __this = *(System_Collections_Generic_List_object__o **)(*(long *)(lVar13 + 0xb8) + 0x30);
        if (__this != (System_Collections_Generic_List_object__o *)0x0) {
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar5 = (__this->fields)._items;
          if (pSVar5 != (System_Object_array *)0x0) {
            uVar4 = (__this->fields)._size;
            if (uVar4 < (uint)pSVar5->max_length) {
              (__this->fields)._size = uVar4 + 1;
              pSVar5->m_Items[(int)uVar4] = (Il2CppObject *)onComplete;
              il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar4);
              lVar7 = *(long *)(TypeInfo_AccountManager + 0xb8);
              cVar2 = *(char *)(lVar7 + 0x2a);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (__this,(Il2CppObject *)onComplete,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70))
              ;
              lVar7 = *(long *)(TypeInfo_AccountManager + 0xb8);
              cVar2 = *(char *)(lVar7 + 0x2a);
            }
            if (cVar2 != '\0') {
              return;
            }
            if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
              il2cpp_init_class();
              lVar7 = *(long *)(TypeInfo_AccountManager + 0xb8);
            }
            *(undefined1 *)(lVar7 + 0x2a) = 1;
            __this_00 = *(UnityEngine_MonoBehaviour_o **)(lVar7 + 0x50);
            pIVar8 = (Il2CppClass *)il2cpp_runtime_glue(TypeInfo_Action_bool__string);
            System_Action<bool__object>___ctor();
            if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
              if (DAT_05704ba8 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_GetProfileJson_d__50);
                DAT_05704ba8 = '\x01';
              }
              __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_GetProfileJson_d__50);
              System_Object___ctor(__this_01,(MethodInfo *)0x0);
              *(undefined4 *)&__this_01[1].klass = 0;
              if (__this_01 != (Il2CppObject *)0x0) {
                __this_01[2].monitor = __this_00;
                il2cpp_runtime_glue(&__this_01[2].monitor,__this_00);
                __this_01[2].klass = pIVar8;
                il2cpp_runtime_glue(__this_01 + 2,pIVar8);
                UnityEngine_MonoBehaviour__StartCoroutine
                          (__this_00,(System_Collections_IEnumerator_o *)__this_01,(MethodInfo *)0x0
                          );
                return;
              }
            }
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar7 = *(long *)(TypeInfo_AccountManager + 0xb8);
      lVar13 = TypeInfo_AccountManager;
      if (*(char *)(lVar7 + 0x29) == '\0') goto LAB_0418624d;
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_init_class();
        lVar7 = *(long *)(TypeInfo_AccountManager + 0xb8);
      }
      lVar13 = TypeInfo_AccountManager;
      if (*(char *)(lVar7 + 0x28) == '\0') goto LAB_0418624d;
      if (onComplete == (System_Action_bool__string__o *)0x0) {
        return;
      }
      iVar12 = (onComplete->fields).method_code;
      vtable_dispatch = (code *)(onComplete->fields).invoke_impl;
      iVar9 = (onComplete->fields).method;
      uVar11 = 1;
      uVar10 = 0;
      goto LAB_04186144;
    }
  }
  if (onComplete == (System_Action_bool__string__o *)0x0) {
    return;
  }
  iVar12 = (onComplete->fields).method_code;
  vtable_dispatch = (code *)(onComplete->fields).invoke_impl;
  iVar9 = (onComplete->fields).method;
  uVar11 = 0;
  uVar10 = "not_logged_in";
LAB_04186144:
  (*vtable_dispatch)(iVar12,uVar11,uVar10,iVar9);
  return;
}


// ApplicationManagers.AccountManager$$UpdateProfile
// il2cpp: void ApplicationManagers_AccountManager__UpdateProfile (System_String_o* displayName, System_String_o* description, System_String_o* avatarKey, System_String_o* bannerKey, System_Collections_Generic_Dictionary_string__string__o* socials, System_Action_bool__string__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x4186510

void ApplicationManagers_AccountManager__UpdateProfile
               (System_String_o *displayName,System_String_o *description,System_String_o *avatarKey
               ,System_String_o *bannerKey,
               System_Collections_Generic_Dictionary_string__string__o *socials,
               System_Action_bool__string__o *onComplete,bool_conflict reportNetworkError,
               MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  ApplicationManagers_AccountManager_o *__this;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_00;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o __this_02;
  bool_conflict bVar2;
  SimpleJSONFixed_JSONObject_o *__this_03;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  SimpleJSONFixed_JSONObject_o *__this_04;
  System_String_o *json;
  System_Collections_IEnumerator_o *routine;
  System_String_o *s;
  MethodInfo *method_00;
  undefined1 auVar4 [16];
  undefined8 in_stack_ffffffffffffff58;
  SimpleJSONFixed_JSONObject_o *pSVar5;
  _union_229680 _Var6;
  Il2CppMethodPointer pIVar7;
  InvokerMethod pIVar8;
  _union_229680 local_58;
  Il2CppMethodPointer pIStack_50;
  InvokerMethod local_48;
  
  method_00 = (MethodInfo *)socials;
  if (DAT_05704ba5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_KeyValuePair_2_System_String_System_String__get);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONObject);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Key);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"displayName");
    il2cpp_init_method_metadata(&"not_logged_in");
    il2cpp_init_method_metadata(&"socials");
    il2cpp_init_method_metadata(&"avatarKey");
    il2cpp_init_method_metadata(&"description");
    il2cpp_init_method_metadata(&"bannerKey");
    DAT_05704ba5 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  x = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x50);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') goto LAB_041866cc;
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05704bcc == '\0') goto LAB_04186955;
LAB_04186689:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_04186699;
LAB_04186978:
    il2cpp_init_class();
    if (DAT_05704c4f == '\0') goto LAB_0418698a;
LAB_041866a6:
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (DAT_05704bcc != '\0') goto LAB_04186689;
LAB_04186955:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bcc = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_04186978;
LAB_04186699:
    if (DAT_05704c4f != '\0') goto LAB_041866a6;
LAB_0418698a:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c4f = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar2 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x68),(MethodInfo *)0x0)
  ;
  if ((char)bVar2 != '\0') {
LAB_041866cc:
    if (onComplete != (System_Action_bool__string__o *)0x0) {
      (*(code *)(onComplete->fields).invoke_impl)
                ((onComplete->fields).method_code,0,"not_logged_in",(onComplete->fields).method);
    }
    return;
  }
  __this_03 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_03,(MethodInfo *)0x0);
  if (displayName != (System_String_o *)0x0) {
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(displayName,(MethodInfo *)0x0);
    if (__this_03 == (SimpleJSONFixed_JSONObject_o *)0x0) goto LAB_04186a94;
    (*(__this_03->klass->vtable)._8_set_Item.methodPtr)
              (__this_03,"displayName",pSVar3,(__this_03->klass->vtable)._8_set_Item.method);
  }
  if (description != (System_String_o *)0x0) {
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(description,(MethodInfo *)0x0);
    if (__this_03 == (SimpleJSONFixed_JSONObject_o *)0x0) goto LAB_04186a94;
    (*(__this_03->klass->vtable)._8_set_Item.methodPtr)
              (__this_03,"description",pSVar3,(__this_03->klass->vtable)._8_set_Item.method);
  }
  pSVar5 = __this_03;
  if (avatarKey != (System_String_o *)0x0) {
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(avatarKey,(MethodInfo *)0x0);
    if (__this_03 == (SimpleJSONFixed_JSONObject_o *)0x0) goto LAB_04186a94;
    (*(__this_03->klass->vtable)._8_set_Item.methodPtr)
              (__this_03,"avatarKey",pSVar3,(__this_03->klass->vtable)._8_set_Item.method);
  }
  if (bannerKey != (System_String_o *)0x0) {
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(bannerKey,(MethodInfo *)0x0);
    if (__this_03 == (SimpleJSONFixed_JSONObject_o *)0x0) goto LAB_04186a94;
    (*(__this_03->klass->vtable)._8_set_Item.methodPtr)
              (__this_03,"bannerKey",pSVar3,(__this_03->klass->vtable)._8_set_Item.method);
  }
  if (socials != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
    __this_04 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONObject);
    SimpleJSONFixed_JSONObject___ctor(__this_04,(MethodInfo *)0x0);
    System_Collections_Generic_Dictionary<object__object>__GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)&local_58,
               (System_Collections_Generic_Dictionary_object__object__o *)socials,MethodInfo_Dictionary_2_TKey_TValue__Enumerator_System_Stri);
    if (__this_04 == (SimpleJSONFixed_JSONObject_o *)0x0) {
      __this_01.fields._8_8_ = pSVar5;
      __this_01.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff58;
      __this_01.fields._current.fields.key = local_58.genericMethod;
      __this_01.fields._current.fields.value = (Il2CppObject *)pIStack_50;
      __this_01.fields._32_8_ = local_48;
      bVar2 = System_Collections_Generic_Dictionary_Enumerator<object__object>__MoveNext
                        (__this_01,(MethodInfo_31CFE90 *)&stack0xffffffffffffff68);
      __this_03 = pSVar5;
      if ((char)bVar2 != '\0') {
        il2cpp_glue_032bf890(&stack0xffffffffffffff68);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_init_class();
        }
        SimpleJSONFixed_JSONNode__op_Implicit(s,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    else {
      _Var6 = local_58;
      pIVar7 = pIStack_50;
      pIVar8 = local_48;
      while (__this_00.fields._8_8_ = pSVar5,
            __this_00.fields._dictionary =
                 (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff58,
            __this_00.fields._current.fields.key = _Var6.genericMethod,
            __this_00.fields._current.fields.value = (Il2CppObject *)pIVar7,
            __this_00.fields._32_8_ = pIVar8,
            bVar2 = System_Collections_Generic_Dictionary_Enumerator<object__object>__MoveNext
                              (__this_00,(MethodInfo_31CFE90 *)&stack0xffffffffffffff68),
            __this_03 = pSVar5, local_58 = _Var6, pIStack_50 = pIVar7, local_48 = pIVar8,
            (char)bVar2 != '\0') {
        auVar4 = il2cpp_glue_032bf890((MethodInfo_31CFE90 *)&stack0xffffffffffffff68);
        if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(auVar4._8_8_,(MethodInfo *)0x0);
        (*(__this_04->klass->vtable)._8_set_Item.methodPtr)
                  (__this_04,auVar4._0_8_,pSVar3,(__this_04->klass->vtable)._8_set_Item.method);
      }
    }
    __this_02.fields._8_8_ = __this_03;
    __this_02.fields._dictionary =
         (System_Collections_Generic_Dictionary_TKey__TValue__o *)in_stack_ffffffffffffff58;
    __this_02.fields._current.fields.key = local_58.genericMethod;
    __this_02.fields._current.fields.value = (Il2CppObject *)pIStack_50;
    __this_02.fields._32_8_ = local_48;
    System_Collections_Generic_Dictionary_Enumerator<object__object>__Dispose
              (__this_02,(MethodInfo_31CFFB0 *)&stack0xffffffffffffff68);
    if (__this_03 == (SimpleJSONFixed_JSONObject_o *)0x0) goto LAB_04186a94;
    (*(__this_03->klass->vtable)._8_set_Item.methodPtr)
              (__this_03,"socials",__this_04,(__this_03->klass->vtable)._8_set_Item.method);
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (__this_03 != (SimpleJSONFixed_JSONObject_o *)0x0) {
    __this = *(ApplicationManagers_AccountManager_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x50);
    json = (System_String_o *)
           (*(__this_03->klass->vtable)._3_ToString.methodPtr)
                     (__this_03,(__this_03->klass->vtable)._3_ToString.method);
    if (__this != (ApplicationManagers_AccountManager_o *)0x0) {
      routine = ApplicationManagers_AccountManager__PatchProfileJson
                          (__this,json,onComplete,reportNetworkError & 0xff,method_00);
      UnityEngine_MonoBehaviour__StartCoroutine
                ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
      return;
    }
  }
LAB_04186a94:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$GetCharacterInfo
// il2cpp: void ApplicationManagers_AccountManager__GetCharacterInfo (System_Action_bool__string__JSONNode__o* onComplete, bool forceRefresh, const MethodInfo* method);
// 0x4186c50

void ApplicationManagers_AccountManager__GetCharacterInfo
               (System_Action_bool__string__JSONNode__o *onComplete,bool_conflict forceRefresh,
               MethodInfo *method)

{
  int32_t *piVar1;
  char cVar2;
  int iVar3;
  uint uVar4;
  UnityEngine_Object_o *x;
  code *vtable_dispatch;
  System_Collections_Generic_List_object__o *__this;
  System_Object_array *pSVar5;
  UnityEngine_MonoBehaviour_o *__this_00;
  bool_conflict bVar6;
  long lVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  Il2CppClass *pIVar9;
  Il2CppObject *__this_01;
  MethodInfo *method_00;
  long lVar10;
  
  if (DAT_05704ba6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_CompleteCharacterInfoFetch);
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action_bool__string__JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"not_logged_in");
    DAT_05704ba6 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  x = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x50);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') goto LAB_04186d63;
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05704bcc == '\0') goto LAB_04186dd2;
LAB_04186d20:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_04186d30;
LAB_04186df5:
    il2cpp_init_class();
    if (DAT_05704c4f == '\0') goto LAB_04186e07;
LAB_04186d3d:
    iVar3 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (DAT_05704bcc != '\0') goto LAB_04186d20;
LAB_04186dd2:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bcc = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_04186df5;
LAB_04186d30:
    if (DAT_05704c4f != '\0') goto LAB_04186d3d;
LAB_04186e07:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c4f = '\x01';
    iVar3 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar3 == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar6 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x68),(MethodInfo *)0x0)
  ;
  if ((char)bVar6 == '\0') {
    if ((char)forceRefresh == '\0') {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar7 = *(long *)(TypeInfo_AccountManager + 0xb8);
      lVar10 = TypeInfo_AccountManager;
      if (*(char *)(lVar7 + 0x39) != '\0') {
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
          il2cpp_init_class();
          lVar7 = *(long *)(TypeInfo_AccountManager + 0xb8);
        }
        lVar10 = TypeInfo_AccountManager;
        if (*(char *)(lVar7 + 0x38) != '\0') {
          if (onComplete == (System_Action_bool__string__JSONNode__o *)0x0) {
            return;
          }
          if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
            il2cpp_init_class();
            lVar7 = *(long *)(TypeInfo_AccountManager + 0xb8);
          }
          pSVar8 = ApplicationManagers_AccountManager__CloneJson
                             (*(SimpleJSONFixed_JSONNode_o **)(lVar7 + 0x40),method_00);
          vtable_dispatch = (code *)(onComplete->fields).invoke_impl;
          (*vtable_dispatch)
                    ((onComplete->fields).method_code,1,0,pSVar8,(onComplete->fields).method,
                     vtable_dispatch);
          return;
        }
      }
    }
    else {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      lVar10 = TypeInfo_AccountManager;
      *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x39) = 0;
    }
    if (*(int *)(lVar10 + 0xe4) == 0) {
      il2cpp_init_class();
      lVar10 = TypeInfo_AccountManager;
    }
    lVar7 = MethodInfo_Void_Add;
    __this = *(System_Collections_Generic_List_object__o **)(*(long *)(lVar10 + 0xb8) + 0x48);
    if (__this != (System_Collections_Generic_List_object__o *)0x0) {
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar5 = (__this->fields)._items;
      if (pSVar5 != (System_Object_array *)0x0) {
        uVar4 = (__this->fields)._size;
        if (uVar4 < (uint)pSVar5->max_length) {
          (__this->fields)._size = uVar4 + 1;
          pSVar5->m_Items[(int)uVar4] = (Il2CppObject *)onComplete;
          il2cpp_runtime_glue(pSVar5->m_Items + (int)uVar4);
          lVar7 = *(long *)(TypeInfo_AccountManager + 0xb8);
          cVar2 = *(char *)(lVar7 + 0x3a);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this,(Il2CppObject *)onComplete,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar7 + 0x20) + 0xc0) + 0x70));
          lVar7 = *(long *)(TypeInfo_AccountManager + 0xb8);
          cVar2 = *(char *)(lVar7 + 0x3a);
        }
        if (cVar2 != '\0') {
          return;
        }
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
          il2cpp_init_class();
          lVar7 = *(long *)(TypeInfo_AccountManager + 0xb8);
        }
        *(undefined1 *)(lVar7 + 0x3a) = 1;
        __this_00 = *(UnityEngine_MonoBehaviour_o **)(lVar7 + 0x50);
        pIVar9 = (Il2CppClass *)il2cpp_runtime_glue(TypeInfo_Action_bool__string__JSONNode);
        System_Action<bool__object__object>___ctor();
        if (__this_00 != (UnityEngine_MonoBehaviour_o *)0x0) {
          if (DAT_05704baa == '\0') {
            il2cpp_init_method_metadata(&TypeInfo_GetCharacterInfoJson_d__52);
            DAT_05704baa = '\x01';
          }
          __this_01 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_GetCharacterInfoJson_d__52);
          System_Object___ctor(__this_01,(MethodInfo *)0x0);
          *(undefined4 *)&__this_01[1].klass = 0;
          if (__this_01 != (Il2CppObject *)0x0) {
            __this_01[2].monitor = __this_00;
            il2cpp_runtime_glue(&__this_01[2].monitor,__this_00);
            __this_01[2].klass = pIVar9;
            il2cpp_runtime_glue(__this_01 + 2,pIVar9);
            UnityEngine_MonoBehaviour__StartCoroutine
                      (__this_00,(System_Collections_IEnumerator_o *)__this_01,(MethodInfo *)0x0);
            return;
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_04186d63:
  if (onComplete == (System_Action_bool__string__JSONNode__o *)0x0) {
    return;
  }
  (*(code *)(onComplete->fields).invoke_impl)
            ((onComplete->fields).method_code,0,"not_logged_in",0,(onComplete->fields).method);
  return;
}


// ApplicationManagers.AccountManager$$UpdateCharacterInfo
// il2cpp: void ApplicationManagers_AccountManager__UpdateCharacterInfo (SimpleJSONFixed_JSONNode_o* characterInfo, System_Action_bool__string__JSONNode__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x41871e0

void ApplicationManagers_AccountManager__UpdateCharacterInfo
               (SimpleJSONFixed_JSONNode_o *characterInfo,
               System_Action_bool__string__JSONNode__o *onComplete,bool_conflict reportNetworkError,
               MethodInfo *method)

{
  int iVar1;
  UnityEngine_Object_o *x;
  ApplicationManagers_AccountManager_o *__this;
  undefined8 uVar2;
  bool_conflict bVar3;
  SimpleJSONFixed_JSONObject_o *__this_00;
  SimpleJSONFixed_JSONObject_o *__this_01;
  System_String_o *json;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *in_R9;
  
  if (DAT_05704ba7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_JSONObject);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"characterInfo");
    il2cpp_init_method_metadata(&"not_logged_in");
    DAT_05704ba7 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  x = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x50);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') goto LAB_041872ed;
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05704bcc != '\0') goto LAB_041872aa;
LAB_0418741c:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bcc = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_041872ba;
LAB_0418743f:
    il2cpp_init_class();
    if (DAT_05704c4f != '\0') goto LAB_041872c7;
LAB_04187451:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c4f = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (DAT_05704bcc == '\0') goto LAB_0418741c;
LAB_041872aa:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_0418743f;
LAB_041872ba:
    if (DAT_05704c4f == '\0') goto LAB_04187451;
LAB_041872c7:
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x68),(MethodInfo *)0x0)
  ;
  if ((char)bVar3 == '\0') {
    __this_00 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONObject);
    SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
    uVar2 = "characterInfo";
    __this_01 = (SimpleJSONFixed_JSONObject_o *)characterInfo;
    if (characterInfo == (SimpleJSONFixed_JSONNode_o *)0x0) {
      __this_01 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONObject);
      SimpleJSONFixed_JSONObject___ctor(__this_01,(MethodInfo *)0x0);
    }
    if (__this_00 != (SimpleJSONFixed_JSONObject_o *)0x0) {
      (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
                (__this_00,uVar2,__this_01,(__this_00->klass->vtable)._8_set_Item.method);
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this = *(ApplicationManagers_AccountManager_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x50);
      json = (System_String_o *)
             (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                       (__this_00,(__this_00->klass->vtable)._3_ToString.method);
      if (__this != (ApplicationManagers_AccountManager_o *)0x0) {
        routine = ApplicationManagers_AccountManager__PutCharacterInfoJson
                            (__this,json,characterInfo,onComplete,reportNetworkError & 0xff,in_R9);
        UnityEngine_MonoBehaviour__StartCoroutine
                  ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_041872ed:
  if (onComplete == (System_Action_bool__string__JSONNode__o *)0x0) {
    return;
  }
  (*(code *)(onComplete->fields).invoke_impl)
            ((onComplete->fields).method_code,0,"not_logged_in",0,(onComplete->fields).method);
  return;
}


// ApplicationManagers.AccountManager$$GetProfileJson
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__GetProfileJson (ApplicationManagers_AccountManager_o* __this, System_Action_bool__string__o* onComplete, const MethodInfo* method);
// 0x4186480

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__GetProfileJson
          (ApplicationManagers_AccountManager_o *__this,System_Action_bool__string__o *onComplete,
          MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704ba8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GetProfileJson_d__50);
    DAT_05704ba8 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_GetProfileJson_d__50);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_glue(&__this_00[2].monitor,__this);
    __this_00[2].klass = (Il2CppClass *)onComplete;
    il2cpp_runtime_glue(__this_00 + 2,onComplete);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$PatchProfileJson
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__PatchProfileJson (ApplicationManagers_AccountManager_o* __this, System_String_o* json, System_Action_bool__string__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x4186ba0

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__PatchProfileJson
          (ApplicationManagers_AccountManager_o *__this,System_String_o *json,
          System_Action_bool__string__o *onComplete,bool_conflict reportNetworkError,
          MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704ba9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PatchProfileJson_d__51);
    DAT_05704ba9 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_PatchProfileJson_d__51);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_glue(&__this_00[2].monitor,__this);
    __this_00[3].klass = (Il2CppClass *)json;
    il2cpp_runtime_glue(__this_00 + 3,json);
    __this_00[2].klass = (Il2CppClass *)onComplete;
    il2cpp_runtime_glue(__this_00 + 2,onComplete);
    *(char *)&__this_00[3].monitor = (char)reportNetworkError;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$GetCharacterInfoJson
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__GetCharacterInfoJson (ApplicationManagers_AccountManager_o* __this, System_Action_bool__string__JSONNode__o* onComplete, const MethodInfo* method);
// 0x4187150

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__GetCharacterInfoJson
          (ApplicationManagers_AccountManager_o *__this,
          System_Action_bool__string__JSONNode__o *onComplete,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704baa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GetCharacterInfoJson_d__52);
    DAT_05704baa = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_GetCharacterInfoJson_d__52);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_glue(&__this_00[2].monitor,__this);
    __this_00[2].klass = (Il2CppClass *)onComplete;
    il2cpp_runtime_glue(__this_00 + 2,onComplete);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$PutCharacterInfoJson
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__PutCharacterInfoJson (ApplicationManagers_AccountManager_o* __this, System_String_o* json, SimpleJSONFixed_JSONNode_o* fallbackCharacterInfo, System_Action_bool__string__JSONNode__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x4187490

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__PutCharacterInfoJson
          (ApplicationManagers_AccountManager_o *__this,System_String_o *json,
          SimpleJSONFixed_JSONNode_o *fallbackCharacterInfo,
          System_Action_bool__string__JSONNode__o *onComplete,bool_conflict reportNetworkError,
          MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704bab == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PutCharacterInfoJson_d__53);
    DAT_05704bab = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_PutCharacterInfoJson_d__53);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[3].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 3,__this);
    __this_00[3].monitor = json;
    il2cpp_runtime_glue(&__this_00[3].monitor,json);
    __this_00[2].klass = (Il2CppClass *)fallbackCharacterInfo;
    il2cpp_runtime_glue(__this_00 + 2,fallbackCharacterInfo);
    __this_00[2].monitor = onComplete;
    il2cpp_runtime_glue(&__this_00[2].monitor,onComplete);
    *(char *)&__this_00[4].klass = (char)reportNetworkError;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$SendMeJson
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__SendMeJson (ApplicationManagers_AccountManager_o* __this, System_String_o* method, System_String_o* path, System_String_o* json, System_Action_bool__string__JSONNode__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x41875d0

System_Collections_IEnumerator_o * ApplicationManagers_AccountManager__SendMeJson(void)

{
  Il2CppObject *__this;
  Il2CppClass *in_RCX;
  Il2CppClass *in_RDX;
  Il2CppClass *in_RSI;
  void *in_RDI;
  void *in_R8;
  undefined1 in_R9B;
  
  if (DAT_05704bac == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SendMeJson_d__54);
    DAT_05704bac = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_SendMeJson_d__54);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0;
  if (__this != (Il2CppObject *)0x0) {
    __this[2].monitor = in_RDI;
    il2cpp_runtime_glue(&__this[2].monitor);
    __this[2].klass = in_RSI;
    il2cpp_runtime_glue(__this + 2);
    __this[3].klass = in_RDX;
    il2cpp_runtime_glue(__this + 3);
    __this[4].klass = in_RCX;
    il2cpp_runtime_glue(__this + 4);
    __this[3].monitor = in_R8;
    il2cpp_runtime_glue(&__this[3].monitor);
    *(undefined1 *)&__this[4].monitor = in_R9B;
    return (System_Collections_IEnumerator_o *)__this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$SendMeReadJson
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__SendMeReadJson (ApplicationManagers_AccountManager_o* __this, System_String_o* path, System_Action_bool__string__JSONNode__o* onComplete, const MethodInfo* method);
// 0x41876d0

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__SendMeReadJson
          (ApplicationManagers_AccountManager_o *__this,System_String_o *path,
          System_Action_bool__string__JSONNode__o *onComplete,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704bad == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SendMeReadJson_d__55);
    DAT_05704bad = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_SendMeReadJson_d__55);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    __this_00[2].monitor = path;
    il2cpp_runtime_glue(&__this_00[2].monitor,path);
    __this_00[3].monitor = onComplete;
    il2cpp_runtime_glue(&__this_00[3].monitor,onComplete);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$ApplyProfileResponse
// il2cpp: void ApplicationManagers_AccountManager__ApplyProfileResponse (SimpleJSONFixed_JSONNode_o* profile, const MethodInfo* method);
// 0x4187790

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
  
  if (DAT_05704bae == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704bae = '\x01';
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
    il2cpp_init_class();
  }
  pMVar8 = (MethodInfo *)0x0;
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality(profile,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return;
  }
  pAVar5 = ApplicationManagers_AccountLoginResponse_ProfileData__Parse(profile,pMVar8);
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_0570440e == '\0') goto LAB_041878fc;
LAB_04187883:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_04187893;
LAB_0418791f:
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  else {
    if (DAT_0570440e != '\0') goto LAB_04187883;
LAB_041878fc:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_0570440e = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_0418791f;
LAB_04187893:
    lVar2 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  if (lVar2 != 0) {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
      if (DAT_0570440e == '\0') goto LAB_04187950;
LAB_041878c2:
      if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_041878d2;
LAB_04187973:
      il2cpp_init_class();
      lVar2 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
    }
    else {
      if (DAT_0570440e != '\0') goto LAB_041878c2;
LAB_04187950:
      il2cpp_init_method_metadata(&TypeInfo_AccountManager);
      DAT_0570440e = '\x01';
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_04187973;
LAB_041878d2:
      lVar2 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
    }
    if (lVar2 == 0) goto LAB_04187e67;
    *(ApplicationManagers_AccountLoginResponse_ProfileData_o **)(lVar2 + 0x48) = pAVar5;
    il2cpp_runtime_glue(lVar2 + 0x48,pAVar5);
  }
  if (pAVar5 == (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0) goto LAB_04187e67;
  pSVar6 = (pAVar5->fields).Description;
  if (pSVar6 == (System_String_o *)0x0) {
    pSVar6 = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8);
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_04187afc;
LAB_041879c8:
    if (DAT_05704c4b != '\0') goto LAB_041879d5;
LAB_04187b0e:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c4b = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_041879c8;
LAB_04187afc:
    il2cpp_init_class();
    if (DAT_05704c4b == '\0') goto LAB_04187b0e;
LAB_041879d5:
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(System_String_o **)(lVar2 + 8) = pSVar6;
  il2cpp_runtime_glue(lVar2 + 8,pSVar6);
  pSVar6 = (pAVar5->fields).AvatarKey;
  if (pSVar6 == (System_String_o *)0x0) {
    pSVar6 = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8);
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_04187b66;
LAB_04187a19:
    if (DAT_05704c4c != '\0') goto LAB_04187a26;
LAB_04187b78:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c4c = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_04187a19;
LAB_04187b66:
    il2cpp_init_class();
    if (DAT_05704c4c == '\0') goto LAB_04187b78;
LAB_04187a26:
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(System_String_o **)(lVar2 + 0x10) = pSVar6;
  il2cpp_runtime_glue(lVar2 + 0x10,pSVar6);
  pSVar6 = (pAVar5->fields).BannerKey;
  if (pSVar6 == (System_String_o *)0x0) {
    pSVar6 = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8);
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_04187bd0;
LAB_04187a6a:
    if (DAT_05704c4d != '\0') goto LAB_04187a77;
LAB_04187be2:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c4d = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_04187a6a;
LAB_04187bd0:
    il2cpp_init_class();
    if (DAT_05704c4d == '\0') goto LAB_04187be2;
LAB_04187a77:
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(System_String_o **)(lVar2 + 0x18) = pSVar6;
  il2cpp_runtime_glue(lVar2 + 0x18,pSVar6);
  if (DAT_05704c4e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c4e = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_04187c35;
LAB_04187abb:
    pMVar8 = *(MethodInfo **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x20);
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_04187abb;
LAB_04187c35:
    il2cpp_init_class();
    pMVar8 = *(MethodInfo **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x20);
  }
  if (pMVar8 == (MethodInfo *)0x0) {
LAB_04187e67:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_Dictionary<object__object>__Clear
            ((System_Collections_Generic_Dictionary_object__object__o *)pMVar8,MethodInfo_Void_Clear);
  ApplicationManagers_AccountManager__MarkOwnProfileCacheFresh(pMVar8);
  a = (pAVar5->fields).Socials;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_04187e67;
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
    __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.key =
         (Il2CppObject *)pcVar13;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
         (Il2CppObject *)pIVar15;
    __this_00.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar16;
    __this_00.fields.m_Enumerator.fields.m_Array.fields._list =
         (System_Collections_Generic_List_T__o *)ppIVar17;
    __this_00.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var19.rgctx_data;
    __this_00.fields.m_Enumerator.fields.m_Array.fields._current = _Var20.genericMethod;
    SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c0,__this_00,
               (MethodInfo *)&local_78);
    __this_01.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSStack_b8;
    __this_01.fields.m_Enumerator.fields._0_8_ = local_c0;
    __this_01.fields.m_Enumerator.fields.m_Object.fields._8_8_ = local_b0;
    __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIStack_a8;
    __this_01.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
         (Il2CppObject *)local_a0;
    __this_01.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIStack_98;
    __this_01.fields.m_Enumerator.fields.m_Array.fields._list = local_90;
    __this_01.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Stack_88.rgctx_data;
    __this_01.fields.m_Enumerator.fields.m_Array.fields._current = local_80.genericMethod;
    bVar4 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                      (__this_01,(MethodInfo *)&stack0xfffffffffffffef8);
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
      __this_03.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
           (Il2CppObject *)pIVar15;
      __this_03.fields.m_Enumerator.fields.m_Object.fields._32_8_ = pIVar16;
      __this_03.fields.m_Enumerator.fields.m_Array.fields._list = pSVar18;
      __this_03.fields.m_Enumerator.fields.m_Array.fields._8_8_ = _Var19.rgctx_data;
      __this_03.fields.m_Enumerator.fields.m_Array.fields._current = _Var20.genericMethod;
      pSVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                         (__this_03,(MethodInfo *)&stack0xfffffffffffffef8);
      plVar7 = (long *)(*(a->klass->vtable)._7_get_Item.methodPtr)
                                 (a,pSVar6,(a->klass->vtable)._7_get_Item.method);
      if (plVar7 == (long *)0x0) goto LAB_04187e67;
      value = (System_String_o *)(**(code **)(*plVar7 + 0x1c8))(plVar7);
      bVar4 = System_String__IsNullOrWhiteSpace(pSVar6,(MethodInfo *)0x0);
      if (((char)bVar4 == '\0') &&
         (bVar4 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0), (char)bVar4 == '\0'))
      {
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
          il2cpp_init_class();
          if (DAT_05704c4e == '\0') goto LAB_04187e29;
LAB_04187e09:
          iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
        }
        else {
          if (DAT_05704c4e != '\0') goto LAB_04187e09;
LAB_04187e29:
          il2cpp_init_method_metadata(&TypeInfo_AccountManager);
          DAT_05704c4e = '\x01';
          iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
        }
        if (iVar1 == 0) {
          il2cpp_init_class();
        }
        __this = *(System_Collections_Generic_Dictionary_object__object__o **)
                  (*(long *)(TypeInfo_AccountManager + 0xb8) + 0x20);
        if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
        goto LAB_04187e67;
        System_Collections_Generic_Dictionary<object__object>__set_Item
                  (__this,(Il2CppObject *)pSVar6,(Il2CppObject *)value,MethodInfo_Void_set_Item);
      }
      __this_02.fields.m_Enumerator.fields.m_Object.fields._dictionary = pSVar11;
      __this_02.fields.m_Enumerator.fields._0_8_ = pIVar9;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._8_8_ = pIVar12;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.key = pIVar14;
      __this_02.fields.m_Enumerator.fields.m_Object.fields._current.fields.value =
           (Il2CppObject *)pIVar15;
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
// 0x4188030

/* WARNING: Type propagation algorithm not settling */

void ApplicationManagers_AccountManager__CompleteProfileFetch
               (bool_conflict success,System_String_o *error,MethodInfo *method)

{
  int iVar1;
  int32_t length;
  uint uVar2;
  System_Collections_Generic_List_object__o *__this;
  long lVar3;
  Il2CppObject *pIVar4;
  System_Object_array *pSVar5;
  ulong uVar6;
  MethodInfo *method_00;
  
  if (DAT_05704baf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Action_2_Boolean_String____ToArray);
    DAT_05704baf = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
    method_00 = TypeInfo_AccountManager;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
    method_00 = TypeInfo_AccountManager;
  }
  TypeInfo_AccountManager = method_00;
  if (iVar1 == 0) {
    il2cpp_init_class();
    method_00 = TypeInfo_AccountManager;
    TypeInfo_AccountManager[2].virtualMethodPointer[0x2a] = (code)0x0;
  }
  else {
    method_00[2].virtualMethodPointer[0x2a] = (code)0x0;
  }
  if ((char)success == '\0') {
    iVar1 = *(int *)((long)&method_00[2].parameters + 4);
  }
  else if (*(int *)((long)&method_00[2].parameters + 4) == 0) {
    il2cpp_init_class();
    ApplicationManagers_AccountManager__MarkOwnProfileCacheFresh(method_00);
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
    method_00 = TypeInfo_AccountManager;
  }
  else {
    ApplicationManagers_AccountManager__MarkOwnProfileCacheFresh(method_00);
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
    method_00 = TypeInfo_AccountManager;
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    __this = *(System_Collections_Generic_List_object__o **)
              (TypeInfo_AccountManager[2].virtualMethodPointer + 0x30);
  }
  else {
    __this = *(System_Collections_Generic_List_object__o **)
              (method_00[2].virtualMethodPointer + 0x30);
  }
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar5 = System_Collections_Generic_List<object>__ToArray(__this,MethodInfo_Action_2_Boolean_String____ToArray);
    lVar3 = *(long *)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x30);
    if (lVar3 != 0) {
      *(int *)(lVar3 + 0x1c) = *(int *)(lVar3 + 0x1c) + 1;
      length = *(int32_t *)(lVar3 + 0x18);
      *(undefined4 *)(lVar3 + 0x18) = 0;
      if (0 < length) {
        System_Array__Clear(*(System_Array_o **)(lVar3 + 0x10),0,length,(MethodInfo *)0x0);
      }
      if (pSVar5 != (System_Object_array *)0x0) {
        if ((int)pSVar5->max_length < 1) {
          return;
        }
        uVar6 = 0;
        if ((pSVar5->max_length & 0xffffffff) != 0) {
          do {
            pIVar4 = pSVar5->m_Items[uVar6];
            if (pIVar4 != (Il2CppObject *)0x0) {
              if (pIVar4 == (Il2CppObject *)0x0) goto LAB_041881fc;
              (*pIVar4[1].monitor)(pIVar4[4].klass,success & 0xff,error,pIVar4[2].monitor);
            }
            uVar6 = uVar6 + 1;
            uVar2 = (uint)pSVar5->max_length;
            if ((long)(int)uVar2 <= (long)uVar6) {
              return;
            }
          } while (uVar6 < uVar2);
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
LAB_041881fc:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$CompleteCharacterInfoFetch
// il2cpp: void ApplicationManagers_AccountManager__CompleteCharacterInfoFetch (bool success, System_String_o* error, SimpleJSONFixed_JSONNode_o* characterInfo, const MethodInfo* method);
// 0x4188210

/* WARNING: Type propagation algorithm not settling */

void ApplicationManagers_AccountManager__CompleteCharacterInfoFetch
               (bool_conflict success,System_String_o *error,
               SimpleJSONFixed_JSONNode_o *characterInfo,MethodInfo *method)

{
  int32_t length;
  uint uVar1;
  System_Collections_Generic_List_object__o *__this;
  long lVar2;
  Il2CppObject *pIVar3;
  System_Object_array *pSVar4;
  long lVar5;
  SimpleJSONFixed_JSONNode_o *node;
  ulong uVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  int iVar8;
  ulong uVar9;
  MethodInfo *pMVar10;
  
  pMVar10 = (MethodInfo *)error;
  if (DAT_05704bb0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Action_3_Boolean_String_SimpleJSONFixed_JSONNode);
    DAT_05704bb0 = '\x01';
    iVar8 = *(int *)(TypeInfo_AccountManager + 0xe4);
    lVar5 = TypeInfo_AccountManager;
  }
  else {
    iVar8 = *(int *)(TypeInfo_AccountManager + 0xe4);
    lVar5 = TypeInfo_AccountManager;
  }
  TypeInfo_AccountManager = lVar5;
  if (iVar8 == 0) {
    il2cpp_init_class();
    lVar5 = TypeInfo_AccountManager;
    *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x3a) = 0;
  }
  else {
    *(undefined1 *)(*(long *)(lVar5 + 0xb8) + 0x3a) = 0;
  }
  if ((char)success == '\0') {
    iVar8 = *(int *)(lVar5 + 0xe4);
  }
  else {
    if (*(int *)(lVar5 + 0xe4) == 0) {
      il2cpp_init_class();
    }
    ApplicationManagers_AccountManager__MarkCharacterInfoCacheFresh(characterInfo,pMVar10);
    iVar8 = *(int *)(TypeInfo_AccountManager + 0xe4);
    lVar5 = TypeInfo_AccountManager;
  }
  if (iVar8 == 0) {
    il2cpp_init_class();
    __this = *(System_Collections_Generic_List_object__o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x48);
    pMVar10 = MethodInfo_Action_3_Boolean_String_SimpleJSONFixed_JSONNode;
  }
  else {
    __this = *(System_Collections_Generic_List_object__o **)(*(long *)(lVar5 + 0xb8) + 0x48);
    pMVar10 = MethodInfo_Action_3_Boolean_String_SimpleJSONFixed_JSONNode;
  }
  MethodInfo_Action_3_Boolean_String_SimpleJSONFixed_JSONNode = pMVar10;
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar4 = System_Collections_Generic_List<object>__ToArray(__this,(MethodInfo_35A9470 *)pMVar10);
    lVar5 = *(long *)(TypeInfo_AccountManager + 0xb8);
    lVar2 = *(long *)(lVar5 + 0x48);
    if (lVar2 != 0) {
      *(int *)(lVar2 + 0x1c) = *(int *)(lVar2 + 0x1c) + 1;
      length = *(int32_t *)(lVar2 + 0x18);
      *(undefined4 *)(lVar2 + 0x18) = 0;
      if (0 < length) {
        pMVar10 = (MethodInfo *)0x0;
        System_Array__Clear(*(System_Array_o **)(lVar2 + 0x10),0,length,(MethodInfo *)0x0);
        lVar5 = *(long *)(TypeInfo_AccountManager + 0xb8);
      }
      node = ApplicationManagers_AccountManager__CloneJson
                       (*(SimpleJSONFixed_JSONNode_o **)(lVar5 + 0x40),pMVar10);
      if (pSVar4 != (System_Object_array *)0x0) {
        iVar8 = (int)pSVar4->max_length;
        uVar6 = pSVar4->max_length & 0xffffffff;
        if ((char)success == '\0') {
          if (iVar8 < 1) {
            return;
          }
          uVar9 = 0;
          if (uVar6 != 0) {
            do {
              pIVar3 = pSVar4->m_Items[uVar9];
              if (pIVar3 != (Il2CppObject *)0x0) {
                if (pIVar3 == (Il2CppObject *)0x0) goto LAB_0418846c;
                (*pIVar3[1].monitor)(pIVar3[4].klass,0,error,0,pIVar3[2].monitor);
              }
              uVar9 = uVar9 + 1;
              uVar1 = (uint)pSVar4->max_length;
              if ((long)(int)uVar1 <= (long)uVar9) {
                return;
              }
            } while (uVar9 < uVar1);
          }
        }
        else {
          if (iVar8 < 1) {
            return;
          }
          uVar9 = 0;
          if (uVar6 != 0) {
            do {
              pIVar3 = pSVar4->m_Items[uVar9];
              if (pIVar3 != (Il2CppObject *)0x0) {
                if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                pSVar7 = ApplicationManagers_AccountManager__CloneJson(node,pMVar10);
                if (pIVar3 == (Il2CppObject *)0x0) goto LAB_0418846c;
                pMVar10 = (MethodInfo *)0x1;
                (*pIVar3[1].monitor)(pIVar3[4].klass,1,error,pSVar7,pIVar3[2].monitor);
              }
              uVar9 = uVar9 + 1;
              uVar1 = (uint)pSVar4->max_length;
              if ((long)(int)uVar1 <= (long)uVar9) {
                return;
              }
            } while (uVar9 < uVar1);
          }
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
  }
LAB_0418846c:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$MarkOwnProfileCacheFresh
// il2cpp: void ApplicationManagers_AccountManager__MarkOwnProfileCacheFresh (const MethodInfo* method);
// 0x4187e70

void ApplicationManagers_AccountManager__MarkOwnProfileCacheFresh(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  bool bVar3;
  
  if (DAT_05704bb1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bb1 = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_04187f64;
LAB_04187e97:
    if (DAT_0570440e != '\0') goto LAB_04187ea4;
LAB_04187f76:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_0570440e = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_04187f99;
LAB_04187eb4:
    lVar2 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_04187e97;
LAB_04187f64:
    il2cpp_init_class();
    if (DAT_0570440e == '\0') goto LAB_04187f76;
LAB_04187ea4:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_04187eb4;
LAB_04187f99:
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  if (lVar2 == 0) {
    bVar3 = false;
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    goto joined_r0x04187fbf;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_0570440e == '\0') goto LAB_04187fdc;
LAB_04187ee3:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_04187ef3;
LAB_04187fff:
    il2cpp_init_class();
    lVar2 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  else {
    if (DAT_0570440e != '\0') goto LAB_04187ee3;
LAB_04187fdc:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_0570440e = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_04187fff;
LAB_04187ef3:
    lVar2 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  bVar3 = *(long *)(lVar2 + 0x48) != 0;
  iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
joined_r0x04187fbf:
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(bool *)(lVar2 + 0x28) = bVar3;
  *(bool *)(lVar2 + 0x29) = bVar3;
  return;
}


// ApplicationManagers.AccountManager$$MarkCharacterInfoCacheFresh
// il2cpp: void ApplicationManagers_AccountManager__MarkCharacterInfoCacheFresh (SimpleJSONFixed_JSONNode_o* characterInfo, const MethodInfo* method);
// 0x4188490

void ApplicationManagers_AccountManager__MarkCharacterInfoCacheFresh
               (SimpleJSONFixed_JSONNode_o *characterInfo,MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  
  if (DAT_05704bb2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704bb2 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = ApplicationManagers_AccountManager__CloneJson(characterInfo,method);
  lVar1 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(SimpleJSONFixed_JSONNode_o **)(lVar1 + 0x40) = pSVar3;
  il2cpp_runtime_glue(lVar1 + 0x40);
  pSVar3 = *(SimpleJSONFixed_JSONNode_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x40);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(char *)(lVar1 + 0x38) = (char)bVar2;
  *(char *)(lVar1 + 0x39) = (char)bVar2;
  return;
}


// ApplicationManagers.AccountManager$$CloneJson
// il2cpp: SimpleJSONFixed_JSONNode_o* ApplicationManagers_AccountManager__CloneJson (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x4187040

SimpleJSONFixed_JSONNode_o *
ApplicationManagers_AccountManager__CloneJson(SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *aJSON;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  
  if (DAT_05704bb3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704bb3 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    aJSON = (System_String_o *)(*(node->klass->vtable)._3_ToString.methodPtr)(node);
    pSVar2 = SimpleJSONFixed_JSON__Parse(aJSON,(MethodInfo *)0x0);
  }
  return pSVar2;
}


// ApplicationManagers.AccountManager$$InvalidateOwnAccountCache
// il2cpp: void ApplicationManagers_AccountManager__InvalidateOwnAccountCache (const MethodInfo* method);
// 0x4188550

void ApplicationManagers_AccountManager__InvalidateOwnAccountCache(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05704bb4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bb4 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar1 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(undefined1 *)(lVar1 + 0x29) = 0;
  *(undefined1 *)(lVar1 + 0x39) = 0;
  return;
}


// ApplicationManagers.AccountManager$$ClearOwnAccountCache
// il2cpp: void ApplicationManagers_AccountManager__ClearOwnAccountCache (const MethodInfo* method);
// 0x41885a0

void ApplicationManagers_AccountManager__ClearOwnAccountCache(MethodInfo *method)

{
  int32_t length;
  int length_00;
  long lVar1;
  long lVar2;
  
  if (DAT_05704bb5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    DAT_05704bb5 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(undefined2 *)(lVar2 + 0x28) = 0;
  *(undefined1 *)(lVar2 + 0x2a) = 0;
  lVar1 = *(long *)(lVar2 + 0x30);
  if (lVar1 != 0) {
    *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
    length = *(int32_t *)(lVar1 + 0x18);
    *(undefined4 *)(lVar1 + 0x18) = 0;
    if (0 < length) {
      System_Array__Clear(*(System_Array_o **)(lVar1 + 0x10),0,length,(MethodInfo *)0x0);
      lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
    }
    *(undefined2 *)(lVar2 + 0x38) = 0;
    *(undefined1 *)(lVar2 + 0x3a) = 0;
    lVar1 = *(long *)(lVar2 + 0x48);
    if (lVar1 != 0) {
      *(int *)(lVar1 + 0x1c) = *(int *)(lVar1 + 0x1c) + 1;
      length_00 = *(int *)(lVar1 + 0x18);
      *(undefined4 *)(lVar1 + 0x18) = 0;
      if (0 < length_00) {
        System_Array__Clear(*(System_Array_o **)(lVar1 + 0x10),0,length_00,(MethodInfo *)0x0);
        lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
      }
      *(undefined8 *)(lVar2 + 0x40) = 0;
      il2cpp_runtime_glue(lVar2 + 0x40,0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$ClearProfileResponse
// il2cpp: void ApplicationManagers_AccountManager__ClearProfileResponse (const MethodInfo* method);
// 0x4188690

void ApplicationManagers_AccountManager__ClearProfileResponse(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  MethodInfo *method_00;
  
  if (DAT_05704bb6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    DAT_05704bb6 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704c4b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c4b = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(undefined8 *)(lVar2 + 8) = 0;
  il2cpp_runtime_glue(lVar2 + 8,0);
  if (DAT_05704c4c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c4c = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(undefined8 *)(lVar2 + 0x10) = 0;
  il2cpp_runtime_glue(lVar2 + 0x10,0);
  if (DAT_05704c4d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c4d = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(undefined8 *)(lVar2 + 0x18) = 0;
  il2cpp_runtime_glue(lVar2 + 0x18,0);
  if (DAT_05704c4e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c4e = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    method_00 = *(MethodInfo **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x20);
  }
  else {
    method_00 = *(MethodInfo **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x20);
  }
  if (method_00 == (MethodInfo *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_Dictionary<object__object>__Clear
            ((System_Collections_Generic_Dictionary_object__object__o *)method_00,MethodInfo_Void_Clear);
  ApplicationManagers_AccountManager__ClearOwnAccountCache(method_00);
  return;
}


// ApplicationManagers.AccountManager$$ClearOwnPublicProfileCache
// il2cpp: void ApplicationManagers_AccountManager__ClearOwnPublicProfileCache (const MethodInfo* method);
// 0x41888c0

void ApplicationManagers_AccountManager__ClearOwnPublicProfileCache(MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  MethodInfo *pMVar3;
  
  if (DAT_05704bb7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bb7 = '\x01';
  }
  pMVar3 = TypeInfo_AccountManager;
  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = ApplicationManagers_AccountManager__get_UserId(pMVar3);
  bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return;
  }
  pMVar3 = TypeInfo_AccountManager;
  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = ApplicationManagers_AccountManager__get_UserId(pMVar3);
  ApplicationManagers_PublicProfiles_AottgPublicProfileService__ClearProfile
            (pSVar2,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager$$get_AuthToken
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_AuthToken (const MethodInfo* method);
// 0x4188b60

System_String_o * ApplicationManagers_AccountManager__get_AuthToken(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704bb8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bb8 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x68);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x68);
}


// ApplicationManagers.AccountManager$$set_AuthToken
// il2cpp: void ApplicationManagers_AccountManager__set_AuthToken (System_String_o* value, const MethodInfo* method);
// 0x4188bd0

void ApplicationManagers_AccountManager__set_AuthToken(System_String_o *value,MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05704bb9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bb9 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar1 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(System_String_o **)(lVar1 + 0x68) = value;
  il2cpp_runtime_glue(lVar1 + 0x68,value);
  return;
}


// ApplicationManagers.AccountManager$$get_AuthTokenExpiresUnix
// il2cpp: int64_t ApplicationManagers_AccountManager__get_AuthTokenExpiresUnix (const MethodInfo* method);
// 0x4188c30

int64_t ApplicationManagers_AccountManager__get_AuthTokenExpiresUnix(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704bba == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bba = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(int64_t *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x70);
  }
  il2cpp_init_class();
  return *(int64_t *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x70);
}


// ApplicationManagers.AccountManager$$set_AuthTokenExpiresUnix
// il2cpp: void ApplicationManagers_AccountManager__set_AuthTokenExpiresUnix (int64_t value, const MethodInfo* method);
// 0x4188ca0

void ApplicationManagers_AccountManager__set_AuthTokenExpiresUnix(int64_t value,MethodInfo *method)

{
  if (DAT_05704bbb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bbb = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  *(int64_t *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x70) = value;
  return;
}


// ApplicationManagers.AccountManager$$get_PhotonToken
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_PhotonToken (const MethodInfo* method);
// 0x4188d00

System_String_o * ApplicationManagers_AccountManager__get_PhotonToken(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704bbc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bbc = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x78);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x78);
}


// ApplicationManagers.AccountManager$$set_PhotonToken
// il2cpp: void ApplicationManagers_AccountManager__set_PhotonToken (System_String_o* value, const MethodInfo* method);
// 0x4188d70

void ApplicationManagers_AccountManager__set_PhotonToken(System_String_o *value,MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05704bbd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bbd = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar1 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(System_String_o **)(lVar1 + 0x78) = value;
  il2cpp_runtime_glue(lVar1 + 0x78,value);
  return;
}


// ApplicationManagers.AccountManager$$get_PhotonTokenExpiresUnix
// il2cpp: int64_t ApplicationManagers_AccountManager__get_PhotonTokenExpiresUnix (const MethodInfo* method);
// 0x4188dd0

int64_t ApplicationManagers_AccountManager__get_PhotonTokenExpiresUnix(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704bbe == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bbe = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(int64_t *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x80);
  }
  il2cpp_init_class();
  return *(int64_t *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x80);
}


// ApplicationManagers.AccountManager$$set_PhotonTokenExpiresUnix
// il2cpp: void ApplicationManagers_AccountManager__set_PhotonTokenExpiresUnix (int64_t value, const MethodInfo* method);
// 0x4188e40

void ApplicationManagers_AccountManager__set_PhotonTokenExpiresUnix
               (int64_t value,MethodInfo *method)

{
  if (DAT_05704bbf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bbf = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  *(int64_t *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x80) = value;
  return;
}


// ApplicationManagers.AccountManager$$get_LoginResponse
// il2cpp: ApplicationManagers_AccountLoginResponse_o* ApplicationManagers_AccountManager__get_LoginResponse (const MethodInfo* method);
// 0x4188ea0

ApplicationManagers_AccountLoginResponse_o *
ApplicationManagers_AccountManager__get_LoginResponse(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704bc0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bc0 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(ApplicationManagers_AccountLoginResponse_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  il2cpp_init_class();
  return *(ApplicationManagers_AccountLoginResponse_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
}


// ApplicationManagers.AccountManager$$set_LoginResponse
// il2cpp: void ApplicationManagers_AccountManager__set_LoginResponse (ApplicationManagers_AccountLoginResponse_o* value, const MethodInfo* method);
// 0x4188f10

void ApplicationManagers_AccountManager__set_LoginResponse
               (ApplicationManagers_AccountLoginResponse_o *value,MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05704bc1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bc1 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar1 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(ApplicationManagers_AccountLoginResponse_o **)(lVar1 + 0x88) = value;
  il2cpp_runtime_glue(lVar1 + 0x88,value);
  return;
}


// ApplicationManagers.AccountManager$$get_UserId
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_UserId (const MethodInfo* method);
// 0x4188930

System_String_o * ApplicationManagers_AccountManager__get_UserId(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05704bc2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bc2 = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_04188a51;
LAB_04188955:
    if (DAT_0570440e != '\0') goto LAB_04188962;
LAB_04188a63:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_0570440e = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_04188a86;
LAB_04188972:
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_04188955;
LAB_04188a51:
    il2cpp_init_class();
    if (DAT_0570440e == '\0') goto LAB_04188a63;
LAB_04188962:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_04188972;
LAB_04188a86:
    il2cpp_init_class();
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  if (lVar1 == 0) {
    return (System_String_o *)0x0;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_0570440e == '\0') goto LAB_04188ab9;
LAB_041889a1:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_041889b1;
LAB_04188adc:
    il2cpp_init_class();
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  else {
    if (DAT_0570440e != '\0') goto LAB_041889a1;
LAB_04188ab9:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_0570440e = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_04188adc;
LAB_041889b1:
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  if (lVar1 == 0) goto LAB_04188b51;
  if (*(long *)(lVar1 + 0x48) == 0) {
    return (System_String_o *)0x0;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_0570440e == '\0') goto LAB_04188b0f;
LAB_041889ed:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_041889fd;
LAB_04188b32:
    il2cpp_init_class();
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  else {
    if (DAT_0570440e != '\0') goto LAB_041889ed;
LAB_04188b0f:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_0570440e = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_04188b32;
LAB_041889fd:
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x48) != 0) {
      return *(System_String_o **)(*(long *)(lVar1 + 0x48) + 0x10);
    }
  }
LAB_04188b51:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$get_Username
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_Username (const MethodInfo* method);
// 0x4188f80

System_String_o * ApplicationManagers_AccountManager__get_Username(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05704bc3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bc3 = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_041890a1;
LAB_04188fa5:
    if (DAT_0570440e != '\0') goto LAB_04188fb2;
LAB_041890b3:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_0570440e = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_041890d6;
LAB_04188fc2:
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_04188fa5;
LAB_041890a1:
    il2cpp_init_class();
    if (DAT_0570440e == '\0') goto LAB_041890b3;
LAB_04188fb2:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_04188fc2;
LAB_041890d6:
    il2cpp_init_class();
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  if (lVar1 == 0) {
    return (System_String_o *)0x0;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_0570440e == '\0') goto LAB_04189109;
LAB_04188ff1:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_04189001;
LAB_0418912c:
    il2cpp_init_class();
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  else {
    if (DAT_0570440e != '\0') goto LAB_04188ff1;
LAB_04189109:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_0570440e = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_0418912c;
LAB_04189001:
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  if (lVar1 == 0) goto LAB_041891a1;
  if (*(long *)(lVar1 + 0x48) == 0) {
    return (System_String_o *)0x0;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_0570440e == '\0') goto LAB_0418915f;
LAB_0418903d:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_0418904d;
LAB_04189182:
    il2cpp_init_class();
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  else {
    if (DAT_0570440e != '\0') goto LAB_0418903d;
LAB_0418915f:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_0570440e = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_04189182;
LAB_0418904d:
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x48) != 0) {
      return *(System_String_o **)(*(long *)(lVar1 + 0x48) + 0x20);
    }
  }
LAB_041891a1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$get_Email
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_Email (const MethodInfo* method);
// 0x41891b0

System_String_o * ApplicationManagers_AccountManager__get_Email(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05704bc4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bc4 = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_041892d1;
LAB_041891d5:
    if (DAT_0570440e != '\0') goto LAB_041891e2;
LAB_041892e3:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_0570440e = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_04189306;
LAB_041891f2:
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_041891d5;
LAB_041892d1:
    il2cpp_init_class();
    if (DAT_0570440e == '\0') goto LAB_041892e3;
LAB_041891e2:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_041891f2;
LAB_04189306:
    il2cpp_init_class();
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  if (lVar1 == 0) {
    return (System_String_o *)0x0;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_0570440e == '\0') goto LAB_04189339;
LAB_04189221:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_04189231;
LAB_0418935c:
    il2cpp_init_class();
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  else {
    if (DAT_0570440e != '\0') goto LAB_04189221;
LAB_04189339:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_0570440e = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_0418935c;
LAB_04189231:
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  if (lVar1 == 0) goto LAB_041893d1;
  if (*(long *)(lVar1 + 0x48) == 0) {
    return (System_String_o *)0x0;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_0570440e == '\0') goto LAB_0418938f;
LAB_0418926d:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_0418927d;
LAB_041893b2:
    il2cpp_init_class();
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  else {
    if (DAT_0570440e != '\0') goto LAB_0418926d;
LAB_0418938f:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_0570440e = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_041893b2;
LAB_0418927d:
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x48) != 0) {
      return *(System_String_o **)(*(long *)(lVar1 + 0x48) + 0x18);
    }
  }
LAB_041893d1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$get_EmailVerified
// il2cpp: bool ApplicationManagers_AccountManager__get_EmailVerified (const MethodInfo* method);
// 0x41893e0

bool_conflict ApplicationManagers_AccountManager__get_EmailVerified(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05704bc5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bc5 = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_04189504;
LAB_04189405:
    if (DAT_0570440e != '\0') goto LAB_04189412;
LAB_04189516:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_0570440e = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_04189539;
LAB_04189422:
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_04189405;
LAB_04189504:
    il2cpp_init_class();
    if (DAT_0570440e == '\0') goto LAB_04189516;
LAB_04189412:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_04189422;
LAB_04189539:
    il2cpp_init_class();
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  if (lVar1 == 0) {
    return 0;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_0570440e == '\0') goto LAB_0418956c;
LAB_04189451:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_04189461;
LAB_0418958f:
    il2cpp_init_class();
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  else {
    if (DAT_0570440e != '\0') goto LAB_04189451;
LAB_0418956c:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_0570440e = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_0418958f;
LAB_04189461:
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  if (lVar1 == 0) goto LAB_04189604;
  if (*(long *)(lVar1 + 0x48) == 0) {
    return 0;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_0570440e == '\0') goto LAB_041895c2;
LAB_0418949d:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_041894ad;
LAB_041895e5:
    il2cpp_init_class();
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  else {
    if (DAT_0570440e != '\0') goto LAB_0418949d;
LAB_041895c2:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_0570440e = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_041895e5;
LAB_041894ad:
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  if (lVar1 != 0) {
    lVar1 = *(long *)(lVar1 + 0x48);
    if (lVar1 != 0) {
      return (bool_conflict)CONCAT71((int7)((ulong)lVar1 >> 8),*(char *)(lVar1 + 0x30) != '\0');
    }
  }
LAB_04189604:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$get_Roles
// il2cpp: System_String_array* ApplicationManagers_AccountManager__get_Roles (const MethodInfo* method);
// 0x4189610

System_String_array * ApplicationManagers_AccountManager__get_Roles(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05704bc6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bc6 = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_04189731;
LAB_04189635:
    if (DAT_0570440e != '\0') goto LAB_04189642;
LAB_04189743:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_0570440e = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_04189766;
LAB_04189652:
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_04189635;
LAB_04189731:
    il2cpp_init_class();
    if (DAT_0570440e == '\0') goto LAB_04189743;
LAB_04189642:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_04189652;
LAB_04189766:
    il2cpp_init_class();
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  if (lVar1 == 0) {
    return (System_String_array *)0x0;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_0570440e == '\0') goto LAB_04189799;
LAB_04189681:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_04189691;
LAB_041897bc:
    il2cpp_init_class();
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  else {
    if (DAT_0570440e != '\0') goto LAB_04189681;
LAB_04189799:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_0570440e = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_041897bc;
LAB_04189691:
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  if (lVar1 == 0) goto LAB_04189831;
  if (*(long *)(lVar1 + 0x48) == 0) {
    return (System_String_array *)0x0;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_0570440e == '\0') goto LAB_041897ef;
LAB_041896cd:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_041896dd;
LAB_04189812:
    il2cpp_init_class();
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  else {
    if (DAT_0570440e != '\0') goto LAB_041896cd;
LAB_041897ef:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_0570440e = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_04189812;
LAB_041896dd:
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x48) != 0) {
      return *(System_String_array **)(*(long *)(lVar1 + 0x48) + 0x38);
    }
  }
LAB_04189831:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$get_PhotonUserId
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_PhotonUserId (const MethodInfo* method);
// 0x4189840

System_String_o * ApplicationManagers_AccountManager__get_PhotonUserId(MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05704bc7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bc7 = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_04189961;
LAB_04189865:
    if (DAT_0570440e != '\0') goto LAB_04189872;
LAB_04189973:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_0570440e = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_04189996;
LAB_04189882:
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_04189865;
LAB_04189961:
    il2cpp_init_class();
    if (DAT_0570440e == '\0') goto LAB_04189973;
LAB_04189872:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_04189882;
LAB_04189996:
    il2cpp_init_class();
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  if (lVar1 == 0) {
    return (System_String_o *)0x0;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_0570440e == '\0') goto LAB_041899c9;
LAB_041898b1:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_041898c1;
LAB_041899ec:
    il2cpp_init_class();
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  else {
    if (DAT_0570440e != '\0') goto LAB_041898b1;
LAB_041899c9:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_0570440e = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_041899ec;
LAB_041898c1:
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  if (lVar1 == 0) goto LAB_04189a61;
  if (*(long *)(lVar1 + 0x48) == 0) {
    return (System_String_o *)0x0;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_0570440e == '\0') goto LAB_04189a1f;
LAB_041898fd:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_0418990d;
LAB_04189a42:
    il2cpp_init_class();
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  else {
    if (DAT_0570440e != '\0') goto LAB_041898fd;
LAB_04189a1f:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_0570440e = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_04189a42;
LAB_0418990d:
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  if (lVar1 != 0) {
    if (*(long *)(lVar1 + 0x48) != 0) {
      return *(System_String_o **)(*(long *)(lVar1 + 0x48) + 0x28);
    }
  }
LAB_04189a61:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$get_Patreon
// il2cpp: SimpleJSONFixed_JSONNode_o* ApplicationManagers_AccountManager__get_Patreon (const MethodInfo* method);
// 0x4189a70

SimpleJSONFixed_JSONNode_o * ApplicationManagers_AccountManager__get_Patreon(MethodInfo *method)

{
  long lVar1;
  ApplicationManagers_AccountLoginResponse_PatreonData_o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  MethodInfo *in_RSI;
  
  if (DAT_05704bc8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bc8 = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_04189bf7;
LAB_04189a95:
    if (DAT_0570440e != '\0') goto LAB_04189aa2;
LAB_04189c09:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_0570440e = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_04189c2c;
LAB_04189ab2:
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_04189a95;
LAB_04189bf7:
    il2cpp_init_class();
    if (DAT_0570440e == '\0') goto LAB_04189c09;
LAB_04189aa2:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_04189ab2;
LAB_04189c2c:
    il2cpp_init_class();
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  if (lVar1 == 0) {
    return (SimpleJSONFixed_JSONNode_o *)0x0;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_0570440e == '\0') goto LAB_04189c5f;
LAB_04189ae1:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_04189af1;
LAB_04189c82:
    il2cpp_init_class();
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  else {
    if (DAT_0570440e != '\0') goto LAB_04189ae1;
LAB_04189c5f:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_0570440e = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_04189c82;
LAB_04189af1:
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  if (lVar1 == 0) goto LAB_04189d50;
  if (*(long *)(lVar1 + 0x48) == 0) {
    return (SimpleJSONFixed_JSONNode_o *)0x0;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_0570440e == '\0') goto LAB_04189cb8;
LAB_04189b2d:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_04189b3d;
LAB_04189cdb:
    il2cpp_init_class();
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  else {
    if (DAT_0570440e != '\0') goto LAB_04189b2d;
LAB_04189cb8:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_0570440e = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_04189cdb;
LAB_04189b3d:
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  if ((lVar1 == 0) || (*(long *)(lVar1 + 0x48) == 0)) goto LAB_04189d50;
  if (*(long *)(*(long *)(lVar1 + 0x48) + 0x58) == 0) {
    return (SimpleJSONFixed_JSONNode_o *)0x0;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_0570440e == '\0') goto LAB_04189d0e;
LAB_04189b86:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_04189b96;
LAB_04189d31:
    il2cpp_init_class();
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  else {
    if (DAT_0570440e != '\0') goto LAB_04189b86;
LAB_04189d0e:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_0570440e = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_04189d31;
LAB_04189b96:
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  if (((lVar1 != 0) && (*(long *)(lVar1 + 0x48) != 0)) &&
     (__this = *(ApplicationManagers_AccountLoginResponse_PatreonData_o **)
                (*(long *)(lVar1 + 0x48) + 0x58),
     __this != (ApplicationManagers_AccountLoginResponse_PatreonData_o *)0x0)) {
    pSVar2 = ApplicationManagers_AccountLoginResponse_PatreonData__ToJsonNode(__this,in_RSI);
    return pSVar2;
  }
LAB_04189d50:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$IsOAuthProviderLinked
// il2cpp: bool ApplicationManagers_AccountManager__IsOAuthProviderLinked (System_String_o* provider, const MethodInfo* method);
// 0x4189d60

bool_conflict
ApplicationManagers_AccountManager__IsOAuthProviderLinked
          (System_String_o *provider,MethodInfo *method)

{
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *pAVar1;
  
  if (DAT_05704bc9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bc9 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pAVar1 = ApplicationManagers_AccountManager__GetOAuthLink(provider,method);
  return (bool_conflict)
         CONCAT71((int7)((ulong)pAVar1 >> 8),
                  pAVar1 != (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0);
}


// ApplicationManagers.AccountManager$$get_RefreshTokenExpiresUnix
// il2cpp: int64_t ApplicationManagers_AccountManager__get_RefreshTokenExpiresUnix (const MethodInfo* method);
// 0x418a120

int64_t ApplicationManagers_AccountManager__get_RefreshTokenExpiresUnix(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704bca == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bca = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(int64_t *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x90);
  }
  il2cpp_init_class();
  return *(int64_t *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x90);
}


// ApplicationManagers.AccountManager$$set_RefreshTokenExpiresUnix
// il2cpp: void ApplicationManagers_AccountManager__set_RefreshTokenExpiresUnix (int64_t value, const MethodInfo* method);
// 0x418a190

void ApplicationManagers_AccountManager__set_RefreshTokenExpiresUnix
               (int64_t value,MethodInfo *method)

{
  if (DAT_05704bcb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bcb = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  *(int64_t *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x90) = value;
  return;
}


// ApplicationManagers.AccountManager$$get_IsLoggedIn
// il2cpp: bool ApplicationManagers_AccountManager__get_IsLoggedIn (const MethodInfo* method);
// 0x41863d0

bool_conflict ApplicationManagers_AccountManager__get_IsLoggedIn(MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  
  if (DAT_05704bcc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bcc = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704c4f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c4f = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  uVar2 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x68),(MethodInfo *)0x0)
  ;
  return uVar2 ^ 1;
}


// ApplicationManagers.AccountManager$$get_HasRefreshToken
// il2cpp: bool ApplicationManagers_AccountManager__get_HasRefreshToken (const MethodInfo* method);
// 0x418a1f0

bool_conflict ApplicationManagers_AccountManager__get_HasRefreshToken(MethodInfo *method)

{
  uint uVar1;
  
  if (DAT_05704bcd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bcd = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  uVar1 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xb0),(MethodInfo *)0x0)
  ;
  return uVar1 ^ 1;
}


// ApplicationManagers.AccountManager$$get_IsRefreshInProgress
// il2cpp: bool ApplicationManagers_AccountManager__get_IsRefreshInProgress (const MethodInfo* method);
// 0x418a250

bool_conflict ApplicationManagers_AccountManager__get_IsRefreshInProgress(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704bce == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bce = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)*(long *)(TypeInfo_AccountManager + 0xb8) >> 8),
                    *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x98));
  }
  il2cpp_init_class();
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(long *)(TypeInfo_AccountManager + 0xb8) >> 8),
                  *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x98));
}


// ApplicationManagers.AccountManager$$set_IsRefreshInProgress
// il2cpp: void ApplicationManagers_AccountManager__set_IsRefreshInProgress (bool value, const MethodInfo* method);
// 0x418a2c0

void ApplicationManagers_AccountManager__set_IsRefreshInProgress
               (bool_conflict value,MethodInfo *method)

{
  if (DAT_05704bcf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bcf = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  *(char *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x98) = (char)value;
  return;
}


// ApplicationManagers.AccountManager$$get_KeepSignedIn
// il2cpp: bool ApplicationManagers_AccountManager__get_KeepSignedIn (const MethodInfo* method);
// 0x418a320

bool_conflict ApplicationManagers_AccountManager__get_KeepSignedIn(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704bd0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bd0 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)*(long *)(TypeInfo_AccountManager + 0xb8) >> 8),
                    *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x99));
  }
  il2cpp_init_class();
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(long *)(TypeInfo_AccountManager + 0xb8) >> 8),
                  *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x99));
}


// ApplicationManagers.AccountManager$$set_KeepSignedIn
// il2cpp: void ApplicationManagers_AccountManager__set_KeepSignedIn (bool value, const MethodInfo* method);
// 0x418a390

void ApplicationManagers_AccountManager__set_KeepSignedIn(bool_conflict value,MethodInfo *method)

{
  if (DAT_05704bd1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bd1 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  *(char *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x99) = (char)value;
  return;
}


// ApplicationManagers.AccountManager$$get_HasAuthMethodsSnapshot
// il2cpp: bool ApplicationManagers_AccountManager__get_HasAuthMethodsSnapshot (const MethodInfo* method);
// 0x418a3f0

bool_conflict ApplicationManagers_AccountManager__get_HasAuthMethodsSnapshot(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704bd2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bd2 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return (bool_conflict)
           CONCAT71((int7)((ulong)*(long *)(TypeInfo_AccountManager + 0xb8) >> 8),
                    *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x9a));
  }
  il2cpp_init_class();
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(long *)(TypeInfo_AccountManager + 0xb8) >> 8),
                  *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x9a));
}


// ApplicationManagers.AccountManager$$set_HasAuthMethodsSnapshot
// il2cpp: void ApplicationManagers_AccountManager__set_HasAuthMethodsSnapshot (bool value, const MethodInfo* method);
// 0x418a460

void ApplicationManagers_AccountManager__set_HasAuthMethodsSnapshot
               (bool_conflict value,MethodInfo *method)

{
  if (DAT_05704bd3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bd3 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  *(char *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x9a) = (char)value;
  return;
}


// ApplicationManagers.AccountManager$$get_DevMode
// il2cpp: bool ApplicationManagers_AccountManager__get_DevMode (const MethodInfo* method);
// 0x418a4c0

bool_conflict ApplicationManagers_AccountManager__get_DevMode(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704bd4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_ApplicationConfig);
    DAT_05704bd4 = '\x01';
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
  il2cpp_init_class();
  return (bool_conflict)
         CONCAT71((int7)((ulong)*(long *)(TypeInfo_ApplicationConfig + 0xb8) >> 8),
                  *(undefined1 *)(*(long *)(TypeInfo_ApplicationConfig + 0xb8) + 8));
}


// ApplicationManagers.AccountManager$$get_PendingVerifyToken
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_PendingVerifyToken (const MethodInfo* method);
// 0x418a530

System_String_o * ApplicationManagers_AccountManager__get_PendingVerifyToken(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704bd5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bd5 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xa0);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xa0);
}


// ApplicationManagers.AccountManager$$set_PendingVerifyToken
// il2cpp: void ApplicationManagers_AccountManager__set_PendingVerifyToken (System_String_o* value, const MethodInfo* method);
// 0x418a5a0

void ApplicationManagers_AccountManager__set_PendingVerifyToken
               (System_String_o *value,MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05704bd6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bd6 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar1 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(System_String_o **)(lVar1 + 0xa0) = value;
  il2cpp_runtime_glue(lVar1 + 0xa0,value);
  return;
}


// ApplicationManagers.AccountManager$$get_PendingEmail
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_PendingEmail (const MethodInfo* method);
// 0x418a610

System_String_o * ApplicationManagers_AccountManager__get_PendingEmail(MethodInfo *method)

{
  int iVar1;
  
  if (DAT_05704bd7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bd7 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 != 0) {
    return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xa8);
  }
  il2cpp_init_class();
  return *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xa8);
}


// ApplicationManagers.AccountManager$$set_PendingEmail
// il2cpp: void ApplicationManagers_AccountManager__set_PendingEmail (System_String_o* value, const MethodInfo* method);
// 0x418a680

void ApplicationManagers_AccountManager__set_PendingEmail(System_String_o *value,MethodInfo *method)

{
  long lVar1;
  
  if (DAT_05704bd8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bd8 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  lVar1 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(System_String_o **)(lVar1 + 0xa8) = value;
  il2cpp_runtime_glue(lVar1 + 0xa8,value);
  return;
}


// ApplicationManagers.AccountManager$$add_OnLoggedIn
// il2cpp: void ApplicationManagers_AccountManager__add_OnLoggedIn (System_Action_o* value, const MethodInfo* method);
// 0x418a6f0

void ApplicationManagers_AccountManager__add_OnLoggedIn(System_Action_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Delegate_o *a;
  bool bVar2;
  
  if (DAT_05704bd9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action);
    DAT_05704bd9 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  a = *(System_Delegate_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xc0);
  do {
    pSVar1 = System_Delegate__Combine(a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((pSVar1 != (System_Delegate_o *)0x0) && (pSVar1->klass != TypeInfo_Action)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pSVar1);
    }
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = (System_Delegate_o *)il2cpp_glue_022c2530(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xc0,pSVar1,a);
    bVar2 = a != pSVar1;
    a = pSVar1;
  } while (bVar2);
  return;
}


// ApplicationManagers.AccountManager$$remove_OnLoggedIn
// il2cpp: void ApplicationManagers_AccountManager__remove_OnLoggedIn (System_Action_o* value, const MethodInfo* method);
// 0x418a7e0

void ApplicationManagers_AccountManager__remove_OnLoggedIn
               (System_Action_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Delegate_o *source;
  bool bVar2;
  
  if (DAT_05704bda == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action);
    DAT_05704bda = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  source = *(System_Delegate_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xc0);
  do {
    pSVar1 = System_Delegate__Remove(source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((pSVar1 != (System_Delegate_o *)0x0) && (pSVar1->klass != TypeInfo_Action)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pSVar1);
    }
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = (System_Delegate_o *)il2cpp_glue_022c2530(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xc0,pSVar1,source);
    bVar2 = source != pSVar1;
    source = pSVar1;
  } while (bVar2);
  return;
}


// ApplicationManagers.AccountManager$$add_OnLoggedOut
// il2cpp: void ApplicationManagers_AccountManager__add_OnLoggedOut (System_Action_o* value, const MethodInfo* method);
// 0x418a8d0

void ApplicationManagers_AccountManager__add_OnLoggedOut(System_Action_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Delegate_o *a;
  bool bVar2;
  
  if (DAT_05704bdb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action);
    DAT_05704bdb = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  a = *(System_Delegate_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 200);
  do {
    pSVar1 = System_Delegate__Combine(a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((pSVar1 != (System_Delegate_o *)0x0) && (pSVar1->klass != TypeInfo_Action)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pSVar1);
    }
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = (System_Delegate_o *)il2cpp_glue_022c2530(*(long *)(TypeInfo_AccountManager + 0xb8) + 200,pSVar1,a);
    bVar2 = a != pSVar1;
    a = pSVar1;
  } while (bVar2);
  return;
}


// ApplicationManagers.AccountManager$$remove_OnLoggedOut
// il2cpp: void ApplicationManagers_AccountManager__remove_OnLoggedOut (System_Action_o* value, const MethodInfo* method);
// 0x418a9c0

void ApplicationManagers_AccountManager__remove_OnLoggedOut
               (System_Action_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Delegate_o *source;
  bool bVar2;
  
  if (DAT_05704bdc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action);
    DAT_05704bdc = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  source = *(System_Delegate_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 200);
  do {
    pSVar1 = System_Delegate__Remove(source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((pSVar1 != (System_Delegate_o *)0x0) && (pSVar1->klass != TypeInfo_Action)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pSVar1);
    }
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = (System_Delegate_o *)il2cpp_glue_022c2530(*(long *)(TypeInfo_AccountManager + 0xb8) + 200,pSVar1,source);
    bVar2 = source != pSVar1;
    source = pSVar1;
  } while (bVar2);
  return;
}


// ApplicationManagers.AccountManager$$add_OnAuthMethodsChanged
// il2cpp: void ApplicationManagers_AccountManager__add_OnAuthMethodsChanged (System_Action_o* value, const MethodInfo* method);
// 0x418aab0

void ApplicationManagers_AccountManager__add_OnAuthMethodsChanged
               (System_Action_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Delegate_o *a;
  bool bVar2;
  
  if (DAT_05704bdd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action);
    DAT_05704bdd = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  a = *(System_Delegate_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xd0);
  do {
    pSVar1 = System_Delegate__Combine(a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((pSVar1 != (System_Delegate_o *)0x0) && (pSVar1->klass != TypeInfo_Action)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pSVar1);
    }
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = (System_Delegate_o *)il2cpp_glue_022c2530(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xd0,pSVar1,a);
    bVar2 = a != pSVar1;
    a = pSVar1;
  } while (bVar2);
  return;
}


// ApplicationManagers.AccountManager$$remove_OnAuthMethodsChanged
// il2cpp: void ApplicationManagers_AccountManager__remove_OnAuthMethodsChanged (System_Action_o* value, const MethodInfo* method);
// 0x418aba0

void ApplicationManagers_AccountManager__remove_OnAuthMethodsChanged
               (System_Action_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Delegate_o *source;
  bool bVar2;
  
  if (DAT_05704bde == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action);
    DAT_05704bde = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  source = *(System_Delegate_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xd0);
  do {
    pSVar1 = System_Delegate__Remove(source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((pSVar1 != (System_Delegate_o *)0x0) && (pSVar1->klass != TypeInfo_Action)) {
                    /* WARNING: Subroutine does not return */
      il2cpp_unwind_resume(pSVar1);
    }
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = (System_Delegate_o *)il2cpp_glue_022c2530(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xd0,pSVar1,source);
    bVar2 = source != pSVar1;
    source = pSVar1;
  } while (bVar2);
  return;
}


// ApplicationManagers.AccountManager$$Init
// il2cpp: void ApplicationManagers_AccountManager__Init (const MethodInfo* method);
// 0x418ac90

void ApplicationManagers_AccountManager__Init(MethodInfo *method)

{
  int iVar1;
  Il2CppMethodPointer pIVar2;
  bool_conflict bVar3;
  Il2CppObject *pIVar4;
  System_String_o *path;
  Events_OnPreLoadScene_o *value;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *pMVar5;
  
  if (DAT_05704bdf == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_OnPreLoadScene);
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_OnPreLoadScene);
    il2cpp_init_method_metadata(&MethodInfo_AccountManager_CreateSingleton_AccountManager);
    DAT_05704bdf = '\x01';
  }
  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  pIVar4 = Utility_SingletonFactory__CreateSingleton<object>
                     (*(Il2CppObject **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x50),MethodInfo_AccountManager_CreateSingleton_AccountManager);
  pIVar2 = TypeInfo_AccountManager[2].virtualMethodPointer;
  *(Il2CppObject **)(pIVar2 + 0x50) = pIVar4;
  il2cpp_runtime_glue(pIVar2 + 0x50);
  if (TypeInfo_AccountManager[2].virtualMethodPointer[0x58] == (Il2CppMethodPointer)0x0) {
    value = (Events_OnPreLoadScene_o *)il2cpp_runtime_glue(TypeInfo_OnPreLoadScene);
    Events_OnPreLoadScene___ctor();
    Events_EventManager__add_OnPreLoadScene(value,(MethodInfo *)0x0);
    pMVar5 = TypeInfo_AccountManager;
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
      il2cpp_init_class();
      pMVar5 = TypeInfo_AccountManager;
      TypeInfo_AccountManager[2].virtualMethodPointer[0x58] = (code)0x1;
      iVar1 = *(int *)((long)&pMVar5[2].parameters + 4);
    }
    else {
      TypeInfo_AccountManager[2].virtualMethodPointer[0x58] = (code)0x1;
      iVar1 = *(int *)((long)&pMVar5[2].parameters + 4);
    }
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704bfc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_FolderPaths);
    il2cpp_init_method_metadata(&"/AccountRefresh.dat");
    DAT_05704bfc = '\x01';
    iVar1 = *(int *)(TypeInfo_FolderPaths + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_FolderPaths + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  path = System_String__Concat
                   (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x30),"/AccountRefresh.dat",
                    (MethodInfo *)0x0);
  bVar3 = System_IO_File__Exists(path,(MethodInfo *)0x0);
  if (DAT_05704c50 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c50 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  pMVar5 = TypeInfo_AccountManager;
  TypeInfo_AccountManager[2].virtualMethodPointer[0x99] = SUB41(bVar3,0);
  ApplicationManagers_AccountManager__LoadRefreshToken(pMVar5);
  pMVar5 = (MethodInfo *)0x0;
  bVar3 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0xb0),
                     (MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    method_00 = extraout_RDX;
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
      il2cpp_init_class();
      method_00 = extraout_RDX_00;
    }
    pMVar5 = (MethodInfo *)0x1;
    ApplicationManagers_AccountManager__Refresh((System_Action_bool__string__o *)0x0,1,method_00);
  }
  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  ApplicationManagers_AccountManager__RefreshAuthMethods
            ((System_Action_bool__string__o *)0x0,pMVar5);
  return;
}


// ApplicationManagers.AccountManager$$SetKeepSignedIn
// il2cpp: void ApplicationManagers_AccountManager__SetKeepSignedIn (bool value, const MethodInfo* method);
// 0x418b6e0

void ApplicationManagers_AccountManager__SetKeepSignedIn(bool_conflict value,MethodInfo *method)

{
  int iVar1;
  code cVar2;
  bool_conflict bVar3;
  MethodInfo *pMVar4;
  
  cVar2 = SUB41(value,0);
  if (DAT_05704be0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704be0 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704c50 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c50 = '\x01';
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
    pMVar4 = TypeInfo_AccountManager;
  }
  else {
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
    pMVar4 = TypeInfo_AccountManager;
  }
  TypeInfo_AccountManager = pMVar4;
  if (iVar1 == 0) {
    il2cpp_init_class();
    pMVar4 = TypeInfo_AccountManager;
    iVar1 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
    TypeInfo_AccountManager[2].virtualMethodPointer[0x99] = cVar2;
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
  }
  else {
    pMVar4[2].virtualMethodPointer[0x99] = cVar2;
  }
  if (cVar2 == (code)0x0) {
    ApplicationManagers_AccountManager__DeleteRefreshToken(pMVar4);
    return;
  }
  bVar3 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(TypeInfo_AccountManager[2].virtualMethodPointer + 0xb0),
                     (MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
    pMVar4 = TypeInfo_AccountManager;
    il2cpp_init_class();
    ApplicationManagers_AccountManager__SaveRefreshToken(pMVar4);
    return;
  }
  ApplicationManagers_AccountManager__SaveRefreshToken(TypeInfo_AccountManager);
  return;
}


// ApplicationManagers.AccountManager$$IsAuthMethodEnabled
// il2cpp: bool ApplicationManagers_AccountManager__IsAuthMethodEnabled (System_String_o* key, const MethodInfo* method);
// 0x418bba0

bool_conflict
ApplicationManagers_AccountManager__IsAuthMethodEnabled(System_String_o *key,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  bool_conflict bVar1;
  
  if (DAT_05704be1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    DAT_05704be1 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return 0;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xb8)
  ;
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar1 = System_Collections_Generic_HashSet<object>__Contains
                      (__this,(Il2CppObject *)key,MethodInfo_Boolean_Contains);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$GetOAuthLink
// il2cpp: ApplicationManagers_AccountLoginResponse_OAuthLinkData_o* ApplicationManagers_AccountManager__GetOAuthLink (System_String_o* provider, const MethodInfo* method);
// 0x4189db0

ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *
ApplicationManagers_AccountManager__GetOAuthLink(System_String_o *provider,MethodInfo *method)

{
  long lVar1;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *pAVar2;
  bool_conflict bVar3;
  ulong uVar4;
  
  if (DAT_05704be2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704be2 = '\x01';
  }
  bVar3 = System_String__IsNullOrEmpty(provider,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_0570440e != '\0') goto LAB_04189e10;
LAB_04189fb5:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_0570440e = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_04189e20;
LAB_04189fd8:
    il2cpp_init_class();
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  else {
    if (DAT_0570440e == '\0') goto LAB_04189fb5;
LAB_04189e10:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_04189fd8;
LAB_04189e20:
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  if (lVar1 == 0) {
    return (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_0570440e != '\0') goto LAB_04189e4f;
LAB_0418a019:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_0570440e = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_04189e5f;
LAB_0418a03c:
    il2cpp_init_class();
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  else {
    if (DAT_0570440e == '\0') goto LAB_0418a019;
LAB_04189e4f:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_0418a03c;
LAB_04189e5f:
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  if (lVar1 == 0) goto LAB_0418a10a;
  if (*(long *)(lVar1 + 0x48) == 0) {
    return (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_0570440e != '\0') goto LAB_04189e9b;
LAB_0418a072:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_0570440e = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_04189eab;
LAB_0418a095:
    il2cpp_init_class();
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  else {
    if (DAT_0570440e == '\0') goto LAB_0418a072;
LAB_04189e9b:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_0418a095;
LAB_04189eab:
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  if ((lVar1 == 0) || (*(long *)(lVar1 + 0x48) == 0)) goto LAB_0418a10a;
  if (*(long *)(*(long *)(lVar1 + 0x48) + 0x60) == 0) {
    return (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_0570440e != '\0') goto LAB_04189ef4;
LAB_0418a0c8:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_0570440e = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_04189f04;
LAB_0418a0eb:
    il2cpp_init_class();
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  else {
    if (DAT_0570440e == '\0') goto LAB_0418a0c8;
LAB_04189ef4:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_0418a0eb;
LAB_04189f04:
    lVar1 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x88);
  }
  if (((lVar1 != 0) && (*(long *)(lVar1 + 0x48) != 0)) &&
     (lVar1 = *(long *)(*(long *)(lVar1 + 0x48) + 0x60), lVar1 != 0)) {
    if ((int)*(ulong *)(lVar1 + 0x18) < 1) {
      return (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0;
    }
    uVar4 = 0;
    if ((*(ulong *)(lVar1 + 0x18) & 0xffffffff) != 0) {
      do {
        pAVar2 = *(ApplicationManagers_AccountLoginResponse_OAuthLinkData_o **)
                  (lVar1 + 0x20 + uVar4 * 8);
        if ((pAVar2 != (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0) &&
           (bVar3 = System_String__Equals((pAVar2->fields).Provider,provider,5,(MethodInfo *)0x0),
           (char)bVar3 != '\0')) {
          return pAVar2;
        }
        uVar4 = uVar4 + 1;
        if ((long)(int)*(uint *)(lVar1 + 0x18) <= (long)uVar4) {
          return (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0;
        }
      } while (uVar4 < *(uint *)(lVar1 + 0x18));
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_0418a10a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$RefreshAuthMethods
// il2cpp: void ApplicationManagers_AccountManager__RefreshAuthMethods (System_Action_bool__string__o* onComplete, const MethodInfo* method);
// 0x418b580

void ApplicationManagers_AccountManager__RefreshAuthMethods
               (System_Action_bool__string__o *onComplete,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  Il2CppClass *__this;
  bool_conflict bVar1;
  Il2CppObject *__this_00;
  
  if (DAT_05704be3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&"not_initialized");
    DAT_05704be3 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  x = *(UnityEngine_Object_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x50);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (onComplete != (System_Action_bool__string__o *)0x0) {
      (*(code *)(onComplete->fields).invoke_impl)
                ((onComplete->fields).method_code,0,"not_initialized",(onComplete->fields).method);
      return;
    }
    return;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  __this = *(Il2CppClass **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x50);
  if (__this != (Il2CppClass *)0x0) {
    if (DAT_05704bee == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_GetAuthMethods_d__164);
      DAT_05704bee = '\x01';
    }
    __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_GetAuthMethods_d__164);
    System_Object___ctor(__this_00,(MethodInfo *)0x0);
    *(undefined4 *)&__this_00[1].klass = 0;
    if (__this_00 != (Il2CppObject *)0x0) {
      __this_00[2].klass = __this;
      il2cpp_runtime_glue(__this_00 + 2,__this);
      __this_00[3].klass = (Il2CppClass *)onComplete;
      il2cpp_runtime_glue(__this_00 + 3,onComplete);
      UnityEngine_MonoBehaviour__StartCoroutine
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00
                 ,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$Register
// il2cpp: void ApplicationManagers_AccountManager__Register (System_String_o* displayName, System_String_o* email, System_String_o* password, System_Action_bool__string__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x418bcc0

void ApplicationManagers_AccountManager__Register
               (System_String_o *displayName,System_String_o *email,System_String_o *password,
               System_Action_bool__string__o *onComplete,bool_conflict reportNetworkError,
               MethodInfo *method)

{
  int iVar1;
  long lVar2;
  ApplicationManagers_AccountManager_o *__this;
  System_String_o *path;
  System_String_o *captureField;
  Il2CppObject *__this_00;
  SimpleJSONFixed_JSONObject_o *__this_01;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  System_String_o *json;
  System_Action_bool__string__o *onComplete_00;
  System_Action_string__o *captureTarget;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *method_00;
  
  if (DAT_05704be4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action_string);
    il2cpp_init_method_metadata(&TypeInfo_Action_bool__string);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONObject);
    il2cpp_init_method_metadata(&MethodInfo_Void__Register_b__154_1);
    il2cpp_init_method_metadata(&MethodInfo_Void__Register_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass154_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"verificationToken");
    il2cpp_init_method_metadata(&"email");
    il2cpp_init_method_metadata(&"displayName");
    il2cpp_init_method_metadata(&"/v1/auth/register");
    il2cpp_init_method_metadata(&"password");
    DAT_05704be4 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass154_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Il2CppObject *)0x0) goto LAB_0418c0f6;
  __this_00[1].klass = (Il2CppClass *)onComplete;
  il2cpp_runtime_glue(__this_00 + 1,onComplete);
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05704c51 == '\0') goto LAB_0418bf9d;
LAB_0418bdf7:
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (DAT_05704c51 != '\0') goto LAB_0418bdf7;
LAB_0418bf9d:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c51 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(undefined8 *)(lVar2 + 0xa0) = 0;
  il2cpp_runtime_glue(lVar2 + 0xa0,0);
  if (DAT_05704c52 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c52 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(System_String_o **)(lVar2 + 0xa8) = email;
  il2cpp_runtime_glue(lVar2 + 0xa8);
  __this_01 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_01,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(displayName,(MethodInfo *)0x0);
  if (__this_01 != (SimpleJSONFixed_JSONObject_o *)0x0) {
    (*(__this_01->klass->vtable)._8_set_Item.methodPtr)
              (__this_01,"displayName",pSVar3,(__this_01->klass->vtable)._8_set_Item.method);
    pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(email,(MethodInfo *)0x0);
    (*(__this_01->klass->vtable)._8_set_Item.methodPtr)
              (__this_01,"email",pSVar3,(__this_01->klass->vtable)._8_set_Item.method);
    pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(password,(MethodInfo *)0x0);
    (*(__this_01->klass->vtable)._8_set_Item.methodPtr)
              (__this_01,"password",pSVar3,(__this_01->klass->vtable)._8_set_Item.method);
    __this = *(ApplicationManagers_AccountManager_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x50);
    json = (System_String_o *)
           (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                     (__this_01,(__this_01->klass->vtable)._3_ToString.method);
    onComplete_00 = (System_Action_bool__string__o *)il2cpp_runtime_glue(TypeInfo_Action_bool__string);
    method_00 = (MethodInfo *)0x418bf70;
    System_Action<bool__object>___ctor();
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      method_00 = (MethodInfo *)0x418c007;
      il2cpp_init_class();
    }
    captureField = "verificationToken";
    path = "/v1/auth/register";
    captureTarget = *(System_Action_string__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    if (captureTarget == (System_Action_string__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      captureTarget = (System_Action_string__o *)il2cpp_runtime_glue(TypeInfo_Action_string);
      System_Action<object>___ctor();
      lVar2 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_string__o **)(lVar2 + 8) = captureTarget;
      method_00 = (MethodInfo *)0x418c09e;
      il2cpp_runtime_glue(lVar2 + 8,captureTarget);
    }
    if (__this != (ApplicationManagers_AccountManager_o *)0x0) {
      routine = ApplicationManagers_AccountManager__PostJson
                          (__this,path,json,(System_String_o *)0x0,onComplete_00,0,captureField,
                           captureTarget,reportNetworkError & 0xff,method_00);
      UnityEngine_MonoBehaviour__StartCoroutine
                ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
      return;
    }
  }
LAB_0418c0f6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$Login
// il2cpp: void ApplicationManagers_AccountManager__Login (System_String_o* email, System_String_o* password, System_Action_bool__string__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x418c220

void ApplicationManagers_AccountManager__Login
               (System_String_o *email,System_String_o *password,
               System_Action_bool__string__o *onComplete,bool_conflict reportNetworkError,
               MethodInfo *method)

{
  ApplicationManagers_AccountManager_o *__this;
  SimpleJSONFixed_JSONObject_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar1;
  System_String_o *json;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (DAT_05704be5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONObject);
    il2cpp_init_method_metadata(&"email");
    il2cpp_init_method_metadata(&"/v1/auth/login");
    il2cpp_init_method_metadata(&"password");
    DAT_05704be5 = '\x01';
  }
  __this_00 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = SimpleJSONFixed_JSONNode__op_Implicit(email,(MethodInfo *)0x0);
  if (__this_00 != (SimpleJSONFixed_JSONObject_o *)0x0) {
    (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
              (__this_00,"email",pSVar1,(__this_00->klass->vtable)._8_set_Item.method);
    pSVar1 = SimpleJSONFixed_JSONNode__op_Implicit(password,(MethodInfo *)0x0);
    (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
              (__this_00,"password",pSVar1,(__this_00->klass->vtable)._8_set_Item.method);
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this = *(ApplicationManagers_AccountManager_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x50);
    json = (System_String_o *)
           (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                     (__this_00,(__this_00->klass->vtable)._3_ToString.method);
    if (__this != (ApplicationManagers_AccountManager_o *)0x0) {
      routine = ApplicationManagers_AccountManager__PostJson
                          (__this,"/v1/auth/login",json,(System_String_o *)0x0,onComplete,1,
                           (System_String_o *)0x0,(System_Action_string__o *)0x0,
                           reportNetworkError & 0xff,in_stack_ffffffffffffffd0);
      UnityEngine_MonoBehaviour__StartCoroutine
                ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$Refresh
// il2cpp: void ApplicationManagers_AccountManager__Refresh (System_Action_bool__string__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x418b230

void ApplicationManagers_AccountManager__Refresh
               (System_Action_bool__string__o *onComplete,bool_conflict reportNetworkError,
               MethodInfo *method)

{
  int iVar1;
  Il2CppClass *pIVar2;
  code *vtable_dispatch;
  long lVar3;
  ApplicationManagers_AccountManager_o *__this;
  bool_conflict bVar4;
  Il2CppObject *__this_00;
  SimpleJSONFixed_JSONObject_o *__this_01;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_String_o *pSVar6;
  System_Action_bool__string__o *onComplete_00;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (DAT_05704be6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action_bool__string);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONObject);
    il2cpp_init_method_metadata(&MethodInfo_Void__Refresh_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass156_0);
    il2cpp_init_method_metadata(&"refreshToken");
    il2cpp_init_method_metadata(&"/v1/auth/refresh");
    il2cpp_init_method_metadata(&"no_refresh_token");
    DAT_05704be6 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass156_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)onComplete;
    il2cpp_runtime_glue(__this_00 + 1);
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar4 = System_String__IsNullOrEmpty
                      (*(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xb0),
                       (MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      if (DAT_05704c53 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_AccountManager);
        DAT_05704c53 = '\x01';
        iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
      }
      *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x98) = 0;
      pIVar2 = __this_00[1].klass;
      if (pIVar2 == (Il2CppClass *)0x0) {
        return;
      }
      vtable_dispatch = (code *)(pIVar2->_1).namespaze;
      (*vtable_dispatch)
                ((pIVar2->_1).element_class,0,"no_refresh_token",
                 *(undefined8 *)&(pIVar2->_1).byval_arg.bits,vtable_dispatch);
      return;
    }
    __this_01 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONObject);
    SimpleJSONFixed_JSONObject___ctor(__this_01,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar6 = *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xb0);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar5 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
    if (__this_01 != (SimpleJSONFixed_JSONObject_o *)0x0) {
      (*(__this_01->klass->vtable)._8_set_Item.methodPtr)(__this_01,"refreshToken",pSVar5);
      if (DAT_05704c53 == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_AccountManager);
        DAT_05704c53 = '\x01';
        iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
      }
      else {
        iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
      }
      if (iVar1 == 0) {
        il2cpp_init_class();
      }
      lVar3 = *(long *)(TypeInfo_AccountManager + 0xb8);
      *(undefined1 *)(lVar3 + 0x98) = 1;
      __this = *(ApplicationManagers_AccountManager_o **)(lVar3 + 0x50);
      pSVar6 = (System_String_o *)
               (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                         (__this_01,(__this_01->klass->vtable)._3_ToString.method);
      onComplete_00 = (System_Action_bool__string__o *)il2cpp_runtime_glue(TypeInfo_Action_bool__string);
      System_Action<bool__object>___ctor();
      if (__this != (ApplicationManagers_AccountManager_o *)0x0) {
        routine = ApplicationManagers_AccountManager__PostJson
                            (__this,"/v1/auth/refresh",pSVar6,(System_String_o *)0x0,onComplete_00,1,
                             (System_String_o *)0x0,(System_Action_string__o *)0x0,
                             reportNetworkError & 0xff,in_stack_ffffffffffffffd0);
        UnityEngine_MonoBehaviour__StartCoroutine
                  ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$Logout
// il2cpp: void ApplicationManagers_AccountManager__Logout (System_Action_bool__string__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x418c3c0

void ApplicationManagers_AccountManager__Logout
               (System_Action_bool__string__o *onComplete,bool_conflict reportNetworkError,
               MethodInfo *method)

{
  ApplicationManagers_AccountManager_o *__this;
  bool_conflict bVar1;
  SimpleJSONFixed_JSONObject_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_String_o *pSVar3;
  System_Collections_IEnumerator_o *routine;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,reportNetworkError);
  if (DAT_05704be7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONObject);
    il2cpp_init_method_metadata(&"refreshToken");
    il2cpp_init_method_metadata(&"/v1/auth/logout");
    DAT_05704be7 = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xb0);
  ApplicationManagers_AccountManager__ClearSession(1,method_00);
  bVar1 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (onComplete != (System_Action_bool__string__o *)0x0) {
      (*(code *)(onComplete->fields).invoke_impl)
                ((onComplete->fields).method_code,1,0,(onComplete->fields).method);
      return;
    }
    return;
  }
  __this_00 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar3,(MethodInfo *)0x0);
  if (__this_00 != (SimpleJSONFixed_JSONObject_o *)0x0) {
    (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
              (__this_00,"refreshToken",pSVar2,(__this_00->klass->vtable)._8_set_Item.method);
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this = *(ApplicationManagers_AccountManager_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x50);
    pSVar3 = (System_String_o *)
             (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                       (__this_00,(__this_00->klass->vtable)._3_ToString.method);
    if (__this != (ApplicationManagers_AccountManager_o *)0x0) {
      routine = ApplicationManagers_AccountManager__PostJson
                          (__this,"/v1/auth/logout",pSVar3,(System_String_o *)0x0,onComplete,0,
                           (System_String_o *)0x0,(System_Action_string__o *)0x0,
                           reportNetworkError & 0xff,in_stack_ffffffffffffffd0);
      UnityEngine_MonoBehaviour__StartCoroutine
                ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$GoOffline
// il2cpp: void ApplicationManagers_AccountManager__GoOffline (const MethodInfo* method);
// 0x418cb40

void ApplicationManagers_AccountManager__GoOffline(MethodInfo *method)

{
  int iVar1;
  uint uVar2;
  MethodInfo *method_00;
  
  if (DAT_05704be8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704be8 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704bcd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bcd = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  uVar2 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xb0),(MethodInfo *)0x0)
  ;
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  ApplicationManagers_AccountManager__ClearSession(uVar2 & 0xff,method_00);
  return;
}


// ApplicationManagers.AccountManager$$GoOnline
// il2cpp: void ApplicationManagers_AccountManager__GoOnline (System_Action_bool__string__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x418cc20

void ApplicationManagers_AccountManager__GoOnline
               (System_Action_bool__string__o *onComplete,bool_conflict reportNetworkError,
               MethodInfo *method)

{
  int iVar1;
  bool_conflict bVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (DAT_05704be9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704be9 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704bcc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bcc = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704c4f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c4f = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar2 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x68),(MethodInfo *)0x0)
  ;
  if ((char)bVar2 != '\0') {
    method_00 = extraout_RDX;
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
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
// 0x418cd90

System_String_o * ApplicationManagers_AccountManager__GetWebLoginUrlWithSession(MethodInfo *method)

{
  int iVar1;
  System_String_o *pSVar2;
  
  if (DAT_05704bea == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&"/login");
    DAT_05704bea = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    pSVar2 = *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x60);
  }
  else {
    pSVar2 = *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x60);
  }
  if (pSVar2 != (System_String_o *)0x0) {
    pSVar2 = System_String__TrimEnd(pSVar2,0x2f,(MethodInfo *)0x0);
    pSVar2 = System_String__Concat(pSVar2,"/login",(MethodInfo *)0x0);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$VerifyEmail
// il2cpp: void ApplicationManagers_AccountManager__VerifyEmail (System_String_o* token, System_Action_bool__string__o* onComplete, const MethodInfo* method);
// 0x418ce30

void ApplicationManagers_AccountManager__VerifyEmail
               (System_String_o *token,System_Action_bool__string__o *onComplete,MethodInfo *method)

{
  ApplicationManagers_AccountManager_o *__this;
  Il2CppObject *__this_00;
  SimpleJSONFixed_JSONObject_o *__this_01;
  SimpleJSONFixed_JSONNode_o *pSVar1;
  System_String_o *json;
  System_Action_bool__string__o *onComplete_00;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (DAT_05704beb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_Action_bool__string);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONObject);
    il2cpp_init_method_metadata(&MethodInfo_Void__VerifyEmail_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass161_0);
    il2cpp_init_method_metadata(&"token");
    il2cpp_init_method_metadata(&"/v1/auth/verify-email");
    DAT_05704beb = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass161_0);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[1].klass = (Il2CppClass *)onComplete;
    il2cpp_runtime_glue(__this_00 + 1);
    __this_01 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONObject);
    SimpleJSONFixed_JSONObject___ctor(__this_01,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar1 = SimpleJSONFixed_JSONNode__op_Implicit(token,(MethodInfo *)0x0);
    if (__this_01 != (SimpleJSONFixed_JSONObject_o *)0x0) {
      (*(__this_01->klass->vtable)._8_set_Item.methodPtr)(__this_01,"token",pSVar1);
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this = *(ApplicationManagers_AccountManager_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x50);
      json = (System_String_o *)
             (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                       (__this_01,(__this_01->klass->vtable)._3_ToString.method);
      onComplete_00 = (System_Action_bool__string__o *)il2cpp_runtime_glue(TypeInfo_Action_bool__string);
      System_Action<bool__object>___ctor();
      if (__this != (ApplicationManagers_AccountManager_o *)0x0) {
        routine = ApplicationManagers_AccountManager__PostJson
                            (__this,"/v1/auth/verify-email",json,(System_String_o *)0x0,onComplete_00,0,
                             (System_String_o *)0x0,(System_Action_string__o *)0x0,1,
                             in_stack_ffffffffffffffd0);
        UnityEngine_MonoBehaviour__StartCoroutine
                  ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$ForgotPassword
// il2cpp: void ApplicationManagers_AccountManager__ForgotPassword (System_String_o* email, System_Action_bool__string__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x418d020

void ApplicationManagers_AccountManager__ForgotPassword
               (System_String_o *email,System_Action_bool__string__o *onComplete,
               bool_conflict reportNetworkError,MethodInfo *method)

{
  ApplicationManagers_AccountManager_o *__this;
  SimpleJSONFixed_JSONObject_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar1;
  System_String_o *json;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (DAT_05704bec == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_JSONObject);
    il2cpp_init_method_metadata(&"/v1/auth/forgot-password");
    il2cpp_init_method_metadata(&"email");
    DAT_05704bec = '\x01';
  }
  __this_00 = (SimpleJSONFixed_JSONObject_o *)il2cpp_runtime_glue(TypeInfo_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = SimpleJSONFixed_JSONNode__op_Implicit(email,(MethodInfo *)0x0);
  if (__this_00 != (SimpleJSONFixed_JSONObject_o *)0x0) {
    (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
              (__this_00,"email",pSVar1,(__this_00->klass->vtable)._8_set_Item.method);
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    __this = *(ApplicationManagers_AccountManager_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x50);
    json = (System_String_o *)
           (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                     (__this_00,(__this_00->klass->vtable)._3_ToString.method);
    if (__this != (ApplicationManagers_AccountManager_o *)0x0) {
      routine = ApplicationManagers_AccountManager__PostJson
                          (__this,"/v1/auth/forgot-password",json,(System_String_o *)0x0,onComplete,0,
                           (System_String_o *)0x0,(System_Action_string__o *)0x0,
                           reportNetworkError & 0xff,in_stack_ffffffffffffffd0);
      UnityEngine_MonoBehaviour__StartCoroutine
                ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$PatreonUnlink
// il2cpp: void ApplicationManagers_AccountManager__PatreonUnlink (System_Action_bool__string__o* onComplete, const MethodInfo* method);
// 0x418d170

void ApplicationManagers_AccountManager__PatreonUnlink
               (System_Action_bool__string__o *onComplete,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_AccountManager_o *__this;
  bool_conflict bVar2;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *in_R8;
  
  if (DAT_05704bed == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&"not_logged_in");
    il2cpp_init_method_metadata(&"/v1/patreon/link");
    DAT_05704bed = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704bcc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bcc = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704c4f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c4f = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar2 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x68),(MethodInfo *)0x0)
  ;
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
      __this = *(ApplicationManagers_AccountManager_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x50);
    }
    else {
      __this = *(ApplicationManagers_AccountManager_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x50);
    }
    if (DAT_05704c4f == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AccountManager);
      DAT_05704c4f = '\x01';
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    else {
      iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    }
    if (iVar1 == 0) {
      il2cpp_init_class();
    }
    if (__this != (ApplicationManagers_AccountManager_o *)0x0) {
      routine = ApplicationManagers_AccountManager__DeleteJson
                          (__this,"/v1/patreon/link",
                           *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x68),onComplete,
                           in_R8);
      UnityEngine_MonoBehaviour__StartCoroutine
                ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
      return;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if (onComplete == (System_Action_bool__string__o *)0x0) {
    return;
  }
  (*(code *)(onComplete->fields).invoke_impl)
            ((onComplete->fields).method_code,0,"not_logged_in",(onComplete->fields).method);
  return;
}


// ApplicationManagers.AccountManager$$GetAuthMethods
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__GetAuthMethods (ApplicationManagers_AccountManager_o* __this, System_Action_bool__string__o* onComplete, const MethodInfo* method);
// 0x418bc40

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__GetAuthMethods
          (ApplicationManagers_AccountManager_o *__this,System_Action_bool__string__o *onComplete,
          MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704bee == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GetAuthMethods_d__164);
    DAT_05704bee = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_GetAuthMethods_d__164);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    __this_00[3].klass = (Il2CppClass *)onComplete;
    il2cpp_runtime_glue(__this_00 + 3,onComplete);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$SendApiGet
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__SendApiGet (ApplicationManagers_AccountManager_o* __this, System_String_o* path, System_String_o* bearer, bool parseJson, System_Action_AottgApiResult__o* onComplete, const MethodInfo* method);
// 0x418d450

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__SendApiGet
          (ApplicationManagers_AccountManager_o *__this,System_String_o *path,
          System_String_o *bearer,bool_conflict parseJson,
          System_Action_AottgApiResult__o *onComplete,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704bef == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SendApiGet_d__165);
    DAT_05704bef = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_SendApiGet_d__165);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].monitor = __this;
    il2cpp_runtime_glue(&__this_00[2].monitor,__this);
    __this_00[3].klass = (Il2CppClass *)path;
    il2cpp_runtime_glue(__this_00 + 3,path);
    __this_00[3].monitor = bearer;
    il2cpp_runtime_glue(&__this_00[3].monitor,bearer);
    *(char *)&__this_00[4].klass = (char)parseJson;
    __this_00[2].klass = (Il2CppClass *)onComplete;
    il2cpp_runtime_glue(__this_00 + 2,onComplete);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$SendApiGetAsync
// il2cpp: Cysharp_Threading_Tasks_UniTask_o ApplicationManagers_AccountManager__SendApiGetAsync (ApplicationManagers_AccountManager_o* __this, System_String_o* path, System_String_o* bearer, bool parseJson, System_Action_AottgApiResult__o* onComplete, const MethodInfo* method);
// 0x418d530

Cysharp_Threading_Tasks_UniTask_o
ApplicationManagers_AccountManager__SendApiGetAsync
          (ApplicationManagers_AccountManager_o *__this,System_String_o *path,
          System_String_o *bearer,bool_conflict parseJson,
          System_Action_AottgApiResult__o *onComplete,MethodInfo *method)

{
  ApplicationManagers_AccountManager__SendApiGetAsync_d__166_o __this_00;
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
  
  if (DAT_05704bf0 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_AccountManager__SendApiGetAsync_d__16);
    DAT_05704bf0 = '\x01';
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
  il2cpp_runtime_glue(&stack0xffffffffffffff80,0);
  il2cpp_runtime_glue(&stack0xffffffffffffff90,path);
  il2cpp_runtime_glue(&stack0xffffffffffffff98,bearer);
  uVar1 = (undefined1)parseJson;
  il2cpp_runtime_glue(&stack0xffffffffffffffa8,onComplete);
  uVar3 = 0xffffffff;
  if (*(long *)(MethodInfo_Void_Start_AccountManager__SendApiGetAsync_d__16 + 0x38) == 0) {
    il2cpp_glue_022c2910();
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
  ApplicationManagers_AccountManager_<SendApiGetAsync>d__166__MoveNext
            (__this_00,(MethodInfo *)&stack0xffffffffffffff78);
  CVar2.fields = (Cysharp_Threading_Tasks_UniTask_Fields)il2cpp_glue_02711ab0(&stack0xffffffffffffff80,0);
  return (Cysharp_Threading_Tasks_UniTask_o)CVar2.fields;
}


// ApplicationManagers.AccountManager$$SendApiJson
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__SendApiJson (ApplicationManagers_AccountManager_o* __this, System_String_o* method, System_String_o* path, System_String_o* json, System_String_o* bearer, bool parseJson, System_Action_AottgApiResult__o* onComplete, bool reportNetworkError, System_Nullable_int__o timeoutSeconds, const MethodInfo* method);
// 0x418d610

System_Collections_IEnumerator_o * ApplicationManagers_AccountManager__SendApiJson(void)

{
  Il2CppObject *__this;
  Il2CppClass *in_RCX;
  void *in_RDX;
  Il2CppClass *in_RSI;
  void *in_RDI;
  void *in_R8;
  undefined1 in_R9B;
  Il2CppClass *in_stack_00000008;
  undefined1 in_stack_00000010;
  undefined8 in_stack_00000018;
  
  if (DAT_05704bf1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SendApiJson_d__167);
    DAT_05704bf1 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_SendApiJson_d__167);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  *(undefined4 *)&__this[1].klass = 0;
  if (__this != (Il2CppObject *)0x0) {
    __this[2].monitor = in_RDI;
    il2cpp_runtime_glue(&__this[2].monitor);
    __this[3].klass = in_RSI;
    il2cpp_runtime_glue(__this + 3);
    __this[3].monitor = in_RDX;
    il2cpp_runtime_glue(&__this[3].monitor);
    __this[4].klass = in_RCX;
    il2cpp_runtime_glue(__this + 4);
    __this[4].monitor = in_R8;
    il2cpp_runtime_glue(&__this[4].monitor);
    *(undefined1 *)&__this[5].klass = in_R9B;
    __this[2].klass = in_stack_00000008;
    il2cpp_runtime_glue(__this + 2);
    *(undefined1 *)((long)&__this[5].klass + 1) = in_stack_00000010;
    *(undefined8 *)((long)&__this[5].klass + 4) = in_stack_00000018;
    return (System_Collections_IEnumerator_o *)__this;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$SendApiJsonAsync
// il2cpp: Cysharp_Threading_Tasks_UniTask_o ApplicationManagers_AccountManager__SendApiJsonAsync (ApplicationManagers_AccountManager_o* __this, System_String_o* method, System_String_o* path, System_String_o* json, System_String_o* bearer, bool parseJson, bool reportNetworkError, System_Nullable_int__o timeoutSeconds, System_Action_AottgApiResult__o* onComplete, const MethodInfo* method);
// 0x418d730

Cysharp_Threading_Tasks_UniTask_o ApplicationManagers_AccountManager__SendApiJsonAsync(void)

{
  ApplicationManagers_AccountManager__SendApiJsonAsync_d__168_o __this;
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
  
  if (DAT_05704bf2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Start_AccountManager__SendApiJsonAsync_d__1);
    DAT_05704bf2 = '\x01';
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
  il2cpp_runtime_glue(&stack0xffffffffffffff70,0);
  il2cpp_runtime_glue(&stack0xffffffffffffff80);
  il2cpp_runtime_glue(&stack0xffffffffffffff88);
  il2cpp_runtime_glue(&stack0xffffffffffffff90);
  il2cpp_runtime_glue(&stack0xffffffffffffff98);
  uVar7 = (undefined4)in_stack_00000010;
  uVar8 = (undefined4)((ulong)in_stack_00000010 >> 0x20);
  il2cpp_runtime_glue(&stack0xffffffffffffffb0);
  uVar2 = 0xffffffff;
  if (*(long *)(MethodInfo_Void_Start_AccountManager__SendApiJsonAsync_d__1 + 0x38) == 0) {
    il2cpp_glue_022c2910();
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
  __this.fields.__u__1.fields.task.fields.source =
       (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)uVar10;
  __this.fields.__u__1.fields.task.fields.result = (Il2CppObject *)uVar11;
  __this.fields.__u__1.fields.task.fields._16_8_ = uVar12;
  ApplicationManagers_AccountManager_<SendApiJsonAsync>d__168__MoveNext
            (__this,(MethodInfo *)&stack0xffffffffffffff68);
  CVar1.fields = (Cysharp_Threading_Tasks_UniTask_Fields)il2cpp_glue_02711ab0(&stack0xffffffffffffff70,0);
  return (Cysharp_Threading_Tasks_UniTask_o)CVar1.fields;
}


// ApplicationManagers.AccountManager$$SendApiJsonAsync
// il2cpp: Cysharp_Threading_Tasks_UniTask_AottgApiResult__o ApplicationManagers_AccountManager__SendApiJsonAsync (System_String_o* method, System_String_o* path, System_String_o* json, System_String_o* bearer, bool parseJson, bool reportNetworkError, System_Nullable_int__o timeoutSeconds, const MethodInfo* method);
// 0x418d860

Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *
ApplicationManagers_AccountManager__SendApiJsonAsync
          (Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *__return_storage_ptr__)

{
  ApplicationManagers_Api_AottgApiClient_o *__this;
  ApplicationManagers_Api_AottgApiRequest_o *__this_00;
  System_String_o *in_RCX;
  System_String_o *in_RDX;
  System_String_o *in_RSI;
  System_String_o *in_R8;
  undefined1 in_R9B;
  undefined1 in_stack_00000008;
  System_Nullable_int__Fields in_stack_00000010;
  Cysharp_Threading_Tasks_UniTask_AottgApiResult__o local_48;
  
  if (DAT_05704bf3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgApiClient);
    il2cpp_init_method_metadata(&TypeInfo_AottgApiRequest);
    DAT_05704bf3 = '\x01';
  }
  __this = (ApplicationManagers_Api_AottgApiClient_o *)il2cpp_runtime_glue(TypeInfo_AottgApiClient);
  ApplicationManagers_Api_AottgApiClient___ctor(__this,(MethodInfo *)0x0);
  __this_00 = (ApplicationManagers_Api_AottgApiRequest_o *)il2cpp_runtime_glue(TypeInfo_AottgApiRequest);
  ApplicationManagers_Api_AottgApiRequest___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (ApplicationManagers_Api_AottgApiRequest_o *)0x0) {
    (__this_00->fields).Method = in_RSI;
    il2cpp_runtime_glue(&__this_00->fields);
    (__this_00->fields).Path = in_RDX;
    il2cpp_runtime_glue(&(__this_00->fields).Path);
    (__this_00->fields).JsonBody = in_RCX;
    il2cpp_runtime_glue(&(__this_00->fields).JsonBody);
    (__this_00->fields).BearerToken = in_R8;
    il2cpp_runtime_glue(&(__this_00->fields).BearerToken);
    *(undefined1 *)&(__this_00->fields).ParseJson = in_R9B;
    (__this_00->fields).TimeoutSeconds.fields = in_stack_00000010;
    *(undefined1 *)((long)&(__this_00->fields).ParseJson + 1) = in_stack_00000008;
    if (__this != (ApplicationManagers_Api_AottgApiClient_o *)0x0) {
      ApplicationManagers_Api_AottgApiClient__SendAsync
                (&local_48,__this,__this_00,(System_Threading_CancellationToken_o)0x0,
                 (MethodInfo *)0x0);
      (__return_storage_ptr__->fields).token = local_48.fields.token;
      *(undefined6 *)&(__return_storage_ptr__->fields).field_0x12 = local_48.fields._18_6_;
      (__return_storage_ptr__->fields).source = local_48.fields.source;
      (__return_storage_ptr__->fields).result = local_48.fields.result;
      return __return_storage_ptr__;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$OnDestroy
// il2cpp: void ApplicationManagers_AccountManager__OnDestroy (ApplicationManagers_AccountManager_o* __this, const MethodInfo* method);
// 0x418d990

void ApplicationManagers_AccountManager__OnDestroy
               (ApplicationManagers_AccountManager_o *__this,MethodInfo *method)

{
  char cVar1;
  int iVar2;
  Events_OnPreLoadScene_o *value;
  
  if (DAT_05704bf4 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_OnPreLoadScene);
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_OnPreLoadScene);
    DAT_05704bf4 = '\x01';
    iVar2 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar2 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
    cVar1 = *(char *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x58);
  }
  else {
    cVar1 = *(char *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x58);
  }
  if (cVar1 != '\0') {
    value = (Events_OnPreLoadScene_o *)il2cpp_runtime_glue(TypeInfo_OnPreLoadScene);
    Events_OnPreLoadScene___ctor();
    method = (MethodInfo *)0x0;
    Events_EventManager__remove_OnPreLoadScene(value,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x58) = 0;
  }
  ApplicationManagers_AccountManager__CancelOAuthFlow(__this,method);
  return;
}


// ApplicationManagers.AccountManager$$DeleteJson
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__DeleteJson (ApplicationManagers_AccountManager_o* __this, System_String_o* path, System_String_o* bearer, System_Action_bool__string__o* onComplete, const MethodInfo* method);
// 0x418d380

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__DeleteJson
          (ApplicationManagers_AccountManager_o *__this,System_String_o *path,
          System_String_o *bearer,System_Action_bool__string__o *onComplete,MethodInfo *method)

{
  Il2CppObject *__this_00;
  
  if (DAT_05704bf5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DeleteJson_d__171);
    DAT_05704bf5 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_DeleteJson_d__171);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    __this_00[2].monitor = path;
    il2cpp_runtime_glue(&__this_00[2].monitor,path);
    __this_00[3].klass = (Il2CppClass *)bearer;
    il2cpp_runtime_glue(__this_00 + 3,bearer);
    __this_00[4].klass = (Il2CppClass *)onComplete;
    il2cpp_runtime_glue(__this_00 + 4,onComplete);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$PostJson
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__PostJson (ApplicationManagers_AccountManager_o* __this, System_String_o* path, System_String_o* json, System_String_o* bearer, System_Action_bool__string__o* onComplete, bool applyAuthResponse, System_String_o* captureField, System_Action_string__o* captureTarget, bool reportNetworkError, const MethodInfo* method);
// 0x418c110

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__PostJson
          (ApplicationManagers_AccountManager_o *__this,System_String_o *path,System_String_o *json,
          System_String_o *bearer,System_Action_bool__string__o *onComplete,
          bool_conflict applyAuthResponse,System_String_o *captureField,
          System_Action_string__o *captureTarget,bool_conflict reportNetworkError,MethodInfo *method
          )

{
  Il2CppObject *__this_00;
  
  if (DAT_05704bf6 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_PostJson_d__172);
    DAT_05704bf6 = '\x01';
  }
  __this_00 = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_PostJson_d__172);
  System_Object___ctor(__this_00,(MethodInfo *)0x0);
  *(undefined4 *)&__this_00[1].klass = 0;
  if (__this_00 != (Il2CppObject *)0x0) {
    __this_00[2].klass = (Il2CppClass *)__this;
    il2cpp_runtime_glue(__this_00 + 2,__this);
    __this_00[2].monitor = path;
    il2cpp_runtime_glue(&__this_00[2].monitor,path);
    __this_00[3].klass = (Il2CppClass *)json;
    il2cpp_runtime_glue(__this_00 + 3,json);
    __this_00[3].monitor = bearer;
    il2cpp_runtime_glue(&__this_00[3].monitor,bearer);
    __this_00[6].monitor = onComplete;
    il2cpp_runtime_glue(&__this_00[6].monitor,onComplete);
    *(char *)&__this_00[6].klass = (char)applyAuthResponse;
    __this_00[5].klass = (Il2CppClass *)captureField;
    il2cpp_runtime_glue(__this_00 + 5);
    __this_00[5].monitor = captureTarget;
    il2cpp_runtime_glue(&__this_00[5].monitor);
    *(undefined1 *)&__this_00[4].klass = (undefined1)reportNetworkError;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$ApplyAuthMethodsResponse
// il2cpp: bool ApplicationManagers_AccountManager__ApplyAuthMethodsResponse (System_String_o* json, const MethodInfo* method);
// 0x418dac0

bool_conflict
ApplicationManagers_AccountManager__ApplyAuthMethodsResponse
          (System_String_o *json,MethodInfo *method)

{
  System_Collections_Generic_IEqualityComparer_T__o *comparer;
  System_Collections_Generic_HashSet_object__o *pSVar1;
  System_Collections_Generic_HashSet_Enumerator_T__o __this;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_00;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_01;
  System_Collections_Generic_HashSet_Enumerator_T__o __this_02;
  char cVar2;
  bool_conflict bVar3;
  int iVar4;
  bool_conflict bVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  long *plVar7;
  System_Collections_Generic_HashSet_object__o *pSVar8;
  long *plVar9;
  System_String_o *pSVar10;
  long lVar11;
  undefined8 uVar12;
  System_FormatException_o *__this_03;
  uint uVar13;
  undefined8 *unaff_R13;
  undefined1 uVar14;
  System_Collections_Generic_HashSet_Enumerator_T__c *pSVar15;
  Il2CppType *pIVar16;
  Il2CppObject *pIVar17;
  Il2CppObject *pIVar18;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (DAT_05704bf7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&MethodInfo_Void_Dispose);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_MoveNext);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Current);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_Void_Clear);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_T__Enumerator_System_String__GetEnumer);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_StringComparer);
    il2cpp_init_method_metadata(&"methods");
    il2cpp_init_method_metadata(&"key");
    il2cpp_init_method_metadata(&"enabled");
    DAT_05704bf7 = '\x01';
  }
  pSVar6 = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
  if ((pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
     (plVar7 = (long *)(*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                                 (pSVar6,"methods",(pSVar6->klass->vtable)._7_get_Item.method),
     plVar7 == (long *)0x0)) goto LAB_0418e1ec;
  pSVar6 = (SimpleJSONFixed_JSONNode_o *)(**(code **)(*plVar7 + 0x408))(plVar7);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Equality(pSVar6,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    uVar12 = il2cpp_init_method_metadata(&TypeInfo_FormatException);
    __this_03 = (System_FormatException_o *)il2cpp_runtime_glue(uVar12);
    pSVar10 = (System_String_o *)il2cpp_init_method_metadata(&"Missing methods array.");
    System_FormatException___ctor(__this_03,pSVar10,(MethodInfo *)0x0);
    uVar12 = il2cpp_init_method_metadata(&MethodInfo_Boolean_ApplyAuthMethodsResponse);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this_03,uVar12);
  }
  if (*(int *)(TypeInfo_StringComparer + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_0570136f == '\0') goto LAB_0418ddd0;
LAB_0418dc54:
    iVar4 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    if (DAT_0570136f != '\0') goto LAB_0418dc54;
LAB_0418ddd0:
    il2cpp_init_method_metadata(&TypeInfo_StringComparer);
    DAT_0570136f = '\x01';
    iVar4 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar4 == 0) {
    il2cpp_init_class();
  }
  comparer = *(System_Collections_Generic_IEqualityComparer_T__o **)
              (*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
  pSVar8 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(pSVar8,comparer,MethodInfo_HashSet_1_System_String);
  if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_0418e1ec;
  iVar4 = (*(pSVar6->klass->vtable)._11_get_Count.methodPtr)
                    (pSVar6,(pSVar6->klass->vtable)._11_get_Count.method);
  if (pSVar8 == (System_Collections_Generic_HashSet_object__o *)0x0) {
    if (0 < iVar4) {
      uVar13 = 0;
      do {
        plVar7 = (long *)(*(pSVar6->klass->vtable)._5_get_Item.methodPtr)
                                   (pSVar6,(ulong)uVar13,(pSVar6->klass->vtable)._5_get_Item.method)
        ;
        if ((plVar7 == (long *)0x0) ||
           (plVar9 = (long *)(**(code **)(*plVar7 + 0x1a8))
                                       (plVar7,"key",*(undefined8 *)(*plVar7 + 0x1b0)),
           plVar9 == (long *)0x0)) goto LAB_0418e1ec;
        pSVar10 = (System_String_o *)(**(code **)(*plVar9 + 0x1c8))(plVar9);
        bVar3 = System_String__IsNullOrEmpty(pSVar10,(MethodInfo *)0x0);
        if (((char)bVar3 == '\0') &&
           ((plVar7 = (long *)(**(code **)(*plVar7 + 0x1a8))
                                        (plVar7,"enabled",*(undefined8 *)(*plVar7 + 0x1b0)),
            plVar7 == (long *)0x0 ||
            (cVar2 = (**(code **)(*plVar7 + 0x3a8))(plVar7,*(undefined8 *)(*plVar7 + 0x3b0)),
            cVar2 != '\0')))) goto LAB_0418e1ec;
        uVar13 = uVar13 + 1;
        iVar4 = (*(pSVar6->klass->vtable)._11_get_Count.methodPtr)
                          (pSVar6,(pSVar6->klass->vtable)._11_get_Count.method);
      } while ((int)uVar13 < iVar4);
    }
  }
  else if (0 < iVar4) {
    uVar13 = 0;
    unaff_R13 = &"key";
    do {
      plVar7 = (long *)(*(pSVar6->klass->vtable)._5_get_Item.methodPtr)
                                 (pSVar6,(ulong)uVar13,(pSVar6->klass->vtable)._5_get_Item.method);
      if ((plVar7 == (long *)0x0) ||
         (plVar9 = (long *)(**(code **)(*plVar7 + 0x1a8))
                                     (plVar7,"key",*(undefined8 *)(*plVar7 + 0x1b0)),
         plVar9 == (long *)0x0)) goto LAB_0418e1ec;
      pSVar10 = (System_String_o *)(**(code **)(*plVar9 + 0x1c8))(plVar9);
      bVar3 = System_String__IsNullOrEmpty(pSVar10,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        plVar7 = (long *)(**(code **)(*plVar7 + 0x1a8))
                                   (plVar7,"enabled",*(undefined8 *)(*plVar7 + 0x1b0));
        if (plVar7 == (long *)0x0) goto LAB_0418e1ec;
        cVar2 = (**(code **)(*plVar7 + 0x3a8))(plVar7,*(undefined8 *)(*plVar7 + 0x3b0));
        if (cVar2 != '\0') {
          System_Collections_Generic_HashSet<object>__Add
                    (pSVar8,(Il2CppObject *)pSVar10,MethodInfo_Boolean_Add);
        }
      }
      uVar13 = uVar13 + 1;
      iVar4 = (*(pSVar6->klass->vtable)._11_get_Count.methodPtr)
                        (pSVar6,(pSVar6->klass->vtable)._11_get_Count.method);
    } while ((int)uVar13 < iVar4);
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05704c54 == '\0') goto LAB_0418e03f;
LAB_0418df05:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_0418df1b;
LAB_0418e068:
    il2cpp_init_class();
    lVar11 = *(long *)(TypeInfo_AccountManager + 0xb8);
    if (*(char *)(lVar11 + 0x9a) != '\0') goto LAB_0418df32;
LAB_0418e088:
    bVar3 = (bool_conflict)CONCAT71((int7)((ulong)unaff_R13 >> 8),1);
    iVar4 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (DAT_05704c54 != '\0') goto LAB_0418df05;
LAB_0418e03f:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c54 = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_0418e068;
LAB_0418df1b:
    lVar11 = *(long *)(TypeInfo_AccountManager + 0xb8);
    if (*(char *)(lVar11 + 0x9a) == '\0') goto LAB_0418e088;
LAB_0418df32:
    if (pSVar8 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_0418e1ec;
    iVar4 = (pSVar8->fields)._count;
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
      lVar11 = *(long *)(TypeInfo_AccountManager + 0xb8);
    }
    if (*(long *)(lVar11 + 0xb8) == 0) goto LAB_0418e1ec;
    if (iVar4 != *(int *)(*(long *)(lVar11 + 0xb8) + 0x20)) goto LAB_0418e088;
    System_Collections_Generic_HashSet<object>__GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,pSVar8,MethodInfo_HashSet_1_T__Enumerator_System_String__GetEnumer);
    pSVar15 = (System_Collections_Generic_HashSet_Enumerator_T__c *)local_48._0_8_;
    pIVar16 = (Il2CppType *)local_48._8_8_;
    pIVar17 = local_38;
    do {
      __this.fields._8_8_ = pIVar16;
      __this.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar15;
      __this.fields._current = pIVar17;
      bVar3 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                        (__this,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
      uVar14 = 0;
      pIVar18 = pIVar17;
      if ((char)bVar3 == '\0') goto LAB_0418e004;
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar1 = *(System_Collections_Generic_HashSet_object__o **)
                (*(long *)(TypeInfo_AccountManager + 0xb8) + 0xb8);
      if (pSVar1 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar3 = System_Collections_Generic_HashSet<object>__Contains(pSVar1,pIVar17,MethodInfo_Boolean_Contains);
      pIVar17 = pIVar18;
    } while ((char)bVar3 != '\0');
    uVar14 = 1;
LAB_0418e004:
    __this_00.fields._8_8_ = pIVar16;
    __this_00.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar15;
    __this_00.fields._current = pIVar18;
    System_Collections_Generic_HashSet_Enumerator<object>__Dispose
              (__this_00,(MethodInfo_3185880 *)&stack0xffffffffffffff98);
    bVar3 = (bool_conflict)CONCAT71((int7)((ulong)pSVar6 >> 8),uVar14);
    iVar4 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar4 == 0) {
    il2cpp_init_class();
  }
  pSVar1 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xb8)
  ;
  if ((pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) &&
     (System_Collections_Generic_HashSet<object>__Clear(pSVar1,MethodInfo_Void_Clear),
     pSVar8 != (System_Collections_Generic_HashSet_object__o *)0x0)) {
    System_Collections_Generic_HashSet<object>__GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,pSVar8,MethodInfo_HashSet_1_T__Enumerator_System_String__GetEnumer);
    pSVar15 = (System_Collections_Generic_HashSet_Enumerator_T__c *)local_48._0_8_;
    pIVar16 = (Il2CppType *)local_48._8_8_;
    pIVar17 = local_38;
    while( true ) {
      __this_01.fields._8_8_ = pIVar16;
      __this_01.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar15;
      __this_01.fields._current = pIVar17;
      bVar5 = System_Collections_Generic_HashSet_Enumerator<object>__MoveNext
                        (__this_01,(MethodInfo_3185890 *)&stack0xffffffffffffff98);
      if ((char)bVar5 == '\0') {
        __this_02.fields._8_8_ = pIVar16;
        __this_02.fields._set = (System_Collections_Generic_HashSet_T__o *)pSVar15;
        __this_02.fields._current = pIVar17;
        System_Collections_Generic_HashSet_Enumerator<object>__Dispose
                  (__this_02,(MethodInfo_3185880 *)&stack0xffffffffffffff98);
        if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        if (DAT_05704c55 == '\0') {
          il2cpp_init_method_metadata(&TypeInfo_AccountManager);
          DAT_05704c55 = '\x01';
          iVar4 = *(int *)(TypeInfo_AccountManager + 0xe4);
        }
        else {
          iVar4 = *(int *)(TypeInfo_AccountManager + 0xe4);
        }
        if (iVar4 == 0) {
          il2cpp_init_class();
        }
        *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x9a) = 1;
        return bVar3;
      }
      pIVar18 = pIVar17;
      if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar8 = *(System_Collections_Generic_HashSet_object__o **)
                (*(long *)(TypeInfo_AccountManager + 0xb8) + 0xb8);
      if (pSVar8 == (System_Collections_Generic_HashSet_object__o *)0x0) break;
      System_Collections_Generic_HashSet<object>__Add(pSVar8,pIVar17,MethodInfo_Boolean_Add);
      pIVar17 = pIVar18;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_0418e1ec:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.AccountManager$$ApplyAuthResponse
// il2cpp: void ApplicationManagers_AccountManager__ApplyAuthResponse (System_String_o* json, const MethodInfo* method);
// 0x418e360

void ApplicationManagers_AccountManager__ApplyAuthResponse(System_String_o *json,MethodInfo *method)

{
  code cVar1;
  int iVar2;
  Il2CppMethodPointer pIVar3;
  long lVar4;
  undefined8 uVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  undefined2 uVar8;
  bool_conflict bVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  ApplicationManagers_AccountLoginResponse_o *pAVar11;
  int64_t iVar12;
  undefined8 uVar13;
  System_FormatException_o *__this;
  System_String_o *pSVar14;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *pMVar15;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o left_00;
  System_DateTimeOffset_o __this_00;
  System_DateTimeOffset_o __this_01;
  
  if (DAT_05704bf8 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_DateTimeOffset);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&"profile");
    DAT_05704bf8 = '\x01';
  }
  pMVar15 = (MethodInfo *)0x0;
  pSVar10 = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
  pAVar11 = ApplicationManagers_AccountLoginResponse__Parse(pSVar10,pMVar15);
  if (pAVar11 == (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    uVar13 = il2cpp_init_method_metadata(&TypeInfo_FormatException);
    __this = (System_FormatException_o *)il2cpp_runtime_glue(uVar13);
    pSVar14 = (System_String_o *)il2cpp_init_method_metadata(&"Missing login response payload.");
    System_FormatException___ctor(__this,pSVar14,(MethodInfo *)0x0);
    uVar13 = il2cpp_init_method_metadata(&MethodInfo_Void_ApplyAuthResponse);
                    /* WARNING: Subroutine does not return */
    il2cpp_glue_02274a00(__this,uVar13);
  }
  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
    il2cpp_init_class();
    if (DAT_05704c56 == '\0') goto LAB_0418e7fe;
LAB_0418e3f8:
    iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
  else {
    if (DAT_05704c56 != '\0') goto LAB_0418e3f8;
LAB_0418e7fe:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c56 = '\x01';
    iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  pIVar3 = TypeInfo_AccountManager[2].virtualMethodPointer;
  *(ApplicationManagers_AccountLoginResponse_o **)(pIVar3 + 0x88) = pAVar11;
  il2cpp_runtime_glue(pIVar3 + 0x88,pAVar11);
  pSVar14 = (pAVar11->fields).AccessToken;
  if (DAT_05704c57 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c57 = '\x01';
    iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
  else {
    iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  pIVar3 = TypeInfo_AccountManager[2].virtualMethodPointer;
  *(System_String_o **)(pIVar3 + 0x68) = pSVar14;
  il2cpp_runtime_glue(pIVar3 + 0x68,pSVar14);
  pSVar14 = (pAVar11->fields).PhotonToken;
  if (DAT_05704c58 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c58 = '\x01';
    iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
  else {
    iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  pIVar3 = TypeInfo_AccountManager[2].virtualMethodPointer;
  *(System_String_o **)(pIVar3 + 0x78) = pSVar14;
  il2cpp_runtime_glue(pIVar3 + 0x78,pSVar14);
  uVar5 = (pAVar11->fields).AccessTokenExpiresAt.fields._dateTime;
  uVar6 = (pAVar11->fields).AccessTokenExpiresAt.fields._offsetMinutes;
  left.fields._offsetMinutes = uVar6;
  left.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)uVar5;
  if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar12 = 0;
  left.fields._10_6_ = 0;
  bVar9 = System_DateTimeOffset__op_Equality
                    (left,(System_DateTimeOffset_o)ZEXT816(0),(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    pMVar15 = extraout_RDX;
    if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
      il2cpp_init_class();
      pMVar15 = extraout_RDX_01;
    }
    __this_00.fields._8_8_ = 0;
    __this_00.fields._dateTime.fields._dateData =
         (System_DateTime_Fields)(System_DateTime_Fields)&(pAVar11->fields).AccessTokenExpiresAt;
    iVar12 = System_DateTimeOffset__ToUnixTimeSeconds(__this_00,pMVar15);
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) goto LAB_0418e690;
LAB_0418e4ea:
    if (DAT_05704c59 != '\0') goto LAB_0418e4f7;
LAB_0418e6a2:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c59 = '\x01';
    iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
  else {
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) != 0) goto LAB_0418e4ea;
LAB_0418e690:
    il2cpp_init_class();
    if (DAT_05704c59 == '\0') goto LAB_0418e6a2;
LAB_0418e4f7:
    iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
  if (iVar2 == 0) {
    il2cpp_init_class();
  }
  *(int64_t *)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x70) = iVar12;
  uVar7 = (pAVar11->fields).PhotonTokenExpiresAt.fields._dateTime;
  uVar8 = (pAVar11->fields).PhotonTokenExpiresAt.fields._offsetMinutes;
  left_00.fields._offsetMinutes = uVar8;
  left_00.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)uVar7;
  if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
    il2cpp_init_class();
  }
  iVar12 = 0;
  left_00.fields._10_6_ = 0;
  bVar9 = System_DateTimeOffset__op_Equality
                    (left_00,(System_DateTimeOffset_o)ZEXT816(0),(MethodInfo *)0x0);
  if ((char)bVar9 == '\0') {
    pMVar15 = extraout_RDX_00;
    if (*(int *)(TypeInfo_DateTimeOffset + 0xe4) == 0) {
      il2cpp_init_class();
      pMVar15 = extraout_RDX_02;
    }
    __this_01.fields._8_8_ = 0;
    __this_01.fields._dateTime.fields._dateData =
         (System_DateTime_Fields)(System_DateTime_Fields)&(pAVar11->fields).PhotonTokenExpiresAt;
    iVar12 = System_DateTimeOffset__ToUnixTimeSeconds(__this_01,pMVar15);
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) goto LAB_0418e711;
LAB_0418e563:
    if (DAT_05704c5a != '\0') goto LAB_0418e570;
LAB_0418e723:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c5a = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) goto LAB_0418e747;
LAB_0418e581:
    *(int64_t *)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x80) = iVar12;
  }
  else {
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) != 0) goto LAB_0418e563;
LAB_0418e711:
    il2cpp_init_class();
    if (DAT_05704c5a == '\0') goto LAB_0418e723;
LAB_0418e570:
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) != 0) goto LAB_0418e581;
LAB_0418e747:
    il2cpp_init_class();
    *(int64_t *)(TypeInfo_AccountManager[2].virtualMethodPointer + 0x80) = iVar12;
  }
  if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar14 = (pAVar11->fields).RefreshToken;
  pSVar10 = (SimpleJSONFixed_JSONNode_o *)
            (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                      (pSVar10,"profile",(pSVar10->klass->vtable)._7_get_Item.method);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pMVar15 = (MethodInfo *)0x0;
  bVar9 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
    ApplicationManagers_AccountManager__ApplyProfileResponse(pSVar10,pMVar15);
  }
  bVar9 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
    goto joined_r0x0418e7e1;
  }
  if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
    il2cpp_init_class();
  }
  pIVar3 = TypeInfo_AccountManager[2].virtualMethodPointer;
  *(System_String_o **)(pIVar3 + 0xb0) = pSVar14;
  il2cpp_runtime_glue(pIVar3 + 0xb0,pSVar14);
  if (DAT_057047ea == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_057047ea = '\x01';
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) goto LAB_0418e8b8;
LAB_0418e7bd:
    cVar1 = TypeInfo_AccountManager[2].virtualMethodPointer[0x99];
    pMVar15 = TypeInfo_AccountManager;
  }
  else {
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) != 0) goto LAB_0418e7bd;
LAB_0418e8b8:
    il2cpp_init_class();
    cVar1 = TypeInfo_AccountManager[2].virtualMethodPointer[0x99];
    pMVar15 = TypeInfo_AccountManager;
    if (*(int *)((long)&TypeInfo_AccountManager[2].parameters + 4) == 0) {
      il2cpp_init_class();
    }
  }
  if (cVar1 == (code)0x0) {
    ApplicationManagers_AccountManager__DeleteRefreshToken(pMVar15);
    iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
  else {
    ApplicationManagers_AccountManager__SaveRefreshToken(pMVar15);
    iVar2 = *(int *)((long)&TypeInfo_AccountManager[2].parameters + 4);
  }
joined_r0x0418e7e1:
  if (iVar2 == 0) {
    il2cpp_init_class();
    lVar4 = *(long *)(TypeInfo_AccountManager[2].virtualMethodPointer + 0xc0);
  }
  else {
    lVar4 = *(long *)(TypeInfo_AccountManager[2].virtualMethodPointer + 0xc0);
  }
  if (lVar4 != 0) {
    (**(code **)(lVar4 + 0x18))(*(undefined8 *)(lVar4 + 0x40),*(undefined8 *)(lVar4 + 0x28));
    return;
  }
  return;
}


// ApplicationManagers.AccountManager$$OnPreLoadScene
// il2cpp: void ApplicationManagers_AccountManager__OnPreLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x418e980

void ApplicationManagers_AccountManager__OnPreLoadScene(int32_t sceneName,MethodInfo *method)

{
  int iVar1;
  long lVar2;
  
  if (DAT_05704bf9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bf9 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704bb4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bb4 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(undefined1 *)(lVar2 + 0x29) = 0;
  *(undefined1 *)(lVar2 + 0x39) = 0;
  return;
}


// ApplicationManagers.AccountManager$$ParseIsoToUnix
// il2cpp: int64_t ApplicationManagers_AccountManager__ParseIsoToUnix (System_String_o* iso, const MethodInfo* method);
// 0x418ea20

int64_t ApplicationManagers_AccountManager__ParseIsoToUnix(System_String_o *iso,MethodInfo *method)

{
  bool_conflict bVar1;
  System_DateTime_o d1;
  int64_t iVar2;
  double dVar3;
  System_DateTime_Fields SStack_28;
  System_TimeSpan_Fields SStack_20;
  System_DateTime_Fields SStack_18;
  
  if (DAT_05704bfa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_DateTime);
    il2cpp_init_method_metadata(&TypeInfo_TimeSpan);
    DAT_05704bfa = '\x01';
  }
  SStack_18._dateData = 0;
  SStack_20._ticks = 0;
  iVar2 = 0;
  bVar1 = System_String__IsNullOrEmpty(iso,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_DateTime + 0xe4) == 0) {
      il2cpp_init_class();
    }
    SStack_18._dateData =
         (uint64_t)
         System_DateTime__Parse(iso,(System_IFormatProvider_o *)0x0,0x80,(MethodInfo *)0x0);
    d1 = System_DateTime__ToUniversalTime((System_DateTime_o)&SStack_18,(MethodInfo *)0x0);
    SStack_28._dateData = 0;
    System_DateTime___ctor((System_DateTime_o)&SStack_28,0x7b2,1,1,0,0,0,1,(MethodInfo *)0x0);
    SStack_20._ticks =
         (int64_t)System_DateTime__op_Subtraction
                            (d1,(System_DateTime_o)SStack_28._dateData,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_TimeSpan + 0xe4) == 0) {
      il2cpp_init_class();
    }
    dVar3 = System_TimeSpan__get_TotalSeconds((System_TimeSpan_o)&SStack_20,(MethodInfo *)0x0);
    iVar2 = (int64_t)dVar3;
  }
  return iVar2;
}


// ApplicationManagers.AccountManager$$ClearSession
// il2cpp: void ApplicationManagers_AccountManager__ClearSession (bool clearRefreshToken, const MethodInfo* method);
// 0x418c590

/* WARNING: Type propagation algorithm not settling */

void ApplicationManagers_AccountManager__ClearSession
               (bool_conflict clearRefreshToken,MethodInfo *method)

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
  
  if (DAT_05704bfb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bfb = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_0418c5bb;
LAB_0418c7ed:
    il2cpp_init_class();
    if (DAT_05704bcc != '\0') goto LAB_0418c5c8;
LAB_0418c7ff:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bcc = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto LAB_0418c5d8;
LAB_0418c822:
    il2cpp_init_class();
    if (DAT_05704c4f != '\0') goto LAB_0418c5e5;
LAB_0418c834:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c4f = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_0418c7ed;
LAB_0418c5bb:
    if (DAT_05704bcc == '\0') goto LAB_0418c7ff;
LAB_0418c5c8:
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto LAB_0418c822;
LAB_0418c5d8:
    if (DAT_05704c4f == '\0') goto LAB_0418c834;
LAB_0418c5e5:
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar4 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x68),(MethodInfo *)0x0)
  ;
  bVar3 = 1;
  if ((char)bVar4 == '\0') {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    goto joined_r0x0418c8b5;
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
    if (DAT_05704bcd != '\0') goto LAB_0418c881;
LAB_0418cb0d:
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bcd = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    if (DAT_05704bcd == '\0') goto LAB_0418cb0d;
LAB_0418c881:
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar4 = System_String__IsNullOrEmpty
                    (*(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xb0),(MethodInfo *)0x0)
  ;
  bVar3 = (byte)bVar4 ^ 1;
  iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
joined_r0x0418c8b5:
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704c57 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c57 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  lVar6 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(undefined8 *)(lVar6 + 0x68) = 0;
  il2cpp_runtime_glue(lVar6 + 0x68,0);
  if (DAT_05704c59 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c59 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    lVar6 = TypeInfo_AccountManager;
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    lVar6 = TypeInfo_AccountManager;
  }
  TypeInfo_AccountManager = lVar6;
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar6 = TypeInfo_AccountManager;
    *(undefined8 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x70) = 0;
  }
  else {
    *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x70) = 0;
  }
  if (DAT_05704c58 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c58 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    lVar6 = TypeInfo_AccountManager;
  }
  else {
    iVar1 = *(int *)(lVar6 + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar6 = TypeInfo_AccountManager;
  }
  lVar6 = *(long *)(lVar6 + 0xb8);
  *(undefined8 *)(lVar6 + 0x78) = 0;
  il2cpp_runtime_glue(lVar6 + 0x78,0);
  if (DAT_05704c5a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c5a = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    lVar6 = TypeInfo_AccountManager;
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    lVar6 = TypeInfo_AccountManager;
  }
  TypeInfo_AccountManager = lVar6;
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar6 = TypeInfo_AccountManager;
    *(undefined8 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x80) = 0;
  }
  else {
    *(undefined8 *)(*(long *)(lVar6 + 0xb8) + 0x80) = 0;
  }
  if (DAT_05704c56 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c56 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    lVar6 = TypeInfo_AccountManager;
  }
  else {
    iVar1 = *(int *)(lVar6 + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    lVar6 = TypeInfo_AccountManager;
  }
  lVar6 = *(long *)(lVar6 + 0xb8);
  *(undefined8 *)(lVar6 + 0x88) = 0;
  pMVar7 = (MethodInfo *)(lVar6 + 0x88);
  il2cpp_runtime_glue(pMVar7,0);
  ApplicationManagers_AccountManager__ClearProfileResponse(pMVar7);
  if (DAT_05704c5b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c5b = '\x01';
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
    il2cpp_init_class();
    lVar6 = TypeInfo_AccountManager;
    lVar5 = *(long *)(TypeInfo_AccountManager + 0xb8);
    *(undefined8 *)(lVar5 + 0x90) = 0;
    uVar2 = extraout_RDX_01;
  }
  else {
    lVar5 = *(long *)(lVar6 + 0xb8);
    *(undefined8 *)(lVar5 + 0x90) = 0;
  }
  if ((char)clearRefreshToken == '\0') {
    iVar1 = *(int *)(lVar6 + 0xe4);
  }
  else {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      il2cpp_init_class();
      lVar5 = *(long *)(TypeInfo_AccountManager + 0xb8);
    }
    *(undefined8 *)(lVar5 + 0xb0) = 0;
    pMVar7 = (MethodInfo *)(lVar5 + 0xb0);
    il2cpp_runtime_glue(pMVar7,0);
    ApplicationManagers_AccountManager__DeleteRefreshToken(pMVar7);
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
    uVar2 = extraout_RDX_02;
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    uVar2 = extraout_RDX_03;
  }
  if (DAT_05704c53 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704c53 = '\x01';
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
    il2cpp_init_class();
    lVar6 = TypeInfo_AccountManager;
    lVar5 = *(long *)(TypeInfo_AccountManager + 0xb8);
    *(undefined1 *)(lVar5 + 0x98) = 0;
    uVar2 = extraout_RDX_05;
  }
  else {
    lVar5 = *(long *)(lVar6 + 0xb8);
    *(undefined1 *)(lVar5 + 0x98) = 0;
  }
  if (bVar3 != 0) {
    if (*(int *)(lVar6 + 0xe4) == 0) {
      il2cpp_init_class();
      lVar6 = *(long *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 200);
      uVar2 = extraout_RDX_06;
    }
    else {
      lVar6 = *(long *)(lVar5 + 200);
    }
    if (lVar6 != 0) {
      (**(code **)(lVar6 + 0x18))
                (*(undefined8 *)(lVar6 + 0x40),*(undefined8 *)(lVar6 + 0x28),uVar2,
                 *(code **)(lVar6 + 0x18));
      return;
    }
  }
  return;
}


// ApplicationManagers.AccountManager$$GetRefreshTokenPath
// il2cpp: System_String_o* ApplicationManagers_AccountManager__GetRefreshTokenPath (const MethodInfo* method);
// 0x418af20

System_String_o * ApplicationManagers_AccountManager__GetRefreshTokenPath(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (DAT_05704bfc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_FolderPaths);
    il2cpp_init_method_metadata(&"/AccountRefresh.dat");
    DAT_05704bfc = '\x01';
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = System_String__Concat
                     (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x30),"/AccountRefresh.dat",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// ApplicationManagers.AccountManager$$SaveRefreshToken
// il2cpp: void ApplicationManagers_AccountManager__SaveRefreshToken (const MethodInfo* method);
// 0x418b950

void ApplicationManagers_AccountManager__SaveRefreshToken(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *path;
  
  if (DAT_05704bfd == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_DeviceLockedEncryption);
    il2cpp_init_method_metadata(&TypeInfo_FolderPaths);
    DAT_05704bfd = '\x01';
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  System_IO_Directory__CreateDirectory
            (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x30),(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = *(System_String_o **)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0xb0);
  if (*(int *)(TypeInfo_DeviceLockedEncryption + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = Utility_DeviceLockedEncryption__Encrypt(pSVar1,(MethodInfo *)0x0);
  if (DAT_05704bfc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_FolderPaths);
    il2cpp_init_method_metadata(&"/AccountRefresh.dat");
    DAT_05704bfc = '\x01';
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  path = System_String__Concat
                   (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x30),"/AccountRefresh.dat",
                    (MethodInfo *)0x0);
  System_IO_File__WriteAllText(path,pSVar1,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager$$LoadRefreshToken
// il2cpp: void ApplicationManagers_AccountManager__LoadRefreshToken (const MethodInfo* method);
// 0x418af90

void ApplicationManagers_AccountManager__LoadRefreshToken(MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  
  if (DAT_05704bfe == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&TypeInfo_DeviceLockedEncryption);
    DAT_05704bfe = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704bfc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_FolderPaths);
    il2cpp_init_method_metadata(&"/AccountRefresh.dat");
    DAT_05704bfc = '\x01';
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = System_String__Concat
                     (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x30),"/AccountRefresh.dat",
                      (MethodInfo *)0x0);
  bVar2 = System_IO_File__Exists(pSVar3,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    pSVar3 = System_IO_File__ReadAllText(pSVar3,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_DeviceLockedEncryption + 0xe4) == 0) {
      il2cpp_init_class();
    }
    pSVar3 = Utility_DeviceLockedEncryption__Decrypt(pSVar3,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
      il2cpp_init_class();
    }
    lVar1 = *(long *)(TypeInfo_AccountManager + 0xb8);
    *(System_String_o **)(lVar1 + 0xb0) = pSVar3;
    il2cpp_runtime_glue(lVar1 + 0xb0,pSVar3);
  }
  return;
}


// ApplicationManagers.AccountManager$$DeleteRefreshToken
// il2cpp: void ApplicationManagers_AccountManager__DeleteRefreshToken (const MethodInfo* method);
// 0x418b810

void ApplicationManagers_AccountManager__DeleteRefreshToken(MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *path;
  
  if (DAT_05704bff == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    DAT_05704bff = '\x01';
  }
  if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_05704bfc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_FolderPaths);
    il2cpp_init_method_metadata(&"/AccountRefresh.dat");
    DAT_05704bfc = '\x01';
  }
  if (*(int *)(TypeInfo_FolderPaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  path = System_String__Concat
                   (*(System_String_o **)(*(long *)(TypeInfo_FolderPaths + 0xb8) + 0x30),"/AccountRefresh.dat",
                    (MethodInfo *)0x0);
  bVar1 = System_IO_File__Exists(path,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    System_IO_File__Delete(path,(MethodInfo *)0x0);
  }
  return;
}


// ApplicationManagers.AccountManager$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___ctor (ApplicationManagers_AccountManager_o* __this, const MethodInfo* method);
// 0x418ebf0

void ApplicationManagers_AccountManager___ctor
               (ApplicationManagers_AccountManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager$$.cctor
// il2cpp: void ApplicationManagers_AccountManager___cctor (const MethodInfo* method);
// 0x418ec00

void ApplicationManagers_AccountManager___cctor(MethodInfo *method)

{
  int iVar1;
  long lVar2;
  System_Collections_Generic_IEqualityComparer_T__o *comparer;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  System_Collections_Generic_List_object__o *pSVar3;
  System_Collections_Generic_HashSet_object__o *__this_00;
  
  if (DAT_05704c00 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_System_String);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__string);
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Add);
    il2cpp_init_method_metadata(&MethodInfo_HashSet_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_HashSet_string);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Action_3_Boolean_String_SimpleJSON);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_Action_2_Boolean_String);
    il2cpp_init_method_metadata(&TypeInfo_List_Action_bool__string__JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_List_Action_bool__string);
    il2cpp_init_method_metadata(&TypeInfo_StringComparer);
    il2cpp_init_method_metadata(&"google");
    il2cpp_init_method_metadata(&"email_password");
    il2cpp_init_method_metadata(&"discord");
    il2cpp_init_method_metadata(&"https://aottg2.com");
    DAT_05704c00 = '\x01';
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__string);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this,MethodInfo_Dictionary_2_System_String_System_String);
  lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(System_Collections_Generic_Dictionary_object__object__o **)(lVar2 + 0x20) = __this;
  il2cpp_runtime_glue(lVar2 + 0x20,__this);
  pSVar3 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_Action_bool__string);
  System_Collections_Generic_List<object>___ctor(pSVar3,MethodInfo_List_1_System_Action_2_Boolean_String);
  lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(System_Collections_Generic_List_object__o **)(lVar2 + 0x30) = pSVar3;
  il2cpp_runtime_glue(lVar2 + 0x30,pSVar3);
  pSVar3 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_Action_bool__string__JSONNode);
  System_Collections_Generic_List<object>___ctor(pSVar3,MethodInfo_List_1_System_Action_3_Boolean_String_SimpleJSON);
  lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(System_Collections_Generic_List_object__o **)(lVar2 + 0x48) = pSVar3;
  il2cpp_runtime_glue(lVar2 + 0x48,pSVar3);
  lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(undefined8 *)(lVar2 + 0x60) = "https://aottg2.com";
  il2cpp_runtime_glue(lVar2 + 0x60);
  *(undefined1 *)(*(long *)(TypeInfo_AccountManager + 0xb8) + 0x99) = 1;
  if (*(int *)(TypeInfo_StringComparer + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (DAT_0570136f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringComparer);
    DAT_0570136f = '\x01';
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_StringComparer + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  comparer = *(System_Collections_Generic_IEqualityComparer_T__o **)
              (*(long *)(TypeInfo_StringComparer + 0xb8) + 0x18);
  __this_00 = (System_Collections_Generic_HashSet_object__o *)il2cpp_runtime_glue(TypeInfo_HashSet_string);
  System_Collections_Generic_HashSet<object>___ctor(__this_00,comparer,MethodInfo_HashSet_1_System_String);
  if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  System_Collections_Generic_HashSet<object>__Add(__this_00,"email_password",MethodInfo_Boolean_Add);
  System_Collections_Generic_HashSet<object>__Add(__this_00,"discord",MethodInfo_Boolean_Add);
  System_Collections_Generic_HashSet<object>__Add(__this_00,"google",MethodInfo_Boolean_Add);
  lVar2 = *(long *)(TypeInfo_AccountManager + 0xb8);
  *(System_Collections_Generic_HashSet_object__o **)(lVar2 + 0xb8) = __this_00;
  il2cpp_runtime_glue(lVar2 + 0xb8,__this_00);
  return;
}


