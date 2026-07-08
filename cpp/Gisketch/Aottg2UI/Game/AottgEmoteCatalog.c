// Type: Gisketch.Aottg2UI.Game.AottgEmoteCatalog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgEmoteCatalog.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgEmoteCatalog$$StickerPresets
// il2cpp: Gisketch_Aottg2UI_Game_AottgProfilePreset_array* Gisketch_Aottg2UI_Game_AottgEmoteCatalog__StickerPresets (const MethodInfo* method);
// 0x41e5fc0

Gisketch_Aottg2UI_Game_AottgProfilePreset_array *
Gisketch_Aottg2UI_Game_AottgEmoteCatalog__StickerPresets(MethodInfo *method)

{
  int32_t *piVar1;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_o *pGVar2;
  uint uVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_o item;
  long lVar5;
  bool_conflict bVar6;
  MethodInfo *__this;
  System_String_array *pSVar7;
  System_String_o *pSVar8;
  System_String_o *pSVar9;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar10;
  MethodInfo *pMVar11;
  ulong uVar12;
  System_String_o *local_68;
  System_String_o *pSStack_60;
  System_String_o *pSStack_58;
  System_String_array *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  System_String_o *local_38;
  
  if (DAT_05704ef9 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_AottgProfilePreset___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Gisketch_Aottg2UI_Game_AottgProfilePreset);
    il2cpp_init_method_metadata(&TypeInfo_List_AottgProfilePreset);
    DAT_05704ef9 = '\x01';
  }
  __this = (MethodInfo *)il2cpp_runtime_glue(TypeInfo_List_AottgProfilePreset);
  pMVar11 = __this;
  System_Collections_Generic_List<AottgProfilePreset>___ctor
            ((System_Collections_Generic_List_AottgProfilePreset__o *)__this,MethodInfo_List_1_Gisketch_Aottg2UI_Game_AottgProfilePreset);
  pSVar7 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__AllStickers(pMVar11);
  if (pSVar7 != (System_String_array *)0x0) {
    local_50 = pSVar7;
    if (__this != (MethodInfo *)0x0) {
      if ((int)pSVar7->max_length < 1) {
LAB_041e61f7:
        pGVar10 = System_Collections_Generic_List<AottgProfilePreset>__ToArray
                            ((System_Collections_Generic_List_AottgProfilePreset__o *)__this,
                             MethodInfo_AottgProfilePreset___ToArray);
        return pGVar10;
      }
      uVar12 = 0;
      if ((pSVar7->max_length & 0xffffffff) != 0) {
        do {
          pSVar4 = pSVar7->m_Items[uVar12];
          if (DAT_05704efb == '\0') {
            il2cpp_init_method_metadata(&"None");
            il2cpp_init_method_metadata(&"Emoji");
            DAT_05704efb = '\x01';
          }
          pMVar11 = (MethodInfo *)0x0;
          bVar6 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
          pSVar8 = "None";
          if ((char)bVar6 == '\0') {
            if (pSVar4 == (System_String_o *)0x0) goto LAB_041e6273;
            pMVar11 = "Emoji";
            pSVar8 = System_String__Replace
                               (pSVar4,(System_String_o *)"Emoji",
                                (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                                (MethodInfo *)0x0);
          }
          pSVar9 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__Sprite(pSVar4,pMVar11);
          pSStack_60 = (System_String_o *)0x0;
          pSStack_58 = (System_String_o *)0x0;
          local_68 = pSVar4;
          il2cpp_runtime_glue(&local_68,pSVar4);
          pSStack_60 = pSVar8;
          il2cpp_runtime_glue(&pSStack_60,pSVar8);
          pSStack_58 = pSVar9;
          il2cpp_runtime_glue(&pSStack_58);
          pSVar7 = local_50;
          lVar5 = MethodInfo_Void_Add;
          local_38 = pSStack_58;
          local_48 = local_68;
          uStack_40 = pSStack_60;
          pSVar4 = local_48;
          pSVar8 = uStack_40;
          piVar1 = (int32_t *)((long)&__this->name + 4);
          *piVar1 = *piVar1 + 1;
          pGVar10 = ((System_Collections_Generic_List_AottgProfilePreset__Fields *)
                    &__this->invoker_method)->_items;
          if (pGVar10 == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) goto LAB_041e6273;
          uVar3 = *(uint *)&__this->name;
          if (uVar3 < (uint)pGVar10->max_length) {
            *(uint *)&__this->name = uVar3 + 1;
            pGVar10->m_Items[(int)uVar3].fields.Sprite = pSStack_58;
            local_48._0_4_ = SUB84(local_68,0);
            local_48._4_4_ = (undefined4)((ulong)local_68 >> 0x20);
            uStack_40._0_4_ = SUB84(pSStack_60,0);
            uStack_40._4_4_ = (undefined4)((ulong)pSStack_60 >> 0x20);
            pGVar2 = pGVar10->m_Items + (int)uVar3;
            *(undefined4 *)&(pGVar2->fields).Key = (undefined4)local_48;
            *(undefined4 *)((long)&(pGVar2->fields).Key + 4) = local_48._4_4_;
            *(undefined4 *)&(pGVar2->fields).Label = (undefined4)uStack_40;
            *(undefined4 *)((long)&(pGVar2->fields).Label + 4) = uStack_40._4_4_;
            local_48 = pSVar4;
            uStack_40 = pSVar8;
            il2cpp_runtime_glue(pGVar10->m_Items + (int)uVar3);
          }
          else {
            item.fields.Label = pSStack_60;
            item.fields.Key = local_68;
            item.fields.Sprite = pSStack_58;
            System_Collections_Generic_List<AottgProfilePreset>__AddWithResize
                      ((System_Collections_Generic_List_AottgProfilePreset__o *)__this,item,
                       *(MethodInfo_34EF8B0 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          uVar12 = uVar12 + 1;
          uVar3 = (uint)pSVar7->max_length;
          if ((long)(int)uVar3 <= (long)uVar12) goto LAB_041e61f7;
        } while (uVar12 < uVar3);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (0 < (int)pSVar7->max_length) {
      pSVar4 = pSVar7->m_Items[0];
      if (DAT_05704efb == '\0') {
        il2cpp_init_method_metadata(&"None");
        il2cpp_init_method_metadata(&"Emoji");
        DAT_05704efb = '\x01';
      }
      pMVar11 = (MethodInfo *)0x0;
      bVar6 = System_String__IsNullOrEmpty(pSVar4,(MethodInfo *)0x0);
      pSVar8 = "None";
      if ((char)bVar6 == '\0') {
        if (pSVar4 == (System_String_o *)0x0) goto LAB_041e6273;
        pMVar11 = "Emoji";
        pSVar8 = System_String__Replace
                           (pSVar4,(System_String_o *)"Emoji",
                            (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8),
                            (MethodInfo *)0x0);
      }
      pSVar9 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__Sprite(pSVar4,pMVar11);
      pSStack_60 = (System_String_o *)0x0;
      pSStack_58 = (System_String_o *)0x0;
      local_68 = pSVar4;
      il2cpp_runtime_glue(&local_68,pSVar4);
      pSStack_60 = pSVar8;
      il2cpp_runtime_glue(&pSStack_60,pSVar8);
      pSStack_58 = pSVar9;
      il2cpp_runtime_glue(&pSStack_58,pSVar9);
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
LAB_041e6273:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgEmoteCatalog$$Sprite
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEmoteCatalog__Sprite (System_String_o* value, const MethodInfo* method);
// 0x41e6700

System_String_o *
Gisketch_Aottg2UI_Game_AottgEmoteCatalog__Sprite(System_String_o *value,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 *puVar2;
  System_String_o *pSVar3;
  MethodInfo *method_00;
  
  if (DAT_05704efa == '\0') {
    il2cpp_init_method_metadata(&"UI/Icons/Emotes/");
    il2cpp_init_method_metadata(&"_0");
    il2cpp_init_method_metadata(&"Icon");
    il2cpp_init_method_metadata(&"UI/Icons/Profile/");
    DAT_05704efa = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
  }
  if (DAT_05704eff == '\0') {
    il2cpp_init_method_metadata(&"Emoji");
    DAT_05704eff = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (value == (System_String_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    method_00 = "Emoji";
    bVar1 = System_String__StartsWith(value,(System_String_o *)"Emoji",4,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      bVar1 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__IsAnimated(value,method_00);
      pSVar3 = "UI/Icons/Emotes/";
      if ((char)bVar1 == '\0') {
        puVar2 = *(undefined8 **)(DAT_057110b0 + 0xb8);
      }
      else {
        puVar2 = &"_0";
      }
      goto LAB_041e67e8;
    }
  }
  puVar2 = &"Icon";
  pSVar3 = "UI/Icons/Profile/";
LAB_041e67e8:
  pSVar3 = System_String__Concat(pSVar3,value,(System_String_o *)*puVar2,(MethodInfo *)0x0);
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgEmoteCatalog$$Label
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEmoteCatalog__Label (System_String_o* value, const MethodInfo* method);
// 0x41e6680

System_String_o *
Gisketch_Aottg2UI_Game_AottgEmoteCatalog__Label(System_String_o *value,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  
  if (DAT_05704efb == '\0') {
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"Emoji");
    DAT_05704efb = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "None";
  }
  if (value != (System_String_o *)0x0) {
    pSVar2 = System_String__Replace
                       (value,"Emoji",(System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8)
                        ,(MethodInfo *)0x0);
    return pSVar2;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgEmoteCatalog$$IsAnimated
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgEmoteCatalog__IsAnimated (System_String_o* value, const MethodInfo* method);
// 0x41e68c0

bool_conflict
Gisketch_Aottg2UI_Game_AottgEmoteCatalog__IsAnimated(System_String_o *value,MethodInfo *method)

{
  uint uVar1;
  bool_conflict bVar2;
  System_String_array *pSVar3;
  ulong uVar4;
  
  if (DAT_05704efc == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"Data/Info/EmoteInfo");
    il2cpp_init_method_metadata(&"AnimatedEmojis");
    DAT_05704efc = '\x01';
  }
  pSVar3 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,0);
  pSVar3 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__ReadList
                     ("Data/Info/EmoteInfo","AnimatedEmojis",pSVar3,(MethodInfo *)&"AnimatedEmojis");
  if (pSVar3 != (System_String_array *)0x0) {
    uVar4 = 0;
    while( true ) {
      uVar1 = (uint)pSVar3->max_length;
      if ((long)(int)uVar1 <= (long)uVar4) {
        return 0;
      }
      if (uVar1 <= uVar4) break;
      bVar2 = System_String__op_Equality(pSVar3->m_Items[uVar4],value,(MethodInfo *)0x0);
      uVar4 = uVar4 + 1;
      if ((char)bVar2 != '\0') {
        return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar2 >> 8),1);
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgEmoteCatalog$$AllStickers
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgEmoteCatalog__AllStickers (const MethodInfo* method);
// 0x41e6300

System_String_array * Gisketch_Aottg2UI_Game_AottgEmoteCatalog__AllStickers(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_String_o *pSVar3;
  System_Object_array *pSVar4;
  bool_conflict bVar5;
  System_String_array *pSVar6;
  System_Collections_Generic_List_object__o *__this;
  ulong uVar7;
  MethodInfo *in_RCX;
  ulong uVar8;
  long lVar9;
  
  if (DAT_05704efd == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"Data/Info/ProfileIconInfo");
    il2cpp_init_method_metadata(&"Data/Info/EmoteInfo");
    il2cpp_init_method_metadata(&"EmojiSmile");
    il2cpp_init_method_metadata(&"EmojiThumbsUp");
    il2cpp_init_method_metadata(&"EmojiCool");
    il2cpp_init_method_metadata(&"Icons");
    il2cpp_init_method_metadata(&"EmojiLove");
    il2cpp_init_method_metadata(&"AllEmojis");
    DAT_05704efd = '\x01';
  }
  pSVar6 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,4);
  if (pSVar6 == (System_String_array *)0x0) {
LAB_041e666c:
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  if ((int)pSVar6->max_length != 0) {
    pSVar6->m_Items[0] = "EmojiSmile";
    il2cpp_runtime_glue(pSVar6->m_Items);
    if (1 < (uint)pSVar6->max_length) {
      pSVar6->m_Items[1] = "EmojiThumbsUp";
      il2cpp_runtime_glue(pSVar6->m_Items + 1);
      if (2 < (uint)pSVar6->max_length) {
        pSVar6->m_Items[2] = "EmojiCool";
        il2cpp_runtime_glue(pSVar6->m_Items + 2);
        if (3 < (uint)pSVar6->max_length) {
          pSVar6->m_Items[3] = "EmojiLove";
          il2cpp_runtime_glue(pSVar6->m_Items + 3);
          pSVar6 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__ReadList
                             ("Data/Info/EmoteInfo","AllEmojis",pSVar6,in_RCX);
          __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
          System_Collections_Generic_List<object>___ctor
                    (__this,(System_Collections_Generic_IEnumerable_T__o *)pSVar6,MethodInfo_List_1_System_String);
          pSVar6 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,0);
          pSVar6 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__ReadList
                             ("Data/Info/ProfileIconInfo","Icons",pSVar6,(MethodInfo *)&"Icons");
          if (pSVar6 == (System_String_array *)0x0) goto LAB_041e666c;
          uVar7 = pSVar6->max_length;
          if (__this == (System_Collections_Generic_List_object__o *)0x0) {
            if (0 < (int)uVar7) {
              lVar9 = 0;
              do {
                if ((uint)uVar7 <= (uint)lVar9) goto LAB_041e6671;
                pSVar3 = pSVar6->m_Items[lVar9];
                if (DAT_05704eff == '\0') {
                  il2cpp_init_method_metadata(&"Emoji");
                  DAT_05704eff = '\x01';
                }
                bVar5 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
                if ((((char)bVar5 != '\0') || (pSVar3 == (System_String_o *)0x0)) ||
                   (bVar5 = System_String__StartsWith(pSVar3,"Emoji",4,(MethodInfo *)0x0),
                   (char)bVar5 == '\0')) goto LAB_041e666c;
                uVar2 = (uint)pSVar6->max_length;
                uVar7 = (ulong)uVar2;
                lVar9 = lVar9 + 1;
              } while ((int)lVar9 < (int)uVar2);
            }
          }
          else if (0 < (int)uVar7) {
            uVar8 = 0;
            if ((uVar7 & 0xffffffff) != 0) {
              do {
                pSVar3 = pSVar6->m_Items[uVar8];
                if (DAT_05704eff == '\0') {
                  il2cpp_init_method_metadata(&"Emoji");
                  DAT_05704eff = '\x01';
                }
                bVar5 = System_String__IsNullOrEmpty(pSVar3,(MethodInfo *)0x0);
                if ((char)bVar5 == '\0') {
                  if (pSVar3 == (System_String_o *)0x0) goto LAB_041e666c;
                  bVar5 = System_String__StartsWith(pSVar3,"Emoji",4,(MethodInfo *)0x0);
                  if ((char)bVar5 == '\0') goto LAB_041e6594;
                }
                else {
LAB_041e6594:
                  lVar9 = MethodInfo_Void_Add;
                  piVar1 = &(__this->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar4 = (__this->fields)._items;
                  if (pSVar4 == (System_Object_array *)0x0) goto LAB_041e666c;
                  uVar2 = (__this->fields)._size;
                  if (uVar2 < (uint)pSVar4->max_length) {
                    (__this->fields)._size = uVar2 + 1;
                    pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pSVar3;
                    il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2);
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              (__this,(Il2CppObject *)pSVar3,
                               *(MethodInfo_35A7350 **)
                                (*(long *)(*(long *)(lVar9 + 0x20) + 0xc0) + 0x70));
                  }
                }
                uVar8 = uVar8 + 1;
                uVar2 = (uint)pSVar6->max_length;
                if ((long)(int)uVar2 <= (long)uVar8) goto LAB_041e6647;
              } while (uVar8 < uVar2);
            }
            goto LAB_041e6671;
          }
LAB_041e6647:
          if (__this != (System_Collections_Generic_List_object__o *)0x0) {
            pSVar6 = (System_String_array *)
                     System_Collections_Generic_List<object>__ToArray(__this,MethodInfo_String___ToArray);
            return pSVar6;
          }
          goto LAB_041e666c;
        }
      }
    }
  }
LAB_041e6671:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgEmoteCatalog$$ReadList
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgEmoteCatalog__ReadList (System_String_o* path, System_String_o* key, System_String_array* fallback, const MethodInfo* method);
// 0x41e6990

/* WARNING: Removing unreachable block (ram,0x041e6dd4) */
/* WARNING: Removing unreachable block (ram,0x041e6e2f) */

System_String_array *
Gisketch_Aottg2UI_Game_AottgEmoteCatalog__ReadList
          (System_String_o *path,System_String_o *key,System_String_array *fallback,
          MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  long lVar3;
  System_Object_array *pSVar4;
  char cVar5;
  bool_conflict bVar6;
  UnityEngine_Object_o *x;
  System_String_o *aJSON;
  SimpleJSONFixed_JSONNode_o *a;
  SimpleJSONFixed_JSONNode_o *a_00;
  System_Collections_Generic_List_object__o *__this;
  long *plVar7;
  undefined8 *puVar8;
  long *plVar9;
  Il2CppObject *item;
  System_String_array *pSVar10;
  long lVar11;
  
  if (DAT_05704efe == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_IDisposable);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_init_method_metadata(&TypeInfo_IEnumerator);
    il2cpp_init_method_metadata(&TypeInfo_JSONNode);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_String___ToArray);
    il2cpp_init_method_metadata(&MethodInfo_List_1_System_String);
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&TypeInfo_List_string);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_TextAsset_Load_TextAsset);
    DAT_05704efe = '\x01';
  }
  x = (UnityEngine_Object_o *)UnityEngine_Resources__Load<object>(path,MethodInfo_TextAsset_Load_TextAsset);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return fallback;
  }
  if (x == (UnityEngine_Object_o *)0x0) goto LAB_041e6e25;
  aJSON = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
  a = SimpleJSONFixed_JSON__Parse(aJSON,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  a_00 = (SimpleJSONFixed_JSONNode_o *)0x0;
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto LAB_041e6e25;
    a_00 = (SimpleJSONFixed_JSONNode_o *)
           (*(a->klass->vtable)._7_get_Item.methodPtr)(a,key,(a->klass->vtable)._7_get_Item.method);
  }
  __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_string);
  System_Collections_Generic_List<object>___ctor(__this,MethodInfo_List_1_System_String);
  if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar6 = SimpleJSONFixed_JSONNode__op_Inequality(a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    if ((a_00 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
       (plVar7 = (long *)(*(a_00->klass->vtable)._27_get_Children.methodPtr)
                                   (a_00,(a_00->klass->vtable)._27_get_Children.method),
       plVar7 != (long *)0x0)) {
      lVar3 = *plVar7;
      if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
        lVar11 = 0;
        do {
          if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar11) == TypeInfo_IEnumerable_JSONNode) {
            puVar8 = (undefined8 *)
                     ((long)*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar11) * 0x10 + lVar3 + 0x138);
            goto LAB_041e6bc1;
          }
          lVar11 = lVar11 + 0x10;
        } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar11);
      }
      puVar8 = (undefined8 *)il2cpp_runtime_glue(plVar7,TypeInfo_IEnumerable_JSONNode,0);
LAB_041e6bc1:
      plVar7 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
      if (plVar7 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      do {
        lVar3 = *plVar7;
        if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
          lVar11 = 0;
          do {
            if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar11) == TypeInfo_IEnumerator) {
              puVar8 = (undefined8 *)
                       ((long)*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar11) * 0x10 + lVar3 + 0x138)
              ;
              goto LAB_041e6c73;
            }
            lVar11 = lVar11 + 0x10;
          } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar11);
        }
        puVar8 = (undefined8 *)il2cpp_runtime_glue(plVar7,TypeInfo_IEnumerator,0);
LAB_041e6c73:
        cVar5 = (*(code *)*puVar8)(plVar7,puVar8[1]);
        if (cVar5 == '\0') {
          if (plVar7 == (long *)0x0) goto LAB_041e6dd8;
          lVar3 = *plVar7;
          if ((ulong)*(ushort *)(lVar3 + 0x12e) == 0) goto LAB_041e6d9f;
          lVar11 = 0;
          goto LAB_041e6d90;
        }
        lVar3 = *plVar7;
        if ((ulong)*(ushort *)(lVar3 + 0x12e) != 0) {
          lVar11 = 0;
          do {
            if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar11) == TypeInfo_IEnumerator_JSONNode) {
              puVar8 = (undefined8 *)
                       ((long)*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar11) * 0x10 + lVar3 + 0x138)
              ;
              goto LAB_041e6ce3;
            }
            lVar11 = lVar11 + 0x10;
          } while ((ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar11);
        }
        puVar8 = (undefined8 *)il2cpp_runtime_glue(plVar7,TypeInfo_IEnumerator_JSONNode,0);
LAB_041e6ce3:
        plVar9 = (long *)(*(code *)*puVar8)(plVar7,puVar8[1]);
        if (plVar9 == (long *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        item = (Il2CppObject *)
               (**(code **)(*plVar9 + 0x1c8))(plVar9,*(undefined8 *)(*plVar9 + 0x1d0));
        lVar3 = MethodInfo_Void_Add;
        if (__this == (System_Collections_Generic_List_object__o *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (__this->fields)._items;
        if (pSVar4 == (System_Object_array *)0x0) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        uVar2 = (__this->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (__this->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = item;
          il2cpp_runtime_glue(pSVar4->m_Items + (int)uVar2,item);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (__this,item,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar3 + 0x20) + 0xc0) + 0x70));
        }
      } while( true );
    }
    goto LAB_041e6e25;
  }
  goto LAB_041e6dd8;
  while (lVar11 = lVar11 + 0x10, (ulong)*(ushort *)(lVar3 + 0x12e) << 4 != lVar11) {
LAB_041e6d90:
    if (*(long *)(*(long *)(lVar3 + 0xb0) + lVar11) == TypeInfo_IDisposable) {
      puVar8 = (undefined8 *)
               (lVar3 + (long)*(int *)(*(long *)(lVar3 + 0xb0) + 8 + lVar11) * 0x10 + 0x138);
      goto LAB_041e6dbd;
    }
  }
LAB_041e6d9f:
  puVar8 = (undefined8 *)il2cpp_runtime_glue(plVar7,TypeInfo_IDisposable,0);
LAB_041e6dbd:
  (*(code *)*puVar8)(plVar7,puVar8[1]);
LAB_041e6dd8:
  if (__this != (System_Collections_Generic_List_object__o *)0x0) {
    if ((__this->fields)._size < 1) {
      return fallback;
    }
    pSVar10 = (System_String_array *)
              System_Collections_Generic_List<object>__ToArray(__this,MethodInfo_String___ToArray);
    return pSVar10;
  }
LAB_041e6e25:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgEmoteCatalog$$IsEmoji
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgEmoteCatalog__IsEmoji (System_String_o* value, const MethodInfo* method);
// 0x41e6860

bool_conflict
Gisketch_Aottg2UI_Game_AottgEmoteCatalog__IsEmoji(System_String_o *value,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (DAT_05704eff == '\0') {
    il2cpp_init_method_metadata(&"Emoji");
    DAT_05704eff = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return 0;
  }
  if (value != (System_String_o *)0x0) {
    bVar1 = System_String__StartsWith(value,"Emoji",4,(MethodInfo *)0x0);
    return bVar1;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


