// Type: Gisketch.Aottg2UI.Game.AottgEmoteCatalog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgEmoteCatalog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgEmoteCatalog$$StickerPresets
// il2cpp: Gisketch_Aottg2UI_Game_AottgProfilePreset_array* Gisketch_Aottg2UI_Game_AottgEmoteCatalog__StickerPresets (const MethodInfo* method);
// 0x4516fc0

Gisketch_Aottg2UI_Game_AottgProfilePreset_array *
Gisketch_Aottg2UI_Game_AottgEmoteCatalog__StickerPresets(MethodInfo *method)

{
  int32_t *piVar1;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_o *pGVar2;
  uint uVar3;
  System_Collections_Generic_List_object__o *value;
  System_Object_array *pSVar4;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_o item;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar5;
  bool_conflict bVar6;
  MethodInfo *pMVar7;
  System_String_array *pSVar8;
  System_String_o *pSVar9;
  System_Collections_Generic_List_object__o *__this;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar10;
  undefined8 *puVar11;
  System_Object_array *in_RCX;
  void *extraout_RDX;
  ulong uVar12;
  long lVar13;
  MethodInfo *method_00;
  MethodInfo *pMVar14;
  System_Collections_Generic_List_object__c *pSVar15;
  System_Collections_Generic_List_object__o *pSVar16;
  System_Collections_Generic_List_object__o *pSVar17;
  ulong uVar18;
  MethodInfo *local_68;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGStack_60;
  System_String_o *pSStack_58;
  System_String_array *local_50;
  undefined8 local_48;
  undefined8 uStack_40;
  System_String_o *local_38;
  
  if (g_data_057aedd1 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgProfilePreset_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Gisketch_Aottg2UI_Game_AottgProfilePreset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_AottgProfilePreset);
    g_data_057aedd1 = '\x01';
  }
  pMVar7 = (MethodInfo *)il2cpp_runtime_helper_023052d0(TypeInfo_List_AottgProfilePreset);
  pMVar14 = pMVar7;
  System_Collections_Generic_List_AottgProfilePreset____ctor
            ((System_Collections_Generic_List_AottgProfilePreset__o *)pMVar7,MethodInfo_List_1_Gisketch_Aottg2UI_Game_AottgProfilePreset);
  pSVar8 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__AllStickers(pMVar14);
  if (pSVar8 == (System_String_array *)0x0) {
label_04517273:
    il2cpp_runtime_helper_022b2c90();
label_04517278:
    in_RCX = (System_Object_array *)0x0;
    pMVar14 = "Emoji";
    pGVar10 = (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)
              System_String__Replace_3af9030
                        ((System_String_o *)pMVar7,(System_String_o *)"Emoji",
                         (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
  }
  else {
    local_50 = pSVar8;
    if (pMVar7 != (MethodInfo *)0x0) {
      if ((int)pSVar8->max_length < 1) {
label_045171f7:
        pGVar10 = System_Collections_Generic_List_AottgProfilePreset___ToArray
                            ((System_Collections_Generic_List_AottgProfilePreset__o *)pMVar7,MethodInfo_AottgProfilePreset_ToArray);
        return pGVar10;
      }
      uVar18 = 0;
      if ((pSVar8->max_length & 0xffffffff) != 0) {
        do {
          pMVar14 = (MethodInfo *)pSVar8->m_Items[uVar18];
          if (g_data_057aedd3 == '\0') {
            il2cpp_runtime_helper_023445d0(&"None");
            il2cpp_runtime_helper_023445d0(&"Emoji");
            g_data_057aedd3 = '\x01';
          }
          method_00 = (MethodInfo *)0x0;
          bVar6 = System_String__IsNullOrEmpty((System_String_o *)pMVar14,(MethodInfo *)0x0);
          pGVar10 = "None";
          if ((char)bVar6 == '\0') {
            if (pMVar14 == (MethodInfo *)0x0) goto label_04517273;
            method_00 = "Emoji";
            pGVar10 = (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)
                      System_String__Replace_3af9030
                                ((System_String_o *)pMVar14,(System_String_o *)"Emoji",
                                 (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
          }
          pSVar9 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__Sprite((System_String_o *)pMVar14,method_00);
          pGStack_60 = (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0;
          pSStack_58 = (System_String_o *)0x0;
          local_68 = pMVar14;
          il2cpp_runtime_helper_022b4080(&local_68,pMVar14);
          pGStack_60 = pGVar10;
          il2cpp_runtime_helper_022b4080(&pGStack_60,pGVar10);
          pSStack_58 = pSVar9;
          il2cpp_runtime_helper_022b4080(&pSStack_58);
          pSVar8 = local_50;
          lVar13 = MethodInfo_Void_Add;
          local_38 = pSStack_58;
          local_48 = local_68;
          uStack_40 = pGStack_60;
          pMVar14 = local_48;
          pGVar5 = uStack_40;
          piVar1 = (int32_t *)((long)&pMVar7->name + 4);
          *piVar1 = *piVar1 + 1;
          pGVar10 = ((System_Collections_Generic_List_AottgProfilePreset__Fields *)&pMVar7->invoker_method)->
                    _items;
          if (pGVar10 == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) goto label_04517273;
          uVar3 = *(uint *)&pMVar7->name;
          if (uVar3 < (uint)pGVar10->max_length) {
            *(uint *)&pMVar7->name = uVar3 + 1;
            pGVar10->m_Items[(int)uVar3].fields.Sprite = pSStack_58;
            local_48._0_4_ = SUB84(local_68,0);
            local_48._4_4_ = (undefined4)((ulong)local_68 >> 0x20);
            uStack_40._0_4_ = SUB84(pGStack_60,0);
            uStack_40._4_4_ = (undefined4)((ulong)pGStack_60 >> 0x20);
            pGVar2 = pGVar10->m_Items + (int)uVar3;
            *(undefined4 *)&(pGVar2->fields).Key = (undefined4)local_48;
            *(undefined4 *)((long)&(pGVar2->fields).Key + 4) = local_48._4_4_;
            *(undefined4 *)&(pGVar2->fields).Label = (undefined4)uStack_40;
            *(undefined4 *)((long)&(pGVar2->fields).Label + 4) = uStack_40._4_4_;
            local_48 = pMVar14;
            uStack_40 = pGVar5;
            il2cpp_runtime_helper_022b4080(pGVar10->m_Items + (int)uVar3);
          }
          else {
            item.fields.Label = (System_String_o *)pGStack_60;
            item.fields.Key = (System_String_o *)local_68;
            item.fields.Sprite = pSStack_58;
            System_Collections_Generic_List_AottgProfilePreset___AddWithResize
                      ((System_Collections_Generic_List_AottgProfilePreset__o *)pMVar7,item,
                       *(MethodInfo_3575F90 **)(*(long *)(*(long *)(lVar13 + 0x20) + 0xc0) + 0x70));
          }
          uVar18 = uVar18 + 1;
          uVar3 = (uint)pSVar8->max_length;
          in_RCX = (System_Object_array *)(long)(int)uVar3;
          if ((long)in_RCX <= (long)uVar18) goto label_045171f7;
        } while (uVar18 < uVar3);
      }
      il2cpp_runtime_helper_022b2ca0();
    }
    if ((int)pSVar8->max_length < 1) goto label_04517273;
    pMVar7 = (MethodInfo *)local_50->m_Items[0];
    if (g_data_057aedd3 == '\0') {
      il2cpp_runtime_helper_023445d0(&"None");
      il2cpp_runtime_helper_023445d0(&"Emoji");
      g_data_057aedd3 = '\x01';
    }
    pMVar14 = (MethodInfo *)0x0;
    bVar6 = System_String__IsNullOrEmpty((System_String_o *)pMVar7,(MethodInfo *)0x0);
    pGVar10 = "None";
    if ((char)bVar6 == '\0') {
      if (pMVar7 == (MethodInfo *)0x0) goto label_04517273;
      goto label_04517278;
    }
  }
  pSVar9 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__Sprite((System_String_o *)pMVar7,pMVar14);
  pGStack_60 = (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0;
  pSStack_58 = (System_String_o *)0x0;
  local_68 = pMVar7;
  il2cpp_runtime_helper_022b4080(&local_68,pMVar7);
  pGStack_60 = pGVar10;
  il2cpp_runtime_helper_022b4080(&pGStack_60,pGVar10);
  pSStack_58 = pSVar9;
  il2cpp_runtime_helper_022b4080(&pSStack_58,pSVar9);
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aedd5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"Data/Info/ProfileIconInfo");
    il2cpp_runtime_helper_023445d0(&"Data/Info/EmoteInfo");
    il2cpp_runtime_helper_023445d0(&"EmojiSmile");
    il2cpp_runtime_helper_023445d0(&"EmojiThumbsUp");
    il2cpp_runtime_helper_023445d0(&"EmojiCool");
    il2cpp_runtime_helper_023445d0(&"Icons");
    il2cpp_runtime_helper_023445d0(&"EmojiLove");
    il2cpp_runtime_helper_023445d0(&"AllEmojis");
    g_data_057aedd5 = '\x01';
  }
  pSVar16 = TypeInfo_string;
  pSVar8 = (System_String_array *)il2cpp_runtime_helper_022b2a40();
  if (pSVar8 == (System_String_array *)0x0) {
label_0451766c:
    il2cpp_runtime_helper_022b2c90();
    pSVar17 = pSVar16;
  }
  else {
    pSVar17 = pSVar16;
    if ((int)pSVar8->max_length != 0) {
      pSVar17 = (System_Collections_Generic_List_object__o *)pSVar8->m_Items;
      pSVar8->m_Items[0] = "EmojiSmile";
      il2cpp_runtime_helper_022b4080();
      if (1 < (uint)pSVar8->max_length) {
        pSVar17 = (System_Collections_Generic_List_object__o *)(pSVar8->m_Items + 1);
        pSVar8->m_Items[1] = "EmojiThumbsUp";
        il2cpp_runtime_helper_022b4080();
        if (2 < (uint)pSVar8->max_length) {
          pSVar17 = (System_Collections_Generic_List_object__o *)(pSVar8->m_Items + 2);
          pSVar8->m_Items[2] = "EmojiCool";
          il2cpp_runtime_helper_022b4080();
          if (3 < (uint)pSVar8->max_length) {
            pSVar8->m_Items[3] = "EmojiLove";
            il2cpp_runtime_helper_022b4080(pSVar8->m_Items + 3);
            pSVar8 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__ReadList
                               ("Data/Info/EmoteInfo","AllEmojis",pSVar8,(MethodInfo *)in_RCX);
            __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
            System_Collections_Generic_List_object____ctor_362ba10
                      (__this,(System_Collections_Generic_IEnumerable_T__o *)pSVar8,MethodInfo_List_1_System_String);
            pSVar8 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,0);
            in_RCX = (System_Object_array *)&"Icons";
            pSVar17 = "Data/Info/ProfileIconInfo";
            pSVar8 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__ReadList
                               ((System_String_o *)"Data/Info/ProfileIconInfo","Icons",pSVar8,
                                (MethodInfo *)&"Icons");
            pSVar16 = pSVar17;
            if (pSVar8 == (System_String_array *)0x0) goto label_0451766c;
            uVar18 = pSVar8->max_length;
            if (__this == (System_Collections_Generic_List_object__o *)0x0) {
              if (0 < (int)uVar18) {
                lVar13 = 0;
                do {
                  if ((uint)uVar18 <= (uint)lVar13) goto label_04517671;
                  pSVar17 = (System_Collections_Generic_List_object__o *)pSVar8->m_Items[lVar13];
                  if (g_data_057aedd7 == '\0') {
                    il2cpp_runtime_helper_023445d0(&"Emoji");
                    g_data_057aedd7 = '\x01';
                  }
                  pSVar16 = pSVar17;
                  bVar6 = System_String__IsNullOrEmpty((System_String_o *)pSVar17,(MethodInfo *)0x0);
                  if (((char)bVar6 != '\0') || (pSVar17 == (System_Collections_Generic_List_object__o *)0x0))
                  goto label_0451766c;
                  in_RCX = (System_Object_array *)0x0;
                  bVar6 = System_String__StartsWith_3af5570
                                    ((System_String_o *)pSVar17,(System_String_o *)"Emoji",4,
                                     (MethodInfo *)0x0);
                  pSVar16 = pSVar17;
                  if ((char)bVar6 == '\0') goto label_0451766c;
                  uVar3 = (uint)pSVar8->max_length;
                  uVar18 = (ulong)uVar3;
                  lVar13 = lVar13 + 1;
                } while ((int)lVar13 < (int)uVar3);
              }
            }
            else if (0 < (int)uVar18) {
              uVar12 = 0;
              if ((uVar18 & 0xffffffff) != 0) {
                do {
                  value = (System_Collections_Generic_List_object__o *)pSVar8->m_Items[uVar12];
                  if (g_data_057aedd7 == '\0') {
                    il2cpp_runtime_helper_023445d0(&"Emoji");
                    g_data_057aedd7 = '\x01';
                  }
                  pSVar17 = value;
                  bVar6 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
                  if ((char)bVar6 == '\0') {
                    pSVar16 = pSVar17;
                    if (value == (System_Collections_Generic_List_object__o *)0x0) goto label_0451766c;
                    pSVar17 = value;
                    bVar6 = System_String__StartsWith_3af5570
                                      ((System_String_o *)value,(System_String_o *)"Emoji",4,
                                       (MethodInfo *)0x0);
                    if ((char)bVar6 == '\0') goto label_04517594;
                  }
                  else {
label_04517594:
                    in_RCX = MethodInfo_Void_Add;
                    piVar1 = &(__this->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar4 = (__this->fields)._items;
                    pSVar16 = pSVar17;
                    if (pSVar4 == (System_Object_array *)0x0) goto label_0451766c;
                    uVar3 = (__this->fields)._size;
                    if (uVar3 < (uint)pSVar4->max_length) {
                      (__this->fields)._size = uVar3 + 1;
                      pSVar17 = (System_Collections_Generic_List_object__o *)(pSVar4->m_Items + (int)uVar3);
                      pSVar4->m_Items[(int)uVar3] = (Il2CppObject *)value;
                      il2cpp_runtime_helper_022b4080();
                    }
                    else {
                      pSVar17 = __this;
                      System_Collections_Generic_List_object___AddWithResize
                                (__this,(Il2CppObject *)value,
                                 ((in_RCX->m_Items[0][0xc].klass)->_1).interopData);
                    }
                  }
                  uVar12 = uVar12 + 1;
                  uVar3 = (uint)pSVar8->max_length;
                  in_RCX = (System_Object_array *)(long)(int)uVar3;
                  if ((long)in_RCX <= (long)uVar12) goto label_04517647;
                } while (uVar12 < uVar3);
              }
              goto label_04517671;
            }
label_04517647:
            pSVar16 = pSVar17;
            if (__this != (System_Collections_Generic_List_object__o *)0x0) {
              pGVar10 = (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)
                        System_Collections_Generic_List_object___ToArray(__this,MethodInfo_String_ToArray);
              return pGVar10;
            }
            goto label_0451766c;
          }
        }
      }
    }
  }
label_04517671:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057aedd3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Emoji");
    g_data_057aedd3 = '\x01';
  }
  pSVar16 = pSVar17;
  bVar6 = System_String__IsNullOrEmpty((System_String_o *)pSVar17,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return "None";
  }
  if (pSVar17 != (System_Collections_Generic_List_object__o *)0x0) {
    pGVar10 = (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)
              System_String__Replace_3af9030
                        ((System_String_o *)pSVar17,(System_String_o *)"Emoji",
                         (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    return pGVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aedd2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Emotes/");
    il2cpp_runtime_helper_023445d0(&"_0");
    il2cpp_runtime_helper_023445d0(&"Icon");
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Profile/");
    g_data_057aedd2 = '\x01';
  }
  bVar6 = System_String__IsNullOrEmpty((System_String_o *)pSVar16,(MethodInfo *)0x0);
  if ((char)bVar6 != '\0') {
    return (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (g_data_057aedd7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Emoji");
    g_data_057aedd7 = '\x01';
  }
  pSVar15 = (System_Collections_Generic_List_object__c *)0x0;
  pSVar17 = pSVar16;
  bVar6 = System_String__IsNullOrEmpty((System_String_o *)pSVar16,(MethodInfo *)0x0);
  if ((char)bVar6 == '\0') {
    if (pSVar16 == (System_Collections_Generic_List_object__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      pSVar17->klass = pSVar15;
      il2cpp_runtime_helper_022b4080();
      pSVar17->monitor = extraout_RDX;
      il2cpp_runtime_helper_022b4080(&pSVar17->monitor,extraout_RDX);
      (pSVar17->fields)._items = in_RCX;
      pGVar10 = (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)il2cpp_runtime_helper_022b4080(&pSVar17->fields,in_RCX)
      ;
      return pGVar10;
    }
    pMVar7 = "Emoji";
    bVar6 = System_String__StartsWith_3af5570
                      ((System_String_o *)pSVar16,(System_String_o *)"Emoji",4,(MethodInfo *)0x0);
    if ((char)bVar6 != '\0') {
      bVar6 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__IsAnimated((System_String_o *)pSVar16,pMVar7);
      pSVar9 = "UI/Icons/Emotes/";
      if ((char)bVar6 == '\0') {
        puVar11 = *(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      else {
        puVar11 = &"_0";
      }
      goto label_045177e8;
    }
  }
  puVar11 = &"Icon";
  pSVar9 = "UI/Icons/Profile/";
label_045177e8:
  pGVar10 = (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)
            System_String__Concat_3af7150
                      (pSVar9,(System_String_o *)pSVar16,(System_String_o *)*puVar11,(MethodInfo *)0x0);
  return pGVar10;
}


// Gisketch.Aottg2UI.Game.AottgEmoteCatalog$$Sprite
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEmoteCatalog__Sprite (System_String_o* value, const MethodInfo* method);
// 0x4517700

System_String_o * Gisketch_Aottg2UI_Game_AottgEmoteCatalog__Sprite(System_String_o *value,MethodInfo *method)

{
  bool_conflict bVar1;
  undefined8 *puVar2;
  System_String_o *pSVar3;
  System_String_Fields in_RCX;
  void *extraout_RDX;
  System_String_c *pSVar4;
  MethodInfo *method_00;
  
  if (g_data_057aedd2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Emotes/");
    il2cpp_runtime_helper_023445d0(&"_0");
    il2cpp_runtime_helper_023445d0(&"Icon");
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Profile/");
    g_data_057aedd2 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (g_data_057aedd7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Emoji");
    g_data_057aedd7 = '\x01';
  }
  pSVar4 = (System_String_c *)0x0;
  pSVar3 = value;
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (value == (System_String_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      pSVar3->klass = pSVar4;
      il2cpp_runtime_helper_022b4080();
      pSVar3->monitor = extraout_RDX;
      il2cpp_runtime_helper_022b4080(&pSVar3->monitor,extraout_RDX);
      pSVar3->fields = in_RCX;
      pSVar3 = (System_String_o *)il2cpp_runtime_helper_022b4080(&pSVar3->fields,in_RCX);
      return pSVar3;
    }
    method_00 = "Emoji";
    bVar1 = System_String__StartsWith_3af5570(value,(System_String_o *)"Emoji",4,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      bVar1 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__IsAnimated(value,method_00);
      pSVar3 = "UI/Icons/Emotes/";
      if ((char)bVar1 == '\0') {
        puVar2 = *(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      else {
        puVar2 = &"_0";
      }
      goto label_045177e8;
    }
  }
  puVar2 = &"Icon";
  pSVar3 = "UI/Icons/Profile/";
label_045177e8:
  pSVar3 = System_String__Concat_3af7150(pSVar3,value,(System_String_o *)*puVar2,(MethodInfo *)0x0);
  return pSVar3;
}


// Gisketch.Aottg2UI.Game.AottgEmoteCatalog$$Label
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgEmoteCatalog__Label (System_String_o* value, const MethodInfo* method);
// 0x4517680

System_String_o * Gisketch_Aottg2UI_Game_AottgEmoteCatalog__Label(System_String_o *value,MethodInfo *method)

{
  bool_conflict bVar1;
  System_String_o *pSVar2;
  undefined8 *puVar3;
  System_String_Fields in_RCX;
  void *extraout_RDX;
  System_String_c *pSVar4;
  MethodInfo *method_00;
  System_String_o *pSVar5;
  
  if (g_data_057aedd3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Emoji");
    g_data_057aedd3 = '\x01';
  }
  pSVar2 = value;
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return "None";
  }
  if (value != (System_String_o *)0x0) {
    pSVar2 = System_String__Replace_3af9030
                       (value,(System_String_o *)"Emoji",
                        (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    return pSVar2;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aedd2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Emotes/");
    il2cpp_runtime_helper_023445d0(&"_0");
    il2cpp_runtime_helper_023445d0(&"Icon");
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Profile/");
    g_data_057aedd2 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    return (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (g_data_057aedd7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Emoji");
    g_data_057aedd7 = '\x01';
  }
  pSVar4 = (System_String_c *)0x0;
  pSVar5 = pSVar2;
  bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (pSVar2 == (System_String_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      pSVar5->klass = pSVar4;
      il2cpp_runtime_helper_022b4080();
      pSVar5->monitor = extraout_RDX;
      il2cpp_runtime_helper_022b4080(&pSVar5->monitor,extraout_RDX);
      pSVar5->fields = in_RCX;
      pSVar2 = (System_String_o *)il2cpp_runtime_helper_022b4080(&pSVar5->fields,in_RCX);
      return pSVar2;
    }
    method_00 = "Emoji";
    bVar1 = System_String__StartsWith_3af5570(pSVar2,(System_String_o *)"Emoji",4,(MethodInfo *)0x0);
    if ((char)bVar1 != '\0') {
      bVar1 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__IsAnimated(pSVar2,method_00);
      pSVar5 = "UI/Icons/Emotes/";
      if ((char)bVar1 == '\0') {
        puVar3 = *(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      else {
        puVar3 = &"_0";
      }
      goto label_045177e8;
    }
  }
  puVar3 = &"Icon";
  pSVar5 = "UI/Icons/Profile/";
label_045177e8:
  pSVar2 = System_String__Concat_3af7150(pSVar5,pSVar2,(System_String_o *)*puVar3,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.Game.AottgEmoteCatalog$$IsAnimated
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgEmoteCatalog__IsAnimated (System_String_o* value, const MethodInfo* method);
// 0x45178c0

bool_conflict Gisketch_Aottg2UI_Game_AottgEmoteCatalog__IsAnimated(System_String_o *value,MethodInfo *method)

{
  int32_t *piVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  SimpleJSONFixed_JSONNode_c *pSVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  char cVar9;
  bool_conflict bVar10;
  System_String_array *pSVar11;
  UnityEngine_Object_o *x;
  System_String_o *pSVar12;
  SimpleJSONFixed_JSONNode_o *a;
  SimpleJSONFixed_JSONNode_o *a_00;
  System_Collections_Generic_List_object__o *__this;
  long *plVar13;
  undefined8 *puVar14;
  VirtualInvokeData *pVVar15;
  Il2CppObject *item;
  System_Object_array *pSVar16;
  bool_conflict extraout_EDX;
  ulong uVar17;
  int iVar18;
  long lVar19;
  long lVar20;
  undefined1 auVar21 [12];
  long lStack_50;
  
  if (g_data_057aedd4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"Data/Info/EmoteInfo");
    il2cpp_runtime_helper_023445d0(&"AnimatedEmojis");
    g_data_057aedd4 = '\x01';
  }
  pSVar11 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,0);
  __this = "AnimatedEmojis";
  pSVar12 = "Data/Info/EmoteInfo";
  pSVar11 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__ReadList
                      ("Data/Info/EmoteInfo",(System_String_o *)"AnimatedEmojis",pSVar11,(MethodInfo *)&"AnimatedEmojis");
  if (pSVar11 != (System_String_array *)0x0) {
    uVar17 = 0;
    while( true ) {
      uVar6 = (uint)pSVar11->max_length;
      if ((long)(int)uVar6 <= (long)uVar17) {
        return 0;
      }
      if (uVar6 <= uVar17) break;
      pSVar12 = pSVar11->m_Items[uVar17];
      __this = (System_Collections_Generic_List_object__o *)value;
      bVar10 = System_String__op_Equality(pSVar12,value,(MethodInfo *)0x0);
      uVar17 = uVar17 + 1;
      if ((char)bVar10 != '\0') {
        return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar10 >> 8),1);
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aedd6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextAsset_Load_TextAsset);
    g_data_057aedd6 = '\x01';
  }
  x = (UnityEngine_Object_o *)UnityEngine_Resources__Load_object_(pSVar12,MethodInfo_TextAsset_Load_TextAsset);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar10 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    return extraout_EDX;
  }
  a = (SimpleJSONFixed_JSONNode_o *)0x0;
  if (x != (UnityEngine_Object_o *)0x0) {
    pSVar12 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
    a = SimpleJSONFixed_JSON__Parse(pSVar12,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    a_00 = (SimpleJSONFixed_JSONNode_o *)0x0;
    bVar10 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04517e25;
      a_00 = (SimpleJSONFixed_JSONNode_o *)
             (*(a->klass->vtable)._7_get_Item.methodPtr)(a,__this,(a->klass->vtable)._7_get_Item.method);
    }
    __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor(__this,MethodInfo_List_1_System_String);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar10 = SimpleJSONFixed_JSONNode__op_Inequality(a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') goto label_04517dd8;
    if ((a_00 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
       (plVar13 = (long *)(*(a_00->klass->vtable)._27_get_Children.methodPtr)
                                    (a_00,(a_00->klass->vtable)._27_get_Children.method),
       plVar13 != (long *)0x0)) {
      lVar20 = *plVar13;
      if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
        lVar19 = 0;
        do {
          if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar19) == TypeInfo_IEnumerable_JSONNode) {
            puVar14 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar19) * 0x10 + lVar20 + 0x138);
            goto label_04517bc1;
          }
          lVar19 = lVar19 + 0x10;
        } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar19);
      }
      puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar13,TypeInfo_IEnumerable_JSONNode,0);
label_04517bc1:
      a = (SimpleJSONFixed_JSONNode_o *)(*(code *)*puVar14)(plVar13,puVar14[1]);
      if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04517e2a;
      lStack_50 = 0;
label_04517c1a:
      pSVar7 = a->klass;
      uVar2._0_1_ = (pSVar7->_2).rank;
      uVar2._1_1_ = (pSVar7->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar8 = (pSVar7->_1).interfaceOffsets;
        lVar20 = 0;
        do {
          if (*(long *)((long)&pIVar8->interfaceType + lVar20) == TypeInfo_IEnumerator) {
            pVVar15 = &(pSVar7->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar20);
            goto label_04517c73;
          }
          lVar20 = lVar20 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar20);
      }
      pVVar15 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(a,TypeInfo_IEnumerator,0);
label_04517c73:
      cVar9 = (*pVVar15->methodPtr)(a,pVVar15->method);
      if (cVar9 == '\0') {
        iVar18 = 5;
        goto label_04517d5a;
      }
      pSVar7 = a->klass;
      uVar3._0_1_ = (pSVar7->_2).rank;
      uVar3._1_1_ = (pSVar7->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar8 = (pSVar7->_1).interfaceOffsets;
        lVar20 = 0;
        do {
          if (*(long *)((long)&pIVar8->interfaceType + lVar20) == TypeInfo_IEnumerator_JSONNode) {
            pVVar15 = &(pSVar7->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar20);
            goto label_04517ce3;
          }
          lVar20 = lVar20 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar20);
      }
      pVVar15 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(a,TypeInfo_IEnumerator_JSONNode,0);
label_04517ce3:
      plVar13 = (long *)(*pVVar15->methodPtr)(a,pVVar15->method);
      if (plVar13 != (long *)0x0) {
        item = (Il2CppObject *)(**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
        lVar20 = MethodInfo_Void_Add;
        if (__this == (System_Collections_Generic_List_object__o *)0x0) goto label_04517e1b;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar16 = (__this->fields)._items;
        if (pSVar16 == (System_Object_array *)0x0) goto label_04517e20;
        uVar6 = (__this->fields)._size;
        if (uVar6 < (uint)pSVar16->max_length) {
          (__this->fields)._size = uVar6 + 1;
          pSVar16->m_Items[(int)uVar6] = item;
          il2cpp_runtime_helper_022b4080(pSVar16->m_Items + (int)uVar6,item);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this,item,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
        }
        goto label_04517c1a;
      }
      il2cpp_runtime_helper_022b2c90();
label_04517e1b:
      il2cpp_runtime_helper_022b2c90();
label_04517e20:
      il2cpp_runtime_helper_022b2c90();
    }
  }
label_04517e25:
  do {
    il2cpp_runtime_helper_022b2c90();
label_04517e2a:
    il2cpp_runtime_helper_022b2c90();
    do {
      auVar21 = il2cpp_runtime_helper_022fefe0();
      iVar18 = 0;
      if (auVar21._8_4_ != 1) {
        if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04517f06;
        pSVar7 = a->klass;
        uVar5._0_1_ = (pSVar7->_2).rank;
        uVar5._1_1_ = (pSVar7->_2).minimumAlignment;
        if ((ulong)uVar5 == 0) goto label_04517edf;
        pIVar8 = (pSVar7->_1).interfaceOffsets;
        lVar20 = 0;
        goto label_04517ed0;
      }
      plVar13 = (long *)__cxa_begin_catch();
      lStack_50 = *plVar13;
      __cxa_end_catch();
label_04517d5a:
      if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
        pSVar7 = a->klass;
        uVar4._0_1_ = (pSVar7->_2).rank;
        uVar4._1_1_ = (pSVar7->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar8 = (pSVar7->_1).interfaceOffsets;
          lVar20 = 0;
          do {
            if (*(long *)((long)&pIVar8->interfaceType + lVar20) == TypeInfo_IDisposable) {
              pVVar15 = &(pSVar7->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar20);
              goto label_04517dbd;
            }
            lVar20 = lVar20 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar20);
        }
        pVVar15 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(a,TypeInfo_IDisposable,0);
label_04517dbd:
        (*pVVar15->methodPtr)(a,pVVar15->method);
      }
    } while (lStack_50 != 0);
    if ((iVar18 != 5) && (iVar18 != 0)) {
      return extraout_EDX;
    }
label_04517dd8:
    if (__this != (System_Collections_Generic_List_object__o *)0x0) {
      if ((__this->fields)._size < 1) {
        return extraout_EDX;
      }
      pSVar16 = System_Collections_Generic_List_object___ToArray(__this,MethodInfo_String_ToArray);
      return (bool_conflict)pSVar16;
    }
  } while( true );
  while (lVar20 = lVar20 + 0x10, (ulong)uVar5 << 4 != lVar20) {
label_04517ed0:
    if (*(long *)((long)&pIVar8->interfaceType + lVar20) == TypeInfo_IDisposable) {
      pVVar15 = &(pSVar7->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar20);
      goto label_04517efd;
    }
  }
label_04517edf:
  pVVar15 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(a,TypeInfo_IDisposable,0);
label_04517efd:
  (*pVVar15->methodPtr)(a,pVVar15->method);
label_04517f06:
  _Unwind_Resume(auVar21._0_8_);
}


// Gisketch.Aottg2UI.Game.AottgEmoteCatalog$$AllStickers
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgEmoteCatalog__AllStickers (const MethodInfo* method);
// 0x4517300

System_String_array * Gisketch_Aottg2UI_Game_AottgEmoteCatalog__AllStickers(MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_object__o *value;
  System_Object_array *pSVar3;
  bool_conflict bVar4;
  System_String_array *pSVar5;
  System_Collections_Generic_List_object__o *__this;
  ulong uVar6;
  undefined8 *puVar7;
  System_Object_array *in_RCX;
  void *extraout_RDX;
  ulong uVar8;
  long lVar9;
  System_Collections_Generic_List_object__c *pSVar10;
  MethodInfo *method_00;
  System_Collections_Generic_List_object__o *pSVar11;
  System_Collections_Generic_List_object__o *pSVar12;
  System_String_o *pSVar13;
  
  if (g_data_057aedd5 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"Data/Info/ProfileIconInfo");
    il2cpp_runtime_helper_023445d0(&"Data/Info/EmoteInfo");
    il2cpp_runtime_helper_023445d0(&"EmojiSmile");
    il2cpp_runtime_helper_023445d0(&"EmojiThumbsUp");
    il2cpp_runtime_helper_023445d0(&"EmojiCool");
    il2cpp_runtime_helper_023445d0(&"Icons");
    il2cpp_runtime_helper_023445d0(&"EmojiLove");
    il2cpp_runtime_helper_023445d0(&"AllEmojis");
    g_data_057aedd5 = '\x01';
  }
  pSVar11 = TypeInfo_string;
  pSVar5 = (System_String_array *)il2cpp_runtime_helper_022b2a40();
  if (pSVar5 == (System_String_array *)0x0) {
label_0451766c:
    il2cpp_runtime_helper_022b2c90();
    pSVar12 = pSVar11;
  }
  else {
    pSVar12 = pSVar11;
    if ((int)pSVar5->max_length != 0) {
      pSVar12 = (System_Collections_Generic_List_object__o *)pSVar5->m_Items;
      pSVar5->m_Items[0] = "EmojiSmile";
      il2cpp_runtime_helper_022b4080();
      if (1 < (uint)pSVar5->max_length) {
        pSVar12 = (System_Collections_Generic_List_object__o *)(pSVar5->m_Items + 1);
        pSVar5->m_Items[1] = "EmojiThumbsUp";
        il2cpp_runtime_helper_022b4080();
        if (2 < (uint)pSVar5->max_length) {
          pSVar12 = (System_Collections_Generic_List_object__o *)(pSVar5->m_Items + 2);
          pSVar5->m_Items[2] = "EmojiCool";
          il2cpp_runtime_helper_022b4080();
          if (3 < (uint)pSVar5->max_length) {
            pSVar5->m_Items[3] = "EmojiLove";
            il2cpp_runtime_helper_022b4080(pSVar5->m_Items + 3);
            pSVar5 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__ReadList
                               ("Data/Info/EmoteInfo","AllEmojis",pSVar5,(MethodInfo *)in_RCX);
            __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
            System_Collections_Generic_List_object____ctor_362ba10
                      (__this,(System_Collections_Generic_IEnumerable_T__o *)pSVar5,MethodInfo_List_1_System_String);
            pSVar5 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,0);
            in_RCX = (System_Object_array *)&"Icons";
            pSVar12 = "Data/Info/ProfileIconInfo";
            pSVar5 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__ReadList
                               ((System_String_o *)"Data/Info/ProfileIconInfo","Icons",pSVar5,
                                (MethodInfo *)&"Icons");
            pSVar11 = pSVar12;
            if (pSVar5 == (System_String_array *)0x0) goto label_0451766c;
            uVar6 = pSVar5->max_length;
            if (__this == (System_Collections_Generic_List_object__o *)0x0) {
              if (0 < (int)uVar6) {
                lVar9 = 0;
                do {
                  if ((uint)uVar6 <= (uint)lVar9) goto label_04517671;
                  pSVar12 = (System_Collections_Generic_List_object__o *)pSVar5->m_Items[lVar9];
                  if (g_data_057aedd7 == '\0') {
                    il2cpp_runtime_helper_023445d0(&"Emoji");
                    g_data_057aedd7 = '\x01';
                  }
                  pSVar11 = pSVar12;
                  bVar4 = System_String__IsNullOrEmpty((System_String_o *)pSVar12,(MethodInfo *)0x0);
                  if (((char)bVar4 != '\0') || (pSVar12 == (System_Collections_Generic_List_object__o *)0x0))
                  goto label_0451766c;
                  in_RCX = (System_Object_array *)0x0;
                  bVar4 = System_String__StartsWith_3af5570
                                    ((System_String_o *)pSVar12,(System_String_o *)"Emoji",4,
                                     (MethodInfo *)0x0);
                  pSVar11 = pSVar12;
                  if ((char)bVar4 == '\0') goto label_0451766c;
                  uVar2 = (uint)pSVar5->max_length;
                  uVar6 = (ulong)uVar2;
                  lVar9 = lVar9 + 1;
                } while ((int)lVar9 < (int)uVar2);
              }
            }
            else if (0 < (int)uVar6) {
              uVar8 = 0;
              if ((uVar6 & 0xffffffff) != 0) {
                do {
                  value = (System_Collections_Generic_List_object__o *)pSVar5->m_Items[uVar8];
                  if (g_data_057aedd7 == '\0') {
                    il2cpp_runtime_helper_023445d0(&"Emoji");
                    g_data_057aedd7 = '\x01';
                  }
                  pSVar12 = value;
                  bVar4 = System_String__IsNullOrEmpty((System_String_o *)value,(MethodInfo *)0x0);
                  if ((char)bVar4 == '\0') {
                    pSVar11 = pSVar12;
                    if (value == (System_Collections_Generic_List_object__o *)0x0) goto label_0451766c;
                    pSVar12 = value;
                    bVar4 = System_String__StartsWith_3af5570
                                      ((System_String_o *)value,(System_String_o *)"Emoji",4,
                                       (MethodInfo *)0x0);
                    if ((char)bVar4 == '\0') goto label_04517594;
                  }
                  else {
label_04517594:
                    in_RCX = MethodInfo_Void_Add;
                    piVar1 = &(__this->fields)._version;
                    *piVar1 = *piVar1 + 1;
                    pSVar3 = (__this->fields)._items;
                    pSVar11 = pSVar12;
                    if (pSVar3 == (System_Object_array *)0x0) goto label_0451766c;
                    uVar2 = (__this->fields)._size;
                    if (uVar2 < (uint)pSVar3->max_length) {
                      (__this->fields)._size = uVar2 + 1;
                      pSVar12 = (System_Collections_Generic_List_object__o *)(pSVar3->m_Items + (int)uVar2);
                      pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)value;
                      il2cpp_runtime_helper_022b4080();
                    }
                    else {
                      pSVar12 = __this;
                      System_Collections_Generic_List_object___AddWithResize
                                (__this,(Il2CppObject *)value,
                                 ((in_RCX->m_Items[0][0xc].klass)->_1).interopData);
                    }
                  }
                  uVar8 = uVar8 + 1;
                  uVar2 = (uint)pSVar5->max_length;
                  in_RCX = (System_Object_array *)(long)(int)uVar2;
                  if ((long)in_RCX <= (long)uVar8) goto label_04517647;
                } while (uVar8 < uVar2);
              }
              goto label_04517671;
            }
label_04517647:
            pSVar11 = pSVar12;
            if (__this != (System_Collections_Generic_List_object__o *)0x0) {
              pSVar5 = (System_String_array *)
                       System_Collections_Generic_List_object___ToArray(__this,MethodInfo_String_ToArray);
              return pSVar5;
            }
            goto label_0451766c;
          }
        }
      }
    }
  }
label_04517671:
  il2cpp_runtime_helper_022b2ca0();
  if (g_data_057aedd3 == '\0') {
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"Emoji");
    g_data_057aedd3 = '\x01';
  }
  pSVar11 = pSVar12;
  bVar4 = System_String__IsNullOrEmpty((System_String_o *)pSVar12,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return "None";
  }
  if (pSVar12 != (System_Collections_Generic_List_object__o *)0x0) {
    pSVar5 = (System_String_array *)
             System_String__Replace_3af9030
                       ((System_String_o *)pSVar12,(System_String_o *)"Emoji",
                        (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8),(MethodInfo *)0x0);
    return pSVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aedd2 == '\0') {
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Emotes/");
    il2cpp_runtime_helper_023445d0(&"_0");
    il2cpp_runtime_helper_023445d0(&"Icon");
    il2cpp_runtime_helper_023445d0(&"UI/Icons/Profile/");
    g_data_057aedd2 = '\x01';
  }
  bVar4 = System_String__IsNullOrEmpty((System_String_o *)pSVar11,(MethodInfo *)0x0);
  if ((char)bVar4 != '\0') {
    return (System_String_array *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
  }
  if (g_data_057aedd7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Emoji");
    g_data_057aedd7 = '\x01';
  }
  pSVar10 = (System_Collections_Generic_List_object__c *)0x0;
  pSVar12 = pSVar11;
  bVar4 = System_String__IsNullOrEmpty((System_String_o *)pSVar11,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    if (pSVar11 == (System_Collections_Generic_List_object__o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      pSVar12->klass = pSVar10;
      il2cpp_runtime_helper_022b4080();
      pSVar12->monitor = extraout_RDX;
      il2cpp_runtime_helper_022b4080(&pSVar12->monitor,extraout_RDX);
      (pSVar12->fields)._items = in_RCX;
      pSVar5 = (System_String_array *)il2cpp_runtime_helper_022b4080(&pSVar12->fields,in_RCX);
      return pSVar5;
    }
    method_00 = "Emoji";
    bVar4 = System_String__StartsWith_3af5570
                      ((System_String_o *)pSVar11,(System_String_o *)"Emoji",4,(MethodInfo *)0x0);
    if ((char)bVar4 != '\0') {
      bVar4 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__IsAnimated((System_String_o *)pSVar11,method_00);
      pSVar13 = "UI/Icons/Emotes/";
      if ((char)bVar4 == '\0') {
        puVar7 = *(undefined8 **)(g_data_057b9c00 + 0xb8);
      }
      else {
        puVar7 = &"_0";
      }
      goto label_045177e8;
    }
  }
  puVar7 = &"Icon";
  pSVar13 = "UI/Icons/Profile/";
label_045177e8:
  pSVar5 = (System_String_array *)
           System_String__Concat_3af7150
                     (pSVar13,(System_String_o *)pSVar11,(System_String_o *)*puVar7,(MethodInfo *)0x0);
  return pSVar5;
}


// Gisketch.Aottg2UI.Game.AottgEmoteCatalog$$ReadList
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgEmoteCatalog__ReadList (System_String_o* path, System_String_o* key, System_String_array* fallback, const MethodInfo* method);
// 0x4517990

System_String_array *
Gisketch_Aottg2UI_Game_AottgEmoteCatalog__ReadList
          (System_String_o *path,System_String_o *key,System_String_array *fallback,MethodInfo *method)

{
  int32_t *piVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  SimpleJSONFixed_JSONNode_c *pSVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  System_Object_array *pSVar9;
  char cVar10;
  bool_conflict bVar11;
  UnityEngine_Object_o *x;
  System_String_o *aJSON;
  SimpleJSONFixed_JSONNode_o *a;
  SimpleJSONFixed_JSONNode_o *a_00;
  long *plVar12;
  undefined8 *puVar13;
  VirtualInvokeData *pVVar14;
  Il2CppObject *item;
  System_String_array *pSVar15;
  int iVar16;
  long lVar17;
  long lVar18;
  undefined1 auVar19 [12];
  long local_38;
  
  if (g_data_057aedd6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextAsset_Load_TextAsset);
    g_data_057aedd6 = '\x01';
  }
  x = (UnityEngine_Object_o *)UnityEngine_Resources__Load_object_(path,MethodInfo_TextAsset_Load_TextAsset);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar11 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar11 != '\0') {
    return fallback;
  }
  a = (SimpleJSONFixed_JSONNode_o *)0x0;
  if (x != (UnityEngine_Object_o *)0x0) {
    aJSON = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
    a = SimpleJSONFixed_JSON__Parse(aJSON,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    a_00 = (SimpleJSONFixed_JSONNode_o *)0x0;
    bVar11 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 != '\0') {
      if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04517e25;
      a_00 = (SimpleJSONFixed_JSONNode_o *)
             (*(a->klass->vtable)._7_get_Item.methodPtr)(a,key,(a->klass->vtable)._7_get_Item.method);
    }
    key = (System_String_o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor
              ((System_Collections_Generic_List_object__o *)key,MethodInfo_List_1_System_String);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar11 = SimpleJSONFixed_JSONNode__op_Inequality(a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar11 == '\0') goto label_04517dd8;
    if ((a_00 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
       (plVar12 = (long *)(*(a_00->klass->vtable)._27_get_Children.methodPtr)
                                    (a_00,(a_00->klass->vtable)._27_get_Children.method),
       plVar12 != (long *)0x0)) {
      lVar18 = *plVar12;
      if ((ulong)*(ushort *)(lVar18 + 0x12e) != 0) {
        lVar17 = 0;
        do {
          if (*(long *)(*(long *)(lVar18 + 0xb0) + lVar17) == TypeInfo_IEnumerable_JSONNode) {
            puVar13 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar18 + 0xb0) + 8 + lVar17) * 0x10 + lVar18 + 0x138);
            goto label_04517bc1;
          }
          lVar17 = lVar17 + 0x10;
        } while ((ulong)*(ushort *)(lVar18 + 0x12e) << 4 != lVar17);
      }
      puVar13 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar12,TypeInfo_IEnumerable_JSONNode,0);
label_04517bc1:
      a = (SimpleJSONFixed_JSONNode_o *)(*(code *)*puVar13)(plVar12,puVar13[1]);
      if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04517e2a;
      local_38 = 0;
label_04517c1a:
      pSVar7 = a->klass;
      uVar2._0_1_ = (pSVar7->_2).rank;
      uVar2._1_1_ = (pSVar7->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar8 = (pSVar7->_1).interfaceOffsets;
        lVar18 = 0;
        do {
          if (*(long *)((long)&pIVar8->interfaceType + lVar18) == TypeInfo_IEnumerator) {
            pVVar14 = &(pSVar7->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar18);
            goto label_04517c73;
          }
          lVar18 = lVar18 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar18);
      }
      pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(a,TypeInfo_IEnumerator,0);
label_04517c73:
      cVar10 = (*pVVar14->methodPtr)(a,pVVar14->method);
      if (cVar10 == '\0') {
        iVar16 = 5;
        goto label_04517d5a;
      }
      pSVar7 = a->klass;
      uVar3._0_1_ = (pSVar7->_2).rank;
      uVar3._1_1_ = (pSVar7->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar8 = (pSVar7->_1).interfaceOffsets;
        lVar18 = 0;
        do {
          if (*(long *)((long)&pIVar8->interfaceType + lVar18) == TypeInfo_IEnumerator_JSONNode) {
            pVVar14 = &(pSVar7->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar18);
            goto label_04517ce3;
          }
          lVar18 = lVar18 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar18);
      }
      pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(a,TypeInfo_IEnumerator_JSONNode,0);
label_04517ce3:
      plVar12 = (long *)(*pVVar14->methodPtr)(a,pVVar14->method);
      if (plVar12 != (long *)0x0) {
        item = (Il2CppObject *)(**(code **)(*plVar12 + 0x1c8))(plVar12,*(undefined8 *)(*plVar12 + 0x1d0));
        lVar18 = MethodInfo_Void_Add;
        if ((System_Collections_Generic_List_object__o *)key ==
            (System_Collections_Generic_List_object__o *)0x0) goto label_04517e1b;
        piVar1 = &(((System_Collections_Generic_List_object__o *)key)->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar9 = (((System_Collections_Generic_List_object__o *)key)->fields)._items;
        if (pSVar9 == (System_Object_array *)0x0) goto label_04517e20;
        uVar6 = (((System_Collections_Generic_List_object__o *)key)->fields)._size;
        if (uVar6 < (uint)pSVar9->max_length) {
          (((System_Collections_Generic_List_object__o *)key)->fields)._size = uVar6 + 1;
          pSVar9->m_Items[(int)uVar6] = item;
          il2cpp_runtime_helper_022b4080(pSVar9->m_Items + (int)uVar6,item);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    ((System_Collections_Generic_List_object__o *)key,item,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar18 + 0x20) + 0xc0) + 0x70));
        }
        goto label_04517c1a;
      }
      il2cpp_runtime_helper_022b2c90();
label_04517e1b:
      il2cpp_runtime_helper_022b2c90();
label_04517e20:
      il2cpp_runtime_helper_022b2c90();
    }
  }
label_04517e25:
  do {
    il2cpp_runtime_helper_022b2c90();
label_04517e2a:
    il2cpp_runtime_helper_022b2c90();
    do {
      auVar19 = il2cpp_runtime_helper_022fefe0();
      iVar16 = 0;
      if (auVar19._8_4_ != 1) {
        if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04517f06;
        pSVar7 = a->klass;
        uVar5._0_1_ = (pSVar7->_2).rank;
        uVar5._1_1_ = (pSVar7->_2).minimumAlignment;
        if ((ulong)uVar5 == 0) goto label_04517edf;
        pIVar8 = (pSVar7->_1).interfaceOffsets;
        lVar18 = 0;
        goto label_04517ed0;
      }
      plVar12 = (long *)__cxa_begin_catch();
      local_38 = *plVar12;
      __cxa_end_catch();
label_04517d5a:
      if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
        pSVar7 = a->klass;
        uVar4._0_1_ = (pSVar7->_2).rank;
        uVar4._1_1_ = (pSVar7->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar8 = (pSVar7->_1).interfaceOffsets;
          lVar18 = 0;
          do {
            if (*(long *)((long)&pIVar8->interfaceType + lVar18) == TypeInfo_IDisposable) {
              pVVar14 = &(pSVar7->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar18);
              goto label_04517dbd;
            }
            lVar18 = lVar18 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar18);
        }
        pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(a,TypeInfo_IDisposable,0);
label_04517dbd:
        (*pVVar14->methodPtr)(a,pVVar14->method);
      }
    } while (local_38 != 0);
    if ((iVar16 != 5) && (iVar16 != 0)) {
      return fallback;
    }
label_04517dd8:
    if ((System_Collections_Generic_List_object__o *)key != (System_Collections_Generic_List_object__o *)0x0)
    {
      if ((((System_Collections_Generic_List_object__o *)key)->fields)._size < 1) {
        return fallback;
      }
      pSVar15 = (System_String_array *)
                System_Collections_Generic_List_object___ToArray
                          ((System_Collections_Generic_List_object__o *)key,MethodInfo_String_ToArray);
      return pSVar15;
    }
  } while( true );
  while (lVar18 = lVar18 + 0x10, (ulong)uVar5 << 4 != lVar18) {
label_04517ed0:
    if (*(long *)((long)&pIVar8->interfaceType + lVar18) == TypeInfo_IDisposable) {
      pVVar14 = &(pSVar7->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar18);
      goto label_04517efd;
    }
  }
label_04517edf:
  pVVar14 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(a,TypeInfo_IDisposable,0);
label_04517efd:
  (*pVVar14->methodPtr)(a,pVVar14->method);
label_04517f06:
  _Unwind_Resume(auVar19._0_8_);
}


// Gisketch.Aottg2UI.Game.AottgEmoteCatalog$$IsEmoji
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgEmoteCatalog__IsEmoji (System_String_o* value, const MethodInfo* method);
// 0x4517860

bool_conflict Gisketch_Aottg2UI_Game_AottgEmoteCatalog__IsEmoji(System_String_o *value,MethodInfo *method)

{
  int32_t *piVar1;
  ushort uVar2;
  ushort uVar3;
  ushort uVar4;
  ushort uVar5;
  uint uVar6;
  SimpleJSONFixed_JSONNode_c *pSVar7;
  Il2CppRuntimeInterfaceOffsetPair *pIVar8;
  char cVar9;
  bool_conflict bVar10;
  System_String_array *pSVar11;
  UnityEngine_Object_o *x;
  System_String_o *pSVar12;
  SimpleJSONFixed_JSONNode_o *a;
  SimpleJSONFixed_JSONNode_o *a_00;
  System_Collections_Generic_List_object__o *__this;
  long *plVar13;
  undefined8 *puVar14;
  VirtualInvokeData *pVVar15;
  Il2CppObject *item;
  System_Object_array *pSVar16;
  bool_conflict extraout_EDX;
  ulong uVar17;
  int iVar18;
  System_Collections_Generic_List_object__o *b;
  long lVar19;
  long lVar20;
  undefined1 auVar21 [12];
  long lStack_58;
  
  if (g_data_057aedd7 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Emoji");
    g_data_057aedd7 = '\x01';
  }
  b = (System_Collections_Generic_List_object__o *)value;
  bVar10 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    return 0;
  }
  if (value != (System_String_o *)0x0) {
    bVar10 = System_String__StartsWith_3af5570(value,"Emoji",4,(MethodInfo *)0x0);
    return bVar10;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aedd4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"Data/Info/EmoteInfo");
    il2cpp_runtime_helper_023445d0(&"AnimatedEmojis");
    g_data_057aedd4 = '\x01';
  }
  pSVar11 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,0);
  __this = "AnimatedEmojis";
  pSVar12 = "Data/Info/EmoteInfo";
  pSVar11 = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__ReadList
                      ("Data/Info/EmoteInfo",(System_String_o *)"AnimatedEmojis",pSVar11,(MethodInfo *)&"AnimatedEmojis");
  if (pSVar11 != (System_String_array *)0x0) {
    uVar17 = 0;
    while( true ) {
      uVar6 = (uint)pSVar11->max_length;
      if ((long)(int)uVar6 <= (long)uVar17) {
        return 0;
      }
      if (uVar6 <= uVar17) break;
      pSVar12 = pSVar11->m_Items[uVar17];
      __this = b;
      bVar10 = System_String__op_Equality(pSVar12,(System_String_o *)b,(MethodInfo *)0x0);
      uVar17 = uVar17 + 1;
      if ((char)bVar10 != '\0') {
        return (bool_conflict)CONCAT71((uint7)(uint3)((uint)bVar10 >> 8),1);
      }
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aedd6 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_IDisposable);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerable_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator_JSONNode);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IEnumerator);
    il2cpp_runtime_helper_023445d0(&TypeInfo_JSONNode);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_ToArray);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_System_String);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_string);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextAsset_Load_TextAsset);
    g_data_057aedd6 = '\x01';
  }
  x = (UnityEngine_Object_o *)UnityEngine_Resources__Load_object_(pSVar12,MethodInfo_TextAsset_Load_TextAsset);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar10 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar10 != '\0') {
    return extraout_EDX;
  }
  a = (SimpleJSONFixed_JSONNode_o *)0x0;
  if (x != (UnityEngine_Object_o *)0x0) {
    pSVar12 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
    a = SimpleJSONFixed_JSON__Parse(pSVar12,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    a_00 = (SimpleJSONFixed_JSONNode_o *)0x0;
    bVar10 = SimpleJSONFixed_JSONNode__op_Inequality(a,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 != '\0') {
      if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04517e25;
      a_00 = (SimpleJSONFixed_JSONNode_o *)
             (*(a->klass->vtable)._7_get_Item.methodPtr)(a,__this,(a->klass->vtable)._7_get_Item.method);
    }
    __this = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_string);
    System_Collections_Generic_List_object____ctor(__this,MethodInfo_List_1_System_String);
    if (*(int *)(TypeInfo_JSONNode + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    bVar10 = SimpleJSONFixed_JSONNode__op_Inequality(a_00,(Il2CppObject *)0x0,(MethodInfo *)0x0);
    if ((char)bVar10 == '\0') goto label_04517dd8;
    if ((a_00 != (SimpleJSONFixed_JSONNode_o *)0x0) &&
       (plVar13 = (long *)(*(a_00->klass->vtable)._27_get_Children.methodPtr)
                                    (a_00,(a_00->klass->vtable)._27_get_Children.method),
       plVar13 != (long *)0x0)) {
      lVar20 = *plVar13;
      if ((ulong)*(ushort *)(lVar20 + 0x12e) != 0) {
        lVar19 = 0;
        do {
          if (*(long *)(*(long *)(lVar20 + 0xb0) + lVar19) == TypeInfo_IEnumerable_JSONNode) {
            puVar14 = (undefined8 *)
                      ((long)*(int *)(*(long *)(lVar20 + 0xb0) + 8 + lVar19) * 0x10 + lVar20 + 0x138);
            goto label_04517bc1;
          }
          lVar19 = lVar19 + 0x10;
        } while ((ulong)*(ushort *)(lVar20 + 0x12e) << 4 != lVar19);
      }
      puVar14 = (undefined8 *)il2cpp_runtime_helper_02300d20(plVar13,TypeInfo_IEnumerable_JSONNode,0);
label_04517bc1:
      a = (SimpleJSONFixed_JSONNode_o *)(*(code *)*puVar14)(plVar13,puVar14[1]);
      if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04517e2a;
      lStack_58 = 0;
label_04517c1a:
      pSVar7 = a->klass;
      uVar2._0_1_ = (pSVar7->_2).rank;
      uVar2._1_1_ = (pSVar7->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar8 = (pSVar7->_1).interfaceOffsets;
        lVar20 = 0;
        do {
          if (*(long *)((long)&pIVar8->interfaceType + lVar20) == TypeInfo_IEnumerator) {
            pVVar15 = &(pSVar7->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar20);
            goto label_04517c73;
          }
          lVar20 = lVar20 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar20);
      }
      pVVar15 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(a,TypeInfo_IEnumerator,0);
label_04517c73:
      cVar9 = (*pVVar15->methodPtr)(a,pVVar15->method);
      if (cVar9 == '\0') {
        iVar18 = 5;
        goto label_04517d5a;
      }
      pSVar7 = a->klass;
      uVar3._0_1_ = (pSVar7->_2).rank;
      uVar3._1_1_ = (pSVar7->_2).minimumAlignment;
      if ((ulong)uVar3 != 0) {
        pIVar8 = (pSVar7->_1).interfaceOffsets;
        lVar20 = 0;
        do {
          if (*(long *)((long)&pIVar8->interfaceType + lVar20) == TypeInfo_IEnumerator_JSONNode) {
            pVVar15 = &(pSVar7->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar20);
            goto label_04517ce3;
          }
          lVar20 = lVar20 + 0x10;
        } while ((ulong)uVar3 << 4 != lVar20);
      }
      pVVar15 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(a,TypeInfo_IEnumerator_JSONNode,0);
label_04517ce3:
      plVar13 = (long *)(*pVVar15->methodPtr)(a,pVVar15->method);
      if (plVar13 != (long *)0x0) {
        item = (Il2CppObject *)(**(code **)(*plVar13 + 0x1c8))(plVar13,*(undefined8 *)(*plVar13 + 0x1d0));
        lVar20 = MethodInfo_Void_Add;
        if (__this == (System_Collections_Generic_List_object__o *)0x0) goto label_04517e1b;
        piVar1 = &(__this->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar16 = (__this->fields)._items;
        if (pSVar16 == (System_Object_array *)0x0) goto label_04517e20;
        uVar6 = (__this->fields)._size;
        if (uVar6 < (uint)pSVar16->max_length) {
          (__this->fields)._size = uVar6 + 1;
          pSVar16->m_Items[(int)uVar6] = item;
          il2cpp_runtime_helper_022b4080(pSVar16->m_Items + (int)uVar6,item);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (__this,item,*(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar20 + 0x20) + 0xc0) + 0x70));
        }
        goto label_04517c1a;
      }
      il2cpp_runtime_helper_022b2c90();
label_04517e1b:
      il2cpp_runtime_helper_022b2c90();
label_04517e20:
      il2cpp_runtime_helper_022b2c90();
    }
  }
label_04517e25:
  do {
    il2cpp_runtime_helper_022b2c90();
label_04517e2a:
    il2cpp_runtime_helper_022b2c90();
    do {
      auVar21 = il2cpp_runtime_helper_022fefe0();
      iVar18 = 0;
      if (auVar21._8_4_ != 1) {
        if (a == (SimpleJSONFixed_JSONNode_o *)0x0) goto label_04517f06;
        pSVar7 = a->klass;
        uVar5._0_1_ = (pSVar7->_2).rank;
        uVar5._1_1_ = (pSVar7->_2).minimumAlignment;
        if ((ulong)uVar5 == 0) goto label_04517edf;
        pIVar8 = (pSVar7->_1).interfaceOffsets;
        lVar20 = 0;
        goto label_04517ed0;
      }
      plVar13 = (long *)__cxa_begin_catch();
      lStack_58 = *plVar13;
      __cxa_end_catch();
label_04517d5a:
      if (a != (SimpleJSONFixed_JSONNode_o *)0x0) {
        pSVar7 = a->klass;
        uVar4._0_1_ = (pSVar7->_2).rank;
        uVar4._1_1_ = (pSVar7->_2).minimumAlignment;
        if ((ulong)uVar4 != 0) {
          pIVar8 = (pSVar7->_1).interfaceOffsets;
          lVar20 = 0;
          do {
            if (*(long *)((long)&pIVar8->interfaceType + lVar20) == TypeInfo_IDisposable) {
              pVVar15 = &(pSVar7->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar20);
              goto label_04517dbd;
            }
            lVar20 = lVar20 + 0x10;
          } while ((ulong)uVar4 << 4 != lVar20);
        }
        pVVar15 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(a,TypeInfo_IDisposable,0);
label_04517dbd:
        (*pVVar15->methodPtr)(a,pVVar15->method);
      }
    } while (lStack_58 != 0);
    if ((iVar18 != 5) && (iVar18 != 0)) {
      return extraout_EDX;
    }
label_04517dd8:
    if (__this != (System_Collections_Generic_List_object__o *)0x0) {
      if ((__this->fields)._size < 1) {
        return extraout_EDX;
      }
      pSVar16 = System_Collections_Generic_List_object___ToArray(__this,MethodInfo_String_ToArray);
      return (bool_conflict)pSVar16;
    }
  } while( true );
  while (lVar20 = lVar20 + 0x10, (ulong)uVar5 << 4 != lVar20) {
label_04517ed0:
    if (*(long *)((long)&pIVar8->interfaceType + lVar20) == TypeInfo_IDisposable) {
      pVVar15 = &(pSVar7->vtable)._0_Equals + *(int *)((long)&pIVar8->offset + lVar20);
      goto label_04517efd;
    }
  }
label_04517edf:
  pVVar15 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(a,TypeInfo_IDisposable,0);
label_04517efd:
  (*pVVar15->methodPtr)(a,pVVar15->method);
label_04517f06:
  _Unwind_Resume(auVar21._0_8_);
}


