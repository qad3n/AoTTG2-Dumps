// Type: ApplicationManagers.Api.AottgApiResult
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Api/AottgApiResult.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Api.AottgApiResult$$get_Success
// il2cpp: bool ApplicationManagers_Api_AottgApiResult__get_Success (ApplicationManagers_Api_AottgApiResult_o* __this, const MethodInfo* method);
// 0x44cee10

bool_conflict
ApplicationManagers_Api_AottgApiResult__get_Success
          (ApplicationManagers_Api_AottgApiResult_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._Success_k__BackingField);
}


// ApplicationManagers.Api.AottgApiResult$$set_Success
// il2cpp: void ApplicationManagers_Api_AottgApiResult__set_Success (ApplicationManagers_Api_AottgApiResult_o* __this, bool value, const MethodInfo* method);
// 0x44cee20

void ApplicationManagers_Api_AottgApiResult__set_Success
               (ApplicationManagers_Api_AottgApiResult_o *__this,bool_conflict value,MethodInfo *method)

{
  *(char *)&(__this->fields)._Success_k__BackingField = (char)value;
  return;
}


// ApplicationManagers.Api.AottgApiResult$$get_StatusCode
// il2cpp: int64_t ApplicationManagers_Api_AottgApiResult__get_StatusCode (ApplicationManagers_Api_AottgApiResult_o* __this, const MethodInfo* method);
// 0x44cee30

int64_t ApplicationManagers_Api_AottgApiResult__get_StatusCode
                  (ApplicationManagers_Api_AottgApiResult_o *__this,MethodInfo *method)

{
  return (__this->fields)._StatusCode_k__BackingField;
}


// ApplicationManagers.Api.AottgApiResult$$set_StatusCode
// il2cpp: void ApplicationManagers_Api_AottgApiResult__set_StatusCode (ApplicationManagers_Api_AottgApiResult_o* __this, int64_t value, const MethodInfo* method);
// 0x44cee40

void ApplicationManagers_Api_AottgApiResult__set_StatusCode
               (ApplicationManagers_Api_AottgApiResult_o *__this,int64_t value,MethodInfo *method)

{
  (__this->fields)._StatusCode_k__BackingField = value;
  return;
}


// ApplicationManagers.Api.AottgApiResult$$get_ResponseText
// il2cpp: System_String_o* ApplicationManagers_Api_AottgApiResult__get_ResponseText (ApplicationManagers_Api_AottgApiResult_o* __this, const MethodInfo* method);
// 0x44cee50

System_String_o *
ApplicationManagers_Api_AottgApiResult__get_ResponseText
          (ApplicationManagers_Api_AottgApiResult_o *__this,MethodInfo *method)

{
  return (__this->fields)._ResponseText_k__BackingField;
}


// ApplicationManagers.Api.AottgApiResult$$set_ResponseText
// il2cpp: void ApplicationManagers_Api_AottgApiResult__set_ResponseText (ApplicationManagers_Api_AottgApiResult_o* __this, System_String_o* value, const MethodInfo* method);
// 0x44cee60

void ApplicationManagers_Api_AottgApiResult__set_ResponseText
               (ApplicationManagers_Api_AottgApiResult_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields)._ResponseText_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._ResponseText_k__BackingField);
  return;
}


// ApplicationManagers.Api.AottgApiResult$$get_Json
// il2cpp: SimpleJSONFixed_JSONNode_o* ApplicationManagers_Api_AottgApiResult__get_Json (ApplicationManagers_Api_AottgApiResult_o* __this, const MethodInfo* method);
// 0x44cee70

SimpleJSONFixed_JSONNode_o *
ApplicationManagers_Api_AottgApiResult__get_Json
          (ApplicationManagers_Api_AottgApiResult_o *__this,MethodInfo *method)

{
  return (__this->fields)._Json_k__BackingField;
}


// ApplicationManagers.Api.AottgApiResult$$set_Json
// il2cpp: void ApplicationManagers_Api_AottgApiResult__set_Json (ApplicationManagers_Api_AottgApiResult_o* __this, SimpleJSONFixed_JSONNode_o* value, const MethodInfo* method);
// 0x44cee80

void ApplicationManagers_Api_AottgApiResult__set_Json
               (ApplicationManagers_Api_AottgApiResult_o *__this,SimpleJSONFixed_JSONNode_o *value,
               MethodInfo *method)

{
  (__this->fields)._Json_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Json_k__BackingField);
  return;
}


// ApplicationManagers.Api.AottgApiResult$$get_Error
// il2cpp: System_String_o* ApplicationManagers_Api_AottgApiResult__get_Error (ApplicationManagers_Api_AottgApiResult_o* __this, const MethodInfo* method);
// 0x44cee90

System_String_o *
ApplicationManagers_Api_AottgApiResult__get_Error
          (ApplicationManagers_Api_AottgApiResult_o *__this,MethodInfo *method)

{
  return (__this->fields)._Error_k__BackingField;
}


// ApplicationManagers.Api.AottgApiResult$$set_Error
// il2cpp: void ApplicationManagers_Api_AottgApiResult__set_Error (ApplicationManagers_Api_AottgApiResult_o* __this, System_String_o* value, const MethodInfo* method);
// 0x44ceea0

void ApplicationManagers_Api_AottgApiResult__set_Error
               (ApplicationManagers_Api_AottgApiResult_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields)._Error_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Error_k__BackingField);
  return;
}


// ApplicationManagers.Api.AottgApiResult$$get_RawError
// il2cpp: System_String_o* ApplicationManagers_Api_AottgApiResult__get_RawError (ApplicationManagers_Api_AottgApiResult_o* __this, const MethodInfo* method);
// 0x44ceeb0

System_String_o *
ApplicationManagers_Api_AottgApiResult__get_RawError
          (ApplicationManagers_Api_AottgApiResult_o *__this,MethodInfo *method)

{
  return (__this->fields)._RawError_k__BackingField;
}


// ApplicationManagers.Api.AottgApiResult$$set_RawError
// il2cpp: void ApplicationManagers_Api_AottgApiResult__set_RawError (ApplicationManagers_Api_AottgApiResult_o* __this, System_String_o* value, const MethodInfo* method);
// 0x44ceec0

void ApplicationManagers_Api_AottgApiResult__set_RawError
               (ApplicationManagers_Api_AottgApiResult_o *__this,System_String_o *value,MethodInfo *method)

{
  (__this->fields)._RawError_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._RawError_k__BackingField);
  return;
}


// ApplicationManagers.Api.AottgApiResult$$get_IsCanceled
// il2cpp: bool ApplicationManagers_Api_AottgApiResult__get_IsCanceled (ApplicationManagers_Api_AottgApiResult_o* __this, const MethodInfo* method);
// 0x44ceed0

bool_conflict
ApplicationManagers_Api_AottgApiResult__get_IsCanceled
          (ApplicationManagers_Api_AottgApiResult_o *__this,MethodInfo *method)

{
  undefined4 in_EAX;
  
  return CONCAT31((int3)((uint)in_EAX >> 8),(char)(__this->fields)._IsCanceled_k__BackingField);
}


// ApplicationManagers.Api.AottgApiResult$$set_IsCanceled
// il2cpp: void ApplicationManagers_Api_AottgApiResult__set_IsCanceled (ApplicationManagers_Api_AottgApiResult_o* __this, bool value, const MethodInfo* method);
// 0x44ceee0

void ApplicationManagers_Api_AottgApiResult__set_IsCanceled
               (ApplicationManagers_Api_AottgApiResult_o *__this,bool_conflict value,MethodInfo *method)

{
  *(char *)&(__this->fields)._IsCanceled_k__BackingField = (char)value;
  return;
}


// ApplicationManagers.Api.AottgApiResult$$Ok
// il2cpp: ApplicationManagers_Api_AottgApiResult_o* ApplicationManagers_Api_AottgApiResult__Ok (int64_t statusCode, System_String_o* responseText, SimpleJSONFixed_JSONNode_o* json, const MethodInfo* method);
// 0x44ce2c0

ApplicationManagers_Api_AottgApiResult_o *
ApplicationManagers_Api_AottgApiResult__Ok
          (int64_t statusCode,System_String_o *responseText,SimpleJSONFixed_JSONNode_o *json,
          MethodInfo *method)

{
  uint16_t uVar1;
  bool_conflict bVar2;
  ApplicationManagers_Api_AottgApiResult_o *__this;
  System_String_o *a;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  ApplicationManagers_Api_AottgApiResult_o *pAVar5;
  MethodInfo *pMVar7;
  System_String_o *pSStack_58;
  undefined8 uStack_50;
  ApplicationManagers_Api_AottgApiResult_o *pAStack_48;
  int64_t iStack_40;
  SimpleJSONFixed_JSONNode_o *pSStack_38;
  System_String_o *pSStack_30;
  SimpleJSONFixed_JSONNode_c *pSVar6;
  
  if (g_data_057aeb17 == '\0') {
    pSStack_30 = (System_String_o *)0x44ce2e6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgApiResult);
    g_data_057aeb17 = '\x01';
  }
  pSStack_30 = (System_String_o *)0x44ce2fc;
  __this = (ApplicationManagers_Api_AottgApiResult_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgApiResult);
  pSVar4 = (System_String_o *)0x0;
  pSStack_30 = (System_String_o *)0x44ce309;
  pAVar5 = __this;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
    *(undefined1 *)&(__this->fields)._Success_k__BackingField = 1;
    (__this->fields)._StatusCode_k__BackingField = statusCode;
    if (responseText == (System_String_o *)0x0) {
      responseText = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    (__this->fields)._ResponseText_k__BackingField = responseText;
    pSStack_30 = (System_String_o *)0x44ce343;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._ResponseText_k__BackingField,responseText);
    (__this->fields)._Json_k__BackingField = json;
    pSStack_30 = (System_String_o *)0x44ce356;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._Json_k__BackingField,json);
    return __this;
  }
  pSStack_30 = (System_String_o *)0x44ce36a;
  uStack_50 = il2cpp_runtime_helper_022b2c90();
  pAStack_48 = __this;
  iStack_40 = statusCode;
  pSStack_38 = json;
  pSStack_30 = responseText;
  if (g_data_057aeb11 == '\0') {
    pSStack_58 = (System_String_o *)0x44ce393;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeb11 = '\x01';
  }
  uStack_50 = uStack_50 & 0xffffffffffff;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pSStack_58 = (System_String_o *)0x44ce3ba;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_58 = (System_String_o *)0x44ce3c8;
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)pAVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return (ApplicationManagers_Api_AottgApiResult_o *)0x0;
  }
  pSStack_58 = (System_String_o *)0x44ce3dc;
  pSVar3 = pSVar4;
  bVar2 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return (ApplicationManagers_Api_AottgApiResult_o *)0x0;
  }
  if (pAVar5 != (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
    pSStack_58 = (System_String_o *)0x44ce403;
    a = (System_String_o *)
        (*((Il2CppClass *)pAVar5->klass)->vtable[7].methodPtr)
                  (pAVar5,pSVar4,((Il2CppClass *)pAVar5->klass)->vtable[7].method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_58 = (System_String_o *)0x44ce418;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_58 = (System_String_o *)0x44ce424;
    pSVar3 = a;
    bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (a == (System_String_o *)0x0) goto label_044ce55c;
      pSStack_58 = (System_String_o *)0x44ce444;
      pSVar3 = (System_String_o *)
               (*(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._9_get_Value.methodPtr)(a);
      pSStack_58 = (System_String_o *)0x44ce44e;
      bVar2 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        pSVar6 = (SimpleJSONFixed_JSONNode_c *)a->klass;
        pMVar7 = (pSVar6->vtable)._9_get_Value.method;
        goto label_044ce544;
      }
    }
    if (pSVar4 != (System_String_o *)0x0) {
      pSStack_58 = (System_String_o *)0x44ce46b;
      uVar1 = System_String__get_Chars(pSVar4,0,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        pSStack_58 = (System_String_o *)0x44ce489;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_58 = (System_String_o *)0x44ce493;
      uVar1 = System_Char__ToUpperInvariant(uVar1,(MethodInfo *)0x0);
      uStack_50 = CONCAT26(uVar1,(undefined6)uStack_50);
      pSStack_58 = (System_String_o *)0x44ce4a4;
      pSVar3 = System_Char__ToString((short)&uStack_50 + 6,(MethodInfo *)0x0);
      pSStack_58 = (System_String_o *)0x44ce4b6;
      pSVar4 = System_String__Substring(pSVar4,1,(MethodInfo *)0x0);
      pSStack_58 = (System_String_o *)0x44ce4c3;
      pSVar4 = System_String__Concat_3ae5ba0(pSVar3,pSVar4,(MethodInfo *)0x0);
      pSStack_58 = (System_String_o *)0x44ce4d9;
      a = (System_String_o *)
          (*((Il2CppClass *)pAVar5->klass)->vtable[7].methodPtr)
                    (pAVar5,pSVar4,((Il2CppClass *)pAVar5->klass)->vtable[7].method);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        pSStack_58 = (System_String_o *)0x44ce4ee;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_58 = (System_String_o *)0x44ce4fc;
      pSVar3 = a;
      bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                        ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return (ApplicationManagers_Api_AottgApiResult_o *)0x0;
      }
      if (a != (System_String_o *)0x0) {
        pSStack_58 = (System_String_o *)0x44ce518;
        pSVar4 = (System_String_o *)(*(a->klass->vtable)._9_GetTypeCode.methodPtr)(a);
        pSStack_58 = (System_String_o *)0x44ce524;
        bVar2 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          return (ApplicationManagers_Api_AottgApiResult_o *)0x0;
        }
        pSVar6 = (SimpleJSONFixed_JSONNode_c *)a->klass;
        pMVar7 = (pSVar6->vtable)._9_get_Value.method;
label_044ce544:
        pSStack_58 = (System_String_o *)0x44ce54a;
        pAVar5 = (ApplicationManagers_Api_AottgApiResult_o *)
                 (*(pSVar6->vtable)._9_get_Value.methodPtr)(a,pMVar7);
        return pAVar5;
      }
    }
  }
label_044ce55c:
  pSStack_58 = (System_String_o *)0x44ce561;
  il2cpp_runtime_helper_022b2c90();
  pSStack_58 = pSVar3;
  if (g_data_057aeb15 == '\0') {
    il2cpp_runtime_helper_023445d0(&"http_");
    g_data_057aeb15 = '\x01';
  }
  pSVar4 = System_Int64__ToString((int64_t)&pSStack_58,(MethodInfo *)0x0);
  pAVar5 = (ApplicationManagers_Api_AottgApiResult_o *)
           System_String__Concat_3ae5ba0(_DAT_055de1b0,pSVar4,(MethodInfo *)0x0);
  return pAVar5;
}


// ApplicationManagers.Api.AottgApiResult$$Fail
// il2cpp: ApplicationManagers_Api_AottgApiResult_o* ApplicationManagers_Api_AottgApiResult__Fail (int64_t statusCode, System_String_o* responseText, System_String_o* error, System_String_o* rawError, bool isCanceled, const MethodInfo* method);
// 0x44ce1f0

ApplicationManagers_Api_AottgApiResult_o *
ApplicationManagers_Api_AottgApiResult__Fail
          (int64_t statusCode,System_String_o *responseText,System_String_o *error,System_String_o *rawError,
          bool_conflict isCanceled,MethodInfo *method)

{
  uint16_t uVar1;
  bool_conflict bVar2;
  ApplicationManagers_Api_AottgApiResult_o *pAVar3;
  ApplicationManagers_Api_AottgApiResult_o *__this;
  System_String_o *a;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  ApplicationManagers_Api_AottgApiResult_o *pAVar6;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  MethodInfo *pMVar9;
  undefined1 auVar10 [16];
  System_String_o *pSStack_90;
  undefined8 uStack_88;
  ApplicationManagers_Api_AottgApiResult_o *pAStack_80;
  ApplicationManagers_Api_AottgApiResult_o *pAStack_78;
  SimpleJSONFixed_JSONNode_o *pSStack_70;
  System_String_o *pSStack_68;
  undefined8 uStack_60;
  ApplicationManagers_Api_AottgApiResult_o *pAStack_58;
  System_String_o *pSStack_50;
  ulong uStack_48;
  System_String_o *pSStack_40;
  SimpleJSONFixed_JSONNode_c *pSVar7;
  
  if (g_data_057aeb18 == '\0') {
    pSStack_40 = (System_String_o *)0x44ce21f;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgApiResult);
    g_data_057aeb18 = '\x01';
  }
  pSStack_40 = (System_String_o *)0x44ce235;
  pAVar3 = (ApplicationManagers_Api_AottgApiResult_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgApiResult);
  pSVar4 = (System_String_o *)0x0;
  pSStack_40 = (System_String_o *)0x44ce242;
  pAVar6 = pAVar3;
  System_Object___ctor((Il2CppObject *)pAVar3,(MethodInfo *)0x0);
  if (pAVar3 != (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
    *(undefined1 *)&(pAVar3->fields)._Success_k__BackingField = 0;
    (pAVar3->fields)._StatusCode_k__BackingField = statusCode;
    if (responseText == (System_String_o *)0x0) {
      responseText = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    (pAVar3->fields)._ResponseText_k__BackingField = responseText;
    pSStack_40 = (System_String_o *)0x44ce27c;
    il2cpp_runtime_helper_022b4080(&(pAVar3->fields)._ResponseText_k__BackingField,responseText);
    (pAVar3->fields)._Error_k__BackingField = error;
    pSStack_40 = (System_String_o *)0x44ce28c;
    il2cpp_runtime_helper_022b4080(&(pAVar3->fields)._Error_k__BackingField,error);
    (pAVar3->fields)._RawError_k__BackingField = rawError;
    pSStack_40 = (System_String_o *)0x44ce29f;
    il2cpp_runtime_helper_022b4080(&(pAVar3->fields)._RawError_k__BackingField,rawError);
    *(char *)&(pAVar3->fields)._IsCanceled_k__BackingField = (char)isCanceled;
    return pAVar3;
  }
  pSStack_40 = (System_String_o *)0x44ce2ba;
  auVar10 = il2cpp_runtime_helper_022b2c90();
  pSVar8 = auVar10._8_8_;
  uStack_60 = auVar10._0_8_;
  pAStack_58 = pAVar3;
  pSStack_50 = error;
  uStack_48 = (ulong)(uint)isCanceled;
  pSStack_40 = rawError;
  if (g_data_057aeb17 == '\0') {
    pSStack_68 = (System_String_o *)0x44ce2e6;
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgApiResult);
    g_data_057aeb17 = '\x01';
  }
  pSStack_68 = (System_String_o *)0x44ce2fc;
  __this = (ApplicationManagers_Api_AottgApiResult_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgApiResult);
  pSVar5 = (System_String_o *)0x0;
  pSStack_68 = (System_String_o *)0x44ce309;
  pAVar3 = __this;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
    *(undefined1 *)&(__this->fields)._Success_k__BackingField = 1;
    (__this->fields)._StatusCode_k__BackingField = (int64_t)pAVar6;
    if (pSVar4 == (System_String_o *)0x0) {
      pSVar4 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    }
    (__this->fields)._ResponseText_k__BackingField = pSVar4;
    pSStack_68 = (System_String_o *)0x44ce343;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._ResponseText_k__BackingField,pSVar4);
    (__this->fields)._Json_k__BackingField = pSVar8;
    pSStack_68 = (System_String_o *)0x44ce356;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._Json_k__BackingField,pSVar8);
    return __this;
  }
  pSStack_68 = (System_String_o *)0x44ce36a;
  uStack_88 = il2cpp_runtime_helper_022b2c90();
  pAStack_80 = __this;
  pAStack_78 = pAVar6;
  pSStack_70 = pSVar8;
  pSStack_68 = pSVar4;
  if (g_data_057aeb11 == '\0') {
    pSStack_90 = (System_String_o *)0x44ce393;
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    g_data_057aeb11 = '\x01';
  }
  uStack_88 = uStack_88 & 0xffffffffffff;
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    pSStack_90 = (System_String_o *)0x44ce3ba;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_90 = (System_String_o *)0x44ce3c8;
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality
                    ((SimpleJSONFixed_JSONNode_o *)pAVar3,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return (ApplicationManagers_Api_AottgApiResult_o *)0x0;
  }
  pSStack_90 = (System_String_o *)0x44ce3dc;
  pSVar4 = pSVar5;
  bVar2 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return (ApplicationManagers_Api_AottgApiResult_o *)0x0;
  }
  if (pAVar3 != (ApplicationManagers_Api_AottgApiResult_o *)0x0) {
    pSStack_90 = (System_String_o *)0x44ce403;
    a = (System_String_o *)
        (*((Il2CppClass *)pAVar3->klass)->vtable[7].methodPtr)
                  (pAVar3,pSVar5,((Il2CppClass *)pAVar3->klass)->vtable[7].method);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      pSStack_90 = (System_String_o *)0x44ce418;
      il2cpp_runtime_helper_02337ed0();
    }
    pSStack_90 = (System_String_o *)0x44ce424;
    pSVar4 = a;
    bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') {
      if (a == (System_String_o *)0x0) goto label_044ce55c;
      pSStack_90 = (System_String_o *)0x44ce444;
      pSVar4 = (System_String_o *)
               (*(((SimpleJSONFixed_JSONNode_c *)a->klass)->vtable)._9_get_Value.methodPtr)(a);
      pSStack_90 = (System_String_o *)0x44ce44e;
      bVar2 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        pSVar7 = (SimpleJSONFixed_JSONNode_c *)a->klass;
        pMVar9 = (pSVar7->vtable)._9_get_Value.method;
        goto label_044ce544;
      }
    }
    if (pSVar5 != (System_String_o *)0x0) {
      pSStack_90 = (System_String_o *)0x44ce46b;
      uVar1 = System_String__get_Chars(pSVar5,0,(MethodInfo *)0x0);
      if (*(int *)(g_data_057b9bf8 + 0xe4) == 0) {
        pSStack_90 = (System_String_o *)0x44ce489;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_90 = (System_String_o *)0x44ce493;
      uVar1 = System_Char__ToUpperInvariant(uVar1,(MethodInfo *)0x0);
      uStack_88 = CONCAT26(uVar1,(undefined6)uStack_88);
      pSStack_90 = (System_String_o *)0x44ce4a4;
      pSVar4 = System_Char__ToString((short)&uStack_88 + 6,(MethodInfo *)0x0);
      pSStack_90 = (System_String_o *)0x44ce4b6;
      pSVar5 = System_String__Substring(pSVar5,1,(MethodInfo *)0x0);
      pSStack_90 = (System_String_o *)0x44ce4c3;
      pSVar4 = System_String__Concat_3ae5ba0(pSVar4,pSVar5,(MethodInfo *)0x0);
      pSStack_90 = (System_String_o *)0x44ce4d9;
      a = (System_String_o *)
          (*((Il2CppClass *)pAVar3->klass)->vtable[7].methodPtr)
                    (pAVar3,pSVar4,((Il2CppClass *)pAVar3->klass)->vtable[7].method);
      if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
        pSStack_90 = (System_String_o *)0x44ce4ee;
        il2cpp_runtime_helper_02337ed0();
      }
      pSStack_90 = (System_String_o *)0x44ce4fc;
      pSVar4 = a;
      bVar2 = SimpleJSONFixed_JSONNode__op_Inequality
                        ((SimpleJSONFixed_JSONNode_o *)a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        return (ApplicationManagers_Api_AottgApiResult_o *)0x0;
      }
      if (a != (System_String_o *)0x0) {
        pSStack_90 = (System_String_o *)0x44ce518;
        pSVar4 = (System_String_o *)(*(a->klass->vtable)._9_GetTypeCode.methodPtr)(a);
        pSStack_90 = (System_String_o *)0x44ce524;
        bVar2 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
        if ((char)bVar2 != '\0') {
          return (ApplicationManagers_Api_AottgApiResult_o *)0x0;
        }
        pSVar7 = (SimpleJSONFixed_JSONNode_c *)a->klass;
        pMVar9 = (pSVar7->vtable)._9_get_Value.method;
label_044ce544:
        pSStack_90 = (System_String_o *)0x44ce54a;
        pAVar6 = (ApplicationManagers_Api_AottgApiResult_o *)
                 (*(pSVar7->vtable)._9_get_Value.methodPtr)(a,pMVar9);
        return pAVar6;
      }
    }
  }
label_044ce55c:
  pSStack_90 = (System_String_o *)0x44ce561;
  il2cpp_runtime_helper_022b2c90();
  pSStack_90 = pSVar4;
  if (g_data_057aeb15 == '\0') {
    il2cpp_runtime_helper_023445d0(&"http_");
    g_data_057aeb15 = '\x01';
  }
  pSVar4 = System_Int64__ToString((int64_t)&pSStack_90,(MethodInfo *)0x0);
  pAVar6 = (ApplicationManagers_Api_AottgApiResult_o *)
           System_String__Concat_3ae5ba0(_DAT_055de1b0,pSVar4,(MethodInfo *)0x0);
  return pAVar6;
}


// ApplicationManagers.Api.AottgApiResult$$.ctor
// il2cpp: void ApplicationManagers_Api_AottgApiResult___ctor (ApplicationManagers_Api_AottgApiResult_o* __this, const MethodInfo* method);
// 0x44ceef0

void ApplicationManagers_Api_AottgApiResult___ctor
               (ApplicationManagers_Api_AottgApiResult_o *__this,MethodInfo *method)

{
  return;
}


