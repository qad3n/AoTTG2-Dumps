// Type: Anticheat.ChatFilter
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Anticheat/ChatFilter.cs
// Prior real C# source (older reference): Assets/Scripts/Anticheat/ChatFilter.cs
// --------------------------------

// Anticheat.ChatFilter.<>c$$.cctor
// il2cpp: void Anticheat_ChatFilter___c___cctor (const MethodInfo* method);
// 0x182376ed0

void Anticheat_ChatFilter___c___cctor(MethodInfo *method)

{
  Anticheat_ChatFilter___c_o *__this;
  
  if (Il2CppMethodInitialized_184347a7e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter_c);
    Il2CppMethodInitialized_184347a7e = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_ChatFilter_c);
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Anticheat_ChatFilter_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Anticheat_ChatFilter_c->static_fields->__9,__this);
  return;
}


// Anticheat.ChatFilter.<>c$$.ctor
// il2cpp: void Anticheat_ChatFilter___c___ctor (Anticheat_ChatFilter___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Anticheat_ChatFilter___c___ctor(Anticheat_ChatFilter___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ChatFilter.<>c$$<FilterBadWords>b__3_0
// il2cpp: System_String_o* Anticheat_ChatFilter___c___FilterBadWords_b__3_0 (Anticheat_ChatFilter___c_o* __this, System_Text_RegularExpressions_Match_o* match, const MethodInfo* method);
// 0x182374810

System_String_o *
Anticheat_ChatFilter___c___FilterBadWords_b__3_0
          (Anticheat_ChatFilter___c_o *__this,System_Text_RegularExpressions_Match_o *match,MethodInfo *method
          )

{
  System_String_o *pSVar1;
  
  if (match != (System_Text_RegularExpressions_Match_o *)0x0) {
    pSVar1 = System_String__CreateString_196aec0
                       ((System_String_o *)0x0,0x2a,(match->fields)._Length_k__BackingField,(MethodInfo *)0x0)
    ;
    return pSVar1;
  }
  ThrowNullReferenceException();
}


// Anticheat.ChatFilter.<>c__DisplayClass4_0$$.ctor
// il2cpp: void Anticheat_ChatFilter___c__DisplayClass4_0___ctor (Anticheat_ChatFilter___c__DisplayClass4_0_o* __this, const MethodInfo* method);
// 0x18054c890

void
Anticheat_ChatFilter___c__DisplayClass4_0___ctor(Anticheat_ChatFilter___c__DisplayClass4_0_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Anticheat.ChatFilter.<>c__DisplayClass4_0$$<FilterSizeTag>b__0
// il2cpp: bool Anticheat_ChatFilter___c__DisplayClass4_0___FilterSizeTag_b__0 (Anticheat_ChatFilter___c__DisplayClass4_0_o* __this, System_Collections_Generic_KeyValuePair_int__string__o p, const MethodInfo* method);
// 0x182375340

bool Anticheat_ChatFilter___c__DisplayClass4_0___FilterSizeTag_b__0
               (Anticheat_ChatFilter___c__DisplayClass4_0_o *__this,
               System_Collections_Generic_KeyValuePair_int__string__o *p,MethodInfo *method)

{
  System_Text_RegularExpressions_Match_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347a7f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_int_string_get_Key);
    Il2CppMethodInitialized_184347a7f = '\x01';
  }
  pSVar1 = (__this->fields).match;
  if (pSVar1 != (System_Text_RegularExpressions_Match_o *)0x0) {
    return (p->fields).key == (pSVar1->fields)._Index_k__BackingField;
  }
  ThrowNullReferenceException();
}


// Anticheat.ChatFilter$$Init
// il2cpp: void Anticheat_ChatFilter__Init (const MethodInfo* method);
// 0x18236ad70
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18236af34: nop dword ptr [rax]
// asm:   0x18236af38: nop dword ptr [rax + rax]
// asm:   0x18236b0f4: nop dword ptr [rax]
// asm:   0x18236b0f8: nop dword ptr [rax + rax]

void Anticheat_ChatFilter__Init(MethodInfo *method)

{
  int32_t *piVar1;
  uint16_t item;
  uint uVar2;
  System_Collections_Generic_List_Regex__o *__this;
  System_Text_RegularExpressions_Regex_array *pSVar3;
  System_Collections_Generic_List_T__o *__this_00;
  System_Object_array *pSVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  System_String_o *pSVar7;
  SimpleJSONFixed_JSONNode_o *pSVar8;
  System_Xml_Schema_XmlSchema_o *pSVar9;
  longlong *plVar10;
  undefined8 *puVar11;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o *pSVar12;
  SimpleJSONFixed_JSONNode_o *pSVar13;
  System_Text_RegularExpressions_Regex_o *__this_01;
  System_Char_array *pSVar14;
  SimpleJSONFixed_JSONNode_Enumerator_Fields local_d8;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_88;
  System_Collections_Generic_KeyValuePair_string__JSONNode__o local_78;
  undefined1 local_68 [96];
  
  if (Il2CppMethodInitialized_184347a7a == '\0') {
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
    Il2CppMethodInitialized_184347a7a = '\x01';
  }
  local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)0x0;
  local_d8.type = 0;
  local_d8._4_4_ = 0;
  local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0;
  local_d8.m_Object.fields._version = 0;
  local_d8.m_Object.fields._index = 0;
  local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)0x0;
  local_d8.m_Object.fields._getEnumeratorRetType = 0;
  local_d8.m_Object.fields._36_4_ = 0;
  local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)0x0;
  local_d8.m_Array.fields._index = 0;
  local_d8.m_Array.fields._version = 0;
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar7 = TypeInfo_Utility_ResourcePaths->static_fields->Info;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pSVar7 = ApplicationManagers_ResourceManager__TryLoadText(pSVar7,"ChatFilterInfo",(MethodInfo *)0x0);
  pSVar8 = SimpleJSONFixed_JSON__Parse(pSVar7,(MethodInfo *)0x0);
  if (((pSVar8 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
      (pSVar9 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)(pSVar8,(MethodInfo *)"banned_regex"),
      pSVar9 != (System_Xml_Schema_XmlSchema_o *)0x0)) &&
     (plVar10 = (longlong *)
                (*(code *)((Il2CppClass *)pSVar9->klass)->vtable[45].methodPtr)
                          (pSVar9,((Il2CppClass *)pSVar9->klass)->vtable[45].method),
     plVar10 != (longlong *)0x0)) {
    puVar11 = (undefined8 *)(**(code **)(*plVar10 + 0x338))(local_68);
    local_d8._0_8_ = *puVar11;
    local_d8.m_Object.fields._dictionary = (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar11[1]
    ;
    local_d8.m_Object.fields._8_8_ = puVar11[2];
    local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)puVar11[3];
    local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)puVar11[4];
    local_d8.m_Object.fields._32_8_ = puVar11[5];
    local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar11[6];
    local_d8.m_Array.fields._8_8_ = puVar11[7];
    local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar11[8];
    bVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                      ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
    if (bVar6) {
      do {
        pSVar12 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                            (&local_78,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0);
        pSVar7 = (pSVar12->fields).key;
        pSVar13 = (pSVar12->fields).value;
        if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
        }
        local_88.fields.key = pSVar7;
        local_88.fields.value = pSVar13;
        pSVar13 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_88,(MethodInfo *)0x0);
        if (pSVar13 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_18236b231;
        pSVar7 = (*(pSVar13->klass->vtable)._9_get_Value.methodPtr)
                           (pSVar13,(pSVar13->klass->vtable)._9_get_Value.method);
        __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
        System_Text_RegularExpressions_Regex___ctor_285f6f0(__this_01,pSVar7,8,(MethodInfo *)0x0);
        if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
        }
        pMVar5 = MethodInfo_System_Collections_Generic_List_Regex_Add;
        __this = TypeInfo_Anticheat_ChatFilter->static_fields->_bannedRegex;
        if (__this == (System_Collections_Generic_List_Regex__o *)0x0) goto label_18236b231;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (__this->fields)._items;
        if (pSVar3 == (System_Text_RegularExpressions_Regex_array *)0x0) goto label_18236b231;
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (__this->fields)._size = uVar2 + 1;
          if ((uint)pSVar3->max_length <= uVar2) goto label_18236b237;
          pSVar3->m_Items[(int)uVar2] = __this_01;
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + (int)uVar2,__this_01);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)__this_01,
                     (MethodInfo_93DD50 *)pMVar5->klass->rgctx_data[0xe].method);
        }
        bVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                          ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
      } while (bVar6);
    }
    pSVar9 = (*(pSVar8->klass->vtable)._7_get_Item.methodPtr)(pSVar8,(MethodInfo *)"banned_char");
    if ((pSVar9 != (System_Xml_Schema_XmlSchema_o *)0x0) &&
       (plVar10 = (longlong *)
                  (*(code *)((Il2CppClass *)pSVar9->klass)->vtable[45].methodPtr)
                            (pSVar9,((Il2CppClass *)pSVar9->klass)->vtable[45].method),
       plVar10 != (longlong *)0x0)) {
      puVar11 = (undefined8 *)(**(code **)(*plVar10 + 0x338))(local_68);
      local_d8._0_8_ = *puVar11;
      local_d8.m_Object.fields._dictionary =
           (System_Collections_Generic_Dictionary_TKey__TValue__o *)puVar11[1];
      local_d8.m_Object.fields._8_8_ = puVar11[2];
      local_d8.m_Object.fields._current.fields.key = (Il2CppObject *)puVar11[3];
      local_d8.m_Object.fields._current.fields.value = (Il2CppObject *)puVar11[4];
      local_d8.m_Object.fields._32_8_ = puVar11[5];
      local_d8.m_Array.fields._list = (System_Collections_Generic_List_T__o *)puVar11[6];
      local_d8.m_Array.fields._8_8_ = puVar11[7];
      local_d8.m_Array.fields._current = (SimpleJSONFixed_JSONNode_o *)puVar11[8];
      bVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                        ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
      if (bVar6) {
        do {
          pSVar12 = SimpleJSONFixed_JSONNode_Enumerator__get_Current
                              (&local_78,(SimpleJSONFixed_JSONNode_Enumerator_o *)&local_d8,(MethodInfo *)0x0)
          ;
          pSVar7 = (pSVar12->fields).key;
          pSVar8 = (pSVar12->fields).value;
          if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
          }
          local_88.fields.key = pSVar7;
          local_88.fields.value = pSVar8;
          pSVar8 = SimpleJSONFixed_JSONNode__op_Implicit_1dc4410(&local_88,(MethodInfo *)0x0);
          if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
          }
          if (pSVar8 == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_18236b231;
          __this_00 = (System_Collections_Generic_List_T__o *)
                      TypeInfo_Anticheat_ChatFilter->static_fields->_bannedChar;
          pSVar7 = (*(pSVar8->klass->vtable)._9_get_Value.methodPtr)
                             (pSVar8,(pSVar8->klass->vtable)._9_get_Value.method);
          if ((pSVar7 == (System_String_o *)0x0) ||
             (pSVar14 = System_String__ToCharArray(pSVar7,(MethodInfo *)0x0),
             pMVar5 = MethodInfo_System_Collections_Generic_List_char_Add, pSVar14 == (System_Char_array *)0x0
             )) goto label_18236b231;
          if ((int)pSVar14->max_length == 0) {
label_18236b237:
            ThrowIndexOutOfRangeException();
          }
          if (__this_00 == (System_Collections_Generic_List_T__o *)0x0) goto label_18236b231;
          item = pSVar14->m_Items[0];
          piVar1 = &(__this_00->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (__this_00->fields)._items;
          if (pSVar4 == (System_Object_array *)0x0) goto label_18236b231;
          uVar2 = (__this_00->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (__this_00->fields)._size = uVar2 + 1;
            if ((uint)pSVar4->max_length <= uVar2) goto label_18236b237;
            *(uint16_t *)((longlong)pSVar4->m_Items + (longlong)(int)uVar2 * 2) = item;
          }
          else {
            System_Collections_Generic_List_ushort___AddWithResize
                      (__this_00,item,(MethodInfo_91A5D0 *)pMVar5->klass->rgctx_data[0xe].method);
          }
          bVar6 = SimpleJSONFixed_JSONNode_KeyEnumerator__MoveNext
                            ((SimpleJSONFixed_JSONNode_KeyEnumerator_o *)&local_d8,(MethodInfo *)0x0);
        } while (bVar6);
      }
      return;
    }
  }
label_18236b231:
  ThrowNullReferenceException();
}


// Anticheat.ChatFilter$$FilterBadWords
// il2cpp: System_String_o* Anticheat_ChatFilter__FilterBadWords (System_String_o* text, const MethodInfo* method);
// 0x18236a400
// eh: try 0x18236a550..0x18236a789 -> pad 0x183317f30 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 38 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18236a643: mov rdx, qword ptr [rip + 0x1d27f46]  ; MethodInfo_System_Collections_Generic_List_Enumerator_Regex_Dispose
// asm:   0x18236a64a: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x18236a64f: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18236a654: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18236a659: test rcx, rcx
// asm:   0x18236a65c: jne 0x18236a77d
// asm:   0x18236a662: mov rdi, qword ptr [rsp + 0xa0]
// asm:   0x18236a732: mov rdx, qword ptr [rip + 0x1d0dfb7]  ; MethodInfo_System_Collections_Generic_List_Enumerator_char_Dispose
// asm:   0x18236a739: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x18236a73e: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18236a743: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18236a748: test rcx, rcx
// asm:   0x18236a74b: jne 0x18236a789
// asm:   0x18236a74d: mov rdi, qword ptr [rsp + 0xa0]
// asm:   0x18236a77d: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18236a789: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183317f30: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317f35: push rbp
// asm:   0x183317f36: sub rsp, 0x20
// asm:   0x183317f3a: mov rbp, rdx
// asm:   0x183317f3d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183317f41: mov rcx, qword ptr [rax]
// asm:   0x183317f44: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317f48: movabs rax, 0
// asm:   0x183317f52: add rsp, 0x20
// asm:   0x183317f56: pop rbp
// asm:   0x183317f57: ret 
// asm:   0x183317fd0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183317fd5: push rbp
// asm:   0x183317fd6: sub rsp, 0x20
// asm:   0x183317fda: mov rbp, rdx
// asm:   0x183317fdd: mov rax, qword ptr [rbp + 0x28]
// asm:   0x183317fe1: mov rcx, qword ptr [rax]
// asm:   0x183317fe4: mov qword ptr [rbp + 0x30], rcx
// asm:   0x183317fe8: movabs rax, 0
// asm:   0x183317ff2: add rsp, 0x20
// asm:   0x183317ff6: pop rbp
// asm:   0x183317ff7: ret 

System_String_o * Anticheat_ChatFilter__FilterBadWords(System_String_o *text,MethodInfo *method)

{
  System_Collections_Generic_List_Regex__o *__this;
  Il2CppObject *object;
  System_Collections_Generic_List_T__o *__this_00;
  System_Text_RegularExpressions_Regex_o *__this_01;
  bool bVar1;
  System_Text_RegularExpressions_MatchEvaluator_o *evaluator;
  undefined1 local_68 [16];
  System_Text_RegularExpressions_Regex_o *local_58;
  undefined1 local_50 [8];
  UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *pUStack_48;
  System_Text_RegularExpressions_Regex_o *local_40;
  undefined1 local_38 [8];
  uint64_t uStack_30;
  System_Text_RegularExpressions_Regex_o *local_28;
  
  if (Il2CppMethodInitialized_184347a7b == '\0') {
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
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Anticheat_ChatFilter_c_FilterBadWords_b__3_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter_c);
    Il2CppMethodInitialized_184347a7b = '\x01';
  }
  local_50 = (undefined1  [8])0x0;
  pUStack_48 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)0x0;
  local_40 = (System_Text_RegularExpressions_Regex_o *)0x0;
  local_38 = (undefined1  [8])0x0;
  uStack_30 = 0;
  local_28 = (System_Text_RegularExpressions_Regex_o *)0x0;
  if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
  }
  __this = TypeInfo_Anticheat_ChatFilter->static_fields->_bannedRegex;
  if (__this != (System_Collections_Generic_List_Regex__o *)0x0) {
    System_Collections_Generic_List_ProbeVolumeStreamableAsset_StreamableCellDesc___GetEnumerator
              ((System_Collections_Generic_List_Enumerator_T__o *)local_68,
               (System_Collections_Generic_List_T__o *)__this,
               (MethodInfo_91F180 *)MethodInfo_System_Collections_Generic_List_Regex_GetEnumerator);
    local_50 = (undefined1  [8])local_68._0_8_;
    pUStack_48 = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_68._8_8_;
    local_40 = local_58;
    local_68._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
    local_68._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_50;
    while( true ) {
      bVar1 = System_Collections_Generic_List_Enumerator_object___MoveNext
                        ((System_Collections_Generic_List_Enumerator_object__o *)local_50,
                         (MethodInfo_153A2A0 *)
                         MethodInfo_System_Collections_Generic_List_Enumerator_Regex_MoveNext);
      __this_01 = local_40;
      if (!bVar1) break;
      if ((TypeInfo_Anticheat_ChatFilter_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter_c);
      }
      evaluator = TypeInfo_Anticheat_ChatFilter_c->static_fields->__9__3_0;
      if (evaluator == (System_Text_RegularExpressions_MatchEvaluator_o *)0x0) {
        if ((TypeInfo_Anticheat_ChatFilter_c->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter_c);
        }
        object = (Il2CppObject *)TypeInfo_Anticheat_ChatFilter_c->static_fields->__9;
        evaluator = il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_MatchEvaluator);
        System_Text_RegularExpressions_MatchEvaluator___ctor
                  ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)evaluator,object,
                   (intptr_t)MethodInfo_Anticheat_ChatFilter_c_FilterBadWords_b__3_0,(MethodInfo_16E67D0 *)0x0
                  );
        TypeInfo_Anticheat_ChatFilter_c->static_fields->__9__3_0 = evaluator;
        Il2CppCodeGenWriteBarrier(&TypeInfo_Anticheat_ChatFilter_c->static_fields->__9__3_0,evaluator);
      }
      if (__this_01 == (System_Text_RegularExpressions_Regex_o *)0x0) {
        ThrowNullReferenceException();
      }
      text = System_Text_RegularExpressions_Regex__Replace_285dcc0(__this_01,text,evaluator,(MethodInfo *)0x0)
      ;
    }
    System_Collections_Generic_List_Enumerator_object___Dispose
              ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_50,
               MethodInfo_System_Collections_Generic_List_Enumerator_Regex_Dispose);
    if ((TypeInfo_Anticheat_ChatFilter->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Anticheat_ChatFilter);
    }
    __this_00 = (System_Collections_Generic_List_T__o *)
                TypeInfo_Anticheat_ChatFilter->static_fields->_bannedChar;
    if (__this_00 != (System_Collections_Generic_List_T__o *)0x0) {
      System_Collections_Generic_List_ushort___GetEnumerator
                ((System_Collections_Generic_List_Enumerator_T__o *)local_68,__this_00,
                 (MethodInfo_91F140 *)MethodInfo_System_Collections_Generic_List_char_GetEnumerator);
      local_38 = (undefined1  [8])local_68._0_8_;
      uStack_30 = local_68._8_8_;
      local_28 = local_58;
      local_68._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_68._8_8_ = (UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38;
      while( true ) {
        bVar1 = System_Collections_Generic_List_Enumerator_ushort___MoveNext
                          ((System_Collections_Generic_List_Enumerator_T__o *)local_38,
                           (MethodInfo_1532020 *)
                           MethodInfo_System_Collections_Generic_List_Enumerator_char_MoveNext);
        if (!bVar1) {
          System_Collections_Generic_List_Enumerator_char___Dispose
                    ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_38,
                     MethodInfo_System_Collections_Generic_List_Enumerator_char_Dispose);
          return text;
        }
        if (text == (System_String_o *)0x0) break;
        text = System_String__Replace(text,(uint16_t)local_28,0x2a,(MethodInfo *)0x0);
      }
      ThrowNullReferenceException();
    }
  }
  ThrowNullReferenceException();
}


// Anticheat.ChatFilter$$FilterSizeTag
// il2cpp: System_String_o* Anticheat_ChatFilter__FilterSizeTag (System_String_o* text, const MethodInfo* method);
// 0x18236a790
// eh: try 0x18236a975..0x18236ad62 -> pad 0x183338340 (+3 call sites) catch Il2CppExceptionWrapper
// asm: 39 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18236aba4: lea rcx, [rsp + 0x38]
// asm:   0x18236aba9: call 0x1806aa210  ; il2cpp_runtime_helper_1806aa210()
// asm:   0x18236abae: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x18236abb3: test rcx, rcx
// asm:   0x18236abb6: jne 0x18236ad4c
// asm:   0x18236abbc: xor esi, esi
// asm:   0x18236abbe: mov r14, qword ptr [rsp + 0xe0]
// asm:   0x18236abc6: mov r15, qword ptr [rsp + 0x20]
// asm:   0x18236ace2: mov rdx, qword ptr [rip + 0x1d041cf]  ; MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_int_string_Dispose
// asm:   0x18236ace9: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x18236acee: call 0x180547020  ; TextureScaler__Scale_d__1__System_IDisposable_Dispose()
// asm:   0x18236acf3: mov rcx, qword ptr [rsp + 0x20]
// asm:   0x18236acf8: test rcx, rcx
// asm:   0x18236acfb: jne 0x18236ad62
// asm:   0x18236acfd: mov r14, qword ptr [rsp + 0xe0]
// asm:   0x18236ad4c: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x18236ad62: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183320de0: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183320de5: push rbp
// asm:   0x183320de6: sub rsp, 0x20
// asm:   0x183320dea: mov rbp, rdx
// asm:   0x183320ded: mov rax, qword ptr [rbp + 0x88]
// asm:   0x183320df4: mov rcx, qword ptr [rax]
// asm:   0x183320df7: mov qword ptr [rbp + 0x20], rcx
// asm:   0x183320dfb: movabs rax, 0
// asm:   0x183320e05: add rsp, 0x20
// asm:   0x183320e09: pop rbp
// asm:   0x183320e0a: ret 
// asm:   0x183338340: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183338345: push rbp
// asm:   0x183338346: sub rsp, 0x20
// asm:   0x18333834a: mov rbp, rdx
// asm:   0x18333834d: mov rax, qword ptr [rbp + 0x80]
// asm:   0x183338354: mov rcx, qword ptr [rax]
// asm:   0x183338357: mov qword ptr [rbp + 0x30], rcx
// asm:   0x18333835b: movabs rax, 0
// asm:   0x183338365: add rsp, 0x20
// asm:   0x183338369: pop rbp
// asm:   0x18333836a: ret 

System_String_o * Anticheat_ChatFilter__FilterSizeTag(System_String_o *text,MethodInfo *method)

{
  byte bVar1;
  ushort uVar2;
  int32_t iVar3;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  Il2CppObject *__this;
  bool bVar6;
  System_String_o *pSVar7;
  System_Text_RegularExpressions_MatchCollection_o *__this_00;
  System_Collections_Generic_List_KeyValuePair_int__string___o *__this_01;
  void *pvVar8;
  Anticheat_ChatFilter___c__DisplayClass4_0_o *object;
  VirtualInvokeData *pVVar9;
  System_Text_RegularExpressions_Match_o *pSVar10;
  System_Predicate_T__o *__this_02;
  UnityEngine_VFX_VFXEventAttribute_o *eventAttribute;
  System_String_o *str0;
  ushort uVar11;
  Il2CppObject *local_res18;
  Il2CppObject *local_res20;
  undefined1 local_a8 [16];
  Il2CppObject *local_98;
  System_String_o *pSStack_90;
  undefined1 local_88 [8];
  uint64_t uStack_80;
  Il2CppObject *local_78;
  System_String_o *pSStack_70;
  UnityEngine_VFX_VFXOutputEventArgs_Fields local_68 [2];
  int32_t local_48 [2];
  undefined4 uStack_40;
  undefined4 uStack_3c;
  
  if (Il2CppMethodInitialized_184347a7c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Linq_Enumerable_Any_KeyValuePair_int_string)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_int_string_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_int_string_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_int_string_get_Current);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_KeyValuePair_int_string_bool);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_int_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_int_string_get_Key);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_KeyValuePair_int_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_KeyValuePair_int_string_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_KeyValuePair_int_string_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_KeyValuePair_int_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_System_Collections_Generic_List_KeyValuePair_int_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_Match);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_RegularExpressions_Regex);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Anticheat_ChatFilter_c__DisplayClass4_0_FilterSizeTag_b__0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter_c__DisplayClass4_0);
    il2cpp_codegen_initialize_runtime_metadata(&"<size=");
    il2cpp_codegen_initialize_runtime_metadata(&"<size=20>");
    il2cpp_codegen_initialize_runtime_metadata(&"(<size=(.*?>))");
    Il2CppMethodInitialized_184347a7c = '\x01';
  }
  local_res18 = (Il2CppObject *)0x0;
  local_res20 = (Il2CppObject *)0x0;
  local_88 = (undefined1  [8])0x0;
  uStack_80 = 0;
  local_78 = (Il2CppObject *)0x0;
  pSStack_70 = (System_String_o *)0x0;
  if (text != (System_String_o *)0x0) {
    pSVar7 = System_String__ToLower(text,(MethodInfo *)0x0);
    if ((TypeInfo_System_Text_RegularExpressions_Regex->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Regex);
    }
    __this_00 = System_Text_RegularExpressions_Regex__Matches(pSVar7,"(<size=(.*?>))",(MethodInfo *)0x0);
    __this_01 = il2cpp_codegen_object_new
                          ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_KeyValuePair_int_string);
    System_Collections_Generic_List_KeyValuePair_int__object_____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this_01,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_KeyValuePair_int_string_ctor);
    if (__this_00 != (System_Text_RegularExpressions_MatchCollection_o *)0x0) {
      local_res18 = (Il2CppObject *)
                    System_Text_RegularExpressions_MatchCollection__GetEnumerator(__this_00,(MethodInfo *)0x0)
      ;
      local_a8._0_8_ = (System_Collections_Generic_List_T__o *)0x0;
      local_a8._8_8_ = &local_res18;
      local_98 = (Il2CppObject *)&local_res20;
      while( true ) {
        if (local_res18 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pvVar8 = InterfaceInvoker0_Invoke
                           (0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,local_res18);
        if ((char)pvVar8 == '\0') break;
        object = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Anticheat_ChatFilter_c__DisplayClass4_0);
        System_Object___ctor
                  ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)object,(MethodInfo *)0x0);
        __this = local_res18;
        if (local_res18 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar4 = local_res18->klass;
        uVar2 = (pIVar4->_2).interface_offsets_count;
        uVar11 = 0;
        if (uVar2 != 0) {
          pIVar5 = (pIVar4->_1).interfaceOffsets;
          do {
            if (pIVar5[uVar11].interfaceType == (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
              pVVar9 = pIVar4->vtable + (pIVar5[uVar11].offset + 1);
              goto label_18236aa15;
            }
            uVar11 = uVar11 + 1;
          } while (uVar11 < uVar2);
        }
        pVVar9 = GetInterfaceInvokeDataFromVTableSlowPath
                           (local_res18,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,1);
label_18236aa15:
        pSVar10 = (System_Text_RegularExpressions_Match_o *)(*pVVar9->methodPtr)(__this,pVVar9->method);
        if (object == (Anticheat_ChatFilter___c__DisplayClass4_0_o *)0x0) {
          ThrowNullReferenceException();
        }
        if (pSVar10 == (System_Text_RegularExpressions_Match_o *)0x0) {
          (object->fields).match = (System_Text_RegularExpressions_Match_o *)0x0;
          pSVar10 = (System_Text_RegularExpressions_Match_o *)0x0;
        }
        else {
          bVar1 = (TypeInfo_System_Text_RegularExpressions_Match->_2).typeHierarchyDepth;
          if (((pSVar10->klass->_2).typeHierarchyDepth < bVar1) ||
             ((pSVar10->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Match)) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar10);
          }
          (object->fields).match = pSVar10;
          bVar1 = (TypeInfo_System_Text_RegularExpressions_Match->_2).typeHierarchyDepth;
          if (((pSVar10->klass->_2).typeHierarchyDepth < bVar1) ||
             ((pSVar10->klass->_2).typeHierarchy[(ulonglong)bVar1 - 1] !=
              (Il2CppClass *)TypeInfo_System_Text_RegularExpressions_Match)) {
            il2cpp_codegen_raise_invalid_cast_exception(pSVar10);
          }
        }
        Il2CppCodeGenWriteBarrier(&(object->fields).match,pSVar10);
        __this_02 = (System_Predicate_T__o *)
                    il2cpp_codegen_object_new
                              ((Il2CppClass *)TypeInfo_System_Func_KeyValuePair_int_string_bool);
        System_Func_KeyValuePair_int__object___bool____ctor
                  (__this_02,(Il2CppObject *)object,
                   (intptr_t)MethodInfo_Anticheat_ChatFilter_c__DisplayClass4_0_FilterSizeTag_b__0,
                   (MethodInfo_B61280 *)0x0);
        bVar6 = System_Linq_Enumerable__Any_KeyValuePair_int__object__
                          ((System_Collections_Generic_IEnumerable_TSource__o *)__this_01,
                           (System_Func_TSource__bool__o *)__this_02,
                           (MethodInfo_6B66E0 *)MethodInfo_System_Linq_Enumerable_Any_KeyValuePair_int_string)
        ;
        if (!bVar6) {
          pSVar10 = (object->fields).match;
          if (pSVar10 == (System_Text_RegularExpressions_Match_o *)0x0) {
            ThrowNullReferenceException();
          }
          iVar3 = (pSVar10->fields)._Index_k__BackingField;
          eventAttribute =
               (UnityEngine_VFX_VFXEventAttribute_o *)
               System_Text_RegularExpressions_Capture__ToString
                         ((System_Text_RegularExpressions_Capture_o *)pSVar10,(MethodInfo *)0x0);
          local_68[0]._nameId_k__BackingField = 0;
          local_68[0]._4_4_ = 0;
          local_68[0]._eventAttribute_k__BackingField = (UnityEngine_VFX_VFXEventAttribute_o *)0x0;
          System_Collections_Generic_KeyValuePair_int__object____ctor
                    ((UnityEngine_VFX_VFXOutputEventArgs_o *)local_68,iVar3,eventAttribute,
                     MethodInfo_System_Collections_Generic_KeyValuePair_int_string_ctor);
          if (__this_01 == (System_Collections_Generic_List_KeyValuePair_int__string___o *)0x0) {
            ThrowNullReferenceException();
          }
          local_48[0] = local_68[0]._nameId_k__BackingField;
          local_48[1] = local_68[0]._4_4_;
          uStack_40 = local_68[0]._eventAttribute_k__BackingField._0_4_;
          uStack_3c = local_68[0]._eventAttribute_k__BackingField._4_4_;
          il2cpp_runtime_helper_18003a5c0(__this_01,local_48,
                        MethodInfo_System_Collections_Generic_List_KeyValuePair_int_string_Add);
        }
      }
      local_res20 = il2cpp_vm_Object_IsInst(local_res18,(Il2CppClass *)TypeInfo_System_IDisposable);
      if (local_res20 != (Il2CppObject *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,local_res20);
      }
      if (__this_01 != (System_Collections_Generic_List_KeyValuePair_int__string___o *)0x0) {
        System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___GetEnumerator
                  ((System_Collections_Generic_List_Enumerator_T__o *)local_a8,
                   (System_Collections_Generic_List_T__o *)__this_01,
                   (MethodInfo_91F200 *)
                   MethodInfo_System_Collections_Generic_List_KeyValuePair_int_string_GetEnumerator);
        local_88 = (undefined1  [8])local_a8._0_8_;
        uStack_80 = local_a8._8_8_;
        local_78 = local_98;
        pSStack_70 = pSStack_90;
        while( true ) {
          do {
            bVar6 = System_Collections_Generic_List_Enumerator_StyleSelectorHelper_SelectorWorkItem___MoveNext
                              ((System_Collections_Generic_List_Enumerator_T__o *)local_88,
                               (MethodInfo_1529A80 *)
                               MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_int_string_MoveNext
                              );
            pSVar7 = pSStack_70;
            if (!bVar6) {
              System_Collections_Generic_List_Enumerator_KeyValuePair_int__object____Dispose
                        ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)local_88,
                         MethodInfo_System_Collections_Generic_List_Enumerator_KeyValuePair_int_string_Dispose
                        );
              return text;
            }
            if (pSStack_70 == (System_String_o *)0x0) {
              ThrowNullReferenceException();
            }
            iVar3 = (int32_t)local_78;
            bVar6 = System_String__StartsWith(pSStack_70,"<size=",(MethodInfo *)0x0);
          } while ((!bVar6) || ((pSVar7->fields)._stringLength < 10));
          if (text == (System_String_o *)0x0) {
            ThrowNullReferenceException();
          }
          pSVar7 = System_String__Remove(text,iVar3,(pSVar7->fields)._stringLength,(MethodInfo *)0x0);
          if (pSVar7 == (System_String_o *)0x0) break;
          str0 = System_String__Substring_1972740(pSVar7,0,iVar3,(MethodInfo *)0x0);
          pSVar7 = System_String__Substring_1972740
                             (pSVar7,iVar3,(pSVar7->fields)._stringLength - iVar3,(MethodInfo *)0x0);
          text = System_String__Concat_1969b70(str0,"<size=20>",pSVar7,(MethodInfo *)0x0);
        }
        ThrowNullReferenceException();
      }
    }
  }
  ThrowNullReferenceException();
}


// Anticheat.ChatFilter$$.cctor
// il2cpp: void Anticheat_ChatFilter___cctor (const MethodInfo* method);
// 0x18236b240

void Anticheat_ChatFilter___cctor(MethodInfo *method)

{
  System_Collections_Generic_List_Regex__o *__this;
  System_Collections_Generic_List_char__o *__this_00;
  
  if (Il2CppMethodInitialized_184347a7d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Anticheat_ChatFilter);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_Regex_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_char_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_char);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_Regex);
    Il2CppMethodInitialized_184347a7d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_Regex);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_Regex_ctor);
  TypeInfo_Anticheat_ChatFilter->static_fields->_bannedRegex = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Anticheat_ChatFilter->static_fields->_bannedRegex,__this);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_char);
  System_Collections_Generic_List_char____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this_00,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_char_ctor);
  TypeInfo_Anticheat_ChatFilter->static_fields->_bannedChar = __this_00;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Anticheat_ChatFilter->static_fields->_bannedChar,__this_00);
  return;
}


