// Type: Gisketch.Aottg2UI.Search.GisketchSearchEntry
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Search/GisketchSearchEntry.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchEntry___ctor (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, UnityEngine_GameObject_o* target, const MethodInfo* method);
// 0x3b46b70

void Gisketch_Aottg2UI_Search_GisketchSearchEntry___ctor
               (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,UnityEngine_GameObject_o *target,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  bool_conflict bVar2;
  System_String_Fields *pSVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_Fields *pGVar5;
  System_String_Fields value;
  System_String_o *pSVar6;
  System_String_Fields SVar7;
  long lVar8;
  System_String_o *pSVar9;
  System_String_Fields extraout_RDX;
  void *pvVar10;
  MethodInfo *pMVar11;
  System_String_Fields SVar12;
  System_String_Fields in_R8;
  System_String_Fields kind;
  System_String_Fields in_R9;
  System_String_Fields SVar13;
  System_String_c *kind_00;
  bool bVar14;
  MethodInfo *in_stack_ffffffffffffff98;
  System_String_Fields local_58;
  
  pSVar4 = *(System_String_o **)(g_data_057b9c00 + 0xb8);
  SVar12 = (System_String_Fields)pSVar4->klass;
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    kind_00 = (System_String_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
    pSVar4 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind
                       ((System_String_o *)kind_00,(MethodInfo *)0x0);
    pGVar5 = *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_Fields **)(g_data_057b9c00 + 0xb8);
    local_58 = SVar12;
    kind = SVar12;
    value = SVar12;
    SVar13 = SVar12;
    goto label_03b46d67;
  }
  SVar13 = (System_String_Fields)(node->fields).id;
  pSVar6 = (node->fields).popover;
  bVar14 = pSVar6 == (System_String_o *)0x0;
  pSVar9 = pSVar6 + 2;
  if (bVar14) {
    pSVar9 = pSVar4;
  }
  kind = (System_String_Fields)pSVar9->klass;
  pSVar9 = (System_String_o *)&pSVar6[2].monitor;
  if (bVar14) {
    pSVar9 = pSVar4;
  }
  value = (System_String_Fields)pSVar9->klass;
  if (bVar14) {
label_03b46bed:
    pMVar11 = (MethodInfo *)0x0;
    bVar2 = System_String__IsNullOrEmpty((node->fields).text,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      pSVar3 = (System_String_Fields *)&(node->fields).text;
label_03b46c7f:
      local_58 = *pSVar3;
    }
    else {
      pMVar11 = (MethodInfo *)0x0;
      bVar2 = System_String__IsNullOrEmpty((node->fields).placeholder,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        pSVar3 = (System_String_Fields *)&(node->fields).placeholder;
        goto label_03b46c7f;
      }
      local_58 = (System_String_Fields)(node->fields).id;
      if (local_58 == (System_String_Fields)0x0) {
        pSVar3 = *(System_String_Fields **)(g_data_057b9c00 + 0xb8);
        goto label_03b46c7f;
      }
    }
    pSVar4 = (node->fields).popover;
    pGVar1 = node;
    if (pSVar4 == (System_String_o *)0x0) {
      kind_00 = (System_String_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      pSVar4 = (node->fields).popover;
      if (pSVar4 != (System_String_o *)0x0) goto label_03b46cc4;
label_03b46cf6:
      pSVar4 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind((pGVar1->fields).type,pMVar11);
      pSVar6 = (node->fields).popover;
      if (pSVar6 != (System_String_o *)0x0) goto label_03b46d1c;
    }
    else {
      kind_00 = pSVar4[1].klass;
      pSVar4 = (node->fields).popover;
      if (pSVar4 == (System_String_o *)0x0) goto label_03b46cf6;
label_03b46cc4:
      SVar7 = (System_String_Fields)pSVar4[1].monitor;
      pMVar11 = (MethodInfo *)0x0;
      bVar2 = System_String__IsNullOrEmpty((System_String_o *)SVar7,(MethodInfo *)0x0);
      pSVar6 = (node->fields).popover;
      if ((char)bVar2 != '\0') {
        if (pSVar6 != (System_String_o *)0x0) {
          SVar7 = pSVar6[1].fields;
          pMVar11 = (MethodInfo *)0x0;
          bVar2 = System_String__IsNullOrEmpty((System_String_o *)SVar7,(MethodInfo *)0x0);
          if ((char)bVar2 == '\0') {
            pSVar4 = (node->fields).popover;
            if (pSVar4 == (System_String_o *)0x0) goto label_03b46dc3;
            pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)(pSVar4 + 1);
          }
        }
        goto label_03b46cf6;
      }
      if (pSVar6 == (System_String_o *)0x0) goto label_03b46dc3;
      pSVar4 = pSVar6[1].monitor;
label_03b46d1c:
      SVar7 = pSVar6[1].fields;
      bVar2 = System_String__IsNullOrEmpty((System_String_o *)SVar7,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        pSVar6 = (node->fields).popover;
        in_R8 = kind;
        in_R9 = value;
        if (pSVar6 != (System_String_o *)0x0) {
          pGVar5 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_Fields *)&pSVar6[1].fields;
          goto label_03b46d67;
        }
        goto label_03b46dc3;
      }
    }
    pGVar5 = &node->fields;
label_03b46d67:
    Gisketch_Aottg2UI_Search_GisketchSearchEntry___ctor_3a46f80
              (__this,(System_String_o *)SVar12,(System_String_o *)SVar12,(System_String_o *)SVar12,
               (System_String_o *)kind,(System_String_o *)value,(System_String_o *)SVar13,
               (System_String_o *)local_58,(System_String_o *)kind_00,pSVar4,pGVar5->type,target,
               in_stack_ffffffffffffff98);
    (__this->fields)._Node_k__BackingField = node;
    il2cpp_runtime_helper_022b4080(&__this->fields,node);
    return;
  }
  SVar7 = pSVar6->fields;
  pMVar11 = (MethodInfo *)0x0;
  bVar2 = System_String__IsNullOrEmpty((System_String_o *)SVar7,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') goto label_03b46bed;
  pSVar4 = (node->fields).popover;
  if (pSVar4 != (System_String_o *)0x0) {
    pSVar3 = &pSVar4->fields;
    goto label_03b46c7f;
  }
label_03b46dc3:
  il2cpp_runtime_helper_022b2c90();
  if (SVar7 != (System_String_Fields)0x0) {
    if (*(System_String_Fields *)((long)SVar7 + 0xd0) != (System_String_Fields)0x0) {
      pSVar4 = *(System_String_o **)((long)*(System_String_Fields *)((long)SVar7 + 0xd0) + 0x10);
      pMVar11 = (MethodInfo *)0x0;
      bVar2 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        SVar12 = *(System_String_Fields *)((long)SVar7 + 0xd0);
        if (SVar12 != (System_String_Fields)0x0) {
          return;
        }
        il2cpp_runtime_helper_022b2c90();
        if (pSVar4 == (System_String_o *)0x0) {
          Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind
                    ((System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),pMVar11);
          return;
        }
        if (pSVar4[8].fields != (System_String_Fields)0x0) {
          pSVar6 = *(System_String_o **)((long)pSVar4[8].fields + 0x20);
          pMVar11 = (MethodInfo *)0x0;
          bVar2 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
          SVar7 = pSVar4[8].fields;
          if ((char)bVar2 == '\0') {
            if (SVar7 != (System_String_Fields)0x0) {
              return;
            }
label_03b46efe:
            il2cpp_runtime_helper_022b2c90();
            if (pSVar6 == (System_String_o *)0x0) {
              return;
            }
            if (pSVar6[8].fields != (System_String_Fields)0x0) {
              pSVar4 = *(System_String_o **)((long)pSVar6[8].fields + 0x28);
              pvVar10 = (void *)0x0;
              bVar2 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
              if ((char)bVar2 == '\0') {
                if (pSVar6[8].fields != (System_String_Fields)0x0) {
                  return;
                }
                il2cpp_runtime_helper_022b2c90();
                System_Object___ctor((Il2CppObject *)pSVar4,(MethodInfo *)0x0);
                pSVar4[1].klass = (System_String_c *)SVar13;
                il2cpp_runtime_helper_022b4080(pSVar4 + 1,SVar13);
                if (pvVar10 == (void *)0x0) {
                  pvVar10 = (void *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                }
                pSVar4[1].monitor = pvVar10;
                il2cpp_runtime_helper_022b4080(&pSVar4[1].monitor,pvVar10);
                SVar13 = extraout_RDX;
                if (extraout_RDX == (System_String_Fields)0x0) {
                  SVar13 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
                }
                pSVar4[1].fields = SVar13;
                il2cpp_runtime_helper_022b4080(&pSVar4[1].fields,SVar13);
                if (SVar7 == (System_String_Fields)0x0) {
                  SVar7 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
                }
                pSVar4[2].klass = (System_String_c *)SVar7;
                il2cpp_runtime_helper_022b4080(pSVar4 + 2,SVar7);
                if (in_R8 == (System_String_Fields)0x0) {
                  in_R8 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
                }
                pSVar4[2].monitor = (void *)in_R8;
                il2cpp_runtime_helper_022b4080(&pSVar4[2].monitor,in_R8);
                if (in_R9 == (System_String_Fields)0x0) {
                  in_R9 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
                }
                pSVar4[2].fields = in_R9;
                il2cpp_runtime_helper_022b4080(&pSVar4[2].fields);
                if (SVar12 == (System_String_Fields)0x0) {
                  SVar12 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
                }
                pSVar4[3].klass = (System_String_c *)SVar12;
                il2cpp_runtime_helper_022b4080(pSVar4 + 3);
                bVar2 = System_String__IsNullOrEmpty((System_String_o *)pSVar4[3].klass,(MethodInfo *)0x0);
                lVar8 = 0x48;
                if ((char)bVar2 != '\0') {
                  lVar8 = 0x20;
                }
                pSVar4[3].monitor = *(void **)((long)&pSVar4->klass + lVar8);
                il2cpp_runtime_helper_022b4080(&pSVar4[3].monitor);
                if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
                  node = *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **)
                          *(System_String_Fields **)(g_data_057b9c00 + 0xb8);
                }
                pSVar4[3].fields = (System_String_Fields)node;
                il2cpp_runtime_helper_022b4080(&pSVar4[3].fields);
                if (local_58 == (System_String_Fields)0x0) {
                  local_58 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
                }
                pSVar4[4].klass = (System_String_c *)local_58;
                il2cpp_runtime_helper_022b4080(pSVar4 + 4);
                pMVar11 = (MethodInfo *)0x0;
                bVar2 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
                if ((char)bVar2 != '\0') {
                  value = (System_String_Fields)
                          Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind
                                    ((System_String_o *)kind,pMVar11);
                }
                pSVar4[4].monitor = (void *)value;
                il2cpp_runtime_helper_022b4080(&pSVar4[4].monitor,value);
                if (kind == (System_String_Fields)0x0) {
                  kind = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
                }
                pSVar4[4].fields = kind;
                il2cpp_runtime_helper_022b4080(&pSVar4[4].fields,kind);
                return;
              }
            }
            return;
          }
          if (SVar7 != (System_String_Fields)0x0) {
            pSVar6 = *(System_String_o **)((long)SVar7 + 0x28);
            pMVar11 = (MethodInfo *)0x0;
            bVar2 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
            if ((char)bVar2 == '\0') {
              if (pSVar4[8].fields != (System_String_Fields)0x0) {
                Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind
                          (*(System_String_o **)((long)pSVar4[8].fields + 0x28),pMVar11);
                return;
              }
              goto label_03b46efe;
            }
          }
        }
        Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind((System_String_o *)pSVar4->fields,pMVar11);
        return;
      }
    }
    bVar2 = System_String__IsNullOrEmpty(*(void **)((long)SVar7 + 0x20),(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    bVar2 = System_String__IsNullOrEmpty
                      ((System_String_o *)((System_String_o *)((long)SVar7 + 0x30))->klass,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return;
    }
    if (((System_String_o *)((long)SVar7 + 0x18))->klass != (System_String_c *)0x0) {
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchEntry___ctor (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, System_String_o* screenId, System_String_o* screenTitle, System_String_o* searchGroup, System_String_o* sectionId, System_String_o* sectionTitle, System_String_o* targetId, System_String_o* title, System_String_o* keywords, System_String_o* icon, System_String_o* kind, UnityEngine_GameObject_o* target, const MethodInfo* method);
// 0x3b46f80

void Gisketch_Aottg2UI_Search_GisketchSearchEntry___ctor_3a46f80
               (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,System_String_o *screenId,
               System_String_o *screenTitle,System_String_o *searchGroup,System_String_o *sectionId,
               System_String_o *sectionTitle,System_String_o *targetId,System_String_o *title,
               System_String_o *keywords,System_String_o *icon,System_String_o *kind,
               UnityEngine_GameObject_o *target,MethodInfo *method)

{
  bool_conflict bVar1;
  long lVar2;
  MethodInfo *method_00;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Target_k__BackingField = target;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Target_k__BackingField,target);
  if (screenId == (System_String_o *)0x0) {
    screenId = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  (__this->fields)._ScreenId_k__BackingField = screenId;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._ScreenId_k__BackingField,screenId);
  if (screenTitle == (System_String_o *)0x0) {
    screenTitle = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  (__this->fields)._ScreenTitle_k__BackingField = screenTitle;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._ScreenTitle_k__BackingField,screenTitle);
  if (searchGroup == (System_String_o *)0x0) {
    searchGroup = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  (__this->fields)._SearchGroup_k__BackingField = searchGroup;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._SearchGroup_k__BackingField,searchGroup);
  if (sectionId == (System_String_o *)0x0) {
    sectionId = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  (__this->fields)._SectionId_k__BackingField = sectionId;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._SectionId_k__BackingField,sectionId);
  if (sectionTitle == (System_String_o *)0x0) {
    sectionTitle = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  (__this->fields)._SectionTitle_k__BackingField = sectionTitle;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._SectionTitle_k__BackingField);
  if (targetId == (System_String_o *)0x0) {
    targetId = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  (__this->fields)._TargetId_k__BackingField = targetId;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._TargetId_k__BackingField);
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
  lVar2 = 0x48;
  if ((char)bVar1 != '\0') {
    lVar2 = 0x20;
  }
  (__this->fields)._Id_k__BackingField = *(System_String_o **)((long)&__this->klass + lVar2);
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Id_k__BackingField);
  if (title == (System_String_o *)0x0) {
    title = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  (__this->fields)._Title_k__BackingField = title;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Title_k__BackingField);
  if (keywords == (System_String_o *)0x0) {
    keywords = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  (__this->fields)._Keywords_k__BackingField = keywords;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Keywords_k__BackingField);
  method_00 = (MethodInfo *)0x0;
  bVar1 = System_String__IsNullOrEmpty(icon,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    icon = Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind(kind,method_00);
  }
  (__this->fields)._Icon_k__BackingField = icon;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Icon_k__BackingField,icon);
  if (kind == (System_String_o *)0x0) {
    kind = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  (__this->fields)._Kind_k__BackingField = kind;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._Kind_k__BackingField,kind);
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_Node
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Node (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x3b473f0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Node
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._Node_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$set_Node
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchEntry__set_Node (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* value, const MethodInfo* method);
// 0x3b47400

void Gisketch_Aottg2UI_Search_GisketchSearchEntry__set_Node
               (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *value,MethodInfo *method)

{
  (__this->fields)._Node_k__BackingField = value;
  il2cpp_runtime_helper_022b4080(&__this->fields);
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_Target
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Target (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x3b47410

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Target
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._Target_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_ScreenId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_ScreenId (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x3b47420

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_ScreenId
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._ScreenId_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_ScreenTitle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_ScreenTitle (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x3b47430

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_ScreenTitle
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._ScreenTitle_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_SearchGroup
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_SearchGroup (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x3b47440

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_SearchGroup
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._SearchGroup_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_SectionId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_SectionId (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x3b47450

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_SectionId
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._SectionId_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_SectionTitle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_SectionTitle (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x3b47460

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_SectionTitle
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._SectionTitle_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_TargetId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_TargetId (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x3b47470

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_TargetId
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._TargetId_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_Id
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Id (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x3b47480

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Id
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._Id_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Title (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x3b47490

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Title
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._Title_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_DisplayTitle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_DisplayTitle (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x3b474a0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_DisplayTitle
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_RDX;
  
  pSVar1 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle_3a47560(__this,1,in_RDX);
  return pSVar1;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$DisplayTitleFor
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__DisplayTitleFor (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, System_String_o* activeScreenId, const MethodInfo* method);
// 0x3b474c0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__DisplayTitleFor
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,System_String_o *activeScreenId,
          MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  byte bVar3;
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._ScreenId_k__BackingField,(MethodInfo *)0x0);
  bVar3 = 1;
  method_00 = extraout_RDX;
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__IsNullOrEmpty(activeScreenId,(MethodInfo *)0x0);
    method_00 = extraout_RDX_00;
    if ((char)bVar1 == '\0') {
      bVar1 = System_String__Equals_3af50f0
                        ((__this->fields)._ScreenId_k__BackingField,activeScreenId,5,(MethodInfo *)0x0);
      bVar3 = (byte)bVar1 ^ 1;
      method_00 = extraout_RDX_01;
    }
  }
  pSVar2 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle_3a47560(__this,(uint)bVar3,method_00);
  return pSVar2;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_Keywords
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Keywords (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x3b477d0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Keywords
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._Keywords_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_Icon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Icon (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x3b477e0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Icon
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._Icon_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_Kind
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Kind (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x3b477f0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Kind
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._Kind_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$TitleFor
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__TitleFor (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x3b46dd0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__TitleFor
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_Fields SVar3;
  long lVar4;
  System_String_Fields extraout_RDX;
  System_String_Fields unaff_RBX;
  void *pvVar5;
  MethodInfo *pMVar6;
  System_String_Fields SVar7;
  System_String_o *value;
  void *in_R8;
  System_String_Fields in_R9;
  System_String_c *unaff_retaddr;
  System_String_o *in_stack_00000008;
  System_String_Fields in_stack_00000010;
  System_String_c *in_stack_00000018;
  
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pSVar2 = (node->fields).popover;
    if (pSVar2 != (System_String_o *)0x0) {
      SVar7 = pSVar2->fields;
      pMVar6 = (MethodInfo *)0x0;
      bVar1 = System_String__IsNullOrEmpty((System_String_o *)SVar7,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        pSVar2 = (node->fields).popover;
        if (pSVar2 != (System_String_o *)0x0) {
          return (System_String_o *)pSVar2->fields;
        }
        il2cpp_runtime_helper_022b2c90();
        if (SVar7 == (System_String_Fields)0x0) {
          pSVar2 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind
                             ((System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),pMVar6);
          return pSVar2;
        }
        if (*(System_String_Fields *)((long)SVar7 + 0xd0) != (System_String_Fields)0x0) {
          pSVar2 = *(System_String_o **)((long)*(System_String_Fields *)((long)SVar7 + 0xd0) + 0x20);
          pMVar6 = (MethodInfo *)0x0;
          bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
          SVar3 = *(System_String_Fields *)((long)SVar7 + 0xd0);
          if ((char)bVar1 == '\0') {
            if (SVar3 != (System_String_Fields)0x0) {
              return *(System_String_o **)((long)SVar3 + 0x20);
            }
label_03b46efe:
            il2cpp_runtime_helper_022b2c90();
            if (pSVar2 == (System_String_o *)0x0) {
              return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
            }
            if (pSVar2[8].fields != (System_String_Fields)0x0) {
              value = *(System_String_o **)((long)pSVar2[8].fields + 0x28);
              pvVar5 = (void *)0x0;
              bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
              if ((char)bVar1 == '\0') {
                if (pSVar2[8].fields == (System_String_Fields)0x0) {
                  il2cpp_runtime_helper_022b2c90();
                  System_Object___ctor((Il2CppObject *)value,(MethodInfo *)0x0);
                  value[1].klass = in_stack_00000018;
                  il2cpp_runtime_helper_022b4080(value + 1,in_stack_00000018);
                  if (pvVar5 == (void *)0x0) {
                    pvVar5 = (void *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                  }
                  value[1].monitor = pvVar5;
                  il2cpp_runtime_helper_022b4080(&value[1].monitor,pvVar5);
                  SVar7 = extraout_RDX;
                  if (extraout_RDX == (System_String_Fields)0x0) {
                    SVar7 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
                  }
                  value[1].fields = SVar7;
                  il2cpp_runtime_helper_022b4080(&value[1].fields,SVar7);
                  if (SVar3 == (System_String_Fields)0x0) {
                    SVar3 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
                  }
                  value[2].klass = (System_String_c *)SVar3;
                  il2cpp_runtime_helper_022b4080(value + 2,SVar3);
                  if (in_R8 == (void *)0x0) {
                    in_R8 = (void *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                  }
                  value[2].monitor = in_R8;
                  il2cpp_runtime_helper_022b4080(&value[2].monitor,in_R8);
                  if (in_R9 == (System_String_Fields)0x0) {
                    in_R9 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
                  }
                  value[2].fields = in_R9;
                  il2cpp_runtime_helper_022b4080(&value[2].fields);
                  value[3].klass = (System_String_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                  il2cpp_runtime_helper_022b4080(value + 3);
                  bVar1 = System_String__IsNullOrEmpty((System_String_o *)value[3].klass,(MethodInfo *)0x0);
                  lVar4 = 0x48;
                  if ((char)bVar1 != '\0') {
                    lVar4 = 0x20;
                  }
                  value[3].monitor = *(void **)((long)&value->klass + lVar4);
                  il2cpp_runtime_helper_022b4080(&value[3].monitor);
                  if (unaff_RBX == (System_String_Fields)0x0) {
                    unaff_RBX = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
                  }
                  value[3].fields = unaff_RBX;
                  il2cpp_runtime_helper_022b4080(&value[3].fields);
                  if (unaff_retaddr == (System_String_c *)0x0) {
                    unaff_retaddr = (System_String_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
                  }
                  value[4].klass = unaff_retaddr;
                  il2cpp_runtime_helper_022b4080(value + 4);
                  pMVar6 = (MethodInfo *)0x0;
                  bVar1 = System_String__IsNullOrEmpty(in_stack_00000008,(MethodInfo *)0x0);
                  if ((char)bVar1 != '\0') {
                    in_stack_00000008 =
                         Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind
                                   ((System_String_o *)in_stack_00000010,pMVar6);
                  }
                  value[4].monitor = in_stack_00000008;
                  il2cpp_runtime_helper_022b4080(&value[4].monitor,in_stack_00000008);
                  if (in_stack_00000010 == (System_String_Fields)0x0) {
                    in_stack_00000010 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
                  }
                  value[4].fields = in_stack_00000010;
                  pSVar2 = (System_String_o *)il2cpp_runtime_helper_022b4080(&value[4].fields,in_stack_00000010);
                  return pSVar2;
                }
                return *(System_String_o **)((long)pSVar2[8].fields + 0x28);
              }
            }
            return (System_String_o *)pSVar2->fields;
          }
          if (SVar3 != (System_String_Fields)0x0) {
            pSVar2 = *(System_String_o **)((long)SVar3 + 0x28);
            pMVar6 = (MethodInfo *)0x0;
            bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
            if ((char)bVar1 == '\0') {
              if (*(System_String_Fields *)((long)SVar7 + 0xd0) != (System_String_Fields)0x0) {
                pSVar2 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind
                                   (*(System_String_o **)
                                     ((long)*(System_String_Fields *)((long)SVar7 + 0xd0) + 0x28),pMVar6);
                return pSVar2;
              }
              goto label_03b46efe;
            }
          }
        }
        pSVar2 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind
                           ((System_String_o *)*(System_String_Fields *)((long)SVar7 + 0x10),pMVar6);
        return pSVar2;
      }
    }
    bVar1 = System_String__IsNullOrEmpty((node->fields).text,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return (node->fields).text;
    }
    bVar1 = System_String__IsNullOrEmpty((node->fields).placeholder,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return (node->fields).placeholder;
    }
    pSVar2 = (node->fields).id;
    if (pSVar2 != (System_String_o *)0x0) {
      return pSVar2;
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$PathTitle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x3b474b0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_RDX;
  
  pSVar1 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle_3a47560(__this,1,in_RDX);
  return pSVar1;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$PathTitle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, bool includeScreen, const MethodInfo* method);
// 0x3b47560

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle_3a47560
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,bool_conflict includeScreen,
          MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  System_String_array *values;
  System_String_o *str2;
  byte bVar4;
  System_String_o **ppSVar5;
  
  if (g_data_057a9caf == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&" > ");
    g_data_057a9caf = '\x01';
  }
  bVar4 = 1;
  if ((char)includeScreen != '\0') {
    if (g_data_057a9cb0 == '\0') {
      il2cpp_runtime_helper_023445d0(&"screen");
      il2cpp_runtime_helper_023445d0(&"main-menu");
      g_data_057a9cb0 = '\x01';
    }
    bVar4 = 0;
    bVar1 = System_String__Equals_3af50f0
                      ((__this->fields)._ScreenId_k__BackingField,"main-menu",5,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      bVar1 = System_String__Equals_3af50f0
                        ((__this->fields)._Kind_k__BackingField,"screen",5,(MethodInfo *)0x0);
      bVar4 = (byte)bVar1 ^ 1;
    }
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._ScreenTitle_k__BackingField,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    pSVar3 = (&(__this->fields)._ScreenId_k__BackingField)[(byte)((byte)bVar1 ^ 1)];
    bVar1 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      bVar1 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        return (__this->fields)._Title_k__BackingField;
      }
      bVar1 = System_String__IsNullOrEmpty((__this->fields)._SectionTitle_k__BackingField,(MethodInfo *)0x0);
      bVar2 = System_String__IsNullOrEmpty((__this->fields)._Title_k__BackingField,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        if (((char)bVar2 == '\0') &&
           (bVar1 = System_String__op_Equality
                              ((__this->fields)._Title_k__BackingField,
                               (__this->fields)._SectionTitle_k__BackingField,(MethodInfo *)0x0),
           (char)bVar1 == '\0')) {
          ppSVar5 = TypeInfo_string;
          values = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,5);
          if (values != (System_String_array *)0x0) {
            if ((int)values->max_length != 0) {
              ppSVar5 = values->m_Items;
              values->m_Items[0] = pSVar3;
              il2cpp_runtime_helper_022b4080(ppSVar5,pSVar3);
              if (1 < (uint)values->max_length) {
                ppSVar5 = values->m_Items + 1;
                values->m_Items[1] = " > ";
                il2cpp_runtime_helper_022b4080();
                if (2 < (uint)values->max_length) {
                  ppSVar5 = values->m_Items + 2;
                  values->m_Items[2] = (__this->fields)._SectionTitle_k__BackingField;
                  il2cpp_runtime_helper_022b4080();
                  if (3 < (uint)values->max_length) {
                    ppSVar5 = values->m_Items + 3;
                    values->m_Items[3] = " > ";
                    il2cpp_runtime_helper_022b4080();
                    if (4 < (uint)values->max_length) {
                      values->m_Items[4] = (__this->fields)._Title_k__BackingField;
                      il2cpp_runtime_helper_022b4080(values->m_Items + 4);
                      pSVar3 = System_String__Concat_3af7570(values,(MethodInfo *)0x0);
                      return pSVar3;
                    }
                  }
                }
              }
            }
            il2cpp_runtime_helper_022b2ca0();
          }
          il2cpp_runtime_helper_022b2c90();
          return ppSVar5[0xc];
        }
        str2 = (__this->fields)._SectionTitle_k__BackingField;
      }
      else {
        if ((char)bVar2 != '\0') {
          return pSVar3;
        }
        bVar1 = System_String__op_Equality((__this->fields)._Title_k__BackingField,pSVar3,(MethodInfo *)0x0);
        if ((char)bVar1 != '\0') {
          return pSVar3;
        }
        str2 = (__this->fields)._Title_k__BackingField;
      }
      goto label_03b476f8;
    }
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._SectionTitle_k__BackingField,(MethodInfo *)0x0);
  pSVar3 = (__this->fields)._Title_k__BackingField;
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
    if (((char)bVar1 == '\0') &&
       (bVar1 = System_String__op_Equality
                          ((__this->fields)._Title_k__BackingField,
                           (__this->fields)._SectionTitle_k__BackingField,(MethodInfo *)0x0),
       (char)bVar1 == '\0')) {
      pSVar3 = (__this->fields)._SectionTitle_k__BackingField;
      str2 = (__this->fields)._Title_k__BackingField;
label_03b476f8:
      pSVar3 = System_String__Concat_3af7150(pSVar3," > ",str2,(MethodInfo *)0x0);
      return pSVar3;
    }
    pSVar3 = (__this->fields)._SectionTitle_k__BackingField;
  }
  return pSVar3;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$IsMainMenuChild
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchEntry__IsMainMenuChild (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x3b47800

bool_conflict
Gisketch_Aottg2UI_Search_GisketchSearchEntry__IsMainMenuChild
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  uint uVar2;
  
  if (g_data_057a9cb0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"screen");
    il2cpp_runtime_helper_023445d0(&"main-menu");
    g_data_057a9cb0 = '\x01';
  }
  uVar2 = 0;
  bVar1 = System_String__Equals_3af50f0
                    ((__this->fields)._ScreenId_k__BackingField,"main-menu",5,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    uVar2 = System_String__Equals_3af50f0
                      ((__this->fields)._Kind_k__BackingField,"screen",5,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  return uVar2;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$IsActiveScreen
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchEntry__IsActiveScreen (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, System_String_o* activeScreenId, const MethodInfo* method);
// 0x3b47510

bool_conflict
Gisketch_Aottg2UI_Search_GisketchSearchEntry__IsActiveScreen
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,System_String_o *activeScreenId,
          MethodInfo *method)

{
  bool_conflict bVar1;
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._ScreenId_k__BackingField,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__IsNullOrEmpty(activeScreenId,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      bVar1 = System_String__Equals_3af50f0
                        ((__this->fields)._ScreenId_k__BackingField,activeScreenId,5,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$IconFor
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconFor (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x3b46e70

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconFor
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_c *pSVar3;
  long lVar4;
  System_String_Fields extraout_RDX;
  System_String_c *unaff_RBX;
  void *pvVar5;
  MethodInfo *method_00;
  System_String_o *pSVar6;
  void *in_R8;
  System_String_Fields in_R9;
  System_String_Fields SVar7;
  System_String_Fields unaff_retaddr;
  System_String_c *in_stack_00000008;
  System_String_o *in_stack_00000010;
  System_String_Fields in_stack_00000018;
  System_String_c *in_stack_00000020;
  
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pSVar2 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind
                       ((System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),method);
    return pSVar2;
  }
  pSVar2 = (node->fields).popover;
  if (pSVar2 != (System_String_o *)0x0) {
    pSVar2 = pSVar2[1].monitor;
    method = (MethodInfo *)0x0;
    bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
    pSVar3 = (System_String_c *)(node->fields).popover;
    if ((char)bVar1 == '\0') {
      if (pSVar3 != (System_String_c *)0x0) {
        return (pSVar3->_1).byval_arg.data;
      }
label_03b46efe:
      il2cpp_runtime_helper_022b2c90();
      if (pSVar2 == (System_String_o *)0x0) {
        return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      if (pSVar2[8].fields != (System_String_Fields)0x0) {
        pSVar6 = *(System_String_o **)((long)pSVar2[8].fields + 0x28);
        pvVar5 = (void *)0x0;
        bVar1 = System_String__IsNullOrEmpty(pSVar6,(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          if (pSVar2[8].fields != (System_String_Fields)0x0) {
            return *(System_String_o **)((long)pSVar2[8].fields + 0x28);
          }
          il2cpp_runtime_helper_022b2c90();
          System_Object___ctor((Il2CppObject *)pSVar6,(MethodInfo *)0x0);
          pSVar6[1].klass = in_stack_00000020;
          il2cpp_runtime_helper_022b4080(pSVar6 + 1,in_stack_00000020);
          if (pvVar5 == (void *)0x0) {
            pvVar5 = (void *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          pSVar6[1].monitor = pvVar5;
          il2cpp_runtime_helper_022b4080(&pSVar6[1].monitor,pvVar5);
          SVar7 = extraout_RDX;
          if (extraout_RDX == (System_String_Fields)0x0) {
            SVar7 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
          }
          pSVar6[1].fields = SVar7;
          il2cpp_runtime_helper_022b4080(&pSVar6[1].fields,SVar7);
          if (pSVar3 == (System_String_c *)0x0) {
            pSVar3 = (System_String_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          pSVar6[2].klass = pSVar3;
          il2cpp_runtime_helper_022b4080(pSVar6 + 2,pSVar3);
          if (in_R8 == (void *)0x0) {
            in_R8 = (void *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          pSVar6[2].monitor = in_R8;
          il2cpp_runtime_helper_022b4080(&pSVar6[2].monitor,in_R8);
          if (in_R9 == (System_String_Fields)0x0) {
            in_R9 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
          }
          pSVar6[2].fields = in_R9;
          il2cpp_runtime_helper_022b4080(&pSVar6[2].fields);
          if (unaff_RBX == (System_String_c *)0x0) {
            unaff_RBX = (System_String_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          pSVar6[3].klass = unaff_RBX;
          il2cpp_runtime_helper_022b4080(pSVar6 + 3);
          bVar1 = System_String__IsNullOrEmpty((System_String_o *)pSVar6[3].klass,(MethodInfo *)0x0);
          lVar4 = 0x48;
          if ((char)bVar1 != '\0') {
            lVar4 = 0x20;
          }
          pSVar6[3].monitor = *(void **)((long)&pSVar6->klass + lVar4);
          il2cpp_runtime_helper_022b4080(&pSVar6[3].monitor);
          if (unaff_retaddr == (System_String_Fields)0x0) {
            unaff_retaddr = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
          }
          pSVar6[3].fields = unaff_retaddr;
          il2cpp_runtime_helper_022b4080(&pSVar6[3].fields);
          if (in_stack_00000008 == (System_String_c *)0x0) {
            in_stack_00000008 = (System_String_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
          }
          pSVar6[4].klass = in_stack_00000008;
          il2cpp_runtime_helper_022b4080(pSVar6 + 4);
          method_00 = (MethodInfo *)0x0;
          bVar1 = System_String__IsNullOrEmpty(in_stack_00000010,(MethodInfo *)0x0);
          if ((char)bVar1 != '\0') {
            in_stack_00000010 =
                 Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind
                           ((System_String_o *)in_stack_00000018,method_00);
          }
          pSVar6[4].monitor = in_stack_00000010;
          il2cpp_runtime_helper_022b4080(&pSVar6[4].monitor,in_stack_00000010);
          if (in_stack_00000018 == (System_String_Fields)0x0) {
            in_stack_00000018 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
          }
          pSVar6[4].fields = in_stack_00000018;
          pSVar2 = (System_String_o *)il2cpp_runtime_helper_022b4080(&pSVar6[4].fields,in_stack_00000018);
          return pSVar2;
        }
      }
      return (System_String_o *)pSVar2->fields;
    }
    if (pSVar3 != (System_String_c *)0x0) {
      pSVar2 = *(System_String_o **)&(pSVar3->_1).byval_arg.bits;
      method = (MethodInfo *)0x0;
      bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        pSVar6 = (node->fields).popover;
        if (pSVar6 != (System_String_o *)0x0) {
          pSVar2 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind
                             ((System_String_o *)pSVar6[1].fields,method);
          return pSVar2;
        }
        goto label_03b46efe;
      }
    }
  }
  pSVar2 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind((node->fields).type,method);
  return pSVar2;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$KindFor
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__KindFor (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x3b46f10

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__KindFor
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_c *in_RCX;
  long lVar3;
  System_String_Fields extraout_RDX;
  void *pvVar4;
  MethodInfo *method_00;
  System_String_Fields value;
  void *in_R8;
  System_String_Fields in_R9;
  System_String_Fields SVar5;
  System_String_c *unaff_retaddr;
  System_String_Fields in_stack_00000008;
  System_String_c *in_stack_00000010;
  System_String_o *in_stack_00000018;
  System_String_Fields in_stack_00000020;
  System_String_c *in_stack_00000028;
  
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  pSVar2 = (node->fields).popover;
  if (pSVar2 != (System_String_o *)0x0) {
    value = pSVar2[1].fields;
    pvVar4 = (void *)0x0;
    bVar1 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pSVar2 = (node->fields).popover;
      if (pSVar2 != (System_String_o *)0x0) {
        return (System_String_o *)pSVar2[1].fields;
      }
      il2cpp_runtime_helper_022b2c90();
      System_Object___ctor((Il2CppObject *)value,(MethodInfo *)0x0);
      ((System_String_o *)((long)value + 0x18))->klass = in_stack_00000028;
      il2cpp_runtime_helper_022b4080((System_String_o *)((long)value + 0x18),in_stack_00000028);
      if (pvVar4 == (void *)0x0) {
        pvVar4 = (void *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      *(void **)((long)value + 0x20) = pvVar4;
      il2cpp_runtime_helper_022b4080((void **)((long)value + 0x20),pvVar4);
      SVar5 = extraout_RDX;
      if (extraout_RDX == (System_String_Fields)0x0) {
        SVar5 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
      }
      *(System_String_Fields *)((long)value + 0x28) = SVar5;
      il2cpp_runtime_helper_022b4080((System_String_Fields *)((long)value + 0x28),SVar5);
      if (in_RCX == (System_String_c *)0x0) {
        in_RCX = (System_String_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      ((System_String_o *)((long)value + 0x30))->klass = in_RCX;
      il2cpp_runtime_helper_022b4080((System_String_o *)((long)value + 0x30),in_RCX);
      if (in_R8 == (void *)0x0) {
        in_R8 = (void *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      *(void **)((long)value + 0x38) = in_R8;
      il2cpp_runtime_helper_022b4080((void **)((long)value + 0x38),in_R8);
      if (in_R9 == (System_String_Fields)0x0) {
        in_R9 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
      }
      *(System_String_Fields *)((long)value + 0x40) = in_R9;
      il2cpp_runtime_helper_022b4080((System_String_Fields *)((long)value + 0x40));
      if (unaff_retaddr == (System_String_c *)0x0) {
        unaff_retaddr = (System_String_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      ((System_String_o *)((long)value + 0x48))->klass = unaff_retaddr;
      il2cpp_runtime_helper_022b4080((System_String_o *)((long)value + 0x48));
      bVar1 = System_String__IsNullOrEmpty
                        ((System_String_o *)((System_String_o *)((long)value + 0x48))->klass,(MethodInfo *)0x0
                        );
      lVar3 = 0x48;
      if ((char)bVar1 != '\0') {
        lVar3 = 0x20;
      }
      *(void **)((long)value + 0x50) = *(void **)((long)value + lVar3);
      il2cpp_runtime_helper_022b4080((void **)((long)value + 0x50));
      if (in_stack_00000008 == (System_String_Fields)0x0) {
        in_stack_00000008 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
      }
      *(System_String_Fields *)((long)value + 0x58) = in_stack_00000008;
      il2cpp_runtime_helper_022b4080((System_String_Fields *)((long)value + 0x58));
      if (in_stack_00000010 == (System_String_c *)0x0) {
        in_stack_00000010 = (System_String_c *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      ((System_String_o *)((long)value + 0x60))->klass = in_stack_00000010;
      il2cpp_runtime_helper_022b4080((System_String_o *)((long)value + 0x60));
      method_00 = (MethodInfo *)0x0;
      bVar1 = System_String__IsNullOrEmpty(in_stack_00000018,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        in_stack_00000018 =
             Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind
                       ((System_String_o *)in_stack_00000020,method_00);
      }
      *(System_String_o **)((long)value + 0x68) = in_stack_00000018;
      il2cpp_runtime_helper_022b4080((void **)((long)value + 0x68),in_stack_00000018);
      if (in_stack_00000020 == (System_String_Fields)0x0) {
        in_stack_00000020 = **(System_String_Fields **)(g_data_057b9c00 + 0xb8);
      }
      *(System_String_Fields *)((long)value + 0x70) = in_stack_00000020;
      pSVar2 = (System_String_o *)
               il2cpp_runtime_helper_022b4080((System_String_Fields *)((long)value + 0x70),in_stack_00000020);
      return pSVar2;
    }
  }
  return (node->fields).type;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$IconForKind
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind (System_String_o* kind, const MethodInfo* method);
// 0x3b47210

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind(System_String_o *kind,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 *puVar2;
  
  if (g_data_057a9cb1 == '\0') {
    il2cpp_runtime_helper_023445d0(&"select");
    il2cpp_runtime_helper_023445d0(&"buttonA");
    il2cpp_runtime_helper_023445d0(&"input");
    il2cpp_runtime_helper_023445d0(&"TextArea");
    il2cpp_runtime_helper_023445d0(&"Select");
    il2cpp_runtime_helper_023445d0(&"InputField");
    il2cpp_runtime_helper_023445d0(&"screen");
    il2cpp_runtime_helper_023445d0(&"section");
    il2cpp_runtime_helper_023445d0(&"open");
    il2cpp_runtime_helper_023445d0(&"menuList");
    il2cpp_runtime_helper_023445d0(&"Dropdown");
    il2cpp_runtime_helper_023445d0(&"arrowDown");
    g_data_057a9cb1 = '\x01';
  }
  bVar1 = System_String__Equals_3af50f0(kind,"section",5,(MethodInfo *)0x0);
  puVar2 = &"menuList";
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__Equals_3af50f0(kind,"screen",5,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      bVar1 = System_String__Equals_3af50f0(kind,"InputField",5,(MethodInfo *)0x0);
      puVar2 = &"open";
      if ((char)bVar1 == '\0') {
        bVar1 = System_String__Equals_3af50f0(kind,"TextArea",5,(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          bVar1 = System_String__Equals_3af50f0(kind,"input",5,(MethodInfo *)0x0);
          if ((char)bVar1 == '\0') {
            bVar1 = System_String__Equals_3af50f0(kind,"Dropdown",5,(MethodInfo *)0x0);
            puVar2 = &"arrowDown";
            if ((char)bVar1 == '\0') {
              bVar1 = System_String__Equals_3af50f0(kind,"Select",5,(MethodInfo *)0x0);
              if ((char)bVar1 == '\0') {
                bVar1 = System_String__Equals_3af50f0(kind,"select",5,(MethodInfo *)0x0);
                if ((char)bVar1 == '\0') {
                  puVar2 = &"buttonA";
                }
                else {
                  puVar2 = &"arrowDown";
                }
              }
            }
          }
        }
      }
    }
  }
  return (System_String_o *)*puVar2;
}


