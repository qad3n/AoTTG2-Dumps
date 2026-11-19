// Type: Anticheat.ChatFilter
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Anticheat/ChatFilter.cs
// Prior real C# source (older reference): Assets/Scripts/Anticheat/ChatFilter.cs
// --------------------------------

// Anticheat.ChatFilter.<>c$$.cctor
// il2cpp: void Anticheat_ChatFilter___c___cctor (const MethodInfo* method);
// 0x5e2ee10

void Anticheat_ChatFilter___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07548537 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter_c);
    Il2CppMethodInitialized_07548537 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_ChatFilter_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Anticheat_ChatFilter_c->static_fields->__9 = (Anticheat_ChatFilter___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Anticheat_ChatFilter_c->static_fields->__9);
  return;
}


// Anticheat.ChatFilter.<>c$$.ctor
// il2cpp: void Anticheat_ChatFilter___c___ctor (Anticheat_ChatFilter___c_o* __this, const MethodInfo* method);
// 0x5e2ee80

void Anticheat_ChatFilter___c___ctor(Anticheat_ChatFilter___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ChatFilter.<>c$$<FilterBadWords>b__5_0
// il2cpp: System_String_o* Anticheat_ChatFilter___c___FilterBadWords_b__5_0 (Anticheat_ChatFilter___c_o* __this, System_Text_RegularExpressions_Match_o* match, const MethodInfo* method);
// 0x5e2ee90

System_String_o *
Anticheat_ChatFilter___c___FilterBadWords_b__5_0
          (Anticheat_ChatFilter___c_o *__this,System_Text_RegularExpressions_Match_o *match,MethodInfo *method
          )

{
  System_String_o *pSVar1;
  
  if (match == (System_Text_RegularExpressions_Match_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = System_String__CreateString_5309000
                     ((System_String_o *)0x0,0x2a,(match->fields)._Length_k__BackingField,(MethodInfo *)0x0);
  return pSVar1;
}


// Anticheat.ChatFilter.<>c$$<FilterSizeTag>b__6_0
// il2cpp: System_String_o* Anticheat_ChatFilter___c___FilterSizeTag_b__6_0 (Anticheat_ChatFilter___c_o* __this, System_Text_RegularExpressions_Match_o* match, const MethodInfo* method);
// 0x5e2eeb0

System_String_o *
Anticheat_ChatFilter___c___FilterSizeTag_b__6_0
          (Anticheat_ChatFilter___c_o *__this,System_Text_RegularExpressions_Match_o *match,MethodInfo *method
          )

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07548538 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"<size=20>");
    Il2CppMethodInitialized_07548538 = '\x01';
  }
  if (match != (System_Text_RegularExpressions_Match_o *)0x0) {
    if ("<size=20>" != (System_String_o *)0x0) {
      if (("<size=20>"->fields)._stringLength < (match->fields)._Length_k__BackingField) {
        return "<size=20>";
      }
      pSVar1 = System_Text_RegularExpressions_Capture__get_Value
                         ((System_Text_RegularExpressions_Capture_o *)match,(MethodInfo *)0x0);
      return pSVar1;
    }
  }
  ThrowNullReferenceException();
}


// Anticheat.ChatFilter$$Init
// il2cpp: void Anticheat_ChatFilter__Init (const MethodInfo* method);
// 0x5e2e300

void Anticheat_ChatFilter__Init(MethodInfo *method)

{
  int32_t *piVar1;
  uint16_t item;
  uint uVar2;
  System_Collections_Generic_List_Regex__o *__this;
  System_Text_RegularExpressions_Regex_array *pSVar3;
  System_Collections_Generic_List_char__o *__this_00;
  MethodInfo *pMVar4;
  bool bVar5;
  System_String_o *pSVar6;
  SimpleJSONFixed_JSONNode_o *pSVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  SimpleJSONFixed_JSONArray_o *pSVar9;
  System_Text_RegularExpressions_Regex_o *__this_01;
  System_Char_array *pSVar10;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o SVar11;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_c8;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_78;
  
  if (Il2CppMethodInitialized_07548533 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Regex_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_char_Add);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_Regex);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&"banned_regex");
    il2cpp_codegen_initialize_runtime_metadata(&"ChatFilterInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"banned_char");
    Il2CppMethodInitialized_07548533 = '\x01';
  }
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar6 = TypeInfo_Utility_ResourcePaths->static_fields->Info;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pSVar6 = ApplicationManagers_ResourceManager__TryLoadText(pSVar6,"ChatFilterInfo",(MethodInfo *)0x0);
  pSVar7 = SimpleJSONFixed_JSON__Parse(pSVar6,(MethodInfo *)0x0);
  if (pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0) {
    pSVar8 = (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                       (pSVar7,"banned_regex",(pSVar7->klass->vtable)._7_get_Item.method);
    if (pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) {
      pSVar9 = (*(pSVar8->klass->vtable)._45_get_AsArray.methodPtr)
                         (pSVar8,(pSVar8->klass->vtable)._45_get_AsArray.method);
      if (pSVar9 != (SimpleJSONFixed_JSONArray_o *)0x0) {
        (*(pSVar9->klass->vtable)._32_GetEnumerator.methodPtr)
                  ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,pSVar9,
                   (pSVar9->klass->vtable)._32_GetEnumerator.method);
        local_c8.m_Array.fields._current = local_78.m_Array.fields._current;
        local_c8.m_Array.fields._list = local_78.m_Array.fields._list;
        local_c8.m_Array.fields._index = local_78.m_Array.fields._index;
        local_c8.m_Array.fields._version = local_78.m_Array.fields._version;
        local_c8.m_Object.fields._current.fields.value = local_78.m_Object.fields._current.fields.value;
        local_c8.m_Object.fields._getEnumeratorRetType = local_78.m_Object.fields._getEnumeratorRetType;
        local_c8.m_Object.fields._36_4_ = local_78.m_Object.fields._36_4_;
        local_c8.m_Object.fields._version = local_78.m_Object.fields._version;
        local_c8.m_Object.fields._index = local_78.m_Object.fields._index;
        local_c8.m_Object.fields._current.fields.key = local_78.m_Object.fields._current.fields.key;
        local_c8.type = local_78.type;
        local_c8._4_4_ = local_78._4_4_;
        local_c8.m_Object.fields._dictionary = local_78.m_Object.fields._dictionary;
        bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
        if (bVar5) {
          do {
            SVar11 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                               ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
            if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
            }
            pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar11,(MethodInfo *)0x0);
            if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05e2e79d;
            pSVar6 = (*(pSVar8->klass->vtable)._9_get_Value.methodPtr)
                               (pSVar8,(pSVar8->klass->vtable)._9_get_Value.method);
            __this_01 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
            System_Text_RegularExpressions_Regex___ctor_61e4b50(__this_01,pSVar6,8,(MethodInfo *)0x0);
            if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
            }
            pMVar4 = MethodInfo_System_Collections_Generic_List_Regex_Add;
            __this = TypeInfo_Anticheat_ChatFilter->static_fields->_bannedRegex;
            if (__this == (System_Collections_Generic_List_Regex__o *)0x0) goto label_05e2e79d;
            piVar1 = &(__this->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (__this->fields)._items;
            if (pSVar3 == (System_Text_RegularExpressions_Regex_array *)0x0) goto label_05e2e79d;
            uVar2 = (__this->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              (__this->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = __this_01;
              Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)__this_01,
                         (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
            }
            bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                              ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
          } while (bVar5);
        }
        pSVar7 = (*(pSVar7->klass->vtable)._7_get_Item.methodPtr)
                           (pSVar7,"banned_char",(pSVar7->klass->vtable)._7_get_Item.method);
        if (pSVar7 != (SimpleJSONFixed_JSONNode_o *)0x0) {
          pSVar9 = (*(pSVar7->klass->vtable)._45_get_AsArray.methodPtr)
                             (pSVar7,(pSVar7->klass->vtable)._45_get_AsArray.method);
          if (pSVar9 != (SimpleJSONFixed_JSONArray_o *)0x0) {
            (*(pSVar9->klass->vtable)._32_GetEnumerator.methodPtr)
                      ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_78,pSVar9,
                       (pSVar9->klass->vtable)._32_GetEnumerator.method);
            local_c8.m_Array.fields._current = local_78.m_Array.fields._current;
            local_c8.m_Array.fields._list = local_78.m_Array.fields._list;
            local_c8.m_Array.fields._index = local_78.m_Array.fields._index;
            local_c8.m_Array.fields._version = local_78.m_Array.fields._version;
            local_c8.m_Object.fields._current.fields.value = local_78.m_Object.fields._current.fields.value;
            local_c8.m_Object.fields._getEnumeratorRetType = local_78.m_Object.fields._getEnumeratorRetType;
            local_c8.m_Object.fields._36_4_ = local_78.m_Object.fields._36_4_;
            local_c8.m_Object.fields._version = local_78.m_Object.fields._version;
            local_c8.m_Object.fields._index = local_78.m_Object.fields._index;
            local_c8.m_Object.fields._current.fields.key = local_78.m_Object.fields._current.fields.key;
            local_c8.type = local_78.type;
            local_c8._4_4_ = local_78._4_4_;
            local_c8.m_Object.fields._dictionary = local_78.m_Object.fields._dictionary;
            bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                              ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
            if (bVar5) {
              do {
                SVar11 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                                   ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
                if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
                }
                pSVar7 = SimpleJSONFixed_JSONNode__op_Implicit_57641c0(SVar11,(MethodInfo *)0x0);
                if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
                }
                if (pSVar7 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_05e2e79d;
                __this_00 = TypeInfo_Anticheat_ChatFilter->static_fields->_bannedChar;
                pSVar6 = (*(pSVar7->klass->vtable)._9_get_Value.methodPtr)
                                   (pSVar7,(pSVar7->klass->vtable)._9_get_Value.method);
                if (pSVar6 == (System_String_o *)0x0) goto label_05e2e79d;
                pSVar10 = System_String__ToCharArray(pSVar6,(MethodInfo *)0x0);
                pMVar4 = MethodInfo_System_Collections_Generic_List_char_Add;
                if (pSVar10 == (System_Char_array *)0x0) goto label_05e2e79d;
                if ((int)pSVar10->max_length == 0) {
                  ThrowIndexOutOfRangeException();
                }
                if (__this_00 == (System_Collections_Generic_List_char__o *)0x0) goto label_05e2e79d;
                item = pSVar10->m_Items[0];
                piVar1 = &(__this_00->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar10 = (__this_00->fields)._items;
                if (pSVar10 == (System_Char_array *)0x0) goto label_05e2e79d;
                uVar2 = (__this_00->fields)._size;
                if (uVar2 < (uint)pSVar10->max_length) {
                  (__this_00->fields)._size = uVar2 + 1;
                  pSVar10->m_Items[(int)uVar2] = item;
                }
                else {
                  System_Collections_Generic_List_char___AddWithResize
                            (__this_00,item,(MethodInfo_51E8BC0 *)pMVar4->klass->rgctx_data[0xe].method);
                }
                bVar5 = SimpleJSONFixed_JSONNode_Enumerator__MoveNext
                                  ((SimpleJSONFixed_JSONNode_Enumerator_o *)&local_c8,(MethodInfo *)0x0);
              } while (bVar5);
            }
            return;
          }
        }
      }
    }
  }
label_05e2e79d:
  ThrowNullReferenceException();
}


// Anticheat.ChatFilter$$FilterBadWords
// il2cpp: System_String_o* Anticheat_ChatFilter__FilterBadWords (System_String_o* text, const MethodInfo* method);
// 0x5e2e7b0
// eh: try 0x5e2e907..0x5e2eab1 -> pad 0x5e2eacb (+9 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x5e2eae3..0x5e2eae8 -> pad 0x5e2eb14 cleanup
// eh: try 0x5e2eb17..0x5e2eb21 -> pad 0x5e2eb7a catch (...) [compiler noexcept guard]
// eh: try 0x5e2eb3b..0x5e2eb40 -> pad 0x5e2eb65 cleanup
// eh: try 0x5e2eb68..0x5e2eb72 -> pad 0x5e2eb7a catch (...) [compiler noexcept guard]
// asm: 57 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e2e8fd: nop dword ptr [rax]
// asm:   0x5e2e93c: jmp 0x5e2e958
// asm:   0x5e2ea4d: nop dword ptr [rax]
// asm:   0x5e2eab6: jmp 0x5e2eacb
// asm:   0x5e2eab8: jmp 0x5e2eacb
// asm:   0x5e2eaba: jmp 0x5e2eacb
// asm:   0x5e2eabc: jmp 0x5e2eacb
// asm:   0x5e2eabe: jmp 0x5e2eacb
// asm:   0x5e2eac0: jmp 0x5e2eacb
// asm:   0x5e2eac2: mov r14, rax
// asm:   0x5e2eac5: xor ebx, ebx
// asm:   0x5e2eac7: jmp 0x5e2eb26
// asm:   0x5e2eac9: jmp 0x5e2eb23
// asm:   0x5e2eacb: mov r14, rax
// asm:   0x5e2eace: cmp edx, 1
// asm:   0x5e2ead1: jne 0x5e2eb17
// asm:   0x5e2ead3: mov rdi, r14
// asm:   0x5e2ead6: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e2eadb: mov rbx, qword ptr [rax]
// asm:   0x5e2eade: mov qword ptr [rsp + 8], rbx
// asm:   0x5e2eae3: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e2eae8: lea rax, [rip + 0x145fd21]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Regex_Dispose
// asm:   0x5e2eaef: mov rsi, qword ptr [rax]
// asm:   0x5e2eaf2: lea rdi, [rsp + 0x20]
// asm:   0x5e2eaf7: call 0x4d45c40  ; System_Collections_Generic_List_Enumerator_object___Dispose()
// asm:   0x5e2eafc: test rbx, rbx
// asm:   0x5e2eaff: lea rbp, [rip + 0x1447a72]  ; TypeInfo_Anticheat_ChatFilter
// asm:   0x5e2eb06: je 0x5e2e9f7
// asm:   0x5e2eb0c: mov rdi, rbx
// asm:   0x5e2eb0f: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5e2eb14: mov r14, rax
// asm:   0x5e2eb17: lea rdi, [rsp + 8]
// asm:   0x5e2eb1c: call 0x2fe0ee0  ; il2cpp_runtime_helper_02fe0ee0()
// asm:   0x5e2eb21: jmp 0x5e2eb72
// asm:   0x5e2eb23: mov r14, rax
// asm:   0x5e2eb26: cmp edx, 1
// asm:   0x5e2eb29: jne 0x5e2eb68
// asm:   0x5e2eb2b: mov rdi, r14
// asm:   0x5e2eb2e: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x5e2eb33: mov r14, qword ptr [rax]
// asm:   0x5e2eb36: mov qword ptr [rsp + 8], r14
// asm:   0x5e2eb3b: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x5e2eb40: lea rax, [rip + 0x145edb1]  ; MethodInfo_System_Collections_Generic_List_Enumerator_char_Dispose
// asm:   0x5e2eb47: mov rsi, qword ptr [rax]
// asm:   0x5e2eb4a: lea rdi, [rsp + 0x40]
// asm:   0x5e2eb4f: call 0x4d2c950  ; System_Collections_Generic_List_Enumerator_char___Dispose()
// asm:   0x5e2eb54: test r14, r14
// asm:   0x5e2eb57: je 0x5e2ea95
// asm:   0x5e2eb5d: mov rdi, r14
// asm:   0x5e2eb60: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x5e2eb65: mov r14, rax
// asm:   0x5e2eb68: lea rdi, [rsp + 8]
// asm:   0x5e2eb6d: call 0x2fe0f10  ; il2cpp_runtime_helper_02fe0f10()
// asm:   0x5e2eb72: mov rdi, r14
// asm:   0x5e2eb75: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x5e2eb7a: mov rdi, rax
// asm:   0x5e2eb7d: call 0x2ab61e0  ; __clang_call_terminate()

System_String_o * Anticheat_ChatFilter__FilterBadWords(System_String_o *text,MethodInfo *method)

{
  System_Collections_Generic_List_Regex__o *__this;
  Il2CppObject *object;
  System_Collections_Generic_List_char__o *__this_00;
  System_Text_RegularExpressions_Regex_o *__this_01;
  bool bVar1;
  Anticheat_ChatFilter___c_StaticFields *pAVar2;
  System_Text_RegularExpressions_MatchEvaluator_o *__this_02;
  undefined1 local_80 [16];
  System_Text_RegularExpressions_Regex_o *local_70;
  undefined1 local_68 [8];
  undefined1 *puStack_60;
  System_Text_RegularExpressions_Regex_o *local_58;
  System_Collections_Generic_List_Enumerator_T__o local_48;
  
  if (Il2CppMethodInitialized_07548534 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_char_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Regex_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Regex_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_char_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_char_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_Regex_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_char_GetEnumerator)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Regex_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_MatchEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Anticheat_ChatFilter_c_FilterBadWords_b__5_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter_c);
    Il2CppMethodInitialized_07548534 = '\x01';
  }
  local_68 = (undefined1  [8])0x0;
  puStack_60 = (undefined1 *)0x0;
  local_58 = (System_Text_RegularExpressions_Regex_o *)0x0;
  local_48.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_48.fields._index = 0;
  local_48.fields._version = 0;
  local_48.fields._current = (Il2CppObject *)0x0;
  if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
  }
  __this = TypeInfo_Anticheat_ChatFilter->static_fields->_bannedRegex;
  if (__this != (System_Collections_Generic_List_Regex__o *)0x0) {
    System_Collections_Generic_List_object___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_80,
               (System_Collections_Generic_List_object__o *)__this,
               (MethodInfo_395E050 *)MethodInfo_System_Collections_Generic_List_Regex_GetEnumerator);
    local_58 = local_70;
    local_68 = (undefined1  [8])local_80._0_8_;
    puStack_60 = (undefined1 *)local_80._8_8_;
    local_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_80._8_8_ = local_68;
    while (bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                             ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
                              (MethodInfo_4C45C50 *)
                              MethodInfo_System_Collections_Generic_List_Enumerator_Regex_MoveNext),
          __this_01 = local_58, bVar1) {
      if ((TypeInfo_Anticheat_ChatFilter_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter_c);
        pAVar2 = TypeInfo_Anticheat_ChatFilter_c->static_fields;
        __this_02 = pAVar2->__9__5_0;
      }
      else {
        pAVar2 = TypeInfo_Anticheat_ChatFilter_c->static_fields;
        __this_02 = pAVar2->__9__5_0;
      }
      if (__this_02 == (System_Text_RegularExpressions_MatchEvaluator_o *)0x0) {
        if ((((Il2CppClass *)TypeInfo_Anticheat_ChatFilter_c)->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter_c);
          pAVar2 = TypeInfo_Anticheat_ChatFilter_c->static_fields;
        }
        object = (Il2CppObject *)pAVar2->__9;
        __this_02 = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_MatchEvaluator);
        System_Text_RegularExpressions_MatchEvaluator___ctor
                  (__this_02,object,(intptr_t)MethodInfo_Anticheat_ChatFilter_c_FilterBadWords_b__5_0,
                   (MethodInfo *)0x0);
        pAVar2 = TypeInfo_Anticheat_ChatFilter_c->static_fields;
        pAVar2->__9__5_0 = __this_02;
        Il2CppCodeGenWriteBarrier(&pAVar2->__9__5_0);
      }
      if (__this_01 == (System_Text_RegularExpressions_Regex_o *)0x0) {
        ThrowNullReferenceException();
      }
      text = System_Text_RegularExpressions_Regex__Replace_61e3fe0(__this_01,text,__this_02,(MethodInfo *)0x0)
      ;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((System_Collections_Generic_List_Enumerator_object__o *)local_68,
               (MethodInfo_4C45C40 *)MethodInfo_System_Collections_Generic_List_Enumerator_Regex_Dispose);
    if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
    }
    __this_00 = TypeInfo_Anticheat_ChatFilter->static_fields->_bannedChar;
    if (__this_00 != (System_Collections_Generic_List_char__o *)0x0) {
      System_Collections_Generic_List_char___GetEnumerator
                (&local_48,__this_00,
                 (MethodInfo_51E99B0 *)MethodInfo_System_Collections_Generic_List_char_GetEnumerator);
      local_80._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_80._8_8_ = &local_48;
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator_char___MoveNext
                          (&local_48,
                           (MethodInfo_4C2C960 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_char_MoveNext);
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator_char___Dispose
                    (&local_48,
                     (MethodInfo_4C2C950 *)MethodInfo_System_Collections_Generic_List_Enumerator_char_Dispose)
          ;
          return text;
        }
        if (text == (System_String_o *)0x0) break;
        text = System_String__Replace(text,(uint16_t)local_48.fields._current,0x2a,(MethodInfo *)0x0);
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// Anticheat.ChatFilter$$FilterSizeTag
// il2cpp: System_String_o* Anticheat_ChatFilter__FilterSizeTag (System_String_o* text, const MethodInfo* method);
// 0x5e2eb90
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e2ec26: test r15, r15
// asm:   0x5e2ec29: je 0x5e2ecca

System_String_o * Anticheat_ChatFilter__FilterSizeTag(System_String_o *text,MethodInfo *method)

{
  System_Text_RegularExpressions_Regex_o *__this;
  Il2CppObject *object;
  System_String_o *pSVar1;
  Anticheat_ChatFilter___c_StaticFields *pAVar2;
  System_Text_RegularExpressions_MatchEvaluator_o *__this_00;
  
  if (Il2CppMethodInitialized_07548535 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_MatchEvaluator);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Anticheat_ChatFilter_c_FilterSizeTag_b__6_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter_c);
    Il2CppMethodInitialized_07548535 = '\x01';
  }
  if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
  }
  __this = TypeInfo_Anticheat_ChatFilter->static_fields->SizeTagRegex;
  if ((TypeInfo_Anticheat_ChatFilter_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter_c);
    pAVar2 = TypeInfo_Anticheat_ChatFilter_c->static_fields;
    __this_00 = pAVar2->__9__6_0;
  }
  else {
    pAVar2 = TypeInfo_Anticheat_ChatFilter_c->static_fields;
    __this_00 = pAVar2->__9__6_0;
  }
  if (__this_00 == (System_Text_RegularExpressions_MatchEvaluator_o *)0x0) {
    if ((((Il2CppClass *)TypeInfo_Anticheat_ChatFilter_c)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter_c);
      pAVar2 = TypeInfo_Anticheat_ChatFilter_c->static_fields;
    }
    object = (Il2CppObject *)pAVar2->__9;
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_MatchEvaluator);
    System_Text_RegularExpressions_MatchEvaluator___ctor
              (__this_00,object,(intptr_t)MethodInfo_Anticheat_ChatFilter_c_FilterSizeTag_b__6_0,
               (MethodInfo *)0x0);
    pAVar2 = TypeInfo_Anticheat_ChatFilter_c->static_fields;
    pAVar2->__9__6_0 = __this_00;
    Il2CppCodeGenWriteBarrier(&pAVar2->__9__6_0);
  }
  if (__this == (System_Text_RegularExpressions_Regex_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar1 = System_Text_RegularExpressions_Regex__Replace_61e3fe0(__this,text,__this_00,(MethodInfo *)0x0);
  return pSVar1;
}


// Anticheat.ChatFilter$$.cctor
// il2cpp: void Anticheat_ChatFilter___cctor (const MethodInfo* method);
// 0x5e2ecd0

void Anticheat_ChatFilter___cctor(MethodInfo *method)

{
  Anticheat_ChatFilter_StaticFields *pAVar1;
  System_Collections_Generic_List_Regex__o *__this;
  System_Collections_Generic_List_char__o *__this_00;
  System_Text_RegularExpressions_Regex_o *__this_01;
  
  if (Il2CppMethodInitialized_07548536 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Regex_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_char_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_char);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Regex);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_Regex);
    il2cpp_codegen_initialize_runtime_metadata(&"<size=.*?>");
    Il2CppMethodInitialized_07548536 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Regex);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_Regex_ctor);
  TypeInfo_Anticheat_ChatFilter->static_fields->_bannedRegex = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Anticheat_ChatFilter->static_fields->_bannedRegex);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_char);
  System_Collections_Generic_List_char____ctor
            (__this_00,(MethodInfo_51E82A0 *)MethodInfo_System_Collections_Generic_List_char_ctor);
  pAVar1 = TypeInfo_Anticheat_ChatFilter->static_fields;
  pAVar1->_bannedChar = __this_00;
  Il2CppCodeGenWriteBarrier(&pAVar1->_bannedChar);
  __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
  System_Text_RegularExpressions_Regex___ctor_61e4b50(__this_01,"<size=.*?>",9,(MethodInfo *)0x0);
  pAVar1 = TypeInfo_Anticheat_ChatFilter->static_fields;
  pAVar1->SizeTagRegex = __this_01;
  Il2CppCodeGenWriteBarrier(&pAVar1->SizeTagRegex);
  return;
}


