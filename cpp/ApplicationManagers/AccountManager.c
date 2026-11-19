// Type: ApplicationManagers.AccountManager
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/ApplicationManagers/AccountManager.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.AccountManager.<>c$$.cctor
// il2cpp: void ApplicationManagers_AccountManager___c___cctor (const MethodInfo* method);
// 0x5e034a0

void ApplicationManagers_AccountManager___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_075483ac == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager_c);
    Il2CppMethodInitialized_075483ac = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_ApplicationManagers_AccountManager_c->static_fields->__9 =
       (ApplicationManagers_AccountManager___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_ApplicationManagers_AccountManager_c->static_fields->__9);
  return;
}


// ApplicationManagers.AccountManager.<>c$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c___ctor (ApplicationManagers_AccountManager___c_o* __this, const MethodInfo* method);
// 0x5e03510

void ApplicationManagers_AccountManager___c___ctor
               (ApplicationManagers_AccountManager___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c$$<Register>b__158_1
// il2cpp: void ApplicationManagers_AccountManager___c___Register_b__158_1 (ApplicationManagers_AccountManager___c_o* __this, System_String_o* t, const MethodInfo* method);
// 0x5e03520
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e03543: cmp byte ptr [rip + 0x1744e7f], 0

void ApplicationManagers_AccountManager___c___Register_b__158_1
               (ApplicationManagers_AccountManager___c_o *__this,System_String_o *t,MethodInfo *method)

{
  uint32_t uVar1;
  ApplicationManagers_AccountManager_StaticFields *pAVar2;
  
  if (Il2CppMethodInitialized_075483ad == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483ad = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_075483c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483c9 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar2->_PendingVerifyToken_k__BackingField = t;
  Il2CppCodeGenWriteBarrier(&pAVar2->_PendingVerifyToken_k__BackingField);
  return;
}


// ApplicationManagers.AccountManager.<>c$$<Refresh>b__160_0
// il2cpp: void ApplicationManagers_AccountManager___c___Refresh_b__160_0 (ApplicationManagers_AccountManager___c_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x5e035e0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e03611: cmp byte ptr [rip + 0x1744db3], 0

void ApplicationManagers_AccountManager___c___Refresh_b__160_0
               (ApplicationManagers_AccountManager___c_o *__this,bool success,System_String_o *error,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint32_t uVar2;
  int32_t length;
  ApplicationManagers_AccountManager_StaticFields *pAVar3;
  System_Collections_Generic_List_Action_bool__string___o *pSVar4;
  Il2CppObject *pIVar5;
  uint uVar6;
  System_Object_array *pSVar7;
  uint uVar8;
  
  if (Il2CppMethodInitialized_075483ae == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_bool_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_bool_string_ToArray);
    Il2CppMethodInitialized_075483ae = '\x01';
    uVar2 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_075483cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483cb = '\x01';
    uVar2 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar3 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar3->_IsRefreshInProgress_k__BackingField = false;
  pSVar4 = pAVar3->_pendingRefreshCallbacks;
  if (pSVar4 != (System_Collections_Generic_List_Action_bool__string___o *)0x0) {
    pSVar7 = System_Collections_Generic_List_object___ToArray
                       ((System_Collections_Generic_List_object__o *)pSVar4,
                        (MethodInfo_395F5A0 *)
                        MethodInfo_System_Collections_Generic_List_Action_bool_string_ToArray);
    pSVar4 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_pendingRefreshCallbacks;
    if (pSVar4 != (System_Collections_Generic_List_Action_bool__string___o *)0x0) {
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar4->fields)._size;
      (pSVar4->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,length,(MethodInfo *)0x0);
      }
      if (pSVar7 != (System_Object_array *)0x0) {
        uVar6 = (uint)pSVar7->max_length;
        if (0 < (int)uVar6) {
          uVar8 = 0;
          do {
            if (uVar6 <= uVar8) {
              ThrowIndexOutOfRangeException();
            }
            pIVar5 = pSVar7->m_Items[(int)uVar8];
            if (pIVar5 == (Il2CppObject *)0x0) goto label_05e03772;
            (*pIVar5[1].monitor)(pIVar5[4].klass,success,error,pIVar5[2].monitor);
            uVar8 = uVar8 + 1;
            uVar6 = (uint)pSVar7->max_length;
          } while ((int)uVar8 < (int)uVar6);
        }
        return;
      }
    }
  }
label_05e03772:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager.<>c__DisplayClass10_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass10_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass10_0_o* __this, const MethodInfo* method);
// 0x5e03780

void ApplicationManagers_AccountManager___c__DisplayClass10_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass10_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass10_0$$<ExchangeOAuthCode>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass10_0___ExchangeOAuthCode_b__0 (ApplicationManagers_AccountManager___c__DisplayClass10_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, const MethodInfo* method);
// 0x5e03790

void ApplicationManagers_AccountManager___c__DisplayClass10_0___ExchangeOAuthCode_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass10_0_o *__this,
               ApplicationManagers_Api_AottgApiResult_o *r,MethodInfo *method)

{
  (__this->fields).result = r;
  Il2CppCodeGenWriteBarrier(&(__this->fields).result);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass158_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass158_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass158_0_o* __this, const MethodInfo* method);
// 0x5e00510

void ApplicationManagers_AccountManager___c__DisplayClass158_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass158_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass158_0$$<Register>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass158_0___Register_b__0 (ApplicationManagers_AccountManager___c__DisplayClass158_0_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x5e037a0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e037b5: test bpl, bpl
// asm:   0x5e037b8: je 0x5e037f9
// asm:   0x5e0380d: cmp byte ptr [rip + 0x1744bb6], 0
// asm:   0x5e03814: je 0x5e03877

void ApplicationManagers_AccountManager___c__DisplayClass158_0___Register_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass158_0_o *__this,bool success,
               System_String_o *error,MethodInfo *method)

{
  uint32_t uVar1;
  System_Action_bool__string__o *pSVar2;
  code *UNRECOVERED_JUMPTABLE_00;
  ApplicationManagers_AccountManager_StaticFields *pAVar3;
  
  if (Il2CppMethodInitialized_075483af == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483af = '\x01';
  }
  if (success) {
    pSVar2 = (__this->fields).onComplete;
    if (pSVar2 == (System_Action_bool__string__o *)0x0) {
      return;
    }
    UNRECOVERED_JUMPTABLE_00 = (code *)(pSVar2->fields).invoke_impl;
    (*UNRECOVERED_JUMPTABLE_00)
              ((pSVar2->fields).method_code,1,0,(pSVar2->fields).method,UNRECOVERED_JUMPTABLE_00);
    return;
  }
  if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_075483ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483ca = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar3 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar3->_PendingEmail_k__BackingField = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pAVar3->_PendingEmail_k__BackingField);
  pSVar2 = (__this->fields).onComplete;
  if (pSVar2 == (System_Action_bool__string__o *)0x0) {
    return;
  }
  UNRECOVERED_JUMPTABLE_00 = (code *)(pSVar2->fields).invoke_impl;
  (*UNRECOVERED_JUMPTABLE_00)
            ((pSVar2->fields).method_code,0,error,(pSVar2->fields).method,UNRECOVERED_JUMPTABLE_00);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass165_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass165_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass165_0_o* __this, const MethodInfo* method);
// 0x5e01400

void ApplicationManagers_AccountManager___c__DisplayClass165_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass165_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass165_0$$<VerifyEmail>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass165_0___VerifyEmail_b__0 (ApplicationManagers_AccountManager___c__DisplayClass165_0_o* __this, bool success, System_String_o* error, const MethodInfo* method);
// 0x5e038b0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e038c8: test bpl, bpl
// asm:   0x5e038cb: jne 0x5e03912

void ApplicationManagers_AccountManager___c__DisplayClass165_0___VerifyEmail_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass165_0_o *__this,bool success,
               System_String_o *error,MethodInfo *method)

{
  uint32_t uVar1;
  System_Action_bool__string__o *pSVar2;
  code *vtableDispatch;
  ApplicationManagers_AccountManager_StaticFields *pAVar3;
  
  if (Il2CppMethodInitialized_075483b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483b0 = '\x01';
  }
  if (!success) {
    pSVar2 = (__this->fields).onComplete;
    goto joined_r0x05e03961;
  }
  if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (Il2CppMethodInitialized_075483c9 == '\0') goto label_05e03980;
label_05e0392e:
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_075483c9 != '\0') goto label_05e0392e;
label_05e03980:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483c9 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar3 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar3->_PendingVerifyToken_k__BackingField = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pAVar3->_PendingVerifyToken_k__BackingField);
  pSVar2 = (__this->fields).onComplete;
joined_r0x05e03961:
  if (pSVar2 == (System_Action_bool__string__o *)0x0) {
    return;
  }
  vtableDispatch = (code *)(pSVar2->fields).invoke_impl;
  (*vtableDispatch)
            ((pSVar2->fields).method_code,success,error,(pSVar2->fields).method,vtableDispatch);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass168_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass168_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass168_0_o* __this, const MethodInfo* method);
// 0x5e039b0

void ApplicationManagers_AccountManager___c__DisplayClass168_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass168_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass168_0$$<GetAuthMethods>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass168_0___GetAuthMethods_b__0 (ApplicationManagers_AccountManager___c__DisplayClass168_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, const MethodInfo* method);
// 0x5e039c0

void ApplicationManagers_AccountManager___c__DisplayClass168_0___GetAuthMethods_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass168_0_o *__this,
               ApplicationManagers_Api_AottgApiResult_o *r,MethodInfo *method)

{
  (__this->fields).result = r;
  Il2CppCodeGenWriteBarrier(&(__this->fields).result);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass169_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass169_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass169_0_o* __this, const MethodInfo* method);
// 0x5e039d0

void ApplicationManagers_AccountManager___c__DisplayClass169_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass169_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass169_0$$<SendApiGet>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass169_0___SendApiGet_b__0 (ApplicationManagers_AccountManager___c__DisplayClass169_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* result, const MethodInfo* method);
// 0x5e039e0

void ApplicationManagers_AccountManager___c__DisplayClass169_0___SendApiGet_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass169_0_o *__this,
               ApplicationManagers_Api_AottgApiResult_o *result,MethodInfo *method)

{
  System_Action_AottgApiResult__o *pSVar1;
  code *vtableDispatch;
  
  (__this->fields).done = true;
  pSVar1 = (__this->fields).onComplete;
  if (pSVar1 == (System_Action_AottgApiResult__o *)0x0) {
    return;
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)((pSVar1->fields).method_code,result,(pSVar1->fields).method,vtableDispatch);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass171_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass171_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass171_0_o* __this, const MethodInfo* method);
// 0x5e03a00

void ApplicationManagers_AccountManager___c__DisplayClass171_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass171_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass171_0$$<SendApiJson>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass171_0___SendApiJson_b__0 (ApplicationManagers_AccountManager___c__DisplayClass171_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* result, const MethodInfo* method);
// 0x5e03a10

void ApplicationManagers_AccountManager___c__DisplayClass171_0___SendApiJson_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass171_0_o *__this,
               ApplicationManagers_Api_AottgApiResult_o *result,MethodInfo *method)

{
  System_Action_AottgApiResult__o *pSVar1;
  code *vtableDispatch;
  
  (__this->fields).done = true;
  pSVar1 = (__this->fields).onComplete;
  if (pSVar1 == (System_Action_AottgApiResult__o *)0x0) {
    return;
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)((pSVar1->fields).method_code,result,(pSVar1->fields).method,vtableDispatch);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass175_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass175_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass175_0_o* __this, const MethodInfo* method);
// 0x5e03a30

void ApplicationManagers_AccountManager___c__DisplayClass175_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass175_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass175_0$$<DeleteJson>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass175_0___DeleteJson_b__0 (ApplicationManagers_AccountManager___c__DisplayClass175_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, const MethodInfo* method);
// 0x5e03a40

void ApplicationManagers_AccountManager___c__DisplayClass175_0___DeleteJson_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass175_0_o *__this,
               ApplicationManagers_Api_AottgApiResult_o *r,MethodInfo *method)

{
  (__this->fields).result = r;
  Il2CppCodeGenWriteBarrier(&(__this->fields).result);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass176_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass176_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass176_0_o* __this, const MethodInfo* method);
// 0x5e03a50

void ApplicationManagers_AccountManager___c__DisplayClass176_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass176_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass176_0$$<PostJson>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass176_0___PostJson_b__0 (ApplicationManagers_AccountManager___c__DisplayClass176_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, const MethodInfo* method);
// 0x5e03a60

void ApplicationManagers_AccountManager___c__DisplayClass176_0___PostJson_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass176_0_o *__this,
               ApplicationManagers_Api_AottgApiResult_o *r,MethodInfo *method)

{
  (__this->fields).result = r;
  Il2CppCodeGenWriteBarrier(&(__this->fields).result);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass50_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass50_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass50_0_o* __this, const MethodInfo* method);
// 0x5e03a70

void ApplicationManagers_AccountManager___c__DisplayClass50_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass50_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass50_0$$<GetProfileJson>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass50_0___GetProfileJson_b__0 (ApplicationManagers_AccountManager___c__DisplayClass50_0_o* __this, bool success, System_String_o* error, SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x5e03a80
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e03a9b: test bpl, bpl
// asm:   0x5e03a9e: jne 0x5e03ae1

void ApplicationManagers_AccountManager___c__DisplayClass50_0___GetProfileJson_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass50_0_o *__this,bool success,
               System_String_o *error,SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  System_Action_bool__string__o *pSVar1;
  code *vtableDispatch;
  undefined7 in_register_00000031;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)CONCAT71(in_register_00000031,success);
  if (Il2CppMethodInitialized_075483b1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483b1 = '\x01';
  }
  if (success) {
    if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    ApplicationManagers_AccountManager__ApplyProfileResponse(node,method_00);
    pSVar1 = (__this->fields).onComplete;
  }
  else {
    pSVar1 = (__this->fields).onComplete;
  }
  if (pSVar1 == (System_Action_bool__string__o *)0x0) {
    return;
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)
            ((pSVar1->fields).method_code,success,error,(pSVar1->fields).method,vtableDispatch);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass51_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass51_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass51_0_o* __this, const MethodInfo* method);
// 0x5e03b20

void ApplicationManagers_AccountManager___c__DisplayClass51_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass51_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass51_0$$<PatchProfileJson>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass51_0___PatchProfileJson_b__0 (ApplicationManagers_AccountManager___c__DisplayClass51_0_o* __this, bool success, System_String_o* error, SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x5e03b30
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e03b4b: test bpl, bpl
// asm:   0x5e03b4e: jne 0x5e03b91

void ApplicationManagers_AccountManager___c__DisplayClass51_0___PatchProfileJson_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass51_0_o *__this,bool success,
               System_String_o *error,SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  System_Action_bool__string__o *pSVar1;
  code *vtableDispatch;
  undefined7 in_register_00000031;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)CONCAT71(in_register_00000031,success);
  if (Il2CppMethodInitialized_075483b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483b2 = '\x01';
  }
  if (success) {
    if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    ApplicationManagers_AccountManager__ApplyProfileResponse(node,method_00);
    ApplicationManagers_AccountManager__MarkOwnProfileCacheFresh((MethodInfo *)node);
    pSVar1 = (__this->fields).onComplete;
  }
  else {
    pSVar1 = (__this->fields).onComplete;
  }
  if (pSVar1 == (System_Action_bool__string__o *)0x0) {
    return;
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)
            ((pSVar1->fields).method_code,success,error,(pSVar1->fields).method,vtableDispatch);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass52_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass52_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass52_0_o* __this, const MethodInfo* method);
// 0x5e03bd0

void ApplicationManagers_AccountManager___c__DisplayClass52_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass52_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass52_0$$<GetCharacterInfoJson>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass52_0___GetCharacterInfoJson_b__0 (ApplicationManagers_AccountManager___c__DisplayClass52_0_o* __this, bool success, System_String_o* error, SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x5e03be0

void ApplicationManagers_AccountManager___c__DisplayClass52_0___GetCharacterInfoJson_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass52_0_o *__this,bool success,
               System_String_o *error,SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  System_Action_bool__string__JSONNode__o *pSVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  
  if (Il2CppMethodInitialized_075483b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"characterInfo");
    Il2CppMethodInitialized_075483b3 = '\x01';
  }
  pSVar1 = (__this->fields).onComplete;
  if (pSVar1 == (System_Action_bool__string__JSONNode__o *)0x0) {
    return;
  }
  if (success) {
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    pSVar3 = (SimpleJSONFixed_JSONNode_o *)0x0;
    bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar2) {
      if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
        ThrowNullReferenceException();
      }
      pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,"characterInfo",(node->klass->vtable)._7_get_Item.method);
    }
  }
  else {
    pSVar3 = (SimpleJSONFixed_JSONNode_o *)0x0;
  }
  (*(code *)(pSVar1->fields).invoke_impl)
            ((pSVar1->fields).method_code,success,error,pSVar3,(pSVar1->fields).method);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass53_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass53_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass53_0_o* __this, const MethodInfo* method);
// 0x5e03cb0

void ApplicationManagers_AccountManager___c__DisplayClass53_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass53_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass53_0$$<PutCharacterInfoJson>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass53_0___PutCharacterInfoJson_b__0 (ApplicationManagers_AccountManager___c__DisplayClass53_0_o* __this, bool success, System_String_o* error, SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x5e03cc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e03dc1: jmp 0x5e03e0e

void ApplicationManagers_AccountManager___c__DisplayClass53_0___PutCharacterInfoJson_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass53_0_o *__this,bool success,
               System_String_o *error,SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  uint32_t uVar1;
  code *vtableDispatch;
  System_Action_bool__string__JSONNode__o *pSVar2;
  bool bVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075483b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"characterInfo");
    Il2CppMethodInitialized_075483b4 = '\x01';
  }
  if (!success) {
    pSVar4 = (__this->fields).fallbackCharacterInfo;
    pSVar2 = (__this->fields).onComplete;
    goto joined_r0x05e03dce;
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  method_00 = (MethodInfo *)0x0;
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar4 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                       (node,"characterInfo",(node->klass->vtable)._7_get_Item.method);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    method_00 = (MethodInfo *)0x0;
    bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar4,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (!bVar3) goto label_05e03df7;
    method_00 = (MethodInfo *)"characterInfo";
    pSVar4 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                       (node,"characterInfo",(node->klass->vtable)._7_get_Item.method);
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
label_05e03df7:
    pSVar4 = (__this->fields).fallbackCharacterInfo;
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  ApplicationManagers_AccountManager__MarkCharacterInfoCacheFresh(pSVar4,method_00);
  pSVar2 = (__this->fields).onComplete;
joined_r0x05e03dce:
  if (pSVar2 == (System_Action_bool__string__JSONNode__o *)0x0) {
    return;
  }
  vtableDispatch = (code *)(pSVar2->fields).invoke_impl;
  (*vtableDispatch)
            ((pSVar2->fields).method_code,success,error,pSVar4,(pSVar2->fields).method,vtableDispatch);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass54_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass54_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass54_0_o* __this, const MethodInfo* method);
// 0x5e03e40

void ApplicationManagers_AccountManager___c__DisplayClass54_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass54_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass54_0$$<SendMeJson>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass54_0___SendMeJson_b__0 (ApplicationManagers_AccountManager___c__DisplayClass54_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, const MethodInfo* method);
// 0x5e03e50

void ApplicationManagers_AccountManager___c__DisplayClass54_0___SendMeJson_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass54_0_o *__this,
               ApplicationManagers_Api_AottgApiResult_o *r,MethodInfo *method)

{
  (__this->fields).result = r;
  Il2CppCodeGenWriteBarrier(&(__this->fields).result);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass55_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass55_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass55_0_o* __this, const MethodInfo* method);
// 0x5e03e60

void ApplicationManagers_AccountManager___c__DisplayClass55_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass55_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass55_0$$<SendMeReadJson>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass55_0___SendMeReadJson_b__0 (ApplicationManagers_AccountManager___c__DisplayClass55_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, const MethodInfo* method);
// 0x5e03e70

void ApplicationManagers_AccountManager___c__DisplayClass55_0___SendMeReadJson_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass55_0_o *__this,
               ApplicationManagers_Api_AottgApiResult_o *r,MethodInfo *method)

{
  (__this->fields).result = r;
  Il2CppCodeGenWriteBarrier(&(__this->fields).result);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass8_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass8_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass8_0_o* __this, const MethodInfo* method);
// 0x5e03e80

void ApplicationManagers_AccountManager___c__DisplayClass8_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass8_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass8_0$$<OAuthFlow>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass8_0___OAuthFlow_b__0 (ApplicationManagers_AccountManager___c__DisplayClass8_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, const MethodInfo* method);
// 0x5e03e90

void ApplicationManagers_AccountManager___c__DisplayClass8_0___OAuthFlow_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass8_0_o *__this,
               ApplicationManagers_Api_AottgApiResult_o *r,MethodInfo *method)

{
  (__this->fields).result = r;
  Il2CppCodeGenWriteBarrier(&(__this->fields).result);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass9_0$$.ctor
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass9_0___ctor (ApplicationManagers_AccountManager___c__DisplayClass9_0_o* __this, const MethodInfo* method);
// 0x5e03ea0

void ApplicationManagers_AccountManager___c__DisplayClass9_0___ctor
               (ApplicationManagers_AccountManager___c__DisplayClass9_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<>c__DisplayClass9_0$$<PollUnityOAuth>b__0
// il2cpp: void ApplicationManagers_AccountManager___c__DisplayClass9_0___PollUnityOAuth_b__0 (ApplicationManagers_AccountManager___c__DisplayClass9_0_o* __this, ApplicationManagers_Api_AottgApiResult_o* r, const MethodInfo* method);
// 0x5e03eb0

void ApplicationManagers_AccountManager___c__DisplayClass9_0___PollUnityOAuth_b__0
               (ApplicationManagers_AccountManager___c__DisplayClass9_0_o *__this,
               ApplicationManagers_Api_AottgApiResult_o *r,MethodInfo *method)

{
  (__this->fields).result = r;
  Il2CppCodeGenWriteBarrier(&(__this->fields).result);
  return;
}


// ApplicationManagers.AccountManager.<DeleteJson>d__175$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__DeleteJson_d__175___ctor (ApplicationManagers_AccountManager__DeleteJson_d__175_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5e01eb0

void ApplicationManagers_AccountManager__DeleteJson_d__175___ctor
               (ApplicationManagers_AccountManager__DeleteJson_d__175_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<DeleteJson>d__175$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__DeleteJson_d__175__System_IDisposable_Dispose (ApplicationManagers_AccountManager__DeleteJson_d__175_o* __this, const MethodInfo* method);
// 0x5e03ec0

void ApplicationManagers_AccountManager__DeleteJson_d__175__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__DeleteJson_d__175_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<DeleteJson>d__175$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__DeleteJson_d__175__MoveNext (ApplicationManagers_AccountManager__DeleteJson_d__175_o* __this, const MethodInfo* method);
// 0x5e03ed0

bool ApplicationManagers_AccountManager__DeleteJson_d__175__MoveNext
               (ApplicationManagers_AccountManager__DeleteJson_d__175_o *__this,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_Api_AottgApiResult_o *pAVar2;
  ApplicationManagers_AccountManager_o *__this_00;
  System_String_o *bearer;
  ApplicationManagers_AccountManager___c__DisplayClass175_0_o *pAVar3;
  System_Action_AottgApiResult__o *__this_01;
  Il2CppObject *pIVar4;
  System_Action_bool__string__o *pSVar5;
  System_String_o **ppSVar6;
  intptr_t iVar7;
  System_String_o *pSVar8;
  undefined8 uVar9;
  intptr_t iVar10;
  MethodInfo *methodInfo;
  
  if (Il2CppMethodInitialized_075483b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgApiResult);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass175_0_DeleteJson_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass175_0);
    il2cpp_codegen_initialize_runtime_metadata(&"unknown_error");
    il2cpp_codegen_initialize_runtime_metadata(&"DELETE");
    Il2CppMethodInitialized_075483b5 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    pAVar3 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass175_0);
    System_Object___ctor((Il2CppObject *)pAVar3,(MethodInfo *)0x0);
    (__this->fields).__8__1 = pAVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__8__1);
    pAVar3 = (__this->fields).__8__1;
    if (pAVar3 != (ApplicationManagers_AccountManager___c__DisplayClass175_0_o *)0x0) {
      (pAVar3->fields).result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(pAVar3->fields).result);
      pSVar8 = (__this->fields).path;
      bearer = (__this->fields).bearer;
      pAVar3 = (__this->fields).__8__1;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgApiResult);
      methodInfo = (MethodInfo *)0x5e04019;
      System_Action_object____ctor
                ((System_Action_object__o *)__this_01,(Il2CppObject *)pAVar3,
                 (intptr_t)MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass175_0_DeleteJson_b__0,
                 (MethodInfo_4A81BE0 *)0x0);
      if (__this_00 != (ApplicationManagers_AccountManager_o *)0x0) {
        pIVar4 = (Il2CppObject *)
                 ApplicationManagers_AccountManager__SendApiJson
                           (__this_00,"DELETE",pSVar8,(System_String_o *)0x0,bearer,false,
                            __this_01,true,(System_Nullable_int__o)0x0,methodInfo);
        (__this->fields).__2__current = pIVar4;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
        (__this->fields).__1__state = 1;
        goto label_05e04092;
      }
    }
label_05e040a7:
    ThrowNullReferenceException();
  }
  if (iVar1 != 1) goto label_05e04092;
  (__this->fields).__1__state = -1;
  pAVar3 = (__this->fields).__8__1;
  if (pAVar3 == (ApplicationManagers_AccountManager___c__DisplayClass175_0_o *)0x0) goto label_05e040a7;
  pAVar2 = (pAVar3->fields).result;
  if (pAVar2 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
    pSVar5 = (__this->fields).onComplete;
    if (pSVar5 == (System_Action_bool__string__o *)0x0) goto label_05e04092;
    ppSVar6 = &"unknown_error";
label_05e04082:
    pSVar8 = *ppSVar6;
    iVar7 = (pSVar5->fields).method;
    iVar10 = (pSVar5->fields).method_code;
    uVar9 = 0;
  }
  else {
    pSVar5 = (__this->fields).onComplete;
    if ((pAVar2->fields)._Success_k__BackingField == false) {
      if (pSVar5 == (System_Action_bool__string__o *)0x0) goto label_05e04092;
      ppSVar6 = &(pAVar2->fields)._Error_k__BackingField;
      goto label_05e04082;
    }
    if (pSVar5 == (System_Action_bool__string__o *)0x0) goto label_05e04092;
    iVar7 = (pSVar5->fields).method;
    iVar10 = (pSVar5->fields).method_code;
    uVar9 = 1;
    pSVar8 = (System_String_o *)0x0;
  }
  (*(code *)(pSVar5->fields).invoke_impl)(iVar10,uVar9,pSVar8,iVar7);
label_05e04092:
  return iVar1 == 0;
}


// ApplicationManagers.AccountManager.<DeleteJson>d__175$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__DeleteJson_d__175__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__DeleteJson_d__175_o* __this, const MethodInfo* method);
// 0x5e040b0

Il2CppObject *
ApplicationManagers_AccountManager__DeleteJson_d__175__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_AccountManager__DeleteJson_d__175_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<DeleteJson>d__175$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__DeleteJson_d__175__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__DeleteJson_d__175_o* __this, const MethodInfo* method);
// 0x5e040c0

void ApplicationManagers_AccountManager__DeleteJson_d__175__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__DeleteJson_d__175_o *__this,MethodInfo *method)

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
                  MethodInfo_ApplicationManagers_AccountManager_DeleteJson_d__175_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// ApplicationManagers.AccountManager.<DeleteJson>d__175$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__DeleteJson_d__175__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__DeleteJson_d__175_o* __this, const MethodInfo* method);
// 0x5e04100

Il2CppObject *
ApplicationManagers_AccountManager__DeleteJson_d__175__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__DeleteJson_d__175_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<ExchangeOAuthCode>d__10$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10___ctor (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5df9aa0

void ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10___ctor
               (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<ExchangeOAuthCode>d__10$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10__System_IDisposable_Dispose (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o* __this, const MethodInfo* method);
// 0x5e04110

void ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<ExchangeOAuthCode>d__10$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10__MoveNext (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o* __this, const MethodInfo* method);
// 0x5e04120
// eh: try 0x5e04248..0x5e04476 -> pad 0x5e0447a (+2 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5e04491..0x5e04571 -> pad 0x5e04576 (+1 call sites) cleanup
// eh: try 0x5e04579..0x5e0457e -> pad 0x5e04586 catch (...) [compiler noexcept guard]
// asm: 67 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e04476: jmp 0x5e0447a
// asm:   0x5e04478: jmp 0x5e0447a
// asm:   0x5e0447a: mov rbx, rax
// asm:   0x5e0447d: cmp edx, 1
// asm:   0x5e04480: jne 0x5e0457e
// asm:   0x5e04486: mov rdi, rbx
// asm:   0x5e04489: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e0448e: mov rbx, rax
// asm:   0x5e04491: lea rdi, [rip + 0x1473c28]  ; TypeInfo_System_Exception
// asm:   0x5e04498: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e0449d: mov rcx, qword ptr [rbx]
// asm:   0x5e044a0: mov rsi, qword ptr [rcx]
// asm:   0x5e044a3: mov rdi, rax
// asm:   0x5e044a6: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5e044ab: test al, al
// asm:   0x5e044ad: je 0x5e04550
// asm:   0x5e044b3: mov rbx, qword ptr [rbx]
// asm:   0x5e044b6: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e044bb: test rbx, rbx
// asm:   0x5e044be: je 0x5e04571
// asm:   0x5e044c4: mov rax, qword ptr [rbx]
// asm:   0x5e044c7: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5e044ce: mov rdi, rbx
// asm:   0x5e044d1: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5e044d7: mov rbx, rax
// asm:   0x5e044da: lea rdi, [rip + 0x14cec9f]  ; "AccountManager: failed to apply OAuth session response: "
// asm:   0x5e044e1: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e044e6: mov rdi, rax
// asm:   0x5e044e9: mov rsi, rbx
// asm:   0x5e044ec: xor edx, edx
// asm:   0x5e044ee: call 0x53f0320  ; System_String__Concat()
// asm:   0x5e044f3: mov rbx, rax
// asm:   0x5e044f6: lea rdi, [rip + 0x147314b]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5e044fd: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e04502: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5e04509: jne 0x5e04513
// asm:   0x5e0450b: mov rdi, rax
// asm:   0x5e0450e: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5e04513: mov rdi, rbx
// asm:   0x5e04516: xor esi, esi
// asm:   0x5e04518: call 0x69c4c70  ; UnityEngine_Debug__LogError()
// asm:   0x5e0451d: lea rdi, [rip + 0x1470aac]  ; TypeInfo_ApplicationManagers_AccountManager
// asm:   0x5e04524: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e04529: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5e04530: jne 0x5e0453a
// asm:   0x5e04532: mov rdi, rax
// asm:   0x5e04535: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5e0453a: lea rdi, [rip + 0x14ee887]  ; "bad_response"
// asm:   0x5e04541: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e04546: xor edi, edi
// asm:   0x5e04548: mov rsi, rax
// asm:   0x5e0454b: jmp 0x5e043fd
// asm:   0x5e04550: mov edi, 8
// asm:   0x5e04555: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5e0455a: mov rcx, qword ptr [rbx]
// asm:   0x5e0455d: mov qword ptr [rax], rcx
// asm:   0x5e04560: lea rsi, [rip + 0x1028f99]
// asm:   0x5e04567: mov rdi, rax
// asm:   0x5e0456a: xor edx, edx
// asm:   0x5e0456c: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5e04571: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x5e04576: mov rbx, rax
// asm:   0x5e04579: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e0457e: mov rdi, rbx
// asm:   0x5e04581: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e04586: mov rdi, rax
// asm:   0x5e04589: call 0x2ab61e0  ; __clang_call_terminate()

bool ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10__MoveNext
               (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o *__this,MethodInfo *method)

{
  int iVar1;
  uint32_t uVar2;
  ApplicationManagers_Api_AottgApiResult_o *pAVar3;
  ApplicationManagers_AccountManager_o *__this_00;
  ApplicationManagers_AccountManager_c *klass;
  ApplicationManagers_AccountManager___c__DisplayClass10_0_o *pAVar4;
  System_String_o *pSVar5;
  System_String_o *str2;
  System_Action_AottgApiResult__o *__this_01;
  Il2CppObject *pIVar6;
  System_String_o **ppSVar7;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  bool bVar8;
  MethodInfo *methodInfo;
  System_Nullable_int__Fields SStack_38;
  
  if (Il2CppMethodInitialized_075483b6 == '\0') {
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
    Il2CppMethodInitialized_075483b6 = '\x01';
    in_RDX = extraout_RDX;
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    pAVar4 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass10_0);
    System_Object___ctor((Il2CppObject *)pAVar4,(MethodInfo *)0x0);
    (__this->fields).__8__1 = pAVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__8__1);
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pSVar5 = TypeInfo_ApplicationManagers_AccountManager->static_fields->BaseUrl;
    if (pSVar5 == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar5 = System_String__TrimEnd_53071b0(pSVar5,0x2f,(MethodInfo *)0x0);
    str2 = UnityEngine_Networking_UnityWebRequest__EscapeURL((__this->fields).code,(MethodInfo *)0x0);
    pSVar5 = System_String__Concat_5301f10(pSVar5,"/v1/auth/oauth/session?code=",str2,(MethodInfo *)0x0);
    pAVar4 = (__this->fields).__8__1;
    if (pAVar4 == (ApplicationManagers_AccountManager___c__DisplayClass10_0_o *)0x0) {
      ThrowNullReferenceException();
    }
    (pAVar4->fields).result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(pAVar4->fields).result);
    pAVar4 = (__this->fields).__8__1;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgApiResult);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_01,(Il2CppObject *)pAVar4,
               (intptr_t)
               MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass10_0_ExchangeOAuthCode_b__0,
               (MethodInfo_4A81BE0 *)0x0);
    bVar8 = (__this->fields).reportNetworkError;
    SStack_38.hasValue = false;
    SStack_38._1_3_ = 0;
    SStack_38.value = 0;
    methodInfo = (MethodInfo *)0x5e0437e;
    System_Nullable_int____ctor
              ((System_Nullable_int__o *)&SStack_38,10,
               (MethodInfo_3CD4BA0 *)MethodInfo_System_Nullable_int_ctor);
    if (__this_00 == (ApplicationManagers_AccountManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar6 = (Il2CppObject *)
             ApplicationManagers_AccountManager__SendApiJson
                       (__this_00,"GET",pSVar5,(System_String_o *)0x0,(System_String_o *)0x0,
                        false,__this_01,bVar8,(System_Nullable_int__o)SStack_38,methodInfo);
    (__this->fields).__2__current = pIVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
    goto label_05e04402;
  }
  if (iVar1 != 1) goto label_05e04402;
  (__this->fields).__1__state = -1;
  pAVar4 = (__this->fields).__8__1;
  if (pAVar4 == (ApplicationManagers_AccountManager___c__DisplayClass10_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  pAVar3 = (pAVar4->fields).result;
  if (pAVar3 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
    ppSVar7 = &"unknown_error";
label_05e043dd:
    pSVar5 = *ppSVar7;
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      in_RDX = extraout_RDX_02;
    }
    bVar8 = false;
  }
  else {
    if ((pAVar3->fields)._Success_k__BackingField == false) {
      ppSVar7 = &(pAVar3->fields)._Error_k__BackingField;
      goto label_05e043dd;
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      if (Il2CppMethodInitialized_075483c8 != '\0') goto label_05e04203;
label_05e04428:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      Il2CppMethodInitialized_075483c8 = '\x01';
      uVar2 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      if (Il2CppMethodInitialized_075483c8 == '\0') goto label_05e04428;
label_05e04203:
      uVar2 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    klass = TypeInfo_ApplicationManagers_AccountManager;
    TypeInfo_ApplicationManagers_AccountManager->static_fields->_KeepSignedIn_k__BackingField = true;
    pAVar4 = (__this->fields).__8__1;
    if (pAVar4 == (ApplicationManagers_AccountManager___c__DisplayClass10_0_o *)0x0) {
      ThrowNullReferenceException();
    }
    pAVar3 = (pAVar4->fields).result;
    if (pAVar3 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar5 = (pAVar3->fields)._ResponseText_k__BackingField;
    if ((klass->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)klass);
    }
    ApplicationManagers_AccountManager__ApplyAuthResponse(pSVar5,method);
    in_RDX = extraout_RDX_00;
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      in_RDX = extraout_RDX_01;
    }
    bVar8 = true;
    pSVar5 = (System_String_o *)0x0;
  }
  ApplicationManagers_AccountManager__CompleteOAuth(bVar8,pSVar5,in_RDX);
label_05e04402:
  return iVar1 == 0;
}


// ApplicationManagers.AccountManager.<ExchangeOAuthCode>d__10$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o* __this, const MethodInfo* method);
// 0x5e04590

Il2CppObject *
ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<ExchangeOAuthCode>d__10$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o* __this, const MethodInfo* method);
// 0x5e045a0

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
// 0x5e045e0

Il2CppObject *
ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<GetAuthMethods>d__168$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__GetAuthMethods_d__168___ctor (ApplicationManagers_AccountManager__GetAuthMethods_d__168_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5e01820

void ApplicationManagers_AccountManager__GetAuthMethods_d__168___ctor
               (ApplicationManagers_AccountManager__GetAuthMethods_d__168_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<GetAuthMethods>d__168$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__GetAuthMethods_d__168__System_IDisposable_Dispose (ApplicationManagers_AccountManager__GetAuthMethods_d__168_o* __this, const MethodInfo* method);
// 0x5e045f0

void ApplicationManagers_AccountManager__GetAuthMethods_d__168__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__GetAuthMethods_d__168_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<GetAuthMethods>d__168$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__GetAuthMethods_d__168__MoveNext (ApplicationManagers_AccountManager__GetAuthMethods_d__168_o* __this, const MethodInfo* method);
// 0x5e04600
// eh: try 0x5e046bb..0x5e046c8 -> pad 0x5e04820 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5e04839..0x5e04919 -> pad 0x5e04919 (+1 call sites) cleanup
// eh: try 0x5e0491c..0x5e04921 -> pad 0x5e04929 catch (...) [compiler noexcept guard]
// asm: 65 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e04820: jmp 0x5e04822
// asm:   0x5e04822: mov r14, rax
// asm:   0x5e04825: cmp edx, 1
// asm:   0x5e04828: jne 0x5e04921
// asm:   0x5e0482e: mov rdi, r14
// asm:   0x5e04831: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e04836: mov r14, rax
// asm:   0x5e04839: lea rdi, [rip + 0x1473880]  ; TypeInfo_System_Exception
// asm:   0x5e04840: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e04845: mov rcx, qword ptr [r14]
// asm:   0x5e04848: mov rsi, qword ptr [rcx]
// asm:   0x5e0484b: mov rdi, rax
// asm:   0x5e0484e: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5e04853: test al, al
// asm:   0x5e04855: je 0x5e048f8
// asm:   0x5e0485b: mov rbx, qword ptr [r14]
// asm:   0x5e0485e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e04863: test rbx, rbx
// asm:   0x5e04866: je 0x5e048f3
// asm:   0x5e0486c: mov rax, qword ptr [rbx]
// asm:   0x5e0486f: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5e04876: mov rdi, rbx
// asm:   0x5e04879: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5e0487f: mov rbx, rax
// asm:   0x5e04882: lea rdi, [rip + 0x14ce907]  ; "AccountManager: failed to parse auth methods response: "
// asm:   0x5e04889: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e0488e: mov rdi, rax
// asm:   0x5e04891: mov rsi, rbx
// asm:   0x5e04894: xor edx, edx
// asm:   0x5e04896: call 0x53f0320  ; System_String__Concat()
// asm:   0x5e0489b: mov rbx, rax
// asm:   0x5e0489e: lea rdi, [rip + 0x1472da3]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5e048a5: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e048aa: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5e048b1: jne 0x5e048bb
// asm:   0x5e048b3: mov rdi, rax
// asm:   0x5e048b6: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5e048bb: mov rdi, rbx
// asm:   0x5e048be: xor esi, esi
// asm:   0x5e048c0: call 0x69c4c70  ; UnityEngine_Debug__LogError()
// asm:   0x5e048c5: mov rbx, qword ptr [r15 + 0x30]
// asm:   0x5e048c9: test rbx, rbx
// asm:   0x5e048cc: je 0x5e04812
// asm:   0x5e048d2: lea rdi, [rip + 0x14ee4ef]  ; "bad_response"
// asm:   0x5e048d9: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e048de: mov rcx, qword ptr [rbx + 0x28]
// asm:   0x5e048e2: mov rdi, qword ptr [rbx + 0x40]
// asm:   0x5e048e6: xor esi, esi
// asm:   0x5e048e8: mov rdx, rax
// asm:   0x5e048eb: call qword ptr [rbx + 0x18]
// asm:   0x5e048ee: jmp 0x5e04812
// asm:   0x5e048f8: mov edi, 8
// asm:   0x5e048fd: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5e04902: mov rcx, qword ptr [r14]
// asm:   0x5e04905: mov qword ptr [rax], rcx
// asm:   0x5e04908: lea rsi, [rip + 0x1028bf1]
// asm:   0x5e0490f: mov rdi, rax
// asm:   0x5e04912: xor edx, edx
// asm:   0x5e04914: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5e04919: mov r14, rax
// asm:   0x5e0491c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e04921: mov rdi, r14
// asm:   0x5e04924: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e04929: mov rdi, rax
// asm:   0x5e0492c: call 0x2ab61e0  ; __clang_call_terminate()

bool ApplicationManagers_AccountManager__GetAuthMethods_d__168__MoveNext
               (ApplicationManagers_AccountManager__GetAuthMethods_d__168_o *__this,MethodInfo *method)

{
  ApplicationManagers_AccountManager___c__DisplayClass168_0_o **targetAddress;
  int iVar1;
  ApplicationManagers_Api_AottgApiResult_o *pAVar2;
  System_Action_o *pSVar3;
  ApplicationManagers_AccountManager_o *__this_00;
  bool bVar4;
  ApplicationManagers_AccountManager___c__DisplayClass168_0_o *pAVar5;
  System_Action_AottgApiResult__o *__this_01;
  Il2CppObject *pIVar6;
  System_Action_bool__string__o *pSVar7;
  System_String_o **ppSVar8;
  intptr_t iVar9;
  System_String_o *pSVar10;
  undefined8 uVar11;
  intptr_t iVar12;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_075483b7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgApiResult);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass168_0_GetAuthMethods_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass168_0);
    il2cpp_codegen_initialize_runtime_metadata(&"unknown_error");
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/auth/methods");
    Il2CppMethodInitialized_075483b7 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    pAVar5 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass168_0);
    System_Object___ctor((Il2CppObject *)pAVar5,(MethodInfo *)0x0);
    targetAddress = &(__this->fields).__8__1;
    (__this->fields).__8__1 = pAVar5;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pAVar5 = (__this->fields).__8__1;
    if (pAVar5 != (ApplicationManagers_AccountManager___c__DisplayClass168_0_o *)0x0) {
      (pAVar5->fields).result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(pAVar5->fields).result);
      pAVar5 = *targetAddress;
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgApiResult);
      System_Action_object____ctor
                ((System_Action_object__o *)__this_01,(Il2CppObject *)pAVar5,
                 (intptr_t)
                 MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass168_0_GetAuthMethods_b__0,
                 (MethodInfo_4A81BE0 *)0x0);
      if (__this_00 != (ApplicationManagers_AccountManager_o *)0x0) {
        pIVar6 = (Il2CppObject *)
                 ApplicationManagers_AccountManager__SendApiGet
                           (__this_00,"/v1/auth/methods",(System_String_o *)0x0,false,__this_01,in_R9);
        (__this->fields).__2__current = pIVar6;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
        (__this->fields).__1__state = 1;
        goto label_05e04812;
      }
    }
label_05e048f3:
    ThrowNullReferenceException();
  }
  if (iVar1 != 1) goto label_05e04812;
  (__this->fields).__1__state = -1;
  pAVar5 = (__this->fields).__8__1;
  if (pAVar5 == (ApplicationManagers_AccountManager___c__DisplayClass168_0_o *)0x0) goto label_05e048f3;
  pAVar2 = (pAVar5->fields).result;
  if (pAVar2 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
    pSVar7 = (__this->fields).onComplete;
    if (pSVar7 == (System_Action_bool__string__o *)0x0) goto label_05e04812;
    ppSVar8 = &"unknown_error";
label_05e04802:
    pSVar10 = *ppSVar8;
    iVar9 = (pSVar7->fields).method;
    iVar12 = (pSVar7->fields).method_code;
    uVar11 = 0;
  }
  else {
    if ((pAVar2->fields)._Success_k__BackingField == false) {
      pSVar7 = (__this->fields).onComplete;
      if (pSVar7 == (System_Action_bool__string__o *)0x0) goto label_05e04812;
      ppSVar8 = &(pAVar2->fields)._Error_k__BackingField;
      goto label_05e04802;
    }
    pSVar10 = (pAVar2->fields)._ResponseText_k__BackingField;
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    bVar4 = ApplicationManagers_AccountManager__ApplyAuthMethodsResponse(pSVar10,method);
    if (bVar4) {
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      pSVar3 = TypeInfo_ApplicationManagers_AccountManager->static_fields->OnAuthMethodsChanged;
      if (pSVar3 != (System_Action_o *)0x0) {
        (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,(pSVar3->fields).method);
      }
    }
    pSVar7 = (__this->fields).onComplete;
    if (pSVar7 == (System_Action_bool__string__o *)0x0) goto label_05e04812;
    iVar9 = (pSVar7->fields).method;
    iVar12 = (pSVar7->fields).method_code;
    uVar11 = 1;
    pSVar10 = (System_String_o *)0x0;
  }
  (*(code *)(pSVar7->fields).invoke_impl)(iVar12,uVar11,pSVar10,iVar9);
label_05e04812:
  return iVar1 == 0;
}


// ApplicationManagers.AccountManager.<GetAuthMethods>d__168$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__GetAuthMethods_d__168__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__GetAuthMethods_d__168_o* __this, const MethodInfo* method);
// 0x5e04940

Il2CppObject *
ApplicationManagers_AccountManager__GetAuthMethods_d__168__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_AccountManager__GetAuthMethods_d__168_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<GetAuthMethods>d__168$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__GetAuthMethods_d__168__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__GetAuthMethods_d__168_o* __this, const MethodInfo* method);
// 0x5e04950

void ApplicationManagers_AccountManager__GetAuthMethods_d__168__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__GetAuthMethods_d__168_o *__this,MethodInfo *method)

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
                  MethodInfo_ApplicationManagers_AccountManager_GetAuthMethods_d__168_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// ApplicationManagers.AccountManager.<GetAuthMethods>d__168$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__GetAuthMethods_d__168__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__GetAuthMethods_d__168_o* __this, const MethodInfo* method);
// 0x5e04990

Il2CppObject *
ApplicationManagers_AccountManager__GetAuthMethods_d__168__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__GetAuthMethods_d__168_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<GetCharacterInfoJson>d__52$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52___ctor (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5dfbcf0

void ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52___ctor
               (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<GetCharacterInfoJson>d__52$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52__System_IDisposable_Dispose (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52_o* __this, const MethodInfo* method);
// 0x5e049a0

void ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<GetCharacterInfoJson>d__52$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52__MoveNext (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52_o* __this, const MethodInfo* method);
// 0x5e049b0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e04a21: jmp 0x5e04ad9

bool ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52__MoveNext
               (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52_o *__this,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_AccountManager_o *__this_00;
  ApplicationManagers_AccountManager___c__DisplayClass52_0_o *__this_01;
  System_Action_T1__T2__T3__o *__this_02;
  Il2CppObject *pIVar2;
  int32_t iVar3;
  MethodInfo *in_stack_ffffffffffffffc8;
  
  if (Il2CppMethodInitialized_075483b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool_string_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass52_0_GetCharacterInfoJson_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass52_0);
    il2cpp_codegen_initialize_runtime_metadata(&"GET");
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/me/character-info");
    Il2CppMethodInitialized_075483b8 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass52_0);
    System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
    if (__this_01 == (ApplicationManagers_AccountManager___c__DisplayClass52_0_o *)0x0) {
label_05e04aeb:
      ThrowNullReferenceException();
    }
    (__this_01->fields).onComplete = (__this->fields).onComplete;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).onComplete);
    __this_02 = (System_Action_T1__T2__T3__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool_string_JSONNode);
    System_Action_bool__object__object____ctor
              (__this_02,(Il2CppObject *)__this_01,
               (intptr_t)
               MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass52_0_GetCharacterInfoJson_b__0,
               (MethodInfo_4A8B090 *)0x0);
    if (__this_00 == (ApplicationManagers_AccountManager_o *)0x0) goto label_05e04aeb;
    iVar3 = 1;
    pIVar2 = (Il2CppObject *)
             ApplicationManagers_AccountManager__SendMeJson
                       (__this_00,"GET","/v1/me/character-info",(System_String_o *)0x0,
                        (System_Action_bool__string__JSONNode__o *)__this_02,true,in_stack_ffffffffffffffc8);
    (__this->fields).__2__current = pIVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
  }
  else {
    iVar3 = -1;
    if (iVar1 != 1) goto label_05e04ad9;
  }
  (__this->fields).__1__state = iVar3;
label_05e04ad9:
  return iVar1 == 0;
}


// ApplicationManagers.AccountManager.<GetCharacterInfoJson>d__52$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52_o* __this, const MethodInfo* method);
// 0x5e04af0

Il2CppObject *
ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<GetCharacterInfoJson>d__52$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52_o* __this, const MethodInfo* method);
// 0x5e04b00

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
// 0x5e04b40

Il2CppObject *
ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<GetProfileJson>d__50$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__GetProfileJson_d__50___ctor (ApplicationManagers_AccountManager__GetProfileJson_d__50_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5dfbcb0

void ApplicationManagers_AccountManager__GetProfileJson_d__50___ctor
               (ApplicationManagers_AccountManager__GetProfileJson_d__50_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<GetProfileJson>d__50$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__GetProfileJson_d__50__System_IDisposable_Dispose (ApplicationManagers_AccountManager__GetProfileJson_d__50_o* __this, const MethodInfo* method);
// 0x5e04b50

void ApplicationManagers_AccountManager__GetProfileJson_d__50__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__GetProfileJson_d__50_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<GetProfileJson>d__50$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__GetProfileJson_d__50__MoveNext (ApplicationManagers_AccountManager__GetProfileJson_d__50_o* __this, const MethodInfo* method);
// 0x5e04b60
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e04bd1: jmp 0x5e04c89

bool ApplicationManagers_AccountManager__GetProfileJson_d__50__MoveNext
               (ApplicationManagers_AccountManager__GetProfileJson_d__50_o *__this,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_AccountManager_o *__this_00;
  ApplicationManagers_AccountManager___c__DisplayClass50_0_o *__this_01;
  System_Action_T1__T2__T3__o *__this_02;
  Il2CppObject *pIVar2;
  int32_t iVar3;
  MethodInfo *in_stack_ffffffffffffffc8;
  
  if (Il2CppMethodInitialized_075483b9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool_string_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass50_0_GetProfileJson_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass50_0);
    il2cpp_codegen_initialize_runtime_metadata(&"GET");
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/me");
    Il2CppMethodInitialized_075483b9 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass50_0);
    System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
    if (__this_01 == (ApplicationManagers_AccountManager___c__DisplayClass50_0_o *)0x0) {
label_05e04c9b:
      ThrowNullReferenceException();
    }
    (__this_01->fields).onComplete = (__this->fields).onComplete;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).onComplete);
    __this_02 = (System_Action_T1__T2__T3__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool_string_JSONNode);
    System_Action_bool__object__object____ctor
              (__this_02,(Il2CppObject *)__this_01,
               (intptr_t)MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass50_0_GetProfileJson_b__0
               ,(MethodInfo_4A8B090 *)0x0);
    if (__this_00 == (ApplicationManagers_AccountManager_o *)0x0) goto label_05e04c9b;
    iVar3 = 1;
    pIVar2 = (Il2CppObject *)
             ApplicationManagers_AccountManager__SendMeJson
                       (__this_00,"GET","/v1/me",(System_String_o *)0x0,
                        (System_Action_bool__string__JSONNode__o *)__this_02,true,in_stack_ffffffffffffffc8);
    (__this->fields).__2__current = pIVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
  }
  else {
    iVar3 = -1;
    if (iVar1 != 1) goto label_05e04c89;
  }
  (__this->fields).__1__state = iVar3;
label_05e04c89:
  return iVar1 == 0;
}


// ApplicationManagers.AccountManager.<GetProfileJson>d__50$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__GetProfileJson_d__50__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__GetProfileJson_d__50_o* __this, const MethodInfo* method);
// 0x5e04ca0

Il2CppObject *
ApplicationManagers_AccountManager__GetProfileJson_d__50__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_AccountManager__GetProfileJson_d__50_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<GetProfileJson>d__50$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__GetProfileJson_d__50__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__GetProfileJson_d__50_o* __this, const MethodInfo* method);
// 0x5e04cb0

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
// 0x5e04cf0

Il2CppObject *
ApplicationManagers_AccountManager__GetProfileJson_d__50__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__GetProfileJson_d__50_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<OAuthFlow>d__8$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__OAuthFlow_d__8___ctor (ApplicationManagers_AccountManager__OAuthFlow_d__8_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5df9920

void ApplicationManagers_AccountManager__OAuthFlow_d__8___ctor
               (ApplicationManagers_AccountManager__OAuthFlow_d__8_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<OAuthFlow>d__8$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__OAuthFlow_d__8__System_IDisposable_Dispose (ApplicationManagers_AccountManager__OAuthFlow_d__8_o* __this, const MethodInfo* method);
// 0x5e04d00

void ApplicationManagers_AccountManager__OAuthFlow_d__8__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__OAuthFlow_d__8_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<OAuthFlow>d__8$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__OAuthFlow_d__8__MoveNext (ApplicationManagers_AccountManager__OAuthFlow_d__8_o* __this, const MethodInfo* method);
// 0x5e04d10
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e05261: xor ebx, ebx
// asm:   0x5e05263: xor edi, edi
// asm:   0x5e05265: mov rsi, r14
// asm:   0x5e0528e: jmp 0x5e0525c

bool ApplicationManagers_AccountManager__OAuthFlow_d__8__MoveNext
               (ApplicationManagers_AccountManager__OAuthFlow_d__8_o *__this,MethodInfo *method)

{
  ApplicationManagers_AccountManager___c__DisplayClass8_0_o **targetAddress;
  int iVar1;
  int32_t iVar2;
  uint32_t uVar3;
  ApplicationManagers_AccountManager_o *__this_00;
  ApplicationManagers_Api_AottgApiResult_o *pAVar4;
  ApplicationManagers_AccountManager_UnityOAuthStart_o *pAVar5;
  bool bVar6;
  ApplicationManagers_AccountManager___c__DisplayClass8_0_o *pAVar7;
  ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o *__this_01;
  System_String_o **ppSVar8;
  SimpleJSONFixed_JSONObject_o *__this_02;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  System_String_o *pSVar10;
  System_Action_AottgApiResult__o *__this_03;
  Il2CppObject *pIVar11;
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
  MethodInfo *methodInfo;
  System_Nullable_int__Fields SStack_98;
  System_String_o *pSStack_90;
  System_String_o *pSStack_88;
  System_DateTime_Fields SStack_80;
  int16_t iStack_78;
  undefined6 uStack_76;
  int32_t iStack_70;
  undefined4 uStack_6c;
  ApplicationManagers_AccountManager_UnityOAuthStart_o AStack_68;
  
  if (Il2CppMethodInitialized_075483ba == '\0') {
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
    Il2CppMethodInitialized_075483ba = '\x01';
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
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 2) {
    (__this->fields).__1__state = -1;
    return false;
  }
  __this_00 = (__this->fields).__4__this;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    if (__this_00 == (ApplicationManagers_AccountManager_o *)0x0) {
label_05e052ad:
      ThrowNullReferenceException();
    }
    iVar1 = (__this->fields).attemptId;
    if (Il2CppMethodInitialized_0754833e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      Il2CppMethodInitialized_0754833e = '\x01';
      in_RDX = extraout_RDX_00;
    }
    if ((__this_00->fields)._oauthAttemptId != iVar1) {
      return false;
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      in_RDX = extraout_RDX_01;
    }
    if (TypeInfo_ApplicationManagers_AccountManager->static_fields->_oauthPendingCallback ==
        (System_Action_bool__string__o *)0x0) {
      return false;
    }
    pAVar7 = (__this->fields).__8__1;
    if (pAVar7 == (ApplicationManagers_AccountManager___c__DisplayClass8_0_o *)0x0) goto label_05e052ad;
    pAVar4 = (pAVar7->fields).result;
    if (pAVar4 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
      uVar3 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
      pSVar10 = "unknown_error";
    }
    else {
      if ((pAVar4->fields)._Success_k__BackingField != false) {
        pSVar10 = (pAVar4->fields)._ResponseText_k__BackingField;
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
          in_RDX = extraout_RDX_02;
        }
        bVar6 = ApplicationManagers_AccountManager__TryParseUnityOAuthStart(pSVar10,&AStack_68,in_RDX);
        pSVar10 = AStack_68.fields.AuthorizationUrl;
        if (bVar6) {
          if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
          }
          UnityEngine_Application__OpenURL(pSVar10,(MethodInfo *)0x0);
          iVar2 = (__this->fields).attemptId;
          bVar6 = (__this->fields).reportNetworkError;
          iStack_78 = AStack_68.fields.ExpiresAt.fields._offsetMinutes;
          uStack_76 = AStack_68.fields.ExpiresAt.fields._10_6_;
          iStack_70 = AStack_68.fields.PollIntervalSeconds;
          uStack_6c = AStack_68.fields._44_4_;
          pSStack_88 = AStack_68.fields.AuthorizationUrl;
          SStack_80 = AStack_68.fields.ExpiresAt.fields._dateTime.fields._dateData;
          SStack_98 = (System_Nullable_int__Fields)AStack_68.fields.SessionId;
          pSStack_90 = AStack_68.fields.PollToken;
          if (Il2CppMethodInitialized_0754833b == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_ApplicationManagers_AccountManager_PollUnityOAuth_d__9);
            Il2CppMethodInitialized_0754833b = '\x01';
          }
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_ApplicationManagers_AccountManager_PollUnityOAuth_d__9);
          System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
          (__this_01->fields).__1__state = 0;
          (__this_01->fields).__4__this = __this_00;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
          pAVar5 = &(__this_01->fields).start;
          (pAVar5->fields).ExpiresAt.fields._offsetMinutes = iStack_78;
          *(undefined6 *)&(pAVar5->fields).ExpiresAt.fields.field_0xa = uStack_76;
          (__this_01->fields).start.fields.PollIntervalSeconds = iStack_70;
          *(undefined4 *)&(__this_01->fields).start.fields.field_0x2c = uStack_6c;
          (__this_01->fields).start.fields.AuthorizationUrl = pSStack_88;
          (__this_01->fields).start.fields.ExpiresAt.fields._dateTime.fields._dateData = SStack_80._dateData;
          (__this_01->fields).start.fields.SessionId = (System_String_o *)SStack_98;
          (__this_01->fields).start.fields.PollToken = pSStack_90;
          Il2CppCodeGenWriteBarrier((void **)&(__this_01->fields).start);
          (__this_01->fields).attemptId = iVar2;
          (__this_01->fields).reportNetworkError = bVar6;
          (__this->fields).__2__current = (Il2CppObject *)__this_01;
          Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
          (__this->fields).__1__state = 2;
          return true;
        }
        in_RDX = extraout_RDX_03;
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
          in_RDX = extraout_RDX_07;
        }
        ppSVar8 = &"bad_response";
        goto label_05e050ea;
      }
      pSVar10 = (pAVar4->fields)._Error_k__BackingField;
      uVar3 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      in_RDX = extraout_RDX_06;
    }
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    (__this->fields).__1__state = -1;
    pAVar7 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass8_0);
    System_Object___ctor((Il2CppObject *)pAVar7,(MethodInfo *)0x0);
    targetAddress = &(__this->fields).__8__1;
    (__this->fields).__8__1 = pAVar7;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pSVar10 = (__this->fields).provider;
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    bVar6 = System_String__IsNullOrEmpty(pSVar10,(MethodInfo *)0x0);
    if (bVar6) {
      pSVar10 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
    else {
      if ((pSVar10 == (System_String_o *)0x0) ||
         (pSVar10 = System_String__Trim(pSVar10,(MethodInfo *)0x0), pSVar10 == (System_String_o *)0x0))
      goto label_05e052ad;
      pSVar10 = System_String__ToLowerInvariant(pSVar10,(MethodInfo *)0x0);
    }
    ppSVar8 = &(__this->fields).provider;
    *ppSVar8 = pSVar10;
    Il2CppCodeGenWriteBarrier(ppSVar8);
    bVar6 = System_String__op_Inequality(*ppSVar8,"discord",(MethodInfo *)0x0);
    if ((!bVar6) ||
       (bVar6 = System_String__op_Inequality(*ppSVar8,"google",(MethodInfo *)0x0), !bVar6)) {
      __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
      SimpleJSONFixed_JSONObject___ctor(__this_02,(MethodInfo *)0x0);
      pSVar10 = *ppSVar8;
      if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
      }
      pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar10,(MethodInfo *)0x0);
      if (__this_02 != (SimpleJSONFixed_JSONObject_o *)0x0) {
        (*(__this_02->klass->vtable)._8_set_Item.methodPtr)
                  (__this_02,"provider",pSVar9,(__this_02->klass->vtable)._8_set_Item.method);
        pAVar7 = *targetAddress;
        if (pAVar7 != (ApplicationManagers_AccountManager___c__DisplayClass8_0_o *)0x0) {
          (pAVar7->fields).result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
          Il2CppCodeGenWriteBarrier(&(pAVar7->fields).result);
          pSVar10 = (*(__this_02->klass->vtable)._3_ToString.methodPtr)
                              (__this_02,(__this_02->klass->vtable)._3_ToString.method);
          pAVar7 = (__this->fields).__8__1;
          __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgApiResult);
          System_Action_object____ctor
                    ((System_Action_object__o *)__this_03,(Il2CppObject *)pAVar7,
                     (intptr_t)MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass8_0_OAuthFlow_b__0
                     ,(MethodInfo_4A81BE0 *)0x0);
          bVar6 = (__this->fields).reportNetworkError;
          SStack_98.hasValue = false;
          SStack_98._1_3_ = 0;
          SStack_98.value = 0;
          methodInfo = (MethodInfo *)0x5e051ea;
          System_Nullable_int____ctor
                    ((System_Nullable_int__o *)&SStack_98,10,
                     (MethodInfo_3CD4BA0 *)MethodInfo_System_Nullable_int_ctor);
          if (__this_00 != (ApplicationManagers_AccountManager_o *)0x0) {
            pIVar11 = (Il2CppObject *)
                      ApplicationManagers_AccountManager__SendApiJson
                                (__this_00,"POST","/v1/auth/oauth/unity/start",pSVar10,
                                 (System_String_o *)0x0,false,__this_03,bVar6,
                                 (System_Nullable_int__o)SStack_98,methodInfo);
            (__this->fields).__2__current = pIVar11;
            Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
            (__this->fields).__1__state = 1;
            return true;
          }
        }
      }
      goto label_05e052ad;
    }
    in_RDX = extraout_RDX_04;
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      in_RDX = extraout_RDX_05;
    }
    ppSVar8 = &"Provider is not supported.";
label_05e050ea:
    pSVar10 = *ppSVar8;
  }
  ApplicationManagers_AccountManager__CompleteOAuth(false,pSVar10,in_RDX);
  return false;
}


// ApplicationManagers.AccountManager.<OAuthFlow>d__8$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__OAuthFlow_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__OAuthFlow_d__8_o* __this, const MethodInfo* method);
// 0x5e052c0

Il2CppObject *
ApplicationManagers_AccountManager__OAuthFlow_d__8__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_AccountManager__OAuthFlow_d__8_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<OAuthFlow>d__8$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__OAuthFlow_d__8__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__OAuthFlow_d__8_o* __this, const MethodInfo* method);
// 0x5e052d0

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
// 0x5e05310

Il2CppObject *
ApplicationManagers_AccountManager__OAuthFlow_d__8__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__OAuthFlow_d__8_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<PatchProfileJson>d__51$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__PatchProfileJson_d__51___ctor (ApplicationManagers_AccountManager__PatchProfileJson_d__51_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5dfbcd0

void ApplicationManagers_AccountManager__PatchProfileJson_d__51___ctor
               (ApplicationManagers_AccountManager__PatchProfileJson_d__51_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<PatchProfileJson>d__51$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__PatchProfileJson_d__51__System_IDisposable_Dispose (ApplicationManagers_AccountManager__PatchProfileJson_d__51_o* __this, const MethodInfo* method);
// 0x5e05320

void ApplicationManagers_AccountManager__PatchProfileJson_d__51__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__PatchProfileJson_d__51_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<PatchProfileJson>d__51$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__PatchProfileJson_d__51__MoveNext (ApplicationManagers_AccountManager__PatchProfileJson_d__51_o* __this, const MethodInfo* method);
// 0x5e05330
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e053a0: jmp 0x5e0545c

bool ApplicationManagers_AccountManager__PatchProfileJson_d__51__MoveNext
               (ApplicationManagers_AccountManager__PatchProfileJson_d__51_o *__this,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_AccountManager_o *__this_00;
  System_String_o *json;
  int32_t iVar2;
  MethodInfo *in_RAX;
  ApplicationManagers_AccountManager___c__DisplayClass51_0_o *__this_01;
  System_Action_T1__T2__T3__o *__this_02;
  Il2CppObject *pIVar3;
  
  if (Il2CppMethodInitialized_075483bb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool_string_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass51_0_PatchProfileJson_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass51_0);
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/me");
    il2cpp_codegen_initialize_runtime_metadata(&"PATCH");
    Il2CppMethodInitialized_075483bb = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass51_0);
    System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
    if (__this_01 == (ApplicationManagers_AccountManager___c__DisplayClass51_0_o *)0x0) {
label_05e05470:
      ThrowNullReferenceException();
    }
    (__this_01->fields).onComplete = (__this->fields).onComplete;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).onComplete);
    json = (__this->fields).json;
    __this_02 = (System_Action_T1__T2__T3__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool_string_JSONNode);
    System_Action_bool__object__object____ctor
              (__this_02,(Il2CppObject *)__this_01,
               (intptr_t)
               MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass51_0_PatchProfileJson_b__0,
               (MethodInfo_4A8B090 *)0x0);
    if (__this_00 == (ApplicationManagers_AccountManager_o *)0x0) goto label_05e05470;
    pIVar3 = (Il2CppObject *)
             ApplicationManagers_AccountManager__SendMeJson
                       (__this_00,"PATCH","/v1/me",json,
                        (System_Action_bool__string__JSONNode__o *)__this_02,
                        (__this->fields).reportNetworkError,in_RAX);
    (__this->fields).__2__current = pIVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    iVar2 = 1;
  }
  else {
    iVar2 = -1;
    if (iVar1 != 1) goto label_05e0545c;
  }
  (__this->fields).__1__state = iVar2;
label_05e0545c:
  return iVar1 == 0;
}


// ApplicationManagers.AccountManager.<PatchProfileJson>d__51$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__PatchProfileJson_d__51__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__PatchProfileJson_d__51_o* __this, const MethodInfo* method);
// 0x5e05480

Il2CppObject *
ApplicationManagers_AccountManager__PatchProfileJson_d__51__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_AccountManager__PatchProfileJson_d__51_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<PatchProfileJson>d__51$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__PatchProfileJson_d__51__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__PatchProfileJson_d__51_o* __this, const MethodInfo* method);
// 0x5e05490

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
// 0x5e054d0

Il2CppObject *
ApplicationManagers_AccountManager__PatchProfileJson_d__51__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__PatchProfileJson_d__51_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<PollUnityOAuth>d__9$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__PollUnityOAuth_d__9___ctor (ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5df99f0

void ApplicationManagers_AccountManager__PollUnityOAuth_d__9___ctor
               (ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<PollUnityOAuth>d__9$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__PollUnityOAuth_d__9__System_IDisposable_Dispose (ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o* __this, const MethodInfo* method);
// 0x5e054e0

void ApplicationManagers_AccountManager__PollUnityOAuth_d__9__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<PollUnityOAuth>d__9$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__PollUnityOAuth_d__9__MoveNext (ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o* __this, const MethodInfo* method);
// 0x5e054f0

bool ApplicationManagers_AccountManager__PollUnityOAuth_d__9__MoveNext
               (ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o *__this,MethodInfo *method)

{
  uint uVar1;
  int iVar2;
  uint32_t uVar3;
  ApplicationManagers_AccountManager_o *__this_00;
  ApplicationManagers_Api_AottgApiResult_o *pAVar4;
  System_Action_bool__string__o *pSVar5;
  undefined8 uVar6;
  undefined2 uVar7;
  undefined2 uVar8;
  undefined8 uVar9;
  undefined2 uVar10;
  ApplicationManagers_AccountManager_UnityOAuthStart_o *pAVar11;
  bool bVar12;
  ApplicationManagers_AccountManager___c__DisplayClass9_0_o *pAVar13;
  System_String_o **ppSVar14;
  System_String_o *pSVar15;
  System_String_o *pSVar16;
  System_Action_AottgApiResult__o *__this_01;
  Il2CppObject *pIVar17;
  UnityEngine_WaitForSecondsRealtime_o *__this_02;
  MethodInfo *in_RDX;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *method_00;
  MethodInfo *extraout_RDX_05;
  MethodInfo *extraout_RDX_06;
  MethodInfo *extraout_RDX_07;
  MethodInfo *extraout_RDX_08;
  MethodInfo *extraout_RDX_09;
  MethodInfo *extraout_RDX_10;
  MethodInfo *in_R8;
  float fVar18;
  double dVar19;
  float fVar20;
  System_DateTimeOffset_o SVar21;
  System_DateTimeOffset_o SVar22;
  System_DateTimeOffset_o right;
  System_DateTimeOffset_o left;
  MethodInfo *pMVar23;
  System_String_o *pSStack_60;
  double dStack_58;
  System_String_o *pSStack_50;
  System_Nullable_int__Fields SStack_48;
  System_TimeSpan_Fields SStack_40;
  System_String_o *pSStack_38;
  
  if (Il2CppMethodInitialized_075483bc == '\0') {
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
    Il2CppMethodInitialized_075483bc = '\x01';
    in_RDX = extraout_RDX;
  }
  pSStack_60 = (System_String_o *)0x0;
  pSStack_50 = (System_String_o *)0x0;
  pSStack_38 = (System_String_o *)0x0;
  SStack_40._ticks = 0;
  uVar1 = (__this->fields).__1__state;
  if (uVar1 < 4) {
    __this_00 = (__this->fields).__4__this;
    switch(uVar1) {
    case 0:
      (__this->fields).__1__state = -1;
      fVar18 = (float)(__this->fields).start.fields.PollIntervalSeconds;
      fVar20 = 1.0;
      if (1.0 <= fVar18) {
        fVar20 = fVar18;
      }
      (__this->fields)._pollSeconds_5__2 = fVar20;
      break;
    case 1:
      (__this->fields).__1__state = -1;
      if (__this_00 != (ApplicationManagers_AccountManager_o *)0x0) {
        iVar2 = (__this->fields).attemptId;
        if (Il2CppMethodInitialized_0754833e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
          Il2CppMethodInitialized_0754833e = '\x01';
          in_RDX = extraout_RDX_00;
        }
        if ((__this_00->fields)._oauthAttemptId != iVar2) {
          return false;
        }
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
          in_RDX = extraout_RDX_01;
        }
        if (TypeInfo_ApplicationManagers_AccountManager->static_fields->_oauthPendingCallback ==
            (System_Action_bool__string__o *)0x0) {
          return false;
        }
        pAVar13 = (__this->fields).__8__1;
        if (pAVar13 == (ApplicationManagers_AccountManager___c__DisplayClass9_0_o *)0x0) goto label_05e05b8d;
        pAVar4 = (pAVar13->fields).result;
        if (pAVar4 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
          uVar3 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
          pSVar15 = "unknown_error";
joined_r0x05e059ce:
          if (uVar3 == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
            in_RDX = extraout_RDX_07;
          }
          ApplicationManagers_AccountManager__CompleteOAuth(false,pSVar15,in_RDX);
          return false;
        }
        if ((pAVar4->fields)._Success_k__BackingField == false) {
          pSVar15 = (pAVar4->fields)._Error_k__BackingField;
          uVar3 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
          goto joined_r0x05e059ce;
        }
        pSVar15 = (pAVar4->fields)._ResponseText_k__BackingField;
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        ppSVar14 = &pSStack_38;
        pMVar23 = (MethodInfo *)ppSVar14;
        bVar12 = ApplicationManagers_AccountManager__TryParseUnityOAuthStatus
                           (pSVar15,&pSStack_60,&pSStack_50,ppSVar14,in_R8);
        method_00 = extraout_RDX_02;
        if (bVar12) {
          bVar12 = System_String__op_Equality(pSStack_60,"complete",(MethodInfo *)0x0);
          if (bVar12) {
            bVar12 = System_String__IsNullOrEmpty(pSStack_50,(MethodInfo *)0x0);
            if (!bVar12) {
              pIVar17 = (Il2CppObject *)
                        ApplicationManagers_AccountManager__ExchangeOAuthCode
                                  (__this_00,pSStack_50,(__this->fields).reportNetworkError,pMVar23);
              (__this->fields).__2__current = pIVar17;
              Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
              (__this->fields).__1__state = 2;
              return true;
            }
            method_00 = extraout_RDX_03;
            if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
              method_00 = extraout_RDX_04;
            }
            ppSVar14 = &"oauth_missing_code";
            goto label_05e0586e;
          }
          bVar12 = System_String__op_Equality(pSStack_60,"failed",(MethodInfo *)0x0);
          if (bVar12) {
            bVar12 = System_String__IsNullOrEmpty(pSStack_38,(MethodInfo *)0x0);
            if (bVar12) {
              ppSVar14 = &"oauth_failed";
            }
            uVar3 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
            in_RDX = extraout_RDX_08;
            pSVar15 = (System_String_o *)((MethodInfo *)ppSVar14)->methodPointer;
            goto joined_r0x05e059ce;
          }
          bVar12 = System_String__op_Inequality(pSStack_60,"pending",(MethodInfo *)0x0);
          method_00 = extraout_RDX_09;
          if (!bVar12) {
            pAVar11 = &(__this->fields).start;
            uVar9 = (pAVar11->fields).ExpiresAt.fields._dateTime;
            uVar10 = (pAVar11->fields).ExpiresAt.fields._offsetMinutes;
            SVar21.fields._offsetMinutes = uVar10;
            SVar21.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)uVar9;
            if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
            }
            SVar22 = System_DateTimeOffset__get_UtcNow((MethodInfo *)0x0);
            right.fields._8_8_ = SVar22.fields._8_8_ & 0xffffffff;
            right.fields._dateTime.fields._dateData = SVar22.fields._dateTime.fields._dateData.fields;
            SVar21.fields._10_6_ = 0;
            SStack_40._ticks = (int64_t)System_DateTimeOffset__op_Subtraction(SVar21,right,(MethodInfo *)0x0);
            if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
            }
            dVar19 = System_TimeSpan__get_TotalSeconds((System_TimeSpan_o *)&SStack_40,(MethodInfo *)0x0);
            if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
              dStack_58 = dVar19;
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
              dVar19 = dStack_58;
            }
            dVar19 = System_Math__Max_54bace0(0.1,dVar19,(MethodInfo *)0x0);
            fVar20 = (__this->fields)._pollSeconds_5__2;
            if ((float)dVar19 <= fVar20) {
              fVar20 = (float)dVar19;
            }
            dStack_58 = (double)CONCAT44(dStack_58._4_4_,fVar20);
            __this_02 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_WaitForSecondsRealtime);
            UnityEngine_WaitForSecondsRealtime___ctor(__this_02,dStack_58._0_4_,(MethodInfo *)0x0);
            (__this->fields).__2__current = (Il2CppObject *)__this_02;
            Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
            (__this->fields).__1__state = 3;
            return true;
          }
        }
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
          method_00 = extraout_RDX_10;
        }
        ppSVar14 = &"bad_response";
        goto label_05e0586e;
      }
      goto label_05e05b8d;
    case 2:
      (__this->fields).__1__state = -1;
      return false;
    case 3:
      (__this->fields).__1__state = -1;
      (__this->fields).__8__1 = (ApplicationManagers_AccountManager___c__DisplayClass9_0_o *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__8__1);
    }
    if (__this_00 == (ApplicationManagers_AccountManager_o *)0x0) {
label_05e05b8d:
      ThrowNullReferenceException();
    }
    iVar2 = (__this->fields).attemptId;
    if (Il2CppMethodInitialized_0754833e == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      Il2CppMethodInitialized_0754833e = '\x01';
    }
    if ((__this_00->fields)._oauthAttemptId == iVar2) {
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        pSVar5 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_oauthPendingCallback;
      }
      else {
        pSVar5 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_oauthPendingCallback;
      }
      if (pSVar5 != (System_Action_bool__string__o *)0x0) {
        pAVar13 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass9_0);
        System_Object___ctor((Il2CppObject *)pAVar13,(MethodInfo *)0x0);
        (__this->fields).__8__1 = pAVar13;
        Il2CppCodeGenWriteBarrier(&(__this->fields).__8__1);
        if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
        }
        SVar21 = System_DateTimeOffset__get_UtcNow((MethodInfo *)0x0);
        pAVar11 = &(__this->fields).start;
        uVar6 = (pAVar11->fields).ExpiresAt.fields._dateTime;
        uVar7 = (pAVar11->fields).ExpiresAt.fields._offsetMinutes;
        uVar8 = *(undefined2 *)&(pAVar11->fields).ExpiresAt.fields.field_0xa;
        SVar22.fields._10_2_ = uVar8;
        SVar22.fields._offsetMinutes = uVar7;
        SVar22.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)uVar6;
        SVar22.fields._12_4_ = 0;
        left.fields._12_4_ = 0;
        left.fields._dateTime.fields._dateData =
             ((System_DateTime_Fields)SVar21.fields._dateTime.fields._dateData).fields;
        left.fields._offsetMinutes = SVar21.fields._offsetMinutes;
        left.fields._10_2_ = SVar21.fields._10_2_;
        bVar12 = System_DateTimeOffset__op_GreaterThanOrEqual(left,SVar22,(MethodInfo *)0x0);
        uVar3 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
        if (bVar12) {
          method_00 = extraout_RDX_05;
          if (uVar3 == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
            method_00 = extraout_RDX_06;
          }
          ppSVar14 = &"oauth_timeout";
label_05e0586e:
          ApplicationManagers_AccountManager__CompleteOAuth(false,*ppSVar14,method_00);
          return false;
        }
        if (uVar3 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        pSVar15 = TypeInfo_ApplicationManagers_AccountManager->static_fields->BaseUrl;
        if (pSVar15 != (System_String_o *)0x0) {
          pSVar15 = System_String__TrimEnd_53071b0(pSVar15,0x2f,(MethodInfo *)0x0);
          pSVar16 = UnityEngine_Networking_UnityWebRequest__EscapeURL
                              ((__this->fields).start.fields.SessionId,(MethodInfo *)0x0);
          pSVar15 = System_String__Concat_5301f10(pSVar15,"/v1/auth/oauth/unity/status?sessionId=",pSVar16,(MethodInfo *)0x0);
          pAVar13 = (__this->fields).__8__1;
          if (pAVar13 != (ApplicationManagers_AccountManager___c__DisplayClass9_0_o *)0x0) {
            (pAVar13->fields).result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
            Il2CppCodeGenWriteBarrier(&(pAVar13->fields).result);
            pSVar16 = (__this->fields).start.fields.PollToken;
            pAVar13 = (__this->fields).__8__1;
            __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgApiResult);
            System_Action_object____ctor
                      ((System_Action_object__o *)__this_01,(Il2CppObject *)pAVar13,
                       (intptr_t)
                       MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass9_0_PollUnityOAuth_b__0,
                       (MethodInfo_4A81BE0 *)0x0);
            bVar12 = (__this->fields).reportNetworkError;
            SStack_48.hasValue = false;
            SStack_48._1_3_ = 0;
            SStack_48.value = 0;
            pMVar23 = (MethodInfo *)0x5e05973;
            System_Nullable_int____ctor
                      ((System_Nullable_int__o *)&SStack_48,10,
                       (MethodInfo_3CD4BA0 *)MethodInfo_System_Nullable_int_ctor);
            pIVar17 = (Il2CppObject *)
                      ApplicationManagers_AccountManager__SendApiJson
                                (__this_00,"GET",pSVar15,(System_String_o *)0x0,pSVar16,false,
                                 __this_01,bVar12,(System_Nullable_int__o)SStack_48,pMVar23);
            (__this->fields).__2__current = pIVar17;
            Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
            (__this->fields).__1__state = 1;
            return true;
          }
        }
        goto label_05e05b8d;
      }
    }
  }
  return false;
}


// ApplicationManagers.AccountManager.<PollUnityOAuth>d__9$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__PollUnityOAuth_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o* __this, const MethodInfo* method);
// 0x5e05ba0

Il2CppObject *
ApplicationManagers_AccountManager__PollUnityOAuth_d__9__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<PollUnityOAuth>d__9$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__PollUnityOAuth_d__9__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o* __this, const MethodInfo* method);
// 0x5e05bb0

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
// 0x5e05bf0

Il2CppObject *
ApplicationManagers_AccountManager__PollUnityOAuth_d__9__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<PostJson>d__176$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__PostJson_d__176___ctor (ApplicationManagers_AccountManager__PostJson_d__176_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5e01ed0

void ApplicationManagers_AccountManager__PostJson_d__176___ctor
               (ApplicationManagers_AccountManager__PostJson_d__176_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<PostJson>d__176$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__PostJson_d__176__System_IDisposable_Dispose (ApplicationManagers_AccountManager__PostJson_d__176_o* __this, const MethodInfo* method);
// 0x5e05c00

void ApplicationManagers_AccountManager__PostJson_d__176__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__PostJson_d__176_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<PostJson>d__176$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__PostJson_d__176__MoveNext (ApplicationManagers_AccountManager__PostJson_d__176_o* __this, const MethodInfo* method);
// 0x5e05c10
// eh: try 0x5e05d04..0x5e05ddc -> pad 0x5e061a4 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5e05df6..0x5e05e03 -> pad 0x5e06220 catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5e06187..0x5e06196 -> pad 0x5e0619c (+2 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5e061cc..0x5e0620e -> pad 0x5e06213 (+1 call sites) cleanup
// eh: try 0x5e06216..0x5e0621b -> pad 0x5e06327 catch (...) [compiler noexcept guard]
// eh: try 0x5e06237..0x5e06312 -> pad 0x5e06317 (+1 call sites) cleanup
// eh: try 0x5e0631a..0x5e0631f -> pad 0x5e06327 catch (...) [compiler noexcept guard]
// asm: 102 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e06196: jmp 0x5e061a4
// asm:   0x5e06198: jmp 0x5e061a4
// asm:   0x5e0619a: jmp 0x5e061a4
// asm:   0x5e0619c: jmp 0x5e061a4
// asm:   0x5e0619e: jmp 0x5e061a4
// asm:   0x5e061a0: jmp 0x5e061a4
// asm:   0x5e061a2: jmp 0x5e061a4
// asm:   0x5e061a4: mov r15, rax
// asm:   0x5e061a7: cmp edx, 1
// asm:   0x5e061aa: jne 0x5e0631f
// asm:   0x5e061b0: mov rdi, r15
// asm:   0x5e061b3: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e061b8: mov rbx, rax
// asm:   0x5e061bb: lea rax, [rip + 0x1750506]
// asm:   0x5e061c2: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5e061c6: mov rax, qword ptr [rbx]
// asm:   0x5e061c9: mov rsi, qword ptr [rax]
// asm:   0x5e061cc: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5e061d1: test al, al
// asm:   0x5e061d3: je 0x5e061ed
// asm:   0x5e061d5: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e061da: mov r13, r14
// asm:   0x5e061dd: cmp byte ptr [r13 + 0x60], 0
// asm:   0x5e061e2: jne 0x5e05de3
// asm:   0x5e061e8: jmp 0x5e05e03
// asm:   0x5e061ed: mov edi, 8
// asm:   0x5e061f2: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5e061f7: mov rcx, qword ptr [rbx]
// asm:   0x5e061fa: mov qword ptr [rax], rcx
// asm:   0x5e061fd: lea rsi, [rip + 0x10272fc]
// asm:   0x5e06204: mov rdi, rax
// asm:   0x5e06207: xor edx, edx
// asm:   0x5e06209: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5e0620e: jmp 0x5e06312
// asm:   0x5e06213: mov r15, rax
// asm:   0x5e06216: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e0621b: jmp 0x5e0631f
// asm:   0x5e06220: mov r15, rax
// asm:   0x5e06223: cmp edx, 1
// asm:   0x5e06226: jne 0x5e0631f
// asm:   0x5e0622c: mov rdi, r15
// asm:   0x5e0622f: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e06234: mov rbx, rax
// asm:   0x5e06237: lea rdi, [rip + 0x1471e82]  ; TypeInfo_System_Exception
// asm:   0x5e0623e: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e06243: mov rcx, qword ptr [rbx]
// asm:   0x5e06246: mov rsi, qword ptr [rcx]
// asm:   0x5e06249: mov rdi, rax
// asm:   0x5e0624c: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5e06251: test al, al
// asm:   0x5e06253: je 0x5e062f1
// asm:   0x5e06259: mov rbx, qword ptr [rbx]
// asm:   0x5e0625c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e06261: test rbx, rbx
// asm:   0x5e06264: je 0x5e06312
// asm:   0x5e0626a: mov rax, qword ptr [rbx]
// asm:   0x5e0626d: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5e06274: mov rdi, rbx
// asm:   0x5e06277: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5e0627d: mov rbx, rax
// asm:   0x5e06280: lea rdi, [rip + 0x14ccf11]  ; "AccountManager: failed to parse auth response: "
// asm:   0x5e06287: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e0628c: mov rdi, rax
// asm:   0x5e0628f: mov rsi, rbx
// asm:   0x5e06292: xor edx, edx
// asm:   0x5e06294: call 0x53f0320  ; System_String__Concat()
// asm:   0x5e06299: mov rbx, rax
// asm:   0x5e0629c: lea rdi, [rip + 0x14713a5]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5e062a3: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e062a8: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5e062af: jne 0x5e062b9
// asm:   0x5e062b1: mov rdi, rax
// asm:   0x5e062b4: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5e062b9: mov rdi, rbx
// asm:   0x5e062bc: xor esi, esi
// asm:   0x5e062be: call 0x69c42a0  ; UnityEngine_Debug__Log()
// asm:   0x5e062c3: mov rbx, qword ptr [r14 + 0x68]
// asm:   0x5e062c7: test rbx, rbx
// asm:   0x5e062ca: je 0x5e060e8
// asm:   0x5e062d0: lea rdi, [rip + 0x14ecaf1]  ; "bad_response"
// asm:   0x5e062d7: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e062dc: mov rcx, qword ptr [rbx + 0x28]
// asm:   0x5e062e0: mov rdi, qword ptr [rbx + 0x40]
// asm:   0x5e062e4: xor esi, esi
// asm:   0x5e062e6: mov rdx, rax
// asm:   0x5e062e9: call qword ptr [rbx + 0x18]
// asm:   0x5e062ec: jmp 0x5e060e8
// asm:   0x5e062f1: mov edi, 8
// asm:   0x5e062f6: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5e062fb: mov rcx, qword ptr [rbx]
// asm:   0x5e062fe: mov qword ptr [rax], rcx
// asm:   0x5e06301: lea rsi, [rip + 0x10271f8]
// asm:   0x5e06308: mov rdi, rax
// asm:   0x5e0630b: xor edx, edx
// asm:   0x5e0630d: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5e06312: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x5e06317: mov r15, rax
// asm:   0x5e0631a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e0631f: mov rdi, r15
// asm:   0x5e06322: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e06327: mov rdi, rax
// asm:   0x5e0632a: call 0x2ab61e0  ; __clang_call_terminate()

bool ApplicationManagers_AccountManager__PostJson_d__176__MoveNext
               (ApplicationManagers_AccountManager__PostJson_d__176_o *__this,MethodInfo *method)

{
  int iVar1;
  uint32_t uVar2;
  ApplicationManagers_Api_AottgApiResult_o *pAVar3;
  System_Action_string__o *pSVar4;
  ApplicationManagers_AccountManager_o *__this_00;
  System_String_o *json;
  System_String_o *bearer;
  long lVar5;
  bool bVar6;
  bool bVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  SimpleJSONFixed_JSONNode_o *a;
  ApplicationManagers_AccountManager___c__DisplayClass176_0_o *pAVar9;
  System_Action_AottgApiResult__o *__this_01;
  Il2CppObject *pIVar10;
  System_String_o **ppSVar11;
  System_Action_bool__string__o *pSVar12;
  intptr_t iVar13;
  System_String_o *pSVar14;
  undefined8 uVar15;
  ApplicationManagers_AccountManager_c *pAVar16;
  intptr_t iVar17;
  MethodInfo *pMVar18;
  
  if (Il2CppMethodInitialized_075483bd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgApiResult);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass176_0_PostJson_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass176_0);
    il2cpp_codegen_initialize_runtime_metadata(&"POST");
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/auth/refresh");
    il2cpp_codegen_initialize_runtime_metadata(&"unknown_error");
    Il2CppMethodInitialized_075483bd = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    pAVar9 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass176_0);
    System_Object___ctor((Il2CppObject *)pAVar9,(MethodInfo *)0x0);
    (__this->fields).__8__1 = pAVar9;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__8__1);
    pAVar9 = (__this->fields).__8__1;
    if (pAVar9 == (ApplicationManagers_AccountManager___c__DisplayClass176_0_o *)0x0) {
      ThrowNullReferenceException();
    }
    (pAVar9->fields).result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(pAVar9->fields).result);
    pSVar14 = (__this->fields).path;
    json = (__this->fields).json;
    bearer = (__this->fields).bearer;
    pAVar9 = (__this->fields).__8__1;
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgApiResult);
    pMVar18 = (MethodInfo *)0x5e05ec1;
    System_Action_object____ctor
              ((System_Action_object__o *)__this_01,(Il2CppObject *)pAVar9,
               (intptr_t)MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass176_0_PostJson_b__0,
               (MethodInfo_4A81BE0 *)0x0);
    if (__this_00 == (ApplicationManagers_AccountManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    pIVar10 = (Il2CppObject *)
              ApplicationManagers_AccountManager__SendApiJson
                        (__this_00,"POST",pSVar14,json,bearer,false,__this_01,
                         (__this->fields).reportNetworkError,(System_Nullable_int__o)0x0,pMVar18);
    (__this->fields).__2__current = pIVar10;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 1;
    goto label_05e060e8;
  }
  if (iVar1 != 1) goto label_05e060e8;
  (__this->fields).__1__state = -1;
  pAVar9 = (__this->fields).__8__1;
  if (pAVar9 == (ApplicationManagers_AccountManager___c__DisplayClass176_0_o *)0x0) {
    ThrowNullReferenceException();
  }
  pAVar3 = (pAVar9->fields).result;
  if (pAVar3 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
    ppSVar11 = &"unknown_error";
label_05e05f29:
    pSVar14 = *ppSVar11;
    pMVar18 = (MethodInfo *)"/v1/auth/refresh";
    bVar6 = System_String__Equals_52ffe30((__this->fields).path,"/v1/auth/refresh",5,(MethodInfo *)0x0);
    pAVar9 = (__this->fields).__8__1;
    if (pAVar9 == (ApplicationManagers_AccountManager___c__DisplayClass176_0_o *)0x0) {
      ThrowNullReferenceException();
    }
    pAVar3 = (pAVar9->fields).result;
    if (pAVar3 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
label_05e05fbb:
      if (bVar6) {
label_05e05fc4:
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
          if (Il2CppMethodInitialized_07548373 != '\0') goto label_05e05fe8;
label_05e0610e:
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
          Il2CppMethodInitialized_07548373 = '\x01';
          if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0)
          goto label_05e05ff8;
label_05e06131:
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
          if (Il2CppMethodInitialized_075483c7 != '\0') goto label_05e06005;
label_05e06143:
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
          Il2CppMethodInitialized_075483c7 = '\x01';
          uVar2 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
        }
        else {
          if (Il2CppMethodInitialized_07548373 == '\0') goto label_05e0610e;
label_05e05fe8:
          if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0)
          goto label_05e06131;
label_05e05ff8:
          if (Il2CppMethodInitialized_075483c7 == '\0') goto label_05e06143;
label_05e06005:
          uVar2 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
        }
        if (uVar2 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        bVar6 = System_String__IsNullOrEmpty
                          (TypeInfo_ApplicationManagers_AccountManager->static_fields->
                           _AuthToken_k__BackingField,(MethodInfo *)0x0);
        if (!bVar6) {
          pAVar16 = TypeInfo_ApplicationManagers_AccountManager;
          if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
          }
          bVar6 = ApplicationManagers_AccountManager__HasUsablePhotonToken((MethodInfo *)pAVar16);
          if (!bVar6) {
            pAVar16 = TypeInfo_ApplicationManagers_AccountManager;
            if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
            }
            ApplicationManagers_AccountManager__GoOffline((MethodInfo *)pAVar16);
          }
        }
      }
    }
    else {
      lVar5 = (pAVar3->fields)._StatusCode_k__BackingField;
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        if (Il2CppMethodInitialized_0754839e != '\0') goto label_05e05f8f;
label_05e06077:
        il2cpp_codegen_initialize_runtime_metadata(&"invalid_refresh_token");
        Il2CppMethodInitialized_0754839e = '\x01';
        if (lVar5 == 0x191) goto label_05e05f9c;
label_05e06097:
        if (!bVar6) goto label_05e060cd;
        if ((lVar5 == 0x193) || (lVar5 == 400)) goto label_05e060b2;
        goto label_05e05fc4;
      }
      if (Il2CppMethodInitialized_0754839e == '\0') goto label_05e06077;
label_05e05f8f:
      if (lVar5 != 0x191) goto label_05e06097;
label_05e05f9c:
      pMVar18 = (MethodInfo *)"invalid_refresh_token";
      bVar7 = System_String__op_Equality(pSVar14,"invalid_refresh_token",(MethodInfo *)0x0);
      if (!bVar7 && !bVar6) goto label_05e05fbb;
label_05e060b2:
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      ApplicationManagers_AccountManager__ClearSession(true,pMVar18);
    }
label_05e060cd:
    pSVar12 = (__this->fields).onComplete;
    if (pSVar12 == (System_Action_bool__string__o *)0x0) goto label_05e060e8;
    iVar13 = (pSVar12->fields).method;
    iVar17 = (pSVar12->fields).method_code;
    uVar15 = 0;
  }
  else {
    if ((pAVar3->fields)._Success_k__BackingField == false) {
      ppSVar11 = &(pAVar3->fields)._Error_k__BackingField;
      goto label_05e05f29;
    }
    pSVar14 = (pAVar3->fields)._ResponseText_k__BackingField;
    if (((__this->fields).captureField != (System_String_o *)0x0) &&
       ((__this->fields).captureTarget != (System_Action_string__o *)0x0)) {
      method = (MethodInfo *)0x0;
      bVar6 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
      if (!bVar6) {
        pSVar8 = SimpleJSONFixed_JSON__Parse(pSVar14,(MethodInfo *)0x0);
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        method = (MethodInfo *)0x0;
        bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar8,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if (bVar6) {
          if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) {
            ThrowNullReferenceException();
          }
          a = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                        (pSVar8,(__this->fields).captureField,(pSVar8->klass->vtable)._7_get_Item.method);
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          method = (MethodInfo *)0x0;
          bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
          if (bVar6) {
            pSVar4 = (__this->fields).captureTarget;
            pSVar8 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)
                               (pSVar8,(__this->fields).captureField,
                                (pSVar8->klass->vtable)._7_get_Item.method);
            if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) {
              ThrowNullReferenceException();
            }
            method = (MethodInfo *)
                     (*(pSVar8->klass->vtable)._9_get_Value.methodPtr)
                               (pSVar8,(pSVar8->klass->vtable)._9_get_Value.method);
            if (pSVar4 == (System_Action_string__o *)0x0) {
              ThrowNullReferenceException();
            }
            (*(code *)(pSVar4->fields).invoke_impl)
                      ((pSVar4->fields).method_code,method,(pSVar4->fields).method);
          }
        }
      }
    }
    if ((__this->fields).applyAuthResponse != false) {
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      ApplicationManagers_AccountManager__ApplyAuthResponse(pSVar14,method);
    }
    pSVar12 = (__this->fields).onComplete;
    if (pSVar12 == (System_Action_bool__string__o *)0x0) goto label_05e060e8;
    iVar13 = (pSVar12->fields).method;
    iVar17 = (pSVar12->fields).method_code;
    uVar15 = 1;
    pSVar14 = (System_String_o *)0x0;
  }
  (*(code *)(pSVar12->fields).invoke_impl)(iVar17,uVar15,pSVar14,iVar13);
label_05e060e8:
  return iVar1 == 0;
}


// ApplicationManagers.AccountManager.<PostJson>d__176$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__PostJson_d__176__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__PostJson_d__176_o* __this, const MethodInfo* method);
// 0x5e06330

Il2CppObject *
ApplicationManagers_AccountManager__PostJson_d__176__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_AccountManager__PostJson_d__176_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<PostJson>d__176$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__PostJson_d__176__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__PostJson_d__176_o* __this, const MethodInfo* method);
// 0x5e06340

void ApplicationManagers_AccountManager__PostJson_d__176__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__PostJson_d__176_o *__this,MethodInfo *method)

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
                  MethodInfo_ApplicationManagers_AccountManager_PostJson_d__176_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// ApplicationManagers.AccountManager.<PostJson>d__176$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__PostJson_d__176__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__PostJson_d__176_o* __this, const MethodInfo* method);
// 0x5e06380

Il2CppObject *
ApplicationManagers_AccountManager__PostJson_d__176__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__PostJson_d__176_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<PutCharacterInfoJson>d__53$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53___ctor (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5dfbd10

void ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53___ctor
               (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<PutCharacterInfoJson>d__53$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53__System_IDisposable_Dispose (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o* __this, const MethodInfo* method);
// 0x5e06390

void ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<PutCharacterInfoJson>d__53$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53__MoveNext (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o* __this, const MethodInfo* method);
// 0x5e063a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e06410: jmp 0x5e064dd

bool ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53__MoveNext
               (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o *__this,MethodInfo *method)

{
  int iVar1;
  ApplicationManagers_AccountManager_o *__this_00;
  System_String_o *json;
  int32_t iVar2;
  MethodInfo *in_RAX;
  ApplicationManagers_AccountManager___c__DisplayClass53_0_o *__this_01;
  System_Action_T1__T2__T3__o *__this_02;
  Il2CppObject *pIVar3;
  
  if (Il2CppMethodInitialized_075483be == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool_string_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass53_0_PutCharacterInfoJson_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass53_0);
    il2cpp_codegen_initialize_runtime_metadata(&"PUT");
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/me/character-info");
    Il2CppMethodInitialized_075483be = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 0) {
    __this_00 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass53_0);
    System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
    if (__this_01 == (ApplicationManagers_AccountManager___c__DisplayClass53_0_o *)0x0) {
label_05e064f1:
      ThrowNullReferenceException();
    }
    (__this_01->fields).fallbackCharacterInfo = (__this->fields).fallbackCharacterInfo;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).fallbackCharacterInfo);
    (__this_01->fields).onComplete = (__this->fields).onComplete;
    Il2CppCodeGenWriteBarrier(&(__this_01->fields).onComplete);
    json = (__this->fields).json;
    __this_02 = (System_Action_T1__T2__T3__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool_string_JSONNode);
    System_Action_bool__object__object____ctor
              (__this_02,(Il2CppObject *)__this_01,
               (intptr_t)
               MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass53_0_PutCharacterInfoJson_b__0,
               (MethodInfo_4A8B090 *)0x0);
    if (__this_00 == (ApplicationManagers_AccountManager_o *)0x0) goto label_05e064f1;
    pIVar3 = (Il2CppObject *)
             ApplicationManagers_AccountManager__SendMeJson
                       (__this_00,"PUT","/v1/me/character-info",json,
                        (System_Action_bool__string__JSONNode__o *)__this_02,
                        (__this->fields).reportNetworkError,in_RAX);
    (__this->fields).__2__current = pIVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    iVar2 = 1;
  }
  else {
    iVar2 = -1;
    if (iVar1 != 1) goto label_05e064dd;
  }
  (__this->fields).__1__state = iVar2;
label_05e064dd:
  return iVar1 == 0;
}


// ApplicationManagers.AccountManager.<PutCharacterInfoJson>d__53$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o* __this, const MethodInfo* method);
// 0x5e06500

Il2CppObject *
ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<PutCharacterInfoJson>d__53$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o* __this, const MethodInfo* method);
// 0x5e06510

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
// 0x5e06550

Il2CppObject *
ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<SendApiGet>d__169$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__SendApiGet_d__169___ctor (ApplicationManagers_AccountManager__SendApiGet_d__169_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5e018f0

void ApplicationManagers_AccountManager__SendApiGet_d__169___ctor
               (ApplicationManagers_AccountManager__SendApiGet_d__169_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<SendApiGet>d__169$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__SendApiGet_d__169__System_IDisposable_Dispose (ApplicationManagers_AccountManager__SendApiGet_d__169_o* __this, const MethodInfo* method);
// 0x5e06560

void ApplicationManagers_AccountManager__SendApiGet_d__169__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__SendApiGet_d__169_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<SendApiGet>d__169$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__SendApiGet_d__169__MoveNext (ApplicationManagers_AccountManager__SendApiGet_d__169_o* __this, const MethodInfo* method);
// 0x5e06570

bool ApplicationManagers_AccountManager__SendApiGet_d__169__MoveNext
               (ApplicationManagers_AccountManager__SendApiGet_d__169_o *__this,MethodInfo *method)

{
  bool parseJson;
  int iVar1;
  ApplicationManagers_AccountManager_o *pAVar2;
  System_String_o *path;
  System_String_o *bearer;
  ApplicationManagers_AccountManager___c__DisplayClass169_0_o *pAVar3;
  System_Action_AottgApiResult__o *__this_00;
  System_Action_AottgApiResult__o *__this_01;
  MethodInfo *in_R9;
  Cysharp_Threading_Tasks_UniTask_o CVar4;
  Cysharp_Threading_Tasks_UniTask_o task;
  
  if (Il2CppMethodInitialized_075483bf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgApiResult);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass169_0_SendApiGet_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass169_0);
    Il2CppMethodInitialized_075483bf = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    pAVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    pAVar3 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass169_0);
    System_Object___ctor((Il2CppObject *)pAVar3,(MethodInfo *)0x0);
    (__this->fields).__8__1 = pAVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__8__1);
    pAVar3 = (__this->fields).__8__1;
    if (pAVar3 == (ApplicationManagers_AccountManager___c__DisplayClass169_0_o *)0x0) goto label_05e066d3;
    (pAVar3->fields).onComplete = (__this->fields).onComplete;
    Il2CppCodeGenWriteBarrier(&(pAVar3->fields).onComplete);
    pAVar3 = (__this->fields).__8__1;
    if (pAVar3 == (ApplicationManagers_AccountManager___c__DisplayClass169_0_o *)0x0) goto label_05e066d3;
    (pAVar3->fields).done = false;
    path = (__this->fields).path;
    bearer = (__this->fields).bearer;
    parseJson = (__this->fields).parseJson;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgApiResult);
    __this_01 = __this_00;
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)pAVar3,
               (intptr_t)MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass169_0_SendApiGet_b__0,
               (MethodInfo_4A81BE0 *)0x0);
    if (pAVar2 == (ApplicationManagers_AccountManager_o *)0x0) goto label_05e066d3;
    CVar4 = ApplicationManagers_AccountManager__SendApiGetAsync
                      ((ApplicationManagers_AccountManager_o *)__this_01,path,bearer,parseJson,__this_00,in_R9
                      );
    task.fields._12_4_ = 0;
    task.fields.source = CVar4.fields.source;
    task.fields.token = CVar4.fields.token;
    task.fields._10_2_ = CVar4.fields._10_2_;
    Cysharp_Threading_Tasks_UniTaskExtensions__Forget(task,(MethodInfo *)0x0);
  }
  pAVar3 = (__this->fields).__8__1;
  if (pAVar3 != (ApplicationManagers_AccountManager___c__DisplayClass169_0_o *)0x0) {
    if ((pAVar3->fields).done == false) {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 1;
      return true;
    }
    return false;
  }
label_05e066d3:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager.<SendApiGet>d__169$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__SendApiGet_d__169__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__SendApiGet_d__169_o* __this, const MethodInfo* method);
// 0x5e066e0

Il2CppObject *
ApplicationManagers_AccountManager__SendApiGet_d__169__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_AccountManager__SendApiGet_d__169_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<SendApiGet>d__169$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__SendApiGet_d__169__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__SendApiGet_d__169_o* __this, const MethodInfo* method);
// 0x5e066f0

void ApplicationManagers_AccountManager__SendApiGet_d__169__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__SendApiGet_d__169_o *__this,MethodInfo *method)

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
                  MethodInfo_ApplicationManagers_AccountManager_SendApiGet_d__169_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// ApplicationManagers.AccountManager.<SendApiGet>d__169$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__SendApiGet_d__169__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__SendApiGet_d__169_o* __this, const MethodInfo* method);
// 0x5e06730

Il2CppObject *
ApplicationManagers_AccountManager__SendApiGet_d__169__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__SendApiGet_d__169_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<SendApiGetAsync>d__170$$MoveNext
// il2cpp: void ApplicationManagers_AccountManager__SendApiGetAsync_d__170__MoveNext (ApplicationManagers_AccountManager__SendApiGetAsync_d__170_o __this, const MethodInfo* method);
// 0x5e06740
// eh: try 0x5e067e7..0x5e06bf9 -> pad 0x5e06a8d (+15 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5e06c09..0x5e06c0e -> pad 0x5e06ca0 catch (...) [compiler noexcept guard]
// eh: try 0x5e06c2b..0x5e06c90 -> pad 0x5e06c90 (+1 call sites) cleanup
// eh: try 0x5e06c93..0x5e06c98 -> pad 0x5e06ca0 catch (...) [compiler noexcept guard]
// asm: 138 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e069ad: jmp 0x5e069e6
// asm:   0x5e06a8d: jmp 0x5e06a9b
// asm:   0x5e06a8f: jmp 0x5e06a9b
// asm:   0x5e06a91: jmp 0x5e06a9b
// asm:   0x5e06a93: jmp 0x5e06a9b
// asm:   0x5e06a95: jmp 0x5e06a9b
// asm:   0x5e06a97: jmp 0x5e06a9b
// asm:   0x5e06a99: jmp 0x5e06a9b
// asm:   0x5e06a9b: mov r15, rdx
// asm:   0x5e06a9e: mov r14, rax
// asm:   0x5e06aa1: cmp r15d, 1
// asm:   0x5e06aa5: jne 0x5e06c16
// asm:   0x5e06aab: mov rdi, r14
// asm:   0x5e06aae: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e06ab3: mov rbx, rax
// asm:   0x5e06ab6: lea rdi, [rip + 0x1471603]  ; TypeInfo_System_Exception
// asm:   0x5e06abd: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e06ac2: mov rcx, qword ptr [rbx]
// asm:   0x5e06ac5: mov rsi, qword ptr [rcx]
// asm:   0x5e06ac8: mov rdi, rax
// asm:   0x5e06acb: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5e06ad0: test al, al
// asm:   0x5e06ad2: je 0x5e06bce
// asm:   0x5e06ad8: mov r14, qword ptr [rbx]
// asm:   0x5e06adb: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e06ae0: test r14, r14
// asm:   0x5e06ae3: je 0x5e06bf4
// asm:   0x5e06ae9: mov r15, qword ptr [r12 + 0x18]
// asm:   0x5e06aee: mov rax, qword ptr [r14]
// asm:   0x5e06af1: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5e06af8: mov rdi, r14
// asm:   0x5e06afb: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5e06b01: mov r13, rax
// asm:   0x5e06b04: lea rdi, [rip + 0x14cc6a5]  ; "AccountManager: failed to send GET "
// asm:   0x5e06b0b: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e06b10: mov rbx, rax
// asm:   0x5e06b13: lea rdi, [rip + 0x14cb466]  ; ": "
// asm:   0x5e06b1a: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e06b1f: mov rdi, rbx
// asm:   0x5e06b22: mov rsi, r15
// asm:   0x5e06b25: mov rdx, rax
// asm:   0x5e06b28: mov rcx, r13
// asm:   0x5e06b2b: xor r8d, r8d
// asm:   0x5e06b2e: call 0x5402810  ; System_String__Concat()
// asm:   0x5e06b33: mov rbx, rax
// asm:   0x5e06b36: lea rdi, [rip + 0x1470b0b]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5e06b3d: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e06b42: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5e06b49: jne 0x5e06b53
// asm:   0x5e06b4b: mov rdi, rax
// asm:   0x5e06b4e: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5e06b53: mov rdi, rbx
// asm:   0x5e06b56: xor esi, esi
// asm:   0x5e06b58: call 0x69c4c70  ; UnityEngine_Debug__LogError()
// asm:   0x5e06b5d: mov rbp, qword ptr [r12 + 0x30]
// asm:   0x5e06b62: test rbp, rbp
// asm:   0x5e06b65: je 0x5e069e6
// asm:   0x5e06b6b: lea rax, [rip + 0x174fb56]
// asm:   0x5e06b72: mov rax, qword ptr [rax + 0x90]
// asm:   0x5e06b79: mov rax, qword ptr [rax + 0xb8]
// asm:   0x5e06b80: mov r15, qword ptr [rax]
// asm:   0x5e06b83: mov rax, qword ptr [r14]
// asm:   0x5e06b86: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5e06b8d: mov rdi, r14
// asm:   0x5e06b90: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5e06b96: mov rbx, rax
// asm:   0x5e06b99: lea rdi, [rip + 0x14f20d8]  ; "network_error"
// asm:   0x5e06ba0: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e06ba5: xor edi, edi
// asm:   0x5e06ba7: mov rsi, r15
// asm:   0x5e06baa: mov rdx, rax
// asm:   0x5e06bad: mov rcx, rbx
// asm:   0x5e06bb0: xor r8d, r8d
// asm:   0x5e06bb3: xor r9d, r9d
// asm:   0x5e06bb6: call 0x5e2a1f0  ; ApplicationManagers_Api_AottgApiResult__Fail()
// asm:   0x5e06bbb: mov rdi, qword ptr [rbp + 0x40]
// asm:   0x5e06bbf: mov rdx, qword ptr [rbp + 0x28]
// asm:   0x5e06bc3: mov rsi, rax
// asm:   0x5e06bc6: call qword ptr [rbp + 0x18]
// asm:   0x5e06bc9: jmp 0x5e069e6
// asm:   0x5e06bce: mov edi, 8
// asm:   0x5e06bd3: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5e06bd8: mov rcx, qword ptr [rbx]
// asm:   0x5e06bdb: mov qword ptr [rax], rcx
// asm:   0x5e06bde: lea rsi, [rip + 0x102691b]
// asm:   0x5e06be5: mov rdi, rax
// asm:   0x5e06be8: xor edx, edx
// asm:   0x5e06bea: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5e06bef: jmp 0x5e06c90
// asm:   0x5e06bf4: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x5e06bf9: jmp 0x5e06c10
// asm:   0x5e06bfb: jmp 0x5e06c10
// asm:   0x5e06bfd: jmp 0x5e06c10
// asm:   0x5e06bff: jmp 0x5e06c10
// asm:   0x5e06c01: jmp 0x5e06c10
// asm:   0x5e06c03: mov r15, rdx
// asm:   0x5e06c06: mov r14, rax
// asm:   0x5e06c09: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e06c0e: jmp 0x5e06c16
// asm:   0x5e06c10: mov r15, rdx
// asm:   0x5e06c13: mov r14, rax
// asm:   0x5e06c16: mov eax, 1
// asm:   0x5e06c1b: cmp r15d, eax
// asm:   0x5e06c1e: jne 0x5e06c98
// asm:   0x5e06c20: mov rdi, r14
// asm:   0x5e06c23: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e06c28: mov rbx, rax
// asm:   0x5e06c2b: lea rdi, [rip + 0x147148e]  ; TypeInfo_System_Exception
// asm:   0x5e06c32: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e06c37: mov rcx, qword ptr [rbx]
// asm:   0x5e06c3a: mov rsi, qword ptr [rcx]
// asm:   0x5e06c3d: mov rdi, rax
// asm:   0x5e06c40: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5e06c45: test al, al
// asm:   0x5e06c47: je 0x5e06c6f
// asm:   0x5e06c49: mov rbx, qword ptr [rbx]
// asm:   0x5e06c4c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e06c51: mov dword ptr [r12], 0xfffffffe
// asm:   0x5e06c59: add r12, 8
// asm:   0x5e06c5d: mov rdi, r12
// asm:   0x5e06c60: mov rsi, rbx
// asm:   0x5e06c63: xor edx, edx
// asm:   0x5e06c65: call 0x475eec0  ; il2cpp_runtime_helper_0475eec0()
// asm:   0x5e06c6a: jmp 0x5e06a7e
// asm:   0x5e06c6f: mov edi, 8
// asm:   0x5e06c74: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5e06c79: mov rcx, qword ptr [rbx]
// asm:   0x5e06c7c: mov qword ptr [rax], rcx
// asm:   0x5e06c7f: lea rsi, [rip + 0x102687a]
// asm:   0x5e06c86: mov rdi, rax
// asm:   0x5e06c89: xor edx, edx
// asm:   0x5e06c8b: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5e06c90: mov r14, rax
// asm:   0x5e06c93: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e06c98: mov rdi, r14
// asm:   0x5e06c9b: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e06ca0: mov rdi, rax
// asm:   0x5e06ca3: call 0x2ab61e0  ; __clang_call_terminate()

void ApplicationManagers_AccountManager__SendApiGetAsync_d__170__MoveNext
               (ApplicationManagers_AccountManager__SendApiGetAsync_d__170_o *__this,MethodInfo *method)

{
  bool parseJson;
  System_String_o *path;
  System_String_o *bearer;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  System_Action_AottgApiResult__o *pSVar3;
  Il2CppObject *pIVar4;
  Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult__o *pCVar5;
  short sVar6;
  char cVar7;
  Il2CppClass *pIVar8;
  VirtualInvokeData *pVVar9;
  ApplicationManagers_Api_AottgApiResult_o *pAVar10;
  ulong uVar11;
  long lVar12;
  MethodInfo *in_stack_ffffffffffffff68;
  Il2CppObject *local_88;
  ApplicationManagers_Api_AottgApiResult_o *pAStack_80;
  undefined8 local_78;
  Cysharp_Threading_Tasks_UniTask_AottgApiResult__o local_68;
  Il2CppObject *local_48;
  ApplicationManagers_Api_AottgApiResult_o *pAStack_40;
  int16_t local_38;
  undefined6 uStack_36;
  
  if (Il2CppMethodInitialized_075483c0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_71a26a8
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_GetResult);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_get_IsCompleted);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter);
    il2cpp_codegen_initialize_runtime_metadata(&"GET");
    Il2CppMethodInitialized_075483c0 = '\x01';
  }
  local_88 = (Il2CppObject *)0x0;
  pAStack_80 = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
  local_78 = 0;
  if ((__this->fields).__1__state == 0) {
    pCVar5 = &(__this->fields).__u__1;
    local_78._0_2_ = (pCVar5->fields).task.fields.token;
    local_78._2_6_ = *(undefined6 *)&(pCVar5->fields).task.fields.field_0x12;
    local_88 = (Il2CppObject *)(__this->fields).__u__1.fields.task.fields.source;
    pAStack_80 = (ApplicationManagers_Api_AottgApiResult_o *)(__this->fields).__u__1.fields.task.fields.result
    ;
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
    ApplicationManagers_AccountManager__SendApiJsonAsync_5d01c30
              (&local_68,"GET",path,(System_String_o *)0x0,bearer,parseJson,false,
               (System_Nullable_int__o)0x0,in_stack_ffffffffffffff68);
    local_38 = local_68.fields.token;
    uStack_36 = local_68.fields._18_6_;
    local_48 = (Il2CppObject *)local_68.fields.source;
    pAStack_40 = local_68.fields.result;
    local_68.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    local_68.fields.result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
    local_68.fields.token = 0;
    local_68.fields._18_6_ = 0;
    if (((MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter->klass->_2).bitflags1 & 1) == 0
       ) {
      il2cpp_codegen_class_init_checked
                (MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter->klass);
    }
    local_68.fields.token = local_38;
    local_68.fields._18_6_ = uStack_36;
    local_68.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)local_48;
    local_68.fields.result = pAStack_40;
    Il2CppCodeGenWriteBarrier((void **)&local_68);
    local_78._0_2_ = local_68.fields.token;
    local_78._2_6_ = local_68.fields._18_6_;
    local_88 = (Il2CppObject *)local_68.fields.source;
    pAStack_80 = local_68.fields.result;
    cVar7 = il2cpp_runtime_helper_045ee340(&local_88,
                         MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_get_IsCompleted);
    if (cVar7 == '\0') {
      (__this->fields).__1__state = 0;
      (__this->fields).__u__1.fields.task.fields.source =
           (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)local_88;
      (__this->fields).__u__1.fields.task.fields.result = (Il2CppObject *)pAStack_80;
      pCVar5 = &(__this->fields).__u__1;
      (pCVar5->fields).task.fields.token = (int16_t)local_78;
      *(undefined6 *)&(pCVar5->fields).task.fields.field_0x12 = local_78._2_6_;
      Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__u__1);
      il2cpp_runtime_helper_0350c880(&(__this->fields).__t__builder,&local_88,__this,
                   MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_71a26a8
                  );
      return;
    }
  }
  pIVar4 = local_88;
  if (local_88 == (Il2CppObject *)0x0) {
    pSVar3 = (__this->fields).onComplete;
    pAVar10 = pAStack_80;
  }
  else {
    sVar6 = (int16_t)local_78;
    pIVar8 = MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_GetResult->klass;
    if (((pIVar8->_2).bitflags1 & 1) == 0) {
      pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
    }
    pIVar8 = pIVar8->rgctx_data[5].klass;
    if (((pIVar8->_2).bitflags1 & 1) == 0) {
      pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
    }
    pIVar1 = pIVar4->klass;
    uVar11 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar11 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar2->interfaceType + lVar12) == pIVar8) {
          pVVar9 = (VirtualInvokeData *)&pIVar1->vtable[*(int *)((long)&pIVar2->offset + lVar12)].methodPtr;
          goto label_05e069c2;
        }
        lVar12 = lVar12 + 0x10;
      } while (uVar11 * 0x10 != lVar12);
    }
    pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar4,pIVar8,0);
label_05e069c2:
    pAVar10 = (ApplicationManagers_Api_AottgApiResult_o *)
              (*pVVar9->methodPtr)(pIVar4,(ulong)(uint)(int)sVar6,pVVar9->method);
    pSVar3 = (__this->fields).onComplete;
  }
  if (pSVar3 != (System_Action_AottgApiResult__o *)0x0) {
    (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pAVar10,(pSVar3->fields).method);
  }
  (__this->fields).__1__state = -2;
  if (Il2CppMethodInitialized_07541078 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise);
    Il2CppMethodInitialized_07541078 = '\x01';
  }
  pIVar4 = (Il2CppObject *)(__this->fields).__t__builder.fields.runnerPromise;
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar8 = pIVar4->klass;
    uVar11 = (ulong)(pIVar8->_2).interface_offsets_count;
    if (uVar11 != 0) {
      pIVar2 = (pIVar8->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_c **)
             ((long)&pIVar2->interfaceType + lVar12) ==
            TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise) {
          pVVar9 = (VirtualInvokeData *)
                   &pIVar8->vtable[*(int *)((long)&pIVar2->offset + lVar12) + 2].methodPtr;
          goto label_05e06a75;
        }
        lVar12 = lVar12 + 0x10;
      } while (uVar11 * 0x10 != lVar12);
    }
    pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar4,(Il2CppClass *)
                               TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise,2)
    ;
label_05e06a75:
    (*pVVar9->methodPtr)(pIVar4,pVVar9->method);
  }
  return;
}


// ApplicationManagers.AccountManager.<SendApiGetAsync>d__170$$SetStateMachine
// il2cpp: void ApplicationManagers_AccountManager__SendApiGetAsync_d__170__SetStateMachine (ApplicationManagers_AccountManager__SendApiGetAsync_d__170_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x5e06cb0

void ApplicationManagers_AccountManager__SendApiGetAsync_d__170__SetStateMachine
               (ApplicationManagers_AccountManager__SendApiGetAsync_d__170_o *__this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method)

{
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder__SetStateMachine
            (&(__this->fields).__t__builder,stateMachine,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<SendApiJson>d__171$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__SendApiJson_d__171___ctor (ApplicationManagers_AccountManager__SendApiJson_d__171_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5e01ae0

void ApplicationManagers_AccountManager__SendApiJson_d__171___ctor
               (ApplicationManagers_AccountManager__SendApiJson_d__171_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<SendApiJson>d__171$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__SendApiJson_d__171__System_IDisposable_Dispose (ApplicationManagers_AccountManager__SendApiJson_d__171_o* __this, const MethodInfo* method);
// 0x5e06cc0

void ApplicationManagers_AccountManager__SendApiJson_d__171__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__SendApiJson_d__171_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<SendApiJson>d__171$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__SendApiJson_d__171__MoveNext (ApplicationManagers_AccountManager__SendApiJson_d__171_o* __this, const MethodInfo* method);
// 0x5e06cd0

bool ApplicationManagers_AccountManager__SendApiJson_d__171__MoveNext
               (ApplicationManagers_AccountManager__SendApiJson_d__171_o *__this,MethodInfo *method)

{
  bool parseJson;
  bool reportNetworkError;
  int iVar1;
  ApplicationManagers_AccountManager_o *pAVar2;
  System_String_o *method_00;
  System_String_o *path;
  System_String_o *json;
  System_String_o *bearer;
  System_Nullable_int__Fields timeoutSeconds;
  ApplicationManagers_AccountManager___c__DisplayClass171_0_o *pAVar3;
  System_Action_AottgApiResult__o *__this_00;
  System_Action_AottgApiResult__o *__this_01;
  Cysharp_Threading_Tasks_UniTask_o CVar4;
  Cysharp_Threading_Tasks_UniTask_o task;
  MethodInfo *methodInfo;
  
  if (Il2CppMethodInitialized_075483c1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgApiResult);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass171_0_SendApiJson_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass171_0);
    Il2CppMethodInitialized_075483c1 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
  }
  else {
    if (iVar1 != 0) {
      return false;
    }
    pAVar2 = (__this->fields).__4__this;
    (__this->fields).__1__state = -1;
    pAVar3 = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass171_0);
    System_Object___ctor((Il2CppObject *)pAVar3,(MethodInfo *)0x0);
    (__this->fields).__8__1 = pAVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__8__1);
    pAVar3 = (__this->fields).__8__1;
    if (pAVar3 == (ApplicationManagers_AccountManager___c__DisplayClass171_0_o *)0x0) goto label_05e06e7b;
    (pAVar3->fields).onComplete = (__this->fields).onComplete;
    Il2CppCodeGenWriteBarrier(&(pAVar3->fields).onComplete);
    pAVar3 = (__this->fields).__8__1;
    if (pAVar3 == (ApplicationManagers_AccountManager___c__DisplayClass171_0_o *)0x0) goto label_05e06e7b;
    (pAVar3->fields).done = false;
    method_00 = (__this->fields).method;
    path = (__this->fields).path;
    json = (__this->fields).json;
    bearer = (__this->fields).bearer;
    parseJson = (__this->fields).parseJson;
    reportNetworkError = (__this->fields).reportNetworkError;
    timeoutSeconds = (__this->fields).timeoutSeconds.fields;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgApiResult);
    methodInfo = (MethodInfo *)0x5e06dee;
    __this_01 = __this_00;
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)pAVar3,
               (intptr_t)MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass171_0_SendApiJson_b__0,
               (MethodInfo_4A81BE0 *)0x0);
    if (pAVar2 == (ApplicationManagers_AccountManager_o *)0x0) goto label_05e06e7b;
    CVar4 = ApplicationManagers_AccountManager__SendApiJsonAsync
                      ((ApplicationManagers_AccountManager_o *)__this_01,method_00,path,json,bearer,parseJson,
                       reportNetworkError,(System_Nullable_int__o)timeoutSeconds,__this_00,methodInfo);
    task.fields._12_4_ = 0;
    task.fields.source = CVar4.fields.source;
    task.fields.token = CVar4.fields.token;
    task.fields._10_2_ = CVar4.fields._10_2_;
    Cysharp_Threading_Tasks_UniTaskExtensions__Forget(task,(MethodInfo *)0x0);
  }
  pAVar3 = (__this->fields).__8__1;
  if (pAVar3 != (ApplicationManagers_AccountManager___c__DisplayClass171_0_o *)0x0) {
    if ((pAVar3->fields).done == false) {
      (__this->fields).__2__current = (Il2CppObject *)0x0;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 1;
      return true;
    }
    return false;
  }
label_05e06e7b:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager.<SendApiJson>d__171$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__SendApiJson_d__171__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__SendApiJson_d__171_o* __this, const MethodInfo* method);
// 0x5e06e80

Il2CppObject *
ApplicationManagers_AccountManager__SendApiJson_d__171__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_AccountManager__SendApiJson_d__171_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<SendApiJson>d__171$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__SendApiJson_d__171__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__SendApiJson_d__171_o* __this, const MethodInfo* method);
// 0x5e06e90

void ApplicationManagers_AccountManager__SendApiJson_d__171__System_Collections_IEnumerator_Reset
               (ApplicationManagers_AccountManager__SendApiJson_d__171_o *__this,MethodInfo *method)

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
                  MethodInfo_ApplicationManagers_AccountManager_SendApiJson_d__171_System_Collections_IEnumerator_Reset
                 );
  il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
}


// ApplicationManagers.AccountManager.<SendApiJson>d__171$$System.Collections.IEnumerator.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__SendApiJson_d__171__System_Collections_IEnumerator_get_Current (ApplicationManagers_AccountManager__SendApiJson_d__171_o* __this, const MethodInfo* method);
// 0x5e06ed0

Il2CppObject *
ApplicationManagers_AccountManager__SendApiJson_d__171__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__SendApiJson_d__171_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<SendApiJsonAsync>d__172$$MoveNext
// il2cpp: void ApplicationManagers_AccountManager__SendApiJsonAsync_d__172__MoveNext (ApplicationManagers_AccountManager__SendApiJsonAsync_d__172_o __this, const MethodInfo* method);
// 0x5e06ee0
// eh: try 0x5e06fa1..0x5e07478 -> pad 0x5e0725d (+23 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5e07496..0x5e0749b -> pad 0x5e0752d catch (...) [compiler noexcept guard]
// eh: try 0x5e074b8..0x5e0751d -> pad 0x5e0751d (+1 call sites) cleanup
// eh: try 0x5e07520..0x5e07525 -> pad 0x5e0752d catch (...) [compiler noexcept guard]
// asm: 185 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e07171: jmp 0x5e071ae
// asm:   0x5e0725d: jmp 0x5e0726b
// asm:   0x5e0725f: jmp 0x5e0726b
// asm:   0x5e07261: jmp 0x5e0726b
// asm:   0x5e07263: jmp 0x5e0726b
// asm:   0x5e07265: jmp 0x5e0726b
// asm:   0x5e07267: jmp 0x5e0726b
// asm:   0x5e07269: jmp 0x5e0726b
// asm:   0x5e0726b: mov r15, rdx
// asm:   0x5e0726e: mov r14, rax
// asm:   0x5e07271: cmp r15d, 1
// asm:   0x5e07275: jne 0x5e074a3
// asm:   0x5e0727b: mov rdi, r14
// asm:   0x5e0727e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e07283: mov rbx, rax
// asm:   0x5e07286: lea rdi, [rip + 0x1470e33]  ; TypeInfo_System_Exception
// asm:   0x5e0728d: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e07292: mov rcx, qword ptr [rbx]
// asm:   0x5e07295: mov rsi, qword ptr [rcx]
// asm:   0x5e07298: mov rdi, rax
// asm:   0x5e0729b: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5e072a0: test al, al
// asm:   0x5e072a2: je 0x5e07448
// asm:   0x5e072a8: mov r14, qword ptr [rbx]
// asm:   0x5e072ab: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e072b0: lea rdi, [rip + 0x146d681]  ; TypeInfo_string_array
// asm:   0x5e072b7: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e072bc: mov rdi, rax
// asm:   0x5e072bf: mov esi, 6
// asm:   0x5e072c4: call 0x30d6180  ; SZArrayNew()
// asm:   0x5e072c9: mov r15, rax
// asm:   0x5e072cc: test rax, rax
// asm:   0x5e072cf: je 0x5e0746e
// asm:   0x5e072d5: lea rdi, [rip + 0x14cbecc]  ; "AccountManager: failed to send "
// asm:   0x5e072dc: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e072e1: mov rdi, r15
// asm:   0x5e072e4: xor esi, esi
// asm:   0x5e072e6: mov rdx, rax
// asm:   0x5e072e9: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5e072ee: mov rax, qword ptr [rsp + 8]
// asm:   0x5e072f3: mov rdx, qword ptr [rax + 0x18]
// asm:   0x5e072f7: mov esi, 1
// asm:   0x5e072fc: mov rdi, r15
// asm:   0x5e072ff: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5e07304: lea rdi, [rip + 0x14c6a35]  ; " "
// asm:   0x5e0730b: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e07310: mov esi, 2
// asm:   0x5e07315: mov rdi, r15
// asm:   0x5e07318: mov rdx, rax
// asm:   0x5e0731b: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5e07320: mov rax, qword ptr [rsp + 8]
// asm:   0x5e07325: mov rdx, qword ptr [rax + 0x20]
// asm:   0x5e07329: mov esi, 3
// asm:   0x5e0732e: mov rdi, r15
// asm:   0x5e07331: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5e07336: lea rdi, [rip + 0x14cac43]  ; ": "
// asm:   0x5e0733d: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e07342: mov esi, 4
// asm:   0x5e07347: mov rdi, r15
// asm:   0x5e0734a: mov rdx, rax
// asm:   0x5e0734d: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5e07352: test r14, r14
// asm:   0x5e07355: je 0x5e07473
// asm:   0x5e0735b: mov rax, qword ptr [r14]
// asm:   0x5e0735e: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5e07365: mov rdi, r14
// asm:   0x5e07368: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5e0736e: mov esi, 5
// asm:   0x5e07373: mov rdi, r15
// asm:   0x5e07376: mov rdx, rax
// asm:   0x5e07379: call 0x2ac8d10  ; il2cpp_codegen_array_set_ref()
// asm:   0x5e0737e: mov rdi, r15
// asm:   0x5e07381: xor esi, esi
// asm:   0x5e07383: call 0x5402910  ; System_String__Concat()
// asm:   0x5e07388: mov rbx, rax
// asm:   0x5e0738b: lea rdi, [rip + 0x14702b6]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5e07392: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e07397: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5e0739e: jne 0x5e073a8
// asm:   0x5e073a0: mov rdi, rax
// asm:   0x5e073a3: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5e073a8: mov rdi, rbx
// asm:   0x5e073ab: xor esi, esi
// asm:   0x5e073ad: call 0x69c4c70  ; UnityEngine_Debug__LogError()
// asm:   0x5e073b2: mov rax, qword ptr [rsp + 8]
// asm:   0x5e073b7: cmp byte ptr [rax + 0x39], 0
// asm:   0x5e073bb: je 0x5e073d3
// asm:   0x5e073bd: lea rdi, [rip + 0x14f18b4]  ; "network_error"
// asm:   0x5e073c4: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e073c9: mov rdi, rax
// asm:   0x5e073cc: xor esi, esi
// asm:   0x5e073ce: call 0x5e08020  ; ApplicationManagers_AottgNetworkNotifications__TryReport()
// asm:   0x5e073d3: mov rax, qword ptr [rsp + 8]
// asm:   0x5e073d8: mov rbp, qword ptr [rax + 0x48]
// asm:   0x5e073dc: test rbp, rbp
// asm:   0x5e073df: je 0x5e071ae
// asm:   0x5e073e5: lea rax, [rip + 0x174f2dc]
// asm:   0x5e073ec: mov rax, qword ptr [rax + 0x90]
// asm:   0x5e073f3: mov rax, qword ptr [rax + 0xb8]
// asm:   0x5e073fa: mov r15, qword ptr [rax]
// asm:   0x5e073fd: mov rax, qword ptr [r14]
// asm:   0x5e07400: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5e07407: mov rdi, r14
// asm:   0x5e0740a: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5e07410: mov rbx, rax
// asm:   0x5e07413: lea rdi, [rip + 0x14f185e]  ; "network_error"
// asm:   0x5e0741a: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e0741f: xor edi, edi
// asm:   0x5e07421: mov rsi, r15
// asm:   0x5e07424: mov rdx, rax
// asm:   0x5e07427: mov rcx, rbx
// asm:   0x5e0742a: xor r8d, r8d
// asm:   0x5e0742d: xor r9d, r9d
// asm:   0x5e07430: call 0x5e2a1f0  ; ApplicationManagers_Api_AottgApiResult__Fail()
// asm:   0x5e07435: mov rdi, qword ptr [rbp + 0x40]
// asm:   0x5e07439: mov rdx, qword ptr [rbp + 0x28]
// asm:   0x5e0743d: mov rsi, rax
// asm:   0x5e07440: call qword ptr [rbp + 0x18]
// asm:   0x5e07443: jmp 0x5e071ae
// asm:   0x5e07448: mov edi, 8
// asm:   0x5e0744d: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5e07452: mov rcx, qword ptr [rbx]
// asm:   0x5e07455: mov qword ptr [rax], rcx
// asm:   0x5e07458: lea rsi, [rip + 0x10260a1]
// asm:   0x5e0745f: mov rdi, rax
// asm:   0x5e07462: xor edx, edx
// asm:   0x5e07464: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5e07469: jmp 0x5e0751d
// asm:   0x5e0746e: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x5e07473: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x5e07478: jmp 0x5e0749d
// asm:   0x5e0747a: jmp 0x5e0749d
// asm:   0x5e0747c: jmp 0x5e0749d
// asm:   0x5e0747e: jmp 0x5e0749d
// asm:   0x5e07480: jmp 0x5e0749d
// asm:   0x5e07482: jmp 0x5e0749d
// asm:   0x5e07484: jmp 0x5e0749d
// asm:   0x5e07486: jmp 0x5e0749d
// asm:   0x5e07488: jmp 0x5e0749d
// asm:   0x5e0748a: jmp 0x5e0749d
// asm:   0x5e0748c: jmp 0x5e0749d
// asm:   0x5e0748e: jmp 0x5e0749d
// asm:   0x5e07490: mov r15, rdx
// asm:   0x5e07493: mov r14, rax
// asm:   0x5e07496: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e0749b: jmp 0x5e074a3
// asm:   0x5e0749d: mov r15, rdx
// asm:   0x5e074a0: mov r14, rax
// asm:   0x5e074a3: mov eax, 1
// asm:   0x5e074a8: cmp r15d, eax
// asm:   0x5e074ab: jne 0x5e07525
// asm:   0x5e074ad: mov rdi, r14
// asm:   0x5e074b0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e074b5: mov rbx, rax
// asm:   0x5e074b8: lea rdi, [rip + 0x1470c01]  ; TypeInfo_System_Exception
// asm:   0x5e074bf: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e074c4: mov rcx, qword ptr [rbx]
// asm:   0x5e074c7: mov rsi, qword ptr [rcx]
// asm:   0x5e074ca: mov rdi, rax
// asm:   0x5e074cd: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5e074d2: test al, al
// asm:   0x5e074d4: je 0x5e074fc
// asm:   0x5e074d6: mov rbx, qword ptr [rbx]
// asm:   0x5e074d9: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e074de: mov rdi, qword ptr [rsp + 8]
// asm:   0x5e074e3: mov dword ptr [rdi], 0xfffffffe
// asm:   0x5e074e9: add rdi, 8
// asm:   0x5e074ed: mov rsi, rbx
// asm:   0x5e074f0: xor edx, edx
// asm:   0x5e074f2: call 0x475eec0  ; il2cpp_runtime_helper_0475eec0()
// asm:   0x5e074f7: jmp 0x5e0724e
// asm:   0x5e074fc: mov edi, 8
// asm:   0x5e07501: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5e07506: mov rcx, qword ptr [rbx]
// asm:   0x5e07509: mov qword ptr [rax], rcx
// asm:   0x5e0750c: lea rsi, [rip + 0x1025fed]
// asm:   0x5e07513: mov rdi, rax
// asm:   0x5e07516: xor edx, edx
// asm:   0x5e07518: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5e0751d: mov r14, rax
// asm:   0x5e07520: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e07525: mov rdi, r14
// asm:   0x5e07528: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e0752d: mov rdi, rax
// asm:   0x5e07530: call 0x2ab61e0  ; __clang_call_terminate()

void ApplicationManagers_AccountManager__SendApiJsonAsync_d__172__MoveNext
               (ApplicationManagers_AccountManager__SendApiJsonAsync_d__172_o *__this,MethodInfo *method)

{
  bool parseJson;
  bool reportNetworkError;
  System_String_o *path;
  System_String_o *json;
  System_String_o *bearer;
  System_Nullable_int__Fields timeoutSeconds;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  System_Action_AottgApiResult__o *pSVar3;
  Il2CppObject *pIVar4;
  Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult__o *pCVar5;
  short sVar6;
  char cVar7;
  Il2CppClass *pIVar8;
  VirtualInvokeData *pVVar9;
  ApplicationManagers_Api_AottgApiResult_o *pAVar10;
  ulong uVar11;
  long lVar12;
  MethodInfo *in_stack_ffffffffffffff48;
  Il2CppObject *local_98;
  ApplicationManagers_Api_AottgApiResult_o *pAStack_90;
  undefined8 local_88;
  Cysharp_Threading_Tasks_UniTask_AottgApiResult__o local_78;
  Il2CppObject *local_58;
  ApplicationManagers_Api_AottgApiResult_o *pAStack_50;
  undefined8 local_48;
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_075483c2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_71a26b0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_GetResult);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_get_IsCompleted);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter);
    Il2CppMethodInitialized_075483c2 = '\x01';
  }
  local_98 = (Il2CppObject *)0x0;
  pAStack_90 = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
  local_88 = 0;
  local_58 = (Il2CppObject *)0x0;
  pAStack_50 = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
  local_48._0_2_ = 0;
  local_48._2_6_ = 0;
  if ((__this->fields).__1__state == 0) {
    pCVar5 = &(__this->fields).__u__1;
    local_88._0_2_ = (pCVar5->fields).task.fields.token;
    local_88._2_6_ = *(undefined6 *)&(pCVar5->fields).task.fields.field_0x12;
    local_98 = (Il2CppObject *)(__this->fields).__u__1.fields.task.fields.source;
    pAStack_90 = (ApplicationManagers_Api_AottgApiResult_o *)(__this->fields).__u__1.fields.task.fields.result
    ;
    (__this->fields).__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    (__this->fields).__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
    *(undefined8 *)&(__this->fields).__u__1.fields.task.fields.token = 0;
    (__this->fields).__1__state = -1;
  }
  else {
    local_38 = (__this->fields).method;
    path = (__this->fields).path;
    json = (__this->fields).json;
    bearer = (__this->fields).bearer;
    parseJson = (__this->fields).parseJson;
    reportNetworkError = (__this->fields).reportNetworkError;
    timeoutSeconds = (__this->fields).timeoutSeconds.fields;
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    ApplicationManagers_AccountManager__SendApiJsonAsync_5d01c30
              (&local_78,local_38,path,json,bearer,parseJson,reportNetworkError,
               (System_Nullable_int__o)timeoutSeconds,in_stack_ffffffffffffff48);
    local_48._0_2_ = local_78.fields.token;
    local_48._2_6_ = local_78.fields._18_6_;
    local_58 = (Il2CppObject *)local_78.fields.source;
    pAStack_50 = local_78.fields.result;
    local_78.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
    local_78.fields.result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
    local_78.fields.token = 0;
    local_78.fields._18_6_ = 0;
    if (((MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter->klass->_2).bitflags1 & 1) == 0
       ) {
      il2cpp_codegen_class_init_checked
                (MethodInfo_Cysharp_Threading_Tasks_UniTask_AottgApiResult_GetAwaiter->klass);
    }
    local_78.fields.token = (int16_t)local_48;
    local_78.fields._18_6_ = local_48._2_6_;
    local_78.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)local_58;
    local_78.fields.result = pAStack_50;
    Il2CppCodeGenWriteBarrier((void **)&local_78);
    local_88._0_2_ = local_78.fields.token;
    local_88._2_6_ = local_78.fields._18_6_;
    local_98 = (Il2CppObject *)local_78.fields.source;
    pAStack_90 = local_78.fields.result;
    cVar7 = il2cpp_runtime_helper_045ee340(&local_98,
                         MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_get_IsCompleted);
    if (cVar7 == '\0') {
      (__this->fields).__1__state = 0;
      (__this->fields).__u__1.fields.task.fields.source =
           (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)local_98;
      (__this->fields).__u__1.fields.task.fields.result = (Il2CppObject *)pAStack_90;
      pCVar5 = &(__this->fields).__u__1;
      (pCVar5->fields).task.fields.token = (int16_t)local_88;
      *(undefined6 *)&(pCVar5->fields).task.fields.field_0x12 = local_88._2_6_;
      Il2CppCodeGenWriteBarrier((void **)&(__this->fields).__u__1);
      il2cpp_runtime_helper_0350c9b0(&(__this->fields).__t__builder,&local_98,__this,
                   MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_AwaitUnsafeOnCompleted_UniTas_71a26b0
                  );
      return;
    }
  }
  pIVar4 = local_98;
  if (local_98 == (Il2CppObject *)0x0) {
    pSVar3 = (__this->fields).onComplete;
    pAVar10 = pAStack_90;
  }
  else {
    sVar6 = (int16_t)local_88;
    pIVar8 = MethodInfo_Cysharp_Threading_Tasks_UniTask_Awaiter_AottgApiResult_GetResult->klass;
    if (((pIVar8->_2).bitflags1 & 1) == 0) {
      pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
    }
    pIVar8 = pIVar8->rgctx_data[5].klass;
    if (((pIVar8->_2).bitflags1 & 1) == 0) {
      pIVar8 = il2cpp_codegen_class_init_checked(pIVar8);
    }
    pIVar1 = pIVar4->klass;
    uVar11 = (ulong)(pIVar1->_2).interface_offsets_count;
    if (uVar11 != 0) {
      pIVar2 = (pIVar1->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(Il2CppClass **)((long)&pIVar2->interfaceType + lVar12) == pIVar8) {
          pVVar9 = (VirtualInvokeData *)&pIVar1->vtable[*(int *)((long)&pIVar2->offset + lVar12)].methodPtr;
          goto label_05e07186;
        }
        lVar12 = lVar12 + 0x10;
      } while (uVar11 * 0x10 != lVar12);
    }
    pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar4,pIVar8,0);
label_05e07186:
    pAVar10 = (ApplicationManagers_Api_AottgApiResult_o *)
              (*pVVar9->methodPtr)(pIVar4,(ulong)(uint)(int)sVar6,pVVar9->method);
    pSVar3 = (__this->fields).onComplete;
  }
  if (pSVar3 != (System_Action_AottgApiResult__o *)0x0) {
    (*(code *)(pSVar3->fields).invoke_impl)((pSVar3->fields).method_code,pAVar10,(pSVar3->fields).method);
  }
  (__this->fields).__1__state = -2;
  if (Il2CppMethodInitialized_07541078 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise);
    Il2CppMethodInitialized_07541078 = '\x01';
  }
  pIVar4 = (Il2CppObject *)(__this->fields).__t__builder.fields.runnerPromise;
  if (pIVar4 != (Il2CppObject *)0x0) {
    pIVar8 = pIVar4->klass;
    uVar11 = (ulong)(pIVar8->_2).interface_offsets_count;
    if (uVar11 != 0) {
      pIVar2 = (pIVar8->_1).interfaceOffsets;
      lVar12 = 0;
      do {
        if (*(Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_c **)
             ((long)&pIVar2->interfaceType + lVar12) ==
            TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise) {
          pVVar9 = (VirtualInvokeData *)
                   &pIVar8->vtable[*(int *)((long)&pIVar2->offset + lVar12) + 2].methodPtr;
          goto label_05e07245;
        }
        lVar12 = lVar12 + 0x10;
      } while (uVar11 * 0x10 != lVar12);
    }
    pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar4,(Il2CppClass *)
                               TypeInfo_Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise,2)
    ;
label_05e07245:
    (*pVVar9->methodPtr)(pIVar4,pVVar9->method);
  }
  return;
}


// ApplicationManagers.AccountManager.<SendApiJsonAsync>d__172$$SetStateMachine
// il2cpp: void ApplicationManagers_AccountManager__SendApiJsonAsync_d__172__SetStateMachine (ApplicationManagers_AccountManager__SendApiJsonAsync_d__172_o __this, System_Runtime_CompilerServices_IAsyncStateMachine_o* stateMachine, const MethodInfo* method);
// 0x5e07540

void ApplicationManagers_AccountManager__SendApiJsonAsync_d__172__SetStateMachine
               (ApplicationManagers_AccountManager__SendApiJsonAsync_d__172_o *__this,
               System_Runtime_CompilerServices_IAsyncStateMachine_o *stateMachine,MethodInfo *method)

{
  Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder__SetStateMachine
            (&(__this->fields).__t__builder,stateMachine,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager.<SendMeJson>d__54$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__SendMeJson_d__54___ctor (ApplicationManagers_AccountManager__SendMeJson_d__54_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5e075c0

void ApplicationManagers_AccountManager__SendMeJson_d__54___ctor
               (ApplicationManagers_AccountManager__SendMeJson_d__54_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<SendMeJson>d__54$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__SendMeJson_d__54__System_IDisposable_Dispose (ApplicationManagers_AccountManager__SendMeJson_d__54_o* __this, const MethodInfo* method);
// 0x5e075e0

void ApplicationManagers_AccountManager__SendMeJson_d__54__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__SendMeJson_d__54_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<SendMeJson>d__54$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__SendMeJson_d__54__MoveNext (ApplicationManagers_AccountManager__SendMeJson_d__54_o* __this, const MethodInfo* method);
// 0x5e075f0

bool ApplicationManagers_AccountManager__SendMeJson_d__54__MoveNext
               (ApplicationManagers_AccountManager__SendMeJson_d__54_o *__this,MethodInfo *method)

{
  ApplicationManagers_AccountManager___c__DisplayClass54_0_o **targetAddress;
  int iVar1;
  uint32_t uVar2;
  ApplicationManagers_AccountManager_o *__this_00;
  ApplicationManagers_Api_AottgApiResult_o *pAVar3;
  System_String_o *path;
  System_String_o *json;
  System_String_o *bearer;
  bool bVar4;
  ApplicationManagers_AccountManager___c__DisplayClass54_0_o *pAVar5;
  Il2CppObject *pIVar6;
  System_Action_AottgApiResult__o *__this_01;
  System_Action_bool__string__JSONNode__o *pSVar7;
  System_String_o **ppSVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  System_String_o *pSVar10;
  undefined8 uVar11;
  intptr_t iVar12;
  intptr_t iVar13;
  
  if (Il2CppMethodInitialized_075483d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgApiResult);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass54_0_SendMeJson_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass54_0);
    il2cpp_codegen_initialize_runtime_metadata(&"GET");
    il2cpp_codegen_initialize_runtime_metadata(&"unknown_error");
    Il2CppMethodInitialized_075483d7 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 == 2) {
    (__this->fields).__1__state = -1;
    pAVar5 = (__this->fields).__8__1;
    if (pAVar5 == (ApplicationManagers_AccountManager___c__DisplayClass54_0_o *)0x0) goto label_05e07930;
    pAVar3 = (pAVar5->fields).result;
    if (pAVar3 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
      pSVar7 = (__this->fields).onComplete;
      if (pSVar7 == (System_Action_bool__string__JSONNode__o *)0x0) {
        return false;
      }
      ppSVar8 = &"unknown_error";
    }
    else {
      if ((pAVar3->fields)._Success_k__BackingField != false) {
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        ApplicationManagers_AccountManager__ClearOwnPublicProfileCache((MethodInfo *)0x0);
        pSVar7 = (__this->fields).onComplete;
        if (pSVar7 == (System_Action_bool__string__JSONNode__o *)0x0) {
          return false;
        }
        pAVar5 = (__this->fields).__8__1;
        if ((pAVar5 == (ApplicationManagers_AccountManager___c__DisplayClass54_0_o *)0x0) ||
           (pAVar3 = (pAVar5->fields).result, pAVar3 == (ApplicationManagers_Api_AottgApiResult_o *)0x0))
        goto label_05e07930;
        pSVar9 = (pAVar3->fields)._Json_k__BackingField;
        iVar13 = (pSVar7->fields).method;
        iVar12 = (pSVar7->fields).method_code;
        uVar11 = 1;
        pSVar10 = (System_String_o *)0x0;
        goto label_05e078d8;
      }
      pSVar7 = (__this->fields).onComplete;
      if (pSVar7 == (System_Action_bool__string__JSONNode__o *)0x0) {
        return false;
      }
      ppSVar8 = &(pAVar3->fields)._Error_k__BackingField;
    }
    pSVar10 = *ppSVar8;
    iVar13 = (pSVar7->fields).method;
    iVar12 = (pSVar7->fields).method_code;
    uVar11 = 0;
    pSVar9 = (SimpleJSONFixed_JSONNode_o *)0x0;
label_05e078d8:
    (*(code *)(pSVar7->fields).invoke_impl)(iVar12,uVar11,pSVar10,pSVar9,iVar13);
    return false;
  }
  if (iVar1 == 1) {
    (__this->fields).__1__state = -1;
    return false;
  }
  if (iVar1 != 0) {
    return false;
  }
  __this_00 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  pAVar5 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass54_0);
  ApplicationManagers_AccountManager___c__DisplayClass54_0___ctor(pAVar5,(MethodInfo *)0x0);
  targetAddress = &(__this->fields).__8__1;
  (__this->fields).__8__1 = pAVar5;
  Il2CppCodeGenWriteBarrier(targetAddress);
  bVar4 = System_String__Equals_52ffe30((__this->fields).method,"GET",5,(MethodInfo *)0x0);
  if (bVar4) {
    if (__this_00 != (ApplicationManagers_AccountManager_o *)0x0) {
      pIVar6 = (Il2CppObject *)
               ApplicationManagers_AccountManager__SendMeReadJson
                         (__this_00,(__this->fields).path,(__this->fields).onComplete,(MethodInfo *)0x0);
      (__this->fields).__2__current = pIVar6;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
      (__this->fields).__1__state = 1;
      return true;
    }
    goto label_05e07930;
  }
  pAVar5 = *targetAddress;
  if (pAVar5 == (ApplicationManagers_AccountManager___c__DisplayClass54_0_o *)0x0) goto label_05e07930;
  (pAVar5->fields).result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(pAVar5->fields).result);
  pSVar10 = (__this->fields).method;
  path = (__this->fields).path;
  json = (__this->fields).json;
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (Il2CppMethodInitialized_075483c7 != '\0') goto label_05e07801;
label_05e078fe:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483c7 = '\x01';
    uVar2 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_075483c7 == '\0') goto label_05e078fe;
label_05e07801:
    uVar2 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bearer = TypeInfo_ApplicationManagers_AccountManager->static_fields->_AuthToken_k__BackingField;
  pAVar5 = *targetAddress;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgApiResult);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_01,(Il2CppObject *)pAVar5,
             (intptr_t)MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass54_0_SendMeJson_b__0,
             (MethodInfo_4A81BE0 *)0x0);
  if (__this_00 != (ApplicationManagers_AccountManager_o *)0x0) {
    pIVar6 = (Il2CppObject *)
             ApplicationManagers_AccountManager__SendApiJson
                       (__this_00,pSVar10,path,json,bearer,true,__this_01,(__this->fields).reportNetworkError,
                        (System_Nullable_int__o)0x0,(MethodInfo *)0x0);
    (__this->fields).__2__current = pIVar6;
    Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
    (__this->fields).__1__state = 2;
    return true;
  }
label_05e07930:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager.<SendMeJson>d__54$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__SendMeJson_d__54__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__SendMeJson_d__54_o* __this, const MethodInfo* method);
// 0x5e07940

Il2CppObject *
ApplicationManagers_AccountManager__SendMeJson_d__54__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_AccountManager__SendMeJson_d__54_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<SendMeJson>d__54$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__SendMeJson_d__54__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__SendMeJson_d__54_o* __this, const MethodInfo* method);
// 0x5e07950

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
// 0x5e07990

Il2CppObject *
ApplicationManagers_AccountManager__SendMeJson_d__54__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__SendMeJson_d__54_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<SendMeReadJson>d__55$$.ctor
// il2cpp: void ApplicationManagers_AccountManager__SendMeReadJson_d__55___ctor (ApplicationManagers_AccountManager__SendMeReadJson_d__55_o* __this, int32_t __1__state, const MethodInfo* method);
// 0x5e079a0

void ApplicationManagers_AccountManager__SendMeReadJson_d__55___ctor
               (ApplicationManagers_AccountManager__SendMeReadJson_d__55_o *__this,int32_t __1__state,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = __1__state;
  return;
}


// ApplicationManagers.AccountManager.<SendMeReadJson>d__55$$System.IDisposable.Dispose
// il2cpp: void ApplicationManagers_AccountManager__SendMeReadJson_d__55__System_IDisposable_Dispose (ApplicationManagers_AccountManager__SendMeReadJson_d__55_o* __this, const MethodInfo* method);
// 0x5e079c0

void ApplicationManagers_AccountManager__SendMeReadJson_d__55__System_IDisposable_Dispose
               (ApplicationManagers_AccountManager__SendMeReadJson_d__55_o *__this,MethodInfo *method)

{
  return;
}


// ApplicationManagers.AccountManager.<SendMeReadJson>d__55$$MoveNext
// il2cpp: bool ApplicationManagers_AccountManager__SendMeReadJson_d__55__MoveNext (ApplicationManagers_AccountManager__SendMeReadJson_d__55_o* __this, const MethodInfo* method);
// 0x5e079d0

bool ApplicationManagers_AccountManager__SendMeReadJson_d__55__MoveNext
               (ApplicationManagers_AccountManager__SendMeReadJson_d__55_o *__this,MethodInfo *method)

{
  ApplicationManagers_AccountManager___c__DisplayClass55_0_o **targetAddress;
  int iVar1;
  uint32_t uVar2;
  ApplicationManagers_Api_AottgApiResult_o *pAVar3;
  ApplicationManagers_AccountManager_o *__this_00;
  System_String_o *bearer;
  ApplicationManagers_AccountManager___c__DisplayClass55_0_o *pAVar4;
  System_Action_AottgApiResult__o *__this_01;
  Il2CppObject *pIVar5;
  System_Action_bool__string__JSONNode__o *pSVar6;
  System_String_o **ppSVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  System_String_o *pSVar9;
  undefined8 uVar10;
  intptr_t iVar11;
  intptr_t iVar12;
  
  if (Il2CppMethodInitialized_075483d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgApiResult);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass55_0_SendMeReadJson_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass55_0);
    il2cpp_codegen_initialize_runtime_metadata(&"unknown_error");
    Il2CppMethodInitialized_075483d8 = '\x01';
  }
  iVar1 = (__this->fields).__1__state;
  if (iVar1 != 0) {
    if (iVar1 != 1) goto label_05e07c06;
    (__this->fields).__1__state = -1;
    pAVar4 = (__this->fields).__8__1;
    if (pAVar4 == (ApplicationManagers_AccountManager___c__DisplayClass55_0_o *)0x0) goto label_05e07c1b;
    pAVar3 = (pAVar4->fields).result;
    if (pAVar3 == (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
      pSVar6 = (__this->fields).onComplete;
      if (pSVar6 == (System_Action_bool__string__JSONNode__o *)0x0) goto label_05e07c06;
      ppSVar7 = &"unknown_error";
label_05e07bf4:
      pSVar9 = *ppSVar7;
      iVar12 = (pSVar6->fields).method;
      iVar11 = (pSVar6->fields).method_code;
      uVar10 = 0;
      pSVar8 = (SimpleJSONFixed_JSONNode_o *)0x0;
    }
    else {
      pSVar6 = (__this->fields).onComplete;
      if ((pAVar3->fields)._Success_k__BackingField == false) {
        if (pSVar6 == (System_Action_bool__string__JSONNode__o *)0x0) goto label_05e07c06;
        ppSVar7 = &(pAVar3->fields)._Error_k__BackingField;
        goto label_05e07bf4;
      }
      if (pSVar6 == (System_Action_bool__string__JSONNode__o *)0x0) goto label_05e07c06;
      pSVar8 = (pAVar3->fields)._Json_k__BackingField;
      iVar12 = (pSVar6->fields).method;
      iVar11 = (pSVar6->fields).method_code;
      uVar10 = 1;
      pSVar9 = (System_String_o *)0x0;
    }
    (*(code *)(pSVar6->fields).invoke_impl)(iVar11,uVar10,pSVar9,pSVar8,iVar12);
    goto label_05e07c06;
  }
  __this_00 = (__this->fields).__4__this;
  (__this->fields).__1__state = -1;
  pAVar4 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass55_0);
  ApplicationManagers_AccountManager___c__DisplayClass55_0___ctor(pAVar4,(MethodInfo *)0x0);
  targetAddress = &(__this->fields).__8__1;
  (__this->fields).__8__1 = pAVar4;
  Il2CppCodeGenWriteBarrier(targetAddress);
  pAVar4 = (__this->fields).__8__1;
  if (pAVar4 == (ApplicationManagers_AccountManager___c__DisplayClass55_0_o *)0x0) goto label_05e07c1b;
  (pAVar4->fields).result = (ApplicationManagers_Api_AottgApiResult_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(pAVar4->fields).result);
  pSVar9 = (__this->fields).path;
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (Il2CppMethodInitialized_075483c7 != '\0') goto label_05e07b13;
label_05e07ba9:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483c7 = '\x01';
    uVar2 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_075483c7 == '\0') goto label_05e07ba9;
label_05e07b13:
    uVar2 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bearer = TypeInfo_ApplicationManagers_AccountManager->static_fields->_AuthToken_k__BackingField;
  pAVar4 = *targetAddress;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgApiResult);
  System_Action_object____ctor
            ((System_Action_object__o *)__this_01,(Il2CppObject *)pAVar4,
             (intptr_t)MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass55_0_SendMeReadJson_b__0,
             (MethodInfo_4A81BE0 *)0x0);
  if (__this_00 == (ApplicationManagers_AccountManager_o *)0x0) {
label_05e07c1b:
    ThrowNullReferenceException();
  }
  pIVar5 = (Il2CppObject *)
           ApplicationManagers_AccountManager__SendApiGet
                     (__this_00,pSVar9,bearer,true,__this_01,(MethodInfo *)0x0);
  (__this->fields).__2__current = pIVar5;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__2__current);
  (__this->fields).__1__state = 1;
label_05e07c06:
  return iVar1 == 0;
}


// ApplicationManagers.AccountManager.<SendMeReadJson>d__55$$System.Collections.Generic.IEnumerator<System.Object>.get_Current
// il2cpp: Il2CppObject* ApplicationManagers_AccountManager__SendMeReadJson_d__55__System_Collections_Generic_IEnumerator_System_Object__get_Current (ApplicationManagers_AccountManager__SendMeReadJson_d__55_o* __this, const MethodInfo* method);
// 0x5e07c20

Il2CppObject *
ApplicationManagers_AccountManager__SendMeReadJson_d__55__System_Collections_Generic_IEnumerator_System_Object__get_Current
          (ApplicationManagers_AccountManager__SendMeReadJson_d__55_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager.<SendMeReadJson>d__55$$System.Collections.IEnumerator.Reset
// il2cpp: void ApplicationManagers_AccountManager__SendMeReadJson_d__55__System_Collections_IEnumerator_Reset (ApplicationManagers_AccountManager__SendMeReadJson_d__55_o* __this, const MethodInfo* method);
// 0x5e07c30

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
// 0x5e07c70

Il2CppObject *
ApplicationManagers_AccountManager__SendMeReadJson_d__55__System_Collections_IEnumerator_get_Current
          (ApplicationManagers_AccountManager__SendMeReadJson_d__55_o *__this,MethodInfo *method)

{
  return (__this->fields).__2__current;
}


// ApplicationManagers.AccountManager$$LoginWithOAuth
// il2cpp: void ApplicationManagers_AccountManager__LoginWithOAuth (System_String_o* provider, System_Action_bool__string__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x5df9610
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df964d: jmp 0x5df9762

void ApplicationManagers_AccountManager__LoginWithOAuth
               (System_String_o *provider,System_Action_bool__string__o *onComplete,bool reportNetworkError,
               MethodInfo *method)

{
  uint32_t uVar1;
  int32_t iVar2;
  ApplicationManagers_AccountManager_o *pAVar3;
  ApplicationManagers_AccountManager__OAuthFlow_d__8_o *__this;
  UnityEngine_Coroutine_o *pUVar4;
  System_Action_bool__string__o *pSVar5;
  
  pSVar5 = onComplete;
  if (Il2CppMethodInitialized_07548338 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548338 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pAVar3 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
  }
  else {
    pAVar3 = *(ApplicationManagers_AccountManager_o **)
              ((long)((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->static_fields + 0x50);
  }
  if (pAVar3 != (ApplicationManagers_AccountManager_o *)0x0) {
    ApplicationManagers_AccountManager__CancelOAuthFlow(pAVar3,(MethodInfo *)pSVar5);
    TypeInfo_ApplicationManagers_AccountManager->static_fields->_oauthPendingCallback = onComplete;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_ApplicationManagers_AccountManager->static_fields->_oauthPendingCallback);
    pAVar3 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
    if (pAVar3 != (ApplicationManagers_AccountManager_o *)0x0) {
      iVar2 = (pAVar3->fields)._oauthAttemptId;
      if (Il2CppMethodInitialized_0754833a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_ApplicationManagers_AccountManager_OAuthFlow_d__8);
        Il2CppMethodInitialized_0754833a = '\x01';
      }
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_OAuthFlow_d__8);
      System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
      (__this->fields).__1__state = 0;
      (__this->fields).__4__this = pAVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields).__4__this);
      (__this->fields).provider = provider;
      Il2CppCodeGenWriteBarrier(&(__this->fields).provider);
      (__this->fields).attemptId = iVar2;
      (__this->fields).reportNetworkError = reportNetworkError;
      pUVar4 = UnityEngine_MonoBehaviour__StartCoroutine_691c390
                         ((UnityEngine_MonoBehaviour_o *)pAVar3,(System_Collections_IEnumerator_o *)__this,
                          (MethodInfo *)0x0);
      (pAVar3->fields)._oauthFlowCoroutine = pUVar4;
      Il2CppCodeGenWriteBarrier(&(pAVar3->fields)._oauthFlowCoroutine);
      return;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$CancelOAuthLogin
// il2cpp: void ApplicationManagers_AccountManager__CancelOAuthLogin (const MethodInfo* method);
// 0x5df98a0

void ApplicationManagers_AccountManager__CancelOAuthLogin(MethodInfo *method)

{
  System_Action_bool__string__o *pSVar1;
  ApplicationManagers_AccountManager_o *__this;
  MethodInfo *in_RSI;
  
  if (Il2CppMethodInitialized_07548339 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&"oauth_denied");
    Il2CppMethodInitialized_07548339 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pSVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_oauthPendingCallback;
  __this = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
  if (__this != (ApplicationManagers_AccountManager_o *)0x0) {
    ApplicationManagers_AccountManager__CancelOAuthFlow(__this,in_RSI);
  }
  if (pSVar1 == (System_Action_bool__string__o *)0x0) {
    return;
  }
  (*(code *)(pSVar1->fields).invoke_impl)
            ((pSVar1->fields).method_code,0,"oauth_denied",(pSVar1->fields).method);
  return;
}


// ApplicationManagers.AccountManager$$OAuthFlow
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__OAuthFlow (ApplicationManagers_AccountManager_o* __this, System_String_o* provider, int32_t attemptId, bool reportNetworkError, const MethodInfo* method);
// 0x5df9810

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__OAuthFlow
          (ApplicationManagers_AccountManager_o *__this,System_String_o *provider,int32_t attemptId,
          bool reportNetworkError,MethodInfo *method)

{
  ApplicationManagers_AccountManager__OAuthFlow_d__8_o *__this_00;
  
  if (Il2CppMethodInitialized_0754833a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager_OAuthFlow_d__8);
    Il2CppMethodInitialized_0754833a = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_OAuthFlow_d__8);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).provider = provider;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).provider);
  (__this_00->fields).attemptId = attemptId;
  (__this_00->fields).reportNetworkError = reportNetworkError;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ApplicationManagers.AccountManager$$PollUnityOAuth
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__PollUnityOAuth (ApplicationManagers_AccountManager_o* __this, ApplicationManagers_AccountManager_UnityOAuthStart_o start, int32_t attemptId, bool reportNetworkError, const MethodInfo* method);
// 0x5df9940

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__PollUnityOAuth
          (ApplicationManagers_AccountManager_o *__this,
          ApplicationManagers_AccountManager_UnityOAuthStart_o start,int32_t attemptId,bool reportNetworkError
          ,MethodInfo *method)

{
  ApplicationManagers_AccountManager_UnityOAuthStart_o *pAVar1;
  ApplicationManagers_AccountManager__PollUnityOAuth_d__9_o *__this_00;
  
  if (Il2CppMethodInitialized_0754833b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_PollUnityOAuth_d__9);
    Il2CppMethodInitialized_0754833b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_PollUnityOAuth_d__9);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  pAVar1 = &(__this_00->fields).start;
  (pAVar1->fields).ExpiresAt.fields._offsetMinutes = start.fields.ExpiresAt.fields._offsetMinutes;
  *(undefined6 *)&(pAVar1->fields).ExpiresAt.fields.field_0xa = start.fields.ExpiresAt.fields._10_6_;
  (__this_00->fields).start.fields.PollIntervalSeconds = start.fields.PollIntervalSeconds;
  *(undefined4 *)&(__this_00->fields).start.fields.field_0x2c = start.fields._44_4_;
  (__this_00->fields).start.fields.AuthorizationUrl = start.fields.AuthorizationUrl;
  (__this_00->fields).start.fields.ExpiresAt.fields._dateTime.fields._dateData =
       (uint64_t)start.fields.ExpiresAt.fields._dateTime.fields._dateData;
  (__this_00->fields).start.fields.SessionId = start.fields.SessionId;
  (__this_00->fields).start.fields.PollToken = start.fields.PollToken;
  Il2CppCodeGenWriteBarrier((void **)&(__this_00->fields).start);
  (__this_00->fields).attemptId = attemptId;
  (__this_00->fields).reportNetworkError = reportNetworkError;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ApplicationManagers.AccountManager$$ExchangeOAuthCode
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__ExchangeOAuthCode (ApplicationManagers_AccountManager_o* __this, System_String_o* code, bool reportNetworkError, const MethodInfo* method);
// 0x5df9a10

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__ExchangeOAuthCode
          (ApplicationManagers_AccountManager_o *__this,System_String_o *code,bool reportNetworkError,
          MethodInfo *method)

{
  ApplicationManagers_AccountManager__ExchangeOAuthCode_d__10_o *__this_00;
  
  if (Il2CppMethodInitialized_0754833c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_ExchangeOAuthCode_d__10);
    Il2CppMethodInitialized_0754833c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_ExchangeOAuthCode_d__10);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).code = code;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).code);
  (__this_00->fields).reportNetworkError = reportNetworkError;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ApplicationManagers.AccountManager$$CancelOAuthFlow
// il2cpp: void ApplicationManagers_AccountManager__CancelOAuthFlow (ApplicationManagers_AccountManager_o* __this, const MethodInfo* method);
// 0x5df9770

void ApplicationManagers_AccountManager__CancelOAuthFlow
               (ApplicationManagers_AccountManager_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  UnityEngine_Coroutine_o *routine;
  
  if (Il2CppMethodInitialized_0754833d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_0754833d = '\x01';
  }
  routine = (__this->fields)._oauthFlowCoroutine;
  if (routine != (UnityEngine_Coroutine_o *)0x0) {
    UnityEngine_MonoBehaviour__StopCoroutine_691c6e0
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
    (__this->fields)._oauthFlowCoroutine = (UnityEngine_Coroutine_o *)0x0;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._oauthFlowCoroutine);
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_oauthPendingCallback =
       (System_Action_bool__string__o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_AccountManager->static_fields->_oauthPendingCallback);
  piVar1 = &(__this->fields)._oauthAttemptId;
  *piVar1 = *piVar1 + 1;
  return;
}


// ApplicationManagers.AccountManager$$IsCurrentOAuthAttempt
// il2cpp: bool ApplicationManagers_AccountManager__IsCurrentOAuthAttempt (ApplicationManagers_AccountManager_o* __this, int32_t attemptId, const MethodInfo* method);
// 0x5df9ac0

bool ApplicationManagers_AccountManager__IsCurrentOAuthAttempt
               (ApplicationManagers_AccountManager_o *__this,int32_t attemptId,MethodInfo *method)

{
  int iVar1;
  
  if (Il2CppMethodInitialized_0754833e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_0754833e = '\x01';
    iVar1 = (__this->fields)._oauthAttemptId;
  }
  else {
    iVar1 = (__this->fields)._oauthAttemptId;
  }
  if (iVar1 != attemptId) {
    return false;
  }
  if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  return TypeInfo_ApplicationManagers_AccountManager->static_fields->_oauthPendingCallback !=
         (System_Action_bool__string__o *)0x0;
}


// ApplicationManagers.AccountManager$$CompleteOAuth
// il2cpp: void ApplicationManagers_AccountManager__CompleteOAuth (bool success, System_String_o* error, const MethodInfo* method);
// 0x5df9b30

void ApplicationManagers_AccountManager__CompleteOAuth(bool success,System_String_o *error,MethodInfo *method)

{
  ApplicationManagers_AccountManager_o *pAVar1;
  System_Action_bool__string__o *pSVar2;
  bool bVar3;
  
  if (Il2CppMethodInitialized_0754833f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_0754833f = '\x01';
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
    Il2CppCodeGenWriteBarrier(&(pAVar1->fields)._oauthFlowCoroutine);
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pSVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_oauthPendingCallback;
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_oauthPendingCallback =
       (System_Action_bool__string__o *)0x0;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_ApplicationManagers_AccountManager->static_fields->_oauthPendingCallback);
  if (pSVar2 == (System_Action_bool__string__o *)0x0) {
    return;
  }
  (*(code *)(pSVar2->fields).invoke_impl)((pSVar2->fields).method_code,success,error,(pSVar2->fields).method);
  return;
}


// ApplicationManagers.AccountManager$$TryParseUnityOAuthStart
// il2cpp: bool ApplicationManagers_AccountManager__TryParseUnityOAuthStart (System_String_o* json, ApplicationManagers_AccountManager_UnityOAuthStart_o* start, const MethodInfo* method);
// 0x5df9c60
// eh: try 0x5df9cf6..0x5dfa01d -> pad 0x5dfa049 (+31 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5dfa073..0x5dfa0a9 -> pad 0x5dfa0a9 (+1 call sites) cleanup
// eh: try 0x5dfa0ac..0x5dfa0b1 -> pad 0x5dfa0b9 catch (...) [compiler noexcept guard]
// asm: 77 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5df9fa3: mov dword ptr [rsp + 0x38], eax
// asm:   0x5df9fa7: movaps xmm0, xmmword ptr [rsp + 0x10]
// asm:   0x5df9fac: movups xmmword ptr [r14], xmm0
// asm:   0x5df9fb0: mov rax, qword ptr [rsp + 0x20]
// asm:   0x5df9fb5: mov qword ptr [r14 + 0x10], rax
// asm:   0x5df9fb9: mov rax, qword ptr [rsp + 0x28]
// asm:   0x5df9fbe: mov qword ptr [r14 + 0x18], rax
// asm:   0x5df9fc2: movzx eax, word ptr [rsp + 0x30]
// asm:   0x5df9fc7: mov word ptr [r14 + 0x20], ax
// asm:   0x5df9fcc: mov eax, dword ptr [rsp + 0x32]
// asm:   0x5df9fd0: mov dword ptr [r14 + 0x22], eax
// asm:   0x5df9fd4: movzx eax, word ptr [rsp + 0x36]
// asm:   0x5df9fd9: mov word ptr [r14 + 0x26], ax
// asm:   0x5df9fde: mov eax, dword ptr [rsp + 0x38]
// asm:   0x5df9fe2: mov dword ptr [r14 + 0x28], eax
// asm:   0x5df9fe6: mov eax, dword ptr [rsp + 0x3c]
// asm:   0x5df9fea: mov dword ptr [r14 + 0x2c], eax
// asm:   0x5df9fee: mov bl, 1
// asm:   0x5df9ff0: mov rdi, r14
// asm:   0x5df9ff3: xor esi, esi
// asm:   0x5df9ff5: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x5df9ffa: jmp 0x5df9dec
// asm:   0x5dfa01d: jmp 0x5dfa04f
// asm:   0x5dfa01f: jmp 0x5dfa04f
// asm:   0x5dfa021: jmp 0x5dfa04f
// asm:   0x5dfa023: jmp 0x5dfa04f
// asm:   0x5dfa025: jmp 0x5dfa04f
// asm:   0x5dfa027: jmp 0x5dfa04f
// asm:   0x5dfa029: jmp 0x5dfa04f
// asm:   0x5dfa02b: jmp 0x5dfa04f
// asm:   0x5dfa02d: jmp 0x5dfa04f
// asm:   0x5dfa02f: jmp 0x5dfa04f
// asm:   0x5dfa031: jmp 0x5dfa04f
// asm:   0x5dfa033: jmp 0x5dfa04f
// asm:   0x5dfa035: jmp 0x5dfa04f
// asm:   0x5dfa037: jmp 0x5dfa04f
// asm:   0x5dfa039: jmp 0x5dfa04f
// asm:   0x5dfa03b: jmp 0x5dfa04f
// asm:   0x5dfa03d: jmp 0x5dfa04f
// asm:   0x5dfa03f: jmp 0x5dfa04f
// asm:   0x5dfa041: jmp 0x5dfa04f
// asm:   0x5dfa043: jmp 0x5dfa04f
// asm:   0x5dfa045: jmp 0x5dfa04f
// asm:   0x5dfa047: jmp 0x5dfa04f
// asm:   0x5dfa049: jmp 0x5dfa04f
// asm:   0x5dfa04b: jmp 0x5dfa04f
// asm:   0x5dfa04d: jmp 0x5dfa04f
// asm:   0x5dfa04f: mov rbx, rax
// asm:   0x5dfa052: cmp edx, 1
// asm:   0x5dfa055: jne 0x5dfa0b1
// asm:   0x5dfa057: mov rdi, rbx
// asm:   0x5dfa05a: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dfa05f: mov rbx, rax
// asm:   0x5dfa062: lea rax, [rip + 0x175c65f]
// asm:   0x5dfa069: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5dfa06d: mov rax, qword ptr [rbx]
// asm:   0x5dfa070: mov rsi, qword ptr [rax]
// asm:   0x5dfa073: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5dfa078: test al, al
// asm:   0x5dfa07a: je 0x5dfa088
// asm:   0x5dfa07c: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dfa081: xor ebx, ebx
// asm:   0x5dfa083: jmp 0x5df9dec
// asm:   0x5dfa088: mov edi, 8
// asm:   0x5dfa08d: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5dfa092: mov rcx, qword ptr [rbx]
// asm:   0x5dfa095: mov qword ptr [rax], rcx
// asm:   0x5dfa098: lea rsi, [rip + 0x1033461]
// asm:   0x5dfa09f: mov rdi, rax
// asm:   0x5dfa0a2: xor edx, edx
// asm:   0x5dfa0a4: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5dfa0a9: mov rbx, rax
// asm:   0x5dfa0ac: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dfa0b1: mov rdi, rbx
// asm:   0x5dfa0b4: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5dfa0b9: mov rdi, rax
// asm:   0x5dfa0bc: call 0x2ab61e0  ; __clang_call_terminate()

bool ApplicationManagers_AccountManager__TryParseUnityOAuthStart
               (System_String_o *json,ApplicationManagers_AccountManager_UnityOAuthStart_o *start,
               MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  int32_t iVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  SimpleJSONFixed_JSONNode_o *pSVar5;
  System_String_o *value;
  System_String_o *value_00;
  System_String_o *value_01;
  System_String_o *value_02;
  System_DateTimeOffset_o SVar6;
  ushort local_9a;
  System_String_o *local_98;
  System_String_o *pSStack_90;
  System_String_o *local_88;
  System_DateTime_Fields SStack_80;
  ulong local_78;
  undefined8 uStack_70;
  System_DateTime_o local_60;
  System_DateTimeOffset_o local_58;
  System_DateTimeOffset_o local_48;
  
  if (Il2CppMethodInitialized_07548340 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTimeOffset);
    il2cpp_codegen_initialize_runtime_metadata(&"pollToken");
    il2cpp_codegen_initialize_runtime_metadata(&"authorizationUrl");
    il2cpp_codegen_initialize_runtime_metadata(&"sessionId");
    il2cpp_codegen_initialize_runtime_metadata(&"pollIntervalSeconds");
    il2cpp_codegen_initialize_runtime_metadata(&"expiresAt");
    Il2CppMethodInitialized_07548340 = '\x01';
  }
  local_48.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
  local_48.fields._offsetMinutes = 0;
  local_48.fields._10_6_ = 0;
  local_58.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
  local_58.fields._offsetMinutes = 0;
  local_58.fields._10_6_ = 0;
  local_78 = 0;
  uStack_70 = 0;
  local_88 = (System_String_o *)0x0;
  SStack_80._dateData = 0;
  local_98 = (System_String_o *)0x0;
  pSStack_90 = (System_String_o *)0x0;
  *(undefined8 *)&(start->fields).ExpiresAt.fields._offsetMinutes = 0;
  *(undefined8 *)&(start->fields).PollIntervalSeconds = 0;
  (start->fields).AuthorizationUrl = (System_String_o *)0x0;
  (start->fields).ExpiresAt.fields._dateTime.fields._dateData = 0;
  (start->fields).SessionId = (System_String_o *)0x0;
  (start->fields).PollToken = (System_String_o *)0x0;
  pSVar4 = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
  if (pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar5 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                     (pSVar4,"sessionId",(pSVar4->klass->vtable)._7_get_Item.method);
  if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  value = (*(pSVar5->klass->vtable)._9_get_Value.methodPtr)
                    (pSVar5,(pSVar5->klass->vtable)._9_get_Value.method);
  pSVar5 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                     (pSVar4,"pollToken",(pSVar4->klass->vtable)._7_get_Item.method);
  if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  value_00 = (*(pSVar5->klass->vtable)._9_get_Value.methodPtr)
                       (pSVar5,(pSVar5->klass->vtable)._9_get_Value.method);
  pSVar5 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                     (pSVar4,"authorizationUrl",(pSVar4->klass->vtable)._7_get_Item.method);
  if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  value_01 = (*(pSVar5->klass->vtable)._9_get_Value.methodPtr)
                       (pSVar5,(pSVar5->klass->vtable)._9_get_Value.method);
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (((bVar1) || (bVar1 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0), bVar1)) ||
     (bVar1 = System_String__IsNullOrEmpty(value_01,(MethodInfo *)0x0), bVar1)) {
    return false;
  }
  if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
  }
  SVar6 = System_DateTimeOffset__get_UtcNow((MethodInfo *)0x0);
  local_58.fields._dateTime = SVar6.fields._dateTime.fields._dateData;
  local_58.fields._offsetMinutes = SVar6.fields._offsetMinutes;
  SVar6 = System_DateTimeOffset__AddMinutes(&local_58,10.0,(MethodInfo *)0x0);
  local_60 = SVar6.fields._dateTime.fields._dateData;
  local_9a = SVar6.fields._offsetMinutes;
  pSVar5 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                     (pSVar4,"expiresAt",(pSVar4->klass->vtable)._7_get_Item.method);
  if (pSVar5 == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  value_02 = (*(pSVar5->klass->vtable)._9_get_Value.methodPtr)
                       (pSVar5,(pSVar5->klass->vtable)._9_get_Value.method);
  bVar1 = System_String__IsNullOrEmpty(value_02,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
    }
    bVar1 = System_DateTimeOffset__TryParse
                      (value_02,(System_IFormatProvider_o *)0x0,0x80,&local_48,(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
      }
      SVar6 = System_DateTimeOffset__ToUniversalTime(&local_48,(MethodInfo *)0x0);
      local_60 = SVar6.fields._dateTime.fields._dateData;
      local_9a = SVar6.fields._offsetMinutes;
    }
  }
  pSVar4 = (*(pSVar4->klass->vtable)._7_get_Item.methodPtr)
                     (pSVar4,"pollIntervalSeconds",(pSVar4->klass->vtable)._7_get_Item.method);
  if (pSVar4 == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  iVar2 = (*(pSVar4->klass->vtable)._35_get_AsInt.methodPtr)
                    (pSVar4,(pSVar4->klass->vtable)._35_get_AsInt.method);
  SStack_80._dateData = 0;
  local_78 = 0;
  pSStack_90 = (System_String_o *)0x0;
  local_88 = (System_String_o *)0x0;
  uStack_70 = 0;
  local_98 = value;
  Il2CppCodeGenWriteBarrier(&local_98);
  pSStack_90 = value_00;
  Il2CppCodeGenWriteBarrier(&pSStack_90);
  local_88 = value_01;
  Il2CppCodeGenWriteBarrier(&local_88);
  SStack_80 = local_60.fields._dateData;
  local_78 = (ulong)local_9a;
  iVar3 = 2;
  if (0 < iVar2) {
    iVar3 = iVar2;
  }
  uStack_70 = CONCAT44(uStack_70._4_4_,iVar3);
  (start->fields).SessionId = local_98;
  (start->fields).PollToken = pSStack_90;
  (start->fields).AuthorizationUrl = local_88;
  (start->fields).ExpiresAt.fields._dateTime.fields._dateData = (uint64_t)local_60.fields._dateData;
  (start->fields).ExpiresAt.fields._offsetMinutes = local_9a;
  *(undefined4 *)&(start->fields).ExpiresAt.fields.field_0xa = 0;
  *(undefined2 *)&(start->fields).ExpiresAt.fields.field_0xe = 0;
  (start->fields).PollIntervalSeconds = iVar3;
  *(undefined4 *)&(start->fields).field_0x2c = uStack_70._4_4_;
  Il2CppCodeGenWriteBarrier((void **)start);
  return true;
}


// ApplicationManagers.AccountManager$$TryParseUnityOAuthStatus
// il2cpp: bool ApplicationManagers_AccountManager__TryParseUnityOAuthStatus (System_String_o* json, System_String_o** status, System_String_o** code, System_String_o** error, const MethodInfo* method);
// 0x5dfa0d0
// eh: try 0x5dfa159..0x5dfa2e1 -> pad 0x5dfa2e5 (+13 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5dfa317..0x5dfa34a -> pad 0x5dfa34a (+1 call sites) cleanup
// eh: try 0x5dfa34d..0x5dfa352 -> pad 0x5dfa35a catch (...) [compiler noexcept guard]
// asm: 39 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dfa2e1: jmp 0x5dfa2f3
// asm:   0x5dfa2e3: jmp 0x5dfa2f3
// asm:   0x5dfa2e5: jmp 0x5dfa2f3
// asm:   0x5dfa2e7: jmp 0x5dfa2f3
// asm:   0x5dfa2e9: jmp 0x5dfa2f3
// asm:   0x5dfa2eb: jmp 0x5dfa2f3
// asm:   0x5dfa2ed: jmp 0x5dfa2f3
// asm:   0x5dfa2ef: jmp 0x5dfa2f3
// asm:   0x5dfa2f1: jmp 0x5dfa2f3
// asm:   0x5dfa2f3: mov rbx, rax
// asm:   0x5dfa2f6: cmp edx, 1
// asm:   0x5dfa2f9: jne 0x5dfa352
// asm:   0x5dfa2fb: mov rdi, rbx
// asm:   0x5dfa2fe: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dfa303: mov rbx, rax
// asm:   0x5dfa306: lea rax, [rip + 0x175c3bb]
// asm:   0x5dfa30d: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5dfa311: mov rax, qword ptr [rbx]
// asm:   0x5dfa314: mov rsi, qword ptr [rax]
// asm:   0x5dfa317: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5dfa31c: test al, al
// asm:   0x5dfa31e: je 0x5dfa329
// asm:   0x5dfa320: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dfa325: xor ecx, ecx
// asm:   0x5dfa327: jmp 0x5dfa2bc
// asm:   0x5dfa329: mov edi, 8
// asm:   0x5dfa32e: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5dfa333: mov rcx, qword ptr [rbx]
// asm:   0x5dfa336: mov qword ptr [rax], rcx
// asm:   0x5dfa339: lea rsi, [rip + 0x10331c0]
// asm:   0x5dfa340: mov rdi, rax
// asm:   0x5dfa343: xor edx, edx
// asm:   0x5dfa345: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5dfa34a: mov rbx, rax
// asm:   0x5dfa34d: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dfa352: mov rdi, rbx
// asm:   0x5dfa355: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5dfa35a: mov rdi, rax
// asm:   0x5dfa35d: call 0x2ab61e0  ; __clang_call_terminate()

bool ApplicationManagers_AccountManager__TryParseUnityOAuthStatus
               (System_String_o *json,System_String_o **status,System_String_o **code,System_String_o **error,
               MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  System_String_o *pSVar4;
  
  if (Il2CppMethodInitialized_07548341 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&"code");
    il2cpp_codegen_initialize_runtime_metadata(&"error");
    il2cpp_codegen_initialize_runtime_metadata(&"status");
    Il2CppMethodInitialized_07548341 = '\x01';
  }
  *status = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(status);
  *code = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(code);
  *error = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(error);
  pSVar2 = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
  if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar3 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                     (pSVar2,"status",(pSVar2->klass->vtable)._7_get_Item.method);
  if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar4 = (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                     (pSVar3,(pSVar3->klass->vtable)._9_get_Value.method);
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar1 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar4 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
label_05dfa215:
    *status = pSVar4;
    Il2CppCodeGenWriteBarrier(status);
    pSVar3 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar2,"code",(pSVar2->klass->vtable)._7_get_Item.method);
    if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar4 = (*(pSVar3->klass->vtable)._9_get_Value.methodPtr)
                       (pSVar3,(pSVar3->klass->vtable)._9_get_Value.method);
    *code = pSVar4;
    Il2CppCodeGenWriteBarrier(code);
    pSVar2 = (*(pSVar2->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar2,"error",(pSVar2->klass->vtable)._7_get_Item.method);
    if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    pSVar4 = (*(pSVar2->klass->vtable)._9_get_Value.methodPtr)
                       (pSVar2,(pSVar2->klass->vtable)._9_get_Value.method);
    *error = pSVar4;
    Il2CppCodeGenWriteBarrier(error);
    bVar1 = System_String__IsNullOrEmpty(*status,(MethodInfo *)0x0);
    return !bVar1;
  }
  if (pSVar4 != (System_String_o *)0x0) {
    pSVar4 = System_String__Trim(pSVar4,(MethodInfo *)0x0);
    if (pSVar4 != (System_String_o *)0x0) {
      pSVar4 = System_String__ToLowerInvariant(pSVar4,(MethodInfo *)0x0);
      goto label_05dfa215;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$NormalizeOAuthProvider
// il2cpp: System_String_o* ApplicationManagers_AccountManager__NormalizeOAuthProvider (System_String_o* provider, const MethodInfo* method);
// 0x5dfa370

System_String_o *
ApplicationManagers_AccountManager__NormalizeOAuthProvider(System_String_o *provider,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  bVar1 = System_String__IsNullOrEmpty(provider,(MethodInfo *)0x0);
  if (bVar1) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
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
// 0x5dfa3c0

System_String_o * ApplicationManagers_AccountManager__get_ProfileDescription(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07548342 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548342 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    return TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileDescription_k__BackingField;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->static_fields + 8);
}


// ApplicationManagers.AccountManager$$set_ProfileDescription
// il2cpp: void ApplicationManagers_AccountManager__set_ProfileDescription (System_String_o* value, const MethodInfo* method);
// 0x5dfa430

void ApplicationManagers_AccountManager__set_ProfileDescription(System_String_o *value,MethodInfo *method)

{
  ApplicationManagers_AccountManager_StaticFields *pAVar1;
  
  if (Il2CppMethodInitialized_07548343 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548343 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar1->_ProfileDescription_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&pAVar1->_ProfileDescription_k__BackingField);
  return;
}


// ApplicationManagers.AccountManager$$get_ProfileAvatarKey
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_ProfileAvatarKey (const MethodInfo* method);
// 0x5dfa490

System_String_o * ApplicationManagers_AccountManager__get_ProfileAvatarKey(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07548344 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548344 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    return TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileAvatarKey_k__BackingField;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->static_fields + 0x10);
}


// ApplicationManagers.AccountManager$$set_ProfileAvatarKey
// il2cpp: void ApplicationManagers_AccountManager__set_ProfileAvatarKey (System_String_o* value, const MethodInfo* method);
// 0x5dfa500

void ApplicationManagers_AccountManager__set_ProfileAvatarKey(System_String_o *value,MethodInfo *method)

{
  ApplicationManagers_AccountManager_StaticFields *pAVar1;
  
  if (Il2CppMethodInitialized_07548345 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548345 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar1->_ProfileAvatarKey_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&pAVar1->_ProfileAvatarKey_k__BackingField);
  return;
}


// ApplicationManagers.AccountManager$$get_ProfileBannerKey
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_ProfileBannerKey (const MethodInfo* method);
// 0x5dfa560

System_String_o * ApplicationManagers_AccountManager__get_ProfileBannerKey(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07548346 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548346 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    return TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileBannerKey_k__BackingField;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->static_fields + 0x18);
}


// ApplicationManagers.AccountManager$$set_ProfileBannerKey
// il2cpp: void ApplicationManagers_AccountManager__set_ProfileBannerKey (System_String_o* value, const MethodInfo* method);
// 0x5dfa5d0

void ApplicationManagers_AccountManager__set_ProfileBannerKey(System_String_o *value,MethodInfo *method)

{
  ApplicationManagers_AccountManager_StaticFields *pAVar1;
  
  if (Il2CppMethodInitialized_07548347 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548347 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar1->_ProfileBannerKey_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&pAVar1->_ProfileBannerKey_k__BackingField);
  return;
}


// ApplicationManagers.AccountManager$$get_ProfileSocials
// il2cpp: System_Collections_Generic_Dictionary_string__string__o* ApplicationManagers_AccountManager__get_ProfileSocials (const MethodInfo* method);
// 0x5dfa630

System_Collections_Generic_Dictionary_string__string__o *
ApplicationManagers_AccountManager__get_ProfileSocials(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07548348 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548348 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    return TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileSocials_k__BackingField;
  }
  return *(System_Collections_Generic_Dictionary_string__string__o **)
          ((long)((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->static_fields + 0x20);
}


// ApplicationManagers.AccountManager$$get_HasCachedOwnProfile
// il2cpp: bool ApplicationManagers_AccountManager__get_HasCachedOwnProfile (const MethodInfo* method);
// 0x5dfa6a0

bool ApplicationManagers_AccountManager__get_HasCachedOwnProfile(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07548349 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548349 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    return TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownProfileCacheHasValue;
  }
  return (bool)*(undefined1 *)
                ((long)((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->static_fields + 0x28);
}


// ApplicationManagers.AccountManager$$get_HasCachedCharacterInfo
// il2cpp: bool ApplicationManagers_AccountManager__get_HasCachedCharacterInfo (const MethodInfo* method);
// 0x5dfa710

bool ApplicationManagers_AccountManager__get_HasCachedCharacterInfo(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754834a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_0754834a = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    return TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoCacheHasValue;
  }
  return (bool)*(undefined1 *)
                ((long)((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->static_fields + 0x38);
}


// ApplicationManagers.AccountManager$$GetProfile
// il2cpp: void ApplicationManagers_AccountManager__GetProfile (System_Action_bool__string__o* onComplete, bool forceRefresh, const MethodInfo* method);
// 0x5dfa780

void ApplicationManagers_AccountManager__GetProfile
               (System_Action_bool__string__o *onComplete,bool forceRefresh,MethodInfo *method)

{
  int32_t *piVar1;
  char cVar2;
  uint32_t uVar3;
  uint uVar4;
  ApplicationManagers_AccountManager_o *pAVar5;
  System_Collections_Generic_List_Action_bool__string___o *__this;
  System_Action_bool__string__array *pSVar6;
  MethodInfo *pMVar7;
  bool bVar8;
  code *vtableDispatch;
  ApplicationManagers_AccountManager_StaticFields *pAVar9;
  System_Action_T1__T2__o *__this_00;
  ApplicationManagers_AccountManager__GetProfileJson_d__50_o *__this_01;
  intptr_t iVar10;
  System_String_o *pSVar11;
  undefined8 uVar12;
  intptr_t iVar13;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_0754834b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_CompleteProfileFetch);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool_string);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_bool_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"not_logged_in");
    Il2CppMethodInitialized_0754834b = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar5 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pAVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar8) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      if (Il2CppMethodInitialized_07548373 == '\0') goto label_05dfa900;
label_05dfa850:
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0)
      goto label_05dfa860;
label_05dfa923:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      if (Il2CppMethodInitialized_075483c7 == '\0') goto label_05dfa935;
label_05dfa86d:
      uVar3 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      if (Il2CppMethodInitialized_07548373 != '\0') goto label_05dfa850;
label_05dfa900:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      Il2CppMethodInitialized_07548373 = '\x01';
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0)
      goto label_05dfa923;
label_05dfa860:
      if (Il2CppMethodInitialized_075483c7 != '\0') goto label_05dfa86d;
label_05dfa935:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      Il2CppMethodInitialized_075483c7 = '\x01';
      uVar3 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    bVar8 = System_String__IsNullOrEmpty
                      (TypeInfo_ApplicationManagers_AccountManager->static_fields->_AuthToken_k__BackingField,
                       (MethodInfo *)0x0);
    if (!bVar8) {
      uVar3 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
      if (forceRefresh) {
        if (uVar3 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        klass = (Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager;
        TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownProfileCacheValid = false;
label_05dfa9bd:
        if ((klass->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(klass);
          klass = (Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager;
        }
        pMVar7 = MethodInfo_System_Collections_Generic_List_Action_bool_string_Add;
        __this = klass->static_fields->_ownProfileFetchSubscribers;
        if (__this != (System_Collections_Generic_List_Action_bool__string___o *)0x0) {
          piVar1 = &(__this->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar6 = (__this->fields)._items;
          if (pSVar6 != (System_Action_bool__string__array *)0x0) {
            uVar4 = (__this->fields)._size;
            if (uVar4 < (uint)pSVar6->max_length) {
              (__this->fields)._size = uVar4 + 1;
              pSVar6->m_Items[(int)uVar4] = onComplete;
              Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar4);
              pAVar9 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
              cVar2 = pAVar9->_ownProfileFetchInFlight;
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)onComplete,
                         (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
              pAVar9 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
              cVar2 = pAVar9->_ownProfileFetchInFlight;
            }
            if (cVar2 != '\0') {
              return;
            }
            if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor
                == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
              pAVar9 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
            }
            pAVar9->_ownProfileFetchInFlight = true;
            pAVar5 = pAVar9->_instance;
            __this_00 = (System_Action_T1__T2__o *)
                        il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool_string);
            System_Action_bool__object____ctor
                      (__this_00,(Il2CppObject *)0x0,
                       (intptr_t)MethodInfo_ApplicationManagers_AccountManager_CompleteProfileFetch,
                       (MethodInfo_4A88C40 *)0x0);
            if (pAVar5 != (ApplicationManagers_AccountManager_o *)0x0) {
              if (Il2CppMethodInitialized_0754834f == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_ApplicationManagers_AccountManager_GetProfileJson_d__50);
                Il2CppMethodInitialized_0754834f = '\x01';
              }
              __this_01 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)
                                     TypeInfo_ApplicationManagers_AccountManager_GetProfileJson_d__50);
              System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
              (__this_01->fields).__1__state = 0;
              (__this_01->fields).__4__this = pAVar5;
              Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
              (__this_01->fields).onComplete = (System_Action_bool__string__o *)__this_00;
              Il2CppCodeGenWriteBarrier(&(__this_01->fields).onComplete);
              UnityEngine_MonoBehaviour__StartCoroutine_691c390
                        ((UnityEngine_MonoBehaviour_o *)pAVar5,(System_Collections_IEnumerator_o *)__this_01,
                         (MethodInfo *)0x0);
              return;
            }
          }
        }
        ThrowNullReferenceException();
      }
      if (uVar3 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      pAVar9 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
      klass = (Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager;
      if (pAVar9->_ownProfileCacheValid == false) goto label_05dfa9bd;
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        pAVar9 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
      }
      klass = (Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager;
      if (pAVar9->_ownProfileCacheHasValue == false) goto label_05dfa9bd;
      if (onComplete == (System_Action_bool__string__o *)0x0) {
        return;
      }
      iVar13 = (onComplete->fields).method_code;
      vtableDispatch = (code *)(onComplete->fields).invoke_impl;
      iVar10 = (onComplete->fields).method;
      uVar12 = 1;
      pSVar11 = (System_String_o *)0x0;
      goto label_05dfa8b4;
    }
  }
  if (onComplete == (System_Action_bool__string__o *)0x0) {
    return;
  }
  iVar13 = (onComplete->fields).method_code;
  vtableDispatch = (code *)(onComplete->fields).invoke_impl;
  iVar10 = (onComplete->fields).method;
  uVar12 = 0;
  pSVar11 = "not_logged_in";
label_05dfa8b4:
  (*vtableDispatch)(iVar13,uVar12,pSVar11,iVar10);
  return;
}


// ApplicationManagers.AccountManager$$UpdateProfile
// il2cpp: void ApplicationManagers_AccountManager__UpdateProfile (System_String_o* displayName, System_String_o* description, System_String_o* avatarKey, System_String_o* bannerKey, System_Collections_Generic_Dictionary_string__string__o* socials, System_Action_bool__string__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x5dfac60
// eh: try 0x5dfb073..0x5dfb2d7 -> pad 0x5dfb2e1 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5dfb2fb..0x5dfb300 -> pad 0x5dfb325 cleanup
// eh: try 0x5dfb328..0x5dfb332 -> pad 0x5dfb33a catch (...) [compiler noexcept guard]
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dfb2d7: jmp 0x5dfb2e3
// asm:   0x5dfb2d9: jmp 0x5dfb2e3
// asm:   0x5dfb2db: jmp 0x5dfb2e3
// asm:   0x5dfb2dd: jmp 0x5dfb2e3
// asm:   0x5dfb2df: jmp 0x5dfb2e3
// asm:   0x5dfb2e1: jmp 0x5dfb2e3
// asm:   0x5dfb2e3: mov r15, rax
// asm:   0x5dfb2e6: cmp edx, 1
// asm:   0x5dfb2e9: jne 0x5dfb328
// asm:   0x5dfb2eb: mov rdi, r15
// asm:   0x5dfb2ee: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dfb2f3: mov rbx, qword ptr [rax]
// asm:   0x5dfb2f6: mov qword ptr [rsp + 0x50], rbx
// asm:   0x5dfb2fb: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dfb300: lea rax, [rip + 0x1494e71]  ; MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_Dispose
// asm:   0x5dfb307: mov rsi, qword ptr [rax]
// asm:   0x5dfb30a: lea rdi, [rsp + 0x10]
// asm:   0x5dfb30f: call 0x4de67f0  ; System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose()
// asm:   0x5dfb314: test rbx, rbx
// asm:   0x5dfb317: je 0x5dfb18b
// asm:   0x5dfb31d: mov rdi, rbx
// asm:   0x5dfb320: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5dfb325: mov r15, rax
// asm:   0x5dfb328: lea rdi, [rsp + 0x50]
// asm:   0x5dfb32d: call 0x2fe0060  ; il2cpp_runtime_helper_02fe0060()
// asm:   0x5dfb332: mov rdi, r15
// asm:   0x5dfb335: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5dfb33a: mov rdi, rax
// asm:   0x5dfb33d: call 0x2ab61e0  ; __clang_call_terminate()

void ApplicationManagers_AccountManager__UpdateProfile
               (System_String_o *displayName,System_String_o *description,System_String_o *avatarKey,
               System_String_o *bannerKey,System_Collections_Generic_Dictionary_string__string__o *socials,
               System_Action_bool__string__o *onComplete,bool reportNetworkError,MethodInfo *method)

{
  uint32_t uVar1;
  ApplicationManagers_AccountManager_o *pAVar2;
  System_String_o *s;
  bool bVar3;
  SimpleJSONFixed_JSONObject_o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  SimpleJSONFixed_JSONObject_o *__this_00;
  System_String_o *pSVar5;
  ApplicationManagers_AccountManager__PatchProfileJson_d__51_o *__this_01;
  undefined1 local_98 [8];
  undefined1 *puStack_90;
  System_String_o *local_88;
  System_String_o *pSStack_80;
  undefined8 local_78;
  System_Action_bool__string__o *local_70;
  System_String_o *local_68;
  System_String_o *local_60;
  undefined1 local_58 [16];
  System_String_o *local_48;
  System_String_o *pSStack_40;
  int32_t local_38;
  undefined4 uStack_34;
  
  local_68 = bannerKey;
  local_60 = avatarKey;
  if (Il2CppMethodInitialized_0754834c == '\0') {
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
    Il2CppMethodInitialized_0754834c = '\x01';
  }
  local_88 = (System_String_o *)0x0;
  pSStack_80 = (System_String_o *)0x0;
  local_98 = (undefined1  [8])0x0;
  puStack_90 = (undefined1 *)0x0;
  local_78._0_4_ = 0;
  local_78._4_4_ = 0;
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pAVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) goto label_05dfae2f;
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (Il2CppMethodInitialized_07548373 == '\0') goto label_05dfb0de;
label_05dfadec:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfadfc;
label_05dfb108:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (Il2CppMethodInitialized_075483c7 == '\0') goto label_05dfb121;
label_05dfae09:
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_07548373 != '\0') goto label_05dfadec;
label_05dfb0de:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548373 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfb108;
label_05dfadfc:
    if (Il2CppMethodInitialized_075483c7 != '\0') goto label_05dfae09;
label_05dfb121:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483c7 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar3 = System_String__IsNullOrEmpty
                    (TypeInfo_ApplicationManagers_AccountManager->static_fields->_AuthToken_k__BackingField,
                     (MethodInfo *)0x0);
  if (bVar3) {
label_05dfae2f:
    if (onComplete == (System_Action_bool__string__o *)0x0) {
      return;
    }
    (*(code *)(onComplete->fields).invoke_impl)
              ((onComplete->fields).method_code,0,"not_logged_in",(onComplete->fields).method);
    return;
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this,(MethodInfo *)0x0);
  if (displayName != (System_String_o *)0x0) {
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit(displayName,(MethodInfo *)0x0);
    if (__this == (SimpleJSONFixed_JSONObject_o *)0x0) goto label_05dfb2a6;
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,"displayName",pSVar4,(__this->klass->vtable)._8_set_Item.method);
  }
  if (description != (System_String_o *)0x0) {
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit(description,(MethodInfo *)0x0);
    if (__this == (SimpleJSONFixed_JSONObject_o *)0x0) goto label_05dfb2a6;
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,"description",pSVar4,(__this->klass->vtable)._8_set_Item.method);
  }
  pSVar5 = local_60;
  if (local_60 != (System_String_o *)0x0) {
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar5,(MethodInfo *)0x0);
    if (__this == (SimpleJSONFixed_JSONObject_o *)0x0) goto label_05dfb2a6;
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,"avatarKey",pSVar4,(__this->klass->vtable)._8_set_Item.method);
  }
  pSVar5 = local_68;
  if (local_68 != (System_String_o *)0x0) {
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar5,(MethodInfo *)0x0);
    if (__this == (SimpleJSONFixed_JSONObject_o *)0x0) goto label_05dfb2a6;
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,"bannerKey",pSVar4,(__this->klass->vtable)._8_set_Item.method);
  }
  if (socials != (System_Collections_Generic_Dictionary_string__string__o *)0x0) {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
    SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
    System_Collections_Generic_Dictionary_object__object___GetEnumerator
              ((System_Collections_Generic_Dictionary_Enumerator_TKey__TValue__o *)local_58,
               (System_Collections_Generic_Dictionary_object__object__o *)socials,
               (MethodInfo_4AAD970 *)
               MethodInfo_System_Collections_Generic_Dictionary_string_string_GetEnumerator);
    local_78._0_4_ = local_38;
    local_78._4_4_ = uStack_34;
    local_88 = local_48;
    pSStack_80 = pSStack_40;
    local_98 = (undefined1  [8])local_58._0_8_;
    puStack_90 = (undefined1 *)local_58._8_8_;
    local_58._0_8_ = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
    local_58._8_8_ = local_98;
    local_70 = onComplete;
    if (__this_00 == (SimpleJSONFixed_JSONObject_o *)0x0) {
      bVar3 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                        ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_98,
                         (MethodInfo_4CE66D0 *)
                         MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_MoveNext);
      pSVar5 = pSStack_80;
      if (bVar3) {
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        SimpleJSONFixed_JSONNode__op_Implicit(pSVar5,(MethodInfo *)0x0);
        ThrowNullReferenceException();
      }
    }
    else {
      while (bVar3 = System_Collections_Generic_Dictionary_Enumerator_object__object___MoveNext
                               ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_98
                                ,(MethodInfo_4CE66D0 *)
                                 MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_MoveNext
                               ), s = pSStack_80, pSVar5 = local_88, bVar3) {
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        pSVar4 = SimpleJSONFixed_JSONNode__op_Implicit(s,(MethodInfo *)0x0);
        (*(__this_00->klass->vtable)._8_set_Item.methodPtr)
                  (__this_00,pSVar5,pSVar4,(__this_00->klass->vtable)._8_set_Item.method);
      }
    }
    System_Collections_Generic_Dictionary_Enumerator_object__object___Dispose
              ((System_Collections_Generic_Dictionary_Enumerator_object__object__o *)local_98,
               (MethodInfo_4CE67F0 *)
               MethodInfo_System_Collections_Generic_Dictionary_Enumerator_string_string_Dispose);
    onComplete = local_70;
    if (__this == (SimpleJSONFixed_JSONObject_o *)0x0) goto label_05dfb2a6;
    (*(__this->klass->vtable)._8_set_Item.methodPtr)
              (__this,"socials",(SimpleJSONFixed_JSONNode_o *)__this_00,
               (__this->klass->vtable)._8_set_Item.method);
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (__this != (SimpleJSONFixed_JSONObject_o *)0x0) {
    pAVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
    pSVar5 = (*(__this->klass->vtable)._3_ToString.methodPtr)
                       (__this,(__this->klass->vtable)._3_ToString.method);
    if (pAVar2 != (ApplicationManagers_AccountManager_o *)0x0) {
      if (Il2CppMethodInitialized_07548350 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_ApplicationManagers_AccountManager_PatchProfileJson_d__51);
        Il2CppMethodInitialized_07548350 = '\x01';
      }
      __this_01 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_PatchProfileJson_d__51
                            );
      System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
      (__this_01->fields).__1__state = 0;
      (__this_01->fields).__4__this = pAVar2;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
      (__this_01->fields).json = pSVar5;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).json);
      (__this_01->fields).onComplete = onComplete;
      Il2CppCodeGenWriteBarrier(&(__this_01->fields).onComplete);
      (__this_01->fields).reportNetworkError = reportNetworkError;
      UnityEngine_MonoBehaviour__StartCoroutine_691c390
                ((UnityEngine_MonoBehaviour_o *)pAVar2,(System_Collections_IEnumerator_o *)__this_01,
                 (MethodInfo *)0x0);
      return;
    }
  }
label_05dfb2a6:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$GetCharacterInfo
// il2cpp: void ApplicationManagers_AccountManager__GetCharacterInfo (System_Action_bool__string__JSONNode__o* onComplete, bool forceRefresh, const MethodInfo* method);
// 0x5dfb3f0

void ApplicationManagers_AccountManager__GetCharacterInfo
               (System_Action_bool__string__JSONNode__o *onComplete,bool forceRefresh,MethodInfo *method)

{
  int32_t *piVar1;
  char cVar2;
  uint32_t uVar3;
  uint uVar4;
  ApplicationManagers_AccountManager_o *pAVar5;
  code *vtableDispatch;
  System_Collections_Generic_List_Action_bool__string__JSONNode___o *__this;
  System_Action_bool__string__JSONNode__array *pSVar6;
  bool bVar7;
  ApplicationManagers_AccountManager_StaticFields *pAVar8;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  System_Action_T1__T2__T3__o *__this_00;
  ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52_o *__this_01;
  MethodInfo *pMVar10;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_0754834d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_CompleteCharacterInfoFetch);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool_string_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_bool_string_JSONNode_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"not_logged_in");
    Il2CppMethodInitialized_0754834d = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar5 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pAVar5,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) goto label_05dfb503;
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (Il2CppMethodInitialized_07548373 == '\0') goto label_05dfb572;
label_05dfb4c0:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfb4d0;
label_05dfb595:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (Il2CppMethodInitialized_075483c7 == '\0') goto label_05dfb5a7;
label_05dfb4dd:
    uVar3 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_07548373 != '\0') goto label_05dfb4c0;
label_05dfb572:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548373 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfb595;
label_05dfb4d0:
    if (Il2CppMethodInitialized_075483c7 != '\0') goto label_05dfb4dd;
label_05dfb5a7:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483c7 = '\x01';
    uVar3 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar3 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pMVar10 = (MethodInfo *)0x0;
  bVar7 = System_String__IsNullOrEmpty
                    (TypeInfo_ApplicationManagers_AccountManager->static_fields->_AuthToken_k__BackingField,
                     (MethodInfo *)0x0);
  if (!bVar7) {
    uVar3 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
    if (forceRefresh) {
      if (uVar3 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      klass = (Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager;
      TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoCacheValid = false;
    }
    else {
      if (uVar3 == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      pAVar8 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
      klass = (Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager;
      if (pAVar8->_ownCharacterInfoCacheValid != false) {
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
          pAVar8 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
        }
        klass = (Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager;
        if (pAVar8->_ownCharacterInfoCacheHasValue != false) {
          if (onComplete == (System_Action_bool__string__JSONNode__o *)0x0) {
            return;
          }
          if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
            pAVar8 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
          }
          pSVar9 = ApplicationManagers_AccountManager__CloneJson(pAVar8->_ownCharacterInfoCache,pMVar10);
          vtableDispatch = (code *)(onComplete->fields).invoke_impl;
          (*vtableDispatch)
                    ((onComplete->fields).method_code,1,0,pSVar9,(onComplete->fields).method,
                     vtableDispatch);
          return;
        }
      }
    }
    if ((klass->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(klass);
      klass = (Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager;
    }
    pMVar10 = MethodInfo_System_Collections_Generic_List_Action_bool_string_JSONNode_Add;
    __this = klass->static_fields->_ownCharacterInfoFetchSubscribers;
    if (__this != (System_Collections_Generic_List_Action_bool__string__JSONNode___o *)0x0) {
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar6 = (__this->fields)._items;
      if (pSVar6 != (System_Action_bool__string__JSONNode__array *)0x0) {
        uVar4 = (__this->fields)._size;
        if (uVar4 < (uint)pSVar6->max_length) {
          (__this->fields)._size = uVar4 + 1;
          pSVar6->m_Items[(int)uVar4] = onComplete;
          Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar4);
          pAVar8 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
          cVar2 = pAVar8->_ownCharacterInfoFetchInFlight;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)onComplete,
                     (MethodInfo_395D230 *)pMVar10->klass->rgctx_data[0xe].method);
          pAVar8 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
          cVar2 = pAVar8->_ownCharacterInfoFetchInFlight;
        }
        if (cVar2 != '\0') {
          return;
        }
        if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor == 0
           ) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
          pAVar8 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
        }
        pAVar8->_ownCharacterInfoFetchInFlight = true;
        pAVar5 = pAVar8->_instance;
        __this_00 = (System_Action_T1__T2__T3__o *)
                    il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool_string_JSONNode);
        System_Action_bool__object__object____ctor
                  (__this_00,(Il2CppObject *)0x0,
                   (intptr_t)MethodInfo_ApplicationManagers_AccountManager_CompleteCharacterInfoFetch,
                   (MethodInfo_4A8B090 *)0x0);
        if (pAVar5 != (ApplicationManagers_AccountManager_o *)0x0) {
          if (Il2CppMethodInitialized_07548351 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata
                      (&TypeInfo_ApplicationManagers_AccountManager_GetCharacterInfoJson_d__52);
            Il2CppMethodInitialized_07548351 = '\x01';
          }
          __this_01 = il2cpp_codegen_object_new
                                ((Il2CppClass *)
                                 TypeInfo_ApplicationManagers_AccountManager_GetCharacterInfoJson_d__52);
          System_Object___ctor((Il2CppObject *)__this_01,(MethodInfo *)0x0);
          (__this_01->fields).__1__state = 0;
          (__this_01->fields).__4__this = pAVar5;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).__4__this);
          (__this_01->fields).onComplete = (System_Action_bool__string__JSONNode__o *)__this_00;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields).onComplete);
          UnityEngine_MonoBehaviour__StartCoroutine_691c390
                    ((UnityEngine_MonoBehaviour_o *)pAVar5,(System_Collections_IEnumerator_o *)__this_01,
                     (MethodInfo *)0x0);
          return;
        }
      }
    }
    ThrowNullReferenceException();
  }
label_05dfb503:
  if (onComplete == (System_Action_bool__string__JSONNode__o *)0x0) {
    return;
  }
  (*(code *)(onComplete->fields).invoke_impl)
            ((onComplete->fields).method_code,0,"not_logged_in",0,(onComplete->fields).method);
  return;
}


// ApplicationManagers.AccountManager$$UpdateCharacterInfo
// il2cpp: void ApplicationManagers_AccountManager__UpdateCharacterInfo (SimpleJSONFixed_JSONNode_o* characterInfo, System_Action_bool__string__JSONNode__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x5dfb950

void ApplicationManagers_AccountManager__UpdateCharacterInfo
               (SimpleJSONFixed_JSONNode_o *characterInfo,System_Action_bool__string__JSONNode__o *onComplete,
               bool reportNetworkError,MethodInfo *method)

{
  uint32_t uVar1;
  ApplicationManagers_AccountManager_o *pAVar2;
  bool bVar3;
  SimpleJSONFixed_JSONObject_o *__this;
  SimpleJSONFixed_JSONObject_o *__this_00;
  System_String_o *pSVar4;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_0754834e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"characterInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"not_logged_in");
    Il2CppMethodInitialized_0754834e = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pAVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) goto label_05dfba5d;
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (Il2CppMethodInitialized_07548373 != '\0') goto label_05dfba1a;
label_05dfbb8c:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548373 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfba2a;
label_05dfbbaf:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (Il2CppMethodInitialized_075483c7 != '\0') goto label_05dfba37;
label_05dfbbc1:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483c7 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_07548373 == '\0') goto label_05dfbb8c;
label_05dfba1a:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfbbaf;
label_05dfba2a:
    if (Il2CppMethodInitialized_075483c7 == '\0') goto label_05dfbbc1;
label_05dfba37:
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar3 = System_String__IsNullOrEmpty
                    (TypeInfo_ApplicationManagers_AccountManager->static_fields->_AuthToken_k__BackingField,
                     (MethodInfo *)0x0);
  if (!bVar3) {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
    SimpleJSONFixed_JSONObject___ctor(__this,(MethodInfo *)0x0);
    pSVar4 = "characterInfo";
    __this_00 = (SimpleJSONFixed_JSONObject_o *)characterInfo;
    if (characterInfo == (SimpleJSONFixed_JSONNode_o *)0x0) {
      __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
      SimpleJSONFixed_JSONObject___ctor(__this_00,(MethodInfo *)0x0);
    }
    if (__this != (SimpleJSONFixed_JSONObject_o *)0x0) {
      (*(__this->klass->vtable)._8_set_Item.methodPtr)
                (__this,pSVar4,(SimpleJSONFixed_JSONNode_o *)__this_00,
                 (__this->klass->vtable)._8_set_Item.method);
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      pAVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
      pSVar4 = (*(__this->klass->vtable)._3_ToString.methodPtr)
                         (__this,(__this->klass->vtable)._3_ToString.method);
      if (pAVar2 != (ApplicationManagers_AccountManager_o *)0x0) {
        routine = ApplicationManagers_AccountManager__PutCharacterInfoJson
                            (pAVar2,pSVar4,characterInfo,onComplete,reportNetworkError,in_R9);
        UnityEngine_MonoBehaviour__StartCoroutine_691c390
                  ((UnityEngine_MonoBehaviour_o *)pAVar2,routine,(MethodInfo *)0x0);
        return;
      }
    }
    ThrowNullReferenceException();
  }
label_05dfba5d:
  if (onComplete == (System_Action_bool__string__JSONNode__o *)0x0) {
    return;
  }
  (*(code *)(onComplete->fields).invoke_impl)
            ((onComplete->fields).method_code,0,"not_logged_in",0,(onComplete->fields).method);
  return;
}


// ApplicationManagers.AccountManager$$GetProfileJson
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__GetProfileJson (ApplicationManagers_AccountManager_o* __this, System_Action_bool__string__o* onComplete, const MethodInfo* method);
// 0x5dfabe0

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__GetProfileJson
          (ApplicationManagers_AccountManager_o *__this,System_Action_bool__string__o *onComplete,
          MethodInfo *method)

{
  ApplicationManagers_AccountManager__GetProfileJson_d__50_o *__this_00;
  
  if (Il2CppMethodInitialized_0754834f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_GetProfileJson_d__50);
    Il2CppMethodInitialized_0754834f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_GetProfileJson_d__50);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).onComplete = onComplete;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).onComplete);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ApplicationManagers.AccountManager$$PatchProfileJson
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__PatchProfileJson (ApplicationManagers_AccountManager_o* __this, System_String_o* json, System_Action_bool__string__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x5dfb350

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__PatchProfileJson
          (ApplicationManagers_AccountManager_o *__this,System_String_o *json,
          System_Action_bool__string__o *onComplete,bool reportNetworkError,MethodInfo *method)

{
  ApplicationManagers_AccountManager__PatchProfileJson_d__51_o *__this_00;
  
  if (Il2CppMethodInitialized_07548350 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_PatchProfileJson_d__51);
    Il2CppMethodInitialized_07548350 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_PatchProfileJson_d__51);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).json = json;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).json);
  (__this_00->fields).onComplete = onComplete;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).onComplete);
  (__this_00->fields).reportNetworkError = reportNetworkError;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ApplicationManagers.AccountManager$$GetCharacterInfoJson
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__GetCharacterInfoJson (ApplicationManagers_AccountManager_o* __this, System_Action_bool__string__JSONNode__o* onComplete, const MethodInfo* method);
// 0x5dfb8d0

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__GetCharacterInfoJson
          (ApplicationManagers_AccountManager_o *__this,System_Action_bool__string__JSONNode__o *onComplete,
          MethodInfo *method)

{
  ApplicationManagers_AccountManager__GetCharacterInfoJson_d__52_o *__this_00;
  
  if (Il2CppMethodInitialized_07548351 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_GetCharacterInfoJson_d__52);
    Il2CppMethodInitialized_07548351 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_GetCharacterInfoJson_d__52
                        );
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).onComplete = onComplete;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).onComplete);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ApplicationManagers.AccountManager$$PutCharacterInfoJson
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__PutCharacterInfoJson (ApplicationManagers_AccountManager_o* __this, System_String_o* json, SimpleJSONFixed_JSONNode_o* fallbackCharacterInfo, System_Action_bool__string__JSONNode__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x5dfbc00

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__PutCharacterInfoJson
          (ApplicationManagers_AccountManager_o *__this,System_String_o *json,
          SimpleJSONFixed_JSONNode_o *fallbackCharacterInfo,
          System_Action_bool__string__JSONNode__o *onComplete,bool reportNetworkError,MethodInfo *method)

{
  ApplicationManagers_AccountManager__PutCharacterInfoJson_d__53_o *__this_00;
  
  if (Il2CppMethodInitialized_07548352 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_PutCharacterInfoJson_d__53);
    Il2CppMethodInitialized_07548352 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_PutCharacterInfoJson_d__53
                        );
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).json = json;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).json);
  (__this_00->fields).fallbackCharacterInfo = fallbackCharacterInfo;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).fallbackCharacterInfo);
  (__this_00->fields).onComplete = onComplete;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).onComplete);
  (__this_00->fields).reportNetworkError = reportNetworkError;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ApplicationManagers.AccountManager$$SendMeJson
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__SendMeJson (ApplicationManagers_AccountManager_o* __this, System_String_o* method, System_String_o* path, System_String_o* json, System_Action_bool__string__JSONNode__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x5dfbd30

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__SendMeJson
          (ApplicationManagers_AccountManager_o *__this,System_String_o *method,System_String_o *path,
          System_String_o *json,System_Action_bool__string__JSONNode__o *onComplete,bool reportNetworkError,
          MethodInfo *methodInfo)

{
  ApplicationManagers_AccountManager__SendMeJson_d__54_o *__this_00;
  
  if (Il2CppMethodInitialized_07548353 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager_SendMeJson_d__54);
    Il2CppMethodInitialized_07548353 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_SendMeJson_d__54);
  ApplicationManagers_AccountManager__SendMeJson_d__54___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 == (ApplicationManagers_AccountManager__SendMeJson_d__54_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).method = method;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).method);
  (__this_00->fields).path = path;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).path);
  (__this_00->fields).json = json;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).json);
  (__this_00->fields).onComplete = onComplete;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).onComplete);
  (__this_00->fields).reportNetworkError = reportNetworkError;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ApplicationManagers.AccountManager$$SendMeReadJson
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__SendMeReadJson (ApplicationManagers_AccountManager_o* __this, System_String_o* path, System_Action_bool__string__JSONNode__o* onComplete, const MethodInfo* method);
// 0x5dfbe00

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__SendMeReadJson
          (ApplicationManagers_AccountManager_o *__this,System_String_o *path,
          System_Action_bool__string__JSONNode__o *onComplete,MethodInfo *method)

{
  ApplicationManagers_AccountManager__SendMeReadJson_d__55_o *__this_00;
  
  if (Il2CppMethodInitialized_07548354 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_SendMeReadJson_d__55);
    Il2CppMethodInitialized_07548354 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_SendMeReadJson_d__55);
  ApplicationManagers_AccountManager__SendMeReadJson_d__55___ctor(__this_00,0,(MethodInfo *)0x0);
  if (__this_00 == (ApplicationManagers_AccountManager__SendMeReadJson_d__55_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).path = path;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).path);
  (__this_00->fields).onComplete = onComplete;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).onComplete);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ApplicationManagers.AccountManager$$ApplyProfileResponse
// il2cpp: void ApplicationManagers_AccountManager__ApplyProfileResponse (SimpleJSONFixed_JSONNode_o* profile, const MethodInfo* method);
// 0x5dfbea0
// asm: 7 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dfbf84: jmp 0x5dfc065
// asm:   0x5dfc004: jmp 0x5dfc4f7
// asm:   0x5dfc192: jmp 0x5dfc4f7
// asm:   0x5dfc3db: mov r15, rsp
// asm:   0x5dfc3de: lea rbp, [rip + 0x148f9bb]  ; MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item
// asm:   0x5dfc3e5: jmp 0x5dfc425
// asm:   0x5dfc4a9: jmp 0x5dfc4d8

void ApplicationManagers_AccountManager__ApplyProfileResponse
               (SimpleJSONFixed_JSONNode_o *profile,MethodInfo *method)

{
  uint32_t uVar1;
  ApplicationManagers_AccountLoginResponse_o *pAVar2;
  ApplicationManagers_AccountManager_StaticFields *pAVar3;
  SimpleJSONFixed_JSONNode_o *a;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool bVar4;
  ApplicationManagers_AccountLoginResponse_ProfileData_o *pAVar5;
  System_String_o *pSVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  System_String_o *value;
  MethodInfo *pMVar8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_118;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_c8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_07548355 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07548355 = '\x01';
  }
  local_118.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_118.m_Array.fields._index = 0;
  local_118.m_Array.fields._version = 0;
  local_118.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_118.m_Object.fields._getEnumeratorRetType = 0;
  local_118.m_Object.fields._36_4_ = 0;
  local_118.m_Object.fields._version = 0;
  local_118.m_Object.fields._index = 0;
  local_118.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_118.type = 0;
  local_118._4_4_ = 0;
  local_118.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_118.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pMVar8 = (MethodInfo *)0x0;
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality(profile,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    return;
  }
  pAVar5 = ApplicationManagers_AccountLoginResponse_ProfileData__Parse(profile,pMVar8);
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (g_data_07545ca0 == '\0') goto label_05dfbf97;
label_05dfbf67:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfbf73;
label_05dfbfb6:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pAVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  else {
    if (g_data_07545ca0 != '\0') goto label_05dfbf67;
label_05dfbf97:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    g_data_07545ca0 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfbfb6;
label_05dfbf73:
    pAVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  if (pAVar2 != (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      if (g_data_07545ca0 == '\0') goto label_05dfc017;
label_05dfbfe5:
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0)
      goto label_05dfbff1;
label_05dfc036:
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      pAVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
    }
    else {
      if (g_data_07545ca0 != '\0') goto label_05dfbfe5;
label_05dfc017:
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      g_data_07545ca0 = '\x01';
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0)
      goto label_05dfc036;
label_05dfbff1:
      pAVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
    }
    if (pAVar2 == (ApplicationManagers_AccountLoginResponse_o *)0x0) goto label_05dfc4f7;
    (pAVar2->fields).Profile = pAVar5;
    Il2CppCodeGenWriteBarrier(&(pAVar2->fields).Profile);
  }
  if (pAVar5 == (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0) goto label_05dfc4f7;
  pSVar6 = (pAVar5->fields).Description;
  if (pSVar6 == (System_String_o *)0x0) {
    pSVar6 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8);
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfc1bf;
label_05dfc08b:
    if (Il2CppMethodInitialized_075483c4 != '\0') goto label_05dfc098;
label_05dfc1d1:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483c4 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfc08b;
label_05dfc1bf:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (Il2CppMethodInitialized_075483c4 == '\0') goto label_05dfc1d1;
label_05dfc098:
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar3 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar3->_ProfileDescription_k__BackingField = pSVar6;
  Il2CppCodeGenWriteBarrier(&pAVar3->_ProfileDescription_k__BackingField);
  pSVar6 = (pAVar5->fields).AvatarKey;
  if (pSVar6 == (System_String_o *)0x0) {
    pSVar6 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8);
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfc229;
label_05dfc0dc:
    if (Il2CppMethodInitialized_075483c5 != '\0') goto label_05dfc0e9;
label_05dfc23b:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483c5 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfc0dc;
label_05dfc229:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (Il2CppMethodInitialized_075483c5 == '\0') goto label_05dfc23b;
label_05dfc0e9:
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar3 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar3->_ProfileAvatarKey_k__BackingField = pSVar6;
  Il2CppCodeGenWriteBarrier(&pAVar3->_ProfileAvatarKey_k__BackingField);
  pSVar6 = (pAVar5->fields).BannerKey;
  if (pSVar6 == (System_String_o *)0x0) {
    pSVar6 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8);
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfc293;
label_05dfc12d:
    if (Il2CppMethodInitialized_075483c6 != '\0') goto label_05dfc13a;
label_05dfc2a5:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483c6 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfc12d;
label_05dfc293:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (Il2CppMethodInitialized_075483c6 == '\0') goto label_05dfc2a5;
label_05dfc13a:
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar3 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar3->_ProfileBannerKey_k__BackingField = pSVar6;
  Il2CppCodeGenWriteBarrier(&pAVar3->_ProfileBannerKey_k__BackingField);
  if (Il2CppMethodInitialized_075454ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075454ed = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfc2f8;
label_05dfc17e:
    pMVar8 = (MethodInfo *)
             TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileSocials_k__BackingField;
  }
  else {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfc17e;
label_05dfc2f8:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pMVar8 = (MethodInfo *)
             TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileSocials_k__BackingField;
  }
  if (pMVar8 == (MethodInfo *)0x0) {
label_05dfc4f7:
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___Clear
            ((System_Collections_Generic_Dictionary_object__object__o *)pMVar8,
             (MethodInfo_4AAD690 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear);
  ApplicationManagers_AccountManager__MarkOwnProfileCacheFresh(pMVar8);
  a = (pAVar5->fields).Socials;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05dfc4f7;
    SimpleJSONFixed_JSONNode__get_Keys
              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_78,a,(MethodInfo *)0x0);
    local_c8.m_Array.fields._current = local_78.m_Array.fields._current;
    local_c8.m_Array.fields._list = local_78.m_Array.fields._list;
    local_c8.m_Array.fields._index = local_78.m_Array.fields._index;
    local_c8.m_Array.fields._version = local_78.m_Array.fields._version;
    local_c8.m_Object.fields._current.fields.value = local_78.m_Object.fields._current.fields.value;
    local_c8.m_Object.fields._getEnumeratorRetType = local_78.m_Object.fields._getEnumeratorRetType;
    local_c8.m_Object.fields._36_4_ = local_78.m_Object.fields._36_4_;
    local_c8.m_Object.fields._version = local_78.m_Object.fields._version;
    local_c8.m_Object.fields._index = local_78.m_Object.fields._index;
    local_c8.m_Object.fields._current.fields.key = local_78.m_Object.fields._current.fields.key;
    local_c8.type = local_78.type;
    local_c8._4_4_ = local_78._4_4_;
    local_c8.m_Object.fields._dictionary = local_78.m_Object.fields._dictionary;
    SimpleJSONFixed_JSONNode_KeyEnumerator__GetEnumerator
              ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,
               (SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_c8,(MethodInfo *)0x0);
    bVar4 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                      ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,(MethodInfo *)0x0);
    if (bVar4) {
      do {
        pSVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__get_Current
                           ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,(MethodInfo *)0x0);
        pSVar7 = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,pSVar6,(a->klass->vtable)._7_get_Item.method);
        if (pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05dfc4f7;
        value = (*(pSVar7->klass->vtable)._9_get_Value.methodPtr)
                          (pSVar7,(pSVar7->klass->vtable)._9_get_Value.method);
        bVar4 = System_String__IsNullOrWhiteSpace(pSVar6,(MethodInfo *)0x0);
        if ((!bVar4) && (bVar4 = System_String__IsNullOrWhiteSpace(value,(MethodInfo *)0x0), !bVar4)) {
          if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
            if (Il2CppMethodInitialized_075454ed == '\0') goto label_05dfc4b9;
label_05dfc499:
            uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
          }
          else {
            if (Il2CppMethodInitialized_075454ed != '\0') goto label_05dfc499;
label_05dfc4b9:
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
            Il2CppMethodInitialized_075454ed = '\x01';
            uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
          }
          if (uVar1 == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
          }
          __this = (System_Collections_Generic_Dictionary_object__object__o *)
                   TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileSocials_k__BackingField
          ;
          if (__this == (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto label_05dfc4f7;
          System_Collections_Generic_Dictionary_object__object___set_Item
                    (__this,(Il2CppObject *)pSVar6,(Il2CppObject *)value,
                     (MethodInfo_4AAD4C0 *)
                     MethodInfo_System_Collections_Generic_Dictionary_string_string_set_Item);
        }
        bVar4 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_118,(MethodInfo *)0x0);
      } while (bVar4);
    }
  }
  return;
}


// ApplicationManagers.AccountManager$$CompleteProfileFetch
// il2cpp: void ApplicationManagers_AccountManager__CompleteProfileFetch (bool success, System_String_o* error, const MethodInfo* method);
// 0x5dfc6c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dfc71b: jmp 0x5dfc86b

void ApplicationManagers_AccountManager__CompleteProfileFetch
               (bool success,System_String_o *error,MethodInfo *method)

{
  int32_t *piVar1;
  uint32_t uVar2;
  int32_t length;
  System_Collections_Generic_List_Action_bool__string___o *pSVar3;
  Il2CppObject *pIVar4;
  System_Object_array *pSVar5;
  ulong uVar6;
  ulong uVar7;
  Il2CppClass *klass;
  
  if (Il2CppMethodInitialized_07548356 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_bool_string_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_bool_string_ToArray);
    Il2CppMethodInitialized_07548356 = '\x01';
    uVar2 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager;
  }
  else {
    uVar2 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager;
  }
  TypeInfo_ApplicationManagers_AccountManager = (ApplicationManagers_AccountManager_c *)klass;
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    klass = (Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager;
    TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownProfileFetchInFlight = false;
  }
  else {
    ((ApplicationManagers_AccountManager_c *)klass)->static_fields->_ownProfileFetchInFlight = false;
  }
  if (success) {
    if ((klass->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(klass);
    }
    ApplicationManagers_AccountManager__MarkOwnProfileCacheFresh((MethodInfo *)klass);
    uVar2 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager;
  }
  else {
    uVar2 = (klass->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    pSVar3 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownProfileFetchSubscribers;
  }
  else {
    pSVar3 = *(System_Collections_Generic_List_Action_bool__string___o **)((long)klass->static_fields + 0x30);
  }
  if (pSVar3 != (System_Collections_Generic_List_Action_bool__string___o *)0x0) {
    pSVar5 = System_Collections_Generic_List_object___ToArray
                       ((System_Collections_Generic_List_object__o *)pSVar3,
                        (MethodInfo_395F5A0 *)
                        MethodInfo_System_Collections_Generic_List_Action_bool_string_ToArray);
    pSVar3 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownProfileFetchSubscribers;
    if (pSVar3 != (System_Collections_Generic_List_Action_bool__string___o *)0x0) {
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      if (0 < length) {
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
      }
      if (pSVar5 != (System_Object_array *)0x0) {
        if (0 < (int)pSVar5->max_length) {
          uVar6 = pSVar5->max_length & 0xffffffff;
          uVar7 = 0;
          do {
            if (uVar6 <= uVar7) {
              ThrowIndexOutOfRangeException();
            }
            pIVar4 = pSVar5->m_Items[uVar7];
            if (pIVar4 != (Il2CppObject *)0x0) {
              if (pIVar4 == (Il2CppObject *)0x0) goto label_05dfc86b;
              (*pIVar4[1].monitor)(pIVar4[4].klass,success,error,pIVar4[2].monitor);
              uVar6 = (ulong)(uint)pSVar5->max_length;
            }
            uVar7 = uVar7 + 1;
          } while ((long)uVar7 < (long)(int)uVar6);
        }
        return;
      }
    }
  }
label_05dfc86b:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$CompleteCharacterInfoFetch
// il2cpp: void ApplicationManagers_AccountManager__CompleteCharacterInfoFetch (bool success, System_String_o* error, SimpleJSONFixed_JSONNode_o* characterInfo, const MethodInfo* method);
// 0x5dfc870
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dfc8d1: jmp 0x5dfcad1

void ApplicationManagers_AccountManager__CompleteCharacterInfoFetch
               (bool success,System_String_o *error,SimpleJSONFixed_JSONNode_o *characterInfo,
               MethodInfo *method)

{
  int32_t *piVar1;
  uint32_t uVar2;
  int32_t length;
  System_Collections_Generic_List_Action_bool__string__JSONNode___o *pSVar3;
  Il2CppObject *pIVar4;
  Il2CppClass *klass;
  System_Object_array *pSVar5;
  ApplicationManagers_AccountManager_StaticFields *pAVar6;
  SimpleJSONFixed_JSONNode_o *node;
  ulong uVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  int iVar9;
  ulong uVar10;
  MethodInfo *pMVar11;
  
  pMVar11 = (MethodInfo *)error;
  if (Il2CppMethodInitialized_07548357 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_bool_string_JSONNode_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_bool_string_JSONNode_ToArray);
    Il2CppMethodInitialized_07548357 = '\x01';
    uVar2 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager;
  }
  else {
    uVar2 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager;
  }
  TypeInfo_ApplicationManagers_AccountManager = (ApplicationManagers_AccountManager_c *)klass;
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    klass = (Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager;
    TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoFetchInFlight = false;
  }
  else {
    ((ApplicationManagers_AccountManager_c *)klass)->static_fields->_ownCharacterInfoFetchInFlight = false;
  }
  if (success) {
    if ((klass->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(klass);
    }
    ApplicationManagers_AccountManager__MarkCharacterInfoCacheFresh(characterInfo,pMVar11);
    uVar2 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager;
  }
  else {
    uVar2 = (klass->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
    pSVar3 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoFetchSubscribers;
    pMVar11 = MethodInfo_System_Collections_Generic_List_Action_bool_string_JSONNode_ToArray;
  }
  else {
    pSVar3 = *(System_Collections_Generic_List_Action_bool__string__JSONNode___o **)
              ((long)klass->static_fields + 0x48);
    pMVar11 = MethodInfo_System_Collections_Generic_List_Action_bool_string_JSONNode_ToArray;
  }
  MethodInfo_System_Collections_Generic_List_Action_bool_string_JSONNode_ToArray = pMVar11;
  if (pSVar3 != (System_Collections_Generic_List_Action_bool__string__JSONNode___o *)0x0) {
    pSVar5 = System_Collections_Generic_List_object___ToArray
                       ((System_Collections_Generic_List_object__o *)pSVar3,(MethodInfo_395F5A0 *)pMVar11);
    pAVar6 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
    pSVar3 = pAVar6->_ownCharacterInfoFetchSubscribers;
    if (pSVar3 != (System_Collections_Generic_List_Action_bool__string__JSONNode___o *)0x0) {
      piVar1 = &(pSVar3->fields)._version;
      *piVar1 = *piVar1 + 1;
      length = (pSVar3->fields)._size;
      (pSVar3->fields)._size = 0;
      if (0 < length) {
        pMVar11 = (MethodInfo *)0x0;
        System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,length,(MethodInfo *)0x0);
        pAVar6 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
      }
      node = ApplicationManagers_AccountManager__CloneJson(pAVar6->_ownCharacterInfoCache,pMVar11);
      if (pSVar5 != (System_Object_array *)0x0) {
        iVar9 = (int)pSVar5->max_length;
        uVar7 = pSVar5->max_length & 0xffffffff;
        if (success) {
          if (0 < iVar9) {
            uVar10 = 0;
            do {
              if (uVar7 <= uVar10) {
label_05dfcacc:
                ThrowIndexOutOfRangeException();
              }
              pIVar4 = pSVar5->m_Items[uVar10];
              if (pIVar4 != (Il2CppObject *)0x0) {
                if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
                }
                pSVar8 = ApplicationManagers_AccountManager__CloneJson(node,pMVar11);
                if (pIVar4 == (Il2CppObject *)0x0) goto label_05dfcad1;
                pMVar11 = (MethodInfo *)0x1;
                (*pIVar4[1].monitor)(pIVar4[4].klass,1,error,pSVar8,pIVar4[2].monitor);
                uVar7 = (ulong)(uint)pSVar5->max_length;
              }
              uVar10 = uVar10 + 1;
            } while ((long)uVar10 < (long)(int)uVar7);
          }
        }
        else if (0 < iVar9) {
          uVar10 = 0;
          do {
            if (uVar7 <= uVar10) goto label_05dfcacc;
            pIVar4 = pSVar5->m_Items[uVar10];
            if (pIVar4 != (Il2CppObject *)0x0) {
              if (pIVar4 == (Il2CppObject *)0x0) goto label_05dfcad1;
              (*pIVar4[1].monitor)(pIVar4[4].klass,0,error,0,pIVar4[2].monitor);
              uVar7 = (ulong)(uint)pSVar5->max_length;
            }
            uVar10 = uVar10 + 1;
          } while ((long)uVar10 < (long)(int)uVar7);
        }
        return;
      }
    }
  }
label_05dfcad1:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$MarkOwnProfileCacheFresh
// il2cpp: void ApplicationManagers_AccountManager__MarkOwnProfileCacheFresh (const MethodInfo* method);
// 0x5dfc500
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dfc655: jmp 0x5dfc5ac

void ApplicationManagers_AccountManager__MarkOwnProfileCacheFresh(MethodInfo *method)

{
  uint32_t uVar1;
  ApplicationManagers_AccountLoginResponse_o *pAVar2;
  ApplicationManagers_AccountManager_StaticFields *pAVar3;
  bool bVar4;
  
  if (Il2CppMethodInitialized_07548358 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548358 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfc5f4;
label_05dfc527:
    if (g_data_07545ca0 != '\0') goto label_05dfc534;
label_05dfc606:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    g_data_07545ca0 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfc629;
label_05dfc544:
    pAVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  else {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfc527;
label_05dfc5f4:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (g_data_07545ca0 == '\0') goto label_05dfc606;
label_05dfc534:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfc544;
label_05dfc629:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pAVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  if (pAVar2 == (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    bVar4 = false;
    uVar1 = (((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor;
    goto joined_r0x05dfc64f;
  }
  if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (g_data_07545ca0 == '\0') goto label_05dfc66c;
label_05dfc573:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfc583;
label_05dfc68f:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pAVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  else {
    if (g_data_07545ca0 != '\0') goto label_05dfc573;
label_05dfc66c:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    g_data_07545ca0 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfc68f;
label_05dfc583:
    pAVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  if (pAVar2 == (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar4 = (pAVar2->fields).Profile != (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0;
  uVar1 = (((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor;
joined_r0x05dfc64f:
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar3 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar3->_ownProfileCacheHasValue = bVar4;
  pAVar3->_ownProfileCacheValid = bVar4;
  return;
}


// ApplicationManagers.AccountManager$$MarkCharacterInfoCacheFresh
// il2cpp: void ApplicationManagers_AccountManager__MarkCharacterInfoCacheFresh (SimpleJSONFixed_JSONNode_o* characterInfo, const MethodInfo* method);
// 0x5dfcae0

void ApplicationManagers_AccountManager__MarkCharacterInfoCacheFresh
               (SimpleJSONFixed_JSONNode_o *characterInfo,MethodInfo *method)

{
  ApplicationManagers_AccountManager_StaticFields *pAVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  
  if (Il2CppMethodInitialized_07548359 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_07548359 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pSVar3 = ApplicationManagers_AccountManager__CloneJson(characterInfo,method);
  pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar1->_ownCharacterInfoCache = pSVar3;
  Il2CppCodeGenWriteBarrier(&pAVar1->_ownCharacterInfoCache);
  pSVar3 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_ownCharacterInfoCache;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar1->_ownCharacterInfoCacheHasValue = bVar2;
  pAVar1->_ownCharacterInfoCacheValid = bVar2;
  return;
}


// ApplicationManagers.AccountManager$$CloneJson
// il2cpp: SimpleJSONFixed_JSONNode_o* ApplicationManagers_AccountManager__CloneJson (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x5dfb7d0
// eh: try 0x5dfb82d..0x5dfb851 -> pad 0x5dfb853 (+2 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5dfb879..0x5dfb8ad -> pad 0x5dfb8ad (+1 call sites) cleanup
// eh: try 0x5dfb8b0..0x5dfb8b5 -> pad 0x5dfb8bd catch (...) [compiler noexcept guard]
// asm: 32 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dfb851: jmp 0x5dfb855
// asm:   0x5dfb853: jmp 0x5dfb855
// asm:   0x5dfb855: mov r14, rax
// asm:   0x5dfb858: cmp edx, 1
// asm:   0x5dfb85b: jne 0x5dfb8b5
// asm:   0x5dfb85d: mov rdi, r14
// asm:   0x5dfb860: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dfb865: mov r14, rax
// asm:   0x5dfb868: lea rax, [rip + 0x175ae59]
// asm:   0x5dfb86f: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5dfb873: mov rax, qword ptr [r14]
// asm:   0x5dfb876: mov rsi, qword ptr [rax]
// asm:   0x5dfb879: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5dfb87e: test al, al
// asm:   0x5dfb880: je 0x5dfb88c
// asm:   0x5dfb882: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dfb887: mov rbx, r15
// asm:   0x5dfb88a: jmp 0x5dfb843
// asm:   0x5dfb88c: mov edi, 8
// asm:   0x5dfb891: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5dfb896: mov rcx, qword ptr [r14]
// asm:   0x5dfb899: mov qword ptr [rax], rcx
// asm:   0x5dfb89c: lea rsi, [rip + 0x1031c5d]
// asm:   0x5dfb8a3: mov rdi, rax
// asm:   0x5dfb8a6: xor edx, edx
// asm:   0x5dfb8a8: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5dfb8ad: mov r14, rax
// asm:   0x5dfb8b0: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dfb8b5: mov rdi, r14
// asm:   0x5dfb8b8: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5dfb8bd: mov rdi, rax
// asm:   0x5dfb8c0: call 0x2ab61e0  ; __clang_call_terminate()

SimpleJSONFixed_JSONNode_o *
ApplicationManagers_AccountManager__CloneJson(SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  bool bVar1;
  System_String_o *aJSON;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  
  if (Il2CppMethodInitialized_0754835a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_0754835a = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pSVar2 = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    aJSON = (*(node->klass->vtable)._3_ToString.methodPtr)(node,(node->klass->vtable)._3_ToString.method);
    pSVar2 = SimpleJSONFixed_JSON__Parse(aJSON,(MethodInfo *)0x0);
  }
  return pSVar2;
}


// ApplicationManagers.AccountManager$$InvalidateOwnAccountCache
// il2cpp: void ApplicationManagers_AccountManager__InvalidateOwnAccountCache (const MethodInfo* method);
// 0x5dfcba0

void ApplicationManagers_AccountManager__InvalidateOwnAccountCache(MethodInfo *method)

{
  ApplicationManagers_AccountManager_StaticFields *pAVar1;
  
  if (Il2CppMethodInitialized_0754835b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_0754835b = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar1->_ownProfileCacheValid = false;
  pAVar1->_ownCharacterInfoCacheValid = false;
  return;
}


// ApplicationManagers.AccountManager$$ClearOwnAccountCache
// il2cpp: void ApplicationManagers_AccountManager__ClearOwnAccountCache (const MethodInfo* method);
// 0x5dfcbf0

void ApplicationManagers_AccountManager__ClearOwnAccountCache(MethodInfo *method)

{
  int32_t *piVar1;
  int32_t iVar2;
  System_Collections_Generic_List_Action_bool__string___o *pSVar3;
  System_Collections_Generic_List_Action_bool__string__JSONNode___o *pSVar4;
  ApplicationManagers_AccountManager_StaticFields *pAVar5;
  
  if (Il2CppMethodInitialized_0754835c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_bool_string_JSONNode_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_bool_string_Clear);
    Il2CppMethodInitialized_0754835c = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar5 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar5->_ownProfileCacheHasValue = false;
  pAVar5->_ownProfileCacheValid = false;
  pAVar5->_ownProfileFetchInFlight = false;
  pSVar3 = pAVar5->_ownProfileFetchSubscribers;
  if (pSVar3 != (System_Collections_Generic_List_Action_bool__string___o *)0x0) {
    piVar1 = &(pSVar3->fields)._version;
    *piVar1 = *piVar1 + 1;
    iVar2 = (pSVar3->fields)._size;
    (pSVar3->fields)._size = 0;
    if (0 < iVar2) {
      System_Array__Clear((System_Array_o *)(pSVar3->fields)._items,0,iVar2,(MethodInfo *)0x0);
      pAVar5 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
    }
    pAVar5->_ownCharacterInfoCacheHasValue = false;
    pAVar5->_ownCharacterInfoCacheValid = false;
    pAVar5->_ownCharacterInfoFetchInFlight = false;
    pSVar4 = pAVar5->_ownCharacterInfoFetchSubscribers;
    if (pSVar4 != (System_Collections_Generic_List_Action_bool__string__JSONNode___o *)0x0) {
      piVar1 = &(pSVar4->fields)._version;
      *piVar1 = *piVar1 + 1;
      iVar2 = (pSVar4->fields)._size;
      (pSVar4->fields)._size = 0;
      if (0 < iVar2) {
        System_Array__Clear((System_Array_o *)(pSVar4->fields)._items,0,iVar2,(MethodInfo *)0x0);
        pAVar5 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
      }
      pAVar5->_ownCharacterInfoCache = (SimpleJSONFixed_JSONNode_o *)0x0;
      Il2CppCodeGenWriteBarrier(&pAVar5->_ownCharacterInfoCache);
      return;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$ClearProfileResponse
// il2cpp: void ApplicationManagers_AccountManager__ClearProfileResponse (const MethodInfo* method);
// 0x5dfcce0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dfcd05: cmp byte ptr [rip + 0x174b6b8], 0

void ApplicationManagers_AccountManager__ClearProfileResponse(MethodInfo *method)

{
  uint32_t uVar1;
  ApplicationManagers_AccountManager_StaticFields *pAVar2;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754835d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear);
    Il2CppMethodInitialized_0754835d = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_075483c4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483c4 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar2->_ProfileDescription_k__BackingField = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pAVar2->_ProfileDescription_k__BackingField);
  if (Il2CppMethodInitialized_075483c5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483c5 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar2->_ProfileAvatarKey_k__BackingField = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pAVar2->_ProfileAvatarKey_k__BackingField);
  if (Il2CppMethodInitialized_075483c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483c6 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar2->_ProfileBannerKey_k__BackingField = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pAVar2->_ProfileBannerKey_k__BackingField);
  if (Il2CppMethodInitialized_075454ed == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075454ed = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    method_00 = (MethodInfo *)
                TypeInfo_ApplicationManagers_AccountManager->static_fields->_ProfileSocials_k__BackingField;
  }
  else {
    method_00 = *(MethodInfo **)
                 ((long)((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->static_fields + 0x20);
  }
  if (method_00 == (MethodInfo *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_Dictionary_object__object___Clear
            ((System_Collections_Generic_Dictionary_object__object__o *)method_00,
             (MethodInfo_4AAD690 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_Clear);
  ApplicationManagers_AccountManager__ClearOwnAccountCache(method_00);
  return;
}


// ApplicationManagers.AccountManager$$ClearOwnPublicProfileCache
// il2cpp: void ApplicationManagers_AccountManager__ClearOwnPublicProfileCache (const MethodInfo* method);
// 0x5dfcf10

void ApplicationManagers_AccountManager__ClearOwnPublicProfileCache(MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  ApplicationManagers_AccountManager_c *pAVar3;
  
  if (Il2CppMethodInitialized_0754835e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_0754835e = '\x01';
  }
  pAVar3 = TypeInfo_ApplicationManagers_AccountManager;
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pSVar2 = ApplicationManagers_AccountManager__get_UserId((MethodInfo *)pAVar3);
  bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  pAVar3 = TypeInfo_ApplicationManagers_AccountManager;
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pSVar2 = ApplicationManagers_AccountManager__get_UserId((MethodInfo *)pAVar3);
  ApplicationManagers_PublicProfiles_AottgPublicProfileService__ClearProfile(pSVar2,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager$$get_AuthToken
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_AuthToken (const MethodInfo* method);
// 0x5dfd160

System_String_o * ApplicationManagers_AccountManager__get_AuthToken(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754835f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_0754835f = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    return TypeInfo_ApplicationManagers_AccountManager->static_fields->_AuthToken_k__BackingField;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->static_fields + 0x70);
}


// ApplicationManagers.AccountManager$$set_AuthToken
// il2cpp: void ApplicationManagers_AccountManager__set_AuthToken (System_String_o* value, const MethodInfo* method);
// 0x5dfd1d0

void ApplicationManagers_AccountManager__set_AuthToken(System_String_o *value,MethodInfo *method)

{
  ApplicationManagers_AccountManager_StaticFields *pAVar1;
  
  if (Il2CppMethodInitialized_07548360 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548360 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar1->_AuthToken_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&pAVar1->_AuthToken_k__BackingField);
  return;
}


// ApplicationManagers.AccountManager$$get_AuthTokenExpiresUnix
// il2cpp: int64_t ApplicationManagers_AccountManager__get_AuthTokenExpiresUnix (const MethodInfo* method);
// 0x5dfd230

int64_t ApplicationManagers_AccountManager__get_AuthTokenExpiresUnix(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07548361 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548361 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    return TypeInfo_ApplicationManagers_AccountManager->static_fields->_AuthTokenExpiresUnix_k__BackingField;
  }
  return *(int64_t *)
          ((long)((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->static_fields + 0x78);
}


// ApplicationManagers.AccountManager$$set_AuthTokenExpiresUnix
// il2cpp: void ApplicationManagers_AccountManager__set_AuthTokenExpiresUnix (int64_t value, const MethodInfo* method);
// 0x5dfd2a0

void ApplicationManagers_AccountManager__set_AuthTokenExpiresUnix(int64_t value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07548362 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548362 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_AuthTokenExpiresUnix_k__BackingField = value;
  return;
}


// ApplicationManagers.AccountManager$$get_PhotonToken
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_PhotonToken (const MethodInfo* method);
// 0x5dfd300

System_String_o * ApplicationManagers_AccountManager__get_PhotonToken(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07548363 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548363 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    return TypeInfo_ApplicationManagers_AccountManager->static_fields->_PhotonToken_k__BackingField;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->static_fields + 0x80);
}


// ApplicationManagers.AccountManager$$set_PhotonToken
// il2cpp: void ApplicationManagers_AccountManager__set_PhotonToken (System_String_o* value, const MethodInfo* method);
// 0x5dfd370

void ApplicationManagers_AccountManager__set_PhotonToken(System_String_o *value,MethodInfo *method)

{
  ApplicationManagers_AccountManager_StaticFields *pAVar1;
  
  if (Il2CppMethodInitialized_07548364 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548364 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar1->_PhotonToken_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&pAVar1->_PhotonToken_k__BackingField);
  return;
}


// ApplicationManagers.AccountManager$$get_PhotonTokenExpiresUnix
// il2cpp: int64_t ApplicationManagers_AccountManager__get_PhotonTokenExpiresUnix (const MethodInfo* method);
// 0x5dfd3d0

int64_t ApplicationManagers_AccountManager__get_PhotonTokenExpiresUnix(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07548365 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548365 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    return TypeInfo_ApplicationManagers_AccountManager->static_fields->_PhotonTokenExpiresUnix_k__BackingField
    ;
  }
  return *(int64_t *)
          ((long)((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->static_fields + 0x88);
}


// ApplicationManagers.AccountManager$$set_PhotonTokenExpiresUnix
// il2cpp: void ApplicationManagers_AccountManager__set_PhotonTokenExpiresUnix (int64_t value, const MethodInfo* method);
// 0x5dfd440

void ApplicationManagers_AccountManager__set_PhotonTokenExpiresUnix(int64_t value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07548366 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548366 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_PhotonTokenExpiresUnix_k__BackingField = value;
  return;
}


// ApplicationManagers.AccountManager$$get_LoginResponse
// il2cpp: ApplicationManagers_AccountLoginResponse_o* ApplicationManagers_AccountManager__get_LoginResponse (const MethodInfo* method);
// 0x5dfd4a0

ApplicationManagers_AccountLoginResponse_o *
ApplicationManagers_AccountManager__get_LoginResponse(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07548367 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548367 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    return TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  return *(ApplicationManagers_AccountLoginResponse_o **)
          ((long)((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->static_fields + 0x90);
}


// ApplicationManagers.AccountManager$$set_LoginResponse
// il2cpp: void ApplicationManagers_AccountManager__set_LoginResponse (ApplicationManagers_AccountLoginResponse_o* value, const MethodInfo* method);
// 0x5dfd510

void ApplicationManagers_AccountManager__set_LoginResponse
               (ApplicationManagers_AccountLoginResponse_o *value,MethodInfo *method)

{
  ApplicationManagers_AccountManager_StaticFields *pAVar1;
  
  if (Il2CppMethodInitialized_07548368 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548368 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar1->_LoginResponse_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&pAVar1->_LoginResponse_k__BackingField);
  return;
}


// ApplicationManagers.AccountManager$$get_UserId
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_UserId (const MethodInfo* method);
// 0x5dfcf80
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dfcfc3: jmp 0x5dfd0f4
// asm:   0x5dfd069: jmp 0x5dfd14f
// asm:   0x5dfd0f2: jmp 0x5dfd14f

System_String_o * ApplicationManagers_AccountManager__get_UserId(MethodInfo *method)

{
  ApplicationManagers_AccountLoginResponse_o *pAVar1;
  ApplicationManagers_AccountLoginResponse_ProfileData_o *pAVar2;
  
  if (Il2CppMethodInitialized_07548369 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548369 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfcf9d;
label_05dfcfee:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (g_data_07545ca0 != '\0') goto label_05dfcfa6;
label_05dfcffc:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    g_data_07545ca0 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfcfb2;
label_05dfd01b:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  else {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfcfee;
label_05dfcf9d:
    if (g_data_07545ca0 == '\0') goto label_05dfcffc;
label_05dfcfa6:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfd01b;
label_05dfcfb2:
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  if (pAVar1 == (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    return (System_String_o *)0x0;
  }
  if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (g_data_07545ca0 != '\0') goto label_05dfd04a;
label_05dfd07c:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    g_data_07545ca0 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfd056;
label_05dfd09b:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  else {
    if (g_data_07545ca0 == '\0') goto label_05dfd07c;
label_05dfd04a:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfd09b;
label_05dfd056:
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  if (pAVar1 == (ApplicationManagers_AccountLoginResponse_o *)0x0) goto label_05dfd14f;
  if ((pAVar1->fields).Profile == (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0) {
    return (System_String_o *)0x0;
  }
  if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (g_data_07545ca0 != '\0') goto label_05dfd0d3;
label_05dfd106:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    g_data_07545ca0 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfd0df;
label_05dfd125:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  else {
    if (g_data_07545ca0 == '\0') goto label_05dfd106;
label_05dfd0d3:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfd125;
label_05dfd0df:
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  if (pAVar1 != (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    pAVar2 = (pAVar1->fields).Profile;
    if (pAVar2 != (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0) {
      return (pAVar2->fields).AccountId;
    }
  }
label_05dfd14f:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$get_Username
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_Username (const MethodInfo* method);
// 0x5dfd580
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dfd5c3: jmp 0x5dfd6f4
// asm:   0x5dfd669: jmp 0x5dfd74f
// asm:   0x5dfd6f2: jmp 0x5dfd74f

System_String_o * ApplicationManagers_AccountManager__get_Username(MethodInfo *method)

{
  ApplicationManagers_AccountLoginResponse_o *pAVar1;
  ApplicationManagers_AccountLoginResponse_ProfileData_o *pAVar2;
  
  if (Il2CppMethodInitialized_0754836a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_0754836a = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfd59d;
label_05dfd5ee:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (g_data_07545ca0 != '\0') goto label_05dfd5a6;
label_05dfd5fc:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    g_data_07545ca0 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfd5b2;
label_05dfd61b:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  else {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfd5ee;
label_05dfd59d:
    if (g_data_07545ca0 == '\0') goto label_05dfd5fc;
label_05dfd5a6:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfd61b;
label_05dfd5b2:
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  if (pAVar1 == (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    return (System_String_o *)0x0;
  }
  if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (g_data_07545ca0 != '\0') goto label_05dfd64a;
label_05dfd67c:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    g_data_07545ca0 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfd656;
label_05dfd69b:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  else {
    if (g_data_07545ca0 == '\0') goto label_05dfd67c;
label_05dfd64a:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfd69b;
label_05dfd656:
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  if (pAVar1 == (ApplicationManagers_AccountLoginResponse_o *)0x0) goto label_05dfd74f;
  if ((pAVar1->fields).Profile == (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0) {
    return (System_String_o *)0x0;
  }
  if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (g_data_07545ca0 != '\0') goto label_05dfd6d3;
label_05dfd706:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    g_data_07545ca0 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfd6df;
label_05dfd725:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  else {
    if (g_data_07545ca0 == '\0') goto label_05dfd706;
label_05dfd6d3:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfd725;
label_05dfd6df:
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  if (pAVar1 != (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    pAVar2 = (pAVar1->fields).Profile;
    if (pAVar2 != (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0) {
      return (pAVar2->fields).DisplayName;
    }
  }
label_05dfd74f:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$get_Email
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_Email (const MethodInfo* method);
// 0x5dfd760
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dfd7a3: jmp 0x5dfd8d4
// asm:   0x5dfd849: jmp 0x5dfd92f
// asm:   0x5dfd8d2: jmp 0x5dfd92f

System_String_o * ApplicationManagers_AccountManager__get_Email(MethodInfo *method)

{
  ApplicationManagers_AccountLoginResponse_o *pAVar1;
  ApplicationManagers_AccountLoginResponse_ProfileData_o *pAVar2;
  
  if (Il2CppMethodInitialized_0754836b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_0754836b = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfd77d;
label_05dfd7ce:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (g_data_07545ca0 != '\0') goto label_05dfd786;
label_05dfd7dc:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    g_data_07545ca0 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfd792;
label_05dfd7fb:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  else {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfd7ce;
label_05dfd77d:
    if (g_data_07545ca0 == '\0') goto label_05dfd7dc;
label_05dfd786:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfd7fb;
label_05dfd792:
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  if (pAVar1 == (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    return (System_String_o *)0x0;
  }
  if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (g_data_07545ca0 != '\0') goto label_05dfd82a;
label_05dfd85c:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    g_data_07545ca0 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfd836;
label_05dfd87b:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  else {
    if (g_data_07545ca0 == '\0') goto label_05dfd85c;
label_05dfd82a:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfd87b;
label_05dfd836:
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  if (pAVar1 == (ApplicationManagers_AccountLoginResponse_o *)0x0) goto label_05dfd92f;
  if ((pAVar1->fields).Profile == (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0) {
    return (System_String_o *)0x0;
  }
  if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (g_data_07545ca0 != '\0') goto label_05dfd8b3;
label_05dfd8e6:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    g_data_07545ca0 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfd8bf;
label_05dfd905:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  else {
    if (g_data_07545ca0 == '\0') goto label_05dfd8e6;
label_05dfd8b3:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfd905;
label_05dfd8bf:
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  if (pAVar1 != (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    pAVar2 = (pAVar1->fields).Profile;
    if (pAVar2 != (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0) {
      return (pAVar2->fields).Email;
    }
  }
label_05dfd92f:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$get_EmailVerified
// il2cpp: bool ApplicationManagers_AccountManager__get_EmailVerified (const MethodInfo* method);
// 0x5dfd940
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dfd983: jmp 0x5dfdab4
// asm:   0x5dfda29: jmp 0x5dfdb12
// asm:   0x5dfdab2: jmp 0x5dfdb12

bool ApplicationManagers_AccountManager__get_EmailVerified(MethodInfo *method)

{
  ApplicationManagers_AccountLoginResponse_o *pAVar1;
  ApplicationManagers_AccountLoginResponse_ProfileData_o *pAVar2;
  
  if (Il2CppMethodInitialized_0754836c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_0754836c = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfd95d;
label_05dfd9ae:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (g_data_07545ca0 != '\0') goto label_05dfd966;
label_05dfd9bc:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    g_data_07545ca0 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfd972;
label_05dfd9db:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  else {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfd9ae;
label_05dfd95d:
    if (g_data_07545ca0 == '\0') goto label_05dfd9bc;
label_05dfd966:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfd9db;
label_05dfd972:
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  if (pAVar1 == (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    return false;
  }
  if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (g_data_07545ca0 != '\0') goto label_05dfda0a;
label_05dfda3c:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    g_data_07545ca0 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfda16;
label_05dfda5b:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  else {
    if (g_data_07545ca0 == '\0') goto label_05dfda3c;
label_05dfda0a:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfda5b;
label_05dfda16:
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  if (pAVar1 == (ApplicationManagers_AccountLoginResponse_o *)0x0) goto label_05dfdb12;
  if ((pAVar1->fields).Profile == (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0) {
    return false;
  }
  if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (g_data_07545ca0 != '\0') goto label_05dfda93;
label_05dfdac6:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    g_data_07545ca0 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfda9f;
label_05dfdae5:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  else {
    if (g_data_07545ca0 == '\0') goto label_05dfdac6;
label_05dfda93:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfdae5;
label_05dfda9f:
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  if (pAVar1 != (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    pAVar2 = (pAVar1->fields).Profile;
    if (pAVar2 != (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0) {
      return (pAVar2->fields).EmailVerified != false;
    }
  }
label_05dfdb12:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$get_Roles
// il2cpp: System_String_array* ApplicationManagers_AccountManager__get_Roles (const MethodInfo* method);
// 0x5dfdb20
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dfdb63: jmp 0x5dfdc94
// asm:   0x5dfdc09: jmp 0x5dfdcef
// asm:   0x5dfdc92: jmp 0x5dfdcef

System_String_array * ApplicationManagers_AccountManager__get_Roles(MethodInfo *method)

{
  ApplicationManagers_AccountLoginResponse_o *pAVar1;
  ApplicationManagers_AccountLoginResponse_ProfileData_o *pAVar2;
  
  if (Il2CppMethodInitialized_0754836d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_0754836d = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfdb3d;
label_05dfdb8e:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (g_data_07545ca0 != '\0') goto label_05dfdb46;
label_05dfdb9c:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    g_data_07545ca0 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfdb52;
label_05dfdbbb:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  else {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfdb8e;
label_05dfdb3d:
    if (g_data_07545ca0 == '\0') goto label_05dfdb9c;
label_05dfdb46:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfdbbb;
label_05dfdb52:
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  if (pAVar1 == (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    return (System_String_array *)0x0;
  }
  if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (g_data_07545ca0 != '\0') goto label_05dfdbea;
label_05dfdc1c:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    g_data_07545ca0 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfdbf6;
label_05dfdc3b:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  else {
    if (g_data_07545ca0 == '\0') goto label_05dfdc1c;
label_05dfdbea:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfdc3b;
label_05dfdbf6:
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  if (pAVar1 == (ApplicationManagers_AccountLoginResponse_o *)0x0) goto label_05dfdcef;
  if ((pAVar1->fields).Profile == (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0) {
    return (System_String_array *)0x0;
  }
  if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (g_data_07545ca0 != '\0') goto label_05dfdc73;
label_05dfdca6:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    g_data_07545ca0 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfdc7f;
label_05dfdcc5:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  else {
    if (g_data_07545ca0 == '\0') goto label_05dfdca6;
label_05dfdc73:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfdcc5;
label_05dfdc7f:
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  if (pAVar1 != (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    pAVar2 = (pAVar1->fields).Profile;
    if (pAVar2 != (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0) {
      return (pAVar2->fields).Roles;
    }
  }
label_05dfdcef:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$get_PhotonUserId
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_PhotonUserId (const MethodInfo* method);
// 0x5dfdd00
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dfdd43: jmp 0x5dfde74
// asm:   0x5dfdde9: jmp 0x5dfdecf
// asm:   0x5dfde72: jmp 0x5dfdecf

System_String_o * ApplicationManagers_AccountManager__get_PhotonUserId(MethodInfo *method)

{
  ApplicationManagers_AccountLoginResponse_o *pAVar1;
  ApplicationManagers_AccountLoginResponse_ProfileData_o *pAVar2;
  
  if (Il2CppMethodInitialized_0754836e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_0754836e = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfdd1d;
label_05dfdd6e:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (g_data_07545ca0 != '\0') goto label_05dfdd26;
label_05dfdd7c:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    g_data_07545ca0 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfdd32;
label_05dfdd9b:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  else {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfdd6e;
label_05dfdd1d:
    if (g_data_07545ca0 == '\0') goto label_05dfdd7c;
label_05dfdd26:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfdd9b;
label_05dfdd32:
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  if (pAVar1 == (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    return (System_String_o *)0x0;
  }
  if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (g_data_07545ca0 != '\0') goto label_05dfddca;
label_05dfddfc:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    g_data_07545ca0 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfddd6;
label_05dfde1b:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  else {
    if (g_data_07545ca0 == '\0') goto label_05dfddfc;
label_05dfddca:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfde1b;
label_05dfddd6:
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  if (pAVar1 == (ApplicationManagers_AccountLoginResponse_o *)0x0) goto label_05dfdecf;
  if ((pAVar1->fields).Profile == (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0) {
    return (System_String_o *)0x0;
  }
  if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (g_data_07545ca0 != '\0') goto label_05dfde53;
label_05dfde86:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    g_data_07545ca0 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfde5f;
label_05dfdea5:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  else {
    if (g_data_07545ca0 == '\0') goto label_05dfde86;
label_05dfde53:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfdea5;
label_05dfde5f:
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  if (pAVar1 != (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    pAVar2 = (pAVar1->fields).Profile;
    if (pAVar2 != (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0) {
      return (pAVar2->fields).PhotonUserId;
    }
  }
label_05dfdecf:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$get_Patreon
// il2cpp: SimpleJSONFixed_JSONNode_o* ApplicationManagers_AccountManager__get_Patreon (const MethodInfo* method);
// 0x5dfdee0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dfdf23: jmp 0x5dfe0ee
// asm:   0x5dfdfc9: jmp 0x5dfe152
// asm:   0x5dfe056: jmp 0x5dfe152
// asm:   0x5dfe0ec: jmp 0x5dfe152

SimpleJSONFixed_JSONNode_o * ApplicationManagers_AccountManager__get_Patreon(MethodInfo *method)

{
  ApplicationManagers_AccountLoginResponse_o *pAVar1;
  ApplicationManagers_AccountLoginResponse_ProfileData_o *pAVar2;
  ApplicationManagers_AccountLoginResponse_PatreonData_o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  MethodInfo *in_RSI;
  
  if (Il2CppMethodInitialized_0754836f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_0754836f = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfdefd;
label_05dfdf4e:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (g_data_07545ca0 != '\0') goto label_05dfdf06;
label_05dfdf5c:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    g_data_07545ca0 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfdf12;
label_05dfdf7b:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  else {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfdf4e;
label_05dfdefd:
    if (g_data_07545ca0 == '\0') goto label_05dfdf5c;
label_05dfdf06:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfdf7b;
label_05dfdf12:
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  if (pAVar1 == (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    return (SimpleJSONFixed_JSONNode_o *)0x0;
  }
  if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (g_data_07545ca0 != '\0') goto label_05dfdfaa;
label_05dfdfdc:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    g_data_07545ca0 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfdfb6;
label_05dfdffb:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  else {
    if (g_data_07545ca0 == '\0') goto label_05dfdfdc;
label_05dfdfaa:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfdffb;
label_05dfdfb6:
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  if (pAVar1 == (ApplicationManagers_AccountLoginResponse_o *)0x0) goto label_05dfe152;
  if ((pAVar1->fields).Profile == (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0) {
    return (SimpleJSONFixed_JSONNode_o *)0x0;
  }
  if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (g_data_07545ca0 != '\0') goto label_05dfe037;
label_05dfe069:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    g_data_07545ca0 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfe043;
label_05dfe088:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  else {
    if (g_data_07545ca0 == '\0') goto label_05dfe069;
label_05dfe037:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfe088;
label_05dfe043:
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  if ((pAVar1 == (ApplicationManagers_AccountLoginResponse_o *)0x0) ||
     (pAVar2 = (pAVar1->fields).Profile,
     pAVar2 == (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0)) goto label_05dfe152;
  if ((pAVar2->fields).Patreon == (ApplicationManagers_AccountLoginResponse_PatreonData_o *)0x0) {
    return (SimpleJSONFixed_JSONNode_o *)0x0;
  }
  if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (g_data_07545ca0 != '\0') goto label_05dfe0cd;
label_05dfe100:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    g_data_07545ca0 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfe0d9;
label_05dfe11f:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  else {
    if (g_data_07545ca0 == '\0') goto label_05dfe100;
label_05dfe0cd:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfe11f;
label_05dfe0d9:
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  if (((pAVar1 != (ApplicationManagers_AccountLoginResponse_o *)0x0) &&
      (pAVar2 = (pAVar1->fields).Profile,
      pAVar2 != (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0)) &&
     (__this = (pAVar2->fields).Patreon,
     __this != (ApplicationManagers_AccountLoginResponse_PatreonData_o *)0x0)) {
    pSVar3 = ApplicationManagers_AccountLoginResponse_PatreonData__ToJsonNode(__this,in_RSI);
    return pSVar3;
  }
label_05dfe152:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$IsOAuthProviderLinked
// il2cpp: bool ApplicationManagers_AccountManager__IsOAuthProviderLinked (System_String_o* provider, const MethodInfo* method);
// 0x5dfe160

bool ApplicationManagers_AccountManager__IsOAuthProviderLinked(System_String_o *provider,MethodInfo *method)

{
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *pAVar1;
  
  if (Il2CppMethodInitialized_07548370 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548370 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar1 = ApplicationManagers_AccountManager__GetOAuthLink(provider,method);
  return pAVar1 != (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0;
}


// ApplicationManagers.AccountManager$$get_RefreshTokenExpiresUnix
// il2cpp: int64_t ApplicationManagers_AccountManager__get_RefreshTokenExpiresUnix (const MethodInfo* method);
// 0x5dfe4a0

int64_t ApplicationManagers_AccountManager__get_RefreshTokenExpiresUnix(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07548371 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548371 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    return TypeInfo_ApplicationManagers_AccountManager->static_fields->
           _RefreshTokenExpiresUnix_k__BackingField;
  }
  return *(int64_t *)
          ((long)((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->static_fields + 0x98);
}


// ApplicationManagers.AccountManager$$set_RefreshTokenExpiresUnix
// il2cpp: void ApplicationManagers_AccountManager__set_RefreshTokenExpiresUnix (int64_t value, const MethodInfo* method);
// 0x5dfe510

void ApplicationManagers_AccountManager__set_RefreshTokenExpiresUnix(int64_t value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07548372 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548372 = '\x01';
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
// 0x5dfab30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dfab4d: cmp byte ptr [rip + 0x174d873], 0

bool ApplicationManagers_AccountManager__get_IsLoggedIn(MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07548373 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548373 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_075483c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483c7 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar2 = System_String__IsNullOrEmpty
                    (TypeInfo_ApplicationManagers_AccountManager->static_fields->_AuthToken_k__BackingField,
                     (MethodInfo *)0x0);
  return !bVar2;
}


// ApplicationManagers.AccountManager$$get_HasRefreshToken
// il2cpp: bool ApplicationManagers_AccountManager__get_HasRefreshToken (const MethodInfo* method);
// 0x5dfe570

bool ApplicationManagers_AccountManager__get_HasRefreshToken(MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_07548374 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548374 = '\x01';
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
// 0x5dfe5d0

bool ApplicationManagers_AccountManager__get_IsRefreshInProgress(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07548375 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548375 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    return TypeInfo_ApplicationManagers_AccountManager->static_fields->_IsRefreshInProgress_k__BackingField;
  }
  return (bool)*(undefined1 *)
                ((long)((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->static_fields + 0xa0);
}


// ApplicationManagers.AccountManager$$set_IsRefreshInProgress
// il2cpp: void ApplicationManagers_AccountManager__set_IsRefreshInProgress (bool value, const MethodInfo* method);
// 0x5dfe640

void ApplicationManagers_AccountManager__set_IsRefreshInProgress(bool value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07548376 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548376 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_IsRefreshInProgress_k__BackingField = value;
  return;
}


// ApplicationManagers.AccountManager$$get_KeepSignedIn
// il2cpp: bool ApplicationManagers_AccountManager__get_KeepSignedIn (const MethodInfo* method);
// 0x5dfe6a0

bool ApplicationManagers_AccountManager__get_KeepSignedIn(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07548377 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548377 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    return TypeInfo_ApplicationManagers_AccountManager->static_fields->_KeepSignedIn_k__BackingField;
  }
  return (bool)*(undefined1 *)
                ((long)((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->static_fields + 0xa1);
}


// ApplicationManagers.AccountManager$$set_KeepSignedIn
// il2cpp: void ApplicationManagers_AccountManager__set_KeepSignedIn (bool value, const MethodInfo* method);
// 0x5dfe710

void ApplicationManagers_AccountManager__set_KeepSignedIn(bool value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07548378 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548378 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_KeepSignedIn_k__BackingField = value;
  return;
}


// ApplicationManagers.AccountManager$$get_HasAuthMethodsSnapshot
// il2cpp: bool ApplicationManagers_AccountManager__get_HasAuthMethodsSnapshot (const MethodInfo* method);
// 0x5dfe770

bool ApplicationManagers_AccountManager__get_HasAuthMethodsSnapshot(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_07548379 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548379 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    return TypeInfo_ApplicationManagers_AccountManager->static_fields->_HasAuthMethodsSnapshot_k__BackingField
    ;
  }
  return (bool)*(undefined1 *)
                ((long)((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->static_fields + 0xa2);
}


// ApplicationManagers.AccountManager$$set_HasAuthMethodsSnapshot
// il2cpp: void ApplicationManagers_AccountManager__set_HasAuthMethodsSnapshot (bool value, const MethodInfo* method);
// 0x5dfe7e0

void ApplicationManagers_AccountManager__set_HasAuthMethodsSnapshot(bool value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754837a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_0754837a = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_HasAuthMethodsSnapshot_k__BackingField = value;
  return;
}


// ApplicationManagers.AccountManager$$get_DevMode
// il2cpp: bool ApplicationManagers_AccountManager__get_DevMode (const MethodInfo* method);
// 0x5dfe840

bool ApplicationManagers_AccountManager__get_DevMode(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754837b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ApplicationConfig);
    Il2CppMethodInitialized_0754837b = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_ApplicationConfig->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_ApplicationConfig->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationConfig);
    return TypeInfo_ApplicationManagers_ApplicationConfig->static_fields->DevelopmentMode;
  }
  return (bool)*(undefined1 *)
                ((long)((Il2CppClass *)TypeInfo_ApplicationManagers_ApplicationConfig)->static_fields + 8);
}


// ApplicationManagers.AccountManager$$get_PendingVerifyToken
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_PendingVerifyToken (const MethodInfo* method);
// 0x5dfe8b0

System_String_o * ApplicationManagers_AccountManager__get_PendingVerifyToken(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754837c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_0754837c = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    return TypeInfo_ApplicationManagers_AccountManager->static_fields->_PendingVerifyToken_k__BackingField;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->static_fields + 0xa8);
}


// ApplicationManagers.AccountManager$$set_PendingVerifyToken
// il2cpp: void ApplicationManagers_AccountManager__set_PendingVerifyToken (System_String_o* value, const MethodInfo* method);
// 0x5dfe920

void ApplicationManagers_AccountManager__set_PendingVerifyToken(System_String_o *value,MethodInfo *method)

{
  ApplicationManagers_AccountManager_StaticFields *pAVar1;
  
  if (Il2CppMethodInitialized_0754837d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_0754837d = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar1->_PendingVerifyToken_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&pAVar1->_PendingVerifyToken_k__BackingField);
  return;
}


// ApplicationManagers.AccountManager$$get_PendingEmail
// il2cpp: System_String_o* ApplicationManagers_AccountManager__get_PendingEmail (const MethodInfo* method);
// 0x5dfe990

System_String_o * ApplicationManagers_AccountManager__get_PendingEmail(MethodInfo *method)

{
  uint32_t uVar1;
  
  if (Il2CppMethodInitialized_0754837e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_0754837e = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    return TypeInfo_ApplicationManagers_AccountManager->static_fields->_PendingEmail_k__BackingField;
  }
  return *(System_String_o **)
          ((long)((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->static_fields + 0xb0);
}


// ApplicationManagers.AccountManager$$set_PendingEmail
// il2cpp: void ApplicationManagers_AccountManager__set_PendingEmail (System_String_o* value, const MethodInfo* method);
// 0x5dfea00

void ApplicationManagers_AccountManager__set_PendingEmail(System_String_o *value,MethodInfo *method)

{
  ApplicationManagers_AccountManager_StaticFields *pAVar1;
  
  if (Il2CppMethodInitialized_0754837f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_0754837f = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar1->_PendingEmail_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&pAVar1->_PendingEmail_k__BackingField);
  return;
}


// ApplicationManagers.AccountManager$$add_OnLoggedIn
// il2cpp: void ApplicationManagers_AccountManager__add_OnLoggedIn (System_Action_o* value, const MethodInfo* method);
// 0x5dfea70

void ApplicationManagers_AccountManager__add_OnLoggedIn(System_Action_o *value,MethodInfo *method)

{
  System_Action_o *pSVar1;
  System_Delegate_o *value_00;
  System_Action_o *a;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07548380 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    Il2CppMethodInitialized_07548380 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  a = TypeInfo_ApplicationManagers_AccountManager->static_fields->OnLoggedIn;
  do {
    value_00 = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((value_00 != (System_Delegate_o *)0x0) &&
       ((System_Action_c *)value_00->klass != TypeInfo_System_Action)) {
      il2cpp_codegen_raise_invalid_cast_exception(value_00);
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_ApplicationManagers_AccountManager->static_fields->OnLoggedIn,value_00,a);
    bVar2 = pSVar1 != a;
    a = pSVar1;
  } while (bVar2);
  return;
}


// ApplicationManagers.AccountManager$$remove_OnLoggedIn
// il2cpp: void ApplicationManagers_AccountManager__remove_OnLoggedIn (System_Action_o* value, const MethodInfo* method);
// 0x5dfeb50

void ApplicationManagers_AccountManager__remove_OnLoggedIn(System_Action_o *value,MethodInfo *method)

{
  System_Action_o *pSVar1;
  System_Delegate_o *value_00;
  System_Action_o *source;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07548381 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    Il2CppMethodInitialized_07548381 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  source = TypeInfo_ApplicationManagers_AccountManager->static_fields->OnLoggedIn;
  do {
    value_00 = System_Delegate__Remove
                         ((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((value_00 != (System_Delegate_o *)0x0) &&
       ((System_Action_c *)value_00->klass != TypeInfo_System_Action)) {
      il2cpp_codegen_raise_invalid_cast_exception(value_00);
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_ApplicationManagers_AccountManager->static_fields->OnLoggedIn,value_00,
                        source);
    bVar2 = pSVar1 != source;
    source = pSVar1;
  } while (bVar2);
  return;
}


// ApplicationManagers.AccountManager$$add_OnLoggedOut
// il2cpp: void ApplicationManagers_AccountManager__add_OnLoggedOut (System_Action_o* value, const MethodInfo* method);
// 0x5dfec30

void ApplicationManagers_AccountManager__add_OnLoggedOut(System_Action_o *value,MethodInfo *method)

{
  System_Action_o *pSVar1;
  System_Delegate_o *value_00;
  System_Action_o *a;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07548382 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    Il2CppMethodInitialized_07548382 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  a = TypeInfo_ApplicationManagers_AccountManager->static_fields->OnLoggedOut;
  do {
    value_00 = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((value_00 != (System_Delegate_o *)0x0) &&
       ((System_Action_c *)value_00->klass != TypeInfo_System_Action)) {
      il2cpp_codegen_raise_invalid_cast_exception(value_00);
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_ApplicationManagers_AccountManager->static_fields->OnLoggedOut,value_00,a);
    bVar2 = pSVar1 != a;
    a = pSVar1;
  } while (bVar2);
  return;
}


// ApplicationManagers.AccountManager$$remove_OnLoggedOut
// il2cpp: void ApplicationManagers_AccountManager__remove_OnLoggedOut (System_Action_o* value, const MethodInfo* method);
// 0x5dfed10

void ApplicationManagers_AccountManager__remove_OnLoggedOut(System_Action_o *value,MethodInfo *method)

{
  System_Action_o *pSVar1;
  System_Delegate_o *value_00;
  System_Action_o *source;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07548383 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    Il2CppMethodInitialized_07548383 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  source = TypeInfo_ApplicationManagers_AccountManager->static_fields->OnLoggedOut;
  do {
    value_00 = System_Delegate__Remove
                         ((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((value_00 != (System_Delegate_o *)0x0) &&
       ((System_Action_c *)value_00->klass != TypeInfo_System_Action)) {
      il2cpp_codegen_raise_invalid_cast_exception(value_00);
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_ApplicationManagers_AccountManager->static_fields->OnLoggedOut,value_00,
                        source);
    bVar2 = pSVar1 != source;
    source = pSVar1;
  } while (bVar2);
  return;
}


// ApplicationManagers.AccountManager$$add_OnAuthMethodsChanged
// il2cpp: void ApplicationManagers_AccountManager__add_OnAuthMethodsChanged (System_Action_o* value, const MethodInfo* method);
// 0x5dfedf0

void ApplicationManagers_AccountManager__add_OnAuthMethodsChanged(System_Action_o *value,MethodInfo *method)

{
  System_Action_o *pSVar1;
  System_Delegate_o *value_00;
  System_Action_o *a;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07548384 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    Il2CppMethodInitialized_07548384 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  a = TypeInfo_ApplicationManagers_AccountManager->static_fields->OnAuthMethodsChanged;
  do {
    value_00 = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((value_00 != (System_Delegate_o *)0x0) &&
       ((System_Action_c *)value_00->klass != TypeInfo_System_Action)) {
      il2cpp_codegen_raise_invalid_cast_exception(value_00);
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_ApplicationManagers_AccountManager->static_fields->OnAuthMethodsChanged,
                        value_00,a);
    bVar2 = pSVar1 != a;
    a = pSVar1;
  } while (bVar2);
  return;
}


// ApplicationManagers.AccountManager$$remove_OnAuthMethodsChanged
// il2cpp: void ApplicationManagers_AccountManager__remove_OnAuthMethodsChanged (System_Action_o* value, const MethodInfo* method);
// 0x5dfeed0

void ApplicationManagers_AccountManager__remove_OnAuthMethodsChanged
               (System_Action_o *value,MethodInfo *method)

{
  System_Action_o *pSVar1;
  System_Delegate_o *value_00;
  System_Action_o *source;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07548385 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    Il2CppMethodInitialized_07548385 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  source = TypeInfo_ApplicationManagers_AccountManager->static_fields->OnAuthMethodsChanged;
  do {
    value_00 = System_Delegate__Remove
                         ((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    if ((value_00 != (System_Delegate_o *)0x0) &&
       ((System_Action_c *)value_00->klass != TypeInfo_System_Action)) {
      il2cpp_codegen_raise_invalid_cast_exception(value_00);
    }
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pSVar1 = il2cpp_codegen_interlocked_compare_exchange_ref
                       (&TypeInfo_ApplicationManagers_AccountManager->static_fields->OnAuthMethodsChanged,
                        value_00,source);
    bVar2 = pSVar1 != source;
    source = pSVar1;
  } while (bVar2);
  return;
}


// ApplicationManagers.AccountManager$$Init
// il2cpp: void ApplicationManagers_AccountManager__Init (const MethodInfo* method);
// 0x5dfefb0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dff064: cmp byte ptr [rip + 0x174933a], 0
// asm:   0x5dff211: jmp 0x5dff0c9

void ApplicationManagers_AccountManager__Init(MethodInfo *method)

{
  uint32_t uVar1;
  ApplicationManagers_AccountManager_StaticFields *pAVar2;
  Il2CppClass *klass;
  ApplicationManagers_AccountManager_c *method_00;
  bool bVar3;
  ApplicationManagers_AccountManager_o *pAVar4;
  System_String_o *path;
  Events_OnPreLoadScene_o *__this;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  
  if (Il2CppMethodInitialized_07548386 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_ApplicationManagers_AccountManager_OnPreLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnPreLoadScene);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Utility_SingletonFactory_CreateSingleton_AccountManager);
    Il2CppMethodInitialized_07548386 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar4 = Utility_SingletonFactory__CreateSingleton_object_
                     ((Il2CppObject *)TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance,
                      (MethodInfo_3680650 *)MethodInfo_Utility_SingletonFactory_CreateSingleton_AccountManager
                     );
  pAVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar2->_instance = pAVar4;
  Il2CppCodeGenWriteBarrier(&pAVar2->_instance);
  if (TypeInfo_ApplicationManagers_AccountManager->static_fields->_sceneInvalidationSubscribed == false) {
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnPreLoadScene);
    Events_OnPreLoadScene___ctor
              (__this,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_ApplicationManagers_AccountManager_OnPreLoadScene,(MethodInfo *)0x0);
    Events_EventManager__add_OnPreLoadScene(__this,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    klass = (Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager;
    TypeInfo_ApplicationManagers_AccountManager->static_fields->_sceneInvalidationSubscribed = true;
    uVar1 = (((ApplicationManagers_AccountManager_c *)klass)->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(klass);
  }
  if (Il2CppMethodInitialized_075483a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&"/AccountRefresh.dat");
    Il2CppMethodInitialized_075483a5 = '\x01';
    uVar1 = (TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Utility_FolderPaths)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  path = System_String__Concat_52f0320
                   (TypeInfo_Utility_FolderPaths->static_fields->Settings,"/AccountRefresh.dat",
                    (MethodInfo *)0x0);
  bVar3 = System_IO_File__Exists(path,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_075483c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483c8 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  method_00 = TypeInfo_ApplicationManagers_AccountManager;
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_KeepSignedIn_k__BackingField = bVar3;
  ApplicationManagers_AccountManager__LoadRefreshToken((MethodInfo *)method_00);
  method_02 = (MethodInfo *)0x0;
  bVar3 = System_String__IsNullOrEmpty
                    (TypeInfo_ApplicationManagers_AccountManager->static_fields->_refreshToken,
                     (MethodInfo *)0x0);
  if (!bVar3) {
    method_01 = extraout_RDX;
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      method_01 = extraout_RDX_00;
    }
    method_02 = (MethodInfo *)0x1;
    ApplicationManagers_AccountManager__Refresh((System_Action_bool__string__o *)0x0,true,method_01);
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  ApplicationManagers_AccountManager__RefreshAuthMethods((System_Action_bool__string__o *)0x0,method_02);
  return;
}


// ApplicationManagers.AccountManager$$SetKeepSignedIn
// il2cpp: void ApplicationManagers_AccountManager__SetKeepSignedIn (bool value, const MethodInfo* method);
// 0x5dffb20
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dffb4a: cmp byte ptr [rip + 0x1748877], 0

void ApplicationManagers_AccountManager__SetKeepSignedIn(bool value,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  ApplicationManagers_AccountManager_StaticFields *pAVar3;
  ApplicationManagers_AccountManager_c *pAVar4;
  
  if (Il2CppMethodInitialized_07548387 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548387 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_075483c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483c8 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar4 = TypeInfo_ApplicationManagers_AccountManager;
  pAVar3 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar3->_KeepSignedIn_k__BackingField = value;
  uVar1 = (pAVar4->_2).cctor_finished_or_no_cctor;
  if (value) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)pAVar4);
      pAVar3 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
    }
    bVar2 = System_String__IsNullOrEmpty(pAVar3->_refreshToken,(MethodInfo *)0x0);
    if (!bVar2) {
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        pAVar4 = TypeInfo_ApplicationManagers_AccountManager;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        ApplicationManagers_AccountManager__SaveRefreshToken((MethodInfo *)pAVar4);
        return;
      }
      ApplicationManagers_AccountManager__SaveRefreshToken
                ((MethodInfo *)TypeInfo_ApplicationManagers_AccountManager);
      return;
    }
    return;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)pAVar4);
    ApplicationManagers_AccountManager__DeleteRefreshToken((MethodInfo *)pAVar4);
    return;
  }
  ApplicationManagers_AccountManager__DeleteRefreshToken((MethodInfo *)pAVar4);
  return;
}


// ApplicationManagers.AccountManager$$IsAuthMethodEnabled
// il2cpp: bool ApplicationManagers_AccountManager__IsAuthMethodEnabled (System_String_o* key, const MethodInfo* method);
// 0x5dfffb0

bool ApplicationManagers_AccountManager__IsAuthMethodEnabled(System_String_o *key,MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *__this;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07548388 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    Il2CppMethodInitialized_07548388 = '\x01';
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
  if (__this == (System_Collections_Generic_HashSet_object__o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_Collections_Generic_HashSet_object___Contains
                    (__this,(Il2CppObject *)key,
                     (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
  return bVar1;
}


// ApplicationManagers.AccountManager$$GetOAuthLink
// il2cpp: ApplicationManagers_AccountLoginResponse_OAuthLinkData_o* ApplicationManagers_AccountManager__GetOAuthLink (System_String_o* provider, const MethodInfo* method);
// 0x5dfe1b0
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dfe225: jmp 0x5dfe47a
// asm:   0x5dfe2a5: jmp 0x5dfe491
// asm:   0x5dfe332: jmp 0x5dfe491
// asm:   0x5dfe3cc: jmp 0x5dfe491

ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *
ApplicationManagers_AccountManager__GetOAuthLink(System_String_o *provider,MethodInfo *method)

{
  ApplicationManagers_AccountLoginResponse_o *pAVar1;
  ApplicationManagers_AccountLoginResponse_ProfileData_o *pAVar2;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_array *pAVar3;
  ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *pAVar4;
  bool bVar5;
  ulong uVar6;
  ulong uVar7;
  
  if (Il2CppMethodInitialized_07548389 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548389 = '\x01';
  }
  bVar5 = System_String__IsNullOrEmpty(provider,(MethodInfo *)0x0);
  if (bVar5) {
    return (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0;
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (g_data_07545ca0 == '\0') goto label_05dfe238;
label_05dfe208:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfe214;
label_05dfe257:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  else {
    if (g_data_07545ca0 != '\0') goto label_05dfe208;
label_05dfe238:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    g_data_07545ca0 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfe257;
label_05dfe214:
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  if (pAVar1 == (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    return (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0;
  }
  if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (g_data_07545ca0 == '\0') goto label_05dfe2b8;
label_05dfe286:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfe292;
label_05dfe2d7:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  else {
    if (g_data_07545ca0 != '\0') goto label_05dfe286;
label_05dfe2b8:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    g_data_07545ca0 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfe2d7;
label_05dfe292:
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  if (pAVar1 == (ApplicationManagers_AccountLoginResponse_o *)0x0) goto label_05dfe491;
  if ((pAVar1->fields).Profile == (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0) {
    return (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0;
  }
  if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (g_data_07545ca0 == '\0') goto label_05dfe345;
label_05dfe313:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfe31f;
label_05dfe364:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  else {
    if (g_data_07545ca0 != '\0') goto label_05dfe313;
label_05dfe345:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    g_data_07545ca0 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfe364;
label_05dfe31f:
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  if ((pAVar1 == (ApplicationManagers_AccountLoginResponse_o *)0x0) ||
     (pAVar2 = (pAVar1->fields).Profile,
     pAVar2 == (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0)) goto label_05dfe491;
  if ((pAVar2->fields).OAuthLinks == (ApplicationManagers_AccountLoginResponse_OAuthLinkData_array *)0x0) {
    return (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0;
  }
  if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (g_data_07545ca0 == '\0') goto label_05dfe3df;
label_05dfe3ad:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dfe3b9;
label_05dfe3fe:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  else {
    if (g_data_07545ca0 != '\0') goto label_05dfe3ad;
label_05dfe3df:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    g_data_07545ca0 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dfe3fe;
label_05dfe3b9:
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_LoginResponse_k__BackingField;
  }
  if (((pAVar1 != (ApplicationManagers_AccountLoginResponse_o *)0x0) &&
      (pAVar2 = (pAVar1->fields).Profile,
      pAVar2 != (ApplicationManagers_AccountLoginResponse_ProfileData_o *)0x0)) &&
     (pAVar3 = (pAVar2->fields).OAuthLinks,
     pAVar3 != (ApplicationManagers_AccountLoginResponse_OAuthLinkData_array *)0x0)) {
    if (0 < (int)pAVar3->max_length) {
      uVar6 = pAVar3->max_length & 0xffffffff;
      uVar7 = 0;
      do {
        if (uVar6 <= uVar7) {
          ThrowIndexOutOfRangeException();
        }
        pAVar4 = pAVar3->m_Items[uVar7];
        if (pAVar4 != (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0) {
          bVar5 = System_String__Equals_52ffe30((pAVar4->fields).Provider,provider,5,(MethodInfo *)0x0);
          if (bVar5) {
            return pAVar4;
          }
          uVar6 = (ulong)(uint)pAVar3->max_length;
        }
        uVar7 = uVar7 + 1;
      } while ((long)uVar7 < (long)(int)uVar6);
    }
    return (ApplicationManagers_AccountLoginResponse_OAuthLinkData_o *)0x0;
  }
label_05dfe491:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$RefreshAuthMethods
// il2cpp: void ApplicationManagers_AccountManager__RefreshAuthMethods (System_Action_bool__string__o* onComplete, const MethodInfo* method);
// 0x5dff9c0

void ApplicationManagers_AccountManager__RefreshAuthMethods
               (System_Action_bool__string__o *onComplete,MethodInfo *method)

{
  ApplicationManagers_AccountManager_o *pAVar1;
  bool bVar2;
  ApplicationManagers_AccountManager__GetAuthMethods_d__168_o *__this;
  
  if (Il2CppMethodInitialized_0754838a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&"not_initialized");
    Il2CppMethodInitialized_0754838a = '\x01';
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
  if (pAVar1 == (ApplicationManagers_AccountManager_o *)0x0) {
    ThrowNullReferenceException();
  }
  if (Il2CppMethodInitialized_07548395 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_GetAuthMethods_d__168);
    Il2CppMethodInitialized_07548395 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_GetAuthMethods_d__168);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).__1__state = 0;
  (__this->fields).__4__this = pAVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields).__4__this);
  (__this->fields).onComplete = onComplete;
  Il2CppCodeGenWriteBarrier(&(__this->fields).onComplete);
  UnityEngine_MonoBehaviour__StartCoroutine_691c390
            ((UnityEngine_MonoBehaviour_o *)pAVar1,(System_Collections_IEnumerator_o *)__this,
             (MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager$$Register
// il2cpp: void ApplicationManagers_AccountManager__Register (System_String_o* displayName, System_String_o* email, System_String_o* password, System_Action_bool__string__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x5e000d0

void ApplicationManagers_AccountManager__Register
               (System_String_o *displayName,System_String_o *email,System_String_o *password,
               System_Action_bool__string__o *onComplete,bool reportNetworkError,MethodInfo *method)

{
  uint32_t uVar1;
  ApplicationManagers_AccountManager_StaticFields *pAVar2;
  ApplicationManagers_AccountManager_o *__this;
  Il2CppObject *object;
  System_String_o *path;
  System_String_o *captureField;
  ApplicationManagers_AccountManager___c__DisplayClass158_0_o *__this_00;
  SimpleJSONFixed_JSONObject_o *__this_01;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  System_String_o *json;
  System_Action_T1__T2__o *__this_02;
  ApplicationManagers_AccountManager___c_StaticFields *pAVar4;
  System_Action_string__o *__this_03;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754838b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_c_Register_b__158_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass158_0_Register_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass158_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager_c);
    il2cpp_codegen_initialize_runtime_metadata(&"verificationToken");
    il2cpp_codegen_initialize_runtime_metadata(&"email");
    il2cpp_codegen_initialize_runtime_metadata(&"displayName");
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/auth/register");
    il2cpp_codegen_initialize_runtime_metadata(&"password");
    Il2CppMethodInitialized_0754838b = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass158_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 == (ApplicationManagers_AccountManager___c__DisplayClass158_0_o *)0x0) goto label_05e004fc;
  (__this_00->fields).onComplete = onComplete;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).onComplete);
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (Il2CppMethodInitialized_075483c9 != '\0') goto label_05e00206;
label_05e00497:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483c9 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_075483c9 == '\0') goto label_05e00497;
label_05e00206:
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar2->_PendingVerifyToken_k__BackingField = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pAVar2->_PendingVerifyToken_k__BackingField);
  if (Il2CppMethodInitialized_075483ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483ca = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar2->_PendingEmail_k__BackingField = email;
  Il2CppCodeGenWriteBarrier(&pAVar2->_PendingEmail_k__BackingField);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_01,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
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
    __this = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
    json = (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                     (__this_01,(__this_01->klass->vtable)._3_ToString.method);
    __this_02 = (System_Action_T1__T2__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool_string);
    method_00 = (MethodInfo *)0x5e0037e;
    System_Action_bool__object____ctor
              (__this_02,(Il2CppObject *)__this_00,
               (intptr_t)MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass158_0_Register_b__0,
               (MethodInfo_4A88C40 *)0x0);
    if ((TypeInfo_ApplicationManagers_AccountManager_c->_2).cctor_finished_or_no_cctor == 0) {
      method_00 = (MethodInfo *)0x5e00396;
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c);
    }
    captureField = "verificationToken";
    path = "/v1/auth/register";
    pAVar4 = TypeInfo_ApplicationManagers_AccountManager_c->static_fields;
    __this_03 = pAVar4->__9__158_1;
    if (__this_03 == (System_Action_string__o *)0x0) {
      if ((TypeInfo_ApplicationManagers_AccountManager_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c);
        pAVar4 = TypeInfo_ApplicationManagers_AccountManager_c->static_fields;
      }
      object = (Il2CppObject *)pAVar4->__9;
      __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_string);
      System_Action_object____ctor
                ((System_Action_object__o *)__this_03,object,
                 (intptr_t)MethodInfo_ApplicationManagers_AccountManager_c_Register_b__158_1,
                 (MethodInfo_4A81BE0 *)0x0);
      pAVar4 = TypeInfo_ApplicationManagers_AccountManager_c->static_fields;
      pAVar4->__9__158_1 = __this_03;
      method_00 = (MethodInfo *)0x5e00432;
      Il2CppCodeGenWriteBarrier(&pAVar4->__9__158_1);
    }
    if (__this != (ApplicationManagers_AccountManager_o *)0x0) {
      routine = ApplicationManagers_AccountManager__PostJson
                          (__this,path,json,(System_String_o *)0x0,(System_Action_bool__string__o *)__this_02,
                           false,captureField,__this_03,reportNetworkError,method_00);
      UnityEngine_MonoBehaviour__StartCoroutine_691c390
                ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
      return;
    }
  }
label_05e004fc:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$Login
// il2cpp: void ApplicationManagers_AccountManager__Login (System_String_o* email, System_String_o* password, System_Action_bool__string__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x5e00620

void ApplicationManagers_AccountManager__Login
               (System_String_o *email,System_String_o *password,System_Action_bool__string__o *onComplete,
               bool reportNetworkError,MethodInfo *method)

{
  ApplicationManagers_AccountManager_o *__this;
  SimpleJSONFixed_JSONObject_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar1;
  System_String_o *json;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (Il2CppMethodInitialized_0754838c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&"email");
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/auth/login");
    il2cpp_codegen_initialize_runtime_metadata(&"password");
    Il2CppMethodInitialized_0754838c = '\x01';
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
                           in_stack_ffffffffffffffd0);
      UnityEngine_MonoBehaviour__StartCoroutine_691c390
                ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$Refresh
// il2cpp: void ApplicationManagers_AccountManager__Refresh (System_Action_bool__string__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x5dff500
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dff5e0: cmp byte ptr [rip + 0x1748de4], 0
// asm:   0x5dff5e7: je 0x5dff6e0
// asm:   0x5dff614: jmp 0x5dff7be
// asm:   0x5dff6c9: jmp 0x5dff7cd

void ApplicationManagers_AccountManager__Refresh
               (System_Action_bool__string__o *onComplete,bool reportNetworkError,MethodInfo *method)

{
  int32_t *piVar1;
  char cVar2;
  uint32_t uVar3;
  uint uVar4;
  System_Collections_Generic_List_Action_bool__string___o *__this;
  System_Action_bool__string__array *pSVar5;
  ApplicationManagers_AccountManager_StaticFields *pAVar6;
  ApplicationManagers_AccountManager_o *__this_00;
  Il2CppObject *object;
  MethodInfo *pMVar7;
  System_String_o *path;
  bool bVar8;
  SimpleJSONFixed_JSONObject_o *__this_01;
  SimpleJSONFixed_JSONNode_o *pSVar9;
  System_String_o *pSVar10;
  ApplicationManagers_AccountManager___c_StaticFields *pAVar11;
  System_Action_T1__T2__o *__this_02;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *in_stack_ffffffffffffffc0;
  
  if (Il2CppMethodInitialized_0754838d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Action_bool_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_c_Refresh_b__160_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager_c);
    il2cpp_codegen_initialize_runtime_metadata(&"refreshToken");
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/auth/refresh");
    il2cpp_codegen_initialize_runtime_metadata(&"no_refresh_token");
    Il2CppMethodInitialized_0754838d = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar8 = System_String__IsNullOrEmpty
                    (TypeInfo_ApplicationManagers_AccountManager->static_fields->_refreshToken,
                     (MethodInfo *)0x0);
  if (bVar8) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    if (Il2CppMethodInitialized_075483cb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      Il2CppMethodInitialized_075483cb = '\x01';
      uVar3 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar3 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      TypeInfo_ApplicationManagers_AccountManager->static_fields->_IsRefreshInProgress_k__BackingField = false
      ;
    }
    else {
      *(undefined1 *)
       ((long)((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->static_fields + 0xa0) = 0;
    }
    if (onComplete == (System_Action_bool__string__o *)0x0) {
      return;
    }
    (*(code *)(onComplete->fields).invoke_impl)
              ((onComplete->fields).method_code,0,"no_refresh_token",(onComplete->fields).method);
    return;
  }
  if (onComplete == (System_Action_bool__string__o *)0x0) {
label_05dff688:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dff698;
label_05dff771:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (g_data_075483cc == '\0') goto label_05dff783;
label_05dff6a5:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05dff6b5;
label_05dff7a6:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    cVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_IsRefreshInProgress_k__BackingField;
  }
  else {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pMVar7 = MethodInfo_System_Collections_Generic_List_Action_bool_string_Add;
    __this = TypeInfo_ApplicationManagers_AccountManager->static_fields->_pendingRefreshCallbacks;
    if (__this == (System_Collections_Generic_List_Action_bool__string___o *)0x0) goto label_05dff9b2;
    piVar1 = &(__this->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar5 = (__this->fields)._items;
    if (pSVar5 == (System_Action_bool__string__array *)0x0) goto label_05dff9b2;
    uVar4 = (__this->fields)._size;
    if (uVar4 < (uint)pSVar5->max_length) {
      (__this->fields)._size = uVar4 + 1;
      pSVar5->m_Items[(int)uVar4] = onComplete;
      Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar4);
      goto label_05dff688;
    }
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)onComplete,
               (MethodInfo_395D230 *)pMVar7->klass->rgctx_data[0xe].method);
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dff771;
label_05dff698:
    if (g_data_075483cc != '\0') goto label_05dff6a5;
label_05dff783:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    g_data_075483cc = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05dff7a6;
label_05dff6b5:
    cVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_IsRefreshInProgress_k__BackingField;
  }
  if (cVar2 != '\0') {
    return;
  }
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
  SimpleJSONFixed_JSONObject___ctor(__this_01,(MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pSVar10 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_refreshToken;
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pSVar9 = SimpleJSONFixed_JSONNode__op_Implicit(pSVar10,(MethodInfo *)0x0);
  if (__this_01 != (SimpleJSONFixed_JSONObject_o *)0x0) {
    (*(__this_01->klass->vtable)._8_set_Item.methodPtr)
              (__this_01,"refreshToken",pSVar9,(__this_01->klass->vtable)._8_set_Item.method);
    if (Il2CppMethodInitialized_075483cb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      Il2CppMethodInitialized_075483cb = '\x01';
      uVar3 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar3 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
    }
    if (uVar3 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pAVar6 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
    pAVar6->_IsRefreshInProgress_k__BackingField = true;
    __this_00 = pAVar6->_instance;
    pSVar10 = (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                        (__this_01,(__this_01->klass->vtable)._3_ToString.method);
    if ((TypeInfo_ApplicationManagers_AccountManager_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c);
    }
    path = "/v1/auth/refresh";
    pAVar11 = TypeInfo_ApplicationManagers_AccountManager_c->static_fields;
    __this_02 = (System_Action_T1__T2__o *)pAVar11->__9__160_0;
    if (__this_02 == (System_Action_T1__T2__o *)0x0) {
      if ((TypeInfo_ApplicationManagers_AccountManager_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c);
        pAVar11 = TypeInfo_ApplicationManagers_AccountManager_c->static_fields;
      }
      object = (Il2CppObject *)pAVar11->__9;
      __this_02 = (System_Action_T1__T2__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool_string);
      System_Action_bool__object____ctor
                (__this_02,object,(intptr_t)MethodInfo_ApplicationManagers_AccountManager_c_Refresh_b__160_0,
                 (MethodInfo_4A88C40 *)0x0);
      pAVar11 = TypeInfo_ApplicationManagers_AccountManager_c->static_fields;
      pAVar11->__9__160_0 = (System_Action_bool__string__o *)__this_02;
      Il2CppCodeGenWriteBarrier(&pAVar11->__9__160_0);
    }
    if (__this_00 != (ApplicationManagers_AccountManager_o *)0x0) {
      routine = ApplicationManagers_AccountManager__PostJson
                          (__this_00,path,pSVar10,(System_String_o *)0x0,
                           (System_Action_bool__string__o *)__this_02,true,(System_String_o *)0x0,
                           (System_Action_string__o *)0x0,reportNetworkError,in_stack_ffffffffffffffc0);
      UnityEngine_MonoBehaviour__StartCoroutine_691c390
                ((UnityEngine_MonoBehaviour_o *)__this_00,routine,(MethodInfo *)0x0);
      return;
    }
  }
label_05dff9b2:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$Logout
// il2cpp: void ApplicationManagers_AccountManager__Logout (System_Action_bool__string__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x5e007b0

void ApplicationManagers_AccountManager__Logout
               (System_Action_bool__string__o *onComplete,bool reportNetworkError,MethodInfo *method)

{
  ApplicationManagers_AccountManager_o *__this;
  bool bVar1;
  SimpleJSONFixed_JSONObject_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_String_o *pSVar3;
  System_Collections_IEnumerator_o *routine;
  undefined7 in_register_00000031;
  MethodInfo *method_00;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  method_00 = (MethodInfo *)CONCAT71(in_register_00000031,reportNetworkError);
  if (Il2CppMethodInitialized_0754838e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&"refreshToken");
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/auth/logout");
    Il2CppMethodInitialized_0754838e = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pSVar3 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_refreshToken;
  ApplicationManagers_AccountManager__ClearSession(true,method_00);
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
                           in_stack_ffffffffffffffd0);
      UnityEngine_MonoBehaviour__StartCoroutine_691c390
                ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$GoOffline
// il2cpp: void ApplicationManagers_AccountManager__GoOffline (const MethodInfo* method);
// 0x5e00f30
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e00f50: cmp byte ptr [rip + 0x174741d], 0

void ApplicationManagers_AccountManager__GoOffline(MethodInfo *method)

{
  uint32_t uVar1;
  bool clearRefreshToken;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754838f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_0754838f = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_07548374 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548374 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  method_00 = (MethodInfo *)0x0;
  clearRefreshToken =
       System_String__IsNullOrEmpty
                 (TypeInfo_ApplicationManagers_AccountManager->static_fields->_refreshToken,(MethodInfo *)0x0)
  ;
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  ApplicationManagers_AccountManager__ClearSession(clearRefreshToken,method_00);
  return;
}


// ApplicationManagers.AccountManager$$GoOnline
// il2cpp: void ApplicationManagers_AccountManager__GoOnline (System_Action_bool__string__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x5e01010
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e0103f: cmp byte ptr [rip + 0x174732d], 0
// asm:   0x5e0105d: cmp byte ptr [rip + 0x1747363], 0

void ApplicationManagers_AccountManager__GoOnline
               (System_Action_bool__string__o *onComplete,bool reportNetworkError,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07548390 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548390 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_07548373 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548373 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_075483c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483c7 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar2 = System_String__IsNullOrEmpty
                    (TypeInfo_ApplicationManagers_AccountManager->static_fields->_AuthToken_k__BackingField,
                     (MethodInfo *)0x0);
  if (bVar2) {
    method_00 = extraout_RDX;
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      method_00 = extraout_RDX_00;
    }
    ApplicationManagers_AccountManager__Refresh(onComplete,reportNetworkError,method_00);
    return;
  }
  if (onComplete == (System_Action_bool__string__o *)0x0) {
    return;
  }
  (*(code *)(onComplete->fields).invoke_impl)
            ((onComplete->fields).method_code,1,0,(onComplete->fields).method);
  return;
}


// ApplicationManagers.AccountManager$$GetWebLoginUrlWithSession
// il2cpp: System_String_o* ApplicationManagers_AccountManager__GetWebLoginUrlWithSession (const MethodInfo* method);
// 0x5e01180

System_String_o * ApplicationManagers_AccountManager__GetWebLoginUrlWithSession(MethodInfo *method)

{
  uint32_t uVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07548391 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&"/login");
    Il2CppMethodInitialized_07548391 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pSVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields->BaseUrl;
  }
  else {
    pSVar2 = *(System_String_o **)
              ((long)((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->static_fields + 0x60);
  }
  if (pSVar2 == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = System_String__TrimEnd_53071b0(pSVar2,0x2f,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_52f0320(pSVar2,"/login",(MethodInfo *)0x0);
  return pSVar2;
}


// ApplicationManagers.AccountManager$$VerifyEmail
// il2cpp: void ApplicationManagers_AccountManager__VerifyEmail (System_String_o* token, System_Action_bool__string__o* onComplete, const MethodInfo* method);
// 0x5e01220

void ApplicationManagers_AccountManager__VerifyEmail
               (System_String_o *token,System_Action_bool__string__o *onComplete,MethodInfo *method)

{
  ApplicationManagers_AccountManager_o *__this;
  ApplicationManagers_AccountManager___c__DisplayClass165_0_o *__this_00;
  SimpleJSONFixed_JSONObject_o *__this_01;
  SimpleJSONFixed_JSONNode_o *pSVar1;
  System_String_o *json;
  System_Action_T1__T2__o *__this_02;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (Il2CppMethodInitialized_07548392 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_bool_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass165_0_VerifyEmail_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass165_0);
    il2cpp_codegen_initialize_runtime_metadata(&"token");
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/auth/verify-email");
    Il2CppMethodInitialized_07548392 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_c__DisplayClass165_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (ApplicationManagers_AccountManager___c__DisplayClass165_0_o *)0x0) {
    (__this_00->fields).onComplete = onComplete;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).onComplete);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONObject);
    SimpleJSONFixed_JSONObject___ctor(__this_01,(MethodInfo *)0x0);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    pSVar1 = SimpleJSONFixed_JSONNode__op_Implicit(token,(MethodInfo *)0x0);
    if (__this_01 != (SimpleJSONFixed_JSONObject_o *)0x0) {
      (*(__this_01->klass->vtable)._8_set_Item.methodPtr)
                (__this_01,"token",pSVar1,(__this_01->klass->vtable)._8_set_Item.method);
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      __this = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
      json = (*(__this_01->klass->vtable)._3_ToString.methodPtr)
                       (__this_01,(__this_01->klass->vtable)._3_ToString.method);
      __this_02 = (System_Action_T1__T2__o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_bool_string);
      System_Action_bool__object____ctor
                (__this_02,(Il2CppObject *)__this_00,
                 (intptr_t)MethodInfo_ApplicationManagers_AccountManager_c__DisplayClass165_0_VerifyEmail_b__0
                 ,(MethodInfo_4A88C40 *)0x0);
      if (__this != (ApplicationManagers_AccountManager_o *)0x0) {
        routine = ApplicationManagers_AccountManager__PostJson
                            (__this,"/v1/auth/verify-email",json,(System_String_o *)0x0,
                             (System_Action_bool__string__o *)__this_02,false,(System_String_o *)0x0,
                             (System_Action_string__o *)0x0,true,in_stack_ffffffffffffffd0);
        UnityEngine_MonoBehaviour__StartCoroutine_691c390
                  ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$ForgotPassword
// il2cpp: void ApplicationManagers_AccountManager__ForgotPassword (System_String_o* email, System_Action_bool__string__o* onComplete, bool reportNetworkError, const MethodInfo* method);
// 0x5e01410

void ApplicationManagers_AccountManager__ForgotPassword
               (System_String_o *email,System_Action_bool__string__o *onComplete,bool reportNetworkError,
               MethodInfo *method)

{
  ApplicationManagers_AccountManager_o *__this;
  SimpleJSONFixed_JSONObject_o *__this_00;
  SimpleJSONFixed_JSONNode_o *pSVar1;
  System_String_o *json;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *in_stack_ffffffffffffffd0;
  
  if (Il2CppMethodInitialized_07548393 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONObject);
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/auth/forgot-password");
    il2cpp_codegen_initialize_runtime_metadata(&"email");
    Il2CppMethodInitialized_07548393 = '\x01';
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
                           in_stack_ffffffffffffffd0);
      UnityEngine_MonoBehaviour__StartCoroutine_691c390
                ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$PatreonUnlink
// il2cpp: void ApplicationManagers_AccountManager__PatreonUnlink (System_Action_bool__string__o* onComplete, const MethodInfo* method);
// 0x5e01560
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e0158c: cmp byte ptr [rip + 0x1746de0], 0
// asm:   0x5e01593: je 0x5e0165c
// asm:   0x5e015a9: cmp byte ptr [rip + 0x1746e17], 0
// asm:   0x5e015b0: je 0x5e01691
// asm:   0x5e016ea: test rbx, rbx
// asm:   0x5e016ed: je 0x5e0176b

void ApplicationManagers_AccountManager__PatreonUnlink
               (System_Action_bool__string__o *onComplete,MethodInfo *method)

{
  uint32_t uVar1;
  ApplicationManagers_AccountManager_o *__this;
  bool bVar2;
  System_Collections_IEnumerator_o *routine;
  MethodInfo *in_R8;
  
  if (Il2CppMethodInitialized_07548394 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&"not_logged_in");
    il2cpp_codegen_initialize_runtime_metadata(&"/v1/patreon/link");
    Il2CppMethodInitialized_07548394 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_07548373 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548373 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_075483c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483c7 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar2 = System_String__IsNullOrEmpty
                    (TypeInfo_ApplicationManagers_AccountManager->static_fields->_AuthToken_k__BackingField,
                     (MethodInfo *)0x0);
  if (!bVar2) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      __this = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
    }
    else {
      __this = TypeInfo_ApplicationManagers_AccountManager->static_fields->_instance;
    }
    if (Il2CppMethodInitialized_075483c7 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
      Il2CppMethodInitialized_075483c7 = '\x01';
      uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar1 = (((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor;
    }
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    if (__this == (ApplicationManagers_AccountManager_o *)0x0) {
      ThrowNullReferenceException();
    }
    routine = ApplicationManagers_AccountManager__DeleteJson
                        (__this,"/v1/patreon/link",
                         *(System_String_o **)
                          ((long)((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->static_fields +
                          0x70),onComplete,in_R8);
    UnityEngine_MonoBehaviour__StartCoroutine_691c390
              ((UnityEngine_MonoBehaviour_o *)__this,routine,(MethodInfo *)0x0);
    return;
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
// 0x5e00050

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__GetAuthMethods
          (ApplicationManagers_AccountManager_o *__this,System_Action_bool__string__o *onComplete,
          MethodInfo *method)

{
  ApplicationManagers_AccountManager__GetAuthMethods_d__168_o *__this_00;
  
  if (Il2CppMethodInitialized_07548395 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_GetAuthMethods_d__168);
    Il2CppMethodInitialized_07548395 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_GetAuthMethods_d__168);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).onComplete = onComplete;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).onComplete);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ApplicationManagers.AccountManager$$SendApiGet
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__SendApiGet (ApplicationManagers_AccountManager_o* __this, System_String_o* path, System_String_o* bearer, bool parseJson, System_Action_AottgApiResult__o* onComplete, const MethodInfo* method);
// 0x5e01840

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__SendApiGet
          (ApplicationManagers_AccountManager_o *__this,System_String_o *path,System_String_o *bearer,
          bool parseJson,System_Action_AottgApiResult__o *onComplete,MethodInfo *method)

{
  ApplicationManagers_AccountManager__SendApiGet_d__169_o *__this_00;
  
  if (Il2CppMethodInitialized_07548396 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager_SendApiGet_d__169)
    ;
    Il2CppMethodInitialized_07548396 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_SendApiGet_d__169);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).path = path;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).path);
  (__this_00->fields).bearer = bearer;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).bearer);
  (__this_00->fields).parseJson = parseJson;
  (__this_00->fields).onComplete = onComplete;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).onComplete);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ApplicationManagers.AccountManager$$SendApiGetAsync
// il2cpp: Cysharp_Threading_Tasks_UniTask_o ApplicationManagers_AccountManager__SendApiGetAsync (ApplicationManagers_AccountManager_o* __this, System_String_o* path, System_String_o* bearer, bool parseJson, System_Action_AottgApiResult__o* onComplete, const MethodInfo* method);
// 0x5e01910

Cysharp_Threading_Tasks_UniTask_o
ApplicationManagers_AccountManager__SendApiGetAsync
          (ApplicationManagers_AccountManager_o *__this,System_String_o *path,System_String_o *bearer,
          bool parseJson,System_Action_AottgApiResult__o *onComplete,MethodInfo *method)

{
  Cysharp_Threading_Tasks_UniTask_o CVar1;
  ApplicationManagers_AccountManager__SendApiGetAsync_d__170_Fields local_88;
  
  if (Il2CppMethodInitialized_07548397 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AccountManager_SendApiG
              );
    Il2CppMethodInitialized_07548397 = '\x01';
  }
  local_88.__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
  local_88.__u__1.fields.task.fields.token = 0;
  local_88.__u__1.fields.task.fields._18_6_ = 0;
  local_88.onComplete = (System_Action_AottgApiResult__o *)0x0;
  local_88.__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
  local_88.bearer = (System_String_o *)0x0;
  local_88.parseJson = false;
  local_88._41_7_ = 0;
  local_88.__t__builder.fields.ex = (System_Exception_o *)0x0;
  local_88.path = (System_String_o *)0x0;
  local_88.__1__state = 0;
  local_88._4_4_ = 0;
  local_88.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)0x0;
  Il2CppCodeGenWriteBarrier((void **)&local_88.__t__builder);
  local_88.path = path;
  Il2CppCodeGenWriteBarrier(&local_88.path);
  local_88.bearer = bearer;
  Il2CppCodeGenWriteBarrier(&local_88.bearer);
  local_88.parseJson = parseJson;
  local_88.onComplete = onComplete;
  Il2CppCodeGenWriteBarrier(&local_88.onComplete);
  local_88.__1__state = -1;
  if ((
      MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AccountManager_SendApiG
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    il2cpp_codegen_rgctx_method_init
              (
              MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AccountManager_SendApiG
              );
  }
  ApplicationManagers_AccountManager__SendApiGetAsync_d__170__MoveNext
            ((ApplicationManagers_AccountManager__SendApiGetAsync_d__170_o *)&local_88,
             (MethodInfo *)onComplete);
  CVar1.fields = (Cysharp_Threading_Tasks_UniTask_Fields)il2cpp_runtime_helper_0386e920(&local_88.__t__builder,0);
  return (Cysharp_Threading_Tasks_UniTask_o)CVar1.fields;
}


// ApplicationManagers.AccountManager$$SendApiJson
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__SendApiJson (ApplicationManagers_AccountManager_o* __this, System_String_o* method, System_String_o* path, System_String_o* json, System_String_o* bearer, bool parseJson, System_Action_AottgApiResult__o* onComplete, bool reportNetworkError, System_Nullable_int__o timeoutSeconds, const MethodInfo* method);
// 0x5e019f0

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__SendApiJson
          (ApplicationManagers_AccountManager_o *__this,System_String_o *method,System_String_o *path,
          System_String_o *json,System_String_o *bearer,bool parseJson,
          System_Action_AottgApiResult__o *onComplete,bool reportNetworkError,
          System_Nullable_int__o timeoutSeconds,MethodInfo *methodInfo)

{
  ApplicationManagers_AccountManager__SendApiJson_d__171_o *__this_00;
  
  if (Il2CppMethodInitialized_07548398 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_AccountManager_SendApiJson_d__171);
    Il2CppMethodInitialized_07548398 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_SendApiJson_d__171);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).method = method;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).method);
  (__this_00->fields).path = path;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).path);
  (__this_00->fields).json = json;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).json);
  (__this_00->fields).bearer = bearer;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).bearer);
  (__this_00->fields).parseJson = parseJson;
  (__this_00->fields).onComplete = onComplete;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).onComplete);
  (__this_00->fields).reportNetworkError = reportNetworkError;
  (__this_00->fields).timeoutSeconds.fields = timeoutSeconds.fields;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ApplicationManagers.AccountManager$$SendApiJsonAsync
// il2cpp: Cysharp_Threading_Tasks_UniTask_o ApplicationManagers_AccountManager__SendApiJsonAsync (ApplicationManagers_AccountManager_o* __this, System_String_o* method, System_String_o* path, System_String_o* json, System_String_o* bearer, bool parseJson, bool reportNetworkError, System_Nullable_int__o timeoutSeconds, System_Action_AottgApiResult__o* onComplete, const MethodInfo* method);
// 0x5e01b00

Cysharp_Threading_Tasks_UniTask_o
ApplicationManagers_AccountManager__SendApiJsonAsync
          (ApplicationManagers_AccountManager_o *__this,System_String_o *method,System_String_o *path,
          System_String_o *json,System_String_o *bearer,bool parseJson,bool reportNetworkError,
          System_Nullable_int__o timeoutSeconds,System_Action_AottgApiResult__o *onComplete,
          MethodInfo *methodInfo)

{
  Cysharp_Threading_Tasks_UniTask_o CVar1;
  ApplicationManagers_AccountManager__SendApiJsonAsync_d__172_Fields local_98;
  
  if (Il2CppMethodInitialized_07548399 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AccountManager_SendApiJ
              );
    Il2CppMethodInitialized_07548399 = '\x01';
  }
  local_98.__u__1.fields.task.fields.source = (Cysharp_Threading_Tasks_IUniTaskSource_T__o *)0x0;
  local_98.__u__1.fields.task.fields.result = (Il2CppObject *)0x0;
  local_98.timeoutSeconds.fields.value = 0;
  local_98._68_4_ = 0;
  local_98.onComplete = (System_Action_AottgApiResult__o *)0x0;
  local_98.bearer = (System_String_o *)0x0;
  local_98.parseJson = false;
  local_98.reportNetworkError = false;
  local_98._58_2_ = 0;
  local_98.timeoutSeconds.fields.hasValue = false;
  local_98.timeoutSeconds.fields._1_3_ = 0;
  local_98.path = (System_String_o *)0x0;
  local_98.json = (System_String_o *)0x0;
  local_98.__t__builder.fields.ex = (System_Exception_o *)0x0;
  local_98.method = (System_String_o *)0x0;
  local_98.__1__state = 0;
  local_98._4_4_ = 0;
  local_98.__t__builder.fields.runnerPromise =
       (Cysharp_Threading_Tasks_CompilerServices_IStateMachineRunnerPromise_o *)0x0;
  local_98.__u__1.fields.task.fields.token = 0;
  local_98.__u__1.fields.task.fields._18_6_ = 0;
  Il2CppCodeGenWriteBarrier((void **)&local_98.__t__builder);
  local_98.method = method;
  Il2CppCodeGenWriteBarrier(&local_98.method);
  local_98.path = path;
  Il2CppCodeGenWriteBarrier(&local_98.path);
  local_98.json = json;
  Il2CppCodeGenWriteBarrier(&local_98.json);
  local_98.bearer = bearer;
  Il2CppCodeGenWriteBarrier(&local_98.bearer);
  local_98.reportNetworkError = reportNetworkError;
  local_98.timeoutSeconds.fields._0_4_ = timeoutSeconds.fields._0_4_;
  local_98.timeoutSeconds.fields.value = timeoutSeconds.fields.value;
  local_98.onComplete = onComplete;
  local_98.parseJson = parseJson;
  Il2CppCodeGenWriteBarrier(&local_98.onComplete);
  local_98.__1__state = -1;
  if ((
      MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AccountManager_SendApiJ
      ->field7_0x38).rgctx_data == (Il2CppRGCTXData *)0x0) {
    il2cpp_codegen_rgctx_method_init
              (
              MethodInfo_Cysharp_Threading_Tasks_CompilerServices_AsyncUniTaskMethodBuilder_Start_AccountManager_SendApiJ
              );
  }
  ApplicationManagers_AccountManager__SendApiJsonAsync_d__172__MoveNext
            ((ApplicationManagers_AccountManager__SendApiJsonAsync_d__172_o *)&local_98,
             (MethodInfo *)onComplete);
  CVar1.fields = (Cysharp_Threading_Tasks_UniTask_Fields)il2cpp_runtime_helper_0386e920(&local_98.__t__builder,0);
  return (Cysharp_Threading_Tasks_UniTask_o)CVar1.fields;
}


// ApplicationManagers.AccountManager$$SendApiJsonAsync
// il2cpp: Cysharp_Threading_Tasks_UniTask_AottgApiResult__o ApplicationManagers_AccountManager__SendApiJsonAsync (System_String_o* method, System_String_o* path, System_String_o* json, System_String_o* bearer, bool parseJson, bool reportNetworkError, System_Nullable_int__o timeoutSeconds, const MethodInfo* method);
// 0x5e01c30

Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *
ApplicationManagers_AccountManager__SendApiJsonAsync_5d01c30
          (Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *__return_storage_ptr__,System_String_o *method,
          System_String_o *path,System_String_o *json,System_String_o *bearer,bool parseJson,
          bool reportNetworkError,System_Nullable_int__o timeoutSeconds,MethodInfo *methodInfo)

{
  ApplicationManagers_Api_AottgApiClient_o *__this;
  ApplicationManagers_Api_AottgApiRequest_o *__this_00;
  int32_t value;
  System_Nullable_int__Fields local_58;
  Cysharp_Threading_Tasks_UniTask_AottgApiResult__o *local_50;
  Cysharp_Threading_Tasks_UniTask_AottgApiResult__o local_48;
  
  local_50 = __return_storage_ptr__;
  if (Il2CppMethodInitialized_0754839a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Api_AottgApiClient);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Api_AottgApiRequest);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_GetValueOrDefault);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_int_get_HasValue);
    Il2CppMethodInitialized_0754839a = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Api_AottgApiClient);
  ApplicationManagers_Api_AottgApiClient___ctor(__this,(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Api_AottgApiRequest);
  ApplicationManagers_Api_AottgApiRequest___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 != (ApplicationManagers_Api_AottgApiRequest_o *)0x0) {
    (__this_00->fields).Method = method;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).Method);
    (__this_00->fields).Path = path;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).Path);
    (__this_00->fields).JsonBody = json;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).JsonBody);
    (__this_00->fields).BearerToken = bearer;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).BearerToken);
    value = 0xf;
    if (timeoutSeconds.fields.hasValue != false) {
      value = timeoutSeconds.fields.value;
    }
    (__this_00->fields).ParseJson = parseJson;
    local_58.hasValue = false;
    local_58._1_3_ = 0;
    local_58.value = 0;
    System_Nullable_int____ctor
              ((System_Nullable_int__o *)&local_58,value,
               (MethodInfo_3CD4BA0 *)MethodInfo_System_Nullable_int_ctor);
    (__this_00->fields).TimeoutSeconds.fields = local_58;
    (__this_00->fields).ReportNetworkError = reportNetworkError;
    if (__this != (ApplicationManagers_Api_AottgApiClient_o *)0x0) {
      ApplicationManagers_Api_AottgApiClient__SendAsync
                (&local_48,__this,__this_00,(System_Threading_CancellationToken_o)0x0,(MethodInfo *)0x0);
      (local_50->fields).token = local_48.fields.token;
      *(undefined6 *)&(local_50->fields).field_0x12 = local_48.fields._18_6_;
      (local_50->fields).source = local_48.fields.source;
      (local_50->fields).result = local_48.fields.result;
      return local_50;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$OnDestroy
// il2cpp: void ApplicationManagers_AccountManager__OnDestroy (ApplicationManagers_AccountManager_o* __this, const MethodInfo* method);
// 0x5e01dc0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e01df1: jmp 0x5e01e9a

void ApplicationManagers_AccountManager__OnDestroy
               (ApplicationManagers_AccountManager_o *__this,MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  Events_OnPreLoadScene_o *__this_00;
  
  if (Il2CppMethodInitialized_0754839b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_ApplicationManagers_AccountManager_OnPreLoadScene);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Events_OnPreLoadScene);
    Il2CppMethodInitialized_0754839b = '\x01';
    uVar2 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    cVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_sceneInvalidationSubscribed;
  }
  else {
    cVar1 = *(char *)((long)((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->static_fields + 0x58
                     );
  }
  if (cVar1 != '\0') {
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Events_OnPreLoadScene);
    Events_OnPreLoadScene___ctor
              (__this_00,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_ApplicationManagers_AccountManager_OnPreLoadScene,(MethodInfo *)0x0);
    method = (MethodInfo *)0x0;
    Events_EventManager__remove_OnPreLoadScene(__this_00,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    TypeInfo_ApplicationManagers_AccountManager->static_fields->_sceneInvalidationSubscribed = false;
  }
  ApplicationManagers_AccountManager__CancelOAuthFlow(__this,method);
  return;
}


// ApplicationManagers.AccountManager$$DeleteJson
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__DeleteJson (ApplicationManagers_AccountManager_o* __this, System_String_o* path, System_String_o* bearer, System_Action_bool__string__o* onComplete, const MethodInfo* method);
// 0x5e01770

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__DeleteJson
          (ApplicationManagers_AccountManager_o *__this,System_String_o *path,System_String_o *bearer,
          System_Action_bool__string__o *onComplete,MethodInfo *method)

{
  ApplicationManagers_AccountManager__DeleteJson_d__175_o *__this_00;
  
  if (Il2CppMethodInitialized_0754839c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager_DeleteJson_d__175)
    ;
    Il2CppMethodInitialized_0754839c = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_DeleteJson_d__175);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).path = path;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).path);
  (__this_00->fields).bearer = bearer;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).bearer);
  (__this_00->fields).onComplete = onComplete;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).onComplete);
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ApplicationManagers.AccountManager$$PostJson
// il2cpp: System_Collections_IEnumerator_o* ApplicationManagers_AccountManager__PostJson (ApplicationManagers_AccountManager_o* __this, System_String_o* path, System_String_o* json, System_String_o* bearer, System_Action_bool__string__o* onComplete, bool applyAuthResponse, System_String_o* captureField, System_Action_string__o* captureTarget, bool reportNetworkError, const MethodInfo* method);
// 0x5e00520

System_Collections_IEnumerator_o *
ApplicationManagers_AccountManager__PostJson
          (ApplicationManagers_AccountManager_o *__this,System_String_o *path,System_String_o *json,
          System_String_o *bearer,System_Action_bool__string__o *onComplete,bool applyAuthResponse,
          System_String_o *captureField,System_Action_string__o *captureTarget,bool reportNetworkError,
          MethodInfo *method)

{
  ApplicationManagers_AccountManager__PostJson_d__176_o *__this_00;
  
  if (Il2CppMethodInitialized_0754839d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager_PostJson_d__176);
    Il2CppMethodInitialized_0754839d = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager_PostJson_d__176);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields).__1__state = 0;
  (__this_00->fields).__4__this = __this;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
  (__this_00->fields).path = path;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).path);
  (__this_00->fields).json = json;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).json);
  (__this_00->fields).bearer = bearer;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).bearer);
  (__this_00->fields).onComplete = onComplete;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).onComplete);
  (__this_00->fields).applyAuthResponse = applyAuthResponse;
  (__this_00->fields).captureField = captureField;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).captureField);
  (__this_00->fields).captureTarget = captureTarget;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).captureTarget);
  (__this_00->fields).reportNetworkError = reportNetworkError;
  return (System_Collections_IEnumerator_o *)__this_00;
}


// ApplicationManagers.AccountManager$$IsSessionRejected
// il2cpp: bool ApplicationManagers_AccountManager__IsSessionRejected (bool isRefresh, int64_t statusCode, System_String_o* error, const MethodInfo* method);
// 0x5e01ef0

bool ApplicationManagers_AccountManager__IsSessionRejected
               (bool isRefresh,int64_t statusCode,System_String_o *error,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_0754839e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"invalid_refresh_token");
    Il2CppMethodInitialized_0754839e = '\x01';
  }
  if (statusCode == 0x191) {
    bVar1 = System_String__op_Equality(error,"invalid_refresh_token",(MethodInfo *)0x0);
    if ((!bVar1) && (isRefresh)) {
label_05e01f53:
      return (statusCode - 0x191U & 0xfffffffffffffffd) == 0;
    }
  }
  else {
    if (!isRefresh) {
      return false;
    }
    bVar1 = true;
    if (statusCode != 400) goto label_05e01f53;
  }
  return bVar1;
}


// ApplicationManagers.AccountManager$$HasUsablePhotonToken
// il2cpp: bool ApplicationManagers_AccountManager__HasUsablePhotonToken (const MethodInfo* method);
// 0x5e01f70
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e01fbd: cmp byte ptr [rip + 0x1745333], 0
// asm:   0x5e01fc4: je 0x5e020c6
// asm:   0x5e02009: cmp byte ptr [rip + 0x17463bd], 0
// asm:   0x5e02010: je 0x5e02108
// asm:   0x5e02048: cmp byte ptr [rip + 0x174637e], 0
// asm:   0x5e0204f: je 0x5e02166

bool ApplicationManagers_AccountManager__HasUsablePhotonToken(MethodInfo *method)

{
  uint32_t uVar1;
  long lVar2;
  bool bVar3;
  int64_t iVar4;
  System_DateTimeOffset_o SVar5;
  System_DateTimeOffset_o local_28;
  
  if (Il2CppMethodInitialized_0754839f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTimeOffset);
    Il2CppMethodInitialized_0754839f = '\x01';
  }
  local_28.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
  local_28.fields._offsetMinutes = 0;
  local_28.fields._10_6_ = 0;
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_075472f7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075472f7 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = *(uint32_t *)((long)TypeInfo_ApplicationManagers_AccountManager + 0xe4);
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar3 = System_String__IsNullOrEmpty
                    (TypeInfo_ApplicationManagers_AccountManager->static_fields->_PhotonToken_k__BackingField,
                     (MethodInfo *)0x0);
  if (bVar3) {
    return false;
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_075483cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483cd = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    lVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields->
            _PhotonTokenExpiresUnix_k__BackingField;
  }
  else {
    lVar2 = *(long *)((long)((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->static_fields + 0x88
                     );
  }
  if (lVar2 == 0) {
    return true;
  }
  if ((((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_075483cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483cd = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  lVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_PhotonTokenExpiresUnix_k__BackingField;
  if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
  }
  SVar5 = System_DateTimeOffset__get_UtcNow((MethodInfo *)0x0);
  local_28.fields._dateTime = SVar5.fields._dateTime.fields._dateData;
  local_28.fields._offsetMinutes = SVar5.fields._offsetMinutes;
  iVar4 = System_DateTimeOffset__ToUnixTimeSeconds(&local_28,(MethodInfo *)0x0);
  return iVar4 + 0x3c < lVar2;
}


// ApplicationManagers.AccountManager$$ApplyAuthMethodsResponse
// il2cpp: bool ApplicationManagers_AccountManager__ApplyAuthMethodsResponse (System_String_o* json, const MethodInfo* method);
// 0x5e021a0
// eh: try 0x5e02583..0x5e0280b -> pad 0x5e02858 (+7 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5e02870..0x5e02875 -> pad 0x5e02894 cleanup
// eh: try 0x5e02897..0x5e028a1 -> pad 0x5e02900 catch (...) [compiler noexcept guard]
// eh: try 0x5e028c1..0x5e028c6 -> pad 0x5e028eb cleanup
// eh: try 0x5e028ee..0x5e028f8 -> pad 0x5e02900 catch (...) [compiler noexcept guard]
// asm: 51 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e0267d: nop dword ptr [rax]
// asm:   0x5e026f4: cmp byte ptr [rip + 0x1745cd4], 0
// asm:   0x5e026fb: je 0x5e027ca
// asm:   0x5e02852: jmp 0x5e02858
// asm:   0x5e02854: jmp 0x5e02858
// asm:   0x5e02856: jmp 0x5e02858
// asm:   0x5e02858: mov rbx, rax
// asm:   0x5e0285b: cmp edx, 1
// asm:   0x5e0285e: jne 0x5e02897
// asm:   0x5e02860: mov rdi, rbx
// asm:   0x5e02863: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e02868: mov rbx, qword ptr [rax]
// asm:   0x5e0286b: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5e02870: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e02875: lea rax, [rip + 0x148c264]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose
// asm:   0x5e0287c: mov rsi, qword ptr [rax]
// asm:   0x5e0287f: lea rdi, [rsp + 0x10]
// asm:   0x5e02884: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5e02889: test rbx, rbx
// asm:   0x5e0288c: je 0x5e025e7
// asm:   0x5e02892: jmp 0x5e028e3
// asm:   0x5e02894: mov rbx, rax
// asm:   0x5e02897: lea rdi, [rsp + 0x30]
// asm:   0x5e0289c: call 0x2fe0090  ; il2cpp_runtime_helper_02fe0090()
// asm:   0x5e028a1: jmp 0x5e028f8
// asm:   0x5e028a3: jmp 0x5e028a9
// asm:   0x5e028a5: jmp 0x5e028a9
// asm:   0x5e028a7: jmp 0x5e028a9
// asm:   0x5e028a9: mov rbx, rax
// asm:   0x5e028ac: cmp edx, 1
// asm:   0x5e028af: jne 0x5e028ee
// asm:   0x5e028b1: mov rdi, rbx
// asm:   0x5e028b4: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e028b9: mov rbx, qword ptr [rax]
// asm:   0x5e028bc: mov qword ptr [rsp + 0x30], rbx
// asm:   0x5e028c1: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e028c6: lea rax, [rip + 0x148c213]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose
// asm:   0x5e028cd: mov rsi, qword ptr [rax]
// asm:   0x5e028d0: lea rdi, [rsp + 0x10]
// asm:   0x5e028d5: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x5e028da: test rbx, rbx
// asm:   0x5e028dd: je 0x5e026e3
// asm:   0x5e028e3: mov rdi, rbx
// asm:   0x5e028e6: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5e028eb: mov rbx, rax
// asm:   0x5e028ee: lea rdi, [rsp + 0x30]
// asm:   0x5e028f3: call 0x2fe00c0  ; il2cpp_runtime_helper_02fe00c0()
// asm:   0x5e028f8: mov rdi, rbx
// asm:   0x5e028fb: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e02900: mov rdi, rax
// asm:   0x5e02903: call 0x2ab61e0  ; __clang_call_terminate()

bool ApplicationManagers_AccountManager__ApplyAuthMethodsResponse(System_String_o *json,MethodInfo *method)

{
  uint32_t uVar1;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_HashSet_object__o *pSVar2;
  Il2CppObject *pIVar3;
  bool bVar4;
  int32_t iVar5;
  SimpleJSONFixed_JSONNode_o *pSVar6;
  SimpleJSONFixed_JSONArray_o *a;
  System_Collections_Generic_HashSet_string__o *__this;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  System_String_o *pSVar8;
  ApplicationManagers_AccountManager_StaticFields *pAVar9;
  Il2CppClass *klass;
  System_FormatException_o *__this_00;
  MethodInfo *lastManagedFrame;
  int iVar10;
  bool bVar11;
  undefined1 local_68 [8];
  System_Collections_Generic_HashSet_Enumerator_T__o *pSStack_60;
  Il2CppObject *local_58;
  undefined1 local_48 [16];
  Il2CppObject *local_38;
  
  if (Il2CppMethodInitialized_075483a0 == '\0') {
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
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    il2cpp_codegen_initialize_runtime_metadata(&"methods");
    il2cpp_codegen_initialize_runtime_metadata(&"key");
    il2cpp_codegen_initialize_runtime_metadata(&"enabled");
    Il2CppMethodInitialized_075483a0 = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  pSStack_60 = (System_Collections_Generic_HashSet_Enumerator_T__o *)0x0;
  local_58 = (Il2CppObject *)0x0;
  pSVar6 = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
  if ((pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
     (pSVar6 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                         (pSVar6,"methods",(pSVar6->klass->vtable)._7_get_Item.method),
     pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_05e027fc;
  a = (*(pSVar6->klass->vtable)._45_get_AsArray.methodPtr)
                (pSVar6,(pSVar6->klass->vtable)._45_get_AsArray.method);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar4) {
    klass = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_FormatException);
    __this_00 = (System_FormatException_o *)il2cpp_codegen_object_new(klass);
    pSVar8 = il2cpp_codegen_get_runtime_metadata(&"Missing methods array.");
    System_FormatException___ctor_549ecd0(__this_00,pSVar8,(MethodInfo *)0x0);
    lastManagedFrame =
         il2cpp_codegen_get_runtime_metadata
                   (&MethodInfo_ApplicationManagers_AccountManager_ApplyAuthMethodsResponse);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this_00,lastManagedFrame);
  }
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
    if (Il2CppMethodInitialized_07542886 != '\0') goto label_05e02335;
label_05e02744:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_07542886 == '\0') goto label_05e02744;
label_05e02335:
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_4fb2f30
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (System_Collections_Generic_IEqualityComparer_T__o *)comparer,
             (MethodInfo_4FB2F30 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
  if (a == (SimpleJSONFixed_JSONArray_o *)0x0) goto label_05e027fc;
  iVar5 = (*(a->klass->vtable)._11_get_Count.methodPtr)(a,(a->klass->vtable)._11_get_Count.method);
  if (0 < iVar5) {
    iVar10 = 0;
    do {
      pSVar6 = (*(a->klass->vtable)._5_get_Item.methodPtr)(a,iVar10,(a->klass->vtable)._5_get_Item.method);
      if ((pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) ||
         (pSVar7 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                             (pSVar6,"key",(pSVar6->klass->vtable)._7_get_Item.method),
         pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0)) goto label_05e027fc;
      pSVar8 = (System_String_o *)(*(pSVar7->klass->vtable)._9_get_Value.methodPtr)(pSVar7);
      bVar4 = System_String__IsNullOrEmpty(pSVar8,(MethodInfo *)0x0);
      if (!bVar4) {
        pSVar6 = (*(pSVar6->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar6,"enabled",(pSVar6->klass->vtable)._7_get_Item.method);
        if (pSVar6 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05e027fc;
        bVar4 = (*(pSVar6->klass->vtable)._39_get_AsBool.methodPtr)
                          (pSVar6,(pSVar6->klass->vtable)._39_get_AsBool.method);
        if (bVar4) {
          if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) goto label_05e027fc;
          System_Collections_Generic_HashSet_object___Add
                    ((System_Collections_Generic_HashSet_object__o *)__this,(Il2CppObject *)pSVar8,
                     (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
        }
      }
      iVar10 = iVar10 + 1;
      iVar5 = (*(a->klass->vtable)._11_get_Count.methodPtr)(a,(a->klass->vtable)._11_get_Count.method);
    } while (iVar10 < iVar5);
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (g_data_075483ce != '\0') goto label_05e024bb;
label_05e02786:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    g_data_075483ce = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (g_data_075483ce == '\0') goto label_05e02786;
label_05e024bb:
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar9 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  bVar4 = true;
  if (pAVar9->_HasAuthMethodsSnapshot_k__BackingField != false) {
    if (__this == (System_Collections_Generic_HashSet_string__o *)0x0) goto label_05e027fc;
    iVar10 = (__this->fields)._count;
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      pAVar9 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
    }
    if (pAVar9->_enabledAuthMethods == (System_Collections_Generic_HashSet_string__o *)0x0) goto label_05e027fc;
    bVar11 = iVar10 != (pAVar9->_enabledAuthMethods->fields)._count;
    if (!bVar11) {
      System_Collections_Generic_HashSet_object___GetEnumerator
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
                 (System_Collections_Generic_HashSet_object__o *)__this,
                 (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_string_GetEnumerator);
      local_58 = local_38;
      local_68 = (undefined1  [8])local_48._0_8_;
      pSStack_60 = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_48._8_8_;
      local_48._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
      local_48._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_68;
      do {
        bVar4 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                          ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                           (MethodInfo_4C456D0 *)
                           MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_MoveNext);
        pIVar3 = local_58;
        if (!bVar4) goto label_05e025d3;
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
                           (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains
                          );
      } while (bVar4);
      bVar11 = true;
label_05e025d3:
      System_Collections_Generic_HashSet_Enumerator_object___Dispose
                ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                 (MethodInfo_4C456C0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose
                );
      bVar4 = bVar11;
    }
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pSVar2 = (System_Collections_Generic_HashSet_object__o *)
           TypeInfo_ApplicationManagers_AccountManager->static_fields->_enabledAuthMethods;
  if ((pSVar2 != (System_Collections_Generic_HashSet_object__o *)0x0) &&
     (System_Collections_Generic_HashSet_object___Clear
                (pSVar2,(MethodInfo_4FB36D0 *)MethodInfo_System_Collections_Generic_HashSet_string_Clear),
     __this != (System_Collections_Generic_HashSet_string__o *)0x0)) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_48,
               (System_Collections_Generic_HashSet_object__o *)__this,
               (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_string_GetEnumerator);
    local_58 = local_38;
    local_68 = (undefined1  [8])local_48._0_8_;
    pSStack_60 = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_48._8_8_;
    local_48._0_8_ = (System_Collections_Generic_HashSet_T__o *)0x0;
    local_48._8_8_ = (System_Collections_Generic_HashSet_Enumerator_T__o *)local_68;
    while( true ) {
      bVar11 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                         ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                          (MethodInfo_4C456D0 *)
                          MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_MoveNext);
      pIVar3 = local_58;
      if (!bVar11) {
        System_Collections_Generic_HashSet_Enumerator_object___Dispose
                  ((System_Collections_Generic_HashSet_Enumerator_T__o *)local_68,
                   (MethodInfo_4C456C0 *)
                   MethodInfo_System_Collections_Generic_HashSet_Enumerator_string_Dispose);
        if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        if (Il2CppMethodInitialized_075483cf == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
          Il2CppMethodInitialized_075483cf = '\x01';
          uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
        }
        else {
          uVar1 = (((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).
                  cctor_finished_or_no_cctor;
        }
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
        }
        TypeInfo_ApplicationManagers_AccountManager->static_fields->_HasAuthMethodsSnapshot_k__BackingField =
             true;
        return bVar4;
      }
      if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
      }
      pSVar2 = (System_Collections_Generic_HashSet_object__o *)
               TypeInfo_ApplicationManagers_AccountManager->static_fields->_enabledAuthMethods;
      if (pSVar2 == (System_Collections_Generic_HashSet_object__o *)0x0) break;
      System_Collections_Generic_HashSet_object___Add
                (pSVar2,pIVar3,(MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add)
      ;
    }
    ThrowNullReferenceException();
  }
label_05e027fc:
  ThrowNullReferenceException();
}


// ApplicationManagers.AccountManager$$ApplyAuthResponse
// il2cpp: void ApplicationManagers_AccountManager__ApplyAuthResponse (System_String_o* json, const MethodInfo* method);
// 0x5e02910
// asm: 17 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e02da9: jmp 0x5e02ebc
// asm:   0x5e02eeb: lea rdi, [rip + 0x14755ee]  ; TypeInfo_System_FormatException
// asm:   0x5e02ef2: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e02ef7: mov rdi, rax
// asm:   0x5e02efa: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5e02eff: mov rbx, rax
// asm:   0x5e02f02: lea rdi, [rip + 0x14df90f]  ; "Missing login response payload."
// asm:   0x5e02f09: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e02f0e: mov rdi, rbx
// asm:   0x5e02f11: mov rsi, rax
// asm:   0x5e02f14: xor edx, edx
// asm:   0x5e02f16: call 0x559ecd0  ; System_FormatException___ctor()
// asm:   0x5e02f1b: lea rdi, [rip + 0x149d57e]  ; MethodInfo_ApplicationManagers_AccountManager_ApplyAuthResponse
// asm:   0x5e02f22: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5e02f27: mov rdi, rbx
// asm:   0x5e02f2a: mov rsi, rax
// asm:   0x5e02f2d: call 0x30d6220  ; il2cpp_codegen_raise_exception()

void ApplicationManagers_AccountManager__ApplyAuthResponse(System_String_o *json,MethodInfo *method)

{
  char cVar1;
  uint32_t uVar2;
  ApplicationManagers_AccountManager_StaticFields *pAVar3;
  System_Action_o *pSVar4;
  undefined8 uVar5;
  undefined2 uVar6;
  undefined8 uVar7;
  undefined2 uVar8;
  bool bVar9;
  SimpleJSONFixed_JSONNode_o *pSVar10;
  ApplicationManagers_AccountLoginResponse_o *pAVar11;
  int64_t iVar12;
  Il2CppClass *pIVar13;
  System_FormatException_o *__this;
  System_String_o *pSVar14;
  MethodInfo *pMVar15;
  System_DateTimeOffset_o left;
  System_DateTimeOffset_o left_00;
  
  if (Il2CppMethodInitialized_075483a1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTimeOffset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"profile");
    Il2CppMethodInitialized_075483a1 = '\x01';
  }
  pMVar15 = (MethodInfo *)0x0;
  pSVar10 = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
  pAVar11 = ApplicationManagers_AccountLoginResponse__Parse(pSVar10,pMVar15);
  if (pAVar11 == (ApplicationManagers_AccountLoginResponse_o *)0x0) {
    pIVar13 = il2cpp_codegen_get_runtime_metadata(&TypeInfo_System_FormatException);
    __this = (System_FormatException_o *)il2cpp_codegen_object_new(pIVar13);
    pSVar14 = il2cpp_codegen_get_runtime_metadata(&"Missing login response payload.");
    System_FormatException___ctor_549ecd0(__this,pSVar14,(MethodInfo *)0x0);
    pMVar15 = il2cpp_codegen_get_runtime_metadata
                        (&MethodInfo_ApplicationManagers_AccountManager_ApplyAuthResponse);
    il2cpp_codegen_raise_exception((Il2CppObject *)__this,pMVar15);
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (Il2CppMethodInitialized_075483d0 != '\0') goto label_05e029a8;
label_05e02dc0:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483d0 = '\x01';
    uVar2 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_075483d0 == '\0') goto label_05e02dc0;
label_05e029a8:
    uVar2 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar3 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar3->_LoginResponse_k__BackingField = pAVar11;
  Il2CppCodeGenWriteBarrier(&pAVar3->_LoginResponse_k__BackingField);
  pSVar14 = (pAVar11->fields).AccessToken;
  if (Il2CppMethodInitialized_075483d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483d1 = '\x01';
    uVar2 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar3 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar3->_AuthToken_k__BackingField = pSVar14;
  Il2CppCodeGenWriteBarrier(&pAVar3->_AuthToken_k__BackingField);
  pSVar14 = (pAVar11->fields).PhotonToken;
  if (Il2CppMethodInitialized_075483d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483d2 = '\x01';
    uVar2 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar2 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar3 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar3->_PhotonToken_k__BackingField = pSVar14;
  Il2CppCodeGenWriteBarrier(&pAVar3->_PhotonToken_k__BackingField);
  uVar5 = (pAVar11->fields).AccessTokenExpiresAt.fields._dateTime;
  uVar6 = (pAVar11->fields).AccessTokenExpiresAt.fields._offsetMinutes;
  left.fields._offsetMinutes = uVar6;
  left.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)uVar5;
  if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
  }
  iVar12 = 0;
  left.fields._10_6_ = 0;
  bVar9 = System_DateTimeOffset__op_Equality(left,(System_DateTimeOffset_o)ZEXT816(0),(MethodInfo *)0x0);
  if (bVar9) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05e02c43;
label_05e02a9d:
    if (Il2CppMethodInitialized_075483d3 == '\0') goto label_05e02c55;
label_05e02aaa:
    uVar2 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
    }
    iVar12 = System_DateTimeOffset__ToUnixTimeSeconds
                       (&(pAVar11->fields).AccessTokenExpiresAt,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05e02a9d;
label_05e02c43:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (Il2CppMethodInitialized_075483d3 != '\0') goto label_05e02aaa;
label_05e02c55:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483d3 = '\x01';
    uVar2 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_AuthTokenExpiresUnix_k__BackingField = iVar12;
  uVar7 = (pAVar11->fields).PhotonTokenExpiresAt.fields._dateTime;
  uVar8 = (pAVar11->fields).PhotonTokenExpiresAt.fields._offsetMinutes;
  left_00.fields._offsetMinutes = uVar8;
  left_00.fields._dateTime.fields._dateData = (System_DateTime_Fields)(System_DateTime_Fields)uVar7;
  if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
  }
  iVar12 = 0;
  left_00.fields._10_6_ = 0;
  bVar9 = System_DateTimeOffset__op_Equality(left_00,(System_DateTimeOffset_o)ZEXT816(0),(MethodInfo *)0x0);
  if (bVar9) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05e02cc4;
label_05e02b16:
    if (Il2CppMethodInitialized_075483d4 == '\0') goto label_05e02cd6;
label_05e02b23:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05e02cfa;
label_05e02b34:
    TypeInfo_ApplicationManagers_AccountManager->static_fields->_PhotonTokenExpiresUnix_k__BackingField =
         iVar12;
  }
  else {
    if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
    }
    iVar12 = System_DateTimeOffset__ToUnixTimeSeconds
                       (&(pAVar11->fields).PhotonTokenExpiresAt,(MethodInfo *)0x0);
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05e02b16;
label_05e02cc4:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (Il2CppMethodInitialized_075483d4 != '\0') goto label_05e02b23;
label_05e02cd6:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483d4 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05e02b34;
label_05e02cfa:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    TypeInfo_ApplicationManagers_AccountManager->static_fields->_PhotonTokenExpiresUnix_k__BackingField =
         iVar12;
  }
  if (pSVar10 == (SimpleJSONFixed_JSONNode_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar14 = (pAVar11->fields).RefreshToken;
  pSVar10 = (*(pSVar10->klass->vtable)._7_get_Item.methodPtr)
                      (pSVar10,"profile",(pSVar10->klass->vtable)._7_get_Item.method);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  pMVar15 = (MethodInfo *)0x0;
  bVar9 = SimpleJSONFixed_JSONNode__op_Inequality(pSVar10,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar9) {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    ApplicationManagers_AccountManager__ApplyProfileResponse(pSVar10,pMVar15);
  }
  bVar9 = System_String__IsNullOrEmpty(pSVar14,(MethodInfo *)0x0);
  if (bVar9) {
    uVar2 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
    goto joined_r0x05e02da3;
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar3 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar3->_refreshToken = pSVar14;
  Il2CppCodeGenWriteBarrier(&pAVar3->_refreshToken);
  if (Il2CppMethodInitialized_075483d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483d5 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05e02d70;
label_05e02e7a:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    cVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_KeepSignedIn_k__BackingField;
    uVar2 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
    pIVar13 = (Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager;
  }
  else {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05e02e7a;
label_05e02d70:
    cVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_KeepSignedIn_k__BackingField;
    uVar2 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
    pIVar13 = (Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager;
  }
  TypeInfo_ApplicationManagers_AccountManager = (ApplicationManagers_AccountManager_c *)pIVar13;
  if (cVar1 == '\0') {
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init(pIVar13);
    }
    ApplicationManagers_AccountManager__DeleteRefreshToken((MethodInfo *)pIVar13);
    uVar2 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init(pIVar13);
    }
    ApplicationManagers_AccountManager__SaveRefreshToken((MethodInfo *)pIVar13);
    uVar2 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
joined_r0x05e02da3:
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    pSVar4 = TypeInfo_ApplicationManagers_AccountManager->static_fields->OnLoggedIn;
  }
  else {
    pSVar4 = *(System_Action_o **)
              ((long)((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->static_fields + 200);
  }
  if (pSVar4 == (System_Action_o *)0x0) {
    return;
  }
  (*(code *)(pSVar4->fields).invoke_impl)((pSVar4->fields).method_code,(pSVar4->fields).method);
  return;
}


// ApplicationManagers.AccountManager$$OnPreLoadScene
// il2cpp: void ApplicationManagers_AccountManager__OnPreLoadScene (int32_t sceneName, const MethodInfo* method);
// 0x5e02f40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e02f5d: cmp byte ptr [rip + 0x17453f7], 0

void ApplicationManagers_AccountManager__OnPreLoadScene(int32_t sceneName,MethodInfo *method)

{
  uint32_t uVar1;
  ApplicationManagers_AccountManager_StaticFields *pAVar2;
  
  if (Il2CppMethodInitialized_075483a2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483a2 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_0754835b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_0754835b = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar2->_ownProfileCacheValid = false;
  pAVar2->_ownCharacterInfoCacheValid = false;
  return;
}


// ApplicationManagers.AccountManager$$ParseIsoToUnix
// il2cpp: int64_t ApplicationManagers_AccountManager__ParseIsoToUnix (System_String_o* iso, const MethodInfo* method);
// 0x5e02fe0
// eh: try 0x5e0304b..0x5e030e1 -> pad 0x5e030f3 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5e03121..0x5e03154 -> pad 0x5e03154 (+1 call sites) cleanup
// eh: try 0x5e03157..0x5e0315c -> pad 0x5e03164 catch (...) [compiler noexcept guard]
// asm: 36 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e030f1: jmp 0x5e030fd
// asm:   0x5e030f3: jmp 0x5e030fd
// asm:   0x5e030f5: jmp 0x5e030fd
// asm:   0x5e030f7: jmp 0x5e030fd
// asm:   0x5e030f9: jmp 0x5e030fd
// asm:   0x5e030fb: jmp 0x5e030fd
// asm:   0x5e030fd: mov rbx, rax
// asm:   0x5e03100: cmp edx, 1
// asm:   0x5e03103: jne 0x5e0315c
// asm:   0x5e03105: mov rdi, rbx
// asm:   0x5e03108: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e0310d: mov rbx, rax
// asm:   0x5e03110: lea rax, [rip + 0x17535b1]
// asm:   0x5e03117: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5e0311b: mov rax, qword ptr [rbx]
// asm:   0x5e0311e: mov rsi, qword ptr [rax]
// asm:   0x5e03121: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5e03126: test al, al
// asm:   0x5e03128: je 0x5e03133
// asm:   0x5e0312a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e0312f: xor ebx, ebx
// asm:   0x5e03131: jmp 0x5e030e6
// asm:   0x5e03133: mov edi, 8
// asm:   0x5e03138: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5e0313d: mov rcx, qword ptr [rbx]
// asm:   0x5e03140: mov qword ptr [rax], rcx
// asm:   0x5e03143: lea rsi, [rip + 0x102a3b6]
// asm:   0x5e0314a: mov rdi, rax
// asm:   0x5e0314d: xor edx, edx
// asm:   0x5e0314f: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5e03154: mov rbx, rax
// asm:   0x5e03157: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e0315c: mov rdi, rbx
// asm:   0x5e0315f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e03164: mov rdi, rax
// asm:   0x5e03167: call 0x2ab61e0  ; __clang_call_terminate()

int64_t ApplicationManagers_AccountManager__ParseIsoToUnix(System_String_o *iso,MethodInfo *method)

{
  bool bVar1;
  System_DateTime_o d1;
  int64_t iVar2;
  double dVar3;
  System_DateTime_o SStack_28;
  System_TimeSpan_o SStack_20;
  System_DateTime_o SStack_18;
  
  if (Il2CppMethodInitialized_075483a3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTime);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_TimeSpan);
    Il2CppMethodInitialized_075483a3 = '\x01';
  }
  SStack_18.fields._dateData = (System_DateTime_Fields)0;
  SStack_20.fields._ticks = (System_TimeSpan_Fields)0;
  iVar2 = 0;
  bVar1 = System_String__IsNullOrEmpty(iso,(MethodInfo *)0x0);
  if (!bVar1) {
    if ((TypeInfo_System_DateTime->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTime);
    }
    SStack_18 = System_DateTime__Parse_5496c90(iso,(System_IFormatProvider_o *)0x0,0x80,(MethodInfo *)0x0);
    d1 = System_DateTime__ToUniversalTime(&SStack_18,(MethodInfo *)0x0);
    SStack_28.fields._dateData = (System_DateTime_Fields)0;
    System_DateTime___ctor_5494120(&SStack_28,0x7b2,1,1,0,0,0,1,(MethodInfo *)0x0);
    SStack_20 = System_DateTime__op_Subtraction_5498240(d1,SStack_28,(MethodInfo *)0x0);
    if ((TypeInfo_System_TimeSpan->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_TimeSpan);
    }
    dVar3 = System_TimeSpan__get_TotalSeconds(&SStack_20,(MethodInfo *)0x0);
    iVar2 = (int64_t)dVar3;
  }
  return iVar2;
}


// ApplicationManagers.AccountManager$$ClearSession
// il2cpp: void ApplicationManagers_AccountManager__ClearSession (bool clearRefreshToken, const MethodInfo* method);
// 0x5e00980
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e00a14: cmp byte ptr [rip + 0x17479b6], 0
// asm:   0x5e00a1b: je 0x5e00ca3
// asm:   0x5e00b61: cmp byte ptr [rip + 0x1747863], 0
// asm:   0x5e00b68: je 0x5e00e5c
// asm:   0x5e00b94: jmp 0x5e00edb

void ApplicationManagers_AccountManager__ClearSession(bool clearRefreshToken,MethodInfo *method)

{
  uint32_t uVar1;
  void *pvVar2;
  System_Action_o *pSVar3;
  code *vtableDispatch;
  ApplicationManagers_AccountManager_c *klass;
  bool bVar4;
  undefined1 uVar5;
  ApplicationManagers_AccountManager_StaticFields *pAVar6;
  undefined8 extraout_RDX;
  undefined8 extraout_RDX_00;
  undefined8 extraout_RDX_01;
  undefined8 extraout_RDX_02;
  undefined8 extraout_RDX_03;
  undefined8 extraout_RDX_04;
  undefined8 extraout_RDX_05;
  undefined8 extraout_RDX_06;
  undefined8 uVar7;
  Il2CppClass *pIVar8;
  MethodInfo *pMVar9;
  
  if (Il2CppMethodInitialized_075483a4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483a4 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05e009ab;
label_05e00bc3:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (Il2CppMethodInitialized_07548373 != '\0') goto label_05e009b8;
label_05e00bd5:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548373 = '\x01';
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor != 0) goto label_05e009c8;
label_05e00bf8:
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (Il2CppMethodInitialized_075483c7 != '\0') goto label_05e009d5;
label_05e00c0a:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483c7 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05e00bc3;
label_05e009ab:
    if (Il2CppMethodInitialized_07548373 == '\0') goto label_05e00bd5;
label_05e009b8:
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) goto label_05e00bf8;
label_05e009c8:
    if (Il2CppMethodInitialized_075483c7 == '\0') goto label_05e00c0a;
label_05e009d5:
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar4 = System_String__IsNullOrEmpty
                    (TypeInfo_ApplicationManagers_AccountManager->static_fields->_AuthToken_k__BackingField,
                     (MethodInfo *)0x0);
  uVar5 = true;
  if (!bVar4) {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
    goto joined_r0x05e00c8b;
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    if (Il2CppMethodInitialized_07548374 != '\0') goto label_05e00c57;
label_05e00ef2:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_07548374 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    if (Il2CppMethodInitialized_07548374 == '\0') goto label_05e00ef2;
label_05e00c57:
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar4 = System_String__IsNullOrEmpty
                    (TypeInfo_ApplicationManagers_AccountManager->static_fields->_refreshToken,
                     (MethodInfo *)0x0);
  uVar5 = !bVar4;
  uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
joined_r0x05e00c8b:
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_075483d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483d1 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = *(uint32_t *)((long)TypeInfo_ApplicationManagers_AccountManager + 0xe4);
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pAVar6 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar6->_AuthToken_k__BackingField = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pAVar6->_AuthToken_k__BackingField);
  if (Il2CppMethodInitialized_075483d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483d3 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
    pIVar8 = (Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
    pIVar8 = (Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager;
  }
  TypeInfo_ApplicationManagers_AccountManager = (ApplicationManagers_AccountManager_c *)pIVar8;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar8);
    pIVar8 = (Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager;
    TypeInfo_ApplicationManagers_AccountManager->static_fields->_AuthTokenExpiresUnix_k__BackingField = 0;
  }
  else {
    (*(ApplicationManagers_AccountManager_StaticFields **)((long)pIVar8 + 0xb8))->
    _AuthTokenExpiresUnix_k__BackingField = 0;
  }
  if (Il2CppMethodInitialized_075483d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483d2 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
    pIVar8 = (Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager;
  }
  else {
    uVar1 = *(uint32_t *)((long)pIVar8 + 0xe4);
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar8);
    pIVar8 = (Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager;
  }
  pvVar2 = pIVar8->static_fields;
  *(undefined8 *)((long)pvVar2 + 0x80) = 0;
  Il2CppCodeGenWriteBarrier((void **)((long)pvVar2 + 0x80));
  if (Il2CppMethodInitialized_075483d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483d4 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
    pIVar8 = (Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
    pIVar8 = (Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager;
  }
  TypeInfo_ApplicationManagers_AccountManager = (ApplicationManagers_AccountManager_c *)pIVar8;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar8);
    pIVar8 = (Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager;
    TypeInfo_ApplicationManagers_AccountManager->static_fields->_PhotonTokenExpiresUnix_k__BackingField = 0;
  }
  else {
    (*(ApplicationManagers_AccountManager_StaticFields **)((long)pIVar8 + 0xb8))->
    _PhotonTokenExpiresUnix_k__BackingField = 0;
  }
  if (Il2CppMethodInitialized_075483d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483d0 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
    pIVar8 = (Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager;
  }
  else {
    uVar1 = *(uint32_t *)((long)pIVar8 + 0xe4);
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar8);
    pIVar8 = (Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager;
  }
  pvVar2 = pIVar8->static_fields;
  *(undefined8 *)((long)pvVar2 + 0x90) = 0;
  pMVar9 = (MethodInfo *)((long)pvVar2 + 0x90);
  Il2CppCodeGenWriteBarrier((void **)pMVar9);
  ApplicationManagers_AccountManager__ClearProfileResponse(pMVar9);
  if (Il2CppMethodInitialized_075483d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483d6 = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
    klass = TypeInfo_ApplicationManagers_AccountManager;
    uVar7 = extraout_RDX_00;
  }
  else {
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
    klass = TypeInfo_ApplicationManagers_AccountManager;
    uVar7 = extraout_RDX;
  }
  TypeInfo_ApplicationManagers_AccountManager = klass;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)klass);
    klass = TypeInfo_ApplicationManagers_AccountManager;
    pAVar6 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
    pAVar6->_RefreshTokenExpiresUnix_k__BackingField = 0;
    uVar7 = extraout_RDX_01;
  }
  else {
    pAVar6 = *(ApplicationManagers_AccountManager_StaticFields **)((long)klass + 0xb8);
    pAVar6->_RefreshTokenExpiresUnix_k__BackingField = 0;
  }
  if (clearRefreshToken) {
    if (*(uint32_t *)((long)klass + 0xe4) == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)klass);
      pAVar6 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
    }
    pAVar6->_refreshToken = (System_String_o *)0x0;
    pMVar9 = (MethodInfo *)&pAVar6->_refreshToken;
    Il2CppCodeGenWriteBarrier((void **)pMVar9);
    ApplicationManagers_AccountManager__DeleteRefreshToken(pMVar9);
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
    klass = TypeInfo_ApplicationManagers_AccountManager;
    uVar7 = extraout_RDX_02;
  }
  else {
    uVar1 = *(uint32_t *)((long)klass + 0xe4);
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)klass);
    uVar7 = extraout_RDX_03;
  }
  if (Il2CppMethodInitialized_075483cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483cb = '\x01';
    uVar1 = (TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor;
    pIVar8 = (Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager;
    uVar7 = extraout_RDX_04;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager)->_2).cctor_finished_or_no_cctor;
    pIVar8 = (Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager;
  }
  TypeInfo_ApplicationManagers_AccountManager = (ApplicationManagers_AccountManager_c *)pIVar8;
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init(pIVar8);
    pIVar8 = (Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager;
    pAVar6 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
    pAVar6->_IsRefreshInProgress_k__BackingField = false;
    uVar7 = extraout_RDX_05;
  }
  else {
    pAVar6 = pIVar8->static_fields;
    pAVar6->_IsRefreshInProgress_k__BackingField = false;
  }
  if ((bool)uVar5) {
    if ((pIVar8->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init(pIVar8);
      pSVar3 = TypeInfo_ApplicationManagers_AccountManager->static_fields->OnLoggedOut;
      uVar7 = extraout_RDX_06;
    }
    else {
      pSVar3 = pAVar6->OnLoggedOut;
    }
    if (pSVar3 != (System_Action_o *)0x0) {
      vtableDispatch = (code *)(pSVar3->fields).invoke_impl;
      (*vtableDispatch)
                ((pSVar3->fields).method_code,(pSVar3->fields).method,uVar7,vtableDispatch);
      return;
    }
  }
  return;
}


// ApplicationManagers.AccountManager$$GetRefreshTokenPath
// il2cpp: System_String_o* ApplicationManagers_AccountManager__GetRefreshTokenPath (const MethodInfo* method);
// 0x5dff220

System_String_o * ApplicationManagers_AccountManager__GetRefreshTokenPath(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_075483a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&"/AccountRefresh.dat");
    Il2CppMethodInitialized_075483a5 = '\x01';
  }
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  pSVar1 = System_String__Concat_52f0320
                     (TypeInfo_Utility_FolderPaths->static_fields->Settings,"/AccountRefresh.dat",
                      (MethodInfo *)0x0);
  return pSVar1;
}


// ApplicationManagers.AccountManager$$SaveRefreshToken
// il2cpp: void ApplicationManagers_AccountManager__SaveRefreshToken (const MethodInfo* method);
// 0x5dffda0
// eh: try 0x5dffdeb..0x5dffeb6 -> pad 0x5dffec0 (+5 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5dffedf..0x5dfff8f -> pad 0x5dfff94 (+1 call sites) cleanup
// eh: try 0x5dfff97..0x5dfff9c -> pad 0x5dfffa4 catch (...) [compiler noexcept guard]
// asm: 62 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dffebe: jmp 0x5dffec8
// asm:   0x5dffec0: jmp 0x5dffec8
// asm:   0x5dffec2: jmp 0x5dffec8
// asm:   0x5dffec4: jmp 0x5dffec8
// asm:   0x5dffec6: jmp 0x5dffec8
// asm:   0x5dffec8: mov rbx, rax
// asm:   0x5dffecb: cmp edx, 1
// asm:   0x5dffece: jne 0x5dfff9c
// asm:   0x5dffed4: mov rdi, rbx
// asm:   0x5dffed7: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dffedc: mov rbx, rax
// asm:   0x5dffedf: lea rdi, [rip + 0x14781da]  ; TypeInfo_System_Exception
// asm:   0x5dffee6: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5dffeeb: mov rcx, qword ptr [rbx]
// asm:   0x5dffeee: mov rsi, qword ptr [rcx]
// asm:   0x5dffef1: mov rdi, rax
// asm:   0x5dffef4: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5dffef9: test al, al
// asm:   0x5dffefb: je 0x5dfff6e
// asm:   0x5dffefd: mov rbx, qword ptr [rbx]
// asm:   0x5dfff00: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dfff05: test rbx, rbx
// asm:   0x5dfff08: je 0x5dfff8f
// asm:   0x5dfff0e: mov rax, qword ptr [rbx]
// asm:   0x5dfff11: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5dfff18: mov rdi, rbx
// asm:   0x5dfff1b: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5dfff21: mov rbx, rax
// asm:   0x5dfff24: lea rdi, [rip + 0x14d3275]  ; "AccountManager: failed to save refresh token: "
// asm:   0x5dfff2b: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5dfff30: mov rdi, rax
// asm:   0x5dfff33: mov rsi, rbx
// asm:   0x5dfff36: xor edx, edx
// asm:   0x5dfff38: call 0x53f0320  ; System_String__Concat()
// asm:   0x5dfff3d: mov rbx, rax
// asm:   0x5dfff40: lea rdi, [rip + 0x1477701]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5dfff47: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5dfff4c: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5dfff53: jne 0x5dfff5d
// asm:   0x5dfff55: mov rdi, rax
// asm:   0x5dfff58: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5dfff5d: mov rdi, rbx
// asm:   0x5dfff60: xor esi, esi
// asm:   0x5dfff62: add rsp, 8
// asm:   0x5dfff66: pop rbx
// asm:   0x5dfff67: pop r14
// asm:   0x5dfff69: jmp 0x69c42a0  ; UnityEngine_Debug__Log()
// asm:   0x5dfff6e: mov edi, 8
// asm:   0x5dfff73: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5dfff78: mov rcx, qword ptr [rbx]
// asm:   0x5dfff7b: mov qword ptr [rax], rcx
// asm:   0x5dfff7e: lea rsi, [rip + 0x102d57b]
// asm:   0x5dfff85: mov rdi, rax
// asm:   0x5dfff88: xor edx, edx
// asm:   0x5dfff8a: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5dfff8f: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x5dfff94: mov rbx, rax
// asm:   0x5dfff97: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dfff9c: mov rdi, rbx
// asm:   0x5dfff9f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5dfffa4: mov rdi, rax
// asm:   0x5dfffa7: call 0x2ab61e0  ; __clang_call_terminate()

void ApplicationManagers_AccountManager__SaveRefreshToken(MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *path;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075483a6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DeviceLockedEncryption);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    Il2CppMethodInitialized_075483a6 = '\x01';
  }
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  method_00 = (MethodInfo *)0x0;
  System_IO_Directory__CreateDirectory
            (TypeInfo_Utility_FolderPaths->static_fields->Settings,(MethodInfo *)0x0);
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  pSVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields->_refreshToken;
  if ((TypeInfo_Utility_DeviceLockedEncryption->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DeviceLockedEncryption);
  }
  pSVar1 = Utility_DeviceLockedEncryption__Encrypt(pSVar1,method_00);
  if (Il2CppMethodInitialized_075483a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&"/AccountRefresh.dat");
    Il2CppMethodInitialized_075483a5 = '\x01';
  }
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  path = System_String__Concat_52f0320
                   (TypeInfo_Utility_FolderPaths->static_fields->Settings,"/AccountRefresh.dat",
                    (MethodInfo *)0x0);
  System_IO_File__WriteAllText(path,pSVar1,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager$$LoadRefreshToken
// il2cpp: void ApplicationManagers_AccountManager__LoadRefreshToken (const MethodInfo* method);
// 0x5dff290
// eh: try 0x5dff2cf..0x5dff3a5 -> pad 0x5dff3ad (+4 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: TypeInfo_System_Exception]
// eh: try 0x5dff3cc..0x5dff4d9 -> pad 0x5dff4de (+1 call sites) cleanup
// eh: try 0x5dff4e1..0x5dff4e6 -> pad 0x5dff4ee catch (...) [compiler noexcept guard]
// asm: 78 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dff3ad: jmp 0x5dff3b5
// asm:   0x5dff3af: jmp 0x5dff3b5
// asm:   0x5dff3b1: jmp 0x5dff3b5
// asm:   0x5dff3b3: jmp 0x5dff3b5
// asm:   0x5dff3b5: mov rbx, rax
// asm:   0x5dff3b8: cmp edx, 1
// asm:   0x5dff3bb: jne 0x5dff4e6
// asm:   0x5dff3c1: mov rdi, rbx
// asm:   0x5dff3c4: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dff3c9: mov rbx, rax
// asm:   0x5dff3cc: lea rdi, [rip + 0x1478ced]  ; TypeInfo_System_Exception
// asm:   0x5dff3d3: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5dff3d8: mov rcx, qword ptr [rbx]
// asm:   0x5dff3db: mov rsi, qword ptr [rcx]
// asm:   0x5dff3de: mov rdi, rax
// asm:   0x5dff3e1: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5dff3e6: test al, al
// asm:   0x5dff3e8: je 0x5dff4b8
// asm:   0x5dff3ee: mov rbx, qword ptr [rbx]
// asm:   0x5dff3f1: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dff3f6: test rbx, rbx
// asm:   0x5dff3f9: je 0x5dff4d9
// asm:   0x5dff3ff: mov rax, qword ptr [rbx]
// asm:   0x5dff402: mov rsi, qword ptr [rax + 0x190]
// asm:   0x5dff409: mov rdi, rbx
// asm:   0x5dff40c: call qword ptr [rax + 0x188]  ; vtable slot 5
// asm:   0x5dff412: mov rbx, rax
// asm:   0x5dff415: lea rdi, [rip + 0x14d3d6c]  ; "AccountManager: failed to load refresh token: "
// asm:   0x5dff41c: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5dff421: mov rdi, rax
// asm:   0x5dff424: mov rsi, rbx
// asm:   0x5dff427: xor edx, edx
// asm:   0x5dff429: call 0x53f0320  ; System_String__Concat()
// asm:   0x5dff42e: mov rbx, rax
// asm:   0x5dff431: lea rdi, [rip + 0x1478210]  ; TypeInfo_UnityEngine_Debug
// asm:   0x5dff438: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5dff43d: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5dff444: jne 0x5dff44e
// asm:   0x5dff446: mov rdi, rax
// asm:   0x5dff449: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5dff44e: mov rdi, rbx
// asm:   0x5dff451: xor esi, esi
// asm:   0x5dff453: call 0x69c42a0  ; UnityEngine_Debug__Log()
// asm:   0x5dff458: lea rdi, [rip + 0x1475b71]  ; TypeInfo_ApplicationManagers_AccountManager
// asm:   0x5dff45f: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5dff464: cmp dword ptr [rax + 0xe4], 0
// asm:   0x5dff46b: jne 0x5dff475
// asm:   0x5dff46d: mov rdi, rax
// asm:   0x5dff470: call 0x30d6240  ; il2cpp_codegen_runtime_class_init()
// asm:   0x5dff475: lea rbx, [rip + 0x1475b54]  ; TypeInfo_ApplicationManagers_AccountManager
// asm:   0x5dff47c: mov rdi, rbx
// asm:   0x5dff47f: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5dff484: mov rax, qword ptr [rax + 0xb8]
// asm:   0x5dff48b: mov qword ptr [rax + 0xb8], 0
// asm:   0x5dff496: mov rdi, rbx
// asm:   0x5dff499: call 0x30d6070  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x5dff49e: mov edi, 0xb8
// asm:   0x5dff4a3: add rdi, qword ptr [rax + 0xb8]
// asm:   0x5dff4aa: xor esi, esi
// asm:   0x5dff4ac: add rsp, 8
// asm:   0x5dff4b0: pop rbx
// asm:   0x5dff4b1: pop r14
// asm:   0x5dff4b3: jmp 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x5dff4b8: mov edi, 8
// asm:   0x5dff4bd: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5dff4c2: mov rcx, qword ptr [rbx]
// asm:   0x5dff4c5: mov qword ptr [rax], rcx
// asm:   0x5dff4c8: lea rsi, [rip + 0x102e031]
// asm:   0x5dff4cf: mov rdi, rax
// asm:   0x5dff4d2: xor edx, edx
// asm:   0x5dff4d4: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5dff4d9: call 0x30d63a0  ; ThrowNullReferenceException()
// asm:   0x5dff4de: mov rbx, rax
// asm:   0x5dff4e1: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dff4e6: mov rdi, rbx
// asm:   0x5dff4e9: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5dff4ee: mov rdi, rax
// asm:   0x5dff4f1: call 0x2ab61e0  ; __clang_call_terminate()

void ApplicationManagers_AccountManager__LoadRefreshToken(MethodInfo *method)

{
  ApplicationManagers_AccountManager_StaticFields *pAVar1;
  bool bVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075483a7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_DeviceLockedEncryption);
    Il2CppMethodInitialized_075483a7 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_075483a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&"/AccountRefresh.dat");
    Il2CppMethodInitialized_075483a5 = '\x01';
  }
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  pSVar3 = System_String__Concat_52f0320
                     (TypeInfo_Utility_FolderPaths->static_fields->Settings,"/AccountRefresh.dat",
                      (MethodInfo *)0x0);
  bVar2 = System_IO_File__Exists(pSVar3,(MethodInfo *)0x0);
  if (bVar2) {
    method_00 = (MethodInfo *)0x0;
    pSVar3 = System_IO_File__ReadAllText(pSVar3,(MethodInfo *)0x0);
    if ((TypeInfo_Utility_DeviceLockedEncryption->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_DeviceLockedEncryption);
    }
    pSVar3 = Utility_DeviceLockedEncryption__Decrypt(pSVar3,method_00);
    if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
    }
    pAVar1 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
    pAVar1->_refreshToken = pSVar3;
    Il2CppCodeGenWriteBarrier(&pAVar1->_refreshToken);
  }
  return;
}


// ApplicationManagers.AccountManager$$DeleteRefreshToken
// il2cpp: void ApplicationManagers_AccountManager__DeleteRefreshToken (const MethodInfo* method);
// 0x5dffc70
// eh: try 0x5dffca0..0x5dffd1f -> pad 0x5dffd21 (+3 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5dffd4b..0x5dffd7b -> pad 0x5dffd7b (+1 call sites) cleanup
// eh: try 0x5dffd7e..0x5dffd83 -> pad 0x5dffd8b catch (...) [compiler noexcept guard]
// asm: 32 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5dffd21: jmp 0x5dffd27
// asm:   0x5dffd23: jmp 0x5dffd27
// asm:   0x5dffd25: jmp 0x5dffd27
// asm:   0x5dffd27: mov rbx, rax
// asm:   0x5dffd2a: cmp edx, 1
// asm:   0x5dffd2d: jne 0x5dffd83
// asm:   0x5dffd2f: mov rdi, rbx
// asm:   0x5dffd32: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5dffd37: mov rbx, rax
// asm:   0x5dffd3a: lea rax, [rip + 0x1756987]
// asm:   0x5dffd41: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5dffd45: mov rax, qword ptr [rbx]
// asm:   0x5dffd48: mov rsi, qword ptr [rax]
// asm:   0x5dffd4b: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5dffd50: test al, al
// asm:   0x5dffd52: je 0x5dffd5a
// asm:   0x5dffd54: pop rbx
// asm:   0x5dffd55: jmp 0x6e255a0
// asm:   0x5dffd5a: mov edi, 8
// asm:   0x5dffd5f: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5dffd64: mov rcx, qword ptr [rbx]
// asm:   0x5dffd67: mov qword ptr [rax], rcx
// asm:   0x5dffd6a: lea rsi, [rip + 0x102d78f]
// asm:   0x5dffd71: mov rdi, rax
// asm:   0x5dffd74: xor edx, edx
// asm:   0x5dffd76: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5dffd7b: mov rbx, rax
// asm:   0x5dffd7e: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5dffd83: mov rdi, rbx
// asm:   0x5dffd86: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5dffd8b: mov rdi, rax
// asm:   0x5dffd8e: call 0x2ab61e0  ; __clang_call_terminate()

void ApplicationManagers_AccountManager__DeleteRefreshToken(MethodInfo *method)

{
  bool bVar1;
  System_String_o *path;
  
  if (Il2CppMethodInitialized_075483a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    Il2CppMethodInitialized_075483a8 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  if (Il2CppMethodInitialized_075483a5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_FolderPaths);
    il2cpp_codegen_initialize_runtime_metadata(&"/AccountRefresh.dat");
    Il2CppMethodInitialized_075483a5 = '\x01';
  }
  if ((TypeInfo_Utility_FolderPaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_FolderPaths);
  }
  path = System_String__Concat_52f0320
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
// 0x5e03170

void ApplicationManagers_AccountManager___ctor
               (ApplicationManagers_AccountManager_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// ApplicationManagers.AccountManager$$.cctor
// il2cpp: void ApplicationManagers_AccountManager___cctor (const MethodInfo* method);
// 0x5e03180
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e0338c: cmp byte ptr [rip + 0x173f4f3], 0
// asm:   0x5e03393: je 0x5e03467

void ApplicationManagers_AccountManager___cctor(MethodInfo *method)

{
  uint32_t uVar1;
  ApplicationManagers_AccountManager_StaticFields *pAVar2;
  System_OrdinalIgnoreCaseComparer_o *comparer;
  System_Collections_Generic_Dictionary_string__string__o *__this;
  System_Collections_Generic_List_Action_bool__string___o *pSVar3;
  System_Collections_Generic_List_Action_bool__string__JSONNode___o *__this_00;
  System_Collections_Generic_HashSet_string__o *__this_01;
  
  if (Il2CppMethodInitialized_075483a9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_Dictionary_string_string);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
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
    Il2CppMethodInitialized_075483a9 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_Dictionary_string_string);
  System_Collections_Generic_Dictionary_object__object____ctor
            ((System_Collections_Generic_Dictionary_object__object__o *)__this,
             (MethodInfo_4AAC8D0 *)MethodInfo_System_Collections_Generic_Dictionary_string_string_ctor);
  pAVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar2->_ProfileSocials_k__BackingField = __this;
  Il2CppCodeGenWriteBarrier(&pAVar2->_ProfileSocials_k__BackingField);
  pSVar3 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Action_bool_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Action_bool_string_ctor);
  pAVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar2->_ownProfileFetchSubscribers = pSVar3;
  Il2CppCodeGenWriteBarrier(&pAVar2->_ownProfileFetchSubscribers);
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Action_bool_string_JSONNode);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_00,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Action_bool_string_JSONNode_ctor
            );
  pAVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar2->_ownCharacterInfoFetchSubscribers = __this_00;
  Il2CppCodeGenWriteBarrier(&pAVar2->_ownCharacterInfoFetchSubscribers);
  pAVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar2->BaseUrl = "https://aottg2.com";
  Il2CppCodeGenWriteBarrier(&pAVar2->BaseUrl);
  pSVar3 = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Action_bool_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)pSVar3,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Action_bool_string_ctor);
  pAVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar2->_pendingRefreshCallbacks = pSVar3;
  Il2CppCodeGenWriteBarrier(&pAVar2->_pendingRefreshCallbacks);
  TypeInfo_ApplicationManagers_AccountManager->static_fields->_KeepSignedIn_k__BackingField = true;
  if ((TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  if (Il2CppMethodInitialized_07542886 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_StringComparer);
    Il2CppMethodInitialized_07542886 = '\x01';
    uVar1 = (TypeInfo_System_StringComparer->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_System_StringComparer)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_StringComparer);
  }
  comparer = TypeInfo_System_StringComparer->static_fields->s_ordinalIgnoreCase;
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_string);
  System_Collections_Generic_HashSet_object____ctor_4fb2f30
            ((System_Collections_Generic_HashSet_object__o *)__this_01,
             (System_Collections_Generic_IEqualityComparer_T__o *)comparer,
             (MethodInfo_4FB2F30 *)MethodInfo_System_Collections_Generic_HashSet_string_ctor_7191708);
  if (__this_01 == (System_Collections_Generic_HashSet_string__o *)0x0) {
    ThrowNullReferenceException();
  }
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this_01,(Il2CppObject *)"email_password",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this_01,(Il2CppObject *)"discord",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  System_Collections_Generic_HashSet_object___Add
            ((System_Collections_Generic_HashSet_object__o *)__this_01,(Il2CppObject *)"google",
             (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_string_Add);
  pAVar2 = TypeInfo_ApplicationManagers_AccountManager->static_fields;
  pAVar2->_enabledAuthMethods = __this_01;
  Il2CppCodeGenWriteBarrier(&pAVar2->_enabledAuthMethods);
  return;
}


