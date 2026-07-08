// Type: Gisketch.Aottg2UI.Game.AottgCreditsRenderer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCreditsRenderer.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCreditsRenderer.<>c__DisplayClass10_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0___ctor (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0_o* __this, const MethodInfo* method);
// 0x416fda0

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer_<>c__DisplayClass10_0___ctor
               (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer.<>c__DisplayClass10_0$$<BuildEmpty>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0___BuildEmpty_b__0 (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* empty, const MethodInfo* method);
// 0x4170040

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer_<>c__DisplayClass10_0__<BuildEmpty>b__0
               (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *empty,MethodInfo *method)

{
  System_String_o *text;
  System_String_o *id;
  
  if (DAT_05704ac8 == '\0') {
    il2cpp_init_method_metadata(&"profileInfoStatus");
    il2cpp_init_method_metadata(&"-text");
    DAT_05704ac8 = '\x01';
  }
  text = (__this->fields).text;
  id = System_String__Concat((__this->fields).id,"-text",(MethodInfo *)0x0);
  if (empty != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (empty,text,"profileInfoStatus",id,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer.<>c__DisplayClass5_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0___ctor (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x416f6b0

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer_<>c__DisplayClass5_0___ctor
               (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer.<>c__DisplayClass5_0$$<BuildGroup>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0___BuildGroup_b__0 (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* header, const MethodInfo* method);
// 0x41700d0

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer_<>c__DisplayClass5_0__<BuildGroup>b__0
               (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *header,MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditGroup_o *pAVar1;
  bool_conflict bVar2;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  System_String_o *pSVar6;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  
  if (DAT_05704ac9 == '\0') {
    il2cpp_init_method_metadata(&"-title");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"-info");
    il2cpp_init_method_metadata(&"creditsInfoIcon");
    il2cpp_init_method_metadata(&"UI/Icons/info-circle");
    il2cpp_init_method_metadata(&"creditsSubcategoryHeader");
    DAT_05704ac9 = '\x01';
  }
  pAVar1 = (__this->fields).group;
  if (pAVar1 != (ApplicationManagers_Credits_AottgCreditGroup_o *)0x0) {
    pSVar6 = (pAVar1->fields)._Title_k__BackingField;
    id = System_String__Concat((__this->fields).id,"-title",(MethodInfo *)0x0);
    if (header != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Text
                         (header,pSVar6,"creditsSubcategoryHeader",id,(System_String_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0
                         );
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,pGVar4,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                          ,0.0,0.0,0.0,1.0,(MethodInfo *)0x0);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
        il2cpp_runtime_glue(&(pGVar3->fields).search);
        pAVar1 = (__this->fields).group;
        if (pAVar1 != (ApplicationManagers_Credits_AottgCreditGroup_o *)0x0) {
          bVar2 = System_String__IsNullOrEmpty
                            ((pAVar1->fields)._Description_k__BackingField,(MethodInfo *)0x0);
          if ((char)bVar2 != '\0') {
            return;
          }
          pSVar6 = System_String__Concat((__this->fields).id,"-info",(MethodInfo *)0x0);
          pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Image
                             (header,"UI/Icons/info-circle","creditsInfoIcon",pSVar6,
                              (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                              (MethodInfo *)0x0);
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(18.0,(MethodInfo *)0x0);
          height = Gisketch_Aottg2UI_Code_AottgUi__Points(18.0,(MethodInfo *)0x0);
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar4,height,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0
                              ,0.0,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
          if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
            (pGVar3->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
            il2cpp_runtime_glue(&(pGVar3->fields).search,pGVar5);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer.<>c__DisplayClass6_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass6_0___ctor (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass6_0_o* __this, const MethodInfo* method);
// 0x416f6c0

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer_<>c__DisplayClass6_0___ctor
               (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass6_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer.<>c__DisplayClass6_0$$<BuildContributors>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass6_0___BuildContributors_b__0 (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass6_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* grid, const MethodInfo* method);
// 0x4170380

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer_<>c__DisplayClass6_0__<BuildContributors>b__0
               (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass6_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *grid,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  System_Collections_Generic_IReadOnlyList_AottgCreditContributor__c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  ulong uVar5;
  uint in_EAX;
  int iVar6;
  ApplicationManagers_Credits_AottgCreditContributor_o *contributor;
  System_String_o *str2;
  System_String_o *pSVar7;
  VirtualInvokeData *pVVar8;
  MethodInfo *method_00;
  System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *pSVar9;
  int iVar10;
  long lVar11;
  undefined8 uStack_38;
  
  uStack_38._0_4_ = in_EAX;
  if (DAT_05704aca == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IReadOnlyCollection_AottgCreditContributor);
    il2cpp_init_method_metadata(&TypeInfo_IReadOnlyList_AottgCreditContributor);
    il2cpp_init_method_metadata();
    DAT_05704aca = '\x01';
  }
  uStack_38 = (ulong)(uint)uStack_38;
  pSVar9 = (__this->fields).contributors;
  if (pSVar9 != (System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *)0x0) {
    iVar10 = 0;
    do {
      pSVar3 = pSVar9->klass;
      uVar1._0_1_ = (pSVar3->_2).rank;
      uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar4 = (pSVar3->_1).interfaceOffsets;
        lVar11 = 0;
        do {
          if (*(long *)((long)&pIVar4->interfaceType + lVar11) == TypeInfo_IReadOnlyCollection_AottgCreditContributor) {
            pVVar8 = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar11);
            goto LAB_041704b3;
          }
          lVar11 = lVar11 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar11);
      }
      pVVar8 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar9,TypeInfo_IReadOnlyCollection_AottgCreditContributor,0);
LAB_041704b3:
      iVar6 = (*pVVar8->methodPtr)(pSVar9,pVVar8->method);
      if (iVar6 <= iVar10) {
        return;
      }
      pSVar9 = (__this->fields).contributors;
      if (pSVar9 == (System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *)0x0)
      break;
      uVar5 = uStack_38 >> 0x20;
      pSVar3 = pSVar9->klass;
      uVar2._0_1_ = (pSVar3->_2).rank;
      uVar2._1_1_ = (pSVar3->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar4 = (pSVar3->_1).interfaceOffsets;
        lVar11 = 0;
        do {
          if (*(long *)((long)&pIVar4->interfaceType + lVar11) == TypeInfo_IReadOnlyList_AottgCreditContributor) {
            pVVar8 = pSVar3->vtable + *(int *)((long)&pIVar4->offset + lVar11);
            goto LAB_041703fd;
          }
          lVar11 = lVar11 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar11);
      }
      pVVar8 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar9,TypeInfo_IReadOnlyList_AottgCreditContributor,0);
LAB_041703fd:
      contributor = (ApplicationManagers_Credits_AottgCreditContributor_o *)
                    (*pVVar8->methodPtr)(pSVar9,uVar5,pVVar8->method);
      pSVar7 = (__this->fields).id;
      str2 = System_Int32__ToString((int)&uStack_38 + 4,(MethodInfo *)0x0);
      method_00 = (MethodInfo *)0x0;
      pSVar7 = System_String__Concat(pSVar7,"-",str2,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributor
                (grid,contributor,pSVar7,method_00);
      iVar10 = uStack_38._4_4_ + 1;
      uStack_38 = CONCAT44(iVar10,(uint)uStack_38);
      pSVar9 = (__this->fields).contributors;
    } while (pSVar9 != (System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *)0x0);
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$BuildCategory
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildCategory (Gisketch_Aottg2UI_Code_AottgUi_o* content, ApplicationManagers_Credits_AottgCreditCategory_o* category, int32_t categoryIndex, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x416e8e0

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildCategory
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               ApplicationManagers_Credits_AottgCreditCategory_o *category,int32_t categoryIndex,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context,MethodInfo *method)

{
  ushort uVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *pSVar5;
  System_Collections_Generic_IReadOnlyList_AottgCreditContributor__c *pSVar6;
  Il2CppRuntimeInterfaceOffsetPair *pIVar7;
  System_Collections_Generic_IReadOnlyList_AottgCreditGroup__c *pSVar8;
  uint uVar9;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar10;
  Gisketch_Aottg2UI_Code_AottgUi_o *content_00;
  bool_conflict bVar11;
  int iVar12;
  Gisketch_Aottg2UI_Code_AottgComponent_c *value;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this;
  System_String_o *id;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar13;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_00;
  VirtualInvokeData *pVVar14;
  MethodInfo *pMVar15;
  System_String_o *pSVar16;
  ApplicationManagers_Credits_AottgCreditGroup_o *group;
  MethodInfo *method_00;
  long lVar17;
  System_Collections_Generic_IReadOnlyList_AottgCreditGroup__o *pSVar18;
  ulong uVar19;
  uint local_4c;
  System_String_o *local_48;
  Gisketch_Aottg2UI_Code_AottgUi_o *local_40;
  int local_38;
  int local_34;
  
  local_40 = content;
  if (DAT_05704abe == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgCreditsBrushHeader);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_init_method_metadata(&TypeInfo_IReadOnlyCollection_AottgCreditContributor);
    il2cpp_init_method_metadata(&TypeInfo_IReadOnlyCollection_AottgCreditGroup);
    il2cpp_init_method_metadata(&TypeInfo_IReadOnlyList_AottgCreditGroup);
    il2cpp_init_method_metadata(&"-contributors");
    il2cpp_init_method_metadata(&"No credits listed.");
    il2cpp_init_method_metadata(&"-empty");
    il2cpp_init_method_metadata(&"profileInfoStatus");
    il2cpp_init_method_metadata(&"-description");
    il2cpp_init_method_metadata(&"credits-refreshing-text");
    il2cpp_init_method_metadata(&"Refreshing credits...");
    il2cpp_init_method_metadata(&"-core-header");
    il2cpp_init_method_metadata(&"credits.refreshing");
    il2cpp_init_method_metadata(&"text");
    il2cpp_init_method_metadata(&"-gap");
    il2cpp_init_method_metadata(&"-group-");
    DAT_05704abe = '\x01';
  }
  local_4c = 0;
  local_48 = context.fields._SectionId_k__BackingField;
  value = (Gisketch_Aottg2UI_Code_AottgComponent_c *)
          System_String__Concat
                    (context.fields._SectionId_k__BackingField,"-core-header",(MethodInfo *)0x0);
  if (category != (ApplicationManagers_Credits_AottgCreditCategory_o *)0x0) {
    pSVar16 = (category->fields)._Name_k__BackingField;
    __this = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_glue(TypeInfo_AottgCreditsBrushHeader);
    if (DAT_05704abb == '\0') {
      il2cpp_init_method_metadata(&"credits-category-header");
      DAT_05704abb = '\x01';
    }
    Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this,(MethodInfo *)0x0);
    bVar11 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      value = "credits-category-header";
    }
    if (__this != (Gisketch_Aottg2UI_Code_AottgComponent_o *)0x0) {
      __this[1].klass = value;
      il2cpp_runtime_glue(__this + 1,value);
      if (pSVar16 == (System_String_o *)0x0) {
        pSVar16 = (System_String_o *)**(long **)(DAT_057110b0 + 0xb8);
      }
      __this[1].monitor = pSVar16;
      il2cpp_runtime_glue(&__this[1].monitor,pSVar16);
      pGVar10 = local_40;
      if (local_40 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Component(local_40,__this,(MethodInfo *)0x0);
        bVar11 = System_String__IsNullOrEmpty
                           ((category->fields)._Description_k__BackingField,(MethodInfo *)0x0);
        if ((char)bVar11 == '\0') {
          pSVar16 = (category->fields)._Description_k__BackingField;
          id = System_String__Concat(local_48,"-description",(MethodInfo *)0x0);
          Gisketch_Aottg2UI_Code_AottgUi__Text
                    (pGVar10,pSVar16,"text",id,(System_String_o *)0x0,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        }
        if (categoryIndex == 0) {
          pGVar13 = Gisketch_Aottg2UI_Code_AottgUi__Text
                              (pGVar10,"Refreshing credits...","profileInfoStatus","credits-refreshing-text",(System_String_o *)0x0
                               ,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                               (MethodInfo *)0x0);
          __this_00 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)
                      il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                    ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)__this_00,
                     (MethodInfo *)0x0);
          if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0)
          goto LAB_0416eed5;
          (__this_00->fields).alignItems = "credits.refreshing";
          il2cpp_runtime_glue(&(__this_00->fields).alignItems);
          if (pGVar13 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto LAB_0416eed5;
          (pGVar13->fields).contentLayout = __this_00;
          il2cpp_runtime_glue(&(pGVar13->fields).contentLayout,__this_00);
        }
        pSVar5 = (category->fields)._Contributors_k__BackingField;
        if (pSVar5 != (System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *)0x0) {
          pSVar6 = pSVar5->klass;
          uVar1._0_1_ = (pSVar6->_2).rank;
          uVar1._1_1_ = (pSVar6->_2).minimumAlignment;
          if ((ulong)uVar1 != 0) {
            pIVar7 = (pSVar6->_1).interfaceOffsets;
            lVar17 = 0;
            do {
              if (*(long *)((long)&pIVar7->interfaceType + lVar17) == TypeInfo_IReadOnlyCollection_AottgCreditContributor) {
                pVVar14 = pSVar6->vtable + *(int *)((long)&pIVar7->offset + lVar17);
                goto LAB_0416ec21;
              }
              lVar17 = lVar17 + 0x10;
            } while ((ulong)uVar1 << 4 != lVar17);
          }
          pVVar14 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar5,TypeInfo_IReadOnlyCollection_AottgCreditContributor,0);
LAB_0416ec21:
          iVar12 = (*pVVar14->methodPtr)(pSVar5,pVVar14->method);
          pSVar18 = (category->fields)._Groups_k__BackingField;
          if (pSVar18 != (System_Collections_Generic_IReadOnlyList_AottgCreditGroup__o *)0x0) {
            pSVar8 = pSVar18->klass;
            uVar2._0_1_ = (pSVar8->_2).rank;
            uVar2._1_1_ = (pSVar8->_2).minimumAlignment;
            if ((ulong)uVar2 != 0) {
              pIVar7 = (pSVar8->_1).interfaceOffsets;
              lVar17 = 0;
              do {
                if (*(long *)((long)&pIVar7->interfaceType + lVar17) == TypeInfo_IReadOnlyCollection_AottgCreditGroup) {
                  pMVar15 = (MethodInfo *)
                            (pSVar8->vtable + *(int *)((long)&pIVar7->offset + lVar17));
                  goto LAB_0416ec91;
                }
                lVar17 = lVar17 + 0x10;
              } while ((ulong)uVar2 << 4 != lVar17);
            }
            pMVar15 = (MethodInfo *)il2cpp_runtime_glue(pSVar18,TypeInfo_IReadOnlyCollection_AottgCreditGroup,0);
LAB_0416ec91:
            local_34 = (*pMVar15->methodPointer)(pSVar18,pMVar15->virtualMethodPointer);
            local_38 = iVar12;
            if (0 < iVar12) {
              pSVar5 = (category->fields)._Contributors_k__BackingField;
              pSVar16 = System_String__Concat(local_48,"-contributors",(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors
                        (pGVar10,pSVar5,pSVar16,pMVar15);
            }
            pGVar10 = local_40;
            local_4c = 0;
            pSVar18 = (category->fields)._Groups_k__BackingField;
            if (pSVar18 != (System_Collections_Generic_IReadOnlyList_AottgCreditGroup__o *)0x0) {
              do {
                uVar9 = local_4c;
                pSVar8 = pSVar18->klass;
                uVar3._0_1_ = (pSVar8->_2).rank;
                uVar3._1_1_ = (pSVar8->_2).minimumAlignment;
                if ((ulong)uVar3 != 0) {
                  pIVar7 = (pSVar8->_1).interfaceOffsets;
                  lVar17 = 0;
                  do {
                    if (*(long *)((long)&pIVar7->interfaceType + lVar17) == TypeInfo_IReadOnlyCollection_AottgCreditGroup) {
                      pVVar14 = pSVar8->vtable + *(int *)((long)&pIVar7->offset + lVar17);
                      goto LAB_0416edc3;
                    }
                    lVar17 = lVar17 + 0x10;
                  } while ((ulong)uVar3 << 4 != lVar17);
                }
                pVVar14 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar18,TypeInfo_IReadOnlyCollection_AottgCreditGroup,0);
LAB_0416edc3:
                iVar12 = (*pVVar14->methodPtr)(pSVar18);
                content_00 = local_40;
                if (iVar12 <= (int)uVar9) {
                  if ((local_34 < 1) && (local_38 < 1)) {
                    pSVar16 = System_String__Concat(local_48,"-empty",(MethodInfo *)0x0);
                    Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
                              (content_00,pSVar16,"No credits listed.",(MethodInfo *)&"No credits listed.");
                  }
                  return;
                }
                pSVar16 = System_Int32__ToString((int32_t)&local_4c,(MethodInfo *)0x0);
                pSVar16 = System_String__Concat
                                    (local_48,"-group-",pSVar16,"-gap",(MethodInfo *)0x0);
                Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGap(pGVar10,pSVar16,method_00);
                pSVar18 = (category->fields)._Groups_k__BackingField;
                if (pSVar18 == (System_Collections_Generic_IReadOnlyList_AottgCreditGroup__o *)0x0)
                break;
                uVar19 = (ulong)local_4c;
                pSVar8 = pSVar18->klass;
                uVar4._0_1_ = (pSVar8->_2).rank;
                uVar4._1_1_ = (pSVar8->_2).minimumAlignment;
                if ((ulong)uVar4 != 0) {
                  pIVar7 = (pSVar8->_1).interfaceOffsets;
                  lVar17 = 0;
                  do {
                    if (*(long *)((long)&pIVar7->interfaceType + lVar17) == TypeInfo_IReadOnlyList_AottgCreditGroup) {
                      pVVar14 = pSVar8->vtable + *(int *)((long)&pIVar7->offset + lVar17);
                      goto LAB_0416ed0d;
                    }
                    lVar17 = lVar17 + 0x10;
                  } while ((ulong)uVar4 << 4 != lVar17);
                }
                pVVar14 = (VirtualInvokeData *)il2cpp_runtime_glue(pSVar18,TypeInfo_IReadOnlyList_AottgCreditGroup,0);
LAB_0416ed0d:
                group = (ApplicationManagers_Credits_AottgCreditGroup_o *)
                        (*pVVar14->methodPtr)(pSVar18,uVar19,pVVar14->method);
                pSVar16 = System_Int32__ToString((int32_t)&local_4c,(MethodInfo *)0x0);
                pMVar15 = (MethodInfo *)0x0;
                pSVar16 = System_String__Concat(local_48,"-group-",pSVar16,(MethodInfo *)0x0);
                Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGroup
                          (pGVar10,group,pSVar16,pMVar15);
                local_4c = local_4c + 1;
                pSVar18 = (category->fields)._Groups_k__BackingField;
              } while (pSVar18 !=
                       (System_Collections_Generic_IReadOnlyList_AottgCreditGroup__o *)0x0);
            }
          }
        }
      }
    }
  }
LAB_0416eed5:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$BuildGroup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGroup (Gisketch_Aottg2UI_Code_AottgUi_o* content, ApplicationManagers_Credits_AottgCreditGroup_o* group, System_String_o* id, const MethodInfo* method);
// 0x416f1c0

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGroup
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               ApplicationManagers_Credits_AottgCreditGroup_o *group,System_String_o *id,
               MethodInfo *method)

{
  Il2CppObject *pIVar1;
  long *plVar2;
  long lVar3;
  System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *contributors;
  int iVar4;
  Il2CppObject *__this;
  System_Action_AottgUi__o *build;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar6;
  MethodInfo *method_00;
  void **ppvVar7;
  long lVar8;
  
  if (DAT_05704abf == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&TypeInfo_IReadOnlyCollection_AottgCreditContributor);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildGroup_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass5_0);
    il2cpp_init_method_metadata(&"-contributors");
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata(&"-empty");
    il2cpp_init_method_metadata(&"Row");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"FlexStart");
    il2cpp_init_method_metadata(&"No contributors listed.");
    il2cpp_init_method_metadata(&"-header");
    DAT_05704abf = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass5_0);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    pIVar1 = __this + 1;
    __this[1].klass = (Il2CppClass *)group;
    il2cpp_runtime_glue(pIVar1,group);
    ppvVar7 = &__this[1].monitor;
    __this[1].monitor = id;
    il2cpp_runtime_glue(ppvVar7,id);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    pSVar5 = System_String__Concat(__this[1].monitor,"-header",(MethodInfo *)0x0);
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row","FlexStart","Center",(System_String_o *)0x0,
                        (System_String_o *)0x0,7.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
    if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar6 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         (content,"default",build,pSVar5,layout,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0
                         );
      if ((pIVar1->klass != (Il2CppClass *)0x0) &&
         (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
        (pGVar6->fields).choiceOptionRenderer = (System_String_o *)(pIVar1->klass->_1).namespaze;
        il2cpp_runtime_glue();
        if ((pIVar1->klass != (Il2CppClass *)0x0) &&
           (plVar2 = (pIVar1->klass->_1).byval_arg.data, plVar2 != (long *)0x0)) {
          lVar3 = *plVar2;
          if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
            lVar8 = 0;
            do {
              if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar8) == TypeInfo_IReadOnlyCollection_AottgCreditContributor) {
                method_00 = (MethodInfo *)
                            ((long)*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar8) * 0x10 + lVar3 +
                            0x138);
                goto LAB_0416f481;
              }
              lVar8 = lVar8 + 0x10;
            } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar8);
          }
          method_00 = (MethodInfo *)il2cpp_runtime_glue(plVar2,TypeInfo_IReadOnlyCollection_AottgCreditContributor,0);
LAB_0416f481:
          iVar4 = (*method_00->methodPointer)(plVar2,method_00->virtualMethodPointer);
          if (iVar4 < 1) {
            pSVar5 = System_String__Concat(*ppvVar7,"-empty",(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
                      (content,pSVar5,"No contributors listed.",(MethodInfo *)&"No contributors listed.");
            return;
          }
          if (pIVar1->klass != (Il2CppClass *)0x0) {
            contributors = (pIVar1->klass->_1).byval_arg.data;
            pSVar5 = System_String__Concat(*ppvVar7,"-contributors",(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors
                      (content,contributors,pSVar5,method_00);
            return;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$BuildContributors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors (Gisketch_Aottg2UI_Code_AottgUi_o* content, System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o* contributors, System_String_o* id, const MethodInfo* method);
// 0x416eee0

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *contributors,
               System_String_o *id,MethodInfo *method)

{
  System_String_o *id_00;
  Il2CppObject *__this;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (DAT_05704ac0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildContributors_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass6_0);
    il2cpp_init_method_metadata(&"Row");
    il2cpp_init_method_metadata(&"Wrap");
    il2cpp_init_method_metadata(&"default");
    il2cpp_init_method_metadata(&"FlexStart");
    DAT_05704ac0 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass6_0);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = (Il2CppClass *)contributors;
    il2cpp_runtime_glue(__this + 1,contributors);
    __this[1].monitor = id;
    il2cpp_runtime_glue(&__this[1].monitor,id);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    id_00 = __this[1].monitor;
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Row",(System_String_o *)0x0,"FlexStart",(System_String_o *)0x0,
                        "Wrap",10.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
    if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (content,"default",build,id_00,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$BuildContributor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributor (Gisketch_Aottg2UI_Code_AottgUi_o* grid, ApplicationManagers_Credits_AottgCreditContributor_o* contributor, System_String_o* id, const MethodInfo* method);
// 0x416f6d0

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributor
               (Gisketch_Aottg2UI_Code_AottgUi_o *grid,
               ApplicationManagers_Credits_AottgCreditContributor_o *contributor,System_String_o *id
               ,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (DAT_05704ac1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&"creditsContributorCell");
    il2cpp_init_method_metadata(&"Panel");
    DAT_05704ac1 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "Panel";
    il2cpp_runtime_glue(&__this->fields);
    (__this->fields).id = id;
    il2cpp_runtime_glue(&(__this->fields).id,id);
    (__this->fields).style = "creditsContributorCell";
    il2cpp_runtime_glue();
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Search
                       ((System_String_o *)0x0,(System_String_o *)0x0,1,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,0,
                        (MethodInfo *)0x0);
    method_01 = (MethodInfo *)&(__this->fields).popover;
    (__this->fields).popover = (System_String_o *)pGVar1;
    il2cpp_runtime_glue(method_01,pGVar1);
    pGVar2 = Gisketch_Aottg2UI_Game_AottgCreditsRenderer__ContributorCellLayout(method_01);
    (__this->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar2;
    il2cpp_runtime_glue(&(__this->fields).search,pGVar2);
    pGVar3 = Gisketch_Aottg2UI_Game_AottgCreditsRenderer__ContributorChildren
                       (contributor,id,method_00);
    (__this->fields).deferredChildren = pGVar3;
    il2cpp_runtime_glue(&(__this->fields).deferredChildren,pGVar3);
    if (grid != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(grid,__this,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$ContributorChildren
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_Game_AottgCreditsRenderer__ContributorChildren (ApplicationManagers_Credits_AottgCreditContributor_o* contributor, System_String_o* id, const MethodInfo* method);
// 0x416f920

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *
Gisketch_Aottg2UI_Game_AottgCreditsRenderer__ContributorChildren
          (ApplicationManagers_Credits_AottgCreditContributor_o *contributor,System_String_o *id,
          MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar3;
  Gisketch_Aottg2UI_Data_GisketchLength_o *pGVar4;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar6;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *id_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o **ppGVar7;
  
  if (DAT_05704ac2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgPublicProfileHover);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchNodeDefinition);
    il2cpp_init_method_metadata(&"icon");
    il2cpp_init_method_metadata(&"singleplayer");
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"-hover");
    il2cpp_init_method_metadata(&"-account-icon");
    il2cpp_init_method_metadata(&"-name");
    il2cpp_init_method_metadata(&"Icon");
    il2cpp_init_method_metadata(&"text");
    il2cpp_init_method_metadata(&"AottgHoverMarqueeText");
    DAT_05704ac2 = '\x01';
  }
  __this = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "AottgHoverMarqueeText";
    il2cpp_runtime_glue(&__this->fields);
    pSVar2 = System_String__Concat(id,"-name",(MethodInfo *)0x0);
    (__this->fields).id = pSVar2;
    il2cpp_runtime_glue(&(__this->fields).id,pSVar2);
    if (contributor != (ApplicationManagers_Credits_AottgCreditContributor_o *)0x0) {
      (__this->fields).text = (contributor->fields)._Name_k__BackingField;
      il2cpp_runtime_glue(&(__this->fields).text);
      (__this->fields).style = "text";
      il2cpp_runtime_glue(&(__this->fields).style);
      (__this->fields).value = "text";
      il2cpp_runtime_glue();
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
      minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
      pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                          (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,pGVar4,minWidth,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                          ,0.0,0.0,1.0,1.0,(MethodInfo *)0x0);
      (__this->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
      il2cpp_runtime_glue(&(__this->fields).search);
      bVar1 = ApplicationManagers_Credits_AottgCreditContributor__get_IsLinked
                        (contributor,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_glue_02274930(TypeInfo_GisketchNodeDefinition,1)
        ;
        if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
          if ((int)pGVar6->max_length != 0) {
            ppGVar7 = pGVar6->m_Items;
            pGVar6->m_Items[0] = __this;
LAB_0416fd70:
            il2cpp_runtime_glue(ppGVar7,__this);
            return pGVar6;
          }
LAB_0416fd8c:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
      else {
        pGVar6 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)il2cpp_glue_02274930(TypeInfo_GisketchNodeDefinition);
        __this_00 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)
                    il2cpp_runtime_glue(TypeInfo_GisketchNodeDefinition);
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
        if (__this_00 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (__this_00->fields).type = "Icon";
          il2cpp_runtime_glue(&__this_00->fields);
          pSVar2 = System_String__Concat(id,"-account-icon",(MethodInfo *)0x0);
          (__this_00->fields).id = pSVar2;
          il2cpp_runtime_glue(&(__this_00->fields).id,pSVar2);
          (__this_00->fields).icon = "singleplayer";
          il2cpp_runtime_glue(&(__this_00->fields).icon);
          (__this_00->fields).style = "icon";
          il2cpp_runtime_glue();
          pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
          pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Points(20.0,(MethodInfo *)0x0);
          pGVar5 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                             ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                              (System_String_o *)0x0,(System_String_o *)0x0,0.0,pGVar3,pGVar4,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                              (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0
                              ,0.0,0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
          (__this_00->fields).search = (Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *)pGVar5;
          il2cpp_runtime_glue(&(__this_00->fields).search,pGVar5);
          if (pGVar6 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
            if ((int)pGVar6->max_length != 0) {
              pGVar6->m_Items[0] = __this_00;
              il2cpp_runtime_glue(pGVar6->m_Items,__this_00);
              if (1 < (uint)pGVar6->max_length) {
                pGVar6->m_Items[1] = __this;
                il2cpp_runtime_glue(pGVar6->m_Items + 1,__this);
                id_00 = System_String__Concat(id,"-hover",(MethodInfo *)0x0);
                pSVar2 = (contributor->fields)._AccountId_k__BackingField;
                if (*(int *)(TypeInfo_AottgPublicProfileHover + 0xe4) == 0) {
                  il2cpp_init_class();
                }
                __this = Gisketch_Aottg2UI_Game_AottgPublicProfileHover__Node
                                   (id_00,pSVar2,(MethodInfo *)0x0);
                if (2 < (uint)pGVar6->max_length) {
                  ppGVar7 = pGVar6->m_Items + 2;
                  pGVar6->m_Items[2] = __this;
                  goto LAB_0416fd70;
                }
              }
            }
            goto LAB_0416fd8c;
          }
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$ContributorCellLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgCreditsRenderer__ContributorCellLayout (const MethodInfo* method);
// 0x416f820

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgCreditsRenderer__ContributorCellLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (DAT_05704ac3 == '\0') {
    il2cpp_init_method_metadata(&"Center");
    il2cpp_init_method_metadata();
    DAT_05704ac3 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(32.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(36.0,(MethodInfo *)0x0);
  minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"Center",(System_String_o *)0x0,
                      (System_String_o *)0x0,8.0,width,height,minWidth,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,10.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$BuildEmpty
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty (Gisketch_Aottg2UI_Code_AottgUi_o* content, System_String_o* id, System_String_o* text, const MethodInfo* method);
// 0x416f510

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,System_String_o *id,System_String_o *text,
               MethodInfo *method)

{
  System_String_o *id_00;
  Il2CppObject *__this;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (DAT_05704ac4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildEmpty_b__0);
    il2cpp_init_method_metadata(&TypeInfo_c__DisplayClass10_0);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"default");
    DAT_05704ac4 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c__DisplayClass10_0);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Il2CppObject *)0x0) {
    __this[1].klass = (Il2CppClass *)text;
    il2cpp_runtime_glue(__this + 1,text);
    __this[1].monitor = id;
    il2cpp_runtime_glue(&__this[1].monitor,id);
    build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
    System_Action<object>___ctor();
    id_00 = __this[1].monitor;
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
    if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Panel
                (content,"default",build,id_00,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$BuildGap
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGap (Gisketch_Aottg2UI_Code_AottgUi_o* content, System_String_o* id, const MethodInfo* method);
// 0x416f0b0

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGap
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (DAT_05704ac5 == '\0') {
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata();
    DAT_05704ac5 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(8.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,0.0,(MethodInfo *)0x0);
  if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (content,"default",(System_Action_AottgUi__o *)0x0,id,layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$SectionId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCreditsRenderer__SectionId (System_String_o* name, int32_t index, const MethodInfo* method);
// 0x416fdb0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCreditsRenderer__SectionId
          (System_String_o *name,int32_t index,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  System_String_o *str1;
  undefined4 in_register_00000034;
  MethodInfo *method_00;
  undefined1 local_14 [4];
  
  method_00 = (MethodInfo *)CONCAT44(in_register_00000034,index);
  if (DAT_05704ac6 == '\0') {
    il2cpp_init_method_metadata(&"-");
    il2cpp_init_method_metadata(&"category-");
    il2cpp_init_method_metadata(&"00");
    DAT_05704ac6 = '\x01';
  }
  pSVar2 = Gisketch_Aottg2UI_Game_AottgCreditsRenderer__SafeId(name,method_00);
  bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
  str1 = System_Int32__ToString((int32_t)local_14,"00",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    pSVar2 = System_String__Concat("category-",str1,(MethodInfo *)0x0);
    return pSVar2;
  }
  pSVar2 = System_String__Concat("category-",str1,"-",pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$SafeId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCreditsRenderer__SafeId (System_String_o* value, const MethodInfo* method);
// 0x416fe60

System_String_o *
Gisketch_Aottg2UI_Game_AottgCreditsRenderer__SafeId(System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  uint16_t uVar2;
  bool_conflict bVar3;
  int32_t iVar4;
  System_Text_StringBuilder_o *__this;
  System_String_o *pSVar5;
  int index;
  
  if (DAT_05704ac7 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_StringBuilder);
    DAT_05704ac7 = '\x01';
  }
  bVar3 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  if (value != (System_String_o *)0x0) {
    iVar4 = (value->fields)._stringLength;
    __this = (System_Text_StringBuilder_o *)il2cpp_runtime_glue(TypeInfo_StringBuilder);
    System_Text_StringBuilder___ctor(__this,iVar4,(MethodInfo *)0x0);
    if (0 < (value->fields)._stringLength) {
      if (__this == (System_Text_StringBuilder_o *)0x0) {
        uVar2 = System_String__get_Chars(value,0,(MethodInfo *)0x0);
        if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
          il2cpp_init_class();
        }
        uVar2 = System_Char__ToLowerInvariant(uVar2,(MethodInfo *)0x0);
        System_Char__IsLetterOrDigit(uVar2,(MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      bVar1 = false;
      index = 0;
LAB_0416ff28:
      do {
        uVar2 = System_String__get_Chars(value,index,(MethodInfo *)0x0);
        if (*(int *)(DAT_057110a8 + 0xe4) == 0) {
          il2cpp_init_class();
        }
        uVar2 = System_Char__ToLowerInvariant(uVar2,(MethodInfo *)0x0);
        bVar3 = System_Char__IsLetterOrDigit(uVar2,(MethodInfo *)0x0);
        if ((char)bVar3 == '\0') {
          if (!bVar1) {
            iVar4 = System_Text_StringBuilder__get_Length(__this,(MethodInfo *)0x0);
            if (0 < iVar4) {
              System_Text_StringBuilder__Append(__this,0x2d,(MethodInfo *)0x0);
              bVar1 = true;
              index = index + 1;
              if ((value->fields)._stringLength <= index) break;
              goto LAB_0416ff28;
            }
          }
        }
        else {
          bVar1 = false;
          System_Text_StringBuilder__Append(__this,uVar2,(MethodInfo *)0x0);
        }
        index = index + 1;
      } while (index < (value->fields)._stringLength);
      if (bVar1) {
        iVar4 = System_Text_StringBuilder__get_Length(__this,(MethodInfo *)0x0);
        if (0 < iVar4) {
          iVar4 = System_Text_StringBuilder__get_Length(__this,(MethodInfo *)0x0);
          System_Text_StringBuilder__set_Length(__this,iVar4 + -1,(MethodInfo *)0x0);
        }
        goto LAB_0416ffca;
      }
    }
    if (__this != (System_Text_StringBuilder_o *)0x0) {
LAB_0416ffca:
      pSVar5 = (System_String_o *)
               (*(__this->klass->vtable)._3_ToString.methodPtr)
                         (__this,(__this->klass->vtable)._3_ToString.method);
      return pSVar5;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


