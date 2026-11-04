// Type: Gisketch.Aottg2UI.Game.AottgCreditsRenderer
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgCreditsRenderer.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgCreditsRenderer.<>c__DisplayClass10_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0___ctor (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0___ctor(Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer.<>c__DisplayClass10_0$$<BuildEmpty>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0___BuildEmpty_b__0 (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* empty, const MethodInfo* method);
// 0x1823bbae0

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0___BuildEmpty_b__0
               (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *empty,MethodInfo *method)

{
  System_String_o *key;
  System_String_o *fallback;
  System_String_o *id;
  
  if (Il2CppMethodInitialized_184347cf8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"stateMetaText");
    il2cpp_codegen_initialize_runtime_metadata(&"-text");
    Il2CppMethodInitialized_184347cf8 = '\x01';
  }
  key = (__this->fields).textKey;
  fallback = (__this->fields).text;
  id = System_String__Concat_1969e50((__this->fields).id,"-text",(MethodInfo *)0x0);
  if (empty != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (empty,key,fallback,"stateMetaText",id,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer.<>c__DisplayClass5_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0___ctor (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0___ctor(Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer.<>c__DisplayClass5_0$$<BuildGroup>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0___BuildGroup_b__0 (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* header, const MethodInfo* method);
// 0x1823bd440

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
  
  if (Il2CppMethodInitialized_184347cf9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-title");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-info");
    il2cpp_codegen_initialize_runtime_metadata(&"creditsInfoIcon");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/info-circle");
    il2cpp_codegen_initialize_runtime_metadata(&"creditsSubcategoryHeader");
    Il2CppMethodInitialized_184347cf9 = '\x01';
  }
  pAVar1 = (__this->fields).group;
  if (pAVar1 != (ApplicationManagers_Credits_AottgCreditGroup_o *)0x0) {
    pSVar6 = (pAVar1->fields)._Title_k__BackingField;
    id = System_String__Concat_1969e50((__this->fields).id,"-title",(MethodInfo *)0x0);
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
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).layout,pGVar5);
        pAVar1 = (__this->fields).group;
        if (pAVar1 != (ApplicationManagers_Credits_AottgCreditGroup_o *)0x0) {
          bVar2 = System_String__IsNullOrEmpty
                            ((pAVar1->fields)._Description_k__BackingField,(MethodInfo *)0x0);
          if (!bVar2) {
            pSVar6 = System_String__Concat_1969e50
                               ((__this->fields).id,"-info",(MethodInfo *)0x0);
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
                                (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                                ,0.0,0.0,0.0,(MethodInfo *)0x0);
            if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1823bd748;
            (pGVar3->fields).layout = pGVar5;
            Il2CppCodeGenWriteBarrier(&(pGVar3->fields).layout,pGVar5);
          }
          return;
        }
      }
    }
  }
label_1823bd748:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer.<>c__DisplayClass6_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass6_0___ctor (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass6_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass6_0___ctor(Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass6_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer.<>c__DisplayClass6_0$$<BuildContributors>b__0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass6_0___BuildContributors_b__0 (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass6_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* grid, const MethodInfo* method);
// 0x1823bd970
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823bd9ca: nop word ptr [rax + rax]
// asm:   0x1823bdaed: jmp 0x1823bd9d0

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass6_0___BuildContributors_b__0
               (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass6_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *grid,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  int32_t iVar5;
  int iVar6;
  VirtualInvokeData *pVVar7;
  ApplicationManagers_Credits_AottgCreditContributor_o *contributor;
  System_String_o *str2;
  System_String_o *pSVar8;
  ushort uVar9;
  int iVar10;
  int32_t local_res8 [8];
  
  if (Il2CppMethodInitialized_184347cfa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditContributor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_AottgCreditContributor);
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    Il2CppMethodInitialized_184347cfa = '\x01';
  }
  pIVar2 = (Il2CppObject *)(__this->fields).contributors;
  local_res8[0] = 0;
  iVar10 = local_res8[0];
  while (local_res8[0] = iVar10, pIVar2 != (Il2CppObject *)0x0) {
    pIVar3 = pIVar2->klass;
    uVar1 = (pIVar3->_2).interface_offsets_count;
    if (uVar1 != 0) {
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      uVar9 = 0;
      do {
        if (pIVar4[uVar9].interfaceType ==
            (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditContributor) {
          pVVar7 = pIVar3->vtable + pIVar4[uVar9].offset;
          goto label_1823bda26;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar1);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar2,(Il2CppClass *)
                               TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditContributor,
                        0);
label_1823bda26:
    iVar6 = (*pVVar7->methodPtr)(pIVar2,pVVar7->method);
    iVar5 = local_res8[0];
    if (iVar6 <= iVar10) {
      return;
    }
    pIVar2 = (Il2CppObject *)(__this->fields).contributors;
    if (pIVar2 == (Il2CppObject *)0x0) break;
    pIVar3 = pIVar2->klass;
    uVar9 = 0;
    uVar1 = (pIVar3->_2).interface_offsets_count;
    if (uVar1 != 0) {
      pIVar4 = (pIVar3->_1).interfaceOffsets;
      do {
        if (pIVar4[uVar9].interfaceType ==
            (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyList_AottgCreditContributor) {
          pVVar7 = pIVar3->vtable + pIVar4[uVar9].offset;
          goto label_1823bda96;
        }
        uVar9 = uVar9 + 1;
      } while (uVar9 < uVar1);
    }
    pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                       (pIVar2,(Il2CppClass *)
                               TypeInfo_System_Collections_Generic_IReadOnlyList_AottgCreditContributor,0);
label_1823bda96:
    contributor = (ApplicationManagers_Credits_AottgCreditContributor_o *)
                  (*pVVar7->methodPtr)(pIVar2,iVar5,pVVar7->method);
    pSVar8 = (__this->fields).id;
    str2 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
    pSVar8 = System_String__Concat_1969b70(pSVar8,"-",str2,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributor(grid,contributor,pSVar8,(MethodInfo *)0x0);
    iVar10 = local_res8[0] + 1;
    pIVar2 = (Il2CppObject *)(__this->fields).contributors;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$BuildCategory
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildCategory (Gisketch_Aottg2UI_Code_AottgUi_o* content, ApplicationManagers_Credits_AottgCreditCategory_o* category, int32_t categoryIndex, Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o context, const MethodInfo* method);
// 0x1823a8800
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823a8b7f: nop 
// asm:   0x1823a8baf: nop 
// asm:   0x1823a8d4e: nop 

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildCategory
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               ApplicationManagers_Credits_AottgCreditCategory_o *category,int32_t categoryIndex,
               Gisketch_Aottg2UI_Game_AottgScreenSectionContext_o *context,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *contributors;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  uint uVar5;
  bool bVar6;
  int32_t iVar7;
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader_o *component;
  System_String_o *pSVar9;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar10;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  void *pvVar11;
  void *pvVar12;
  VirtualInvokeData *pVVar13;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  ApplicationManagers_Credits_AottgCreditGroup_o *group;
  ushort uVar14;
  ulonglong uVar16;
  ulonglong uVar17;
  uint local_res8 [2];
  ulonglong uVar15;
  
  if (Il2CppMethodInitialized_184347cee == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&"No credits listed.");
    il2cpp_codegen_initialize_runtime_metadata(&"Credits.Refreshing");
    il2cpp_codegen_initialize_runtime_metadata(&"-empty");
    il2cpp_codegen_initialize_runtime_metadata(&"-description");
    il2cpp_codegen_initialize_runtime_metadata(&"credits-refreshing-text");
    il2cpp_codegen_initialize_runtime_metadata(&"Refreshing credits...");
    il2cpp_codegen_initialize_runtime_metadata(&"Credits.NoneListed");
    il2cpp_codegen_initialize_runtime_metadata(&"-core-header");
    il2cpp_codegen_initialize_runtime_metadata(&"credits.refreshing");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"-gap");
    il2cpp_codegen_initialize_runtime_metadata(&"-group-");
    Il2CppMethodInitialized_184347cee = '\x01';
  }
  uVar17 = 0;
  local_res8[0] = 0;
  pSVar8 = System_String__Concat_1969e50
                     ((context->fields)._SectionId_k__BackingField,"-core-header",(MethodInfo *)0x0);
  if (category != (ApplicationManagers_Credits_AottgCreditCategory_o *)0x0) {
    pSVar9 = (category->fields)._Name_k__BackingField;
    component = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader);
    if (Il2CppMethodInitialized_184347ceb == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"credits-category-header");
      Il2CppMethodInitialized_184347ceb = '\x01';
    }
    Gisketch_Aottg2UI_Code_AottgComponent___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)component,(MethodInfo *)0x0);
    bVar6 = System_String__IsNullOrEmpty(pSVar8,(MethodInfo *)0x0);
    if (bVar6) {
      pSVar8 = "credits-category-header";
    }
    if (component != (Gisketch_Aottg2UI_Game_AottgCreditsBrushHeader_o *)0x0) {
      (component->fields)._id = pSVar8;
      Il2CppCodeGenWriteBarrier(&(component->fields)._id,pSVar8);
      if (pSVar9 == (System_String_o *)0x0) {
        pSVar9 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      }
      (component->fields)._text = pSVar9;
      Il2CppCodeGenWriteBarrier(&(component->fields)._text,pSVar9);
      if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Component
                  (content,(Gisketch_Aottg2UI_Code_AottgComponent_o *)component,(MethodInfo *)0x0);
        bVar6 = System_String__IsNullOrEmpty
                          ((category->fields)._Description_k__BackingField,(MethodInfo *)0x0);
        if (!bVar6) {
          pSVar8 = (category->fields)._Description_k__BackingField;
          pSVar9 = System_String__Concat_1969e50
                             ((context->fields)._SectionId_k__BackingField,"-description",
                              (MethodInfo *)0x0);
          Gisketch_Aottg2UI_Code_AottgUi__Text
                    (content,pSVar8,"text",pSVar9,(System_String_o *)0x0,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        }
        if (categoryIndex == 0) {
          pGVar10 = Gisketch_Aottg2UI_Code_AottgUi__TextKey
                              (content,"Credits.Refreshing","Refreshing credits...","stateMetaText",
                               "credits-refreshing-text",(System_String_o *)0x0,
                               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          __this = il2cpp_codegen_object_new
                             ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
          Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
                    ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
          if (__this == (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) goto label_1823a8e85;
          (__this->fields).visible = "credits.refreshing";
          Il2CppCodeGenWriteBarrier(&(__this->fields).visible,"credits.refreshing");
          if (pGVar10 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) goto label_1823a8e85;
          (pGVar10->fields).bind = __this;
          Il2CppCodeGenWriteBarrier(&(pGVar10->fields).bind,__this);
        }
        pIVar2 = (Il2CppObject *)(category->fields)._Contributors_k__BackingField;
        if (pIVar2 != (Il2CppObject *)0x0) {
          pvVar11 = InterfaceInvoker0_Invoke
                              (0,(Il2CppClass *)
                                 TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditContributor
                               ,pIVar2);
          pIVar2 = (Il2CppObject *)(category->fields)._Groups_k__BackingField;
          if (pIVar2 != (Il2CppObject *)0x0) {
            pvVar12 = InterfaceInvoker0_Invoke
                                (0,(Il2CppClass *)
                                   TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditGroup,
                                 pIVar2);
            if (0 < (int)pvVar11) {
              contributors = (category->fields)._Contributors_k__BackingField;
              pSVar8 = System_String__Concat_1969e50
                                 ((context->fields)._SectionId_k__BackingField,"-contributors",
                                  (MethodInfo *)0x0);
              Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors
                        (content,contributors,pSVar8,(MethodInfo *)0x0);
            }
            local_res8[0] = 0;
            uVar16 = uVar17;
            while (pIVar2 = (Il2CppObject *)(category->fields)._Groups_k__BackingField,
                  pIVar2 != (Il2CppObject *)0x0) {
              pIVar3 = pIVar2->klass;
              uVar1 = (pIVar3->_2).interface_offsets_count;
              if (uVar1 != 0) {
                pIVar4 = (pIVar3->_1).interfaceOffsets;
                uVar15 = uVar17;
                do {
                  if (pIVar4[uVar15].interfaceType ==
                      (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditGroup)
                  {
                    pVVar13 = pIVar3->vtable + pIVar4[uVar15].offset;
                    goto label_1823a8bd6;
                  }
                  uVar14 = (short)uVar15 + 1;
                  uVar15 = (ulonglong)uVar14;
                } while (uVar14 < uVar1);
              }
              pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                                  (pIVar2,(Il2CppClass *)
                                          TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditGroup
                                   ,0);
label_1823a8bd6:
              iVar7 = (*pVVar13->methodPtr)(pIVar2,pVVar13->method);
              if (iVar7 <= (int)uVar16) {
                if (((int)pvVar11 < 1) && ((int)pvVar12 < 1)) {
                  pSVar8 = System_String__Concat_1969e50
                                     ((context->fields)._SectionId_k__BackingField,"-empty",
                                      (MethodInfo *)0x0);
                  Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
                            (content,pSVar8,"Credits.NoneListed","No credits listed.",(MethodInfo *)0x0);
                }
                return;
              }
              pSVar8 = System_Int32__ToString((int32_t *)local_res8,(MethodInfo *)0x0);
              pSVar8 = System_String__Concat_1969590
                                 ((context->fields)._SectionId_k__BackingField,"-group-",pSVar8,
                                  "-gap",(MethodInfo *)0x0);
              if (Il2CppMethodInitialized_184347cf5 == '\0') {
                il2cpp_codegen_initialize_runtime_metadata(&"Column");
                il2cpp_codegen_initialize_runtime_metadata(&"default");
                Il2CppMethodInitialized_184347cf5 = '\x01';
              }
              width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
              height = Gisketch_Aottg2UI_Code_AottgUi__Points(8.0,(MethodInfo *)0x0);
              layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                                 ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                                  (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                                  (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                                  0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
              Gisketch_Aottg2UI_Code_AottgUi__Panel
                        (content,"default",(System_Action_AottgUi__o *)0x0,pSVar8,layout,
                         (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
              uVar5 = local_res8[0];
              pIVar2 = (Il2CppObject *)(category->fields)._Groups_k__BackingField;
              if (pIVar2 == (Il2CppObject *)0x0) break;
              pIVar3 = pIVar2->klass;
              uVar1 = (pIVar3->_2).interface_offsets_count;
              if (uVar1 != 0) {
                pIVar4 = (pIVar3->_1).interfaceOffsets;
                uVar16 = uVar17;
                do {
                  if (pIVar4[uVar16].interfaceType ==
                      (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyList_AottgCreditGroup) {
                    pVVar13 = pIVar3->vtable + pIVar4[uVar16].offset;
                    goto label_1823a8d76;
                  }
                  uVar14 = (short)uVar16 + 1;
                  uVar16 = (ulonglong)uVar14;
                } while (uVar14 < uVar1);
              }
              pVVar13 = GetInterfaceInvokeDataFromVTableSlowPath
                                  (pIVar2,(Il2CppClass *)
                                          TypeInfo_System_Collections_Generic_IReadOnlyList_AottgCreditGroup,0
                                  );
label_1823a8d76:
              group = (ApplicationManagers_Credits_AottgCreditGroup_o *)
                      (*pVVar13->methodPtr)(pIVar2,uVar5,pVVar13->method);
              pSVar8 = System_Int32__ToString((int32_t *)local_res8,(MethodInfo *)0x0);
              pSVar8 = System_String__Concat_1969b70
                                 ((context->fields)._SectionId_k__BackingField,"-group-",pSVar8,
                                  (MethodInfo *)0x0);
              Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGroup(content,group,pSVar8,(MethodInfo *)0x0);
              local_res8[0] = local_res8[0] + 1;
              uVar16 = (ulonglong)local_res8[0];
            }
          }
        }
      }
    }
  }
label_1823a8e85:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$BuildGroup
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGroup (Gisketch_Aottg2UI_Code_AottgUi_o* content, ApplicationManagers_Credits_AottgCreditGroup_o* group, System_String_o* id, const MethodInfo* method);
// 0x1823a9640

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGroup
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               ApplicationManagers_Credits_AottgCreditGroup_o *group,System_String_o *id,MethodInfo *method)

{
  ApplicationManagers_Credits_AottgCreditGroup_o *pAVar1;
  Il2CppObject *obj;
  System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *contributors;
  Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  void *pvVar4;
  
  if (Il2CppMethodInitialized_184347cef == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&"No contributors listed.");
    il2cpp_codegen_initialize_runtime_metadata(&"-header");
    Il2CppMethodInitialized_184347cef = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsRenderer_c__DisplayClass5_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass5_0_o *)0x0) {
    (object->fields).group = group;
    Il2CppCodeGenWriteBarrier(&(object->fields).group,group);
    (object->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(object->fields).id,id);
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsRenderer_c__DisplayClass5_0_BuildGroup_b__0,
               (MethodInfo *)0x0);
    pSVar2 = System_String__Concat_1969e50((object->fields).id,"-header",(MethodInfo *)0x0);
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
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         (content,"default",(System_Action_AottgUi__o *)__this,pSVar2,layout,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      pAVar1 = (object->fields).group;
      if ((pAVar1 != (ApplicationManagers_Credits_AottgCreditGroup_o *)0x0) &&
         (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) {
        pSVar2 = (pAVar1->fields)._Description_k__BackingField;
        (pGVar3->fields).tooltip = pSVar2;
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).tooltip,pSVar2);
        pAVar1 = (object->fields).group;
        if ((pAVar1 != (ApplicationManagers_Credits_AottgCreditGroup_o *)0x0) &&
           (obj = (Il2CppObject *)(pAVar1->fields)._Contributors_k__BackingField, obj != (Il2CppObject *)0x0))
        {
          pvVar4 = InterfaceInvoker0_Invoke
                             (0,(Il2CppClass *)
                                TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgCreditContributor
                              ,obj);
          if ((int)pvVar4 < 1) {
            pSVar2 = System_String__Concat_1969e50
                               ((object->fields).id,"-empty",(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
                      (content,pSVar2,"Credits.NoContributors","No contributors listed.",(MethodInfo *)0x0);
          }
          else {
            pAVar1 = (object->fields).group;
            if (pAVar1 == (ApplicationManagers_Credits_AottgCreditGroup_o *)0x0) goto label_1823a9949;
            contributors = (pAVar1->fields)._Contributors_k__BackingField;
            pSVar2 = System_String__Concat_1969e50
                               ((object->fields).id,"-contributors",(MethodInfo *)0x0);
            Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors
                      (content,contributors,pSVar2,(MethodInfo *)0x0);
          }
          return;
        }
      }
    }
  }
label_1823a9949:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$BuildContributors
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors (Gisketch_Aottg2UI_Code_AottgUi_o* content, System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o* contributors, System_String_o* id, const MethodInfo* method);
// 0x1823a9140

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributors
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,
               System_Collections_Generic_IReadOnlyList_AottgCreditContributor__o *contributors,
               System_String_o *id,MethodInfo *method)

{
  System_String_o *id_00;
  Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass6_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347cf0 == '\0') {
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
    Il2CppMethodInitialized_184347cf0 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsRenderer_c__DisplayClass6_0);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass6_0_o *)0x0) {
    (object->fields).contributors = contributors;
    Il2CppCodeGenWriteBarrier(&(object->fields).contributors,contributors);
    (object->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(object->fields).id,id);
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsRenderer_c__DisplayClass6_0_BuildContributors_b__0
               ,(MethodInfo *)0x0);
    id_00 = (object->fields).id;
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
                (content,"default",(System_Action_AottgUi__o *)__this,id_00,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$BuildContributor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributor (Gisketch_Aottg2UI_Code_AottgUi_o* grid, ApplicationManagers_Credits_AottgCreditContributor_o* contributor, System_String_o* id, const MethodInfo* method);
// 0x1823a8e90

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildContributor
               (Gisketch_Aottg2UI_Code_AottgUi_o *grid,
               ApplicationManagers_Credits_AottgCreditContributor_o *contributor,System_String_o *id,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *value;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *value_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *value_01;
  
  if (Il2CppMethodInitialized_184347cf1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"creditsContributorCell");
    il2cpp_codegen_initialize_runtime_metadata(&"Panel");
    Il2CppMethodInitialized_184347cf1 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (__this->fields).type = "Panel";
    Il2CppCodeGenWriteBarrier(&(__this->fields).type,"Panel");
    (__this->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(__this->fields).id,id);
    (__this->fields).style = "creditsContributorCell";
    Il2CppCodeGenWriteBarrier(&(__this->fields).style,"creditsContributorCell");
    value = Gisketch_Aottg2UI_Code_AottgUi__Search
                      ((System_String_o *)0x0,(System_String_o *)0x0,true,(System_String_o *)0x0,
                       (System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,false,
                       (MethodInfo *)0x0);
    (__this->fields).search = value;
    Il2CppCodeGenWriteBarrier(&(__this->fields).search,value);
    if (Il2CppMethodInitialized_184347cf3 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&"Center");
      il2cpp_codegen_initialize_runtime_metadata(&"Row");
      Il2CppMethodInitialized_184347cf3 = '\x01';
    }
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(32.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(36.0,(MethodInfo *)0x0);
    minWidth = Gisketch_Aottg2UI_Code_AottgUi__Points(0.0,(MethodInfo *)0x0);
    value_00 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                         ("Row",(System_String_o *)0x0,"Center",
                          (System_String_o *)0x0,(System_String_o *)0x0,8.0,width,height,minWidth,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                          (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,10.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                          0.0,0.0,(MethodInfo *)0x0);
    (__this->fields).layout = value_00;
    Il2CppCodeGenWriteBarrier(&(__this->fields).layout,value_00);
    value_01 = Gisketch_Aottg2UI_Game_AottgCreditsRenderer__ContributorChildren
                         (contributor,id,(MethodInfo *)0x0);
    (__this->fields).children = value_01;
    Il2CppCodeGenWriteBarrier(&(__this->fields).children,value_01);
    if (grid != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Add(grid,__this,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$ContributorChildren
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array* Gisketch_Aottg2UI_Game_AottgCreditsRenderer__ContributorChildren (ApplicationManagers_Credits_AottgCreditContributor_o* contributor, System_String_o* id, const MethodInfo* method);
// 0x1823a9a90
// asm: 6 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823a9f79: lea rcx, [rax + 0x20]
// asm:   0x1823a9f7d: mov qword ptr [rax + 0x20], rsi
// asm:   0x1823a9f81: mov rdx, rsi
// asm:   0x1823a9f84: call 0x180416180  ; Il2CppCodeGenWriteBarrier()
// asm:   0x1823a9f89: mov rax, rbx
// asm:   0x1823a9f8c: jmp 0x1823a9f2c

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
  
  if (Il2CppMethodInitialized_184347cf2 == '\0') {
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
    Il2CppMethodInitialized_184347cf2 = '\x01';
  }
  pGVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(pGVar2,(MethodInfo *)0x0);
  if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    (pGVar2->fields).type = "AottgHoverMarqueeText";
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).type,"AottgHoverMarqueeText");
    pSVar3 = System_String__Concat_1969e50(id,"-name",(MethodInfo *)0x0);
    (pGVar2->fields).id = pSVar3;
    Il2CppCodeGenWriteBarrier(&(pGVar2->fields).id,pSVar3);
    if (contributor != (ApplicationManagers_Credits_AottgCreditContributor_o *)0x0) {
      pSVar3 = (contributor->fields)._Name_k__BackingField;
      (pGVar2->fields).text = pSVar3;
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).text,pSVar3);
      (pGVar2->fields).style = "text";
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).style,"text");
      (pGVar2->fields).value = "text";
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).value,"text");
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
      Il2CppCodeGenWriteBarrier(&(pGVar2->fields).layout,pGVar6);
      bVar1 = ApplicationManagers_Credits_AottgCreditContributor__get_IsLinked(contributor,(MethodInfo *)0x0);
      if (bVar1) {
        pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                 SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,3);
        __this = il2cpp_codegen_object_new
                           ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
        Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this,(MethodInfo *)0x0);
        if (__this != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
          (__this->fields).type = "Icon";
          Il2CppCodeGenWriteBarrier(&(__this->fields).type,"Icon");
          pSVar3 = System_String__Concat_1969e50(id,"-account-icon",(MethodInfo *)0x0);
          (__this->fields).id = pSVar3;
          Il2CppCodeGenWriteBarrier(&(__this->fields).id,pSVar3);
          (__this->fields).icon = "singleplayer";
          Il2CppCodeGenWriteBarrier(&(__this->fields).icon,"singleplayer");
          (__this->fields).style = "icon";
          Il2CppCodeGenWriteBarrier(&(__this->fields).style,"icon");
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
          Il2CppCodeGenWriteBarrier(&(__this->fields).layout,pGVar6);
          if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
            if ((int)pGVar7->max_length != 0) {
              pGVar7->m_Items[0] = __this;
              Il2CppCodeGenWriteBarrier(pGVar7->m_Items,__this);
              if (1 < (uint)pGVar7->max_length) {
                pGVar7->m_Items[1] = pGVar2;
                Il2CppCodeGenWriteBarrier(pGVar7->m_Items + 1,pGVar2);
                id_00 = System_String__Concat_1969e50(id,"-hover",(MethodInfo *)0x0);
                pSVar3 = (contributor->fields)._AccountId_k__BackingField;
                if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover->_2).cctor_finished_or_no_cctor
                    == 0) {
                  il2cpp_codegen_runtime_class_init
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgPublicProfileHover);
                }
                pGVar2 = Gisketch_Aottg2UI_Game_AottgPublicProfileHover__Node(id_00,pSVar3,(MethodInfo *)0x0);
                if (2 < (uint)pGVar7->max_length) {
                  pGVar7->m_Items[2] = pGVar2;
                  Il2CppCodeGenWriteBarrier(pGVar7->m_Items + 2,pGVar2);
                  return pGVar7;
                }
              }
            }
            goto label_1823a9f94;
          }
        }
      }
      else {
        pGVar7 = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)
                 SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array,1);
        if (pGVar7 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) {
          if ((int)pGVar7->max_length != 0) {
            pGVar7->m_Items[0] = pGVar2;
            Il2CppCodeGenWriteBarrier(pGVar7->m_Items,pGVar2);
            return pGVar7;
          }
label_1823a9f94:
          ThrowIndexOutOfRangeException();
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$ContributorCellLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgCreditsRenderer__ContributorCellLayout (const MethodInfo* method);
// 0x1823a9950

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgCreditsRenderer__ContributorCellLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLength_o *minWidth;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184347cf3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Center");
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    Il2CppMethodInitialized_184347cf3 = '\x01';
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
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty (Gisketch_Aottg2UI_Code_AottgUi_o* content, System_String_o* id, System_String_o* textKey, System_String_o* text, const MethodInfo* method);
// 0x1823a9330

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildEmpty
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,System_String_o *id,System_String_o *textKey,
               System_String_o *text,MethodInfo *method)

{
  System_String_o *id_00;
  Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0_o *object;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347cf4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsRenderer_c__DisplayClass10_0_BuildEmpty_b__0);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsRenderer_c__DisplayClass10_0);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    Il2CppMethodInitialized_184347cf4 = '\x01';
  }
  object = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgCreditsRenderer_c__DisplayClass10_0)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
  if (object != (Gisketch_Aottg2UI_Game_AottgCreditsRenderer___c__DisplayClass10_0_o *)0x0) {
    (object->fields).textKey = textKey;
    Il2CppCodeGenWriteBarrier(&(object->fields).textKey,textKey);
    (object->fields).text = text;
    Il2CppCodeGenWriteBarrier(&(object->fields).text,text);
    (object->fields).id = id;
    Il2CppCodeGenWriteBarrier(&(object->fields).id,id);
    __this = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              (__this,(Il2CppObject *)object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Game_AottgCreditsRenderer_c__DisplayClass10_0_BuildEmpty_b__0,
               (MethodInfo *)0x0);
    id_00 = (object->fields).id;
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
                (content,"default",(System_Action_AottgUi__o *)__this,id_00,layout,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$BuildGap
// il2cpp: void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGap (Gisketch_Aottg2UI_Code_AottgUi_o* content, System_String_o* id, const MethodInfo* method);
// 0x1823a9500

void Gisketch_Aottg2UI_Game_AottgCreditsRenderer__BuildGap
               (Gisketch_Aottg2UI_Code_AottgUi_o *content,System_String_o *id,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347cf5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"default");
    Il2CppMethodInitialized_184347cf5 = '\x01';
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
  if (content != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (content,"default",(System_Action_AottgUi__o *)0x0,id,layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$SectionId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCreditsRenderer__SectionId (System_String_o* name, int32_t index, const MethodInfo* method);
// 0x1823aa150

System_String_o *
Gisketch_Aottg2UI_Game_AottgCreditsRenderer__SectionId(System_String_o *name,int32_t index,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  uint16_t uVar3;
  int32_t iVar4;
  System_Runtime_Serialization_ObjectHolder_o *__this;
  System_String_o *pSVar5;
  System_String_o *str1;
  int index_00;
  int32_t local_res10 [2];
  
  local_res10[0] = index;
  if (Il2CppMethodInitialized_184347cf6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    il2cpp_codegen_initialize_runtime_metadata(&"category-");
    il2cpp_codegen_initialize_runtime_metadata(&"00");
    Il2CppMethodInitialized_184347cf6 = '\x01';
  }
  if (Il2CppMethodInitialized_184347cf7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    Il2CppMethodInitialized_184347cf7 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(name,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar5 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    goto label_1823aa306;
  }
  if (name != (System_String_o *)0x0) {
    iVar4 = (name->fields)._stringLength;
    __this = (System_Runtime_Serialization_ObjectHolder_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
    System_Text_StringBuilder___ctor_1980e60((System_Text_StringBuilder_o *)__this,iVar4,(MethodInfo *)0x0);
    bVar1 = false;
    index_00 = 0;
label_1823aa201:
    do {
      if ((name->fields)._stringLength <= index_00) goto label_1823aa2a9;
      uVar3 = System_String__get_Chars(name,index_00,(MethodInfo *)0x0);
      if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354e48);
      }
      uVar3 = System_Char__ToLowerInvariant(uVar3,(MethodInfo *)0x0);
      bVar2 = System_Char__IsLetterOrDigit(uVar3,(MethodInfo *)0x0);
      if (bVar2) {
        if (__this == (System_Runtime_Serialization_ObjectHolder_o *)0x0) break;
        System_Text_StringBuilder__Append_197e090
                  ((System_Text_StringBuilder_o *)__this,uVar3,(MethodInfo *)0x0);
        bVar1 = false;
      }
      else if (!bVar1) {
        if (__this == (System_Runtime_Serialization_ObjectHolder_o *)0x0) break;
        iVar4 = System_Text_StringBuilder__get_Length(__this,(MethodInfo *)0x0)
        ;
        if (0 < iVar4) {
          System_Text_StringBuilder__Append_197e090
                    ((System_Text_StringBuilder_o *)__this,0x2d,(MethodInfo *)0x0);
          index_00 = index_00 + 1;
          bVar1 = true;
          goto label_1823aa201;
        }
      }
      index_00 = index_00 + 1;
    } while( true );
  }
label_1823aa37d:
  ThrowNullReferenceException();
label_1823aa2a9:
  if (__this != (System_Runtime_Serialization_ObjectHolder_o *)0x0) {
    if (bVar1) {
      iVar4 = System_Text_StringBuilder__get_Length(__this,(MethodInfo *)0x0);
      if (0 < iVar4) {
        iVar4 = System_Text_StringBuilder__get_Length(__this,(MethodInfo *)0x0)
        ;
        System_Text_StringBuilder__set_Length
                  ((System_Text_StringBuilder_o *)__this,iVar4 + -1,(MethodInfo *)0x0);
      }
    }
    pSVar5 = (System_String_o *)(*(__this->klass->vtable)._3_ToString.methodPtr)(__this);
label_1823aa306:
    bVar1 = System_String__IsNullOrEmpty(pSVar5,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar5 = System_Int32__ToString_1b299a0(local_res10,"00",(MethodInfo *)0x0);
      pSVar5 = System_String__Concat_1969e50("category-",pSVar5,(MethodInfo *)0x0);
    }
    else {
      str1 = System_Int32__ToString_1b299a0(local_res10,"00",(MethodInfo *)0x0);
      pSVar5 = System_String__Concat_1969590
                         ("category-",str1,"-",pSVar5,(MethodInfo *)0x0);
    }
    return pSVar5;
  }
  goto label_1823aa37d;
}


// Gisketch.Aottg2UI.Game.AottgCreditsRenderer$$SafeId
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgCreditsRenderer__SafeId (System_String_o* value, const MethodInfo* method);
// 0x1823a9fa0

System_String_o *
Gisketch_Aottg2UI_Game_AottgCreditsRenderer__SafeId(System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  uint16_t uVar3;
  int32_t iVar4;
  System_Runtime_Serialization_ObjectHolder_o *__this;
  System_String_o *pSVar5;
  int index;
  
  if (Il2CppMethodInitialized_184347cf7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    Il2CppMethodInitialized_184347cf7 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1) {
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (value != (System_String_o *)0x0) {
    iVar4 = (value->fields)._stringLength;
    __this = (System_Runtime_Serialization_ObjectHolder_o *)
             il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
    System_Text_StringBuilder___ctor_1980e60((System_Text_StringBuilder_o *)__this,iVar4,(MethodInfo *)0x0);
    bVar1 = false;
    index = 0;
label_1823aa020:
    do {
      if ((value->fields)._stringLength <= index) goto label_1823aa0c8;
      uVar3 = System_String__get_Chars(value,index,(MethodInfo *)0x0);
      if ((g_data_184354e48->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init(g_data_184354e48);
      }
      uVar3 = System_Char__ToLowerInvariant(uVar3,(MethodInfo *)0x0);
      bVar2 = System_Char__IsLetterOrDigit(uVar3,(MethodInfo *)0x0);
      if (bVar2) {
        if (__this == (System_Runtime_Serialization_ObjectHolder_o *)0x0) break;
        System_Text_StringBuilder__Append_197e090
                  ((System_Text_StringBuilder_o *)__this,uVar3,(MethodInfo *)0x0);
        bVar1 = false;
      }
      else if (!bVar1) {
        if (__this == (System_Runtime_Serialization_ObjectHolder_o *)0x0) break;
        iVar4 = System_Text_StringBuilder__get_Length(__this,(MethodInfo *)0x0)
        ;
        if (0 < iVar4) {
          System_Text_StringBuilder__Append_197e090
                    ((System_Text_StringBuilder_o *)__this,0x2d,(MethodInfo *)0x0);
          index = index + 1;
          bVar1 = true;
          goto label_1823aa020;
        }
      }
      index = index + 1;
    } while( true );
  }
label_1823aa13c:
  ThrowNullReferenceException();
label_1823aa0c8:
  if (__this != (System_Runtime_Serialization_ObjectHolder_o *)0x0) {
    if (bVar1) {
      iVar4 = System_Text_StringBuilder__get_Length(__this,(MethodInfo *)0x0);
      if (0 < iVar4) {
        iVar4 = System_Text_StringBuilder__get_Length(__this,(MethodInfo *)0x0)
        ;
        System_Text_StringBuilder__set_Length
                  ((System_Text_StringBuilder_o *)__this,iVar4 + -1,(MethodInfo *)0x0);
      }
    }
    pSVar5 = (System_String_o *)
             (*(__this->klass->vtable)._3_ToString.methodPtr)
                       (__this,(__this->klass->vtable)._3_ToString.method);
    return pSVar5;
  }
  goto label_1823aa13c;
}


