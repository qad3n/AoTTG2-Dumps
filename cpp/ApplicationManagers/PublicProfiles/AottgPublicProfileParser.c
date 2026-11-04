// Type: ApplicationManagers.PublicProfiles.AottgPublicProfileParser
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.PublicProfiles/AottgPublicProfileParser.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.PublicProfiles.AottgPublicProfileParser$$TryParse
// il2cpp: bool ApplicationManagers_PublicProfiles_AottgPublicProfileParser__TryParse (System_String_o* json, ApplicationManagers_PublicProfiles_AottgPublicProfile_o** profile, System_String_o** error, const MethodInfo* method);
// 0x182367050
// eh: try 0x1823670be..0x1823670da -> pad 0x183315840 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 33 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823670dc: lea rcx, [rip + 0x1d2beb5]  ; "bad_json"
// asm:   0x1823670e3: call 0x180416ea0  ; il2cpp_codegen_get_runtime_metadata()
// asm:   0x1823670e8: mov rbx, rax
// asm:   0x1823670eb: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1823670f0: mov qword ptr [rcx], 0
// asm:   0x1823670f7: xor edx, edx
// asm:   0x1823670f9: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1823670fe: mov rcx, qword ptr [rsp + 0x50]
// asm:   0x182367103: mov qword ptr [rcx], rbx
// asm:   0x182367106: jmp 0x182367126
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

bool ApplicationManagers_PublicProfiles_AottgPublicProfileParser__TryParse
               (System_String_o *json,ApplicationManagers_PublicProfiles_AottgPublicProfile_o **profile,
               System_String_o **error,MethodInfo *method)

{
  System_String_o *value;
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *node;
  
  if (Il2CppMethodInitialized_1843479f9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"empty_response");
    Il2CppMethodInitialized_1843479f9 = '\x01';
  }
  *profile = (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0;
  Il2CppCodeGenWriteBarrier(profile,(void *)0x0);
  *error = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(error,(void *)0x0);
  bVar1 = System_String__IsNullOrWhiteSpace(json,(MethodInfo *)0x0);
  value = "empty_response";
  if (bVar1) {
    *profile = (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0;
    Il2CppCodeGenWriteBarrier(profile,(void *)0x0);
    *error = value;
    Il2CppCodeGenWriteBarrier(error,value);
    bVar1 = false;
  }
  else {
    node = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
    bVar1 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__TryParse_2367140
                      (node,profile,error,(MethodInfo *)0x0);
  }
  return bVar1;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileParser$$TryParse
// il2cpp: bool ApplicationManagers_PublicProfiles_AottgPublicProfileParser__TryParse (SimpleJSONFixed_JSONNode_o* node, ApplicationManagers_PublicProfiles_AottgPublicProfile_o** profile, System_String_o** error, const MethodInfo* method);
// 0x182367140
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18236747f: mov rbp, r13
// asm:   0x18236769c: mov rbx, qword ptr [rip + 0x1d2b66d]  ; "bad_account_id"
// asm:   0x1823676a3: jmp 0x182367653

bool ApplicationManagers_PublicProfiles_AottgPublicProfileParser__TryParse_2367140
               (SimpleJSONFixed_JSONNode_o *node,
               ApplicationManagers_PublicProfiles_AottgPublicProfile_o **profile,System_String_o **error,
               MethodInfo *method)

{
  uint64_t uVar1;
  int16_t iVar2;
  undefined6 uVar3;
  bool bVar4;
  System_Xml_Schema_XmlSchema_o *pSVar5;
  System_String_o *value;
  System_String_o *value_00;
  System_String_o *pSVar6;
  System_Globalization_CultureInfo_o *formatProvider;
  System_String_o *value_01;
  System_String_array *value_02;
  System_String_o *value_03;
  System_String_o *value_04;
  System_String_o *value_05;
  System_DateTimeOffset_o *pSVar7;
  ApplicationManagers_PublicProfiles_AottgPublicProfile_o *__this;
  System_DateTimeOffset_o local_78;
  System_Guid_Fields local_68;
  System_DateTimeOffset_o local_58 [2];
  
  if (Il2CppMethodInitialized_1843479fa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfile);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Globalization_CultureInfo);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_DateTimeOffset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&"bad_response");
    il2cpp_codegen_initialize_runtime_metadata(&"bad_display_name");
    il2cpp_codegen_initialize_runtime_metadata(&"characterInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"bad_account_id");
    il2cpp_codegen_initialize_runtime_metadata(&"displayName");
    il2cpp_codegen_initialize_runtime_metadata(&"accountId");
    il2cpp_codegen_initialize_runtime_metadata(&"createdAt");
    il2cpp_codegen_initialize_runtime_metadata(&"characterName");
    il2cpp_codegen_initialize_runtime_metadata(&"avatarKey");
    il2cpp_codegen_initialize_runtime_metadata(&"description");
    il2cpp_codegen_initialize_runtime_metadata(&"roles");
    il2cpp_codegen_initialize_runtime_metadata(&"bannerKey");
    Il2CppMethodInitialized_1843479fa = '\x01';
  }
  value_01 = (System_String_o *)0x0;
  *profile = (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0;
  local_78.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
  local_78.fields._offsetMinutes = 0;
  local_78.fields._10_6_ = 0;
  local_68._a = 0;
  local_68._b = 0;
  local_68._c = 0;
  local_68._d = '\0';
  local_68._e = '\0';
  local_68._f = '\0';
  local_68._g = '\0';
  local_68._h = '\0';
  local_68._i = '\0';
  local_68._j = '\0';
  local_68._k = '\0';
  Il2CppCodeGenWriteBarrier(profile,(void *)0x0);
  *error = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(error,(void *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  pSVar6 = "bad_response";
  if (bVar4) {
    *profile = (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0;
    Il2CppCodeGenWriteBarrier(profile,(void *)0x0);
    *error = pSVar6;
    Il2CppCodeGenWriteBarrier(error,pSVar6);
    return false;
  }
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar5 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"accountId");
    value = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Trimmed
                      ((SimpleJSONFixed_JSONNode_o *)pSVar5,(MethodInfo *)0x0);
    bVar4 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    pSVar6 = "bad_account_id";
    if ((!bVar4) &&
       (bVar4 = System_Guid__TryParse(value,(System_Guid_o *)&local_68,(MethodInfo *)0x0),
       pSVar6 = "bad_account_id", bVar4)) {
      pSVar5 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"displayName");
      value_00 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Trimmed
                           ((SimpleJSONFixed_JSONNode_o *)pSVar5,(MethodInfo *)0x0);
      bVar4 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
      pSVar6 = "bad_display_name";
      if (!bVar4) {
        local_78.fields._dateTime.fields._dateData = (System_DateTime_Fields)0;
        local_78.fields._offsetMinutes = 0;
        local_78.fields._10_6_ = 0;
        pSVar5 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"createdAt");
        pSVar6 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Trimmed
                           ((SimpleJSONFixed_JSONNode_o *)pSVar5,(MethodInfo *)0x0);
        bVar4 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
        if (!bVar4) {
          if ((TypeInfo_System_Globalization_CultureInfo->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Globalization_CultureInfo);
          }
          formatProvider = System_Globalization_CultureInfo__get_InvariantCulture((MethodInfo *)0x0);
          if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
          }
          System_DateTimeOffset__TryParse
                    (pSVar6,(System_IFormatProvider_o *)formatProvider,0x80,&local_78,(MethodInfo *)0x0);
        }
        pSVar5 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"characterName");
        pSVar6 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__NullableTrimmed
                           ((SimpleJSONFixed_JSONNode_o *)pSVar5,(MethodInfo *)0x0);
        pSVar5 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"characterInfo");
        if (Il2CppMethodInitialized_1843479fb == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
          Il2CppMethodInitialized_1843479fb = '\x01';
        }
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        bVar4 = SimpleJSONFixed_JSONNode__op_Inequality
                          ((SimpleJSONFixed_JSONNode_o *)pSVar5,(Il2CppObject *)0x0,(MethodInfo *)0x0);
        if (bVar4) {
          if (pSVar5 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_1823676d6;
          bVar4 = (*(code *)((Il2CppClass *)pSVar5->klass)->vtable[15].methodPtr)(pSVar5,(MethodInfo *)((Il2CppClass *)pSVar5->klass)->vtable[15].method);
          if (!bVar4) {
            value_01 = (*(pSVar5->klass->vtable)._3_ToString.methodPtr)
                                 (pSVar5,(pSVar5->klass->vtable)._3_ToString.method);
          }
        }
        pSVar5 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"roles");
        value_02 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__StringArray
                             ((SimpleJSONFixed_JSONNode_o *)pSVar5,(MethodInfo *)0x0);
        pSVar5 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"description");
        value_03 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__NullableTrimmed
                             ((SimpleJSONFixed_JSONNode_o *)pSVar5,(MethodInfo *)0x0);
        pSVar5 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"avatarKey");
        value_04 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__NullableTrimmed
                             ((SimpleJSONFixed_JSONNode_o *)pSVar5,(MethodInfo *)0x0);
        pSVar5 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"bannerKey");
        value_05 = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__NullableTrimmed
                             ((SimpleJSONFixed_JSONNode_o *)pSVar5,(MethodInfo *)0x0);
        if ((TypeInfo_System_DateTimeOffset->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_DateTimeOffset);
        }
        pSVar7 = System_DateTimeOffset__ToUniversalTime(local_58,&local_78,(MethodInfo *)0x0);
        uVar1 = (pSVar7->fields)._dateTime.fields._dateData;
        iVar2 = (pSVar7->fields)._offsetMinutes;
        uVar3 = *(undefined6 *)&(pSVar7->fields).field_0xa;
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_ApplicationManagers_PublicProfiles_AottgPublicProfile);
        if (Il2CppMethodInitialized_1843479f6 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_string);
          Il2CppMethodInitialized_1843479f6 = '\x01';
        }
        System_Object___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
        (__this->fields)._AccountId_k__BackingField = value;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._AccountId_k__BackingField,value);
        (__this->fields)._DisplayName_k__BackingField = value_00;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._DisplayName_k__BackingField,value_00);
        (__this->fields)._CharacterName_k__BackingField = pSVar6;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._CharacterName_k__BackingField,pSVar6);
        (__this->fields)._CharacterInfoJson_k__BackingField = value_01;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._CharacterInfoJson_k__BackingField,value_01);
        if (value_02 == (System_String_array *)0x0) {
          value_02 = (System_String_array *)
                     System_Linq_Enumerable__Empty___Il2CppFullySharedGenericType_
                               ((MethodInfo_660C30 *)MethodInfo_System_Array_Empty_string);
        }
        if (__this != (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0) {
          (__this->fields)._Roles_k__BackingField = value_02;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._Roles_k__BackingField,value_02);
          (__this->fields)._Description_k__BackingField = value_03;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._Description_k__BackingField,value_03);
          (__this->fields)._AvatarKey_k__BackingField = value_04;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._AvatarKey_k__BackingField,value_04);
          (__this->fields)._BannerKey_k__BackingField = value_05;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._BannerKey_k__BackingField,value_05);
          (__this->fields)._CreatedAt_k__BackingField.fields._dateTime.fields._dateData = uVar1;
          (__this->fields)._CreatedAt_k__BackingField.fields._offsetMinutes = iVar2;
          *(undefined6 *)&(__this->fields)._CreatedAt_k__BackingField.fields.field_0xa = uVar3;
          *profile = __this;
          Il2CppCodeGenWriteBarrier(profile,__this);
          return true;
        }
        goto label_1823676d6;
      }
    }
    *profile = (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0;
    Il2CppCodeGenWriteBarrier(profile,(void *)0x0);
    *error = pSVar6;
    Il2CppCodeGenWriteBarrier(error,pSVar6);
    return false;
  }
label_1823676d6:
  ThrowNullReferenceException();
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileParser$$RawJson
// il2cpp: System_String_o* ApplicationManagers_PublicProfiles_AottgPublicProfileParser__RawJson (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x182366c10

System_String_o *
ApplicationManagers_PublicProfiles_AottgPublicProfileParser__RawJson
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843479fb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843479fb = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (*(node->klass->vtable)._15_get_IsNull.methodPtr)
                      (node,(node->klass->vtable)._15_get_IsNull.method);
    if (!bVar1) {
      pSVar2 = (*(node->klass->vtable)._3_ToString.methodPtr)(node,(node->klass->vtable)._3_ToString.method);
      return pSVar2;
    }
  }
  return (System_String_o *)0x0;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileParser$$StringArray
// il2cpp: System_String_array* ApplicationManagers_PublicProfiles_AottgPublicProfileParser__StringArray (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x182366ca0
// eh: try 0x182366e00..0x182366f6d -> pad 0x183315930 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 24 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182366df9: nop dword ptr [rax]
// asm:   0x182366ef1: mov r8, qword ptr [rsp + 0x30]
// asm:   0x182366ef6: cmp qword ptr [r8], 0
// asm:   0x182366efa: je 0x182366f0d
// asm:   0x182366efc: xor ecx, ecx
// asm:   0x182366efe: mov r8, qword ptr [r8]
// asm:   0x182366f01: mov rdx, qword ptr [rip + 0x1d323f8]  ; TypeInfo_System_IDisposable
// asm:   0x182366f08: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x182366f0d: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x182366f12: test rcx, rcx
// asm:   0x182366f15: jne 0x182366f6d
// asm:   0x182366f17: mov rsi, qword ptr [rsp + 0x60]
// asm:   0x182366f6d: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

System_String_array *
ApplicationManagers_PublicProfiles_AottgPublicProfileParser__StringArray
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  ushort uVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  bool bVar4;
  System_Collections_Generic_List_string__o *__this;
  Il2CppObject *pIVar5;
  void *pvVar6;
  VirtualInvokeData *pVVar7;
  Il2CppObject *node_00;
  System_String_o *value;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar8;
  System_String_array *pSVar9;
  ushort uVar10;
  
  if (Il2CppMethodInitialized_1843479fc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_Empty_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    Il2CppMethodInitialized_1843479fc = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar4 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar4) {
    if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
      bVar4 = (*(node->klass->vtable)._16_get_IsArray.methodPtr)
                        (node,(node->klass->vtable)._16_get_IsArray.method);
      if (!bVar4) goto label_182366f40;
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_LowLevelList_T__o *)__this,
                 (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
      pIVar5 = (Il2CppObject *)
               (*(node->klass->vtable)._27_get_Children.methodPtr)
                         (node,(node->klass->vtable)._27_get_Children.method);
      if (pIVar5 != (Il2CppObject *)0x0) {
        pIVar5 = InterfaceInvoker0_Invoke
                           (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,pIVar5);
        while( true ) {
          if (pIVar5 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pvVar6 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar5);
          if ((char)pvVar6 == '\0') break;
          if (pIVar5 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar2 = pIVar5->klass;
          uVar1 = (pIVar2->_2).interface_offsets_count;
          if (uVar1 != 0) {
            uVar10 = 0;
            pIVar3 = (pIVar2->_1).interfaceOffsets;
            do {
              if (pIVar3[uVar10].interfaceType ==
                  (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
                pVVar7 = pIVar2->vtable + pIVar3[uVar10].offset;
                goto label_182366e76;
              }
              uVar10 = uVar10 + 1;
            } while (uVar10 < uVar1);
          }
          pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                             (pIVar5,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,0
                             );
label_182366e76:
          node_00 = (*pVVar7->methodPtr)(pIVar5,pVVar7->method);
          value = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Trimmed
                            ((SimpleJSONFixed_JSONNode_o *)node_00,(MethodInfo *)0x0);
          bVar4 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
          if (!bVar4) {
            if (__this == (System_Collections_Generic_List_string__o *)0x0) {
              ThrowNullReferenceException();
            }
            il2cpp_runtime_helper_180012890(__this,value,MethodInfo_System_Collections_Generic_List_string_Add);
          }
        }
        if (pIVar5 != (Il2CppObject *)0x0) {
          InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar5);
        }
        if (__this != (System_Collections_Generic_List_string__o *)0x0) {
          pUVar8 = System_Collections_Generic_List_object___ToArray
                             ((System_Collections_Generic_List_T__o *)__this,
                              (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
          return (System_String_array *)pUVar8;
        }
      }
    }
    ThrowNullReferenceException();
  }
label_182366f40:
  pSVar9 = (System_String_array *)
           System_Linq_Enumerable__Empty___Il2CppFullySharedGenericType_
                     ((MethodInfo_660C30 *)MethodInfo_System_Array_Empty_string);
  return pSVar9;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileParser$$NullableTrimmed
// il2cpp: System_String_o* ApplicationManagers_PublicProfiles_AottgPublicProfileParser__NullableTrimmed (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x182366b70

System_String_o *
ApplicationManagers_PublicProfiles_AottgPublicProfileParser__NullableTrimmed
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  bool bVar1;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_1843479fd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843479fd = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
      ThrowNullReferenceException();
    }
    bVar1 = (*(node->klass->vtable)._15_get_IsNull.methodPtr)
                      (node,(node->klass->vtable)._15_get_IsNull.method);
    if (!bVar1) {
      value = ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Trimmed(node,(MethodInfo *)0x0);
      bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if (bVar1) {
        value = (System_String_o *)0x0;
      }
      return value;
    }
  }
  return (System_String_o *)0x0;
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileParser$$Trimmed
// il2cpp: System_String_o* ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Trimmed (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x182366f80

System_String_o *
ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Trimmed
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_1843479fe == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_1843479fe = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
      bVar1 = (*(node->klass->vtable)._15_get_IsNull.methodPtr)
                        (node,(node->klass->vtable)._15_get_IsNull.method);
      if (bVar1) goto label_182367024;
      pSVar2 = (*(node->klass->vtable)._9_get_Value.methodPtr)(node,(node->klass->vtable)._9_get_Value.method)
      ;
      if ((pSVar2 != (System_String_o *)0x0) ||
         (pSVar2 = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8), pSVar2 != (System_String_o *)0x0)
         ) {
        pSVar2 = System_String__Trim(pSVar2,(MethodInfo *)0x0);
        return pSVar2;
      }
    }
    ThrowNullReferenceException();
  }
label_182367024:
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// ApplicationManagers.PublicProfiles.AottgPublicProfileParser$$Fail
// il2cpp: bool ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Fail (ApplicationManagers_PublicProfiles_AottgPublicProfile_o** profile, System_String_o** error, System_String_o* value, const MethodInfo* method);
// 0x182366b30

bool ApplicationManagers_PublicProfiles_AottgPublicProfileParser__Fail
               (ApplicationManagers_PublicProfiles_AottgPublicProfile_o **profile,System_String_o **error,
               System_String_o *value,MethodInfo *method)

{
  *profile = (ApplicationManagers_PublicProfiles_AottgPublicProfile_o *)0x0;
  Il2CppCodeGenWriteBarrier(profile,(void *)0x0);
  *error = value;
  Il2CppCodeGenWriteBarrier(error,value);
  return false;
}


