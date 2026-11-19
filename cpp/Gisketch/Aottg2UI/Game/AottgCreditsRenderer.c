// Type: Gisketch.Aottg2UI.Game.AottgCreditsRenderer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgCreditsRenderer.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCreditsRenderer.<>c__DisplayClass10_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0___ctor (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0_o* __this, const MethodInfo* method);
// 0x5e816b0

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0___ctor
               (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0_o *__this,MethodInfo *method
               )

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer.<>c__DisplayClass10_0$$<BuildEmpty>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0___BuildEmpty_b__0 (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* empty, const MethodInfo* method);
// 0x5e81940

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0___BuildEmpty_b__0
               (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *empty,MethodInfo *method)

{
  System_String_o *key;
  System_String_o *id;
  
  if (Il2CppMethodInitialized_07548829 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"stateMetaText");
    il2cpp_codegen_initialize_runtime_metadata(&"-text");
    Il2CppMethodInitialized_07548829 = '\x01';
  }
  key = (__this->fields).textKey;
  id = System_String__Concat_52f0320((__this->fields).id,"-text",(MethodInfo *)0x0);
  if (empty == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (empty,key,"stateMetaText",id,(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer.<>c__DisplayClass5_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0___ctor (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x5e80fd0

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0___ctor
               (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer.<>c__DisplayClass5_0$$<BuildGroup>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0___BuildGroup_b__0 (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* header, const MethodInfo* method);
// 0x5e819d0

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0___BuildGroup_b__0
               (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *header,MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditGroup_o *pAVar1;
  bool bVar2;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  
  if (Il2CppMethodInitialized_0754882a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-title");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-info");
    il2cpp_codegen_initialize_runtime_metadata(&"creditsInfoIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/info-circle");
    il2cpp_codegen_initialize_runtime_metadata(&"creditsSubcategoryHeader");
    Il2CppMethodInitialized_0754882a = '\x01';
  }
  pAVar1 = (__this->fields).group;
  if (pAVar1 != (ApplicationManagers_Credits_AottgCreditGroup_o *)0x0) {
    pSVar6 = (pAVar1->fields)._Title_k__BackingField;
    id = System_String__Concat_52f0320((__this->fields).id,"-title",(MethodInfo *)0x0);
    if (header != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (header,pSVar6,"creditsSubcategoryHeader",id,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar4,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,1.0,(MethodInfo *)0x0);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar3->fields).layout = pGVar5;
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).layout);
        pAVar1 = (__this->fields).group;
        if (pAVar1 != (ApplicationManagers_Credits_AottgCreditGroup_o *)0x0) {
          bVar2 = System_String__IsNullOrEmpty
                            ((pAVar1->fields)._Description_k__BackingField,(MethodInfo *)0x0);
          if (bVar2) {
            return;
          }
          pSVar6 = System_String__Concat_52f0320((__this->fields).id,"-info",(MethodInfo *)0x0);
          pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Image
                             (header,"UI/Icons/info-circle","creditsInfoIcon",pSVar6,
                              (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(18.0,(MethodInfo *)0x0);
          height = Gisketch_Aottg2UI_Code_AottgUi__Points(18.0,(MethodInfo *)0x0);
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,height,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,0.0,(MethodInfo *)0x0);
          if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar3->fields).layout = pGVar5;
            Il2CppCodeGenWriteBarrier(&(pGVar3->fields).layout);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer.<>c__DisplayClass6_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass6_0___ctor (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass6_0_o* __this, const MethodInfo* method);
// 0x5e80fe0

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass6_0___ctor
               (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass6_0_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer.<>c__DisplayClass6_0$$<BuildContributors>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass6_0___BuildContributors_b__0 (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass6_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* grid, const MethodInfo* method);
// 0x5e81c70
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e81dff: jmp 0x5e81ce0

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass6_0___BuildContributors_b__0
               (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass6_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *grid,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  uint in_EAX;
  int32_t iVar3;
  ApplicationManagers_Credits_AottgCreditContributor_o *contributor;
  System_String_o *str2;
  System_String_o *pSVar4;
  VirtualInvokeData *pVVar5;
  MethodInfo *method_00;
  ulong uVar6;
  Il2CppObject *pIVar7;
  int iVar8;
  long lVar9;
  undefined8 uStack_38;
  
  uStack_38._0_4_ = in_EAX;
  if (Il2CppMethodInitialized_0754882b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditContributor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_AottgCreditContributor);
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    Il2CppMethodInitialized_0754882b = '\x01';
  }
  uStack_38 = (ulong)(uint)uStack_38;
  pIVar7 = (Il2CppObject *)(__this->fields).contributors;
  if (pIVar7 != (Il2CppObject *)0x0) {
    iVar8 = 0;
    do {
      pIVar1 = pIVar7->klass;
      uVar6 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar6 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar9 = 0;
        do {
          if (*(System_Collections_Generic_IReadOnlyCollection_AottgCreditContributor__c **)
               ((long)&pIVar2->interfaceType + lVar9) ==
              TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditContributor) {
            pVVar5 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar9);
            goto label_05e81da3;
          }
          lVar9 = lVar9 + 0x10;
        } while (uVar6 * 0x10 != lVar9);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar7,(Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditContributor
                          ,0);
label_05e81da3:
      iVar3 = (*pVVar5->methodPtr)(pIVar7,pVVar5->method);
      if (iVar3 <= iVar8) {
        return;
      }
      pIVar7 = (Il2CppObject *)(__this->fields).contributors;
      if (pIVar7 == (Il2CppObject *)0x0) break;
      iVar3 = uStack_38._4_4_;
      pIVar1 = pIVar7->klass;
      uVar6 = (ulong)(pIVar1->_2).interface_offsets_count;
      if (uVar6 != 0) {
        pIVar2 = (pIVar1->_1).interfaceOffsets;
        lVar9 = 0;
        do {
          if (*(System_Collections_Generic_IReadOnlyList_AottgCreditContributor__c **)
               ((long)&pIVar2->interfaceType + lVar9) ==
              TypeInfo_System_Collections_Generic_IReadOnlyList_AottgCreditContributor) {
            pVVar5 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar9);
            goto label_05e81ced;
          }
          lVar9 = lVar9 + 0x10;
        } while (uVar6 * 0x10 != lVar9);
      }
      pVVar5 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar7,(Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_IReadOnlyList_AottgCreditContributor,0);
label_05e81ced:
      contributor = (ApplicationManagers_Credits_AottgCreditContributor_o *)
                    (*pVVar5->methodPtr)(pIVar7,iVar3,pVVar5->method);
      pSVar4 = (__this->fields).id;
      str2 = System_Int32__ToString((int32_t *)((long)&uStack_38 + 4),(MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      pSVar4 = System_String__Concat_5301f10(pSVar4,"-",str2,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributor(grid,contributor,pSVar4,method_00);
      iVar8 = uStack_38._4_4_ + 1;
      uStack_38 = CONCAT44(iVar8,(uint)uStack_38);
      pIVar7 = (Il2CppObject *)(__this->fields).contributors;
    } while (pIVar7 != (Il2CppObject *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$BuildCategory
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildCategory (Gisketch_Aottg2UI_Code_AottgUi_o* content, ApplicationManagers_Credits_AottgCreditCategory_o* category, int32_t categoryIndex, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x5e80210
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e8078f: jmp 0x5e80630

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildCategory
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               ApplicationManagers_Credits_AottgCreditCategory_o *category,int32_t categoryIndex,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *contributors;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar3;
  Gisketch_Aottg2UI_Code_AottgUi_o *content_00;
  bool bVar4;
  int32_t iVar5;
  int32_t iVar6;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader_o *__this;
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar9;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this_00;
  VirtualInvokeData *pVVar10;
  MethodInfo *pMVar11;
  ApplicationManagers_Credits_AottgCreditGroup_o *group;
  ulong uVar12;
  MethodInfo *method_00;
  long lVar13;
  Il2CppObject *pIVar14;
  int32_t iStack_4c;
  System_String_o *pSStack_48;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_40;
  int32_t iStack_38;
  int32_t iStack_34;
  
  pGStack_40 = content;
  if (Il2CppMethodInitialized_0754881f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditContributor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditGroup);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_AottgCreditGroup);
    il2cpp_codegen_initialize_runtime_metadata(&"stateMetaText");
    il2cpp_codegen_initialize_runtime_metadata(&"-contributors");
    il2cpp_codegen_initialize_runtime_metadata(&"Credits.Refreshing");
    il2cpp_codegen_initialize_runtime_metadata(&"-empty");
    il2cpp_codegen_initialize_runtime_metadata(&"-description");
    il2cpp_codegen_initialize_runtime_metadata(&"credits-refreshing-text");
    il2cpp_codegen_initialize_runtime_metadata(&"Credits.NoneListed");
    il2cpp_codegen_initialize_runtime_metadata(&"-core-header");
    il2cpp_codegen_initialize_runtime_metadata(&"credits.refreshing");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"-gap");
    il2cpp_codegen_initialize_runtime_metadata(&"-group-");
    Il2CppMethodInitialized_0754881f = '\x01';
  }
  iStack_4c = 0;
  pSStack_48 = context.fields._SectionId_k__BackingField;
  pSVar7 = System_String__Concat_52f0320
                     (context.fields._SectionId_k__BackingField,"-core-header",(MethodInfo *)0x0);
  if (category != (ApplicationManagers_Credits_AottgCreditCategory_o *)0x0) {
    pSVar8 = (category->fields)._Name_k__BackingField;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader)
    ;
    if (Il2CppMethodInitialized_0754881c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"credits-category-header");
      Il2CppMethodInitialized_0754881c = '\x01';
    }
    Gisketch_Aottg2UI_Code_AottgComponent___ctor
              ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
    bVar4 = System_String__IsNullOrEmpty(pSVar7,(MethodInfo *)0x0);
    if (__this != (Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader_o *)0x0) {
      if (bVar4) {
        pSVar7 = "credits-category-header";
      }
      (__this->fields)._id = pSVar7;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._id);
      if (pSVar8 == (System_String_o *)0x0) {
        pSVar8 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8);
      }
      (__this->fields)._text = pSVar8;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._text);
      pGVar3 = pGStack_40;
      if (pGStack_40 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  (pGStack_40,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
        bVar4 = System_String__IsNullOrEmpty
                          ((category->fields)._Description_k__BackingField,(MethodInfo *)0x0);
        if (!bVar4) {
          pSVar7 = (category->fields)._Description_k__BackingField;
          pSVar8 = System_String__Concat_52f0320(pSStack_48,"-description",(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Code_AottgUi__Text
                    (pGVar3,pSVar7,"text",pSVar8,(System_String_o *)0x0,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        }
        if (categoryIndex == 0) {
          pGVar9 = Gisketch_Aottg2UI_Code_AottgUi__TextKey
                             (pGVar3,"Credits.Refreshing","stateMetaText","credits-refreshing-text",
                              (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                              (MethodInfo *)0x0);
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this_00,(MethodInfo *)0x0);
          if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_05e80805;
          (__this_00->fields).visible = "credits.refreshing";
          Il2CppCodeGenWriteBarrier(&(__this_00->fields).visible);
          if (pGVar9 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_05e80805;
          (pGVar9->fields).bind = __this_00;
          Il2CppCodeGenWriteBarrier(&(pGVar9->fields).bind);
        }
        pIVar14 = (Il2CppObject *)(category->fields)._Contributors_k__BackingField;
        if (pIVar14 != (Il2CppObject *)0x0) {
          pIVar1 = pIVar14->klass;
          uVar12 = (ulong)(pIVar1->_2).interface_offsets_count;
          if (uVar12 != 0) {
            pIVar2 = (pIVar1->_1).interfaceOffsets;
            lVar13 = 0;
            do {
              if (*(System_Collections_Generic_IReadOnlyCollection_AottgCreditContributor__c **)
                   ((long)&pIVar2->interfaceType + lVar13) ==
                  TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditContributor) {
                pVVar10 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar13);
                goto label_05e80551;
              }
              lVar13 = lVar13 + 0x10;
            } while (uVar12 * 0x10 != lVar13);
          }
          pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                              (pIVar14,(Il2CppClass *)
                                       TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditContributor
                               ,0);
label_05e80551:
          iVar5 = (*pVVar10->methodPtr)(pIVar14,pVVar10->method);
          pIVar14 = (Il2CppObject *)(category->fields)._Groups_k__BackingField;
          if (pIVar14 != (Il2CppObject *)0x0) {
            pIVar1 = pIVar14->klass;
            uVar12 = (ulong)(pIVar1->_2).interface_offsets_count;
            if (uVar12 != 0) {
              pIVar2 = (pIVar1->_1).interfaceOffsets;
              lVar13 = 0;
              do {
                if (*(System_Collections_Generic_IReadOnlyCollection_AottgCreditGroup__c **)
                     ((long)&pIVar2->interfaceType + lVar13) ==
                    TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditGroup) {
                  pMVar11 = (MethodInfo *)(pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar13));
                  goto label_05e805c1;
                }
                lVar13 = lVar13 + 0x10;
              } while (uVar12 * 0x10 != lVar13);
            }
            pMVar11 = (MethodInfo *)
                      GetInterfaceInvokeDataFromVTableSlowPath
                                (pIVar14,(Il2CppClass *)
                                         TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditGroup
                                 ,0);
label_05e805c1:
            iStack_38 = (*pMVar11->methodPointer)(pIVar14,(MethodInfo *)pMVar11->virtualMethodPointer);
            iStack_34 = iVar5;
            if (0 < iVar5) {
              contributors = (category->fields)._Contributors_k__BackingField;
              pSVar7 = System_String__Concat_52f0320(pSStack_48,"-contributors",(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors
                        (pGVar3,contributors,pSVar7,pMVar11);
            }
            pGVar3 = pGStack_40;
            iStack_4c = 0;
            pIVar14 = (Il2CppObject *)(category->fields)._Groups_k__BackingField;
            if (pIVar14 != (Il2CppObject *)0x0) {
              do {
                iVar5 = iStack_4c;
                pIVar1 = pIVar14->klass;
                uVar12 = (ulong)(pIVar1->_2).interface_offsets_count;
                if (uVar12 != 0) {
                  pIVar2 = (pIVar1->_1).interfaceOffsets;
                  lVar13 = 0;
                  do {
                    if (*(System_Collections_Generic_IReadOnlyCollection_AottgCreditGroup__c **)
                         ((long)&pIVar2->interfaceType + lVar13) ==
                        TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditGroup) {
                      pVVar10 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar13);
                      goto label_05e806f3;
                    }
                    lVar13 = lVar13 + 0x10;
                  } while (uVar12 * 0x10 != lVar13);
                }
                pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                                    (pIVar14,(Il2CppClass *)
                                             TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditGroup
                                     ,0);
label_05e806f3:
                iVar6 = (*pVVar10->methodPtr)(pIVar14,pVVar10->method);
                content_00 = pGStack_40;
                if (iVar6 <= iVar5) {
                  if ((iStack_34 < 1) && (iStack_38 < 1)) {
                    pSVar7 = System_String__Concat_52f0320(pSStack_48,"-empty",(MethodInfo *)0x0)
                    ;
                    Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
                              (content_00,pSVar7,"Credits.NoneListed",(MethodInfo *)&"Credits.NoneListed");
                  }
                  return;
                }
                pSVar7 = System_Int32__ToString(&iStack_4c,(MethodInfo *)0x0);
                pSVar7 = System_String__Concat_5302810
                                   (pSStack_48,"-group-",pSVar7,"-gap",
                                    (MethodInfo *)0x0);
                Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGap(pGVar3,pSVar7,method_00);
                iVar5 = iStack_4c;
                pIVar14 = (Il2CppObject *)(category->fields)._Groups_k__BackingField;
                if (pIVar14 == (Il2CppObject *)0x0) break;
                pIVar1 = pIVar14->klass;
                uVar12 = (ulong)(pIVar1->_2).interface_offsets_count;
                if (uVar12 != 0) {
                  pIVar2 = (pIVar1->_1).interfaceOffsets;
                  lVar13 = 0;
                  do {
                    if (*(System_Collections_Generic_IReadOnlyList_AottgCreditGroup__c **)
                         ((long)&pIVar2->interfaceType + lVar13) ==
                        TypeInfo_System_Collections_Generic_IReadOnlyList_AottgCreditGroup) {
                      pVVar10 = pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar13);
                      goto label_05e8063d;
                    }
                    lVar13 = lVar13 + 0x10;
                  } while (uVar12 * 0x10 != lVar13);
                }
                pVVar10 = GetInterfaceInvokeDataFromVTableSlowPath
                                    (pIVar14,(Il2CppClass *)
                                             TypeInfo_System_Collections_Generic_IReadOnlyList_AottgCreditGroup
                                     ,0);
label_05e8063d:
                group = (ApplicationManagers_Credits_AottgCreditGroup_o *)
                        (*pVVar10->methodPtr)(pIVar14,iVar5,pVVar10->method);
                pSVar7 = System_Int32__ToString(&iStack_4c,(MethodInfo *)0x0);
                pMVar11 = (MethodInfo *)0x0;
                pSVar7 = System_String__Concat_5301f10
                                   (pSStack_48,"-group-",pSVar7,(MethodInfo *)0x0);
                Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGroup(pGVar3,group,pSVar7,pMVar11);
                iStack_4c = iStack_4c + 1;
                pIVar14 = (Il2CppObject *)(category->fields)._Groups_k__BackingField;
              } while (pIVar14 != (Il2CppObject *)0x0);
            }
          }
        }
      }
    }
  }
label_05e80805:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$BuildGroup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGroup (Gisketch_Aottg2UI_Code_AottgUi_o* content, ApplicationManagers_Credits_AottgCreditGroup_o* group, System_String_o* id, const MethodInfo* method);
// 0x5e80af0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e80d6f: nop 

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGroup
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               ApplicationManagers_Credits_AottgCreditGroup_o *group,System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0_Fields *targetAddress;
  Il2CppObject *obj;
  Il2CppClass *pIVar1;
  Il2CppRuntimeInterfaceOffsetPair *pIVar2;
  System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *contributors;
  int32_t iVar3;
  Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0_o *__this;
  System_Action_AottgUi__o *__this_00;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar5;
  MethodInfo *method_00;
  ulong uVar6;
  System_String_o **targetAddress_00;
  long lVar7;
  
  if (Il2CppMethodInitialized_07548820 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditContributor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsRenderer_c__DisplayClass5_0_BuildGroup_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsRenderer_c__DisplayClass5_0);
    il2cpp_codegen_initialize_runtime_metadata(&"-contributors");
    il2cpp_codegen_initialize_runtime_metadata(&"Credits.NoContributors");
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"-empty");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    il2cpp_codegen_initialize_runtime_metadata(&"-header");
    Il2CppMethodInitialized_07548820 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsRenderer_c__DisplayClass5_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0_o *)0x0) {
    targetAddress = &__this->fields;
    (__this->fields).group = group;
    Il2CppCodeGenWriteBarrier(&targetAddress->group);
    targetAddress_00 = &(__this->fields).id;
    (__this->fields).id = id;
    Il2CppCodeGenWriteBarrier(targetAddress_00);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsRenderer_c__DisplayClass5_0_BuildGroup_b__0,
               (MethodInfo_4A81BE0 *)0x0);
    pSVar4 = System_String__Concat_52f0320((__this->fields).id,"-header",(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","FlexStart","Center",
                        (System_String_o *)0x0,(System_String_o *)0x0,7.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         (content,"default",__this_00,pSVar4,layout,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      if ((targetAddress->group != (ApplicationManagers_Credits_AottgCreditGroup_o *)0x0) &&
         (pGVar5 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
        (pGVar5->fields).tooltip = (targetAddress->group->fields)._Description_k__BackingField;
        Il2CppCodeGenWriteBarrier(&(pGVar5->fields).tooltip);
        if ((targetAddress->group != (ApplicationManagers_Credits_AottgCreditGroup_o *)0x0) &&
           (obj = (Il2CppObject *)(targetAddress->group->fields)._Contributors_k__BackingField,
           obj != (Il2CppObject *)0x0)) {
          pIVar1 = obj->klass;
          uVar6 = (ulong)(pIVar1->_2).interface_offsets_count;
          if (uVar6 != 0) {
            pIVar2 = (pIVar1->_1).interfaceOffsets;
            lVar7 = 0;
            do {
              if (*(System_Collections_Generic_IReadOnlyCollection_AottgCreditContributor__c **)
                   ((long)&pIVar2->interfaceType + lVar7) ==
                  TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditContributor) {
                method_00 = (MethodInfo *)(pIVar1->vtable + *(int *)((long)&pIVar2->offset + lVar7));
                goto label_05e80da1;
              }
              lVar7 = lVar7 + 0x10;
            } while (uVar6 * 0x10 != lVar7);
          }
          method_00 = (MethodInfo *)
                      GetInterfaceInvokeDataFromVTableSlowPath
                                (obj,(Il2CppClass *)
                                     TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditContributor
                                 ,0);
label_05e80da1:
          iVar3 = (*method_00->methodPointer)(obj,(MethodInfo *)method_00->virtualMethodPointer);
          if (iVar3 < 1) {
            pSVar4 = System_String__Concat_52f0320(*targetAddress_00,"-empty",(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
                      (content,pSVar4,"Credits.NoContributors",(MethodInfo *)&"Credits.NoContributors");
            return;
          }
          if (targetAddress->group != (ApplicationManagers_Credits_AottgCreditGroup_o *)0x0) {
            contributors = (targetAddress->group->fields)._Contributors_k__BackingField;
            pSVar4 = System_String__Concat_52f0320(*targetAddress_00,"-contributors",(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors
                      (content,contributors,pSVar4,method_00);
            return;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$BuildContributors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors (Gisketch_Aottg2UI_Code_AottgUi_o* content, System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o* contributors, System_String_o* id, const MethodInfo* method);
// 0x5e80810

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *contributors,
               System_String_o *id,MethodInfo *method)

{
  System_String_o *id_00;
  Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass6_0_o *__this;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_07548821 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsRenderer_c__DisplayClass6_0_BuildContributors_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsRenderer_c__DisplayClass6_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"Wrap");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_07548821 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsRenderer_c__DisplayClass6_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass6_0_o *)0x0) {
    (__this->fields).contributors = contributors;
    Il2CppCodeGenWriteBarrier(&(__this->fields).contributors);
    (__this->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsRenderer_c__DisplayClass6_0_BuildContributors_b__0
               ,(MethodInfo_4A81BE0 *)0x0);
    id_00 = (__this->fields).id;
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,"FlexStart",
                        (System_String_o *)0x0,"Wrap",10.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (content,"default",__this_00,id_00,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$BuildContributor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributor (Gisketch_Aottg2UI_Code_AottgUi_o* grid, ApplicationManagers_Credits_AottgCreditContributor_o* contributor, System_String_o* id, const MethodInfo* method);
// 0x5e80ff0

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributor
               (Gisketch_Aottg2UI_Code_AottgUi_o *grid,
               ApplicationManagers_Credits_AottgCreditContributor_o *contributor,System_String_o *id,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_07548822 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"creditsContributorCell");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    Il2CppMethodInitialized_07548822 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "Panel";
    Il2CppCodeGenWriteBarrier(&(__this->fields).type);
    (__this->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id);
    (__this->fields).style = "creditsContributorCell";
    Il2CppCodeGenWriteBarrier(&(__this->fields).style);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Search
                       ((System_String_o *)0x0,(System_String_o *)0x0,true,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,false,
                        (MethodInfo *)0x0);
    method_01 = (MethodInfo *)&(__this->fields).search;
    (__this->fields).search = pGVar1;
    Il2CppCodeGenWriteBarrier((void **)method_01);
    pGVar2 = Gisketch_Aottg2UI_Game_AottgCreditsRenderer__ContributorCellLayout(method_01);
    (__this->fields).layout = pGVar2;
    Il2CppCodeGenWriteBarrier(&(__this->fields).layout);
    pGVar3 = Gisketch_Aottg2UI_Game_AottgCreditsRenderer__ContributorChildren(contributor,id,method_00);
    (__this->fields).children = pGVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields).children);
    if (grid != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(grid,__this,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$ContributorChildren
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_Game_AottgCreditsRenderer__ContributorChildren (ApplicationManagers_Credits_AottgCreditContributor_o* contributor, System_String_o* id, const MethodInfo* method);
// 0x5e81240

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *
Gisketch_Aottg2UI_Game_AottgCreditsRenderer__ContributorChildren
          (ApplicationManagers_Credits_AottgCreditContributor_o *contributor,System_String_o *id,
          MethodInfo *method)

{
  bool bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar7;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  System_String_o *id_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **targetAddress;
  
  if (Il2CppMethodInitialized_07548823 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"icon");
    il2cpp_codegen_initialize_runtime_metadata(&"singleplayer");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-hover");
    il2cpp_codegen_initialize_runtime_metadata(&"-account-icon");
    il2cpp_codegen_initialize_runtime_metadata(&"-name");
    il2cpp_codegen_initialize_runtime_metadata(&"Icon");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"AottgHoverMarqueeText");
    Il2CppMethodInitialized_07548823 = '\x01';
  }
  pGVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar2,(MethodInfo *)0x0);
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar2->fields).type = "AottgHoverMarqueeText";
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).type);
    pSVar3 = System_String__Concat_52f0320(id,"-name",(MethodInfo *)0x0);
    (pGVar2->fields).id = pSVar3;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).id);
    if (contributor != (ApplicationManagers_Credits_AottgCreditContributor_o *)0x0) {
      (pGVar2->fields).text = (contributor->fields)._Name_k__BackingField;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).text);
      (pGVar2->fields).style = "text";
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).style);
      (pGVar2->fields).value = "text";
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).value);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar5,minWidth,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          1.0,1.0,(MethodInfo *)0x0);
      (pGVar2->fields).layout = pGVar6;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).layout);
      bVar1 = ApplicationManagers_Credits_AottgCreditContributor__get_IsLinked(contributor,(MethodInfo *)0x0);
      if (bVar1) {
        pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                 SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,3);
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
        if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (__this->fields).type = "Icon";
          Il2CppCodeGenWriteBarrier(&(__this->fields).type);
          pSVar3 = System_String__Concat_52f0320(id,"-account-icon",(MethodInfo *)0x0);
          (__this->fields).id = pSVar3;
          Il2CppCodeGenWriteBarrier(&(__this->fields).id);
          (__this->fields).icon = "singleplayer";
          Il2CppCodeGenWriteBarrier(&(__this->fields).icon);
          (__this->fields).style = "icon";
          Il2CppCodeGenWriteBarrier(&(__this->fields).style);
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
          pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,pGVar5,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                              0.0,0.0,0.0,(MethodInfo *)0x0);
          (__this->fields).layout = pGVar6;
          Il2CppCodeGenWriteBarrier(&(__this->fields).layout);
          if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
            if ((int)pGVar7->max_length != 0) {
              pGVar7->m_Items[0] = __this;
              Il2CppCodeGenWriteBarrier(pGVar7->m_Items);
              if ((pGVar7->max_length & 0xfffffffe) != 0) {
                pGVar7->m_Items[1] = pGVar2;
                Il2CppCodeGenWriteBarrier(pGVar7->m_Items + 1);
                id_00 = System_String__Concat_52f0320(id,"-hover",(MethodInfo *)0x0);
                pSVar3 = (contributor->fields)._AccountId_k__BackingField;
                if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover);
                }
                pGVar2 = Gisketch_Aottg2UI_Game_AottgPublicProfileHover__Node(id_00,pSVar3,(MethodInfo *)0x0);
                if (2 < (uint)pGVar7->max_length) {
                  targetAddress = pGVar7->m_Items + 2;
                  pGVar7->m_Items[2] = pGVar2;
                  goto label_05e8168d;
                }
              }
            }
            goto label_05e816a9;
          }
        }
      }
      else {
        pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                 SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,1);
        if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
          if ((int)pGVar7->max_length != 0) {
            targetAddress = pGVar7->m_Items;
            pGVar7->m_Items[0] = pGVar2;
label_05e8168d:
            Il2CppCodeGenWriteBarrier(targetAddress);
            return pGVar7;
          }
label_05e816a9:
          ThrowIndexOutOfRangeException();
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$ContributorCellLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgCreditsRenderer__ContributorCellLayout (const MethodInfo* method);
// 0x5e81140

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgCreditsRenderer__ContributorCellLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07548824 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_07548824 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(32.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(36.0,(MethodInfo *)0x0);
  minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Center",
                      (System_String_o *)0x0,(System_String_o *)0x0,8.0,width,height,minWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,10.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$BuildEmpty
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty (Gisketch_Aottg2UI_Code_AottgUi_o* content, System_String_o* id, System_String_o* textKey, const MethodInfo* method);
// 0x5e80e30

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,System_String_o *id,System_String_o *textKey,
               MethodInfo *method)

{
  System_String_o *id_00;
  Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0_o *__this;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_07548825 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsRenderer_c__DisplayClass10_0_BuildEmpty_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsRenderer_c__DisplayClass10_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    Il2CppMethodInitialized_07548825 = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsRenderer_c__DisplayClass10_0)
  ;
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0_o *)0x0) {
    (__this->fields).textKey = textKey;
    Il2CppCodeGenWriteBarrier(&(__this->fields).textKey);
    (__this->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,(Il2CppObject *)__this,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsRenderer_c__DisplayClass10_0_BuildEmpty_b__0,
               (MethodInfo_4A81BE0 *)0x0);
    id_00 = (__this->fields).id;
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (content,"default",__this_00,id_00,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$BuildGap
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGap (Gisketch_Aottg2UI_Code_AottgUi_o* content, System_String_o* id, const MethodInfo* method);
// 0x5e809e0

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGap
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_07548826 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    Il2CppMethodInitialized_07548826 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(8.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  if (content == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (content,"default",(System_Action_AottgUi__o *)0x0,id,layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$SectionId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCreditsRenderer__SectionId (System_String_o* name, int32_t index, const MethodInfo* method);
// 0x5e816c0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCreditsRenderer__SectionId(System_String_o *name,int32_t index,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  System_String_o *str1;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  int32_t local_14;
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,index);
  if (Il2CppMethodInitialized_07548827 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    il2cpp_codegen_initialize_runtime_metadata(&"category-");
    il2cpp_codegen_initialize_runtime_metadata(&"00");
    Il2CppMethodInitialized_07548827 = '\x01';
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgCreditsRenderer__SafeId(name,method_00);
  bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
  str1 = System_Int32__ToString_54b7460(&local_14,"00",(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = System_String__Concat_52f0320("category-",str1,(MethodInfo *)0x0);
    return pSVar2;
  }
  pSVar2 = System_String__Concat_5302810
                     ("category-",str1,"-",pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$SafeId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCreditsRenderer__SafeId (System_String_o* value, const MethodInfo* method);
// 0x5e81770

System_String_o *
Gisketch_Aottg2UI_Game_AottgCreditsRenderer__SafeId(System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  uint16_t uVar3;
  int32_t iVar4;
  System_Text_StringBuilder_o *__this;
  System_String_o *pSVar5;
  int index;
  
  if (Il2CppMethodInitialized_07548828 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    Il2CppMethodInitialized_07548828 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (value != (System_String_o *)0x0) {
    iVar4 = (value->fields)._stringLength;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
    System_Text_StringBuilder___ctor_530d510(__this,iVar4,(MethodInfo *)0x0);
    if (0 < (value->fields)._stringLength) {
      if (__this == (System_Text_StringBuilder_o *)0x0) {
        uVar3 = System_String__get_Chars(value,0,(MethodInfo *)0x0);
        if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_07556750);
        }
        uVar3 = System_Char__ToLowerInvariant(uVar3,(MethodInfo *)0x0);
        System_Char__IsLetterOrDigit(uVar3,(MethodInfo *)0x0);
        ThrowNullReferenceException();
      }
      bVar1 = false;
      index = 0;
      do {
        uVar3 = System_String__get_Chars(value,index,(MethodInfo *)0x0);
        if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_07556750);
        }
        uVar3 = System_Char__ToLowerInvariant(uVar3,(MethodInfo *)0x0);
        bVar2 = System_Char__IsLetterOrDigit(uVar3,(MethodInfo *)0x0);
        if (bVar2) {
          bVar1 = false;
label_05e8186f:
          System_Text_StringBuilder__Append_530f6a0(__this,uVar3,(MethodInfo *)0x0);
        }
        else if (!bVar1) {
          iVar4 = System_Text_StringBuilder__get_Length(__this,(MethodInfo *)0x0);
          if (0 < iVar4) {
            bVar1 = true;
            uVar3 = 0x2d;
            goto label_05e8186f;
          }
        }
        index = index + 1;
      } while (index < (value->fields)._stringLength);
      if (bVar1) {
        iVar4 = System_Text_StringBuilder__get_Length(__this,(MethodInfo *)0x0);
        if (0 < iVar4) {
          iVar4 = System_Text_StringBuilder__get_Length(__this,(MethodInfo *)0x0);
          System_Text_StringBuilder__set_Length(__this,iVar4 + -1,(MethodInfo *)0x0);
        }
        goto label_05e818ca;
      }
    }
    if (__this != (System_Text_StringBuilder_o *)0x0) {
label_05e818ca:
      pSVar5 = (*(__this->klass->vtable)._3_ToString.methodPtr)
                         (__this,(__this->klass->vtable)._3_ToString.method);
      return pSVar5;
    }
  }
  ThrowNullReferenceException();
}


