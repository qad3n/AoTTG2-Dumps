// Type: Settings.EmoteSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/EmoteSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/EmoteSettings.cs
// --------------------------------

// Settings.EmoteSettings$$get_FileName
// il2cpp: System_String_o* Settings_EmoteSettings__get_FileName (Settings_EmoteSettings_o* __this, const MethodInfo* method);
// 0x4086810

System_String_o * Settings_EmoteSettings__get_FileName(Settings_EmoteSettings_o *__this,MethodInfo *method)

{
  if (g_data_057ac3dd == '\0') {
    il2cpp_runtime_helper_023445d0(&"Emote.json");
    g_data_057ac3dd = '\x01';
  }
  return "Emote.json";
}


// Settings.EmoteSettings$$Validate
// il2cpp: bool Settings_EmoteSettings__Validate (Settings_EmoteSettings_o* __this, const MethodInfo* method);
// 0x4086840

bool_conflict Settings_EmoteSettings__Validate(Settings_EmoteSettings_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Collections_Generic_List_T__o *pSVar3;
  System_Object_array *pSVar4;
  long lVar5;
  bool_conflict extraout_EAX;
  System_Collections_Generic_List_object__o *pSVar6;
  Settings_StringSetting_o *pSVar7;
  Settings_ListSetting_StringSetting__o *pSVar8;
  Settings_EmoteSettings_o *__this_00;
  
  __this_00 = __this;
  if (g_data_057ac3de == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Int32_get_Count);
    __this_00 = (Settings_EmoteSettings_o *)&MethodInfo_List_1_Settings_StringSetting_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057ac3de = '\x01';
  }
  pSVar8 = (__this->fields).TextEmotes;
  if ((pSVar8 != (Settings_ListSetting_StringSetting__o *)0x0) &&
     (pSVar3 = (pSVar8->fields)._value, pSVar3 != (System_Collections_Generic_List_T__o *)0x0)) {
    if ((pSVar3->fields)._size != 8) {
      return 0;
    }
    pSVar8 = (__this->fields).EmojiEmotes;
    if ((pSVar8 != (Settings_ListSetting_StringSetting__o *)0x0) &&
       (pSVar3 = (pSVar8->fields)._value, pSVar3 != (System_Collections_Generic_List_T__o *)0x0)) {
      return (bool_conflict)CONCAT71((int7)((ulong)pSVar3 >> 8),(pSVar3->fields)._size == 8);
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac3df == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ListSetting_1_StringSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ListSetting_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_StringSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_StringSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&"EmojiCrying");
    il2cpp_runtime_helper_023445d0(&"Titan here");
    il2cpp_runtime_helper_023445d0(&"EmojiSmile");
    il2cpp_runtime_helper_023445d0(&"Thanks");
    il2cpp_runtime_helper_023445d0(&"EmojiThumbsUp");
    il2cpp_runtime_helper_023445d0(&"Good game");
    il2cpp_runtime_helper_023445d0(&"Welcome");
    il2cpp_runtime_helper_023445d0(&"EmojiCool");
    il2cpp_runtime_helper_023445d0(&"EmojiShocked");
    il2cpp_runtime_helper_023445d0(&"Sorry");
    il2cpp_runtime_helper_023445d0(&"Nice hit");
    il2cpp_runtime_helper_023445d0(&"Help");
    il2cpp_runtime_helper_023445d0(&"Oops");
    il2cpp_runtime_helper_023445d0(&"EmojiAngry");
    il2cpp_runtime_helper_023445d0(&"EmojiAnnoyed");
    il2cpp_runtime_helper_023445d0(&"EmojiLove");
    g_data_057ac3df = '\x01';
  }
  pSVar6 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_StringSetting);
  System_Collections_Generic_List_object____ctor(pSVar6,MethodInfo_List_1_Settings_StringSetting);
  pSVar7 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar7,"Help",0x28,(MethodInfo *)0x0);
  lVar5 = MethodInfo_Void_Add;
  if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
    piVar1 = &(pSVar6->fields)._version;
    *piVar1 = *piVar1 + 1;
    pSVar4 = (pSVar6->fields)._items;
    if (pSVar4 != (System_Object_array *)0x0) {
      uVar2 = (pSVar6->fields)._size;
      if (uVar2 < (uint)pSVar4->max_length) {
        (pSVar6->fields)._size = uVar2 + 1;
        pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pSVar7;
        il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,pSVar7);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (pSVar6,(Il2CppObject *)pSVar7,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
      }
      pSVar7 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      Settings_StringSetting___ctor_40f74f0(pSVar7,"Thanks",0x28,(MethodInfo *)0x0);
      lVar5 = MethodInfo_Void_Add;
      piVar1 = &(pSVar6->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar4 = (pSVar6->fields)._items;
      if (pSVar4 != (System_Object_array *)0x0) {
        uVar2 = (pSVar6->fields)._size;
        if (uVar2 < (uint)pSVar4->max_length) {
          (pSVar6->fields)._size = uVar2 + 1;
          pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pSVar7;
          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,pSVar7);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar6,(Il2CppObject *)pSVar7,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
        }
        pSVar7 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
        Settings_StringSetting___ctor_40f74f0(pSVar7,"Sorry",0x28,(MethodInfo *)0x0);
        lVar5 = MethodInfo_Void_Add;
        piVar1 = &(pSVar6->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar4 = (pSVar6->fields)._items;
        if (pSVar4 != (System_Object_array *)0x0) {
          uVar2 = (pSVar6->fields)._size;
          if (uVar2 < (uint)pSVar4->max_length) {
            (pSVar6->fields)._size = uVar2 + 1;
            pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pSVar7;
            il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,pSVar7);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar6,(Il2CppObject *)pSVar7,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
          }
          pSVar7 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
          Settings_StringSetting___ctor_40f74f0(pSVar7,"Titan here",0x28,(MethodInfo *)0x0);
          lVar5 = MethodInfo_Void_Add;
          piVar1 = &(pSVar6->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar4 = (pSVar6->fields)._items;
          if (pSVar4 != (System_Object_array *)0x0) {
            uVar2 = (pSVar6->fields)._size;
            if (uVar2 < (uint)pSVar4->max_length) {
              (pSVar6->fields)._size = uVar2 + 1;
              pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pSVar7;
              il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,pSVar7);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (pSVar6,(Il2CppObject *)pSVar7,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
            }
            pSVar7 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
            Settings_StringSetting___ctor_40f74f0(pSVar7,"Good game",0x28,(MethodInfo *)0x0);
            lVar5 = MethodInfo_Void_Add;
            piVar1 = &(pSVar6->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar4 = (pSVar6->fields)._items;
            if (pSVar4 != (System_Object_array *)0x0) {
              uVar2 = (pSVar6->fields)._size;
              if (uVar2 < (uint)pSVar4->max_length) {
                (pSVar6->fields)._size = uVar2 + 1;
                pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pSVar7;
                il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,pSVar7);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (pSVar6,(Il2CppObject *)pSVar7,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
              }
              pSVar7 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
              Settings_StringSetting___ctor_40f74f0(pSVar7,"Nice hit",0x28,(MethodInfo *)0x0);
              lVar5 = MethodInfo_Void_Add;
              piVar1 = &(pSVar6->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar4 = (pSVar6->fields)._items;
              if (pSVar4 != (System_Object_array *)0x0) {
                uVar2 = (pSVar6->fields)._size;
                if (uVar2 < (uint)pSVar4->max_length) {
                  (pSVar6->fields)._size = uVar2 + 1;
                  pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pSVar7;
                  il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,pSVar7);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (pSVar6,(Il2CppObject *)pSVar7,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                }
                pSVar7 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
                Settings_StringSetting___ctor_40f74f0(pSVar7,"Oops",0x28,(MethodInfo *)0x0);
                lVar5 = MethodInfo_Void_Add;
                piVar1 = &(pSVar6->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar4 = (pSVar6->fields)._items;
                if (pSVar4 != (System_Object_array *)0x0) {
                  uVar2 = (pSVar6->fields)._size;
                  if (uVar2 < (uint)pSVar4->max_length) {
                    (pSVar6->fields)._size = uVar2 + 1;
                    pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pSVar7;
                    il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,pSVar7);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              (pSVar6,(Il2CppObject *)pSVar7,
                               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                  }
                  pSVar7 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
                  Settings_StringSetting___ctor_40f74f0(pSVar7,"Welcome",0x28,(MethodInfo *)0x0);
                  lVar5 = MethodInfo_Void_Add;
                  piVar1 = &(pSVar6->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar4 = (pSVar6->fields)._items;
                  if (pSVar4 != (System_Object_array *)0x0) {
                    uVar2 = (pSVar6->fields)._size;
                    if (uVar2 < (uint)pSVar4->max_length) {
                      (pSVar6->fields)._size = uVar2 + 1;
                      pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pSVar7;
                      il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,pSVar7);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                (pSVar6,(Il2CppObject *)pSVar7,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                    }
                    pSVar8 = (Settings_ListSetting_StringSetting__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
                    Settings_ListSetting_object____ctor
                              ((Settings_ListSetting_T__o *)pSVar8,
                               (System_Collections_Generic_List_T__o *)pSVar6,MethodInfo_ListSetting_1_StringSetting);
                    (__this_00->fields).TextEmotes = pSVar8;
                    il2cpp_runtime_helper_022b4080(&(__this_00->fields).TextEmotes,pSVar8);
                    pSVar6 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_StringSetting);
                    System_Collections_Generic_List_object____ctor(pSVar6,MethodInfo_List_1_Settings_StringSetting);
                    pSVar7 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
                    Settings_StringSetting___ctor_40f74f0(pSVar7,"EmojiSmile",0x28,(MethodInfo *)0x0);
                    lVar5 = MethodInfo_Void_Add;
                    if (pSVar6 != (System_Collections_Generic_List_object__o *)0x0) {
                      piVar1 = &(pSVar6->fields)._version;
                      *piVar1 = *piVar1 + 1;
                      pSVar4 = (pSVar6->fields)._items;
                      if (pSVar4 != (System_Object_array *)0x0) {
                        uVar2 = (pSVar6->fields)._size;
                        if (uVar2 < (uint)pSVar4->max_length) {
                          (pSVar6->fields)._size = uVar2 + 1;
                          pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pSVar7;
                          il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,pSVar7);
                        }
                        else {
                          System_Collections_Generic_List_object___AddWithResize
                                    (pSVar6,(Il2CppObject *)pSVar7,
                                     *(MethodInfo_362C220 **)
                                      (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                        }
                        pSVar7 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
                        Settings_StringSetting___ctor_40f74f0(pSVar7,"EmojiThumbsUp",0x28,(MethodInfo *)0x0);
                        lVar5 = MethodInfo_Void_Add;
                        piVar1 = &(pSVar6->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pSVar4 = (pSVar6->fields)._items;
                        if (pSVar4 != (System_Object_array *)0x0) {
                          uVar2 = (pSVar6->fields)._size;
                          if (uVar2 < (uint)pSVar4->max_length) {
                            (pSVar6->fields)._size = uVar2 + 1;
                            pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pSVar7;
                            il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,pSVar7);
                          }
                          else {
                            System_Collections_Generic_List_object___AddWithResize
                                      (pSVar6,(Il2CppObject *)pSVar7,
                                       *(MethodInfo_362C220 **)
                                        (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                          }
                          pSVar7 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
                          Settings_StringSetting___ctor_40f74f0(pSVar7,"EmojiCool",0x28,(MethodInfo *)0x0);
                          lVar5 = MethodInfo_Void_Add;
                          piVar1 = &(pSVar6->fields)._version;
                          *piVar1 = *piVar1 + 1;
                          pSVar4 = (pSVar6->fields)._items;
                          if (pSVar4 != (System_Object_array *)0x0) {
                            uVar2 = (pSVar6->fields)._size;
                            if (uVar2 < (uint)pSVar4->max_length) {
                              (pSVar6->fields)._size = uVar2 + 1;
                              pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pSVar7;
                              il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,pSVar7);
                            }
                            else {
                              System_Collections_Generic_List_object___AddWithResize
                                        (pSVar6,(Il2CppObject *)pSVar7,
                                         *(MethodInfo_362C220 **)
                                          (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                            }
                            pSVar7 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
                            Settings_StringSetting___ctor_40f74f0(pSVar7,"EmojiLove",0x28,(MethodInfo *)0x0);
                            lVar5 = MethodInfo_Void_Add;
                            piVar1 = &(pSVar6->fields)._version;
                            *piVar1 = *piVar1 + 1;
                            pSVar4 = (pSVar6->fields)._items;
                            if (pSVar4 != (System_Object_array *)0x0) {
                              uVar2 = (pSVar6->fields)._size;
                              if (uVar2 < (uint)pSVar4->max_length) {
                                (pSVar6->fields)._size = uVar2 + 1;
                                pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pSVar7;
                                il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,pSVar7);
                              }
                              else {
                                System_Collections_Generic_List_object___AddWithResize
                                          (pSVar6,(Il2CppObject *)pSVar7,
                                           *(MethodInfo_362C220 **)
                                            (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                              }
                              pSVar7 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
                              Settings_StringSetting___ctor_40f74f0
                                        (pSVar7,"EmojiShocked",0x28,(MethodInfo *)0x0);
                              lVar5 = MethodInfo_Void_Add;
                              piVar1 = &(pSVar6->fields)._version;
                              *piVar1 = *piVar1 + 1;
                              pSVar4 = (pSVar6->fields)._items;
                              if (pSVar4 != (System_Object_array *)0x0) {
                                uVar2 = (pSVar6->fields)._size;
                                if (uVar2 < (uint)pSVar4->max_length) {
                                  (pSVar6->fields)._size = uVar2 + 1;
                                  pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pSVar7;
                                  il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,pSVar7);
                                }
                                else {
                                  System_Collections_Generic_List_object___AddWithResize
                                            (pSVar6,(Il2CppObject *)pSVar7,
                                             *(MethodInfo_362C220 **)
                                              (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                                }
                                pSVar7 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
                                Settings_StringSetting___ctor_40f74f0
                                          (pSVar7,"EmojiCrying",0x28,(MethodInfo *)0x0);
                                lVar5 = MethodInfo_Void_Add;
                                piVar1 = &(pSVar6->fields)._version;
                                *piVar1 = *piVar1 + 1;
                                pSVar4 = (pSVar6->fields)._items;
                                if (pSVar4 != (System_Object_array *)0x0) {
                                  uVar2 = (pSVar6->fields)._size;
                                  if (uVar2 < (uint)pSVar4->max_length) {
                                    (pSVar6->fields)._size = uVar2 + 1;
                                    pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pSVar7;
                                    il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,pSVar7);
                                  }
                                  else {
                                    System_Collections_Generic_List_object___AddWithResize
                                              (pSVar6,(Il2CppObject *)pSVar7,
                                               *(MethodInfo_362C220 **)
                                                (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                                  }
                                  pSVar7 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
                                  Settings_StringSetting___ctor_40f74f0
                                            (pSVar7,"EmojiAnnoyed",0x28,(MethodInfo *)0x0);
                                  lVar5 = MethodInfo_Void_Add;
                                  piVar1 = &(pSVar6->fields)._version;
                                  *piVar1 = *piVar1 + 1;
                                  pSVar4 = (pSVar6->fields)._items;
                                  if (pSVar4 != (System_Object_array *)0x0) {
                                    uVar2 = (pSVar6->fields)._size;
                                    if (uVar2 < (uint)pSVar4->max_length) {
                                      (pSVar6->fields)._size = uVar2 + 1;
                                      pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pSVar7;
                                      il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,pSVar7);
                                    }
                                    else {
                                      System_Collections_Generic_List_object___AddWithResize
                                                (pSVar6,(Il2CppObject *)pSVar7,
                                                 *(MethodInfo_362C220 **)
                                                  (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                                    }
                                    pSVar7 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
                                    Settings_StringSetting___ctor_40f74f0
                                              (pSVar7,"EmojiAngry",0x28,(MethodInfo *)0x0);
                                    lVar5 = MethodInfo_Void_Add;
                                    piVar1 = &(pSVar6->fields)._version;
                                    *piVar1 = *piVar1 + 1;
                                    pSVar4 = (pSVar6->fields)._items;
                                    if (pSVar4 != (System_Object_array *)0x0) {
                                      uVar2 = (pSVar6->fields)._size;
                                      if (uVar2 < (uint)pSVar4->max_length) {
                                        (pSVar6->fields)._size = uVar2 + 1;
                                        pSVar4->m_Items[(int)uVar2] = (Il2CppObject *)pSVar7;
                                        il2cpp_runtime_helper_022b4080(pSVar4->m_Items + (int)uVar2,pSVar7);
                                      }
                                      else {
                                        System_Collections_Generic_List_object___AddWithResize
                                                  (pSVar6,(Il2CppObject *)pSVar7,
                                                   *(MethodInfo_362C220 **)
                                                    (*(long *)(*(long *)(lVar5 + 0x20) + 0xc0) + 0x70));
                                      }
                                      pSVar8 = (Settings_ListSetting_StringSetting__o *)
                                               il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
                                      Settings_ListSetting_object____ctor
                                                ((Settings_ListSetting_T__o *)pSVar8,
                                                 (System_Collections_Generic_List_T__o *)pSVar6,MethodInfo_ListSetting_1_StringSetting);
                                      (__this_00->fields).EmojiEmotes = pSVar8;
                                      il2cpp_runtime_helper_022b4080(&(__this_00->fields).EmojiEmotes);
                                      Settings_SaveableSettingsContainer___ctor
                                                ((Settings_SaveableSettingsContainer_o *)__this_00,
                                                 (MethodInfo *)0x0);
                                      return extraout_EAX;
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac3e0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"General.json");
    g_data_057ac3e0 = '\x01';
  }
  return (bool_conflict)"General.json";
}


// Settings.EmoteSettings$$.ctor
// il2cpp: void Settings_EmoteSettings___ctor (Settings_EmoteSettings_o* __this, const MethodInfo* method);
// 0x40868b0

void Settings_EmoteSettings___ctor(Settings_EmoteSettings_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  System_Object_array *pSVar3;
  long lVar4;
  System_Collections_Generic_List_object__o *pSVar5;
  Settings_StringSetting_o *pSVar6;
  Settings_ListSetting_StringSetting__o *pSVar7;
  
  if (g_data_057ac3df == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_ListSetting_1_StringSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_ListSetting_StringSetting);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_Add);
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_StringSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_StringSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_StringSetting);
    il2cpp_runtime_helper_023445d0(&"EmojiCrying");
    il2cpp_runtime_helper_023445d0(&"Titan here");
    il2cpp_runtime_helper_023445d0(&"EmojiSmile");
    il2cpp_runtime_helper_023445d0(&"Thanks");
    il2cpp_runtime_helper_023445d0(&"EmojiThumbsUp");
    il2cpp_runtime_helper_023445d0(&"Good game");
    il2cpp_runtime_helper_023445d0(&"Welcome");
    il2cpp_runtime_helper_023445d0(&"EmojiCool");
    il2cpp_runtime_helper_023445d0(&"EmojiShocked");
    il2cpp_runtime_helper_023445d0(&"Sorry");
    il2cpp_runtime_helper_023445d0(&"Nice hit");
    il2cpp_runtime_helper_023445d0(&"Help");
    il2cpp_runtime_helper_023445d0(&"Oops");
    il2cpp_runtime_helper_023445d0(&"EmojiAngry");
    il2cpp_runtime_helper_023445d0(&"EmojiAnnoyed");
    il2cpp_runtime_helper_023445d0(&"EmojiLove");
    g_data_057ac3df = '\x01';
  }
  pSVar5 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_StringSetting);
  System_Collections_Generic_List_object____ctor(pSVar5,MethodInfo_List_1_Settings_StringSetting);
  pSVar6 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
  Settings_StringSetting___ctor_40f74f0(pSVar6,"Help",0x28,(MethodInfo *)0x0);
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
        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,pSVar6);
      }
      else {
        System_Collections_Generic_List_object___AddWithResize
                  (pSVar5,(Il2CppObject *)pSVar6,
                   *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
      }
      pSVar6 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
      Settings_StringSetting___ctor_40f74f0(pSVar6,"Thanks",0x28,(MethodInfo *)0x0);
      lVar4 = MethodInfo_Void_Add;
      piVar1 = &(pSVar5->fields)._version;
      *piVar1 = *piVar1 + 1;
      pSVar3 = (pSVar5->fields)._items;
      if (pSVar3 != (System_Object_array *)0x0) {
        uVar2 = (pSVar5->fields)._size;
        if (uVar2 < (uint)pSVar3->max_length) {
          (pSVar5->fields)._size = uVar2 + 1;
          pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,pSVar6);
        }
        else {
          System_Collections_Generic_List_object___AddWithResize
                    (pSVar5,(Il2CppObject *)pSVar6,
                     *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
        }
        pSVar6 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
        Settings_StringSetting___ctor_40f74f0(pSVar6,"Sorry",0x28,(MethodInfo *)0x0);
        lVar4 = MethodInfo_Void_Add;
        piVar1 = &(pSVar5->fields)._version;
        *piVar1 = *piVar1 + 1;
        pSVar3 = (pSVar5->fields)._items;
        if (pSVar3 != (System_Object_array *)0x0) {
          uVar2 = (pSVar5->fields)._size;
          if (uVar2 < (uint)pSVar3->max_length) {
            (pSVar5->fields)._size = uVar2 + 1;
            pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,pSVar6);
          }
          else {
            System_Collections_Generic_List_object___AddWithResize
                      (pSVar5,(Il2CppObject *)pSVar6,
                       *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
          }
          pSVar6 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
          Settings_StringSetting___ctor_40f74f0(pSVar6,"Titan here",0x28,(MethodInfo *)0x0);
          lVar4 = MethodInfo_Void_Add;
          piVar1 = &(pSVar5->fields)._version;
          *piVar1 = *piVar1 + 1;
          pSVar3 = (pSVar5->fields)._items;
          if (pSVar3 != (System_Object_array *)0x0) {
            uVar2 = (pSVar5->fields)._size;
            if (uVar2 < (uint)pSVar3->max_length) {
              (pSVar5->fields)._size = uVar2 + 1;
              pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
              il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,pSVar6);
            }
            else {
              System_Collections_Generic_List_object___AddWithResize
                        (pSVar5,(Il2CppObject *)pSVar6,
                         *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
            }
            pSVar6 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
            Settings_StringSetting___ctor_40f74f0(pSVar6,"Good game",0x28,(MethodInfo *)0x0);
            lVar4 = MethodInfo_Void_Add;
            piVar1 = &(pSVar5->fields)._version;
            *piVar1 = *piVar1 + 1;
            pSVar3 = (pSVar5->fields)._items;
            if (pSVar3 != (System_Object_array *)0x0) {
              uVar2 = (pSVar5->fields)._size;
              if (uVar2 < (uint)pSVar3->max_length) {
                (pSVar5->fields)._size = uVar2 + 1;
                pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
                il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,pSVar6);
              }
              else {
                System_Collections_Generic_List_object___AddWithResize
                          (pSVar5,(Il2CppObject *)pSVar6,
                           *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
              }
              pSVar6 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
              Settings_StringSetting___ctor_40f74f0(pSVar6,"Nice hit",0x28,(MethodInfo *)0x0);
              lVar4 = MethodInfo_Void_Add;
              piVar1 = &(pSVar5->fields)._version;
              *piVar1 = *piVar1 + 1;
              pSVar3 = (pSVar5->fields)._items;
              if (pSVar3 != (System_Object_array *)0x0) {
                uVar2 = (pSVar5->fields)._size;
                if (uVar2 < (uint)pSVar3->max_length) {
                  (pSVar5->fields)._size = uVar2 + 1;
                  pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
                  il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,pSVar6);
                }
                else {
                  System_Collections_Generic_List_object___AddWithResize
                            (pSVar5,(Il2CppObject *)pSVar6,
                             *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                }
                pSVar6 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
                Settings_StringSetting___ctor_40f74f0(pSVar6,"Oops",0x28,(MethodInfo *)0x0);
                lVar4 = MethodInfo_Void_Add;
                piVar1 = &(pSVar5->fields)._version;
                *piVar1 = *piVar1 + 1;
                pSVar3 = (pSVar5->fields)._items;
                if (pSVar3 != (System_Object_array *)0x0) {
                  uVar2 = (pSVar5->fields)._size;
                  if (uVar2 < (uint)pSVar3->max_length) {
                    (pSVar5->fields)._size = uVar2 + 1;
                    pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
                    il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,pSVar6);
                  }
                  else {
                    System_Collections_Generic_List_object___AddWithResize
                              (pSVar5,(Il2CppObject *)pSVar6,
                               *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                  }
                  pSVar6 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
                  Settings_StringSetting___ctor_40f74f0(pSVar6,"Welcome",0x28,(MethodInfo *)0x0);
                  lVar4 = MethodInfo_Void_Add;
                  piVar1 = &(pSVar5->fields)._version;
                  *piVar1 = *piVar1 + 1;
                  pSVar3 = (pSVar5->fields)._items;
                  if (pSVar3 != (System_Object_array *)0x0) {
                    uVar2 = (pSVar5->fields)._size;
                    if (uVar2 < (uint)pSVar3->max_length) {
                      (pSVar5->fields)._size = uVar2 + 1;
                      pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
                      il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,pSVar6);
                    }
                    else {
                      System_Collections_Generic_List_object___AddWithResize
                                (pSVar5,(Il2CppObject *)pSVar6,
                                 *(MethodInfo_362C220 **)(*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                    }
                    pSVar7 = (Settings_ListSetting_StringSetting__o *)il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
                    Settings_ListSetting_object____ctor
                              ((Settings_ListSetting_T__o *)pSVar7,
                               (System_Collections_Generic_List_T__o *)pSVar5,MethodInfo_ListSetting_1_StringSetting);
                    (__this->fields).TextEmotes = pSVar7;
                    il2cpp_runtime_helper_022b4080(&(__this->fields).TextEmotes,pSVar7);
                    pSVar5 = (System_Collections_Generic_List_object__o *)il2cpp_runtime_helper_023052d0(TypeInfo_List_StringSetting);
                    System_Collections_Generic_List_object____ctor(pSVar5,MethodInfo_List_1_Settings_StringSetting);
                    pSVar6 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
                    Settings_StringSetting___ctor_40f74f0(pSVar6,"EmojiSmile",0x28,(MethodInfo *)0x0);
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
                          il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,pSVar6);
                        }
                        else {
                          System_Collections_Generic_List_object___AddWithResize
                                    (pSVar5,(Il2CppObject *)pSVar6,
                                     *(MethodInfo_362C220 **)
                                      (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                        }
                        pSVar6 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
                        Settings_StringSetting___ctor_40f74f0(pSVar6,"EmojiThumbsUp",0x28,(MethodInfo *)0x0);
                        lVar4 = MethodInfo_Void_Add;
                        piVar1 = &(pSVar5->fields)._version;
                        *piVar1 = *piVar1 + 1;
                        pSVar3 = (pSVar5->fields)._items;
                        if (pSVar3 != (System_Object_array *)0x0) {
                          uVar2 = (pSVar5->fields)._size;
                          if (uVar2 < (uint)pSVar3->max_length) {
                            (pSVar5->fields)._size = uVar2 + 1;
                            pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
                            il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,pSVar6);
                          }
                          else {
                            System_Collections_Generic_List_object___AddWithResize
                                      (pSVar5,(Il2CppObject *)pSVar6,
                                       *(MethodInfo_362C220 **)
                                        (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                          }
                          pSVar6 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
                          Settings_StringSetting___ctor_40f74f0(pSVar6,"EmojiCool",0x28,(MethodInfo *)0x0);
                          lVar4 = MethodInfo_Void_Add;
                          piVar1 = &(pSVar5->fields)._version;
                          *piVar1 = *piVar1 + 1;
                          pSVar3 = (pSVar5->fields)._items;
                          if (pSVar3 != (System_Object_array *)0x0) {
                            uVar2 = (pSVar5->fields)._size;
                            if (uVar2 < (uint)pSVar3->max_length) {
                              (pSVar5->fields)._size = uVar2 + 1;
                              pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
                              il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,pSVar6);
                            }
                            else {
                              System_Collections_Generic_List_object___AddWithResize
                                        (pSVar5,(Il2CppObject *)pSVar6,
                                         *(MethodInfo_362C220 **)
                                          (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                            }
                            pSVar6 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
                            Settings_StringSetting___ctor_40f74f0(pSVar6,"EmojiLove",0x28,(MethodInfo *)0x0);
                            lVar4 = MethodInfo_Void_Add;
                            piVar1 = &(pSVar5->fields)._version;
                            *piVar1 = *piVar1 + 1;
                            pSVar3 = (pSVar5->fields)._items;
                            if (pSVar3 != (System_Object_array *)0x0) {
                              uVar2 = (pSVar5->fields)._size;
                              if (uVar2 < (uint)pSVar3->max_length) {
                                (pSVar5->fields)._size = uVar2 + 1;
                                pSVar3->m_Items[(int)uVar2] = (Il2CppObject *)pSVar6;
                                il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,pSVar6);
                              }
                              else {
                                System_Collections_Generic_List_object___AddWithResize
                                          (pSVar5,(Il2CppObject *)pSVar6,
                                           *(MethodInfo_362C220 **)
                                            (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                              }
                              pSVar6 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
                              Settings_StringSetting___ctor_40f74f0
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
                                  il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,pSVar6);
                                }
                                else {
                                  System_Collections_Generic_List_object___AddWithResize
                                            (pSVar5,(Il2CppObject *)pSVar6,
                                             *(MethodInfo_362C220 **)
                                              (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                                }
                                pSVar6 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
                                Settings_StringSetting___ctor_40f74f0
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
                                    il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,pSVar6);
                                  }
                                  else {
                                    System_Collections_Generic_List_object___AddWithResize
                                              (pSVar5,(Il2CppObject *)pSVar6,
                                               *(MethodInfo_362C220 **)
                                                (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                                  }
                                  pSVar6 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
                                  Settings_StringSetting___ctor_40f74f0
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
                                      il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,pSVar6);
                                    }
                                    else {
                                      System_Collections_Generic_List_object___AddWithResize
                                                (pSVar5,(Il2CppObject *)pSVar6,
                                                 *(MethodInfo_362C220 **)
                                                  (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                                    }
                                    pSVar6 = (Settings_StringSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_StringSetting);
                                    Settings_StringSetting___ctor_40f74f0
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
                                        il2cpp_runtime_helper_022b4080(pSVar3->m_Items + (int)uVar2,pSVar6);
                                      }
                                      else {
                                        System_Collections_Generic_List_object___AddWithResize
                                                  (pSVar5,(Il2CppObject *)pSVar6,
                                                   *(MethodInfo_362C220 **)
                                                    (*(long *)(*(long *)(lVar4 + 0x20) + 0xc0) + 0x70));
                                      }
                                      pSVar7 = (Settings_ListSetting_StringSetting__o *)
                                               il2cpp_runtime_helper_023052d0(TypeInfo_ListSetting_StringSetting);
                                      Settings_ListSetting_object____ctor
                                                ((Settings_ListSetting_T__o *)pSVar7,
                                                 (System_Collections_Generic_List_T__o *)pSVar5,MethodInfo_ListSetting_1_StringSetting);
                                      (__this->fields).EmojiEmotes = pSVar7;
                                      il2cpp_runtime_helper_022b4080(&(__this->fields).EmojiEmotes);
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
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ac3e0 == '\0') {
    il2cpp_runtime_helper_023445d0(&"General.json");
    g_data_057ac3e0 = '\x01';
  }
  return;
}


