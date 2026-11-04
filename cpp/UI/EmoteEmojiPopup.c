// Type: UI.EmoteEmojiPopup
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/EmoteEmojiPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/EmoteEmojiPopup.cs
// --------------------------------

// UI.EmoteEmojiPopup$$Setup
// il2cpp: void UI_EmoteEmojiPopup__Setup (UI_EmoteEmojiPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x182241d20

void UI_EmoteEmojiPopup__Setup(UI_EmoteEmojiPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_RawImage_o *value;
  
  if (Il2CppMethodInitialized_184347244 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Component_GetComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&"Panel/Emoji");
    Il2CppMethodInitialized_184347244 = '\x01';
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"Panel/Emoji",(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      value = UnityEngine_Component__GetComponent_object_
                        ((UnityEngine_Component_o *)pUVar1,
                         (MethodInfo_6651A0 *)MethodInfo_UnityEngine_Component_GetComponent_RawImage);
      (__this->fields)._emojiImage = value;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._emojiImage,value);
      pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      (__this->fields)._transform = pUVar1;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._transform,pUVar1);
      return;
    }
  }
  ThrowNullReferenceException();
}


// UI.EmoteEmojiPopup$$Load
// il2cpp: void UI_EmoteEmojiPopup__Load (UI_EmoteEmojiPopup_o* __this, System_String_o* text, float showTime, Characters_BaseCharacter_o* character, UnityEngine_Vector3_o offset, const MethodInfo* method);
// 0x1822418c0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x182241c52: mov rsi, qword ptr [rip + 0x1e5d837]  ; "Icons/Game/Speaking"

void UI_EmoteEmojiPopup__Load
               (UI_EmoteEmojiPopup_o *__this,System_String_o *text,float showTime,
               Characters_BaseCharacter_o *character,UnityEngine_Vector3_o *offset,MethodInfo *method)

{
  float fVar1;
  System_Collections_Generic_HashSet_object__o *__this_00;
  UnityEngine_UI_RawImage_o *pUVar2;
  System_String_o *pSVar3;
  float fVar4;
  bool bVar5;
  System_String_o *pSVar6;
  System_String_o *name;
  UnityEngine_Texture_o *pUVar7;
  UnityEngine_Texture_o *pUVar8;
  UnityEngine_Texture_o *pUVar9;
  UnityEngine_Texture_o *value;
  
  if (Il2CppMethodInitialized_184347245 == '\0') {
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
    Il2CppMethodInitialized_184347245 = '\x01';
  }
  (__this->fields).ShowTimeLeft = showTime;
  (__this->fields).Character = character;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Character,character);
  value = (UnityEngine_Texture_o *)0x0;
  (__this->fields)._texture0 = (UnityEngine_Texture_o *)0x0;
  fVar4 = (offset->fields).y;
  fVar1 = (offset->fields).z;
  (__this->fields).Offset.fields.x = (offset->fields).x;
  (__this->fields).Offset.fields.y = fVar4;
  (__this->fields).Offset.fields.z = fVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._texture0,(void *)0x0);
  (__this->fields)._texture1 = (UnityEngine_Texture_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._texture1,(void *)0x0);
  (__this->fields)._animated = false;
  bVar5 = System_String__op_Equality(text,"Speaking",(MethodInfo *)0x0);
  pSVar6 = "Icons/Game/Speaking";
  if (!bVar5) {
    if (text == (System_String_o *)0x0) goto label_182241ce3;
    bVar5 = System_String__StartsWith(text,"Emoji",(MethodInfo *)0x0);
    if (bVar5) {
      pSVar6 = System_String__Concat_1969e50("Icons/Emotes/",text,(MethodInfo *)0x0);
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      __this_00 = (System_Collections_Generic_HashSet_object__o *)
                  TypeInfo_UI_UIManager->static_fields->AnimatedEmojis;
      if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_182241ce3;
      bVar5 = System_Collections_Generic_HashSet_object___Contains
                        (__this_00,(Il2CppObject *)text,
                         (MethodInfo_1759E40 *)MethodInfo_System_Collections_Generic_HashSet_string_Contains);
      if (bVar5) {
        if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
        }
        pSVar3 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
        name = System_String__Concat_1969e50(pSVar6,"_0",(MethodInfo *)0x0);
        if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
        }
        pUVar7 = (UnityEngine_Texture_o *)
                 ApplicationManagers_ResourceManager__LoadAsset(pSVar3,name,true,(MethodInfo *)0x0);
        pUVar8 = value;
        if (pUVar7 == (UnityEngine_Texture_o *)0x0) {
          (__this->fields)._texture0 = (UnityEngine_Texture_o *)0x0;
        }
        else {
          pUVar9 = value;
          if (pUVar7->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
            pUVar9 = pUVar7;
          }
          if (pUVar9 == (UnityEngine_Texture_o *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception(pUVar7);
          }
          (__this->fields)._texture0 = pUVar9;
          if (pUVar7->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
            pUVar8 = pUVar7;
          }
          if (pUVar8 == (UnityEngine_Texture_o *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception(pUVar7,TypeInfo_UnityEngine_Texture2D);
          }
        }
        Il2CppCodeGenWriteBarrier(&(__this->fields)._texture0,pUVar8);
        pSVar3 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
        pSVar6 = System_String__Concat_1969e50(pSVar6,"_1",(MethodInfo *)0x0);
        pUVar8 = (UnityEngine_Texture_o *)
                 ApplicationManagers_ResourceManager__LoadAsset(pSVar3,pSVar6,true,(MethodInfo *)0x0);
        if (pUVar8 == (UnityEngine_Texture_o *)0x0) {
          (__this->fields)._texture1 = (UnityEngine_Texture_o *)0x0;
        }
        else {
          pUVar7 = value;
          if (pUVar8->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
            pUVar7 = pUVar8;
          }
          if (pUVar7 == (UnityEngine_Texture_o *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception(pUVar8);
          }
          (__this->fields)._texture1 = pUVar7;
          if (pUVar8->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
            value = pUVar8;
          }
          if (value == (UnityEngine_Texture_o *)0x0) {
            il2cpp_codegen_raise_invalid_cast_exception(pUVar8,TypeInfo_UnityEngine_Texture2D);
          }
        }
        Il2CppCodeGenWriteBarrier(&(__this->fields)._texture1,value);
        pUVar2 = (__this->fields)._emojiImage;
        if (pUVar2 != (UnityEngine_UI_RawImage_o *)0x0) {
          UnityEngine_UI_RawImage__set_texture(pUVar2,(__this->fields)._texture0,(MethodInfo *)0x0);
          (__this->fields)._animated = true;
          (__this->fields)._isFirstFrame = true;
          (__this->fields)._animationTimeLeft = 0.5;
          return;
        }
        goto label_182241ce3;
      }
    }
    else {
      if ((TypeInfo_UI_UIManager->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UI_UIManager);
      }
      pSVar6 = UI_UIManager__GetProfileIcon(text,(MethodInfo *)0x0);
      pSVar6 = System_String__Concat_1969e50("Icons/Profile/",pSVar6,(MethodInfo *)0x0);
    }
  }
  pUVar2 = (__this->fields)._emojiImage;
  if ((TypeInfo_Utility_ResourcePaths->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Utility_ResourcePaths);
  }
  pSVar3 = TypeInfo_Utility_ResourcePaths->static_fields->UI;
  if ((TypeInfo_ApplicationManagers_ResourceManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_ResourceManager);
  }
  pUVar8 = (UnityEngine_Texture_o *)
           ApplicationManagers_ResourceManager__LoadAsset(pSVar3,pSVar6,true,(MethodInfo *)0x0);
  if (pUVar2 != (UnityEngine_UI_RawImage_o *)0x0) {
    if (pUVar8 != (UnityEngine_Texture_o *)0x0) {
      if (pUVar8->klass == (UnityEngine_Texture_c *)TypeInfo_UnityEngine_Texture2D) {
        value = pUVar8;
      }
      if (value == (UnityEngine_Texture_o *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(pUVar8,TypeInfo_UnityEngine_Texture2D);
      }
    }
    UnityEngine_UI_RawImage__set_texture(pUVar2,value,(MethodInfo *)0x0);
    return;
  }
label_182241ce3:
  ThrowNullReferenceException();
}


// UI.EmoteEmojiPopup$$Update
// il2cpp: void UI_EmoteEmojiPopup__Update (UI_EmoteEmojiPopup_o* __this, const MethodInfo* method);
// 0x182241dd0

void UI_EmoteEmojiPopup__Update(UI_EmoteEmojiPopup_o *__this,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o *__this_00;
  UnityEngine_Texture_o *value;
  float fVar1;
  float fVar2;
  
  if (((__this->fields).IsActive != false) && ((__this->fields)._animated != false)) {
    fVar2 = (__this->fields)._animationTimeLeft;
    fVar1 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar2 = fVar2 - fVar1;
    (__this->fields)._animationTimeLeft = fVar2;
    if (fVar2 <= 0.0) {
      __this_00 = (__this->fields)._emojiImage;
      (__this->fields)._animationTimeLeft = 0.5;
      if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) {
        ThrowNullReferenceException();
      }
      if ((__this->fields)._isFirstFrame == false) {
        value = (__this->fields)._texture0;
      }
      else {
        value = (__this->fields)._texture1;
      }
      UnityEngine_UI_RawImage__set_texture(__this_00,value,(MethodInfo *)0x0);
      (__this->fields)._isFirstFrame = (__this->fields)._isFirstFrame == false;
    }
  }
  return;
}


// UI.EmoteEmojiPopup$$.ctor
// il2cpp: void UI_EmoteEmojiPopup___ctor (UI_EmoteEmojiPopup_o* __this, const MethodInfo* method);
// 0x1821c11a0

void
UI_EmoteEmojiPopup___ctor(UI_EmoteEmojiPopup_o* __this, MethodInfo* method)

{
  UI_BasePopup___ctor((UI_BasePopup_o *)__this,(MethodInfo *)0x0);
  return;
}


