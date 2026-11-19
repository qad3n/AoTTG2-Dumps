// Type: ApplicationManagers.Credits.AottgCreditsParser
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Credits/AottgCreditsParser.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Credits.AottgCreditsParser$$TryParse
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__TryParse (System_String_o* json, ApplicationManagers_Credits_AottgCreditsResponse_o** credits, System_String_o** error, const MethodInfo* method);
// 0x5e22b80
// eh: try 0x5e22c0b..0x5e22c23 -> pad 0x5e22c35 (+1 call sites) catch Il2CppExceptionWrapper, cleanup [managed catch: runtime default class]
// eh: try 0x5e22c59..0x5e22c97 -> pad 0x5e22c97 (+1 call sites) cleanup
// eh: try 0x5e22c9a..0x5e22c9f -> pad 0x5e22ca7 catch (...) [compiler noexcept guard]
// asm: 34 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e22c33: jmp 0x5e22c35
// asm:   0x5e22c35: mov r15, rax
// asm:   0x5e22c38: cmp edx, 1
// asm:   0x5e22c3b: jne 0x5e22c9f
// asm:   0x5e22c3d: mov rdi, r15
// asm:   0x5e22c40: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e22c45: mov rbx, rax
// asm:   0x5e22c48: lea rax, [rip + 0x1733a79]
// asm:   0x5e22c4f: mov rdi, qword ptr [rax + 0x10]
// asm:   0x5e22c53: mov rax, qword ptr [rbx]
// asm:   0x5e22c56: mov rsi, qword ptr [rax]
// asm:   0x5e22c59: call 0x30d6910  ; il2cpp_runtime_helper_030d6910()
// asm:   0x5e22c5e: test al, al
// asm:   0x5e22c60: je 0x5e22c76
// asm:   0x5e22c62: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e22c67: mov rdi, r12
// asm:   0x5e22c6a: mov rsi, r14
// asm:   0x5e22c6d: call 0x5e22cb0  ; ApplicationManagers_Credits_AottgCreditsParser__Fail()
// asm:   0x5e22c72: xor ebx, ebx
// asm:   0x5e22c74: jmp 0x5e22c25
// asm:   0x5e22c76: mov edi, 8
// asm:   0x5e22c7b: call 0x6e255b0  ; __cxa_allocate_exception()
// asm:   0x5e22c80: mov rcx, qword ptr [rbx]
// asm:   0x5e22c83: mov qword ptr [rax], rcx
// asm:   0x5e22c86: lea rsi, [rip + 0x100a873]
// asm:   0x5e22c8d: mov rdi, rax
// asm:   0x5e22c90: xor edx, edx
// asm:   0x5e22c92: call 0x6e255c0  ; __cxa_throw()
// asm:   0x5e22c97: mov r15, rax
// asm:   0x5e22c9a: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e22c9f: mov rdi, r15
// asm:   0x5e22ca2: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e22ca7: mov rdi, rax
// asm:   0x5e22caa: call 0x2ab61e0  ; __clang_call_terminate()

bool ApplicationManagers_Credits_AottgCreditsParser__TryParse
               (System_String_o *json,ApplicationManagers_Credits_AottgCreditsResponse_o **credits,
               System_String_o **error,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *root;
  
  *credits = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
  Il2CppCodeGenWriteBarrier(credits);
  *error = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(error);
  bVar1 = System_String__IsNullOrWhiteSpace(json,(MethodInfo *)0x0);
  if (bVar1) {
    if (Il2CppMethodInitialized_075484d0 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"bad_response");
      Il2CppMethodInitialized_075484d0 = '\x01';
    }
    *credits = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
    bVar1 = false;
    Il2CppCodeGenWriteBarrier(credits);
    *error = "bad_response";
    Il2CppCodeGenWriteBarrier(error);
  }
  else {
    root = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
    bVar1 = ApplicationManagers_Credits_AottgCreditsParser__TryParse_5d22d10(root,credits,error,method);
  }
  return bVar1;
}


// ApplicationManagers.Credits.AottgCreditsParser$$TryParse
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__TryParse (SimpleJSONFixed_JSONNode_o* root, ApplicationManagers_Credits_AottgCreditsResponse_o** credits, System_String_o** error, const MethodInfo* method);
// 0x5e22d10

bool ApplicationManagers_Credits_AottgCreditsParser__TryParse_5d22d10
               (SimpleJSONFixed_JSONNode_o *root,ApplicationManagers_Credits_AottgCreditsResponse_o **credits,
               System_String_o **error,MethodInfo *method)

{
  bool bVar1;
  uint32_t length;
  int iVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  SimpleJSONFixed_JSONArray_o *pSVar4;
  ApplicationManagers_Credits_AottgCreditCategory_array *categories;
  ApplicationManagers_Credits_AottgCreditsResponse_o *__this;
  MethodInfo *method_00;
  ApplicationManagers_Credits_AottgCreditCategory_o **category;
  ulong uVar5;
  undefined1 auVar6 [16];
  
  if (Il2CppMethodInitialized_075484c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Credits_AottgCreditCategory_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditsResponse);
    il2cpp_codegen_initialize_runtime_metadata(&"categories");
    Il2CppMethodInitialized_075484c7 = '\x01';
  }
  *credits = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
  Il2CppCodeGenWriteBarrier(credits);
  *error = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(error);
  if (Il2CppMethodInitialized_075484cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075484cf = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(root,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
label_05e22f64:
    if (Il2CppMethodInitialized_075484d0 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"bad_response");
      Il2CppMethodInitialized_075484d0 = '\x01';
    }
    *credits = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
    Il2CppCodeGenWriteBarrier(credits);
    *error = "bad_response";
    Il2CppCodeGenWriteBarrier(error);
    return false;
  }
  if (root != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar1 = (*(root->klass->vtable)._17_get_IsObject.methodPtr)
                      (root,(root->klass->vtable)._17_get_IsObject.method);
    if ((!bVar1) ||
       (bVar1 = (*(root->klass->vtable)._28_HasKey.methodPtr)
                          (root,"categories",(root->klass->vtable)._28_HasKey.method), !bVar1))
    goto label_05e22f64;
    pSVar3 = (*(root->klass->vtable)._7_get_Item.methodPtr)
                       (root,"categories",(root->klass->vtable)._7_get_Item.method);
    if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      bVar1 = (*(pSVar3->klass->vtable)._16_get_IsArray.methodPtr)
                        (pSVar3,(pSVar3->klass->vtable)._16_get_IsArray.method);
      if (!bVar1) goto label_05e22f64;
      pSVar3 = (*(root->klass->vtable)._7_get_Item.methodPtr)
                         (root,"categories",(root->klass->vtable)._7_get_Item.method);
      if ((pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
         (pSVar4 = (*(pSVar3->klass->vtable)._45_get_AsArray.methodPtr)
                             (pSVar3,(pSVar3->klass->vtable)._45_get_AsArray.method),
         pSVar4 != (SimpleJSONFixed_JSONArray_o *)0x0)) {
        length = (**(code **)((long)pSVar4->klass + 0x1e8))
                           (pSVar4,*(undefined8 *)((long)pSVar4->klass + 0x1f0));
        categories = (ApplicationManagers_Credits_AottgCreditCategory_array *)
                     SZArrayNew(TypeInfo_ApplicationManagers_Credits_AottgCreditCategory_array,length);
        iVar2 = (**(code **)((long)pSVar4->klass + 0x1e8))
                          (pSVar4,*(undefined8 *)((long)pSVar4->klass + 0x1f0));
        if (0 < iVar2) {
          if (categories == (ApplicationManagers_Credits_AottgCreditCategory_array *)0x0) {
            (**(code **)((long)pSVar4->klass + 0x188))(pSVar4,0,*(undefined8 *)((long)pSVar4->klass + 400));
            ThrowNullReferenceException();
          }
          category = categories->m_Items;
          uVar5 = 0;
          do {
            auVar6 = (**(code **)((long)pSVar4->klass + 0x188))
                               (pSVar4,uVar5 & 0xffffffff,*(undefined8 *)((long)pSVar4->klass + 400));
            if ((uint)categories->max_length <= uVar5) {
              ThrowIndexOutOfRangeException();
            }
            bVar1 = ApplicationManagers_Credits_AottgCreditsParser__TryParseCategory
                              (auVar6._0_8_,category,auVar6._8_8_);
            if (!bVar1) goto label_05e22f64;
            uVar5 = uVar5 + 1;
            iVar2 = (**(code **)((long)pSVar4->klass + 0x1e8))
                              (pSVar4,*(undefined8 *)((long)pSVar4->klass + 0x1f0));
            category = category + 1;
          } while ((long)uVar5 < (long)iVar2);
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsResponse);
        ApplicationManagers_Credits_AottgCreditsResponse___ctor(__this,categories,method_00);
        *credits = __this;
        Il2CppCodeGenWriteBarrier(credits);
        return true;
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Credits.AottgCreditsParser$$TryParseCategory
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__TryParseCategory (SimpleJSONFixed_JSONNode_o* node, ApplicationManagers_Credits_AottgCreditCategory_o** category, const MethodInfo* method);
// 0x5e23060

bool ApplicationManagers_Credits_AottgCreditsParser__TryParseCategory
               (SimpleJSONFixed_JSONNode_o *node,ApplicationManagers_Credits_AottgCreditCategory_o **category,
               MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditGroup_array *groups;
  ApplicationManagers_Credits_AottgCreditContributor_array *contributors;
  System_String_o *description;
  System_String_o *name;
  bool bVar1;
  ApplicationManagers_Credits_AottgCreditCategory_o *__this;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *in_R9;
  ApplicationManagers_Credits_AottgCreditGroup_array *local_50;
  ApplicationManagers_Credits_AottgCreditContributor_array *local_48;
  System_String_o *local_40;
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_075484c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditCategory);
    il2cpp_codegen_initialize_runtime_metadata(&"name");
    Il2CppMethodInitialized_075484c8 = '\x01';
  }
  local_38 = (System_String_o *)0x0;
  local_40 = (System_String_o *)0x0;
  local_48 = (ApplicationManagers_Credits_AottgCreditContributor_array *)0x0;
  local_50 = (ApplicationManagers_Credits_AottgCreditGroup_array *)0x0;
  *category = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x0;
  Il2CppCodeGenWriteBarrier(category);
  if (Il2CppMethodInitialized_075484cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075484cf = '\x01';
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
    if ((((bVar1) &&
         (bVar1 = ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString
                            (node,"name",&local_38,in_RCX), bVar1)) &&
        (bVar1 = ApplicationManagers_Credits_AottgCreditsParser__TryReadDescription(node,&local_40,method_00),
        bVar1)) &&
       ((bVar1 = ApplicationManagers_Credits_AottgCreditsParser__TryReadContributors(node,&local_48,method_01)
        , bVar1 &&
        (bVar1 = ApplicationManagers_Credits_AottgCreditsParser__TryReadGroups(node,&local_50,method_02),
        name = local_38, description = local_40, contributors = local_48, groups = local_50, bVar1)))) {
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditCategory);
      ApplicationManagers_Credits_AottgCreditCategory___ctor
                (__this,name,description,contributors,groups,in_R9);
      *category = __this;
      Il2CppCodeGenWriteBarrier(category);
      return true;
    }
  }
  return false;
}


// ApplicationManagers.Credits.AottgCreditsParser$$TryReadGroups
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__TryReadGroups (SimpleJSONFixed_JSONNode_o* node, ApplicationManagers_Credits_AottgCreditGroup_array** groups, const MethodInfo* method);
// 0x5e23670
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e23808: jmp 0x5e2380d

bool ApplicationManagers_Credits_AottgCreditsParser__TryReadGroups
               (SimpleJSONFixed_JSONNode_o *node,ApplicationManagers_Credits_AottgCreditGroup_array **groups,
               MethodInfo *method)

{
  bool bVar1;
  uint32_t length;
  int iVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  SimpleJSONFixed_JSONArray_o *pSVar4;
  ApplicationManagers_Credits_AottgCreditGroup_array *pAVar5;
  ulong uVar6;
  long lVar7;
  undefined1 auVar8 [16];
  
  if (Il2CppMethodInitialized_075484c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditGroup_array);
    il2cpp_codegen_initialize_runtime_metadata(&"groups");
    Il2CppMethodInitialized_075484c9 = '\x01';
  }
  *groups = (ApplicationManagers_Credits_AottgCreditGroup_array *)0x0;
  Il2CppCodeGenWriteBarrier(groups);
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                      (node,"groups",(node->klass->vtable)._28_HasKey.method);
    if (!bVar1) {
      return false;
    }
    pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                       (node,"groups",(node->klass->vtable)._7_get_Item.method);
    if (pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      bVar1 = (*(pSVar3->klass->vtable)._16_get_IsArray.methodPtr)
                        (pSVar3,(pSVar3->klass->vtable)._16_get_IsArray.method);
      if (!bVar1) {
        return false;
      }
      pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,"groups",(node->klass->vtable)._7_get_Item.method);
      if ((pSVar3 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
         (pSVar4 = (*(pSVar3->klass->vtable)._45_get_AsArray.methodPtr)
                             (pSVar3,(pSVar3->klass->vtable)._45_get_AsArray.method),
         pSVar4 != (SimpleJSONFixed_JSONArray_o *)0x0)) {
        length = (**(code **)((long)pSVar4->klass + 0x1e8))
                           (pSVar4,*(undefined8 *)((long)pSVar4->klass + 0x1f0));
        pAVar5 = (ApplicationManagers_Credits_AottgCreditGroup_array *)
                 SZArrayNew(TypeInfo_ApplicationManagers_Credits_AottgCreditGroup_array,length);
        *groups = pAVar5;
        Il2CppCodeGenWriteBarrier(groups);
        iVar2 = (**(code **)((long)pSVar4->klass + 0x1e8))
                          (pSVar4,*(undefined8 *)((long)pSVar4->klass + 0x1f0));
        if (iVar2 < 1) {
          return true;
        }
        lVar7 = 0x20;
        uVar6 = 0;
        while( true ) {
          auVar8 = (**(code **)((long)pSVar4->klass + 0x188))
                             (pSVar4,uVar6 & 0xffffffff,*(undefined8 *)((long)pSVar4->klass + 400));
          pAVar5 = *groups;
          if (pAVar5 == (ApplicationManagers_Credits_AottgCreditGroup_array *)0x0) break;
          if ((uint)pAVar5->max_length <= uVar6) {
            ThrowIndexOutOfRangeException();
          }
          bVar1 = ApplicationManagers_Credits_AottgCreditsParser__TryParseGroup
                            (auVar8._0_8_,
                             (ApplicationManagers_Credits_AottgCreditGroup_o **)
                             ((long)pAVar5->m_Items + lVar7 + -0x20),auVar8._8_8_);
          if (!bVar1) {
            return bVar1;
          }
          uVar6 = uVar6 + 1;
          iVar2 = (**(code **)((long)pSVar4->klass + 0x1e8))
                            (pSVar4,*(undefined8 *)((long)pSVar4->klass + 0x1f0));
          lVar7 = lVar7 + 8;
          if ((long)iVar2 <= (long)uVar6) {
            return bVar1;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Credits.AottgCreditsParser$$TryParseGroup
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__TryParseGroup (SimpleJSONFixed_JSONNode_o* node, ApplicationManagers_Credits_AottgCreditGroup_o** group, const MethodInfo* method);
// 0x5e23830

bool ApplicationManagers_Credits_AottgCreditsParser__TryParseGroup
               (SimpleJSONFixed_JSONNode_o *node,ApplicationManagers_Credits_AottgCreditGroup_o **group,
               MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditContributor_array *contributors;
  System_String_o *description;
  System_String_o *title;
  bool bVar1;
  ApplicationManagers_Credits_AottgCreditGroup_o *__this;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_R8;
  ApplicationManagers_Credits_AottgCreditContributor_array *local_40;
  System_String_o *local_38;
  System_String_o *local_30;
  
  if (Il2CppMethodInitialized_075484ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditGroup);
    il2cpp_codegen_initialize_runtime_metadata(&"title");
    Il2CppMethodInitialized_075484ca = '\x01';
  }
  local_30 = (System_String_o *)0x0;
  local_38 = (System_String_o *)0x0;
  local_40 = (ApplicationManagers_Credits_AottgCreditContributor_array *)0x0;
  *group = (ApplicationManagers_Credits_AottgCreditGroup_o *)0x0;
  Il2CppCodeGenWriteBarrier(group);
  if (Il2CppMethodInitialized_075484cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075484cf = '\x01';
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
    if ((((bVar1) &&
         (bVar1 = ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString
                            (node,"title",&local_30,in_RCX), bVar1)) &&
        (bVar1 = ApplicationManagers_Credits_AottgCreditsParser__TryReadDescription(node,&local_38,method_00),
        bVar1)) &&
       (bVar1 = ApplicationManagers_Credits_AottgCreditsParser__TryReadContributors(node,&local_40,method_01),
       title = local_30, description = local_38, contributors = local_40, bVar1)) {
      __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditGroup)
      ;
      ApplicationManagers_Credits_AottgCreditGroup___ctor(__this,title,description,contributors,in_R8);
      *group = __this;
      Il2CppCodeGenWriteBarrier(group);
      return true;
    }
  }
  return false;
}


// ApplicationManagers.Credits.AottgCreditsParser$$TryReadContributors
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__TryReadContributors (SimpleJSONFixed_JSONNode_o* node, ApplicationManagers_Credits_AottgCreditContributor_array** contributors, const MethodInfo* method);
// 0x5e233e0
// asm: 10 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e23617: lea rax, [rip + 0x146fd82]  ; MethodInfo_System_Collections_Generic_List_AottgCreditContributor_ToArray
// asm:   0x5e2361e: mov rsi, qword ptr [rax]
// asm:   0x5e23621: mov rdi, rbx
// asm:   0x5e23624: call 0x3a5f5a0  ; System_Collections_Generic_List_object___ToArray()
// asm:   0x5e23629: mov qword ptr [r14], rax
// asm:   0x5e2362c: mov rdi, r14
// asm:   0x5e2362f: mov rsi, rax
// asm:   0x5e23632: call 0x30d5fb0  ; Il2CppCodeGenWriteBarrier()
// asm:   0x5e23637: mov bl, 1
// asm:   0x5e23639: jmp 0x5e23601

bool ApplicationManagers_Credits_AottgCreditsParser__TryReadContributors
               (SimpleJSONFixed_JSONNode_o *node,
               ApplicationManagers_Credits_AottgCreditContributor_array **contributors,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  MethodInfo *pMVar3;
  bool bVar4;
  int32_t capacity;
  int iVar5;
  int iVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  SimpleJSONFixed_JSONArray_o *pSVar8;
  System_Collections_Generic_List_AottgCreditContributor__o *__this;
  ApplicationManagers_Credits_AottgCreditContributor_array *pAVar9;
  undefined1 auVar10 [16];
  ApplicationManagers_Credits_AottgCreditContributor_o *local_38;
  
  if (Il2CppMethodInitialized_075484cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgCreditContributor_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgCreditContributor_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgCreditContributor_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_AottgCreditContributor);
    il2cpp_codegen_initialize_runtime_metadata(&"contributors");
    Il2CppMethodInitialized_075484cb = '\x01';
  }
  local_38 = (ApplicationManagers_Credits_AottgCreditContributor_o *)0x0;
  *contributors = (ApplicationManagers_Credits_AottgCreditContributor_array *)0x0;
  Il2CppCodeGenWriteBarrier(contributors);
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar4 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                      (node,"contributors",(node->klass->vtable)._28_HasKey.method);
    if (!bVar4) {
      return false;
    }
    pSVar7 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                       (node,"contributors",(node->klass->vtable)._7_get_Item.method);
    if (pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      bVar4 = (*(pSVar7->klass->vtable)._16_get_IsArray.methodPtr)
                        (pSVar7,(pSVar7->klass->vtable)._16_get_IsArray.method);
      if (!bVar4) {
        return false;
      }
      pSVar7 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,"contributors",(node->klass->vtable)._7_get_Item.method);
      if ((pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
         (pSVar8 = (*(pSVar7->klass->vtable)._45_get_AsArray.methodPtr)
                             (pSVar7,(pSVar7->klass->vtable)._45_get_AsArray.method),
         pSVar8 != (SimpleJSONFixed_JSONArray_o *)0x0)) {
        capacity = (**(code **)((long)pSVar8->klass + 0x1e8))
                             (pSVar8,*(undefined8 *)((long)pSVar8->klass + 0x1f0));
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgCreditContributor);
        System_Collections_Generic_List_object____ctor_395c990
                  ((System_Collections_Generic_List_object__o *)__this,capacity,
                   (MethodInfo_395C990 *)
                   MethodInfo_System_Collections_Generic_List_AottgCreditContributor_ctor);
        iVar5 = (**(code **)((long)pSVar8->klass + 0x1e8))
                          (pSVar8,*(undefined8 *)((long)pSVar8->klass + 0x1f0));
        if (iVar5 < 1) {
          if (__this != (System_Collections_Generic_List_AottgCreditContributor__o *)0x0) goto label_05e23617;
        }
        else {
          if (__this != (System_Collections_Generic_List_AottgCreditContributor__o *)0x0) {
            iVar5 = 0;
            do {
              auVar10 = (**(code **)((long)pSVar8->klass + 0x188))
                                  (pSVar8,iVar5,*(undefined8 *)((long)pSVar8->klass + 400));
              bVar4 = ApplicationManagers_Credits_AottgCreditsParser__TryParseContributor
                                (auVar10._0_8_,&local_38,auVar10._8_8_);
              pMVar3 = MethodInfo_System_Collections_Generic_List_AottgCreditContributor_Add;
              if (!bVar4) {
                return false;
              }
              piVar1 = &(__this->fields)._version;
              *piVar1 = *piVar1 + 1;
              pAVar9 = (__this->fields)._items;
              if (pAVar9 == (ApplicationManagers_Credits_AottgCreditContributor_array *)0x0)
              goto label_05e23661;
              uVar2 = (__this->fields)._size;
              if (uVar2 < (uint)pAVar9->max_length) {
                (__this->fields)._size = uVar2 + 1;
                pAVar9->m_Items[(int)uVar2] = local_38;
                Il2CppCodeGenWriteBarrier(pAVar9->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)local_38,
                           (MethodInfo_395D230 *)pMVar3->klass->rgctx_data[0xe].method);
              }
              iVar5 = iVar5 + 1;
              iVar6 = (**(code **)((long)pSVar8->klass + 0x1e8))
                                (pSVar8,*(undefined8 *)((long)pSVar8->klass + 0x1f0));
            } while (iVar5 < iVar6);
label_05e23617:
            pAVar9 = (ApplicationManagers_Credits_AottgCreditContributor_array *)
                     System_Collections_Generic_List_object___ToArray
                               ((System_Collections_Generic_List_object__o *)__this,
                                (MethodInfo_395F5A0 *)
                                MethodInfo_System_Collections_Generic_List_AottgCreditContributor_ToArray);
            *contributors = pAVar9;
            Il2CppCodeGenWriteBarrier(contributors);
            return true;
          }
          auVar10 = (**(code **)((long)pSVar8->klass + 0x188))
                              (pSVar8,0,*(undefined8 *)((long)pSVar8->klass + 400));
          bVar4 = ApplicationManagers_Credits_AottgCreditsParser__TryParseContributor
                            (auVar10._0_8_,&local_38,auVar10._8_8_);
          if (!bVar4) {
            return false;
          }
        }
      }
    }
  }
label_05e23661:
  ThrowNullReferenceException();
}


// ApplicationManagers.Credits.AottgCreditsParser$$TryParseContributor
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__TryParseContributor (SimpleJSONFixed_JSONNode_o* node, ApplicationManagers_Credits_AottgCreditContributor_o** contributor, const MethodInfo* method);
// 0x5e239a0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e23bc4: jmp 0x5e23bc8

bool ApplicationManagers_Credits_AottgCreditsParser__TryParseContributor
               (SimpleJSONFixed_JSONNode_o *node,
               ApplicationManagers_Credits_AottgCreditContributor_o **contributor,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  SimpleJSONFixed_JSONNode_o *pSVar3;
  ApplicationManagers_Credits_AottgCreditContributor_o *__this;
  System_String_o *value;
  MethodInfo *in_RCX;
  MethodInfo *method_00;
  System_String_o *local_40;
  System_Guid_Fields local_38;
  
  if (Il2CppMethodInitialized_075484cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditContributor);
    il2cpp_codegen_initialize_runtime_metadata(&"accountId");
    il2cpp_codegen_initialize_runtime_metadata(&"name");
    Il2CppMethodInitialized_075484cc = '\x01';
  }
  local_40 = (System_String_o *)0x0;
  local_38._a = 0;
  local_38._b = 0;
  local_38._c = 0;
  local_38._d = 0;
  local_38._e = 0;
  local_38._f = 0;
  local_38._g = 0;
  local_38._h = 0;
  local_38._i = 0;
  local_38._j = 0;
  local_38._k = 0;
  *contributor = (ApplicationManagers_Credits_AottgCreditContributor_o *)0x0;
  Il2CppCodeGenWriteBarrier(contributor);
  if (Il2CppMethodInitialized_075484cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075484cf = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    return false;
  }
  if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_05e23bd6:
    ThrowNullReferenceException();
  }
  bVar2 = (*(node->klass->vtable)._17_get_IsObject.methodPtr)
                    (node,(node->klass->vtable)._17_get_IsObject.method);
  if (((bVar2) &&
      (bVar2 = ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString
                         (node,"name",&local_40,in_RCX), bVar2)) &&
     (bVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                        (node,"accountId",(node->klass->vtable)._28_HasKey.method), bVar2)) {
    pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                       (node,"accountId",(node->klass->vtable)._7_get_Item.method);
    if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05e23bd6;
    bVar2 = (*(pSVar3->klass->vtable)._15_get_IsNull.methodPtr)
                      (pSVar3,(pSVar3->klass->vtable)._15_get_IsNull.method);
    if (bVar2) {
      value = (System_String_o *)0x0;
    }
    else {
      pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,"accountId",(node->klass->vtable)._7_get_Item.method);
      if (pSVar3 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05e23bd6;
      bVar2 = (*(pSVar3->klass->vtable)._13_get_IsString.methodPtr)
                        (pSVar3,(pSVar3->klass->vtable)._13_get_IsString.method);
      if (!bVar2) goto label_05e23bc6;
      method_00 = (MethodInfo *)"accountId";
      pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,"accountId",(node->klass->vtable)._7_get_Item.method);
      value = ApplicationManagers_Credits_AottgCreditsParser__Trimmed(pSVar3,method_00);
      bVar2 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if (bVar2) {
        return false;
      }
      bVar2 = System_Guid__TryParse(value,(System_Guid_o *)&local_38,(MethodInfo *)0x0);
      if (!bVar2) {
        return false;
      }
    }
    pSVar1 = local_40;
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditContributor);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields)._Name_k__BackingField = pSVar1;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._Name_k__BackingField);
    (__this->fields)._AccountId_k__BackingField = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._AccountId_k__BackingField);
    *contributor = __this;
    Il2CppCodeGenWriteBarrier(contributor);
    bVar2 = true;
  }
  else {
label_05e23bc6:
    bVar2 = false;
  }
  return bVar2;
}


// ApplicationManagers.Credits.AottgCreditsParser$$TryReadDescription
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__TryReadDescription (SimpleJSONFixed_JSONNode_o* node, System_String_o** description, const MethodInfo* method);
// 0x5e232c0

bool ApplicationManagers_Credits_AottgCreditsParser__TryReadDescription
               (SimpleJSONFixed_JSONNode_o *node,System_String_o **description,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075484cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"description");
    Il2CppMethodInitialized_075484cd = '\x01';
  }
  *description = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(description);
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                      (node,"description",(node->klass->vtable)._28_HasKey.method);
    if (!bVar1) {
      return false;
    }
    pSVar2 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                       (node,"description",(node->klass->vtable)._7_get_Item.method);
    if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      bVar1 = (*(pSVar2->klass->vtable)._15_get_IsNull.methodPtr)
                        (pSVar2,(pSVar2->klass->vtable)._15_get_IsNull.method);
      if (bVar1) {
        return true;
      }
      pSVar2 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,"description",(node->klass->vtable)._7_get_Item.method);
      if (pSVar2 != (SimpleJSONFixed_JSONNode_o *)0x0) {
        bVar1 = (*(pSVar2->klass->vtable)._13_get_IsString.methodPtr)
                          (pSVar2,(pSVar2->klass->vtable)._13_get_IsString.method);
        if (bVar1) {
          method_00 = (MethodInfo *)"description";
          pSVar2 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                             (node,"description",(node->klass->vtable)._7_get_Item.method);
          pSVar3 = ApplicationManagers_Credits_AottgCreditsParser__Trimmed(pSVar2,method_00);
          *description = pSVar3;
          Il2CppCodeGenWriteBarrier(description);
          return true;
        }
        return false;
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Credits.AottgCreditsParser$$TryReadRequiredString
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, System_String_o** value, const MethodInfo* method);
// 0x5e23200

bool ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString
               (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,System_String_o **value,
               MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *pSVar2;
  System_String_o *pSVar3;
  
  *value = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(value);
  if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_05e232ba:
    ThrowNullReferenceException();
  }
  bVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,key,(node->klass->vtable)._28_HasKey.method);
  if (bVar1) {
    pSVar2 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,key,(node->klass->vtable)._7_get_Item.method)
    ;
    if (pSVar2 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05e232ba;
    bVar1 = (*(pSVar2->klass->vtable)._13_get_IsString.methodPtr)
                      (pSVar2,(pSVar2->klass->vtable)._13_get_IsString.method);
    if (bVar1) {
      pSVar2 = (*(node->klass->vtable)._7_get_Item.methodPtr)
                         (node,key,(node->klass->vtable)._7_get_Item.method);
      pSVar3 = ApplicationManagers_Credits_AottgCreditsParser__Trimmed(pSVar2,(MethodInfo *)key);
      *value = pSVar3;
      Il2CppCodeGenWriteBarrier(value);
      bVar1 = System_String__IsNullOrEmpty(*value,(MethodInfo *)0x0);
      return !bVar1;
    }
  }
  return false;
}


// ApplicationManagers.Credits.AottgCreditsParser$$Trimmed
// il2cpp: System_String_o* ApplicationManagers_Credits_AottgCreditsParser__Trimmed (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x5e23be0

System_String_o *
ApplicationManagers_Credits_AottgCreditsParser__Trimmed(SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_075484ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075484ce = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return (System_String_o *)0x0;
  }
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar1 = (*(node->klass->vtable)._15_get_IsNull.methodPtr)
                      (node,(node->klass->vtable)._15_get_IsNull.method);
    if (bVar1) {
      return (System_String_o *)0x0;
    }
    pSVar2 = (*(node->klass->vtable)._9_get_Value.methodPtr)(node,(node->klass->vtable)._9_get_Value.method);
    if (pSVar2 != (System_String_o *)0x0) {
      pSVar2 = System_String__Trim(pSVar2,(MethodInfo *)0x0);
      return pSVar2;
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Credits.AottgCreditsParser$$IsObject
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__IsObject (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x5e22ff0

bool ApplicationManagers_Credits_AottgCreditsParser__IsObject
               (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075484cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_075484cf = '\x01';
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


// ApplicationManagers.Credits.AottgCreditsParser$$Fail
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__Fail (ApplicationManagers_Credits_AottgCreditsResponse_o** credits, System_String_o** error, const MethodInfo* method);
// 0x5e22cb0

bool ApplicationManagers_Credits_AottgCreditsParser__Fail
               (ApplicationManagers_Credits_AottgCreditsResponse_o **credits,System_String_o **error,
               MethodInfo *method)

{
  if (Il2CppMethodInitialized_075484d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"bad_response");
    Il2CppMethodInitialized_075484d0 = '\x01';
  }
  *credits = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
  Il2CppCodeGenWriteBarrier(credits);
  *error = "bad_response";
  Il2CppCodeGenWriteBarrier(error);
  return false;
}


