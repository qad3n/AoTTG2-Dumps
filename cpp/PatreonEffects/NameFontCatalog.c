// Type: PatreonEffects.NameFontCatalog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/PatreonEffects/NameFontCatalog.cs
// Prior source: NEW in this update
// --------------------------------

// PatreonEffects.NameFontCatalog$$Label
// il2cpp: System_String_o* PatreonEffects_NameFontCatalog__Label (System_String_o* id, const MethodInfo* method);
// 0x4039d00

System_String_o * PatreonEffects_NameFontCatalog__Label(System_String_o *id,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *a;
  
  if (DAT_057043a0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_NameFontCatalog);
    il2cpp_init_method_metadata(&"Aottg2");
    il2cpp_init_method_metadata(&"Jacquard");
    il2cpp_init_method_metadata(&"8-Bit");
    il2cpp_init_method_metadata(&"Oxanium");
    il2cpp_init_method_metadata(&"Pixelify");
    il2cpp_init_method_metadata(&"EightBit");
    il2cpp_init_method_metadata(&"Old Pixel");
    il2cpp_init_method_metadata(&"AoTTG 2");
    il2cpp_init_method_metadata(&"Tech");
    il2cpp_init_method_metadata(&"LED");
    DAT_057043a0 = '\x01';
  }
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  a = PatreonEffects_NameFontCatalog__Normalize(id,method);
  bVar1 = System_String__op_Equality(a,"Aottg2",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "AoTTG 2";
  }
  bVar1 = System_String__op_Equality(a,"EightBit",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "LED";
  }
  bVar1 = System_String__op_Equality(a,"Jacquard",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "Old Pixel";
  }
  bVar1 = System_String__op_Equality(a,"Pixelify",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "8-Bit";
  }
  bVar1 = System_String__op_Equality(a,"Oxanium",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    a = "Tech";
  }
  return a;
}


// PatreonEffects.NameFontCatalog$$Normalize
// il2cpp: System_String_o* PatreonEffects_NameFontCatalog__Normalize (System_String_o* id, const MethodInfo* method);
// 0x4039e80

System_String_o * PatreonEffects_NameFontCatalog__Normalize(System_String_o *id,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_057043a1 == '\0') {
    il2cpp_init_method_metadata(&"Aottg2");
    il2cpp_init_method_metadata(&"Serif");
    il2cpp_init_method_metadata(&"Normal");
    il2cpp_init_method_metadata(&"Jacquard");
    il2cpp_init_method_metadata(&"Oxanium");
    il2cpp_init_method_metadata(&"Pixelify");
    il2cpp_init_method_metadata(&"Comics");
    il2cpp_init_method_metadata(&"EightBit");
    DAT_057043a1 = '\x01';
  }
  bVar1 = System_String__op_Equality(id,"Aottg2",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality(id,"Serif",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      bVar1 = System_String__op_Equality(id,"EightBit",(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        bVar1 = System_String__op_Equality(id,"Comics",(MethodInfo *)0x0);
        if ((char)bVar1 == '\0') {
          bVar1 = System_String__op_Equality(id,"Jacquard",(MethodInfo *)0x0);
          if ((char)bVar1 == '\0') {
            bVar1 = System_String__op_Equality(id,"Pixelify",(MethodInfo *)0x0);
            if ((char)bVar1 == '\0') {
              bVar1 = System_String__op_Equality(id,"Oxanium",(MethodInfo *)0x0);
              if ((char)bVar1 == '\0') {
                id = "Normal";
              }
            }
          }
        }
      }
    }
  }
  return id;
}


// PatreonEffects.NameFontCatalog$$Load
// il2cpp: TMPro_TMP_FontAsset_o* PatreonEffects_NameFontCatalog__Load (System_String_o* id, const MethodInfo* method);
// 0x4039fc0

TMPro_TMP_FontAsset_o * PatreonEffects_NameFontCatalog__Load(System_String_o *id,MethodInfo *method)

{
  System_Collections_Generic_Dictionary_object__object__o *__this;
  bool_conflict bVar1;
  MethodInfo *id_00;
  System_String_o *path;
  TMPro_TMP_FontAsset_o *x;
  MethodInfo *method_00;
  TMPro_TMP_FontAsset_o *local_30;
  
  if (DAT_057043a2 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&MethodInfo_Void_set_Item);
    il2cpp_init_method_metadata(&TypeInfo_NameFontCatalog);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
    il2cpp_init_method_metadata(&"Normal");
    il2cpp_init_method_metadata(&"UI/Fonts/Vegur-Regular-SDF");
    DAT_057043a2 = '\x01';
  }
  local_30 = (TMPro_TMP_FontAsset_o *)0x0;
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  id_00 = (MethodInfo *)PatreonEffects_NameFontCatalog__Normalize(id,method);
  if ((System_Collections_Generic_Dictionary_object__object__o *)
      **(undefined8 **)(TypeInfo_NameFontCatalog + 0xb8) ==
      (System_Collections_Generic_Dictionary_object__object__o *)0x0) goto LAB_0403a1b1;
  method_00 = id_00;
  bVar1 = System_Collections_Generic_Dictionary<object__object>__TryGetValue
                    ((System_Collections_Generic_Dictionary_object__object__o *)
                     **(undefined8 **)(TypeInfo_NameFontCatalog + 0xb8),(Il2CppObject *)id_00,
                     (Il2CppObject **)&local_30,MethodInfo_Boolean_TryGetValue);
  if ((char)bVar1 != '\0') {
    return local_30;
  }
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  path = PatreonEffects_NameFontCatalog__Path((System_String_o *)id_00,method_00);
  x = (TMPro_TMP_FontAsset_o *)UnityEngine_Resources__Load<object>(path,MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar1 != '\0') &&
     (bVar1 = System_String__op_Inequality((System_String_o *)id_00,"Normal",(MethodInfo *)0x0),
     (char)bVar1 != '\0')) {
    x = (TMPro_TMP_FontAsset_o *)UnityEngine_Resources__Load<object>("UI/Fonts/Vegur-Regular-SDF",MethodInfo_TMP_FontAsset_Load_TMP_FontAsset);
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) goto LAB_0403a19a;
LAB_0403a14f:
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             **(undefined8 **)(TypeInfo_NameFontCatalog + 0xb8);
  }
  else {
    x = TMPro_TMP_Settings__get_defaultFontAsset((MethodInfo *)0x0);
    if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) != 0) goto LAB_0403a14f;
LAB_0403a19a:
    il2cpp_init_class();
    __this = (System_Collections_Generic_Dictionary_object__object__o *)
             **(undefined8 **)(TypeInfo_NameFontCatalog + 0xb8);
  }
  if (__this != (System_Collections_Generic_Dictionary_object__object__o *)0x0) {
    System_Collections_Generic_Dictionary<object__object>__set_Item
              (__this,(Il2CppObject *)id_00,(Il2CppObject *)x,MethodInfo_Void_set_Item);
    return x;
  }
LAB_0403a1b1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// PatreonEffects.NameFontCatalog$$Apply
// il2cpp: void PatreonEffects_NameFontCatalog__Apply (TMPro_TMP_Text_o* text, System_String_o* id, const MethodInfo* method);
// 0x403a3a0

void PatreonEffects_NameFontCatalog__Apply
               (TMPro_TMP_Text_o *text,System_String_o *id,MethodInfo *method)

{
  bool_conflict bVar1;
  TMPro_TMP_FontAsset_o *value;
  MethodInfo *method_00;
  
  if (DAT_057043a3 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_NameFontCatalog);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_057043a3 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)text,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = PatreonEffects_NameFontCatalog__Load(id,method_00);
    if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
      il2cpp_init_class();
    }
    bVar1 = UnityEngine_Object__op_Inequality
                      ((UnityEngine_Object_o *)value,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      if (text != (TMPro_TMP_Text_o *)0x0) {
        TMPro_TMP_Text__set_font(text,value,(MethodInfo *)0x0);
        return;
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return;
}


// PatreonEffects.NameFontCatalog$$Apply
// il2cpp: void PatreonEffects_NameFontCatalog__Apply (TMPro_TMP_InputField_o* input, System_String_o* id, const MethodInfo* method);
// 0x403a470

void PatreonEffects_NameFontCatalog__Apply
               (TMPro_TMP_InputField_o *input,System_String_o *id,MethodInfo *method)

{
  byte bVar1;
  TMPro_TMP_Text_o *pTVar2;
  bool_conflict bVar3;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *pMVar4;
  TMPro_TMP_Text_o *text;
  
  if (DAT_057043a4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_NameFontCatalog);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&TypeInfo_TMP_Text);
    DAT_057043a4 = '\x01';
  }
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)input,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar3 != '\0') {
    return;
  }
  if (input == (TMPro_TMP_InputField_o *)0x0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pTVar2 = *(TMPro_TMP_Text_o **)&(input->fields).m_CachedViewportRect.fields.m_Width;
  pMVar4 = extraout_RDX;
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    il2cpp_init_class();
    pMVar4 = extraout_RDX_00;
  }
  PatreonEffects_NameFontCatalog__Apply(pTVar2,id,pMVar4);
  pTVar2 = (TMPro_TMP_Text_o *)(input->fields).m_TextComponentRectTransform;
  pMVar4 = extraout_RDX_01;
  if (pTVar2 != (TMPro_TMP_Text_o *)0x0) {
    bVar1 = (TypeInfo_TMP_Text->_2).naturalAligment;
    pMVar4 = (MethodInfo *)(ulong)bVar1;
    if (bVar1 <= (pTVar2->klass->_2).naturalAligment) {
      text = (TMPro_TMP_Text_o *)0x0;
      if ((pTVar2->klass->_2).typeHierarchy[(long)&pMVar4[-1].field_0x57] == TypeInfo_TMP_Text) {
        text = pTVar2;
      }
      goto LAB_0403a54a;
    }
  }
  text = (TMPro_TMP_Text_o *)0x0;
LAB_0403a54a:
  PatreonEffects_NameFontCatalog__Apply(text,id,pMVar4);
  TMPro_TMP_InputField__ForceLabelUpdate(input,(MethodInfo *)0x0);
  return;
}


// PatreonEffects.NameFontCatalog$$FontForPlayer
// il2cpp: TMPro_TMP_FontAsset_o* PatreonEffects_NameFontCatalog__FontForPlayer (Photon_Realtime_Player_o* player, bool guild, const MethodInfo* method);
// 0x403a570

TMPro_TMP_FontAsset_o *
PatreonEffects_NameFontCatalog__FontForPlayer
          (Photon_Realtime_Player_o *player,bool_conflict guild,MethodInfo *method)

{
  int iVar1;
  Settings_StringSetting_o *pSVar2;
  bool_conflict bVar3;
  Settings_ProfileSettings_o *pSVar4;
  TMPro_TMP_FontAsset_o *pTVar5;
  System_String_o *id;
  bool_conflict bVar6;
  undefined4 in_register_00000034;
  
  bVar6 = guild;
  if (DAT_057043a5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_NameFontCatalog);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"Normal");
    DAT_057043a5 = '\x01';
  }
  if ((player == (Photon_Realtime_Player_o *)0x0) ||
     (bVar3 = PatreonEffects_PatreonHelper__HasNameEffectAccess
                        (player,(MethodInfo *)CONCAT44(in_register_00000034,bVar6)),
     (char)bVar3 == '\0')) {
    id = "Normal";
    if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
      il2cpp_init_class();
      id = "Normal";
    }
    goto LAB_0403a65d;
  }
  if (*(int *)(TypeInfo_NameFontCatalog + 0xe4) == 0) {
    il2cpp_init_class();
    pSVar4 = PatreonEffects_NameFontCatalog__Profile
                       (player,(MethodInfo *)CONCAT44(in_register_00000034,bVar6));
    if (pSVar4 == (Settings_ProfileSettings_o *)0x0) goto LAB_0403a624;
LAB_0403a5de:
    if ((char)guild == '\0') {
      pSVar2 = (pSVar4->fields).NameFont;
    }
    else {
      pSVar2 = (pSVar4->fields).GuildFont;
    }
    if (pSVar2 == (Settings_StringSetting_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    id = (pSVar2->fields)._value;
    iVar1 = *(int *)(TypeInfo_NameFontCatalog + 0xe4);
  }
  else {
    pSVar4 = PatreonEffects_NameFontCatalog__Profile
                       (player,(MethodInfo *)CONCAT44(in_register_00000034,bVar6));
    if (pSVar4 != (Settings_ProfileSettings_o *)0x0) goto LAB_0403a5de;
LAB_0403a624:
    iVar1 = *(int *)(TypeInfo_NameFontCatalog + 0xe4);
    id = "Normal";
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
LAB_0403a65d:
  pTVar5 = PatreonEffects_NameFontCatalog__Load
                     (id,(MethodInfo *)CONCAT44(in_register_00000034,bVar6));
  return pTVar5;
}


// PatreonEffects.NameFontCatalog$$Profile
// il2cpp: Settings_ProfileSettings_o* PatreonEffects_NameFontCatalog__Profile (Photon_Realtime_Player_o* player, const MethodInfo* method);
// 0x403a670

Settings_ProfileSettings_o *
PatreonEffects_NameFontCatalog__Profile(Photon_Realtime_Player_o *player,MethodInfo *method)

{
  bool_conflict bVar1;
  Il2CppClass *pIVar2;
  System_Collections_Generic_Dictionary_int__object__o *__this;
  Il2CppObject *local_20;
  
  if (DAT_057043a6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Boolean_TryGetValue);
    il2cpp_init_method_metadata(&TypeInfo_InGameManager);
    DAT_057043a6 = '\x01';
  }
  local_20 = (Il2CppObject *)0x0;
  if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pIVar2 = (Il2CppClass *)0x0;
  if (player != (Photon_Realtime_Player_o *)0x0) {
    pIVar2 = (Il2CppClass *)0x0;
    __this = *(System_Collections_Generic_Dictionary_int__object__o **)
              (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18);
    if (__this != (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
      if (*(int *)(TypeInfo_InGameManager + 0xe4) == 0) {
        il2cpp_init_class();
        __this = *(System_Collections_Generic_Dictionary_int__object__o **)
                  (*(long *)(TypeInfo_InGameManager + 0xb8) + 0x18);
        if (__this == (System_Collections_Generic_Dictionary_int__object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
      }
      bVar1 = System_Collections_Generic_Dictionary<int__object>__TryGetValue
                        (__this,(player->fields).actorNumber,&local_20,MethodInfo_Boolean_TryGetValue);
      if (((char)bVar1 == '\0') || (local_20 == (Il2CppObject *)0x0)) {
        pIVar2 = (Il2CppClass *)0x0;
      }
      else {
        pIVar2 = local_20[2].klass;
      }
    }
  }
  return (Settings_ProfileSettings_o *)pIVar2;
}


// PatreonEffects.NameFontCatalog$$Path
// il2cpp: System_String_o* PatreonEffects_NameFontCatalog__Path (System_String_o* id, const MethodInfo* method);
// 0x403a1c0

System_String_o * PatreonEffects_NameFontCatalog__Path(System_String_o *id,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_057043a7 == '\0') {
    il2cpp_init_method_metadata(&"Aottg2");
    il2cpp_init_method_metadata(&"Serif");
    il2cpp_init_method_metadata(&"Jacquard");
    il2cpp_init_method_metadata(&"Oxanium");
    il2cpp_init_method_metadata(&"Pixelify");
    il2cpp_init_method_metadata(&"UI/Fonts/BitcountSingle-Regular SDF");
    il2cpp_init_method_metadata(&"Comics");
    il2cpp_init_method_metadata(&"EightBit");
    il2cpp_init_method_metadata(&"UI/Fonts/ComicRelief-Bold SDF");
    il2cpp_init_method_metadata(&"UI/Fonts/PixelifySans-Regular SDF");
    il2cpp_init_method_metadata(&"UI/Fonts/Oxanium-SemiBold SDF");
    il2cpp_init_method_metadata(&"UI/Fonts/Vegur-Regular-SDF");
    il2cpp_init_method_metadata(&"UI/Fonts/IBMPlexSerif-SemiBold SDF");
    il2cpp_init_method_metadata(&"UI/Fonts/Jacquard12-Regular SDF");
    il2cpp_init_method_metadata(&"UI/Fonts/header SDF");
    DAT_057043a7 = '\x01';
  }
  bVar1 = System_String__op_Equality(id,"Serif",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "UI/Fonts/IBMPlexSerif-SemiBold SDF";
  }
  bVar1 = System_String__op_Equality(id,"Aottg2",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "UI/Fonts/header SDF";
  }
  bVar1 = System_String__op_Equality(id,"EightBit",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "UI/Fonts/BitcountSingle-Regular SDF";
  }
  bVar1 = System_String__op_Equality(id,"Comics",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "UI/Fonts/ComicRelief-Bold SDF";
  }
  bVar1 = System_String__op_Equality(id,"Jacquard",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "UI/Fonts/Jacquard12-Regular SDF";
  }
  bVar1 = System_String__op_Equality(id,"Pixelify",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "UI/Fonts/PixelifySans-Regular SDF";
  }
  bVar1 = System_String__op_Equality(id,"Oxanium",(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "UI/Fonts/Oxanium-SemiBold SDF";
  }
  return "UI/Fonts/Vegur-Regular-SDF";
}


// PatreonEffects.NameFontCatalog$$.cctor
// il2cpp: void PatreonEffects_NameFontCatalog___cctor (const MethodInfo* method);
// 0x403a750

void PatreonEffects_NameFontCatalog___cctor(MethodInfo *method)

{
  long lVar1;
  System_Collections_Generic_Dictionary_object__object__o *__this;
  long lVar2;
  
  if (DAT_057043a8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Dictionary_2_System_String_TMPro_TMP_FontAsset);
    il2cpp_init_method_metadata(&TypeInfo_Dictionary_string__TMP_FontAsset);
    il2cpp_init_method_metadata(&TypeInfo_NameFontCatalog);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"Aottg2");
    il2cpp_init_method_metadata(&"Serif");
    il2cpp_init_method_metadata(&"Normal");
    il2cpp_init_method_metadata(&"Jacquard");
    il2cpp_init_method_metadata(&"Oxanium");
    il2cpp_init_method_metadata(&"Pixelify");
    il2cpp_init_method_metadata(&"Comics");
    il2cpp_init_method_metadata(&"EightBit");
    DAT_057043a8 = '\x01';
  }
  __this = (System_Collections_Generic_Dictionary_object__object__o *)
           il2cpp_runtime_glue(TypeInfo_Dictionary_string__TMP_FontAsset);
  System_Collections_Generic_Dictionary<object__object>___ctor(__this,MethodInfo_Dictionary_2_System_String_TMPro_TMP_FontAsset);
  **(undefined8 **)(TypeInfo_NameFontCatalog + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_NameFontCatalog + 0xb8),__this);
  lVar2 = il2cpp_glue_02274930(TypeInfo_string,8);
  if (lVar2 != 0) {
    if (*(int *)(lVar2 + 0x18) != 0) {
      *(undefined8 *)(lVar2 + 0x20) = "Normal";
      il2cpp_runtime_glue(lVar2 + 0x20);
      if (1 < *(uint *)(lVar2 + 0x18)) {
        *(undefined8 *)(lVar2 + 0x28) = "Aottg2";
        il2cpp_runtime_glue(lVar2 + 0x28);
        if (2 < *(uint *)(lVar2 + 0x18)) {
          *(undefined8 *)(lVar2 + 0x30) = "Serif";
          il2cpp_runtime_glue(lVar2 + 0x30);
          if (3 < *(uint *)(lVar2 + 0x18)) {
            *(undefined8 *)(lVar2 + 0x38) = "EightBit";
            il2cpp_runtime_glue(lVar2 + 0x38);
            if (4 < *(uint *)(lVar2 + 0x18)) {
              *(undefined8 *)(lVar2 + 0x40) = "Comics";
              il2cpp_runtime_glue(lVar2 + 0x40);
              if (5 < *(uint *)(lVar2 + 0x18)) {
                *(undefined8 *)(lVar2 + 0x48) = "Jacquard";
                il2cpp_runtime_glue(lVar2 + 0x48);
                if (6 < *(uint *)(lVar2 + 0x18)) {
                  *(undefined8 *)(lVar2 + 0x50) = "Pixelify";
                  il2cpp_runtime_glue(lVar2 + 0x50);
                  if (7 < *(uint *)(lVar2 + 0x18)) {
                    *(undefined8 *)(lVar2 + 0x58) = "Oxanium";
                    il2cpp_runtime_glue(lVar2 + 0x58);
                    lVar1 = *(long *)(TypeInfo_NameFontCatalog + 0xb8);
                    *(long *)(lVar1 + 8) = lVar2;
                    il2cpp_runtime_glue(lVar1 + 8,lVar2);
                    return;
                  }
                }
              }
            }
          }
        }
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


