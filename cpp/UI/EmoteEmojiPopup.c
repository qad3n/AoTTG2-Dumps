// Type: UI.EmoteEmojiPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/UI/EmoteEmojiPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/EmoteEmojiPopup.cs
// --------------------------------

// UI.EmoteEmojiPopup$$Setup
// il2cpp: void UI_EmoteEmojiPopup__Setup (UI_EmoteEmojiPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x5d1ddf0

void UI_EmoteEmojiPopup__Setup(UI_EmoteEmojiPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_RawImage_o *pUVar2;
  
  if (Il2CppMethodInitialized_07547db7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&"Panel/Emoji");
    Il2CppMethodInitialized_07547db7 = '\x01';
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"Panel/Emoji",(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = UnityEngine_Component__GetComponent_object_
                         ((UnityEngine_Component_o *)pUVar1,
                          (MethodInfo_34B0830 *)MethodInfo_UnityEngine_Component_GetComponent_RawImage);
      (__this->fields)._emojiImage = pUVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._emojiImage);
      pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      (__this->fields)._transform = pUVar1;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._transform);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.EmoteEmojiPopup$$Load
// il2cpp: void UI_EmoteEmojiPopup__Load (UI_EmoteEmojiPopup_o* __this, System_String_o* text, float showTime, Characters_BaseCharacter_o* character, UnityEngine_Vector3_o offset, const MethodInfo* method);
// 0x5d1dea0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5d1e12b: jmp 0x5d1e265

void UI_EmoteEmojiPopup__Load
               (UI_EmoteEmojiPopup_o *__this,System_String_o *text,float showTime,
               Characters_BaseCharacter_o *character,UnityEngine_Vector3_o offset,MethodInfo *method)

{
  UnityEngine_Texture_o **targetAddress;
  UnityEngine_Texture_o **targetAddress_00;
  System_Collections_Generic_HashSet_object__o *__this_00;
  UnityEngine_UI_RawImage_o *pUVar1;
  System_String_o *pSVar2;
  UnityEngine_Texture2D_c *pUVar3;
  bool bVar4;
  System_String_o *pSVar5;
  System_String_o *name;
  UnityEngine_Texture_o *value;
  
  if (Il2CppMethodInitialized_07547db8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Collections_Generic_HashSet_string_Contains)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_ResourceManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Utility_ResourcePaths);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UI_UIManager);
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Game/Speaking");
    il2cpp_codegen_initialize_runtime_metadata(&"Emoji");
    il2cpp_codegen_initialize_runtime_metadata(&"_0");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Profile/");
    il2cpp_codegen_initialize_runtime_metadata(&"Icons/Emotes/");
    il2cpp_codegen_initialize_runtime_metadata(&"_1");
    il2cpp_codegen_initialize_runtime_metadata(&"Speaking");
    Il2CppMethodInitialized_07547db8 = '\x01';
  }
  (__this->fields).ShowTimeLeft = showTime;
  (__this->fields).Character = character;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Character);
  (__this->fields).Offset.fields.x = offset.fields.x;
  (__this->fields).Offset.fields.y = offset.fields.y;
  (__this->fields).Offset.fields.z = offset.fields.z;
  targetAddress = &(__this->fields)._texture0;
  (__this->fields)._texture0 = (UnityEngine_Texture_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress);
  targetAddress_00 = &(__this->fields)._texture1;
  (__this->fields)._texture1 = (UnityEngine_Texture_o *)0x0;
  Il2CppCodeGenWriteBarrier(targetAddress_00);
  (__this->fields)._animated = false;
  bVar4 = System_String__op_Equality(text,"Speaking",(MethodInfo *)0x0);
  if (bVar4) {
    pSVar5 = "Icons/Game/Speaking";
  }
  else {
    if (text == (System_String_o *)0x0) goto label_05d1e2bb;
    bVar4 = System_String__StartsWith(text,"Emoji",(MethodInfo *)0x0);
    if (bVar4) {
      pSVar5 = System_String__Concat_52f0320("Icons/Emotes/",text,(MethodInfo *)0x0);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      __this_00 = (System_Collections_Generic_HashSet_object__o *)
                  TypeInfo_UI_UIManager->static_fields->AnimatedEmojis;
      if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_05d1e2bb;
      bVar4 = System_Collections_Generic_HashSet_object___Contains
                        (__this_00,(Il2CppObject *)text,
                         (MethodInfo_4FB3720 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
      if (bVar4) {
        if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
        }
        pSVar2 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
        name = System_String__Concat_52f0320(pSVar5,"_0",(MethodInfo *)0x0);
        if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
        }
        value = (UnityEngine_Texture_o *)
                ApplicationManagers_ResourceManager__LoadAsset(pSVar2,name,true,false,(MethodInfo *)0x0);
        pUVar3 = TypeInfo_UnityEngine_Texture2D;
        if (value == (UnityEngine_Texture_o *)0x0) {
          *targetAddress = (UnityEngine_Texture_o *)0x0;
        }
        else if ((value->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) ||
                (*targetAddress = value, value->klass != (UnityEngine_Texture_c *)pUVar3)) goto label_05d1e265;
        Il2CppCodeGenWriteBarrier(targetAddress);
        pSVar2 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
        pSVar5 = System_String__Concat_52f0320(pSVar5,"_1",(MethodInfo *)0x0);
        value = (UnityEngine_Texture_o *)
                ApplicationManagers_ResourceManager__LoadAsset(pSVar2,pSVar5,true,false,(MethodInfo *)0x0);
        pUVar3 = TypeInfo_UnityEngine_Texture2D;
        if (value == (UnityEngine_Texture_o *)0x0) {
          *targetAddress_00 = (UnityEngine_Texture_o *)0x0;
        }
        else if ((value->klass != (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) ||
                (*targetAddress_00 = value, value->klass != (UnityEngine_Texture_c *)pUVar3))
        goto label_05d1e265;
        Il2CppCodeGenWriteBarrier(targetAddress_00);
        pUVar1 = (__this->fields)._emojiImage;
        if (pUVar1 != (UnityEngine_UI_RawImage_o *)0x0) {
          UnityEngine_UI_RawImage__set_texture(pUVar1,(__this->fields)._texture0,(MethodInfo *)0x0);
          (__this->fields)._animated = true;
          (__this->fields)._isFirstFrame = true;
          (__this->fields)._animationTimeLeft = 0.5;
          return;
        }
        goto label_05d1e2bb;
      }
    }
    else {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar5 = UI_UIManager__GetProfileIcon(text,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat_52f0320("Icons/Profile/",pSVar5,(MethodInfo *)0x0);
    }
  }
  pUVar1 = (__this->fields)._emojiImage;
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar2 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  value = (UnityEngine_Texture_o *)
          ApplicationManagers_ResourceManager__LoadAsset(pSVar2,pSVar5,true,false,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_UI_RawImage_o *)0x0) {
    if ((value == (UnityEngine_Texture_o *)0x0) ||
       (value->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D)) {
      UnityEngine_UI_RawImage__set_texture(pUVar1,value,(MethodInfo *)0x0);
      return;
    }
label_05d1e265:
    il2cpp_codegen_raise_invalid_cast_exception(value);
  }
label_05d1e2bb:
  ThrowNullReferenceException();
}


// UI.EmoteEmojiPopup$$Update
// il2cpp: void UI_EmoteEmojiPopup__Update (UI_EmoteEmojiPopup_o* __this, const MethodInfo* method);
// 0x5d1e2c0

void UI_EmoteEmojiPopup__Update(UI_EmoteEmojiPopup_o *__this,MethodInfo *method)

{
  bool *pbVar1;
  UnityEngine_UI_RawImage_o *__this_00;
  UnityEngine_Texture_o **ppUVar2;
  float fVar3;
  float fVar4;
  
  if (((__this->fields).IsActive != false) && ((__this->fields)._animated != false)) {
    fVar4 = (__this->fields)._animationTimeLeft;
    fVar3 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar4 = fVar4 - fVar3;
    (__this->fields)._animationTimeLeft = fVar4;
    if (fVar4 <= 0.0) {
      (__this->fields)._animationTimeLeft = 0.5;
      __this_00 = (__this->fields)._emojiImage;
      if ((__this->fields)._isFirstFrame == false) {
        if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) goto label_05d1e358;
        ppUVar2 = &(__this->fields)._texture0;
      }
      else {
        if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) {
label_05d1e358:
          ThrowNullReferenceException();
        }
        ppUVar2 = &(__this->fields)._texture1;
      }
      UnityEngine_UI_RawImage__set_texture(__this_00,*ppUVar2,(MethodInfo *)0x0);
      pbVar1 = &(__this->fields)._isFirstFrame;
      *pbVar1 = (bool)(*pbVar1 ^ 1);
    }
  }
  return;
}


// UI.EmoteEmojiPopup$$.ctor
// il2cpp: void UI_EmoteEmojiPopup___ctor (UI_EmoteEmojiPopup_o* __this, const MethodInfo* method);
// 0x5d1e360

void UI_EmoteEmojiPopup___ctor(UI_EmoteEmojiPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


