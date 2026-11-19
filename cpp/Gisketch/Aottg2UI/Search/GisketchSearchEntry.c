// Type: Gisketch.Aottg2UI.Search.GisketchSearchEntry
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Search/GisketchSearchEntry.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchEntry___ctor (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, UnityEngine_GameObject_o* target, const MethodInfo* method);
// 0x5346a10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5346bb0: jmp 0x5346bce

void Gisketch_Aottg2UI_Search_GisketchSearchEntry___ctor
               (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,UnityEngine_GameObject_o *target,
               MethodInfo *method)

{
  System_String_o **ppSVar1;
  System_String_o *screenId;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_Fields *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_Fields *pGVar3;
  System_String_o *icon;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar4;
  System_String_o **ppSVar5;
  System_String_o *title;
  System_String_o *kind;
  MethodInfo *method_00;
  System_String_o *sectionId;
  System_String_o *sectionTitle;
  System_String_o *targetId;
  bool bVar6;
  MethodInfo *in_stack_ffffffffffffff98;
  
  ppSVar1 = *(System_String_o ***)(g_data_07556758 + 0xb8);
  screenId = *ppSVar1;
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    title = *ppSVar1;
    kind = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    icon = Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind(kind,(MethodInfo *)0x0);
    pGVar3 = *(Gisketch_Aottg2UI_Data_GisketchNodeDefinition_Fields **)(g_data_07556758 + 0xb8);
    sectionId = screenId;
    sectionTitle = screenId;
    targetId = screenId;
    goto label_05346c0c;
  }
  targetId = (node->fields).id;
  pGVar4 = (node->fields).search;
  bVar6 = pGVar4 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0;
  ppSVar5 = &(pGVar4->fields).sectionId;
  if (bVar6) {
    ppSVar5 = ppSVar1;
  }
  sectionId = *ppSVar5;
  ppSVar5 = &(pGVar4->fields).sectionTitle;
  if (bVar6) {
    ppSVar5 = ppSVar1;
  }
  sectionTitle = *ppSVar5;
  if (bVar6) {
label_05346a91:
    method_00 = (MethodInfo *)0x0;
    bVar6 = System_String__IsNullOrEmpty((node->fields).text,(MethodInfo *)0x0);
    if (!bVar6) {
      pGVar2 = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_Fields *)&(node->fields).text;
      goto label_05346b2d;
    }
    method_00 = (MethodInfo *)0x0;
    bVar6 = System_String__IsNullOrEmpty((node->fields).placeholder,(MethodInfo *)0x0);
    if (!bVar6) {
      pGVar2 = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_Fields *)&(node->fields).placeholder;
      goto label_05346b2d;
    }
    title = (node->fields).id;
    if (title == (System_String_o *)0x0) {
      pGVar2 = *(Gisketch_Aottg2UI_Data_GisketchSearchDefinition_Fields **)(g_data_07556758 + 0xb8);
      goto label_05346b2d;
    }
  }
  else {
    method_00 = (MethodInfo *)0x0;
    bVar6 = System_String__IsNullOrEmpty((pGVar4->fields).title,(MethodInfo *)0x0);
    if (bVar6) goto label_05346a91;
    pGVar4 = (node->fields).search;
    if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) goto label_05346c53;
    pGVar2 = &pGVar4->fields;
label_05346b2d:
    title = pGVar2->title;
  }
  pGVar4 = (node->fields).search;
  if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
    kind = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    goto label_05346b95;
  }
  kind = (pGVar4->fields).keywords;
  method_00 = (MethodInfo *)0x0;
  bVar6 = System_String__IsNullOrEmpty((pGVar4->fields).icon,(MethodInfo *)0x0);
  pGVar4 = (node->fields).search;
  if (bVar6) {
    if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
label_05346b95:
      pGVar3 = &node->fields;
    }
    else {
      method_00 = (MethodInfo *)0x0;
      bVar6 = System_String__IsNullOrEmpty((pGVar4->fields).kind,(MethodInfo *)0x0);
      if (bVar6) goto label_05346b95;
      pGVar4 = (node->fields).search;
      if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) goto label_05346c53;
      pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_Fields *)&(pGVar4->fields).kind;
    }
    icon = Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind(pGVar3->type,method_00);
    pGVar4 = (node->fields).search;
    if (pGVar4 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) goto label_05346bbf;
label_05346bce:
    pGVar3 = &node->fields;
  }
  else {
    if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) goto label_05346c53;
    icon = (pGVar4->fields).icon;
label_05346bbf:
    bVar6 = System_String__IsNullOrEmpty((pGVar4->fields).kind,(MethodInfo *)0x0);
    if (bVar6) goto label_05346bce;
    pGVar4 = (node->fields).search;
    if (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
label_05346c53:
      ThrowNullReferenceException();
    }
    pGVar3 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_Fields *)&(pGVar4->fields).kind;
  }
label_05346c0c:
  Gisketch_Aottg2UI_Search_GisketchSearchEntry___ctor_5246e10
            (__this,screenId,screenId,screenId,sectionId,sectionTitle,targetId,title,kind,icon,pGVar3->type,
             target,in_stack_ffffffffffffff98);
  (__this->fields)._Node_k__BackingField = node;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Node_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchEntry___ctor (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, System_String_o* screenId, System_String_o* screenTitle, System_String_o* searchGroup, System_String_o* sectionId, System_String_o* sectionTitle, System_String_o* targetId, System_String_o* title, System_String_o* keywords, System_String_o* icon, System_String_o* kind, UnityEngine_GameObject_o* target, const MethodInfo* method);
// 0x5346e10

void Gisketch_Aottg2UI_Search_GisketchSearchEntry___ctor_5246e10
               (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,System_String_o *screenId,
               System_String_o *screenTitle,System_String_o *searchGroup,System_String_o *sectionId,
               System_String_o *sectionTitle,System_String_o *targetId,System_String_o *title,
               System_String_o *keywords,System_String_o *icon,System_String_o *kind,
               UnityEngine_GameObject_o *target,MethodInfo *method)

{
  System_String_o **targetAddress;
  bool bVar1;
  System_String_o **targetAddress_00;
  MethodInfo *method_00;
  
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Target_k__BackingField = target;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Target_k__BackingField);
  if (screenId == (System_String_o *)0x0) {
    screenId = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  targetAddress_00 = &(__this->fields)._ScreenId_k__BackingField;
  (__this->fields)._ScreenId_k__BackingField = screenId;
  Il2CppCodeGenWriteBarrier(targetAddress_00);
  if (screenTitle == (System_String_o *)0x0) {
    screenTitle = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  (__this->fields)._ScreenTitle_k__BackingField = screenTitle;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._ScreenTitle_k__BackingField);
  if (searchGroup == (System_String_o *)0x0) {
    searchGroup = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  (__this->fields)._SearchGroup_k__BackingField = searchGroup;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._SearchGroup_k__BackingField);
  if (sectionId == (System_String_o *)0x0) {
    sectionId = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  (__this->fields)._SectionId_k__BackingField = sectionId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._SectionId_k__BackingField);
  if (sectionTitle == (System_String_o *)0x0) {
    sectionTitle = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  (__this->fields)._SectionTitle_k__BackingField = sectionTitle;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._SectionTitle_k__BackingField);
  if (targetId == (System_String_o *)0x0) {
    targetId = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  targetAddress = &(__this->fields)._TargetId_k__BackingField;
  (__this->fields)._TargetId_k__BackingField = targetId;
  Il2CppCodeGenWriteBarrier(targetAddress);
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
  if (!bVar1) {
    targetAddress_00 = targetAddress;
  }
  (__this->fields)._Id_k__BackingField = *targetAddress_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Id_k__BackingField);
  if (title == (System_String_o *)0x0) {
    title = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  (__this->fields)._Title_k__BackingField = title;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Title_k__BackingField);
  if (keywords == (System_String_o *)0x0) {
    keywords = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  (__this->fields)._Keywords_k__BackingField = keywords;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Keywords_k__BackingField);
  method_00 = (MethodInfo *)0x0;
  bVar1 = System_String__IsNullOrEmpty(icon,(MethodInfo *)0x0);
  if (bVar1) {
    icon = Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind(kind,method_00);
  }
  (__this->fields)._Icon_k__BackingField = icon;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Icon_k__BackingField);
  if (kind == (System_String_o *)0x0) {
    kind = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  (__this->fields)._Kind_k__BackingField = kind;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Kind_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_Node
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Node (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x53472a0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Node
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._Node_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$set_Node
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchEntry__set_Node (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* value, const MethodInfo* method);
// 0x53472b0

void Gisketch_Aottg2UI_Search_GisketchSearchEntry__set_Node
               (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *value,MethodInfo *method)

{
  (__this->fields)._Node_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Node_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_Target
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Target (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x53472c0

UnityEngine_GameObject_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Target
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._Target_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_ScreenId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_ScreenId (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x53472d0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_ScreenId
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._ScreenId_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_ScreenTitle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_ScreenTitle (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x53472e0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_ScreenTitle
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._ScreenTitle_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_SearchGroup
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_SearchGroup (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x53472f0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_SearchGroup
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._SearchGroup_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_SectionId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_SectionId (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x5347300

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_SectionId
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._SectionId_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_SectionTitle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_SectionTitle (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x5347310

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_SectionTitle
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._SectionTitle_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_TargetId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_TargetId (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x5347320

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_TargetId
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._TargetId_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_Id
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Id (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x5347330

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Id
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._Id_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Title (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x5347340

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Title
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._Title_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_DisplayTitle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_DisplayTitle (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x5347350

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_DisplayTitle
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_RDX;
  
  pSVar1 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle_5247420(__this,true,in_RDX);
  return pSVar1;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$DisplayTitleFor
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__DisplayTitleFor (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, System_String_o* activeScreenId, const MethodInfo* method);
// 0x5347370

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__DisplayTitleFor
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,System_String_o *activeScreenId,
          MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_String_o *pSVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._ScreenId_k__BackingField,(MethodInfo *)0x0);
  bVar2 = true;
  method_00 = extraout_RDX;
  if (!bVar1) {
    bVar1 = System_String__IsNullOrEmpty(activeScreenId,(MethodInfo *)0x0);
    method_00 = extraout_RDX_00;
    if (!bVar1) {
      bVar2 = System_String__Equals_52ffe30
                        ((__this->fields)._ScreenId_k__BackingField,activeScreenId,5,(MethodInfo *)0x0);
      bVar2 = !bVar2;
      method_00 = extraout_RDX_01;
    }
  }
  pSVar3 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle_5247420(__this,bVar2,method_00);
  return pSVar3;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_Keywords
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Keywords (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x5347690

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Keywords
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._Keywords_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_Icon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Icon (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x53476a0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Icon
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._Icon_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_Kind
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Kind (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x53476b0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Kind
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  return (__this->fields)._Kind_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$TitleFor
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__TitleFor (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x5346c60

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__TitleFor
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar1;
  System_String_o *pSVar2;
  bool bVar3;
  
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pGVar1 = (node->fields).search;
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
      bVar3 = System_String__IsNullOrEmpty((pGVar1->fields).title,(MethodInfo *)0x0);
      if (!bVar3) {
        pGVar1 = (node->fields).search;
        if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
          ThrowNullReferenceException();
        }
        return (pGVar1->fields).title;
      }
    }
    bVar3 = System_String__IsNullOrEmpty((node->fields).text,(MethodInfo *)0x0);
    if (!bVar3) {
      return (node->fields).text;
    }
    bVar3 = System_String__IsNullOrEmpty((node->fields).placeholder,(MethodInfo *)0x0);
    if (!bVar3) {
      return (node->fields).placeholder;
    }
    pSVar2 = (node->fields).id;
    if (pSVar2 != (System_String_o *)0x0) {
      return pSVar2;
    }
  }
  return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$PathTitle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x5347360

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  MethodInfo *in_RDX;
  
  pSVar1 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle_5247420(__this,true,in_RDX);
  return pSVar1;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$PathTitle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, bool includeScreen, const MethodInfo* method);
// 0x5347420
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x53475ab: lea rax, [rip + 0x1f86a4e]  ; " > "
// asm:   0x53475b2: mov rsi, qword ptr [rax]
// asm:   0x53475b5: mov rdi, rbx

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle_5247420
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,bool includeScreen,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_array *values;
  System_String_o *str2;
  
  if (Il2CppMethodInitialized_075428dc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&" > ");
    Il2CppMethodInitialized_075428dc = '\x01';
  }
  bVar2 = true;
  if (includeScreen) {
    if (Il2CppMethodInitialized_075428dd == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"screen");
      il2cpp_codegen_initialize_runtime_metadata(&"main-menu");
      Il2CppMethodInitialized_075428dd = '\x01';
    }
    bVar2 = false;
    bVar1 = System_String__Equals_52ffe30
                      ((__this->fields)._ScreenId_k__BackingField,"main-menu",5,(MethodInfo *)0x0);
    if (bVar1) {
      bVar2 = System_String__Equals_52ffe30
                        ((__this->fields)._Kind_k__BackingField,"screen",5,(MethodInfo *)0x0);
      bVar2 = !bVar2;
    }
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._ScreenTitle_k__BackingField,(MethodInfo *)0x0);
  if (!bVar2) {
    pSVar3 = (&(__this->fields)._ScreenId_k__BackingField)[!bVar1];
    bVar2 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
    if (!bVar2) {
      bVar2 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
      if (bVar2) {
        return (__this->fields)._Title_k__BackingField;
      }
      bVar2 = System_String__IsNullOrEmpty((__this->fields)._SectionTitle_k__BackingField,(MethodInfo *)0x0);
      bVar1 = System_String__IsNullOrEmpty((__this->fields)._Title_k__BackingField,(MethodInfo *)0x0);
      if (bVar2) {
        if (bVar1) {
          return pSVar3;
        }
        bVar2 = System_String__op_Equality((__this->fields)._Title_k__BackingField,pSVar3,(MethodInfo *)0x0);
        if (bVar2) {
          return pSVar3;
        }
        str2 = (__this->fields)._Title_k__BackingField;
      }
      else {
        if ((!bVar1) &&
           (bVar2 = System_String__op_Equality
                              ((__this->fields)._Title_k__BackingField,
                               (__this->fields)._SectionTitle_k__BackingField,(MethodInfo *)0x0), !bVar2)) {
          values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
          if (values == (System_String_array *)0x0) {
            ThrowNullReferenceException();
          }
          if ((int)values->max_length != 0) {
            values->m_Items[0] = pSVar3;
            Il2CppCodeGenWriteBarrier(values->m_Items);
            if ((values->max_length & 0xfffffffe) != 0) {
              values->m_Items[1] = " > ";
              Il2CppCodeGenWriteBarrier(values->m_Items + 1);
              if (2 < (uint)values->max_length) {
                values->m_Items[2] = (__this->fields)._SectionTitle_k__BackingField;
                Il2CppCodeGenWriteBarrier(values->m_Items + 2);
                if ((values->max_length & 0xfffffffc) != 0) {
                  values->m_Items[3] = " > ";
                  Il2CppCodeGenWriteBarrier(values->m_Items + 3);
                  if (4 < (uint)values->max_length) {
                    values->m_Items[4] = (__this->fields)._Title_k__BackingField;
                    Il2CppCodeGenWriteBarrier(values->m_Items + 4);
                    pSVar3 = System_String__Concat_5302910(values,(MethodInfo *)0x0);
                    return pSVar3;
                  }
                }
              }
            }
          }
          ThrowIndexOutOfRangeException();
        }
        str2 = (__this->fields)._SectionTitle_k__BackingField;
      }
      goto label_053475b8;
    }
  }
  bVar2 = System_String__IsNullOrEmpty((__this->fields)._SectionTitle_k__BackingField,(MethodInfo *)0x0);
  pSVar3 = (__this->fields)._Title_k__BackingField;
  if (!bVar2) {
    bVar2 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
    if ((!bVar2) &&
       (bVar2 = System_String__op_Equality
                          ((__this->fields)._Title_k__BackingField,
                           (__this->fields)._SectionTitle_k__BackingField,(MethodInfo *)0x0), !bVar2)) {
      pSVar3 = (__this->fields)._SectionTitle_k__BackingField;
      str2 = (__this->fields)._Title_k__BackingField;
label_053475b8:
      pSVar3 = System_String__Concat_5301f10(pSVar3," > ",str2,(MethodInfo *)0x0);
      return pSVar3;
    }
    pSVar3 = (__this->fields)._SectionTitle_k__BackingField;
  }
  return pSVar3;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$IsMainMenuChild
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchEntry__IsMainMenuChild (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x53476c0

bool Gisketch_Aottg2UI_Search_GisketchSearchEntry__IsMainMenuChild
               (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075428dd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"screen");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu");
    Il2CppMethodInitialized_075428dd = '\x01';
  }
  bVar2 = false;
  bVar1 = System_String__Equals_52ffe30
                    ((__this->fields)._ScreenId_k__BackingField,"main-menu",5,(MethodInfo *)0x0);
  if (bVar1) {
    bVar2 = System_String__Equals_52ffe30
                      ((__this->fields)._Kind_k__BackingField,"screen",5,(MethodInfo *)0x0);
    bVar2 = !bVar2;
  }
  return bVar2;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$IsActiveScreen
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchEntry__IsActiveScreen (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, System_String_o* activeScreenId, const MethodInfo* method);
// 0x53473d0

bool Gisketch_Aottg2UI_Search_GisketchSearchEntry__IsActiveScreen
               (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,System_String_o *activeScreenId,
               MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._ScreenId_k__BackingField,(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_String__IsNullOrEmpty(activeScreenId,(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_String__Equals_52ffe30
                        ((__this->fields)._ScreenId_k__BackingField,activeScreenId,5,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$IconFor
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconFor (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x5346d00

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconFor
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pSVar3 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind
                       ((System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),method);
    return pSVar3;
  }
  pGVar1 = (node->fields).search;
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
    method = (MethodInfo *)0x0;
    bVar2 = System_String__IsNullOrEmpty((pGVar1->fields).icon,(MethodInfo *)0x0);
    pGVar1 = (node->fields).search;
    if (!bVar2) {
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
        return (pGVar1->fields).icon;
      }
label_05346d8e:
      ThrowNullReferenceException();
    }
    if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
      method = (MethodInfo *)0x0;
      bVar2 = System_String__IsNullOrEmpty((pGVar1->fields).kind,(MethodInfo *)0x0);
      if (!bVar2) {
        pGVar1 = (node->fields).search;
        if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
          pSVar3 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind((pGVar1->fields).kind,method);
          return pSVar3;
        }
        goto label_05346d8e;
      }
    }
  }
  pSVar3 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind((node->fields).type,method);
  return pSVar3;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$KindFor
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__KindFor (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x5346da0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__KindFor
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar1;
  bool bVar2;
  
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  pGVar1 = (node->fields).search;
  if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
    bVar2 = System_String__IsNullOrEmpty((pGVar1->fields).kind,(MethodInfo *)0x0);
    if (!bVar2) {
      pGVar1 = (node->fields).search;
      if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
        ThrowNullReferenceException();
      }
      return (pGVar1->fields).kind;
    }
  }
  return (node->fields).type;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$IconForKind
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind (System_String_o* kind, const MethodInfo* method);
// 0x53470a0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind(System_String_o *kind,MethodInfo *method)

{
  bool bVar1;
  System_String_o **ppSVar2;
  
  if (Il2CppMethodInitialized_075428de == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"select");
    il2cpp_codegen_initialize_runtime_metadata(&"buttonA");
    il2cpp_codegen_initialize_runtime_metadata(&"input");
    il2cpp_codegen_initialize_runtime_metadata(&"TextArea");
    il2cpp_codegen_initialize_runtime_metadata(&"Select");
    il2cpp_codegen_initialize_runtime_metadata(&"InputField");
    il2cpp_codegen_initialize_runtime_metadata(&"screen");
    il2cpp_codegen_initialize_runtime_metadata(&"setting");
    il2cpp_codegen_initialize_runtime_metadata(&"section");
    il2cpp_codegen_initialize_runtime_metadata(&"open");
    il2cpp_codegen_initialize_runtime_metadata(&"menuList");
    il2cpp_codegen_initialize_runtime_metadata(&"Dropdown");
    il2cpp_codegen_initialize_runtime_metadata(&"arrowDown");
    Il2CppMethodInitialized_075428de = '\x01';
  }
  bVar1 = System_String__Equals_52ffe30(kind,"section",5,(MethodInfo *)0x0);
  ppSVar2 = &"menuList";
  if (!bVar1) {
    bVar1 = System_String__Equals_52ffe30(kind,"screen",5,(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_String__Equals_52ffe30(kind,"setting",5,(MethodInfo *)0x0);
      if (!bVar1) {
        bVar1 = System_String__Equals_52ffe30(kind,"InputField",5,(MethodInfo *)0x0);
        ppSVar2 = &"open";
        if (!bVar1) {
          bVar1 = System_String__Equals_52ffe30(kind,"TextArea",5,(MethodInfo *)0x0);
          if (!bVar1) {
            bVar1 = System_String__Equals_52ffe30(kind,"input",5,(MethodInfo *)0x0);
            if (!bVar1) {
              bVar1 = System_String__Equals_52ffe30(kind,"Dropdown",5,(MethodInfo *)0x0);
              ppSVar2 = &"arrowDown";
              if (!bVar1) {
                bVar1 = System_String__Equals_52ffe30(kind,"Select",5,(MethodInfo *)0x0);
                if (!bVar1) {
                  bVar1 = System_String__Equals_52ffe30(kind,"select",5,(MethodInfo *)0x0);
                  if (bVar1) {
                    ppSVar2 = &"arrowDown";
                  }
                  else {
                    ppSVar2 = &"buttonA";
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  return *ppSVar2;
}


