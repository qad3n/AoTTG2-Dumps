// Type: Gisketch.Aottg2UI.Game.AottgChangelogMarkdownRenderer
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgChangelogMarkdownRenderer.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgChangelogMarkdownRenderer$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer___ctor (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer_o* __this, System_String_o* markdown, System_String_o* id, int32_t maxLines, const MethodInfo* method);
// 0x1823a5c70

void Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer___ctor
               (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer_o *__this,System_String_o *markdown,
               System_String_o *id,int32_t maxLines,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347caa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"changelog-markdown");
    Il2CppMethodInitialized_184347caa = '\x01';
  }
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._markdown = markdown;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._markdown,markdown);
  bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if (bVar1) {
    id = "changelog-markdown";
  }
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id,id);
  (__this->fields)._maxLines = maxLines;
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangelogMarkdownRenderer$$Build
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer__Build (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x1823a5a50
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823a5b4c: nop dword ptr [rax]
// asm:   0x1823a5b94: mov ecx, edi

void Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer__Build
               (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  int32_t iVar1;
  Il2CppObject *obj;
  void *pvVar2;
  Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o *block;
  System_String_o *pSVar3;
  int remainingLines;
  int index;
  int iVar4;
  
  if (Il2CppMethodInitialized_184347cab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgChangelogMarkdownBlock);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_IReadOnlyList_AottgChangelogMarkdownBlock);
    il2cpp_codegen_initialize_runtime_metadata(&"stateMetaText");
    il2cpp_codegen_initialize_runtime_metadata(&"Nothing to preview.");
    il2cpp_codegen_initialize_runtime_metadata(&"-empty");
    il2cpp_codegen_initialize_runtime_metadata(&"-truncated");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"Changelog.NothingToPreview");
    il2cpp_codegen_initialize_runtime_metadata(&"...");
    Il2CppMethodInitialized_184347cab = '\x01';
  }
  pSVar3 = (__this->fields)._markdown;
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown);
  }
  obj = (Il2CppObject *)Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__Parse(pSVar3,(MethodInfo *)0x0);
  if (obj != (Il2CppObject *)0x0) {
    pvVar2 = InterfaceInvoker0_Invoke
                       (0,(Il2CppClass *)
                          TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgChangelogMarkdownBlock,
                        obj);
    if ((int)pvVar2 == 0) {
      pSVar3 = System_String__Concat_1969e50((__this->fields)._id,"-empty",(MethodInfo *)0x0);
      if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_1823a5c68;
      Gisketch_Aottg2UI_Code_AottgUi__TextKey
                (ui,"Changelog.NothingToPreview","Nothing to preview.","stateMetaText",pSVar3,
                 (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                 (MethodInfo *)0x0);
    }
    else {
      index = 0;
      iVar4 = index;
      for (; pvVar2 = InterfaceInvoker0_Invoke
                                (0,(Il2CppClass *)
                                   TypeInfo_System_Collections_Generic_IReadOnlyCollection_AottgChangelogMarkdownBlock
                                 ,obj), index < (int)pvVar2; index = index + 1) {
        if ((0 < (__this->fields)._maxLines) && ((__this->fields)._maxLines <= iVar4)) {
          pSVar3 = System_String__Concat_1969e50((__this->fields)._id,"-truncated",(MethodInfo *)0x0)
          ;
          if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
            Gisketch_Aottg2UI_Code_AottgUi__Text
                      (ui,"...","text",pSVar3,(System_String_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
            return;
          }
          goto label_1823a5c68;
        }
        block = (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o *)
                il2cpp_runtime_helper_180026600(0,TypeInfo_System_Collections_Generic_IReadOnlyList_AottgChangelogMarkdownBlock,
                              obj,index);
        remainingLines = 0;
        if (0 < (__this->fields)._maxLines) {
          remainingLines = (__this->fields)._maxLines - iVar4;
        }
        iVar1 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer__BuildBlock
                          (__this,ui,block,index,remainingLines,(MethodInfo *)0x0);
        iVar4 = iVar4 + iVar1;
      }
    }
    return;
  }
label_1823a5c68:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgChangelogMarkdownRenderer$$BuildBlock
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer__BuildBlock (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o* block, int32_t index, int32_t remainingLines, const MethodInfo* method);
// 0x1823a5610
// asm: 15 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823a58bf: nop 
// asm:   0x1823a5992: mov eax, r14d
// asm:   0x1823a5995: jmp 0x1823a5813
// asm:   0x1823a59df: mov r8, qword ptr [rip + 0x1d53daa]  ; "text"
// asm:   0x1823a59e6: jmp 0x1823a5a17
// asm:   0x1823a5a10: mov r8, qword ptr [rip + 0x1d00749]  ; "changelogMarkdownHeader"
// asm:   0x1823a5a17: mov qword ptr [rsp + 0x30], r12
// asm:   0x1823a5a1c: mov r9, r15
// asm:   0x1823a5a1f: mov qword ptr [rsp + 0x28], r12
// asm:   0x1823a5a24: mov rdx, rax
// asm:   0x1823a5a27: mov rcx, rsi
// asm:   0x1823a5a2a: mov qword ptr [rsp + 0x20], r12
// asm:   0x1823a5a2f: call 0x1818cad40  ; Gisketch_Aottg2UI_Code_AottgUi__Text()
// asm:   0x1823a5a34: mov eax, 1
// asm:   0x1823a5a39: jmp 0x1823a5813

int32_t Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer__BuildBlock
                  (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownRenderer_o *__this,
                  Gisketch_Aottg2UI_Code_AottgUi_o *ui,
                  Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o *block,int32_t index,
                  int32_t remainingLines,MethodInfo *method)

{
  ushort uVar1;
  Il2CppObject *pIVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  int iVar5;
  System_String_o *pSVar6;
  System_String_o *pSVar7;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  void *pvVar8;
  VirtualInvokeData *pVVar9;
  System_String_o *pSVar10;
  ushort uVar11;
  ulonglong uVar13;
  uint local_res8 [2];
  int32_t local_res20 [2];
  ulonglong uVar12;
  
  local_res20[0] = index;
  if (Il2CppMethodInitialized_184347cac == '\0') {
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
    Il2CppMethodInitialized_184347cac = '\x01';
  }
  pSVar7 = (__this->fields)._id;
  local_res8[0] = 0;
  pSVar6 = System_Int32__ToString(local_res20,(MethodInfo *)0x0);
  pSVar7 = System_String__Concat_1969b70(pSVar7,"-",pSVar6,(MethodInfo *)0x0);
  if (block == (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o *)0x0) goto label_1823a5a3e;
  iVar5 = (block->fields)._Type_k__BackingField;
  if (iVar5 == 0) {
    pSVar6 = (block->fields)._Text_k__BackingField;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown)
      ;
    }
    pSVar6 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__RenderInline(pSVar6,(MethodInfo *)0x0);
    pSVar10 = "changelogMarkdownHeader";
  }
  else {
    if (iVar5 != 1) {
      if (iVar5 == 2) {
        pIVar2 = (Il2CppObject *)(block->fields)._Items_k__BackingField;
        if (pIVar2 != (Il2CppObject *)0x0) {
          pvVar8 = InterfaceInvoker0_Invoke
                             (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyCollection_string,
                              pIVar2);
          iVar5 = (int)pvVar8;
          if (0 < remainingLines) {
            if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
            }
            iVar5 = System_Math__Min_1b2c2d0(iVar5,remainingLines,(MethodInfo *)0x0);
          }
          local_res8[0] = 0;
          uVar13 = 0;
          if (iVar5 < 1) {
            return iVar5;
          }
          while (pIVar2 = (Il2CppObject *)(block->fields)._Items_k__BackingField,
                pIVar2 != (Il2CppObject *)0x0) {
            pIVar3 = pIVar2->klass;
            uVar1 = (pIVar3->_2).interface_offsets_count;
            if (uVar1 != 0) {
              pIVar4 = (pIVar3->_1).interfaceOffsets;
              uVar12 = 0;
              do {
                if (pIVar4[uVar12].interfaceType ==
                    (Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyList_string) {
                  pVVar9 = pIVar3->vtable + pIVar4[uVar12].offset;
                  goto label_1823a58e6;
                }
                uVar11 = (short)uVar12 + 1;
                uVar12 = (ulonglong)uVar11;
              } while (uVar11 < uVar1);
            }
            pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                               (pIVar2,(Il2CppClass *)TypeInfo_System_Collections_Generic_IReadOnlyList_string
                                ,0);
label_1823a58e6:
            pSVar6 = (*pVVar9->methodPtr)(pIVar2,(int32_t)uVar13,pVVar9->method);
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown);
            }
            pSVar6 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__RenderInline(pSVar6,(MethodInfo *)0x0);
            pSVar6 = System_String__Concat_1969e50("- ",pSVar6,(MethodInfo *)0x0);
            pSVar10 = System_Int32__ToString((int32_t *)local_res8,(MethodInfo *)0x0);
            pSVar10 = System_String__Concat_1969b70(pSVar7,"-item-",pSVar10,(MethodInfo *)0x0);
            if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) break;
            Gisketch_Aottg2UI_Code_AottgUi__Text
                      (ui,pSVar6,"text",pSVar10,(System_String_o *)0x0,
                       (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
            local_res8[0] = local_res8[0] + 1;
            uVar13 = (ulonglong)local_res8[0];
            if (iVar5 <= (int)local_res8[0]) {
              return iVar5;
            }
          }
        }
        goto label_1823a5a3e;
      }
      if (iVar5 == 3) {
        width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
        height = Gisketch_Aottg2UI_Code_AottgUi__Points(12.0,(MethodInfo *)0x0);
        layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                           ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                            (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                            (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                            ,0.0,0.0,(MethodInfo *)0x0);
        if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgUi__Panel
                    (ui,(System_String_o *)0x0,(System_Action_AottgUi__o *)0x0,pSVar7,layout,
                     (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
          return 0;
        }
        goto label_1823a5a3e;
      }
    }
    pSVar6 = (block->fields)._Text_k__BackingField;
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown)
      ;
    }
    pSVar6 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__RenderInline(pSVar6,(MethodInfo *)0x0);
    pSVar10 = "text";
  }
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (ui,pSVar6,pSVar10,pSVar7,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return 1;
  }
label_1823a5a3e:
  ThrowNullReferenceException();
}


