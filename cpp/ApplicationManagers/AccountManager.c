// Type: ApplicationManagers.AccountManager
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers/AccountManager.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.AccountManager.<>c$$.cctor
// il2cpp: void ApplicationManagers_AccountManager___c___cctor (const MethodInfo* method);
// 0x18235e730

void ApplicationManagers_AccountManager___c___cctor(MethodInfo *method)

{
  ApplicationManagers_AccountManager___c_o *__this;
  
  if (Il2CppMethodInitialized_18434790a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager_c);
    Il2CppMethodInitialized_18434790a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_ApplicationManagers_AccountManager_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_AccountManager_c->static_fields->__9,__this);
  return;
}


// ApplicationManagers.AccountManager.<>c$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c___ctor (ApplicationManagers_AccountManager___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
ApplicationManagers_AccountManager___c___ctor(ApplicationManagers_AccountManager___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c$$<Register>b__154_1
// il2cpp: void ApplicationManagers_AccountManager___c___Register_b__154_1 (ApplicationManagers_AccountManager___c_o* __this, System_String_o* t, const MethodInfo* method);
// 0x18235e170

void ApplicationManagers_AccountManager___c___Register_b__154_1
               (ApplicationManagers_AccountManager___c_o *__this,System_String_o *t,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434790b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_18434790b = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  il2cpp_runtime_helper_182320550(t,0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass10_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass10_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass10_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
ApplicationManagers_AccountManager___c__DisplayClass10_0___ctor(ApplicationManagers_AccountManager___c__DisplayClass10_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass10_0$$<ExchangeOAuthCode>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass10_0___ExchangeOAuthCode_b__0 (ApplicationManagers_AccountManager___c__DisplayClass10_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, const MethodInfo* method);
// 0x180b8ac00

void
ApplicationManagers_AccountManager___c__DisplayClass10_0___ExchangeOAuthCode_b__0(ApplicationManagers_AccountManager___c__DisplayClass10_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, MethodInfo* method)

{
  (__this->fields).result = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).result,value);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass154_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass154_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass154_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
ApplicationManagers_AccountManager___c__DisplayClass154_0___ctor(ApplicationManagers_AccountManager___c__DisplayClass154_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass154_0$$<Register>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass154_0___Register_b__0 (ApplicationManagers_AccountManager___c__DisplayClass154_0_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x18235e1c0

void ApplicationManagers_AccountManager___c__DisplayClass154_0___Register_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass154_0_o *__this,bool success,
               System_String_o *error,MethodInfo *method)

{
  System_Action_bool__string__o *pSVar1;
  undefined7 in_register_00000011;
  undefined8 uVar2;
  
  if (Il2CppMethodInitialized_18434790c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_18434790c = '\x01';
  }
  if (success) {
    pSVar1 = (__this->fields).onComplete;
    if (pSVar1 == (System_Action_bool__string__o *)0x0) {
      return;
    }
    error = (System_String_o *)0x0;
    uVar2 = CONCAT71(in_register_00000011,1);
  }
  else {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    if (Il2CppMethodInitialized_1843478fe == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      Il2CppMethodInitialized_1843478fe = '\x01';
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    TypeInfo_ApplicationManagers_AccountManager->static_fields->_PendingEmail_k__BackingField =
         (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_ApplicationManagers_AccountManager->static_fields->_PendingEmail_k__BackingField,
               (void *)0x0);
    pSVar1 = (__this->fields).onComplete;
    if (pSVar1 == (System_Action_bool__string__o *)0x0) {
      return;
    }
    uVar2 = 0;
  }
  (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,uVar2,error,(pSVar1->fields).method);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass156_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass156_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass156_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
ApplicationManagers_AccountManager___c__DisplayClass156_0___ctor(ApplicationManagers_AccountManager___c__DisplayClass156_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass156_0$$<Refresh>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass156_0___Refresh_b__0 (ApplicationManagers_AccountManager___c__DisplayClass156_0_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x18235e2c0

void ApplicationManagers_AccountManager___c__DisplayClass156_0___Refresh_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass156_0_o *__this,bool success,
               System_String_o *error,MethodInfo *method)

{
  System_Action_bool__string__o *pSVar1;
  
  if (Il2CppMethodInitialized_18434790d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_18434790d = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_1843478ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478ff = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_IsRefreshInProgress_k__BackingField = false;
  pSVar1 = (__this->fields).onComplete;
  if (pSVar1 != (System_Action_bool__string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)
              ((pSVar1->fields).method_code,success,error,(pSVar1->fields).method);
  }
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass161_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass161_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass161_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
ApplicationManagers_AccountManager___c__DisplayClass161_0___ctor(ApplicationManagers_AccountManager___c__DisplayClass161_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass161_0$$<VerifyEmail>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass161_0___VerifyEmail_b__0 (ApplicationManagers_AccountManager___c__DisplayClass161_0_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x18235e380

void ApplicationManagers_AccountManager___c__DisplayClass161_0___VerifyEmail_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass161_0_o *__this,bool success,
               System_String_o *error,MethodInfo *method)

{
  System_Action_bool__string__o *pSVar1;
  
  if (Il2CppMethodInitialized_18434790e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_18434790e = '\x01';
  }
  if (success) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    il2cpp_runtime_helper_182320550(0,0);
  }
  pSVar1 = (__this->fields).onComplete;
  if (pSVar1 != (System_Action_bool__string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)
              ((pSVar1->fields).method_code,success,error,(pSVar1->fields).method);
  }
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass164_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass164_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass164_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
ApplicationManagers_AccountManager___c__DisplayClass164_0___ctor(ApplicationManagers_AccountManager___c__DisplayClass164_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass164_0$$<GetAuthMethods>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass164_0___GetAuthMethods_b__0 (ApplicationManagers_AccountManager___c__DisplayClass164_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, const MethodInfo* method);
// 0x180b8ac00

void
ApplicationManagers_AccountManager___c__DisplayClass164_0___GetAuthMethods_b__0(ApplicationManagers_AccountManager___c__DisplayClass164_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, MethodInfo* method)

{
  (__this->fields).result = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).result,value);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass165_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass165_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass165_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
ApplicationManagers_AccountManager___c__DisplayClass165_0___ctor(ApplicationManagers_AccountManager___c__DisplayClass165_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass165_0$$<SendApiGet>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass165_0___SendApiGet_b__0 (ApplicationManagers_AccountManager___c__DisplayClass165_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* result, const MethodInfo* method);
// 0x18235e400

void
ApplicationManagers_AccountManager___c__DisplayClass165_0___SendApiGet_b__0(ApplicationManagers_AccountManager___c__DisplayClass165_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* result, MethodInfo* method)

{
  System_Action_AottgApiResult__o *pSVar1;
  
  pSVar1 = (__this->fields).onComplete;
  (__this->fields).done = true;
  if (pSVar1 != (System_Action_AottgApiResult__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,result,(pSVar1->fields).method);
    return;
  }
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass167_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass167_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass167_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
ApplicationManagers_AccountManager___c__DisplayClass167_0___ctor(ApplicationManagers_AccountManager___c__DisplayClass167_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass167_0$$<SendApiJson>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass167_0___SendApiJson_b__0 (ApplicationManagers_AccountManager___c__DisplayClass167_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* result, const MethodInfo* method);
// 0x18235e400

void ApplicationManagers_AccountManager___c__DisplayClass167_0___SendApiJson_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass167_0_o *__this,
               ApplicationManagers_Api_AottgApiResult_o *result,MethodInfo *method)

{
  System_Action_AottgApiResult__o *pSVar1;
  
  pSVar1 = (__this->fields).onComplete;
  (__this->fields).done = true;
  if (pSVar1 != (System_Action_AottgApiResult__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,result,(pSVar1->fields).method);
    return;
  }
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass171_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass171_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass171_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
ApplicationManagers_AccountManager___c__DisplayClass171_0___ctor(ApplicationManagers_AccountManager___c__DisplayClass171_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass171_0$$<DeleteJson>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass171_0___DeleteJson_b__0 (ApplicationManagers_AccountManager___c__DisplayClass171_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, const MethodInfo* method);
// 0x180b8ac00

void
ApplicationManagers_AccountManager___c__DisplayClass171_0___DeleteJson_b__0(ApplicationManagers_AccountManager___c__DisplayClass171_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, MethodInfo* method)

{
  (__this->fields).result = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).result,value);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass172_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass172_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass172_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
ApplicationManagers_AccountManager___c__DisplayClass172_0___ctor(ApplicationManagers_AccountManager___c__DisplayClass172_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass172_0$$<PostJson>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass172_0___PostJson_b__0 (ApplicationManagers_AccountManager___c__DisplayClass172_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, const MethodInfo* method);
// 0x180b8ac00

void
ApplicationManagers_AccountManager___c__DisplayClass172_0___PostJson_b__0(ApplicationManagers_AccountManager___c__DisplayClass172_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, MethodInfo* method)

{
  (__this->fields).result = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).result,value);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass50_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass50_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass50_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
ApplicationManagers_AccountManager___c__DisplayClass50_0___ctor(ApplicationManagers_AccountManager___c__DisplayClass50_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass50_0$$<GetProfileJson>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass50_0___GetProfileJson_b__0 (ApplicationManagers_AccountManager___c__DisplayClass50_0_o* __this, bool success, System_String_o* error, SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x18235e420

void ApplicationManagers_AccountManager___c__DisplayClass50_0___GetProfileJson_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass50_0_o *__this,bool success,
               System_String_o *error,SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  System_Action_bool__string__o *pSVar1;
  
  if (Il2CppMethodInitialized_18434790f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_18434790f = '\x01';
  }
  if (success) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    ApplicationManagers_AccountManager__ApplyProfileResponse(node,(MethodInfo *)0x0);
  }
  pSVar1 = (__this->fields).onComplete;
  if (pSVar1 != (System_Action_bool__string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)
              ((pSVar1->fields).method_code,success,error,(pSVar1->fields).method);
  }
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass51_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass51_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass51_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
ApplicationManagers_AccountManager___c__DisplayClass51_0___ctor(ApplicationManagers_AccountManager___c__DisplayClass51_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass51_0$$<PatchProfileJson>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass51_0___PatchProfileJson_b__0 (ApplicationManagers_AccountManager___c__DisplayClass51_0_o* __this, bool success, System_String_o* error, SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x18235e4a0

void ApplicationManagers_AccountManager___c__DisplayClass51_0___PatchProfileJson_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass51_0_o *__this,bool success,
               System_String_o *error,SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  System_Action_bool__string__o *pSVar1;
  
  if (Il2CppMethodInitialized_184347910 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_184347910 = '\x01';
  }
  if (success) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    ApplicationManagers_AccountManager__ApplyProfileResponse(node,(MethodInfo *)0x0);
    ApplicationManagers_AccountManager__MarkOwnProfileCacheFresh((MethodInfo *)0x0);
  }
  pSVar1 = (__this->fields).onComplete;
  if (pSVar1 != (System_Action_bool__string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)
              ((pSVar1->fields).method_code,success,error,(pSVar1->fields).method);
  }
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass52_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass52_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass52_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
ApplicationManagers_AccountManager___c__DisplayClass52_0___ctor(ApplicationManagers_AccountManager___c__DisplayClass52_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass52_0$$<GetCharacterInfoJson>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass52_0___GetCharacterInfoJson_b__0 (ApplicationManagers_AccountManager___c__DisplayClass52_0_o* __this, bool success, System_String_o* error, SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x18235e520

void ApplicationManagers_AccountManager___c__DisplayClass52_0___GetCharacterInfoJson_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass52_0_o *__this,bool success,
               System_String_o *error,SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  System_Action_bool__string__JSONNode__o *pSVar1;
  bool bVar2;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  
  if (Il2CppMethodInitialized_184347911 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"characterInfo");
    Il2CppMethodInitialized_184347911 = '\x01';
  }
  pSVar1 = (__this->fields).onComplete;
  if (pSVar1 == (System_Action_bool__string__JSONNode__o *)0x0) {
    return;
  }
  if (success) {
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"characterInfo");
      goto label_18235e5b8;
    }
  }
  pSVar3 = (System_Xml_Schema_XmlSchema_o *)0x0;
label_18235e5b8:
  (*(code *)(pSVar1->fields).invoke_impl)
            ((pSVar1->fields).method_code,success,error,pSVar3,(pSVar1->fields).method);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass53_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass53_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass53_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
ApplicationManagers_AccountManager___c__DisplayClass53_0___ctor(ApplicationManagers_AccountManager___c__DisplayClass53_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass53_0$$<PutCharacterInfoJson>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass53_0___PutCharacterInfoJson_b__0 (ApplicationManagers_AccountManager___c__DisplayClass53_0_o* __this, bool success, System_String_o* error, SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x18235e5e0

void ApplicationManagers_AccountManager___c__DisplayClass53_0___PutCharacterInfoJson_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass53_0_o *__this,bool success,
               System_String_o *error,SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  System_Action_bool__string__JSONNode__o *pSVar1;
  bool bVar2;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  
  if (Il2CppMethodInitialized_184347912 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"characterInfo");
    Il2CppMethodInitialized_184347912 = '\x01';
  }
  if (success) {
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (!bVar2) goto label_18235e6ce;
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"characterInfo");
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (!bVar2) goto label_18235e6ce;
    pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"characterInfo");
  }
  else {
label_18235e6ce:
    pSVar3 = (System_Xml_Schema_XmlSchema_o *)(__this->fields).fallbackCharacterInfo;
    if (!success) goto label_18235e6f6;
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  ApplicationManagers_AccountManager__MarkCharacterInfoCacheFresh
            ((SimpleJSONFixed_JSONNode_o *)pSVar3,(MethodInfo *)0x0);
label_18235e6f6:
  pSVar1 = (__this->fields).onComplete;
  if (pSVar1 != (System_Action_bool__string__JSONNode__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)
              ((pSVar1->fields).method_code,success,error,pSVar3,(pSVar1->fields).method);
  }
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass54_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass54_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass54_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
ApplicationManagers_AccountManager___c__DisplayClass54_0___ctor(ApplicationManagers_AccountManager___c__DisplayClass54_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass54_0$$<SendMeJson>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass54_0___SendMeJson_b__0 (ApplicationManagers_AccountManager___c__DisplayClass54_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, const MethodInfo* method);
// 0x180b8ac00

void
ApplicationManagers_AccountManager___c__DisplayClass54_0___SendMeJson_b__0(ApplicationManagers_AccountManager___c__DisplayClass54_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, MethodInfo* method)

{
  (__this->fields).result = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).result,value);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass55_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass55_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass55_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
ApplicationManagers_AccountManager___c__DisplayClass55_0___ctor(ApplicationManagers_AccountManager___c__DisplayClass55_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass55_0$$<SendMeReadJson>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass55_0___SendMeReadJson_b__0 (ApplicationManagers_AccountManager___c__DisplayClass55_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, const MethodInfo* method);
// 0x180b8ac00

void
ApplicationManagers_AccountManager___c__DisplayClass55_0___SendMeReadJson_b__0(ApplicationManagers_AccountManager___c__DisplayClass55_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, MethodInfo* method)

{
  (__this->fields).result = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).result,value);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass8_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass8_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
ApplicationManagers_AccountManager___c__DisplayClass8_0___ctor(ApplicationManagers_AccountManager___c__DisplayClass8_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass8_0$$<OAuthFlow>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass8_0___OAuthFlow_b__0 (ApplicationManagers_AccountManager___c__DisplayClass8_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, const MethodInfo* method);
// 0x180b8ac00

void
ApplicationManagers_AccountManager___c__DisplayClass8_0___OAuthFlow_b__0(ApplicationManagers_AccountManager___c__DisplayClass8_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, MethodInfo* method)

{
  (__this->fields).result = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).result,value);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass9_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass9_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass9_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
ApplicationManagers_AccountManager___c__DisplayClass9_0___ctor(ApplicationManagers_AccountManager___c__DisplayClass9_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass9_0$$<PollUnityOAuth>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass9_0___PollUnityOAuth_b__0 (ApplicationManagers_AccountManager___c__DisplayClass9_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, const MethodInfo* method);
// 0x180b8ac00

void
ApplicationManagers_AccountManager___c__DisplayClass9_0___PollUnityOAuth_b__0(ApplicationManagers_AccountManager___c__DisplayClass9_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, MethodInfo* method)

{
  (__this->fields).result = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields).result,value);
  return;
}


// ApplicationManagers.AccountManager.<DeleteJson>d__171$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__DeleteJson_d__171___ctor (ApplicationManagers_AccountManager__DeleteJson_d__171_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
ApplicationManagers_AccountManager__DeleteJson_d__171___ctor(ApplicationManagers_AccountManager__DeleteJson_d__171_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<DeleteJson>d__171$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__DeleteJson_d__171__System_IDisposable_Dispose (ApplicationManagers_AccountManager__DeleteJson_d__171_o* __this, const MethodInfo* method);
// 0x180547020

void
ApplicationManagers_AccountManager__DeleteJson_d__171__System_IDisposable_Dispose(ApplicationManagers_AccountManager__DeleteJson_d__171_o* __this, MethodInfo* method)

{
  return;
}


// ApplicationManagers.AccountManager.<DeleteJson>d__171$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__DeleteJson_d__171__MoveNext (ApplicationManagers_AccountManager__DeleteJson_d__171_o* __this, const MethodInfo* method);
// 0x182358720

bool ApplicationManagers_AccountManager__DeleteJson_d__171__MoveNext
               (ApplicationManagers_AccountManager__DeleteJson_d__171_o *__this,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_AccountManager_o *__this_00;
  System_String_o *path;
  System_String_o *bearer;
  System_Action_bool__string__o *pSVar2;
  ApplicationManagers_AccountManager___c__DisplayClass171_0_o *pAVar3;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  Il2CppObject *value;
  
  if (Il2CppMethodInitialized_184347913 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgApiResult);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass171_0_DeleteJson_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass171_0);
    il2cpp_codegen_initialize_runtime_metadata(&"unknown_error");
    il2cpp_codegen_initialize_runtime_metadata(&"DELETE");
    Il2CppMethodInitialized_184347913 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 0) {
    if (iVar1 == 1) {
      pAVar3 = (__this->fields).__8__1;
      (__this->fields).__1__state = -1;
      if (pAVar3 == (ApplicationManagers_AccountManager___c__DisplayClass171_0_o *)0x0) goto label_18235891e;
      if (((pAVar3->fields).result == (ApplicationManagers_Api_AottgApiResult_o *)0x0) ||
         ((((pAVar3->fields).result)->fields)._Success_k__BackingField == false)) {
        pSVar2 = (__this->fields).onComplete;
        if (pSVar2 != (System_Action_bool__string__o *)0x0) {
          if ((pAVar3->fields).result == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
            (*(code *)(pSVar2->fields).invoke_impl)
                      ((pSVar2->fields).method_code,0,"unknown_error",(pSVar2->fields).method);
          }
          else {
            (*(code *)(pSVar2->fields).invoke_impl)
                      ((pSVar2->fields).method_code,0,
                       (((pAVar3->fields).result)->fields)._Error_k__BackingField,(pSVar2->fields).method);
          }
        }
      }
      else {
        pSVar2 = (__this->fields).onComplete;
        if (pSVar2 != (System_Action_bool__string__o *)0x0) {
          (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,1,0,(pSVar2->fields).method);
        }
      }
    }
    return false;
  }
  __this_00 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  pAVar3 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass171_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pAVar3,(MethodInfo *)0x0);
  (__this->fields).__8__1 = pAVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__8__1,pAVar3);
  pAVar3 = (__this->fields).__8__1;
  if (pAVar3 != (ApplicationManagers_AccountManager___c__DisplayClass171_0_o *)0x0) {
    (pAVar3->fields).result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(pAVar3->fields).result,(void *)0x0);
    path = (__this->fields).path;
    bearer = (__this->fields).bearer;
    pAVar3 = (__this->fields).__8__1;
    __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgApiResult);
    System_Action_object____ctor
              (__this_01,(Il2CppObject *)pAVar3,
               (intptr_t)MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass171_0_DeleteJson_b__0,
               (MethodInfo *)0x0);
    if (__this_00 != (ApplicationManagers_AccountManager_o *)0x0) {
      value = (Il2CppObject *)
              ApplicationManagers_AccountManager__SendApiJson
                        (__this_00,"DELETE",path,(System_String_o *)0x0,bearer,false,
                         (System_Action_AottgApiResult__o *)__this_01,true,(System_Nullable_int__o)0x0,
                         (MethodInfo *)0x0);
      (__this->fields).__2__current = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,value);
      (__this->fields).__1__state = 1;
      return true;
    }
  }
label_18235891e:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager.<DeleteJson>d__171$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__DeleteJson_d__171__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__DeleteJson_d__171_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_AccountManager__DeleteJson_d__171__System_Collections_Generic_IEnumerator_System_Object__get_Current(ApplicationManagers_AccountManager__DeleteJson_d__171_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<DeleteJson>d__171$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__DeleteJson_d__171__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__DeleteJson_d__171_o* __this, const MethodInfo* method);
// 0x182358930

void ApplicationManagers_AccountManager__DeleteJson_d__171__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__DeleteJson_d__171_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_ApplicationManagers_AccountManager_DeleteJson_d__171_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// ApplicationManagers.AccountManager.<DeleteJson>d__171$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__DeleteJson_d__171__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__DeleteJson_d__171_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_AccountManager__DeleteJson_d__171__System_Collections_IEnumerator_get_Current(ApplicationManagers_AccountManager__DeleteJson_d__171_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<ExchangeOAuthCode>d__10$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10___ctor (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10___ctor(ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<ExchangeOAuthCode>d__10$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10__System_IDisposable_Dispose (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o* __this, const MethodInfo* method);
// 0x180547020

void
ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10__System_IDisposable_Dispose(ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o* __this, MethodInfo* method)

{
  return;
}


// ApplicationManagers.AccountManager.<ExchangeOAuthCode>d__10$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10__MoveNext (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o* __this, const MethodInfo* method);
// 0x182358fb0
// eh: try 0x18235923d..0x182359399 -> pad 0x18333cca0 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 66 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18235929c: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x1823592a1: test rcx, rcx
// asm:   0x1823592a4: je 0x182359381
// asm:   0x1823592aa: mov rax, qword ptr [rcx]
// asm:   0x1823592ad: mov rdx, qword ptr [rax + 0x190]
// asm:   0x1823592b4: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x1823592ba: mov rbx, rax
// asm:   0x1823592bd: lea rcx, [rip + 0x1d2a8d4]  ; "AccountManager: failed to apply OAuth session response: "
// asm:   0x1823592c4: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1823592c9: mov rcx, rax
// asm:   0x1823592cc: xor r8d, r8d
// asm:   0x1823592cf: mov rdx, rbx
// asm:   0x1823592d2: call 0x181969e50  ; System_String__Concat()
// asm:   0x1823592d7: mov rbx, rax
// asm:   0x1823592da: lea rcx, [rip + 0x1da2157]  ; TypeInfo_UnityEngine_Debug
// asm:   0x1823592e1: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1823592e6: cmp dword ptr [rax + 0xe4], 0
// asm:   0x1823592ed: jne 0x1823592f7
// asm:   0x1823592ef: mov rcx, rax
// asm:   0x1823592f2: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x1823592f7: xor edx, edx
// asm:   0x1823592f9: mov rcx, rbx
// asm:   0x1823592fc: call 0x182ec3130  ; UnityEngine_Debug__LogError()
// asm:   0x182359301: lea rcx, [rip + 0x1d603b0]  ; TypeInfo_ApplicationManagers_AccountManager
// asm:   0x182359308: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18235930d: cmp dword ptr [rax + 0xe4], 0
// asm:   0x182359314: jne 0x18235931e
// asm:   0x182359316: mov rcx, rax
// asm:   0x182359319: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x18235931e: lea rcx, [rip + 0x1d39f03]  ; "bad_response"
// asm:   0x182359325: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18235932a: mov rdx, rax
// asm:   0x18235932d: xor r8d, r8d
// asm:   0x18235935d: mov rbx, qword ptr [rip + 0x1d22ae4]  ; "unknown_error"
// asm:   0x182359379: xor r8d, r8d
// asm:   0x18235937c: mov rdx, rbx
// asm:   0x18235937f: jmp 0x182359330
// asm:   0x18333cca0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x18333cca5: push rbx
// asm:   0x18333cca6: push rbp
// asm:   0x18333cca7: push rdi
// asm:   0x18333cca8: sub rsp, 0x50
// asm:   0x18333ccac: mov rbp, rdx
// asm:   0x18333ccaf: mov rdi, qword ptr [rbp + 0x58]
// asm:   0x18333ccb3: mov rax, qword ptr [rdi]
// asm:   0x18333ccb6: mov rbx, qword ptr [rax]
// asm:   0x18333ccb9: lea rcx, [rip + 0xd3c298]  ; TypeInfo_System_Exception
// asm:   0x18333ccc0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18333ccc5: mov rcx, rax
// asm:   0x18333ccc8: mov rdx, rbx
// asm:   0x18333cccb: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x18333ccd0: test al, al
// asm:   0x18333ccd2: mov rax, qword ptr [rdi]
// asm:   0x18333ccd5: je 0x18333cce7
// asm:   0x18333ccd7: mov qword ptr [rbp + 0x60], rax
// asm:   0x18333ccdb: movabs rax, 0
// asm:   0x18333cce5: jmp 0x18333ccfc
// asm:   0x18333cce7: mov qword ptr [rbp + 0x50], rax
// asm:   0x18333cceb: lea rdx, [rip + 0xc9f296]
// asm:   0x18333ccf2: lea rcx, [rbp + 0x50]
// asm:   0x18333ccf6: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18333ccfc: add rsp, 0x50
// asm:   0x18333cd00: pop rdi
// asm:   0x18333cd01: pop rbp
// asm:   0x18333cd02: pop rbx
// asm:   0x18333cd03: ret 

bool ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10__MoveNext
               (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o *__this,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_AccountManager_o *__this_00;
  ApplicationManagers_Api_AottgApiResult_o *pAVar2;
  ApplicationManagers_AccountManager___c__DisplayClass10_0_o *pAVar3;
  System_String_o *pSVar4;
  System_String_o *str2;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  Il2CppObject *value;
  bool bVar5;
  System_Nullable_int__Fields local_res8 [4];
  
  if (Il2CppMethodInitialized_184347914 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgApiResult);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass10_0_ExchangeOAuthCode_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass10_0);
    il2cpp_codegen_initialize_runtime_metadata(&"GET");
    il2cpp_codegen_initialize_runtime_metadata(&"unknown_error");
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/auth/oauth/session?code=");
    Il2CppMethodInitialized_184347914 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    pAVar3 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass10_0);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pAVar3,(MethodInfo *)0x0);
    (__this->fields).__8__1 = pAVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__8__1,pAVar3);
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pSVar4 = TypeInfo_ApplicationManagers_AccountManager->static_fields->BaseUrl;
    if (pSVar4 != (System_String_o *)0x0) {
      pSVar4 = System_String__TrimEnd_19734b0(pSVar4,0x2f,(MethodInfo *)0x0);
      str2 = UnityEngine_Networking_UnityWebRequest__EscapeURL((__this->fields).code,(MethodInfo *)0x0);
      pSVar4 = System_String__Concat_1969b70(pSVar4,"/v1/auth/oauth/session?code=",str2,(MethodInfo *)0x0);
      pAVar3 = (__this->fields).__8__1;
      if (pAVar3 != (ApplicationManagers_AccountManager___c__DisplayClass10_0_o *)0x0) {
        (pAVar3->fields).result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
        Il2CppCodeGenWriteBarrier(&(pAVar3->fields).result,(void *)0x0);
        pAVar3 = (__this->fields).__8__1;
        __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgApiResult);
        System_Action_object____ctor
                  (__this_01,(Il2CppObject *)pAVar3,
                   (intptr_t)
                   MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass10_0_ExchangeOAuthCode_b__0,
                   (MethodInfo *)0x0);
        bVar5 = (__this->fields).reportNetworkError;
        local_res8[0].hasValue = false;
        local_res8[0]._1_3_ = 0;
        local_res8[0].value = 0;
        System_Nullable_int____ctor
                  ((System_Data_SqlTypes_SqlInt32_o *)local_res8,10,MethodInfo_System_Nullable_int_ctor);
        if (__this_00 != (ApplicationManagers_AccountManager_o *)0x0) {
          value = (Il2CppObject *)
                  ApplicationManagers_AccountManager__SendApiJson
                            (__this_00,"GET",pSVar4,(System_String_o *)0x0,
                             (System_String_o *)0x0,false,(System_Action_AottgApiResult__o *)__this_01,bVar5,
                             (System_Nullable_int__o)local_res8[0],(MethodInfo *)0x0);
          (__this->fields).__2__current = value;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,value);
          (__this->fields).__1__state = 1;
          return true;
        }
      }
    }
    ThrowNullReferenceException();
  }
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    pAVar3 = (__this->fields).__8__1;
    if (pAVar3 == (ApplicationManagers_AccountManager___c__DisplayClass10_0_o *)0x0) {
label_182359381:
      ThrowNullReferenceException();
    }
    if (((pAVar3->fields).result == (ApplicationManagers_Api_AottgApiResult_o *)0x0) ||
       ((((pAVar3->fields).result)->fields)._Success_k__BackingField == false)) {
      if (pAVar3 == (ApplicationManagers_AccountManager___c__DisplayClass10_0_o *)0x0) goto label_182359381;
      pSVar4 = "unknown_error";
      if ((pAVar3->fields).result != (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
        pSVar4 = (((pAVar3->fields).result)->fields)._Error_k__BackingField;
      }
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      bVar5 = false;
    }
    else {
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      if (Il2CppMethodInitialized_1843478fc == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
        Il2CppMethodInitialized_1843478fc = '\x01';
      }
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      TypeInfo_ApplicationManagers_AccountManager->static_fields->_KeepSignedIn_k__BackingField = true;
      pAVar3 = (__this->fields).__8__1;
      if (pAVar3 == (ApplicationManagers_AccountManager___c__DisplayClass10_0_o *)0x0) {
        ThrowNullReferenceException();
      }
      pAVar2 = (pAVar3->fields).result;
      if (pAVar2 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar4 = (pAVar2->fields)._ResponseText_k__BackingField;
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      ApplicationManagers_AccountManager__ApplyAuthResponse(pSVar4,(MethodInfo *)0x0);
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      pSVar4 = (System_String_o *)0x0;
      bVar5 = true;
    }
    ApplicationManagers_AccountManager__CompleteOAuth(bVar5,pSVar4,(MethodInfo *)0x0);
  }
  return false;
}


// ApplicationManagers.AccountManager.<ExchangeOAuthCode>d__10$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current(ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<ExchangeOAuthCode>d__10$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o* __this, const MethodInfo* method);
// 0x1823593a0

void ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_ApplicationManagers_AccountManager_ExchangeOAuthCode_d__10_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// ApplicationManagers.AccountManager.<ExchangeOAuthCode>d__10$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10__System_Collections_IEnumerator_get_Current(ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<GetAuthMethods>d__164$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__GetAuthMethods_d__164___ctor (ApplicationManagers_AccountManager__GetAuthMethods_d__164_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
ApplicationManagers_AccountManager__GetAuthMethods_d__164___ctor(ApplicationManagers_AccountManager__GetAuthMethods_d__164_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<GetAuthMethods>d__164$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__GetAuthMethods_d__164__System_IDisposable_Dispose (ApplicationManagers_AccountManager__GetAuthMethods_d__164_o* __this, const MethodInfo* method);
// 0x180547020

void
ApplicationManagers_AccountManager__GetAuthMethods_d__164__System_IDisposable_Dispose(ApplicationManagers_AccountManager__GetAuthMethods_d__164_o* __this, MethodInfo* method)

{
  return;
}


// ApplicationManagers.AccountManager.<GetAuthMethods>d__164$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__GetAuthMethods_d__164__MoveNext (ApplicationManagers_AccountManager__GetAuthMethods_d__164_o* __this, const MethodInfo* method);
// 0x182359810
// eh: try 0x182359985..0x182359b3a -> pad 0x1833157d0 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 70 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182359a2a: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x182359a2f: test rcx, rcx
// asm:   0x182359a32: je 0x182359b28
// asm:   0x182359a38: mov rax, qword ptr [rcx]
// asm:   0x182359a3b: mov rdx, qword ptr [rax + 0x190]
// asm:   0x182359a42: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x182359a48: mov rbx, rax
// asm:   0x182359a4b: lea rcx, [rip + 0x1d2a306]  ; "AccountManager: failed to parse auth methods response: "
// asm:   0x182359a52: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x182359a57: mov rcx, rax
// asm:   0x182359a5a: xor r8d, r8d
// asm:   0x182359a5d: mov rdx, rbx
// asm:   0x182359a60: call 0x181969e50  ; System_String__Concat()
// asm:   0x182359a65: mov rbx, rax
// asm:   0x182359a68: lea rcx, [rip + 0x1da19c9]  ; TypeInfo_UnityEngine_Debug
// asm:   0x182359a6f: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x182359a74: cmp dword ptr [rax + 0xe4], 0
// asm:   0x182359a7b: jne 0x182359a85
// asm:   0x182359a7d: mov rcx, rax
// asm:   0x182359a80: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x182359a85: xor edx, edx
// asm:   0x182359a87: mov rcx, rbx
// asm:   0x182359a8a: call 0x182ec3130  ; UnityEngine_Debug__LogError()
// asm:   0x182359a8f: mov rax, qword ptr [rsp + 0x80]
// asm:   0x182359a97: mov rbx, qword ptr [rax + 0x30]
// asm:   0x182359a9b: test rbx, rbx
// asm:   0x182359a9e: je 0x182359a1e
// asm:   0x182359aa4: lea rcx, [rip + 0x1d3977d]  ; "bad_response"
// asm:   0x182359aab: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x182359ab0: mov r9, qword ptr [rbx + 0x28]
// asm:   0x182359ab4: mov r8, rax
// asm:   0x182359ab7: xor edx, edx
// asm:   0x182359ab9: mov rcx, qword ptr [rbx + 0x40]
// asm:   0x182359abd: call qword ptr [rbx + 0x18]
// asm:   0x182359ac0: xor al, al
// asm:   0x182359ac2: add rsp, 0x58
// asm:   0x182359ac6: pop r14
// asm:   0x182359ac8: pop rdi
// asm:   0x182359ac9: pop rsi
// asm:   0x182359aca: pop rbx
// asm:   0x182359acb: ret 
// asm:   0x1833157d0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833157d5: push rbx
// asm:   0x1833157d6: push rbp
// asm:   0x1833157d7: push rdi
// asm:   0x1833157d8: sub rsp, 0x30
// asm:   0x1833157dc: mov rbp, rdx
// asm:   0x1833157df: mov rdi, qword ptr [rbp + 0x38]
// asm:   0x1833157e3: mov rax, qword ptr [rdi]
// asm:   0x1833157e6: mov rbx, qword ptr [rax]
// asm:   0x1833157e9: lea rcx, [rip + 0xd63768]  ; TypeInfo_System_Exception
// asm:   0x1833157f0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1833157f5: mov rcx, rax
// asm:   0x1833157f8: mov rdx, rbx
// asm:   0x1833157fb: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183315800: test al, al
// asm:   0x183315802: mov rax, qword ptr [rdi]
// asm:   0x183315805: je 0x183315817
// asm:   0x183315807: mov qword ptr [rbp + 0x40], rax
// asm:   0x18331580b: movabs rax, 0
// asm:   0x183315815: jmp 0x18331582c
// asm:   0x183315817: mov qword ptr [rbp + 0x30], rax
// asm:   0x18331581b: lea rdx, [rip + 0xcc6766]
// asm:   0x183315822: lea rcx, [rbp + 0x30]
// asm:   0x183315826: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18331582c: add rsp, 0x30
// asm:   0x183315830: pop rdi
// asm:   0x183315831: pop rbp
// asm:   0x183315832: pop rbx
// asm:   0x183315833: ret 

bool ApplicationManagers_AccountManager__GetAuthMethods_d__164__MoveNext
               (ApplicationManagers_AccountManager__GetAuthMethods_d__164_o *__this,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_AccountManager_o *__this_00;
  ApplicationManagers_Api_AottgApiResult_o *pAVar2;
  System_String_o *json;
  System_Action_o *pSVar3;
  System_Action_bool__string__o *pSVar4;
  bool bVar5;
  ApplicationManagers_AccountManager___c__DisplayClass164_0_o *pAVar6;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  Il2CppObject *value;
  
  if (Il2CppMethodInitialized_184347915 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgApiResult);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass164_0_GetAuthMethods_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass164_0);
    il2cpp_codegen_initialize_runtime_metadata(&"unknown_error");
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/auth/methods");
    Il2CppMethodInitialized_184347915 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    pAVar6 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass164_0);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pAVar6,(MethodInfo *)0x0);
    (__this->fields).__8__1 = pAVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__8__1,pAVar6);
    pAVar6 = (__this->fields).__8__1;
    if (pAVar6 != (ApplicationManagers_AccountManager___c__DisplayClass164_0_o *)0x0) {
      (pAVar6->fields).result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(pAVar6->fields).result,(void *)0x0);
      pAVar6 = (__this->fields).__8__1;
      __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgApiResult);
      System_Action_object____ctor
                (__this_01,(Il2CppObject *)pAVar6,
                 (intptr_t)
                 MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass164_0_GetAuthMethods_b__0,
                 (MethodInfo *)0x0);
      if (__this_00 != (ApplicationManagers_AccountManager_o *)0x0) {
        value = (Il2CppObject *)
                ApplicationManagers_AccountManager__SendApiGet
                          (__this_00,"/v1/auth/methods",(System_String_o *)0x0,false,
                           (System_Action_AottgApiResult__o *)__this_01,(MethodInfo *)0x0);
        (__this->fields).__2__current = value;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,value);
        (__this->fields).__1__state = 1;
        return true;
      }
    }
label_182359b28:
    ThrowNullReferenceException();
  }
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    pAVar6 = (__this->fields).__8__1;
    if (pAVar6 == (ApplicationManagers_AccountManager___c__DisplayClass164_0_o *)0x0) goto label_182359b28;
    if (((pAVar6->fields).result == (ApplicationManagers_Api_AottgApiResult_o *)0x0) ||
       ((((pAVar6->fields).result)->fields)._Success_k__BackingField == false)) {
      pSVar4 = (__this->fields).onComplete;
      if (pSVar4 != (System_Action_bool__string__o *)0x0) {
        if (pAVar6 != (ApplicationManagers_AccountManager___c__DisplayClass164_0_o *)0x0) {
          if ((pAVar6->fields).result != (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
            (*(code *)(pSVar4->fields).invoke_impl)
                      ((pSVar4->fields).method_code,0,
                       (((pAVar6->fields).result)->fields)._Error_k__BackingField,(pSVar4->fields).method);
            return false;
          }
          (*(code *)(pSVar4->fields).invoke_impl)
                    ((pSVar4->fields).method_code,0,"unknown_error",(pSVar4->fields).method);
          return false;
        }
        goto label_182359b28;
      }
    }
    else {
      pAVar6 = (__this->fields).__8__1;
      if (pAVar6 == (ApplicationManagers_AccountManager___c__DisplayClass164_0_o *)0x0) {
        ThrowNullReferenceException();
      }
      pAVar2 = (pAVar6->fields).result;
      if (pAVar2 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
        ThrowNullReferenceException();
      }
      json = (pAVar2->fields)._ResponseText_k__BackingField;
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      bVar5 = ApplicationManagers_AccountManager__ApplyAuthMethodsResponse(json,(MethodInfo *)0x0);
      if (bVar5) {
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        pSVar3 = TypeInfo_ApplicationManagers_AccountManager->static_fields->OnAuthMethodsChanged;
        if (pSVar3 != (System_Action_o *)0x0) {
          (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,(pSVar3->fields).method);
        }
      }
      pSVar4 = (__this->fields).onComplete;
      if (pSVar4 != (System_Action_bool__string__o *)0x0) {
        (*(code *)(pSVar4->fields).invoke_impl)((pSVar4->fields).method_code,1,0,(pSVar4->fields).method);
      }
    }
  }
  return false;
}


// ApplicationManagers.AccountManager.<GetAuthMethods>d__164$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__GetAuthMethods_d__164__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__GetAuthMethods_d__164_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_AccountManager__GetAuthMethods_d__164__System_Collections_Generic_IEnumerator_System_Object__get_Current(ApplicationManagers_AccountManager__GetAuthMethods_d__164_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<GetAuthMethods>d__164$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__GetAuthMethods_d__164__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__GetAuthMethods_d__164_o* __this, const MethodInfo* method);
// 0x182359b40

void ApplicationManagers_AccountManager__GetAuthMethods_d__164__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__GetAuthMethods_d__164_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_ApplicationManagers_AccountManager_GetAuthMethods_d__164_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// ApplicationManagers.AccountManager.<GetAuthMethods>d__164$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__GetAuthMethods_d__164__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__GetAuthMethods_d__164_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_AccountManager__GetAuthMethods_d__164__System_Collections_IEnumerator_get_Current(ApplicationManagers_AccountManager__GetAuthMethods_d__164_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<GetCharacterInfoJson>d__52$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52___ctor (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52___ctor(ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<GetCharacterInfoJson>d__52$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52__System_IDisposable_Dispose (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52_o* __this, const MethodInfo* method);
// 0x180547020

void
ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52__System_IDisposable_Dispose(ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52_o* __this, MethodInfo* method)

{
  return;
}


// ApplicationManagers.AccountManager.<GetCharacterInfoJson>d__52$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52__MoveNext (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52_o* __this, const MethodInfo* method);
// 0x182359b80

bool ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52__MoveNext
               (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52_o *__this,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_AccountManager_o *__this_00;
  System_Action_bool__string__JSONNode__o *value;
  ApplicationManagers_AccountManager___c__DisplayClass52_0_o *object;
  System_Action_T1__T2__T3__o *__this_01;
  Il2CppObject *value_00;
  
  if (Il2CppMethodInitialized_184347916 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool_string_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass52_0_GetCharacterInfoJson_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass52_0);
    il2cpp_codegen_initialize_runtime_metadata(&"GET");
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/me/character-info");
    Il2CppMethodInitialized_184347916 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    object = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass52_0);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
    if (object != (ApplicationManagers_AccountManager___c__DisplayClass52_0_o *)0x0) {
      value = (__this->fields).onComplete;
      (object->fields).onComplete = value;
      Il2CppCodeGenWriteBarrier(&(object->fields).onComplete,value);
      __this_01 = (System_Action_T1__T2__T3__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool_string_JSONNode);
      System_Action_bool__object__object____ctor
                (__this_01,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass52_0_GetCharacterInfoJson_b__0,
                 (MethodInfo_14686E0 *)0x0);
      if (__this_00 != (ApplicationManagers_AccountManager_o *)0x0) {
        value_00 = (Il2CppObject *)
                   ApplicationManagers_AccountManager__SendMeJson
                             (__this_00,"GET","/v1/me/character-info",(System_String_o *)0x0,
                              (System_Action_bool__string__JSONNode__o *)__this_01,true,(MethodInfo *)0x0);
        (__this->fields).__2__current = value_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,value_00);
        (__this->fields).__1__state = 1;
        return true;
      }
    }
    ThrowNullReferenceException();
  }
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
  }
  return false;
}


// ApplicationManagers.AccountManager.<GetCharacterInfoJson>d__52$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52__System_Collections_Generic_IEnumerator_System_Object__get_Current(ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<GetCharacterInfoJson>d__52$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52_o* __this, const MethodInfo* method);
// 0x182359cd0

void ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_ApplicationManagers_AccountManager_GetCharacterInfoJson_d__52_System_Collections_IEnumerator_Res
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// ApplicationManagers.AccountManager.<GetCharacterInfoJson>d__52$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52__System_Collections_IEnumerator_get_Current(ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<GetProfileJson>d__50$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__GetProfileJson_d__50___ctor (ApplicationManagers_AccountManager__GetProfileJson_d__50_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
ApplicationManagers_AccountManager__GetProfileJson_d__50___ctor(ApplicationManagers_AccountManager__GetProfileJson_d__50_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<GetProfileJson>d__50$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__GetProfileJson_d__50__System_IDisposable_Dispose (ApplicationManagers_AccountManager__GetProfileJson_d__50_o* __this, const MethodInfo* method);
// 0x180547020

void
ApplicationManagers_AccountManager__GetProfileJson_d__50__System_IDisposable_Dispose(ApplicationManagers_AccountManager__GetProfileJson_d__50_o* __this, MethodInfo* method)

{
  return;
}


// ApplicationManagers.AccountManager.<GetProfileJson>d__50$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__GetProfileJson_d__50__MoveNext (ApplicationManagers_AccountManager__GetProfileJson_d__50_o* __this, const MethodInfo* method);
// 0x182359d10

bool ApplicationManagers_AccountManager__GetProfileJson_d__50__MoveNext
               (ApplicationManagers_AccountManager__GetProfileJson_d__50_o *__this,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_AccountManager_o *__this_00;
  System_Action_bool__string__o *value;
  ApplicationManagers_AccountManager___c__DisplayClass50_0_o *object;
  System_Action_T1__T2__T3__o *__this_01;
  Il2CppObject *value_00;
  
  if (Il2CppMethodInitialized_184347917 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool_string_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass50_0_GetProfileJson_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass50_0);
    il2cpp_codegen_initialize_runtime_metadata(&"GET");
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/me");
    Il2CppMethodInitialized_184347917 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    object = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass50_0);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
    if (object != (ApplicationManagers_AccountManager___c__DisplayClass50_0_o *)0x0) {
      value = (__this->fields).onComplete;
      (object->fields).onComplete = value;
      Il2CppCodeGenWriteBarrier(&(object->fields).onComplete,value);
      __this_01 = (System_Action_T1__T2__T3__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool_string_JSONNode);
      System_Action_bool__object__object____ctor
                (__this_01,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass50_0_GetProfileJson_b__0,
                 (MethodInfo_14686E0 *)0x0);
      if (__this_00 != (ApplicationManagers_AccountManager_o *)0x0) {
        value_00 = (Il2CppObject *)
                   ApplicationManagers_AccountManager__SendMeJson
                             (__this_00,"GET","/v1/me",(System_String_o *)0x0,
                              (System_Action_bool__string__JSONNode__o *)__this_01,true,(MethodInfo *)0x0);
        (__this->fields).__2__current = value_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,value_00);
        (__this->fields).__1__state = 1;
        return true;
      }
    }
    ThrowNullReferenceException();
  }
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
  }
  return false;
}


// ApplicationManagers.AccountManager.<GetProfileJson>d__50$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__GetProfileJson_d__50__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__GetProfileJson_d__50_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_AccountManager__GetProfileJson_d__50__System_Collections_Generic_IEnumerator_System_Object__get_Current(ApplicationManagers_AccountManager__GetProfileJson_d__50_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<GetProfileJson>d__50$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__GetProfileJson_d__50__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__GetProfileJson_d__50_o* __this, const MethodInfo* method);
// 0x182359e60

void ApplicationManagers_AccountManager__GetProfileJson_d__50__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__GetProfileJson_d__50_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_ApplicationManagers_AccountManager_GetProfileJson_d__50_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// ApplicationManagers.AccountManager.<GetProfileJson>d__50$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__GetProfileJson_d__50__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__GetProfileJson_d__50_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_AccountManager__GetProfileJson_d__50__System_Collections_IEnumerator_get_Current(ApplicationManagers_AccountManager__GetProfileJson_d__50_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<OAuthFlow>d__8$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__OAuthFlow_d__8___ctor (ApplicationManagers_AccountManager__OAuthFlow_d__8_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
ApplicationManagers_AccountManager__OAuthFlow_d__8___ctor(ApplicationManagers_AccountManager__OAuthFlow_d__8_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<OAuthFlow>d__8$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__OAuthFlow_d__8__System_IDisposable_Dispose (ApplicationManagers_AccountManager__OAuthFlow_d__8_o* __this, const MethodInfo* method);
// 0x180547020

void
ApplicationManagers_AccountManager__OAuthFlow_d__8__System_IDisposable_Dispose(ApplicationManagers_AccountManager__OAuthFlow_d__8_o* __this, MethodInfo* method)

{
  return;
}


// ApplicationManagers.AccountManager.<OAuthFlow>d__8$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__OAuthFlow_d__8__MoveNext (ApplicationManagers_AccountManager__OAuthFlow_d__8_o* __this, const MethodInfo* method);
// 0x18235b400
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18235b67b: mov rbx, qword ptr [rip + 0x1d207c6]  ; "unknown_error"

bool ApplicationManagers_AccountManager__OAuthFlow_d__8__MoveNext
               (ApplicationManagers_AccountManager__OAuthFlow_d__8_o *__this,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_AccountManager_o *__this_00;
  ApplicationManagers_Api_AottgApiResult_o *pAVar2;
  bool bVar3;
  Il2CppObject *pIVar4;
  ApplicationManagers_AccountManager___c__DisplayClass8_0_o *pAVar5;
  System_String_o *pSVar6;
  SimpleJSONFixed_JSONObject_o *__this_01;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_02;
  System_Nullable_int__Fields local_res8;
  ApplicationManagers_AccountManager_UnityOAuthStart_o local_78;
  ApplicationManagers_AccountManager_UnityOAuthStart_o local_48;
  
  if (Il2CppMethodInitialized_184347918 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgApiResult);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass8_0_OAuthFlow_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass8_0);
    il2cpp_codegen_initialize_runtime_metadata(&"google");
    il2cpp_codegen_initialize_runtime_metadata(&"Provider is not supported.");
    il2cpp_codegen_initialize_runtime_metadata(&"POST");
    il2cpp_codegen_initialize_runtime_metadata(&"bad_response");
    il2cpp_codegen_initialize_runtime_metadata(&"provider");
    il2cpp_codegen_initialize_runtime_metadata(&"unknown_error");
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/auth/oauth/unity/start");
    il2cpp_codegen_initialize_runtime_metadata(&"discord");
    Il2CppMethodInitialized_184347918 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  local_78.fields.SessionId = (System_String_o *)0x0;
  local_78.fields.PollToken = (System_String_o *)0x0;
  local_78.fields.AuthorizationUrl = (System_String_o *)0x0;
  local_78.fields.ExpiresAt.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
  local_78.fields.ExpiresAt.fields._offsetMinutes = 0;
  local_78.fields.ExpiresAt.fields._10_6_ = 0;
  local_78.fields.PollIntervalSeconds = 0;
  local_78.fields._44_4_ = 0;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    pAVar5 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass8_0);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pAVar5,(MethodInfo *)0x0);
    (__this->fields).__8__1 = pAVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__8__1,pAVar5);
    pSVar6 = (__this->fields).provider;
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pSVar6 = ApplicationManagers_AccountManager__NormalizeOAuthProvider(pSVar6,(MethodInfo *)0x0);
    (__this->fields).provider = pSVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields).provider,pSVar6);
    bVar3 = System_String__op_Inequality((__this->fields).provider,"discord",(MethodInfo *)0x0);
    if ((!bVar3) ||
       (bVar3 = System_String__op_Inequality
                          ((__this->fields).provider,"google",(MethodInfo *)0x0), !bVar3)) {
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
      SimpleJSONFixed_JSONObject___ctor(__this_01,(MethodInfo *)0x0);
      pSVar6 = (__this->fields).provider;
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar6,(MethodInfo *)0x0);
      if (__this_01 != (SimpleJSONFixed_JSONObject_o *)0x0) {
        (*(__this_01->klass->vtable)._8_set_Item.methodPtr)
                  (__this_01,"provider",pSVar7,(__this_01->klass->vtable)._8_set_Item.method);
        pAVar5 = (__this->fields).__8__1;
        if (pAVar5 != (ApplicationManagers_AccountManager___c__DisplayClass8_0_o *)0x0) {
          (pAVar5->fields).result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
          Il2CppCodeGenWriteBarrier(&(pAVar5->fields).result,(void *)0x0);
          pSVar6 = (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                             (__this_01,(__this_01->klass->vtable)._3_ToString.method);
          pAVar5 = (__this->fields).__8__1;
          __this_02 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgApiResult);
          System_Action_object____ctor
                    (__this_02,(Il2CppObject *)pAVar5,
                     (intptr_t)MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass8_0_OAuthFlow_b__0
                     ,(MethodInfo *)0x0);
          bVar3 = (__this->fields).reportNetworkError;
          local_res8.hasValue = false;
          local_res8._1_3_ = 0;
          local_res8.value = 0;
          System_Nullable_int____ctor
                    ((System_Data_SqlTypes_SqlInt32_o *)&local_res8,10,MethodInfo_System_Nullable_int_ctor);
          if (__this_00 != (ApplicationManagers_AccountManager_o *)0x0) {
            pIVar4 = (Il2CppObject *)
                     ApplicationManagers_AccountManager__SendApiJson
                               (__this_00,"POST","/v1/auth/oauth/unity/start",pSVar6,
                                (System_String_o *)0x0,false,(System_Action_AottgApiResult__o *)__this_02,
                                bVar3,(System_Nullable_int__o)local_res8,(MethodInfo *)0x0);
            (__this->fields).__2__current = pIVar4;
            Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar4);
            (__this->fields).__1__state = 1;
            return true;
          }
        }
      }
      ThrowNullReferenceException();
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    ApplicationManagers_AccountManager__CompleteOAuth(false,"Provider is not supported.",(MethodInfo *)0x0);
  }
  else {
    if (iVar1 == 1) {
      (__this->fields).__1__state = -1;
      if (__this_00 != (ApplicationManagers_AccountManager_o *)0x0) {
        bVar3 = ApplicationManagers_AccountManager__IsCurrentOAuthAttempt
                          (__this_00,(__this->fields).attemptId,(MethodInfo *)0x0);
        if (!bVar3) {
          return false;
        }
        pAVar5 = (__this->fields).__8__1;
        if (pAVar5 != (ApplicationManagers_AccountManager___c__DisplayClass8_0_o *)0x0) {
          if (((pAVar5->fields).result != (ApplicationManagers_Api_AottgApiResult_o *)0x0) &&
             (pAVar2 = (pAVar5->fields).result, (pAVar2->fields)._Success_k__BackingField != false)) {
            pSVar6 = (pAVar2->fields)._ResponseText_k__BackingField;
            if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
            }
            bVar3 = ApplicationManagers_AccountManager__TryParseUnityOAuthStart
                              (pSVar6,&local_78,(MethodInfo *)0x0);
            pSVar6 = local_78.fields.AuthorizationUrl;
            if (bVar3) {
              if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
              }
              UnityEngine_Application__OpenURL(pSVar6,(MethodInfo *)0x0);
              local_48.fields.SessionId = local_78.fields.SessionId;
              local_48.fields.PollToken = local_78.fields.PollToken;
              local_48.fields.AuthorizationUrl = local_78.fields.AuthorizationUrl;
              local_48.fields.ExpiresAt.fields._dateTime.fields._dateData =
                   local_78.fields.ExpiresAt.fields._dateTime.fields._dateData;
              local_48.fields.ExpiresAt.fields._offsetMinutes =
                   local_78.fields.ExpiresAt.fields._offsetMinutes;
              local_48.fields.ExpiresAt.fields._10_6_ = local_78.fields.ExpiresAt.fields._10_6_;
              local_48.fields.PollIntervalSeconds = local_78.fields.PollIntervalSeconds;
              local_48.fields._44_4_ = local_78.fields._44_4_;
              pIVar4 = (Il2CppObject *)
                       ApplicationManagers_AccountManager__PollUnityOAuth
                                 (__this_00,&local_48,(__this->fields).attemptId,
                                  (__this->fields).reportNetworkError,(MethodInfo *)0x0);
              (__this->fields).__2__current = pIVar4;
              Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar4);
              (__this->fields).__1__state = 2;
              return true;
            }
            if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
            }
            ApplicationManagers_AccountManager__CompleteOAuth(false,"bad_response",(MethodInfo *)0x0);
            return false;
          }
          if (pAVar5 != (ApplicationManagers_AccountManager___c__DisplayClass8_0_o *)0x0) {
            pSVar6 = "unknown_error";
            if ((pAVar5->fields).result != (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
              pSVar6 = (((pAVar5->fields).result)->fields)._Error_k__BackingField;
            }
            if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
            }
            ApplicationManagers_AccountManager__CompleteOAuth(false,pSVar6,(MethodInfo *)0x0);
            return false;
          }
        }
      }
      ThrowNullReferenceException();
    }
    if (iVar1 == 2) {
      (__this->fields).__1__state = -1;
      return false;
    }
  }
  return false;
}


// ApplicationManagers.AccountManager.<OAuthFlow>d__8$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__OAuthFlow_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__OAuthFlow_d__8_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_AccountManager__OAuthFlow_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current(ApplicationManagers_AccountManager__OAuthFlow_d__8_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<OAuthFlow>d__8$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__OAuthFlow_d__8__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__OAuthFlow_d__8_o* __this, const MethodInfo* method);
// 0x18235b900

void ApplicationManagers_AccountManager__OAuthFlow_d__8__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__OAuthFlow_d__8_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_ApplicationManagers_AccountManager_OAuthFlow_d__8_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// ApplicationManagers.AccountManager.<OAuthFlow>d__8$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__OAuthFlow_d__8__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__OAuthFlow_d__8_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_AccountManager__OAuthFlow_d__8__System_Collections_IEnumerator_get_Current(ApplicationManagers_AccountManager__OAuthFlow_d__8_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<PatchProfileJson>d__51$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__PatchProfileJson_d__51___ctor (ApplicationManagers_AccountManager__PatchProfileJson_d__51_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
ApplicationManagers_AccountManager__PatchProfileJson_d__51___ctor(ApplicationManagers_AccountManager__PatchProfileJson_d__51_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<PatchProfileJson>d__51$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__PatchProfileJson_d__51__System_IDisposable_Dispose (ApplicationManagers_AccountManager__PatchProfileJson_d__51_o* __this, const MethodInfo* method);
// 0x180547020

void
ApplicationManagers_AccountManager__PatchProfileJson_d__51__System_IDisposable_Dispose(ApplicationManagers_AccountManager__PatchProfileJson_d__51_o* __this, MethodInfo* method)

{
  return;
}


// ApplicationManagers.AccountManager.<PatchProfileJson>d__51$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__PatchProfileJson_d__51__MoveNext (ApplicationManagers_AccountManager__PatchProfileJson_d__51_o* __this, const MethodInfo* method);
// 0x18235b940

bool ApplicationManagers_AccountManager__PatchProfileJson_d__51__MoveNext
               (ApplicationManagers_AccountManager__PatchProfileJson_d__51_o *__this,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_AccountManager_o *__this_00;
  System_Action_bool__string__o *value;
  System_String_o *json;
  ApplicationManagers_AccountManager___c__DisplayClass51_0_o *object;
  System_Action_T1__T2__T3__o *__this_01;
  Il2CppObject *value_00;
  
  if (Il2CppMethodInitialized_184347919 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool_string_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass51_0_PatchProfileJson_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass51_0);
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/me");
    il2cpp_codegen_initialize_runtime_metadata(&"PATCH");
    Il2CppMethodInitialized_184347919 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    object = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass51_0);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
    if (object != (ApplicationManagers_AccountManager___c__DisplayClass51_0_o *)0x0) {
      value = (__this->fields).onComplete;
      (object->fields).onComplete = value;
      Il2CppCodeGenWriteBarrier(&(object->fields).onComplete,value);
      json = (__this->fields).json;
      __this_01 = (System_Action_T1__T2__T3__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool_string_JSONNode);
      System_Action_bool__object__object____ctor
                (__this_01,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass51_0_PatchProfileJson_b__0,
                 (MethodInfo_14686E0 *)0x0);
      if (__this_00 != (ApplicationManagers_AccountManager_o *)0x0) {
        value_00 = (Il2CppObject *)
                   ApplicationManagers_AccountManager__SendMeJson
                             (__this_00,"PATCH","/v1/me",json,
                              (System_Action_bool__string__JSONNode__o *)__this_01,
                              (__this->fields).reportNetworkError,(MethodInfo *)0x0);
        (__this->fields).__2__current = value_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,value_00);
        (__this->fields).__1__state = 1;
        return true;
      }
    }
    ThrowNullReferenceException();
  }
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
  }
  return false;
}


// ApplicationManagers.AccountManager.<PatchProfileJson>d__51$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__PatchProfileJson_d__51__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__PatchProfileJson_d__51_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_AccountManager__PatchProfileJson_d__51__System_Collections_Generic_IEnumerator_System_Object__get_Current(ApplicationManagers_AccountManager__PatchProfileJson_d__51_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<PatchProfileJson>d__51$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__PatchProfileJson_d__51__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__PatchProfileJson_d__51_o* __this, const MethodInfo* method);
// 0x18235baa0

void ApplicationManagers_AccountManager__PatchProfileJson_d__51__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__PatchProfileJson_d__51_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_ApplicationManagers_AccountManager_PatchProfileJson_d__51_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// ApplicationManagers.AccountManager.<PatchProfileJson>d__51$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__PatchProfileJson_d__51__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__PatchProfileJson_d__51_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_AccountManager__PatchProfileJson_d__51__System_Collections_IEnumerator_get_Current(ApplicationManagers_AccountManager__PatchProfileJson_d__51_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<PollUnityOAuth>d__9$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__PollUnityOAuth_d__9___ctor (ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
ApplicationManagers_AccountManager__PollUnityOAuth_d__9___ctor(ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<PollUnityOAuth>d__9$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__PollUnityOAuth_d__9__System_IDisposable_Dispose (ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o* __this, const MethodInfo* method);
// 0x180547020

void
ApplicationManagers_AccountManager__PollUnityOAuth_d__9__System_IDisposable_Dispose(ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o* __this, MethodInfo* method)

{
  return;
}


// ApplicationManagers.AccountManager.<PollUnityOAuth>d__9$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__PollUnityOAuth_d__9__MoveNext (ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o* __this, const MethodInfo* method);
// 0x18235bae0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18235bf11: mov rbx, qword ptr [rip + 0x1d1ff30]  ; "unknown_error"
// asm:   0x18235c17e: xor al, al
// asm:   0x18235c180: jmp 0x18235c141

bool ApplicationManagers_AccountManager__PollUnityOAuth_d__9__MoveNext
               (ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o *__this,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_AccountManager_o *__this_00;
  ApplicationManagers_Api_AottgApiResult_o *pAVar2;
  System_DateTime_Fields SVar3;
  undefined8 uVar4;
  ApplicationManagers_AccountManager_UnityOAuthStart_o *pAVar5;
  bool bVar6;
  UnityEngine_WaitForSecondsRealtime_o *__this_01;
  ApplicationManagers_AccountManager___c__DisplayClass9_0_o *pAVar7;
  System_Data_SqlTypes_SqlInt32_Fields *pSVar8;
  System_String_o *pSVar9;
  System_String_o *pSVar10;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_02;
  Il2CppObject *pIVar11;
  float fVar12;
  double dVar13;
  float fVar14;
  System_String_o *local_res8;
  System_String_o *local_res18;
  System_String_o *local_res20;
  System_TimeSpan_Fields local_78 [2];
  undefined1 local_68 [16];
  System_DateTimeOffset_o local_58 [2];
  
  if (Il2CppMethodInitialized_18434791a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgApiResult);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTimeOffset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_TimeSpan);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass9_0_PollUnityOAuth_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass9_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_WaitForSecondsRealtime);
    il2cpp_codegen_initialize_runtime_metadata(&"oauth_failed");
    il2cpp_codegen_initialize_runtime_metadata(&"bad_response");
    il2cpp_codegen_initialize_runtime_metadata(&"GET");
    il2cpp_codegen_initialize_runtime_metadata(&"oauth_missing_code");
    il2cpp_codegen_initialize_runtime_metadata(&"unknown_error");
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/auth/oauth/unity/status?sessionId=");
    il2cpp_codegen_initialize_runtime_metadata(&"oauth_timeout");
    il2cpp_codegen_initialize_runtime_metadata(&"failed");
    il2cpp_codegen_initialize_runtime_metadata(&"pending");
    il2cpp_codegen_initialize_runtime_metadata(&"complete");
    Il2CppMethodInitialized_18434791a = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  __this_00 = (__this->fields).__4__this;
  local_res8 = (System_String_o *)0x0;
  local_res20 = (System_String_o *)0x0;
  local_res18 = (System_String_o *)0x0;
  local_78[0]._ticks = 0;
  if (iVar1 == 0) {
    (__this->fields).__1__state = -1;
    fVar12 = (float)(__this->fields).start.fields.PollIntervalSeconds;
    fVar14 = 1.0;
    if (1.0 <= fVar12) {
      fVar14 = fVar12;
    }
    (__this->fields)._pollSeconds_5__2 = fVar14;
  }
  else {
    if (iVar1 == 1) {
      (__this->fields).__1__state = -1;
      if (__this_00 != (ApplicationManagers_AccountManager_o *)0x0) {
        bVar6 = ApplicationManagers_AccountManager__IsCurrentOAuthAttempt
                          (__this_00,(__this->fields).attemptId,(MethodInfo *)0x0);
        if (!bVar6) {
          return false;
        }
        pAVar7 = (__this->fields).__8__1;
        if (pAVar7 != (ApplicationManagers_AccountManager___c__DisplayClass9_0_o *)0x0) {
          if (((pAVar7->fields).result != (ApplicationManagers_Api_AottgApiResult_o *)0x0) &&
             (pAVar2 = (pAVar7->fields).result, (pAVar2->fields)._Success_k__BackingField != false)) {
            pSVar9 = (pAVar2->fields)._ResponseText_k__BackingField;
            if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
            }
            bVar6 = ApplicationManagers_AccountManager__TryParseUnityOAuthStatus
                              (pSVar9,&local_res8,&local_res20,&local_res18,(MethodInfo *)0x0);
            if (bVar6) {
              bVar6 = System_String__op_Equality(local_res8,"complete",(MethodInfo *)0x0);
              if (bVar6) {
                bVar6 = System_String__IsNullOrEmpty(local_res20,(MethodInfo *)0x0);
                if (bVar6) {
                  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init
                              ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
                  }
                  ApplicationManagers_AccountManager__CompleteOAuth
                            (false,"oauth_missing_code",(MethodInfo *)0x0);
                  return false;
                }
                pIVar11 = (Il2CppObject *)
                          ApplicationManagers_AccountManager__ExchangeOAuthCode
                                    (__this_00,local_res20,(__this->fields).reportNetworkError,
                                     (MethodInfo *)0x0);
                (__this->fields).__2__current = pIVar11;
                Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar11);
                (__this->fields).__1__state = 2;
                return true;
              }
              bVar6 = System_String__op_Equality(local_res8,"failed",(MethodInfo *)0x0);
              if (bVar6) {
                bVar6 = System_String__IsNullOrEmpty(local_res18,(MethodInfo *)0x0);
                pSVar9 = local_res18;
                if (bVar6) {
                  pSVar9 = "oauth_failed";
                }
                if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
                }
                ApplicationManagers_AccountManager__CompleteOAuth(false,pSVar9,(MethodInfo *)0x0);
                return false;
              }
              bVar6 = System_String__op_Inequality(local_res8,"pending",(MethodInfo *)0x0);
              if (!bVar6) {
                SVar3._dateData = (__this->fields).start.fields.ExpiresAt.fields._dateTime.fields._dateData;
                pAVar5 = &(__this->fields).start;
                uVar4._0_2_ = (pAVar5->fields).ExpiresAt.fields._offsetMinutes;
                uVar4._2_6_ = *(undefined6 *)&(pAVar5->fields).ExpiresAt.fields.field_0xa;
                if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
                }
                pSVar8 = (System_Data_SqlTypes_SqlInt32_Fields *)
                         System_DateTimeOffset__get_UtcNow(local_58,(MethodInfo *)0x0);
                local_68._0_8_ = *pSVar8;
                local_68._8_8_ = pSVar8[1];
                local_58[0].fields._dateTime.fields._dateData =
                     (System_DateTime_Fields)(System_DateTime_Fields)SVar3._dateData;
                local_58[0].fields._8_8_ = uVar4;
                local_78[0]._ticks =
                     (int64_t)System_DateTimeOffset__op_Subtraction
                                        (local_58,(System_DateTimeOffset_o *)local_68,(MethodInfo *)0x0);
                if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
                }
                dVar13 = System_TimeSpan__get_TotalSeconds((System_TimeSpan_o *)local_78,(MethodInfo *)0x0);
                if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
                }
                dVar13 = System_Math__Max_1b2c100(0.1,dVar13,(MethodInfo *)0x0);
                fVar14 = (__this->fields)._pollSeconds_5__2;
                if ((float)dVar13 <= fVar14) {
                  fVar14 = (float)dVar13;
                }
                __this_01 = il2cpp_codegen_object_new
                                      ((Il2CppClass *)TypeInfo_UnityEngine_WaitForSecondsRealtime);
                UnityEngine_WaitForSecondsRealtime___ctor(__this_01,fVar14,(MethodInfo *)0x0);
                (__this->fields).__2__current = (Il2CppObject *)__this_01;
                Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,__this_01);
                (__this->fields).__1__state = 3;
                return true;
              }
            }
            if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
            }
            ApplicationManagers_AccountManager__CompleteOAuth(false,"bad_response",(MethodInfo *)0x0);
            return false;
          }
          if (pAVar7 != (ApplicationManagers_AccountManager___c__DisplayClass9_0_o *)0x0) {
            pSVar9 = "unknown_error";
            if ((pAVar7->fields).result != (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
              pSVar9 = (((pAVar7->fields).result)->fields)._Error_k__BackingField;
            }
            if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
            }
            ApplicationManagers_AccountManager__CompleteOAuth(false,pSVar9,(MethodInfo *)0x0);
            return false;
          }
        }
      }
      goto label_18235c182;
    }
    if (iVar1 == 2) {
      (__this->fields).__1__state = -1;
      return false;
    }
    if (iVar1 != 3) {
      return false;
    }
    (__this->fields).__1__state = -1;
    (__this->fields).__8__1 = (ApplicationManagers_AccountManager___c__DisplayClass9_0_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__8__1,(void *)0x0);
  }
  if (__this_00 != (ApplicationManagers_AccountManager_o *)0x0) {
    bVar6 = ApplicationManagers_AccountManager__IsCurrentOAuthAttempt
                      (__this_00,(__this->fields).attemptId,(MethodInfo *)0x0);
    if (bVar6) {
      pAVar7 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass9_0);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pAVar7,(MethodInfo *)0x0);
      (__this->fields).__8__1 = pAVar7;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__8__1,pAVar7);
      if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
      }
      pSVar8 = (System_Data_SqlTypes_SqlInt32_Fields *)
               System_DateTimeOffset__get_UtcNow((System_DateTimeOffset_o *)local_68,(MethodInfo *)0x0);
      local_58[0].fields._dateTime.fields._dateData =
           (System_DateTime_Fields)(__this->fields).start.fields.ExpiresAt.fields._dateTime.fields._dateData;
      pAVar5 = &(__this->fields).start;
      local_58[0].fields._offsetMinutes = (pAVar5->fields).ExpiresAt.fields._offsetMinutes;
      local_58[0].fields._10_6_ = *(undefined6 *)&(pAVar5->fields).ExpiresAt.fields.field_0xa;
      local_68._0_8_ = *pSVar8;
      local_68._8_8_ = pSVar8[1];
      bVar6 = System_DateTimeOffset__op_GreaterThanOrEqual
                        ((System_DateTimeOffset_o *)local_68,local_58,(MethodInfo *)0x0);
      if (!bVar6) {
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        pSVar9 = TypeInfo_ApplicationManagers_AccountManager->static_fields->BaseUrl;
        if (pSVar9 != (System_String_o *)0x0) {
          pSVar9 = System_String__TrimEnd_19734b0(pSVar9,0x2f,(MethodInfo *)0x0);
          pSVar10 = UnityEngine_Networking_UnityWebRequest__EscapeURL
                              ((__this->fields).start.fields.SessionId,(MethodInfo *)0x0);
          pSVar9 = System_String__Concat_1969b70(pSVar9,"/v1/auth/oauth/unity/status?sessionId=",pSVar10,(MethodInfo *)0x0);
          pAVar7 = (__this->fields).__8__1;
          if (pAVar7 != (ApplicationManagers_AccountManager___c__DisplayClass9_0_o *)0x0) {
            (pAVar7->fields).result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
            Il2CppCodeGenWriteBarrier(&(pAVar7->fields).result,(void *)0x0);
            pSVar10 = (__this->fields).start.fields.PollToken;
            pAVar7 = (__this->fields).__8__1;
            __this_02 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                        il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgApiResult);
            System_Action_object____ctor
                      (__this_02,(Il2CppObject *)pAVar7,
                       (intptr_t)
                       MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass9_0_PollUnityOAuth_b__0,
                       (MethodInfo *)0x0);
            bVar6 = (__this->fields).reportNetworkError;
            local_68[0] = false;
            local_68._1_3_ = 0;
            local_68._4_4_ = 0;
            System_Nullable_int____ctor
                      ((System_Data_SqlTypes_SqlInt32_o *)local_68,10,MethodInfo_System_Nullable_int_ctor);
            pIVar11 = (Il2CppObject *)
                      ApplicationManagers_AccountManager__SendApiJson
                                (__this_00,"GET",pSVar9,(System_String_o *)0x0,pSVar10,false,
                                 (System_Action_AottgApiResult__o *)__this_02,bVar6,
                                 (System_Nullable_int__o)local_68._0_8_,(MethodInfo *)0x0);
            (__this->fields).__2__current = pIVar11;
            Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar11);
            (__this->fields).__1__state = 1;
            return true;
          }
        }
        ThrowNullReferenceException();
      }
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      ApplicationManagers_AccountManager__CompleteOAuth(false,"oauth_timeout",(MethodInfo *)0x0);
    }
    return false;
  }
label_18235c182:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager.<PollUnityOAuth>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__PollUnityOAuth_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_AccountManager__PollUnityOAuth_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current(ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<PollUnityOAuth>d__9$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__PollUnityOAuth_d__9__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o* __this, const MethodInfo* method);
// 0x18235c190

void ApplicationManagers_AccountManager__PollUnityOAuth_d__9__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_ApplicationManagers_AccountManager_PollUnityOAuth_d__9_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// ApplicationManagers.AccountManager.<PollUnityOAuth>d__9$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__PollUnityOAuth_d__9__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_AccountManager__PollUnityOAuth_d__9__System_Collections_IEnumerator_get_Current(ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<PostJson>d__172$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__PostJson_d__172___ctor (ApplicationManagers_AccountManager__PostJson_d__172_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
ApplicationManagers_AccountManager__PostJson_d__172___ctor(ApplicationManagers_AccountManager__PostJson_d__172_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<PostJson>d__172$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__PostJson_d__172__System_IDisposable_Dispose (ApplicationManagers_AccountManager__PostJson_d__172_o* __this, const MethodInfo* method);
// 0x180547020

void
ApplicationManagers_AccountManager__PostJson_d__172__System_IDisposable_Dispose(ApplicationManagers_AccountManager__PostJson_d__172_o* __this, MethodInfo* method)

{
  return;
}


// ApplicationManagers.AccountManager.<PostJson>d__172$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__PostJson_d__172__MoveNext (ApplicationManagers_AccountManager__PostJson_d__172_o* __this, const MethodInfo* method);
// 0x18235c1d0
// eh: try 0x18235c3dc..0x18235c4ad -> pad 0x1833407f0 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// eh: try 0x18235c4d9..0x18235c4e9 -> pad 0x183340850 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// eh: try 0x18235c67d..0x18235c68e -> pad 0x1833407f0 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 92 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18235c4ac: nop 
// asm:   0x18235c4ad: jmp 0x18235c4bf
// asm:   0x18235c4af: mov rdi, qword ptr [rsp + 0xb0]
// asm:   0x18235c4b7: mov rsi, qword ptr [rsp + 0xc0]
// asm:   0x18235c4ee: mov rcx, qword ptr [rsp + 0x70]
// asm:   0x18235c4f3: test rcx, rcx
// asm:   0x18235c4f6: je 0x18235c677
// asm:   0x18235c4fc: mov rax, qword ptr [rcx]
// asm:   0x18235c4ff: mov rdx, qword ptr [rax + 0x190]
// asm:   0x18235c506: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x18235c50c: mov rbx, rax
// asm:   0x18235c50f: lea rcx, [rip + 0x1d27922]  ; "AccountManager: failed to parse auth response: "
// asm:   0x18235c516: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18235c51b: mov rcx, rax
// asm:   0x18235c51e: xor r8d, r8d
// asm:   0x18235c521: mov rdx, rbx
// asm:   0x18235c524: call 0x181969e50  ; System_String__Concat()
// asm:   0x18235c529: mov rbx, rax
// asm:   0x18235c52c: lea rcx, [rip + 0x1d9ef05]  ; TypeInfo_UnityEngine_Debug
// asm:   0x18235c533: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18235c538: cmp dword ptr [rax + 0xe4], 0
// asm:   0x18235c53f: jne 0x18235c549
// asm:   0x18235c541: mov rcx, rax
// asm:   0x18235c544: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x18235c549: xor edx, edx
// asm:   0x18235c54b: mov rcx, rbx
// asm:   0x18235c54e: call 0x182ec3bd0  ; UnityEngine_Debug__Log()
// asm:   0x18235c553: mov rax, qword ptr [rsp + 0xb0]
// asm:   0x18235c55b: mov rbx, qword ptr [rax + 0x68]
// asm:   0x18235c55f: test rbx, rbx
// asm:   0x18235c562: je 0x18235c59b
// asm:   0x18235c564: lea rcx, [rip + 0x1d36cbd]  ; "bad_response"
// asm:   0x18235c56b: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18235c570: mov r9, qword ptr [rbx + 0x28]
// asm:   0x18235c574: mov r8, rax
// asm:   0x18235c577: xor edx, edx
// asm:   0x18235c579: mov rcx, qword ptr [rbx + 0x40]
// asm:   0x18235c57d: call qword ptr [rbx + 0x18]
// asm:   0x18235c580: jmp 0x18235c59b
// asm:   0x18235c5cb: mov rbx, qword ptr [rip + 0x1d1f876]  ; "unknown_error"
// asm:   0x1833407f0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833407f5: push rbx
// asm:   0x1833407f6: push rbp
// asm:   0x1833407f7: sub rsp, 0x58
// asm:   0x1833407fb: mov rbp, rdx
// asm:   0x1833407fe: mov rbx, qword ptr [rbp + 0x60]
// asm:   0x183340802: mov rdx, qword ptr [rbx]
// asm:   0x183340805: mov rdx, qword ptr [rdx]
// asm:   0x183340808: mov rcx, qword ptr [rip + 0x10145c1]
// asm:   0x18334080f: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183340814: test al, al
// asm:   0x183340816: je 0x183340824
// asm:   0x183340818: movabs rax, 0
// asm:   0x183340822: jmp 0x18334083c
// asm:   0x183340824: mov rax, qword ptr [rbx]
// asm:   0x183340827: mov qword ptr [rbp + 0x50], rax
// asm:   0x18334082b: lea rdx, [rip + 0xc9b756]
// asm:   0x183340832: lea rcx, [rbp + 0x50]
// asm:   0x183340836: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18334083c: add rsp, 0x58
// asm:   0x183340840: pop rbp
// asm:   0x183340841: pop rbx
// asm:   0x183340842: ret 
// asm:   0x183340850: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183340855: push rbx
// asm:   0x183340856: push rbp
// asm:   0x183340857: push rdi
// asm:   0x183340858: sub rsp, 0x50
// asm:   0x18334085c: mov rbp, rdx
// asm:   0x18334085f: mov rdi, qword ptr [rbp + 0x68]
// asm:   0x183340863: mov rax, qword ptr [rdi]
// asm:   0x183340866: mov rbx, qword ptr [rax]
// asm:   0x183340869: lea rcx, [rip + 0xd386e8]  ; TypeInfo_System_Exception
// asm:   0x183340870: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x183340875: mov rcx, rax
// asm:   0x183340878: mov rdx, rbx
// asm:   0x18334087b: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183340880: test al, al
// asm:   0x183340882: mov rax, qword ptr [rdi]
// asm:   0x183340885: je 0x183340897
// asm:   0x183340887: mov qword ptr [rbp + 0x70], rax
// asm:   0x18334088b: movabs rax, 0
// asm:   0x183340895: jmp 0x1833408ac
// asm:   0x183340897: mov qword ptr [rbp + 0x58], rax
// asm:   0x18334089b: lea rdx, [rip + 0xc9b6e6]
// asm:   0x1833408a2: lea rcx, [rbp + 0x58]
// asm:   0x1833408a6: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x1833408ac: add rsp, 0x50
// asm:   0x1833408b0: pop rdi
// asm:   0x1833408b1: pop rbp
// asm:   0x1833408b2: pop rbx
// asm:   0x1833408b3: ret 

bool ApplicationManagers_AccountManager__PostJson_d__172__MoveNext
               (ApplicationManagers_AccountManager__PostJson_d__172_o *__this,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_AccountManager_o *__this_00;
  System_String_o *json;
  System_String_o *bearer;
  ApplicationManagers_Api_AottgApiResult_o *pAVar2;
  System_Action_string__o *pSVar3;
  System_Xml_Schema_XmlSchema_c *pSVar4;
  bool bVar5;
  ApplicationManagers_AccountManager___c__DisplayClass172_0_o *pAVar6;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  Il2CppObject *value;
  SimpleJSONFixed_JSONNode_o *a;
  System_Xml_Schema_XmlSchema_o *pSVar7;
  undefined8 uVar8;
  System_Action_bool__string__o *pSVar9;
  System_String_o *pSVar10;
  intptr_t iVar11;
  
  if (Il2CppMethodInitialized_18434791b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgApiResult);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass172_0_PostJson_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass172_0);
    il2cpp_codegen_initialize_runtime_metadata(&"POST");
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/auth/refresh");
    il2cpp_codegen_initialize_runtime_metadata(&"unknown_error");
    il2cpp_codegen_initialize_runtime_metadata(&"invalid_refresh_token");
    Il2CppMethodInitialized_18434791b = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    pAVar6 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass172_0);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pAVar6,(MethodInfo *)0x0);
    (__this->fields).__8__1 = pAVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__8__1,pAVar6);
    pAVar6 = (__this->fields).__8__1;
    if (pAVar6 != (ApplicationManagers_AccountManager___c__DisplayClass172_0_o *)0x0) {
      (pAVar6->fields).result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(pAVar6->fields).result,(void *)0x0);
      pSVar10 = (__this->fields).path;
      json = (__this->fields).json;
      bearer = (__this->fields).bearer;
      pAVar6 = (__this->fields).__8__1;
      __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgApiResult);
      System_Action_object____ctor
                (__this_01,(Il2CppObject *)pAVar6,
                 (intptr_t)MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass172_0_PostJson_b__0,
                 (MethodInfo *)0x0);
      if (__this_00 != (ApplicationManagers_AccountManager_o *)0x0) {
        value = (Il2CppObject *)
                ApplicationManagers_AccountManager__SendApiJson
                          (__this_00,"POST",pSVar10,json,bearer,false,
                           (System_Action_AottgApiResult__o *)__this_01,(__this->fields).reportNetworkError,
                           (System_Nullable_int__o)0x0,(MethodInfo *)0x0);
        (__this->fields).__2__current = value;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,value);
        (__this->fields).__1__state = 1;
        return true;
      }
    }
    goto label_18235c677;
  }
  if (iVar1 != 1) {
    return false;
  }
  (__this->fields).__1__state = -1;
  pAVar6 = (__this->fields).__8__1;
  if (pAVar6 == (ApplicationManagers_AccountManager___c__DisplayClass172_0_o *)0x0) goto label_18235c677;
  pSVar10 = "unknown_error";
  if ((pAVar6->fields).result != (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
    pAVar2 = (pAVar6->fields).result;
    if ((pAVar2->fields)._Success_k__BackingField != false) {
      if ((pAVar6 == (ApplicationManagers_AccountManager___c__DisplayClass172_0_o *)0x0) ||
         (pAVar2 == (ApplicationManagers_Api_AottgApiResult_o *)0x0)) goto label_18235c677;
      pSVar10 = (pAVar2->fields)._ResponseText_k__BackingField;
      if ((((__this->fields).captureField != (System_String_o *)0x0) &&
          ((__this->fields).captureTarget != (System_Action_string__o *)0x0)) &&
         (bVar5 = System_String__IsNullOrEmpty(pSVar10,(MethodInfo *)0x0), !bVar5)) {
        a = SimpleJSONFixed_JSON__Parse(pSVar10,(MethodInfo *)0x0);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        bVar5 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if (bVar5) {
          if (a == (SimpleJSONFixed_JSONNode_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar7 = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,(MethodInfo *)(__this->fields).captureField);
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          bVar5 = SimpleJSONFixed_JSONNode__op_Inequality
                            ((SimpleJSONFixed_JSONNode_o *)pSVar7,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if (bVar5) {
            pSVar3 = (__this->fields).captureTarget;
            pSVar7 = (*(a->klass->vtable)._7_get_Item.methodPtr)
                               (a,(MethodInfo *)(__this->fields).captureField);
            if (pSVar7 == (System_Xml_Schema_XmlSchema_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar4 = pSVar7->klass;
            uVar8 = (*(pSVar4->vtable)._9_SetUnhandledAttributes.methodPtr)
                              (pSVar7,(UnityEngine_GameObject_o *)
                                      (pSVar4->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar4);
            if (pSVar3 == (System_Action_string__o *)0x0) {
              ThrowNullReferenceException();
            }
            (*(code *)(pSVar3->fields).invoke_impl)
                      ((pSVar3->fields).method_code,uVar8,(pSVar3->fields).method);
          }
        }
      }
      if ((__this->fields).applyAuthResponse != false) {
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        ApplicationManagers_AccountManager__ApplyAuthResponse(pSVar10,(MethodInfo *)0x0);
      }
      pSVar9 = (__this->fields).onComplete;
      if (pSVar9 == (System_Action_bool__string__o *)0x0) {
        return false;
      }
      iVar11 = (pSVar9->fields).method;
      pSVar10 = (System_String_o *)0x0;
      uVar8 = 1;
      goto label_18235c594;
    }
    if ((pAVar6->fields).result != (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
      pSVar10 = (((pAVar6->fields).result)->fields)._Error_k__BackingField;
    }
  }
  bVar5 = System_String__Equals_196c550((__this->fields).path,"/v1/auth/refresh",5,(MethodInfo *)0x0);
  if (bVar5) {
    pAVar6 = (__this->fields).__8__1;
    if (pAVar6 == (ApplicationManagers_AccountManager___c__DisplayClass172_0_o *)0x0) goto label_18235c677;
    if (((pAVar6->fields).result == (ApplicationManagers_Api_AottgApiResult_o *)0x0) ||
       ((((pAVar6->fields).result)->fields)._StatusCode_k__BackingField < 1)) goto label_18235c60a;
label_18235c63e:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    ApplicationManagers_AccountManager__ClearSession(true,(MethodInfo *)0x0);
  }
  else {
label_18235c60a:
    pAVar6 = (__this->fields).__8__1;
    if (pAVar6 == (ApplicationManagers_AccountManager___c__DisplayClass172_0_o *)0x0) {
label_18235c677:
      ThrowNullReferenceException();
    }
    if ((((pAVar6->fields).result != (ApplicationManagers_Api_AottgApiResult_o *)0x0) &&
        ((((pAVar6->fields).result)->fields)._StatusCode_k__BackingField == 0x191)) &&
       (bVar5 = System_String__op_Equality(pSVar10,"invalid_refresh_token",(MethodInfo *)0x0), bVar5))
    goto label_18235c63e;
  }
  pSVar9 = (__this->fields).onComplete;
  if (pSVar9 == (System_Action_bool__string__o *)0x0) {
    return false;
  }
  iVar11 = (pSVar9->fields).method;
  uVar8 = 0;
label_18235c594:
  (*(code *)(pSVar9->fields).invoke_impl)((pSVar9->fields).method_code,uVar8,pSVar10,iVar11);
  return false;
}


// ApplicationManagers.AccountManager.<PostJson>d__172$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__PostJson_d__172__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__PostJson_d__172_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_AccountManager__PostJson_d__172__System_Collections_Generic_IEnumerator_System_Object__get_Current(ApplicationManagers_AccountManager__PostJson_d__172_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<PostJson>d__172$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__PostJson_d__172__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__PostJson_d__172_o* __this, const MethodInfo* method);
// 0x18235c690

void ApplicationManagers_AccountManager__PostJson_d__172__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__PostJson_d__172_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_ApplicationManagers_AccountManager_PostJson_d__172_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// ApplicationManagers.AccountManager.<PostJson>d__172$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__PostJson_d__172__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__PostJson_d__172_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_AccountManager__PostJson_d__172__System_Collections_IEnumerator_get_Current(ApplicationManagers_AccountManager__PostJson_d__172_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<PutCharacterInfoJson>d__53$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53___ctor (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53___ctor(ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<PutCharacterInfoJson>d__53$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53__System_IDisposable_Dispose (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o* __this, const MethodInfo* method);
// 0x180547020

void
ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53__System_IDisposable_Dispose(ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o* __this, MethodInfo* method)

{
  return;
}


// ApplicationManagers.AccountManager.<PutCharacterInfoJson>d__53$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53__MoveNext (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o* __this, const MethodInfo* method);
// 0x18235c6d0

bool ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53__MoveNext
               (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o *__this,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_AccountManager_o *__this_00;
  SimpleJSONFixed_JSONNode_o *value;
  System_Action_bool__string__JSONNode__o *value_00;
  System_String_o *json;
  ApplicationManagers_AccountManager___c__DisplayClass53_0_o *object;
  System_Action_T1__T2__T3__o *__this_01;
  Il2CppObject *value_01;
  
  if (Il2CppMethodInitialized_18434791c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool_string_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass53_0_PutCharacterInfoJson_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass53_0);
    il2cpp_codegen_initialize_runtime_metadata(&"PUT");
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/me/character-info");
    Il2CppMethodInitialized_18434791c = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    object = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass53_0);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
    if (object != (ApplicationManagers_AccountManager___c__DisplayClass53_0_o *)0x0) {
      value = (__this->fields).fallbackCharacterInfo;
      (object->fields).fallbackCharacterInfo = value;
      Il2CppCodeGenWriteBarrier(&(object->fields).fallbackCharacterInfo,value);
      value_00 = (__this->fields).onComplete;
      (object->fields).onComplete = value_00;
      Il2CppCodeGenWriteBarrier(&(object->fields).onComplete,value_00);
      json = (__this->fields).json;
      __this_01 = (System_Action_T1__T2__T3__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool_string_JSONNode);
      System_Action_bool__object__object____ctor
                (__this_01,(Il2CppObject *)object,
                 (intptr_t)
                 MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass53_0_PutCharacterInfoJson_b__0,
                 (MethodInfo_14686E0 *)0x0);
      if (__this_00 != (ApplicationManagers_AccountManager_o *)0x0) {
        value_01 = (Il2CppObject *)
                   ApplicationManagers_AccountManager__SendMeJson
                             (__this_00,"PUT","/v1/me/character-info",json,
                              (System_Action_bool__string__JSONNode__o *)__this_01,
                              (__this->fields).reportNetworkError,(MethodInfo *)0x0);
        (__this->fields).__2__current = value_01;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,value_01);
        (__this->fields).__1__state = 1;
        return true;
      }
    }
    ThrowNullReferenceException();
  }
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
  }
  return false;
}


// ApplicationManagers.AccountManager.<PutCharacterInfoJson>d__53$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53__System_Collections_Generic_IEnumerator_System_Object__get_Current(ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<PutCharacterInfoJson>d__53$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o* __this, const MethodInfo* method);
// 0x18235c840

void ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_ApplicationManagers_AccountManager_PutCharacterInfoJson_d__53_System_Collections_IEnumerator_Res
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// ApplicationManagers.AccountManager.<PutCharacterInfoJson>d__53$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53__System_Collections_IEnumerator_get_Current(ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<SendApiGet>d__165$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__SendApiGet_d__165___ctor (ApplicationManagers_AccountManager__SendApiGet_d__165_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
ApplicationManagers_AccountManager__SendApiGet_d__165___ctor(ApplicationManagers_AccountManager__SendApiGet_d__165_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<SendApiGet>d__165$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__SendApiGet_d__165__System_IDisposable_Dispose (ApplicationManagers_AccountManager__SendApiGet_d__165_o* __this, const MethodInfo* method);
// 0x180547020

void
ApplicationManagers_AccountManager__SendApiGet_d__165__System_IDisposable_Dispose(ApplicationManagers_AccountManager__SendApiGet_d__165_o* __this, MethodInfo* method)

{
  return;
}


// ApplicationManagers.AccountManager.<SendApiGet>d__165$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__SendApiGet_d__165__MoveNext (ApplicationManagers_AccountManager__SendApiGet_d__165_o* __this, const MethodInfo* method);
// 0x18235cc90

bool ApplicationManagers_AccountManager__SendApiGet_d__165__MoveNext
               (ApplicationManagers_AccountManager__SendApiGet_d__165_o *__this,MethodInfo *method)

{
  bool parseJson;
  int iVar1;
  ApplicationManagers_AccountManager_o *__this_00;
  System_Action_AottgApiResult__o *value;
  System_String_o *path;
  System_String_o *bearer;
  ApplicationManagers_AccountManager___c__DisplayClass165_0_o *pAVar2;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  Cysharp_Threading_Tasks_UniTask_o *pCVar3;
  Cysharp_Threading_Tasks_UniTask_o local_28;
  
  if (Il2CppMethodInitialized_18434791d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgApiResult);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass165_0_SendApiGet_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass165_0);
    Il2CppMethodInitialized_18434791d = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    pAVar2 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass165_0);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pAVar2,(MethodInfo *)0x0);
    (__this->fields).__8__1 = pAVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__8__1,pAVar2);
    pAVar2 = (__this->fields).__8__1;
    if (pAVar2 == (ApplicationManagers_AccountManager___c__DisplayClass165_0_o *)0x0) goto label_18235ce3e;
    value = (__this->fields).onComplete;
    (pAVar2->fields).onComplete = value;
    Il2CppCodeGenWriteBarrier(&(pAVar2->fields).onComplete,value);
    pAVar2 = (__this->fields).__8__1;
    if (pAVar2 == (ApplicationManagers_AccountManager___c__DisplayClass165_0_o *)0x0) goto label_18235ce3e;
    (pAVar2->fields).done = false;
    path = (__this->fields).path;
    bearer = (__this->fields).bearer;
    parseJson = (__this->fields).parseJson;
    pAVar2 = (__this->fields).__8__1;
    __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgApiResult);
    System_Action_object____ctor
              (__this_01,(Il2CppObject *)pAVar2,
               (intptr_t)MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass165_0_SendApiGet_b__0,
               (MethodInfo *)0x0);
    if (__this_00 == (ApplicationManagers_AccountManager_o *)0x0) goto label_18235ce3e;
    pCVar3 = ApplicationManagers_AccountManager__SendApiGetAsync
                       (&local_28,__this_00,path,bearer,parseJson,(System_Action_AottgApiResult__o *)__this_01
                        ,(MethodInfo *)0x0);
    local_28.fields.source = (pCVar3->fields).source;
    local_28.fields.token = (pCVar3->fields).token;
    local_28.fields._10_6_ = *(undefined6 *)&(pCVar3->fields).field_0xa;
    Cysharp_Threading_Tasks_UniTaskExtensions__Forget(&local_28,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 != 1) {
      return false;
    }
    (__this->fields).__1__state = -1;
  }
  pAVar2 = (__this->fields).__8__1;
  if (pAVar2 != (ApplicationManagers_AccountManager___c__DisplayClass165_0_o *)0x0) {
    if ((pAVar2->fields).done != false) {
      return false;
    }
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
    (__this->fields).__1__state = 1;
    return true;
  }
label_18235ce3e:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager.<SendApiGet>d__165$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__SendApiGet_d__165__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__SendApiGet_d__165_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_AccountManager__SendApiGet_d__165__System_Collections_Generic_IEnumerator_System_Object__get_Current(ApplicationManagers_AccountManager__SendApiGet_d__165_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<SendApiGet>d__165$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__SendApiGet_d__165__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__SendApiGet_d__165_o* __this, const MethodInfo* method);
// 0x18235ce50

void ApplicationManagers_AccountManager__SendApiGet_d__165__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__SendApiGet_d__165_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_ApplicationManagers_AccountManager_SendApiGet_d__165_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// ApplicationManagers.AccountManager.<SendApiGet>d__165$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__SendApiGet_d__165__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__SendApiGet_d__165_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_AccountManager__SendApiGet_d__165__System_Collections_IEnumerator_get_Current(ApplicationManagers_AccountManager__SendApiGet_d__165_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<SendApiGetAsync>d__166$$MoveNext
// il2cpp: void ApplicationManagers_AccountManager__SendApiGetAsync_d__166__MoveNext (ApplicationManagers_AccountManager__SendApiGetAsync_d__166_o __this, const MethodInfo* method);
// 0x18235c880
// eh: try 0x18235c902..0x18235cc8c -> pad 0x1833408c0 (+5 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 130 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18235ca37: nop 
// asm:   0x18235cb02: mov rsi, qword ptr [rsp + 0x50]
// asm:   0x18235cb07: test rsi, rsi
// asm:   0x18235cb0a: je 0x18235cc85
// asm:   0x18235cb10: mov rdi, qword ptr [rsp + 0x120]
// asm:   0x18235cb18: mov r15, qword ptr [rdi + 0x18]
// asm:   0x18235cb1c: mov rax, qword ptr [rsi]
// asm:   0x18235cb1f: mov rdx, qword ptr [rax + 0x190]
// asm:   0x18235cb26: mov rcx, rsi
// asm:   0x18235cb29: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x18235cb2f: mov r12, rax
// asm:   0x18235cb32: lea rcx, [rip + 0x1d9aa2f]  ; ": "
// asm:   0x18235cb39: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18235cb3e: mov r14, rax
// asm:   0x18235cb41: lea rcx, [rip + 0x1d27590]  ; "AccountManager: failed to send GET "
// asm:   0x18235cb48: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18235cb4d: xor ebx, ebx
// asm:   0x18235cb4f: mov qword ptr [rsp + 0x20], rbx
// asm:   0x18235cb54: mov r9, r12
// asm:   0x18235cb57: mov r8, r14
// asm:   0x18235cb5a: mov rdx, r15
// asm:   0x18235cb5d: mov rcx, rax
// asm:   0x18235cb60: call 0x181969590  ; System_String__Concat()
// asm:   0x18235cb65: mov r14, rax
// asm:   0x18235cb68: lea rcx, [rip + 0x1d9e8c9]  ; TypeInfo_UnityEngine_Debug
// asm:   0x18235cb6f: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18235cb74: cmp dword ptr [rax + 0xe4], ebx
// asm:   0x18235cb7a: jne 0x18235cb84
// asm:   0x18235cb7c: mov rcx, rax
// asm:   0x18235cb7f: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x18235cb84: xor edx, edx
// asm:   0x18235cb86: mov rcx, r14
// asm:   0x18235cb89: call 0x182ec3130  ; UnityEngine_Debug__LogError()
// asm:   0x18235cb8e: mov r14, qword ptr [rdi + 0x30]
// asm:   0x18235cb92: test r14, r14
// asm:   0x18235cb95: je 0x18235cbf2
// asm:   0x18235cb97: mov rax, qword ptr [rip + 0x1ff82b2]
// asm:   0x18235cb9e: mov rdx, qword ptr [rax + 0xb8]
// asm:   0x18235cba5: mov r15, qword ptr [rdx]
// asm:   0x18235cba8: mov rax, qword ptr [rsi]
// asm:   0x18235cbab: mov rdx, qword ptr [rax + 0x190]
// asm:   0x18235cbb2: mov rcx, rsi
// asm:   0x18235cbb5: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x18235cbbb: mov rsi, rax
// asm:   0x18235cbbe: lea rcx, [rip + 0x1d441eb]  ; "network_error"
// asm:   0x18235cbc5: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18235cbca: mov qword ptr [rsp + 0x28], rbx
// asm:   0x18235cbcf: mov byte ptr [rsp + 0x20], bl
// asm:   0x18235cbd3: mov r9, rsi
// asm:   0x18235cbd6: mov r8, rax
// asm:   0x18235cbd9: mov rdx, r15
// asm:   0x18235cbdc: xor ecx, ecx
// asm:   0x18235cbde: call 0x182360890  ; ApplicationManagers_Api_AottgApiResult__Fail()
// asm:   0x18235cbe3: mov r8, qword ptr [r14 + 0x28]
// asm:   0x18235cbe7: mov rdx, rax
// asm:   0x18235cbea: mov rcx, qword ptr [r14 + 0x40]
// asm:   0x18235cbee: call qword ptr [r14 + 0x18]
// asm:   0x18235cbf2: mov dword ptr [rsp + 0x60], ebx
// asm:   0x18235cc55: mov rcx, qword ptr [rsp + 0x120]
// asm:   0x18235cc5d: mov dword ptr [rcx], 0xfffffffe
// asm:   0x18235cc63: mov eax, dword ptr [rsp + 0x60]
// asm:   0x18235cc67: dec eax
// asm:   0x18235cc69: movsxd rdx, eax
// asm:   0x18235cc6c: add rcx, 8
// asm:   0x18235cc70: xor r8d, r8d
// asm:   0x18235cc73: mov rdx, qword ptr [rsp + rdx*8 + 0x50]
// asm:   0x18235cc78: call 0x181150b30  ; il2cpp_runtime_helper_181150b30()
// asm:   0x18235cc7d: jmp 0x18235cc34
// asm:   0x18235cc85: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x1833408c0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833408c5: push rbx
// asm:   0x1833408c6: push rbp
// asm:   0x1833408c7: push rdi
// asm:   0x1833408c8: sub rsp, 0x50
// asm:   0x1833408cc: mov rbp, rdx
// asm:   0x1833408cf: mov rbx, qword ptr [rbp + 0xa8]
// asm:   0x1833408d6: mov rax, qword ptr [rbx]
// asm:   0x1833408d9: mov rdi, qword ptr [rax]
// asm:   0x1833408dc: lea rcx, [rip + 0xd38675]  ; TypeInfo_System_Exception
// asm:   0x1833408e3: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1833408e8: mov rdx, rdi
// asm:   0x1833408eb: mov rcx, rax
// asm:   0x1833408ee: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x1833408f3: test al, al
// asm:   0x1833408f5: mov rax, qword ptr [rbx]
// asm:   0x1833408f8: je 0x183340911
// asm:   0x1833408fa: mov qword ptr [rbp + 0x50], rax
// asm:   0x1833408fe: mov dword ptr [rbp + 0x60], 1
// asm:   0x183340905: movabs rax, 0
// asm:   0x18334090f: jmp 0x18334092c
// asm:   0x183340911: mov qword ptr [rbp + 0x98], rax
// asm:   0x183340918: lea rdx, [rip + 0xc9b669]
// asm:   0x18334091f: lea rcx, [rbp + 0x98]
// asm:   0x183340926: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18334092c: add rsp, 0x50
// asm:   0x183340930: pop rdi
// asm:   0x183340931: pop rbp
// asm:   0x183340932: pop rbx
// asm:   0x183340933: ret 
// asm:   0x183340940: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183340945: push rbx
// asm:   0x183340946: push rbp
// asm:   0x183340947: push rdi
// asm:   0x183340948: sub rsp, 0x50
// asm:   0x18334094c: mov rbp, rdx
// asm:   0x18334094f: mov rdi, qword ptr [rbp + 0xb0]
// asm:   0x183340956: mov rax, qword ptr [rdi]
// asm:   0x183340959: mov rbx, qword ptr [rax]
// asm:   0x18334095c: lea rcx, [rip + 0xd385f5]  ; TypeInfo_System_Exception
// asm:   0x183340963: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x183340968: mov rcx, rax
// asm:   0x18334096b: mov rdx, rbx
// asm:   0x18334096e: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183340973: test al, al
// asm:   0x183340975: mov rax, qword ptr [rdi]
// asm:   0x183340978: je 0x183340992
// asm:   0x18334097a: movsxd rcx, dword ptr [rbp + 0x60]
// asm:   0x18334097e: mov qword ptr [rbp + rcx*8 + 0x50], rax
// asm:   0x183340983: inc dword ptr [rbp + 0x60]
// asm:   0x183340986: movabs rax, 0
// asm:   0x183340990: jmp 0x1833409ad
// asm:   0x183340992: mov qword ptr [rbp + 0xa0], rax
// asm:   0x183340999: lea rdx, [rip + 0xc9b5e8]
// asm:   0x1833409a0: lea rcx, [rbp + 0xa0]
// asm:   0x1833409a7: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x1833409ad: add rsp, 0x50
// asm:   0x1833409b1: pop rdi
// asm:   0x1833409b2: pop rbp
// asm:   0x1833409b3: pop rbx
// asm:   0x1833409b4: ret 

void ApplicationManagers_AccountManager__SendApiGetAsync_d__166__MoveNext
               (ApplicationManagers_AccountManager__SendApiGetAsync_d__166_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  bool parseJson;
  System_String_o *path;
  System_String_o *bearer;
  System_Action_AottgApiResult__o *pSVar2;
  Il2CppObject *obj;
  Cysharp_Threading_Tasks_IUniTaskSource_T__o *pCVar3;
  Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult__o *pCVar4;
  MethodInfo *method_00;
  char cVar5;
  Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *pCVar6;
  ApplicationManagers_Api_AottgApiResult_o *pAVar7;
  Il2CppClass *klass;
  void *pvVar8;
  Cysharp_Threading_Tasks_IUniTaskSource_T__o *local_b0;
  ApplicationManagers_Api_AottgApiResult_o *pAStack_a8;
  int16_t local_a0;
  undefined6 uStack_9e;
  Cysharp_Threading_Tasks_UniTask_AottgApiResult__o local_98 [4];
  
  if (Il2CppMethodInitialized_18434791e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_40f97b0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_GetResult);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_get_IsCompleted);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter);
    il2cpp_codegen_initialize_runtime_metadata(&"GET");
    Il2CppMethodInitialized_18434791e = '\x01';
  }
  if ((__this->fields).__1__state == 0) {
    local_b0 = (__this->fields).__u__1.fields.task.fields.source;
    pAStack_a8 = (ApplicationManagers_Api_AottgApiResult_o *)(__this->fields).__u__1.fields.task.fields.result
    ;
    pCVar4 = &(__this->fields).__u__1;
    local_a0 = (pCVar4->fields).task.fields.token;
    uStack_9e = *(undefined6 *)&(pCVar4->fields).task.fields.field_0x12;
    (__this->fields).__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    (__this->fields).__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
    *(undefined8 *)&(__this->fields).__u__1.fields.task.fields.token = 0;
    (__this->fields).__1__state = -1;
  }
  else {
    path = (__this->fields).path;
    bearer = (__this->fields).bearer;
    parseJson = (__this->fields).parseJson;
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pCVar6 = ApplicationManagers_AccountManager__SendApiJsonAsync_23265b0
                       (local_98,"GET",path,(System_String_o *)0x0,bearer,parseJson,false,
                        (System_Nullable_int__o)0x0,(MethodInfo *)0x0);
    pCVar3 = (pCVar6->fields).source;
    pAVar7 = (pCVar6->fields).result;
    uVar1._0_2_ = (pCVar6->fields).token;
    uVar1._2_6_ = *(undefined6 *)&(pCVar6->fields).field_0x12;
    local_98[0].fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    local_98[0].fields.result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
    local_98[0].fields.token = 0;
    local_98[0].fields._18_6_ = 0;
    if (((MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter->klass->_2).bitflags1 & 1) == 0
       ) {
      il2cpp_codegen_class_init_checked
                (MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter->klass);
    }
    local_98[0].fields.source = pCVar3;
    local_98[0].fields.result = pAVar7;
    local_98[0].fields._16_8_ = uVar1;
    Il2CppCodeGenWriteBarrier((void **)local_98,(void *)0x0);
    local_b0 = local_98[0].fields.source;
    pAStack_a8 = local_98[0].fields.result;
    local_a0 = local_98[0].fields.token;
    uStack_9e = local_98[0].fields._18_6_;
    cVar5 = il2cpp_runtime_helper_1803595b0(&local_b0);
    if (cVar5 == '\0') {
      (__this->fields).__1__state = 0;
      (__this->fields).__u__1.fields.task.fields.source = local_b0;
      (__this->fields).__u__1.fields.task.fields.result = (Il2CppObject *)pAStack_a8;
      pCVar4 = &(__this->fields).__u__1;
      (pCVar4->fields).task.fields.token = local_a0;
      *(undefined6 *)&(pCVar4->fields).task.fields.field_0x12 = uStack_9e;
      Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__u__1,(void *)0x0);
      method_00 = 
      MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_40f97b0
      ;
      if (((
           MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_40f97b0
           ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) &&
         (il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise),
         (method_00->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0)) {
        il2cpp_codegen_rgctx_method_init(method_00);
      }
      if ((__this->fields).__t__builder.fields.runnerPromise ==
          (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)0x0) {
        klass = (method_00->field7_0x38).rgctx_data[2].klass;
        if (((klass->_2).bitflags1 & 1) == 0) {
          klass = il2cpp_codegen_class_init_checked(klass);
        }
        if ((klass->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(klass);
        }
        Cysharp_Threading_Tasks_CompilerServices_AsyncUniTask_AccountManager__SendApiGetAsync_d__166___SetStateMachine
                  (__this,(Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o **)
                          &(__this->fields).__t__builder,
                   (MethodInfo_DF5950 *)(method_00->field7_0x38).rgctx_data[1].method);
      }
      obj = (Il2CppObject *)(__this->fields).__t__builder.fields.runnerPromise;
      if (obj != (Il2CppObject *)0x0) {
        pvVar8 = InterfaceInvoker0_Invoke
                           (0,(Il2CppClass *)
                              TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise,obj
                           );
        il2cpp_runtime_helper_1800142b0(&local_b0,pvVar8,(method_00->field7_0x38).rgctx_data[5].rgctxDataDummy);
        return;
      }
      ThrowNullReferenceException();
    }
  }
  pAVar7 = il2cpp_runtime_helper_1803594e0();
  pSVar2 = (__this->fields).onComplete;
  if (pSVar2 != (System_Action_AottgApiResult__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pAVar7,(pSVar2->fields).method);
  }
  (__this->fields).__1__state = -2;
  if (Il2CppMethodInitialized_184340822 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise);
    Il2CppMethodInitialized_184340822 = '\x01';
  }
  if ((__this->fields).__t__builder.fields.runnerPromise !=
      (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)0x0) {
    InterfaceInvoker0_Invoke
              (2,(Il2CppClass *)TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise,
               (Il2CppObject *)(__this->fields).__t__builder.fields.runnerPromise);
  }
  return;
}


// ApplicationManagers.AccountManager.<SendApiGetAsync>d__166$$SetStateMachine
// il2cpp: void ApplicationManagers_AccountManager__SendApiGetAsync_d__166__SetStateMachine (ApplicationManagers_AccountManager__SendApiGetAsync_d__166_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x1808e6930

void
ApplicationManagers_AccountManager__SendApiGetAsync_d__166__SetStateMachine(ApplicationManagers_AccountManager__SendApiGetAsync_d__166_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, MethodInfo* method)

{
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__t__builder,
             (MethodInfo *)stateMachine);
  return;
}


// ApplicationManagers.AccountManager.<SendApiJson>d__167$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__SendApiJson_d__167___ctor (ApplicationManagers_AccountManager__SendApiJson_d__167_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
ApplicationManagers_AccountManager__SendApiJson_d__167___ctor(ApplicationManagers_AccountManager__SendApiJson_d__167_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<SendApiJson>d__167$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__SendApiJson_d__167__System_IDisposable_Dispose (ApplicationManagers_AccountManager__SendApiJson_d__167_o* __this, const MethodInfo* method);
// 0x180547020

void
ApplicationManagers_AccountManager__SendApiJson_d__167__System_IDisposable_Dispose(ApplicationManagers_AccountManager__SendApiJson_d__167_o* __this, MethodInfo* method)

{
  return;
}


// ApplicationManagers.AccountManager.<SendApiJson>d__167$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__SendApiJson_d__167__MoveNext (ApplicationManagers_AccountManager__SendApiJson_d__167_o* __this, const MethodInfo* method);
// 0x18235d3c0

bool ApplicationManagers_AccountManager__SendApiJson_d__167__MoveNext
               (ApplicationManagers_AccountManager__SendApiJson_d__167_o *__this,MethodInfo *method)

{
  bool parseJson;
  bool reportNetworkError;
  int iVar1;
  ApplicationManagers_AccountManager_o *__this_00;
  System_Action_AottgApiResult__o *value;
  System_String_o *bearer;
  System_String_o *method_00;
  System_String_o *path;
  System_String_o *json;
  System_Nullable_int__Fields timeoutSeconds;
  ApplicationManagers_AccountManager___c__DisplayClass167_0_o *pAVar2;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  Cysharp_Threading_Tasks_UniTask_o *pCVar3;
  Cysharp_Threading_Tasks_UniTask_o local_48;
  
  if (Il2CppMethodInitialized_18434791f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgApiResult);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass167_0_SendApiJson_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass167_0);
    Il2CppMethodInitialized_18434791f = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    pAVar2 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass167_0);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pAVar2,(MethodInfo *)0x0);
    (__this->fields).__8__1 = pAVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__8__1,pAVar2);
    pAVar2 = (__this->fields).__8__1;
    if (pAVar2 == (ApplicationManagers_AccountManager___c__DisplayClass167_0_o *)0x0) goto label_18235d5df;
    value = (__this->fields).onComplete;
    (pAVar2->fields).onComplete = value;
    Il2CppCodeGenWriteBarrier(&(pAVar2->fields).onComplete,value);
    pAVar2 = (__this->fields).__8__1;
    if (pAVar2 == (ApplicationManagers_AccountManager___c__DisplayClass167_0_o *)0x0) goto label_18235d5df;
    (pAVar2->fields).done = false;
    bearer = (__this->fields).bearer;
    method_00 = (__this->fields).method;
    path = (__this->fields).path;
    json = (__this->fields).json;
    timeoutSeconds = (__this->fields).timeoutSeconds.fields;
    parseJson = (__this->fields).parseJson;
    reportNetworkError = (__this->fields).reportNetworkError;
    pAVar2 = (__this->fields).__8__1;
    __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgApiResult);
    System_Action_object____ctor
              (__this_01,(Il2CppObject *)pAVar2,
               (intptr_t)MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass167_0_SendApiJson_b__0,
               (MethodInfo *)0x0);
    if (__this_00 == (ApplicationManagers_AccountManager_o *)0x0) goto label_18235d5df;
    pCVar3 = ApplicationManagers_AccountManager__SendApiJsonAsync
                       (&local_48,__this_00,method_00,path,json,bearer,parseJson,reportNetworkError,
                        (System_Nullable_int__o)timeoutSeconds,(System_Action_AottgApiResult__o *)__this_01,
                        (MethodInfo *)0x0);
    local_48.fields.source = (pCVar3->fields).source;
    local_48.fields.token = (pCVar3->fields).token;
    local_48.fields._10_6_ = *(undefined6 *)&(pCVar3->fields).field_0xa;
    Cysharp_Threading_Tasks_UniTaskExtensions__Forget(&local_48,(MethodInfo *)0x0);
  }
  else {
    if (iVar1 != 1) {
      return false;
    }
    (__this->fields).__1__state = -1;
  }
  pAVar2 = (__this->fields).__8__1;
  if (pAVar2 != (ApplicationManagers_AccountManager___c__DisplayClass167_0_o *)0x0) {
    if ((pAVar2->fields).done != false) {
      return false;
    }
    (__this->fields).__2__current = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,(void *)0x0);
    (__this->fields).__1__state = 1;
    return true;
  }
label_18235d5df:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager.<SendApiJson>d__167$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__SendApiJson_d__167__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__SendApiJson_d__167_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_AccountManager__SendApiJson_d__167__System_Collections_Generic_IEnumerator_System_Object__get_Current(ApplicationManagers_AccountManager__SendApiJson_d__167_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<SendApiJson>d__167$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__SendApiJson_d__167__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__SendApiJson_d__167_o* __this, const MethodInfo* method);
// 0x18235d5f0

void ApplicationManagers_AccountManager__SendApiJson_d__167__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__SendApiJson_d__167_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_ApplicationManagers_AccountManager_SendApiJson_d__167_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// ApplicationManagers.AccountManager.<SendApiJson>d__167$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__SendApiJson_d__167__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__SendApiJson_d__167_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_AccountManager__SendApiJson_d__167__System_Collections_IEnumerator_get_Current(ApplicationManagers_AccountManager__SendApiJson_d__167_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<SendApiJsonAsync>d__168$$MoveNext
// il2cpp: void ApplicationManagers_AccountManager__SendApiJsonAsync_d__168__MoveNext (ApplicationManagers_AccountManager__SendApiJsonAsync_d__168_o __this, const MethodInfo* method);
// 0x18235ce90
// eh: try 0x18235cf08..0x18235d3b7 -> pad 0x1833408c0 (+5 call sites) catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 186 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18235d064: nop 
// asm:   0x18235d12f: lea rcx, [rip + 0x1d50eaa]  ; TypeInfo_string_array
// asm:   0x18235d136: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18235d13b: mov edx, 6
// asm:   0x18235d140: mov rcx, rax
// asm:   0x18235d143: call 0x180416200  ; SZArrayNew()
// asm:   0x18235d148: mov rbx, rax
// asm:   0x18235d14b: test rax, rax
// asm:   0x18235d14e: je 0x18235d3b1
// asm:   0x18235d154: lea rcx, [rip + 0x1d26e9d]  ; "AccountManager: failed to send "
// asm:   0x18235d15b: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18235d160: cmp dword ptr [rbx + 0x18], 0
// asm:   0x18235d164: jbe 0x18235d38e
// asm:   0x18235d16a: mov qword ptr [rbx + 0x20], rax
// asm:   0x18235d16e: lea rcx, [rbx + 0x20]
// asm:   0x18235d172: mov rdx, rax
// asm:   0x18235d175: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18235d17a: cmp dword ptr [rbx + 0x18], 1
// asm:   0x18235d17e: jbe 0x18235d393
// asm:   0x18235d184: mov rdi, qword ptr [rsp + 0x120]
// asm:   0x18235d18c: mov rdx, qword ptr [rdi + 0x18]
// asm:   0x18235d190: mov qword ptr [rbx + 0x28], rdx
// asm:   0x18235d194: lea rcx, [rbx + 0x28]
// asm:   0x18235d198: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18235d19d: lea rcx, [rip + 0x1d275e4]  ; " "
// asm:   0x18235d1a4: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18235d1a9: cmp dword ptr [rbx + 0x18], 2
// asm:   0x18235d1ad: jbe 0x18235d398
// asm:   0x18235d1b3: mov qword ptr [rbx + 0x30], rax
// asm:   0x18235d1b7: lea rcx, [rbx + 0x30]
// asm:   0x18235d1bb: mov rdx, rax
// asm:   0x18235d1be: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18235d1c3: cmp dword ptr [rbx + 0x18], 3
// asm:   0x18235d1c7: jbe 0x18235d39d
// asm:   0x18235d1cd: mov rdx, qword ptr [rdi + 0x20]
// asm:   0x18235d1d1: mov qword ptr [rbx + 0x38], rdx
// asm:   0x18235d1d5: lea rcx, [rbx + 0x38]
// asm:   0x18235d1d9: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18235d1de: lea rcx, [rip + 0x1d9a383]  ; ": "
// asm:   0x18235d1e5: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18235d1ea: cmp dword ptr [rbx + 0x18], 4
// asm:   0x18235d1ee: jbe 0x18235d3a2
// asm:   0x18235d1f4: mov rsi, qword ptr [rsp + 0x50]
// asm:   0x18235d1f9: mov qword ptr [rbx + 0x40], rax
// asm:   0x18235d1fd: lea rcx, [rbx + 0x40]
// asm:   0x18235d201: mov rdx, rax
// asm:   0x18235d204: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18235d209: test rsi, rsi
// asm:   0x18235d20c: je 0x18235d3ac
// asm:   0x18235d212: mov rax, qword ptr [rsi]
// asm:   0x18235d215: mov rdx, qword ptr [rax + 0x190]
// asm:   0x18235d21c: mov rcx, rsi
// asm:   0x18235d21f: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x18235d225: cmp dword ptr [rbx + 0x18], 5
// asm:   0x18235d229: jbe 0x18235d3a7
// asm:   0x18235d22f: mov qword ptr [rbx + 0x48], rax
// asm:   0x18235d233: lea rcx, [rbx + 0x48]
// asm:   0x18235d237: mov rdx, rax
// asm:   0x18235d23a: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x18235d23f: xor edx, edx
// asm:   0x18235d241: mov rcx, rbx
// asm:   0x18235d244: call 0x181969830  ; System_String__Concat()
// asm:   0x18235d249: mov rbx, rax
// asm:   0x18235d24c: lea rcx, [rip + 0x1d9e1e5]  ; TypeInfo_UnityEngine_Debug
// asm:   0x18235d253: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18235d258: cmp dword ptr [rax + 0xe4], 0
// asm:   0x18235d25f: jne 0x18235d269
// asm:   0x18235d261: mov rcx, rax
// asm:   0x18235d264: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x18235d269: xor edx, edx
// asm:   0x18235d26b: mov rcx, rbx
// asm:   0x18235d26e: call 0x182ec3130  ; UnityEngine_Debug__LogError()
// asm:   0x18235d273: cmp byte ptr [rdi + 0x39], 0
// asm:   0x18235d277: je 0x18235d28f
// asm:   0x18235d279: lea rcx, [rip + 0x1d43b30]  ; "network_error"
// asm:   0x18235d280: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18235d285: xor edx, edx
// asm:   0x18235d287: mov rcx, rax
// asm:   0x18235d28a: call 0x182344120  ; ApplicationManagers_AottgNetworkNotifications__TryReport()
// asm:   0x18235d28f: mov rbx, qword ptr [rdi + 0x48]
// asm:   0x18235d293: test rbx, rbx
// asm:   0x18235d296: je 0x18235d2f7
// asm:   0x18235d298: mov rax, qword ptr [rip + 0x1ff7bb1]
// asm:   0x18235d29f: mov rdx, qword ptr [rax + 0xb8]
// asm:   0x18235d2a6: mov r14, qword ptr [rdx]
// asm:   0x18235d2a9: mov rax, qword ptr [rsi]
// asm:   0x18235d2ac: mov rdx, qword ptr [rax + 0x190]
// asm:   0x18235d2b3: mov rcx, rsi
// asm:   0x18235d2b6: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x18235d2bc: mov r15, rax
// asm:   0x18235d2bf: lea rcx, [rip + 0x1d43aea]  ; "network_error"
// asm:   0x18235d2c6: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18235d2cb: xor esi, esi
// asm:   0x18235d2cd: mov qword ptr [rsp + 0x28], rsi
// asm:   0x18235d2d2: mov byte ptr [rsp + 0x20], sil
// asm:   0x18235d2d7: mov r9, r15
// asm:   0x18235d2da: mov r8, rax
// asm:   0x18235d2dd: mov rdx, r14
// asm:   0x18235d2e0: xor ecx, ecx
// asm:   0x18235d2e2: call 0x182360890  ; ApplicationManagers_Api_AottgApiResult__Fail()
// asm:   0x18235d2e7: mov r8, qword ptr [rbx + 0x28]
// asm:   0x18235d2eb: mov rdx, rax
// asm:   0x18235d2ee: mov rcx, qword ptr [rbx + 0x40]
// asm:   0x18235d2f2: call qword ptr [rbx + 0x18]
// asm:   0x18235d2f5: jmp 0x18235d2f9
// asm:   0x18235d2f7: xor esi, esi
// asm:   0x18235d2f9: mov dword ptr [rsp + 0x60], esi
// asm:   0x18235d35e: mov rcx, qword ptr [rsp + 0x120]
// asm:   0x18235d366: mov dword ptr [rcx], 0xfffffffe
// asm:   0x18235d36c: mov eax, dword ptr [rsp + 0x60]
// asm:   0x18235d370: dec eax
// asm:   0x18235d372: movsxd rdx, eax
// asm:   0x18235d375: add rcx, 8
// asm:   0x18235d379: xor r8d, r8d
// asm:   0x18235d37c: mov rdx, qword ptr [rsp + rdx*8 + 0x50]
// asm:   0x18235d381: call 0x181150b30  ; il2cpp_runtime_helper_181150b30()
// asm:   0x18235d386: jmp 0x18235d33b
// asm:   0x18235d38e: call 0x180417110  ; ThrowIndexOutOfRangeException()
// asm:   0x18235d393: call 0x180417110  ; ThrowIndexOutOfRangeException()
// asm:   0x18235d398: call 0x180417110  ; ThrowIndexOutOfRangeException()
// asm:   0x18235d39d: call 0x180417110  ; ThrowIndexOutOfRangeException()
// asm:   0x18235d3a2: call 0x180417110  ; ThrowIndexOutOfRangeException()
// asm:   0x18235d3a7: call 0x180417110  ; ThrowIndexOutOfRangeException()
// asm:   0x18235d3ac: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x18235d3b1: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x1833408c0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833408c5: push rbx
// asm:   0x1833408c6: push rbp
// asm:   0x1833408c7: push rdi
// asm:   0x1833408c8: sub rsp, 0x50
// asm:   0x1833408cc: mov rbp, rdx
// asm:   0x1833408cf: mov rbx, qword ptr [rbp + 0xa8]
// asm:   0x1833408d6: mov rax, qword ptr [rbx]
// asm:   0x1833408d9: mov rdi, qword ptr [rax]
// asm:   0x1833408dc: lea rcx, [rip + 0xd38675]  ; TypeInfo_System_Exception
// asm:   0x1833408e3: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1833408e8: mov rdx, rdi
// asm:   0x1833408eb: mov rcx, rax
// asm:   0x1833408ee: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x1833408f3: test al, al
// asm:   0x1833408f5: mov rax, qword ptr [rbx]
// asm:   0x1833408f8: je 0x183340911
// asm:   0x1833408fa: mov qword ptr [rbp + 0x50], rax
// asm:   0x1833408fe: mov dword ptr [rbp + 0x60], 1
// asm:   0x183340905: movabs rax, 0
// asm:   0x18334090f: jmp 0x18334092c
// asm:   0x183340911: mov qword ptr [rbp + 0x98], rax
// asm:   0x183340918: lea rdx, [rip + 0xc9b669]
// asm:   0x18334091f: lea rcx, [rbp + 0x98]
// asm:   0x183340926: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18334092c: add rsp, 0x50
// asm:   0x183340930: pop rdi
// asm:   0x183340931: pop rbp
// asm:   0x183340932: pop rbx
// asm:   0x183340933: ret 
// asm:   0x183340940: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183340945: push rbx
// asm:   0x183340946: push rbp
// asm:   0x183340947: push rdi
// asm:   0x183340948: sub rsp, 0x50
// asm:   0x18334094c: mov rbp, rdx
// asm:   0x18334094f: mov rdi, qword ptr [rbp + 0xb0]
// asm:   0x183340956: mov rax, qword ptr [rdi]
// asm:   0x183340959: mov rbx, qword ptr [rax]
// asm:   0x18334095c: lea rcx, [rip + 0xd385f5]  ; TypeInfo_System_Exception
// asm:   0x183340963: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x183340968: mov rcx, rax
// asm:   0x18334096b: mov rdx, rbx
// asm:   0x18334096e: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183340973: test al, al
// asm:   0x183340975: mov rax, qword ptr [rdi]
// asm:   0x183340978: je 0x183340992
// asm:   0x18334097a: movsxd rcx, dword ptr [rbp + 0x60]
// asm:   0x18334097e: mov qword ptr [rbp + rcx*8 + 0x50], rax
// asm:   0x183340983: inc dword ptr [rbp + 0x60]
// asm:   0x183340986: movabs rax, 0
// asm:   0x183340990: jmp 0x1833409ad
// asm:   0x183340992: mov qword ptr [rbp + 0xa0], rax
// asm:   0x183340999: lea rdx, [rip + 0xc9b5e8]
// asm:   0x1833409a0: lea rcx, [rbp + 0xa0]
// asm:   0x1833409a7: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x1833409ad: add rsp, 0x50
// asm:   0x1833409b1: pop rdi
// asm:   0x1833409b2: pop rbp
// asm:   0x1833409b3: pop rbx
// asm:   0x1833409b4: ret 

void ApplicationManagers_AccountManager__SendApiJsonAsync_d__168__MoveNext
               (ApplicationManagers_AccountManager__SendApiJsonAsync_d__168_o *__this,MethodInfo *method)

{
  undefined8 uVar1;
  bool parseJson;
  bool reportNetworkError;
  System_String_o *method_00;
  System_String_o *path;
  System_String_o *json;
  System_String_o *bearer;
  System_Nullable_int__Fields timeoutSeconds;
  System_Action_AottgApiResult__o *pSVar2;
  Il2CppObject *obj;
  Cysharp_Threading_Tasks_IUniTaskSource_T__o *pCVar3;
  Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult__o *pCVar4;
  MethodInfo *method_01;
  char cVar5;
  Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *pCVar6;
  ApplicationManagers_Api_AottgApiResult_o *pAVar7;
  Il2CppClass *klass;
  void *pvVar8;
  Cysharp_Threading_Tasks_IUniTaskSource_T__o *local_b0;
  ApplicationManagers_Api_AottgApiResult_o *pAStack_a8;
  int16_t local_a0;
  undefined6 uStack_9e;
  Cysharp_Threading_Tasks_UniTask_AottgApiResult__o local_98 [4];
  
  if (Il2CppMethodInitialized_184347920 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_40f9888
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_GetResult);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_get_IsCompleted);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter);
    Il2CppMethodInitialized_184347920 = '\x01';
  }
  if ((__this->fields).__1__state == 0) {
    local_b0 = (__this->fields).__u__1.fields.task.fields.source;
    pAStack_a8 = (ApplicationManagers_Api_AottgApiResult_o *)(__this->fields).__u__1.fields.task.fields.result
    ;
    pCVar4 = &(__this->fields).__u__1;
    local_a0 = (pCVar4->fields).task.fields.token;
    uStack_9e = *(undefined6 *)&(pCVar4->fields).task.fields.field_0x12;
    (__this->fields).__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    (__this->fields).__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
    *(undefined8 *)&(__this->fields).__u__1.fields.task.fields.token = 0;
    (__this->fields).__1__state = -1;
  }
  else {
    method_00 = (__this->fields).method;
    path = (__this->fields).path;
    json = (__this->fields).json;
    bearer = (__this->fields).bearer;
    parseJson = (__this->fields).parseJson;
    reportNetworkError = (__this->fields).reportNetworkError;
    timeoutSeconds = (__this->fields).timeoutSeconds.fields;
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pCVar6 = ApplicationManagers_AccountManager__SendApiJsonAsync_23265b0
                       (local_98,method_00,path,json,bearer,parseJson,reportNetworkError,
                        (System_Nullable_int__o)timeoutSeconds,(MethodInfo *)0x0);
    pCVar3 = (pCVar6->fields).source;
    pAVar7 = (pCVar6->fields).result;
    uVar1._0_2_ = (pCVar6->fields).token;
    uVar1._2_6_ = *(undefined6 *)&(pCVar6->fields).field_0x12;
    local_98[0].fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    local_98[0].fields.result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
    local_98[0].fields.token = 0;
    local_98[0].fields._18_6_ = 0;
    if (((MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter->klass->_2).bitflags1 & 1) == 0
       ) {
      il2cpp_codegen_class_init_checked
                (MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter->klass);
    }
    local_98[0].fields.source = pCVar3;
    local_98[0].fields.result = pAVar7;
    local_98[0].fields._16_8_ = uVar1;
    Il2CppCodeGenWriteBarrier((void **)local_98,(void *)0x0);
    local_b0 = local_98[0].fields.source;
    pAStack_a8 = local_98[0].fields.result;
    local_a0 = local_98[0].fields.token;
    uStack_9e = local_98[0].fields._18_6_;
    cVar5 = il2cpp_runtime_helper_1803595b0(&local_b0);
    if (cVar5 == '\0') {
      (__this->fields).__1__state = 0;
      (__this->fields).__u__1.fields.task.fields.source = local_b0;
      (__this->fields).__u__1.fields.task.fields.result = (Il2CppObject *)pAStack_a8;
      pCVar4 = &(__this->fields).__u__1;
      (pCVar4->fields).task.fields.token = local_a0;
      *(undefined6 *)&(pCVar4->fields).task.fields.field_0x12 = uStack_9e;
      Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__u__1,(void *)0x0);
      method_01 = 
      MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_40f9888
      ;
      if (((
           MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_40f9888
           ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) &&
         (il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise),
         (method_01->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0)) {
        il2cpp_codegen_rgctx_method_init(method_01);
      }
      if ((__this->fields).__t__builder.fields.runnerPromise ==
          (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)0x0) {
        klass = (method_01->field7_0x38).rgctx_data[2].klass;
        if (((klass->_2).bitflags1 & 1) == 0) {
          klass = il2cpp_codegen_class_init_checked(klass);
        }
        if ((klass->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(klass);
        }
        Cysharp_Threading_Tasks_CompilerServices_AsyncUniTask_AccountManager__SendApiJsonAsync_d__168___SetStateMachine
                  (__this,(Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o **)
                          &(__this->fields).__t__builder,
                   (MethodInfo_DF7780 *)(method_01->field7_0x38).rgctx_data[1].method);
      }
      obj = (Il2CppObject *)(__this->fields).__t__builder.fields.runnerPromise;
      if (obj != (Il2CppObject *)0x0) {
        pvVar8 = InterfaceInvoker0_Invoke
                           (0,(Il2CppClass *)
                              TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise,obj
                           );
        il2cpp_runtime_helper_1800142b0(&local_b0,pvVar8,(method_01->field7_0x38).rgctx_data[5].rgctxDataDummy);
        return;
      }
      ThrowNullReferenceException();
    }
  }
  pAVar7 = il2cpp_runtime_helper_1803594e0();
  pSVar2 = (__this->fields).onComplete;
  if (pSVar2 != (System_Action_AottgApiResult__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,pAVar7,(pSVar2->fields).method);
  }
  (__this->fields).__1__state = -2;
  if (Il2CppMethodInitialized_184340822 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise);
    Il2CppMethodInitialized_184340822 = '\x01';
  }
  if ((__this->fields).__t__builder.fields.runnerPromise !=
      (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)0x0) {
    InterfaceInvoker0_Invoke
              (2,(Il2CppClass *)TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise,
               (Il2CppObject *)(__this->fields).__t__builder.fields.runnerPromise);
  }
  return;
}


// ApplicationManagers.AccountManager.<SendApiJsonAsync>d__168$$SetStateMachine
// il2cpp: void ApplicationManagers_AccountManager__SendApiJsonAsync_d__168__SetStateMachine (ApplicationManagers_AccountManager__SendApiJsonAsync_d__168_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x1808e6930

void
ApplicationManagers_AccountManager__SendApiJsonAsync_d__168__SetStateMachine(ApplicationManagers_AccountManager__SendApiJsonAsync_d__168_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, MethodInfo* method)

{
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&(__this->fields).__t__builder,
             (MethodInfo *)stateMachine);
  return;
}


// ApplicationManagers.AccountManager.<SendMeJson>d__54$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__SendMeJson_d__54___ctor (ApplicationManagers_AccountManager__SendMeJson_d__54_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
ApplicationManagers_AccountManager__SendMeJson_d__54___ctor(ApplicationManagers_AccountManager__SendMeJson_d__54_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<SendMeJson>d__54$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__SendMeJson_d__54__System_IDisposable_Dispose (ApplicationManagers_AccountManager__SendMeJson_d__54_o* __this, const MethodInfo* method);
// 0x180547020

void
ApplicationManagers_AccountManager__SendMeJson_d__54__System_IDisposable_Dispose(ApplicationManagers_AccountManager__SendMeJson_d__54_o* __this, MethodInfo* method)

{
  return;
}


// ApplicationManagers.AccountManager.<SendMeJson>d__54$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__SendMeJson_d__54__MoveNext (ApplicationManagers_AccountManager__SendMeJson_d__54_o* __this, const MethodInfo* method);
// 0x18235d630
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18235d782: mov r8, qword ptr [rip + 0x1d1e6bf]  ; "unknown_error"

bool ApplicationManagers_AccountManager__SendMeJson_d__54__MoveNext
               (ApplicationManagers_AccountManager__SendMeJson_d__54_o *__this,MethodInfo *method)

{
  int iVar1;
  System_Action_bool__string__JSONNode__o *pSVar2;
  ApplicationManagers_Api_AottgApiResult_o *pAVar3;
  ApplicationManagers_AccountManager_o *__this_00;
  System_String_o *path;
  System_String_o *json;
  bool bVar4;
  ApplicationManagers_AccountManager___c__DisplayClass54_0_o *pAVar5;
  System_String_o *bearer;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  Il2CppObject *pIVar6;
  System_String_o *pSVar7;
  
  if (Il2CppMethodInitialized_184347921 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgApiResult);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass54_0_SendMeJson_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass54_0);
    il2cpp_codegen_initialize_runtime_metadata(&"GET");
    il2cpp_codegen_initialize_runtime_metadata(&"unknown_error");
    Il2CppMethodInitialized_184347921 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    pAVar5 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass54_0);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pAVar5,(MethodInfo *)0x0);
    (__this->fields).__8__1 = pAVar5;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__8__1,pAVar5);
    bVar4 = System_String__Equals_196c550((__this->fields).method,"GET",5,(MethodInfo *)0x0);
    if (bVar4) {
      if (__this_00 == (ApplicationManagers_AccountManager_o *)0x0) goto label_18235d938;
      pIVar6 = (Il2CppObject *)
               ApplicationManagers_AccountManager__SendMeReadJson
                         (__this_00,(__this->fields).path,(__this->fields).onComplete,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar6;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar6);
      (__this->fields).__1__state = 1;
    }
    else {
      pAVar5 = (__this->fields).__8__1;
      if (pAVar5 == (ApplicationManagers_AccountManager___c__DisplayClass54_0_o *)0x0) {
label_18235d938:
        ThrowNullReferenceException();
      }
      (pAVar5->fields).result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(pAVar5->fields).result,(void *)0x0);
      pSVar7 = (__this->fields).method;
      path = (__this->fields).path;
      json = (__this->fields).json;
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      bearer = (System_String_o *)il2cpp_runtime_helper_182320410(0);
      pAVar5 = (__this->fields).__8__1;
      __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgApiResult);
      System_Action_object____ctor
                (__this_01,(Il2CppObject *)pAVar5,
                 (intptr_t)MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass54_0_SendMeJson_b__0,
                 (MethodInfo *)0x0);
      if (__this_00 == (ApplicationManagers_AccountManager_o *)0x0) goto label_18235d938;
      pIVar6 = (Il2CppObject *)
               ApplicationManagers_AccountManager__SendApiJson
                         (__this_00,pSVar7,path,json,bearer,true,(System_Action_AottgApiResult__o *)__this_01,
                          (__this->fields).reportNetworkError,(System_Nullable_int__o)0x0,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar6;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,pIVar6);
      (__this->fields).__1__state = 2;
    }
    bVar4 = true;
  }
  else if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    bVar4 = false;
  }
  else {
    if (iVar1 == 2) {
      pAVar5 = (__this->fields).__8__1;
      (__this->fields).__1__state = -1;
      if (pAVar5 == (ApplicationManagers_AccountManager___c__DisplayClass54_0_o *)0x0) goto label_18235d938;
      if (((pAVar5->fields).result == (ApplicationManagers_Api_AottgApiResult_o *)0x0) ||
         ((((pAVar5->fields).result)->fields)._Success_k__BackingField == false)) {
        pSVar2 = (__this->fields).onComplete;
        if (pSVar2 != (System_Action_bool__string__JSONNode__o *)0x0) {
          if (pAVar5 == (ApplicationManagers_AccountManager___c__DisplayClass54_0_o *)0x0) goto label_18235d938;
          pSVar7 = "unknown_error";
          if ((pAVar5->fields).result != (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
            pSVar7 = (((pAVar5->fields).result)->fields)._Error_k__BackingField;
          }
          (*(code *)(pSVar2->fields).invoke_impl)
                    ((pSVar2->fields).method_code,0,pSVar7,0,(pSVar2->fields).method);
        }
      }
      else {
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        ApplicationManagers_AccountManager__ClearOwnPublicProfileCache((MethodInfo *)0x0);
        pSVar2 = (__this->fields).onComplete;
        if (pSVar2 != (System_Action_bool__string__JSONNode__o *)0x0) {
          pAVar5 = (__this->fields).__8__1;
          if ((pAVar5 != (ApplicationManagers_AccountManager___c__DisplayClass54_0_o *)0x0) &&
             (pAVar3 = (pAVar5->fields).result, pAVar3 != (ApplicationManagers_Api_AottgApiResult_o *)0x0)) {
            (*(code *)(pSVar2->fields).invoke_impl)
                      ((pSVar2->fields).method_code,1,0,(pAVar3->fields)._Json_k__BackingField,
                       (pSVar2->fields).method);
            return false;
          }
          goto label_18235d938;
        }
      }
    }
    bVar4 = false;
  }
  return bVar4;
}


// ApplicationManagers.AccountManager.<SendMeJson>d__54$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__SendMeJson_d__54__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__SendMeJson_d__54_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_AccountManager__SendMeJson_d__54__System_Collections_Generic_IEnumerator_System_Object__get_Current(ApplicationManagers_AccountManager__SendMeJson_d__54_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<SendMeJson>d__54$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__SendMeJson_d__54__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__SendMeJson_d__54_o* __this, const MethodInfo* method);
// 0x18235d940

void ApplicationManagers_AccountManager__SendMeJson_d__54__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__SendMeJson_d__54_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_ApplicationManagers_AccountManager_SendMeJson_d__54_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// ApplicationManagers.AccountManager.<SendMeJson>d__54$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__SendMeJson_d__54__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__SendMeJson_d__54_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_AccountManager__SendMeJson_d__54__System_Collections_IEnumerator_get_Current(ApplicationManagers_AccountManager__SendMeJson_d__54_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<SendMeReadJson>d__55$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__SendMeReadJson_d__55___ctor (ApplicationManagers_AccountManager__SendMeReadJson_d__55_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x180573ef0

void
ApplicationManagers_AccountManager__SendMeReadJson_d__55___ctor(ApplicationManagers_AccountManager__SendMeReadJson_d__55_o* __this, int32_t __1__state, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<SendMeReadJson>d__55$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__SendMeReadJson_d__55__System_IDisposable_Dispose (ApplicationManagers_AccountManager__SendMeReadJson_d__55_o* __this, const MethodInfo* method);
// 0x180547020

void
ApplicationManagers_AccountManager__SendMeReadJson_d__55__System_IDisposable_Dispose(ApplicationManagers_AccountManager__SendMeReadJson_d__55_o* __this, MethodInfo* method)

{
  return;
}


// ApplicationManagers.AccountManager.<SendMeReadJson>d__55$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__SendMeReadJson_d__55__MoveNext (ApplicationManagers_AccountManager__SendMeReadJson_d__55_o* __this, const MethodInfo* method);
// 0x18235d980

bool ApplicationManagers_AccountManager__SendMeReadJson_d__55__MoveNext
               (ApplicationManagers_AccountManager__SendMeReadJson_d__55_o *__this,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_AccountManager_o *__this_00;
  System_String_o *bearer;
  ApplicationManagers_Api_AottgApiResult_o *pAVar2;
  ApplicationManagers_AccountManager___c__DisplayClass55_0_o *pAVar3;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_01;
  Il2CppObject *value;
  undefined8 uVar4;
  System_String_o *pSVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  System_Action_bool__string__JSONNode__o *pSVar7;
  intptr_t iVar8;
  
  if (Il2CppMethodInitialized_184347922 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgApiResult);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass55_0_SendMeReadJson_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass55_0);
    il2cpp_codegen_initialize_runtime_metadata(&"unknown_error");
    Il2CppMethodInitialized_184347922 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    pAVar3 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass55_0);
    System_Object___ctor
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pAVar3,(MethodInfo *)0x0);
    (__this->fields).__8__1 = pAVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__8__1,pAVar3);
    pAVar3 = (__this->fields).__8__1;
    if (pAVar3 != (ApplicationManagers_AccountManager___c__DisplayClass55_0_o *)0x0) {
      (pAVar3->fields).result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(pAVar3->fields).result,(void *)0x0);
      pSVar5 = (__this->fields).path;
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      if (Il2CppMethodInitialized_1843478fb == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
        Il2CppMethodInitialized_1843478fb = '\x01';
      }
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      pAVar3 = (__this->fields).__8__1;
      bearer = TypeInfo_ApplicationManagers_AccountManager->static_fields->_AuthToken_k__BackingField;
      __this_01 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgApiResult);
      System_Action_object____ctor
                (__this_01,(Il2CppObject *)pAVar3,
                 (intptr_t)
                 MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass55_0_SendMeReadJson_b__0,
                 (MethodInfo *)0x0);
      if (__this_00 != (ApplicationManagers_AccountManager_o *)0x0) {
        value = (Il2CppObject *)
                ApplicationManagers_AccountManager__SendApiGet
                          (__this_00,pSVar5,bearer,true,(System_Action_AottgApiResult__o *)__this_01,
                           (MethodInfo *)0x0);
        (__this->fields).__2__current = value;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current,value);
        (__this->fields).__1__state = 1;
        return true;
      }
    }
  }
  else {
    if (iVar1 != 1) {
      return false;
    }
    pAVar3 = (__this->fields).__8__1;
    (__this->fields).__1__state = -1;
    if (pAVar3 != (ApplicationManagers_AccountManager___c__DisplayClass55_0_o *)0x0) {
      if (((pAVar3->fields).result == (ApplicationManagers_Api_AottgApiResult_o *)0x0) ||
         (pAVar2 = (pAVar3->fields).result, (pAVar2->fields)._Success_k__BackingField == false)) {
        pSVar7 = (__this->fields).onComplete;
        if (pSVar7 == (System_Action_bool__string__JSONNode__o *)0x0) {
          return false;
        }
        if (pAVar3 == (ApplicationManagers_AccountManager___c__DisplayClass55_0_o *)0x0) goto label_18235dbc6;
        if ((pAVar3->fields).result == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
          iVar8 = (pSVar7->fields).method;
          pSVar6 = (SimpleJSONFixed_JSONNode_o *)0x0;
          uVar4 = 0;
          pSVar5 = "unknown_error";
        }
        else {
          pSVar6 = (SimpleJSONFixed_JSONNode_o *)0x0;
          iVar8 = (pSVar7->fields).method;
          uVar4 = 0;
          pSVar5 = (((pAVar3->fields).result)->fields)._Error_k__BackingField;
        }
      }
      else {
        pSVar7 = (__this->fields).onComplete;
        if (pSVar7 == (System_Action_bool__string__JSONNode__o *)0x0) {
          return false;
        }
        iVar8 = (pSVar7->fields).method;
        pSVar6 = (pAVar2->fields)._Json_k__BackingField;
        uVar4 = 1;
        pSVar5 = (System_String_o *)0x0;
      }
      (*(code *)(pSVar7->fields).invoke_impl)((pSVar7->fields).method_code,uVar4,pSVar5,pSVar6,iVar8);
      return false;
    }
  }
label_18235dbc6:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager.<SendMeReadJson>d__55$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__SendMeReadJson_d__55__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__SendMeReadJson_d__55_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_AccountManager__SendMeReadJson_d__55__System_Collections_Generic_IEnumerator_System_Object__get_Current(ApplicationManagers_AccountManager__SendMeReadJson_d__55_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<SendMeReadJson>d__55$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__SendMeReadJson_d__55__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__SendMeReadJson_d__55_o* __this, const MethodInfo* method);
// 0x18235dbd0

void ApplicationManagers_AccountManager__SendMeReadJson_d__55__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__SendMeReadJson_d__55_o *__this,MethodInfo *method)

{
  Il2CppClass *klass;
  System_NotSupportedException_o *__this_00;
  MethodInfo *lastManagedFrame;
  
  klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_NotSupportedException);
  __this_00 = (System_NotSupportedException_o *)il2cpp_codegen_object_new(klass);
  System_NotSupportedException___ctor(__this_00,(MethodInfo *)0x0);
  lastManagedFrame =
       il2cpp_codegen_get_runtime_metadata
                 (&
                  MethodInfo_ApplicationManagers_AccountManager_SendMeReadJson_d__55_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// ApplicationManagers.AccountManager.<SendMeReadJson>d__55$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__SendMeReadJson_d__55__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__SendMeReadJson_d__55_o* __this, const MethodInfo* method);
// 0x180573e90

Il2CppObject*
ApplicationManagers_AccountManager__SendMeReadJson_d__55__System_Collections_IEnumerator_get_Current(ApplicationManagers_AccountManager__SendMeReadJson_d__55_o* __this, MethodInfo* method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager$$LoginWithOAuth
// il2cpp: void ApplicationManagers_AccountManager__LoginWithOAuth (System_String_o* provider, System_Action_bool__string__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x182324870

void ApplicationManagers_AccountManager__LoginWithOAuth
               (System_String_o *provider,System_Action_bool__string__o *onComplete,bool reportNetworkError,
               MethodInfo *method)

{
  int32_t iVar1;
  ApplicationManagers_AccountManager_o *pAVar2;
  ApplicationManagers_AccountManager__OAuthFlow_d__8_o *__this;
  UnityEngine_Coroutine_o *value;
  
  if (Il2CppMethodInitialized_184347888 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_184347888 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
  if (pAVar2 != (ApplicationManagers_AccountManager_o *)0x0) {
    ApplicationManagers_AccountManager__CancelOAuthFlow(pAVar2,(MethodInfo *)0x0);
    TypeInfo_ApplicationManagers_AccountManager->static_fields->_oauthPendingCallback = onComplete;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_ApplicationManagers_AccountManager->static_fields->_oauthPendingCallback,onComplete);
    pAVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
    if (pAVar2 != (ApplicationManagers_AccountManager_o *)0x0) {
      iVar1 = (pAVar2->fields)._oauthAttemptId;
      if (Il2CppMethodInitialized_18434788a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_ApplicationManagers_AccountManager_OAuthFlow_d__8);
        Il2CppMethodInitialized_18434788a = '\x01';
      }
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_OAuthFlow_d__8);
      ApplicationManagers_AccountManager__OAuthFlow_d__8___ctor
                ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this,0,(MethodInfo *)0x0);
      if (__this != (ApplicationManagers_AccountManager__OAuthFlow_d__8_o *)0x0) {
        (__this->fields).__4__this = pAVar2;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__4__this,pAVar2);
        (__this->fields).provider = provider;
        Il2CppCodeGenWriteBarrier(&(__this->fields).provider,provider);
        (__this->fields).attemptId = iVar1;
        (__this->fields).reportNetworkError = reportNetworkError;
        value = UnityEngine_MonoBehaviour__StartCoroutine_Auto
                          ((UnityEngine_MonoBehaviour_o *)pAVar2,(System_Collections_IEnumerator_o *)__this,
                           (MethodInfo *)0x0);
        (pAVar2->fields)._oauthFlowCoroutine = value;
        Il2CppCodeGenWriteBarrier(&(pAVar2->fields)._oauthFlowCoroutine,value);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$CancelOAuthLogin
// il2cpp: void ApplicationManagers_AccountManager__CancelOAuthLogin (const MethodInfo* method);
// 0x182322010

void ApplicationManagers_AccountManager__CancelOAuthLogin(MethodInfo *method)

{
  ApplicationManagers_AccountManager_o *__this;
  System_Action_bool__string__o *pSVar1;
  
  if (Il2CppMethodInitialized_184347889 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&"oauth_denied");
    Il2CppMethodInitialized_184347889 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  __this = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
  pSVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_oauthPendingCallback;
  if (__this != (ApplicationManagers_AccountManager_o *)0x0) {
    ApplicationManagers_AccountManager__CancelOAuthFlow(__this,(MethodInfo *)0x0);
  }
  if (pSVar1 != (System_Action_bool__string__o *)0x0) {
    (*(code *)(pSVar1->fields).invoke_impl)
              ((pSVar1->fields).method_code,0,"oauth_denied",(pSVar1->fields).method);
    return;
  }
  return;
}


// ApplicationManagers.AccountManager$$OAuthFlow
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__OAuthFlow (ApplicationManagers_AccountManager_o* __this, System_String_o* provider, int32_t attemptId, bool reportNetworkError, const MethodInfo* method);
// 0x182324fe0

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__OAuthFlow
          (ApplicationManagers_AccountManager_o *__this,System_String_o *provider,int32_t attemptId,
          bool reportNetworkError,MethodInfo *method)

{
  ApplicationManagers_AccountManager__OAuthFlow_d__8_o *__this_00;
  
  if (Il2CppMethodInitialized_18434788a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager_OAuthFlow_d__8);
    Il2CppMethodInitialized_18434788a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_OAuthFlow_d__8);
  ApplicationManagers_AccountManager__OAuthFlow_d__8___ctor
            ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (ApplicationManagers_AccountManager__OAuthFlow_d__8_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
    (__this_00->fields).provider = provider;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).provider,provider);
    (__this_00->fields).attemptId = attemptId;
    (__this_00->fields).reportNetworkError = reportNetworkError;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$PollUnityOAuth
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__PollUnityOAuth (ApplicationManagers_AccountManager_o* __this, ApplicationManagers_AccountManager_UnityOAuthStart_o start, int32_t attemptId, bool reportNetworkError, const MethodInfo* method);
// 0x182325720

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__PollUnityOAuth
          (ApplicationManagers_AccountManager_o *__this,
          ApplicationManagers_AccountManager_UnityOAuthStart_o *start,int32_t attemptId,
          bool reportNetworkError,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  uint64_t uVar3;
  ApplicationManagers_AccountManager_UnityOAuthStart_o *pAVar4;
  int16_t iVar5;
  undefined6 uVar6;
  int32_t iVar7;
  undefined4 uVar8;
  ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o *__this_00;
  
  if (Il2CppMethodInitialized_18434788b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_PollUnityOAuth_d__9);
    Il2CppMethodInitialized_18434788b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_PollUnityOAuth_d__9);
  ApplicationManagers_AccountManager__PollUnityOAuth_d__9___ctor
            ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
    pSVar1 = (start->fields).PollToken;
    pSVar2 = (start->fields).AuthorizationUrl;
    uVar3 = (start->fields).ExpiresAt.fields._dateTime.fields._dateData;
    (__this_00->fields).start.fields.SessionId = (start->fields).SessionId;
    (__this_00->fields).start.fields.PollToken = pSVar1;
    iVar5 = (start->fields).ExpiresAt.fields._offsetMinutes;
    uVar6 = *(undefined6 *)&(start->fields).ExpiresAt.fields.field_0xa;
    iVar7 = (start->fields).PollIntervalSeconds;
    uVar8 = *(undefined4 *)&(start->fields).field_0x2c;
    (__this_00->fields).start.fields.AuthorizationUrl = pSVar2;
    (__this_00->fields).start.fields.ExpiresAt.fields._dateTime.fields._dateData = uVar3;
    pAVar4 = &(__this_00->fields).start;
    (pAVar4->fields).ExpiresAt.fields._offsetMinutes = iVar5;
    *(undefined6 *)&(pAVar4->fields).ExpiresAt.fields.field_0xa = uVar6;
    (__this_00->fields).start.fields.PollIntervalSeconds = iVar7;
    *(undefined4 *)&(__this_00->fields).start.fields.field_0x2c = uVar8;
    Il2CppCodeGenWriteBarrier((void **)&(__this_00->fields).start,(void *)0x0);
    (__this_00->fields).attemptId = attemptId;
    (__this_00->fields).reportNetworkError = reportNetworkError;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$ExchangeOAuthCode
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__ExchangeOAuthCode (ApplicationManagers_AccountManager_o* __this, System_String_o* code, bool reportNetworkError, const MethodInfo* method);
// 0x1823230d0

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__ExchangeOAuthCode
          (ApplicationManagers_AccountManager_o *__this,System_String_o *code,bool reportNetworkError,
          MethodInfo *method)

{
  ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o *__this_00;
  
  if (Il2CppMethodInitialized_18434788c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_ExchangeOAuthCode_d__10);
    Il2CppMethodInitialized_18434788c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_ExchangeOAuthCode_d__10);
  ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10___ctor
            ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
    (__this_00->fields).code = code;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).code,code);
    (__this_00->fields).reportNetworkError = reportNetworkError;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$CancelOAuthFlow
// il2cpp: void ApplicationManagers_AccountManager__CancelOAuthFlow (ApplicationManagers_AccountManager_o* __this, const MethodInfo* method);
// 0x182321f70

void ApplicationManagers_AccountManager__CancelOAuthFlow
               (ApplicationManagers_AccountManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  
  if (Il2CppMethodInitialized_18434788d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_18434788d = '\x01';
  }
  if ((__this->fields)._oauthFlowCoroutine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_2f1d820
              ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields)._oauthFlowCoroutine,(MethodInfo *)0x0);
    (__this->fields)._oauthFlowCoroutine = (UnityEngine_Coroutine_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._oauthFlowCoroutine,(void *)0x0);
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_oauthPendingCallback =
       (System_Action_bool__string__o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_AccountManager->static_fields->_oauthPendingCallback,(void *)0x0);
  piVar1 = &(__this->fields)._oauthAttemptId;
  *piVar1 = *piVar1 + 1;
  return;
}


// ApplicationManagers.AccountManager$$IsCurrentOAuthAttempt
// il2cpp: bool ApplicationManagers_AccountManager__IsCurrentOAuthAttempt (ApplicationManagers_AccountManager_o* __this, int32_t attemptId, const MethodInfo* method);
// 0x182324590

bool ApplicationManagers_AccountManager__IsCurrentOAuthAttempt
               (ApplicationManagers_AccountManager_o *__this,int32_t attemptId,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434788e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_18434788e = '\x01';
  }
  if (attemptId != (__this->fields)._oauthAttemptId) {
    return false;
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  return TypeInfo_ApplicationManagers_AccountManager->static_fields->_oauthPendingCallback !=
         (System_Action_bool__string__o *)0x0;
}


// ApplicationManagers.AccountManager$$CompleteOAuth
// il2cpp: void ApplicationManagers_AccountManager__CompleteOAuth (bool success, System_String_o* error, const MethodInfo* method);
// 0x182322ca0

void ApplicationManagers_AccountManager__CompleteOAuth(bool success,System_String_o *error,MethodInfo *method)

{
  ApplicationManagers_AccountManager_o *pAVar1;
  System_Action_bool__string__o *pSVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_18434788f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_18434788f = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pAVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
    if (pAVar1 == (ApplicationManagers_AccountManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    (pAVar1->fields)._oauthFlowCoroutine = (UnityEngine_Coroutine_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(pAVar1->fields)._oauthFlowCoroutine,(void *)0x0);
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pSVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_oauthPendingCallback;
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_oauthPendingCallback =
       (System_Action_bool__string__o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_AccountManager->static_fields->_oauthPendingCallback,(void *)0x0);
  if (pSVar2 != (System_Action_bool__string__o *)0x0) {
    (*(code *)(pSVar2->fields).invoke_impl)
              ((pSVar2->fields).method_code,success,error,(pSVar2->fields).method);
  }
  return;
}


// ApplicationManagers.AccountManager$$TryParseUnityOAuthStart
// il2cpp: bool ApplicationManagers_AccountManager__TryParseUnityOAuthStart (System_String_o* json, ApplicationManagers_AccountManager_UnityOAuthStart_o* start, const MethodInfo* method);
// 0x182326b80
// eh: try 0x182326c27..0x182326f2f -> pad 0x1833318f0 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182326ef4: xor al, al
// asm:   0x1833318f0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833318f5: push rbx
// asm:   0x1833318f6: push rbp
// asm:   0x1833318f7: sub rsp, 0x38
// asm:   0x1833318fb: mov rbp, rdx
// asm:   0x1833318fe: mov rbx, qword ptr [rbp + 0x38]
// asm:   0x183331902: mov rdx, qword ptr [rbx]
// asm:   0x183331905: mov rdx, qword ptr [rdx]
// asm:   0x183331908: mov rcx, qword ptr [rip + 0x10234c1]
// asm:   0x18333190f: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183331914: test al, al
// asm:   0x183331916: je 0x183331924
// asm:   0x183331918: movabs rax, 0
// asm:   0x183331922: jmp 0x18333193c
// asm:   0x183331924: mov rax, qword ptr [rbx]
// asm:   0x183331927: mov qword ptr [rbp + 0x30], rax
// asm:   0x18333192b: lea rdx, [rip + 0xcaa656]
// asm:   0x183331932: lea rcx, [rbp + 0x30]
// asm:   0x183331936: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18333193c: add rsp, 0x38
// asm:   0x183331940: pop rbp
// asm:   0x183331941: pop rbx
// asm:   0x183331942: ret 

bool ApplicationManagers_AccountManager__TryParseUnityOAuthStart
               (System_String_o *json,ApplicationManagers_AccountManager_UnityOAuthStart_o *start,
               MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_c *pSVar1;
  bool bVar2;
  int iVar3;
  int iVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_Xml_Schema_XmlSchema_o *pSVar6;
  System_String_o *value;
  System_String_o *value_00;
  System_String_o *value_01;
  System_DateTimeOffset_o *pSVar7;
  System_String_o *value_02;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  System_DateTimeOffset_o local_a8;
  System_DateTimeOffset_o local_98;
  System_DateTimeOffset_o local_88;
  System_String_o *local_78;
  System_String_o *pSStack_70;
  System_String_o *local_68;
  undefined8 uStack_60;
  undefined8 local_58;
  undefined8 uStack_50;
  
  if (Il2CppMethodInitialized_184347890 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTimeOffset);
    il2cpp_codegen_initialize_runtime_metadata(&"pollToken");
    il2cpp_codegen_initialize_runtime_metadata(&"authorizationUrl");
    il2cpp_codegen_initialize_runtime_metadata(&"sessionId");
    il2cpp_codegen_initialize_runtime_metadata(&"pollIntervalSeconds");
    il2cpp_codegen_initialize_runtime_metadata(&"expiresAt");
    Il2CppMethodInitialized_184347890 = '\x01';
  }
  local_98.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
  local_98.fields._offsetMinutes = 0;
  local_98.fields._10_6_ = 0;
  local_a8.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
  local_a8.fields._offsetMinutes = 0;
  local_a8.fields._10_6_ = 0;
  local_78 = (System_String_o *)0x0;
  pSStack_70 = (System_String_o *)0x0;
  local_68 = (System_String_o *)0x0;
  uStack_60 = 0;
  local_58 = 0;
  uStack_50 = 0;
  (start->fields).SessionId = (System_String_o *)0x0;
  (start->fields).PollToken = (System_String_o *)0x0;
  (start->fields).AuthorizationUrl = (System_String_o *)0x0;
  (start->fields).ExpiresAt.fields._dateTime.fields._dateData = 0;
  *(undefined8 *)&(start->fields).ExpiresAt.fields._offsetMinutes = 0;
  *(undefined8 *)&(start->fields).PollIntervalSeconds = 0;
  pSVar5 = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
  if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar6 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)(pSVar5,(MethodInfo *)"sessionId");
  if (pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = pSVar6->klass;
  value = (System_String_o *)
          (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                    (pSVar6,(UnityEngine_GameObject_o *)(pSVar1->vtable)._9_SetUnhandledAttributes.method,
                     (MethodInfo *)pSVar1);
  pSVar6 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)(pSVar5,(MethodInfo *)"pollToken");
  if (pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = pSVar6->klass;
  value_00 = (System_String_o *)
             (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                       (pSVar6,(UnityEngine_GameObject_o *)(pSVar1->vtable)._9_SetUnhandledAttributes.method,
                        (MethodInfo *)pSVar1);
  pSVar6 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)(pSVar5,(MethodInfo *)"authorizationUrl");
  if (pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = pSVar6->klass;
  value_01 = (System_String_o *)
             (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                       (pSVar6,(UnityEngine_GameObject_o *)(pSVar1->vtable)._9_SetUnhandledAttributes.method,
                        (MethodInfo *)pSVar1);
  bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (((bVar2) || (bVar2 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0), bVar2)) ||
     (bVar2 = System_String__IsNullOrEmpty(value_01,(MethodInfo *)0x0), bVar2)) {
    return false;
  }
  if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
  }
  pSVar7 = System_DateTimeOffset__get_UtcNow(&local_88,(MethodInfo *)0x0);
  local_a8.fields._dateTime.fields._dateData =
       (System_DateTime_Fields)(pSVar7->fields)._dateTime.fields._dateData;
  local_a8.fields._offsetMinutes = (pSVar7->fields)._offsetMinutes;
  local_a8.fields._10_6_ = *(undefined6 *)&(pSVar7->fields).field_0xa;
  pSVar7 = System_DateTimeOffset__AddMinutes(&local_88,&local_a8,10.0,(MethodInfo *)0x0);
  uVar8 = (undefined4)(pSVar7->fields)._dateTime.fields._dateData;
  uVar9 = *(undefined4 *)((longlong)&(pSVar7->fields)._dateTime.fields._dateData + 4);
  uVar10 = *(undefined4 *)&(pSVar7->fields)._offsetMinutes;
  uVar11 = *(undefined4 *)&(pSVar7->fields).field_0xc;
  pSVar6 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)(pSVar5,(MethodInfo *)"expiresAt");
  if (pSVar6 == (System_Xml_Schema_XmlSchema_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = pSVar6->klass;
  value_02 = (System_String_o *)
             (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                       (pSVar6,(UnityEngine_GameObject_o *)(pSVar1->vtable)._9_SetUnhandledAttributes.method,
                        (MethodInfo *)pSVar1);
  bVar2 = System_String__IsNullOrEmpty(value_02,(MethodInfo *)0x0);
  if (!bVar2) {
    if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
    }
    bVar2 = System_DateTimeOffset__TryParse
                      (value_02,(System_IFormatProvider_o *)0x0,0x80,&local_98,(MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
      }
      pSVar7 = System_DateTimeOffset__ToUniversalTime(&local_88,&local_98,(MethodInfo *)0x0);
      uVar8 = (undefined4)(pSVar7->fields)._dateTime.fields._dateData;
      uVar9 = *(undefined4 *)((longlong)&(pSVar7->fields)._dateTime.fields._dateData + 4);
      uVar10 = *(undefined4 *)&(pSVar7->fields)._offsetMinutes;
      uVar11 = *(undefined4 *)&(pSVar7->fields).field_0xc;
    }
  }
  pSVar6 = (*(pSVar5->klass->vtable)._7_get_Item.methodPtr)(pSVar5,(MethodInfo *)"pollIntervalSeconds");
  if (pSVar6 != (System_Xml_Schema_XmlSchema_o *)0x0) {
    iVar3 = (*(code *)((Il2CppClass *)pSVar6->klass)->vtable[35].methodPtr)
                      (pSVar6,((Il2CppClass *)pSVar6->klass)->vtable[35].method);
    pSStack_70 = (System_String_o *)0x0;
    local_68 = (System_String_o *)0x0;
    uStack_60 = 0;
    local_58 = 0;
    uStack_50 = 0;
    local_78 = value;
    Il2CppCodeGenWriteBarrier(&local_78,value);
    pSStack_70 = value_00;
    Il2CppCodeGenWriteBarrier(&pSStack_70,value_00);
    local_68 = value_01;
    Il2CppCodeGenWriteBarrier(&local_68,value_01);
    uStack_60 = CONCAT44(uVar9,uVar8);
    local_58 = CONCAT44(uVar11,uVar10);
    iVar4 = 2;
    if (0 < iVar3) {
      iVar4 = iVar3;
    }
    uStack_50 = CONCAT44(uStack_50._4_4_,iVar4);
    (start->fields).SessionId = local_78;
    (start->fields).PollToken = pSStack_70;
    (start->fields).AuthorizationUrl = local_68;
    (start->fields).ExpiresAt.fields._dateTime.fields._dateData = uStack_60;
    *(undefined8 *)&(start->fields).ExpiresAt.fields._offsetMinutes = local_58;
    *(undefined8 *)&(start->fields).PollIntervalSeconds = uStack_50;
    Il2CppCodeGenWriteBarrier((void **)start,(void *)0x0);
    return true;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$TryParseUnityOAuthStatus
// il2cpp: bool ApplicationManagers_AccountManager__TryParseUnityOAuthStatus (System_String_o* json, System_String_o** status, System_String_o** code, System_String_o** error, const MethodInfo* method);
// 0x182326f30
// eh: try 0x182326fb2..0x18232712f -> pad 0x183315840 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182327101: xor al, al
// asm:   0x183315840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315845: push rbx
// asm:   0x183315846: push rbp
// asm:   0x183315847: sub rsp, 0x28
// asm:   0x18331584b: mov rbp, rdx
// asm:   0x18331584e: mov rbx, qword ptr [rbp + 0x28]
// asm:   0x183315852: mov rdx, qword ptr [rbx]
// asm:   0x183315855: mov rdx, qword ptr [rdx]
// asm:   0x183315858: mov rcx, qword ptr [rip + 0x103f571]
// asm:   0x18331585f: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183315864: test al, al
// asm:   0x183315866: je 0x183315874
// asm:   0x183315868: movabs rax, 0
// asm:   0x183315872: jmp 0x18331588c
// asm:   0x183315874: mov rax, qword ptr [rbx]
// asm:   0x183315877: mov qword ptr [rbp + 0x20], rax
// asm:   0x18331587b: lea rdx, [rip + 0xcc6706]
// asm:   0x183315882: lea rcx, [rbp + 0x20]
// asm:   0x183315886: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18331588c: add rsp, 0x28
// asm:   0x183315890: pop rbp
// asm:   0x183315891: pop rbx
// asm:   0x183315892: ret 

bool ApplicationManagers_AccountManager__TryParseUnityOAuthStatus
               (System_String_o *json,System_String_o **status,System_String_o **code,System_String_o **error,
               MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_c *pSVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  System_Xml_Schema_XmlSchema_o *pSVar4;
  System_String_o *pSVar5;
  
  if (Il2CppMethodInitialized_184347891 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&"code");
    il2cpp_codegen_initialize_runtime_metadata(&"error");
    il2cpp_codegen_initialize_runtime_metadata(&"status");
    Il2CppMethodInitialized_184347891 = '\x01';
  }
  *status = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(status,(void *)0x0);
  *code = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(code,(void *)0x0);
  *error = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(error,(void *)0x0);
  pSVar3 = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
  if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar4 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)(pSVar3,(MethodInfo *)"status");
  if (pSVar4 == (System_Xml_Schema_XmlSchema_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = pSVar4->klass;
  pSVar5 = (System_String_o *)
           (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                     (pSVar4,(UnityEngine_GameObject_o *)(pSVar1->vtable)._9_SetUnhandledAttributes.method,
                      (MethodInfo *)pSVar1);
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar2 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar5 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  else {
    if (pSVar5 == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar5 = System_String__Trim(pSVar5,(MethodInfo *)0x0);
    if (pSVar5 == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar5 = System_String__ToLowerInvariant(pSVar5,(MethodInfo *)0x0);
  }
  *status = pSVar5;
  Il2CppCodeGenWriteBarrier(status,pSVar5);
  pSVar4 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)(pSVar3,(MethodInfo *)"code");
  if (pSVar4 == (System_Xml_Schema_XmlSchema_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = pSVar4->klass;
  pSVar5 = (System_String_o *)
           (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                     (pSVar4,(UnityEngine_GameObject_o *)(pSVar1->vtable)._9_SetUnhandledAttributes.method,
                      (MethodInfo *)pSVar1);
  *code = pSVar5;
  Il2CppCodeGenWriteBarrier(code,pSVar5);
  pSVar4 = (*(pSVar3->klass->vtable)._7_get_Item.methodPtr)(pSVar3,(MethodInfo *)"error");
  if (pSVar4 != (System_Xml_Schema_XmlSchema_o *)0x0) {
    pSVar1 = pSVar4->klass;
    pSVar5 = (System_String_o *)
             (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                       (pSVar4,(UnityEngine_GameObject_o *)(pSVar1->vtable)._9_SetUnhandledAttributes.method,
                        (MethodInfo *)pSVar1);
    *error = pSVar5;
    Il2CppCodeGenWriteBarrier(error,pSVar5);
    bVar2 = System_String__IsNullOrEmpty(*status,(MethodInfo *)0x0);
    return !bVar2;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$NormalizeOAuthProvider
// il2cpp: System_String_o* ApplicationManagers_AccountManager__NormalizeOAuthProvider (System_String_o* provider, const MethodInfo* method);
// 0x182324f80

System_String_o *
ApplicationManagers_AccountManager__NormalizeOAuthProvider(System_String_o *provider,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  bVar1 = System_String__IsNullOrEmpty(provider,(MethodInfo *)0x0);
  if (bVar1) {
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (provider != (System_String_o *)0x0) {
    pSVar2 = System_String__Trim(provider,(MethodInfo *)0x0);
    if (pSVar2 != (System_String_o *)0x0) {
      pSVar2 = System_String__ToLowerInvariant(pSVar2,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$get_ProfileDescription
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_ProfileDescription (const MethodInfo* method);
// 0x182328cd0

System_String_o * ApplicationManagers_AccountManager__get_ProfileDescription(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347892 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_184347892 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  return TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileDescription_k__BackingField;
}


// ApplicationManagers.AccountManager$$set_ProfileDescription
// il2cpp: void ApplicationManagers_AccountManager__set_ProfileDescription (System_String_o* value, const MethodInfo* method);
// 0x182329a10

void ApplicationManagers_AccountManager__set_ProfileDescription(System_String_o *value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347893 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_184347893 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileDescription_k__BackingField = value;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileDescription_k__BackingField,
             value);
  return;
}


// ApplicationManagers.AccountManager$$get_ProfileAvatarKey
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_ProfileAvatarKey (const MethodInfo* method);
// 0x182328c30

System_String_o * ApplicationManagers_AccountManager__get_ProfileAvatarKey(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347894 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_184347894 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  return TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileAvatarKey_k__BackingField;
}


// ApplicationManagers.AccountManager$$set_ProfileAvatarKey
// il2cpp: void ApplicationManagers_AccountManager__set_ProfileAvatarKey (System_String_o* value, const MethodInfo* method);
// 0x182329930

void ApplicationManagers_AccountManager__set_ProfileAvatarKey(System_String_o *value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347895 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_184347895 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileAvatarKey_k__BackingField = value;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileAvatarKey_k__BackingField,
             value);
  return;
}


// ApplicationManagers.AccountManager$$get_ProfileBannerKey
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_ProfileBannerKey (const MethodInfo* method);
// 0x182328c80

System_String_o * ApplicationManagers_AccountManager__get_ProfileBannerKey(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347896 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_184347896 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  return TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileBannerKey_k__BackingField;
}


// ApplicationManagers.AccountManager$$set_ProfileBannerKey
// il2cpp: void ApplicationManagers_AccountManager__set_ProfileBannerKey (System_String_o* value, const MethodInfo* method);
// 0x1823299a0

void ApplicationManagers_AccountManager__set_ProfileBannerKey(System_String_o *value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347897 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_184347897 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileBannerKey_k__BackingField = value;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileBannerKey_k__BackingField,
             value);
  return;
}


// ApplicationManagers.AccountManager$$get_ProfileSocials
// il2cpp: System_Collections_Generic_Dictionary_string__string__o* ApplicationManagers_AccountManager__get_ProfileSocials (const MethodInfo* method);
// 0x182328d20

System_Collections_Generic_Dictionary_string__string__o *
ApplicationManagers_AccountManager__get_ProfileSocials(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347898 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_184347898 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  return TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileSocials_k__BackingField;
}


// ApplicationManagers.AccountManager$$get_HasCachedOwnProfile
// il2cpp: bool ApplicationManagers_AccountManager__get_HasCachedOwnProfile (const MethodInfo* method);
// 0x182328550

bool ApplicationManagers_AccountManager__get_HasCachedOwnProfile(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347899 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_184347899 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  return TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownProfileCacheHasValue;
}


// ApplicationManagers.AccountManager$$get_HasCachedCharacterInfo
// il2cpp: bool ApplicationManagers_AccountManager__get_HasCachedCharacterInfo (const MethodInfo* method);
// 0x182328500

bool ApplicationManagers_AccountManager__get_HasCachedCharacterInfo(MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434789a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_18434789a = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  return TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoCacheHasValue;
}


// ApplicationManagers.AccountManager$$GetProfile
// il2cpp: void ApplicationManagers_AccountManager__GetProfile (System_Action_bool__string__o* onComplete, bool forceRefresh, const MethodInfo* method);
// 0x182323a10

void ApplicationManagers_AccountManager__GetProfile
               (System_Action_bool__string__o *onComplete,bool forceRefresh,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  ApplicationManagers_AccountManager_o *pAVar3;
  System_Collections_Generic_List_Action_bool__string___o *__this;
  System_Action_bool__string__array *pSVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  System_Action_T1__T2__o *__this_00;
  Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *__this_01;
  
  if (Il2CppMethodInitialized_18434789b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_CompleteProfileFetch);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_bool_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"not_logged_in");
    Il2CppMethodInitialized_18434789b = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar3 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pAVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar6) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    bVar6 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    if (bVar6) {
      if (forceRefresh) {
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownProfileCacheValid = false;
      }
      else {
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        if (TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownProfileCacheValid != false) {
          if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
          }
          if (TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownProfileCacheHasValue != false) {
            if (onComplete == (System_Action_bool__string__o *)0x0) {
              return;
            }
            (*(code *)(onComplete->fields).invoke_impl)
                      ((onComplete->fields).method_code,1,0,(onComplete->fields).method);
            return;
          }
        }
      }
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      pMVar5 = MethodInfo_System_Collections_Generic_List_Action_bool_string_Add;
      __this = TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownProfileFetchSubscribers;
      if (__this != (System_Collections_Generic_List_Action_bool__string___o *)0x0) {
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (__this->fields)._items;
        if (pSVar4 != (System_Action_bool__string__array *)0x0) {
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (__this->fields)._size = uVar2 + 1;
            if ((uint)pSVar4->max_length <= uVar2) {
              ThrowIndexOutOfRangeException();
            }
            pSVar4->m_Items[(int)uVar2] = onComplete;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,onComplete);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)onComplete,
                       (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
          }
          if (TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownProfileFetchInFlight != false) {
            return;
          }
          if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
          }
          TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownProfileFetchInFlight = true;
          pAVar3 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
          __this_00 = (System_Action_T1__T2__o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool_string);
          System_Action_bool__object____ctor
                    (__this_00,(Il2CppObject *)0x0,
                     (intptr_t)MethodInfo_ApplicationManagers_AccountManager_CompleteProfileFetch,
                     (MethodInfo_1468160 *)0x0);
          if (pAVar3 != (ApplicationManagers_AccountManager_o *)0x0) {
            if (Il2CppMethodInitialized_18434789f == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_ApplicationManagers_AccountManager_GetProfileJson_d__50);
              Il2CppMethodInitialized_18434789f = '\x01';
            }
            __this_01 = (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_ApplicationManagers_AccountManager_GetProfileJson_d__50);
            ApplicationManagers_AccountManager__GetProfileJson_d__50___ctor(__this_01,0,(MethodInfo *)0x0);
            if (__this_01 != (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)0x0) {
              *(ApplicationManagers_AccountManager_o **)&(__this_01->fields)._wasEmissive_5__2 = pAVar3;
              Il2CppCodeGenWriteBarrier((void **)&(__this_01->fields)._wasEmissive_5__2,pAVar3);
              (__this_01->fields).__4__this = (Photon_Pun_UtilityScripts_OnClickRpc_o *)__this_00;
              Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this,__this_00);
              UnityEngine_MonoBehaviour__StartCoroutine_Auto
                        ((UnityEngine_MonoBehaviour_o *)pAVar3,(System_Collections_IEnumerator_o *)__this_01,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  if (onComplete == (System_Action_bool__string__o *)0x0) {
    return;
  }
  (*(code *)(onComplete->fields).invoke_impl)
            ((onComplete->fields).method_code,0,"not_logged_in",(onComplete->fields).method);
  return;
}


// ApplicationManagers.AccountManager$$UpdateProfile
// il2cpp: void ApplicationManagers_AccountManager__UpdateProfile (System_String_o* displayName, System_String_o* description, System_String_o* avatarKey, System_String_o* bannerKey, System_Collections_Generic_Dictionary_string__string__o* socials, System_Action_bool__string__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x1823273b0
// eh: try 0x182327700..0x1823278ed -> pad 0x183331d60 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182327774: mov rdx, qword ptr [rip + 0x1d96b25]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_Dispose
// asm:   0x18232777b: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182327780: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x182327785: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x18232778a: test rcx, rcx
// asm:   0x18232778d: jne 0x1823278ed
// asm:   0x182327793: mov r12, qword ptr [rsp + 0x30]
// asm:   0x182327798: mov rsi, qword ptr [rsp + 0x38]
// asm:   0x18232779d: mov rdi, r12
// asm:   0x1823278ed: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183331d60: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183331d65: push rbp
// asm:   0x183331d66: sub rsp, 0x20
// asm:   0x183331d6a: mov rbp, rdx
// asm:   0x183331d6d: mov rax, qword ptr [rbp + 0x70]
// asm:   0x183331d71: mov rcx, qword ptr [rax]
// asm:   0x183331d74: mov qword ptr [rbp + 0x20], rcx
// asm:   0x183331d78: movabs rax, 0
// asm:   0x183331d82: add rsp, 0x20
// asm:   0x183331d86: pop rbp
// asm:   0x183331d87: ret 

void ApplicationManagers_AccountManager__UpdateProfile
               (System_String_o *displayName,System_String_o *description,System_String_o *avatarKey,
               System_String_o *bannerKey,System_Collections_Generic_Dictionary_string__string__o *socials,
               System_Action_bool__string__o *onComplete,bool reportNetworkError,MethodInfo *method)

{
  ApplicationManagers_AccountManager_o *pAVar1;
  Il2CppObject *pIVar2;
  Il2CppObject *s;
  bool bVar3;
  SimpleJSONFixed_JSONObject_o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  SimpleJSONFixed_JSONObject_o *__this_00;
  System_String_o *value;
  ApplicationManagers_AccountManager__PatchProfileJson_d__51_o *__this_01;
  System_Collections_Generic_Dictionary_Enumerator_object__object__o local_90;
  System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o local_60;
  
  if (Il2CppMethodInitialized_18434789c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_string_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_string_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"displayName");
    il2cpp_codegen_initialize_runtime_metadata(&"not_logged_in");
    il2cpp_codegen_initialize_runtime_metadata(&"socials");
    il2cpp_codegen_initialize_runtime_metadata(&"avatarKey");
    il2cpp_codegen_initialize_runtime_metadata(&"description");
    il2cpp_codegen_initialize_runtime_metadata(&"bannerKey");
    Il2CppMethodInitialized_18434789c = '\x01';
  }
  local_90.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_90.fields._version = 0;
  local_90.fields._index = 0;
  local_90.fields._current.fields.key = (Il2CppObject *)0x0;
  local_90.fields._current.fields.value = (Il2CppObject *)0x0;
  local_90.fields._getEnumeratorRetType = 0;
  local_90.fields._36_4_ = 0;
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pAVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
label_1823278b5:
    if (onComplete != (System_Action_bool__string__o *)0x0) {
      (*(code *)(onComplete->fields).invoke_impl)
                ((onComplete->fields).method_code,0,"not_logged_in",(onComplete->fields).method);
    }
    return;
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if (!bVar3) goto label_1823278b5;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this,(MethodInfo *)0x0);
  if (displayName != (System_String_o *)0x0) {
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit(displayName,(MethodInfo *)0x0);
    if (__this == (SimpleJSONFixed_JSONObject_o *)0x0) goto label_1823278f3;
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,"displayName",pSVar4,(__this->klass->vtable)._8_set_Item.method);
  }
  if (description != (System_String_o *)0x0) {
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit(description,(MethodInfo *)0x0);
    if (__this == (SimpleJSONFixed_JSONObject_o *)0x0) goto label_1823278f3;
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,"description",pSVar4,(__this->klass->vtable)._8_set_Item.method);
  }
  if (avatarKey != (System_String_o *)0x0) {
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit(avatarKey,(MethodInfo *)0x0);
    if (__this == (SimpleJSONFixed_JSONObject_o *)0x0) goto label_1823278f3;
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,"avatarKey",pSVar4,(__this->klass->vtable)._8_set_Item.method);
  }
  if (bannerKey != (System_String_o *)0x0) {
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit(bannerKey,(MethodInfo *)0x0);
    if (__this == (SimpleJSONFixed_JSONObject_o *)0x0) goto label_1823278f3;
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,"bannerKey",pSVar4,(__this->klass->vtable)._8_set_Item.method);
  }
  if (socials != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
    SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
    System_Collections_Generic_Dictionary_PhotonNetwork_RaiseEventBatch__object___GetEnumerator
              (&local_60,(System_Collections_Generic_Dictionary_TKey__TValue__o *)socials,
               (MethodInfo_13C1150 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_string_GetEnumerator);
    local_90.fields._dictionary = local_60.fields._dictionary;
    local_90.fields._version = local_60.fields._version;
    local_90.fields._index = local_60.fields._index;
    local_90.fields._current.fields.key = local_60.fields._current.fields.key;
    local_90.fields._current.fields.value = local_60.fields._current.fields.value;
    local_90.fields._getEnumeratorRetType = local_60.fields._getEnumeratorRetType;
    local_90.fields._36_4_ = local_60.fields._36_4_;
    while( true ) {
      bVar3 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        (&local_90,
                         (MethodInfo_1585360 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_MoveNext);
      s = local_90.fields._current.fields.value;
      pIVar2 = local_90.fields._current.fields.key;
      if (!bVar3) break;
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit((System_String_o *)s,(MethodInfo *)0x0);
      if (__this_00 == (SimpleJSONFixed_JSONObject_o *)0x0) {
        ThrowNullReferenceException();
      }
      (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
                (__this_00,(System_String_o *)pIVar2,pSVar4,(__this_00->klass->vtable)._8_set_Item.method);
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)&local_90,
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_Dispose);
    if (__this == (SimpleJSONFixed_JSONObject_o *)0x0) goto label_1823278f3;
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,"socials",(SimpleJSONFixed_JSONNode_o *)__this_00,
               (__this->klass->vtable)._8_set_Item.method);
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (__this != (SimpleJSONFixed_JSONObject_o *)0x0) {
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
    value = (*(__this->klass->vtable)._3_ToString.methodPtr)
                      (__this,(__this->klass->vtable)._3_ToString.method);
    if (pAVar1 != (ApplicationManagers_AccountManager_o *)0x0) {
      if (Il2CppMethodInitialized_1843478a0 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_ApplicationManagers_AccountManager_PatchProfileJson_d__51);
        Il2CppMethodInitialized_1843478a0 = '\x01';
      }
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_PatchProfileJson_d__51
                            );
      ApplicationManagers_AccountManager__PatchProfileJson_d__51___ctor
                ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this_01,0,(MethodInfo *)0x0);
      if (__this_01 != (ApplicationManagers_AccountManager__PatchProfileJson_d__51_o *)0x0) {
        (__this_01->fields).__4__this = pAVar1;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this,pAVar1);
        (__this_01->fields).json = value;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).json,value);
        (__this_01->fields).onComplete = onComplete;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields).onComplete,onComplete);
        (__this_01->fields).reportNetworkError = reportNetworkError;
        UnityEngine_MonoBehaviour__StartCoroutine_Auto
                  ((UnityEngine_MonoBehaviour_o *)pAVar1,(System_Collections_IEnumerator_o *)__this_01,
                   (MethodInfo *)0x0);
        return;
      }
    }
  }
label_1823278f3:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$GetCharacterInfo
// il2cpp: void ApplicationManagers_AccountManager__GetCharacterInfo (System_Action_bool__string__JSONNode__o* onComplete, bool forceRefresh, const MethodInfo* method);
// 0x1823233e0

void ApplicationManagers_AccountManager__GetCharacterInfo
               (System_Action_bool__string__JSONNode__o *onComplete,bool forceRefresh,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  ApplicationManagers_AccountManager_o *pAVar3;
  System_Collections_Generic_List_Action_bool__string__JSONNode___o *__this;
  System_Action_bool__string__JSONNode__array *pSVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  System_Action_T1__T2__T3__o *__this_00;
  Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *__this_01;
  
  if (Il2CppMethodInitialized_18434789d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_CompleteCharacterInfoFetch);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool_string_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_bool_string_JSONNode_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"not_logged_in");
    Il2CppMethodInitialized_18434789d = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar3 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pAVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar6) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    bVar6 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    if (bVar6) {
      if (forceRefresh) {
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoCacheValid = false;
      }
      else {
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        if (TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoCacheValid != false)
        {
          if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
          }
          if (TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoCacheHasValue !=
              false) {
            if (onComplete == (System_Action_bool__string__JSONNode__o *)0x0) {
              return;
            }
            if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
            }
            pSVar7 = ApplicationManagers_AccountManager__CloneJson
                               (TypeInfo_ApplicationManagers_AccountManager->static_fields->
                                _ownCharacterInfoCache,(MethodInfo *)0x0);
            (*(code *)(onComplete->fields).invoke_impl)
                      ((onComplete->fields).method_code,1,0,pSVar7,(onComplete->fields).method);
            return;
          }
        }
      }
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      pMVar5 = MethodInfo_System_Collections_Generic_List_Action_bool_string_JSONNode_Add;
      __this = TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoFetchSubscribers;
      if (__this != (System_Collections_Generic_List_Action_bool__string__JSONNode___o *)0x0) {
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (__this->fields)._items;
        if (pSVar4 != (System_Action_bool__string__JSONNode__array *)0x0) {
          uVar2 = (__this->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (__this->fields)._size = uVar2 + 1;
            if ((uint)pSVar4->max_length <= uVar2) {
              ThrowIndexOutOfRangeException();
            }
            pSVar4->m_Items[(int)uVar2] = onComplete;
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2,onComplete);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)onComplete,
                       (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
          }
          if (TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoFetchInFlight !=
              false) {
            return;
          }
          if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
          }
          TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoFetchInFlight = true;
          pAVar3 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
          __this_00 = (System_Action_T1__T2__T3__o *)
                      il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool_string_JSONNode);
          System_Action_bool__object__object____ctor
                    (__this_00,(Il2CppObject *)0x0,
                     (intptr_t)MethodInfo_ApplicationManagers_AccountManager_CompleteCharacterInfoFetch,
                     (MethodInfo_14686E0 *)0x0);
          if (pAVar3 != (ApplicationManagers_AccountManager_o *)0x0) {
            if (Il2CppMethodInitialized_1843478a1 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_ApplicationManagers_AccountManager_GetCharacterInfoJson_d__52);
              Il2CppMethodInitialized_1843478a1 = '\x01';
            }
            __this_01 = (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)
                        il2cpp_codegen_object_new
                                  ((Il2CppClass *)
                                   TypeInfo_ApplicationManagers_AccountManager_GetCharacterInfoJson_d__52);
            ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52___ctor(__this_01,0,(MethodInfo *)0x0);
            if (__this_01 != (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)0x0) {
              *(ApplicationManagers_AccountManager_o **)&(__this_01->fields)._wasEmissive_5__2 = pAVar3;
              Il2CppCodeGenWriteBarrier((void **)&(__this_01->fields)._wasEmissive_5__2,pAVar3);
              (__this_01->fields).__4__this = (Photon_Pun_UtilityScripts_OnClickRpc_o *)__this_00;
              Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this,__this_00);
              UnityEngine_MonoBehaviour__StartCoroutine_Auto
                        ((UnityEngine_MonoBehaviour_o *)pAVar3,(System_Collections_IEnumerator_o *)__this_01,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  if (onComplete == (System_Action_bool__string__JSONNode__o *)0x0) {
    return;
  }
  (*(code *)(onComplete->fields).invoke_impl)
            ((onComplete->fields).method_code,0,"not_logged_in",0,(onComplete->fields).method);
  return;
}


// ApplicationManagers.AccountManager$$UpdateCharacterInfo
// il2cpp: void ApplicationManagers_AccountManager__UpdateCharacterInfo (SimpleJSONFixed_JSONNode_o* characterInfo, System_Action_bool__string__JSONNode__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x182327130
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18232723a: mov rsi, rbp
// asm:   0x18232723d: jmp 0x182327258

void ApplicationManagers_AccountManager__UpdateCharacterInfo
               (SimpleJSONFixed_JSONNode_o *characterInfo,System_Action_bool__string__JSONNode__o *onComplete,
               bool reportNetworkError,MethodInfo *method)

{
  ApplicationManagers_AccountManager_o *pAVar1;
  bool bVar2;
  SimpleJSONFixed_JSONObject_o *__this;
  SimpleJSONFixed_JSONObject_o *__this_00;
  System_String_o *pSVar3;
  ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o *__this_01;
  
  if (Il2CppMethodInitialized_18434789e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"characterInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"not_logged_in");
    Il2CppMethodInitialized_18434789e = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pAVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    if (bVar2) {
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
      SimpleJSONFixed_JSONObject___ctor(__this,(MethodInfo *)0x0);
      pSVar3 = "characterInfo";
      __this_00 = (SimpleJSONFixed_JSONObject_o *)characterInfo;
      if (characterInfo == (SimpleJSONFixed_JSONNode_o *)0x0) {
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
        SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
      }
      if (__this != (SimpleJSONFixed_JSONObject_o *)0x0) {
        (*(__this->klass->vtable)._8_set_Item.methodPtr)
                  (__this,pSVar3,(SimpleJSONFixed_JSONNode_o *)__this_00,
                   (__this->klass->vtable)._8_set_Item.method);
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
        pSVar3 = (*(__this->klass->vtable)._3_ToString.methodPtr)
                           (__this,(__this->klass->vtable)._3_ToString.method);
        if (pAVar1 != (ApplicationManagers_AccountManager_o *)0x0) {
          if (Il2CppMethodInitialized_1843478a2 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_ApplicationManagers_AccountManager_PutCharacterInfoJson_d__53);
            Il2CppMethodInitialized_1843478a2 = '\x01';
          }
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_ApplicationManagers_AccountManager_PutCharacterInfoJson_d__53);
          ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53___ctor
                    ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this_01,0,(MethodInfo *)0x0)
          ;
          if (__this_01 != (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o *)0x0) {
            (__this_01->fields).__4__this = pAVar1;
            Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this,pAVar1);
            (__this_01->fields).json = pSVar3;
            Il2CppCodeGenWriteBarrier(&(__this_01->fields).json,pSVar3);
            (__this_01->fields).fallbackCharacterInfo = characterInfo;
            Il2CppCodeGenWriteBarrier(&(__this_01->fields).fallbackCharacterInfo,characterInfo);
            (__this_01->fields).onComplete = onComplete;
            Il2CppCodeGenWriteBarrier(&(__this_01->fields).onComplete,onComplete);
            (__this_01->fields).reportNetworkError = reportNetworkError;
            UnityEngine_MonoBehaviour__StartCoroutine_Auto
                      ((UnityEngine_MonoBehaviour_o *)pAVar1,(System_Collections_IEnumerator_o *)__this_01,
                       (MethodInfo *)0x0);
            return;
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  if (onComplete == (System_Action_bool__string__JSONNode__o *)0x0) {
    return;
  }
  (*(code *)(onComplete->fields).invoke_impl)
            ((onComplete->fields).method_code,0,"not_logged_in",0,(onComplete->fields).method);
  return;
}


// ApplicationManagers.AccountManager$$GetProfileJson
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__GetProfileJson (ApplicationManagers_AccountManager_o* __this, System_Action_bool__string__o* onComplete, const MethodInfo* method);
// 0x182323980

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__GetProfileJson
          (ApplicationManagers_AccountManager_o *__this,System_Action_bool__string__o *onComplete,
          MethodInfo *method)

{
  Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *__this_00;
  
  if (Il2CppMethodInitialized_18434789f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_GetProfileJson_d__50);
    Il2CppMethodInitialized_18434789f = '\x01';
  }
  __this_00 = (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_GetProfileJson_d__50);
  ApplicationManagers_AccountManager__GetProfileJson_d__50___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)0x0) {
    *(ApplicationManagers_AccountManager_o **)&(__this_00->fields)._wasEmissive_5__2 = __this;
    Il2CppCodeGenWriteBarrier((void **)&(__this_00->fields)._wasEmissive_5__2,__this);
    (__this_00->fields).__4__this = (Photon_Pun_UtilityScripts_OnClickRpc_o *)onComplete;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,onComplete);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$PatchProfileJson
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__PatchProfileJson (ApplicationManagers_AccountManager_o* __this, System_String_o* json, System_Action_bool__string__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x1823254b0

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__PatchProfileJson
          (ApplicationManagers_AccountManager_o *__this,System_String_o *json,
          System_Action_bool__string__o *onComplete,bool reportNetworkError,MethodInfo *method)

{
  ApplicationManagers_AccountManager__PatchProfileJson_d__51_o *__this_00;
  
  if (Il2CppMethodInitialized_1843478a0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_PatchProfileJson_d__51);
    Il2CppMethodInitialized_1843478a0 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_PatchProfileJson_d__51);
  ApplicationManagers_AccountManager__PatchProfileJson_d__51___ctor
            ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (ApplicationManagers_AccountManager__PatchProfileJson_d__51_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
    (__this_00->fields).json = json;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).json,json);
    (__this_00->fields).onComplete = onComplete;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).onComplete,onComplete);
    (__this_00->fields).reportNetworkError = reportNetworkError;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$GetCharacterInfoJson
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__GetCharacterInfoJson (ApplicationManagers_AccountManager_o* __this, System_Action_bool__string__JSONNode__o* onComplete, const MethodInfo* method);
// 0x182323350

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__GetCharacterInfoJson
          (ApplicationManagers_AccountManager_o *__this,System_Action_bool__string__JSONNode__o *onComplete,
          MethodInfo *method)

{
  Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *__this_00;
  
  if (Il2CppMethodInitialized_1843478a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_GetCharacterInfoJson_d__52);
    Il2CppMethodInitialized_1843478a1 = '\x01';
  }
  __this_00 = (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_GetCharacterInfoJson_d__52
                        );
  ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)0x0) {
    *(ApplicationManagers_AccountManager_o **)&(__this_00->fields)._wasEmissive_5__2 = __this;
    Il2CppCodeGenWriteBarrier((void **)&(__this_00->fields)._wasEmissive_5__2,__this);
    (__this_00->fields).__4__this = (Photon_Pun_UtilityScripts_OnClickRpc_o *)onComplete;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,onComplete);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$PutCharacterInfoJson
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__PutCharacterInfoJson (ApplicationManagers_AccountManager_o* __this, System_String_o* json, SimpleJSONFixed_JSONNode_o* fallbackCharacterInfo, System_Action_bool__string__JSONNode__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x1823258d0

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__PutCharacterInfoJson
          (ApplicationManagers_AccountManager_o *__this,System_String_o *json,
          SimpleJSONFixed_JSONNode_o *fallbackCharacterInfo,
          System_Action_bool__string__JSONNode__o *onComplete,bool reportNetworkError,MethodInfo *method)

{
  ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o *__this_00;
  
  if (Il2CppMethodInitialized_1843478a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_PutCharacterInfoJson_d__53);
    Il2CppMethodInitialized_1843478a2 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_PutCharacterInfoJson_d__53
                        );
  ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53___ctor
            ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
    (__this_00->fields).json = json;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).json,json);
    (__this_00->fields).fallbackCharacterInfo = fallbackCharacterInfo;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).fallbackCharacterInfo,fallbackCharacterInfo);
    (__this_00->fields).onComplete = onComplete;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).onComplete,onComplete);
    (__this_00->fields).reportNetworkError = reportNetworkError;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$SendMeJson
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__SendMeJson (ApplicationManagers_AccountManager_o* __this, System_String_o* method, System_String_o* path, System_String_o* json, System_Action_bool__string__JSONNode__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x182326910

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__SendMeJson
          (ApplicationManagers_AccountManager_o *__this,System_String_o *method,System_String_o *path,
          System_String_o *json,System_Action_bool__string__JSONNode__o *onComplete,bool reportNetworkError,
          MethodInfo *methodInfo)

{
  ApplicationManagers_AccountManager__SendMeJson_d__54_o *__this_00;
  
  if (Il2CppMethodInitialized_1843478a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager_SendMeJson_d__54);
    Il2CppMethodInitialized_1843478a3 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_SendMeJson_d__54);
  ApplicationManagers_AccountManager__SendMeJson_d__54___ctor
            ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (ApplicationManagers_AccountManager__SendMeJson_d__54_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
    (__this_00->fields).method = method;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).method,method);
    (__this_00->fields).path = path;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).path,path);
    (__this_00->fields).json = json;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).json,json);
    (__this_00->fields).onComplete = onComplete;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).onComplete,onComplete);
    (__this_00->fields).reportNetworkError = reportNetworkError;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$SendMeReadJson
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__SendMeReadJson (ApplicationManagers_AccountManager_o* __this, System_String_o* path, System_Action_bool__string__JSONNode__o* onComplete, const MethodInfo* method);
// 0x1823269e0

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__SendMeReadJson
          (ApplicationManagers_AccountManager_o *__this,System_String_o *path,
          System_Action_bool__string__JSONNode__o *onComplete,MethodInfo *method)

{
  ApplicationManagers_AccountManager__SendMeReadJson_d__55_o *__this_00;
  
  if (Il2CppMethodInitialized_1843478a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_SendMeReadJson_d__55);
    Il2CppMethodInitialized_1843478a4 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_SendMeReadJson_d__55);
  ApplicationManagers_AccountManager__SendMeReadJson_d__55___ctor
            ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (ApplicationManagers_AccountManager__SendMeReadJson_d__55_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
    (__this_00->fields).path = path;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).path,path);
    (__this_00->fields).onComplete = onComplete;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).onComplete,onComplete);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$ApplyProfileResponse
// il2cpp: void ApplicationManagers_AccountManager__ApplyProfileResponse (SimpleJSONFixed_JSONNode_o* profile, const MethodInfo* method);
// 0x182321b10
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182321e8e: nop 
// asm:   0x182321f3c: mov rdi, qword ptr [rsp + 0x128]
// asm:   0x182321f44: mov rsi, qword ptr [rsp + 0x120]

void ApplicationManagers_AccountManager__ApplyProfileResponse
               (SimpleJSONFixed_JSONNode_o *profile,MethodInfo *method)

{
  ApplicationManagers_AccountLoginResponse_o *pAVar1;
  System_Collections_Generic_Dictionary_string__string__o *__this;
  SimpleJSONFixed_JSONNode_o *a;
  System_Xml_Schema_XmlSchema_c *pSVar2;
  SimpleJSONFixed_JSONNode_Enumerator_o *pSVar3;
  bool bVar4;
  ApplicationManagers_AccountLoginResponse_ProfileData_o *value;
  System_String_o **ppSVar5;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o *pSVar6;
  SimpleJSONFixed_JSONNode_KeyEnumerator_o *pSVar7;
  MethodInfo *value_00;
  System_Xml_Schema_XmlSchema_o *pSVar8;
  System_String_o *pSVar9;
  System_Collections_Generic_Dictionary_object__object__o *__this_00;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_f8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_a8;
  SimpleJSONFixed_JSONNode_ValueEnumerator_o local_58;
  
  if (Il2CppMethodInitialized_1843478a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843478a5 = '\x01';
  }
  local_f8.type = 0;
  local_f8._4_4_ = 0;
  local_f8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_f8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_f8.m_Object.fields._version = 0;
  local_f8.m_Object.fields._index = 0;
  local_f8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_a8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_f8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_f8.m_Object.fields._getEnumeratorRetType = 0;
  local_f8.m_Object.fields._36_4_ = 0;
  local_f8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_f8.m_Array.fields._index = 0;
  local_f8.m_Array.fields._version = 0;
  local_a8.type = 0;
  local_a8._4_4_ = 0;
  local_a8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_a8.m_Object.fields._version = 0;
  local_a8.m_Object.fields._index = 0;
  local_a8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_a8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_a8.m_Object.fields._getEnumeratorRetType = 0;
  local_a8.m_Object.fields._36_4_ = 0;
  local_a8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_a8.m_Array.fields._index = 0;
  local_a8.m_Array.fields._version = 0;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality(profile,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return;
  }
  value = ApplicationManagers_AccountLoginResponse_ProfileData__Parse(profile,(MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_1843469c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843469c1 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField !=
      (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    if (Il2CppMethodInitialized_1843469c1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      Il2CppMethodInitialized_1843469c1 = '\x01';
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
    if (pAVar1 == (ApplicationManagers_AccountLoginResponse_o *)0x0) goto label_182321f5d;
    (pAVar1->fields).Profile = value;
    Il2CppCodeGenWriteBarrier(&(pAVar1->fields).Profile,value);
  }
  if (value != (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0) {
    ppSVar5 = &(value->fields).Description;
    if ((value->fields).Description == (System_String_o *)0x0) {
      ppSVar5 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
    }
    pSVar9 = *ppSVar5;
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    il2cpp_runtime_helper_182320720(pSVar9,0);
    ppSVar5 = &(value->fields).AvatarKey;
    if ((value->fields).AvatarKey == (System_String_o *)0x0) {
      ppSVar5 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
    }
    pSVar9 = *ppSVar5;
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    il2cpp_runtime_helper_182320640(pSVar9,0);
    ppSVar5 = &(value->fields).BannerKey;
    if ((value->fields).BannerKey == (System_String_o *)0x0) {
      ppSVar5 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
    }
    pSVar9 = *ppSVar5;
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    il2cpp_runtime_helper_1823206b0(pSVar9,0);
    if (Il2CppMethodInitialized_184344b3f == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      Il2CppMethodInitialized_184344b3f = '\x01';
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    __this = TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileSocials_k__BackingField;
    if (__this != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
      System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
                ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
                 (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear);
      ApplicationManagers_AccountManager__MarkOwnProfileCacheFresh((MethodInfo *)0x0);
      a = (value->fields).Socials;
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar4 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (!bVar4) {
        if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_182321f5d;
        pSVar6 = SimpleJSONFixed_JSONNode__get_Values(&local_58,a,(MethodInfo *)0x0);
        local_a8.type = (pSVar6->fields).m_Enumerator.fields.type;
        local_a8._4_4_ = *(undefined4 *)&(pSVar6->fields).m_Enumerator.fields.field_0x4;
        local_a8.m_Object.fields._dictionary =
             (pSVar6->fields).m_Enumerator.fields.m_Object.fields._dictionary;
        pSVar3 = &(pSVar6->fields).m_Enumerator;
        local_a8.m_Object.fields._version = (pSVar3->fields).m_Object.fields._version;
        local_a8.m_Object.fields._index = (pSVar3->fields).m_Object.fields._index;
        local_a8.m_Object.fields._current.fields.key =
             (pSVar6->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
        local_a8.m_Object.fields._current.fields.value =
             (pSVar6->fields).m_Enumerator.fields.m_Object.fields._current.fields.value;
        pSVar3 = &(pSVar6->fields).m_Enumerator;
        local_a8.m_Object.fields._getEnumeratorRetType =
             (pSVar3->fields).m_Object.fields._getEnumeratorRetType;
        local_a8.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar3->fields).m_Object.fields.field_0x24;
        local_a8.m_Array.fields._list = (pSVar6->fields).m_Enumerator.fields.m_Array.fields._list;
        pSVar3 = &(pSVar6->fields).m_Enumerator;
        local_a8.m_Array.fields._index = (pSVar3->fields).m_Array.fields._index;
        local_a8.m_Array.fields._version = (pSVar3->fields).m_Array.fields._version;
        local_a8.m_Array.fields._current = (pSVar6->fields).m_Enumerator.fields.m_Array.fields._current;
        pSVar7 = SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
                           ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_58,
                            (SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_a8,(MethodInfo *)0x0);
        local_f8.type = (pSVar7->fields).m_Enumerator.fields.type;
        local_f8._4_4_ = *(undefined4 *)&(pSVar7->fields).m_Enumerator.fields.field_0x4;
        local_f8.m_Object.fields._dictionary =
             (pSVar7->fields).m_Enumerator.fields.m_Object.fields._dictionary;
        pSVar3 = &(pSVar7->fields).m_Enumerator;
        local_f8.m_Object.fields._version = (pSVar3->fields).m_Object.fields._version;
        local_f8.m_Object.fields._index = (pSVar3->fields).m_Object.fields._index;
        local_f8.m_Object.fields._current.fields.key =
             (pSVar7->fields).m_Enumerator.fields.m_Object.fields._current.fields.key;
        local_f8.m_Object.fields._current.fields.value =
             (pSVar7->fields).m_Enumerator.fields.m_Object.fields._current.fields.value;
        pSVar3 = &(pSVar7->fields).m_Enumerator;
        local_f8.m_Object.fields._getEnumeratorRetType =
             (pSVar3->fields).m_Object.fields._getEnumeratorRetType;
        local_f8.m_Object.fields._36_4_ = *(undefined4 *)&(pSVar3->fields).m_Object.fields.field_0x24;
        local_f8.m_Array.fields._list = (pSVar7->fields).m_Enumerator.fields.m_Array.fields._list;
        pSVar3 = &(pSVar7->fields).m_Enumerator;
        local_f8.m_Array.fields._index = (pSVar3->fields).m_Array.fields._index;
        local_f8.m_Array.fields._version = (pSVar3->fields).m_Array.fields._version;
        local_f8.m_Array.fields._current = (pSVar7->fields).m_Enumerator.fields.m_Array.fields._current;
        bVar4 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_f8,(MethodInfo *)0x0);
        if (bVar4) {
          do {
            value_00 = (MethodInfo *)
                       SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                                 ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_f8,(MethodInfo *)0x0);
            pSVar8 = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,value_00);
            if (pSVar8 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_182321f5d;
            pSVar2 = pSVar8->klass;
            pSVar9 = (System_String_o *)
                     (*(pSVar2->vtable)._9_SetUnhandledAttributes.methodPtr)
                               (pSVar8,(UnityEngine_GameObject_o *)
                                       (pSVar2->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar2)
            ;
            bVar4 = System_String__IsNullOrWhiteSpace((System_String_o *)value_00,(MethodInfo *)0x0);
            if ((!bVar4) && (bVar4 = System_String__IsNullOrWhiteSpace(pSVar9,(MethodInfo *)0x0), !bVar4)) {
              if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
              }
              __this_00 = (System_Collections_Generic_Dictionary_object__object__o *)il2cpp_runtime_helper_181dd5490(0);
              if (__this_00 == (System_Collections_Generic_Dictionary_object__object__o *)0x0)
              goto label_182321f5d;
              System_Collections_Generic_Dictionary_object__object___set_Item
                        (__this_00,(Il2CppObject *)value_00,(Il2CppObject *)pSVar9,
                         (MethodInfo_147A7F0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
            }
            bVar4 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_f8,(MethodInfo *)0x0);
          } while (bVar4);
        }
      }
      return;
    }
  }
label_182321f5d:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$CompleteProfileFetch
// il2cpp: void ApplicationManagers_AccountManager__CompleteProfileFetch (bool success, System_String_o* error, const MethodInfo* method);
// 0x182322de0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182322efc: nop dword ptr [rax]

void ApplicationManagers_AccountManager__CompleteProfileFetch
               (bool success,System_String_o *error,MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_Action_bool__string___o *pSVar2;
  System_String_o *pSVar3;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar4;
  uint uVar5;
  
  if (Il2CppMethodInitialized_1843478a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_bool_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_bool_string_ToArray);
    Il2CppMethodInitialized_1843478a6 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownProfileFetchInFlight = false;
  if (success) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    ApplicationManagers_AccountManager__MarkOwnProfileCacheFresh((MethodInfo *)0x0);
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pSVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownProfileFetchSubscribers;
  if (pSVar2 != (System_Collections_Generic_List_Action_bool__string___o *)0x0) {
    pUVar4 = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                       ((System_Collections_Generic_List_T__o *)pSVar2,
                        (MethodInfo_929FE0 *)
                        MethodInfo_System_Collections_Generic_List_Action_bool_string_ToArray);
    pSVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownProfileFetchSubscribers;
    if (pSVar2 != (System_Collections_Generic_List_Action_bool__string___o *)0x0) {
      length = (pSVar2->fields)._size;
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pSVar2->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      if (pUVar4 != (UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
                     *)0x0) {
        uVar5 = 0;
        while( true ) {
          if ((int)pUVar4->max_length <= (int)uVar5) {
            return;
          }
          if ((uint)pUVar4->max_length <= uVar5) break;
          pSVar3 = (&pUVar4->m_Items[0].fields.message)[(int)uVar5];
          if (pSVar3 != (System_String_o *)0x0) {
            (*(code *)(*(uint64_t *)((char *)pSVar3 + 0x18)))(pSVar3[2].fields,success,error,pSVar3[1].fields);
          }
          uVar5 = uVar5 + 1;
        }
        ThrowIndexOutOfRangeException();
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$CompleteCharacterInfoFetch
// il2cpp: void ApplicationManagers_AccountManager__CompleteCharacterInfoFetch (bool success, System_String_o* error, SimpleJSONFixed_JSONNode_o* characterInfo, const MethodInfo* method);
// 0x182322a00

void ApplicationManagers_AccountManager__CompleteCharacterInfoFetch
               (bool success,System_String_o *error,SimpleJSONFixed_JSONNode_o *characterInfo,
               MethodInfo *method)

{
  int32_t *piVar1;
  int32_t length;
  System_Collections_Generic_List_Action_bool__string__JSONNode___o *pSVar2;
  System_String_o *pSVar3;
  bool bVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  uint uVar8;
  
  if (Il2CppMethodInitialized_1843478a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_bool_string_JSONNode_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_bool_string_JSONNode_ToArray);
    Il2CppMethodInitialized_1843478a7 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoFetchInFlight = false;
  if (success) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    if (Il2CppMethodInitialized_1843478a9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
      Il2CppMethodInitialized_1843478a9 = '\x01';
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pSVar5 = ApplicationManagers_AccountManager__CloneJson(characterInfo,(MethodInfo *)0x0);
    TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoCache = pSVar5;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoCache,pSVar5);
    pSVar5 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoCache;
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoCacheHasValue = bVar4;
    TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoCacheValid =
         TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoCacheHasValue;
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pSVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoFetchSubscribers;
  if (pSVar2 != (System_Collections_Generic_List_Action_bool__string__JSONNode___o *)0x0) {
    pUVar6 = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                       ((System_Collections_Generic_List_T__o *)pSVar2,
                        (MethodInfo_929FE0 *)
                        MethodInfo_System_Collections_Generic_List_Action_bool_string_JSONNode_ToArray);
    pSVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoFetchSubscribers;
    if (pSVar2 != (System_Collections_Generic_List_Action_bool__string__JSONNode___o *)0x0) {
      length = (pSVar2->fields)._size;
      piVar1 = &(pSVar2->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pSVar2->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar2->fields)._items,0,length,(MethodInfo *)0x0);
      }
      pSVar5 = ApplicationManagers_AccountManager__CloneJson
                         (TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoCache,
                          (MethodInfo *)0x0);
      if (pUVar6 != (UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
                     *)0x0) {
        uVar8 = 0;
        while( true ) {
          if ((int)pUVar6->max_length <= (int)uVar8) {
            return;
          }
          if ((uint)pUVar6->max_length <= uVar8) break;
          pSVar3 = (&pUVar6->m_Items[0].fields.message)[(int)uVar8];
          if (pSVar3 != (System_String_o *)0x0) {
            if (success) {
              if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
              }
              pSVar7 = ApplicationManagers_AccountManager__CloneJson(pSVar5,(MethodInfo *)0x0);
            }
            else {
              pSVar7 = (SimpleJSONFixed_JSONNode_o *)0x0;
            }
            (*(code *)(*(uint64_t *)((char *)pSVar3 + 0x18)))(pSVar3[2].fields,success,error,pSVar7,pSVar3[1].fields);
          }
          uVar8 = uVar8 + 1;
        }
        ThrowIndexOutOfRangeException();
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$MarkOwnProfileCacheFresh
// il2cpp: void ApplicationManagers_AccountManager__MarkOwnProfileCacheFresh (const MethodInfo* method);
// 0x182324e40

void ApplicationManagers_AccountManager__MarkOwnProfileCacheFresh(MethodInfo *method)

{
  ApplicationManagers_AccountLoginResponse_o *pAVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843478a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478a8 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_1843469c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843469c1 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField ==
      (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    bVar2 = false;
  }
  else {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    if (Il2CppMethodInitialized_1843469c1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      Il2CppMethodInitialized_1843469c1 = '\x01';
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
    if (pAVar1 == (ApplicationManagers_AccountLoginResponse_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar2 = (pAVar1->fields).Profile != (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0;
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownProfileCacheHasValue = bVar2;
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownProfileCacheValid =
       TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownProfileCacheHasValue;
  return;
}


// ApplicationManagers.AccountManager$$MarkCharacterInfoCacheFresh
// il2cpp: void ApplicationManagers_AccountManager__MarkCharacterInfoCacheFresh (SimpleJSONFixed_JSONNode_o* characterInfo, const MethodInfo* method);
// 0x182324d60

void ApplicationManagers_AccountManager__MarkCharacterInfoCacheFresh
               (SimpleJSONFixed_JSONNode_o *characterInfo,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843478a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843478a9 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pSVar2 = ApplicationManagers_AccountManager__CloneJson(characterInfo,(MethodInfo *)0x0);
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoCache = pSVar2;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoCache,pSVar2);
  pSVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoCache;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar2,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoCacheHasValue = bVar1;
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoCacheValid =
       TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoCacheHasValue;
  return;
}


// ApplicationManagers.AccountManager$$CloneJson
// il2cpp: SimpleJSONFixed_JSONNode_o* ApplicationManagers_AccountManager__CloneJson (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x182322970
// eh: try 0x1823229bf..0x1823229fe -> pad 0x183315840 (+1 call sites) catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823229e4: mov rax, qword ptr [rsp + 0x40]
// asm:   0x183315840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315845: push rbx
// asm:   0x183315846: push rbp
// asm:   0x183315847: sub rsp, 0x28
// asm:   0x18331584b: mov rbp, rdx
// asm:   0x18331584e: mov rbx, qword ptr [rbp + 0x28]
// asm:   0x183315852: mov rdx, qword ptr [rbx]
// asm:   0x183315855: mov rdx, qword ptr [rdx]
// asm:   0x183315858: mov rcx, qword ptr [rip + 0x103f571]
// asm:   0x18331585f: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183315864: test al, al
// asm:   0x183315866: je 0x183315874
// asm:   0x183315868: movabs rax, 0
// asm:   0x183315872: jmp 0x18331588c
// asm:   0x183315874: mov rax, qword ptr [rbx]
// asm:   0x183315877: mov qword ptr [rbp + 0x20], rax
// asm:   0x18331587b: lea rdx, [rip + 0xcc6706]
// asm:   0x183315882: lea rcx, [rbp + 0x20]
// asm:   0x183315886: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18331588c: add rsp, 0x28
// asm:   0x183315890: pop rbp
// asm:   0x183315891: pop rbx
// asm:   0x183315892: ret 

SimpleJSONFixed_JSONNode_o *
ApplicationManagers_AccountManager__CloneJson(SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  bool bVar1;
  System_String_o *aJSON;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843478aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843478aa = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
      aJSON = (*(node->klass->vtable)._3_ToString.methodPtr)(node,(node->klass->vtable)._3_ToString.method);
      pSVar2 = SimpleJSONFixed_JSON__Parse(aJSON,(MethodInfo *)0x0);
      return pSVar2;
    }
    ThrowNullReferenceException();
  }
  return (SimpleJSONFixed_JSONNode_o *)0x0;
}


// ApplicationManagers.AccountManager$$InvalidateOwnAccountCache
// il2cpp: void ApplicationManagers_AccountManager__InvalidateOwnAccountCache (const MethodInfo* method);
// 0x182324480

void ApplicationManagers_AccountManager__InvalidateOwnAccountCache(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843478ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478ab = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownProfileCacheValid = false;
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoCacheValid = false;
  return;
}


// ApplicationManagers.AccountManager$$ClearOwnAccountCache
// il2cpp: void ApplicationManagers_AccountManager__ClearOwnAccountCache (const MethodInfo* method);
// 0x1823220a0

void ApplicationManagers_AccountManager__ClearOwnAccountCache(MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  System_Collections_Generic_List_Action_bool__string___o *pSVar3;
  System_Collections_Generic_List_Action_bool__string__JSONNode___o *pSVar4;
  
  if (Il2CppMethodInitialized_1843478ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_bool_string_JSONNode_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_bool_string_Clear);
    Il2CppMethodInitialized_1843478ac = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownProfileCacheHasValue = false;
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownProfileCacheValid = false;
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownProfileFetchInFlight = false;
  pSVar3 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownProfileFetchSubscribers;
  if (pSVar3 != (System_Collections_Generic_List_Action_bool__string___o *)0x0) {
    iVar2 = (pSVar3->fields)._size;
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    (pSVar3->fields)._size = 0;
    if (0 < iVar2) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar2,(MethodInfo *)0x0);
    }
    TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoCacheHasValue = false;
    TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoCacheValid = false;
    TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoFetchInFlight = false;
    pSVar4 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoFetchSubscribers;
    if (pSVar4 != (System_Collections_Generic_List_Action_bool__string__JSONNode___o *)0x0) {
      iVar2 = (pSVar4->fields)._size;
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pSVar4->fields)._size = 0;
      if (0 < iVar2) {
        System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar2,(MethodInfo *)0x0);
      }
      TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoCache =
           (SimpleJSONFixed_JSONNode_o *)0x0;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoCache,
                 (void *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$ClearProfileResponse
// il2cpp: void ApplicationManagers_AccountManager__ClearProfileResponse (const MethodInfo* method);
// 0x182322290

void ApplicationManagers_AccountManager__ClearProfileResponse(MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  System_Collections_Generic_Dictionary_string__string__o *__this;
  System_Collections_Generic_List_Action_bool__string___o *pSVar3;
  System_Collections_Generic_List_Action_bool__string__JSONNode___o *pSVar4;
  
  if (Il2CppMethodInitialized_1843478ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear);
    Il2CppMethodInitialized_1843478ad = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_1843478f8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478f8 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileDescription_k__BackingField =
       (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileDescription_k__BackingField,
             (void *)0x0);
  if (Il2CppMethodInitialized_1843478f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478f9 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileAvatarKey_k__BackingField =
       (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileAvatarKey_k__BackingField,
             (void *)0x0);
  if (Il2CppMethodInitialized_1843478fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478fa = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileBannerKey_k__BackingField =
       (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileBannerKey_k__BackingField,
             (void *)0x0);
  if (Il2CppMethodInitialized_184344b3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_184344b3f = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  __this = TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileSocials_k__BackingField;
  if (__this != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
    System_Collections_Generic_Dictionary_fsPortableReflection_AttributeQuery__object___Clear
              ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
               (MethodInfo_13BF1C0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear);
    if (Il2CppMethodInitialized_1843478ac == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_Action_bool_string_JSONNode_Clear);
      il2cpp_codegen_initialize_runtime_metadata
                (&MethodInfo_System_Collections_Generic_List_Action_bool_string_Clear);
      Il2CppMethodInitialized_1843478ac = '\x01';
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownProfileCacheHasValue = false;
    TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownProfileCacheValid = false;
    TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownProfileFetchInFlight = false;
    pSVar3 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownProfileFetchSubscribers;
    if (pSVar3 != (System_Collections_Generic_List_Action_bool__string___o *)0x0) {
      iVar2 = (pSVar3->fields)._size;
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      (pSVar3->fields)._size = 0;
      if (0 < iVar2) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar2,(MethodInfo *)0x0);
      }
      TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoCacheHasValue = false;
      TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoCacheValid = false;
      TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoFetchInFlight = false;
      pSVar4 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoFetchSubscribers;
      if (pSVar4 != (System_Collections_Generic_List_Action_bool__string__JSONNode___o *)0x0) {
        iVar2 = (pSVar4->fields)._size;
        piVar1 = &(pSVar4->fields)._version;
        *piVar1 = *piVar1 + 1;
        (pSVar4->fields)._size = 0;
        if (0 < iVar2) {
          System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar2,(MethodInfo *)0x0);
        }
        TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoCache =
             (SimpleJSONFixed_JSONNode_o *)0x0;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoCache,
                   (void *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$ClearOwnPublicProfileCache
// il2cpp: void ApplicationManagers_AccountManager__ClearOwnPublicProfileCache (const MethodInfo* method);
// 0x182322210

void ApplicationManagers_AccountManager__ClearOwnPublicProfileCache(MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843478ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478ae = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pSVar2 = ApplicationManagers_AccountManager__get_UserId((MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pSVar2 = ApplicationManagers_AccountManager__get_UserId((MethodInfo *)0x0);
    ApplicationManagers_PublicProfiles_AottgPublicProfileService__ClearProfile(pSVar2,(MethodInfo *)0x0);
    return;
  }
  return;
}


// ApplicationManagers.AccountManager$$get_AuthToken
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_AuthToken (const MethodInfo* method);
// 0x182328140

System_String_o * ApplicationManagers_AccountManager__get_AuthToken(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843478af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478af = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  return TypeInfo_ApplicationManagers_AccountManager->static_fields->_AuthToken_k__BackingField;
}


// ApplicationManagers.AccountManager$$set_AuthToken
// il2cpp: void ApplicationManagers_AccountManager__set_AuthToken (System_String_o* value, const MethodInfo* method);
// 0x182329550

void ApplicationManagers_AccountManager__set_AuthToken(System_String_o *value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843478b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478b0 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_AuthToken_k__BackingField = value;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_AccountManager->static_fields->_AuthToken_k__BackingField,value);
  return;
}


// ApplicationManagers.AccountManager$$get_AuthTokenExpiresUnix
// il2cpp: int64_t ApplicationManagers_AccountManager__get_AuthTokenExpiresUnix (const MethodInfo* method);
// 0x1823280f0

int64_t ApplicationManagers_AccountManager__get_AuthTokenExpiresUnix(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843478b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478b1 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  return TypeInfo_ApplicationManagers_AccountManager->static_fields->_AuthTokenExpiresUnix_k__BackingField;
}


// ApplicationManagers.AccountManager$$set_AuthTokenExpiresUnix
// il2cpp: void ApplicationManagers_AccountManager__set_AuthTokenExpiresUnix (int64_t value, const MethodInfo* method);
// 0x1823294f0

void ApplicationManagers_AccountManager__set_AuthTokenExpiresUnix(int64_t value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843478b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478b2 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_AuthTokenExpiresUnix_k__BackingField = value;
  return;
}


// ApplicationManagers.AccountManager$$get_PhotonToken
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_PhotonToken (const MethodInfo* method);
// 0x182328a80

System_String_o * ApplicationManagers_AccountManager__get_PhotonToken(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843478b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478b3 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  return TypeInfo_ApplicationManagers_AccountManager->static_fields->_PhotonToken_k__BackingField;
}


// ApplicationManagers.AccountManager$$set_PhotonToken
// il2cpp: void ApplicationManagers_AccountManager__set_PhotonToken (System_String_o* value, const MethodInfo* method);
// 0x1823298c0

void ApplicationManagers_AccountManager__set_PhotonToken(System_String_o *value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843478b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478b4 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_PhotonToken_k__BackingField = value;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_AccountManager->static_fields->_PhotonToken_k__BackingField,value);
  return;
}


// ApplicationManagers.AccountManager$$get_PhotonTokenExpiresUnix
// il2cpp: int64_t ApplicationManagers_AccountManager__get_PhotonTokenExpiresUnix (const MethodInfo* method);
// 0x182328a20

int64_t ApplicationManagers_AccountManager__get_PhotonTokenExpiresUnix(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843478b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478b5 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  return TypeInfo_ApplicationManagers_AccountManager->static_fields->_PhotonTokenExpiresUnix_k__BackingField;
}


// ApplicationManagers.AccountManager$$set_PhotonTokenExpiresUnix
// il2cpp: void ApplicationManagers_AccountManager__set_PhotonTokenExpiresUnix (int64_t value, const MethodInfo* method);
// 0x182329860

void ApplicationManagers_AccountManager__set_PhotonTokenExpiresUnix(int64_t value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843478b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478b6 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_PhotonTokenExpiresUnix_k__BackingField = value;
  return;
}


// ApplicationManagers.AccountManager$$get_LoginResponse
// il2cpp: ApplicationManagers_AccountLoginResponse_o* ApplicationManagers_AccountManager__get_LoginResponse (const MethodInfo* method);
// 0x182328750

ApplicationManagers_AccountLoginResponse_o *
ApplicationManagers_AccountManager__get_LoginResponse(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843478b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478b7 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  return TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
}


// ApplicationManagers.AccountManager$$set_LoginResponse
// il2cpp: void ApplicationManagers_AccountManager__set_LoginResponse (ApplicationManagers_AccountLoginResponse_o* value, const MethodInfo* method);
// 0x1823296e0

void ApplicationManagers_AccountManager__set_LoginResponse
               (ApplicationManagers_AccountLoginResponse_o *value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843478b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478b8 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField = value;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField,value
            );
  return;
}


// ApplicationManagers.AccountManager$$get_UserId
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_UserId (const MethodInfo* method);
// 0x182328f30

System_String_o * ApplicationManagers_AccountManager__get_UserId(MethodInfo *method)

{
  ApplicationManagers_AccountLoginResponse_o *pAVar1;
  ApplicationManagers_AccountLoginResponse_ProfileData_o *pAVar2;
  
  if (Il2CppMethodInitialized_1843478b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478b9 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_1843469c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843469c1 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField ==
      (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    return (System_String_o *)0x0;
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_1843469c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843469c1 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  if (pAVar1 != (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    if ((pAVar1->fields).Profile == (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0) {
      return (System_String_o *)0x0;
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    if (Il2CppMethodInitialized_1843469c1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      Il2CppMethodInitialized_1843469c1 = '\x01';
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
    if ((pAVar1 != (ApplicationManagers_AccountLoginResponse_o *)0x0) &&
       (pAVar2 = (pAVar1->fields).Profile,
       pAVar2 != (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0)) {
      return (pAVar2->fields).AccountId;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$get_Username
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_Username (const MethodInfo* method);
// 0x182329090

System_String_o * ApplicationManagers_AccountManager__get_Username(MethodInfo *method)

{
  ApplicationManagers_AccountLoginResponse_o *pAVar1;
  ApplicationManagers_AccountLoginResponse_ProfileData_o *pAVar2;
  
  if (Il2CppMethodInitialized_1843478ba == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478ba = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_1843469c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843469c1 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField ==
      (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    return (System_String_o *)0x0;
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_1843469c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843469c1 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  if (pAVar1 != (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    if ((pAVar1->fields).Profile == (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0) {
      return (System_String_o *)0x0;
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    if (Il2CppMethodInitialized_1843469c1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      Il2CppMethodInitialized_1843469c1 = '\x01';
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
    if ((pAVar1 != (ApplicationManagers_AccountLoginResponse_o *)0x0) &&
       (pAVar2 = (pAVar1->fields).Profile,
       pAVar2 != (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0)) {
      return (pAVar2->fields).DisplayName;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$get_Email
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_Email (const MethodInfo* method);
// 0x182328340

System_String_o * ApplicationManagers_AccountManager__get_Email(MethodInfo *method)

{
  ApplicationManagers_AccountLoginResponse_o *pAVar1;
  ApplicationManagers_AccountLoginResponse_ProfileData_o *pAVar2;
  
  if (Il2CppMethodInitialized_1843478bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478bb = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_1843469c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843469c1 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField ==
      (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    return (System_String_o *)0x0;
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_1843469c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843469c1 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  if (pAVar1 != (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    if ((pAVar1->fields).Profile == (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0) {
      return (System_String_o *)0x0;
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    if (Il2CppMethodInitialized_1843469c1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      Il2CppMethodInitialized_1843469c1 = '\x01';
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
    if ((pAVar1 != (ApplicationManagers_AccountLoginResponse_o *)0x0) &&
       (pAVar2 = (pAVar1->fields).Profile,
       pAVar2 != (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0)) {
      return (pAVar2->fields).Email;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$get_EmailVerified
// il2cpp: bool ApplicationManagers_AccountManager__get_EmailVerified (const MethodInfo* method);
// 0x1823281e0

bool ApplicationManagers_AccountManager__get_EmailVerified(MethodInfo *method)

{
  ApplicationManagers_AccountLoginResponse_o *pAVar1;
  ApplicationManagers_AccountLoginResponse_ProfileData_o *pAVar2;
  
  if (Il2CppMethodInitialized_1843478bc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478bc = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_1843469c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843469c1 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField ==
      (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    return false;
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_1843469c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843469c1 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  if (pAVar1 != (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    if ((pAVar1->fields).Profile == (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0) {
      return false;
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    if (Il2CppMethodInitialized_1843469c1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      Il2CppMethodInitialized_1843469c1 = '\x01';
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
    if ((pAVar1 != (ApplicationManagers_AccountLoginResponse_o *)0x0) &&
       (pAVar2 = (pAVar1->fields).Profile,
       pAVar2 != (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0)) {
      return (pAVar2->fields).EmailVerified;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$get_Roles
// il2cpp: System_String_array* ApplicationManagers_AccountManager__get_Roles (const MethodInfo* method);
// 0x182328dd0

System_String_array * ApplicationManagers_AccountManager__get_Roles(MethodInfo *method)

{
  ApplicationManagers_AccountLoginResponse_o *pAVar1;
  ApplicationManagers_AccountLoginResponse_ProfileData_o *pAVar2;
  
  if (Il2CppMethodInitialized_1843478bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478bd = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_1843469c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843469c1 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField ==
      (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    return (System_String_array *)0x0;
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_1843469c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843469c1 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  if (pAVar1 != (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    if ((pAVar1->fields).Profile == (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0) {
      return (System_String_array *)0x0;
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    if (Il2CppMethodInitialized_1843469c1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      Il2CppMethodInitialized_1843469c1 = '\x01';
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
    if ((pAVar1 != (ApplicationManagers_AccountLoginResponse_o *)0x0) &&
       (pAVar2 = (pAVar1->fields).Profile,
       pAVar2 != (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0)) {
      return (pAVar2->fields).Roles;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$get_PhotonUserId
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_PhotonUserId (const MethodInfo* method);
// 0x182328ad0

System_String_o * ApplicationManagers_AccountManager__get_PhotonUserId(MethodInfo *method)

{
  ApplicationManagers_AccountLoginResponse_o *pAVar1;
  ApplicationManagers_AccountLoginResponse_ProfileData_o *pAVar2;
  
  if (Il2CppMethodInitialized_1843478be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478be = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_1843469c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843469c1 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField ==
      (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    return (System_String_o *)0x0;
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_1843469c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843469c1 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  if (pAVar1 != (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    if ((pAVar1->fields).Profile == (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0) {
      return (System_String_o *)0x0;
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    if (Il2CppMethodInitialized_1843469c1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      Il2CppMethodInitialized_1843469c1 = '\x01';
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
    if ((pAVar1 != (ApplicationManagers_AccountLoginResponse_o *)0x0) &&
       (pAVar2 = (pAVar1->fields).Profile,
       pAVar2 != (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0)) {
      return (pAVar2->fields).PhotonUserId;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$get_Patreon
// il2cpp: SimpleJSONFixed_JSONNode_o* ApplicationManagers_AccountManager__get_Patreon (const MethodInfo* method);
// 0x1823287b0

SimpleJSONFixed_JSONNode_o * ApplicationManagers_AccountManager__get_Patreon(MethodInfo *method)

{
  ApplicationManagers_AccountLoginResponse_o *pAVar1;
  ApplicationManagers_AccountLoginResponse_ProfileData_o *pAVar2;
  ApplicationManagers_AccountLoginResponse_PatreonData_o *__this;
  longlong lVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  
  if (Il2CppMethodInitialized_1843478bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478bf = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_1843469c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843469c1 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField ==
      (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    return (SimpleJSONFixed_JSONNode_o *)0x0;
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_1843469c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843469c1 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  if (pAVar1 != (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    if ((pAVar1->fields).Profile == (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0) {
      return (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    if (Il2CppMethodInitialized_1843469c1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      Il2CppMethodInitialized_1843469c1 = '\x01';
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
    if ((pAVar1 != (ApplicationManagers_AccountLoginResponse_o *)0x0) &&
       (pAVar2 = (pAVar1->fields).Profile,
       pAVar2 != (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0)) {
      if ((pAVar2->fields).Patreon == (ApplicationManagers_AccountLoginResponse_PatreonData_o *)0x0) {
        return (SimpleJSONFixed_JSONNode_o *)0x0;
      }
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      lVar3 = il2cpp_runtime_helper_1820b57d0(0);
      if (((lVar3 != 0) && (*(longlong *)(lVar3 + 0x48) != 0)) &&
         (__this = *(ApplicationManagers_AccountLoginResponse_PatreonData_o **)
                    (*(longlong *)(lVar3 + 0x48) + 0x58),
         __this != (ApplicationManagers_AccountLoginResponse_PatreonData_o *)0x0)) {
        pSVar4 = ApplicationManagers_AccountLoginResponse_PatreonData__ToJsonNode(__this,(MethodInfo *)0x0);
        return pSVar4;
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$IsOAuthProviderLinked
// il2cpp: bool ApplicationManagers_AccountManager__IsOAuthProviderLinked (System_String_o* provider, const MethodInfo* method);
// 0x182324610

bool ApplicationManagers_AccountManager__IsOAuthProviderLinked(System_String_o *provider,MethodInfo *method)

{
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *pAVar1;
  
  if (Il2CppMethodInitialized_1843478c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478c0 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar1 = ApplicationManagers_AccountManager__GetOAuthLink(provider,(MethodInfo *)0x0);
  return pAVar1 != (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0;
}


// ApplicationManagers.AccountManager$$get_RefreshTokenExpiresUnix
// il2cpp: int64_t ApplicationManagers_AccountManager__get_RefreshTokenExpiresUnix (const MethodInfo* method);
// 0x182328d70

int64_t ApplicationManagers_AccountManager__get_RefreshTokenExpiresUnix(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843478c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478c1 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  return TypeInfo_ApplicationManagers_AccountManager->static_fields->_RefreshTokenExpiresUnix_k__BackingField;
}


// ApplicationManagers.AccountManager$$set_RefreshTokenExpiresUnix
// il2cpp: void ApplicationManagers_AccountManager__set_RefreshTokenExpiresUnix (int64_t value, const MethodInfo* method);
// 0x182329a80

void ApplicationManagers_AccountManager__set_RefreshTokenExpiresUnix(int64_t value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843478c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478c2 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_RefreshTokenExpiresUnix_k__BackingField = value
  ;
  return;
}


// ApplicationManagers.AccountManager$$get_IsLoggedIn
// il2cpp: bool ApplicationManagers_AccountManager__get_IsLoggedIn (const MethodInfo* method);
// 0x182328600

bool ApplicationManagers_AccountManager__get_IsLoggedIn(MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843478c3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478c3 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_1843478fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478fb = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar1 = System_String__IsNullOrEmpty
                    (TypeInfo_ApplicationManagers_AccountManager->static_fields->_AuthToken_k__BackingField,
                     (MethodInfo *)0x0);
  return !bVar1;
}


// ApplicationManagers.AccountManager$$get_HasRefreshToken
// il2cpp: bool ApplicationManagers_AccountManager__get_HasRefreshToken (const MethodInfo* method);
// 0x1823285a0

bool ApplicationManagers_AccountManager__get_HasRefreshToken(MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843478c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478c4 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar1 = System_String__IsNullOrEmpty
                    (TypeInfo_ApplicationManagers_AccountManager->static_fields->_refreshToken,
                     (MethodInfo *)0x0);
  return !bVar1;
}


// ApplicationManagers.AccountManager$$get_IsRefreshInProgress
// il2cpp: bool ApplicationManagers_AccountManager__get_IsRefreshInProgress (const MethodInfo* method);
// 0x182328690

bool ApplicationManagers_AccountManager__get_IsRefreshInProgress(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843478c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478c5 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  return TypeInfo_ApplicationManagers_AccountManager->static_fields->_IsRefreshInProgress_k__BackingField;
}


// ApplicationManagers.AccountManager$$set_IsRefreshInProgress
// il2cpp: void ApplicationManagers_AccountManager__set_IsRefreshInProgress (bool value, const MethodInfo* method);
// 0x182329620

void ApplicationManagers_AccountManager__set_IsRefreshInProgress(bool value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843478c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478c6 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_IsRefreshInProgress_k__BackingField = value;
  return;
}


// ApplicationManagers.AccountManager$$get_KeepSignedIn
// il2cpp: bool ApplicationManagers_AccountManager__get_KeepSignedIn (const MethodInfo* method);
// 0x1823286f0

bool ApplicationManagers_AccountManager__get_KeepSignedIn(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843478c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478c7 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  return TypeInfo_ApplicationManagers_AccountManager->static_fields->_KeepSignedIn_k__BackingField;
}


// ApplicationManagers.AccountManager$$set_KeepSignedIn
// il2cpp: void ApplicationManagers_AccountManager__set_KeepSignedIn (bool value, const MethodInfo* method);
// 0x182329680

void ApplicationManagers_AccountManager__set_KeepSignedIn(bool value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843478c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478c8 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_KeepSignedIn_k__BackingField = value;
  return;
}


// ApplicationManagers.AccountManager$$get_HasAuthMethodsSnapshot
// il2cpp: bool ApplicationManagers_AccountManager__get_HasAuthMethodsSnapshot (const MethodInfo* method);
// 0x1823284a0

bool ApplicationManagers_AccountManager__get_HasAuthMethodsSnapshot(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843478c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478c9 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  return TypeInfo_ApplicationManagers_AccountManager->static_fields->_HasAuthMethodsSnapshot_k__BackingField;
}


// ApplicationManagers.AccountManager$$set_HasAuthMethodsSnapshot
// il2cpp: void ApplicationManagers_AccountManager__set_HasAuthMethodsSnapshot (bool value, const MethodInfo* method);
// 0x1823295c0

void ApplicationManagers_AccountManager__set_HasAuthMethodsSnapshot(bool value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843478ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478ca = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_HasAuthMethodsSnapshot_k__BackingField = value;
  return;
}


// ApplicationManagers.AccountManager$$get_DevMode
// il2cpp: bool ApplicationManagers_AccountManager__get_DevMode (const MethodInfo* method);
// 0x182328190

bool ApplicationManagers_AccountManager__get_DevMode(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843478cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationConfig);
    Il2CppMethodInitialized_1843478cb = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_ApplicationConfig->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationConfig);
  }
  return TypeInfo_ApplicationManagers_ApplicationConfig->static_fields->DevelopmentMode;
}


// ApplicationManagers.AccountManager$$get_PendingVerifyToken
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_PendingVerifyToken (const MethodInfo* method);
// 0x1823289c0

System_String_o * ApplicationManagers_AccountManager__get_PendingVerifyToken(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843478cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478cc = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  return TypeInfo_ApplicationManagers_AccountManager->static_fields->_PendingVerifyToken_k__BackingField;
}


// ApplicationManagers.AccountManager$$set_PendingVerifyToken
// il2cpp: void ApplicationManagers_AccountManager__set_PendingVerifyToken (System_String_o* value, const MethodInfo* method);
// 0x1823297e0

void ApplicationManagers_AccountManager__set_PendingVerifyToken(System_String_o *value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843478cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478cd = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_PendingVerifyToken_k__BackingField = value;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_AccountManager->static_fields->_PendingVerifyToken_k__BackingField,
             value);
  return;
}


// ApplicationManagers.AccountManager$$get_PendingEmail
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_PendingEmail (const MethodInfo* method);
// 0x182328960

System_String_o * ApplicationManagers_AccountManager__get_PendingEmail(MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843478ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478ce = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  return TypeInfo_ApplicationManagers_AccountManager->static_fields->_PendingEmail_k__BackingField;
}


// ApplicationManagers.AccountManager$$set_PendingEmail
// il2cpp: void ApplicationManagers_AccountManager__set_PendingEmail (System_String_o* value, const MethodInfo* method);
// 0x182329760

void ApplicationManagers_AccountManager__set_PendingEmail(System_String_o *value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843478cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478cf = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_PendingEmail_k__BackingField = value;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_AccountManager->static_fields->_PendingEmail_k__BackingField,value)
  ;
  return;
}


// ApplicationManagers.AccountManager$$add_OnLoggedIn
// il2cpp: void ApplicationManagers_AccountManager__add_OnLoggedIn (System_Action_o* value, const MethodInfo* method);
// 0x182327ef0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182327f5c: nop dword ptr [rax]

void ApplicationManagers_AccountManager__add_OnLoggedIn(System_Action_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Action_o *pSVar2;
  System_Delegate_o *pSVar3;
  System_Action_o *a;
  bool bVar4;
  
  if (Il2CppMethodInitialized_1843478d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    Il2CppMethodInitialized_1843478d0 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  a = TypeInfo_ApplicationManagers_AccountManager->static_fields->OnLoggedIn;
  do {
    pSVar1 = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar3 = (System_Delegate_o *)0x0;
    if (pSVar1 != (System_Delegate_o *)0x0) {
      if ((System_Action_c *)pSVar1->klass == TypeInfo_System_Action) {
        pSVar3 = pSVar1;
      }
      if (pSVar3 == (System_Delegate_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar1);
      }
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pSVar2 = (System_Action_o *)
             il2cpp_runtime_helper_1804174a0(&TypeInfo_ApplicationManagers_AccountManager->static_fields->OnLoggedIn,pSVar3);
    bVar4 = pSVar2 != a;
    a = pSVar2;
  } while (bVar4);
  return;
}


// ApplicationManagers.AccountManager$$remove_OnLoggedIn
// il2cpp: void ApplicationManagers_AccountManager__remove_OnLoggedIn (System_Action_o* value, const MethodInfo* method);
// 0x1823292f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18232935c: nop dword ptr [rax]

void ApplicationManagers_AccountManager__remove_OnLoggedIn(System_Action_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Action_o *pSVar2;
  System_Delegate_o *pSVar3;
  System_Action_o *source;
  bool bVar4;
  
  if (Il2CppMethodInitialized_1843478d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    Il2CppMethodInitialized_1843478d1 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  source = TypeInfo_ApplicationManagers_AccountManager->static_fields->OnLoggedIn;
  do {
    pSVar1 = System_Delegate__Remove((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Delegate_o *)0x0;
    if (pSVar1 != (System_Delegate_o *)0x0) {
      if ((System_Action_c *)pSVar1->klass == TypeInfo_System_Action) {
        pSVar3 = pSVar1;
      }
      if (pSVar3 == (System_Delegate_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar1);
      }
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pSVar2 = (System_Action_o *)
             il2cpp_runtime_helper_1804174a0(&TypeInfo_ApplicationManagers_AccountManager->static_fields->OnLoggedIn,pSVar3);
    bVar4 = pSVar2 != source;
    source = pSVar2;
  } while (bVar4);
  return;
}


// ApplicationManagers.AccountManager$$add_OnLoggedOut
// il2cpp: void ApplicationManagers_AccountManager__add_OnLoggedOut (System_Action_o* value, const MethodInfo* method);
// 0x182327ff0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18232805c: nop dword ptr [rax]

void ApplicationManagers_AccountManager__add_OnLoggedOut(System_Action_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Action_o *pSVar2;
  System_Delegate_o *pSVar3;
  System_Action_o *a;
  bool bVar4;
  
  if (Il2CppMethodInitialized_1843478d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    Il2CppMethodInitialized_1843478d2 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  a = TypeInfo_ApplicationManagers_AccountManager->static_fields->OnLoggedOut;
  do {
    pSVar1 = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar3 = (System_Delegate_o *)0x0;
    if (pSVar1 != (System_Delegate_o *)0x0) {
      if ((System_Action_c *)pSVar1->klass == TypeInfo_System_Action) {
        pSVar3 = pSVar1;
      }
      if (pSVar3 == (System_Delegate_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar1);
      }
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pSVar2 = (System_Action_o *)
             il2cpp_runtime_helper_1804174a0(&TypeInfo_ApplicationManagers_AccountManager->static_fields->OnLoggedOut,pSVar3);
    bVar4 = pSVar2 != a;
    a = pSVar2;
  } while (bVar4);
  return;
}


// ApplicationManagers.AccountManager$$remove_OnLoggedOut
// il2cpp: void ApplicationManagers_AccountManager__remove_OnLoggedOut (System_Action_o* value, const MethodInfo* method);
// 0x1823293f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18232945c: nop dword ptr [rax]

void ApplicationManagers_AccountManager__remove_OnLoggedOut(System_Action_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Action_o *pSVar2;
  System_Delegate_o *pSVar3;
  System_Action_o *source;
  bool bVar4;
  
  if (Il2CppMethodInitialized_1843478d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    Il2CppMethodInitialized_1843478d3 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  source = TypeInfo_ApplicationManagers_AccountManager->static_fields->OnLoggedOut;
  do {
    pSVar1 = System_Delegate__Remove((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Delegate_o *)0x0;
    if (pSVar1 != (System_Delegate_o *)0x0) {
      if ((System_Action_c *)pSVar1->klass == TypeInfo_System_Action) {
        pSVar3 = pSVar1;
      }
      if (pSVar3 == (System_Delegate_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar1);
      }
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pSVar2 = (System_Action_o *)
             il2cpp_runtime_helper_1804174a0(&TypeInfo_ApplicationManagers_AccountManager->static_fields->OnLoggedOut,pSVar3);
    bVar4 = pSVar2 != source;
    source = pSVar2;
  } while (bVar4);
  return;
}


// ApplicationManagers.AccountManager$$add_OnAuthMethodsChanged
// il2cpp: void ApplicationManagers_AccountManager__add_OnAuthMethodsChanged (System_Action_o* value, const MethodInfo* method);
// 0x182327df0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182327e5c: nop dword ptr [rax]

void ApplicationManagers_AccountManager__add_OnAuthMethodsChanged(System_Action_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Action_o *pSVar2;
  System_Delegate_o *pSVar3;
  System_Action_o *a;
  bool bVar4;
  
  if (Il2CppMethodInitialized_1843478d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    Il2CppMethodInitialized_1843478d4 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  a = TypeInfo_ApplicationManagers_AccountManager->static_fields->OnAuthMethodsChanged;
  do {
    pSVar1 = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar3 = (System_Delegate_o *)0x0;
    if (pSVar1 != (System_Delegate_o *)0x0) {
      if ((System_Action_c *)pSVar1->klass == TypeInfo_System_Action) {
        pSVar3 = pSVar1;
      }
      if (pSVar3 == (System_Delegate_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar1);
      }
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pSVar2 = (System_Action_o *)
             il2cpp_runtime_helper_1804174a0(&TypeInfo_ApplicationManagers_AccountManager->static_fields->OnAuthMethodsChanged,
                           pSVar3);
    bVar4 = pSVar2 != a;
    a = pSVar2;
  } while (bVar4);
  return;
}


// ApplicationManagers.AccountManager$$remove_OnAuthMethodsChanged
// il2cpp: void ApplicationManagers_AccountManager__remove_OnAuthMethodsChanged (System_Action_o* value, const MethodInfo* method);
// 0x1823291f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18232925c: nop dword ptr [rax]

void ApplicationManagers_AccountManager__remove_OnAuthMethodsChanged
               (System_Action_o *value,MethodInfo *method)

{
  System_Delegate_o *pSVar1;
  System_Action_o *pSVar2;
  System_Delegate_o *pSVar3;
  System_Action_o *source;
  bool bVar4;
  
  if (Il2CppMethodInitialized_1843478d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    Il2CppMethodInitialized_1843478d5 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  source = TypeInfo_ApplicationManagers_AccountManager->static_fields->OnAuthMethodsChanged;
  do {
    pSVar1 = System_Delegate__Remove((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0)
    ;
    pSVar3 = (System_Delegate_o *)0x0;
    if (pSVar1 != (System_Delegate_o *)0x0) {
      if ((System_Action_c *)pSVar1->klass == TypeInfo_System_Action) {
        pSVar3 = pSVar1;
      }
      if (pSVar3 == (System_Delegate_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pSVar1);
      }
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pSVar2 = (System_Action_o *)
             il2cpp_runtime_helper_1804174a0(&TypeInfo_ApplicationManagers_AccountManager->static_fields->OnAuthMethodsChanged,
                           pSVar3);
    bVar4 = pSVar2 != source;
    source = pSVar2;
  } while (bVar4);
  return;
}


// ApplicationManagers.AccountManager$$Init
// il2cpp: void ApplicationManagers_AccountManager__Init (const MethodInfo* method);
// 0x182323ff0

void ApplicationManagers_AccountManager__Init(MethodInfo *method)

{
  uint8_t uVar1;
  MethodInfo *pMVar2;
  char cVar3;
  ApplicationManagers_AccountManager_o *pAVar4;
  Events_OnPreLoadScene_o *b;
  undefined1 *puVar5;
  System_Delegate_o *pSVar6;
  Events_OnPreLoadScene_o *pEVar7;
  System_String_o *path;
  ApplicationManagers_AccountManager__GetAuthMethods_d__164_o *__this;
  Il2CppObject *ex;
  System_Delegate_o *pSVar8;
  Events_OnPreLoadScene_o *a;
  bool bVar9;
  
  if (Il2CppMethodInitialized_1843478d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_ApplicationManagers_AccountManager_OnPreLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnPreLoadScene);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_AccountManager);
    Il2CppMethodInitialized_1843478d6 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar4 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance,
                      (MethodInfo_798ED0 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_AccountManager)
  ;
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance = pAVar4;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance,pAVar4);
  if (TypeInfo_ApplicationManagers_AccountManager->static_fields->_sceneInvalidationSubscribed == false) {
    b = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnPreLoadScene);
    pMVar2 = MethodInfo_ApplicationManagers_AccountManager_OnPreLoadScene;
    (b->fields).method_ptr =
         (intptr_t)MethodInfo_ApplicationManagers_AccountManager_OnPreLoadScene->virtualMethodPointer;
    (b->fields).method = (intptr_t)pMVar2;
    (b->fields).m_target = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(b->fields).m_target,(void *)0x0);
    uVar1 = pMVar2->parameters_count;
    (b->fields).method_code = (intptr_t)b;
    cVar3 = il2cpp_runtime_helper_1804161b0();
    if (cVar3 == '\0') {
      ex = il2cpp_codegen_get_argument_exception
                     ((char *)0x0,"Delegate to an instance method cannot have null \'this\'.");
      il2cpp_codegen_raise_exception(ex,(MethodInfo *)0x0);
    }
    if (uVar1 == '\x01') {
      puVar5 = &label_180001f70;
    }
    else {
      (b->fields).method_code = (intptr_t)(b->fields).m_target;
      puVar5 = (undefined1 *)(b->fields).method_ptr;
    }
    (b->fields).invoke_impl = (intptr_t)puVar5;
    bVar9 = g_data_1843477aa == '\0';
    (b->fields).extra_arg = (intptr_t)il2cpp_runtime_helper_180001f20;
    if (bVar9) {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_EventManager);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnPreLoadScene);
      g_data_1843477aa = '\x01';
    }
    a = TypeInfo_Events_EventManager->static_fields->OnPreLoadScene;
    do {
      pSVar6 = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)b,(MethodInfo *)0x0);
      if (pSVar6 != (System_Delegate_o *)0x0) {
        pSVar8 = (System_Delegate_o *)0x0;
        if ((Events_OnPreLoadScene_c *)pSVar6->klass == TypeInfo_Events_OnPreLoadScene) {
          pSVar8 = pSVar6;
        }
        if (pSVar8 == (System_Delegate_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pSVar6,TypeInfo_Events_OnPreLoadScene);
        }
      }
      pEVar7 = (Events_OnPreLoadScene_o *)
               il2cpp_runtime_helper_1804174a0(&TypeInfo_Events_EventManager->static_fields->OnPreLoadScene);
      bVar9 = pEVar7 != a;
      a = pEVar7;
    } while (bVar9);
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    TypeInfo_ApplicationManagers_AccountManager->static_fields->_sceneInvalidationSubscribed = true;
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_1843478f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&"/AccountRefresh.dat");
    Il2CppMethodInitialized_1843478f3 = '\x01';
  }
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  path = System_String__Concat_1969e50
                   (TypeInfo_Utility_FolderPaths->static_fields->Settings,"/AccountRefresh.dat",
                    (MethodInfo *)0x0);
  bVar9 = System_IO_File__Exists(path,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_1843478fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478fc = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_KeepSignedIn_k__BackingField = bVar9;
  ApplicationManagers_AccountManager__LoadRefreshToken((MethodInfo *)0x0);
  bVar9 = System_String__IsNullOrEmpty
                    (TypeInfo_ApplicationManagers_AccountManager->static_fields->_refreshToken,
                     (MethodInfo *)0x0);
  if (!bVar9) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    ApplicationManagers_AccountManager__Refresh((System_Action_bool__string__o *)0x0,true,(MethodInfo *)0x0);
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_1843478da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"not_initialized");
    Il2CppMethodInitialized_1843478da = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar4 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar9 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pAVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar9) {
    return;
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar4 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
  if (pAVar4 != (ApplicationManagers_AccountManager_o *)0x0) {
    if (Il2CppMethodInitialized_1843478e5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_ApplicationManagers_AccountManager_GetAuthMethods_d__164);
      Il2CppMethodInitialized_1843478e5 = '\x01';
    }
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_GetAuthMethods_d__164);
    ApplicationManagers_AccountManager__GetAuthMethods_d__164___ctor
              ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this,0,(MethodInfo *)0x0);
    if (__this != (ApplicationManagers_AccountManager__GetAuthMethods_d__164_o *)0x0) {
      (__this->fields).__4__this = pAVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__4__this,pAVar4);
      (__this->fields).onComplete = (System_Action_bool__string__o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).onComplete,(void *)0x0);
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)pAVar4,(System_Collections_IEnumerator_o *)__this,
                 (MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$SetKeepSignedIn
// il2cpp: void ApplicationManagers_AccountManager__SetKeepSignedIn (bool value, const MethodInfo* method);
// 0x182326a80

void ApplicationManagers_AccountManager__SetKeepSignedIn(bool value,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843478d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478d7 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_1843478fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478fc = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_KeepSignedIn_k__BackingField = value;
  if (value) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    bVar1 = System_String__IsNullOrEmpty
                      (TypeInfo_ApplicationManagers_AccountManager->static_fields->_refreshToken,
                       (MethodInfo *)0x0);
    if (!bVar1) {
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      ApplicationManagers_AccountManager__SaveRefreshToken((MethodInfo *)0x0);
      return;
    }
    return;
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  ApplicationManagers_AccountManager__DeleteRefreshToken((MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager$$IsAuthMethodEnabled
// il2cpp: bool ApplicationManagers_AccountManager__IsAuthMethodEnabled (System_String_o* key, const MethodInfo* method);
// 0x1823244f0

bool ApplicationManagers_AccountManager__IsAuthMethodEnabled(System_String_o *key,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843478d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    Il2CppMethodInitialized_1843478d8 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(key,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  __this = (System_Collections_Generic_HashSet_object__o *)
           TypeInfo_ApplicationManagers_AccountManager->static_fields->_enabledAuthMethods;
  if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
    bVar1 = System_Collections_Generic_HashSet_object___Contains
                      (__this,(Il2CppObject *)key,
                       (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$GetOAuthLink
// il2cpp: ApplicationManagers_AccountLoginResponse_OAuthLinkData_o* ApplicationManagers_AccountManager__GetOAuthLink (System_String_o* provider, const MethodInfo* method);
// 0x182323780
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18232390f: nop 
// asm:   0x182323946: mov rax, rsi

ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *
ApplicationManagers_AccountManager__GetOAuthLink(System_String_o *provider,MethodInfo *method)

{
  ApplicationManagers_AccountLoginResponse_o *pAVar1;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *pAVar2;
  bool bVar3;
  longlong lVar4;
  uint uVar5;
  
  if (Il2CppMethodInitialized_1843478d9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478d9 = '\x01';
  }
  bVar3 = System_String__IsNullOrEmpty(provider,(MethodInfo *)0x0);
  if (!bVar3) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    if (Il2CppMethodInitialized_1843469c1 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      Il2CppMethodInitialized_1843469c1 = '\x01';
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    if (TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField !=
        (ApplicationManagers_AccountLoginResponse_o *)0x0) {
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      if (Il2CppMethodInitialized_1843469c1 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
        Il2CppMethodInitialized_1843469c1 = '\x01';
      }
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
      if (pAVar1 != (ApplicationManagers_AccountLoginResponse_o *)0x0) {
        if ((pAVar1->fields).Profile == (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0) {
          return (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0;
        }
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        lVar4 = il2cpp_runtime_helper_1820b57d0(0);
        if ((lVar4 != 0) && (*(longlong *)(lVar4 + 0x48) != 0)) {
          if (*(longlong *)(*(longlong *)(lVar4 + 0x48) + 0x60) == 0) {
            return (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0;
          }
          if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
          }
          lVar4 = il2cpp_runtime_helper_1820b57d0(0);
          if (((lVar4 != 0) && (*(longlong *)(lVar4 + 0x48) != 0)) &&
             (lVar4 = *(longlong *)(*(longlong *)(lVar4 + 0x48) + 0x60), lVar4 != 0)) {
            uVar5 = 0;
            while( true ) {
              if (*(int *)(lVar4 + 0x18) <= (int)uVar5) {
                return (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0;
              }
              if (*(uint *)(lVar4 + 0x18) <= uVar5) break;
              pAVar2 = *(ApplicationManagers_AccountLoginResponse_OAuthLinkData_o **)
                        (lVar4 + 0x20 + (longlong)(int)uVar5 * 8);
              if ((pAVar2 != (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0) &&
                 (bVar3 = System_String__Equals_196c550
                                    ((pAVar2->fields).Provider,provider,5,(MethodInfo *)0x0), bVar3)) {
                return pAVar2;
              }
              uVar5 = uVar5 + 1;
            }
            ThrowIndexOutOfRangeException();
          }
        }
      }
      ThrowNullReferenceException();
    }
  }
  return (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0;
}


// ApplicationManagers.AccountManager$$RefreshAuthMethods
// il2cpp: void ApplicationManagers_AccountManager__RefreshAuthMethods (System_Action_bool__string__o* onComplete, const MethodInfo* method);
// 0x182325980

void ApplicationManagers_AccountManager__RefreshAuthMethods
               (System_Action_bool__string__o *onComplete,MethodInfo *method)

{
  ApplicationManagers_AccountManager_o *pAVar1;
  bool bVar2;
  ApplicationManagers_AccountManager__GetAuthMethods_d__164_o *__this;
  
  if (Il2CppMethodInitialized_1843478da == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"not_initialized");
    Il2CppMethodInitialized_1843478da = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pAVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (onComplete == (System_Action_bool__string__o *)0x0) {
      return;
    }
    (*(code *)(onComplete->fields).invoke_impl)
              ((onComplete->fields).method_code,0,"not_initialized",(onComplete->fields).method);
    return;
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
  if (pAVar1 != (ApplicationManagers_AccountManager_o *)0x0) {
    if (Il2CppMethodInitialized_1843478e5 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_ApplicationManagers_AccountManager_GetAuthMethods_d__164);
      Il2CppMethodInitialized_1843478e5 = '\x01';
    }
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_GetAuthMethods_d__164);
    ApplicationManagers_AccountManager__GetAuthMethods_d__164___ctor
              ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this,0,(MethodInfo *)0x0);
    if (__this != (ApplicationManagers_AccountManager__GetAuthMethods_d__164_o *)0x0) {
      (__this->fields).__4__this = pAVar1;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__4__this,pAVar1);
      (__this->fields).onComplete = onComplete;
      Il2CppCodeGenWriteBarrier(&(__this->fields).onComplete,onComplete);
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)pAVar1,(System_Collections_IEnumerator_o *)__this,
                 (MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$Register
// il2cpp: void ApplicationManagers_AccountManager__Register (System_String_o* displayName, System_String_o* email, System_String_o* password, System_Action_bool__string__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x182325e20

void ApplicationManagers_AccountManager__Register
               (System_String_o *displayName,System_String_o *email,System_String_o *password,
               System_Action_bool__string__o *onComplete,bool reportNetworkError,MethodInfo *method)

{
  ApplicationManagers_AccountManager_o *__this;
  Il2CppObject *object;
  System_String_o *captureField;
  System_String_o *path;
  ApplicationManagers_AccountManager___c__DisplayClass154_0_o *object_00;
  SimpleJSONFixed_JSONObject_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar1;
  System_String_o *json;
  System_Action_T1__T2__o *__this_01;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_02;
  System_Collections_IEnumerator_o *routine;
  
  if (Il2CppMethodInitialized_1843478db == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_c_Register_b__154_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass154_0_Register_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass154_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager_c);
    il2cpp_codegen_initialize_runtime_metadata(&"verificationToken");
    il2cpp_codegen_initialize_runtime_metadata(&"email");
    il2cpp_codegen_initialize_runtime_metadata(&"displayName");
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/auth/register");
    il2cpp_codegen_initialize_runtime_metadata(&"password");
    Il2CppMethodInitialized_1843478db = '\x01';
  }
  object_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass154_0);
  ApplicationManagers_AccountManager___c__DisplayClass154_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object_00,(MethodInfo *)0x0);
  if (object_00 != (ApplicationManagers_AccountManager___c__DisplayClass154_0_o *)0x0) {
    (object_00->fields).onComplete = onComplete;
    Il2CppCodeGenWriteBarrier(&(object_00->fields).onComplete,onComplete);
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    if (Il2CppMethodInitialized_1843478fd == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      Il2CppMethodInitialized_1843478fd = '\x01';
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    TypeInfo_ApplicationManagers_AccountManager->static_fields->_PendingVerifyToken_k__BackingField =
         (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_ApplicationManagers_AccountManager->static_fields->
                _PendingVerifyToken_k__BackingField,(void *)0x0);
    if (Il2CppMethodInitialized_1843478fe == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      Il2CppMethodInitialized_1843478fe = '\x01';
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    TypeInfo_ApplicationManagers_AccountManager->static_fields->_PendingEmail_k__BackingField = email;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_ApplicationManagers_AccountManager->static_fields->_PendingEmail_k__BackingField,
               email);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
    SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    pSVar1 = SimpleJSONFixed_JSONNode__op_Implicit(displayName,(MethodInfo *)0x0);
    if (__this_00 != (SimpleJSONFixed_JSONObject_o *)0x0) {
      (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
                (__this_00,"displayName",pSVar1,(__this_00->klass->vtable)._8_set_Item.method);
      pSVar1 = SimpleJSONFixed_JSONNode__op_Implicit(email,(MethodInfo *)0x0);
      (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
                (__this_00,"email",pSVar1,(__this_00->klass->vtable)._8_set_Item.method);
      pSVar1 = SimpleJSONFixed_JSONNode__op_Implicit(password,(MethodInfo *)0x0);
      (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
                (__this_00,"password",pSVar1,(__this_00->klass->vtable)._8_set_Item.method);
      __this = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
      json = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                       (__this_00,(__this_00->klass->vtable)._3_ToString.method);
      __this_01 = (System_Action_T1__T2__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool_string);
      System_Action_bool__object____ctor
                (__this_01,(Il2CppObject *)object_00,
                 (intptr_t)MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass154_0_Register_b__0,
                 (MethodInfo_1468160 *)0x0);
      if ((TypeInfo_ApplicationManagers_AccountManager_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c);
      }
      path = "/v1/auth/register";
      captureField = "verificationToken";
      __this_02 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  TypeInfo_ApplicationManagers_AccountManager_c->static_fields->__9__154_1;
      if (__this_02 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
        if ((TypeInfo_ApplicationManagers_AccountManager_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c);
        }
        object = (Il2CppObject *)TypeInfo_ApplicationManagers_AccountManager_c->static_fields->__9;
        __this_02 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
        System_Action_object____ctor
                  (__this_02,object,
                   (intptr_t)MethodInfo_ApplicationManagers_AccountManager_c_Register_b__154_1,
                   (MethodInfo *)0x0);
        TypeInfo_ApplicationManagers_AccountManager_c->static_fields->__9__154_1 =
             (System_Action_string__o *)__this_02;
        Il2CppCodeGenWriteBarrier
                  (&TypeInfo_ApplicationManagers_AccountManager_c->static_fields->__9__154_1,__this_02);
      }
      if (__this != (ApplicationManagers_AccountManager_o *)0x0) {
        routine = ApplicationManagers_AccountManager__PostJson
                            (__this,path,json,(System_String_o *)0x0,
                             (System_Action_bool__string__o *)__this_01,false,captureField,
                             (System_Action_string__o *)__this_02,reportNetworkError,(MethodInfo *)0x0);
        UnityEngine_MonoBehaviour__StartCoroutine_Auto
                  ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$Login
// il2cpp: void ApplicationManagers_AccountManager__Login (System_String_o* email, System_String_o* password, System_Action_bool__string__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x1823249e0

void ApplicationManagers_AccountManager__Login
               (System_String_o *email,System_String_o *password,System_Action_bool__string__o *onComplete,
               bool reportNetworkError,MethodInfo *method)

{
  ApplicationManagers_AccountManager_o *__this;
  SimpleJSONFixed_JSONObject_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar1;
  System_String_o *json;
  System_Collections_IEnumerator_o *routine;
  
  if (Il2CppMethodInitialized_1843478dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&"email");
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/auth/login");
    il2cpp_codegen_initialize_runtime_metadata(&"password");
    Il2CppMethodInitialized_1843478dc = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pSVar1 = SimpleJSONFixed_JSONNode__op_Implicit(email,(MethodInfo *)0x0);
  if (__this_00 != (SimpleJSONFixed_JSONObject_o *)0x0) {
    (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
              (__this_00,"email",pSVar1,(__this_00->klass->vtable)._8_set_Item.method);
    pSVar1 = SimpleJSONFixed_JSONNode__op_Implicit(password,(MethodInfo *)0x0);
    (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
              (__this_00,"password",pSVar1,(__this_00->klass->vtable)._8_set_Item.method);
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    __this = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
    json = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                     (__this_00,(__this_00->klass->vtable)._3_ToString.method);
    if (__this != (ApplicationManagers_AccountManager_o *)0x0) {
      routine = ApplicationManagers_AccountManager__PostJson
                          (__this,"/v1/auth/login",json,(System_String_o *)0x0,onComplete,true,
                           (System_String_o *)0x0,(System_Action_string__o *)0x0,reportNetworkError,
                           (MethodInfo *)0x0);
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$Refresh
// il2cpp: void ApplicationManagers_AccountManager__Refresh (System_Action_bool__string__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x182325b00

void ApplicationManagers_AccountManager__Refresh
               (System_Action_bool__string__o *onComplete,bool reportNetworkError,MethodInfo *method)

{
  ApplicationManagers_AccountManager_o *__this;
  System_Action_bool__string__o *pSVar1;
  bool bVar2;
  ApplicationManagers_AccountManager___c__DisplayClass156_0_o *object;
  SimpleJSONFixed_JSONObject_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  System_String_o *pSVar4;
  System_Action_T1__T2__o *__this_01;
  System_Collections_IEnumerator_o *routine;
  
  if (Il2CppMethodInitialized_1843478dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass156_0_Refresh_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass156_0);
    il2cpp_codegen_initialize_runtime_metadata(&"refreshToken");
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/auth/refresh");
    il2cpp_codegen_initialize_runtime_metadata(&"no_refresh_token");
    Il2CppMethodInitialized_1843478dd = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass156_0);
  ApplicationManagers_AccountManager___c__DisplayClass156_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  if (object != (ApplicationManagers_AccountManager___c__DisplayClass156_0_o *)0x0) {
    (object->fields).onComplete = onComplete;
    Il2CppCodeGenWriteBarrier(&(object->fields).onComplete,onComplete);
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    bVar2 = System_String__IsNullOrEmpty
                      (TypeInfo_ApplicationManagers_AccountManager->static_fields->_refreshToken,
                       (MethodInfo *)0x0);
    if (bVar2) {
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      if (Il2CppMethodInitialized_1843478ff == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
        Il2CppMethodInitialized_1843478ff = '\x01';
      }
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      TypeInfo_ApplicationManagers_AccountManager->static_fields->_IsRefreshInProgress_k__BackingField = false
      ;
      pSVar1 = (object->fields).onComplete;
      if (pSVar1 != (System_Action_bool__string__o *)0x0) {
        (*(code *)(pSVar1->fields).invoke_impl)
                  ((pSVar1->fields).method_code,0,"no_refresh_token",(pSVar1->fields).method);
      }
      return;
    }
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
    SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pSVar4 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_refreshToken;
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    pSVar3 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar4,(MethodInfo *)0x0);
    if (__this_00 != (SimpleJSONFixed_JSONObject_o *)0x0) {
      (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
                (__this_00,"refreshToken",pSVar3,(__this_00->klass->vtable)._8_set_Item.method);
      if (Il2CppMethodInitialized_1843478ff == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
        Il2CppMethodInitialized_1843478ff = '\x01';
      }
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      TypeInfo_ApplicationManagers_AccountManager->static_fields->_IsRefreshInProgress_k__BackingField = true;
      __this = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
      pSVar4 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                         (__this_00,(__this_00->klass->vtable)._3_ToString.method);
      __this_01 = (System_Action_T1__T2__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool_string);
      System_Action_bool__object____ctor
                (__this_01,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass156_0_Refresh_b__0,
                 (MethodInfo_1468160 *)0x0);
      if (__this != (ApplicationManagers_AccountManager_o *)0x0) {
        routine = ApplicationManagers_AccountManager__PostJson
                            (__this,"/v1/auth/refresh",pSVar4,(System_String_o *)0x0,
                             (System_Action_bool__string__o *)__this_01,true,(System_String_o *)0x0,
                             (System_Action_string__o *)0x0,reportNetworkError,(MethodInfo *)0x0);
        UnityEngine_MonoBehaviour__StartCoroutine_Auto
                  ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$Logout
// il2cpp: void ApplicationManagers_AccountManager__Logout (System_Action_bool__string__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x182324b70

void ApplicationManagers_AccountManager__Logout
               (System_Action_bool__string__o *onComplete,bool reportNetworkError,MethodInfo *method)

{
  ApplicationManagers_AccountManager_o *__this;
  bool bVar1;
  SimpleJSONFixed_JSONObject_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_String_o *pSVar3;
  System_Collections_IEnumerator_o *routine;
  
  if (Il2CppMethodInitialized_1843478de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&"refreshToken");
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/auth/logout");
    Il2CppMethodInitialized_1843478de = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pSVar3 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_refreshToken;
  ApplicationManagers_AccountManager__ClearSession(true,(MethodInfo *)0x0);
  bVar1 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
  if (bVar1) {
    if (onComplete == (System_Action_bool__string__o *)0x0) {
      return;
    }
    (*(code *)(onComplete->fields).invoke_impl)
              ((onComplete->fields).method_code,1,0,(onComplete->fields).method);
    return;
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pSVar2 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar3,(MethodInfo *)0x0);
  if (__this_00 != (SimpleJSONFixed_JSONObject_o *)0x0) {
    (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
              (__this_00,"refreshToken",pSVar2,(__this_00->klass->vtable)._8_set_Item.method);
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    __this = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
    pSVar3 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                       (__this_00,(__this_00->klass->vtable)._3_ToString.method);
    if (__this != (ApplicationManagers_AccountManager_o *)0x0) {
      routine = ApplicationManagers_AccountManager__PostJson
                          (__this,"/v1/auth/logout",pSVar3,(System_String_o *)0x0,onComplete,false,
                           (System_String_o *)0x0,(System_Action_string__o *)0x0,reportNetworkError,
                           (MethodInfo *)0x0);
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$GoOffline
// il2cpp: void ApplicationManagers_AccountManager__GoOffline (const MethodInfo* method);
// 0x182323e80

void ApplicationManagers_AccountManager__GoOffline(MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843478df == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478df = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_1843478c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478c4 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar1 = System_String__IsNullOrEmpty
                    (TypeInfo_ApplicationManagers_AccountManager->static_fields->_refreshToken,
                     (MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    ApplicationManagers_AccountManager__ClearSession(false,(MethodInfo *)0x0);
    return;
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  ApplicationManagers_AccountManager__ClearSession(true,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager$$GoOnline
// il2cpp: void ApplicationManagers_AccountManager__GoOnline (System_Action_bool__string__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x182323f50

void ApplicationManagers_AccountManager__GoOnline
               (System_Action_bool__string__o *onComplete,bool reportNetworkError,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_1843478e0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478e0 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar1 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    ApplicationManagers_AccountManager__Refresh(onComplete,reportNetworkError,(MethodInfo *)0x0);
    return;
  }
  if (onComplete != (System_Action_bool__string__o *)0x0) {
    (*(code *)(onComplete->fields).invoke_impl)
              ((onComplete->fields).method_code,1,0,(onComplete->fields).method);
  }
  return;
}


// ApplicationManagers.AccountManager$$GetWebLoginUrlWithSession
// il2cpp: System_String_o* ApplicationManagers_AccountManager__GetWebLoginUrlWithSession (const MethodInfo* method);
// 0x182323df0

System_String_o * ApplicationManagers_AccountManager__GetWebLoginUrlWithSession(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843478e1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&"/login");
    Il2CppMethodInitialized_1843478e1 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pSVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->BaseUrl;
  if (pSVar1 != (System_String_o *)0x0) {
    pSVar1 = System_String__TrimEnd_19734b0(pSVar1,0x2f,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat_1969e50(pSVar1,"/login",(MethodInfo *)0x0);
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$VerifyEmail
// il2cpp: void ApplicationManagers_AccountManager__VerifyEmail (System_String_o* token, System_Action_bool__string__o* onComplete, const MethodInfo* method);
// 0x182327900

void ApplicationManagers_AccountManager__VerifyEmail
               (System_String_o *token,System_Action_bool__string__o *onComplete,MethodInfo *method)

{
  ApplicationManagers_AccountManager_o *__this;
  ApplicationManagers_AccountManager___c__DisplayClass161_0_o *object;
  SimpleJSONFixed_JSONObject_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar1;
  System_String_o *json;
  System_Action_T1__T2__o *__this_01;
  System_Collections_IEnumerator_o *routine;
  
  if (Il2CppMethodInitialized_1843478e2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass161_0_VerifyEmail_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass161_0);
    il2cpp_codegen_initialize_runtime_metadata(&"token");
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/auth/verify-email");
    Il2CppMethodInitialized_1843478e2 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass161_0);
  ApplicationManagers_AccountManager___c__DisplayClass161_0___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)object,(MethodInfo *)0x0);
  if (object != (ApplicationManagers_AccountManager___c__DisplayClass161_0_o *)0x0) {
    (object->fields).onComplete = onComplete;
    Il2CppCodeGenWriteBarrier(&(object->fields).onComplete,onComplete);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
    SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    pSVar1 = SimpleJSONFixed_JSONNode__op_Implicit(token,(MethodInfo *)0x0);
    if (__this_00 != (SimpleJSONFixed_JSONObject_o *)0x0) {
      (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
                (__this_00,"token",pSVar1,(__this_00->klass->vtable)._8_set_Item.method);
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      __this = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
      json = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                       (__this_00,(__this_00->klass->vtable)._3_ToString.method);
      __this_01 = (System_Action_T1__T2__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool_string);
      System_Action_bool__object____ctor
                (__this_01,(Il2CppObject *)object,
                 (intptr_t)MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass161_0_VerifyEmail_b__0
                 ,(MethodInfo_1468160 *)0x0);
      if (__this != (ApplicationManagers_AccountManager_o *)0x0) {
        routine = ApplicationManagers_AccountManager__PostJson
                            (__this,"/v1/auth/verify-email",json,(System_String_o *)0x0,
                             (System_Action_bool__string__o *)__this_01,false,(System_String_o *)0x0,
                             (System_Action_string__o *)0x0,true,(MethodInfo *)0x0);
        UnityEngine_MonoBehaviour__StartCoroutine_Auto
                  ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$ForgotPassword
// il2cpp: void ApplicationManagers_AccountManager__ForgotPassword (System_String_o* email, System_Action_bool__string__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x182323160

void ApplicationManagers_AccountManager__ForgotPassword
               (System_String_o *email,System_Action_bool__string__o *onComplete,bool reportNetworkError,
               MethodInfo *method)

{
  ApplicationManagers_AccountManager_o *__this;
  SimpleJSONFixed_JSONObject_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar1;
  System_String_o *json;
  System_Collections_IEnumerator_o *routine;
  
  if (Il2CppMethodInitialized_1843478e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/auth/forgot-password");
    il2cpp_codegen_initialize_runtime_metadata(&"email");
    Il2CppMethodInitialized_1843478e3 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pSVar1 = SimpleJSONFixed_JSONNode__op_Implicit(email,(MethodInfo *)0x0);
  if (__this_00 != (SimpleJSONFixed_JSONObject_o *)0x0) {
    (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
              (__this_00,"email",pSVar1,(__this_00->klass->vtable)._8_set_Item.method);
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    __this = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
    json = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                     (__this_00,(__this_00->klass->vtable)._3_ToString.method);
    if (__this != (ApplicationManagers_AccountManager_o *)0x0) {
      routine = ApplicationManagers_AccountManager__PostJson
                          (__this,"/v1/auth/forgot-password",json,(System_String_o *)0x0,onComplete,false,
                           (System_String_o *)0x0,(System_Action_string__o *)0x0,reportNetworkError,
                           (MethodInfo *)0x0);
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$PatreonUnlink
// il2cpp: void ApplicationManagers_AccountManager__PatreonUnlink (System_Action_bool__string__o* onComplete, const MethodInfo* method);
// 0x182325550

void ApplicationManagers_AccountManager__PatreonUnlink
               (System_Action_bool__string__o *onComplete,MethodInfo *method)

{
  ApplicationManagers_AccountManager_o *__this;
  System_String_o *value;
  System_String_o *value_00;
  bool bVar1;
  ApplicationManagers_AccountManager__DeleteJson_d__171_o *__this_00;
  
  if (Il2CppMethodInitialized_1843478e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&"not_logged_in");
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/patreon/link");
    Il2CppMethodInitialized_1843478e4 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar1 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if (!bVar1) {
    if (onComplete == (System_Action_bool__string__o *)0x0) {
      return;
    }
    (*(code *)(onComplete->fields).invoke_impl)
              ((onComplete->fields).method_code,0,"not_logged_in",(onComplete->fields).method);
    return;
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  __this = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
  if (Il2CppMethodInitialized_1843478fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478fb = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  value_00 = "/v1/patreon/link";
  if (__this != (ApplicationManagers_AccountManager_o *)0x0) {
    value = TypeInfo_ApplicationManagers_AccountManager->static_fields->_AuthToken_k__BackingField;
    if (Il2CppMethodInitialized_1843478ec == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_ApplicationManagers_AccountManager_DeleteJson_d__171);
      Il2CppMethodInitialized_1843478ec = '\x01';
    }
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_DeleteJson_d__171);
    ApplicationManagers_AccountManager__DeleteJson_d__171___ctor
              ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this_00,0,(MethodInfo *)0x0);
    if (__this_00 != (ApplicationManagers_AccountManager__DeleteJson_d__171_o *)0x0) {
      (__this_00->fields).__4__this = __this;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
      (__this_00->fields).path = value_00;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).path,value_00);
      (__this_00->fields).bearer = value;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).bearer,value);
      (__this_00->fields).onComplete = onComplete;
      Il2CppCodeGenWriteBarrier(&(__this_00->fields).onComplete,onComplete);
      UnityEngine_MonoBehaviour__StartCoroutine_Auto
                ((UnityEngine_MonoBehaviour_o *)__this,(System_Collections_IEnumerator_o *)__this_00,
                 (MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$GetAuthMethods
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__GetAuthMethods (ApplicationManagers_AccountManager_o* __this, System_Action_bool__string__o* onComplete, const MethodInfo* method);
// 0x1823232c0

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__GetAuthMethods
          (ApplicationManagers_AccountManager_o *__this,System_Action_bool__string__o *onComplete,
          MethodInfo *method)

{
  ApplicationManagers_AccountManager__GetAuthMethods_d__164_o *__this_00;
  
  if (Il2CppMethodInitialized_1843478e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_GetAuthMethods_d__164);
    Il2CppMethodInitialized_1843478e5 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_GetAuthMethods_d__164);
  ApplicationManagers_AccountManager__GetAuthMethods_d__164___ctor
            ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (ApplicationManagers_AccountManager__GetAuthMethods_d__164_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
    (__this_00->fields).onComplete = onComplete;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).onComplete,onComplete);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$SendApiGet
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__SendApiGet (ApplicationManagers_AccountManager_o* __this, System_String_o* path, System_String_o* bearer, bool parseJson, System_Action_AottgApiResult__o* onComplete, const MethodInfo* method);
// 0x182326500

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__SendApiGet
          (ApplicationManagers_AccountManager_o *__this,System_String_o *path,System_String_o *bearer,
          bool parseJson,System_Action_AottgApiResult__o *onComplete,MethodInfo *method)

{
  ApplicationManagers_AccountManager__SendApiGet_d__165_o *__this_00;
  
  if (Il2CppMethodInitialized_1843478e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager_SendApiGet_d__165)
    ;
    Il2CppMethodInitialized_1843478e6 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_SendApiGet_d__165);
  ApplicationManagers_AccountManager__SendApiGet_d__165___ctor
            ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (ApplicationManagers_AccountManager__SendApiGet_d__165_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
    (__this_00->fields).path = path;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).path,path);
    (__this_00->fields).bearer = bearer;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).bearer,bearer);
    (__this_00->fields).onComplete = onComplete;
    (__this_00->fields).parseJson = parseJson;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).onComplete,onComplete);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$SendApiGetAsync
// il2cpp: Cysharp_Threading_Tasks_UniTask_o ApplicationManagers_AccountManager__SendApiGetAsync (ApplicationManagers_AccountManager_o* __this, System_String_o* path, System_String_o* bearer, bool parseJson, System_Action_AottgApiResult__o* onComplete, const MethodInfo* method);
// 0x1823263e0

Cysharp_Threading_Tasks_UniTask_o *
ApplicationManagers_AccountManager__SendApiGetAsync
          (Cysharp_Threading_Tasks_UniTask_o *__return_storage_ptr__,
          ApplicationManagers_AccountManager_o *__this,System_String_o *path,System_String_o *bearer,
          bool parseJson,System_Action_AottgApiResult__o *onComplete,MethodInfo *method)

{
  undefined8 uVar1;
  MethodInfo *pMVar2;
  undefined8 *puVar3;
  undefined1 local_68 [16];
  ApplicationManagers_AccountManager__SendApiGetAsync_d__166_Fields local_58;
  
  if (Il2CppMethodInitialized_1843478e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AccountManager_SendApiG
              );
    Il2CppMethodInitialized_1843478e7 = '\x01';
  }
  local_58.__1__state = 0;
  local_58._4_4_ = 0;
  local_58.path = (System_String_o *)0x0;
  local_58.bearer = (System_String_o *)0x0;
  local_58.parseJson = false;
  local_58._41_7_ = 0;
  local_58.onComplete = (System_Action_AottgApiResult__o *)0x0;
  local_58.__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
  local_58.__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
  local_58.__u__1.fields.task.fields.token = 0;
  local_58.__u__1.fields.task.fields._18_6_ = 0;
  local_58.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)0x0;
  local_58.__t__builder.fields.ex = (System_Exception_o *)0x0;
  Il2CppCodeGenWriteBarrier((void **)&local_58.__t__builder,(void *)0x0);
  local_58.path = path;
  Il2CppCodeGenWriteBarrier(&local_58.path,path);
  local_58.bearer = bearer;
  Il2CppCodeGenWriteBarrier(&local_58.bearer,bearer);
  local_58.parseJson = parseJson;
  local_58.onComplete = onComplete;
  Il2CppCodeGenWriteBarrier(&local_58.onComplete,onComplete);
  pMVar2 = 
  MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AccountManager_SendApiG;
  local_58.__1__state = -1;
  if ((
      MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AccountManager_SendApiG
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    il2cpp_codegen_rgctx_method_init
              (
              MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AccountManager_SendApiG
              );
  }
  ApplicationManagers_AccountManager__SendApiGetAsync_d__166__MoveNext
            ((ApplicationManagers_AccountManager__SendApiGetAsync_d__166_o *)&local_58,
             (pMVar2->field7_0x38).rgctx_data[2].method);
  puVar3 = (undefined8 *)il2cpp_runtime_helper_180814c10(local_68,&local_58.__t__builder,0);
  uVar1 = puVar3[1];
  (__return_storage_ptr__->fields).source = (Cysharp_Threading_Tasks_IUniTaskSource_o *)*puVar3;
  *(undefined8 *)&(__return_storage_ptr__->fields).token = uVar1;
  return __return_storage_ptr__;
}


// ApplicationManagers.AccountManager$$SendApiJson
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__SendApiJson (ApplicationManagers_AccountManager_o* __this, System_String_o* method, System_String_o* path, System_String_o* json, System_String_o* bearer, bool parseJson, System_Action_AottgApiResult__o* onComplete, bool reportNetworkError, System_Nullable_int__o timeoutSeconds, const MethodInfo* method);
// 0x182326810

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__SendApiJson
          (ApplicationManagers_AccountManager_o *__this,System_String_o *method,System_String_o *path,
          System_String_o *json,System_String_o *bearer,bool parseJson,
          System_Action_AottgApiResult__o *onComplete,bool reportNetworkError,
          System_Nullable_int__o timeoutSeconds,MethodInfo *methodInfo)

{
  ApplicationManagers_AccountManager__SendApiJson_d__167_o *__this_00;
  
  if (Il2CppMethodInitialized_1843478e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_SendApiJson_d__167);
    Il2CppMethodInitialized_1843478e8 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_SendApiJson_d__167);
  ApplicationManagers_AccountManager__SendApiJson_d__167___ctor
            ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (ApplicationManagers_AccountManager__SendApiJson_d__167_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
    (__this_00->fields).method = method;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).method,method);
    (__this_00->fields).path = path;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).path,path);
    (__this_00->fields).json = json;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).json,json);
    (__this_00->fields).bearer = bearer;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).bearer,bearer);
    (__this_00->fields).parseJson = parseJson;
    (__this_00->fields).onComplete = onComplete;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).onComplete,onComplete);
    (__this_00->fields).reportNetworkError = reportNetworkError;
    (__this_00->fields).timeoutSeconds.fields = timeoutSeconds.fields;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$SendApiJsonAsync
// il2cpp: Cysharp_Threading_Tasks_UniTask_o ApplicationManagers_AccountManager__SendApiJsonAsync (ApplicationManagers_AccountManager_o* __this, System_String_o* method, System_String_o* path, System_String_o* json, System_String_o* bearer, bool parseJson, bool reportNetworkError, System_Nullable_int__o timeoutSeconds, System_Action_AottgApiResult__o* onComplete, const MethodInfo* method);
// 0x1823266e0

Cysharp_Threading_Tasks_UniTask_o *
ApplicationManagers_AccountManager__SendApiJsonAsync
          (Cysharp_Threading_Tasks_UniTask_o *__return_storage_ptr__,
          ApplicationManagers_AccountManager_o *__this,System_String_o *method,System_String_o *path,
          System_String_o *json,System_String_o *bearer,bool parseJson,bool reportNetworkError,
          System_Nullable_int__o timeoutSeconds,System_Action_AottgApiResult__o *onComplete,
          MethodInfo *methodInfo)

{
  undefined8 uVar1;
  MethodInfo *pMVar2;
  undefined8 *puVar3;
  undefined1 local_a8 [16];
  ApplicationManagers_AccountManager__SendApiJsonAsync_d__168_Fields local_98;
  
  if (Il2CppMethodInitialized_1843478e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AccountManager_SendApiJ
              );
    Il2CppMethodInitialized_1843478e9 = '\x01';
  }
  local_98.__1__state = 0;
  local_98._4_4_ = 0;
  local_98.__u__1.fields.task.fields.token = 0;
  local_98.__u__1.fields.task.fields._18_6_ = 0;
  local_98.method = (System_String_o *)0x0;
  local_98.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)0x0;
  local_98.__t__builder.fields.ex = (System_Exception_o *)0x0;
  local_98.path = (System_String_o *)0x0;
  local_98.json = (System_String_o *)0x0;
  local_98.bearer = (System_String_o *)0x0;
  local_98.parseJson = false;
  local_98.reportNetworkError = false;
  local_98._58_2_ = 0;
  local_98.timeoutSeconds.fields.hasValue = false;
  local_98.timeoutSeconds.fields._1_3_ = 0;
  local_98.timeoutSeconds.fields.value = 0;
  local_98._68_4_ = 0;
  local_98.onComplete = (System_Action_AottgApiResult__o *)0x0;
  local_98.__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
  local_98.__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
  Il2CppCodeGenWriteBarrier((void **)&local_98.__t__builder,(void *)0x0);
  local_98.method = method;
  Il2CppCodeGenWriteBarrier(&local_98.method,method);
  local_98.path = path;
  Il2CppCodeGenWriteBarrier(&local_98.path,path);
  local_98.json = json;
  Il2CppCodeGenWriteBarrier(&local_98.json,json);
  local_98.bearer = bearer;
  Il2CppCodeGenWriteBarrier(&local_98.bearer,bearer);
  local_98.parseJson = parseJson;
  local_98.reportNetworkError = reportNetworkError;
  local_98.timeoutSeconds.fields._0_4_ = timeoutSeconds.fields._0_4_;
  local_98.timeoutSeconds.fields.value = timeoutSeconds.fields.value;
  local_98.onComplete = onComplete;
  Il2CppCodeGenWriteBarrier(&local_98.onComplete,onComplete);
  pMVar2 = 
  MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AccountManager_SendApiJ;
  local_98.__1__state = -1;
  if ((
      MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AccountManager_SendApiJ
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    il2cpp_codegen_rgctx_method_init
              (
              MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AccountManager_SendApiJ
              );
  }
  ApplicationManagers_AccountManager__SendApiJsonAsync_d__168__MoveNext
            ((ApplicationManagers_AccountManager__SendApiJsonAsync_d__168_o *)&local_98,
             (pMVar2->field7_0x38).rgctx_data[2].method);
  puVar3 = (undefined8 *)il2cpp_runtime_helper_180814c10(local_a8,&local_98.__t__builder,0);
  uVar1 = puVar3[1];
  (__return_storage_ptr__->fields).source = (Cysharp_Threading_Tasks_IUniTaskSource_o *)*puVar3;
  *(undefined8 *)&(__return_storage_ptr__->fields).token = uVar1;
  return __return_storage_ptr__;
}


// ApplicationManagers.AccountManager$$SendApiJsonAsync
// il2cpp: Cysharp_Threading_Tasks_UniTask_AottgApiResult__o ApplicationManagers_AccountManager__SendApiJsonAsync (System_String_o* method, System_String_o* path, System_String_o* json, System_String_o* bearer, bool parseJson, bool reportNetworkError, System_Nullable_int__o timeoutSeconds, const MethodInfo* method);
// 0x1823265b0

Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *
ApplicationManagers_AccountManager__SendApiJsonAsync_23265b0
          (Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *__return_storage_ptr__,System_String_o *method,
          System_String_o *path,System_String_o *json,System_String_o *bearer,bool parseJson,
          bool reportNetworkError,System_Nullable_int__o timeoutSeconds,MethodInfo *methodInfo)

{
  ApplicationManagers_Api_AottgApiResult_o *pAVar1;
  int16_t iVar2;
  undefined6 uVar3;
  ApplicationManagers_Api_AottgApiClient_o *__this;
  ApplicationManagers_Api_AottgApiRequest_o *__this_00;
  Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *pCVar4;
  Cysharp_Threading_Tasks_UniTask_AottgApiResult__o local_58;
  
  if (Il2CppMethodInitialized_1843478ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Api_AottgApiClient);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Api_AottgApiRequest);
    Il2CppMethodInitialized_1843478ea = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Api_AottgApiClient);
  ApplicationManagers_Api_AottgApiClient___ctor(__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Api_AottgApiRequest);
  ApplicationManagers_Api_AottgApiRequest___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (ApplicationManagers_Api_AottgApiRequest_o *)0x0) {
    (__this_00->fields).Method = method;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).Method,method);
    (__this_00->fields).Path = path;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).Path,path);
    (__this_00->fields).JsonBody = json;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).JsonBody,json);
    (__this_00->fields).BearerToken = bearer;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).BearerToken,bearer);
    (__this_00->fields).ParseJson = parseJson;
    (__this_00->fields).TimeoutSeconds.fields = timeoutSeconds.fields;
    (__this_00->fields).ReportNetworkError = reportNetworkError;
    if (__this != (ApplicationManagers_Api_AottgApiClient_o *)0x0) {
      pCVar4 = ApplicationManagers_Api_AottgApiClient__SendAsync
                         (&local_58,__this,__this_00,(System_Threading_CancellationToken_o)0x0,
                          (MethodInfo *)0x0);
      pAVar1 = (pCVar4->fields).result;
      iVar2 = (pCVar4->fields).token;
      uVar3 = *(undefined6 *)&(pCVar4->fields).field_0x12;
      (__return_storage_ptr__->fields).source = (pCVar4->fields).source;
      (__return_storage_ptr__->fields).result = pAVar1;
      (__return_storage_ptr__->fields).token = iVar2;
      *(undefined6 *)&(__return_storage_ptr__->fields).field_0x12 = uVar3;
      return __return_storage_ptr__;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$OnDestroy
// il2cpp: void ApplicationManagers_AccountManager__OnDestroy (ApplicationManagers_AccountManager_o* __this, const MethodInfo* method);
// 0x182325080

void ApplicationManagers_AccountManager__OnDestroy
               (ApplicationManagers_AccountManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint8_t uVar2;
  MethodInfo *pMVar3;
  char cVar4;
  Events_OnPreLoadScene_o *value;
  undefined1 *puVar5;
  System_Delegate_o *pSVar6;
  Events_OnPreLoadScene_o *pEVar7;
  Il2CppObject *ex;
  System_Delegate_o *pSVar8;
  Events_OnPreLoadScene_o *source;
  bool bVar9;
  
  if (Il2CppMethodInitialized_1843478eb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_ApplicationManagers_AccountManager_OnPreLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnPreLoadScene);
    Il2CppMethodInitialized_1843478eb = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (TypeInfo_ApplicationManagers_AccountManager->static_fields->_sceneInvalidationSubscribed != false) {
    value = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnPreLoadScene);
    pMVar3 = MethodInfo_ApplicationManagers_AccountManager_OnPreLoadScene;
    (value->fields).method_ptr =
         (intptr_t)MethodInfo_ApplicationManagers_AccountManager_OnPreLoadScene->virtualMethodPointer;
    (value->fields).method = (intptr_t)pMVar3;
    (value->fields).m_target = (Il2CppObject *)0x0;
    Il2CppCodeGenWriteBarrier(&(value->fields).m_target,(void *)0x0);
    uVar2 = pMVar3->parameters_count;
    (value->fields).method_code = (intptr_t)value;
    cVar4 = il2cpp_runtime_helper_1804161b0();
    if (cVar4 == '\0') {
      ex = il2cpp_codegen_get_argument_exception
                     ((char *)0x0,"Delegate to an instance method cannot have null \'this\'.");
      il2cpp_codegen_raise_exception(ex,(MethodInfo *)0x0);
    }
    if (uVar2 == '\x01') {
      puVar5 = &label_180001f70;
    }
    else {
      (value->fields).method_code = (intptr_t)(value->fields).m_target;
      puVar5 = (undefined1 *)(value->fields).method_ptr;
    }
    (value->fields).invoke_impl = (intptr_t)puVar5;
    bVar9 = g_data_1843477ab == '\0';
    (value->fields).extra_arg = (intptr_t)il2cpp_runtime_helper_180001f20;
    if (bVar9) {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_EventManager);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnPreLoadScene);
      g_data_1843477ab = '\x01';
    }
    source = TypeInfo_Events_EventManager->static_fields->OnPreLoadScene;
    do {
      pSVar6 = System_Delegate__Remove
                         ((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
      if (pSVar6 != (System_Delegate_o *)0x0) {
        pSVar8 = (System_Delegate_o *)0x0;
        if ((Events_OnPreLoadScene_c *)pSVar6->klass == TypeInfo_Events_OnPreLoadScene) {
          pSVar8 = pSVar6;
        }
        if (pSVar8 == (System_Delegate_o *)0x0) {
          il2cpp_codegen_raise_invalid_cast_exception(pSVar6,TypeInfo_Events_OnPreLoadScene);
        }
      }
      pEVar7 = (Events_OnPreLoadScene_o *)
               il2cpp_runtime_helper_1804174a0(&TypeInfo_Events_EventManager->static_fields->OnPreLoadScene);
      bVar9 = pEVar7 != source;
      source = pEVar7;
    } while (bVar9);
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    TypeInfo_ApplicationManagers_AccountManager->static_fields->_sceneInvalidationSubscribed = false;
  }
  if (Il2CppMethodInitialized_18434788d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_18434788d = '\x01';
  }
  if ((__this->fields)._oauthFlowCoroutine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_2f1d820
              ((UnityEngine_MonoBehaviour_o *)__this,(__this->fields)._oauthFlowCoroutine,(MethodInfo *)0x0);
    (__this->fields)._oauthFlowCoroutine = (UnityEngine_Coroutine_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._oauthFlowCoroutine,(void *)0x0);
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_oauthPendingCallback =
       (System_Action_bool__string__o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_AccountManager->static_fields->_oauthPendingCallback,(void *)0x0);
  piVar1 = &(__this->fields)._oauthAttemptId;
  *piVar1 = *piVar1 + 1;
  return;
}


// ApplicationManagers.AccountManager$$DeleteJson
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__DeleteJson (ApplicationManagers_AccountManager_o* __this, System_String_o* path, System_String_o* bearer, System_Action_bool__string__o* onComplete, const MethodInfo* method);
// 0x182322f60

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__DeleteJson
          (ApplicationManagers_AccountManager_o *__this,System_String_o *path,System_String_o *bearer,
          System_Action_bool__string__o *onComplete,MethodInfo *method)

{
  ApplicationManagers_AccountManager__DeleteJson_d__171_o *__this_00;
  
  if (Il2CppMethodInitialized_1843478ec == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager_DeleteJson_d__171)
    ;
    Il2CppMethodInitialized_1843478ec = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_DeleteJson_d__171);
  ApplicationManagers_AccountManager__DeleteJson_d__171___ctor
            ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (ApplicationManagers_AccountManager__DeleteJson_d__171_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
    (__this_00->fields).path = path;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).path,path);
    (__this_00->fields).bearer = bearer;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).bearer,bearer);
    (__this_00->fields).onComplete = onComplete;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).onComplete,onComplete);
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$PostJson
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__PostJson (ApplicationManagers_AccountManager_o* __this, System_String_o* path, System_String_o* json, System_String_o* bearer, System_Action_bool__string__o* onComplete, bool applyAuthResponse, System_String_o* captureField, System_Action_string__o* captureTarget, bool reportNetworkError, const MethodInfo* method);
// 0x1823257d0

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__PostJson
          (ApplicationManagers_AccountManager_o *__this,System_String_o *path,System_String_o *json,
          System_String_o *bearer,System_Action_bool__string__o *onComplete,bool applyAuthResponse,
          System_String_o *captureField,System_Action_string__o *captureTarget,bool reportNetworkError,
          MethodInfo *method)

{
  ApplicationManagers_AccountManager__PostJson_d__172_o *__this_00;
  
  if (Il2CppMethodInitialized_1843478ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager_PostJson_d__172);
    Il2CppMethodInitialized_1843478ed = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_PostJson_d__172);
  ApplicationManagers_AccountManager__PostJson_d__172___ctor
            ((Photon_Pun_UtilityScripts_OnClickRpc__ClickFlash_d__8_o *)__this_00,0,(MethodInfo *)0x0);
  if (__this_00 != (ApplicationManagers_AccountManager__PostJson_d__172_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this,__this);
    (__this_00->fields).path = path;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).path,path);
    (__this_00->fields).json = json;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).json,json);
    (__this_00->fields).bearer = bearer;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).bearer,bearer);
    (__this_00->fields).onComplete = onComplete;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).onComplete,onComplete);
    (__this_00->fields).applyAuthResponse = applyAuthResponse;
    (__this_00->fields).captureField = captureField;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).captureField,captureField);
    (__this_00->fields).captureTarget = captureTarget;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).captureTarget,captureTarget);
    (__this_00->fields).reportNetworkError = reportNetworkError;
    return (System_Collections_IEnumerator_o *)__this_00;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$ApplyAuthMethodsResponse
// il2cpp: bool ApplicationManagers_AccountManager__ApplyAuthMethodsResponse (System_String_o* json, const MethodInfo* method);
// 0x182321050
// eh: try 0x182321433..0x182321692 -> pad 0x183317f30 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 39 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18232124f: nop 
// asm:   0x1823214c0: mov rdx, qword ptr [rip + 0x1d761b1]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose
// asm:   0x1823214c7: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1823214cc: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1823214d1: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1823214d6: test rcx, rcx
// asm:   0x1823214d9: jne 0x182321686
// asm:   0x1823214df: mov rsi, qword ptr [rsp + 0x90]
// asm:   0x18232156c: nop dword ptr [rax]
// asm:   0x1823215e2: mov rdx, qword ptr [rip + 0x1d7608f]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose
// asm:   0x1823215e9: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x1823215ee: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x1823215f3: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x1823215f8: test rcx, rcx
// asm:   0x1823215fb: jne 0x182321692
// asm:   0x182321686: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x182321692: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317f30: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317f35: push rbp
// asm:   0x183317f36: sub rsp, 0x20
// asm:   0x183317f3a: mov rbp, rdx
// asm:   0x183317f3d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317f41: mov rcx, qword ptr [rax]
// asm:   0x183317f44: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317f48: movabs rax, 0
// asm:   0x183317f52: add rsp, 0x20
// asm:   0x183317f56: pop rbp
// asm:   0x183317f57: ret 
// asm:   0x183317fd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317fd5: push rbp
// asm:   0x183317fd6: sub rsp, 0x20
// asm:   0x183317fda: mov rbp, rdx
// asm:   0x183317fdd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317fe1: mov rcx, qword ptr [rax]
// asm:   0x183317fe4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317fe8: movabs rax, 0
// asm:   0x183317ff2: add rsp, 0x20
// asm:   0x183317ff6: pop rbp
// asm:   0x183317ff7: ret 

bool ApplicationManagers_AccountManager__ApplyAuthMethodsResponse(System_String_o *json,MethodInfo *method)

{
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_HashSet_string__o *pSVar1;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  System_Collections_Generic_HashSet_BallotBox_Ballot__o *__this;
  Il2CppObject *pIVar3;
  bool bVar4;
  char cVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  System_Xml_Schema_XmlSchema_o *pSVar7;
  System_Collections_Generic_HashSet_string__o *__this_00;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  Il2CppClass *klass;
  System_FormatException_o *__this_01;
  MethodInfo *lastManagedFrame;
  int iVar10;
  bool local_res8;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  undefined1 local_30 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_28;
  Il2CppObject *local_20;
  
  if (Il2CppMethodInitialized_1843478ee == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&"methods");
    il2cpp_codegen_initialize_runtime_metadata(&"key");
    il2cpp_codegen_initialize_runtime_metadata(&"enabled");
    Il2CppMethodInitialized_1843478ee = '\x01';
  }
  local_30 = (undefined1  [8])0x0;
  pUStack_28 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_20 = (Il2CppObject *)0x0;
  pSVar6 = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
  if (pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar7 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)(pSVar6,(MethodInfo *)"methods");
    if (pSVar7 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      pSVar6 = (SimpleJSONFixed_JSONNode_o *)
               (*(code *)((Il2CppClass *)pSVar7->klass)->vtable[45].methodPtr)(pSVar7);
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      bVar4 = SimpleJSONFixed_JSONNode__op_Equality(pSVar6,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if (bVar4) {
        klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_FormatException);
        __this_01 = (System_FormatException_o *)il2cpp_codegen_object_new(klass);
        pSVar8 = il2cpp_codegen_get_runtime_metadata(&"Missing methods array.");
        System_FormatException___ctor_1b22ec0(__this_01,pSVar8,(MethodInfo *)0x0);
        lastManagedFrame =
             il2cpp_codegen_get_runtime_metadata
                       (&MethodInfo_ApplicationManagers_AccountManager_ApplyAuthMethodsResponse);
        il2cpp_codegen_raise_exception((Il2CppObject *)__this_01,lastManagedFrame);
      }
      if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
      }
      if (Il2CppMethodInitialized_184341f37 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
        Il2CppMethodInitialized_184341f37 = '\x01';
      }
      if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
      }
      comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string)
      ;
      System_Collections_Generic_HashSet_object____ctor_176d450
                ((System_Collections_Generic_HashSet_object__o *)__this_00,
                 (System_Collections_Generic_IEqualityComparer_T__o *)comparer,
                 (MethodInfo_176D450 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
      if (pSVar6 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        iVar10 = 0;
        while( true ) {
          pSVar7 = (*(pSVar6->klass->vtable)._11_get_Count.methodPtr)
                             (pSVar6,(pSVar6->klass->vtable)._11_get_Count.method);
          if ((int)pSVar7 <= iVar10) break;
          pSVar7 = (*(pSVar6->klass->vtable)._5_get_Item.methodPtr)(pSVar6,(MethodInfo *)iVar10);
          if (pSVar7 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_18232167a;
          pSVar8 = (*(pSVar7->klass->vtable)._7_get_IdAttribute.methodPtr)
                             (pSVar7,(MethodInfo *)"key");
          if (pSVar8 == (System_String_o *)0x0) goto label_18232167a;
          pSVar8 = (System_String_o *)(**(code **)((longlong)pSVar8->klass + 0x1c8))(pSVar8);
          bVar4 = System_String__IsNullOrEmpty(pSVar8,(MethodInfo *)0x0);
          if (!bVar4) {
            pSVar9 = (*(pSVar7->klass->vtable)._7_get_IdAttribute.methodPtr)
                               (pSVar7,(MethodInfo *)"enabled");
            if (pSVar9 == (System_String_o *)0x0) goto label_18232167a;
            cVar5 = (**(code **)((longlong)pSVar9->klass + 0x3a8))
                              (pSVar9,*(undefined8 *)((longlong)pSVar9->klass + 0x3b0));
            if (cVar5 != '\0') {
              if (__this_00 == (System_Collections_Generic_HashSet_string__o *)0x0) goto label_18232167a;
              System_Collections_Generic_HashSet_object___Add
                        ((System_Collections_Generic_HashSet_object__o *)__this_00,(Il2CppObject *)pSVar8,
                         (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
            }
          }
          iVar10 = iVar10 + 1;
        }
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        if (Il2CppMethodInitialized_184347900 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
          Il2CppMethodInitialized_184347900 = '\x01';
        }
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        if (TypeInfo_ApplicationManagers_AccountManager->static_fields->
            _HasAuthMethodsSnapshot_k__BackingField == false) {
          local_res8 = true;
        }
        else {
          if (__this_00 == (System_Collections_Generic_HashSet_string__o *)0x0) goto label_18232167a;
          iVar10 = (__this_00->fields)._count;
          if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
          }
          pSVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_enabledAuthMethods;
          if (pSVar1 == (System_Collections_Generic_HashSet_string__o *)0x0) goto label_18232167a;
          local_res8 = iVar10 != (pSVar1->fields)._count;
        }
        if (local_res8 == false) {
          if (__this_00 == (System_Collections_Generic_HashSet_string__o *)0x0) goto label_18232167a;
          System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                    ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
                     (System_Collections_Generic_HashSet_Vector2Int__o *)__this_00,
                     (MethodInfo_175C200 *)MethodInfo_System_Collections_Generic_HashSet_string_GetEnumerator)
          ;
          local_30 = (undefined1  [8])local_48._0_8_;
          pUStack_28 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48._8_8_;
          local_20 = local_38;
          local_48._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
          local_48._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_30;
          do {
            bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_30,
                               (MethodInfo_15381F0 *)
                               MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_MoveNext);
            pIVar3 = local_20;
            if (!bVar4) {
              System_Collections_Generic_HashSet_Enumerator_object___Dispose
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_30,
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose);
              goto label_1823214e7;
            }
            if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
            }
            pSVar2 = (System_Collections_Generic_HashSet_object__o *)
                     TypeInfo_ApplicationManagers_AccountManager->static_fields->_enabledAuthMethods;
            if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) {
              ThrowNullReferenceException();
            }
            bVar4 = System_Collections_Generic_HashSet_object___Contains
                              (pSVar2,pIVar3,
                               (MethodInfo_1759E40 *)
                               MethodInfo_System_Collections_Generic_HashSet_string_Contains);
          } while (bVar4);
          local_res8 = true;
          System_Collections_Generic_HashSet_Enumerator_object___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_30,
                     MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose);
        }
label_1823214e7:
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        __this = (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)
                 TypeInfo_ApplicationManagers_AccountManager->static_fields->_enabledAuthMethods;
        if (__this != (System_Collections_Generic_HashSet_BallotBox_Ballot__o *)0x0) {
          System_Collections_Generic_HashSet_BallotBox_Ballot___Clear
                    (__this,(MethodInfo_17592A0 *)MethodInfo_System_Collections_Generic_HashSet_string_Clear);
          if (__this_00 != (System_Collections_Generic_HashSet_string__o *)0x0) {
            System_Collections_Generic_HashSet_Vector2Int___GetEnumerator
                      ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
                       (System_Collections_Generic_HashSet_Vector2Int__o *)__this_00,
                       (MethodInfo_175C200 *)
                       MethodInfo_System_Collections_Generic_HashSet_string_GetEnumerator);
            local_30 = (undefined1  [8])local_48._0_8_;
            pUStack_28 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_48._8_8_;
            local_20 = local_38;
            local_48._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
            local_48._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_30;
            while( true ) {
              bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_30,
                                 (MethodInfo_15381F0 *)
                                 MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_MoveNext);
              pIVar3 = local_20;
              if (!bVar4) {
                System_Collections_Generic_HashSet_Enumerator_object___Dispose
                          ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_30,
                           MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose);
                if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
                }
                if (Il2CppMethodInitialized_184347901 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
                  Il2CppMethodInitialized_184347901 = '\x01';
                }
                if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
                }
                TypeInfo_ApplicationManagers_AccountManager->static_fields->
                _HasAuthMethodsSnapshot_k__BackingField = true;
                return local_res8;
              }
              if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
                il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
              }
              pSVar2 = (System_Collections_Generic_HashSet_object__o *)
                       TypeInfo_ApplicationManagers_AccountManager->static_fields->_enabledAuthMethods;
              if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) break;
              System_Collections_Generic_HashSet_object___Add
                        (pSVar2,pIVar3,
                         (MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
            }
            ThrowNullReferenceException();
          }
        }
      }
    }
  }
label_18232167a:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$ApplyAuthResponse
// il2cpp: void ApplicationManagers_AccountManager__ApplyAuthResponse (System_String_o* json, const MethodInfo* method);
// 0x1823216f0

void ApplicationManagers_AccountManager__ApplyAuthResponse(System_String_o *json,MethodInfo *method)

{
  System_Action_o *pSVar1;
  System_DateTime_Fields SVar2;
  undefined8 uVar3;
  bool bVar4;
  SimpleJSONFixed_JSONNode_o *node;
  ApplicationManagers_AccountLoginResponse_o *pAVar5;
  int64_t iVar6;
  System_Xml_Schema_XmlSchema_o *a;
  Il2CppClass *klass;
  System_FormatException_o *__this;
  System_String_o *pSVar7;
  MethodInfo *lastManagedFrame;
  System_DateTimeOffset_o local_48;
  System_DateTimeOffset_o local_38 [3];
  
  if (Il2CppMethodInitialized_1843478ef == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTimeOffset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"profile");
    Il2CppMethodInitialized_1843478ef = '\x01';
  }
  node = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
  pAVar5 = ApplicationManagers_AccountLoginResponse__Parse(node,(MethodInfo *)0x0);
  if (pAVar5 == (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_FormatException);
    __this = (System_FormatException_o *)il2cpp_codegen_object_new(klass);
    pSVar7 = il2cpp_codegen_get_runtime_metadata(&"Missing login response payload.");
    System_FormatException___ctor_1b22ec0(__this,pSVar7,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata(&MethodInfo_ApplicationManagers_AccountManager_ApplyAuthResponse)
    ;
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,lastManagedFrame);
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  il2cpp_runtime_helper_1823204d0(pAVar5,0);
  il2cpp_runtime_helper_182320460((pAVar5->fields).AccessToken,0);
  il2cpp_runtime_helper_1823205d0((pAVar5->fields).PhotonToken,0);
  local_38[0].fields._dateTime.fields._dateData =
       (System_DateTime_Fields)(pAVar5->fields).AccessTokenExpiresAt.fields._dateTime.fields._dateData;
  local_38[0].fields._offsetMinutes = (pAVar5->fields).AccessTokenExpiresAt.fields._offsetMinutes;
  local_38[0].fields._10_6_ = *(undefined6 *)&(pAVar5->fields).AccessTokenExpiresAt.fields.field_0xa;
  if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
  }
  local_48.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
  local_48.fields._offsetMinutes = 0;
  local_48.fields._10_6_ = 0;
  bVar4 = System_DateTimeOffset__op_Equality(local_38,&local_48,(MethodInfo *)0x0);
  if (bVar4) {
    iVar6 = 0;
  }
  else {
    if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
    }
    iVar6 = System_DateTimeOffset__ToUnixTimeSeconds(&(pAVar5->fields).AccessTokenExpiresAt,(MethodInfo *)0x0)
    ;
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_184347905 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_184347905 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_AuthTokenExpiresUnix_k__BackingField = iVar6;
  SVar2._dateData = (pAVar5->fields).PhotonTokenExpiresAt.fields._dateTime.fields._dateData;
  uVar3._0_2_ = (pAVar5->fields).PhotonTokenExpiresAt.fields._offsetMinutes;
  uVar3._2_6_ = *(undefined6 *)&(pAVar5->fields).PhotonTokenExpiresAt.fields.field_0xa;
  if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
  }
  local_38[0].fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
  local_38[0].fields._offsetMinutes = 0;
  local_38[0].fields._10_6_ = 0;
  local_48.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)SVar2._dateData
  ;
  local_48.fields._8_8_ = uVar3;
  bVar4 = System_DateTimeOffset__op_Equality(&local_48,local_38,(MethodInfo *)0x0);
  if (bVar4) {
    iVar6 = 0;
  }
  else {
    if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
    }
    iVar6 = System_DateTimeOffset__ToUnixTimeSeconds(&(pAVar5->fields).PhotonTokenExpiresAt,(MethodInfo *)0x0)
    ;
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_184347906 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_184347906 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_PhotonTokenExpiresUnix_k__BackingField = iVar6;
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar7 = (pAVar5->fields).RefreshToken;
    a = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"profile");
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar4 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar4) {
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      ApplicationManagers_AccountManager__ApplyProfileResponse
                ((SimpleJSONFixed_JSONNode_o *)a,(MethodInfo *)0x0);
    }
    bVar4 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
    if (!bVar4) {
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      TypeInfo_ApplicationManagers_AccountManager->static_fields->_refreshToken = pSVar7;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_ApplicationManagers_AccountManager->static_fields->_refreshToken,pSVar7);
      if (Il2CppMethodInitialized_1843473fa == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
        Il2CppMethodInitialized_1843473fa = '\x01';
      }
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      if (TypeInfo_ApplicationManagers_AccountManager->static_fields->_KeepSignedIn_k__BackingField == false)
      {
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        ApplicationManagers_AccountManager__DeleteRefreshToken((MethodInfo *)0x0);
      }
      else {
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        ApplicationManagers_AccountManager__SaveRefreshToken((MethodInfo *)0x0);
      }
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pSVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->OnLoggedIn;
    if (pSVar1 != (System_Action_o *)0x0) {
      (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
    }
    return;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$OnPreLoadScene
// il2cpp: void ApplicationManagers_AccountManager__OnPreLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x1823252f0

void ApplicationManagers_AccountManager__OnPreLoadScene(int32_t sceneName,MethodInfo *method)

{
  if (Il2CppMethodInitialized_1843478f0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478f0 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_1843478ab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478ab = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownProfileCacheValid = false;
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoCacheValid = false;
  return;
}


// ApplicationManagers.AccountManager$$ParseIsoToUnix
// il2cpp: int64_t ApplicationManagers_AccountManager__ParseIsoToUnix (System_String_o* iso, const MethodInfo* method);
// 0x182325380
// eh: try 0x1823253d6..0x182325491 -> pad 0x183340390 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182325493: xor edi, edi
// asm:   0x183340390: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183340395: push rbx
// asm:   0x183340396: push rbp
// asm:   0x183340397: sub rsp, 0x58
// asm:   0x18334039b: mov rbp, rdx
// asm:   0x18334039e: mov rbx, qword ptr [rbp + 0x58]
// asm:   0x1833403a2: mov rdx, qword ptr [rbx]
// asm:   0x1833403a5: mov rdx, qword ptr [rdx]
// asm:   0x1833403a8: mov rcx, qword ptr [rip + 0x1014a21]
// asm:   0x1833403af: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x1833403b4: test al, al
// asm:   0x1833403b6: je 0x1833403c4
// asm:   0x1833403b8: movabs rax, 0
// asm:   0x1833403c2: jmp 0x1833403dc
// asm:   0x1833403c4: mov rax, qword ptr [rbx]
// asm:   0x1833403c7: mov qword ptr [rbp + 0x50], rax
// asm:   0x1833403cb: lea rdx, [rip + 0xc9bbb6]
// asm:   0x1833403d2: lea rcx, [rbp + 0x50]
// asm:   0x1833403d6: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x1833403dc: add rsp, 0x58
// asm:   0x1833403e0: pop rbp
// asm:   0x1833403e1: pop rbx
// asm:   0x1833403e2: ret 

int64_t ApplicationManagers_AccountManager__ParseIsoToUnix(System_String_o *iso,MethodInfo *method)

{
  bool bVar1;
  System_DateTime_o d1;
  double dVar2;
  System_DateTime_Fields local_res8;
  System_DateTime_Fields local_res18;
  System_TimeSpan_Fields local_res20;
  
  if (Il2CppMethodInitialized_1843478f1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_TimeSpan);
    Il2CppMethodInitialized_1843478f1 = '\x01';
  }
  local_res8._dateData = 0;
  local_res20._ticks = 0;
  bVar1 = System_String__IsNullOrEmpty(iso,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
    }
    local_res8._dateData =
         (uint64_t)System_DateTime__Parse_1b1e540(iso,(System_IFormatProvider_o *)0x0,0x80,(MethodInfo *)0x0);
    d1 = System_DateTime__ToUniversalTime((System_DateTime_o *)&local_res8,(MethodInfo *)0x0);
    local_res18._dateData = 0;
    System_DateTime___ctor_1b20a80((System_DateTime_o *)&local_res18,0x7b2,1,1,0,0,0,1,(MethodInfo *)0x0);
    local_res20._ticks =
         (int64_t)System_DateTime__op_Subtraction_1b21970
                            (d1,(System_DateTime_o)local_res18._dateData,(MethodInfo *)0x0);
    if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
    }
    dVar2 = System_TimeSpan__get_TotalSeconds((System_TimeSpan_o *)&local_res20,(MethodInfo *)0x0);
    return (longlong)dVar2;
  }
  return 0;
}


// ApplicationManagers.AccountManager$$ClearSession
// il2cpp: void ApplicationManagers_AccountManager__ClearSession (bool clearRefreshToken, const MethodInfo* method);
// 0x1823225a0

void ApplicationManagers_AccountManager__ClearSession(bool clearRefreshToken,MethodInfo *method)

{
  System_Action_o *pSVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_1843478f2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478f2 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if (bVar2) {
    bVar2 = true;
  }
  else {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    if (Il2CppMethodInitialized_1843478c4 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      Il2CppMethodInitialized_1843478c4 = '\x01';
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    bVar2 = System_String__IsNullOrEmpty
                      (TypeInfo_ApplicationManagers_AccountManager->static_fields->_refreshToken,
                       (MethodInfo *)0x0);
    bVar2 = !bVar2;
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_184347903 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_184347903 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_AuthToken_k__BackingField =
       (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_AccountManager->static_fields->_AuthToken_k__BackingField,
             (void *)0x0);
  if (Il2CppMethodInitialized_184347905 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_184347905 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_AuthTokenExpiresUnix_k__BackingField = 0;
  if (Il2CppMethodInitialized_184347904 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_184347904 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_PhotonToken_k__BackingField =
       (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_AccountManager->static_fields->_PhotonToken_k__BackingField,
             (void *)0x0);
  if (Il2CppMethodInitialized_184347906 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_184347906 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_PhotonTokenExpiresUnix_k__BackingField = 0;
  if (Il2CppMethodInitialized_184347902 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_184347902 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField =
       (ApplicationManagers_AccountLoginResponse_o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField,
             (void *)0x0);
  ApplicationManagers_AccountManager__ClearProfileResponse((MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184347907 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_184347907 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_RefreshTokenExpiresUnix_k__BackingField = 0;
  if (clearRefreshToken) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    TypeInfo_ApplicationManagers_AccountManager->static_fields->_refreshToken = (System_String_o *)0x0;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_ApplicationManagers_AccountManager->static_fields->_refreshToken,(void *)0x0);
    ApplicationManagers_AccountManager__DeleteRefreshToken((MethodInfo *)0x0);
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_1843478ff == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478ff = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_IsRefreshInProgress_k__BackingField = false;
  if (bVar2) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pSVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->OnLoggedOut;
    if (pSVar1 != (System_Action_o *)0x0) {
      (*(code *)(pSVar1->fields).invoke_impl)((pSVar1->fields).method_code,(pSVar1->fields).method);
    }
  }
  return;
}


// ApplicationManagers.AccountManager$$GetRefreshTokenPath
// il2cpp: System_String_o* ApplicationManagers_AccountManager__GetRefreshTokenPath (const MethodInfo* method);
// 0x182323d80

System_String_o * ApplicationManagers_AccountManager__GetRefreshTokenPath(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_1843478f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&"/AccountRefresh.dat");
    Il2CppMethodInitialized_1843478f3 = '\x01';
  }
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  pSVar1 = System_String__Concat_1969e50
                     (TypeInfo_Utility_FolderPaths->static_fields->Settings,"/AccountRefresh.dat",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// ApplicationManagers.AccountManager$$SaveRefreshToken
// il2cpp: void ApplicationManagers_AccountManager__SaveRefreshToken (const MethodInfo* method);
// 0x182326240
// eh: try 0x18232627a..0x182326364 -> pad 0x1833197a0 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 55 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182326366: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18232636b: test rcx, rcx
// asm:   0x18232636e: je 0x1823263d2
// asm:   0x182326370: mov rax, qword ptr [rcx]
// asm:   0x182326373: mov rdx, qword ptr [rax + 0x190]
// asm:   0x18232637a: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x182326380: mov rbx, rax
// asm:   0x182326383: lea rcx, [rip + 0x1d5db8e]  ; "AccountManager: failed to save refresh token: "
// asm:   0x18232638a: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x18232638f: mov rcx, rax
// asm:   0x182326392: xor r8d, r8d
// asm:   0x182326395: mov rdx, rbx
// asm:   0x182326398: call 0x181969e50  ; System_String__Concat()
// asm:   0x18232639d: mov rbx, rax
// asm:   0x1823263a0: lea rcx, [rip + 0x1dd5091]  ; TypeInfo_UnityEngine_Debug
// asm:   0x1823263a7: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1823263ac: cmp dword ptr [rax + 0xe4], 0
// asm:   0x1823263b3: jne 0x1823263bd
// asm:   0x1823263b5: mov rcx, rax
// asm:   0x1823263b8: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x1823263bd: xor edx, edx
// asm:   0x1823263bf: mov rcx, rbx
// asm:   0x1823263c2: add rsp, 0x40
// asm:   0x1823263c6: pop rbx
// asm:   0x1823263c7: jmp 0x182ec3bd0  ; UnityEngine_Debug__Log()
// asm:   0x1823263d2: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x1833197a0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833197a5: push rbx
// asm:   0x1833197a6: push rbp
// asm:   0x1833197a7: push rdi
// asm:   0x1833197a8: sub rsp, 0x20
// asm:   0x1833197ac: mov rbp, rdx
// asm:   0x1833197af: mov rdi, qword ptr [rbp + 0x28]
// asm:   0x1833197b3: mov rax, qword ptr [rdi]
// asm:   0x1833197b6: mov rbx, qword ptr [rax]
// asm:   0x1833197b9: lea rcx, [rip + 0xd5f798]  ; TypeInfo_System_Exception
// asm:   0x1833197c0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1833197c5: mov rcx, rax
// asm:   0x1833197c8: mov rdx, rbx
// asm:   0x1833197cb: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x1833197d0: test al, al
// asm:   0x1833197d2: mov rax, qword ptr [rdi]
// asm:   0x1833197d5: je 0x1833197e7
// asm:   0x1833197d7: mov qword ptr [rbp + 0x30], rax
// asm:   0x1833197db: movabs rax, 0
// asm:   0x1833197e5: jmp 0x1833197fc
// asm:   0x1833197e7: mov qword ptr [rbp + 0x20], rax
// asm:   0x1833197eb: lea rdx, [rip + 0xcc2796]
// asm:   0x1833197f2: lea rcx, [rbp + 0x20]
// asm:   0x1833197f6: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x1833197fc: add rsp, 0x20
// asm:   0x183319800: pop rdi
// asm:   0x183319801: pop rbp
// asm:   0x183319802: pop rbx
// asm:   0x183319803: ret 

void ApplicationManagers_AccountManager__SaveRefreshToken(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *path;
  
  if (Il2CppMethodInitialized_1843478f4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DeviceLockedEncryption);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    Il2CppMethodInitialized_1843478f4 = '\x01';
  }
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  System_IO_Directory__CreateDirectory
            (TypeInfo_Utility_FolderPaths->static_fields->Settings,(MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pSVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_refreshToken;
  if ((TypeInfo_Utility_DeviceLockedEncryption->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DeviceLockedEncryption);
  }
  pSVar1 = Utility_DeviceLockedEncryption__Encrypt(pSVar1,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_1843478f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&"/AccountRefresh.dat");
    Il2CppMethodInitialized_1843478f3 = '\x01';
  }
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  path = System_String__Concat_1969e50
                   (TypeInfo_Utility_FolderPaths->static_fields->Settings,"/AccountRefresh.dat",
                    (MethodInfo *)0x0);
  System_IO_File__WriteAllText(path,pSVar1,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager$$LoadRefreshToken
// il2cpp: void ApplicationManagers_AccountManager__LoadRefreshToken (const MethodInfo* method);
// 0x182324660
// eh: try 0x18232468e..0x18232478c -> pad 0x1833197a0 catch Il2CppExceptionWrapper [managed catch: TypeInfo_System_Exception]
// asm: 72 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182324791: jmp 0x18232485c
// asm:   0x182324796: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18232479b: test rcx, rcx
// asm:   0x18232479e: je 0x182324862
// asm:   0x1823247a4: mov rax, qword ptr [rcx]
// asm:   0x1823247a7: mov rdx, qword ptr [rax + 0x190]
// asm:   0x1823247ae: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x1823247b4: mov rbx, rax
// asm:   0x1823247b7: lea rcx, [rip + 0x1d5f4ba]  ; "AccountManager: failed to load refresh token: "
// asm:   0x1823247be: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1823247c3: mov rcx, rax
// asm:   0x1823247c6: xor r8d, r8d
// asm:   0x1823247c9: mov rdx, rbx
// asm:   0x1823247cc: call 0x181969e50  ; System_String__Concat()
// asm:   0x1823247d1: mov rbx, rax
// asm:   0x1823247d4: lea rcx, [rip + 0x1dd6c5d]  ; TypeInfo_UnityEngine_Debug
// asm:   0x1823247db: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1823247e0: cmp dword ptr [rax + 0xe4], 0
// asm:   0x1823247e7: jne 0x1823247f1
// asm:   0x1823247e9: mov rcx, rax
// asm:   0x1823247ec: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x1823247f1: xor edx, edx
// asm:   0x1823247f3: mov rcx, rbx
// asm:   0x1823247f6: call 0x182ec3bd0  ; UnityEngine_Debug__Log()
// asm:   0x1823247fb: lea rcx, [rip + 0x1d94eb6]  ; TypeInfo_ApplicationManagers_AccountManager
// asm:   0x182324802: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x182324807: cmp dword ptr [rax + 0xe4], 0
// asm:   0x18232480e: jne 0x182324818
// asm:   0x182324810: mov rcx, rax
// asm:   0x182324813: call 0x1804171c0  ; il2cpp_codegen_runtime_class_init()
// asm:   0x182324818: lea rcx, [rip + 0x1d94e99]  ; TypeInfo_ApplicationManagers_AccountManager
// asm:   0x18232481f: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x182324824: mov rcx, qword ptr [rax + 0xb8]
// asm:   0x18232482b: mov qword ptr [rcx + 0xb0], 0
// asm:   0x182324836: lea rcx, [rip + 0x1d94e7b]  ; TypeInfo_ApplicationManagers_AccountManager
// asm:   0x18232483d: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x182324842: mov rcx, qword ptr [rax + 0xb8]
// asm:   0x182324849: add rcx, 0xb0
// asm:   0x182324850: xor edx, edx
// asm:   0x182324852: add rsp, 0x40
// asm:   0x182324856: pop rbx
// asm:   0x182324857: jmp 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x182324862: call 0x180417120  ; ThrowNullReferenceException()
// asm:   0x1833197a0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x1833197a5: push rbx
// asm:   0x1833197a6: push rbp
// asm:   0x1833197a7: push rdi
// asm:   0x1833197a8: sub rsp, 0x20
// asm:   0x1833197ac: mov rbp, rdx
// asm:   0x1833197af: mov rdi, qword ptr [rbp + 0x28]
// asm:   0x1833197b3: mov rax, qword ptr [rdi]
// asm:   0x1833197b6: mov rbx, qword ptr [rax]
// asm:   0x1833197b9: lea rcx, [rip + 0xd5f798]  ; TypeInfo_System_Exception
// asm:   0x1833197c0: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1833197c5: mov rcx, rax
// asm:   0x1833197c8: mov rdx, rbx
// asm:   0x1833197cb: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x1833197d0: test al, al
// asm:   0x1833197d2: mov rax, qword ptr [rdi]
// asm:   0x1833197d5: je 0x1833197e7
// asm:   0x1833197d7: mov qword ptr [rbp + 0x30], rax
// asm:   0x1833197db: movabs rax, 0
// asm:   0x1833197e5: jmp 0x1833197fc
// asm:   0x1833197e7: mov qword ptr [rbp + 0x20], rax
// asm:   0x1833197eb: lea rdx, [rip + 0xcc2796]
// asm:   0x1833197f2: lea rcx, [rbp + 0x20]
// asm:   0x1833197f6: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x1833197fc: add rsp, 0x20
// asm:   0x183319800: pop rdi
// asm:   0x183319801: pop rbp
// asm:   0x183319802: pop rbx
// asm:   0x183319803: ret 

void ApplicationManagers_AccountManager__LoadRefreshToken(MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843478f5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DeviceLockedEncryption);
    Il2CppMethodInitialized_1843478f5 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_1843478f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&"/AccountRefresh.dat");
    Il2CppMethodInitialized_1843478f3 = '\x01';
  }
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  pSVar2 = System_String__Concat_1969e50
                     (TypeInfo_Utility_FolderPaths->static_fields->Settings,"/AccountRefresh.dat",
                      (MethodInfo *)0x0);
  bVar1 = System_IO_File__Exists(pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = System_IO_File__ReadAllText(pSVar2,(MethodInfo *)0x0);
    if ((TypeInfo_Utility_DeviceLockedEncryption->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DeviceLockedEncryption);
    }
    pSVar2 = Utility_DeviceLockedEncryption__Decrypt(pSVar2,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    TypeInfo_ApplicationManagers_AccountManager->static_fields->_refreshToken = pSVar2;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_ApplicationManagers_AccountManager->static_fields->_refreshToken,pSVar2);
  }
  return;
}


// ApplicationManagers.AccountManager$$DeleteRefreshToken
// il2cpp: void ApplicationManagers_AccountManager__DeleteRefreshToken (const MethodInfo* method);
// 0x182323010
// eh: try 0x182323042..0x1823230c1 -> pad 0x183315840 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823230c0: nop 
// asm:   0x183315840: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315845: push rbx
// asm:   0x183315846: push rbp
// asm:   0x183315847: sub rsp, 0x28
// asm:   0x18331584b: mov rbp, rdx
// asm:   0x18331584e: mov rbx, qword ptr [rbp + 0x28]
// asm:   0x183315852: mov rdx, qword ptr [rbx]
// asm:   0x183315855: mov rdx, qword ptr [rdx]
// asm:   0x183315858: mov rcx, qword ptr [rip + 0x103f571]
// asm:   0x18331585f: call 0x180416950  ; il2cpp_codegen_class_is_assignable_from()
// asm:   0x183315864: test al, al
// asm:   0x183315866: je 0x183315874
// asm:   0x183315868: movabs rax, 0
// asm:   0x183315872: jmp 0x18331588c
// asm:   0x183315874: mov rax, qword ptr [rbx]
// asm:   0x183315877: mov qword ptr [rbp + 0x20], rax
// asm:   0x18331587b: lea rdx, [rip + 0xcc6706]
// asm:   0x183315882: lea rcx, [rbp + 0x20]
// asm:   0x183315886: call 0x1804ef7d0  ; _CxxThrowException()
// asm:   0x18331588c: add rsp, 0x28
// asm:   0x183315890: pop rbp
// asm:   0x183315891: pop rbx
// asm:   0x183315892: ret 

void ApplicationManagers_AccountManager__DeleteRefreshToken(MethodInfo *method)

{
  bool bVar1;
  System_String_o *path;
  
  if (Il2CppMethodInitialized_1843478f6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_1843478f6 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_1843478f3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&"/AccountRefresh.dat");
    Il2CppMethodInitialized_1843478f3 = '\x01';
  }
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  path = System_String__Concat_1969e50
                   (TypeInfo_Utility_FolderPaths->static_fields->Settings,"/AccountRefresh.dat",
                    (MethodInfo *)0x0);
  bVar1 = System_IO_File__Exists(path,(MethodInfo *)0x0);
  if (bVar1) {
    System_IO_File__Delete(path,(MethodInfo *)0x0);
  }
  return;
}


// ApplicationManagers.AccountManager$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___ctor (ApplicationManagers_AccountManager_o* __this, const MethodInfo* method);
// 0x180528540

void
ApplicationManagers_AccountManager___ctor(ApplicationManagers_AccountManager_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager$$.cctor
// il2cpp: void ApplicationManagers_AccountManager___cctor (const MethodInfo* method);
// 0x182327af0

void ApplicationManagers_AccountManager___cctor(MethodInfo *method)

{
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_Dictionary_string__string__o *__this;
  System_Collections_Generic_List_Action_bool__string___o *__this_00;
  System_Collections_Generic_List_Action_bool__string__JSONNode___o *__this_01;
  System_Collections_Generic_HashSet_string__o *__this_02;
  
  if (Il2CppMethodInitialized_1843478f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_bool_string_JSONNode_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_bool_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_Action_bool_string_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Action_bool_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&"google");
    il2cpp_codegen_initialize_runtime_metadata(&"email_password");
    il2cpp_codegen_initialize_runtime_metadata(&"discord");
    il2cpp_codegen_initialize_runtime_metadata(&"https://aottg2.com");
    Il2CppMethodInitialized_1843478f7 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,
             (MethodInfo_1454140 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileSocials_k__BackingField = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileSocials_k__BackingField,
             __this);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Action_bool_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Action_bool_string_ctor);
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownProfileFetchSubscribers = __this_00;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownProfileFetchSubscribers,
             __this_00);
  __this_01 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Action_bool_string_JSONNode);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Action_bool_string_JSONNode_ctor)
  ;
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoFetchSubscribers = __this_01;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoFetchSubscribers,
             __this_01);
  TypeInfo_ApplicationManagers_AccountManager->static_fields->BaseUrl = "https://aottg2.com";
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_AccountManager->static_fields->BaseUrl,"https://aottg2.com");
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_KeepSignedIn_k__BackingField = true;
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_184341f37 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_184341f37 = '\x01';
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_176d450
            ((System_Collections_Generic_HashSet_object__o *)__this_02,
             (System_Collections_Generic_IEqualityComparer_T__o *)comparer,
             (MethodInfo_176D450 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_40e3a10);
  if (__this_02 != (System_Collections_Generic_HashSet_string__o *)0x0) {
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_02,(Il2CppObject *)"email_password"
               ,(MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_02,(Il2CppObject *)"discord"
               ,(MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    System_Collections_Generic_HashSet_object___Add
              ((System_Collections_Generic_HashSet_object__o *)__this_02,(Il2CppObject *)"google"
               ,(MethodInfo_1757CE0 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
    TypeInfo_ApplicationManagers_AccountManager->static_fields->_enabledAuthMethods = __this_02;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_ApplicationManagers_AccountManager->static_fields->_enabledAuthMethods,__this_02);
    return;
  }
  ThrowNullReferenceException();
}


