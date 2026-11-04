// Type: Gisketch.Aottg2UI.Game.AottgChangelogMarkdown
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgChangelogMarkdown.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgChangelogMarkdown$$Parse
// il2cpp: System_Collections_Generic_IReadOnlyList_AottgChangelogMarkdownBlock__o* Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__Parse (System_String_o* markdown, const MethodInfo* method);
// 0x1823a5e40
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823a5f9a: mov ebx, r12d
// asm:   0x1823a5f9d: mov eax, r12d
// asm:   0x1823a61f8: jmp 0x1823a6203
// asm:   0x1823a6368: jmp 0x1823a63b2

System_Collections_Generic_IReadOnlyList_AottgChangelogMarkdownBlock__o *
Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__Parse(System_String_o *markdown,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_Collections_Generic_List_AottgChangelogMarkdownBlock__o *__this;
  System_String_o *pSVar3;
  System_String_array *pSVar4;
  System_Collections_Generic_List_string__o *__this_00;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *array;
  Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o *__this_01;
  System_Collections_ObjectModel_ReadOnlyCollection_T__o *pSVar5;
  System_Object_array *pSVar6;
  int32_t startIndex;
  uint uVar7;
  System_String_o *value;
  System_String_o *local_res8;
  
  if (Il2CppMethodInitialized_184347ca4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgChangelogMarkdownBlock_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgChangelogMarkdownBlock_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_AottgChangelogMarkdownBlock);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&"\n");
    il2cpp_codegen_initialize_runtime_metadata(&"\r\n");
    Il2CppMethodInitialized_184347ca4 = '\x01';
  }
  uVar7 = 0;
  local_res8 = (System_String_o *)0x0;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgChangelogMarkdownBlock);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_AottgChangelogMarkdownBlock_ctor)
  ;
  bVar2 = System_String__IsNullOrWhiteSpace(markdown,(MethodInfo *)0x0);
  if (!bVar2) {
    if ((((markdown == (System_String_o *)0x0) ||
         (pSVar3 = System_String__Replace_1970e80
                             (markdown,"\r\n","\n",(MethodInfo *)0x0),
         pSVar3 == (System_String_o *)0x0)) ||
        (pSVar3 = System_String__Replace(pSVar3,0xd,10,(MethodInfo *)0x0), pSVar3 == (System_String_o *)0x0))
       || (pSVar4 = System_String__Split(pSVar3,10,0,(MethodInfo *)0x0), pSVar4 == (System_String_array *)0x0)
       ) {
label_1823a64cd:
      ThrowNullReferenceException();
    }
    for (; (int)uVar7 < (int)pSVar4->max_length; uVar7 = uVar7 + 1) {
      if ((uint)pSVar4->max_length <= uVar7) {
label_1823a64d3:
        ThrowIndexOutOfRangeException();
      }
      pSVar3 = pSVar4->m_Items[(int)uVar7];
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown);
      }
      if (Il2CppMethodInitialized_184347ca6 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"## ");
        il2cpp_codegen_initialize_runtime_metadata(&"# ");
        Il2CppMethodInitialized_184347ca6 = '\x01';
      }
      local_res8 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
      Il2CppCodeGenWriteBarrier(&local_res8,local_res8);
      if (pSVar3 == (System_String_o *)0x0) goto label_1823a64cd;
      bVar2 = System_String__StartsWith_19722c0(pSVar3,"# ",4,(MethodInfo *)0x0);
      if (bVar2) {
        startIndex = 2;
label_1823a6067:
        local_res8 = System_String__Substring(pSVar3,startIndex,(MethodInfo *)0x0);
        Il2CppCodeGenWriteBarrier(&local_res8,local_res8);
        if (local_res8 == (System_String_o *)0x0) goto label_1823a64cd;
        local_res8 = System_String__Trim(local_res8,(MethodInfo *)0x0);
        Il2CppCodeGenWriteBarrier(&local_res8,local_res8);
        value = local_res8;
        if (local_res8 == (System_String_o *)0x0) goto label_1823a64cd;
        if ((local_res8->fields)._stringLength < 1) goto label_1823a60c3;
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock);
        if (Il2CppMethodInitialized_184347ca3 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_AsReadOnly_string);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
          Il2CppMethodInitialized_184347ca3 = '\x01';
        }
        System_Object___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_01,(MethodInfo *)0x0);
        (__this_01->fields)._Type_k__BackingField = 0;
        if (value == (System_String_o *)0x0) {
          value = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        }
        if (__this_01 == (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o *)0x0) goto label_1823a64cd;
        (__this_01->fields)._Text_k__BackingField = value;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields)._Text_k__BackingField,value);
        pSVar6 = (System_Object_array *)SZArrayNew(TypeInfo_string_array,0);
        pSVar5 = System_Array__AsReadOnly_object_
                           (pSVar6,(MethodInfo_68BBD0 *)MethodInfo_System_Array_AsReadOnly_string);
label_1823a6480:
        (__this_01->fields)._Items_k__BackingField =
             (System_Collections_Generic_IReadOnlyList_string__o *)pSVar5;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields)._Items_k__BackingField,pSVar5);
        if (__this == (System_Collections_Generic_List_AottgChangelogMarkdownBlock__o *)0x0)
        goto label_1823a64cd;
      }
      else {
        bVar2 = System_String__StartsWith_19722c0(pSVar3,"## ",4,(MethodInfo *)0x0);
        if (bVar2) {
          startIndex = 3;
          goto label_1823a6067;
        }
label_1823a60c3:
        if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown);
        }
        if (Il2CppMethodInitialized_184347ca7 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"- ");
          Il2CppMethodInitialized_184347ca7 = '\x01';
        }
        bVar2 = System_String__StartsWith_19722c0(pSVar3,"- ",4,(MethodInfo *)0x0);
        if ((!bVar2) || ((pSVar3->fields)._stringLength < 3)) {
          bVar2 = System_String__IsNullOrWhiteSpace(pSVar3,(MethodInfo *)0x0);
          if (bVar2) {
            pSVar3 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
            __this_01 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock)
            ;
            if (Il2CppMethodInitialized_184347ca3 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_AsReadOnly_string);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
              Il2CppMethodInitialized_184347ca3 = '\x01';
            }
            System_Object___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_01,
                       (MethodInfo *)0x0);
            (__this_01->fields)._Type_k__BackingField = 3;
            if (pSVar3 == (System_String_o *)0x0) {
              pSVar3 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
            }
            if (__this_01 == (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o *)0x0) goto label_1823a64cd;
          }
          else {
            __this_01 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock)
            ;
            if (Il2CppMethodInitialized_184347ca3 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_AsReadOnly_string);
              il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
              Il2CppMethodInitialized_184347ca3 = '\x01';
            }
            System_Object___ctor
                      ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_01,
                       (MethodInfo *)0x0);
            (__this_01->fields)._Type_k__BackingField = 1;
          }
          (__this_01->fields)._Text_k__BackingField = pSVar3;
          Il2CppCodeGenWriteBarrier(&(__this_01->fields)._Text_k__BackingField,pSVar3);
          pSVar6 = (System_Object_array *)SZArrayNew(TypeInfo_string_array,0);
          pSVar5 = System_Array__AsReadOnly_object_
                             (pSVar6,(MethodInfo_68BBD0 *)MethodInfo_System_Array_AsReadOnly_string);
          goto label_1823a6480;
        }
        __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
        System_Collections_Generic_List_object____ctor
                  ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
                   (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
        uVar1 = (uint)pSVar4->max_length;
        bVar2 = uVar7 < uVar1;
        if ((int)uVar7 < (int)uVar1) {
          do {
            if (!bVar2) goto label_1823a64d3;
            pSVar3 = pSVar4->m_Items[(int)uVar7];
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown);
            }
            if (Il2CppMethodInitialized_184347ca7 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&"- ");
              Il2CppMethodInitialized_184347ca7 = '\x01';
            }
            if (((pSVar3 == (System_String_o *)0x0) ||
                (bVar2 = System_String__StartsWith_19722c0(pSVar3,"- ",4,(MethodInfo *)0x0),
                !bVar2)) || ((pSVar3->fields)._stringLength < 3)) goto label_1823a61fa;
            if ((uint)pSVar4->max_length <= uVar7) goto label_1823a64d3;
            if ((pSVar4->m_Items[(int)uVar7] == (System_String_o *)0x0) ||
               (pSVar3 = System_String__Substring(pSVar4->m_Items[(int)uVar7],2,(MethodInfo *)0x0),
               __this_00 == (System_Collections_Generic_List_string__o *)0x0)) goto label_1823a64cd;
            il2cpp_runtime_helper_180012890(__this_00,pSVar3,MethodInfo_System_Collections_Generic_List_string_Add);
            uVar7 = uVar7 + 1;
            uVar1 = (uint)pSVar4->max_length;
            bVar2 = uVar7 < uVar1;
          } while ((int)uVar7 < (int)uVar1);
        }
        else {
label_1823a61fa:
          if (__this_00 == (System_Collections_Generic_List_string__o *)0x0) goto label_1823a64cd;
        }
        pSVar3 = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8);
        array = System_Collections_Generic_List_object___ToArray
                          ((System_Collections_Generic_List_T__o *)__this_00,
                           (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
        __this_01 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock);
        if (Il2CppMethodInitialized_184347ca3 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_AsReadOnly_string);
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
          Il2CppMethodInitialized_184347ca3 = '\x01';
        }
        System_Object___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this_01,(MethodInfo *)0x0);
        (__this_01->fields)._Type_k__BackingField = 2;
        if (pSVar3 == (System_String_o *)0x0) {
          pSVar3 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
        }
        if (__this_01 == (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o *)0x0) goto label_1823a64cd;
        (__this_01->fields)._Text_k__BackingField = pSVar3;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields)._Text_k__BackingField,pSVar3);
        if (array == (UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
                      *)0x0) {
          array = (UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
                   *)SZArrayNew(TypeInfo_string_array,0);
        }
        pSVar5 = System_Array__AsReadOnly_object_
                           ((System_Object_array *)array,
                            (MethodInfo_68BBD0 *)MethodInfo_System_Array_AsReadOnly_string);
        (__this_01->fields)._Items_k__BackingField =
             (System_Collections_Generic_IReadOnlyList_string__o *)pSVar5;
        Il2CppCodeGenWriteBarrier(&(__this_01->fields)._Items_k__BackingField,pSVar5);
        if (__this == (System_Collections_Generic_List_AottgChangelogMarkdownBlock__o *)0x0)
        goto label_1823a64cd;
        uVar7 = uVar7 - 1;
      }
      il2cpp_runtime_helper_180012890(__this,__this_01,
                    MethodInfo_System_Collections_Generic_List_AottgChangelogMarkdownBlock_Add);
    }
  }
  return (System_Collections_Generic_IReadOnlyList_AottgChangelogMarkdownBlock__o *)__this;
}


// Gisketch.Aottg2UI.Game.AottgChangelogMarkdown$$RenderInline
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__RenderInline (System_String_o* text, const MethodInfo* method);
// 0x1823a64e0
// eh: try 0x1823a6670..0x1823a675a -> pad 0x183324010 catch Il2CppExceptionWrapper
// eh: try 0x1823a675a..0x1823a67de -> pad 0x18022ee70 cleanup
// eh: try 0x1823a67de..0x1823a6b46 -> pad 0x183324010 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 26 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x1823a6797: mov rdx, qword ptr [rip + 0x1d1b70a]  ; TypeInfo_System_Text_RegularExpressions_Match
// asm:   0x1823a679e: mov r8, qword ptr [rax]
// asm:   0x1823a67a1: movzx eax, byte ptr [rdx + 0x130]
// asm:   0x1823a67a8: cmp byte ptr [r8 + 0x130], al
// asm:   0x1823a67af: jb 0x1823a6b33
// asm:   0x1823a6a3e: lea rcx, [rsp + 0x48]
// asm:   0x1823a6a43: call 0x1818789e0  ; il2cpp_runtime_helper_1818789e0()
// asm:   0x1823a6a48: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x1823a6a4d: test rcx, rcx
// asm:   0x1823a6a50: jne 0x1823a6b46
// asm:   0x1823a6a56: mov r15, qword ptr [rsp + 0x90]
// asm:   0x1823a6a5e: mov r14, qword ptr [rsp + 0x28]
// asm:   0x1823a6a63: mov edi, dword ptr [rsp + 0xa0]
// asm:   0x1823a6a6a: mov r12, r14
// asm:   0x1823a6b46: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183324010: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183324015: push rbp
// asm:   0x183324016: sub rsp, 0x20
// asm:   0x18332401a: mov rbp, rdx
// asm:   0x18332401d: mov rax, qword ptr [rbp + 0x38]
// asm:   0x183324021: mov rcx, qword ptr [rax]
// asm:   0x183324024: mov qword ptr [rbp + 0x40], rcx
// asm:   0x183324028: movabs rax, 0
// asm:   0x183324032: add rsp, 0x20
// asm:   0x183324036: pop rbp
// asm:   0x183324037: ret 

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__RenderInline(System_String_o *text,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  int32_t capacity;
  System_Text_RegularExpressions_Regex_o *__this;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Il2CppObject *pIVar5;
  bool bVar6;
  System_Text_StringBuilder_o *__this_00;
  System_Text_RegularExpressions_MatchCollection_o *__this_01;
  VirtualInvokeData *pVVar7;
  System_Text_RegularExpressions_Capture_o *__this_02;
  System_String_o *pSVar8;
  System_Text_StringBuilder_o *pSVar9;
  ushort uVar10;
  int startIndex;
  Il2CppObject *local_res20;
  undefined8 local_68;
  System_Text_StringBuilder_o *local_60;
  undefined8 local_48;
  Il2CppObject **local_40;
  undefined8 *local_38;
  
  if (Il2CppMethodInitialized_184347ca5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_Match);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    il2cpp_codegen_initialize_runtime_metadata(&"<b>");
    il2cpp_codegen_initialize_runtime_metadata(&"**");
    il2cpp_codegen_initialize_runtime_metadata(&"</b>");
    il2cpp_codegen_initialize_runtime_metadata(&"*");
    il2cpp_codegen_initialize_runtime_metadata(&"</i>");
    il2cpp_codegen_initialize_runtime_metadata(&"<i>");
    Il2CppMethodInitialized_184347ca5 = '\x01';
  }
  local_res20 = (Il2CppObject *)0x0;
  local_68 = 0;
  bVar6 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
  if (bVar6) {
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (text != (System_String_o *)0x0) {
    capacity = (text->fields)._stringLength;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
    System_Text_StringBuilder___ctor_1980e60(__this_00,capacity,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown)
      ;
    }
    __this = TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown->static_fields->InlinePattern;
    if ((__this != (System_Text_RegularExpressions_Regex_o *)0x0) &&
       (__this_01 = System_Text_RegularExpressions_Regex__Matches_285d470(__this,text,(MethodInfo *)0x0),
       __this_01 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
      startIndex = 0;
      local_60 = __this_00;
      local_res20 = (Il2CppObject *)
                    System_Text_RegularExpressions_MatchCollection__GetEnumerator(__this_01,(MethodInfo *)0x0)
      ;
      local_48 = 0;
      local_40 = &local_res20;
      local_38 = &local_68;
      do {
        pIVar5 = local_res20;
        if (local_res20 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar3 = local_res20->klass;
        uVar2 = (pIVar3->_2).interface_offsets_count;
        if (uVar2 != 0) {
          uVar10 = 0;
          pIVar4 = (pIVar3->_1).interfaceOffsets;
          do {
            if (pIVar4[uVar10].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
              pVVar7 = pIVar3->vtable + pIVar4[uVar10].offset;
              goto label_1823a66d6;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar2);
        }
        pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                           (local_res20,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_1823a66d6:
        bVar6 = (*pVVar7->methodPtr)(pIVar5,pVVar7->method);
        pIVar5 = local_res20;
        if (!bVar6) {
          il2cpp_runtime_helper_1818789e0(&local_40);
          if (startIndex < (text->fields)._stringLength) {
            pSVar8 = System_String__Substring(text,startIndex,(MethodInfo *)0x0);
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown);
            }
            pSVar8 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__Escape(pSVar8,(MethodInfo *)0x0);
            if (__this_00 == (System_Text_StringBuilder_o *)0x0) break;
            System_Text_StringBuilder__Append_197dca0(__this_00,pSVar8,(MethodInfo *)0x0);
          }
          else if (__this_00 == (System_Text_StringBuilder_o *)0x0) break;
          pSVar8 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                             (__this_00,(__this_00->klass->vtable)._3_ToString.method);
          return pSVar8;
        }
        if (local_res20 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar3 = local_res20->klass;
        uVar2 = (pIVar3->_2).interface_offsets_count;
        if (uVar2 != 0) {
          uVar10 = 0;
          pIVar4 = (pIVar3->_1).interfaceOffsets;
          do {
            if (pIVar4[uVar10].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
              pVVar7 = pIVar3->vtable + (pIVar4[uVar10].offset + 1);
              goto label_1823a6745;
            }
            uVar10 = uVar10 + 1;
          } while (uVar10 < uVar2);
        }
        pVVar7 = GetInterfaceInvokeDataFromVTableSlowPath
                           (local_res20,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_1823a6745:
        __this_02 = (System_Text_RegularExpressions_Capture_o *)(*pVVar7->methodPtr)(pIVar5,pVVar7->method);
        if (__this_02 == (System_Text_RegularExpressions_Capture_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar1 = (TypeInfo_System_Text_RegularExpressions_Match->_2).typeHierarchyDepth;
        if (((__this_02->klass->_2).typeHierarchyDepth < bVar1) ||
           ((__this_02->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
            (Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Match)) {
          il2cpp_codegen_raise_invalid_cast_exception(__this_02);
        }
        if (startIndex < (__this_02->fields)._Index_k__BackingField) {
          pSVar8 = System_String__Substring_1972740
                             (text,startIndex,(__this_02->fields)._Index_k__BackingField - startIndex,
                              (MethodInfo *)0x0);
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown);
          }
          pSVar8 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__Escape(pSVar8,(MethodInfo *)0x0);
          if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Text_StringBuilder__Append_197dca0(__this_00,pSVar8,(MethodInfo *)0x0);
        }
        pSVar8 = System_Text_RegularExpressions_Capture__ToString(__this_02,(MethodInfo *)0x0);
        if (pSVar8 == (System_String_o *)0x0) {
          ThrowNullReferenceException();
        }
        bVar6 = System_String__StartsWith_19722c0(pSVar8,"**",4,(MethodInfo *)0x0);
        if ((bVar6) &&
           (bVar6 = System_String__EndsWith_196bd20(pSVar8,"**",4,(MethodInfo *)0x0), bVar6))
        {
          if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar9 = System_Text_StringBuilder__Append_197dca0
                             (__this_00,"<b>",(MethodInfo *)0x0);
          pSVar8 = System_String__Substring_1972740
                             (pSVar8,2,(pSVar8->fields)._stringLength + -4,(MethodInfo *)0x0);
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown);
          }
          pSVar8 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__Escape(pSVar8,(MethodInfo *)0x0);
          if (pSVar9 == (System_Text_StringBuilder_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar9 = System_Text_StringBuilder__Append_197dca0(pSVar9,pSVar8,(MethodInfo *)0x0);
          if (pSVar9 == (System_Text_StringBuilder_o *)0x0) {
            ThrowNullReferenceException();
          }
          System_Text_StringBuilder__Append_197dca0(pSVar9,"</b>",(MethodInfo *)0x0);
          startIndex = (__this_02->fields)._Length_k__BackingField +
                       (__this_02->fields)._Index_k__BackingField;
        }
        else {
          bVar6 = System_String__StartsWith_19722c0(pSVar8,"*",4,(MethodInfo *)0x0);
          if ((bVar6) &&
             (bVar6 = System_String__EndsWith_196bd20(pSVar8,"*",4,(MethodInfo *)0x0), bVar6
             )) {
            if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar9 = System_Text_StringBuilder__Append_197dca0
                               (__this_00,"<i>",(MethodInfo *)0x0);
            pSVar8 = System_String__Substring_1972740
                               (pSVar8,1,(pSVar8->fields)._stringLength + -2,(MethodInfo *)0x0);
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown);
            }
            pSVar8 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__Escape(pSVar8,(MethodInfo *)0x0);
            if (pSVar9 == (System_Text_StringBuilder_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar9 = System_Text_StringBuilder__Append_197dca0(pSVar9,pSVar8,(MethodInfo *)0x0);
            if (pSVar9 == (System_Text_StringBuilder_o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Text_StringBuilder__Append_197dca0(pSVar9,"</i>",(MethodInfo *)0x0);
            startIndex = (__this_02->fields)._Length_k__BackingField +
                         (__this_02->fields)._Index_k__BackingField;
          }
          else {
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown);
            }
            pSVar8 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__Escape(pSVar8,(MethodInfo *)0x0);
            if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Text_StringBuilder__Append_197dca0(__this_00,pSVar8,(MethodInfo *)0x0);
            startIndex = (__this_02->fields)._Length_k__BackingField +
                         (__this_02->fields)._Index_k__BackingField;
          }
        }
      } while( true );
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgChangelogMarkdown$$TryReadHeader
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__TryReadHeader (System_String_o* line, System_String_o** header, const MethodInfo* method);
// 0x1823a6b60

bool Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__TryReadHeader
               (System_String_o *line,System_String_o **header,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  int32_t startIndex;
  
  if (Il2CppMethodInitialized_184347ca6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"## ");
    il2cpp_codegen_initialize_runtime_metadata(&"# ");
    Il2CppMethodInitialized_184347ca6 = '\x01';
  }
  pSVar2 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  *header = pSVar2;
  Il2CppCodeGenWriteBarrier(header,pSVar2);
  if (line != (System_String_o *)0x0) {
    bVar1 = System_String__StartsWith_19722c0(line,"# ",4,(MethodInfo *)0x0);
    if (bVar1) {
      startIndex = 2;
    }
    else {
      bVar1 = System_String__StartsWith_19722c0(line,"## ",4,(MethodInfo *)0x0);
      if (!bVar1) {
        return false;
      }
      startIndex = 3;
    }
    pSVar2 = System_String__Substring(line,startIndex,(MethodInfo *)0x0);
    *header = pSVar2;
    Il2CppCodeGenWriteBarrier(header,pSVar2);
    if (*header != (System_String_o *)0x0) {
      pSVar2 = System_String__Trim(*header,(MethodInfo *)0x0);
      *header = pSVar2;
      Il2CppCodeGenWriteBarrier(header,pSVar2);
      if (*header != (System_String_o *)0x0) {
        return 0 < ((*header)->fields)._stringLength;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgChangelogMarkdown$$IsBullet
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__IsBullet (System_String_o* line, const MethodInfo* method);
// 0x1823a5de0

bool Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__IsBullet(System_String_o *line,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347ca7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"- ");
    Il2CppMethodInitialized_184347ca7 = '\x01';
  }
  if (line != (System_String_o *)0x0) {
    bVar1 = System_String__StartsWith_19722c0(line,"- ",4,(MethodInfo *)0x0);
    if (bVar1) {
      return 2 < (line->fields)._stringLength;
    }
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgChangelogMarkdown$$Escape
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__Escape (System_String_o* value, const MethodInfo* method);
// 0x1823a5cf0

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__Escape(System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184347ca8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"&amp;");
    il2cpp_codegen_initialize_runtime_metadata(&"<");
    il2cpp_codegen_initialize_runtime_metadata(&"&gt;");
    il2cpp_codegen_initialize_runtime_metadata(&"&");
    il2cpp_codegen_initialize_runtime_metadata(&"&lt;");
    il2cpp_codegen_initialize_runtime_metadata(&">");
    Il2CppMethodInitialized_184347ca8 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (!bVar1) {
    if (value != (System_String_o *)0x0) {
      pSVar2 = System_String__Replace_1970e80
                         (value,"&","&amp;",(MethodInfo *)0x0);
      if (pSVar2 != (System_String_o *)0x0) {
        pSVar2 = System_String__Replace_1970e80
                           (pSVar2,"<","&lt;",(MethodInfo *)0x0);
        if (pSVar2 != (System_String_o *)0x0) {
          pSVar2 = System_String__Replace_1970e80
                             (pSVar2,">","&gt;",(MethodInfo *)0x0);
          return pSVar2;
        }
      }
    }
    ThrowNullReferenceException();
  }
  return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgChangelogMarkdown$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogMarkdown___cctor (const MethodInfo* method);
// 0x1823a6c70

void Gisketch_Aottg2UI_Game_AottgChangelogMarkdown___cctor(MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *__this;
  
  if (Il2CppMethodInitialized_184347ca9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_Regex);
    il2cpp_codegen_initialize_runtime_metadata(&"(\\*\\*[^*]+\\*\\*|\\*[^*]+\\*)");
    Il2CppMethodInitialized_184347ca9 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  System_Text_RegularExpressions_Regex___ctor_285f6f0(__this,"(\\*\\*[^*]+\\*\\*|\\*[^*]+\\*)",8,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown->static_fields->InlinePattern = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown->static_fields->InlinePattern,__this);
  return;
}


