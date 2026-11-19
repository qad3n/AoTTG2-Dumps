// Type: Gisketch.Aottg2UI.Game.AottgChangelogMarkdown
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgChangelogMarkdown.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgChangelogMarkdown$$Parse
// il2cpp: System_Collections_Generic_IReadOnlyList_AottgChangelogMarkdownBlock__o* Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__Parse (System_String_o* markdown, const MethodInfo* method);
// 0x5e77370
// asm: 13 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e775cd: cmp byte ptr [rip + 0x16d11ff], 0
// asm:   0x5e775d4: je 0x5e775ee
// asm:   0x5e775d6: test rbx, rbx
// asm:   0x5e775db: jmp 0x5e77680
// asm:   0x5e7776a: jmp 0x5e7792a
// asm:   0x5e777be: cmp byte ptr [rip + 0x16d100e], 0
// asm:   0x5e777c5: je 0x5e777ee
// asm:   0x5e777c7: test rbx, rbx
// asm:   0x5e777ca: jne 0x5e7780a
// asm:   0x5e777cc: jmp 0x5e77899
// asm:   0x5e77983: jmp 0x5e77993
// asm:   0x5e77985: cmp byte ptr [rip + 0x16d0e47], 0
// asm:   0x5e7798e: test rbx, rbx

System_Collections_Generic_IReadOnlyList_AottgChangelogMarkdownBlock__o *
Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__Parse(System_String_o *markdown,MethodInfo *method)

{
  int32_t *piVar1;
  Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o **ppGVar2;
  System_String_o *text;
  bool bVar3;
  uint uVar4;
  System_Collections_Generic_List_AottgChangelogMarkdownBlock__o *__this;
  System_String_o *pSVar5;
  System_String_array *pSVar6;
  Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_o *__this_00;
  Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_array *pGVar7;
  System_Collections_Generic_List_string__o *__this_01;
  il2cpp_array_size_t iVar8;
  System_String_array *pSVar9;
  MethodInfo *pMVar10;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  System_String_o **ppSVar11;
  int32_t type;
  MethodInfo *in_R8;
  uint uVar12;
  System_String_o *local_48;
  System_String_o **local_40;
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_075487d0 == '\0') {
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
    Il2CppMethodInitialized_075487d0 = '\x01';
  }
  local_48 = (System_String_o *)0x0;
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgChangelogMarkdownBlock);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_AottgChangelogMarkdownBlock_ctor
            );
  bVar3 = System_String__IsNullOrWhiteSpace(markdown,(MethodInfo *)0x0);
  if (bVar3) {
    return (System_Collections_Generic_IReadOnlyList_AottgChangelogMarkdownBlock__o *)__this;
  }
  if (((markdown != (System_String_o *)0x0) &&
      (pSVar5 = System_String__Replace_5304550
                          (markdown,"\r\n","\n",(MethodInfo *)0x0),
      pSVar5 != (System_String_o *)0x0)) &&
     (pSVar5 = System_String__Replace(pSVar5,0xd,10,(MethodInfo *)0x0), pSVar5 != (System_String_o *)0x0)) {
    pSVar6 = System_String__Split(pSVar5,10,0,(MethodInfo *)0x0);
    if (pSVar6 != (System_String_array *)0x0) {
      uVar4 = (uint)pSVar6->max_length;
      if ((int)uVar4 < 1) {
        return (System_Collections_Generic_IReadOnlyList_AottgChangelogMarkdownBlock__o *)__this;
      }
      local_40 = pSVar6->m_Items;
      uVar12 = 0;
      pMVar10 = extraout_RDX;
label_05e7751c:
      if (uVar4 <= uVar12) {
label_05e779e3:
        ThrowIndexOutOfRangeException();
      }
      pSVar5 = pSVar6->m_Items[(int)uVar12];
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown);
        pMVar10 = extraout_RDX_01;
      }
      bVar3 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__TryReadHeader(pSVar5,&local_48,pMVar10);
      text = local_48;
      if (bVar3) {
        __this_00 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock);
        Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock___ctor
                  (__this_00,0,text,(System_String_array *)0x0,in_R8);
        pMVar10 = MethodInfo_System_Collections_Generic_List_AottgChangelogMarkdownBlock_Add;
        if (__this == (System_Collections_Generic_List_AottgChangelogMarkdownBlock__o *)0x0)
        goto label_05e77925;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pGVar7 = (__this->fields)._items;
        if (pGVar7 == (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_array *)0x0) goto label_05e77925;
label_05e77597:
        uVar4 = (__this->fields)._size;
        if ((uint)pGVar7->max_length <= uVar4) {
          pMVar10 = pMVar10->klass->rgctx_data[0xe].method;
          goto label_05e77755;
        }
        (__this->fields)._size = uVar4 + 1;
        ppGVar2 = pGVar7->m_Items + (long)(int)uVar4 + -4;
        pGVar7->m_Items[(int)uVar4] = __this_00;
label_05e77507:
        Il2CppCodeGenWriteBarrier(ppGVar2 + 4);
        uVar12 = uVar12 + 1;
        uVar4 = (uint)pSVar6->max_length;
        pMVar10 = extraout_RDX_00;
        if ((int)uVar4 <= (int)uVar12) {
          return (System_Collections_Generic_IReadOnlyList_AottgChangelogMarkdownBlock__o *)__this;
        }
        goto label_05e7751c;
      }
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown);
      }
      if (Il2CppMethodInitialized_075487d3 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"- ");
        Il2CppMethodInitialized_075487d3 = '\x01';
      }
      if (((pSVar5 == (System_String_o *)0x0) ||
          (bVar3 = System_String__StartsWith_53002b0(pSVar5,"- ",4,(MethodInfo *)0x0), !bVar3
          )) || ((pSVar5->fields)._stringLength < 3)) {
        bVar3 = System_String__IsNullOrWhiteSpace(pSVar5,(MethodInfo *)0x0);
        if (bVar3) {
          pSVar5 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock);
          type = 3;
        }
        else {
          __this_00 = il2cpp_codegen_object_new
                                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock);
          type = 1;
        }
        Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock___ctor
                  (__this_00,type,pSVar5,(System_String_array *)0x0,in_R8);
        pMVar10 = MethodInfo_System_Collections_Generic_List_AottgChangelogMarkdownBlock_Add;
        if (__this == (System_Collections_Generic_List_AottgChangelogMarkdownBlock__o *)0x0)
        goto label_05e77925;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pGVar7 = (__this->fields)._items;
        if (pGVar7 == (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_array *)0x0) goto label_05e77925;
        uVar4 = (__this->fields)._size;
        if (uVar4 < (uint)pGVar7->max_length) {
          (__this->fields)._size = uVar4 + 1;
          ppGVar2 = pGVar7->m_Items + (long)(int)uVar4 + -4;
          pGVar7->m_Items[(int)uVar4] = __this_00;
          goto label_05e77507;
        }
        pMVar10 = pMVar10->klass->rgctx_data[0xe].method;
label_05e77755:
        System_Collections_Generic_List_object___AddWithResize
                  ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)__this_00,
                   (MethodInfo_395D230 *)pMVar10);
        uVar12 = uVar12 + 1;
        uVar4 = (uint)pSVar6->max_length;
        pMVar10 = extraout_RDX_02;
        if ((int)uVar4 <= (int)uVar12) {
          return (System_Collections_Generic_IReadOnlyList_AottgChangelogMarkdownBlock__o *)__this;
        }
        goto label_05e7751c;
      }
      __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
      System_Collections_Generic_List_object____ctor
                ((System_Collections_Generic_List_object__o *)__this_01,
                 (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
      iVar8 = pSVar6->max_length;
      if ((int)uVar12 < (int)(uint)iVar8) {
        if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) {
          if (uVar12 < (uint)iVar8) {
            pSVar5 = pSVar6->m_Items[(int)uVar12];
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown);
            }
            if (Il2CppMethodInitialized_075487d3 == '\0') {
              il2cpp_codegen_initialize_runtime_metadata(&"- ");
              Il2CppMethodInitialized_075487d3 = '\x01';
            }
            if (((pSVar5 != (System_String_o *)0x0) &&
                (bVar3 = System_String__StartsWith_53002b0(pSVar5,"- ",4,(MethodInfo *)0x0),
                bVar3)) && (2 < (pSVar5->fields)._stringLength)) {
              if ((uint)pSVar6->max_length <= uVar12) goto label_05e779e3;
              if (pSVar6->m_Items[(int)uVar12] != (System_String_o *)0x0) {
                System_String__Substring(pSVar6->m_Items[(int)uVar12],2,(MethodInfo *)0x0);
                ThrowNullReferenceException();
              }
            }
            goto label_05e77925;
          }
          goto label_05e779e3;
        }
        ppSVar11 = local_40 + (int)uVar12;
        do {
          if ((uint)iVar8 <= uVar12) goto label_05e779e3;
          pSVar5 = *ppSVar11;
          if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown);
          }
          if (Il2CppMethodInitialized_075487d3 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"- ");
            Il2CppMethodInitialized_075487d3 = '\x01';
          }
          if (((pSVar5 == (System_String_o *)0x0) ||
              (bVar3 = System_String__StartsWith_53002b0(pSVar5,"- ",4,(MethodInfo *)0x0),
              !bVar3)) || ((pSVar5->fields)._stringLength < 3)) goto label_05e77899;
          if ((uint)pSVar6->max_length <= uVar12) goto label_05e779e3;
          if (*ppSVar11 == (System_String_o *)0x0) goto label_05e77925;
          pSVar5 = System_String__Substring(*ppSVar11,2,(MethodInfo *)0x0);
          pMVar10 = MethodInfo_System_Collections_Generic_List_string_Add;
          piVar1 = &(__this_01->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar9 = (__this_01->fields)._items;
          if (pSVar9 == (System_String_array *)0x0) goto label_05e77925;
          uVar4 = (__this_01->fields)._size;
          if (uVar4 < (uint)pSVar9->max_length) {
            (__this_01->fields)._size = uVar4 + 1;
            pSVar9->m_Items[(int)uVar4] = pSVar5;
            Il2CppCodeGenWriteBarrier(pSVar9->m_Items + (int)uVar4);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      ((System_Collections_Generic_List_object__o *)__this_01,(Il2CppObject *)pSVar5,
                       (MethodInfo_395D230 *)pMVar10->klass->rgctx_data[0xe].method);
          }
          uVar12 = uVar12 + 1;
          uVar4 = (uint)pSVar6->max_length;
          iVar8 = (il2cpp_array_size_t)uVar4;
          ppSVar11 = ppSVar11 + 1;
        } while ((int)uVar12 < (int)uVar4);
      }
      else {
label_05e77899:
        if (__this_01 == (System_Collections_Generic_List_string__o *)0x0) goto label_05e77925;
      }
      uVar12 = uVar12 - 1;
      local_38 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
      pSVar9 = (System_String_array *)
               System_Collections_Generic_List_object___ToArray
                         ((System_Collections_Generic_List_object__o *)__this_01,
                          (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      __this_00 = il2cpp_codegen_object_new
                            ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock);
      Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock___ctor(__this_00,2,local_38,pSVar9,in_R8);
      pMVar10 = MethodInfo_System_Collections_Generic_List_AottgChangelogMarkdownBlock_Add;
      if (__this != (System_Collections_Generic_List_AottgChangelogMarkdownBlock__o *)0x0) {
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pGVar7 = (__this->fields)._items;
        if (pGVar7 != (Gisketch_Aottg2UI_Game_AottgChangelogMarkdownBlock_array *)0x0) goto label_05e77597;
      }
    }
  }
label_05e77925:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgChangelogMarkdown$$RenderInline
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__RenderInline (System_String_o* text, const MethodInfo* method);
// 0x5e77b50
// eh: try 0x5e77d3f..0x5e781e6 -> pad 0x5e78234 (+35 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x5e78256..0x5e7825b -> pad 0x5e78260 cleanup
// eh: try 0x5e78263..0x5e7826d -> pad 0x5e78275 catch (...) [compiler noexcept guard]
// asm: 53 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e781f0: jmp 0x5e78236
// asm:   0x5e781f2: jmp 0x5e78236
// asm:   0x5e781f4: jmp 0x5e78236
// asm:   0x5e781f6: jmp 0x5e78236
// asm:   0x5e781f8: jmp 0x5e78236
// asm:   0x5e781fa: jmp 0x5e78236
// asm:   0x5e781fc: jmp 0x5e78236
// asm:   0x5e781fe: jmp 0x5e78236
// asm:   0x5e78200: jmp 0x5e78236
// asm:   0x5e78202: jmp 0x5e78236
// asm:   0x5e78204: jmp 0x5e78236
// asm:   0x5e78206: jmp 0x5e78236
// asm:   0x5e78208: jmp 0x5e78236
// asm:   0x5e7820a: jmp 0x5e78236
// asm:   0x5e7820c: jmp 0x5e78236
// asm:   0x5e7820e: jmp 0x5e78236
// asm:   0x5e78210: jmp 0x5e78236
// asm:   0x5e78212: jmp 0x5e78236
// asm:   0x5e78214: jmp 0x5e78236
// asm:   0x5e78216: jmp 0x5e78236
// asm:   0x5e78218: jmp 0x5e78236
// asm:   0x5e7821a: jmp 0x5e78236
// asm:   0x5e7821c: jmp 0x5e78236
// asm:   0x5e7821e: jmp 0x5e78236
// asm:   0x5e78220: jmp 0x5e78236
// asm:   0x5e78222: jmp 0x5e78236
// asm:   0x5e78224: jmp 0x5e78236
// asm:   0x5e78226: jmp 0x5e78236
// asm:   0x5e78228: jmp 0x5e78236
// asm:   0x5e7822a: jmp 0x5e78236
// asm:   0x5e7822c: jmp 0x5e78236
// asm:   0x5e7822e: jmp 0x5e78236
// asm:   0x5e78230: jmp 0x5e78236
// asm:   0x5e78232: jmp 0x5e78236
// asm:   0x5e78234: jmp 0x5e78236
// asm:   0x5e78236: mov rbx, rax
// asm:   0x5e78239: cmp edx, 1
// asm:   0x5e7823c: jne 0x5e78263
// asm:   0x5e7823e: mov rdi, rbx
// asm:   0x5e78241: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e78246: mov rcx, qword ptr [rax]
// asm:   0x5e78249: mov qword ptr [rsp + 8], rcx
// asm:   0x5e7824e: mov qword ptr [rsp + 0x20], rcx
// asm:   0x5e78253: xor r14d, r14d
// asm:   0x5e78256: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e7825b: jmp 0x5e78091
// asm:   0x5e78260: mov rbx, rax
// asm:   0x5e78263: lea rdi, [rsp + 0x20]
// asm:   0x5e78268: call 0x2fe1990  ; il2cpp_runtime_helper_02fe1990()
// asm:   0x5e7826d: mov rdi, rbx
// asm:   0x5e78270: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e78275: mov rdi, rax
// asm:   0x5e78278: call 0x2ab61e0  ; __clang_call_terminate()

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__RenderInline(System_String_o *text,MethodInfo *method)

{
  byte bVar1;
  int32_t capacity;
  int iVar2;
  System_Text_RegularExpressions_Regex_o *__this;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  bool bVar5;
  System_Text_StringBuilder_o *__this_00;
  System_Text_RegularExpressions_MatchCollection_o *__this_01;
  VirtualInvokeData *pVVar6;
  System_Text_RegularExpressions_Capture_o *__this_02;
  System_String_o *pSVar7;
  System_Text_StringBuilder_o *pSVar8;
  Il2CppObject *pIVar9;
  int length;
  ulong uVar10;
  MethodInfo *pMVar11;
  long lVar12;
  uint startIndex;
  Il2CppObject *local_68;
  long local_60;
  System_String_o *local_58;
  Il2CppObject *local_50;
  undefined8 local_48;
  undefined1 *local_40;
  Il2CppObject **local_38;
  
  if (Il2CppMethodInitialized_075487d1 == '\0') {
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
    Il2CppMethodInitialized_075487d1 = '\x01';
  }
  local_68 = (Il2CppObject *)0x0;
  local_50 = (Il2CppObject *)0x0;
  bVar5 = System_String__IsNullOrEmpty(text,(MethodInfo *)0x0);
  if (bVar5) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (text != (System_String_o *)0x0) {
    capacity = (text->fields)._stringLength;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
    System_Text_StringBuilder___ctor_530d510(__this_00,capacity,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown)
      ;
    }
    __this = TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown->static_fields->InlinePattern;
    if ((__this != (System_Text_RegularExpressions_Regex_o *)0x0) &&
       (local_58 = text,
       __this_01 = System_Text_RegularExpressions_Regex__Matches(__this,text,(MethodInfo *)0x0),
       __this_01 != (System_Text_RegularExpressions_MatchCollection_o *)0x0)) {
      local_68 = (Il2CppObject *)
                 System_Text_RegularExpressions_MatchCollection__GetEnumerator(__this_01,(MethodInfo *)0x0);
      local_40 = (undefined1 *)&local_68;
      local_48 = 0;
      local_38 = &local_50;
      if (local_68 != (Il2CppObject *)0x0) {
        local_60 = 0;
        startIndex = 0;
        local_40 = (undefined1 *)&local_68;
        do {
          pIVar9 = local_68;
          pIVar3 = local_68->klass;
          uVar10 = (ulong)(pIVar3->_2).interface_offsets_count;
          if (uVar10 != 0) {
            pIVar4 = (pIVar3->_1).interfaceOffsets;
            lVar12 = 0;
            do {
              if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar12) ==
                  TypeInfo_System_Collections_IEnumerator) {
                pVVar6 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar12);
                goto label_05e77d63;
              }
              lVar12 = lVar12 + 0x10;
            } while (uVar10 * 0x10 != lVar12);
          }
          pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                             (local_68,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_05e77d63:
          bVar5 = (*pVVar6->methodPtr)(pIVar9,pVVar6->method);
          pIVar9 = local_68;
          if (!bVar5) {
            pIVar9 = il2cpp_vm_Object_IsInst(local_68,(Il2CppClass *)TypeInfo_System_IDisposable);
            local_50 = pIVar9;
            if (pIVar9 == (Il2CppObject *)0x0) goto label_05e78116;
            pIVar3 = pIVar9->klass;
            uVar10 = (ulong)(pIVar3->_2).interface_offsets_count;
            if (uVar10 == 0) goto label_05e780ef;
            pIVar4 = (pIVar3->_1).interfaceOffsets;
            lVar12 = 0;
            goto label_05e780e0;
          }
          if (local_68 == (Il2CppObject *)0x0) {
            ThrowNullReferenceException();
          }
          pIVar3 = local_68->klass;
          uVar10 = (ulong)(pIVar3->_2).interface_offsets_count;
          if (uVar10 != 0) {
            pIVar4 = (pIVar3->_1).interfaceOffsets;
            lVar12 = 0;
            do {
              if (*(System_Collections_IEnumerator_c **)((long)&pIVar4->interfaceType + lVar12) ==
                  TypeInfo_System_Collections_IEnumerator) {
                pVVar6 = pIVar3->vtable + (*(int *)((long)&pIVar4->offset + lVar12) + 1);
                goto label_05e77de7;
              }
              lVar12 = lVar12 + 0x10;
            } while (uVar10 * 0x10 != lVar12);
          }
          pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath
                             (local_68,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_05e77de7:
          __this_02 = (System_Text_RegularExpressions_Capture_o *)(*pVVar6->methodPtr)(pIVar9,pVVar6->method);
          if (__this_02 == (System_Text_RegularExpressions_Capture_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar1 = (TypeInfo_System_Text_RegularExpressions_Match->_2).typeHierarchyDepth;
          if (((__this_02->klass->_2).typeHierarchyDepth < bVar1) ||
             ((__this_02->klass->_2).typeHierarchy[(ulong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Match)) {
            il2cpp_codegen_raise_invalid_cast_exception(__this_02);
          }
          iVar2 = (__this_02->fields)._Index_k__BackingField;
          length = iVar2 - startIndex;
          if (length != 0 && (int)startIndex <= iVar2) {
            pMVar11 = (MethodInfo *)(ulong)startIndex;
            pSVar7 = System_String__Substring_53042f0(local_58,startIndex,length,(MethodInfo *)0x0);
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown);
            }
            pSVar7 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__Escape(pSVar7,pMVar11);
            if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Text_StringBuilder__Append_530ed80(__this_00,pSVar7,(MethodInfo *)0x0);
          }
          pSVar7 = System_Text_RegularExpressions_Capture__get_Value(__this_02,(MethodInfo *)0x0);
          if (pSVar7 == (System_String_o *)0x0) {
            ThrowNullReferenceException();
          }
          bVar5 = System_String__StartsWith_53002b0(pSVar7,"**",4,(MethodInfo *)0x0);
          if ((bVar5) &&
             (bVar5 = System_String__EndsWith_52ff780(pSVar7,"**",4,(MethodInfo *)0x0), bVar5
             )) {
            if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar8 = System_Text_StringBuilder__Append_530ed80
                               (__this_00,"<b>",(MethodInfo *)0x0);
            pMVar11 = (MethodInfo *)0x2;
            pSVar7 = System_String__Substring_53042f0
                               (pSVar7,2,(pSVar7->fields)._stringLength + -4,(MethodInfo *)0x0);
            if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown);
            }
            pSVar7 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__Escape(pSVar7,pMVar11);
            if (pSVar8 == (System_Text_StringBuilder_o *)0x0) {
              ThrowNullReferenceException();
            }
            pSVar8 = System_Text_StringBuilder__Append_530ed80(pSVar8,pSVar7,(MethodInfo *)0x0);
            if (pSVar8 == (System_Text_StringBuilder_o *)0x0) {
              ThrowNullReferenceException();
            }
            System_Text_StringBuilder__Append_530ed80(pSVar8,"</b>",(MethodInfo *)0x0);
          }
          else {
            pMVar11 = (MethodInfo *)"*";
            bVar5 = System_String__StartsWith_53002b0(pSVar7,"*",4,(MethodInfo *)0x0);
            if ((bVar5) &&
               (pMVar11 = (MethodInfo *)"*",
               bVar5 = System_String__EndsWith_52ff780(pSVar7,"*",4,(MethodInfo *)0x0),
               bVar5)) {
              if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar8 = System_Text_StringBuilder__Append_530ed80
                                 (__this_00,"<i>",(MethodInfo *)0x0);
              pMVar11 = (MethodInfo *)0x1;
              pSVar7 = System_String__Substring_53042f0
                                 (pSVar7,1,(pSVar7->fields)._stringLength + -2,(MethodInfo *)0x0);
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown->_2).cctor_finished_or_no_cctor == 0
                 ) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown);
              }
              pSVar7 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__Escape(pSVar7,pMVar11);
              if (pSVar8 == (System_Text_StringBuilder_o *)0x0) {
                ThrowNullReferenceException();
              }
              pSVar8 = System_Text_StringBuilder__Append_530ed80(pSVar8,pSVar7,(MethodInfo *)0x0);
              if (pSVar8 == (System_Text_StringBuilder_o *)0x0) {
                ThrowNullReferenceException();
              }
              System_Text_StringBuilder__Append_530ed80(pSVar8,"</i>",(MethodInfo *)0x0);
            }
            else {
              if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown->_2).cctor_finished_or_no_cctor == 0
                 ) {
                il2cpp_codegen_runtime_class_init
                          ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown);
              }
              pSVar7 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__Escape(pSVar7,pMVar11);
              if (__this_00 == (System_Text_StringBuilder_o *)0x0) {
                ThrowNullReferenceException();
              }
              System_Text_StringBuilder__Append_530ed80(__this_00,pSVar7,(MethodInfo *)0x0);
            }
          }
          startIndex = (__this_02->fields)._Length_k__BackingField +
                       (__this_02->fields)._Index_k__BackingField;
        } while (local_68 != (Il2CppObject *)0x0);
      }
      ThrowNullReferenceException();
    }
  }
  goto label_05e781e6;
  while (lVar12 = lVar12 + 0x10, uVar10 * 0x10 != lVar12) {
label_05e780e0:
    if (*(System_IDisposable_c **)((long)&pIVar4->interfaceType + lVar12) == TypeInfo_System_IDisposable) {
      pVVar6 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar12);
      goto label_05e7810d;
    }
  }
label_05e780ef:
  pVVar6 = GetInterfaceInvokeDataFromVTableSlowPath(pIVar9,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_05e7810d:
  (*pVVar6->methodPtr)(pIVar9,pVVar6->method);
label_05e78116:
  if (local_60 != 0) {
    il2cpp_codegen_rethrow();
  }
  if ((int)startIndex < (local_58->fields)._stringLength) {
    pMVar11 = (MethodInfo *)(ulong)startIndex;
    pSVar7 = System_String__Substring(local_58,startIndex,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown)
      ;
    }
    pSVar7 = Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__Escape(pSVar7,pMVar11);
    if (__this_00 != (System_Text_StringBuilder_o *)0x0) {
      System_Text_StringBuilder__Append_530ed80(__this_00,pSVar7,(MethodInfo *)0x0);
label_05e78180:
      pSVar7 = (*(__this_00->klass->vtable)._3_ToString.methodPtr)
                         (__this_00,(__this_00->klass->vtable)._3_ToString.method);
      return pSVar7;
    }
  }
  else if (__this_00 != (System_Text_StringBuilder_o *)0x0) goto label_05e78180;
label_05e781e6:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgChangelogMarkdown$$TryReadHeader
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__TryReadHeader (System_String_o* line, System_String_o** header, const MethodInfo* method);
// 0x5e779f0

bool Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__TryReadHeader
               (System_String_o *line,System_String_o **header,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  int32_t startIndex;
  
  if (Il2CppMethodInitialized_075487d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"## ");
    il2cpp_codegen_initialize_runtime_metadata(&"# ");
    Il2CppMethodInitialized_075487d2 = '\x01';
  }
  *header = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  Il2CppCodeGenWriteBarrier(header);
  if (line != (System_String_o *)0x0) {
    bVar1 = System_String__StartsWith_53002b0(line,"# ",4,(MethodInfo *)0x0);
    startIndex = 2;
    if (!bVar1) {
      bVar1 = System_String__StartsWith_53002b0(line,"## ",4,(MethodInfo *)0x0);
      startIndex = 3;
      if (!bVar1) {
        return false;
      }
    }
    pSVar2 = System_String__Substring(line,startIndex,(MethodInfo *)0x0);
    *header = pSVar2;
    Il2CppCodeGenWriteBarrier(header);
    if (*header != (System_String_o *)0x0) {
      pSVar2 = System_String__Trim(*header,(MethodInfo *)0x0);
      *header = pSVar2;
      Il2CppCodeGenWriteBarrier(header);
      if (*header != (System_String_o *)0x0) {
        return 0 < ((*header)->fields)._stringLength;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgChangelogMarkdown$$IsBullet
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__IsBullet (System_String_o* line, const MethodInfo* method);
// 0x5e77af0

bool Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__IsBullet(System_String_o *line,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_075487d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"- ");
    Il2CppMethodInitialized_075487d3 = '\x01';
  }
  if (line == (System_String_o *)0x0) {
    bVar2 = false;
  }
  else {
    bVar2 = false;
    bVar1 = System_String__StartsWith_53002b0(line,"- ",4,(MethodInfo *)0x0);
    if (bVar1) {
      bVar2 = 2 < (line->fields)._stringLength;
    }
  }
  return bVar2;
}


// Gisketch.Aottg2UI.Game.AottgChangelogMarkdown$$Escape
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__Escape (System_String_o* value, const MethodInfo* method);
// 0x5e78280

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangelogMarkdown__Escape(System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_075487d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"&amp;");
    il2cpp_codegen_initialize_runtime_metadata(&"<");
    il2cpp_codegen_initialize_runtime_metadata(&"&gt;");
    il2cpp_codegen_initialize_runtime_metadata(&"&");
    il2cpp_codegen_initialize_runtime_metadata(&"&lt;");
    il2cpp_codegen_initialize_runtime_metadata(&">");
    Il2CppMethodInitialized_075487d4 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (value != (System_String_o *)0x0) {
    pSVar2 = System_String__Replace_5304550
                       (value,"&","&amp;",(MethodInfo *)0x0);
    if (pSVar2 != (System_String_o *)0x0) {
      pSVar2 = System_String__Replace_5304550
                         (pSVar2,"<","&lt;",(MethodInfo *)0x0);
      if (pSVar2 != (System_String_o *)0x0) {
        pSVar2 = System_String__Replace_5304550
                           (pSVar2,">","&gt;",(MethodInfo *)0x0);
        return pSVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgChangelogMarkdown$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangelogMarkdown___cctor (const MethodInfo* method);
// 0x5e78380

void Gisketch_Aottg2UI_Game_AottgChangelogMarkdown___cctor(MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *__this;
  
  if (Il2CppMethodInitialized_075487d5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_Regex);
    il2cpp_codegen_initialize_runtime_metadata(&"(\\*\\*[^*]+\\*\\*|\\*[^*]+\\*)");
    Il2CppMethodInitialized_075487d5 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  System_Text_RegularExpressions_Regex___ctor_61e4b50(__this,"(\\*\\*[^*]+\\*\\*|\\*[^*]+\\*)",8,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown->static_fields->InlinePattern = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgChangelogMarkdown->static_fields->InlinePattern);
  return;
}


