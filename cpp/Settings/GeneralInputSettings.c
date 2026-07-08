// Type: Settings.GeneralInputSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/GeneralInputSettings.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/Input/GeneralInputSettings.cs  [prior source available (delta unverified)]
// --------------------------------

// Settings.GeneralInputSettings$$get_FileName
// il2cpp: System_String_o* Settings_GeneralInputSettings__get_FileName (Settings_GeneralInputSettings_o* __this, const MethodInfo* method);
// 0x3d97760

System_String_o *
Settings_GeneralInputSettings__get_FileName
          (Settings_GeneralInputSettings_o *__this,MethodInfo *method)

{
  if (DAT_0570274e == '\0') {
    il2cpp_init_method_metadata(&"GeneralInput.json");
    DAT_0570274e = '\x01';
  }
  return "GeneralInput.json";
}


// Settings.GeneralInputSettings$$.ctor
// il2cpp: void Settings_GeneralInputSettings___ctor (Settings_GeneralInputSettings_o* __this, const MethodInfo* method);
// 0x3d97790

void Settings_GeneralInputSettings___ctor
               (Settings_GeneralInputSettings_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  Settings_KeybindSetting_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
  
  if (DAT_0570274f == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_BoolSetting);
    il2cpp_init_method_metadata(&TypeInfo_KeybindSetting);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"S");
    il2cpp_init_method_metadata(&"Period");
    il2cpp_init_method_metadata(&"2");
    il2cpp_init_method_metadata(&"F7");
    il2cpp_init_method_metadata(&"W");
    il2cpp_init_method_metadata(&"Tab");
    il2cpp_init_method_metadata(&"Q");
    il2cpp_init_method_metadata(&"LeftShift");
    il2cpp_init_method_metadata(&"V");
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"E");
    il2cpp_init_method_metadata(&"T");
    il2cpp_init_method_metadata(&"LeftControl+K");
    il2cpp_init_method_metadata(&"Return");
    il2cpp_init_method_metadata(&"D");
    il2cpp_init_method_metadata(&"RightControl+K");
    il2cpp_init_method_metadata(&"F6");
    il2cpp_init_method_metadata(&"C");
    il2cpp_init_method_metadata(&"F5");
    il2cpp_init_method_metadata(&"Y");
    il2cpp_init_method_metadata(&"F11");
    il2cpp_init_method_metadata(&"X");
    il2cpp_init_method_metadata(&"M");
    il2cpp_init_method_metadata(&"1");
    il2cpp_init_method_metadata(&"A");
    il2cpp_init_method_metadata(&"P");
    DAT_0570274f = '\x01';
  }
  pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = "W";
      il2cpp_runtime_glue(pSVar1->m_Items);
      if (1 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[1] = "None";
        il2cpp_runtime_glue(pSVar1->m_Items + 1);
        pSVar2 = (Settings_KeybindSetting_o *)il2cpp_runtime_glue(TypeInfo_KeybindSetting);
        Settings_KeybindSetting___ctor(pSVar2,pSVar1,(MethodInfo *)0x0);
        (__this->fields).Forward = pSVar2;
        il2cpp_runtime_glue(&(__this->fields).Forward,pSVar2);
        pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
        if (pSVar1 == (System_String_array *)0x0) goto LAB_03d98626;
        if ((int)pSVar1->max_length != 0) {
          pSVar1->m_Items[0] = "S";
          il2cpp_runtime_glue(pSVar1->m_Items);
          if (1 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[1] = "None";
            il2cpp_runtime_glue(pSVar1->m_Items + 1);
            pSVar2 = (Settings_KeybindSetting_o *)il2cpp_runtime_glue(TypeInfo_KeybindSetting);
            Settings_KeybindSetting___ctor(pSVar2,pSVar1,(MethodInfo *)0x0);
            (__this->fields).Back = pSVar2;
            il2cpp_runtime_glue(&(__this->fields).Back,pSVar2);
            pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
            if (pSVar1 == (System_String_array *)0x0) goto LAB_03d98626;
            if ((int)pSVar1->max_length != 0) {
              pSVar1->m_Items[0] = "A";
              il2cpp_runtime_glue(pSVar1->m_Items);
              if (1 < (uint)pSVar1->max_length) {
                pSVar1->m_Items[1] = "None";
                il2cpp_runtime_glue(pSVar1->m_Items + 1);
                pSVar2 = (Settings_KeybindSetting_o *)il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                Settings_KeybindSetting___ctor(pSVar2,pSVar1,(MethodInfo *)0x0);
                (__this->fields).Left = pSVar2;
                il2cpp_runtime_glue(&(__this->fields).Left,pSVar2);
                pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
                if (pSVar1 == (System_String_array *)0x0) goto LAB_03d98626;
                if ((int)pSVar1->max_length != 0) {
                  pSVar1->m_Items[0] = "D";
                  il2cpp_runtime_glue(pSVar1->m_Items);
                  if (1 < (uint)pSVar1->max_length) {
                    pSVar1->m_Items[1] = "None";
                    il2cpp_runtime_glue(pSVar1->m_Items + 1);
                    pSVar2 = (Settings_KeybindSetting_o *)il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                    Settings_KeybindSetting___ctor(pSVar2,pSVar1,(MethodInfo *)0x0);
                    (__this->fields).Right = pSVar2;
                    il2cpp_runtime_glue(&(__this->fields).Right,pSVar2);
                    pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
                    if (pSVar1 == (System_String_array *)0x0) goto LAB_03d98626;
                    if ((int)pSVar1->max_length != 0) {
                      pSVar1->m_Items[0] = "E";
                      il2cpp_runtime_glue(pSVar1->m_Items);
                      if (1 < (uint)pSVar1->max_length) {
                        pSVar1->m_Items[1] = "None";
                        il2cpp_runtime_glue(pSVar1->m_Items + 1);
                        pSVar2 = (Settings_KeybindSetting_o *)il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                        Settings_KeybindSetting___ctor(pSVar2,pSVar1,(MethodInfo *)0x0);
                        (__this->fields).Up = pSVar2;
                        il2cpp_runtime_glue(&(__this->fields).Up,pSVar2);
                        pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
                        if (pSVar1 == (System_String_array *)0x0) goto LAB_03d98626;
                        if ((int)pSVar1->max_length != 0) {
                          pSVar1->m_Items[0] = "Q";
                          il2cpp_runtime_glue(pSVar1->m_Items);
                          if (1 < (uint)pSVar1->max_length) {
                            pSVar1->m_Items[1] = "None";
                            il2cpp_runtime_glue(pSVar1->m_Items + 1);
                            pSVar2 = (Settings_KeybindSetting_o *)il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                            Settings_KeybindSetting___ctor(pSVar2,pSVar1,(MethodInfo *)0x0);
                            (__this->fields).Down = pSVar2;
                            il2cpp_runtime_glue(&(__this->fields).Down,pSVar2);
                            pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
                            if (pSVar1 == (System_String_array *)0x0) goto LAB_03d98626;
                            if ((int)pSVar1->max_length != 0) {
                              pSVar1->m_Items[0] = "LeftShift";
                              il2cpp_runtime_glue(pSVar1->m_Items);
                              if (1 < (uint)pSVar1->max_length) {
                                pSVar1->m_Items[1] = "None";
                                il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                pSVar2 = (Settings_KeybindSetting_o *)
                                         il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                Settings_KeybindSetting___ctor(pSVar2,pSVar1,(MethodInfo *)0x0);
                                (__this->fields).Modifier = pSVar2;
                                il2cpp_runtime_glue(&(__this->fields).Modifier,pSVar2);
                                pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
                                if (pSVar1 == (System_String_array *)0x0) goto LAB_03d98626;
                                if ((int)pSVar1->max_length != 0) {
                                  pSVar1->m_Items[0] = "Period";
                                  il2cpp_runtime_glue(pSVar1->m_Items);
                                  if (1 < (uint)pSVar1->max_length) {
                                    pSVar1->m_Items[1] = "None";
                                    il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                    pSVar2 = (Settings_KeybindSetting_o *)
                                             il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                    Settings_KeybindSetting___ctor(pSVar2,pSVar1,(MethodInfo *)0x0);
                                    (__this->fields).Autorun = pSVar2;
                                    il2cpp_runtime_glue(&(__this->fields).Autorun,pSVar2);
                                    pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
                                    if (pSVar1 == (System_String_array *)0x0) goto LAB_03d98626;
                                    if ((int)pSVar1->max_length != 0) {
                                      pSVar1->m_Items[0] = "P";
                                      il2cpp_runtime_glue(pSVar1->m_Items);
                                      if (1 < (uint)pSVar1->max_length) {
                                        pSVar1->m_Items[1] = "None";
                                        il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                        pSVar2 = (Settings_KeybindSetting_o *)
                                                 il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                        Settings_KeybindSetting___ctor
                                                  (pSVar2,pSVar1,(MethodInfo *)0x0);
                                        (__this->fields).Pause = pSVar2;
                                        il2cpp_runtime_glue(&(__this->fields).Pause,pSVar2);
                                        pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2)
                                        ;
                                        if (pSVar1 == (System_String_array *)0x0) goto LAB_03d98626;
                                        if ((int)pSVar1->max_length != 0) {
                                          pSVar1->m_Items[0] = "T";
                                          il2cpp_runtime_glue(pSVar1->m_Items);
                                          if (1 < (uint)pSVar1->max_length) {
                                            pSVar1->m_Items[1] = "None";
                                            il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                            pSVar2 = (Settings_KeybindSetting_o *)
                                                     il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                            Settings_KeybindSetting___ctor
                                                      (pSVar2,pSVar1,(MethodInfo *)0x0);
                                            (__this->fields).ChangeCharacter = pSVar2;
                                            il2cpp_runtime_glue(&(__this->fields).ChangeCharacter,
                                                               pSVar2);
                                            pSVar1 = (System_String_array *)
                                                     il2cpp_glue_02274930(TypeInfo_string,2);
                                            if (pSVar1 == (System_String_array *)0x0)
                                            goto LAB_03d98626;
                                            if ((int)pSVar1->max_length != 0) {
                                              pSVar1->m_Items[0] = "F5";
                                              il2cpp_runtime_glue(pSVar1->m_Items);
                                              if (1 < (uint)pSVar1->max_length) {
                                                pSVar1->m_Items[1] = "None";
                                                il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                pSVar2 = (Settings_KeybindSetting_o *)
                                                         il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                Settings_KeybindSetting___ctor
                                                          (pSVar2,pSVar1,(MethodInfo *)0x0);
                                                (__this->fields).RestartGame = pSVar2;
                                                il2cpp_runtime_glue(&(__this->fields).RestartGame,
                                                                   pSVar2);
                                                pSVar1 = (System_String_array *)
                                                         il2cpp_glue_02274930(TypeInfo_string,2);
                                                if (pSVar1 == (System_String_array *)0x0)
                                                goto LAB_03d98626;
                                                if ((int)pSVar1->max_length != 0) {
                                                  pSVar1->m_Items[0] = "Tab";
                                                  il2cpp_runtime_glue(pSVar1->m_Items);
                                                  if (1 < (uint)pSVar1->max_length) {
                                                    pSVar1->m_Items[1] = "None";
                                                    il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                    pSVar2 = (Settings_KeybindSetting_o *)
                                                             il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                    Settings_KeybindSetting___ctor
                                                              (pSVar2,pSVar1,(MethodInfo *)0x0);
                                                    (__this->fields).ToggleScoreboard = pSVar2;
                                                    il2cpp_runtime_glue(&(__this->fields).
                                                                        ToggleScoreboard,pSVar2);
                                                    pSVar1 = (System_String_array *)
                                                             il2cpp_glue_02274930(TypeInfo_string,2);
                                                    if (pSVar1 == (System_String_array *)0x0)
                                                    goto LAB_03d98626;
                                                    if ((int)pSVar1->max_length != 0) {
                                                      pSVar1->m_Items[0] = "M";
                                                      il2cpp_runtime_glue(pSVar1->m_Items);
                                                      if (1 < (uint)pSVar1->max_length) {
                                                        pSVar1->m_Items[1] = "None";
                                                        il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                        pSVar2 = (Settings_KeybindSetting_o *)
                                                                 il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                        Settings_KeybindSetting___ctor
                                                                  (pSVar2,pSVar1,(MethodInfo *)0x0);
                                                        (__this->fields).ToggleMap = pSVar2;
                                                        il2cpp_runtime_glue(&(__this->fields).
                                                                            ToggleMap,pSVar2);
                                                        pSVar1 = (System_String_array *)
                                                                 il2cpp_glue_02274930(TypeInfo_string,2);
                                                        if (pSVar1 == (System_String_array *)0x0)
                                                        goto LAB_03d98626;
                                                        if ((int)pSVar1->max_length != 0) {
                                                          pSVar1->m_Items[0] = "Return";
                                                          il2cpp_runtime_glue(pSVar1->m_Items);
                                                          if (1 < (uint)pSVar1->max_length) {
                                                            pSVar1->m_Items[1] = "None";
                                                            il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                            pSVar2 = (Settings_KeybindSetting_o *)
                                                                     il2cpp_runtime_glue(TypeInfo_KeybindSetting
                                                                                       );
                                                            Settings_KeybindSetting___ctor
                                                                      (pSVar2,pSVar1,
                                                                       (MethodInfo *)0x0);
                                                            (__this->fields).Chat = pSVar2;
                                                            il2cpp_runtime_glue(&(__this->fields).
                                                                                Chat,pSVar2);
                                                            pSVar1 = (System_String_array *)
                                                                     il2cpp_glue_02274930(TypeInfo_string,2);
                                                            if (pSVar1 == (System_String_array *)0x0
                                                               ) goto LAB_03d98626;
                                                            if ((int)pSVar1->max_length != 0) {
                                                              pSVar1->m_Items[0] = "V";
                                                              il2cpp_runtime_glue(pSVar1->m_Items);
                                                              if (1 < (uint)pSVar1->max_length) {
                                                                pSVar1->m_Items[1] = "None";
                                                                il2cpp_runtime_glue(pSVar1->m_Items +
                                                                                   1);
                                                                pSVar2 = (Settings_KeybindSetting_o
                                                                          *)il2cpp_runtime_glue(
                                                  TypeInfo_KeybindSetting);
                                                  Settings_KeybindSetting___ctor
                                                            (pSVar2,pSVar1,(MethodInfo *)0x0);
                                                  (__this->fields).PushToTalk = pSVar2;
                                                  il2cpp_runtime_glue(&(__this->fields).PushToTalk,
                                                                     pSVar2);
                                                  pSVar1 = (System_String_array *)
                                                           il2cpp_glue_02274930(TypeInfo_string,2);
                                                  if (pSVar1 == (System_String_array *)0x0)
                                                  goto LAB_03d98626;
                                                  if ((int)pSVar1->max_length != 0) {
                                                    pSVar1->m_Items[0] = "C";
                                                    il2cpp_runtime_glue(pSVar1->m_Items);
                                                    if (1 < (uint)pSVar1->max_length) {
                                                      pSVar1->m_Items[1] = "None";
                                                      il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                      pSVar2 = (Settings_KeybindSetting_o *)
                                                               il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                      Settings_KeybindSetting___ctor
                                                                (pSVar2,pSVar1,(MethodInfo *)0x0);
                                                      (__this->fields).ChangeCamera = pSVar2;
                                                      il2cpp_runtime_glue(&(__this->fields).
                                                                          ChangeCamera,pSVar2);
                                                      pSVar1 = (System_String_array *)
                                                               il2cpp_glue_02274930(TypeInfo_string,2);
                                                      if (pSVar1 == (System_String_array *)0x0)
                                                      goto LAB_03d98626;
                                                      if ((int)pSVar1->max_length != 0) {
                                                        pSVar1->m_Items[0] = "X";
                                                        il2cpp_runtime_glue(pSVar1->m_Items);
                                                        if (1 < (uint)pSVar1->max_length) {
                                                          pSVar1->m_Items[1] = "None";
                                                          il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                          pSVar2 = (Settings_KeybindSetting_o *)
                                                                   il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                          Settings_KeybindSetting___ctor
                                                                    (pSVar2,pSVar1,(MethodInfo *)0x0
                                                                    );
                                                          (__this->fields).HideCursor = pSVar2;
                                                          il2cpp_runtime_glue(&(__this->fields).
                                                                              HideCursor,pSVar2);
                                                          pSVar1 = (System_String_array *)
                                                                   il2cpp_glue_02274930(TypeInfo_string,2);
                                                          if (pSVar1 == (System_String_array *)0x0)
                                                          goto LAB_03d98626;
                                                          if ((int)pSVar1->max_length != 0) {
                                                            pSVar1->m_Items[0] = "F7";
                                                            il2cpp_runtime_glue(pSVar1->m_Items);
                                                            if (1 < (uint)pSVar1->max_length) {
                                                              pSVar1->m_Items[1] = "None";
                                                              il2cpp_runtime_glue(pSVar1->m_Items + 1
                                                                                );
                                                              pSVar2 = (Settings_KeybindSetting_o *)
                                                                       il2cpp_runtime_glue(
                                                  TypeInfo_KeybindSetting);
                                                  Settings_KeybindSetting___ctor
                                                            (pSVar2,pSVar1,(MethodInfo *)0x0);
                                                  (__this->fields).HideChat = pSVar2;
                                                  il2cpp_runtime_glue(&(__this->fields).HideChat,
                                                                     pSVar2);
                                                  pSVar1 = (System_String_array *)
                                                           il2cpp_glue_02274930(TypeInfo_string,2);
                                                  if (pSVar1 == (System_String_array *)0x0)
                                                  goto LAB_03d98626;
                                                  if ((int)pSVar1->max_length != 0) {
                                                    pSVar1->m_Items[0] = "1";
                                                    il2cpp_runtime_glue(pSVar1->m_Items);
                                                    if (1 < (uint)pSVar1->max_length) {
                                                      pSVar1->m_Items[1] = "None";
                                                      il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                      pSVar2 = (Settings_KeybindSetting_o *)
                                                               il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                      Settings_KeybindSetting___ctor
                                                                (pSVar2,pSVar1,(MethodInfo *)0x0);
                                                      (__this->fields).SpectatePreviousPlayer =
                                                           pSVar2;
                                                      il2cpp_runtime_glue(&(__this->fields).
                                                                          SpectatePreviousPlayer,
                                                                         pSVar2);
                                                      pSVar1 = (System_String_array *)
                                                               il2cpp_glue_02274930(TypeInfo_string,2);
                                                      if (pSVar1 == (System_String_array *)0x0)
                                                      goto LAB_03d98626;
                                                      if ((int)pSVar1->max_length != 0) {
                                                        pSVar1->m_Items[0] = "2";
                                                        il2cpp_runtime_glue(pSVar1->m_Items);
                                                        if (1 < (uint)pSVar1->max_length) {
                                                          pSVar1->m_Items[1] = "None";
                                                          il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                          pSVar2 = (Settings_KeybindSetting_o *)
                                                                   il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                          Settings_KeybindSetting___ctor
                                                                    (pSVar2,pSVar1,(MethodInfo *)0x0
                                                                    );
                                                          (__this->fields).SpectateNextPlayer =
                                                               pSVar2;
                                                          il2cpp_runtime_glue(&(__this->fields).
                                                                              SpectateNextPlayer,
                                                                             pSVar2);
                                                          pSVar1 = (System_String_array *)
                                                                   il2cpp_glue_02274930(TypeInfo_string,2);
                                                          if (pSVar1 == (System_String_array *)0x0)
                                                          goto LAB_03d98626;
                                                          if ((int)pSVar1->max_length != 0) {
                                                            pSVar1->m_Items[0] = "Y";
                                                            il2cpp_runtime_glue(pSVar1->m_Items);
                                                            if (1 < (uint)pSVar1->max_length) {
                                                              pSVar1->m_Items[1] = "None";
                                                              il2cpp_runtime_glue(pSVar1->m_Items + 1
                                                                                );
                                                              pSVar2 = (Settings_KeybindSetting_o *)
                                                                       il2cpp_runtime_glue(
                                                  TypeInfo_KeybindSetting);
                                                  Settings_KeybindSetting___ctor
                                                            (pSVar2,pSVar1,(MethodInfo *)0x0);
                                                  (__this->fields).SkipCutscene = pSVar2;
                                                  il2cpp_runtime_glue(&(__this->fields).SkipCutscene,
                                                                     pSVar2);
                                                  pSVar3 = (Settings_BoolSetting_o *)
                                                           il2cpp_runtime_glue(TypeInfo_BoolSetting);
                                                  Settings_BoolSetting___ctor
                                                            (pSVar3,1,(MethodInfo *)0x0);
                                                  (__this->fields).TapScoreboard = pSVar3;
                                                  il2cpp_runtime_glue(&(__this->fields).TapScoreboard
                                                                     ,pSVar3);
                                                  pSVar3 = (Settings_BoolSetting_o *)
                                                           il2cpp_runtime_glue(TypeInfo_BoolSetting);
                                                  Settings_BoolSetting___ctor
                                                            (pSVar3,1,(MethodInfo *)0x0);
                                                  (__this->fields).TapMap = pSVar3;
                                                  il2cpp_runtime_glue(&(__this->fields).TapMap,pSVar3
                                                                    );
                                                  pSVar1 = (System_String_array *)
                                                           il2cpp_glue_02274930(TypeInfo_string,2);
                                                  if (pSVar1 == (System_String_array *)0x0)
                                                  goto LAB_03d98626;
                                                  if ((int)pSVar1->max_length != 0) {
                                                    pSVar1->m_Items[0] = "F6";
                                                    il2cpp_runtime_glue(pSVar1->m_Items);
                                                    if (1 < (uint)pSVar1->max_length) {
                                                      pSVar1->m_Items[1] = "None";
                                                      il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                      pSVar2 = (Settings_KeybindSetting_o *)
                                                               il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                      Settings_KeybindSetting___ctor
                                                                (pSVar2,pSVar1,(MethodInfo *)0x0);
                                                      (__this->fields).HideUI = pSVar2;
                                                      il2cpp_runtime_glue(&(__this->fields).HideUI,
                                                                         pSVar2);
                                                      pSVar1 = (System_String_array *)
                                                               il2cpp_glue_02274930(TypeInfo_string,2);
                                                      if (pSVar1 == (System_String_array *)0x0)
                                                      goto LAB_03d98626;
                                                      if ((int)pSVar1->max_length != 0) {
                                                        pSVar1->m_Items[0] = "F11";
                                                        il2cpp_runtime_glue(pSVar1->m_Items);
                                                        if (1 < (uint)pSVar1->max_length) {
                                                          pSVar1->m_Items[1] = "None";
                                                          il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                          pSVar2 = (Settings_KeybindSetting_o *)
                                                                   il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                          Settings_KeybindSetting___ctor
                                                                    (pSVar2,pSVar1,(MethodInfo *)0x0
                                                                    );
                                                          (__this->fields).DebugWindow = pSVar2;
                                                          il2cpp_runtime_glue(&(__this->fields).
                                                                              DebugWindow,pSVar2);
                                                          pSVar1 = (System_String_array *)
                                                                   il2cpp_glue_02274930(TypeInfo_string,2);
                                                          if (pSVar1 == (System_String_array *)0x0)
                                                          goto LAB_03d98626;
                                                          if ((int)pSVar1->max_length != 0) {
                                                            pSVar1->m_Items[0] = "LeftControl+K";
                                                            il2cpp_runtime_glue(pSVar1->m_Items);
                                                            if (1 < (uint)pSVar1->max_length) {
                                                              pSVar1->m_Items[1] = "RightControl+K";
                                                              il2cpp_runtime_glue(pSVar1->m_Items + 1
                                                                                );
                                                              pSVar2 = (Settings_KeybindSetting_o *)
                                                                       il2cpp_runtime_glue(
                                                  TypeInfo_KeybindSetting);
                                                  Settings_KeybindSetting___ctor
                                                            (pSVar2,pSVar1,(MethodInfo *)0x0);
                                                  (__this->fields).OpenSearchPalette = pSVar2;
                                                  il2cpp_runtime_glue(&(__this->fields).
                                                                      OpenSearchPalette);
                                                  Settings_SaveableSettingsContainer___ctor
                                                            ((Settings_SaveableSettingsContainer_o *
                                                             )__this,(MethodInfo *)0x0);
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
LAB_03d98626:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


