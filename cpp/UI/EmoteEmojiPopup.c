// Type: UI.EmoteEmojiPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/UI/EmoteEmojiPopup.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/UI/InGameMenu/EmoteEmojiPopup.cs  [CHANGED since prior version]
// --------------------------------

// UI.EmoteEmojiPopup$$Setup
// il2cpp: void UI_EmoteEmojiPopup__Setup (UI_EmoteEmojiPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x40aa130

void UI_EmoteEmojiPopup__Setup
               (UI_EmoteEmojiPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Transform_o *pUVar1;
  UnityEngine_UI_RawImage_o *pUVar2;
  
  if (DAT_05704625 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_init_method_metadata(&"Panel/Emoji");
    DAT_05704625 = '\x01';
  }
  pUVar1 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0)
  ;
  if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Transform__Find(pUVar1,"Panel/Emoji",(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_Transform_o *)0x0) {
      pUVar2 = (UnityEngine_UI_RawImage_o *)
               UnityEngine_Component__GetComponent<object>
                         ((UnityEngine_Component_o *)pUVar1,MethodInfo_RawImage_GetComponent_RawImage);
      (__this->fields)._emojiImage = pUVar2;
      il2cpp_runtime_glue(&(__this->fields)._emojiImage);
      pUVar1 = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      (__this->fields)._transform = pUVar1;
      il2cpp_runtime_glue(&(__this->fields)._transform,pUVar1);
      return;
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EmoteEmojiPopup$$Load
// il2cpp: void UI_EmoteEmojiPopup__Load (UI_EmoteEmojiPopup_o* __this, System_String_o* text, float showTime, Characters_BaseCharacter_o* character, UnityEngine_Vector3_o offset, const MethodInfo* method);
// 0x40aa1e0

void UI_EmoteEmojiPopup__Load
               (UI_EmoteEmojiPopup_o *__this,System_String_o *text,float showTime,
               Characters_BaseCharacter_o *character,UnityEngine_Vector3_o offset,MethodInfo *method
               )

{
  UnityEngine_Texture_o **ppUVar1;
  UnityEngine_Texture_o **ppUVar2;
  System_Collections_Generic_HashSet_object__o *__this_00;
  UnityEngine_UI_RawImage_o *pUVar3;
  System_String_o *pSVar4;
  UnityEngine_Texture_c *pUVar5;
  bool_conflict bVar6;
  System_String_o *pSVar7;
  System_String_o *name;
  UnityEngine_Texture_o *value;
  
  if (DAT_05704626 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_Contains);
    il2cpp_init_method_metadata(&TypeInfo_ResourceManager);
    il2cpp_init_method_metadata(&TypeInfo_ResourcePaths);
    il2cpp_init_method_metadata(&TypeInfo_Texture2D);
    il2cpp_init_method_metadata(&TypeInfo_UIManager);
    il2cpp_init_method_metadata(&"Icons/Game/Speaking");
    il2cpp_init_method_metadata(&"Emoji");
    il2cpp_init_method_metadata(&"_0");
    il2cpp_init_method_metadata(&"Icons/Profile/");
    il2cpp_init_method_metadata(&"Icons/Emotes/");
    il2cpp_init_method_metadata(&"_1");
    il2cpp_init_method_metadata(&"Speaking");
    DAT_05704626 = '\x01';
  }
  (__this->fields).ShowTimeLeft = showTime;
  (__this->fields).Character = character;
  il2cpp_runtime_glue(&(__this->fields).Character,character);
  (__this->fields).Offset.fields.x = (float)(int)offset.fields._0_8_;
  (__this->fields).Offset.fields.y = (float)(int)((ulong)offset.fields._0_8_ >> 0x20);
  (__this->fields).Offset.fields.z = offset.fields.z;
  ppUVar1 = &(__this->fields)._texture0;
  (__this->fields)._texture0 = (UnityEngine_Texture_o *)0x0;
  il2cpp_runtime_glue(ppUVar1,0);
  ppUVar2 = &(__this->fields)._texture1;
  (__this->fields)._texture1 = (UnityEngine_Texture_o *)0x0;
  il2cpp_runtime_glue(ppUVar2,0);
  *(undefined1 *)&(__this->fields)._animated = 0;
  bVar6 = System_String__op_Equality(text,"Speaking",(MethodInfo *)0x0);
  pSVar7 = "Icons/Game/Speaking";
  if ((char)bVar6 == '\0') {
    if (text == (System_String_o *)0x0) goto LAB_040aa5e6;
    bVar6 = System_String__StartsWith(text,"Emoji",(MethodInfo *)0x0);
    if ((char)bVar6 == '\0') {
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      pSVar7 = UI_UIManager__GetProfileIcon(text,(MethodInfo *)0x0);
      pSVar7 = System_String__Concat("Icons/Profile/",pSVar7,(MethodInfo *)0x0);
    }
    else {
      pSVar7 = System_String__Concat("Icons/Emotes/",text,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_init_class();
      }
      __this_00 = *(System_Collections_Generic_HashSet_object__o **)
                   (*(long *)(TypeInfo_UIManager + 0xb8) + 0x50);
      if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto LAB_040aa5e6;
      bVar6 = System_Collections_Generic_HashSet<object>__Contains
                        (__this_00,(Il2CppObject *)text,MethodInfo_Boolean_Contains);
      if ((char)bVar6 != '\0') {
        if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
          il2cpp_init_class();
        }
        pSVar4 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
        name = System_String__Concat(pSVar7,"_0",(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
          il2cpp_init_class();
        }
        value = (UnityEngine_Texture_o *)
                ApplicationManagers_ResourceManager__LoadAsset(pSVar4,name,1,(MethodInfo *)0x0);
        pUVar5 = TypeInfo_Texture2D;
        if (value == (UnityEngine_Texture_o *)0x0) {
          *ppUVar1 = (UnityEngine_Texture_o *)0x0;
        }
        else if ((value->klass != TypeInfo_Texture2D) || (*ppUVar1 = value, value->klass != pUVar5))
        goto LAB_040aa594;
        il2cpp_runtime_glue(ppUVar1,value);
        pSVar4 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
        pSVar7 = System_String__Concat(pSVar7,"_1",(MethodInfo *)0x0);
        value = (UnityEngine_Texture_o *)
                ApplicationManagers_ResourceManager__LoadAsset(pSVar4,pSVar7,1,(MethodInfo *)0x0);
        pUVar5 = TypeInfo_Texture2D;
        if (value == (UnityEngine_Texture_o *)0x0) {
          *ppUVar2 = (UnityEngine_Texture_o *)0x0;
        }
        else if ((value->klass != TypeInfo_Texture2D) || (*ppUVar2 = value, value->klass != pUVar5))
        goto LAB_040aa594;
        il2cpp_runtime_glue(ppUVar2,value);
        pUVar3 = (__this->fields)._emojiImage;
        if (pUVar3 != (UnityEngine_UI_RawImage_o *)0x0) {
          UnityEngine_UI_RawImage__set_texture(pUVar3,(__this->fields)._texture0,(MethodInfo *)0x0);
          *(undefined2 *)&(__this->fields)._animated = 0x101;
          (__this->fields)._animationTimeLeft = 0.5;
          return;
        }
        goto LAB_040aa5e6;
      }
    }
  }
  pUVar3 = (__this->fields)._emojiImage;
  if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
  if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  value = (UnityEngine_Texture_o *)
          ApplicationManagers_ResourceManager__LoadAsset(pSVar4,pSVar7,1,(MethodInfo *)0x0);
  if (pUVar3 != (UnityEngine_UI_RawImage_o *)0x0) {
    if ((value == (UnityEngine_Texture_o *)0x0) || (value->klass == TypeInfo_Texture2D)) {
      UnityEngine_UI_RawImage__set_texture(pUVar3,value,(MethodInfo *)0x0);
      return;
    }
LAB_040aa594:
                    /* WARNING: Subroutine does not return */
    il2cpp_unwind_resume(value);
  }
LAB_040aa5e6:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// UI.EmoteEmojiPopup$$Update
// il2cpp: void UI_EmoteEmojiPopup__Update (UI_EmoteEmojiPopup_o* __this, const MethodInfo* method);
// 0x40aa5f0

void UI_EmoteEmojiPopup__Update(UI_EmoteEmojiPopup_o *__this,MethodInfo *method)

{
  byte *pbVar1;
  UnityEngine_UI_RawImage_o *__this_00;
  UnityEngine_Texture_o **ppUVar2;
  float fVar3;
  float fVar4;
  
  if (((char)(__this->fields).IsActive != '\0') && ((char)(__this->fields)._animated != '\0')) {
    fVar4 = (__this->fields)._animationTimeLeft;
    fVar3 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar4 = fVar4 - fVar3;
    (__this->fields)._animationTimeLeft = fVar4;
    if (fVar4 <= 0.0) {
      (__this->fields)._animationTimeLeft = 0.5;
      __this_00 = (__this->fields)._emojiImage;
      if (*(char *)((long)&(__this->fields)._animated + 1) == '\0') {
        if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) goto LAB_040aa688;
        ppUVar2 = &(__this->fields)._texture0;
      }
      else {
        if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) {
LAB_040aa688:
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        ppUVar2 = &(__this->fields)._texture1;
      }
      UnityEngine_UI_RawImage__set_texture(__this_00,*ppUVar2,(MethodInfo *)0x0);
      pbVar1 = (byte *)((long)&(__this->fields)._animated + 1);
      *pbVar1 = *pbVar1 ^ 1;
    }
  }
  return;
}


// UI.EmoteEmojiPopup$$.ctor
// il2cpp: void UI_EmoteEmojiPopup___ctor (UI_EmoteEmojiPopup_o* __this, const MethodInfo* method);
// 0x40aa690

void UI_EmoteEmojiPopup___ctor(UI_EmoteEmojiPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


