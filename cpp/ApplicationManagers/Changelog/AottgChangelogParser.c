// Type: ApplicationManagers.Changelog.AottgChangelogParser
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Changelog/AottgChangelogParser.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Changelog.AottgChangelogParser.Parser<object>$$.ctor
// il2cpp: void ApplicationManagers_Changelog_AottgChangelogParser_Parser_object____ctor (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o* __this, Il2CppObject* object, intptr_t method, const MethodInfo_B54760* method);
// 0x180b54760
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x180b547e2: jmp 0x180b54819
// asm:   0x180b547fd: jmp 0x180b54819

void
ApplicationManagers_Changelog_AottgChangelogParser_Parser_object____ctor(ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o* __this, Il2CppObject* object, intptr_t method, MethodInfo_B54760* method)

{
  char cVar1;
  char cVar2;
  Il2CppObject *ex;
  code *pcVar3;
  
  (__this->fields).method_ptr = *(intptr_t *)(method + 8);
  (__this->fields).method = method;
  (__this->fields).m_target = object;
  Il2CppCodeGenWriteBarrier(&(__this->fields).m_target,object);
  cVar2 = *(char *)(method + 0x52);
  (__this->fields).method_code = (intptr_t)__this;
  cVar1 = il2cpp_runtime_helper_1804161b0();
  if (cVar1 == '\0') {
    if (cVar2 == '\x01') {
      if ((__this->fields).method_is_virtual == false) {
        pcVar3 = il2cpp_runtime_helper_1800456b0;
      }
      else {
        cVar2 = il2cpp_runtime_helper_18041f060(method);
        if (cVar2 == '\0') {
          cVar2 = il2cpp_runtime_helper_180417090(method);
          pcVar3 = il2cpp_runtime_helper_1800457a0;
          if (cVar2 != '\0') {
            pcVar3 = il2cpp_runtime_helper_1800456e0;
          }
        }
        else {
          cVar2 = il2cpp_runtime_helper_180417090(method);
          pcVar3 = il2cpp_runtime_helper_1800455a0;
          if (cVar2 == '\0') {
            pcVar3 = il2cpp_runtime_helper_180045660;
          }
        }
      }
      goto label_180b54819;
    }
    if (object == (Il2CppObject *)0x0) {
      ex = il2cpp_codegen_get_argument_exception
                     ((char *)0x0,"Delegate to an instance method cannot have null \'this\'.");
      il2cpp_codegen_raise_exception(ex,(MethodInfo *)0x0);
    }
  }
  else if (cVar2 == '\x02') {
    pcVar3 = (code *)&label_180002290;
    goto label_180b54819;
  }
  pcVar3 = (code *)(__this->fields).method_ptr;
  (__this->fields).method_code = (intptr_t)(__this->fields).m_target;
label_180b54819:
  (__this->fields).invoke_impl = (intptr_t)pcVar3;
  (__this->fields).extra_arg = (intptr_t)il2cpp_runtime_helper_180002a10;
  return;
}


// ApplicationManagers.Changelog.AottgChangelogParser.Parser<object>$$Invoke
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser_Parser_object___Invoke (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o* __this, SimpleJSONFixed_JSONNode_o* node, Il2CppObject** value, const MethodInfo_528790* method);
// 0x180528790

bool
ApplicationManagers_Changelog_AottgChangelogParser_Parser_object___Invoke(ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o* __this, SimpleJSONFixed_JSONNode_o* node, Il2CppObject** value, MethodInfo_528790* method)

{
  (*(code *)(__this->fields).invoke_impl)((__this->fields).method_code,source,seconds,(__this->fields).method)
  ;
  return;
}


// ApplicationManagers.Changelog.AottgChangelogParser.Parser<object>$$BeginInvoke
// il2cpp: System_IAsyncResult_o* ApplicationManagers_Changelog_AottgChangelogParser_Parser_object___BeginInvoke (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o* __this, SimpleJSONFixed_JSONNode_o* node, Il2CppObject** value, System_AsyncCallback_o* callback, Il2CppObject* object, const MethodInfo_B54720* method);
// 0x180b54720

System_IAsyncResult_o *
ApplicationManagers_Changelog_AottgChangelogParser_Parser_object___BeginInvoke
          (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *__this,
          SimpleJSONFixed_JSONNode_o *node,Il2CppObject **value,System_AsyncCallback_o *callback,
          Il2CppObject *object,MethodInfo_B54720 *method)

{
  System_IAsyncResult_o *pSVar1;
  SimpleJSONFixed_JSONNode_o *local_28;
  Il2CppObject *local_20;
  undefined8 local_18;
  
  local_20 = *value;
  local_18 = 0;
  local_28 = node;
  pSVar1 = (System_IAsyncResult_o *)il2cpp_runtime_helper_18042b200(__this,&local_28,callback,object);
  return pSVar1;
}


// ApplicationManagers.Changelog.AottgChangelogParser.Parser<object>$$EndInvoke
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser_Parser_object___EndInvoke (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o* __this, Il2CppObject** value, System_IAsyncResult_o* result, const MethodInfo_52F1C0* method);
// 0x18052f1c0

bool
ApplicationManagers_Changelog_AottgChangelogParser_Parser_object___EndInvoke(ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o* __this, Il2CppObject** value, System_IAsyncResult_o* result, MethodInfo_52F1C0* method)

{
  Il2CppObject *obj;
  undefined1 *puVar1;
  Discord_Relationship_o *local_res10 [3];
  
  local_res10[0] = relationship;
  obj = (Il2CppObject *)il2cpp_runtime_helper_18042b2c0(result,local_res10);
  if (obj != (Il2CppObject *)0x0) {
    puVar1 = il2cpp_object_unbox(obj);
    return (bool)*puVar1;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Changelog.AottgChangelogParser$$TryParseLatestVersion
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__TryParseLatestVersion (System_String_o* json, ApplicationManagers_Changelog_LatestChangelogVersionResponse_o** version, System_String_o** error, const MethodInfo* method);
// 0x1823612a0

bool ApplicationManagers_Changelog_AottgChangelogParser__TryParseLatestVersion
               (System_String_o *json,ApplicationManagers_Changelog_LatestChangelogVersionResponse_o **version
               ,System_String_o **error,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceRegistry_ResourceCreateCallback_o *__this;
  
  if (Il2CppMethodInitialized_184347a29 == '\0') {
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
    Il2CppMethodInitialized_184347a29 = '\x01';
  }
  __this = (UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceRegistry_ResourceCreateCallback_o *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_ApplicationManagers_Changelog_AottgChangelogParser_Parser_LatestChangelogVersionResponse
                     );
  ApplicationManagers_Changelog_AottgChangelogParser_Parser_object____ctor
            (__this,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParseLatestVersion,
             (MethodInfo *)0x0);
  bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__TryParse_object_
                    (json,(ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *)__this,
                     (Il2CppObject **)version,error,
                     (MethodInfo_68AC50 *)
                     MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParse_LatestChangelogVersionResponse
                    );
  return bVar1;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$TryParseEntry
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__TryParseEntry (System_String_o* json, ApplicationManagers_Changelog_ChangelogEntryResponse_o** entry, System_String_o** error, const MethodInfo* method);
// 0x182361210

bool ApplicationManagers_Changelog_AottgChangelogParser__TryParseEntry
               (System_String_o *json,ApplicationManagers_Changelog_ChangelogEntryResponse_o **entry,
               System_String_o **error,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceRegistry_ResourceCreateCallback_o *__this;
  
  if (Il2CppMethodInitialized_184347a2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParseEntry);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParse_ChangelogEntryResponse)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Changelog_AottgChangelogParser_Parser_ChangelogEntryResponse);
    Il2CppMethodInitialized_184347a2a = '\x01';
  }
  __this = (UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceRegistry_ResourceCreateCallback_o *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_ApplicationManagers_Changelog_AottgChangelogParser_Parser_ChangelogEntryResponse
                     );
  ApplicationManagers_Changelog_AottgChangelogParser_Parser_object____ctor
            (__this,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParseEntry,
             (MethodInfo *)0x0);
  bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__TryParse_object_
                    (json,(ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *)__this,
                     (Il2CppObject **)entry,error,
                     (MethodInfo_68AC50 *)
                     MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParse_ChangelogEntryResponse
                    );
  return bVar1;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$TryParseList
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__TryParseList (System_String_o* json, ApplicationManagers_Changelog_PublicChangelogListResponse_o** list, System_String_o** error, const MethodInfo* method);
// 0x182361bd0

bool ApplicationManagers_Changelog_AottgChangelogParser__TryParseList
               (System_String_o *json,ApplicationManagers_Changelog_PublicChangelogListResponse_o **list,
               System_String_o **error,MethodInfo *method)

{
  bool bVar1;
  UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceRegistry_ResourceCreateCallback_o *__this;
  
  if (Il2CppMethodInitialized_184347a2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParseList);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParse_PublicChangelogListResponse
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Changelog_AottgChangelogParser_Parser_PublicChangelogListResponse
              );
    Il2CppMethodInitialized_184347a2b = '\x01';
  }
  __this = (UnityEngine_Rendering_RenderGraphModule_RenderGraphResourceRegistry_ResourceCreateCallback_o *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_ApplicationManagers_Changelog_AottgChangelogParser_Parser_PublicChangelogListResponse
                     );
  ApplicationManagers_Changelog_AottgChangelogParser_Parser_object____ctor
            (__this,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParseList,
             (MethodInfo *)0x0);
  bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__TryParse_object_
                    (json,(ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *)__this,
                     (Il2CppObject **)list,error,
                     (MethodInfo_68AC50 *)
                     MethodInfo_ApplicationManagers_Changelog_AottgChangelogParser_TryParse_PublicChangelogListResponse
                    );
  return bVar1;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$TryParseLatestVersion
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__TryParseLatestVersion (SimpleJSONFixed_JSONNode_o* node, ApplicationManagers_Changelog_LatestChangelogVersionResponse_o** version, const MethodInfo* method);
// 0x182361330

bool ApplicationManagers_Changelog_AottgChangelogParser__TryParseLatestVersion_2361330
               (SimpleJSONFixed_JSONNode_o *node,
               ApplicationManagers_Changelog_LatestChangelogVersionResponse_o **version,MethodInfo *method)

{
  System_String_o *id;
  System_String_o *version_00;
  System_String_o *contentHash;
  System_String_o *publishedAt;
  System_String_o *updatedAt;
  bool bVar1;
  char cVar2;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *pAVar4;
  System_String_o *local_res8;
  System_String_o *local_res10;
  System_String_o *local_res20;
  System_String_o *local_58;
  System_String_o *local_50;
  System_Guid_Fields local_48;
  
  if (Il2CppMethodInitialized_184347a2c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Changelog_LatestChangelogVersionResponse);
    il2cpp_codegen_initialize_runtime_metadata(&"contentHash");
    il2cpp_codegen_initialize_runtime_metadata(&"id");
    il2cpp_codegen_initialize_runtime_metadata(&"publishedAt");
    il2cpp_codegen_initialize_runtime_metadata(&"version");
    il2cpp_codegen_initialize_runtime_metadata(&"hasChangelog");
    il2cpp_codegen_initialize_runtime_metadata(&"updatedAt");
    Il2CppMethodInitialized_184347a2c = '\x01';
  }
  local_res8 = (System_String_o *)0x0;
  local_res10 = (System_String_o *)0x0;
  local_res20 = (System_String_o *)0x0;
  local_58 = (System_String_o *)0x0;
  local_50 = (System_String_o *)0x0;
  *version = (ApplicationManagers_Changelog_LatestChangelogVersionResponse_o *)0x0;
  Il2CppCodeGenWriteBarrier(version,(void *)0x0);
  if (Il2CppMethodInitialized_184347a30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347a30 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_182361765;
    bVar1 = (*(node->klass->vtable)._17_get_IsObject.methodPtr)
                      (node,(node->klass->vtable)._17_get_IsObject.method);
    if (bVar1) {
      bVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,(MethodInfo *)"hasChangelog");
      if (bVar1) {
        pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"hasChangelog");
        if (pSVar3 == (System_Xml_Schema_XmlSchema_o *)0x0) {
label_182361765:
          ThrowNullReferenceException();
        }
        cVar2 = (*((Il2CppClass *)pSVar3->klass)->vtable[14].methodPtr)(pSVar3,((Il2CppClass *)pSVar3->klass)->vtable[14].method);
        if (cVar2 != '\0') {
          pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"hasChangelog");
          if (pSVar3 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_182361765;
          cVar2 = (*(code *)((Il2CppClass *)pSVar3->klass)->vtable[39].methodPtr)
                            (pSVar3,((Il2CppClass *)pSVar3->klass)->vtable[39].method);
          if (cVar2 == '\0') {
            bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__IsNull
                              (node,"id",(MethodInfo *)0x0);
            if (bVar1) {
              bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__IsNull
                                (node,"version",(MethodInfo *)0x0);
              if (bVar1) {
                bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__IsNull
                                  (node,"contentHash",(MethodInfo *)0x0);
                if (bVar1) {
                  bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__IsNull
                                    (node,"publishedAt",(MethodInfo *)0x0);
                  if (bVar1) {
                    bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__IsNull
                                      (node,"updatedAt",(MethodInfo *)0x0);
                    if (bVar1) {
                      pAVar4 = il2cpp_codegen_object_new
                                         ((Il2CppClass *)
                                          TypeInfo_ApplicationManagers_Changelog_LatestChangelogVersionResponse
                                         );
                      System_Object___ctor
                                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)pAVar4,
                                 (MethodInfo *)0x0);
                      (pAVar4->fields)._HasChangelog_k__BackingField = false;
                      (pAVar4->fields)._Id_k__BackingField = (System_String_o *)0x0;
                      Il2CppCodeGenWriteBarrier(&(pAVar4->fields)._Id_k__BackingField,(void *)0x0);
                      (pAVar4->fields)._Version_k__BackingField = (System_String_o *)0x0;
                      Il2CppCodeGenWriteBarrier(&(pAVar4->fields)._Version_k__BackingField,(void *)0x0);
                      (pAVar4->fields)._ContentHash_k__BackingField = (System_String_o *)0x0;
                      Il2CppCodeGenWriteBarrier(&(pAVar4->fields)._ContentHash_k__BackingField,(void *)0x0);
                      (pAVar4->fields)._PublishedAt_k__BackingField = (System_String_o *)0x0;
                      Il2CppCodeGenWriteBarrier(&(pAVar4->fields)._PublishedAt_k__BackingField,(void *)0x0);
                      (pAVar4->fields)._UpdatedAt_k__BackingField = (System_String_o *)0x0;
                      Il2CppCodeGenWriteBarrier(&(pAVar4->fields)._UpdatedAt_k__BackingField,(void *)0x0);
                      *version = pAVar4;
                      Il2CppCodeGenWriteBarrier(version,pAVar4);
                      return true;
                    }
                  }
                }
              }
            }
          }
          else {
            local_48._a = 0;
            local_48._b = 0;
            local_48._c = 0;
            local_48._d = '\0';
            local_48._e = '\0';
            local_48._f = '\0';
            local_48._g = '\0';
            local_48._h = '\0';
            local_48._i = '\0';
            local_48._j = '\0';
            local_48._k = '\0';
            bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                              (node,"id",&local_res8,(MethodInfo *)0x0);
            if (bVar1) {
              bVar1 = System_Guid__TryParse(local_res8,(System_Guid_o *)&local_48,(MethodInfo *)0x0);
              if (bVar1) {
                bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                                  (node,"version",&local_res10,(MethodInfo *)0x0);
                if (bVar1) {
                  bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                                    (node,"contentHash",&local_res20,(MethodInfo *)0x0);
                  if (bVar1) {
                    bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                                      (node,"publishedAt",&local_58,(MethodInfo *)0x0);
                    if (bVar1) {
                      bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                                        (node,"updatedAt",&local_50,(MethodInfo *)0x0);
                      updatedAt = local_50;
                      publishedAt = local_58;
                      contentHash = local_res20;
                      version_00 = local_res10;
                      id = local_res8;
                      if (bVar1) {
                        pAVar4 = il2cpp_codegen_object_new
                                           ((Il2CppClass *)
                                            TypeInfo_ApplicationManagers_Changelog_LatestChangelogVersionResponse
                                           );
                        ApplicationManagers_Changelog_LatestChangelogVersionResponse___ctor
                                  (pAVar4,true,id,version_00,contentHash,publishedAt,updatedAt,
                                   (MethodInfo *)0x0);
                        *version = pAVar4;
                        Il2CppCodeGenWriteBarrier(version,pAVar4);
                        return true;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$TryParseEntry
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__TryParseEntry (SimpleJSONFixed_JSONNode_o* node, ApplicationManagers_Changelog_ChangelogEntryResponse_o** entry, const MethodInfo* method);
// 0x182360e90

bool ApplicationManagers_Changelog_AottgChangelogParser__TryParseEntry_2360e90
               (SimpleJSONFixed_JSONNode_o *node,
               ApplicationManagers_Changelog_ChangelogEntryResponse_o **entry,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *value;
  System_String_o *value_00;
  System_String_o *value_01;
  System_String_o *value_02;
  System_String_o *value_03;
  System_String_o *value_04;
  ApplicationManagers_Changelog_ChangelogEntryResponse_o *value_05;
  bool bVar2;
  char cVar3;
  System_Xml_Schema_XmlSchema_o *pSVar4;
  System_String_o *local_res8;
  ApplicationManagers_Changelog_ChangelogEntryResponse_o **local_res10;
  System_String_o *local_res20;
  System_String_o *local_78;
  System_String_o *local_70;
  System_String_o *local_68;
  System_String_o *local_60;
  System_String_o *local_58;
  ApplicationManagers_Changelog_ChangelogEntryResponse_o *local_50;
  undefined8 uStack_48;
  
  local_res10 = entry;
  if (Il2CppMethodInitialized_184347a2d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Changelog_ChangelogEntryResponse)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"contentHash");
    il2cpp_codegen_initialize_runtime_metadata(&"contentMarkdown");
    il2cpp_codegen_initialize_runtime_metadata(&"id");
    il2cpp_codegen_initialize_runtime_metadata(&"createdAt");
    il2cpp_codegen_initialize_runtime_metadata(&"publishedAt");
    il2cpp_codegen_initialize_runtime_metadata(&"version");
    il2cpp_codegen_initialize_runtime_metadata(&"updatedAt");
    Il2CppMethodInitialized_184347a2d = '\x01';
  }
  local_res20 = (System_String_o *)0x0;
  local_78 = (System_String_o *)0x0;
  local_70 = (System_String_o *)0x0;
  local_68 = (System_String_o *)0x0;
  local_res8 = (System_String_o *)0x0;
  local_60 = (System_String_o *)0x0;
  local_58 = (System_String_o *)0x0;
  *entry = (ApplicationManagers_Changelog_ChangelogEntryResponse_o *)0x0;
  Il2CppCodeGenWriteBarrier(entry,(void *)0x0);
  if (Il2CppMethodInitialized_184347a30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347a30 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_182361203:
      ThrowNullReferenceException();
    }
    bVar2 = (*(node->klass->vtable)._17_get_IsObject.methodPtr)
                      (node,(node->klass->vtable)._17_get_IsObject.method);
    if (bVar2) {
      local_50 = (ApplicationManagers_Changelog_ChangelogEntryResponse_o *)0x0;
      uStack_48._0_1_ = '\0';
      uStack_48._1_1_ = '\0';
      uStack_48._2_1_ = '\0';
      uStack_48._3_1_ = '\0';
      uStack_48._4_1_ = '\0';
      uStack_48._5_1_ = '\0';
      uStack_48._6_1_ = '\0';
      uStack_48._7_1_ = '\0';
      bVar2 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                        (node,"id",&local_res20,(MethodInfo *)0x0);
      if ((((bVar2) &&
           (bVar2 = System_Guid__TryParse(local_res20,(System_Guid_o *)&local_50,(MethodInfo *)0x0), bVar2))
          && (bVar2 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                                (node,"version",&local_78,(MethodInfo *)0x0), bVar2)) &&
         ((bVar2 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                             (node,"contentMarkdown",&local_70,(MethodInfo *)0x0), bVar2 &&
          (bVar2 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                             (node,"contentHash",&local_68,(MethodInfo *)0x0),
          pSVar1 = "publishedAt", bVar2)))) {
        local_res8 = (System_String_o *)0x0;
        Il2CppCodeGenWriteBarrier(&local_res8,(void *)0x0);
        bVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,(MethodInfo *)pSVar1);
        if (bVar2) {
          pSVar4 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)pSVar1);
          if (pSVar4 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_182361203;
          cVar3 = (*(code *)((Il2CppClass *)pSVar4->klass)->vtable[15].methodPtr)(pSVar4,((Il2CppClass *)pSVar4->klass)->vtable[15].method);
          if ((cVar3 == '\0') &&
             (bVar2 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                                (node,pSVar1,&local_res8,(MethodInfo *)0x0), !bVar2)) {
            return false;
          }
          bVar2 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                            (node,"createdAt",&local_60,(MethodInfo *)0x0);
          if ((bVar2) &&
             (bVar2 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                                (node,"updatedAt",&local_58,(MethodInfo *)0x0), value_04 = local_58,
             value_03 = local_60, value_02 = local_68, value_01 = local_70, value_00 = local_78,
             value = local_res20, pSVar1 = local_res8, bVar2)) {
            local_50 = il2cpp_codegen_object_new
                                 ((Il2CppClass *)TypeInfo_ApplicationManagers_Changelog_ChangelogEntryResponse
                                 );
            System_Object___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_50,
                       (MethodInfo *)0x0);
            (local_50->fields)._Id_k__BackingField = value;
            Il2CppCodeGenWriteBarrier(&(local_50->fields)._Id_k__BackingField,value);
            value_05 = local_50;
            (local_50->fields)._Version_k__BackingField = value_00;
            Il2CppCodeGenWriteBarrier(&(local_50->fields)._Version_k__BackingField,value_00);
            (value_05->fields)._ContentMarkdown_k__BackingField = value_01;
            Il2CppCodeGenWriteBarrier(&(value_05->fields)._ContentMarkdown_k__BackingField,value_01);
            (value_05->fields)._ContentHash_k__BackingField = value_02;
            Il2CppCodeGenWriteBarrier(&(value_05->fields)._ContentHash_k__BackingField,value_02);
            (value_05->fields)._PublishedAt_k__BackingField = pSVar1;
            Il2CppCodeGenWriteBarrier(&(value_05->fields)._PublishedAt_k__BackingField,pSVar1);
            (value_05->fields)._CreatedAt_k__BackingField = value_03;
            Il2CppCodeGenWriteBarrier(&(value_05->fields)._CreatedAt_k__BackingField,value_03);
            (value_05->fields)._UpdatedAt_k__BackingField = value_04;
            Il2CppCodeGenWriteBarrier(&(value_05->fields)._UpdatedAt_k__BackingField,value_04);
            *local_res10 = value_05;
            Il2CppCodeGenWriteBarrier(local_res10,value_05);
            return true;
          }
        }
      }
    }
  }
  return false;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$TryParseList
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__TryParseList (SimpleJSONFixed_JSONNode_o* node, ApplicationManagers_Changelog_PublicChangelogListResponse_o** list, const MethodInfo* method);
// 0x182361770

bool ApplicationManagers_Changelog_AottgChangelogParser__TryParseList_2361770
               (SimpleJSONFixed_JSONNode_o *node,
               ApplicationManagers_Changelog_PublicChangelogListResponse_o **list,MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_c *pSVar1;
  System_String_o *pSVar2;
  int32_t iVar3;
  int32_t iVar4;
  bool bVar5;
  char cVar6;
  int32_t capacity;
  int iVar7;
  System_Xml_Schema_XmlSchema_o *pSVar8;
  ulonglong uVar9;
  longlong *plVar10;
  System_Collections_Generic_List_ChangelogSummaryResponse__o *__this;
  SimpleJSONFixed_JSONNode_o *node_00;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *array;
  ApplicationManagers_Changelog_PublicChangelogListResponse_o *__this_00;
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *value;
  int iVar11;
  int32_t local_res8 [2];
  int32_t local_res10 [2];
  ApplicationManagers_Changelog_ChangelogSummaryResponse_o *local_res20;
  
  if (Il2CppMethodInitialized_184347a2e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChangelogSummaryResponse_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChangelogSummaryResponse_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_ChangelogSummaryResponse_ctor_408caf8);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_ChangelogSummaryResponse);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Changelog_PublicChangelogListResponse);
    il2cpp_codegen_initialize_runtime_metadata(&"total");
    il2cpp_codegen_initialize_runtime_metadata(&"pageSize");
    il2cpp_codegen_initialize_runtime_metadata(&"entries");
    il2cpp_codegen_initialize_runtime_metadata(&"page");
    Il2CppMethodInitialized_184347a2e = '\x01';
  }
  iVar11 = 0;
  local_res8[0] = 0;
  local_res10[0] = 0;
  local_res20 = (ApplicationManagers_Changelog_ChangelogSummaryResponse_o *)0x0;
  *list = (ApplicationManagers_Changelog_PublicChangelogListResponse_o *)0x0;
  Il2CppCodeGenWriteBarrier(list,(void *)0x0);
  if (Il2CppMethodInitialized_184347a30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347a30 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar5 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar5) {
    return false;
  }
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar5 = (*(node->klass->vtable)._17_get_IsObject.methodPtr)
                      (node,(node->klass->vtable)._17_get_IsObject.method);
    pSVar2 = "total";
    if (!bVar5) {
      return false;
    }
    bVar5 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,(MethodInfo *)"total");
    if (!bVar5) {
      return false;
    }
    pSVar8 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)pSVar2);
    if (pSVar8 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      pSVar1 = pSVar8->klass;
      cVar6 = (*(pSVar1->vtable)._12_set_NameAttribute.methodPtr)
                        (pSVar8,(System_Type_o *)(pSVar1->vtable)._12_set_NameAttribute.method,
                         (MethodInfo *)pSVar1);
      if (cVar6 == '\0') {
        return false;
      }
      pSVar8 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)pSVar2);
      if (pSVar8 != (System_Xml_Schema_XmlSchema_o *)0x0) {
        uVar9 = (*(code *)((Il2CppClass *)pSVar8->klass)->vtable[35].methodPtr)
                          (pSVar8,((Il2CppClass *)pSVar8->klass)->vtable[35].method);
        if (((byte)(uVar9 >> 0x1f) & 1) == 1) {
          return false;
        }
        bVar5 = ApplicationManagers_Changelog_AottgChangelogParser__ReadNonNegativeInt
                          (node,"page",local_res8,(MethodInfo *)0x0);
        iVar3 = local_res8[0];
        if (!bVar5) {
          return false;
        }
        if (local_res8[0] < 1) {
          return false;
        }
        bVar5 = ApplicationManagers_Changelog_AottgChangelogParser__ReadNonNegativeInt
                          (node,"pageSize",local_res10,(MethodInfo *)0x0);
        iVar4 = local_res10[0];
        if (!bVar5) {
          return false;
        }
        if (local_res10[0] < 1) {
          return false;
        }
        bVar5 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,(MethodInfo *)"entries");
        if (!bVar5) {
          return false;
        }
        pSVar8 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"entries");
        if (pSVar8 != (System_Xml_Schema_XmlSchema_o *)0x0) {
          cVar6 = (*((Il2CppClass *)pSVar8->klass)->vtable[16].methodPtr)
                            (pSVar8,*(undefined8 *)&((Il2CppClass *)pSVar8->klass)->vtable[16].method);
          if (cVar6 == '\0') {
            return false;
          }
          pSVar8 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"entries");
          if ((pSVar8 != (System_Xml_Schema_XmlSchema_o *)0x0) &&
             (plVar10 = (longlong *)
                        (*(code *)((Il2CppClass *)pSVar8->klass)->vtable[45].methodPtr)
                                  (pSVar8,((Il2CppClass *)pSVar8->klass)->vtable[45].method),
             plVar10 != (longlong *)0x0)) {
            capacity = (**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0));
            __this = il2cpp_codegen_object_new
                               ((Il2CppClass *)
                                TypeInfo_System_Collections_Generic_List_ChangelogSummaryResponse);
            System_Collections_Generic_List_object____ctor
                      ((System_Collections_Generic_List_T__o *)__this,capacity,
                       (MethodInfo_92A4F0 *)
                       MethodInfo_System_Collections_Generic_List_ChangelogSummaryResponse_ctor_408caf8);
            for (; iVar7 = (**(code **)(*plVar10 + 0x1e8))(plVar10,*(undefined8 *)(*plVar10 + 0x1f0)),
                iVar11 < iVar7; iVar11 = iVar11 + 1) {
              node_00 = (SimpleJSONFixed_JSONNode_o *)(**(code **)(*plVar10 + 0x188))(plVar10,iVar11);
              bVar5 = ApplicationManagers_Changelog_AottgChangelogParser__TryParseSummary
                                (node_00,&local_res20,(MethodInfo *)0x0);
              if (!bVar5) {
                return false;
              }
              if (__this == (System_Collections_Generic_List_ChangelogSummaryResponse__o *)0x0)
              goto label_182361bc0;
              il2cpp_runtime_helper_180012890(__this,local_res20,
                            MethodInfo_System_Collections_Generic_List_ChangelogSummaryResponse_Add);
            }
            if (__this != (System_Collections_Generic_List_ChangelogSummaryResponse__o *)0x0) {
              array = System_Collections_Generic_List_object___ToArray
                                ((System_Collections_Generic_List_T__o *)__this,
                                 (MethodInfo_929FE0 *)
                                 MethodInfo_System_Collections_Generic_List_ChangelogSummaryResponse_ToArray);
              __this_00 = il2cpp_codegen_object_new
                                    ((Il2CppClass *)
                                     TypeInfo_ApplicationManagers_Changelog_PublicChangelogListResponse);
              if (Il2CppMethodInitialized_184347a28 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata
                          (&MethodInfo_System_Array_AsReadOnly_ChangelogSummaryResponse);
                il2cpp_codegen_initialize_runtime_metadata
                          (&TypeInfo_ApplicationManagers_Changelog_ChangelogSummaryResponse_array);
                Il2CppMethodInitialized_184347a28 = '\x01';
              }
              System_Object___ctor
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_00,
                         (MethodInfo *)0x0);
              (__this_00->fields)._Total_k__BackingField = (int32_t)uVar9;
              (__this_00->fields)._Page_k__BackingField = iVar3;
              (__this_00->fields)._PageSize_k__BackingField = iVar4;
              if (array == (UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
                            *)0x0) {
                array = (UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
                         *)SZArrayNew(TypeInfo_ApplicationManagers_Changelog_ChangelogSummaryResponse_array,0)
                ;
              }
              value = System_Array__AsReadOnly_object_
                                ((System_Object_array *)array,
                                 (MethodInfo_68BBD0 *)
                                 MethodInfo_System_Array_AsReadOnly_ChangelogSummaryResponse);
              if (__this_00 != (ApplicationManagers_Changelog_PublicChangelogListResponse_o *)0x0) {
                (__this_00->fields)._Entries_k__BackingField =
                     (System_Collections_Generic_IReadOnlyList_ChangelogSummaryResponse__o *)value;
                Il2CppCodeGenWriteBarrier(&(__this_00->fields)._Entries_k__BackingField,value);
                *list = __this_00;
                Il2CppCodeGenWriteBarrier(list,__this_00);
                return true;
              }
            }
          }
        }
      }
    }
  }
label_182361bc0:
  ThrowNullReferenceException();
}


// ApplicationManagers.Changelog.AottgChangelogParser$$TryParseSummary
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__TryParseSummary (SimpleJSONFixed_JSONNode_o* node, ApplicationManagers_Changelog_ChangelogSummaryResponse_o** summary, const MethodInfo* method);
// 0x182361c60

bool ApplicationManagers_Changelog_AottgChangelogParser__TryParseSummary
               (SimpleJSONFixed_JSONNode_o *node,
               ApplicationManagers_Changelog_ChangelogSummaryResponse_o **summary,MethodInfo *method)

{
  System_String_o *value;
  System_String_o *value_00;
  System_String_o *value_01;
  System_String_o *value_02;
  System_String_o *value_03;
  bool bVar1;
  ApplicationManagers_Changelog_ChangelogSummaryResponse_o *__this;
  System_String_o *local_res8;
  System_String_o *local_res10 [2];
  System_String_o *local_res20;
  System_String_o *local_58;
  System_String_o *local_50;
  System_Guid_Fields local_48;
  
  if (Il2CppMethodInitialized_184347a2f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Changelog_ChangelogSummaryResponse);
    il2cpp_codegen_initialize_runtime_metadata(&"contentHash");
    il2cpp_codegen_initialize_runtime_metadata(&"id");
    il2cpp_codegen_initialize_runtime_metadata(&"publishedAt");
    il2cpp_codegen_initialize_runtime_metadata(&"version");
    il2cpp_codegen_initialize_runtime_metadata(&"updatedAt");
    Il2CppMethodInitialized_184347a2f = '\x01';
  }
  local_res8 = (System_String_o *)0x0;
  local_res10[0] = (System_String_o *)0x0;
  local_res20 = (System_String_o *)0x0;
  local_58 = (System_String_o *)0x0;
  local_50 = (System_String_o *)0x0;
  *summary = (ApplicationManagers_Changelog_ChangelogSummaryResponse_o *)0x0;
  Il2CppCodeGenWriteBarrier(summary,(void *)0x0);
  if (Il2CppMethodInitialized_184347a30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347a30 = '\x01';
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
      local_48._d = '\0';
      local_48._e = '\0';
      local_48._f = '\0';
      local_48._g = '\0';
      local_48._h = '\0';
      local_48._i = '\0';
      local_48._j = '\0';
      local_48._k = '\0';
      bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                        (node,"id",&local_res8,(MethodInfo *)0x0);
      if (bVar1) {
        bVar1 = System_Guid__TryParse(local_res8,(System_Guid_o *)&local_48,(MethodInfo *)0x0);
        if (bVar1) {
          bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                            (node,"version",local_res10,(MethodInfo *)0x0);
          if (bVar1) {
            bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                              (node,"contentHash",&local_res20,(MethodInfo *)0x0);
            if (bVar1) {
              bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                                (node,"publishedAt",&local_58,(MethodInfo *)0x0);
              if (bVar1) {
                bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                                  (node,"updatedAt",&local_50,(MethodInfo *)0x0);
                value_03 = local_50;
                value_02 = local_58;
                value_01 = local_res20;
                value_00 = local_res10[0];
                value = local_res8;
                if (bVar1) {
                  __this = il2cpp_codegen_object_new
                                     ((Il2CppClass *)
                                      TypeInfo_ApplicationManagers_Changelog_ChangelogSummaryResponse);
                  System_Object___ctor
                            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,
                             (MethodInfo *)0x0);
                  (__this->fields)._Id_k__BackingField = value;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._Id_k__BackingField,value);
                  (__this->fields)._Version_k__BackingField = value_00;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._Version_k__BackingField,value_00);
                  (__this->fields)._ContentHash_k__BackingField = value_01;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._ContentHash_k__BackingField,value_01);
                  (__this->fields)._PublishedAt_k__BackingField = value_02;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._PublishedAt_k__BackingField,value_02);
                  (__this->fields)._UpdatedAt_k__BackingField = value_03;
                  Il2CppCodeGenWriteBarrier(&(__this->fields)._UpdatedAt_k__BackingField,value_03);
                  *summary = __this;
                  Il2CppCodeGenWriteBarrier(summary,__this);
                  return true;
                }
              }
            }
          }
        }
      }
    }
  }
  return false;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$TryParse<object>
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__TryParse_object_ (System_String_o* json, ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o* parser, Il2CppObject** value, System_String_o** error, const MethodInfo_68AC50* method);
// 0x18068ac50
// eh: try 0x18068acad..0x18068ad64 -> pad 0x183315840 (+2 call sites) catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 30 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18068acef: mov rax, qword ptr [rsp + 0x70]
// asm:   0x18068acf4: mov r8, qword ptr [rax + 0x38]
// asm:   0x18068acf8: mov r8, qword ptr [r8 + 0x10]
// asm:   0x18068acfc: mov rdx, qword ptr [rsp + 0x68]
// asm:   0x18068ad01: mov rcx, qword ptr [rsp + 0x60]
// asm:   0x18068ad06: call 0x180026910  ; il2cpp_runtime_helper_180026910()
// asm:   0x18068ad0b: jmp 0x18068ad49
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

bool ApplicationManagers_Changelog_AottgChangelogParser__TryParse_object_
               (System_String_o *json,ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *parser,
               Il2CppObject **value,System_String_o **error,MethodInfo_68AC50 *method)

{
  bool bVar1;
  char cVar2;
  undefined1 uVar3;
  SimpleJSONFixed_JSONNode_o *pSVar4;
  
  if (method->rgctx_data == (MethodInfo_68AC50_RGCTXs *)0x0) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  *value = (Il2CppObject *)0x0;
  *error = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(error,(void *)0x0);
  bVar1 = System_String__IsNullOrWhiteSpace(json,(MethodInfo *)0x0);
  if (bVar1) {
    if (Il2CppMethodInitialized_18433df6c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"bad_response");
      Il2CppMethodInitialized_18433df6c = '\x01';
    }
    *value = (Il2CppObject *)0x0;
    *error = "bad_response";
    Il2CppCodeGenWriteBarrier(error,"bad_response");
    uVar3 = 0;
  }
  else {
    pSVar4 = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
    if (parser == (ApplicationManagers_Changelog_AottgChangelogParser_Parser_T__o *)0x0) {
      ThrowNullReferenceException();
    }
    cVar2 = (*(code *)(parser->fields).invoke_impl)
                      ((parser->fields).method_code,pSVar4,value,(parser->fields).method);
    if (cVar2 == '\0') {
      uVar3 = il2cpp_runtime_helper_180026910(value,error,
                            method->rgctx_data->_2_ApplicationManagers_Changelog_AottgChangelogParser_Fail_T_)
      ;
    }
    else {
      uVar3 = 1;
    }
  }
  return (bool)uVar3;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$ReadGuid
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__ReadGuid (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, System_String_o** value, const MethodInfo* method);
// 0x182360b70

bool ApplicationManagers_Changelog_AottgChangelogParser__ReadGuid
               (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,System_String_o **value,
               MethodInfo *method)

{
  bool bVar1;
  System_Guid_Fields local_18;
  
  local_18._a = 0;
  local_18._b = 0;
  local_18._c = 0;
  local_18._d = '\0';
  local_18._e = '\0';
  local_18._f = '\0';
  local_18._g = '\0';
  local_18._h = '\0';
  local_18._i = '\0';
  local_18._j = '\0';
  local_18._k = '\0';
  bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                    (node,key,value,(MethodInfo *)0x0);
  if (bVar1) {
    bVar1 = System_Guid__TryParse(*value,(System_Guid_o *)&local_18,(MethodInfo *)0x0);
    return bVar1;
  }
  return false;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$ReadRequiredString
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, System_String_o** value, const MethodInfo* method);
// 0x182360d80

bool ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
               (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,System_String_o **value,
               MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_c *pSVar1;
  bool bVar2;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  System_Xml_Schema_XmlSchemaObject_o *pSVar4;
  System_String_o *pSVar5;
  
  *value = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(value,(void *)0x0);
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,(MethodInfo *)key);
    if (!bVar2) {
      return false;
    }
    pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)key);
    if (pSVar3 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      pSVar4 = (*(pSVar3->klass->vtable)._13_Clone.methodPtr)(pSVar3,(pSVar3->klass->vtable)._13_Clone.method)
      ;
      if ((char)pSVar4 == '\0') {
        return false;
      }
      pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)key);
      if (pSVar3 != (System_Xml_Schema_XmlSchema_o *)0x0) {
        pSVar1 = pSVar3->klass;
        pSVar5 = (System_String_o *)
                 (*(pSVar1->vtable)._9_SetUnhandledAttributes.methodPtr)
                           (pSVar3,(UnityEngine_GameObject_o *)
                                   (pSVar1->vtable)._9_SetUnhandledAttributes.method,(MethodInfo *)pSVar1);
        if (pSVar5 != (System_String_o *)0x0) {
          pSVar5 = System_String__Trim(pSVar5,(MethodInfo *)0x0);
          *value = pSVar5;
          Il2CppCodeGenWriteBarrier(value,pSVar5);
          bVar2 = System_String__IsNullOrEmpty(*value,(MethodInfo *)0x0);
          return !bVar2;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Changelog.AottgChangelogParser$$ReadNullableString
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__ReadNullableString (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, System_String_o** value, const MethodInfo* method);
// 0x182360c80

bool ApplicationManagers_Changelog_AottgChangelogParser__ReadNullableString
               (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,System_String_o **value,
               MethodInfo *method)

{
  bool bVar1;
  char cVar2;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  
  *value = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(value,(void *)0x0);
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,(MethodInfo *)key);
    if (!bVar1) {
      return false;
    }
    pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)key);
    if (pSVar3 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      cVar2 = (*(code *)((Il2CppClass *)pSVar3->klass)->vtable[15].methodPtr)(pSVar3,((Il2CppClass *)pSVar3->klass)->vtable[15].method);
      if (cVar2 == '\0') {
        bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__ReadRequiredString
                          (node,key,value,(MethodInfo *)0x0);
        return bVar1;
      }
      return true;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Changelog.AottgChangelogParser$$ReadNonNegativeInt
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__ReadNonNegativeInt (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, int32_t* value, const MethodInfo* method);
// 0x182360bb0

bool ApplicationManagers_Changelog_AottgChangelogParser__ReadNonNegativeInt
               (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,int32_t *value,MethodInfo *method)

{
  System_Xml_Schema_XmlSchema_c *pSVar1;
  bool bVar2;
  char cVar3;
  int32_t iVar4;
  System_Xml_Schema_XmlSchema_o *pSVar5;
  
  *value = 0;
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,(MethodInfo *)key);
    if (!bVar2) {
      return false;
    }
    pSVar5 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)key);
    if (pSVar5 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      pSVar1 = pSVar5->klass;
      cVar3 = (*(pSVar1->vtable)._12_set_NameAttribute.methodPtr)
                        (pSVar5,(System_Type_o *)(pSVar1->vtable)._12_set_NameAttribute.method,
                         (MethodInfo *)pSVar1);
      if (cVar3 == '\0') {
        return false;
      }
      pSVar5 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)key);
      if (pSVar5 != (System_Xml_Schema_XmlSchema_o *)0x0) {
        iVar4 = (*(code *)((Il2CppClass *)pSVar5->klass)->vtable[35].methodPtr)
                          (pSVar5,((Il2CppClass *)pSVar5->klass)->vtable[35].method);
        *value = iVar4;
        return (bool)((byte)((uint)iVar4 >> 0x1f) ^ 1);
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Changelog.AottgChangelogParser$$ReadPositiveInt
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__ReadPositiveInt (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, int32_t* value, const MethodInfo* method);
// 0x182360d50

bool ApplicationManagers_Changelog_AottgChangelogParser__ReadPositiveInt
               (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,int32_t *value,MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = ApplicationManagers_Changelog_AottgChangelogParser__ReadNonNegativeInt
                    (node,key,value,(MethodInfo *)0x0);
  if (!bVar1) {
    return false;
  }
  return 0 < *value;
}


// ApplicationManagers.Changelog.AottgChangelogParser$$IsNull
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__IsNull (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, const MethodInfo* method);
// 0x182360a70

bool ApplicationManagers_Changelog_AottgChangelogParser__IsNull
               (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,MethodInfo *method)

{
  bool bVar1;
  undefined1 uVar2;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,(MethodInfo *)key);
    if (!bVar1) {
      return false;
    }
    pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)key);
    if (pSVar3 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      uVar2 = (*(code *)((Il2CppClass *)pSVar3->klass)->vtable[15].methodPtr)(pSVar3,((Il2CppClass *)pSVar3->klass)->vtable[15].method);
      return (bool)uVar2;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Changelog.AottgChangelogParser$$IsObject
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__IsObject (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x182360af0

bool ApplicationManagers_Changelog_AottgChangelogParser__IsObject
               (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347a30 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347a30 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    return false;
  }
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar1 = (*(node->klass->vtable)._17_get_IsObject.methodPtr)
                      (node,(node->klass->vtable)._17_get_IsObject.method);
    return bVar1;
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Changelog.AottgChangelogParser$$Fail<object>
// il2cpp: bool ApplicationManagers_Changelog_AottgChangelogParser__Fail_object_ (Il2CppObject** value, System_String_o** error, const MethodInfo_68ABF0* method);
// 0x18068abf0

bool ApplicationManagers_Changelog_AottgChangelogParser__Fail_object_
               (Il2CppObject **value,System_String_o **error,MethodInfo_68ABF0 *method)

{
  if (Il2CppMethodInitialized_18433df6c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"bad_response");
    Il2CppMethodInitialized_18433df6c = '\x01';
  }
  *value = (Il2CppObject *)0x0;
  *error = "bad_response";
  Il2CppCodeGenWriteBarrier(error,"bad_response");
  return false;
}


