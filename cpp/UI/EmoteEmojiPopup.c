// Type: UI.EmoteEmojiPopup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/UI/EmoteEmojiPopup.cs
// Prior real C# source (older reference): Assets/Scripts/UI/InGameMenu/EmoteEmojiPopup.cs
// --------------------------------

// UI.EmoteEmojiPopup$$Setup
// il2cpp: void UI_EmoteEmojiPopup__Setup (UI_EmoteEmojiPopup_o* __this, UI_BasePanel_o* parent, const MethodInfo* method);
// 0x43bc220

void UI_EmoteEmojiPopup__Setup(UI_EmoteEmojiPopup_o *__this,UI_BasePanel_o *parent,MethodInfo *method)

{
  UnityEngine_Rect_o *pUVar1;
  UnityEngine_Texture_o **ppUVar2;
  byte *pbVar3;
  System_Collections_Generic_HashSet_object__o *__this_00;
  UnityEngine_Vector3_array *__this_01;
  UnityEngine_Texture_c *pUVar4;
  bool_conflict bVar5;
  UI_EmoteEmojiPopup_o *__this_02;
  UnityEngine_Transform_o *pUVar6;
  UnityEngine_UI_RawImage_o *pUVar7;
  System_String_o *str0;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  UnityEngine_Texture_o *value;
  UnityEngine_Texture_o *pUVar10;
  Characters_BaseCharacter_o *extraout_RDX;
  UnityEngine_Vector3_array *__this_03;
  float fVar11;
  float fVar12;
  undefined4 in_XMM1_Da;
  undefined4 in_XMM1_Db;
  float in_XMM2_Da;
  
  if (g_data_057ae3b6 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RawImage_GetComponent_RawImage);
    il2cpp_runtime_helper_023445d0(&"Panel/Emoji");
    g_data_057ae3b6 = '\x01';
  }
  pSVar9 = (System_String_o *)0x0;
  __this_03 = (UnityEngine_Vector3_array *)__this;
  __this_02 = (UI_EmoteEmojiPopup_o *)
              UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((__this_02 != (UI_EmoteEmojiPopup_o *)0x0) &&
     (pSVar9 = "Panel/Emoji",
     pUVar6 = UnityEngine_Transform__Find((UnityEngine_Transform_o *)__this_02,"Panel/Emoji",(MethodInfo *)0x0)
     , __this_03 = (UnityEngine_Vector3_array *)__this_02, pUVar6 != (UnityEngine_Transform_o *)0x0)) {
    pUVar7 = (UnityEngine_UI_RawImage_o *)
             UnityEngine_Component__GetComponent_object_((UnityEngine_Component_o *)pUVar6,MethodInfo_RawImage_GetComponent_RawImage);
    (__this->fields)._emojiImage = pUVar7;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._emojiImage);
    pUVar6 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    (__this->fields)._transform = pUVar6;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._transform,pUVar6);
    return;
  }
  fVar11 = (float)il2cpp_runtime_helper_022b2c90();
  if (g_data_057ae3b7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Icons/Game/Speaking");
    il2cpp_runtime_helper_023445d0(&"Emoji");
    il2cpp_runtime_helper_023445d0(&"_0");
    il2cpp_runtime_helper_023445d0(&"Icons/Profile/");
    il2cpp_runtime_helper_023445d0(&"Icons/Emotes/");
    il2cpp_runtime_helper_023445d0(&"_1");
    il2cpp_runtime_helper_023445d0(&"Speaking");
    g_data_057ae3b7 = '\x01';
  }
  (((UI_EmoteEmojiPopup_o *)__this_03)->fields).ShowTimeLeft = fVar11;
  (((UI_EmoteEmojiPopup_o *)__this_03)->fields).Character = extraout_RDX;
  il2cpp_runtime_helper_022b4080(&(((UI_EmoteEmojiPopup_o *)__this_03)->fields).Character,extraout_RDX);
  *(UnityEngine_UI_MaskableGraphic_CullStateChangedEvent_o **)
   &(((UI_EmoteEmojiPopup_o *)__this_03)->fields).Offset.fields =
       (UnityEngine_UI_MaskableGraphic_CullStateChangedEvent_o *)CONCAT44(in_XMM1_Db,in_XMM1_Da);
  (((UI_EmoteEmojiPopup_o *)__this_03)->fields).Offset.fields.z = in_XMM2_Da;
  pUVar1 = (UnityEngine_Rect_o *)&(((UI_EmoteEmojiPopup_o *)__this_03)->fields)._texture0;
  *(float *)&(((UI_EmoteEmojiPopup_o *)__this_03)->fields)._texture0 = 0.0;
  *(float *)((long)&(((UI_EmoteEmojiPopup_o *)__this_03)->fields)._texture0 + 4) = 0.0;
  il2cpp_runtime_helper_022b4080(pUVar1,0);
  ppUVar2 = &(((UI_EmoteEmojiPopup_o *)__this_03)->fields)._texture1;
  (((UI_EmoteEmojiPopup_o *)__this_03)->fields)._texture1 = (UnityEngine_Texture_o *)0x0;
  il2cpp_runtime_helper_022b4080(ppUVar2,0);
  *(undefined1 *)&(((UI_EmoteEmojiPopup_o *)__this_03)->fields)._animated = 0;
  pSVar8 = pSVar9;
  bVar5 = System_String__op_Equality(pSVar9,"Speaking",(MethodInfo *)0x0);
  str0 = "Icons/Game/Speaking";
  if ((char)bVar5 == '\0') {
    if (pSVar9 != (System_String_o *)0x0) {
      bVar5 = System_String__StartsWith(pSVar9,"Emoji",(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar9 = UI_UIManager__GetProfileIcon(pSVar9,(MethodInfo *)0x0);
        str0 = System_String__Concat_3ae5ba0("Icons/Profile/",pSVar9,(MethodInfo *)0x0);
        goto label_043bc596;
      }
      str0 = System_String__Concat_3ae5ba0("Icons/Emotes/",pSVar9,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_00 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x50);
      pSVar8 = (System_String_o *)0x0;
      if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_043bc6d6;
      bVar5 = System_Collections_Generic_HashSet_object___Contains
                        (__this_00,(Il2CppObject *)pSVar9,MethodInfo_Boolean_Contains);
      if ((char)bVar5 == '\0') goto label_043bc596;
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar9 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
      pSVar8 = System_String__Concat_3ae5ba0(str0,"_0",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      value = (UnityEngine_Texture_o *)
              ApplicationManagers_ResourceManager__LoadAsset(pSVar9,pSVar8,1,(MethodInfo *)0x0);
      pUVar4 = TypeInfo_Texture2D;
      if (value == (UnityEngine_Texture_o *)0x0) {
        (pUVar1->fields).m_XMin = 0.0;
        (pUVar1->fields).m_YMin = 0.0;
      }
      else if ((value->klass != TypeInfo_Texture2D) ||
              (*(UnityEngine_Texture_o **)&pUVar1->fields = value, value->klass != pUVar4)) goto label_043bc684;
      il2cpp_runtime_helper_022b4080(pUVar1,value);
      pSVar9 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
      pSVar8 = System_String__Concat_3ae5ba0(str0,"_1",(MethodInfo *)0x0);
      value = (UnityEngine_Texture_o *)
              ApplicationManagers_ResourceManager__LoadAsset(pSVar9,pSVar8,1,(MethodInfo *)0x0);
      pUVar4 = TypeInfo_Texture2D;
      pUVar10 = (UnityEngine_Texture_o *)0x0;
      if (value == (UnityEngine_Texture_o *)0x0) goto label_043bc68c;
      if ((value->klass != TypeInfo_Texture2D) || (*ppUVar2 = value, value->klass != pUVar4)) goto label_043bc684;
      goto label_043bc68f;
    }
  }
  else {
label_043bc596:
    __this_03 = (UnityEngine_Vector3_array *)(((UI_EmoteEmojiPopup_o *)__this_03)->fields)._emojiImage;
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar8 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    value = (UnityEngine_Texture_o *)
            ApplicationManagers_ResourceManager__LoadAsset(pSVar8,str0,1,(MethodInfo *)0x0);
    if (__this_03 != (UnityEngine_Vector3_array *)0x0) {
      if ((value == (UnityEngine_Texture_o *)0x0) || (value->klass == TypeInfo_Texture2D)) {
        UnityEngine_UI_RawImage__set_texture((UnityEngine_UI_RawImage_o *)__this_03,value,(MethodInfo *)0x0);
        return;
      }
label_043bc684:
      pUVar10 = (UnityEngine_Texture_o *)il2cpp_runtime_helper_022b2fd0(value);
label_043bc68c:
      *ppUVar2 = pUVar10;
label_043bc68f:
      il2cpp_runtime_helper_022b4080(ppUVar2);
      __this_01 = (UnityEngine_Vector3_array *)(((UI_EmoteEmojiPopup_o *)__this_03)->fields)._emojiImage;
      pSVar8 = (System_String_o *)0x0;
      if (__this_01 != (UnityEngine_Vector3_array *)0x0) {
        UnityEngine_UI_RawImage__set_texture
                  ((UnityEngine_UI_RawImage_o *)__this_01,
                   *(UnityEngine_Texture_o **)
                    &((UnityEngine_Rect_o *)&(((UI_EmoteEmojiPopup_o *)__this_03)->fields)._texture0)->fields,
                   (MethodInfo *)0x0);
        *(undefined2 *)&(((UI_EmoteEmojiPopup_o *)__this_03)->fields)._animated = 0x101;
        (((UI_EmoteEmojiPopup_o *)__this_03)->fields)._animationTimeLeft = 0.5;
        return;
      }
    }
  }
label_043bc6d6:
  il2cpp_runtime_helper_022b2c90();
  if ((*(char *)&pSVar8[6].klass != '\0') && ((char)pSVar8[9].fields._stringLength != '\0')) {
    fVar11 = (float)pSVar8[10].fields._stringLength;
    fVar12 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar11 = fVar11 - fVar12;
    pSVar8[10].fields._stringLength = (int32_t)fVar11;
    if (fVar11 <= 0.0) {
      pSVar8[10].fields._stringLength = 0x3f000000;
      pUVar7 = pSVar8[9].monitor;
      if (*(char *)((long)&pSVar8[9].fields._stringLength + 1) == '\0') {
        if (pUVar7 == (UnityEngine_UI_RawImage_o *)0x0) goto label_043bc778;
        pSVar9 = pSVar8 + 10;
      }
      else {
        if (pUVar7 == (UnityEngine_UI_RawImage_o *)0x0) {
label_043bc778:
          il2cpp_runtime_helper_022b2c90();
          UI_BasePopup___ctor((UI_TooltipPopup_o *)pUVar7,(MethodInfo *)0x0);
          return;
        }
        pSVar9 = (System_String_o *)&pSVar8[10].monitor;
      }
      UnityEngine_UI_RawImage__set_texture(pUVar7,(UnityEngine_Texture_o *)pSVar9->klass,(MethodInfo *)0x0);
      pbVar3 = (byte *)((long)&pSVar8[9].fields._stringLength + 1);
      *pbVar3 = *pbVar3 ^ 1;
    }
  }
  return;
}


// UI.EmoteEmojiPopup$$Load
// il2cpp: void UI_EmoteEmojiPopup__Load (UI_EmoteEmojiPopup_o* __this, System_String_o* text, float showTime, Characters_BaseCharacter_o* character, UnityEngine_Vector3_o offset, const MethodInfo* method);
// 0x43bc2d0

void UI_EmoteEmojiPopup__Load
               (UI_EmoteEmojiPopup_o *__this,System_String_o *text,float showTime,
               Characters_BaseCharacter_o *character,UnityEngine_Vector3_o offset,MethodInfo *method)

{
  UnityEngine_Texture_o **ppUVar1;
  UnityEngine_Texture_o **ppUVar2;
  byte *pbVar3;
  System_Collections_Generic_HashSet_object__o *__this_00;
  UnityEngine_Vector3_array *__this_01;
  UnityEngine_Texture_c *pUVar4;
  bool_conflict bVar5;
  System_String_o *pSVar6;
  System_String_o *name;
  System_String_o *pSVar7;
  UnityEngine_Texture_o *value;
  UnityEngine_Texture_o *pUVar8;
  UnityEngine_UI_RawImage_o *__this_02;
  float fVar9;
  float fVar10;
  
  if (g_data_057ae3b7 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Boolean_Contains);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourceManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ResourcePaths);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Texture2D);
    il2cpp_runtime_helper_023445d0(&TypeInfo_UIManager);
    il2cpp_runtime_helper_023445d0(&"Icons/Game/Speaking");
    il2cpp_runtime_helper_023445d0(&"Emoji");
    il2cpp_runtime_helper_023445d0(&"_0");
    il2cpp_runtime_helper_023445d0(&"Icons/Profile/");
    il2cpp_runtime_helper_023445d0(&"Icons/Emotes/");
    il2cpp_runtime_helper_023445d0(&"_1");
    il2cpp_runtime_helper_023445d0(&"Speaking");
    g_data_057ae3b7 = '\x01';
  }
  (__this->fields).ShowTimeLeft = showTime;
  (__this->fields).Character = character;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Character,character);
  (__this->fields).Offset.fields.x = (float)(int)offset.fields._0_8_;
  (__this->fields).Offset.fields.y = (float)(int)((ulong)offset.fields._0_8_ >> 0x20);
  (__this->fields).Offset.fields.z = offset.fields.z;
  ppUVar1 = &(__this->fields)._texture0;
  (__this->fields)._texture0 = (UnityEngine_Texture_o *)0x0;
  il2cpp_runtime_helper_022b4080(ppUVar1,0);
  ppUVar2 = &(__this->fields)._texture1;
  (__this->fields)._texture1 = (UnityEngine_Texture_o *)0x0;
  il2cpp_runtime_helper_022b4080(ppUVar2,0);
  *(undefined1 *)&(__this->fields)._animated = 0;
  pSVar7 = text;
  bVar5 = System_String__op_Equality(text,"Speaking",(MethodInfo *)0x0);
  pSVar6 = "Icons/Game/Speaking";
  if ((char)bVar5 == '\0') {
    if (text != (System_String_o *)0x0) {
      bVar5 = System_String__StartsWith(text,"Emoji",(MethodInfo *)0x0);
      if ((char)bVar5 == '\0') {
        if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        pSVar7 = UI_UIManager__GetProfileIcon(text,(MethodInfo *)0x0);
        pSVar6 = System_String__Concat_3ae5ba0("Icons/Profile/",pSVar7,(MethodInfo *)0x0);
        goto label_043bc596;
      }
      pSVar6 = System_String__Concat_3ae5ba0("Icons/Emotes/",text,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_UIManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      __this_00 = *(System_Collections_Generic_HashSet_object__o **)(*(long *)(TypeInfo_UIManager + 0xb8) + 0x50);
      pSVar7 = (System_String_o *)0x0;
      if (__this_00 == (System_Collections_Generic_HashSet_object__o *)0x0) goto label_043bc6d6;
      bVar5 = System_Collections_Generic_HashSet_object___Contains
                        (__this_00,(Il2CppObject *)text,MethodInfo_Boolean_Contains);
      if ((char)bVar5 == '\0') goto label_043bc596;
      if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      pSVar7 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
      name = System_String__Concat_3ae5ba0(pSVar6,"_0",(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      value = (UnityEngine_Texture_o *)
              ApplicationManagers_ResourceManager__LoadAsset(pSVar7,name,1,(MethodInfo *)0x0);
      pUVar4 = TypeInfo_Texture2D;
      if (value == (UnityEngine_Texture_o *)0x0) {
        *ppUVar1 = (UnityEngine_Texture_o *)0x0;
      }
      else if ((value->klass != TypeInfo_Texture2D) || (*ppUVar1 = value, value->klass != pUVar4))
      goto label_043bc684;
      il2cpp_runtime_helper_022b4080(ppUVar1,value);
      pSVar7 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
      pSVar6 = System_String__Concat_3ae5ba0(pSVar6,"_1",(MethodInfo *)0x0);
      value = (UnityEngine_Texture_o *)
              ApplicationManagers_ResourceManager__LoadAsset(pSVar7,pSVar6,1,(MethodInfo *)0x0);
      pUVar4 = TypeInfo_Texture2D;
      pUVar8 = (UnityEngine_Texture_o *)0x0;
      if (value == (UnityEngine_Texture_o *)0x0) goto label_043bc68c;
      if ((value->klass != TypeInfo_Texture2D) || (*ppUVar2 = value, value->klass != pUVar4)) goto label_043bc684;
      goto label_043bc68f;
    }
  }
  else {
label_043bc596:
    __this = (UI_EmoteEmojiPopup_o *)(__this->fields)._emojiImage;
    if (*(int *)(TypeInfo_ResourcePaths + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    pSVar7 = (System_String_o *)**(undefined8 **)(TypeInfo_ResourcePaths + 0xb8);
    if (*(int *)(TypeInfo_ResourceManager + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    value = (UnityEngine_Texture_o *)
            ApplicationManagers_ResourceManager__LoadAsset(pSVar7,pSVar6,1,(MethodInfo *)0x0);
    if (__this != (UI_EmoteEmojiPopup_o *)0x0) {
      if ((value == (UnityEngine_Texture_o *)0x0) || (value->klass == TypeInfo_Texture2D)) {
        UnityEngine_UI_RawImage__set_texture((UnityEngine_UI_RawImage_o *)__this,value,(MethodInfo *)0x0);
        return;
      }
label_043bc684:
      pUVar8 = (UnityEngine_Texture_o *)il2cpp_runtime_helper_022b2fd0(value);
label_043bc68c:
      *ppUVar2 = pUVar8;
label_043bc68f:
      il2cpp_runtime_helper_022b4080(ppUVar2);
      __this_01 = (UnityEngine_Vector3_array *)(__this->fields)._emojiImage;
      pSVar7 = (System_String_o *)0x0;
      if (__this_01 != (UnityEngine_Vector3_array *)0x0) {
        UnityEngine_UI_RawImage__set_texture
                  ((UnityEngine_UI_RawImage_o *)__this_01,
                   *(UnityEngine_Texture_o **)&((UnityEngine_Rect_o *)&(__this->fields)._texture0)->fields,
                   (MethodInfo *)0x0);
        *(undefined2 *)&(__this->fields)._animated = 0x101;
        (__this->fields)._animationTimeLeft = 0.5;
        return;
      }
    }
  }
label_043bc6d6:
  il2cpp_runtime_helper_022b2c90();
  if ((*(char *)&pSVar7[6].klass != '\0') && ((char)pSVar7[9].fields._stringLength != '\0')) {
    fVar10 = (float)pSVar7[10].fields._stringLength;
    fVar9 = UnityEngine_Time__get_deltaTime((MethodInfo *)0x0);
    fVar10 = fVar10 - fVar9;
    pSVar7[10].fields._stringLength = (int32_t)fVar10;
    if (fVar10 <= 0.0) {
      pSVar7[10].fields._stringLength = 0x3f000000;
      __this_02 = pSVar7[9].monitor;
      if (*(char *)((long)&pSVar7[9].fields._stringLength + 1) == '\0') {
        if (__this_02 == (UnityEngine_UI_RawImage_o *)0x0) goto label_043bc778;
        pSVar6 = pSVar7 + 10;
      }
      else {
        if (__this_02 == (UnityEngine_UI_RawImage_o *)0x0) {
label_043bc778:
          il2cpp_runtime_helper_022b2c90();
          UI_BasePopup___ctor((UI_TooltipPopup_o *)__this_02,(MethodInfo *)0x0);
          return;
        }
        pSVar6 = (System_String_o *)&pSVar7[10].monitor;
      }
      UnityEngine_UI_RawImage__set_texture(__this_02,(UnityEngine_Texture_o *)pSVar6->klass,(MethodInfo *)0x0)
      ;
      pbVar3 = (byte *)((long)&pSVar7[9].fields._stringLength + 1);
      *pbVar3 = *pbVar3 ^ 1;
    }
  }
  return;
}


// UI.EmoteEmojiPopup$$Update
// il2cpp: void UI_EmoteEmojiPopup__Update (UI_EmoteEmojiPopup_o* __this, const MethodInfo* method);
// 0x43bc6e0

void UI_EmoteEmojiPopup__Update(UI_EmoteEmojiPopup_o *__this,MethodInfo *method)

{
  byte *pbVar1;
  UnityEngine_Texture_o **ppUVar2;
  UnityEngine_UI_RawImage_o *__this_00;
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
        if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) goto label_043bc778;
        ppUVar2 = &(__this->fields)._texture0;
      }
      else {
        if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) {
label_043bc778:
          il2cpp_runtime_helper_022b2c90();
          UI_BasePopup___ctor((UI_TooltipPopup_o *)__this_00,(MethodInfo *)0x0);
          return;
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
// 0x43bc780

void UI_EmoteEmojiPopup___ctor(UI_EmoteEmojiPopup_o *__this,MethodInfo *method)

{
  UI_BasePopup___ctor((UI_TooltipPopup_o *)__this,(MethodInfo *)0x0);
  return;
}


