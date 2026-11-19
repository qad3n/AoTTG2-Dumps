// Type: Gisketch.Aottg2UI.Game.AottgChangelogMarkdownRenderer
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgChangelogMarkdownRenderer.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgChangelogMarkdownRenderer$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer___ctor (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer_o* __this, System_String_o* markdown, System_String_o* id, int32_t maxLines, const MethodInfo* method);
// 0x5e78410

void Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer___ctor
               (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer_o *__this,System_String_o *markdown,
               System_String_o *id,int32_t maxLines,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075487d6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-markdown");
    Il2CppMethodInitialized_075487d6 = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._markdown = markdown;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._markdown);
  bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if (bVar1) {
    id = "changelog-markdown";
  }
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id);
  (__this->fields)._maxLines = maxLines;
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogMarkdownRenderer$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer__Build (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5e78490
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e786b9: nop dword ptr [rax]
// asm:   0x5e786cf: jmp 0x5e785d0

void Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer__Build
               (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  int iVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  int32_t iVar4;
  int32_t iVar5;
  Il2CppObject *obj;
  VirtualInvokeData *pVVar6;
  Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o *block;
  System_String_o *pSVar7;
  ulong uVar8;
  MethodInfo *method_00;
  long lVar9;
  MethodInfo *in_R9;
  int iVar10;
  
  method_00 = (MethodInfo *)ui;
  if (Il2CppMethodInitialized_075487d7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgChangelogMarkdownBlock);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_AottgChangelogMarkdownBlock);
    il2cpp_codegen_initialize_runtime_metadata(&"stateMetaText");
    il2cpp_codegen_initialize_runtime_metadata(&"-empty");
    il2cpp_codegen_initialize_runtime_metadata(&"-truncated");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.NothingToPreview");
    il2cpp_codegen_initialize_runtime_metadata(&"...");
    Il2CppMethodInitialized_075487d7 = '\x01';
  }
  pSVar7 = (__this->fields)._markdown;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown);
  }
  obj = (Il2CppObject *)Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__Parse(pSVar7,method_00);
  if (obj != (Il2CppObject *)0x0) {
    pIVar2 = obj->klass;
    uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
    if (uVar8 != 0) {
      pIVar3 = (pIVar2->_1).interfaceOffsets;
      lVar9 = 0;
      do {
        if (*(System_Collections_Generic_IReadOnlyCollection_AottgChangelogMarkdownBlock__c **)
             ((long)&pIVar3->interfaceType + lVar9) ==
            TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgChangelogMarkdownBlock) {
          pVVar6 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9);
          goto label_05e785b1;
        }
        lVar9 = lVar9 + 0x10;
      } while (uVar8 * 0x10 != lVar9);
    }
    pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                       (obj,(Il2CppClass *)
                            TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgChangelogMarkdownBlock
                        ,0);
label_05e785b1:
    iVar4 = (*pVVar6->methodPtr)(obj,pVVar6->method);
    if (iVar4 != 0) {
      iVar4 = 0;
      iVar10 = 0;
      do {
        pIVar2 = obj->klass;
        uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar8 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar9 = 0;
          do {
            if (*(System_Collections_Generic_IReadOnlyCollection_AottgChangelogMarkdownBlock__c **)
                 ((long)&pIVar3->interfaceType + lVar9) ==
                TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgChangelogMarkdownBlock) {
              pVVar6 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9);
              goto label_05e78673;
            }
            lVar9 = lVar9 + 0x10;
          } while (uVar8 * 0x10 != lVar9);
        }
        pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                           (obj,(Il2CppClass *)
                                TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgChangelogMarkdownBlock
                            ,0);
label_05e78673:
        iVar5 = (*pVVar6->methodPtr)(obj,pVVar6->method);
        if (iVar5 <= iVar4) {
          return;
        }
        iVar1 = (__this->fields)._maxLines;
        if ((0 < iVar1) && (iVar1 <= iVar10)) goto label_05e78745;
        pIVar2 = obj->klass;
        uVar8 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar8 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar9 = 0;
          do {
            if (*(System_Collections_Generic_IReadOnlyList_AottgChangelogMarkdownBlock__c **)
                 ((long)&pIVar3->interfaceType + lVar9) ==
                TypeInfo_System_Collections_Generic_IReadOnlyList_AottgChangelogMarkdownBlock) {
              pVVar6 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar9);
              goto label_05e785dd;
            }
            lVar9 = lVar9 + 0x10;
          } while (uVar8 * 0x10 != lVar9);
        }
        pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                           (obj,(Il2CppClass *)
                                TypeInfo_System_Collections_Generic_IReadOnlyList_AottgChangelogMarkdownBlock,
                            0);
label_05e785dd:
        block = (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o *)
                (*pVVar6->methodPtr)(obj,iVar4,pVVar6->method);
        iVar1 = (__this->fields)._maxLines;
        iVar5 = iVar1 - iVar10;
        if (iVar1 < 1) {
          iVar5 = 0;
        }
        iVar5 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer__BuildBlock
                          (__this,ui,block,iVar4,iVar5,in_R9);
        iVar10 = iVar10 + iVar5;
        iVar4 = iVar4 + 1;
      } while( true );
    }
    pSVar7 = System_String__Concat_52f0320((__this->fields)._id,"-empty",(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__TextKey
                (ui,"Changelog.NothingToPreview","stateMetaText",pSVar7,(System_String_o *)0x0,
                 (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      return;
    }
  }
label_05e7879b:
  ThrowNullReferenceException();
label_05e78745:
  pSVar7 = System_String__Concat_52f0320((__this->fields)._id,"-truncated",(MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (ui,"...","text",pSVar7,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  goto label_05e7879b;
}


// Gisketch.Aottg2UI.Game.AottgChangelogMarkdownRenderer$$BuildBlock
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer__BuildBlock (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o* block, int32_t index, int32_t remainingLines, const MethodInfo* method);
// 0x5e787a0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e789cf: nop 
// asm:   0x5e78afd: jmp 0x5e78c54
// asm:   0x5e78b39: nop dword ptr [rax]

int32_t Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer__BuildBlock
                  (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer_o *__this,
                  Gisketch_Aottg2UI_Code_AottgUi_o *ui,
                  Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o *block,int32_t index,
                  int32_t remainingLines,MethodInfo *method)

{
  Il2CppObject *pIVar1;
  Il2CppClass *pIVar2;
  Il2CppRuntimeInterfaceOffsetPair *pIVar3;
  uint uVar4;
  int32_t val1;
  int iVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  VirtualInvokeData *pVVar8;
  System_String_o **ppSVar9;
  ulong uVar10;
  MethodInfo *pMVar11;
  long lVar12;
  uint local_44;
  System_String_o *local_40;
  int32_t local_34;
  
  local_34 = index;
  if (Il2CppMethodInitialized_075487d8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IReadOnlyList_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    il2cpp_codegen_initialize_runtime_metadata(&"-item-");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"-");
    il2cpp_codegen_initialize_runtime_metadata(&"changelogMarkdownHeader");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"- ");
    Il2CppMethodInitialized_075487d8 = '\x01';
  }
  pSVar7 = (__this->fields)._id;
  pSVar6 = System_Int32__ToString(&local_34,(MethodInfo *)0x0);
  pMVar11 = (MethodInfo *)"-";
  local_40 = System_String__Concat_5301f10(pSVar7,"-",pSVar6,(MethodInfo *)0x0);
  if (block == (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o *)0x0) {
label_05e78c65:
    ThrowNullReferenceException();
  }
  iVar5 = (block->fields)._Type_k__BackingField;
  if (iVar5 == 3) {
    iVar5 = 0;
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(12.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05e78c65;
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (ui,(System_String_o *)0x0,(System_Action_AottgUi__o *)0x0,local_40,layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  }
  else if (iVar5 == 2) {
    pIVar1 = (Il2CppObject *)(block->fields)._Items_k__BackingField;
    if (remainingLines < 1) {
      if (pIVar1 == (Il2CppObject *)0x0) goto label_05e78c65;
      pIVar2 = pIVar1->klass;
      uVar10 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar10 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar12 = 0;
        do {
          if (*(System_Collections_Generic_IReadOnlyCollection_string__c **)
               ((long)&pIVar3->interfaceType + lVar12) ==
              TypeInfo_System_Collections_Generic_IReadOnlyCollection_string) {
            pVVar8 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar12);
            goto label_05e78b15;
          }
          lVar12 = lVar12 + 0x10;
        } while (uVar10 * 0x10 != lVar12);
      }
      pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar1,(Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyCollection_string
                          ,0);
label_05e78b15:
      iVar5 = (*pVVar8->methodPtr)(pIVar1,pVVar8->method);
    }
    else {
      if (pIVar1 == (Il2CppObject *)0x0) goto label_05e78c65;
      pIVar2 = pIVar1->klass;
      uVar10 = (ulong)(pIVar2->_2).interface_offsets_count;
      if (uVar10 != 0) {
        pIVar3 = (pIVar2->_1).interfaceOffsets;
        lVar12 = 0;
        do {
          if (*(System_Collections_Generic_IReadOnlyCollection_string__c **)
               ((long)&pIVar3->interfaceType + lVar12) ==
              TypeInfo_System_Collections_Generic_IReadOnlyCollection_string) {
            pVVar8 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar12);
            goto label_05e78ac1;
          }
          lVar12 = lVar12 + 0x10;
        } while (uVar10 * 0x10 != lVar12);
      }
      pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                         (pIVar1,(Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyCollection_string
                          ,0);
label_05e78ac1:
      val1 = (*pVVar8->methodPtr)(pIVar1,pVVar8->method);
      if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
      }
      iVar5 = System_Math__Min_54baeb0(val1,remainingLines,(MethodInfo *)0x0);
    }
    if (0 < iVar5) {
      local_44 = 0;
      do {
        uVar4 = local_44;
        pIVar1 = (Il2CppObject *)(block->fields)._Items_k__BackingField;
        if (pIVar1 == (Il2CppObject *)0x0) goto label_05e78c65;
        pIVar2 = pIVar1->klass;
        uVar10 = (ulong)(pIVar2->_2).interface_offsets_count;
        if (uVar10 != 0) {
          pIVar3 = (pIVar2->_1).interfaceOffsets;
          lVar12 = 0;
          do {
            if (*(System_Collections_Generic_IReadOnlyList_string__c **)
                 ((long)&pIVar3->interfaceType + lVar12) ==
                TypeInfo_System_Collections_Generic_IReadOnlyList_string) {
              pVVar8 = pIVar2->vtable + *(int *)((long)&pIVar3->offset + lVar12);
              goto label_05e78bb3;
            }
            lVar12 = lVar12 + 0x10;
          } while (uVar10 * 0x10 != lVar12);
        }
        pVVar8 = GetInterfaceInvokeDataFromVTableSlowPath
                           (pIVar1,(Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyList_string,0);
label_05e78bb3:
        pMVar11 = (MethodInfo *)(ulong)uVar4;
        pSVar7 = (*pVVar8->methodPtr)(pIVar1,uVar4,pVVar8->method);
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown);
        }
        pSVar7 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__RenderInline(pSVar7,pMVar11);
        pSVar7 = System_String__Concat_52f0320("- ",pSVar7,(MethodInfo *)0x0);
        pSVar6 = System_Int32__ToString((int32_t *)&local_44,(MethodInfo *)0x0);
        pSVar6 = System_String__Concat_5301f10(local_40,"-item-",pSVar6,(MethodInfo *)0x0);
        if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05e78c65;
        Gisketch_Aottg2UI_Code_AottgUi__Text
                  (ui,pSVar7,"text",pSVar6,(System_String_o *)0x0,
                   (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
        local_44 = local_44 + 1;
      } while ((int)local_44 < iVar5);
    }
  }
  else {
    if (iVar5 == 0) {
      pSVar7 = (block->fields)._Text_k__BackingField;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown);
      }
      pSVar7 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__RenderInline(pSVar7,pMVar11);
      if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05e78c65;
      ppSVar9 = &"changelogMarkdownHeader";
    }
    else {
      pSVar7 = (block->fields)._Text_k__BackingField;
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown);
      }
      pSVar7 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__RenderInline(pSVar7,pMVar11);
      if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05e78c65;
      ppSVar9 = &"text";
    }
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (ui,pSVar7,*ppSVar9,local_40,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    iVar5 = 1;
  }
  return iVar5;
}


