// Type: Settings.EmoteSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/EmoteSettings.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/EmoteSettings.cs  [CHANGED since prior version]
// --------------------------------

// Settings.EmoteSettings$$get_FileName
// il2cpp: System_String_o* Settings_EmoteSettings__get_FileName (Settings_EmoteSettings_o* __this, const MethodInfo* method);
// 0x3d90a40

System_String_o *
Settings_EmoteSettings__get_FileName(Settings_EmoteSettings_o *__this,MethodInfo *method)

{
  if (DAT_05702728 == '\0') {
    il2cpp_init_method_metadata(&"Emote.json");
    DAT_05702728 = '\x01';
  }
  return "Emote.json";
}


// Settings.EmoteSettings$$Validate
// il2cpp: bool Settings_EmoteSettings__Validate (Settings_EmoteSettings_o* __this, const MethodInfo* method);
// 0x3d90a70

bool_conflict Settings_EmoteSettings__Validate(Settings_EmoteSettings_o *__this,MethodInfo *method)

{
  Settings_ListSetting_StringSetting__o *pSVar1;
  System_Collections_Generic_List_T__o *pSVar2;
  
  if (DAT_05702729 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Int32_get_Count);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_StringSetting__get_Value);
    DAT_05702729 = '\x01';
  }
  pSVar1 = (__this->fields).TextEmotes;
  if ((pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) &&
     (pSVar2 = (pSVar1->fields)._value, pSVar2 != (System_Collections_Generic_List_T__o *)0x0)) {
    if ((pSVar2->fields)._size != 8) {
      return 0;
    }
    pSVar1 = (__this->fields).EmojiEmotes;
    if ((pSVar1 != (Settings_ListSetting_StringSetting__o *)0x0) &&
       (pSVar2 = (pSVar1->fields)._value, pSVar2 != (System_Collections_Generic_List_T__o *)0x0)) {
      return (bool_conflict)CONCAT71((int7)((ulong)pSVar2 >> 8),(pSVar2->fields)._size == 8);
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Settings.EmoteSettings$$.ctor
// il2cpp: void Settings_EmoteSettings___ctor (Settings_EmoteSettings_o* __this, const MethodInfo* method);
// 0x3d90ae0

void Settings_EmoteSettings___ctor(Settings_EmoteSettings_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  long lVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  Settings_StringSetting_o *pSVar6;
  Settings_ListSetting_StringSetting__o *pSVar7;
  
  if (DAT_0570272a == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_ListSetting_1_StringSetting);
    il2cpp_init_method_metadata(&TypeInfo_ListSetting_StringSetting);
    il2cpp_init_method_metadata(&MethodInfo_Void_Add);
    il2cpp_init_method_metadata(&MethodInfo_List_1_Settings_StringSetting);
    il2cpp_init_method_metadata(&TypeInfo_List_StringSetting);
    il2cpp_init_method_metadata(&TypeInfo_StringSetting);
    il2cpp_init_method_metadata(&"EmojiCrying");
    il2cpp_init_method_metadata(&"Titan here");
    il2cpp_init_method_metadata(&"EmojiSmile");
    il2cpp_init_method_metadata(&"Thanks");
    il2cpp_init_method_metadata(&"EmojiThumbsUp");
    il2cpp_init_method_metadata(&"Good game");
    il2cpp_init_method_metadata(&"Welcome");
    il2cpp_init_method_metadata(&"EmojiCool");
    il2cpp_init_method_metadata(&"EmojiShocked");
    il2cpp_init_method_metadata(&"Sorry");
    il2cpp_init_method_metadata(&"Nice hit");
    il2cpp_init_method_metadata(&"Help");
    il2cpp_init_method_metadata(&"Oops");
    il2cpp_init_method_metadata(&"EmojiAngry");
    il2cpp_init_method_metadata(&"EmojiAnnoyed");
    il2cpp_init_method_metadata(&"EmojiLove");
    DAT_0570272a = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_glue(TypeInfo_List_StringSetting);
  System_Collections_Generic_List<object>___ctor(pSVar5,MethodInfo_List_1_Settings_StringSetting);
  pSVar6 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
  Settings_StringSetting___ctor(pSVar6,"Help",0x28,(MethodInfo *)0x0);
  lVar4 = MethodInfo_Void_Add;
  if (pSVar5 != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(pSVar5->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar3 = (pSVar5->fields)._items;
    if (pSVar3 != (System_Object_array *)0x0) {
      uVar2 = (pSVar5->fields)._size;
      if (uVar2 < (uint)pSVar3->max_length) {
        (pSVar5->fields)._size = uVar2 + 1;
        pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
        il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pSVar6);
      }
      else {
        System_Collections_Generic_List<object>__AddWithResize
                  (pSVar5,(Il2CppObject *)pSVar6,
                   *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      pSVar6 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
      Settings_StringSetting___ctor(pSVar6,"Thanks",0x28,(MethodInfo *)0x0);
      lVar4 = MethodInfo_Void_Add;
      piVar1 = &(pSVar5->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (pSVar5->fields)._items;
      if (pSVar3 != (System_Object_array *)0x0) {
        uVar2 = (pSVar5->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (pSVar5->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
          il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pSVar6);
        }
        else {
          System_Collections_Generic_List<object>__AddWithResize
                    (pSVar5,(Il2CppObject *)pSVar6,
                     *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        pSVar6 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
        Settings_StringSetting___ctor(pSVar6,"Sorry",0x28,(MethodInfo *)0x0);
        lVar4 = MethodInfo_Void_Add;
        piVar1 = &(pSVar5->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (pSVar5->fields)._items;
        if (pSVar3 != (System_Object_array *)0x0) {
          uVar2 = (pSVar5->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (pSVar5->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
            il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pSVar6);
          }
          else {
            System_Collections_Generic_List<object>__AddWithResize
                      (pSVar5,(Il2CppObject *)pSVar6,
                       *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          pSVar6 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
          Settings_StringSetting___ctor(pSVar6,"Titan here",0x28,(MethodInfo *)0x0);
          lVar4 = MethodInfo_Void_Add;
          piVar1 = &(pSVar5->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (pSVar5->fields)._items;
          if (pSVar3 != (System_Object_array *)0x0) {
            uVar2 = (pSVar5->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              (pSVar5->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
              il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pSVar6);
            }
            else {
              System_Collections_Generic_List<object>__AddWithResize
                        (pSVar5,(Il2CppObject *)pSVar6,
                         *(MethodInfo_35A7350 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70))
              ;
            }
            pSVar6 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
            Settings_StringSetting___ctor(pSVar6,"Good game",0x28,(MethodInfo *)0x0);
            lVar4 = MethodInfo_Void_Add;
            piVar1 = &(pSVar5->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (pSVar5->fields)._items;
            if (pSVar3 != (System_Object_array *)0x0) {
              uVar2 = (pSVar5->fields)._size;
              if (uVar2 < (uint)pSVar3->max_length) {
                (pSVar5->fields)._size = uVar2 + 1;
                pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
                il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pSVar6);
              }
              else {
                System_Collections_Generic_List<object>__AddWithResize
                          (pSVar5,(Il2CppObject *)pSVar6,
                           *(MethodInfo_35A7350 **)
                            (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
              pSVar6 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
              Settings_StringSetting___ctor(pSVar6,"Nice hit",0x28,(MethodInfo *)0x0);
              lVar4 = MethodInfo_Void_Add;
              piVar1 = &(pSVar5->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar3 = (pSVar5->fields)._items;
              if (pSVar3 != (System_Object_array *)0x0) {
                uVar2 = (pSVar5->fields)._size;
                if (uVar2 < (uint)pSVar3->max_length) {
                  (pSVar5->fields)._size = uVar2 + 1;
                  pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
                  il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pSVar6);
                }
                else {
                  System_Collections_Generic_List<object>__AddWithResize
                            (pSVar5,(Il2CppObject *)pSVar6,
                             *(MethodInfo_35A7350 **)
                              (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                }
                pSVar6 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
                Settings_StringSetting___ctor(pSVar6,"Oops",0x28,(MethodInfo *)0x0);
                lVar4 = MethodInfo_Void_Add;
                piVar1 = &(pSVar5->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar3 = (pSVar5->fields)._items;
                if (pSVar3 != (System_Object_array *)0x0) {
                  uVar2 = (pSVar5->fields)._size;
                  if (uVar2 < (uint)pSVar3->max_length) {
                    (pSVar5->fields)._size = uVar2 + 1;
                    pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
                    il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pSVar6);
                  }
                  else {
                    System_Collections_Generic_List<object>__AddWithResize
                              (pSVar5,(Il2CppObject *)pSVar6,
                               *(MethodInfo_35A7350 **)
                                (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                  }
                  pSVar6 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
                  Settings_StringSetting___ctor(pSVar6,"Welcome",0x28,(MethodInfo *)0x0);
                  lVar4 = MethodInfo_Void_Add;
                  piVar1 = &(pSVar5->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar3 = (pSVar5->fields)._items;
                  if (pSVar3 != (System_Object_array *)0x0) {
                    uVar2 = (pSVar5->fields)._size;
                    if (uVar2 < (uint)pSVar3->max_length) {
                      (pSVar5->fields)._size = uVar2 + 1;
                      pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
                      il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pSVar6);
                    }
                    else {
                      System_Collections_Generic_List<object>__AddWithResize
                                (pSVar5,(Il2CppObject *)pSVar6,
                                 *(MethodInfo_35A7350 **)
                                  (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                    }
                    pSVar7 = (Settings_ListSetting_StringSetting__o *)
                             il2cpp_runtime_glue(TypeInfo_ListSetting_StringSetting);
                    Settings_ListSetting<object>___ctor
                              ((Settings_ListSetting_T__o *)pSVar7,
                               (System_Collections_Generic_List_T__o *)pSVar5,MethodInfo_ListSetting_1_StringSetting);
                    (__this->fields).TextEmotes = pSVar7;
                    il2cpp_runtime_glue(&(__this->fields).TextEmotes,pSVar7);
                    pSVar5 = (System_Collections_Generic_List_object__o *)
                             il2cpp_runtime_glue(TypeInfo_List_StringSetting);
                    System_Collections_Generic_List<object>___ctor(pSVar5,MethodInfo_List_1_Settings_StringSetting);
                    pSVar6 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
                    Settings_StringSetting___ctor(pSVar6,"EmojiSmile",0x28,(MethodInfo *)0x0);
                    lVar4 = MethodInfo_Void_Add;
                    if (pSVar5 != (System_Collections_Generic_List_object__o *)0x0) {
                      piVar1 = &(pSVar5->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      pSVar3 = (pSVar5->fields)._items;
                      if (pSVar3 != (System_Object_array *)0x0) {
                        uVar2 = (pSVar5->fields)._size;
                        if (uVar2 < (uint)pSVar3->max_length) {
                          (pSVar5->fields)._size = uVar2 + 1;
                          pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
                          il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pSVar6);
                        }
                        else {
                          System_Collections_Generic_List<object>__AddWithResize
                                    (pSVar5,(Il2CppObject *)pSVar6,
                                     *(MethodInfo_35A7350 **)
                                      (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                        }
                        pSVar6 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
                        Settings_StringSetting___ctor(pSVar6,"EmojiThumbsUp",0x28,(MethodInfo *)0x0);
                        lVar4 = MethodInfo_Void_Add;
                        piVar1 = &(pSVar5->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pSVar3 = (pSVar5->fields)._items;
                        if (pSVar3 != (System_Object_array *)0x0) {
                          uVar2 = (pSVar5->fields)._size;
                          if (uVar2 < (uint)pSVar3->max_length) {
                            (pSVar5->fields)._size = uVar2 + 1;
                            pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
                            il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pSVar6);
                          }
                          else {
                            System_Collections_Generic_List<object>__AddWithResize
                                      (pSVar5,(Il2CppObject *)pSVar6,
                                       *(MethodInfo_35A7350 **)
                                        (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                          }
                          pSVar6 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
                          Settings_StringSetting___ctor(pSVar6,"EmojiCool",0x28,(MethodInfo *)0x0);
                          lVar4 = MethodInfo_Void_Add;
                          piVar1 = &(pSVar5->fields)._version;
                          *piVar1 = *piVar1 + 1;
                          pSVar3 = (pSVar5->fields)._items;
                          if (pSVar3 != (System_Object_array *)0x0) {
                            uVar2 = (pSVar5->fields)._size;
                            if (uVar2 < (uint)pSVar3->max_length) {
                              (pSVar5->fields)._size = uVar2 + 1;
                              pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
                              il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pSVar6);
                            }
                            else {
                              System_Collections_Generic_List<object>__AddWithResize
                                        (pSVar5,(Il2CppObject *)pSVar6,
                                         *(MethodInfo_35A7350 **)
                                          (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                            }
                            pSVar6 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
                            Settings_StringSetting___ctor
                                      (pSVar6,"EmojiLove",0x28,(MethodInfo *)0x0);
                            lVar4 = MethodInfo_Void_Add;
                            piVar1 = &(pSVar5->fields)._version;
                            *piVar1 = *piVar1 + 1;
                            pSVar3 = (pSVar5->fields)._items;
                            if (pSVar3 != (System_Object_array *)0x0) {
                              uVar2 = (pSVar5->fields)._size;
                              if (uVar2 < (uint)pSVar3->max_length) {
                                (pSVar5->fields)._size = uVar2 + 1;
                                pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
                                il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pSVar6);
                              }
                              else {
                                System_Collections_Generic_List<object>__AddWithResize
                                          (pSVar5,(Il2CppObject *)pSVar6,
                                           *(MethodInfo_35A7350 **)
                                            (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                              }
                              pSVar6 = (Settings_StringSetting_o *)il2cpp_runtime_glue(TypeInfo_StringSetting);
                              Settings_StringSetting___ctor
                                        (pSVar6,"EmojiShocked",0x28,(MethodInfo *)0x0);
                              lVar4 = MethodInfo_Void_Add;
                              piVar1 = &(pSVar5->fields)._version;
                              *piVar1 = *piVar1 + 1;
                              pSVar3 = (pSVar5->fields)._items;
                              if (pSVar3 != (System_Object_array *)0x0) {
                                uVar2 = (pSVar5->fields)._size;
                                if (uVar2 < (uint)pSVar3->max_length) {
                                  (pSVar5->fields)._size = uVar2 + 1;
                                  pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
                                  il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pSVar6);
                                }
                                else {
                                  System_Collections_Generic_List<object>__AddWithResize
                                            (pSVar5,(Il2CppObject *)pSVar6,
                                             *(MethodInfo_35A7350 **)
                                              (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                                }
                                pSVar6 = (Settings_StringSetting_o *)
                                         il2cpp_runtime_glue(TypeInfo_StringSetting);
                                Settings_StringSetting___ctor
                                          (pSVar6,"EmojiCrying",0x28,(MethodInfo *)0x0);
                                lVar4 = MethodInfo_Void_Add;
                                piVar1 = &(pSVar5->fields)._version;
                                *piVar1 = *piVar1 + 1;
                                pSVar3 = (pSVar5->fields)._items;
                                if (pSVar3 != (System_Object_array *)0x0) {
                                  uVar2 = (pSVar5->fields)._size;
                                  if (uVar2 < (uint)pSVar3->max_length) {
                                    (pSVar5->fields)._size = uVar2 + 1;
                                    pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
                                    il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pSVar6);
                                  }
                                  else {
                                    System_Collections_Generic_List<object>__AddWithResize
                                              (pSVar5,(Il2CppObject *)pSVar6,
                                               *(MethodInfo_35A7350 **)
                                                (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                                  }
                                  pSVar6 = (Settings_StringSetting_o *)
                                           il2cpp_runtime_glue(TypeInfo_StringSetting);
                                  Settings_StringSetting___ctor
                                            (pSVar6,"EmojiAnnoyed",0x28,(MethodInfo *)0x0);
                                  lVar4 = MethodInfo_Void_Add;
                                  piVar1 = &(pSVar5->fields)._version;
                                  *piVar1 = *piVar1 + 1;
                                  pSVar3 = (pSVar5->fields)._items;
                                  if (pSVar3 != (System_Object_array *)0x0) {
                                    uVar2 = (pSVar5->fields)._size;
                                    if (uVar2 < (uint)pSVar3->max_length) {
                                      (pSVar5->fields)._size = uVar2 + 1;
                                      pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
                                      il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pSVar6);
                                    }
                                    else {
                                      System_Collections_Generic_List<object>__AddWithResize
                                                (pSVar5,(Il2CppObject *)pSVar6,
                                                 *(MethodInfo_35A7350 **)
                                                  (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70)
                                                );
                                    }
                                    pSVar6 = (Settings_StringSetting_o *)
                                             il2cpp_runtime_glue(TypeInfo_StringSetting);
                                    Settings_StringSetting___ctor
                                              (pSVar6,"EmojiAngry",0x28,(MethodInfo *)0x0);
                                    lVar4 = MethodInfo_Void_Add;
                                    piVar1 = &(pSVar5->fields)._version;
                                    *piVar1 = *piVar1 + 1;
                                    pSVar3 = (pSVar5->fields)._items;
                                    if (pSVar3 != (System_Object_array *)0x0) {
                                      uVar2 = (pSVar5->fields)._size;
                                      if (uVar2 < (uint)pSVar3->max_length) {
                                        (pSVar5->fields)._size = uVar2 + 1;
                                        pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
                                        il2cpp_runtime_glue(pSVar3->m_Items + (int)uVar2,pSVar6);
                                      }
                                      else {
                                        System_Collections_Generic_List<object>__AddWithResize
                                                  (pSVar5,(Il2CppObject *)pSVar6,
                                                   *(MethodInfo_35A7350 **)
                                                    (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) +
                                                    0x70));
                                      }
                                      pSVar7 = (Settings_ListSetting_StringSetting__o *)
                                               il2cpp_runtime_glue(TypeInfo_ListSetting_StringSetting);
                                      Settings_ListSetting<object>___ctor
                                                ((Settings_ListSetting_T__o *)pSVar7,
                                                 (System_Collections_Generic_List_T__o *)pSVar5,
                                                 MethodInfo_ListSetting_1_StringSetting);
                                      (__this->fields).EmojiEmotes = pSVar7;
                                      il2cpp_runtime_glue(&(__this->fields).EmojiEmotes);
                                      Settings_SaveableSettingsContainer___ctor
                                                ((Settings_SaveableSettingsContainer_o *)__this,
                                                 (MethodInfo *)0x0);
                                      return;
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
                    }
                  }
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


