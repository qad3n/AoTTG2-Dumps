// Type: ApplicationManagers.Credits.AottgCreditsParser
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/ApplicationManagers.Credits/AottgCreditsParser.cs
// Prior real C# source: none
// --------------------------------

// ApplicationManagers.Credits.AottgCreditsParser$$TryParse
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__TryParse (System_String_o* json, ApplicationManagers_Credits_AottgCreditsResponse_o** credits, System_String_o** error, const MethodInfo* method);
// 0x182365080
// eh: try 0x1823650d2..0x1823650ee -> pad 0x183315840 catch Il2CppExceptionWrapper [managed catch: runtime default class]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823650f0: xor r8d, r8d
// asm:   0x1823650f3: mov rdx, qword ptr [rsp + 0x50]
// asm:   0x1823650f8: mov rcx, qword ptr [rsp + 0x48]
// asm:   0x1823650fd: call 0x182364380  ; ApplicationManagers_Credits_AottgCreditsParser__Fail()
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

bool ApplicationManagers_Credits_AottgCreditsParser__TryParse
               (System_String_o *json,ApplicationManagers_Credits_AottgCreditsResponse_o **credits,
               System_String_o **error,MethodInfo *method)

{
  bool bVar1;
  SimpleJSONFixed_JSONNode_o *root;
  
  *credits = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
  Il2CppCodeGenWriteBarrier(credits,(void *)0x0);
  *error = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(error,(void *)0x0);
  bVar1 = System_String__IsNullOrWhiteSpace(json,(MethodInfo *)0x0);
  if (!bVar1) {
    root = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
    bVar1 = ApplicationManagers_Credits_AottgCreditsParser__TryParse_2364d60
                      (root,credits,error,(MethodInfo *)0x0);
    return bVar1;
  }
  if (Il2CppMethodInitialized_184347a21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"bad_response");
    Il2CppMethodInitialized_184347a21 = '\x01';
  }
  *credits = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
  Il2CppCodeGenWriteBarrier(credits,(void *)0x0);
  *error = "bad_response";
  Il2CppCodeGenWriteBarrier(error,"bad_response");
  return false;
}


// ApplicationManagers.Credits.AottgCreditsParser$$TryParse
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__TryParse (SimpleJSONFixed_JSONNode_o* root, ApplicationManagers_Credits_AottgCreditsResponse_o** credits, System_String_o** error, const MethodInfo* method);
// 0x182364d60

bool ApplicationManagers_Credits_AottgCreditsParser__TryParse_2364d60
               (SimpleJSONFixed_JSONNode_o *root,ApplicationManagers_Credits_AottgCreditsResponse_o **credits,
               System_String_o **error,MethodInfo *method)

{
  bool bVar1;
  char cVar2;
  uint32_t length;
  int iVar3;
  System_Xml_Schema_XmlSchema_o *pSVar4;
  longlong *plVar5;
  System_Object_array *array;
  SimpleJSONFixed_JSONNode_o *node;
  ApplicationManagers_Credits_AottgCreditsResponse_o *__this;
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *value;
  uint uVar6;
  
  if (Il2CppMethodInitialized_184347a18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_ApplicationManagers_Credits_AottgCreditCategory_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditsResponse);
    il2cpp_codegen_initialize_runtime_metadata(&"categories");
    Il2CppMethodInitialized_184347a18 = '\x01';
  }
  uVar6 = 0;
  *credits = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
  Il2CppCodeGenWriteBarrier(credits,(void *)0x0);
  *error = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(error,(void *)0x0);
  if (Il2CppMethodInitialized_184347a20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347a20 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(root,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (!bVar1) {
label_182365012:
    if (Il2CppMethodInitialized_184347a21 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"bad_response");
      Il2CppMethodInitialized_184347a21 = '\x01';
    }
    *credits = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
    Il2CppCodeGenWriteBarrier(credits,(void *)0x0);
    *error = "bad_response";
    Il2CppCodeGenWriteBarrier(error,"bad_response");
    return false;
  }
  if (root != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar1 = (*(root->klass->vtable)._17_get_IsObject.methodPtr)
                      (root,(root->klass->vtable)._17_get_IsObject.method);
    if ((!bVar1) ||
       (bVar1 = (*(root->klass->vtable)._28_HasKey.methodPtr)(root,(MethodInfo *)"categories"),
       !bVar1)) goto label_182365012;
    pSVar4 = (*(root->klass->vtable)._7_get_Item.methodPtr)(root,(MethodInfo *)"categories");
    if (pSVar4 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      cVar2 = (*((Il2CppClass *)pSVar4->klass)->vtable[16].methodPtr)(pSVar4);
      if (cVar2 == '\0') goto label_182365012;
      pSVar4 = (*(root->klass->vtable)._7_get_Item.methodPtr)(root,(MethodInfo *)"categories");
      if ((pSVar4 != (System_Xml_Schema_XmlSchema_o *)0x0) &&
         (plVar5 = (longlong *)
                   (*(code *)((Il2CppClass *)pSVar4->klass)->vtable[45].methodPtr)
                             (pSVar4,((Il2CppClass *)pSVar4->klass)->vtable[45].method),
         plVar5 != (longlong *)0x0)) {
        length = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
        array = (System_Object_array *)
                SZArrayNew(TypeInfo_ApplicationManagers_Credits_AottgCreditCategory_array,length);
        for (; iVar3 = (**(code **)(*plVar5 + 0x1e8))(plVar5), (int)uVar6 < iVar3; uVar6 = uVar6 + 1) {
          node = (SimpleJSONFixed_JSONNode_o *)(**(code **)(*plVar5 + 0x188))(plVar5,uVar6);
          if (array == (System_Object_array *)0x0) goto label_182365075;
          if ((uint)array->max_length <= uVar6) {
            ThrowIndexOutOfRangeException();
          }
          bVar1 = ApplicationManagers_Credits_AottgCreditsParser__TryParseCategory
                            (node,(ApplicationManagers_Credits_AottgCreditCategory_o **)
                                  (array->m_Items + (int)uVar6),(MethodInfo *)0x0);
          if (!bVar1) {
            bVar1 = ApplicationManagers_Credits_AottgCreditsParser__Fail(credits,error,(MethodInfo *)0x0);
            return bVar1;
          }
        }
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditsResponse);
        if (Il2CppMethodInitialized_184347a0e == '\0') {
          il2cpp_codegen_initialize_runtime_metadata
                    (&TypeInfo_ApplicationManagers_Credits_AottgCreditCategory_array);
          il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_AsReadOnly_AottgCreditCategory);
          Il2CppMethodInitialized_184347a0e = '\x01';
        }
        System_Object___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
        if (array == (System_Object_array *)0x0) {
          array = (System_Object_array *)
                  SZArrayNew(TypeInfo_ApplicationManagers_Credits_AottgCreditCategory_array,0);
        }
        value = System_Array__AsReadOnly_object_
                          (array,(MethodInfo_68BBD0 *)MethodInfo_System_Array_AsReadOnly_AottgCreditCategory);
        if (__this != (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0) {
          (__this->fields)._Categories_k__BackingField =
               (System_Collections_Generic_IReadOnlyList_AottgCreditCategory__o *)value;
          Il2CppCodeGenWriteBarrier(&(__this->fields)._Categories_k__BackingField,value);
          *credits = __this;
          Il2CppCodeGenWriteBarrier(credits,__this);
          return true;
        }
      }
    }
  }
label_182365075:
  ThrowNullReferenceException();
}


// ApplicationManagers.Credits.AottgCreditsParser$$TryParseCategory
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__TryParseCategory (SimpleJSONFixed_JSONNode_o* node, ApplicationManagers_Credits_AottgCreditCategory_o** category, const MethodInfo* method);
// 0x182364510

bool ApplicationManagers_Credits_AottgCreditsParser__TryParseCategory
               (SimpleJSONFixed_JSONNode_o *node,ApplicationManagers_Credits_AottgCreditCategory_o **category,
               MethodInfo *method)

{
  System_String_o *value;
  System_String_o *value_00;
  bool bVar1;
  char cVar2;
  uint32_t length;
  int iVar3;
  System_Xml_Schema_XmlSchema_o *pSVar4;
  longlong *plVar5;
  SimpleJSONFixed_JSONNode_o *node_00;
  ApplicationManagers_Credits_AottgCreditCategory_o *__this;
  ApplicationManagers_Credits_AottgCreditContributor_array *array;
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *pSVar6;
  System_Object_array *array_00;
  uint uVar7;
  System_Object_array *local_res8;
  System_String_o *local_res10;
  System_String_o *local_res20;
  ApplicationManagers_Credits_AottgCreditContributor_array *local_38 [2];
  
  if (Il2CppMethodInitialized_184347a19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditCategory);
    il2cpp_codegen_initialize_runtime_metadata(&"name");
    Il2CppMethodInitialized_184347a19 = '\x01';
  }
  uVar7 = 0;
  local_res10 = (System_String_o *)0x0;
  local_res20 = (System_String_o *)0x0;
  local_38[0] = (ApplicationManagers_Credits_AottgCreditContributor_array *)0x0;
  local_res8 = (System_Object_array *)0x0;
  *category = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x0;
  Il2CppCodeGenWriteBarrier(category,(void *)0x0);
  if (Il2CppMethodInitialized_184347a20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347a20 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_1823648eb:
      ThrowNullReferenceException();
    }
    bVar1 = (*(node->klass->vtable)._17_get_IsObject.methodPtr)
                      (node,(node->klass->vtable)._17_get_IsObject.method);
    if ((((bVar1) &&
         (bVar1 = ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString
                            (node,"name",&local_res10,(MethodInfo *)0x0), bVar1)) &&
        (bVar1 = ApplicationManagers_Credits_AottgCreditsParser__TryReadDescription
                           (node,&local_res20,(MethodInfo *)0x0), bVar1)) &&
       (bVar1 = ApplicationManagers_Credits_AottgCreditsParser__TryReadContributors
                          (node,local_38,(MethodInfo *)0x0), bVar1)) {
      if (Il2CppMethodInitialized_184347a1a == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_ApplicationManagers_Credits_AottgCreditGroup_array);
        il2cpp_codegen_initialize_runtime_metadata(&"groups");
        Il2CppMethodInitialized_184347a1a = '\x01';
      }
      local_res8 = (System_Object_array *)0x0;
      Il2CppCodeGenWriteBarrier(&local_res8,(void *)0x0);
      bVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,(MethodInfo *)"groups");
      if (bVar1) {
        pSVar4 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"groups");
        if (pSVar4 != (System_Xml_Schema_XmlSchema_o *)0x0) {
          cVar2 = (*((Il2CppClass *)pSVar4->klass)->vtable[16].methodPtr)
                            (pSVar4,*(undefined8 *)&((Il2CppClass *)pSVar4->klass)->vtable[16].method);
          if (cVar2 == '\0') {
            return false;
          }
          pSVar4 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"groups");
          if ((pSVar4 != (System_Xml_Schema_XmlSchema_o *)0x0) &&
             (plVar5 = (longlong *)
                       (*(code *)((Il2CppClass *)pSVar4->klass)->vtable[45].methodPtr)
                                 (pSVar4,((Il2CppClass *)pSVar4->klass)->vtable[45].method),
             plVar5 != (longlong *)0x0)) {
            length = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
            local_res8 = (System_Object_array *)
                         SZArrayNew(TypeInfo_ApplicationManagers_Credits_AottgCreditGroup_array,length);
            Il2CppCodeGenWriteBarrier(&local_res8,local_res8);
            for (; iVar3 = (**(code **)(*plVar5 + 0x1e8))(plVar5), array = local_38[0], value_00 = local_res20
                , value = local_res10, array_00 = local_res8, (int)uVar7 < iVar3; uVar7 = uVar7 + 1) {
              node_00 = (SimpleJSONFixed_JSONNode_o *)(**(code **)(*plVar5 + 0x188))(plVar5,uVar7);
              if (local_res8 == (System_Object_array *)0x0) goto label_1823648eb;
              if ((uint)local_res8->max_length <= uVar7) {
                ThrowIndexOutOfRangeException();
              }
              bVar1 = ApplicationManagers_Credits_AottgCreditsParser__TryParseGroup
                                (node_00,(ApplicationManagers_Credits_AottgCreditGroup_o **)
                                         (local_res8->m_Items + (int)uVar7),(MethodInfo *)0x0);
              if (!bVar1) {
                return false;
              }
            }
            __this = il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditCategory);
            if (Il2CppMethodInitialized_184347a0f == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_ApplicationManagers_Credits_AottgCreditContributor_array);
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_ApplicationManagers_Credits_AottgCreditGroup_array);
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_System_Array_AsReadOnly_AottgCreditContributor);
              il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_AsReadOnly_AottgCreditGroup)
              ;
              Il2CppMethodInitialized_184347a0f = '\x01';
            }
            System_Object___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0)
            ;
            (__this->fields)._Name_k__BackingField = value;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._Name_k__BackingField,value);
            (__this->fields)._Description_k__BackingField = value_00;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._Description_k__BackingField,value_00);
            if (array == (ApplicationManagers_Credits_AottgCreditContributor_array *)0x0) {
              array = (ApplicationManagers_Credits_AottgCreditContributor_array *)
                      SZArrayNew(TypeInfo_ApplicationManagers_Credits_AottgCreditContributor_array,0);
            }
            pSVar6 = System_Array__AsReadOnly_object_
                               ((System_Object_array *)array,
                                (MethodInfo_68BBD0 *)MethodInfo_System_Array_AsReadOnly_AottgCreditContributor
                               );
            if (__this != (ApplicationManagers_Credits_AottgCreditCategory_o *)0x0) {
              (__this->fields)._Contributors_k__BackingField =
                   (System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *)pSVar6;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._Contributors_k__BackingField,pSVar6);
              if (array_00 == (System_Object_array *)0x0) {
                array_00 = (System_Object_array *)
                           SZArrayNew(TypeInfo_ApplicationManagers_Credits_AottgCreditGroup_array,0);
              }
              pSVar6 = System_Array__AsReadOnly_object_
                                 (array_00,(MethodInfo_68BBD0 *)
                                           MethodInfo_System_Array_AsReadOnly_AottgCreditGroup);
              (__this->fields)._Groups_k__BackingField =
                   (System_Collections_Generic_IReadOnlyList_AottgCreditGroup__o *)pSVar6;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._Groups_k__BackingField,pSVar6);
              *category = __this;
              Il2CppCodeGenWriteBarrier(category,__this);
              return true;
            }
          }
        }
        goto label_1823648eb;
      }
    }
  }
  return false;
}


// ApplicationManagers.Credits.AottgCreditsParser$$TryReadGroups
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__TryReadGroups (SimpleJSONFixed_JSONNode_o* node, ApplicationManagers_Credits_AottgCreditGroup_array** groups, const MethodInfo* method);
// 0x1823654b0

bool ApplicationManagers_Credits_AottgCreditsParser__TryReadGroups
               (SimpleJSONFixed_JSONNode_o *node,ApplicationManagers_Credits_AottgCreditGroup_array **groups,
               MethodInfo *method)

{
  bool bVar1;
  char cVar2;
  uint32_t length;
  int iVar3;
  System_Xml_Schema_XmlSchema_o *pSVar4;
  longlong *plVar5;
  ApplicationManagers_Credits_AottgCreditGroup_array *pAVar6;
  SimpleJSONFixed_JSONNode_o *node_00;
  uint uVar7;
  
  if (Il2CppMethodInitialized_184347a1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditGroup_array);
    il2cpp_codegen_initialize_runtime_metadata(&"groups");
    Il2CppMethodInitialized_184347a1a = '\x01';
  }
  *groups = (ApplicationManagers_Credits_AottgCreditGroup_array *)0x0;
  Il2CppCodeGenWriteBarrier(groups,(void *)0x0);
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,(MethodInfo *)"groups");
    if (!bVar1) {
      return false;
    }
    pSVar4 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"groups");
    if (pSVar4 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      cVar2 = (*((Il2CppClass *)pSVar4->klass)->vtable[16].methodPtr)(pSVar4,*(undefined8 *)&((Il2CppClass *)pSVar4->klass)->vtable[16].method)
      ;
      if (cVar2 == '\0') {
        return false;
      }
      pSVar4 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"groups");
      if ((pSVar4 != (System_Xml_Schema_XmlSchema_o *)0x0) &&
         (plVar5 = (longlong *)
                   (*(code *)((Il2CppClass *)pSVar4->klass)->vtable[45].methodPtr)
                             (pSVar4,((Il2CppClass *)pSVar4->klass)->vtable[45].method),
         plVar5 != (longlong *)0x0)) {
        length = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
        pAVar6 = (ApplicationManagers_Credits_AottgCreditGroup_array *)
                 SZArrayNew(TypeInfo_ApplicationManagers_Credits_AottgCreditGroup_array,length);
        *groups = pAVar6;
        Il2CppCodeGenWriteBarrier(groups,pAVar6);
        uVar7 = 0;
        while( true ) {
          iVar3 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
          if (iVar3 <= (int)uVar7) {
            return true;
          }
          node_00 = (SimpleJSONFixed_JSONNode_o *)(**(code **)(*plVar5 + 0x188))(plVar5,uVar7);
          pAVar6 = *groups;
          if (pAVar6 == (ApplicationManagers_Credits_AottgCreditGroup_array *)0x0) break;
          if ((uint)pAVar6->max_length <= uVar7) {
            ThrowIndexOutOfRangeException();
          }
          bVar1 = ApplicationManagers_Credits_AottgCreditsParser__TryParseGroup
                            (node_00,pAVar6->m_Items + (int)uVar7,(MethodInfo *)0x0);
          if (!bVar1) {
            return false;
          }
          uVar7 = uVar7 + 1;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// ApplicationManagers.Credits.AottgCreditsParser$$TryParseGroup
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__TryParseGroup (SimpleJSONFixed_JSONNode_o* node, ApplicationManagers_Credits_AottgCreditGroup_o** group, const MethodInfo* method);
// 0x182364b60

bool ApplicationManagers_Credits_AottgCreditsParser__TryParseGroup
               (SimpleJSONFixed_JSONNode_o *node,ApplicationManagers_Credits_AottgCreditGroup_o **group,
               MethodInfo *method)

{
  System_String_o *value;
  System_String_o *value_00;
  bool bVar1;
  ApplicationManagers_Credits_AottgCreditGroup_o *__this;
  ApplicationManagers_Credits_AottgCreditContributor_array *array;
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *value_01;
  System_String_o *local_res8;
  System_String_o *local_res10 [2];
  ApplicationManagers_Credits_AottgCreditContributor_array *local_res20;
  
  if (Il2CppMethodInitialized_184347a1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditGroup);
    il2cpp_codegen_initialize_runtime_metadata(&"title");
    Il2CppMethodInitialized_184347a1b = '\x01';
  }
  local_res8 = (System_String_o *)0x0;
  local_res10[0] = (System_String_o *)0x0;
  local_res20 = (ApplicationManagers_Credits_AottgCreditContributor_array *)0x0;
  *group = (ApplicationManagers_Credits_AottgCreditGroup_o *)0x0;
  Il2CppCodeGenWriteBarrier(group,(void *)0x0);
  if (Il2CppMethodInitialized_184347a20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347a20 = '\x01';
  }
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
label_182364d54:
      ThrowNullReferenceException();
    }
    bVar1 = (*(node->klass->vtable)._17_get_IsObject.methodPtr)
                      (node,(node->klass->vtable)._17_get_IsObject.method);
    if (bVar1) {
      bVar1 = ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString
                        (node,"title",&local_res8,(MethodInfo *)0x0);
      if (bVar1) {
        bVar1 = ApplicationManagers_Credits_AottgCreditsParser__TryReadDescription
                          (node,local_res10,(MethodInfo *)0x0);
        if (bVar1) {
          bVar1 = ApplicationManagers_Credits_AottgCreditsParser__TryReadContributors
                            (node,&local_res20,(MethodInfo *)0x0);
          array = local_res20;
          value_00 = local_res10[0];
          value = local_res8;
          if (bVar1) {
            __this = il2cpp_codegen_object_new
                               ((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditGroup);
            if (Il2CppMethodInitialized_184347a10 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata
                        (&TypeInfo_ApplicationManagers_Credits_AottgCreditContributor_array);
              il2cpp_codegen_initialize_runtime_metadata
                        (&MethodInfo_System_Array_AsReadOnly_AottgCreditContributor);
              Il2CppMethodInitialized_184347a10 = '\x01';
            }
            System_Object___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0)
            ;
            (__this->fields)._Title_k__BackingField = value;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._Title_k__BackingField,value);
            (__this->fields)._Description_k__BackingField = value_00;
            Il2CppCodeGenWriteBarrier(&(__this->fields)._Description_k__BackingField,value_00);
            if (array == (ApplicationManagers_Credits_AottgCreditContributor_array *)0x0) {
              array = (ApplicationManagers_Credits_AottgCreditContributor_array *)
                      SZArrayNew(TypeInfo_ApplicationManagers_Credits_AottgCreditContributor_array,0);
            }
            value_01 = System_Array__AsReadOnly_object_
                                 ((System_Object_array *)array,
                                  (MethodInfo_68BBD0 *)
                                  MethodInfo_System_Array_AsReadOnly_AottgCreditContributor);
            if (__this != (ApplicationManagers_Credits_AottgCreditGroup_o *)0x0) {
              (__this->fields)._Contributors_k__BackingField =
                   (System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *)value_01;
              Il2CppCodeGenWriteBarrier(&(__this->fields)._Contributors_k__BackingField,value_01);
              *group = __this;
              Il2CppCodeGenWriteBarrier(group,__this);
              return true;
            }
            goto label_182364d54;
          }
        }
      }
    }
  }
  return false;
}


// ApplicationManagers.Credits.AottgCreditsParser$$TryReadContributors
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__TryReadContributors (SimpleJSONFixed_JSONNode_o* node, ApplicationManagers_Credits_AottgCreditContributor_array** contributors, const MethodInfo* method);
// 0x182365170
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823652ce: nop 

bool ApplicationManagers_Credits_AottgCreditsParser__TryReadContributors
               (SimpleJSONFixed_JSONNode_o *node,
               ApplicationManagers_Credits_AottgCreditContributor_array **contributors,MethodInfo *method)

{
  bool bVar1;
  char cVar2;
  int32_t capacity;
  int iVar3;
  System_Xml_Schema_XmlSchema_o *pSVar4;
  longlong *plVar5;
  System_Collections_Generic_List_AottgCreditContributor__o *__this;
  SimpleJSONFixed_JSONNode_o *node_00;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *value;
  int iVar6;
  ApplicationManagers_Credits_AottgCreditContributor_o *local_res8;
  
  if (Il2CppMethodInitialized_184347a1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgCreditContributor_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgCreditContributor_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgCreditContributor_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_AottgCreditContributor);
    il2cpp_codegen_initialize_runtime_metadata(&"contributors");
    Il2CppMethodInitialized_184347a1c = '\x01';
  }
  iVar6 = 0;
  local_res8 = (ApplicationManagers_Credits_AottgCreditContributor_o *)0x0;
  *contributors = (ApplicationManagers_Credits_AottgCreditContributor_array *)0x0;
  Il2CppCodeGenWriteBarrier(contributors,(void *)0x0);
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,(MethodInfo *)"contributors");
    if (!bVar1) {
      return false;
    }
    pSVar4 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"contributors");
    if (pSVar4 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      cVar2 = (*((Il2CppClass *)pSVar4->klass)->vtable[16].methodPtr)(pSVar4,*(undefined8 *)&((Il2CppClass *)pSVar4->klass)->vtable[16].method)
      ;
      if (cVar2 == '\0') {
        return false;
      }
      pSVar4 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"contributors");
      if ((pSVar4 != (System_Xml_Schema_XmlSchema_o *)0x0) &&
         (plVar5 = (longlong *)
                   (*(code *)((Il2CppClass *)pSVar4->klass)->vtable[45].methodPtr)
                             (pSVar4,((Il2CppClass *)pSVar4->klass)->vtable[45].method),
         plVar5 != (longlong *)0x0)) {
        capacity = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgCreditContributor);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_List_T__o *)__this,capacity,
                   (MethodInfo_92A4F0 *)MethodInfo_System_Collections_Generic_List_AottgCreditContributor_ctor
                  );
        for (; iVar3 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0)), iVar6 < iVar3;
            iVar6 = iVar6 + 1) {
          node_00 = (SimpleJSONFixed_JSONNode_o *)(**(code **)(*plVar5 + 0x188))(plVar5,iVar6);
          bVar1 = ApplicationManagers_Credits_AottgCreditsParser__TryParseContributor
                            (node_00,&local_res8,(MethodInfo *)0x0);
          if (!bVar1) {
            return false;
          }
          if (__this == (System_Collections_Generic_List_AottgCreditContributor__o *)0x0) goto label_18236536b;
          il2cpp_runtime_helper_180012890(__this,local_res8,
                        MethodInfo_System_Collections_Generic_List_AottgCreditContributor_Add);
        }
        if (__this != (System_Collections_Generic_List_AottgCreditContributor__o *)0x0) {
          value = System_Collections_Generic_List_object___ToArray
                            ((System_Collections_Generic_List_T__o *)__this,
                             (MethodInfo_929FE0 *)
                             MethodInfo_System_Collections_Generic_List_AottgCreditContributor_ToArray);
          *contributors = (ApplicationManagers_Credits_AottgCreditContributor_array *)value;
          Il2CppCodeGenWriteBarrier(contributors,value);
          return true;
        }
      }
    }
  }
label_18236536b:
  ThrowNullReferenceException();
}


// ApplicationManagers.Credits.AottgCreditsParser$$TryParseContributor
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__TryParseContributor (SimpleJSONFixed_JSONNode_o* node, ApplicationManagers_Credits_AottgCreditContributor_o** contributor, const MethodInfo* method);
// 0x182364900

bool ApplicationManagers_Credits_AottgCreditsParser__TryParseContributor
               (SimpleJSONFixed_JSONNode_o *node,
               ApplicationManagers_Credits_AottgCreditContributor_o **contributor,MethodInfo *method)

{
  System_String_o *value;
  bool bVar1;
  char cVar2;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  System_Xml_Schema_XmlSchemaObject_o *pSVar4;
  System_String_o *value_00;
  ApplicationManagers_Credits_AottgCreditContributor_o *__this;
  System_String_o *local_res8;
  System_Guid_Fields local_18;
  
  if (Il2CppMethodInitialized_184347a1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_Credits_AottgCreditContributor);
    il2cpp_codegen_initialize_runtime_metadata(&"accountId");
    il2cpp_codegen_initialize_runtime_metadata(&"name");
    Il2CppMethodInitialized_184347a1d = '\x01';
  }
  value_00 = (System_String_o *)0x0;
  local_res8 = (System_String_o *)0x0;
  *contributor = (ApplicationManagers_Credits_AottgCreditContributor_o *)0x0;
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
  Il2CppCodeGenWriteBarrier(contributor,(void *)0x0);
  if (Il2CppMethodInitialized_184347a20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347a20 = '\x01';
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
    if (!bVar1) {
      return false;
    }
    bVar1 = ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString
                      (node,"name",&local_res8,(MethodInfo *)0x0);
    if (!bVar1) {
      return false;
    }
    bVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,(MethodInfo *)"accountId");
    if (!bVar1) {
      return false;
    }
    pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"accountId");
    if (pSVar3 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      cVar2 = (*(code *)((Il2CppClass *)pSVar3->klass)->vtable[15].methodPtr)(pSVar3);
      if (cVar2 == '\0') {
        pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"accountId");
        if (pSVar3 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_182364b53;
        pSVar4 = (*(pSVar3->klass->vtable)._13_Clone.methodPtr)
                           (pSVar3,(pSVar3->klass->vtable)._13_Clone.method);
        if ((char)pSVar4 == '\0') {
          return false;
        }
        pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"accountId");
        value_00 = ApplicationManagers_Credits_AottgCreditsParser__Trimmed
                             ((SimpleJSONFixed_JSONNode_o *)pSVar3,(MethodInfo *)0x0);
        bVar1 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
        if (bVar1) {
          return false;
        }
        bVar1 = System_Guid__TryParse(value_00,(System_Guid_o *)&local_18,(MethodInfo *)0x0);
        if (!bVar1) {
          return false;
        }
      }
      value = local_res8;
      __this = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_ApplicationManagers_Credits_AottgCreditContributor);
      System_Object___ctor
                ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
      (__this->fields)._Name_k__BackingField = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._Name_k__BackingField,value);
      (__this->fields)._AccountId_k__BackingField = value_00;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._AccountId_k__BackingField,value_00);
      *contributor = __this;
      Il2CppCodeGenWriteBarrier(contributor,__this);
      return true;
    }
  }
label_182364b53:
  ThrowNullReferenceException();
}


// ApplicationManagers.Credits.AottgCreditsParser$$TryReadDescription
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__TryReadDescription (SimpleJSONFixed_JSONNode_o* node, System_String_o** description, const MethodInfo* method);
// 0x182365380

bool ApplicationManagers_Credits_AottgCreditsParser__TryReadDescription
               (SimpleJSONFixed_JSONNode_o *node,System_String_o **description,MethodInfo *method)

{
  bool bVar1;
  char cVar2;
  System_Xml_Schema_XmlSchema_o *pSVar3;
  System_Xml_Schema_XmlSchemaObject_o *pSVar4;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184347a1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"description");
    Il2CppMethodInitialized_184347a1e = '\x01';
  }
  *description = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(description,(void *)0x0);
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,(MethodInfo *)"description");
    if (!bVar1) {
      return false;
    }
    pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"description");
    if (pSVar3 != (System_Xml_Schema_XmlSchema_o *)0x0) {
      cVar2 = (*(code *)((Il2CppClass *)pSVar3->klass)->vtable[15].methodPtr)(pSVar3,((Il2CppClass *)pSVar3->klass)->vtable[15].method);
      if (cVar2 == '\0') {
        pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"description");
        if (pSVar3 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_1823654a6;
        pSVar4 = (*(pSVar3->klass->vtable)._13_Clone.methodPtr)
                           (pSVar3,(pSVar3->klass->vtable)._13_Clone.method);
        if ((char)pSVar4 == '\0') {
          return false;
        }
        pSVar3 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)"description");
        value = ApplicationManagers_Credits_AottgCreditsParser__Trimmed
                          ((SimpleJSONFixed_JSONNode_o *)pSVar3,(MethodInfo *)0x0);
        *description = value;
        Il2CppCodeGenWriteBarrier(description,value);
      }
      return true;
    }
  }
label_1823654a6:
  ThrowNullReferenceException();
}


// ApplicationManagers.Credits.AottgCreditsParser$$TryReadRequiredString
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, System_String_o** value, const MethodInfo* method);
// 0x182365680

bool ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString
               (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,System_String_o **value,
               MethodInfo *method)

{
  bool bVar1;
  System_Xml_Schema_XmlSchema_o *pSVar2;
  System_Xml_Schema_XmlSchemaObject_o *pSVar3;
  System_String_o *value_00;
  
  *value = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(value,(void *)0x0);
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    bVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)(node,(MethodInfo *)key);
    if (bVar1) {
      pSVar2 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)key);
      if (pSVar2 == (System_Xml_Schema_XmlSchema_o *)0x0) goto label_18236575b;
      pSVar3 = (*(pSVar2->klass->vtable)._13_Clone.methodPtr)(pSVar2,(pSVar2->klass->vtable)._13_Clone.method)
      ;
      if ((char)pSVar3 != '\0') {
        pSVar2 = (*(node->klass->vtable)._7_get_Item.methodPtr)(node,(MethodInfo *)key);
        value_00 = ApplicationManagers_Credits_AottgCreditsParser__Trimmed
                             ((SimpleJSONFixed_JSONNode_o *)pSVar2,(MethodInfo *)0x0);
        *value = value_00;
        Il2CppCodeGenWriteBarrier(value,value_00);
        bVar1 = System_String__IsNullOrEmpty(*value,(MethodInfo *)0x0);
        return !bVar1;
      }
    }
    return false;
  }
label_18236575b:
  ThrowNullReferenceException();
}


// ApplicationManagers.Credits.AottgCreditsParser$$Trimmed
// il2cpp: System_String_o* ApplicationManagers_Credits_AottgCreditsParser__Trimmed (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x182364470

System_String_o *
ApplicationManagers_Credits_AottgCreditsParser__Trimmed(SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184347a1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347a1f = '\x01';
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
// 0x1823643f0

bool ApplicationManagers_Credits_AottgCreditsParser__IsObject
               (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347a20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    Il2CppMethodInitialized_184347a20 = '\x01';
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


// ApplicationManagers.Credits.AottgCreditsParser$$Fail
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__Fail (ApplicationManagers_Credits_AottgCreditsResponse_o** credits, System_String_o** error, const MethodInfo* method);
// 0x182364380

bool ApplicationManagers_Credits_AottgCreditsParser__Fail
               (ApplicationManagers_Credits_AottgCreditsResponse_o **credits,System_String_o **error,
               MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347a21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"bad_response");
    Il2CppMethodInitialized_184347a21 = '\x01';
  }
  *credits = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
  Il2CppCodeGenWriteBarrier(credits,(void *)0x0);
  *error = "bad_response";
  Il2CppCodeGenWriteBarrier(error,"bad_response");
  return false;
}


