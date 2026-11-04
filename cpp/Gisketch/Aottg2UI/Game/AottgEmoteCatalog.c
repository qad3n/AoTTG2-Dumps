// Type: Gisketch.Aottg2UI.Game.AottgEmoteCatalog
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgEmoteCatalog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgEmoteCatalog$$StickerPresets
// il2cpp: Gisketch_Aottg2UI_Game_AottgProfilePreset_array* Gisketch_Aottg2UI_Game_AottgEmoteCatalog__StickerPresets (const MethodInfo* method);
// 0x181e10aa0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e10b92: mov r15, qword ptr [rip + 0x228ce2f]  ; "None"
// asm:   0x181e10b99: jmp 0x181e10bca

Gisketch_Aottg2UI_Game_AottgProfilePreset_array *
Gisketch_Aottg2UI_Game_AottgEmoteCatalog__StickerPresets(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  UnityEngine_UIElements_UIR_RenderData_o *value;
  MethodInfo *pMVar3;
  bool bVar4;
  System_Collections_Generic_List_AottgProfilePreset__o *__this;
  System_String_array *pSVar5;
  System_String_o *value_00;
  UnityEngine_UIElements_UIR_Entry_o *value_01;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar6;
  uint uVar7;
  UnityEngine_UIElements_UIR_RenderData_o *local_58;
  System_String_o *pSStack_50;
  UnityEngine_UIElements_UIR_Entry_o *apUStack_48 [2];
  undefined1 local_38 [16];
  UnityEngine_UIElements_UIR_Entry_o *local_28;
  
  if (Il2CppMethodInitialized_184344c3f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgProfilePreset_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgProfilePreset_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgProfilePreset_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_AottgProfilePreset);
    Il2CppMethodInitialized_184344c3f = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgProfilePreset);
  System_Collections_Generic_List_AottgProfilePreset____ctor
            ((System_Collections_Generic_LowLevelList_T__o *)__this,
             (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_AottgProfilePreset_ctor);
  pSVar5 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__AllStickers((MethodInfo *)0x0);
  if (pSVar5 != (System_String_array *)0x0) {
    uVar7 = 0;
    while ((int)uVar7 < (int)pSVar5->max_length) {
      if ((uint)pSVar5->max_length <= uVar7) {
label_181e10d02:
        ThrowIndexOutOfRangeException();
      }
      value = (UnityEngine_UIElements_UIR_RenderData_o *)pSVar5->m_Items[(int)uVar7];
      if (Il2CppMethodInitialized_184344c41 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"None");
        il2cpp_codegen_initialize_runtime_metadata(&"Emoji");
        Il2CppMethodInitialized_184344c41 = '\x01';
      }
      bVar4 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
      value_00 = "None";
      if (!bVar4) {
        if (value == (UnityEngine_UIElements_UIR_RenderData_o *)0x0) goto label_181e10cfc;
        value_00 = System_String__Replace_1970e80
                             ((System_String_o *)value,"Emoji",
                              (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8),(MethodInfo *)0x0);
      }
      value_01 = (UnityEngine_UIElements_UIR_Entry_o *)
                 Gisketch_Aottg2UI_Game_AottgEmoteCatalog__Sprite((System_String_o *)value,(MethodInfo *)0x0);
      pSStack_50 = (System_String_o *)0x0;
      apUStack_48[0] = (UnityEngine_UIElements_UIR_Entry_o *)0x0;
      local_58 = value;
      Il2CppCodeGenWriteBarrier(&local_58,value);
      pSStack_50 = value_00;
      Il2CppCodeGenWriteBarrier(&pSStack_50,value_00);
      apUStack_48[0] = value_01;
      Il2CppCodeGenWriteBarrier(apUStack_48,value_01);
      pMVar3 = MethodInfo_System_Collections_Generic_List_AottgProfilePreset_Add;
      if (__this == (System_Collections_Generic_List_AottgProfilePreset__o *)0x0) {
label_181e10cfc:
        ThrowNullReferenceException();
      }
      piVar1 = &(__this->fields)._version;
      *piVar1 = *piVar1 + 1;
      pGVar6 = (__this->fields)._items;
      if (pGVar6 == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) goto label_181e10cfc;
      uVar2 = (__this->fields)._size;
      if (uVar2 < (uint)pGVar6->max_length) {
        (__this->fields)._size = uVar2 + 1;
        if ((uint)pGVar6->max_length <= uVar2) goto label_181e10d02;
        pGVar6->m_Items[(int)uVar2].fields.Key = (System_String_o *)local_58;
        pGVar6->m_Items[(int)uVar2].fields.Label = pSStack_50;
        pGVar6->m_Items[(int)uVar2].fields.Sprite = (System_String_o *)apUStack_48[0];
        Il2CppCodeGenWriteBarrier((void **)(pGVar6->m_Items + (int)uVar2),(void *)0x0);
        uVar7 = uVar7 + 1;
      }
      else {
        local_38._0_8_ = local_58;
        local_38._8_8_ = pSStack_50;
        local_28 = apUStack_48[0];
        System_Collections_Generic_List_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo___AddWithResize
                  ((System_Collections_Generic_List_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo__o
                    *)__this,
                   (UnityEngine_UIElements_UIR_RenderTreeManager_VisualChangesProcessor_EntryProcessingInfo_o
                    *)local_38,(MethodInfo_973A50 *)pMVar3->klass->rgctx_data[0xe].method);
        uVar7 = uVar7 + 1;
      }
    }
    if (__this != (System_Collections_Generic_List_AottgProfilePreset__o *)0x0) {
      pGVar6 = (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)
               System_Collections_Generic_List_AottgProfilePreset___ToArray
                         ((System_Collections_Generic_List_T__o *)__this,
                          (MethodInfo_929FE0 *)
                          MethodInfo_System_Collections_Generic_List_AottgProfilePreset_ToArray);
      return pGVar6;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEmoteCatalog$$Sprite
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEmoteCatalog__Sprite (System_String_o* value, const MethodInfo* method);
// 0x181e108c0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e10a11: mov r8, qword ptr [rip + 0x22c7d70]  ; "_0"
// asm:   0x181e10a18: jmp 0x181e10a2b

System_String_o * Gisketch_Aottg2UI_Game_AottgEmoteCatalog__Sprite(System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  System_String_array *pSVar2;
  System_String_o *pSVar3;
  uint uVar4;
  
  if (Il2CppMethodInitialized_184344c40 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Emotes/");
    il2cpp_codegen_initialize_runtime_metadata(&"_0");
    il2cpp_codegen_initialize_runtime_metadata(&"Icon");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Profile/");
    Il2CppMethodInitialized_184344c40 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1) {
    return (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (Il2CppMethodInitialized_184344c45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Emoji");
    Il2CppMethodInitialized_184344c45 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1) {
label_181e10a4c:
    pSVar3 = System_String__Concat_1969b70
                       ("UI/Icons/Profile/",value,"Icon",(MethodInfo *)0x0);
    return pSVar3;
  }
  if (value != (System_String_o *)0x0) {
    bVar1 = System_String__StartsWith_19722c0(value,"Emoji",4,(MethodInfo *)0x0);
    if (!bVar1) goto label_181e10a4c;
    if (Il2CppMethodInitialized_184344c42 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
      il2cpp_codegen_initialize_runtime_metadata(&"Data/Info/EmoteInfo");
      il2cpp_codegen_initialize_runtime_metadata(&"AnimatedEmojis");
      Il2CppMethodInitialized_184344c42 = '\x01';
    }
    pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
    pSVar2 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__ReadList
                       ("Data/Info/EmoteInfo","AnimatedEmojis",pSVar2,(MethodInfo *)0x0);
    if (pSVar2 != (System_String_array *)0x0) {
      for (uVar4 = 0; (int)uVar4 < (int)pSVar2->max_length; uVar4 = uVar4 + 1) {
        if ((uint)pSVar2->max_length <= uVar4) {
          ThrowIndexOutOfRangeException();
        }
        bVar1 = System_String__op_Equality(pSVar2->m_Items[(int)uVar4],value,(MethodInfo *)0x0);
        pSVar3 = "_0";
        if (bVar1) goto label_181e10a2b;
      }
      pSVar3 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
label_181e10a2b:
      pSVar3 = System_String__Concat_1969b70("UI/Icons/Emotes/",value,pSVar3,(MethodInfo *)0x0);
      return pSVar3;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEmoteCatalog$$Label
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEmoteCatalog__Label (System_String_o* value, const MethodInfo* method);
// 0x181e10440

System_String_o * Gisketch_Aottg2UI_Game_AottgEmoteCatalog__Label(System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_184344c41 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Emoji");
    Il2CppMethodInitialized_184344c41 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1) {
    return "None";
  }
  if (value != (System_String_o *)0x0) {
    pSVar2 = System_String__Replace_1970e80
                       (value,"Emoji",(System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8)
                        ,(MethodInfo *)0x0);
    return pSVar2;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEmoteCatalog$$IsAnimated
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgEmoteCatalog__IsAnimated (System_String_o* value, const MethodInfo* method);
// 0x181e102f0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e10369: nop dword ptr [rax]

bool Gisketch_Aottg2UI_Game_AottgEmoteCatalog__IsAnimated(System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  System_String_array *pSVar2;
  uint uVar3;
  
  if (Il2CppMethodInitialized_184344c42 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Data/Info/EmoteInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"AnimatedEmojis");
    Il2CppMethodInitialized_184344c42 = '\x01';
  }
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
  pSVar2 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__ReadList
                     ("Data/Info/EmoteInfo","AnimatedEmojis",pSVar2,(MethodInfo *)0x0);
  if (pSVar2 != (System_String_array *)0x0) {
    uVar3 = 0;
    while( true ) {
      if ((int)pSVar2->max_length <= (int)uVar3) {
        return false;
      }
      if ((uint)pSVar2->max_length <= uVar3) break;
      bVar1 = System_String__op_Equality(pSVar2->m_Items[(int)uVar3],value,(MethodInfo *)0x0);
      if (bVar1) {
        return true;
      }
      uVar3 = uVar3 + 1;
    }
    ThrowIndexOutOfRangeException();
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEmoteCatalog$$AllStickers
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgEmoteCatalog__AllStickers (const MethodInfo* method);
// 0x181e10060
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e1022e: nop 

System_String_array * Gisketch_Aottg2UI_Game_AottgEmoteCatalog__AllStickers(MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  System_String_array *pSVar3;
  System_Collections_Generic_List_string__o *__this;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar4;
  uint uVar5;
  
  if (Il2CppMethodInitialized_184344c43 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Data/Info/ProfileIconInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"Data/Info/EmoteInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiSmile");
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiThumbsUp");
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiCool");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons");
    il2cpp_codegen_initialize_runtime_metadata(&"EmojiLove");
    il2cpp_codegen_initialize_runtime_metadata(&"AllEmojis");
    Il2CppMethodInitialized_184344c43 = '\x01';
  }
  pSVar3 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
  pSVar1 = "EmojiSmile";
  if (pSVar3 != (System_String_array *)0x0) {
    if ((int)pSVar3->max_length != 0) {
      pSVar3->m_Items[0] = "EmojiSmile";
      Il2CppCodeGenWriteBarrier(pSVar3->m_Items,pSVar1);
      pSVar1 = "EmojiThumbsUp";
      if (1 < (uint)pSVar3->max_length) {
        pSVar3->m_Items[1] = "EmojiThumbsUp";
        Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 1,pSVar1);
        pSVar1 = "EmojiCool";
        if (2 < (uint)pSVar3->max_length) {
          pSVar3->m_Items[2] = "EmojiCool";
          Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 2,pSVar1);
          pSVar1 = "EmojiLove";
          if (3 < (uint)pSVar3->max_length) {
            pSVar3->m_Items[3] = "EmojiLove";
            Il2CppCodeGenWriteBarrier(pSVar3->m_Items + 3,pSVar1);
            pSVar3 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__ReadList
                               ("Data/Info/EmoteInfo","AllEmojis",pSVar3,(MethodInfo *)0x0);
            __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string)
            ;
            System_Collections_Generic_List_object____ctor_94fb10
                      ((System_Collections_Generic_List_object__o *)__this,
                       (System_Collections_Generic_IEnumerable_T__o *)pSVar3,
                       (MethodInfo_94FB10 *)MethodInfo_System_Collections_Generic_List_string_ctor_40dbf80);
            pSVar3 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
            pSVar3 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__ReadList
                               ("Data/Info/ProfileIconInfo","Icons",pSVar3,(MethodInfo *)0x0);
            if (pSVar3 != (System_String_array *)0x0) {
              for (uVar5 = 0; (int)uVar5 < (int)pSVar3->max_length; uVar5 = uVar5 + 1) {
                if ((uint)pSVar3->max_length <= uVar5) goto label_181e102dc;
                pSVar1 = pSVar3->m_Items[(int)uVar5];
                if (Il2CppMethodInitialized_184344c45 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&"Emoji");
                  Il2CppMethodInitialized_184344c45 = '\x01';
                }
                bVar2 = System_String__IsNullOrEmpty(pSVar1,(MethodInfo *)0x0);
                if (bVar2) {
label_181e10291:
                  if (__this == (System_Collections_Generic_List_string__o *)0x0) goto label_181e102d6;
                  il2cpp_runtime_helper_180012890(__this,pSVar1,MethodInfo_System_Collections_Generic_List_string_Add);
                }
                else {
                  if (pSVar1 == (System_String_o *)0x0) goto label_181e102d6;
                  bVar2 = System_String__StartsWith_19722c0(pSVar1,"Emoji",4,(MethodInfo *)0x0);
                  if (!bVar2) goto label_181e10291;
                }
              }
              if (__this != (System_Collections_Generic_List_string__o *)0x0) {
                pUVar4 = System_Collections_Generic_List_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo___ToArray
                                   ((System_Collections_Generic_List_T__o *)__this,
                                    (MethodInfo_929FE0 *)
                                    MethodInfo_System_Collections_Generic_List_string_ToArray);
                return (System_String_array *)pUVar4;
              }
            }
            goto label_181e102d6;
          }
        }
      }
    }
label_181e102dc:
    ThrowIndexOutOfRangeException();
  }
label_181e102d6:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEmoteCatalog$$ReadList
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgEmoteCatalog__ReadList (System_String_o* path, System_String_o* key, System_String_array* fallback, const MethodInfo* method);
// 0x181e104c0
// eh: try 0x181e106d0..0x181e108af -> pad 0x183317fd0 (+1 call sites) catch Il2CppExceptionWrapper
// asm: 25 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e10824: jmp 0x181e10856
// asm:   0x181e10826: mov r8, qword ptr [rsp + 0x38]
// asm:   0x181e1082b: cmp qword ptr [r8], 0
// asm:   0x181e1082f: je 0x181e10842
// asm:   0x181e10831: xor ecx, ecx
// asm:   0x181e10833: mov r8, qword ptr [r8]
// asm:   0x181e10836: mov rdx, qword ptr [rip + 0x2288ac3]  ; TypeInfo_System_IDisposable
// asm:   0x181e1083d: call 0x180014840  ; InterfaceInvoker0_Invoke()
// asm:   0x181e10842: mov rcx, qword ptr [rsp + 0x30]
// asm:   0x181e10847: test rcx, rcx
// asm:   0x181e1084a: jne 0x181e108af
// asm:   0x181e1084c: mov r14, qword ptr [rsp + 0x70]
// asm:   0x181e10851: mov rdi, qword ptr [rsp + 0x20]
// asm:   0x181e108af: call 0x1804171b0  ; il2cpp_codegen_rethrow()
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

System_String_array *
Gisketch_Aottg2UI_Game_AottgEmoteCatalog__ReadList
          (System_String_o *path,System_String_o *key,System_String_array *fallback,MethodInfo *method)

{
  int32_t *piVar1;
  ushort uVar2;
  uint uVar3;
  Il2CppClass *pIVar4;
  Il2CppRuntimeInterfaceOffsetPair *pIVar5;
  System_String_array *pSVar6;
  MethodInfo *pMVar7;
  bool bVar8;
  UnityEngine_Object_o *x;
  System_String_o *pSVar9;
  SimpleJSONFixed_JSONNode_o *a;
  System_Xml_Schema_XmlSchema_o *a_00;
  System_Collections_Generic_List_string__o *__this;
  Il2CppObject *pIVar10;
  void *pvVar11;
  VirtualInvokeData *pVVar12;
  Il2CppObject *pIVar13;
  UnityEngine_Rendering_RenderGraphModule_RenderGraph_DebugData_PassData_NRPInfo_NativeRenderPassInfo_PassCompatibilityInfo_array
  *pUVar14;
  ushort uVar15;
  
  if (Il2CppMethodInitialized_184344c44 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_IDisposable);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerable_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_IEnumerator_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_IEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_SimpleJSONFixed_JSONNode);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_TextAsset);
    Il2CppMethodInitialized_184344c44 = '\x01';
  }
  x = (UnityEngine_Object_o *)
      UnityEngine_Resources__Load_object_
                (path,(MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_TextAsset);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar8 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar8) {
    return fallback;
  }
  if (x != (UnityEngine_Object_o *)0x0) {
    pSVar9 = UnityEngine_TextAsset__ToString((UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
    a = SimpleJSONFixed_JSON__Parse(pSVar9,(MethodInfo *)0x0);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar8 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar8) {
      if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_181e108b5;
      a_00 = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,(MethodInfo *)key);
    }
    else {
      a_00 = (System_Xml_Schema_XmlSchema_o *)0x0;
    }
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_LowLevelList_T__o *)__this,
               (MethodInfo_92A240 *)MethodInfo_System_Collections_Generic_List_string_ctor);
    if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
    }
    bVar8 = SimpleJSONFixed_JSONNode__op_Inequality
                      ((SimpleJSONFixed_JSONNode_o *)a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if (bVar8) {
      if ((a_00 == (System_Xml_Schema_XmlSchema_o *)0x0) ||
         (pIVar10 = (Il2CppObject *)
                    (*((Il2CppClass *)a_00->klass)->vtable[27].methodPtr)
                              (a_00,((Il2CppClass *)a_00->klass)->vtable[27].method),
         pIVar10 == (Il2CppObject *)0x0)) goto label_181e108b5;
      pIVar10 = InterfaceInvoker0_Invoke
                          (0,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,pIVar10);
      while( true ) {
        if (pIVar10 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pvVar11 = InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,pIVar10);
        if ((char)pvVar11 == '\0') break;
        if (pIVar10 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar4 = pIVar10->klass;
        uVar2 = (pIVar4->_2).interface_offsets_count;
        if (uVar2 != 0) {
          uVar15 = 0;
          pIVar5 = (pIVar4->_1).interfaceOffsets;
          do {
            if (pIVar5[uVar15].interfaceType ==
                (Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
              pVVar12 = (VirtualInvokeData *)&pIVar4->vtable[pIVar5[uVar15].offset].methodPtr;
              goto label_181e10756;
            }
            uVar15 = uVar15 + 1;
          } while (uVar15 < uVar2);
        }
        pVVar12 = GetInterfaceInvokeDataFromVTableSlowPath
                            (pIVar10,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,0
                            );
label_181e10756:
        pIVar13 = (*pVVar12->methodPtr)(pIVar10,pVVar12->method);
        if (pIVar13 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar9 = (System_String_o *)
                 (*pIVar13->klass->vtable[9].methodPtr)(pIVar13,pIVar13->klass->vtable[9].method);
        pMVar7 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (__this == (System_Collections_Generic_List_string__o *)0x0) {
          ThrowNullReferenceException();
        }
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar6 = (__this->fields)._items;
        if (pSVar6 == (System_String_array *)0x0) {
          ThrowNullReferenceException();
        }
        uVar3 = (__this->fields)._size;
        if (uVar3 < (uint)pSVar6->max_length) {
          (__this->fields)._size = uVar3 + 1;
          if ((uint)pSVar6->max_length <= uVar3) {
            ThrowIndexOutOfRangeException();
          }
          pSVar6->m_Items[(int)uVar3] = pSVar9;
          Il2CppCodeGenWriteBarrier(pSVar6->m_Items + (int)uVar3,pSVar9);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar9,
                     (MethodInfo_93DD50 *)pMVar7->klass->rgctx_data[0xe].method);
        }
      }
      if (pIVar10 != (Il2CppObject *)0x0) {
        InterfaceInvoker0_Invoke(0,(Il2CppClass *)TypeInfo_System_IDisposable,pIVar10);
      }
    }
    if (__this != (System_Collections_Generic_List_string__o *)0x0) {
      if ((__this->fields)._size < 1) {
        return fallback;
      }
      pUVar14 = System_Collections_Generic_List_object___ToArray
                          ((System_Collections_Generic_List_T__o *)__this,
                           (MethodInfo_929FE0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
      return (System_String_array *)pUVar14;
    }
  }
label_181e108b5:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEmoteCatalog$$IsEmoji
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgEmoteCatalog__IsEmoji (System_String_o* value, const MethodInfo* method);
// 0x181e103d0

bool Gisketch_Aottg2UI_Game_AottgEmoteCatalog__IsEmoji(System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344c45 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Emoji");
    Il2CppMethodInitialized_184344c45 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
  if (value != (System_String_o *)0x0) {
    bVar1 = System_String__StartsWith_19722c0(value,"Emoji",4,(MethodInfo *)0x0);
    return bVar1;
  }
  ThrowNullReferenceException();
}


