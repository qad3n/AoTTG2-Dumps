// Type: Gisketch.Aottg2UI.Styling.GisketchFontFallback
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Styling/GisketchFontFallback.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Styling.GisketchFontFallback.<>c__DisplayClass7_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchFontFallback___c__DisplayClass7_0___ctor (Gisketch_Aottg2UI_Styling_GisketchFontFallback___c__DisplayClass7_0_o* __this, const MethodInfo* method);
// 0x5330580

void Gisketch_Aottg2UI_Styling_GisketchFontFallback___c__DisplayClass7_0___ctor
               (Gisketch_Aottg2UI_Styling_GisketchFontFallback___c__DisplayClass7_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchFontFallback.<>c__DisplayClass7_0$$<ApplyLanguage>b__0
// il2cpp: int32_t Gisketch_Aottg2UI_Styling_GisketchFontFallback___c__DisplayClass7_0___ApplyLanguage_b__0 (Gisketch_Aottg2UI_Styling_GisketchFontFallback___c__DisplayClass7_0_o* __this, TMPro_TMP_FontAsset_o* a, TMPro_TMP_FontAsset_o* b, const MethodInfo* method);
// 0x5330bd0

int32_t Gisketch_Aottg2UI_Styling_GisketchFontFallback___c__DisplayClass7_0___ApplyLanguage_b__0
                  (Gisketch_Aottg2UI_Styling_GisketchFontFallback___c__DisplayClass7_0_o *__this,
                  TMPro_TMP_FontAsset_o *a,TMPro_TMP_FontAsset_o *b,MethodInfo *method)

{
  System_String_o *languageKey;
  int32_t iVar1;
  TMPro_TMP_FontAsset_o *extraout_RDX;
  TMPro_TMP_FontAsset_o *extraout_RDX_00;
  TMPro_TMP_FontAsset_o *method_00;
  MethodInfo *method_01;
  int32_t local_24;
  
  method_00 = b;
  if (Il2CppMethodInitialized_07542867 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
    Il2CppMethodInitialized_07542867 = '\x01';
    method_00 = extraout_RDX;
  }
  languageKey = (__this->fields).languageKey;
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
    method_00 = extraout_RDX_00;
  }
  Gisketch_Aottg2UI_Styling_GisketchFontFallback__Priority(a,languageKey,(MethodInfo *)method_00);
  iVar1 = Gisketch_Aottg2UI_Styling_GisketchFontFallback__Priority(b,(__this->fields).languageKey,method_01);
  iVar1 = System_Int32__CompareTo_54b7380(&local_24,iVar1,(MethodInfo *)0x0);
  return iVar1;
}


// Gisketch.Aottg2UI.Styling.GisketchFontFallback$$Install
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchFontFallback__Install (const MethodInfo* method);
// 0x532f480

void Gisketch_Aottg2UI_Styling_GisketchFontFallback__Install(MethodInfo *method)

{
  TMPro_TMP_Text_MissingCharacterEventCallback_o *pTVar1;
  System_Action_o *pSVar2;
  
  if (Il2CppMethodInitialized_07542859 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback_OnMissingCharacter);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback_Restore);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TMPro_TMP_Text_MissingCharacterEventCallback);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TMPro_TMP_Text);
    Il2CppMethodInitialized_07542859 = '\x01';
  }
  pTVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_TMPro_TMP_Text_MissingCharacterEventCallback);
  TMPro_TMP_Text_MissingCharacterEventCallback___ctor
            (pTVar1,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback_OnMissingCharacter,
             (MethodInfo *)0x0);
  if ((TypeInfo_TMPro_TMP_Text->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_TMPro_TMP_Text);
  }
  TMPro_TMP_Text__remove_OnMissingCharacter(pTVar1,(MethodInfo *)0x0);
  pTVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_TMPro_TMP_Text_MissingCharacterEventCallback);
  TMPro_TMP_Text_MissingCharacterEventCallback___ctor
            (pTVar1,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback_OnMissingCharacter,
             (MethodInfo *)0x0);
  TMPro_TMP_Text__add_OnMissingCharacter(pTVar1,(MethodInfo *)0x0);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            (pSVar2,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback_Restore,(MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  UnityEngine_Application__remove_quitting(pSVar2,(MethodInfo *)0x0);
  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action);
  System_Action___ctor
            (pSVar2,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback_Restore,(MethodInfo *)0x0);
  UnityEngine_Application__add_quitting(pSVar2,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchFontFallback$$Ensure
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchFontFallback__Ensure (TMPro_TMP_FontAsset_o* preferred, System_String_o* characters, const MethodInfo* method);
// 0x532f5c0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x532f5f8: jmp 0x532f7fb
// asm:   0x532f670: mov ebp, ebx
// asm:   0x532f765: jmp 0x532f7be

void Gisketch_Aottg2UI_Styling_GisketchFontFallback__Ensure
               (TMPro_TMP_FontAsset_o *preferred,System_String_o *characters,MethodInfo *method)

{
  int index;
  uint32_t uVar1;
  bool bVar2;
  uint16_t uVar3;
  uint16_t uVar4;
  uint unicode;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  int index_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_0754285a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
    Il2CppMethodInitialized_0754285a = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  }
  else {
    bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  }
  if (bVar2) {
    if (characters == (System_String_o *)0x0) {
      ThrowNullReferenceException();
    }
    if (0 < (characters->fields)._stringLength) {
      index_00 = 0;
      do {
        uVar3 = System_String__get_Chars(characters,index_00,(MethodInfo *)0x0);
        uVar4 = System_String__get_Chars(characters,index_00,(MethodInfo *)0x0);
        if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_07556750);
        }
        bVar2 = System_Char__IsHighSurrogate(uVar4,(MethodInfo *)0x0);
        if ((!bVar2) || (index = index_00 + 1, (characters->fields)._stringLength <= index)) {
label_0532f770:
          uVar4 = System_String__get_Chars(characters,index_00,(MethodInfo *)0x0);
          if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_07556750);
          }
          bVar2 = System_Char__IsSurrogate(uVar4,(MethodInfo *)0x0);
          if (!bVar2) {
            unicode = (uint)uVar3;
            uVar1 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->_2).cctor_finished_or_no_cctor;
            method_00 = extraout_RDX_00;
            goto joined_r0x0532f7bc;
          }
        }
        else {
          uVar4 = System_String__get_Chars(characters,index,(MethodInfo *)0x0);
          if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_07556750);
          }
          bVar2 = System_Char__IsLowSurrogate(uVar4,(MethodInfo *)0x0);
          if (!bVar2) goto label_0532f770;
          uVar3 = System_String__get_Chars(characters,index_00,(MethodInfo *)0x0);
          uVar4 = System_String__get_Chars(characters,index,(MethodInfo *)0x0);
          if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init(g_data_07556750);
          }
          unicode = System_Char__ConvertToUtf32(uVar3,uVar4,(MethodInfo *)0x0);
          uVar1 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->_2).cctor_finished_or_no_cctor;
          method_00 = extraout_RDX;
          index_00 = index;
joined_r0x0532f7bc:
          if (uVar1 == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
            method_00 = extraout_RDX_01;
          }
          method_01 = (MethodInfo *)(ulong)unicode;
          bVar2 = Gisketch_Aottg2UI_Styling_GisketchFontFallback__Has(preferred,unicode,method_00);
          if (!bVar2) {
            if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->_2).cctor_finished_or_no_cctor == 0)
            {
              il2cpp_codegen_runtime_class_init
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
            }
            Gisketch_Aottg2UI_Styling_GisketchFontFallback__Add(unicode,method_01);
          }
        }
        index_00 = index_00 + 1;
      } while (index_00 < (characters->fields)._stringLength);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchFontFallback$$OnMissingCharacter
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchFontFallback__OnMissingCharacter (int32_t unicode, int32_t stringIndex, System_String_o* text, TMPro_TMP_FontAsset_o* fontAsset, TMPro_TMP_Text_o* textComponent, const MethodInfo* method);
// 0x532f9c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x532f9f8: jmp 0x532fb3c

void Gisketch_Aottg2UI_Styling_GisketchFontFallback__OnMissingCharacter
               (int32_t unicode,int32_t stringIndex,System_String_o *text,TMPro_TMP_FontAsset_o *fontAsset,
               TMPro_TMP_Text_o *textComponent,MethodInfo *method)

{
  uint32_t uVar1;
  System_Collections_Generic_HashSet_TMP_Text__o *pSVar2;
  System_Collections_Generic_HashSet_object__o *__this;
  bool bVar3;
  UnityEngine_Canvas_WillRenderCanvases_o *__this_00;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_0754285b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback_Refresh);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_TMP_Text_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_TMP_Text_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Canvas_WillRenderCanvases);
    Il2CppMethodInitialized_0754285b = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  }
  else {
    bVar3 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  }
  if (bVar3) {
    if ((((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    }
    method_00 = (MethodInfo *)0x0;
    bVar3 = UnityEngine_Object__op_Equality
                      ((UnityEngine_Object_o *)textComponent,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if (!bVar3) {
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
        bVar3 = Gisketch_Aottg2UI_Styling_GisketchFontFallback__Add(unicode,method_00);
      }
      else {
        bVar3 = Gisketch_Aottg2UI_Styling_GisketchFontFallback__Add(unicode,method_00);
      }
      if (bVar3) {
        if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback)->_2).
            cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init
                    ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
        }
        pSVar2 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->static_fields->Pending;
        if (pSVar2 != (System_Collections_Generic_HashSet_TMP_Text__o *)0x0) {
          if ((pSVar2->fields)._count == 0) {
            __this_00 = il2cpp_codegen_object_new
                                  ((Il2CppClass *)TypeInfo_UnityEngine_Canvas_WillRenderCanvases);
            UnityEngine_Canvas_WillRenderCanvases___ctor
                      (__this_00,(Il2CppObject *)0x0,
                       (intptr_t)MethodInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback_Refresh,
                       (MethodInfo *)0x0);
            UnityEngine_Canvas__add_willRenderCanvases(__this_00,(MethodInfo *)0x0);
            uVar1 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->_2).cctor_finished_or_no_cctor;
          }
          else {
            uVar1 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->_2).cctor_finished_or_no_cctor;
          }
          if (uVar1 == 0) {
            il2cpp_codegen_runtime_class_init
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
            __this = (System_Collections_Generic_HashSet_object__o *)
                     TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->static_fields->Pending;
          }
          else {
            __this = *(System_Collections_Generic_HashSet_object__o **)
                      ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback)->static_fields;
          }
          if (__this != (System_Collections_Generic_HashSet_object__o *)0x0) {
            System_Collections_Generic_HashSet_object___Add
                      (__this,(Il2CppObject *)textComponent,
                       (MethodInfo_4FB4450 *)MethodInfo_System_Collections_Generic_HashSet_TMP_Text_Add);
            return;
          }
        }
        ThrowNullReferenceException();
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchFontFallback$$Add
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchFontFallback__Add (int32_t unicode, const MethodInfo* method);
// 0x532f8c0

bool Gisketch_Aottg2UI_Styling_GisketchFontFallback__Add(int32_t unicode,MethodInfo *method)

{
  bool bVar1;
  bool bVar2;
  System_String_o *pSVar3;
  MethodInfo *in_RCX;
  bool local_29;
  
  if (Il2CppMethodInitialized_0754285c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Symbola SDF");
    Il2CppMethodInitialized_0754285c = '\x01';
  }
  local_29 = false;
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
  }
  pSVar3 = Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__CurrentLanguageName((MethodInfo *)0x0);
  pSVar3 = Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__CharacterFontKey
                     (unicode,pSVar3,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
  }
  bVar1 = Gisketch_Aottg2UI_Styling_GisketchFontFallback__TryCover(pSVar3,unicode,&local_29,in_RCX);
  if (bVar1) {
    local_29 = local_29 != false;
  }
  else {
    bVar2 = false;
    bVar1 = System_String__op_Inequality(pSVar3,"Symbola SDF",(MethodInfo *)0x0);
    if (bVar1) {
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
      }
      bVar2 = Gisketch_Aottg2UI_Styling_GisketchFontFallback__TryCover
                        ("Symbola SDF",unicode,&local_29,in_RCX);
    }
    local_29 = (bool)(local_29 & bVar2);
  }
  return local_29;
}


// Gisketch.Aottg2UI.Styling.GisketchFontFallback$$TryCover
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchFontFallback__TryCover (System_String_o* key, int32_t unicode, bool* added, const MethodInfo* method);
// 0x532fba0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x532fd6e: jmp 0x532fce3

bool Gisketch_Aottg2UI_Styling_GisketchFontFallback__TryCover
               (System_String_o *key,int32_t unicode,bool *added,MethodInfo *method)

{
  int iVar1;
  uint32_t uVar2;
  Il2CppClass *klass;
  bool bVar3;
  int32_t iVar4;
  TMPro_TMP_FontAsset_o *font;
  System_Collections_Generic_List_TMP_FontAsset__o *fallbacks;
  Gisketch_Aottg2UI_Styling_GisketchFontFallback_StaticFields *pGVar5;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *extraout_RDX_02;
  MethodInfo *extraout_RDX_03;
  MethodInfo *extraout_RDX_04;
  MethodInfo *pMVar6;
  
  if (Il2CppMethodInitialized_0754285d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TMP_FontAsset_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TMP_FontAsset_Insert);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TMP_FontAsset_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TMPro_TMP_Settings);
    Il2CppMethodInitialized_0754285d = '\x01';
  }
  *added = false;
  font = Gisketch_Aottg2UI_Styling_GisketchTypography__Load(key,(MethodInfo *)0x0);
  if ((TypeInfo_TMPro_TMP_Settings->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_TMPro_TMP_Settings);
  }
  fallbacks = TMPro_TMP_Settings__get_fallbackFontAssets((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)font,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    return false;
  }
  if (fallbacks == (System_Collections_Generic_List_TMP_FontAsset__o *)0x0) {
    return false;
  }
  pMVar6 = extraout_RDX;
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
    pMVar6 = extraout_RDX_00;
  }
  bVar3 = Gisketch_Aottg2UI_Styling_GisketchFontFallback__Has(font,unicode,pMVar6);
  if (bVar3) {
    bVar3 = System_Collections_Generic_List_object___Contains
                      ((System_Collections_Generic_List_object__o *)fallbacks,(Il2CppObject *)font,
                       (MethodInfo_395D6D0 *)MethodInfo_System_Collections_Generic_List_TMP_FontAsset_Contains
                      );
    if (bVar3) {
      return true;
    }
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
      pGVar5 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->static_fields;
      iVar1 = pGVar5->_designedCount;
      pMVar6 = extraout_RDX_03;
    }
    else {
      pGVar5 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->static_fields;
      iVar1 = pGVar5->_designedCount;
      pMVar6 = extraout_RDX_01;
    }
    if (iVar1 < 0) {
      iVar4 = (fallbacks->fields)._size;
      if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback)->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
        pGVar5 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->static_fields;
        pMVar6 = extraout_RDX_04;
      }
      klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback;
      pGVar5->_designedCount = iVar4;
      uVar2 = (((Gisketch_Aottg2UI_Styling_GisketchFontFallback_c *)klass)->_2).cctor_finished_or_no_cctor;
    }
    else {
      uVar2 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback)->_2).
              cctor_finished_or_no_cctor;
      klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback;
    }
    if (uVar2 == 0) {
      il2cpp_codegen_runtime_class_init(klass);
      pMVar6 = extraout_RDX_02;
    }
    iVar4 = Gisketch_Aottg2UI_Styling_GisketchFontFallback__InsertIndex(fallbacks,key,pMVar6);
    System_Collections_Generic_List_object___Insert
              ((System_Collections_Generic_List_object__o *)fallbacks,iVar4,(Il2CppObject *)font,
               (MethodInfo_395E3E0 *)MethodInfo_System_Collections_Generic_List_TMP_FontAsset_Insert);
    *added = true;
    return true;
  }
  return false;
}


// Gisketch.Aottg2UI.Styling.GisketchFontFallback$$ApplyLanguage
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchFontFallback__ApplyLanguage (const MethodInfo* method);
// 0x532ffb0
// asm: 5 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5330103: jmp 0x5330459
// asm:   0x533042c: nop dword ptr [rax]
// asm:   0x533049d: jmp 0x53304e3
// asm:   0x53304b8: jmp 0x5330215
// asm:   0x5330566: jmp 0x5330298

void Gisketch_Aottg2UI_Styling_GisketchFontFallback__ApplyLanguage(MethodInfo *method)

{
  int32_t *piVar1;
  uint32_t uVar2;
  TMPro_TMP_FontAsset_array *pTVar3;
  MethodInfo *pMVar4;
  byte bVar5;
  bool bVar6;
  int32_t iVar7;
  uint uVar8;
  Gisketch_Aottg2UI_Styling_GisketchFontFallback___c__DisplayClass7_0_o *__this;
  System_Collections_Generic_List_TMP_FontAsset__o *__this_00;
  System_String_o *pSVar9;
  TMPro_TMP_FontAsset_o *pTVar10;
  System_Collections_Generic_List_object__o *__this_01;
  System_Comparison_T__o *comparison;
  TMPro_TMP_FontAsset_o *y;
  System_Object_array *pSVar11;
  Gisketch_Aottg2UI_Styling_GisketchFontFallback_StaticFields *pGVar12;
  int count;
  Gisketch_Aottg2UI_Styling_GisketchFontFallback___c__DisplayClass7_0_Fields *targetAddress;
  int iVar13;
  uint uVar14;
  Il2CppClass *klass;
  byte bVar15;
  
  if (Il2CppMethodInitialized_0754285e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Comparison_TMP_FontAsset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TMP_FontAsset_AddRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_TMP_FontAsset_Add);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TMP_FontAsset_Contains);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TMP_FontAsset_GetRange);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TMP_FontAsset_RemoveRange);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_List_TMP_FontAsset_Sort)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TMP_FontAsset_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TMP_FontAsset_get_Item);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_Resources_FindObjectsOfTypeAll_TMP_FontAsset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TMPro_TMP_Settings);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback_c__DisplayClass7_0_ApplyLanguage_b__0
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback_c__DisplayClass7_0);
    Il2CppMethodInitialized_0754285e = '\x01';
  }
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)
                      TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback_c__DisplayClass7_0);
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  if ((TypeInfo_TMPro_TMP_Settings->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_TMPro_TMP_Settings);
  }
  __this_00 = TMPro_TMP_Settings__get_fallbackFontAssets((MethodInfo *)0x0);
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
    bVar6 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  }
  else {
    bVar6 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  }
  if (!bVar6) {
    return;
  }
  if (__this_00 == (System_Collections_Generic_List_TMP_FontAsset__o *)0x0) {
    return;
  }
  if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback)->_2).
      cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
    pGVar12 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->static_fields;
    if (-1 < pGVar12->_designedCount) goto label_0533014d;
label_05330481:
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback;
    iVar7 = (__this_00->fields)._size;
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
      klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback;
      TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->static_fields->_designedCount = iVar7;
      uVar2 = (((Gisketch_Aottg2UI_Styling_GisketchFontFallback_c *)klass)->_2).cctor_finished_or_no_cctor;
      goto joined_r0x05330154;
    }
    pGVar12->_designedCount = iVar7;
    if ((((Gisketch_Aottg2UI_Styling_GisketchFontFallback_c *)klass)->_2).cctor_finished_or_no_cctor == 0)
    goto label_053304e3;
label_0533015a:
    if (Il2CppMethodInitialized_0754285f == '\0') goto label_053304f5;
label_05330167:
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor;
  }
  else {
    pGVar12 = ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback)->static_fields;
    if (pGVar12->_designedCount < 0) goto label_05330481;
label_0533014d:
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->_2).cctor_finished_or_no_cctor;
    klass = (Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback;
joined_r0x05330154:
    if (uVar2 != 0) goto label_0533015a;
label_053304e3:
    il2cpp_codegen_runtime_class_init(klass);
    if (Il2CppMethodInitialized_0754285f != '\0') goto label_05330167;
label_053304f5:
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_0754285f = '\x01';
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
  }
  pSVar9 = Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__CurrentLanguageName((MethodInfo *)0x0);
  pSVar9 = Gisketch_Aottg2UI_Styling_GisketchTypography__KeyForLanguage
                     ("text",400,pSVar9,(MethodInfo *)0x0);
  if (__this == (Gisketch_Aottg2UI_Styling_GisketchFontFallback___c__DisplayClass7_0_o *)0x0)
  goto label_0533056b;
  targetAddress = &__this->fields;
  (__this->fields).languageKey = pSVar9;
  Il2CppCodeGenWriteBarrier(&targetAddress->languageKey);
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
  }
  iVar7 = System_Array__IndexOf_object_
                    ((System_Object_array *)
                     TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->
                     FallbackFontKeys,(Il2CppObject *)targetAddress->languageKey,
                     (MethodInfo_3602AE0 *)MethodInfo_System_Array_IndexOf_string);
  if (iVar7 < 0) {
    pTVar10 = (TMPro_TMP_FontAsset_o *)0x0;
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    pTVar10 = Gisketch_Aottg2UI_Styling_GisketchTypography__Load(targetAddress->languageKey,(MethodInfo *)0x0)
    ;
    uVar2 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar6 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pTVar10,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((!bVar6) ||
     (bVar6 = System_Collections_Generic_List_object___Contains
                        ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pTVar10,
                         (MethodInfo_395D6D0 *)
                         MethodInfo_System_Collections_Generic_List_TMP_FontAsset_Contains),
     pMVar4 = MethodInfo_System_Collections_Generic_List_TMP_FontAsset_Add, bVar6)) {
label_05330285:
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->_2).cctor_finished_or_no_cctor;
  }
  else {
    piVar1 = &(__this_00->fields)._version;
    *piVar1 = *piVar1 + 1;
    pTVar3 = (__this_00->fields)._items;
    if (pTVar3 == (TMPro_TMP_FontAsset_array *)0x0) goto label_0533056b;
    uVar8 = (__this_00->fields)._size;
    if (uVar8 < (uint)pTVar3->max_length) {
      (__this_00->fields)._size = uVar8 + 1;
      pTVar3->m_Items[(int)uVar8] = pTVar10;
      Il2CppCodeGenWriteBarrier(pTVar3->m_Items + (int)uVar8);
      goto label_05330285;
    }
    System_Collections_Generic_List_object___AddWithResize
              ((System_Collections_Generic_List_object__o *)__this_00,(Il2CppObject *)pTVar10,
               (MethodInfo_395D230 *)pMVar4->klass->rgctx_data[0xe].method);
    uVar2 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->_2).cctor_finished_or_no_cctor;
  }
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
  }
  iVar13 = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->static_fields->_designedCount;
  __this_01 = (System_Collections_Generic_List_object__o *)
              System_Collections_Generic_List_object___GetRange
                        ((System_Collections_Generic_List_object__o *)__this_00,iVar13,
                         (__this_00->fields)._size - iVar13,
                         (MethodInfo_395E160 *)
                         MethodInfo_System_Collections_Generic_List_TMP_FontAsset_GetRange);
  comparison = (System_Comparison_T__o *)
               il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Comparison_TMP_FontAsset);
  System_Comparison_object____ctor
            ((System_Comparison_object__o *)comparison,(Il2CppObject *)__this,
             (intptr_t)
             MethodInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback_c__DisplayClass7_0_ApplyLanguage_b__0,
             (MethodInfo_48E28F0 *)0x0);
  if (__this_01 == (System_Collections_Generic_List_object__o *)0x0) {
label_0533056b:
    ThrowNullReferenceException();
  }
  System_Collections_Generic_List_object___Sort_395f500
            (__this_01,comparison,
             (MethodInfo_395F500 *)MethodInfo_System_Collections_Generic_List_TMP_FontAsset_Sort);
  if (0 < (__this_01->fields)._size) {
    iVar13 = 0;
    bVar5 = 0;
    do {
      bVar15 = bVar5;
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
      }
      pTVar10 = System_Collections_Generic_List_object___get_Item
                          ((System_Collections_Generic_List_object__o *)__this_00,
                           TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->static_fields->
                           _designedCount + iVar13,
                           (MethodInfo_395CF20 *)
                           MethodInfo_System_Collections_Generic_List_TMP_FontAsset_get_Item);
      y = System_Collections_Generic_List_object___get_Item
                    (__this_01,iVar13,
                     (MethodInfo_395CF20 *)MethodInfo_System_Collections_Generic_List_TMP_FontAsset_get_Item);
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar6 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pTVar10,(UnityEngine_Object_o *)y,(MethodInfo *)0x0);
      iVar13 = iVar13 + 1;
      count = (__this_01->fields)._size;
      bVar5 = bVar15 | bVar6;
    } while (iVar13 < count);
    if (bVar15 != 0 || bVar6) {
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
        count = (__this_01->fields)._size;
      }
      System_Collections_Generic_List_object___RemoveRange
                ((System_Collections_Generic_List_object__o *)__this_00,
                 TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->static_fields->_designedCount,count,
                 (MethodInfo_395F1A0 *)MethodInfo_System_Collections_Generic_List_TMP_FontAsset_RemoveRange);
      System_Collections_Generic_List_object___AddRange
                ((System_Collections_Generic_List_object__o *)__this_00,
                 (System_Collections_Generic_IEnumerable_T__o *)__this_01,
                 (MethodInfo_395D490 *)MethodInfo_System_Collections_Generic_List_TMP_FontAsset_AddRange);
      pSVar11 = UnityEngine_Resources__FindObjectsOfTypeAll_object_
                          ((MethodInfo_3665B10 *)
                           MethodInfo_UnityEngine_Resources_FindObjectsOfTypeAll_TMP_FontAsset);
      if (pSVar11 == (System_Object_array *)0x0) goto label_0533056b;
      uVar8 = (uint)pSVar11->max_length;
      if (0 < (int)uVar8) {
        uVar14 = 0;
        do {
          if (uVar8 <= uVar14) {
            ThrowIndexOutOfRangeException();
          }
          if ((TMPro_TMP_FontAsset_o *)pSVar11->m_Items[(int)uVar14] == (TMPro_TMP_FontAsset_o *)0x0)
          goto label_0533056b;
          TMPro_TMP_FontAsset__ReadFontAssetDefinition
                    ((TMPro_TMP_FontAsset_o *)pSVar11->m_Items[(int)uVar14],(MethodInfo *)0x0);
          uVar14 = uVar14 + 1;
          uVar8 = (uint)pSVar11->max_length;
        } while ((int)uVar14 < (int)uVar8);
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchFontFallback$$LanguageKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_Styling_GisketchFontFallback__LanguageKey (const MethodInfo* method);
// 0x5330590

System_String_o * Gisketch_Aottg2UI_Styling_GisketchFontFallback__LanguageKey(MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_0754285f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_0754285f = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__CurrentLanguageName((MethodInfo *)0x0);
  pSVar1 = Gisketch_Aottg2UI_Styling_GisketchTypography__KeyForLanguage
                     ("text",400,pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Styling.GisketchFontFallback$$Priority
// il2cpp: int32_t Gisketch_Aottg2UI_Styling_GisketchFontFallback__Priority (TMPro_TMP_FontAsset_o* font, System_String_o* languageKey, const MethodInfo* method);
// 0x5330600
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x533068e: cmp byte ptr [rip + 0x22121cc], 0
// asm:   0x5330695: jne 0x53306b6
// asm:   0x5330726: jmp 0x53306b6

int32_t Gisketch_Aottg2UI_Styling_GisketchFontFallback__Priority
                  (TMPro_TMP_FontAsset_o *font,System_String_o *languageKey,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  System_String_o *a;
  
  if (Il2CppMethodInitialized_07542860 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542860 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)font,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  iVar2 = 0x7fffffff;
  if (!bVar1) {
    if (font == (TMPro_TMP_FontAsset_o *)0x0) {
      ThrowNullReferenceException();
    }
    a = UnityEngine_Object__get_name((UnityEngine_Object_o *)font,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
    }
    if (Il2CppMethodInitialized_07542861 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_string);
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale)
      ;
      Il2CppMethodInitialized_07542861 = '\x01';
    }
    bVar1 = System_String__op_Equality(a,languageKey,(MethodInfo *)0x0);
    iVar2 = -1;
    if (!bVar1) {
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
      }
      iVar2 = System_Array__IndexOf_object_
                        ((System_Object_array *)
                         TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->
                         FallbackFontKeys,(Il2CppObject *)a,
                         (MethodInfo_3602AE0 *)MethodInfo_System_Array_IndexOf_string);
      return iVar2;
    }
  }
  return iVar2;
}


// Gisketch.Aottg2UI.Styling.GisketchFontFallback$$Priority
// il2cpp: int32_t Gisketch_Aottg2UI_Styling_GisketchFontFallback__Priority (System_String_o* key, System_String_o* languageKey, const MethodInfo* method);
// 0x5330730

int32_t Gisketch_Aottg2UI_Styling_GisketchFontFallback__Priority_5230730
                  (System_String_o *key,System_String_o *languageKey,MethodInfo *method)

{
  bool bVar1;
  int32_t iVar2;
  
  if (Il2CppMethodInitialized_07542861 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    Il2CppMethodInitialized_07542861 = '\x01';
  }
  bVar1 = System_String__op_Equality(key,languageKey,(MethodInfo *)0x0);
  if (bVar1) {
    return -1;
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
  }
  iVar2 = System_Array__IndexOf_object_
                    ((System_Object_array *)
                     TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->
                     FallbackFontKeys,(Il2CppObject *)key,
                     (MethodInfo_3602AE0 *)MethodInfo_System_Array_IndexOf_string);
  return iVar2;
}


// Gisketch.Aottg2UI.Styling.GisketchFontFallback$$InsertIndex
// il2cpp: int32_t Gisketch_Aottg2UI_Styling_GisketchFontFallback__InsertIndex (System_Collections_Generic_List_TMP_FontAsset__o* fallbacks, System_String_o* key, const MethodInfo* method);
// 0x532fd80
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x532fdb5: cmp byte ptr [rip + 0x2212aa3], 0
// asm:   0x532fe9b: lea r14, [rip + 0x1f66ed6]  ; MethodInfo_System_Collections_Generic_List_TMP_FontAsset_get_Item
// asm:   0x532fea2: nop word ptr cs:[rax + rax]
// asm:   0x532fef7: jmp 0x532ff93

int32_t Gisketch_Aottg2UI_Styling_GisketchFontFallback__InsertIndex
                  (System_Collections_Generic_List_TMP_FontAsset__o *fallbacks,System_String_o *key,
                  MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  int32_t iVar3;
  int32_t iVar4;
  int iVar5;
  System_String_o *pSVar6;
  TMPro_TMP_FontAsset_o *font;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  int index;
  
  if (Il2CppMethodInitialized_07542862 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TMP_FontAsset_get_Count);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TMP_FontAsset_get_Item);
    Il2CppMethodInitialized_07542862 = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
  }
  if (Il2CppMethodInitialized_0754285f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    Il2CppMethodInitialized_0754285f = '\x01';
    uVar1 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale)->_2).
            cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
  }
  pSVar6 = Gisketch_Aottg2UI_Styling_GisketchTypographyLocale__CurrentLanguageName((MethodInfo *)0x0);
  pSVar6 = Gisketch_Aottg2UI_Styling_GisketchTypography__KeyForLanguage
                     ("text",400,pSVar6,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07542861 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Array_IndexOf_string);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    Il2CppMethodInitialized_07542861 = '\x01';
  }
  bVar2 = System_String__op_Equality(key,pSVar6,(MethodInfo *)0x0);
  iVar3 = -1;
  if (!bVar2) {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale);
    }
    iVar3 = System_Array__IndexOf_object_
                      ((System_Object_array *)
                       TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTypographyLocale->static_fields->
                       FallbackFontKeys,(Il2CppObject *)key,
                       (MethodInfo_3602AE0 *)MethodInfo_System_Array_IndexOf_string);
  }
  if (fallbacks == (System_Collections_Generic_List_TMP_FontAsset__o *)0x0) {
    ThrowNullReferenceException();
  }
  index = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->static_fields->_designedCount;
  iVar5 = (fallbacks->fields)._size;
  if (index < iVar5) {
    do {
      font = System_Collections_Generic_List_object___get_Item
                       ((System_Collections_Generic_List_object__o *)fallbacks,index,
                        (MethodInfo_395CF20 *)
                        MethodInfo_System_Collections_Generic_List_TMP_FontAsset_get_Item);
      method_00 = extraout_RDX;
      if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
        method_00 = extraout_RDX_00;
      }
      iVar4 = Gisketch_Aottg2UI_Styling_GisketchFontFallback__Priority(font,pSVar6,method_00);
      if (iVar3 < iVar4) {
        return index;
      }
      index = index + 1;
      iVar5 = (fallbacks->fields)._size;
    } while (index < iVar5);
  }
  return iVar5;
}


// Gisketch.Aottg2UI.Styling.GisketchFontFallback$$Has
// il2cpp: bool Gisketch_Aottg2UI_Styling_GisketchFontFallback__Has (TMPro_TMP_FontAsset_o* font, int32_t unicode, const MethodInfo* method);
// 0x532f810

bool Gisketch_Aottg2UI_Styling_GisketchFontFallback__Has
               (TMPro_TMP_FontAsset_o *font,int32_t unicode,MethodInfo *method)

{
  bool bVar1;
  System_Collections_Generic_Dictionary_uint__TMP_Character__o *__this;
  System_UInt32_array *unicodes;
  
  if (Il2CppMethodInitialized_07542863 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_Dictionary_uint_TMP_Character_ContainsKey);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_uint_array);
    Il2CppMethodInitialized_07542863 = '\x01';
  }
  if (font != (TMPro_TMP_FontAsset_o *)0x0) {
    __this = TMPro_TMP_FontAsset__get_characterLookupTable(font,(MethodInfo *)0x0);
    if (__this != (System_Collections_Generic_Dictionary_uint__TMP_Character__o *)0x0) {
      bVar1 = System_Collections_Generic_Dictionary_uint__object___ContainsKey
                        ((System_Collections_Generic_Dictionary_TKey__TValue__o *)__this,unicode,
                         (MethodInfo_4B07B00 *)
                         MethodInfo_System_Collections_Generic_Dictionary_uint_TMP_Character_ContainsKey);
      if (bVar1) {
        return true;
      }
      unicodes = (System_UInt32_array *)SZArrayNew(TypeInfo_uint_array,1);
      if (unicodes != (System_UInt32_array *)0x0) {
        if ((int)unicodes->max_length == 0) {
          ThrowIndexOutOfRangeException();
        }
        unicodes->m_Items[0] = unicode;
        bVar1 = TMPro_TMP_FontAsset__TryAddCharacters(font,unicodes,false,(MethodInfo *)0x0);
        return bVar1;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchFontFallback$$Refresh
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchFontFallback__Refresh (const MethodInfo* method);
// 0x53307c0
// eh: try 0x53308f4..0x5330998 -> pad 0x53309a5 (+4 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x53309bd..0x53309c2 -> pad 0x53309e5 cleanup
// eh: try 0x53309e8..0x53309f2 -> pad 0x53309fa catch (...) [compiler noexcept guard]
// asm: 27 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x533099d: jmp 0x53309a5
// asm:   0x533099f: jmp 0x53309a5
// asm:   0x53309a1: jmp 0x53309a5
// asm:   0x53309a3: jmp 0x53309a5
// asm:   0x53309a5: mov rbx, rax
// asm:   0x53309a8: cmp edx, 1
// asm:   0x53309ab: jne 0x53309e8
// asm:   0x53309ad: mov rdi, rbx
// asm:   0x53309b0: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x53309b5: mov rbx, qword ptr [rax]
// asm:   0x53309b8: mov qword ptr [rsp + 0x20], rbx
// asm:   0x53309bd: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x53309c2: lea rax, [rip + 0x1f5e1ef]  ; MethodInfo_System_Collections_Generic_HashSet_Enumerator_TMP_Text_Dispose
// asm:   0x53309c9: mov rsi, qword ptr [rax]
// asm:   0x53309cc: mov rdi, rsp
// asm:   0x53309cf: call 0x4d456c0  ; System_Collections_Generic_HashSet_Enumerator_object___Dispose()
// asm:   0x53309d4: test rbx, rbx
// asm:   0x53309d7: je 0x5330953
// asm:   0x53309dd: mov rdi, rbx
// asm:   0x53309e0: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x53309e5: mov rbx, rax
// asm:   0x53309e8: lea rdi, [rsp + 0x20]
// asm:   0x53309ed: call 0x2d4a270  ; il2cpp_runtime_helper_02d4a270()
// asm:   0x53309f2: mov rdi, rbx
// asm:   0x53309f5: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x53309fa: mov rdi, rax
// asm:   0x53309fd: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Styling_GisketchFontFallback__Refresh(MethodInfo *method)

{
  System_Collections_Generic_HashSet_object__o *pSVar1;
  Il2CppObject *x;
  bool bVar2;
  UnityEngine_Canvas_WillRenderCanvases_o *__this;
  System_Collections_Generic_HashSet_Enumerator_T__o local_58;
  undefined8 local_38;
  undefined1 *local_30;
  
  if (Il2CppMethodInitialized_07542864 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_TMP_Text_Dispose);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_TMP_Text_MoveNext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_Enumerator_TMP_Text_get_Current);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback_Refresh);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_TMP_Text_Clear);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_HashSet_TMP_Text_GetEnumerator);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Canvas_WillRenderCanvases);
    Il2CppMethodInitialized_07542864 = '\x01';
  }
  local_58.fields._set = (System_Collections_Generic_HashSet_T__o *)0x0;
  local_58.fields._index = 0;
  local_58.fields._version = 0;
  local_58.fields._current = (Il2CppObject *)0x0;
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Canvas_WillRenderCanvases);
  UnityEngine_Canvas_WillRenderCanvases___ctor
            (__this,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback_Refresh,(MethodInfo *)0x0);
  UnityEngine_Canvas__remove_willRenderCanvases(__this,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
  }
  pSVar1 = (System_Collections_Generic_HashSet_object__o *)
           TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->static_fields->Pending;
  if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
    System_Collections_Generic_HashSet_object___GetEnumerator
              (&local_58,pSVar1,
               (MethodInfo_4FB3DA0 *)MethodInfo_System_Collections_Generic_HashSet_TMP_Text_GetEnumerator);
    local_38 = 0;
    local_30 = (undefined1 *)&local_58;
    while( true ) {
      bVar2 = System_Collections_Generic_HashSet_Enumerator_object___MoveNext
                        (&local_58,
                         (MethodInfo_4C456D0 *)
                         MethodInfo_System_Collections_Generic_HashSet_Enumerator_TMP_Text_MoveNext);
      x = local_58.fields._current;
      if (!bVar2) break;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar2 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar2) {
        if ((UnityEngine_Object_o *)x == (UnityEngine_Object_o *)0x0) {
          ThrowNullReferenceException();
        }
        (*(code *)((UnityEngine_Object_c *)x->klass)[1].vtable._2_GetHashCode.method)
                  (x,((UnityEngine_Object_c *)x->klass)[1].vtable._3_ToString.methodPtr);
      }
    }
    System_Collections_Generic_HashSet_Enumerator_object___Dispose
              (&local_58,
               (MethodInfo_4C456C0 *)MethodInfo_System_Collections_Generic_HashSet_Enumerator_TMP_Text_Dispose
              );
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
    }
    pSVar1 = (System_Collections_Generic_HashSet_object__o *)
             TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->static_fields->Pending;
    if (pSVar1 != (System_Collections_Generic_HashSet_object__o *)0x0) {
      System_Collections_Generic_HashSet_object___Clear
                (pSVar1,(MethodInfo_4FB36D0 *)MethodInfo_System_Collections_Generic_HashSet_TMP_Text_Clear);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Styling.GisketchFontFallback$$Restore
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchFontFallback__Restore (const MethodInfo* method);
// 0x5330a10
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5330ab0: cmp ebp, esi
// asm:   0x5330ab2: jg 0x5330aee
// asm:   0x5330b2c: jmp 0x5330abd

void Gisketch_Aottg2UI_Styling_GisketchFontFallback__Restore(MethodInfo *method)

{
  int iVar1;
  uint32_t uVar2;
  System_Collections_Generic_List_TMP_FontAsset__o *__this;
  int32_t index;
  
  if (Il2CppMethodInitialized_07542865 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TMP_FontAsset_RemoveRange);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_TMP_FontAsset_get_Count);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_TMPro_TMP_Settings);
    Il2CppMethodInitialized_07542865 = '\x01';
  }
  if ((TypeInfo_TMPro_TMP_Settings->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_TMPro_TMP_Settings);
  }
  __this = TMPro_TMP_Settings__get_fallbackFontAssets((MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
  }
  index = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->static_fields->_designedCount;
  if ((-1 < index) && (__this != (System_Collections_Generic_List_TMP_FontAsset__o *)0x0)) {
    iVar1 = (__this->fields)._size;
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
      index = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->static_fields->_designedCount;
    }
    if (index < iVar1) {
      if ((((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback)->_2).
          cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
        index = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->static_fields->_designedCount;
      }
      System_Collections_Generic_List_object___RemoveRange
                ((System_Collections_Generic_List_object__o *)__this,index,(__this->fields)._size - index,
                 (MethodInfo_395F1A0 *)MethodInfo_System_Collections_Generic_List_TMP_FontAsset_RemoveRange);
      uVar2 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->_2).cctor_finished_or_no_cctor;
      goto joined_r0x05330abb;
    }
  }
  uVar2 = (TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->_2).cctor_finished_or_no_cctor;
joined_r0x05330abb:
  if (uVar2 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
  }
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->static_fields->_designedCount = -1;
  return;
}


// Gisketch.Aottg2UI.Styling.GisketchFontFallback$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Styling_GisketchFontFallback___cctor (const MethodInfo* method);
// 0x5330b30

void Gisketch_Aottg2UI_Styling_GisketchFontFallback___cctor(MethodInfo *method)

{
  System_Collections_Generic_HashSet_TMP_Text__o *__this;
  
  if (Il2CppMethodInitialized_07542866 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_TMP_Text_ctor);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Collections_Generic_HashSet_TMP_Text);
    Il2CppMethodInitialized_07542866 = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Collections_Generic_HashSet_TMP_Text);
  System_Collections_Generic_HashSet_object____ctor
            ((System_Collections_Generic_HashSet_object__o *)__this,
             (MethodInfo_4FB2EA0 *)MethodInfo_System_Collections_Generic_HashSet_TMP_Text_ctor);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->static_fields->Pending = __this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->static_fields->Pending);
  TypeInfo_Gisketch_Aottg2UI_Styling_GisketchFontFallback->static_fields->_designedCount = -1;
  return;
}


