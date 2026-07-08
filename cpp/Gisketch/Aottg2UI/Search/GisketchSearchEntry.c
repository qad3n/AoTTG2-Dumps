// Type: Gisketch.Aottg2UI.Search.GisketchSearchEntry
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Search/GisketchSearchEntry.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchEntry___ctor (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, UnityEngine_GameObject_o* target, const MethodInfo* method);
// 0x3adc4f0

void Gisketch_Aottg2UI_Search_GisketchSearchEntry___ctor
               (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               UnityEngine_GameObject_o *target,MethodInfo *method)

{
  System_String_Fields screenId;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  bool_conflict bVar2;
  System_String_Fields *pSVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_Fields *pGVar5;
  System_String_Fields title;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  MethodInfo *method_00;
  System_String_Fields sectionId;
  System_String_Fields sectionTitle;
  System_String_Fields targetId;
  System_String_c *kind;
  bool bVar8;
  MethodInfo *in_stack_ffffffffffffff98;
  
  pSVar4 = *(System_String_o **)(DAT_057110b0 + 0xb8);
  screenId = (System_String_Fields)pSVar4->klass;
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    kind = (System_String_c *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    pSVar4 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind
                       ((System_String_o *)kind,(MethodInfo *)0x0);
    pGVar5 = *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_Fields **)(DAT_057110b0 + 0xb8);
    title = screenId;
    sectionId = screenId;
    sectionTitle = screenId;
    targetId = screenId;
    goto LAB_03adc6e7;
  }
  targetId = (System_String_Fields)(node->fields).id;
  pSVar6 = (node->fields).popover;
  bVar8 = pSVar6 == (System_String_o *)0x0;
  pSVar7 = pSVar6 + 2;
  if (bVar8) {
    pSVar7 = pSVar4;
  }
  sectionId = (System_String_Fields)pSVar7->klass;
  pSVar7 = (System_String_o *)&pSVar6[2].monitor;
  if (bVar8) {
    pSVar7 = pSVar4;
  }
  sectionTitle = (System_String_Fields)pSVar7->klass;
  if (bVar8) {
LAB_03adc56d:
    method_00 = (MethodInfo *)0x0;
    bVar2 = System_String__IsNullOrEmpty((node->fields).text,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      pSVar3 = (System_String_Fields *)&(node->fields).text;
      goto LAB_03adc5ff;
    }
    method_00 = (MethodInfo *)0x0;
    bVar2 = System_String__IsNullOrEmpty((node->fields).placeholder,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      pSVar3 = (System_String_Fields *)&(node->fields).placeholder;
      goto LAB_03adc5ff;
    }
    title = (System_String_Fields)(node->fields).id;
    if (title == (System_String_Fields)0x0) {
      pSVar3 = *(System_String_Fields **)(DAT_057110b0 + 0xb8);
      goto LAB_03adc5ff;
    }
  }
  else {
    method_00 = (MethodInfo *)0x0;
    bVar2 = System_String__IsNullOrEmpty((System_String_o *)pSVar6->fields,(MethodInfo *)0x0);
    if ((char)bVar2 != '\0') goto LAB_03adc56d;
    pSVar4 = (node->fields).popover;
    if (pSVar4 == (System_String_o *)0x0) goto LAB_03adc743;
    pSVar3 = &pSVar4->fields;
LAB_03adc5ff:
    title = *pSVar3;
  }
  pSVar4 = (node->fields).popover;
  pGVar1 = node;
  if (pSVar4 == (System_String_o *)0x0) {
    kind = (System_String_c *)**(undefined8 **)(DAT_057110b0 + 0xb8);
    pSVar4 = (node->fields).popover;
    if (pSVar4 != (System_String_o *)0x0) goto LAB_03adc644;
LAB_03adc676:
    pSVar4 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind
                       ((pGVar1->fields).type,method_00);
    pSVar6 = (node->fields).popover;
    if (pSVar6 != (System_String_o *)0x0) goto LAB_03adc69c;
  }
  else {
    kind = pSVar4[1].klass;
    pSVar4 = (node->fields).popover;
    if (pSVar4 == (System_String_o *)0x0) goto LAB_03adc676;
LAB_03adc644:
    method_00 = (MethodInfo *)0x0;
    bVar2 = System_String__IsNullOrEmpty(pSVar4[1].monitor,(MethodInfo *)0x0);
    pSVar6 = (node->fields).popover;
    if ((char)bVar2 != '\0') {
      if (pSVar6 != (System_String_o *)0x0) {
        method_00 = (MethodInfo *)0x0;
        bVar2 = System_String__IsNullOrEmpty((System_String_o *)pSVar6[1].fields,(MethodInfo *)0x0);
        if ((char)bVar2 == '\0') {
          pSVar4 = (node->fields).popover;
          if (pSVar4 == (System_String_o *)0x0) goto LAB_03adc743;
          pGVar1 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)(pSVar4 + 1);
        }
      }
      goto LAB_03adc676;
    }
    if (pSVar6 == (System_String_o *)0x0) goto LAB_03adc743;
    pSVar4 = pSVar6[1].monitor;
LAB_03adc69c:
    bVar2 = System_String__IsNullOrEmpty((System_String_o *)pSVar6[1].fields,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      pSVar6 = (node->fields).popover;
      if (pSVar6 == (System_String_o *)0x0) {
LAB_03adc743:
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      pGVar5 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_Fields *)&pSVar6[1].fields;
      goto LAB_03adc6e7;
    }
  }
  pGVar5 = &node->fields;
LAB_03adc6e7:
  Gisketch_Aottg2UI_Search_GisketchSearchEntry___ctor
            (__this,(System_String_o *)screenId,(System_String_o *)screenId,
             (System_String_o *)screenId,(System_String_o *)sectionId,
             (System_String_o *)sectionTitle,(System_String_o *)targetId,(System_String_o *)title,
             (System_String_o *)kind,pSVar4,pGVar5->type,target,in_stack_ffffffffffffff98);
  (__this->fields)._Node_k__BackingField = node;
  il2cpp_runtime_glue(&__this->fields,node);
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchEntry___ctor (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, System_String_o* screenId, System_String_o* screenTitle, System_String_o* searchGroup, System_String_o* sectionId, System_String_o* sectionTitle, System_String_o* targetId, System_String_o* title, System_String_o* keywords, System_String_o* icon, System_String_o* kind, UnityEngine_GameObject_o* target, const MethodInfo* method);
// 0x3adc900

void Gisketch_Aottg2UI_Search_GisketchSearchEntry___ctor
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
  il2cpp_runtime_glue(&(__this->fields)._Target_k__BackingField,target);
  if (screenId == (System_String_o *)0x0) {
    screenId = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  (__this->fields)._ScreenId_k__BackingField = screenId;
  il2cpp_runtime_glue(&(__this->fields)._ScreenId_k__BackingField,screenId);
  if (screenTitle == (System_String_o *)0x0) {
    screenTitle = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  (__this->fields)._ScreenTitle_k__BackingField = screenTitle;
  il2cpp_runtime_glue(&(__this->fields)._ScreenTitle_k__BackingField,screenTitle);
  if (searchGroup == (System_String_o *)0x0) {
    searchGroup = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  (__this->fields)._SearchGroup_k__BackingField = searchGroup;
  il2cpp_runtime_glue(&(__this->fields)._SearchGroup_k__BackingField,searchGroup);
  if (sectionId == (System_String_o *)0x0) {
    sectionId = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  (__this->fields)._SectionId_k__BackingField = sectionId;
  il2cpp_runtime_glue(&(__this->fields)._SectionId_k__BackingField,sectionId);
  if (sectionTitle == (System_String_o *)0x0) {
    sectionTitle = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  (__this->fields)._SectionTitle_k__BackingField = sectionTitle;
  il2cpp_runtime_glue(&(__this->fields)._SectionTitle_k__BackingField);
  if (targetId == (System_String_o *)0x0) {
    targetId = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  (__this->fields)._TargetId_k__BackingField = targetId;
  il2cpp_runtime_glue(&(__this->fields)._TargetId_k__BackingField);
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._TargetId_k__BackingField,(MethodInfo *)0x0)
  ;
  lVar2 = 0x48;
  if ((char)bVar1 != '\0') {
    lVar2 = 0x20;
  }
  (__this->fields)._Id_k__BackingField = *(System_String_o **)((long)&__this->klass + lVar2);
  il2cpp_runtime_glue(&(__this->fields)._Id_k__BackingField);
  if (title == (System_String_o *)0x0) {
    title = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  (__this->fields)._Title_k__BackingField = title;
  il2cpp_runtime_glue(&(__this->fields)._Title_k__BackingField);
  if (keywords == (System_String_o *)0x0) {
    keywords = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  (__this->fields)._Keywords_k__BackingField = keywords;
  il2cpp_runtime_glue(&(__this->fields)._Keywords_k__BackingField);
  method_00 = (MethodInfo *)0x0;
  bVar1 = System_String__IsNullOrEmpty(icon,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    icon = Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind(kind,method_00);
  }
  (__this->fields)._Icon_k__BackingField = icon;
  il2cpp_runtime_glue(&(__this->fields)._Icon_k__BackingField,icon);
  if (kind == (System_String_o *)0x0) {
    kind = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  (__this->fields)._Kind_k__BackingField = kind;
  il2cpp_runtime_glue(&(__this->fields)._Kind_k__BackingField,kind);
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_Node
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Node (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x3adcd70

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Node
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._Node_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$set_Node
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchEntry__set_Node (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* value, const MethodInfo* method);
// 0x3adcd80

void Gisketch_Aottg2UI_Search_GisketchSearchEntry__set_Node
               (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *value,MethodInfo *method)

{
  (__this->fields)._Node_k__BackingField = value;
  il2cpp_runtime_glue(&__this->fields);
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_Target
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Target (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x3adcd90

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Target
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._Target_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_ScreenId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_ScreenId (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x3adcda0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_ScreenId
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._ScreenId_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_ScreenTitle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_ScreenTitle (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x3adcdb0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_ScreenTitle
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._ScreenTitle_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_SearchGroup
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_SearchGroup (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x3adcdc0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_SearchGroup
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._SearchGroup_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_SectionId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_SectionId (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x3adcdd0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_SectionId
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._SectionId_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_SectionTitle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_SectionTitle (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x3adcde0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_SectionTitle
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._SectionTitle_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_TargetId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_TargetId (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x3adcdf0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_TargetId
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._TargetId_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_Id
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Id (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x3adce00

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Id
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._Id_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Title (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x3adce10

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Title
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._Title_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_DisplayTitle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_DisplayTitle (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x3adce20

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_DisplayTitle
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_RDX;
  
  pSVar1 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle(__this,1,in_RDX);
  return pSVar1;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$DisplayTitleFor
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__DisplayTitleFor (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, System_String_o* activeScreenId, const MethodInfo* method);
// 0x3adce40

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
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._ScreenId_k__BackingField,(MethodInfo *)0x0)
  ;
  bVar3 = 1;
  method_00 = extraout_RDX;
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__IsNullOrEmpty(activeScreenId,(MethodInfo *)0x0);
    method_00 = extraout_RDX_00;
    if ((char)bVar1 == '\0') {
      bVar1 = System_String__Equals
                        ((__this->fields)._ScreenId_k__BackingField,activeScreenId,5,
                         (MethodInfo *)0x0);
      bVar3 = (byte)bVar1 ^ 1;
      method_00 = extraout_RDX_01;
    }
  }
  pSVar2 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle(__this,(uint)bVar3,method_00);
  return pSVar2;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_Keywords
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Keywords (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x3add150

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Keywords
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._Keywords_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_Icon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Icon (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x3add160

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Icon
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._Icon_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_Kind
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Kind (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x3add170

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Kind
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._Kind_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$TitleFor
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__TitleFor (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x3adc750

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__TitleFor
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool_conflict bVar2;
  
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pSVar1 = (node->fields).popover;
    if (pSVar1 != (System_String_o *)0x0) {
      bVar2 = System_String__IsNullOrEmpty((System_String_o *)pSVar1->fields,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        pSVar1 = (node->fields).popover;
        if (pSVar1 != (System_String_o *)0x0) {
          return (System_String_o *)pSVar1->fields;
        }
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
    }
    bVar2 = System_String__IsNullOrEmpty((node->fields).text,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return (node->fields).text;
    }
    bVar2 = System_String__IsNullOrEmpty((node->fields).placeholder,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      return (node->fields).placeholder;
    }
    pSVar1 = (node->fields).id;
    if (pSVar1 != (System_String_o *)0x0) {
      return pSVar1;
    }
  }
  return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$PathTitle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x3adce30

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_RDX;
  
  pSVar1 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle(__this,1,in_RDX);
  return pSVar1;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$PathTitle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, bool includeScreen, const MethodInfo* method);
// 0x3adcee0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,bool_conflict includeScreen,
          MethodInfo *method)

{
  bool_conflict bVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  System_String_array *values;
  System_String_o *str2;
  byte bVar4;
  
  if (DAT_0570138f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&" > ");
    DAT_0570138f = '\x01';
  }
  bVar4 = 1;
  if ((char)includeScreen != '\0') {
    if (DAT_05701390 == '\0') {
      il2cpp_init_method_metadata(&"screen");
      il2cpp_init_method_metadata(&"main-menu");
      DAT_05701390 = '\x01';
    }
    bVar4 = 0;
    bVar1 = System_String__Equals
                      ((__this->fields)._ScreenId_k__BackingField,"main-menu",5,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      bVar1 = System_String__Equals
                        ((__this->fields)._Kind_k__BackingField,"screen",5,(MethodInfo *)0x0);
      bVar4 = (byte)bVar1 ^ 1;
    }
  }
  bVar1 = System_String__IsNullOrEmpty
                    ((__this->fields)._ScreenTitle_k__BackingField,(MethodInfo *)0x0);
  if (bVar4 == 0) {
    pSVar3 = (&(__this->fields)._ScreenId_k__BackingField)[(byte)((byte)bVar1 ^ 1)];
    bVar1 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      bVar1 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
      if ((char)bVar1 != '\0') {
        return (__this->fields)._Title_k__BackingField;
      }
      bVar1 = System_String__IsNullOrEmpty
                        ((__this->fields)._SectionTitle_k__BackingField,(MethodInfo *)0x0);
      bVar2 = System_String__IsNullOrEmpty
                        ((__this->fields)._Title_k__BackingField,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        if (((char)bVar2 == '\0') &&
           (bVar1 = System_String__op_Equality
                              ((__this->fields)._Title_k__BackingField,
                               (__this->fields)._SectionTitle_k__BackingField,(MethodInfo *)0x0),
           (char)bVar1 == '\0')) {
          values = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,5);
          if (values == (System_String_array *)0x0) {
                    /* WARNING: Subroutine does not return */
            il2cpp_raise_exception();
          }
          if ((int)values->max_length != 0) {
            values->m_Items[0] = pSVar3;
            il2cpp_runtime_glue(values->m_Items,pSVar3);
            if (1 < (uint)values->max_length) {
              values->m_Items[1] = " > ";
              il2cpp_runtime_glue(values->m_Items + 1);
              if (2 < (uint)values->max_length) {
                values->m_Items[2] = (__this->fields)._SectionTitle_k__BackingField;
                il2cpp_runtime_glue(values->m_Items + 2);
                if (3 < (uint)values->max_length) {
                  values->m_Items[3] = " > ";
                  il2cpp_runtime_glue(values->m_Items + 3);
                  if (4 < (uint)values->max_length) {
                    values->m_Items[4] = (__this->fields)._Title_k__BackingField;
                    il2cpp_runtime_glue(values->m_Items + 4);
                    pSVar3 = System_String__Concat(values,(MethodInfo *)0x0);
                    return pSVar3;
                  }
                }
              }
            }
          }
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        str2 = (__this->fields)._SectionTitle_k__BackingField;
      }
      else {
        if ((char)bVar2 != '\0') {
          return pSVar3;
        }
        bVar1 = System_String__op_Equality
                          ((__this->fields)._Title_k__BackingField,pSVar3,(MethodInfo *)0x0);
        if ((char)bVar1 != '\0') {
          return pSVar3;
        }
        str2 = (__this->fields)._Title_k__BackingField;
      }
      goto LAB_03add078;
    }
  }
  bVar1 = System_String__IsNullOrEmpty
                    ((__this->fields)._SectionTitle_k__BackingField,(MethodInfo *)0x0);
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
LAB_03add078:
      pSVar3 = System_String__Concat(pSVar3," > ",str2,(MethodInfo *)0x0);
      return pSVar3;
    }
    pSVar3 = (__this->fields)._SectionTitle_k__BackingField;
  }
  return pSVar3;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$IsMainMenuChild
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchEntry__IsMainMenuChild (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x3add180

bool_conflict
Gisketch_Aottg2UI_Search_GisketchSearchEntry__IsMainMenuChild
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  bool_conflict bVar1;
  uint uVar2;
  
  if (DAT_05701390 == '\0') {
    il2cpp_init_method_metadata(&"screen");
    il2cpp_init_method_metadata(&"main-menu");
    DAT_05701390 = '\x01';
  }
  uVar2 = 0;
  bVar1 = System_String__Equals
                    ((__this->fields)._ScreenId_k__BackingField,"main-menu",5,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    uVar2 = System_String__Equals
                      ((__this->fields)._Kind_k__BackingField,"screen",5,(MethodInfo *)0x0);
    uVar2 = uVar2 ^ 1;
  }
  return uVar2;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$IsActiveScreen
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchEntry__IsActiveScreen (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, System_String_o* activeScreenId, const MethodInfo* method);
// 0x3adce90

bool_conflict
Gisketch_Aottg2UI_Search_GisketchSearchEntry__IsActiveScreen
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,System_String_o *activeScreenId,
          MethodInfo *method)

{
  bool_conflict bVar1;
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._ScreenId_k__BackingField,(MethodInfo *)0x0)
  ;
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__IsNullOrEmpty(activeScreenId,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      bVar1 = System_String__Equals
                        ((__this->fields)._ScreenId_k__BackingField,activeScreenId,5,
                         (MethodInfo *)0x0);
      return bVar1;
    }
  }
  return 0;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$IconFor
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconFor (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x3adc7f0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconFor
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pSVar2 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind
                       ((System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),method);
    return pSVar2;
  }
  pSVar2 = (node->fields).popover;
  if (pSVar2 != (System_String_o *)0x0) {
    method = (MethodInfo *)0x0;
    bVar1 = System_String__IsNullOrEmpty(pSVar2[1].monitor,(MethodInfo *)0x0);
    pSVar2 = (node->fields).popover;
    if ((char)bVar1 == '\0') {
      if (pSVar2 != (System_String_o *)0x0) {
        return pSVar2[1].monitor;
      }
LAB_03adc87e:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (pSVar2 != (System_String_o *)0x0) {
      method = (MethodInfo *)0x0;
      bVar1 = System_String__IsNullOrEmpty((System_String_o *)pSVar2[1].fields,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        pSVar2 = (node->fields).popover;
        if (pSVar2 != (System_String_o *)0x0) {
          pSVar2 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind
                             ((System_String_o *)pSVar2[1].fields,method);
          return pSVar2;
        }
        goto LAB_03adc87e;
      }
    }
  }
  pSVar2 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind((node->fields).type,method);
  return pSVar2;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$KindFor
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__KindFor (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x3adc890

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__KindFor
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool_conflict bVar2;
  
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  pSVar1 = (node->fields).popover;
  if (pSVar1 != (System_String_o *)0x0) {
    bVar2 = System_String__IsNullOrEmpty((System_String_o *)pSVar1[1].fields,(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      pSVar1 = (node->fields).popover;
      if (pSVar1 != (System_String_o *)0x0) {
        return (System_String_o *)pSVar1[1].fields;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return (node->fields).type;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$IconForKind
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind (System_String_o* kind, const MethodInfo* method);
// 0x3adcb90

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind(System_String_o *kind,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 *puVar2;
  
  if (DAT_05701391 == '\0') {
    il2cpp_init_method_metadata(&"select");
    il2cpp_init_method_metadata(&"buttonA");
    il2cpp_init_method_metadata(&"input");
    il2cpp_init_method_metadata(&"TextArea");
    il2cpp_init_method_metadata(&"Select");
    il2cpp_init_method_metadata(&"InputField");
    il2cpp_init_method_metadata(&"screen");
    il2cpp_init_method_metadata(&"section");
    il2cpp_init_method_metadata(&"open");
    il2cpp_init_method_metadata(&"menuList");
    il2cpp_init_method_metadata(&"Dropdown");
    il2cpp_init_method_metadata(&"arrowDown");
    DAT_05701391 = '\x01';
  }
  bVar1 = System_String__Equals(kind,"section",5,(MethodInfo *)0x0);
  puVar2 = &"menuList";
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__Equals(kind,"screen",5,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      bVar1 = System_String__Equals(kind,"InputField",5,(MethodInfo *)0x0);
      puVar2 = &"open";
      if ((char)bVar1 == '\0') {
        bVar1 = System_String__Equals(kind,"TextArea",5,(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          bVar1 = System_String__Equals(kind,"input",5,(MethodInfo *)0x0);
          if ((char)bVar1 == '\0') {
            bVar1 = System_String__Equals(kind,"Dropdown",5,(MethodInfo *)0x0);
            puVar2 = &"arrowDown";
            if ((char)bVar1 == '\0') {
              bVar1 = System_String__Equals(kind,"Select",5,(MethodInfo *)0x0);
              if ((char)bVar1 == '\0') {
                bVar1 = System_String__Equals(kind,"select",5,(MethodInfo *)0x0);
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


