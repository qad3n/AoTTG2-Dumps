// Type: Gisketch.Aottg2UI.Search.GisketchSearchEntry
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Search/GisketchSearchEntry.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchEntry___ctor (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, UnityEngine_GameObject_o* target, const MethodInfo* method);
// 0x1818af0c0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1818af124: mov r8, rcx
// asm:   0x1818af2ad: mov rcx, r12

void Gisketch_Aottg2UI_Search_GisketchSearchEntry___ctor
               (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,
               Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,UnityEngine_GameObject_o *target,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_o *value;
  System_String_o *pSVar4;
  System_String_o **ppSVar5;
  longlong lVar6;
  System_String_o *kind;
  System_String_o *value_00;
  System_String_o **ppSVar7;
  System_String_o *value_01;
  System_String_o *value_02;
  System_String_o *value_03;
  
  if ((node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) ||
     ((node->fields).search == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0)) {
    ppSVar5 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
    ppSVar7 = ppSVar5;
    if ((node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) &&
       ((node->fields).search != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0)) {
      ppSVar7 = &(((node->fields).search)->fields).sectionTitle;
    }
  }
  else {
    ppSVar5 = &(((node->fields).search)->fields).sectionId;
    ppSVar7 = &(((node->fields).search)->fields).sectionTitle;
  }
  pSVar3 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  value = *ppSVar7;
  value_02 = *ppSVar5;
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    value_00 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    value_03 = value_00;
label_1818af22c:
    pSVar4 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    value_01 = pSVar4;
    if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      if ((node->fields).search != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0)
      goto label_1818af245;
label_1818af2a7:
      pSVar4 = (node->fields).type;
    }
label_1818af2b0:
    pSVar4 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind(pSVar4,(MethodInfo *)0x0);
    if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
      kind = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      goto label_1818af30c;
    }
    if ((node->fields).search != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) goto label_1818af2c9;
  }
  else {
    value_03 = (node->fields).id;
    if (((node->fields).search == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) ||
       (bVar2 = System_String__IsNullOrEmpty((((node->fields).search)->fields).title,(MethodInfo *)0x0), bVar2
       )) {
      bVar2 = System_String__IsNullOrEmpty((node->fields).text,(MethodInfo *)0x0);
      if (bVar2) {
        bVar2 = System_String__IsNullOrEmpty((node->fields).placeholder,(MethodInfo *)0x0);
        if (bVar2) {
          ppSVar5 = &(node->fields).id;
          if ((node->fields).id == (System_String_o *)0x0) {
            ppSVar5 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
          }
          value_00 = *ppSVar5;
        }
        else {
          value_00 = (node->fields).placeholder;
        }
      }
      else {
        value_00 = (node->fields).text;
      }
      if ((node->fields).search == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0)
      goto label_1818af22c;
      value_01 = (((node->fields).search)->fields).keywords;
    }
    else {
      pGVar1 = (node->fields).search;
      if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) goto label_1818af537;
      value_00 = (pGVar1->fields).title;
      value_01 = (((node->fields).search)->fields).keywords;
    }
label_1818af245:
    bVar2 = System_String__IsNullOrEmpty((((node->fields).search)->fields).icon,(MethodInfo *)0x0);
    if (bVar2) {
      if (((node->fields).search == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) ||
         (bVar2 = System_String__IsNullOrEmpty((((node->fields).search)->fields).kind,(MethodInfo *)0x0),
         bVar2)) goto label_1818af2a7;
      pGVar1 = (node->fields).search;
      if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) goto label_1818af537;
      pSVar4 = (pGVar1->fields).kind;
      goto label_1818af2b0;
    }
    pGVar1 = (node->fields).search;
    if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) goto label_1818af537;
    pSVar4 = (pGVar1->fields).icon;
label_1818af2c9:
    bVar2 = System_String__IsNullOrEmpty((((node->fields).search)->fields).kind,(MethodInfo *)0x0);
    if (!bVar2) {
      pGVar1 = (node->fields).search;
      if (pGVar1 == (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
label_1818af537:
        ThrowNullReferenceException();
      }
      kind = (pGVar1->fields).kind;
      goto label_1818af30c;
    }
  }
  kind = (node->fields).type;
label_1818af30c:
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._Target_k__BackingField = target;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Target_k__BackingField,target);
  if (pSVar3 == (System_String_o *)0x0) {
    pSVar3 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    (__this->fields)._ScreenId_k__BackingField = pSVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._ScreenId_k__BackingField,pSVar3);
    pSVar3 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    (__this->fields)._ScreenTitle_k__BackingField = pSVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._ScreenTitle_k__BackingField,pSVar3);
    pSVar3 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  else {
    (__this->fields)._ScreenId_k__BackingField = pSVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._ScreenId_k__BackingField,pSVar3);
    (__this->fields)._ScreenTitle_k__BackingField = pSVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._ScreenTitle_k__BackingField,pSVar3);
  }
  (__this->fields)._SearchGroup_k__BackingField = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._SearchGroup_k__BackingField,pSVar3);
  if (value_02 == (System_String_o *)0x0) {
    value_02 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  (__this->fields)._SectionId_k__BackingField = value_02;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._SectionId_k__BackingField,value_02);
  if (value == (System_String_o *)0x0) {
    value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  (__this->fields)._SectionTitle_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._SectionTitle_k__BackingField,value);
  if (value_03 == (System_String_o *)0x0) {
    value_03 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  (__this->fields)._TargetId_k__BackingField = value_03;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._TargetId_k__BackingField,value_03);
  bVar2 = System_String__IsNullOrEmpty((__this->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
  lVar6 = 0x48;
  if (bVar2) {
    lVar6 = 0x20;
  }
  pSVar3 = *(System_String_o **)((longlong)&__this->klass + lVar6);
  (__this->fields)._Id_k__BackingField = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Id_k__BackingField,pSVar3);
  if (value_00 == (System_String_o *)0x0) {
    value_00 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  (__this->fields)._Title_k__BackingField = value_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Title_k__BackingField,value_00);
  if (value_01 == (System_String_o *)0x0) {
    value_01 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  (__this->fields)._Keywords_k__BackingField = value_01;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Keywords_k__BackingField,value_01);
  bVar2 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
  if (bVar2) {
    pSVar4 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind(kind,(MethodInfo *)0x0);
  }
  (__this->fields)._Icon_k__BackingField = pSVar4;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Icon_k__BackingField,pSVar4);
  if (kind == (System_String_o *)0x0) {
    kind = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  (__this->fields)._Kind_k__BackingField = kind;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Kind_k__BackingField,kind);
  (__this->fields)._Node_k__BackingField = node;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Node_k__BackingField,node);
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchEntry___ctor (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, System_String_o* screenId, System_String_o* screenTitle, System_String_o* searchGroup, System_String_o* sectionId, System_String_o* sectionTitle, System_String_o* targetId, System_String_o* title, System_String_o* keywords, System_String_o* icon, System_String_o* kind, UnityEngine_GameObject_o* target, const MethodInfo* method);
// 0x1818aeeb0

void Gisketch_Aottg2UI_Search_GisketchSearchEntry___ctor_18aeeb0
               (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,System_String_o *screenId,
               System_String_o *screenTitle,System_String_o *searchGroup,System_String_o *sectionId,
               System_String_o *sectionTitle,System_String_o *targetId,System_String_o *title,
               System_String_o *keywords,System_String_o *icon,System_String_o *kind,
               UnityEngine_GameObject_o *target,MethodInfo *method)

{
  System_String_o *value;
  bool bVar1;
  longlong lVar2;
  
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._Target_k__BackingField = target;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Target_k__BackingField,target);
  if (screenId == (System_String_o *)0x0) {
    screenId = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  (__this->fields)._ScreenId_k__BackingField = screenId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._ScreenId_k__BackingField,screenId);
  if (screenTitle == (System_String_o *)0x0) {
    screenTitle = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  (__this->fields)._ScreenTitle_k__BackingField = screenTitle;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._ScreenTitle_k__BackingField,screenTitle);
  if (searchGroup == (System_String_o *)0x0) {
    searchGroup = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  (__this->fields)._SearchGroup_k__BackingField = searchGroup;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._SearchGroup_k__BackingField,searchGroup);
  if (sectionId == (System_String_o *)0x0) {
    sectionId = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  (__this->fields)._SectionId_k__BackingField = sectionId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._SectionId_k__BackingField,sectionId);
  if (sectionTitle == (System_String_o *)0x0) {
    sectionTitle = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  (__this->fields)._SectionTitle_k__BackingField = sectionTitle;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._SectionTitle_k__BackingField,sectionTitle);
  if (targetId == (System_String_o *)0x0) {
    targetId = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  (__this->fields)._TargetId_k__BackingField = targetId;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._TargetId_k__BackingField,targetId);
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._TargetId_k__BackingField,(MethodInfo *)0x0);
  lVar2 = 0x48;
  if (bVar1) {
    lVar2 = 0x20;
  }
  value = *(System_String_o **)((longlong)&__this->klass + lVar2);
  (__this->fields)._Id_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Id_k__BackingField,value);
  if (title == (System_String_o *)0x0) {
    title = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  (__this->fields)._Title_k__BackingField = title;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Title_k__BackingField,title);
  if (keywords == (System_String_o *)0x0) {
    keywords = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  (__this->fields)._Keywords_k__BackingField = keywords;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Keywords_k__BackingField,keywords);
  bVar1 = System_String__IsNullOrEmpty(icon,(MethodInfo *)0x0);
  if (bVar1) {
    icon = Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind(kind,(MethodInfo *)0x0);
  }
  (__this->fields)._Icon_k__BackingField = icon;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Icon_k__BackingField,icon);
  if (kind == (System_String_o *)0x0) {
    kind = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  (__this->fields)._Kind_k__BackingField = kind;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Kind_k__BackingField,kind);
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_Node
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Node (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x1808fb3a0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o*
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Node(Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, MethodInfo* method)

{
  return (__this->fields)._Node_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$set_Node
// il2cpp: void Gisketch_Aottg2UI_Search_GisketchSearchEntry__set_Node (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* value, const MethodInfo* method);
// 0x180b8ac00

void
Gisketch_Aottg2UI_Search_GisketchSearchEntry__set_Node(Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* value, MethodInfo* method)

{
  (__this->fields)._Node_k__BackingField = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Node_k__BackingField,value);
  return;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_Target
// il2cpp: UnityEngine_GameObject_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Target (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x180573e90

UnityEngine_GameObject_o*
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Target(Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, MethodInfo* method)

{
  return (__this->fields)._Target_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_ScreenId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_ScreenId (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x1805852b0

System_String_o*
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_ScreenId(Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, MethodInfo* method)

{
  return (__this->fields)._ScreenId_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_ScreenTitle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_ScreenTitle (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x180584c80

System_String_o*
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_ScreenTitle(Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, MethodInfo* method)

{
  return (__this->fields)._ScreenTitle_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_SearchGroup
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_SearchGroup (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x1805853f0

System_String_o*
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_SearchGroup(Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, MethodInfo* method)

{
  return (__this->fields)._SearchGroup_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_SectionId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_SectionId (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x180c8eec0

System_String_o*
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_SectionId(Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, MethodInfo* method)

{
  return (__this->fields)._SectionId_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_SectionTitle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_SectionTitle (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x1805853c0

System_String_o*
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_SectionTitle(Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, MethodInfo* method)

{
  return *(Unity_Properties_IProperty_TContainer__o **)
          &(__this->fields).m_IndexedCollectionPropertyBag.fields.m_Position;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_TargetId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_TargetId (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x180c7fb50

System_String_o*
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_TargetId(Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, MethodInfo* method)

{
  return (__this->fields)._Title_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_Id
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Id (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x1805853d0

System_String_o*
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Id(Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, MethodInfo* method)

{
  return *(Unity_Properties_IProperty_TContainer__o **)&__this[1].fields;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Title (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x18058a570

System_String_o*
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Title(Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, MethodInfo* method)

{
  return (Unity_Properties_IProperty_TContainer__o *)(*(uint64_t *)((char *)__this + 0x78));
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_DisplayTitle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_DisplayTitle (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x1818aee00

System_String_o*
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_DisplayTitle(Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, MethodInfo* method)

{
  System_String_o *pSVar1;
  
  pSVar1 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle_18aeae0(__this,true,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$DisplayTitleFor
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__DisplayTitleFor (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, System_String_o* activeScreenId, const MethodInfo* method);
// 0x1818ae670

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__DisplayTitleFor
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,System_String_o *activeScreenId,
          MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._ScreenId_k__BackingField,(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_String__IsNullOrEmpty(activeScreenId,(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_String__Equals_196c550
                        ((__this->fields)._ScreenId_k__BackingField,activeScreenId,5,(MethodInfo *)0x0);
      goto label_1818ae6b6;
    }
  }
  bVar1 = false;
label_1818ae6b6:
  pSVar2 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle_18aeae0
                     (__this,(bool)(bVar1 ^ 1),(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_Keywords
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Keywords (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x18152f220

System_String_o*
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Keywords(Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, MethodInfo* method)

{
  return (Unity_Properties_IProperty_TContainer__o *)__this[1].fields.m_Properties.fields._list;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_Icon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Icon (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x18058a6f0

System_String_o*
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Icon(Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, MethodInfo* method)

{
  return (Unity_IntegerTime_DiscreteTime_o)
         (Unity_IntegerTime_DiscreteTime_Fields)(__this->fields)._Icon_k__BackingField.fields.Value;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$get_Kind
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Kind (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x180b48770

System_String_o*
Gisketch_Aottg2UI_Search_GisketchSearchEntry__get_Kind(Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, MethodInfo* method)

{
  return (__this->fields)._Kind_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$TitleFor
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__TitleFor (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x1818aee10

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__TitleFor
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar1;
  bool bVar2;
  System_String_o **ppSVar3;
  
  if (node != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    if ((node->fields).search != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
      bVar2 = System_String__IsNullOrEmpty((((node->fields).search)->fields).title,(MethodInfo *)0x0);
      if (!bVar2) {
        pGVar1 = (node->fields).search;
        if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
          return (pGVar1->fields).title;
        }
        ThrowNullReferenceException();
      }
    }
    bVar2 = System_String__IsNullOrEmpty((node->fields).text,(MethodInfo *)0x0);
    if (!bVar2) {
      return (node->fields).text;
    }
    bVar2 = System_String__IsNullOrEmpty((node->fields).placeholder,(MethodInfo *)0x0);
    if (!bVar2) {
      return (node->fields).placeholder;
    }
    ppSVar3 = &(node->fields).id;
    if ((node->fields).id != (System_String_o *)0x0) goto label_1818aee8b;
  }
  ppSVar3 = *(System_String_o ***)(g_data_184354e50 + 0xb8);
label_1818aee8b:
  return *ppSVar3;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$PathTitle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x1818aee00

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  pSVar1 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle_18aeae0(__this,true,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$PathTitle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, bool includeScreen, const MethodInfo* method);
// 0x1818aeae0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__PathTitle_18aeae0
          (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,bool includeScreen,MethodInfo *method)

{
  System_String_o *value;
  bool bVar1;
  bool bVar2;
  System_String_o *pSVar3;
  System_String_array *values;
  
  if (Il2CppMethodInitialized_184341f60 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&" > ");
    Il2CppMethodInitialized_184341f60 = '\x01';
  }
  if (includeScreen) {
    if (Il2CppMethodInitialized_184341f61 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"screen");
      il2cpp_codegen_initialize_runtime_metadata(&"main-menu");
      Il2CppMethodInitialized_184341f61 = '\x01';
    }
    bVar1 = System_String__Equals_196c550
                      ((__this->fields)._ScreenId_k__BackingField,"main-menu",5,(MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = System_String__Equals_196c550
                        ((__this->fields)._Kind_k__BackingField,"screen",5,(MethodInfo *)0x0);
    }
    else {
      bVar1 = true;
    }
    bVar2 = System_String__IsNullOrEmpty((__this->fields)._ScreenTitle_k__BackingField,(MethodInfo *)0x0);
    if (bVar1 != false) {
      pSVar3 = (&(__this->fields)._ScreenId_k__BackingField)[!bVar2];
      bVar1 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
      if (!bVar1) {
        bVar1 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
        if (bVar1) {
          return (__this->fields)._Title_k__BackingField;
        }
        bVar1 = System_String__IsNullOrEmpty((__this->fields)._SectionTitle_k__BackingField,(MethodInfo *)0x0)
        ;
        value = (__this->fields)._Title_k__BackingField;
        if (!bVar1) {
          bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
          if (!bVar1) {
            bVar1 = System_String__op_Equality
                              ((__this->fields)._Title_k__BackingField,
                               (__this->fields)._SectionTitle_k__BackingField,(MethodInfo *)0x0);
            if (!bVar1) {
              values = (System_String_array *)SZArrayNew(TypeInfo_string_array,5);
              if (values == (System_String_array *)0x0) {
                ThrowNullReferenceException();
              }
              if ((int)values->max_length != 0) {
                values->m_Items[0] = pSVar3;
                Il2CppCodeGenWriteBarrier(values->m_Items,pSVar3);
                pSVar3 = " > ";
                if (1 < (uint)values->max_length) {
                  values->m_Items[1] = " > ";
                  Il2CppCodeGenWriteBarrier(values->m_Items + 1,pSVar3);
                  if (2 < (uint)values->max_length) {
                    pSVar3 = (__this->fields)._SectionTitle_k__BackingField;
                    values->m_Items[2] = pSVar3;
                    Il2CppCodeGenWriteBarrier(values->m_Items + 2,pSVar3);
                    pSVar3 = " > ";
                    if (3 < (uint)values->max_length) {
                      values->m_Items[3] = " > ";
                      Il2CppCodeGenWriteBarrier(values->m_Items + 3,pSVar3);
                      if (4 < (uint)values->max_length) {
                        pSVar3 = (__this->fields)._Title_k__BackingField;
                        values->m_Items[4] = pSVar3;
                        Il2CppCodeGenWriteBarrier(values->m_Items + 4,pSVar3);
                        pSVar3 = System_String__Concat_1969830(values,(MethodInfo *)0x0);
                        return pSVar3;
                      }
                    }
                  }
                }
              }
              ThrowIndexOutOfRangeException();
            }
          }
          pSVar3 = System_String__Concat_1969b70
                             (pSVar3," > ",(__this->fields)._SectionTitle_k__BackingField,
                              (MethodInfo *)0x0);
          return pSVar3;
        }
        bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
        if (!bVar1) {
          bVar1 = System_String__op_Equality((__this->fields)._Title_k__BackingField,pSVar3,(MethodInfo *)0x0)
          ;
          if (!bVar1) {
            pSVar3 = System_String__Concat_1969b70
                               (pSVar3," > ",(__this->fields)._Title_k__BackingField,
                                (MethodInfo *)0x0);
            return pSVar3;
          }
        }
        return pSVar3;
      }
    }
  }
  else {
    System_String__IsNullOrEmpty((__this->fields)._ScreenTitle_k__BackingField,(MethodInfo *)0x0);
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._SectionTitle_k__BackingField,(MethodInfo *)0x0);
  pSVar3 = (__this->fields)._Title_k__BackingField;
  if (bVar1) {
    return pSVar3;
  }
  bVar1 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_String__op_Equality
                      ((__this->fields)._Title_k__BackingField,(__this->fields)._SectionTitle_k__BackingField,
                       (MethodInfo *)0x0);
    if (!bVar1) {
      pSVar3 = System_String__Concat_1969b70
                         ((__this->fields)._SectionTitle_k__BackingField," > ",
                          (__this->fields)._Title_k__BackingField,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  return (__this->fields)._SectionTitle_k__BackingField;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$IsMainMenuChild
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchEntry__IsMainMenuChild (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, const MethodInfo* method);
// 0x1818ae9f0

bool Gisketch_Aottg2UI_Search_GisketchSearchEntry__IsMainMenuChild
               (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184341f61 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"screen");
    il2cpp_codegen_initialize_runtime_metadata(&"main-menu");
    Il2CppMethodInitialized_184341f61 = '\x01';
  }
  bVar1 = System_String__Equals_196c550
                    ((__this->fields)._ScreenId_k__BackingField,"main-menu",5,(MethodInfo *)0x0);
  if (!bVar1) {
    return false;
  }
  bVar1 = System_String__Equals_196c550
                    ((__this->fields)._Kind_k__BackingField,"screen",5,(MethodInfo *)0x0);
  return !bVar1;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$IsActiveScreen
// il2cpp: bool Gisketch_Aottg2UI_Search_GisketchSearchEntry__IsActiveScreen (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o* __this, System_String_o* activeScreenId, const MethodInfo* method);
// 0x1818ae990

bool Gisketch_Aottg2UI_Search_GisketchSearchEntry__IsActiveScreen
               (Gisketch_Aottg2UI_Search_GisketchSearchEntry_o *__this,System_String_o *activeScreenId,
               MethodInfo *method)

{
  bool bVar1;
  
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._ScreenId_k__BackingField,(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_String__IsNullOrEmpty(activeScreenId,(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_String__Equals_196c550
                        ((__this->fields)._ScreenId_k__BackingField,activeScreenId,5,(MethodInfo *)0x0);
      return bVar1;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$IconFor
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconFor (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x1818ae8d0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconFor
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar1;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    pSVar3 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind
                       ((System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
    return pSVar3;
  }
  if ((node->fields).search != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
    bVar2 = System_String__IsNullOrEmpty((((node->fields).search)->fields).icon,(MethodInfo *)0x0);
    if (!bVar2) {
      pGVar1 = (node->fields).search;
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
        return (pGVar1->fields).icon;
      }
      goto label_1818ae981;
    }
  }
  if ((node->fields).search != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
    bVar2 = System_String__IsNullOrEmpty((((node->fields).search)->fields).kind,(MethodInfo *)0x0);
    if (!bVar2) {
      pGVar1 = (node->fields).search;
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
        pSVar3 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind
                           ((pGVar1->fields).kind,(MethodInfo *)0x0);
        return pSVar3;
      }
label_1818ae981:
      ThrowNullReferenceException();
    }
  }
  pSVar3 = Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind((node->fields).type,(MethodInfo *)0x0);
  return pSVar3;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$KindFor
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__KindFor (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, const MethodInfo* method);
// 0x1818aea70

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__KindFor
          (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar1;
  bool bVar2;
  
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if ((node->fields).search != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
    bVar2 = System_String__IsNullOrEmpty((((node->fields).search)->fields).kind,(MethodInfo *)0x0);
    if (!bVar2) {
      pGVar1 = (node->fields).search;
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)0x0) {
        return (pGVar1->fields).kind;
      }
      ThrowNullReferenceException();
    }
  }
  return (node->fields).type;
}


// Gisketch.Aottg2UI.Search.GisketchSearchEntry$$IconForKind
// il2cpp: System_String_o* Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind (System_String_o* kind, const MethodInfo* method);
// 0x1818ae6d0

System_String_o *
Gisketch_Aottg2UI_Search_GisketchSearchEntry__IconForKind(System_String_o *kind,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184341f62 == '\0') {
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
    Il2CppMethodInitialized_184341f62 = '\x01';
  }
  bVar1 = System_String__Equals_196c550(kind,"section",5,(MethodInfo *)0x0);
  if (!bVar1) {
    bVar1 = System_String__Equals_196c550(kind,"screen",5,(MethodInfo *)0x0);
    if (!bVar1) {
      bVar1 = System_String__Equals_196c550(kind,"setting",5,(MethodInfo *)0x0);
      if (!bVar1) {
        bVar1 = System_String__Equals_196c550(kind,"InputField",5,(MethodInfo *)0x0);
        if (!bVar1) {
          bVar1 = System_String__Equals_196c550(kind,"TextArea",5,(MethodInfo *)0x0);
          if (!bVar1) {
            bVar1 = System_String__Equals_196c550(kind,"input",5,(MethodInfo *)0x0);
            if (!bVar1) {
              bVar1 = System_String__Equals_196c550(kind,"Dropdown",5,(MethodInfo *)0x0);
              if (!bVar1) {
                bVar1 = System_String__Equals_196c550(kind,"Select",5,(MethodInfo *)0x0);
                if (!bVar1) {
                  bVar1 = System_String__Equals_196c550(kind,"select",5,(MethodInfo *)0x0);
                  if (!bVar1) {
                    return "buttonA";
                  }
                }
              }
              return "arrowDown";
            }
          }
        }
        return "open";
      }
    }
  }
  return "menuList";
}


