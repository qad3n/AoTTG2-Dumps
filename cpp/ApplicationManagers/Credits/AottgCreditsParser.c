// Type: ApplicationManagers.Credits.AottgCreditsParser
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/ApplicationManagers.Credits/AottgCreditsParser.cs
// Prior source: NEW in this update
// --------------------------------

// ApplicationManagers.Credits.AottgCreditsParser$$TryParse
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__TryParse (System_String_o* json, ApplicationManagers_Credits_AottgCreditsResponse_o** credits, System_String_o** error, const MethodInfo* method);
// 0x41ad630

bool_conflict
ApplicationManagers_Credits_AottgCreditsParser__TryParse
          (System_String_o *json,ApplicationManagers_Credits_AottgCreditsResponse_o **credits,
          System_String_o **error,MethodInfo *method)

{
  bool_conflict bVar1;
  SimpleJSONFixed_JSONNode_o *root;
  
  *credits = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
  il2cpp_runtime_glue(credits);
  *error = (System_String_o *)0x0;
  il2cpp_runtime_glue(error);
  bVar1 = System_String__IsNullOrWhiteSpace(json,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    root = SimpleJSONFixed_JSON__Parse(json,(MethodInfo *)0x0);
    bVar1 = ApplicationManagers_Credits_AottgCreditsParser__TryParse(root,credits,error,method);
  }
  else {
    if (DAT_05704d13 == '\0') {
      il2cpp_init_method_metadata(&"bad_response");
      DAT_05704d13 = '\x01';
    }
    *credits = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
    bVar1 = 0;
    il2cpp_runtime_glue(credits,0);
    *error = "bad_response";
    il2cpp_runtime_glue(error,"bad_response");
  }
  return bVar1;
}


// ApplicationManagers.Credits.AottgCreditsParser$$TryParse
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__TryParse (SimpleJSONFixed_JSONNode_o* root, ApplicationManagers_Credits_AottgCreditsResponse_o** credits, System_String_o** error, const MethodInfo* method);
// 0x41ad7d0

bool_conflict
ApplicationManagers_Credits_AottgCreditsParser__TryParse
          (SimpleJSONFixed_JSONNode_o *root,
          ApplicationManagers_Credits_AottgCreditsResponse_o **credits,System_String_o **error,
          MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  undefined4 uVar3;
  int iVar4;
  long *plVar5;
  ApplicationManagers_Credits_AottgCreditCategory_array *categories;
  ApplicationManagers_Credits_AottgCreditsResponse_o *__this;
  ApplicationManagers_Credits_AottgCreditCategory_o **category;
  ulong uVar6;
  undefined1 auVar7 [16];
  
  if (DAT_05704d0a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCreditCategory);
    il2cpp_init_method_metadata(&TypeInfo_AottgCreditsResponse);
    il2cpp_init_method_metadata(&"categories");
    DAT_05704d0a = '\x01';
  }
  *credits = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
  il2cpp_runtime_glue(credits);
  *error = (System_String_o *)0x0;
  il2cpp_runtime_glue(error);
  if (DAT_05704d12 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704d12 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(root,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
LAB_041ada25:
    if (DAT_05704d13 == '\0') {
      il2cpp_init_method_metadata(&"bad_response");
      DAT_05704d13 = '\x01';
    }
    *credits = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
    il2cpp_runtime_glue(credits,0);
    *error = "bad_response";
    il2cpp_runtime_glue(error,"bad_response");
    return 0;
  }
  if (root != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar1 = (*(root->klass->vtable)._17_get_IsObject.methodPtr)
                      (root,(root->klass->vtable)._17_get_IsObject.method);
    if ((cVar1 == '\0') ||
       (cVar1 = (*(root->klass->vtable)._28_HasKey.methodPtr)
                          (root,"categories",(root->klass->vtable)._28_HasKey.method), cVar1 == '\0'
       )) goto LAB_041ada25;
    plVar5 = (long *)(*(root->klass->vtable)._7_get_Item.methodPtr)
                               (root,"categories",(root->klass->vtable)._7_get_Item.method);
    if (plVar5 != (long *)0x0) {
      cVar1 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
      if (cVar1 == '\0') goto LAB_041ada25;
      plVar5 = (long *)(*(root->klass->vtable)._7_get_Item.methodPtr)
                                 (root,"categories",(root->klass->vtable)._7_get_Item.method);
      if ((plVar5 != (long *)0x0) &&
         (plVar5 = (long *)(**(code **)(*plVar5 + 0x408))(plVar5,*(undefined8 *)(*plVar5 + 0x410)),
         plVar5 != (long *)0x0)) {
        uVar3 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
        categories = (ApplicationManagers_Credits_AottgCreditCategory_array *)
                     il2cpp_glue_02274930(TypeInfo_AottgCreditCategory,uVar3);
        iVar4 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
        if (0 < iVar4) {
          if (categories == (ApplicationManagers_Credits_AottgCreditCategory_array *)0x0) {
            (**(code **)(*plVar5 + 0x188))(plVar5,0,*(undefined8 *)(*plVar5 + 400));
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          category = categories->m_Items;
          uVar6 = 0;
          do {
            auVar7 = (**(code **)(*plVar5 + 0x188))
                               (plVar5,uVar6 & 0xffffffff,*(undefined8 *)(*plVar5 + 400));
            if ((uint)categories->max_length <= uVar6) {
                    /* WARNING: Subroutine does not return */
              il2cpp_raise_exception();
            }
            bVar2 = ApplicationManagers_Credits_AottgCreditsParser__TryParseCategory
                              (auVar7._0_8_,category,auVar7._8_8_);
            if ((char)bVar2 == '\0') goto LAB_041ada25;
            uVar6 = uVar6 + 1;
            iVar4 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
            category = category + 1;
          } while ((long)uVar6 < (long)iVar4);
        }
        auVar7 = il2cpp_runtime_glue(TypeInfo_AottgCreditsResponse);
        __this = auVar7._0_8_;
        ApplicationManagers_Credits_AottgCreditsResponse___ctor(__this,categories,auVar7._8_8_);
        *credits = __this;
        il2cpp_runtime_glue(credits,__this);
        return (bool_conflict)CONCAT71(auVar7._1_7_,1);
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Credits.AottgCreditsParser$$TryParseCategory
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__TryParseCategory (SimpleJSONFixed_JSONNode_o* node, ApplicationManagers_Credits_AottgCreditCategory_o** category, const MethodInfo* method);
// 0x41adb20

bool_conflict
ApplicationManagers_Credits_AottgCreditsParser__TryParseCategory
          (SimpleJSONFixed_JSONNode_o *node,
          ApplicationManagers_Credits_AottgCreditCategory_o **category,MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditGroup_array *groups;
  ApplicationManagers_Credits_AottgCreditContributor_array *contributors;
  System_String_o *description;
  System_String_o *name;
  char cVar1;
  bool_conflict bVar2;
  ApplicationManagers_Credits_AottgCreditCategory_o *__this;
  MethodInfo *in_RCX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *in_R9;
  ApplicationManagers_Credits_AottgCreditGroup_array *local_50;
  ApplicationManagers_Credits_AottgCreditContributor_array *local_48;
  System_String_o *local_40;
  System_String_o *local_38;
  
  if (DAT_05704d0b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCreditCategory);
    il2cpp_init_method_metadata(&"name");
    DAT_05704d0b = '\x01';
    method = extraout_RDX;
  }
  local_38 = (System_String_o *)0x0;
  local_40 = (System_String_o *)0x0;
  local_48 = (ApplicationManagers_Credits_AottgCreditContributor_array *)0x0;
  local_50 = (ApplicationManagers_Credits_AottgCreditGroup_array *)0x0;
  *category = (ApplicationManagers_Credits_AottgCreditCategory_o *)0x0;
  il2cpp_runtime_glue(category,0,method);
  if (DAT_05704d12 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704d12 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    cVar1 = (*(node->klass->vtable)._17_get_IsObject.methodPtr)
                      (node,(node->klass->vtable)._17_get_IsObject.method);
    if ((((cVar1 != '\0') &&
         (bVar2 = ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString
                            (node,"name",&local_38,in_RCX), (char)bVar2 != '\0')) &&
        (bVar2 = ApplicationManagers_Credits_AottgCreditsParser__TryReadDescription
                           (node,&local_40,method_00), (char)bVar2 != '\0')) &&
       ((bVar2 = ApplicationManagers_Credits_AottgCreditsParser__TryReadContributors
                           (node,&local_48,method_01), (char)bVar2 != '\0' &&
        (bVar2 = ApplicationManagers_Credits_AottgCreditsParser__TryReadGroups
                           (node,&local_50,method_02), name = local_38, description = local_40,
        contributors = local_48, groups = local_50, (char)bVar2 != '\0')))) {
      __this = (ApplicationManagers_Credits_AottgCreditCategory_o *)il2cpp_runtime_glue(TypeInfo_AottgCreditCategory)
      ;
      ApplicationManagers_Credits_AottgCreditCategory___ctor
                (__this,name,description,contributors,groups,in_R9);
      *category = __this;
      il2cpp_runtime_glue(category,__this);
      return (bool_conflict)CONCAT71((int7)((ulong)name >> 8),1);
    }
  }
  return 0;
}


// ApplicationManagers.Credits.AottgCreditsParser$$TryReadGroups
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__TryReadGroups (SimpleJSONFixed_JSONNode_o* node, ApplicationManagers_Credits_AottgCreditGroup_array** groups, const MethodInfo* method);
// 0x41ae130

bool_conflict
ApplicationManagers_Credits_AottgCreditsParser__TryReadGroups
          (SimpleJSONFixed_JSONNode_o *node,
          ApplicationManagers_Credits_AottgCreditGroup_array **groups,MethodInfo *method)

{
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  bool_conflict bVar4;
  long *plVar5;
  ApplicationManagers_Credits_AottgCreditGroup_array *pAVar6;
  MethodInfo *extraout_RDX;
  long lVar7;
  ulong uVar8;
  bool_conflict bVar9;
  undefined8 unaff_R15;
  undefined1 auVar10 [16];
  
  if (DAT_05704d0c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCreditGroup);
    il2cpp_init_method_metadata(&"groups");
    DAT_05704d0c = '\x01';
    method = extraout_RDX;
  }
  *groups = (ApplicationManagers_Credits_AottgCreditGroup_array *)0x0;
  il2cpp_runtime_glue(groups,0,method);
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                      (node,"groups",(node->klass->vtable)._28_HasKey.method);
    if (cVar1 == '\0') {
      return 0;
    }
    plVar5 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                               (node,"groups",(node->klass->vtable)._7_get_Item.method);
    if (plVar5 != (long *)0x0) {
      cVar1 = (**(code **)(*plVar5 + 0x238))(plVar5,*(undefined8 *)(*plVar5 + 0x240));
      if (cVar1 == '\0') {
        return 0;
      }
      plVar5 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                                 (node,"groups",(node->klass->vtable)._7_get_Item.method);
      if ((plVar5 != (long *)0x0) &&
         (plVar5 = (long *)(**(code **)(*plVar5 + 0x408))(plVar5,*(undefined8 *)(*plVar5 + 0x410)),
         plVar5 != (long *)0x0)) {
        uVar2 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
        pAVar6 = (ApplicationManagers_Credits_AottgCreditGroup_array *)
                 il2cpp_glue_02274930(TypeInfo_AottgCreditGroup,uVar2);
        *groups = pAVar6;
        il2cpp_runtime_glue(groups,pAVar6);
        iVar3 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
        bVar9 = (bool_conflict)CONCAT71((int7)((ulong)unaff_R15 >> 8),1);
        if (iVar3 < 1) {
          return bVar9;
        }
        lVar7 = 0x20;
        uVar8 = 0;
        while( true ) {
          auVar10 = (**(code **)(*plVar5 + 0x188))
                              (plVar5,uVar8 & 0xffffffff,*(undefined8 *)(*plVar5 + 400));
          pAVar6 = *groups;
          if (pAVar6 == (ApplicationManagers_Credits_AottgCreditGroup_array *)0x0) break;
          if ((uint)pAVar6->max_length <= uVar8) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          bVar4 = ApplicationManagers_Credits_AottgCreditsParser__TryParseGroup
                            (auVar10._0_8_,
                             (ApplicationManagers_Credits_AottgCreditGroup_o **)
                             ((long)pAVar6->m_Items + lVar7 + -0x20),auVar10._8_8_);
          if ((char)bVar4 == '\0') {
            return 0;
          }
          uVar8 = uVar8 + 1;
          iVar3 = (**(code **)(*plVar5 + 0x1e8))(plVar5,*(undefined8 *)(*plVar5 + 0x1f0));
          lVar7 = lVar7 + 8;
          if ((long)iVar3 <= (long)uVar8) {
            return bVar9;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Credits.AottgCreditsParser$$TryParseGroup
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__TryParseGroup (SimpleJSONFixed_JSONNode_o* node, ApplicationManagers_Credits_AottgCreditGroup_o** group, const MethodInfo* method);
// 0x41ae300

bool_conflict
ApplicationManagers_Credits_AottgCreditsParser__TryParseGroup
          (SimpleJSONFixed_JSONNode_o *node,ApplicationManagers_Credits_AottgCreditGroup_o **group,
          MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditContributor_array *contributors;
  System_String_o *description;
  System_String_o *title;
  char cVar1;
  bool_conflict bVar2;
  ApplicationManagers_Credits_AottgCreditGroup_o *__this;
  MethodInfo *in_RCX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *in_R8;
  ApplicationManagers_Credits_AottgCreditContributor_array *local_40;
  System_String_o *local_38;
  System_String_o *local_30;
  
  if (DAT_05704d0d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCreditGroup);
    il2cpp_init_method_metadata(&"title");
    DAT_05704d0d = '\x01';
    method = extraout_RDX;
  }
  local_30 = (System_String_o *)0x0;
  local_38 = (System_String_o *)0x0;
  local_40 = (ApplicationManagers_Credits_AottgCreditContributor_array *)0x0;
  *group = (ApplicationManagers_Credits_AottgCreditGroup_o *)0x0;
  il2cpp_runtime_glue(group,0,method);
  if (DAT_05704d12 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704d12 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    cVar1 = (*(node->klass->vtable)._17_get_IsObject.methodPtr)
                      (node,(node->klass->vtable)._17_get_IsObject.method);
    if ((((cVar1 != '\0') &&
         (bVar2 = ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString
                            (node,"title",&local_30,in_RCX), (char)bVar2 != '\0')) &&
        (bVar2 = ApplicationManagers_Credits_AottgCreditsParser__TryReadDescription
                           (node,&local_38,method_00), (char)bVar2 != '\0')) &&
       (bVar2 = ApplicationManagers_Credits_AottgCreditsParser__TryReadContributors
                          (node,&local_40,method_01), title = local_30, description = local_38,
       contributors = local_40, (char)bVar2 != '\0')) {
      __this = (ApplicationManagers_Credits_AottgCreditGroup_o *)il2cpp_runtime_glue(TypeInfo_AottgCreditGroup);
      ApplicationManagers_Credits_AottgCreditGroup___ctor
                (__this,title,description,contributors,in_R8);
      *group = __this;
      il2cpp_runtime_glue(group,__this);
      return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
    }
  }
  return 0;
}


// ApplicationManagers.Credits.AottgCreditsParser$$TryReadContributors
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__TryReadContributors (SimpleJSONFixed_JSONNode_o* node, ApplicationManagers_Credits_AottgCreditContributor_array** contributors, const MethodInfo* method);
// 0x41adea0

bool_conflict
ApplicationManagers_Credits_AottgCreditsParser__TryReadContributors
          (SimpleJSONFixed_JSONNode_o *node,
          ApplicationManagers_Credits_AottgCreditContributor_array **contributors,MethodInfo *method
          )

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  long lVar4;
  char cVar5;
  int32_t capacity;
  int iVar6;
  int iVar7;
  bool_conflict bVar8;
  long *plVar9;
  System_Collections_Generic_List_object__o *__this;
  ApplicationManagers_Credits_AottgCreditContributor_array *pAVar10;
  MethodInfo *extraout_RDX;
  undefined1 auVar11 [16];
  ApplicationManagers_Credits_AottgCreditContributor_o *local_38;
  
  if (DAT_05704d0e == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_AottgCreditContributor___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_ApplicationManagers_Credits_AottgCreditCo);
    il2cpp_init_method_metadata(&TypeInfo_List_AottgCreditContributor);
    il2cpp_init_method_metadata(&"contributors");
    DAT_05704d0e = '\x01';
    method = extraout_RDX;
  }
  local_38 = (ApplicationManagers_Credits_AottgCreditContributor_o *)0x0;
  *contributors = (ApplicationManagers_Credits_AottgCreditContributor_array *)0x0;
  il2cpp_runtime_glue(contributors,0,method);
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar5 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                      (node,"contributors",(node->klass->vtable)._28_HasKey.method);
    if (cVar5 == '\0') {
      return 0;
    }
    plVar9 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                               (node,"contributors",(node->klass->vtable)._7_get_Item.method);
    if (plVar9 != (long *)0x0) {
      cVar5 = (**(code **)(*plVar9 + 0x238))(plVar9,*(undefined8 *)(*plVar9 + 0x240));
      if (cVar5 == '\0') {
        return 0;
      }
      plVar9 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                                 (node,"contributors",(node->klass->vtable)._7_get_Item.method);
      if ((plVar9 != (long *)0x0) &&
         (plVar9 = (long *)(**(code **)(*plVar9 + 0x408))(plVar9,*(undefined8 *)(*plVar9 + 0x410)),
         plVar9 != (long *)0x0)) {
        capacity = (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
        __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_AottgCreditContributor);
        System_Collections_Generic_List<object>___ctor(__this,capacity,MethodInfo_List_1_ApplicationManagers_Credits_AottgCreditCo);
        iVar6 = (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
        if (iVar6 < 1) {
          if (__this != (System_Collections_Generic_List_object__o *)0x0) goto LAB_041ae0d9;
        }
        else {
          if (__this != (System_Collections_Generic_List_object__o *)0x0) {
            iVar6 = 0;
            do {
              auVar11 = (**(code **)(*plVar9 + 0x188))(plVar9,iVar6,*(undefined8 *)(*plVar9 + 400));
              bVar8 = ApplicationManagers_Credits_AottgCreditsParser__TryParseContributor
                                (auVar11._0_8_,&local_38,auVar11._8_8_);
              lVar4 = MethodInfo_Void_Add;
              if ((char)bVar8 == '\0') {
                return 0;
              }
              piVar1 = &(__this->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar3 = (__this->fields)._items;
              if (pSVar3 == (System_Object_array *)0x0) goto LAB_041ae123;
              uVar2 = (__this->fields)._size;
              if (uVar2 < (uint)pSVar3->max_length) {
                (__this->fields)._size = uVar2 + 1;
                pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)local_38;
                il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          (__this,(Il2CppObject *)local_38,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
              iVar6 = iVar6 + 1;
              iVar7 = (**(code **)(*plVar9 + 0x1e8))(plVar9,*(undefined8 *)(*plVar9 + 0x1f0));
            } while (iVar6 < iVar7);
LAB_041ae0d9:
            pAVar10 = (ApplicationManagers_Credits_AottgCreditContributor_array *)
                      System_Collections_Generic_List<object>__ToArray(__this,MethodInfo_AottgCreditContributor___ToArray);
            *contributors = pAVar10;
            il2cpp_runtime_glue(contributors,pAVar10);
            return (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
          }
          auVar11 = (**(code **)(*plVar9 + 0x188))(plVar9,0,*(undefined8 *)(*plVar9 + 400));
          bVar8 = ApplicationManagers_Credits_AottgCreditsParser__TryParseContributor
                            (auVar11._0_8_,&local_38,auVar11._8_8_);
          if ((char)bVar8 == '\0') {
            return 0;
          }
        }
      }
    }
  }
LAB_041ae123:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Credits.AottgCreditsParser$$TryParseContributor
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__TryParseContributor (SimpleJSONFixed_JSONNode_o* node, ApplicationManagers_Credits_AottgCreditContributor_o** contributor, const MethodInfo* method);
// 0x41ae470

bool_conflict
ApplicationManagers_Credits_AottgCreditsParser__TryParseContributor
          (SimpleJSONFixed_JSONNode_o *node,
          ApplicationManagers_Credits_AottgCreditContributor_o **contributor,MethodInfo *method)

{
  System_String_o *pSVar1;
  char cVar2;
  bool_conflict bVar3;
  long *plVar4;
  ApplicationManagers_Credits_AottgCreditContributor_o *__this;
  SimpleJSONFixed_JSONNode_o *node_00;
  System_String_o *value;
  MethodInfo *in_RCX;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  System_String_o *local_40;
  System_Guid_Fields local_38;
  
  if (DAT_05704d0f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCreditContributor);
    il2cpp_init_method_metadata(&"accountId");
    il2cpp_init_method_metadata(&"name");
    DAT_05704d0f = '\x01';
    method = extraout_RDX;
  }
  local_40 = (System_String_o *)0x0;
  local_38._a = 0;
  local_38._b = 0;
  local_38._c = 0;
  local_38._d = '\0';
  local_38._e = '\0';
  local_38._f = '\0';
  local_38._g = '\0';
  local_38._h = '\0';
  local_38._i = '\0';
  local_38._j = '\0';
  local_38._k = '\0';
  *contributor = (ApplicationManagers_Credits_AottgCreditContributor_o *)0x0;
  il2cpp_runtime_glue(contributor,0,method);
  if (DAT_05704d12 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704d12 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    return 0;
  }
  if (node == (SimpleJSONFixed_JSONNode_o *)0x0) {
LAB_041ae6a6:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  cVar2 = (*(node->klass->vtable)._17_get_IsObject.methodPtr)
                    (node,(node->klass->vtable)._17_get_IsObject.method);
  if (((cVar2 == '\0') ||
      (bVar3 = ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString
                         (node,"name",&local_40,in_RCX), (char)bVar3 == '\0')) ||
     (cVar2 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                        (node,"accountId",(node->klass->vtable)._28_HasKey.method), cVar2 == '\0'))
  {
LAB_041ae696:
    bVar3 = 0;
  }
  else {
    plVar4 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                               (node,"accountId",(node->klass->vtable)._7_get_Item.method);
    if (plVar4 == (long *)0x0) goto LAB_041ae6a6;
    cVar2 = (**(code **)(*plVar4 + 0x228))(plVar4);
    if (cVar2 == '\0') {
      plVar4 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                                 (node,"accountId",(node->klass->vtable)._7_get_Item.method);
      if (plVar4 == (long *)0x0) goto LAB_041ae6a6;
      cVar2 = (**(code **)(*plVar4 + 0x208))(plVar4,*(undefined8 *)(*plVar4 + 0x210));
      if (cVar2 == '\0') goto LAB_041ae696;
      method_00 = "accountId";
      node_00 = (SimpleJSONFixed_JSONNode_o *)
                (*(node->klass->vtable)._7_get_Item.methodPtr)
                          (node,"accountId",(node->klass->vtable)._7_get_Item.method);
      value = ApplicationManagers_Credits_AottgCreditsParser__Trimmed(node_00,method_00);
      bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
      if ((char)bVar3 != '\0') {
        return 0;
      }
      bVar3 = System_Guid__TryParse(value,(System_Guid_o *)&local_38,(MethodInfo *)0x0);
      if ((char)bVar3 == '\0') {
        return 0;
      }
    }
    else {
      value = (System_String_o *)0x0;
    }
    pSVar1 = local_40;
    __this = (ApplicationManagers_Credits_AottgCreditContributor_o *)
             il2cpp_runtime_glue(TypeInfo_AottgCreditContributor);
    System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
    (__this->fields)._Name_k__BackingField = pSVar1;
    il2cpp_runtime_glue(&__this->fields,pSVar1);
    (__this->fields)._AccountId_k__BackingField = value;
    il2cpp_runtime_glue(&(__this->fields)._AccountId_k__BackingField,value);
    *contributor = __this;
    il2cpp_runtime_glue(contributor,__this);
    bVar3 = (bool_conflict)CONCAT71((int7)((ulong)__this >> 8),1);
  }
  return bVar3;
}


// ApplicationManagers.Credits.AottgCreditsParser$$TryReadDescription
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__TryReadDescription (SimpleJSONFixed_JSONNode_o* node, System_String_o** description, const MethodInfo* method);
// 0x41add80

bool_conflict
ApplicationManagers_Credits_AottgCreditsParser__TryReadDescription
          (SimpleJSONFixed_JSONNode_o *node,System_String_o **description,MethodInfo *method)

{
  char cVar1;
  long *plVar2;
  SimpleJSONFixed_JSONNode_o *node_00;
  System_String_o *pSVar3;
  MethodInfo *extraout_RDX;
  bool_conflict bVar4;
  undefined8 unaff_RBP;
  MethodInfo *method_00;
  
  if (DAT_05704d10 == '\0') {
    il2cpp_init_method_metadata(&"description");
    DAT_05704d10 = '\x01';
    method = extraout_RDX;
  }
  *description = (System_String_o *)0x0;
  il2cpp_runtime_glue(description,0,method);
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                      (node,"description",(node->klass->vtable)._28_HasKey.method);
    if (cVar1 == '\0') {
      return 0;
    }
    plVar2 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                               (node,"description",(node->klass->vtable)._7_get_Item.method);
    if (plVar2 != (long *)0x0) {
      cVar1 = (**(code **)(*plVar2 + 0x228))(plVar2,*(undefined8 *)(*plVar2 + 0x230));
      bVar4 = (bool_conflict)CONCAT71((int7)((ulong)unaff_RBP >> 8),1);
      if (cVar1 != '\0') {
        return bVar4;
      }
      plVar2 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                                 (node,"description",(node->klass->vtable)._7_get_Item.method);
      if (plVar2 != (long *)0x0) {
        cVar1 = (**(code **)(*plVar2 + 0x208))(plVar2,*(undefined8 *)(*plVar2 + 0x210));
        if (cVar1 == '\0') {
          return 0;
        }
        method_00 = "description";
        node_00 = (SimpleJSONFixed_JSONNode_o *)
                  (*(node->klass->vtable)._7_get_Item.methodPtr)
                            (node,"description",(node->klass->vtable)._7_get_Item.method);
        pSVar3 = ApplicationManagers_Credits_AottgCreditsParser__Trimmed(node_00,method_00);
        *description = pSVar3;
        il2cpp_runtime_glue(description,pSVar3);
        return bVar4;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Credits.AottgCreditsParser$$TryReadRequiredString
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString (SimpleJSONFixed_JSONNode_o* node, System_String_o* key, System_String_o** value, const MethodInfo* method);
// 0x41adcc0

bool_conflict
ApplicationManagers_Credits_AottgCreditsParser__TryReadRequiredString
          (SimpleJSONFixed_JSONNode_o *node,System_String_o *key,System_String_o **value,
          MethodInfo *method)

{
  char cVar1;
  uint uVar2;
  long *plVar3;
  SimpleJSONFixed_JSONNode_o *node_00;
  System_String_o *pSVar4;
  
  *value = (System_String_o *)0x0;
  il2cpp_runtime_glue(value,0);
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar1 = (*(node->klass->vtable)._28_HasKey.methodPtr)
                      (node,key,(node->klass->vtable)._28_HasKey.method);
    if (cVar1 != '\0') {
      plVar3 = (long *)(*(node->klass->vtable)._7_get_Item.methodPtr)
                                 (node,key,(node->klass->vtable)._7_get_Item.method);
      if (plVar3 == (long *)0x0) goto LAB_041add7a;
      cVar1 = (**(code **)(*plVar3 + 0x208))(plVar3,*(undefined8 *)(*plVar3 + 0x210));
      if (cVar1 != '\0') {
        node_00 = (SimpleJSONFixed_JSONNode_o *)
                  (*(node->klass->vtable)._7_get_Item.methodPtr)
                            (node,key,(node->klass->vtable)._7_get_Item.method);
        pSVar4 = ApplicationManagers_Credits_AottgCreditsParser__Trimmed(node_00,(MethodInfo *)key);
        *value = pSVar4;
        il2cpp_runtime_glue(value);
        uVar2 = System_String__IsNullOrEmpty(*value,(MethodInfo *)0x0);
        return uVar2 ^ 1;
      }
    }
    return 0;
  }
LAB_041add7a:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Credits.AottgCreditsParser$$Trimmed
// il2cpp: System_String_o* ApplicationManagers_Credits_AottgCreditsParser__Trimmed (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x41ae6b0

System_String_o *
ApplicationManagers_Credits_AottgCreditsParser__Trimmed
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  char cVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  
  if (DAT_05704d11 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704d11 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = SimpleJSONFixed_JSONNode__op_Equality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    return (System_String_o *)0x0;
  }
  if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
    cVar1 = (*(node->klass->vtable)._15_get_IsNull.methodPtr)
                      (node,(node->klass->vtable)._15_get_IsNull.method);
    if (cVar1 != '\0') {
      return (System_String_o *)0x0;
    }
    pSVar3 = (System_String_o *)(*(node->klass->vtable)._9_get_Value.methodPtr)(node);
    if (pSVar3 != (System_String_o *)0x0) {
      pSVar3 = System_String__Trim(pSVar3,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// ApplicationManagers.Credits.AottgCreditsParser$$IsObject
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__IsObject (SimpleJSONFixed_JSONNode_o* node, const MethodInfo* method);
// 0x41adab0

bool_conflict
ApplicationManagers_Credits_AottgCreditsParser__IsObject
          (SimpleJSONFixed_JSONNode_o *node,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_05704d12 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    DAT_05704d12 = '\x01';
  }
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = SimpleJSONFixed_JSONNode__op_Inequality(node,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (node != (SimpleJSONFixed_JSONNode_o *)0x0) {
      bVar1 = (*(node->klass->vtable)._17_get_IsObject.methodPtr)
                        (node,(node->klass->vtable)._17_get_IsObject.method);
      return bVar1;
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return 0;
}


// ApplicationManagers.Credits.AottgCreditsParser$$Fail
// il2cpp: bool ApplicationManagers_Credits_AottgCreditsParser__Fail (ApplicationManagers_Credits_AottgCreditsResponse_o** credits, System_String_o** error, const MethodInfo* method);
// 0x41ad770

bool_conflict
ApplicationManagers_Credits_AottgCreditsParser__Fail
          (ApplicationManagers_Credits_AottgCreditsResponse_o **credits,System_String_o **error,
          MethodInfo *method)

{
  MethodInfo *extraout_RDX;
  
  if (DAT_05704d13 == '\0') {
    il2cpp_init_method_metadata(&"bad_response");
    DAT_05704d13 = '\x01';
    method = extraout_RDX;
  }
  *credits = (ApplicationManagers_Credits_AottgCreditsResponse_o *)0x0;
  il2cpp_runtime_glue(credits,0,method);
  *error = "bad_response";
  il2cpp_runtime_glue(error,"bad_response");
  return 0;
}


