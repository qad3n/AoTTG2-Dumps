// Type: Gisketch.Aottg2UI.Game.AottgEmoteCatalog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgEmoteCatalog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgEmoteCatalog$$StickerPresets
// il2cpp: Gisketch_Aottg2UI_Game_AottgProfilePreset_array* Gisketch_Aottg2UI_Game_AottgEmoteCatalog__StickerPresets (const MethodInfo* method);
// 0x58f44b0

Gisketch_Aottg2UI_Game_AottgProfilePreset_array *
Gisketch_Aottg2UI_Game_AottgEmoteCatalog__StickerPresets(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_o item;
  bool bVar4;
  int iVar5;
  MethodInfo *__this;
  System_String_array *pSVar6;
  ulong uVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar10;
  MethodInfo *pMVar11;
  ulong uVar12;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_o local_48;
  
  if (Il2CppMethodInitialized_075455b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgProfilePreset_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgProfilePreset_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_AottgProfilePreset_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_List_AottgProfilePreset);
    Il2CppMethodInitialized_075455b2 = '\x01';
  }
  __this = (MethodInfo *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_System_Collections_Generic_List_AottgProfilePreset);
  pMVar11 = __this;
  System_Collections_Generic_List_AottgProfilePreset____ctor
            ((System_Collections_Generic_List_AottgProfilePreset__o *)__this,
             (MethodInfo_51CA920 *)MethodInfo_System_Collections_Generic_List_AottgProfilePreset_ctor);
  pSVar6 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__AllStickers(pMVar11);
  if (pSVar6 != (System_String_array *)0x0) {
    iVar5 = (int)pSVar6->max_length;
    if (__this != (MethodInfo *)0x0) {
      if (0 < iVar5) {
        uVar7 = pSVar6->max_length & 0xffffffff;
        uVar12 = 0;
        do {
          if (uVar7 <= uVar12) {
            ThrowIndexOutOfRangeException();
          }
          pSVar3 = pSVar6->m_Items[uVar12];
          if (Il2CppMethodInitialized_075455b4 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&"None");
            il2cpp_codegen_initialize_runtime_metadata(&"Emoji");
            Il2CppMethodInitialized_075455b4 = '\x01';
          }
          pMVar11 = (MethodInfo *)0x0;
          bVar4 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
          if (bVar4) {
            pSVar8 = "None";
          }
          else {
            if (pSVar3 == (System_String_o *)0x0) goto label_058f471f;
            pMVar11 = (MethodInfo *)"Emoji";
            pSVar8 = System_String__Replace_5304550
                               (pSVar3,"Emoji",
                                (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
          }
          pSVar9 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__Sprite(pSVar3,pMVar11);
          local_48.fields.Key = (System_String_o *)0x0;
          local_48.fields.Label = (System_String_o *)0x0;
          local_48.fields.Sprite = (System_String_o *)0x0;
          Gisketch_Aottg2UI_Game_AottgProfilePreset___ctor(&local_48,pSVar3,pSVar8,pSVar9,(MethodInfo *)0x0);
          pMVar11 = MethodInfo_System_Collections_Generic_List_AottgProfilePreset_Add;
          piVar1 = (int32_t *)((long)&__this->name + 4);
          *piVar1 = *piVar1 + 1;
          pGVar10 = ((System_Collections_Generic_List_AottgProfilePreset__Fields *)&__this->invoker_method)->
                    _items;
          if (pGVar10 == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) goto label_058f471f;
          uVar2 = *(uint *)&__this->name;
          if (uVar2 < (uint)pGVar10->max_length) {
            *(uint *)&__this->name = uVar2 + 1;
            pGVar10->m_Items[(int)uVar2].fields.Sprite = local_48.fields.Sprite;
            pGVar10->m_Items[(int)uVar2].fields.Key = local_48.fields.Key;
            pGVar10->m_Items[(int)uVar2].fields.Label = local_48.fields.Label;
            Il2CppCodeGenWriteBarrier((void **)(pGVar10->m_Items + (int)uVar2));
          }
          else {
            item.fields.Label = local_48.fields.Label;
            item.fields.Key = local_48.fields.Key;
            item.fields.Sprite = local_48.fields.Sprite;
            System_Collections_Generic_List_AottgProfilePreset___AddWithResize
                      ((System_Collections_Generic_List_AottgProfilePreset__o *)__this,item,
                       (MethodInfo_51CB2D0 *)pMVar11->klass->rgctx_data[0xe].method);
          }
          uVar12 = uVar12 + 1;
          uVar2 = (uint)pSVar6->max_length;
          uVar7 = (ulong)uVar2;
        } while ((long)uVar12 < (long)(int)uVar2);
      }
      pGVar10 = System_Collections_Generic_List_AottgProfilePreset___ToArray
                          ((System_Collections_Generic_List_AottgProfilePreset__o *)__this,
                           (MethodInfo_51CD970 *)
                           MethodInfo_System_Collections_Generic_List_AottgProfilePreset_ToArray);
      return pGVar10;
    }
    if (0 < iVar5) {
      pSVar3 = pSVar6->m_Items[0];
      if (Il2CppMethodInitialized_075455b4 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"None");
        il2cpp_codegen_initialize_runtime_metadata(&"Emoji");
        Il2CppMethodInitialized_075455b4 = '\x01';
      }
      pMVar11 = (MethodInfo *)0x0;
      bVar4 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
      if (bVar4) {
        pSVar8 = "None";
      }
      else {
        if (pSVar3 == (System_String_o *)0x0) goto label_058f471f;
        pMVar11 = (MethodInfo *)"Emoji";
        pSVar8 = System_String__Replace_5304550
                           (pSVar3,"Emoji",
                            (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),(MethodInfo *)0x0);
      }
      pSVar9 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__Sprite(pSVar3,pMVar11);
      local_48.fields.Key = (System_String_o *)0x0;
      local_48.fields.Label = (System_String_o *)0x0;
      local_48.fields.Sprite = (System_String_o *)0x0;
      Gisketch_Aottg2UI_Game_AottgProfilePreset___ctor(&local_48,pSVar3,pSVar8,pSVar9,(MethodInfo *)0x0);
      ThrowNullReferenceException();
    }
  }
label_058f471f:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEmoteCatalog$$Sprite
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEmoteCatalog__Sprite (System_String_o* value, const MethodInfo* method);
// 0x58f4b90

System_String_o * Gisketch_Aottg2UI_Game_AottgEmoteCatalog__Sprite(System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  System_String_o **ppSVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075455b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Emotes/");
    il2cpp_codegen_initialize_runtime_metadata(&"_0");
    il2cpp_codegen_initialize_runtime_metadata(&"Icon");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Icons/Profile/");
    Il2CppMethodInitialized_075455b3 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (Il2CppMethodInitialized_075455b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Emoji");
    Il2CppMethodInitialized_075455b8 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (!bVar1) {
    if (value == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    method_00 = (MethodInfo *)"Emoji";
    bVar1 = System_String__StartsWith_53002b0(value,"Emoji",4,(MethodInfo *)0x0);
    if (bVar1) {
      bVar1 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__IsAnimated(value,method_00);
      if (bVar1) {
        ppSVar2 = &"_0";
      }
      else {
        ppSVar2 = *(System_String_o ***)(g_data_07556758 + 0xb8);
      }
      pSVar3 = "UI/Icons/Emotes/";
      goto label_058f4c8f;
    }
  }
  ppSVar2 = &"Icon";
  pSVar3 = "UI/Icons/Profile/";
label_058f4c8f:
  pSVar3 = System_String__Concat_5301f10(pSVar3,value,*ppSVar2,(MethodInfo *)0x0);
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgEmoteCatalog$$Label
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEmoteCatalog__Label (System_String_o* value, const MethodInfo* method);
// 0x58f4b10

System_String_o * Gisketch_Aottg2UI_Game_AottgEmoteCatalog__Label(System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_075455b4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"Emoji");
    Il2CppMethodInitialized_075455b4 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1) {
    return "None";
  }
  if (value == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  pSVar2 = System_String__Replace_5304550
                     (value,"Emoji",(System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8),
                      (MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgEmoteCatalog$$IsAnimated
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgEmoteCatalog__IsAnimated (System_String_o* value, const MethodInfo* method);
// 0x58f4d10
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58f4d8d: nop dword ptr [rax]

bool Gisketch_Aottg2UI_Game_AottgEmoteCatalog__IsAnimated(System_String_o *value,MethodInfo *method)

{
  uint uVar1;
  bool bVar2;
  System_String_array *pSVar3;
  ulong uVar4;
  ulong uVar5;
  
  if (Il2CppMethodInitialized_075455b5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"Data/Info/EmoteInfo");
    il2cpp_codegen_initialize_runtime_metadata(&"AnimatedEmojis");
    Il2CppMethodInitialized_075455b5 = '\x01';
  }
  pSVar3 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
  pSVar3 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__ReadList
                     ("Data/Info/EmoteInfo","AnimatedEmojis",pSVar3,(MethodInfo *)&"AnimatedEmojis")
  ;
  if (pSVar3 == (System_String_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pSVar3->max_length < 1) {
    return false;
  }
  uVar4 = pSVar3->max_length & 0xffffffff;
  uVar5 = 0;
  while( true ) {
    if (uVar4 <= uVar5) {
      ThrowIndexOutOfRangeException();
    }
    bVar2 = System_String__op_Equality(pSVar3->m_Items[uVar5],value,(MethodInfo *)0x0);
    if (bVar2) break;
    uVar5 = uVar5 + 1;
    uVar1 = (uint)pSVar3->max_length;
    uVar4 = (ulong)uVar1;
    if ((long)(int)uVar1 <= (long)uVar5) {
      return false;
    }
  }
  return true;
}


// Gisketch.Aottg2UI.Game.AottgEmoteCatalog$$AllStickers
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgEmoteCatalog__AllStickers (const MethodInfo* method);
// 0x58f4790

System_String_array * Gisketch_Aottg2UI_Game_AottgEmoteCatalog__AllStickers(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_o *pSVar3;
  System_String_array *pSVar4;
  MethodInfo *pMVar5;
  bool bVar6;
  System_String_array *pSVar7;
  System_Collections_Generic_List_string__o *__this;
  ulong uVar8;
  MethodInfo *in_RCX;
  ulong uVar9;
  long lVar10;
  
  if (Il2CppMethodInitialized_075455b6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_Add);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_string_ToArray);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_string_ctor_7196948);
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
    Il2CppMethodInitialized_075455b6 = '\x01';
  }
  pSVar7 = (System_String_array *)SZArrayNew(TypeInfo_string_array,4);
  if (pSVar7 == (System_String_array *)0x0) goto label_058f4afb;
  if ((int)pSVar7->max_length != 0) {
    pSVar7->m_Items[0] = "EmojiSmile";
    Il2CppCodeGenWriteBarrier(pSVar7->m_Items);
    if ((pSVar7->max_length & 0xfffffffe) != 0) {
      pSVar7->m_Items[1] = "EmojiThumbsUp";
      Il2CppCodeGenWriteBarrier(pSVar7->m_Items + 1);
      if (2 < (uint)pSVar7->max_length) {
        pSVar7->m_Items[2] = "EmojiCool";
        Il2CppCodeGenWriteBarrier(pSVar7->m_Items + 2);
        if ((pSVar7->max_length & 0xfffffffc) != 0) {
          pSVar7->m_Items[3] = "EmojiLove";
          Il2CppCodeGenWriteBarrier(pSVar7->m_Items + 3);
          pSVar7 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__ReadList
                             ("Data/Info/EmoteInfo","AllEmojis",pSVar7,in_RCX);
          __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
          System_Collections_Generic_List_object____ctor_395ca70
                    ((System_Collections_Generic_List_object__o *)__this,
                     (System_Collections_Generic_IEnumerable_T__o *)pSVar7,
                     (MethodInfo_395CA70 *)MethodInfo_System_Collections_Generic_List_string_ctor_7196948);
          pSVar7 = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
          pSVar7 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__ReadList
                             ("Data/Info/ProfileIconInfo","Icons",pSVar7,
                              (MethodInfo *)&"Icons");
          if (pSVar7 != (System_String_array *)0x0) {
            uVar8 = pSVar7->max_length;
            if (__this == (System_Collections_Generic_List_string__o *)0x0) {
              if ((int)uVar8 < 1) goto label_058f4afb;
              lVar10 = 0;
              do {
                if ((uint)uVar8 <= (uint)lVar10) goto label_058f4b00;
                pSVar3 = pSVar7->m_Items[lVar10];
                if (Il2CppMethodInitialized_075455b8 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&"Emoji");
                  Il2CppMethodInitialized_075455b8 = '\x01';
                }
                bVar6 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
                if ((bVar6) || (pSVar3 == (System_String_o *)0x0)) goto label_058f4afb;
                bVar6 = System_String__StartsWith_53002b0(pSVar3,"Emoji",4,(MethodInfo *)0x0);
                if (!bVar6) goto label_058f4afb;
                uVar2 = (uint)pSVar7->max_length;
                uVar8 = (ulong)uVar2;
                lVar10 = lVar10 + 1;
              } while ((int)lVar10 < (int)uVar2);
            }
            else if (0 < (int)uVar8) {
              uVar8 = uVar8 & 0xffffffff;
              uVar9 = 0;
              do {
                if (uVar8 <= uVar9) goto label_058f4b00;
                pSVar3 = pSVar7->m_Items[uVar9];
                if (Il2CppMethodInitialized_075455b8 == '\0') {
                  il2cpp_codegen_initialize_runtime_metadata(&"Emoji");
                  Il2CppMethodInitialized_075455b8 = '\x01';
                }
                bVar6 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
                if (bVar6) {
label_058f4a23:
                  pMVar5 = MethodInfo_System_Collections_Generic_List_string_Add;
                  piVar1 = &(__this->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar4 = (__this->fields)._items;
                  if (pSVar4 == (System_String_array *)0x0) goto label_058f4afb;
                  uVar2 = (__this->fields)._size;
                  if (uVar2 < (uint)pSVar4->max_length) {
                    (__this->fields)._size = uVar2 + 1;
                    pSVar4->m_Items[(int)uVar2] = pSVar3;
                    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + (int)uVar2);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar3,
                               (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
                  }
                }
                else {
                  if (pSVar3 == (System_String_o *)0x0) goto label_058f4afb;
                  bVar6 = System_String__StartsWith_53002b0(pSVar3,"Emoji",4,(MethodInfo *)0x0);
                  if (!bVar6) goto label_058f4a23;
                }
                uVar9 = uVar9 + 1;
                uVar2 = (uint)pSVar7->max_length;
                uVar8 = (ulong)uVar2;
              } while ((long)uVar9 < (long)(int)uVar2);
            }
            if (__this != (System_Collections_Generic_List_string__o *)0x0) {
              pSVar7 = (System_String_array *)
                       System_Collections_Generic_List_object___ToArray
                                 ((System_Collections_Generic_List_object__o *)__this,
                                  (MethodInfo_395F5A0 *)
                                  MethodInfo_System_Collections_Generic_List_string_ToArray);
              return pSVar7;
            }
          }
label_058f4afb:
          ThrowNullReferenceException();
        }
      }
    }
  }
label_058f4b00:
  ThrowIndexOutOfRangeException();
}


// Gisketch.Aottg2UI.Game.AottgEmoteCatalog$$ReadList
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgEmoteCatalog__ReadList (System_String_o* path, System_String_o* key, System_String_array* fallback, const MethodInfo* method);
// 0x58f4de0
// eh: try 0x58f507f..0x58f52ac -> pad 0x58f52c5 (+7 call sites) catch Il2CppExceptionWrapper, cleanup [compiler noexcept guard]
// eh: try 0x58f52df..0x58f52e4 -> pad 0x58f52e9 cleanup
// eh: try 0x58f52ec..0x58f52f6 -> pad 0x58f52fe catch (...) [compiler noexcept guard]
// asm: 39 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58f504b: lea r13, [rip + 0x19843a6]  ; TypeInfo_System_Collections_IEnumerator
// asm:   0x58f5052: lea rbp, [rip + 0x197bf77]  ; TypeInfo_System_Collections_Generic_IEnumerator_JSONNode
// asm:   0x58f5059: lea r15, [rip + 0x19a18f8]  ; MethodInfo_System_Collections_Generic_List_string_Add
// asm:   0x58f5060: jmp 0x58f5097
// asm:   0x58f508a: mov rbx, qword ptr [rsp]
// asm:   0x58f508e: test rbx, rbx
// asm:   0x58f5091: je 0x58f529d
// asm:   0x58f521e: nop 
// asm:   0x58f5256: test r15, r15
// asm:   0x58f5259: jne 0x58f52b1
// asm:   0x58f525b: cmp ebp, 5
// asm:   0x58f525e: je 0x58f5264
// asm:   0x58f5260: test ebp, ebp
// asm:   0x58f5262: jne 0x58f5286
// asm:   0x58f52b1: mov rdi, r15
// asm:   0x58f52b4: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58f52b9: jmp 0x58f52c5
// asm:   0x58f52bb: jmp 0x58f52c5
// asm:   0x58f52bd: jmp 0x58f52c5
// asm:   0x58f52bf: jmp 0x58f52c5
// asm:   0x58f52c1: jmp 0x58f52c5
// asm:   0x58f52c3: jmp 0x58f52c5
// asm:   0x58f52c5: mov rbx, rax
// asm:   0x58f52c8: cmp edx, 1
// asm:   0x58f52cb: jne 0x58f52ec
// asm:   0x58f52cd: mov rdi, rbx
// asm:   0x58f52d0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58f52d5: mov r15, qword ptr [rax]
// asm:   0x58f52d8: mov qword ptr [rsp + 8], r15
// asm:   0x58f52dd: xor ebp, ebp
// asm:   0x58f52df: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58f52e4: jmp 0x58f51ef
// asm:   0x58f52e9: mov rbx, rax
// asm:   0x58f52ec: lea rdi, [rsp + 8]
// asm:   0x58f52f1: call 0x2fd0b20  ; il2cpp_runtime_helper_02fd0b20()
// asm:   0x58f52f6: mov rdi, rbx
// asm:   0x58f52f9: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58f52fe: mov rdi, rax
// asm:   0x58f5301: call 0x2ab61e0  ; __clang_call_terminate()

System_String_array *
Gisketch_Aottg2UI_Game_AottgEmoteCatalog__ReadList
          (System_String_o *path,System_String_o *key,System_String_array *fallback,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Il2CppClass *pIVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  System_String_array *pSVar5;
  MethodInfo *pMVar6;
  bool bVar7;
  char cVar8;
  UnityEngine_Object_o *x;
  System_String_o *pSVar9;
  SimpleJSONFixed_JSONNode_o *a;
  SimpleJSONFixed_JSONNode_o *a_00;
  System_Collections_Generic_List_string__o *__this;
  Il2CppObject *pIVar10;
  VirtualInvokeData *pVVar11;
  ulong uVar12;
  long lVar13;
  Il2CppObject *local_48;
  undefined8 local_40;
  undefined1 *local_38;
  
  if (Il2CppMethodInitialized_075455b7 == '\0') {
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
    Il2CppMethodInitialized_075455b7 = '\x01';
  }
  local_48 = (Il2CppObject *)0x0;
  x = (UnityEngine_Object_o *)
      UnityEngine_Resources__Load_object_
                (path,(MethodInfo_3665C30 *)MethodInfo_UnityEngine_Resources_Load_TextAsset);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar7 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    return fallback;
  }
  if (x == (UnityEngine_Object_o *)0x0) goto label_058f52ac;
  pSVar9 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
  a = SimpleJSONFixed_JSON__Parse(pSVar9,(MethodInfo *)0x0);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  a_00 = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar7 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_058f52ac;
    a_00 = (*(a->klass->vtable)._7_get_Item.methodPtr)(a,key,(a->klass->vtable)._7_get_Item.method);
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_List_string);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this,
             (MethodInfo_395C910 *)MethodInfo_System_Collections_Generic_List_string_ctor);
  if ((TypeInfo_SimpleJSONFixed_JSONNode->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_SimpleJSONFixed_JSONNode);
  }
  bVar7 = SimpleJSONFixed_JSONNode__op_Inequality(a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if (bVar7) {
    if ((a_00 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
       (pIVar10 = (Il2CppObject *)
                  (*(a_00->klass->vtable)._27_get_Children.methodPtr)
                            (a_00,(a_00->klass->vtable)._27_get_Children.method),
       pIVar10 != (Il2CppObject *)0x0)) {
      pIVar3 = pIVar10->klass;
      uVar12 = (ulong)(pIVar3->_2).interface_offsets_count;
      if (uVar12 != 0) {
        pIVar4 = (pIVar3->_1).interfaceOffsets;
        lVar13 = 0;
        do {
          if (*(System_Collections_Generic_IEnumerable_JSONNode__c **)((long)&pIVar4->interfaceType + lVar13)
              == TypeInfo_System_Collections_Generic_IEnumerable_JSONNode) {
            pVVar11 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar13);
            goto label_058f5021;
          }
          lVar13 = lVar13 + 0x10;
        } while (uVar12 * 0x10 != lVar13);
      }
      pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath
                          (pIVar10,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerable_JSONNode,0);
label_058f5021:
      pIVar10 = (*pVVar11->methodPtr)(pIVar10,pVVar11->method);
      local_38 = (undefined1 *)&local_48;
      local_40 = 0;
      do {
        local_48 = pIVar10;
        if (pIVar10 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar3 = pIVar10->klass;
        uVar12 = (ulong)(pIVar3->_2).interface_offsets_count;
        if (uVar12 != 0) {
          pIVar4 = (pIVar3->_1).interfaceOffsets;
          lVar13 = 0;
          do {
            if (*(Il2CppClass **)((long)&pIVar4->interfaceType + lVar13) ==
                (Il2CppClass *)TypeInfo_System_Collections_IEnumerator) {
              pVVar11 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar13);
              goto label_058f50f3;
            }
            lVar13 = lVar13 + 0x10;
          } while (uVar12 * 0x10 != lVar13);
        }
        pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath
                            (pIVar10,(Il2CppClass *)TypeInfo_System_Collections_IEnumerator,0);
label_058f50f3:
        cVar8 = (*pVVar11->methodPtr)(pIVar10,pVVar11->method);
        pIVar10 = local_48;
        if (cVar8 == '\0') {
          if (local_48 == (Il2CppObject *)0x0) goto label_058f5264;
          pIVar3 = local_48->klass;
          uVar12 = (ulong)(pIVar3->_2).interface_offsets_count;
          if (uVar12 == 0) goto label_058f522f;
          pIVar4 = (pIVar3->_1).interfaceOffsets;
          lVar13 = 0;
          goto label_058f5220;
        }
        if (local_48 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pIVar3 = local_48->klass;
        uVar12 = (ulong)(pIVar3->_2).interface_offsets_count;
        if (uVar12 != 0) {
          pIVar4 = (pIVar3->_1).interfaceOffsets;
          lVar13 = 0;
          do {
            if (*(System_Collections_Generic_IEnumerator_JSONNode__c **)
                 ((long)&pIVar4->interfaceType + lVar13) ==
                TypeInfo_System_Collections_Generic_IEnumerator_JSONNode) {
              pVVar11 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar13);
              goto label_058f5173;
            }
            lVar13 = lVar13 + 0x10;
          } while (uVar12 * 0x10 != lVar13);
        }
        pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath
                            (local_48,(Il2CppClass *)TypeInfo_System_Collections_Generic_IEnumerator_JSONNode,
                             0);
label_058f5173:
        pIVar10 = (*pVVar11->methodPtr)(pIVar10,pVVar11->method);
        if (pIVar10 == (Il2CppObject *)0x0) {
          ThrowNullReferenceException();
        }
        pSVar9 = (System_String_o *)
                 (*pIVar10->klass->vtable[9].methodPtr)(pIVar10,pIVar10->klass->vtable[9].method);
        pMVar6 = MethodInfo_System_Collections_Generic_List_string_Add;
        if (__this == (System_Collections_Generic_List_string__o *)0x0) {
label_058f5298:
          ThrowNullReferenceException();
        }
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar5 = (__this->fields)._items;
        if (pSVar5 == (System_String_array *)0x0) goto label_058f5298;
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar5->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pSVar5->m_Items[(int)uVar2] = pSVar9;
          Il2CppCodeGenWriteBarrier(pSVar5->m_Items + (int)uVar2);
          pIVar10 = local_48;
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)__this,(Il2CppObject *)pSVar9,
                     (MethodInfo_395D230 *)pMVar6->klass->rgctx_data[0xe].method);
          pIVar10 = local_48;
        }
      } while( true );
    }
    goto label_058f52ac;
  }
  goto label_058f5264;
  while (lVar13 = lVar13 + 0x10, uVar12 * 0x10 != lVar13) {
label_058f5220:
    if (*(System_IDisposable_c **)((long)&pIVar4->interfaceType + lVar13) == TypeInfo_System_IDisposable) {
      pVVar11 = pIVar3->vtable + *(int *)((long)&pIVar4->offset + lVar13);
      goto label_058f524d;
    }
  }
label_058f522f:
  pVVar11 = GetInterfaceInvokeDataFromVTableSlowPath(local_48,(Il2CppClass *)TypeInfo_System_IDisposable,0);
label_058f524d:
  (*pVVar11->methodPtr)(pIVar10,pVVar11->method);
label_058f5264:
  if (__this != (System_Collections_Generic_List_string__o *)0x0) {
    if (0 < (__this->fields)._size) {
      fallback = (System_String_array *)
                 System_Collections_Generic_List_object___ToArray
                           ((System_Collections_Generic_List_object__o *)__this,
                            (MethodInfo_395F5A0 *)MethodInfo_System_Collections_Generic_List_string_ToArray);
    }
    return fallback;
  }
label_058f52ac:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgEmoteCatalog$$IsEmoji
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgEmoteCatalog__IsEmoji (System_String_o* value, const MethodInfo* method);
// 0x58f4cb0

bool Gisketch_Aottg2UI_Game_AottgEmoteCatalog__IsEmoji(System_String_o *value,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_075455b8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Emoji");
    Il2CppMethodInitialized_075455b8 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1) {
    return false;
  }
  if (value == (System_String_o *)0x0) {
    ThrowNullReferenceException();
  }
  bVar1 = System_String__StartsWith_53002b0(value,"Emoji",4,(MethodInfo *)0x0);
  return bVar1;
}


