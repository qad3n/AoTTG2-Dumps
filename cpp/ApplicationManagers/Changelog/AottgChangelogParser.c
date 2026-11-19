// Type: ApplicationManagers.Changelog.AottgChangelogParser
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Changelog/AottgChangelogParser.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Changelog.AottgChangelogParser.Parser<object>$$.ctor
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogParser_Parser_object____ctor (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o* __this, Il2CppObject* object, intptr_t method, const MethodInfo_3DB9310* method);
// 0x3eb9310

void ApplicationManagers_Changelog_AottgChangelogParser_Parser_object____ctor
               (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *__this,Il2CppObject *object,
               intptr_t method,MethodInfo_3DB9310 *methodInfo)

{
  char cVar1;
  char cVar2;
  Il2CppObject *ex;
  
  (__this->fields).method_ptr = *(intptr_t *)(method + 8);
  (__this->fields).method = method;
  (__this->fields).m_target = object;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_target);
  cVar2 = *(char *)(method + 0x52);
  (__this->fields).method_code = (intptr_t)__this;
  cVar1 = il2cpp_runtime_helper_030d61c0();
  if (cVar1 == '\0') {
    if (cVar2 == '\x01') {
      if ((__this->fields).method_is_virtual == false) {
        (__this->fields).invoke_impl = (intptr_t)&label_02b64770;
      }
      else {
        cVar2 = il2cpp_runtime_helper_03143050(method);
        cVar1 = il2cpp_runtime_helper_030d68e0(method);
        if (cVar2 == '\0') {
          if (cVar1 == '\0') {
            (__this->fields).invoke_impl = (intptr_t)&label_02b647a0;
          }
          else {
            (__this->fields).invoke_impl = (intptr_t)&label_02b647e0;
          }
        }
        else if (cVar1 == '\0') {
          (__this->fields).invoke_impl = (intptr_t)&label_02b64870;
        }
        else {
          (__this->fields).invoke_impl = (intptr_t)il2cpp_runtime_helper_02b648c0;
        }
      }
      goto label_03eb93aa;
    }
    if (object == (Il2CppObject *)0x0) {
      ex = il2cpp_codegen_get_argument_exception
                     ((char *)0x0,"Delegate to an instance method cannot have null \'this\'.");
      il2cpp_codegen_raise_exception(ex,(MethodInfo *)0x0);
    }
  }
  else if (cVar2 == '\x02') {
    (__this->fields).invoke_impl = (intptr_t)&label_02b64790;
    goto label_03eb93aa;
  }
  (__this->fields).invoke_impl = (__this->fields).method_ptr;
  (__this->fields).method_code = (intptr_t)(__this->fields).m_target;
label_03eb93aa:
  (__this->fields).extra_arg = (intptr_t)il2cpp_runtime_helper_02b64720;
  return;
}


// ApplicationManagers.Changelog.AottgChangelogParser.Parser<object>$$Invoke
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser_Parser_object___Invoke (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o* __this, SimpleJSONFixed_JSONNode_o* node, Il2CppObject** value, const MethodInfo_3DB9410* method);
// 0x3eb9410

bool ApplicationManagers_Changelog_AottgChangelogParser_Parser_object___Invoke
               (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *__this,
               SimpleJSONFixed_JSONNode_o *node,Il2CppObject **value,MethodInfo_3DB9410 *method)

{
  code *vtableDispatch;
  undefined1 uVar1;
  
  vtableDispatch = (code *)(__this->fields).invoke_impl;
  uVar1 = (*vtableDispatch)
                    ((__this->fields).method_code,node,value,(__this->fields).method,vtableDispatch);
  return (bool)uVar1;
}


// ApplicationManagers.Changelog.AottgChangelogParser.Parser<object>$$BeginInvoke
// il2cpp: System_IAsyncResult_o* ApplicationManagers_Changelog_AottgChangelogParser_Parser_object___BeginInvoke (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o* __this, SimpleJSONFixed_JSONNode_o* node, Il2CppObject** value, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo_3DB9430* method);
// 0x3eb9430

System_IAsyncResult_o *
ApplicationManagers_Changelog_AottgChangelogParser_Parser_object___BeginInvoke
          (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *__this,
          SimpleJSONFixed_JSONNode_o *node,Il2CppObject **value,System_AsyncCallback_o *callback,
          Il2CppObject *object,MethodInfo_3DB9430 *method)

{
  System_IAsyncResult_o *pSVar1;
  SimpleJSONFixed_JSONNode_o *local_18;
  Il2CppObject *local_10;
  undefined8 local_8;
  
  local_8 = 0;
  local_10 = *value;
  local_18 = node;
  pSVar1 = (System_IAsyncResult_o *)il2cpp_runtime_helper_031591c0(__this,&local_18,callback,object);
  return pSVar1;
}


// ApplicationManagers.Changelog.AottgChangelogParser.Parser<object>$$EndInvoke
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser_Parser_object___EndInvoke (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o* __this, Il2CppObject** value, System_IAsyncResult_o* result, const MethodInfo_3DB9460* method);
// 0x3eb9460

bool ApplicationManagers_Changelog_AottgChangelogParser_Parser_object___EndInvoke
               (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *__this,Il2CppObject **value,
               System_IAsyncResult_o *result,MethodInfo_3DB9460 *method)

{
  Il2CppObject *obj;
  undefined1 *puVar1;
  Il2CppObject **ppIStack_8;
  
  ppIStack_8 = value;
  obj = (Il2CppObject *)il2cpp_runtime_helper_03159300(result,&ppIStack_8);
  if (obj == (Il2CppObject *)0x0) {
    ThrowNullReferenceException();
  }
  puVar1 = il2cpp_vm_Object_Unbox(obj);
  return (bool)*puVar1;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$TryParseLatestVersion
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__TryParseLatestVersion (System_String_o* json, ApplicationManagers_Changelog_LatestChangelogVersionResponse_o** version, System_String_o** error, const MethodInfo* method);
// 0x5e25170

bool ApplicationManagers_Changelog_AottgChangelogParser__TryParseLatestVersion
               (System_String_o *json,ApplicationManagers_Changelog_LatestChangelogVersionResponse_o **version
               ,System_String_o **error,MethodInfo *method)

{
  bool bVar1;
  ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *__this;
  
  if (Il2CppMethodInitialized_075484e3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParseLatestVersion);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParse_LatestChangelogVersionResponse
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&
               TypeInfo_ApplicationManagers_Changelog_AottgChangelogParser_Parser_LatestChangelogVersionResponse
              );
    Il2CppMethodInitialized_075484e3 = '\x01';
  }
  __this = (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_ApplicationManagers_Changelog_AottgChangelogParser_Parser_LatestChangelogVersionResponse
                     );
  ApplicationManagers_Changelog_AottgChangelogParser_Parser_object____ctor
            (__this,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParseLatestVersion,
             (MethodInfo_3DB9310 *)0x0);
  bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__TryParse_object_
                    (json,__this,(Il2CppObject **)version,error,
                     (MethodInfo_34878C0 *)
                     MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParse_LatestChangelogVersionResponse
                    );
  return bVar1;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$TryParseEntry
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__TryParseEntry (System_String_o* json, ApplicationManagers_Changelog_ChangelogEntryResponse_o** entry, System_String_o** error, const MethodInfo* method);
// 0x5e25210

bool ApplicationManagers_Changelog_AottgChangelogParser__TryParseEntry
               (System_String_o *json,ApplicationManagers_Changelog_ChangelogEntryResponse_o **entry,
               System_String_o **error,MethodInfo *method)

{
  bool bVar1;
  ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *__this;
  
  if (Il2CppMethodInitialized_075484e4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParseEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParse_ChangelogEntryResponse)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Changelog_AottgChangelogParser_Parser_ChangelogEntryResponse);
    Il2CppMethodInitialized_075484e4 = '\x01';
  }
  __this = (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_ApplicationManagers_Changelog_AottgChangelogParser_Parser_ChangelogEntryResponse
                     );
  ApplicationManagers_Changelog_AottgChangelogParser_Parser_object____ctor
            (__this,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParseEntry,
             (MethodInfo_3DB9310 *)0x0);
  bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__TryParse_object_
                    (json,__this,(Il2CppObject **)entry,error,
                     (MethodInfo_34878C0 *)
                     MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParse_ChangelogEntryResponse
                    );
  return bVar1;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$TryParseList
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__TryParseList (System_String_o* json, ApplicationManagers_Changelog_PublicChangelogListResponse_o** list, System_String_o** error, const MethodInfo* method);
// 0x5e252b0

bool ApplicationManagers_Changelog_AottgChangelogParser__TryParseList
               (System_String_o *json,ApplicationManagers_Changelog_PublicChangelogListResponse_o **list,
               System_String_o **error,MethodInfo *method)

{
  bool bVar1;
  ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *__this;
  
  if (Il2CppMethodInitialized_075484e5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParseList);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParse_PublicChangelogListResponse
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Changelog_AottgChangelogParser_Parser_PublicChangelogListResponse
              );
    Il2CppMethodInitialized_075484e5 = '\x01';
  }
  __this = (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_ApplicationManagers_Changelog_AottgChangelogParser_Parser_PublicChangelogListResponse
                     );
  ApplicationManagers_Changelog_AottgChangelogParser_Parser_object____ctor
            (__this,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParseList,
             (MethodInfo_3DB9310 *)0x0);
  bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__TryParse_object_
                    (json,__this,(Il2CppObject **)list,error,
                     (MethodInfo_34878C0 *)
                     MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParse_PublicChangelogListResponse
                    );
  return bVar1;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$TryParseLatestVersion
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__TryParseLatestVersion (SimpleJSONFixed_JSONNode_o* node, ApplicationManagers_Changelog_LatestChangelogVersionResponse_o** version, const MethodInfo* method);
// 0x5e25350

bool ApplicationManagers_Changelog_AottgChangelogParser__TryParseLatestVersion_5d25350
               (SimpleJSONFixed_JSONNode_o *node,
               ApplicationManagers_Changelog_LatestChangelogVersionResponse_o **version,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *publishedAt;
  System_String_o *contentHash;
  System_String_o *version_00;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *pAVar4;
  System_String_o **method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *in_stack_ffffffffffffff80;
  System_String_o *pSStack_78;
  System_String_o *pSStack_70;
  System_String_o *pSStack_68;
  System_String_o *pSStack_60;
  System_String_o *pSStack_58;
  System_String_o *pSStack_50;
  System_Guid_Fields SStack_48;
  
  if (Il2CppMethodInitialized_075484e6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Changelog_LatestChangelogVersionResponse);
    il2cpp_codegen_initialize_runtime_metadata(&"contentHash");
    il2cpp_codegen_initialize_runtime_metadata(&"id");
    il2cpp_codegen_initialize_runtime_metadata(&"publishedAt");
    il2cpp_codegen_initialize_runtime_metadata(&"version");
    il2cpp_codegen_initialize_runtime_metadata(&"hasChangelog");
    il2cpp_codegen_initialize_runtime_metadata(&"updatedAt");
    Il2CppMethodInitialized_075484e6 = '\x01';
  }
  pSStack_78 = (System_String_o *)0x0;
  pSStack_58 = (System_String_o *)0x0;
  pSStack_60 = (System_String_o *)0x0;
  pSStack_68 = (System_String_o *)0x0;
  pSStack_70 = (System_String_o *)0x0;
  *version = (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *)0x0;
  Il2CppCodeGenWriteBarrier(version);
  if (Il2CppMethodInitialized_075484ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075484ea = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return false;
  }
  if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_05e25732:
    ThrowNullReferenceException();
  }
  bVar2 = (*(node->klass->vtable)._17_get_IsObject.methodPtr)
                    (node,(node->klass->vtable)._17_get_IsObject.method);
  if ((bVar2) &&
     (bVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                        (node,"hasChangelog",(node->klass->vtable)._28_HasKey.method), bVar2)) {
    pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                       (node,"hasChangelog",(node->klass->vtable)._7_get_Item.method);
    if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05e25732;
    bVar2 = (*(pSVar3->klass->vtable)._14_get_IsBoolean.methodPtr)
                      (pSVar3,(pSVar3->klass->vtable)._14_get_IsBoolean.method);
    if (bVar2) {
      pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,"hasChangelog",(node->klass->vtable)._7_get_Item.method);
      if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05e25732;
      bVar2 = (*(pSVar3->klass->vtable)._39_get_AsBool.methodPtr)
                        (pSVar3,(pSVar3->klass->vtable)._39_get_AsBool.method);
      pSVar1 = "id";
      method_00 = &"id";
      if (bVar2) {
        SStack_48._a = 0;
        SStack_48._b = 0;
        SStack_48._c = 0;
        SStack_48._d = 0;
        SStack_48._e = 0;
        SStack_48._f = 0;
        SStack_48._g = 0;
        SStack_48._h = 0;
        SStack_48._i = 0;
        SStack_48._j = 0;
        SStack_48._k = 0;
        bVar2 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                          (node,"id",&pSStack_78,(MethodInfo *)&"id");
        if (bVar2) {
          bVar2 = System_Guid__TryParse(pSStack_78,(System_Guid_o *)&SStack_48,(MethodInfo *)0x0);
          if (!bVar2) {
            return false;
          }
          bVar2 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                            (node,"version",&pSStack_58,(MethodInfo *)method_00);
          if (((bVar2) &&
              (bVar2 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                                 (node,"contentHash",&pSStack_60,(MethodInfo *)method_00), bVar2)) &&
             ((bVar2 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                                 (node,"publishedAt",&pSStack_68,(MethodInfo *)method_00), bVar2 &&
              (bVar2 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                                 (node,"updatedAt",&pSStack_70,(MethodInfo *)method_00),
              version_00 = pSStack_58, contentHash = pSStack_60, publishedAt = pSStack_68, pSVar1 = pSStack_70
              , bVar2)))) {
            pSStack_50 = pSStack_78;
            pAVar4 = il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_ApplicationManagers_Changelog_LatestChangelogVersionResponse);
            ApplicationManagers_Changelog_LatestChangelogVersionResponse___ctor
                      (pAVar4,true,pSStack_50,version_00,contentHash,publishedAt,pSVar1,
                       in_stack_ffffffffffffff80);
            *version = pAVar4;
label_05e25716:
            Il2CppCodeGenWriteBarrier(version);
            return true;
          }
        }
      }
      else {
        bVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                          (node,"id",(node->klass->vtable)._28_HasKey.method);
        if (bVar2) {
          pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                             (node,pSVar1,(node->klass->vtable)._7_get_Item.method);
          if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05e25732;
          bVar2 = (*(pSVar3->klass->vtable)._15_get_IsNull.methodPtr)
                            (pSVar3,(pSVar3->klass->vtable)._15_get_IsNull.method);
          if ((((bVar2) &&
               (bVar2 = ApplicationManagers_Changelog_AottgChangelogParser__IsNull
                                  (node,"version",method_01), bVar2)) &&
              (bVar2 = ApplicationManagers_Changelog_AottgChangelogParser__IsNull
                                 (node,"contentHash",method_02), bVar2)) &&
             ((bVar2 = ApplicationManagers_Changelog_AottgChangelogParser__IsNull
                                 (node,"publishedAt",method_03), bVar2 &&
              (bVar2 = ApplicationManagers_Changelog_AottgChangelogParser__IsNull
                                 (node,"updatedAt",method_04), bVar2)))) {
            pAVar4 = il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_ApplicationManagers_Changelog_LatestChangelogVersionResponse);
            ApplicationManagers_Changelog_LatestChangelogVersionResponse___ctor
                      (pAVar4,false,(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,in_stack_ffffffffffffff80);
            *version = pAVar4;
            goto label_05e25716;
          }
        }
      }
    }
  }
  return false;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$TryParseEntry
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__TryParseEntry (SimpleJSONFixed_JSONNode_o* node, ApplicationManagers_Changelog_ChangelogEntryResponse_o** entry, const MethodInfo* method);
// 0x5e25950

bool ApplicationManagers_Changelog_AottgChangelogParser__TryParseEntry_5d25950
               (SimpleJSONFixed_JSONNode_o *node,
               ApplicationManagers_Changelog_ChangelogEntryResponse_o **entry,MethodInfo *method)

{
  System_String_o *updatedAt;
  System_String_o *publishedAt;
  System_String_o *contentHash;
  System_String_o *contentMarkdown;
  bool bVar1;
  ApplicationManagers_Changelog_ChangelogEntryResponse_o *__this;
  MethodInfo *in_RCX;
  MethodInfo *in_stack_ffffffffffffff58;
  System_String_o *pSStack_98;
  System_String_o *pSStack_90;
  System_String_o *pSStack_88;
  System_String_o *pSStack_80;
  System_String_o *pSStack_78;
  System_String_o *pSStack_70;
  System_String_o *pSStack_68;
  System_String_o *pSStack_60;
  System_String_o *pSStack_58;
  System_String_o *pSStack_50;
  System_Guid_Fields SStack_48;
  
  if (Il2CppMethodInitialized_075484e7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Changelog_ChangelogEntryResponse)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"contentHash");
    il2cpp_codegen_initialize_runtime_metadata(&"contentMarkdown");
    il2cpp_codegen_initialize_runtime_metadata(&"id");
    il2cpp_codegen_initialize_runtime_metadata(&"createdAt");
    il2cpp_codegen_initialize_runtime_metadata(&"publishedAt");
    il2cpp_codegen_initialize_runtime_metadata(&"version");
    il2cpp_codegen_initialize_runtime_metadata(&"updatedAt");
    Il2CppMethodInitialized_075484e7 = '\x01';
  }
  pSStack_98 = (System_String_o *)0x0;
  pSStack_68 = (System_String_o *)0x0;
  pSStack_70 = (System_String_o *)0x0;
  pSStack_78 = (System_String_o *)0x0;
  pSStack_80 = (System_String_o *)0x0;
  pSStack_88 = (System_String_o *)0x0;
  pSStack_90 = (System_String_o *)0x0;
  *entry = (ApplicationManagers_Changelog_ChangelogEntryResponse_o *)0x0;
  Il2CppCodeGenWriteBarrier(entry);
  if (Il2CppMethodInitialized_075484ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075484ea = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (*(node->klass->vtable)._17_get_IsObject.methodPtr)
                      (node,(node->klass->vtable)._17_get_IsObject.method);
    if (bVar1) {
      SStack_48._a = 0;
      SStack_48._b = 0;
      SStack_48._c = 0;
      SStack_48._d = 0;
      SStack_48._e = 0;
      SStack_48._f = 0;
      SStack_48._g = 0;
      SStack_48._h = 0;
      SStack_48._i = 0;
      SStack_48._j = 0;
      SStack_48._k = 0;
      bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                        (node,"id",&pSStack_98,in_RCX);
      if (bVar1) {
        bVar1 = System_Guid__TryParse(pSStack_98,(System_Guid_o *)&SStack_48,(MethodInfo *)0x0);
        if (!bVar1) {
          return false;
        }
        bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                          (node,"version",&pSStack_68,in_RCX);
        if ((((bVar1) &&
             (bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                                (node,"contentMarkdown",&pSStack_70,in_RCX), bVar1)) &&
            (bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                               (node,"contentHash",&pSStack_78,in_RCX), bVar1)) &&
           (((bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__ReadNullableString
                                (node,"publishedAt",&pSStack_80,in_RCX), bVar1 &&
             (bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                                (node,"createdAt",&pSStack_88,in_RCX), bVar1)) &&
            (bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                               (node,"updatedAt",&pSStack_90,in_RCX), contentMarkdown = pSStack_70,
            contentHash = pSStack_78, publishedAt = pSStack_80, updatedAt = pSStack_90, bVar1)))) {
          pSStack_58 = pSStack_98;
          pSStack_60 = pSStack_68;
          pSStack_50 = pSStack_88;
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_ChangelogEntryResponse);
          ApplicationManagers_Changelog_ChangelogEntryResponse___ctor
                    (__this,pSStack_58,pSStack_60,contentMarkdown,contentHash,publishedAt,pSStack_50,updatedAt
                     ,in_stack_ffffffffffffff58);
          *entry = __this;
          Il2CppCodeGenWriteBarrier(entry);
          return true;
        }
      }
    }
  }
  return false;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$TryParseList
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__TryParseList (SimpleJSONFixed_JSONNode_o* node, ApplicationManagers_Changelog_PublicChangelogListResponse_o** list, const MethodInfo* method);
// 0x5e25cc0
// asm: 22 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e26034: mov r12d, dword ptr [rsp + 0xc]
// asm:   0x5e26039: lea rax, [rip + 0x146daa8]  ; MethodInfo_System_Collections_Generic_List_ChangelogSummaryResponse_ToArray
// asm:   0x5e26040: mov rsi, qword ptr [rax]
// asm:   0x5e26043: mov rdi, rbp
// asm:   0x5e26046: call 0x3a5f5a0  ; System_Collections_Generic_List_object___ToArray()
// asm:   0x5e2604b: mov rbp, rax
// asm:   0x5e2604e: lea rax, [rip + 0x1455d3b]  ; TypeInfo_ApplicationManagers_Changelog_PublicChangelogListResponse
// asm:   0x5e26055: mov rdi, qword ptr [rax]
// asm:   0x5e26058: call 0x30d6370  ; il2cpp_runtime_helper_030d6370()
// asm:   0x5e2605d: mov rbx, rax
// asm:   0x5e26060: mov rdi, rax
// asm:   0x5e26063: mov esi, r12d
// asm:   0x5e26066: mov edx, r15d
// asm:   0x5e26069: mov ecx, r14d
// asm:   0x5e2606c: mov r8, rbp
// asm:   0x5e2606f: call 0x5e24c10  ; ApplicationManagers_Changelog_PublicChangelogListResponse___ctor()
// asm:   0x5e26074: mov qword ptr [r13], rbx
// asm:   0x5e26078: mov rdi, r13
// asm:   0x5e2607b: mov rsi, rbx
// asm:   0x5e2607e: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x5e26083: mov bl, 1
// asm:   0x5e26085: jmp 0x5e2601a

bool ApplicationManagers_Changelog_AottgChangelogParser__TryParseList_5d25cc0
               (SimpleJSONFixed_JSONNode_o *node,
               ApplicationManagers_Changelog_PublicChangelogListResponse_o **list,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  MethodInfo *pMVar3;
  int32_t pageSize;
  int32_t page;
  bool bVar4;
  int32_t iVar5;
  int iVar6;
  int iVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  SimpleJSONFixed_JSONArray_o *pSVar9;
  System_Collections_Generic_List_ChangelogSummaryResponse__o *__this;
  ApplicationManagers_Changelog_ChangelogSummaryResponse_array *pAVar10;
  ApplicationManagers_Changelog_PublicChangelogListResponse_o *__this_00;
  MethodInfo *in_RCX;
  MethodInfo *in_R9;
  undefined1 auVar11 [16];
  int32_t iStack_44;
  int32_t iStack_40;
  int32_t iStack_3c;
  ApplicationManagers_Changelog_ChangelogSummaryResponse_o *pAStack_38;
  
  if (Il2CppMethodInitialized_075484e8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChangelogSummaryResponse_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChangelogSummaryResponse_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChangelogSummaryResponse_ctor_7193ad0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_ChangelogSummaryResponse);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Changelog_PublicChangelogListResponse);
    il2cpp_codegen_initialize_runtime_metadata(&"total");
    il2cpp_codegen_initialize_runtime_metadata(&"pageSize");
    il2cpp_codegen_initialize_runtime_metadata(&"entries");
    il2cpp_codegen_initialize_runtime_metadata(&"page");
    Il2CppMethodInitialized_075484e8 = '\x01';
  }
  iStack_3c = 0;
  iStack_40 = 0;
  iStack_44 = 0;
  pAStack_38 = (ApplicationManagers_Changelog_ChangelogSummaryResponse_o *)0x0;
  *list = (ApplicationManagers_Changelog_PublicChangelogListResponse_o *)0x0;
  Il2CppCodeGenWriteBarrier(list);
  if (Il2CppMethodInitialized_075484ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075484ea = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    return false;
  }
  if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05e260b4;
  bVar4 = (*(node->klass->vtable)._17_get_IsObject.methodPtr)
                    (node,(node->klass->vtable)._17_get_IsObject.method);
  if ((bVar4) &&
     (bVar4 = ApplicationManagers_Changelog_AottgChangelogParser__ReadNonNegativeInt
                        (node,"total",&iStack_3c,in_RCX), bVar4)) {
    bVar4 = ApplicationManagers_Changelog_AottgChangelogParser__ReadNonNegativeInt
                      (node,"page",&iStack_40,in_RCX);
    page = iStack_40;
    if (!bVar4) {
      return false;
    }
    if (iStack_40 < 1) {
      return false;
    }
    bVar4 = ApplicationManagers_Changelog_AottgChangelogParser__ReadNonNegativeInt
                      (node,"pageSize",&iStack_44,in_RCX);
    pageSize = iStack_44;
    if (!bVar4) {
      return false;
    }
    if (iStack_44 < 1) {
      return false;
    }
    bVar4 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                      (node,"entries",(node->klass->vtable)._28_HasKey.method);
    if (bVar4) {
      pSVar8 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,"entries",(node->klass->vtable)._7_get_Item.method);
      if (pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        bVar4 = (*(pSVar8->klass->vtable)._16_get_IsArray.methodPtr)
                          (pSVar8,(pSVar8->klass->vtable)._16_get_IsArray.method);
        if (!bVar4) {
          return false;
        }
        pSVar8 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                           (node,"entries",(node->klass->vtable)._7_get_Item.method);
        if ((pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
           (pSVar9 = (*(pSVar8->klass->vtable)._45_get_AsArray.methodPtr)
                               (pSVar8,(pSVar8->klass->vtable)._45_get_AsArray.method),
           pSVar9 != (SimpleJSONFixed_JSONArray_o *)0x0)) {
          iVar5 = (**(code **)((long)pSVar9->klass + 0x1e8))
                            (pSVar9,*(undefined8 *)((long)pSVar9->klass + 0x1f0));
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_ChangelogSummaryResponse
                             );
          System_Collections_Generic_List_object____ctor_395c990
                    ((System_Collections_Generic_List_object__o *)__this,iVar5,
                     (MethodInfo_395C990 *)
                     MethodInfo_System_Collections_Generic_List_ChangelogSummaryResponse_ctor_7193ad0);
          iVar6 = (**(code **)((long)pSVar9->klass + 0x1e8))
                            (pSVar9,*(undefined8 *)((long)pSVar9->klass + 0x1f0));
          if (iVar6 < 1) {
            if (__this != (System_Collections_Generic_List_ChangelogSummaryResponse__o *)0x0)
            goto label_05e26034;
          }
          else {
            if (__this != (System_Collections_Generic_List_ChangelogSummaryResponse__o *)0x0) {
              iVar6 = 0;
              do {
                auVar11 = (**(code **)((long)pSVar9->klass + 0x188))
                                    (pSVar9,iVar6,*(undefined8 *)((long)pSVar9->klass + 400));
                bVar4 = ApplicationManagers_Changelog_AottgChangelogParser__TryParseSummary
                                  (auVar11._0_8_,&pAStack_38,auVar11._8_8_);
                pMVar3 = MethodInfo_System_Collections_Generic_List_ChangelogSummaryResponse_Add;
                if (!bVar4) {
                  return false;
                }
                piVar1 = &(__this->fields)._version;
                *piVar1 = *piVar1 + 1;
                pAVar10 = (__this->fields)._items;
                if (pAVar10 == (ApplicationManagers_Changelog_ChangelogSummaryResponse_array *)0x0)
                goto label_05e260b4;
                uVar2 = (__this->fields)._size;
                if (uVar2 < (uint)pAVar10->max_length) {
                  (__this->fields)._size = uVar2 + 1;
                  pAVar10->m_Items[(int)uVar2] = pAStack_38;
                  Il2CppCodeGenWriteBarrier(pAVar10->m_Items + (int)uVar2);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pAStack_38,
                             (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
                }
                iVar6 = iVar6 + 1;
                iVar7 = (**(code **)((long)pSVar9->klass + 0x1e8))
                                  (pSVar9,*(undefined8 *)((long)pSVar9->klass + 0x1f0));
              } while (iVar6 < iVar7);
label_05e26034:
              iVar5 = iStack_3c;
              pAVar10 = (ApplicationManagers_Changelog_ChangelogSummaryResponse_array *)
                        System_Collections_Generic_List_object___ToArray
                                  ((System_Collections_Generic_List_object__o *)__this,
                                   (MethodInfo_395F5A0 *)
                                   MethodInfo_System_Collections_Generic_List_ChangelogSummaryResponse_ToArray
                                  );
              __this_00 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)
                                     TypeInfo_ApplicationManagers_Changelog_PublicChangelogListResponse);
              ApplicationManagers_Changelog_PublicChangelogListResponse___ctor
                        (__this_00,iVar5,page,pageSize,pAVar10,in_R9);
              *list = __this_00;
              Il2CppCodeGenWriteBarrier(list);
              return true;
            }
            auVar11 = (**(code **)((long)pSVar9->klass + 0x188))
                                (pSVar9,0,*(undefined8 *)((long)pSVar9->klass + 400));
            bVar4 = ApplicationManagers_Changelog_AottgChangelogParser__TryParseSummary
                              (auVar11._0_8_,&pAStack_38,auVar11._8_8_);
            if (!bVar4) {
              return false;
            }
          }
        }
      }
label_05e260b4:
      ThrowNullReferenceException();
    }
  }
  return false;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$TryParseSummary
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__TryParseSummary (SimpleJSONFixed_JSONNode_o* node, ApplicationManagers_Changelog_ChangelogSummaryResponse_o** summary, const MethodInfo* method);
// 0x5e26190

bool ApplicationManagers_Changelog_AottgChangelogParser__TryParseSummary
               (SimpleJSONFixed_JSONNode_o *node,
               ApplicationManagers_Changelog_ChangelogSummaryResponse_o **summary,MethodInfo *method)

{
  System_String_o *updatedAt;
  System_String_o *publishedAt;
  System_String_o *contentHash;
  System_String_o *version;
  bool bVar1;
  ApplicationManagers_Changelog_ChangelogSummaryResponse_o *__this;
  MethodInfo *in_RCX;
  MethodInfo *in_stack_ffffffffffffff78;
  System_String_o *local_78;
  System_String_o *local_70;
  System_String_o *local_68;
  System_String_o *local_60;
  System_String_o *local_58;
  System_String_o *local_50;
  System_Guid_Fields local_48;
  
  if (Il2CppMethodInitialized_075484e9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Changelog_ChangelogSummaryResponse);
    il2cpp_codegen_initialize_runtime_metadata(&"contentHash");
    il2cpp_codegen_initialize_runtime_metadata(&"id");
    il2cpp_codegen_initialize_runtime_metadata(&"publishedAt");
    il2cpp_codegen_initialize_runtime_metadata(&"version");
    il2cpp_codegen_initialize_runtime_metadata(&"updatedAt");
    Il2CppMethodInitialized_075484e9 = '\x01';
  }
  local_78 = (System_String_o *)0x0;
  local_58 = (System_String_o *)0x0;
  local_60 = (System_String_o *)0x0;
  local_68 = (System_String_o *)0x0;
  local_70 = (System_String_o *)0x0;
  *summary = (ApplicationManagers_Changelog_ChangelogSummaryResponse_o *)0x0;
  Il2CppCodeGenWriteBarrier(summary);
  if (Il2CppMethodInitialized_075484ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075484ea = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (*(node->klass->vtable)._17_get_IsObject.methodPtr)
                      (node,(node->klass->vtable)._17_get_IsObject.method);
    if (bVar1) {
      local_48._a = 0;
      local_48._b = 0;
      local_48._c = 0;
      local_48._d = 0;
      local_48._e = 0;
      local_48._f = 0;
      local_48._g = 0;
      local_48._h = 0;
      local_48._i = 0;
      local_48._j = 0;
      local_48._k = 0;
      bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                        (node,"id",&local_78,in_RCX);
      if (bVar1) {
        bVar1 = System_Guid__TryParse(local_78,(System_Guid_o *)&local_48,(MethodInfo *)0x0);
        if (!bVar1) {
          return false;
        }
        bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                          (node,"version",&local_58,in_RCX);
        if ((((bVar1) &&
             (bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                                (node,"contentHash",&local_60,in_RCX), bVar1)) &&
            (bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                               (node,"publishedAt",&local_68,in_RCX), bVar1)) &&
           (bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                              (node,"updatedAt",&local_70,in_RCX), version = local_58,
           contentHash = local_60, publishedAt = local_68, updatedAt = local_70, bVar1)) {
          local_50 = local_78;
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_ChangelogSummaryResponse);
          ApplicationManagers_Changelog_ChangelogSummaryResponse___ctor
                    (__this,local_50,version,contentHash,publishedAt,updatedAt,in_stack_ffffffffffffff78);
          *summary = __this;
          Il2CppCodeGenWriteBarrier(summary);
          return true;
        }
      }
    }
  }
  return false;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$TryParse<object>
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__TryParse_object_ (System_String_o* json, ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o* parser, Il2CppObject** value, System_String_o** error, const MethodInfo_34878C0* method);
// 0x35878c0
// eh: try 0x358794c..0x35879c2 -> pad 0x35879c8 (+3 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x35879ec..0x3587a37 -> pad 0x3587a37 (+1 call sites) cleanup
// eh: try 0x3587a3a..0x3587a3f -> pad 0x3587a47 catch (...) [compiler noexcept guard]
// asm: 41 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x35879c2: jmp 0x35879c8
// asm:   0x35879c4: jmp 0x35879c8
// asm:   0x35879c6: jmp 0x35879c8
// asm:   0x35879c8: mov rbx, rax
// asm:   0x35879cb: cmp edx, 1
// asm:   0x35879ce: jne 0x3587a3f
// asm:   0x35879d0: mov rdi, rbx
// asm:   0x35879d3: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x35879d8: mov rbx, rax
// asm:   0x35879db: lea rax, [rip + 0x3fcece6]
// asm:   0x35879e2: mov rdi, qword ptr [rax + 0x10]
// asm:   0x35879e6: mov rax, qword ptr [rbx]
// asm:   0x35879e9: mov rsi, qword ptr [rax]
// asm:   0x35879ec: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x35879f1: test al, al
// asm:   0x35879f3: je 0x3587a16
// asm:   0x35879f5: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x35879fa: mov rax, qword ptr [r15 + 0x38]
// asm:   0x35879fe: mov rdx, qword ptr [rax + 0x10]
// asm:   0x3587a02: mov rdi, r14
// asm:   0x3587a05: mov rsi, r12
// asm:   0x3587a08: pop rbx
// asm:   0x3587a09: pop r12
// asm:   0x3587a0b: pop r13
// asm:   0x3587a0d: pop r14
// asm:   0x3587a0f: pop r15
// asm:   0x3587a11: jmp 0x2ac7d40
// asm:   0x3587a16: mov edi, 8
// asm:   0x3587a1b: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x3587a20: mov rcx, qword ptr [rbx]
// asm:   0x3587a23: mov qword ptr [rax], rcx
// asm:   0x3587a26: lea rsi, [rip + 0x38a5ad3]
// asm:   0x3587a2d: mov rdi, rax
// asm:   0x3587a30: xor edx, edx
// asm:   0x3587a32: call 0x6e255c0  ; __cxa_throw()
// asm:   0x3587a37: mov rbx, rax
// asm:   0x3587a3a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x3587a3f: mov rdi, rbx
// asm:   0x3587a42: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x3587a47: mov rdi, rax
// asm:   0x3587a4a: call 0x2ab61e0  ; __clang_call_terminate()

bool ApplicationManagers_Changelog_AottgChangelogParser__TryParse_object_
               (System_String_o *json,ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *parser,
               Il2CppObject **value,System_String_o **error,MethodInfo_34878C0 *method)

{
  bool bVar1;
  char cVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  
  if (method->rgctx_data == (MethodInfo_34878C0_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  *value = (Il2CppObject *)0x0;
  *error = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(error);
  bVar1 = System_String__IsNullOrWhiteSpace(json,(MethodInfo *)0x0);
  if (bVar1) {
    if (Il2CppMethodInitialized_0753e83b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"bad_response");
      Il2CppMethodInitialized_0753e83b = '\x01';
    }
    *value = (Il2CppObject *)0x0;
    *error = "bad_response";
    Il2CppCodeGenWriteBarrier(error);
  }
  else {
    pSVar3 = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
    if (parser == (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *)0x0) {
      ThrowNullReferenceException();
    }
    cVar2 = (*(code *)(parser->fields).invoke_impl)
                      ((parser->fields).method_code,pSVar3,value,(parser->fields).method);
    if (cVar2 != '\0') {
      return true;
    }
    if (Il2CppMethodInitialized_0753e83b == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"bad_response");
      Il2CppMethodInitialized_0753e83b = '\x01';
    }
    *value = (Il2CppObject *)0x0;
    *error = "bad_response";
    Il2CppCodeGenWriteBarrier(error);
  }
  return false;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$ReadGuid
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__ReadGuid (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, System_String_o** value, const MethodInfo* method);
// 0x5e25820

bool ApplicationManagers_Changelog_AottgChangelogParser__ReadGuid
               (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,System_String_o **value,
               MethodInfo *method)

{
  bool bVar1;
  System_Guid_Fields local_18;
  
  local_18._a = 0;
  local_18._b = 0;
  local_18._c = 0;
  local_18._d = 0;
  local_18._e = 0;
  local_18._f = 0;
  local_18._g = 0;
  local_18._h = 0;
  local_18._i = 0;
  local_18._j = 0;
  local_18._k = 0;
  bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString(node,key,value,method);
  if (bVar1) {
    bVar1 = System_Guid__TryParse(*value,(System_Guid_o *)&local_18,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$ReadRequiredString
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, System_String_o** value, const MethodInfo* method);
// 0x5e25860

bool ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
               (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,System_String_o **value,
               MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_String_o *pSVar3;
  
  *value = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(value);
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (!bVar1) {
      return false;
    }
    pSVar2 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,key,(node->klass->vtable)._7_get_Item.method)
    ;
    if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      bVar1 = (*(pSVar2->klass->vtable)._13_get_IsString.methodPtr)
                        (pSVar2,(pSVar2->klass->vtable)._13_get_IsString.method);
      if (!bVar1) {
        return false;
      }
      pSVar2 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,key,(node->klass->vtable)._7_get_Item.method);
      if ((pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
         (pSVar3 = (*(pSVar2->klass->vtable)._9_get_Value.methodPtr)
                             (pSVar2,(pSVar2->klass->vtable)._9_get_Value.method),
         pSVar3 != (System_String_o *)0x0)) {
        pSVar3 = System_String__Trim(pSVar3,(MethodInfo *)0x0);
        *value = pSVar3;
        Il2CppCodeGenWriteBarrier(value);
        bVar1 = System_String__IsNullOrEmpty(*value,(MethodInfo *)0x0);
        return !bVar1;
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Changelog.AottgChangelogParser$$ReadNullableString
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__ReadNullableString (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, System_String_o** value, const MethodInfo* method);
// 0x5e25c20

bool ApplicationManagers_Changelog_AottgChangelogParser__ReadNullableString
               (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,System_String_o **value,
               MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  undefined3 extraout_var;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  
  *value = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(value);
  if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_05e25caf:
    ThrowNullReferenceException();
  }
  bVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
  if (bVar1) {
    pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,key,(node->klass->vtable)._7_get_Item.method)
    ;
    if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05e25caf;
    bVar2 = (*(pSVar3->klass->vtable)._15_get_IsNull.methodPtr)
                      (pSVar3,(pSVar3->klass->vtable)._15_get_IsNull.method);
    bVar1 = true;
    if (!bVar2) {
      bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                        (node,key,value,(MethodInfo *)(ulong)CONCAT31(extraout_var,bVar2));
      return bVar1;
    }
  }
  else {
    bVar1 = false;
  }
  return bVar1;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$ReadNonNegativeInt
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__ReadNonNegativeInt (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, int32_t* value, const MethodInfo* method);
// 0x5e260c0

bool ApplicationManagers_Changelog_AottgChangelogParser__ReadNonNegativeInt
               (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,int32_t *value,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  
  *value = 0;
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (!bVar1) {
      return false;
    }
    pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,key,(node->klass->vtable)._7_get_Item.method)
    ;
    if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      bVar1 = (*(pSVar3->klass->vtable)._12_get_IsNumber.methodPtr)
                        (pSVar3,(pSVar3->klass->vtable)._12_get_IsNumber.method);
      if (!bVar1) {
        return false;
      }
      pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,key,(node->klass->vtable)._7_get_Item.method);
      if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        iVar2 = (*(pSVar3->klass->vtable)._35_get_AsInt.methodPtr)
                          (pSVar3,(pSVar3->klass->vtable)._35_get_AsInt.method);
        *value = iVar2;
        return -1 < iVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Changelog.AottgChangelogParser$$ReadPositiveInt
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__ReadPositiveInt (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, int32_t* value, const MethodInfo* method);
// 0x5e26170

bool ApplicationManagers_Changelog_AottgChangelogParser__ReadPositiveInt
               (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,int32_t *value,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__ReadNonNegativeInt(node,key,value,method);
  if (bVar1) {
    return 0 < *value;
  }
  return false;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$IsNull
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__IsNull (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x5e257b0

bool ApplicationManagers_Changelog_AottgChangelogParser__IsNull
               (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
    if (!bVar1) {
      return false;
    }
    pSVar2 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,key,(node->klass->vtable)._7_get_Item.method)
    ;
    if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      bVar1 = (*(pSVar2->klass->vtable)._15_get_IsNull.methodPtr)
                        (pSVar2,(pSVar2->klass->vtable)._15_get_IsNull.method);
      return bVar1;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Changelog.AottgChangelogParser$$IsObject
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__IsObject (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x5e25740

bool ApplicationManagers_Changelog_AottgChangelogParser__IsObject
               (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075484ea == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075484ea = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (*(node->klass->vtable)._17_get_IsObject.methodPtr)
                      (node,(node->klass->vtable)._17_get_IsObject.method);
    return bVar1;
  }
  return false;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$Fail<object>
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__Fail_object_ (Il2CppObject** value, System_String_o** error, const MethodInfo_3487870* method);
// 0x3587870

bool ApplicationManagers_Changelog_AottgChangelogParser__Fail_object_
               (Il2CppObject **value,System_String_o **error,MethodInfo_3487870 *method)

{
  if (Il2CppMethodInitialized_0753e83b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"bad_response");
    Il2CppMethodInitialized_0753e83b = '\x01';
  }
  *value = (Il2CppObject *)0x0;
  *error = "bad_response";
  Il2CppCodeGenWriteBarrier(error);
  return false;
}


