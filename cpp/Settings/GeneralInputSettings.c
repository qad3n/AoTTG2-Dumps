// Type: Settings.GeneralInputSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/GeneralInputSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/GeneralInputSettings.cs
// --------------------------------

// Settings.GeneralInputSettings$$get_FileName
// il2cpp: System_String_o* Settings_GeneralInputSettings__get_FileName (Settings_GeneralInputSettings_o* __this, const MethodInfo* method);
// 0x408d910

System_String_o *
Settings_GeneralInputSettings__get_FileName(Settings_GeneralInputSettings_o *__this,MethodInfo *method)

{
  if (g_data_057ac403 == '\0') {
    il2cpp_runtime_helper_023445d0(&"GeneralInput.json");
    g_data_057ac403 = '\x01';
  }
  return "GeneralInput.json";
}


// Settings.GeneralInputSettings$$.ctor
// il2cpp: void Settings_GeneralInputSettings___ctor (Settings_GeneralInputSettings_o* __this, const MethodInfo* method);
// 0x408d940

void Settings_GeneralInputSettings___ctor(Settings_GeneralInputSettings_o *__this,MethodInfo *method)

{
  code *pcVar1;
  System_String_array *pSVar2;
  Settings_KeybindSetting_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  
  if (g_data_057ac404 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_KeybindSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"S");
    il2cpp_runtime_helper_023445d0(&"Period");
    il2cpp_runtime_helper_023445d0(&"2");
    il2cpp_runtime_helper_023445d0(&"F7");
    il2cpp_runtime_helper_023445d0(&"W");
    il2cpp_runtime_helper_023445d0(&"Tab");
    il2cpp_runtime_helper_023445d0(&"Q");
    il2cpp_runtime_helper_023445d0(&"LeftShift");
    il2cpp_runtime_helper_023445d0(&"V");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"E");
    il2cpp_runtime_helper_023445d0(&"T");
    il2cpp_runtime_helper_023445d0(&"LeftControl+K");
    il2cpp_runtime_helper_023445d0(&"Return");
    il2cpp_runtime_helper_023445d0(&"D");
    il2cpp_runtime_helper_023445d0(&"RightControl+K");
    il2cpp_runtime_helper_023445d0(&"F6");
    il2cpp_runtime_helper_023445d0(&"C");
    il2cpp_runtime_helper_023445d0(&"F5");
    il2cpp_runtime_helper_023445d0(&"Y");
    il2cpp_runtime_helper_023445d0(&"F11");
    il2cpp_runtime_helper_023445d0(&"X");
    il2cpp_runtime_helper_023445d0(&"M");
    il2cpp_runtime_helper_023445d0(&"1");
    il2cpp_runtime_helper_023445d0(&"A");
    il2cpp_runtime_helper_023445d0(&"P");
    g_data_057ac404 = '\x01';
  }
  pSVar2 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
  if (pSVar2 != (System_String_array *)0x0) {
    if ((int)pSVar2->max_length != 0) {
      pSVar2->m_Items[0] = "W";
      il2cpp_runtime_helper_022b4080(pSVar2->m_Items);
      if (1 < (uint)pSVar2->max_length) {
        pSVar2->m_Items[1] = "None";
        il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
        pSVar3 = (Settings_KeybindSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
        Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
        (__this->fields).Forward = pSVar3;
        il2cpp_runtime_helper_022b4080(&(__this->fields).Forward,pSVar3);
        pSVar2 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
        if (pSVar2 == (System_String_array *)0x0) goto label_0408e7d6;
        if ((int)pSVar2->max_length != 0) {
          pSVar2->m_Items[0] = "S";
          il2cpp_runtime_helper_022b4080(pSVar2->m_Items);
          if (1 < (uint)pSVar2->max_length) {
            pSVar2->m_Items[1] = "None";
            il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
            pSVar3 = (Settings_KeybindSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
            Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
            (__this->fields).Back = pSVar3;
            il2cpp_runtime_helper_022b4080(&(__this->fields).Back,pSVar3);
            pSVar2 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
            if (pSVar2 == (System_String_array *)0x0) goto label_0408e7d6;
            if ((int)pSVar2->max_length != 0) {
              pSVar2->m_Items[0] = "A";
              il2cpp_runtime_helper_022b4080(pSVar2->m_Items);
              if (1 < (uint)pSVar2->max_length) {
                pSVar2->m_Items[1] = "None";
                il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
                pSVar3 = (Settings_KeybindSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
                (__this->fields).Left = pSVar3;
                il2cpp_runtime_helper_022b4080(&(__this->fields).Left,pSVar3);
                pSVar2 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                if (pSVar2 == (System_String_array *)0x0) goto label_0408e7d6;
                if ((int)pSVar2->max_length != 0) {
                  pSVar2->m_Items[0] = "D";
                  il2cpp_runtime_helper_022b4080(pSVar2->m_Items);
                  if (1 < (uint)pSVar2->max_length) {
                    pSVar2->m_Items[1] = "None";
                    il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
                    pSVar3 = (Settings_KeybindSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                    Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
                    (__this->fields).Right = pSVar3;
                    il2cpp_runtime_helper_022b4080(&(__this->fields).Right,pSVar3);
                    pSVar2 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                    if (pSVar2 == (System_String_array *)0x0) goto label_0408e7d6;
                    if ((int)pSVar2->max_length != 0) {
                      pSVar2->m_Items[0] = "E";
                      il2cpp_runtime_helper_022b4080(pSVar2->m_Items);
                      if (1 < (uint)pSVar2->max_length) {
                        pSVar2->m_Items[1] = "None";
                        il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
                        pSVar3 = (Settings_KeybindSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                        Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
                        (__this->fields).Up = pSVar3;
                        il2cpp_runtime_helper_022b4080(&(__this->fields).Up,pSVar3);
                        pSVar2 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                        if (pSVar2 == (System_String_array *)0x0) goto label_0408e7d6;
                        if ((int)pSVar2->max_length != 0) {
                          pSVar2->m_Items[0] = "Q";
                          il2cpp_runtime_helper_022b4080(pSVar2->m_Items);
                          if (1 < (uint)pSVar2->max_length) {
                            pSVar2->m_Items[1] = "None";
                            il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
                            pSVar3 = (Settings_KeybindSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                            Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
                            (__this->fields).Down = pSVar3;
                            il2cpp_runtime_helper_022b4080(&(__this->fields).Down,pSVar3);
                            pSVar2 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                            if (pSVar2 == (System_String_array *)0x0) goto label_0408e7d6;
                            if ((int)pSVar2->max_length != 0) {
                              pSVar2->m_Items[0] = "LeftShift";
                              il2cpp_runtime_helper_022b4080(pSVar2->m_Items);
                              if (1 < (uint)pSVar2->max_length) {
                                pSVar2->m_Items[1] = "None";
                                il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
                                pSVar3 = (Settings_KeybindSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
                                (__this->fields).Modifier = pSVar3;
                                il2cpp_runtime_helper_022b4080(&(__this->fields).Modifier,pSVar3);
                                pSVar2 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                if (pSVar2 == (System_String_array *)0x0) goto label_0408e7d6;
                                if ((int)pSVar2->max_length != 0) {
                                  pSVar2->m_Items[0] = "Period";
                                  il2cpp_runtime_helper_022b4080(pSVar2->m_Items);
                                  if (1 < (uint)pSVar2->max_length) {
                                    pSVar2->m_Items[1] = "None";
                                    il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
                                    pSVar3 = (Settings_KeybindSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                    Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
                                    (__this->fields).Autorun = pSVar3;
                                    il2cpp_runtime_helper_022b4080(&(__this->fields).Autorun,pSVar3);
                                    pSVar2 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                    if (pSVar2 == (System_String_array *)0x0) goto label_0408e7d6;
                                    if ((int)pSVar2->max_length != 0) {
                                      pSVar2->m_Items[0] = "P";
                                      il2cpp_runtime_helper_022b4080(pSVar2->m_Items);
                                      if (1 < (uint)pSVar2->max_length) {
                                        pSVar2->m_Items[1] = "None";
                                        il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
                                        pSVar3 = (Settings_KeybindSetting_o *)il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting)
                                        ;
                                        Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
                                        (__this->fields).Pause = pSVar3;
                                        il2cpp_runtime_helper_022b4080(&(__this->fields).Pause,pSVar3);
                                        pSVar2 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                        if (pSVar2 == (System_String_array *)0x0) goto label_0408e7d6;
                                        if ((int)pSVar2->max_length != 0) {
                                          pSVar2->m_Items[0] = "T";
                                          il2cpp_runtime_helper_022b4080(pSVar2->m_Items);
                                          if (1 < (uint)pSVar2->max_length) {
                                            pSVar2->m_Items[1] = "None";
                                            il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
                                            pSVar3 = (Settings_KeybindSetting_o *)
                                                     il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                            Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
                                            (__this->fields).ChangeCharacter = pSVar3;
                                            il2cpp_runtime_helper_022b4080(&(__this->fields).ChangeCharacter,pSVar3);
                                            pSVar2 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                            if (pSVar2 == (System_String_array *)0x0) goto label_0408e7d6;
                                            if ((int)pSVar2->max_length != 0) {
                                              pSVar2->m_Items[0] = "F5";
                                              il2cpp_runtime_helper_022b4080(pSVar2->m_Items);
                                              if (1 < (uint)pSVar2->max_length) {
                                                pSVar2->m_Items[1] = "None";
                                                il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
                                                pSVar3 = (Settings_KeybindSetting_o *)
                                                         il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                Settings_KeybindSetting___ctor
                                                          (pSVar3,pSVar2,(MethodInfo *)0x0);
                                                (__this->fields).RestartGame = pSVar3;
                                                il2cpp_runtime_helper_022b4080(&(__this->fields).RestartGame,pSVar3);
                                                pSVar2 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                if (pSVar2 == (System_String_array *)0x0) goto label_0408e7d6;
                                                if ((int)pSVar2->max_length != 0) {
                                                  pSVar2->m_Items[0] = "Tab";
                                                  il2cpp_runtime_helper_022b4080(pSVar2->m_Items);
                                                  if (1 < (uint)pSVar2->max_length) {
                                                    pSVar2->m_Items[1] = "None";
                                                    il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
                                                    pSVar3 = (Settings_KeybindSetting_o *)
                                                             il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                    Settings_KeybindSetting___ctor
                                                              (pSVar3,pSVar2,(MethodInfo *)0x0);
                                                    (__this->fields).ToggleScoreboard = pSVar3;
                                                    il2cpp_runtime_helper_022b4080(&(__this->fields).ToggleScoreboard,
                                                                       pSVar3);
                                                    pSVar2 = (System_String_array *)
                                                             il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                    if (pSVar2 == (System_String_array *)0x0)
                                                    goto label_0408e7d6;
                                                    if ((int)pSVar2->max_length != 0) {
                                                      pSVar2->m_Items[0] = "M";
                                                      il2cpp_runtime_helper_022b4080(pSVar2->m_Items);
                                                      if (1 < (uint)pSVar2->max_length) {
                                                        pSVar2->m_Items[1] = "None";
                                                        il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
                                                        pSVar3 = (Settings_KeybindSetting_o *)
                                                                 il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                        Settings_KeybindSetting___ctor
                                                                  (pSVar3,pSVar2,(MethodInfo *)0x0);
                                                        (__this->fields).ToggleMap = pSVar3;
                                                        il2cpp_runtime_helper_022b4080(&(__this->fields).ToggleMap,pSVar3)
                                                        ;
                                                        pSVar2 = (System_String_array *)
                                                                 il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                        if (pSVar2 == (System_String_array *)0x0)
                                                        goto label_0408e7d6;
                                                        if ((int)pSVar2->max_length != 0) {
                                                          pSVar2->m_Items[0] = "Return";
                                                          il2cpp_runtime_helper_022b4080(pSVar2->m_Items);
                                                          if (1 < (uint)pSVar2->max_length) {
                                                            pSVar2->m_Items[1] = "None";
                                                            il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
                                                            pSVar3 = (Settings_KeybindSetting_o *)
                                                                     il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                            Settings_KeybindSetting___ctor
                                                                      (pSVar3,pSVar2,(MethodInfo *)0x0);
                                                            (__this->fields).Chat = pSVar3;
                                                            il2cpp_runtime_helper_022b4080(&(__this->fields).Chat,pSVar3);
                                                            pSVar2 = (System_String_array *)
                                                                     il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                            if (pSVar2 == (System_String_array *)0x0)
                                                            goto label_0408e7d6;
                                                            if ((int)pSVar2->max_length != 0) {
                                                              pSVar2->m_Items[0] = "V";
                                                              il2cpp_runtime_helper_022b4080(pSVar2->m_Items);
                                                              if (1 < (uint)pSVar2->max_length) {
                                                                pSVar2->m_Items[1] = "None";
                                                                il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
                                                                pSVar3 = (Settings_KeybindSetting_o *)
                                                                         il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                                Settings_KeybindSetting___ctor
                                                                          (pSVar3,pSVar2,(MethodInfo *)0x0);
                                                                (__this->fields).PushToTalk = pSVar3;
                                                                il2cpp_runtime_helper_022b4080(&(__this->fields).
                                                                                    PushToTalk,pSVar3);
                                                                pSVar2 = (System_String_array *)
                                                                         il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                                if (pSVar2 == (System_String_array *)0x0)
                                                                goto label_0408e7d6;
                                                                if ((int)pSVar2->max_length != 0) {
                                                                  pSVar2->m_Items[0] = "C";
                                                                  il2cpp_runtime_helper_022b4080(pSVar2->m_Items);
                                                                  if (1 < (uint)pSVar2->max_length) {
                                                                    pSVar2->m_Items[1] = "None";
                                                                    il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
                                                                    pSVar3 = (Settings_KeybindSetting_o *)
                                                                             il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                                    Settings_KeybindSetting___ctor
                                                                              (pSVar3,pSVar2,(MethodInfo *)0x0
                                                                              );
                                                                    (__this->fields).ChangeCamera = pSVar3;
                                                                    il2cpp_runtime_helper_022b4080(&(__this->fields).
                                                                                        ChangeCamera,pSVar3);
                                                                    pSVar2 = (System_String_array *)
                                                                             il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                                    if (pSVar2 == (System_String_array *)0x0)
                                                                    goto label_0408e7d6;
                                                                    if ((int)pSVar2->max_length != 0) {
                                                                      pSVar2->m_Items[0] = "X";
                                                                      il2cpp_runtime_helper_022b4080(pSVar2->m_Items);
                                                                      if (1 < (uint)pSVar2->max_length) {
                                                                        pSVar2->m_Items[1] = "None";
                                                                        il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1
                                                                                          );
                                                                        pSVar3 = (Settings_KeybindSetting_o *)
                                                                                 il2cpp_runtime_helper_023052d0(
                                                       TypeInfo_KeybindSetting);
                                                       Settings_KeybindSetting___ctor
                                                                 (pSVar3,pSVar2,(MethodInfo *)0x0);
                                                       (__this->fields).HideCursor = pSVar3;
                                                       il2cpp_runtime_helper_022b4080(&(__this->fields).HideCursor,pSVar3)
                                                       ;
                                                       pSVar2 = (System_String_array *)
                                                                il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_0408e7d6;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "F7";
                                                         il2cpp_runtime_helper_022b4080(pSVar2->m_Items);
                                                         if (1 < (uint)pSVar2->max_length) {
                                                           pSVar2->m_Items[1] = "None";
                                                           il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
                                                           pSVar3 = (Settings_KeybindSetting_o *)
                                                                    il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                           Settings_KeybindSetting___ctor
                                                                     (pSVar3,pSVar2,(MethodInfo *)0x0);
                                                           (__this->fields).HideChat = pSVar3;
                                                           il2cpp_runtime_helper_022b4080(&(__this->fields).HideChat,
                                                                              pSVar3);
                                                           pSVar2 = (System_String_array *)
                                                                    il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                           if (pSVar2 == (System_String_array *)0x0)
                                                           goto label_0408e7d6;
                                                           if ((int)pSVar2->max_length != 0) {
                                                             pSVar2->m_Items[0] = "1";
                                                             il2cpp_runtime_helper_022b4080(pSVar2->m_Items);
                                                             if (1 < (uint)pSVar2->max_length) {
                                                               pSVar2->m_Items[1] = "None";
                                                               il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
                                                               pSVar3 = (Settings_KeybindSetting_o *)
                                                                        il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                               Settings_KeybindSetting___ctor
                                                                         (pSVar3,pSVar2,(MethodInfo *)0x0);
                                                               (__this->fields).SpectatePreviousPlayer =
                                                                    pSVar3;
                                                               il2cpp_runtime_helper_022b4080(&(__this->fields).
                                                                                   SpectatePreviousPlayer,
                                                                                  pSVar3);
                                                               pSVar2 = (System_String_array *)
                                                                        il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                               if (pSVar2 == (System_String_array *)0x0)
                                                               goto label_0408e7d6;
                                                               if ((int)pSVar2->max_length != 0) {
                                                                 pSVar2->m_Items[0] = "2";
                                                                 il2cpp_runtime_helper_022b4080(pSVar2->m_Items);
                                                                 if (1 < (uint)pSVar2->max_length) {
                                                                   pSVar2->m_Items[1] = "None";
                                                                   il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
                                                                   pSVar3 = (Settings_KeybindSetting_o *)
                                                                            il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                                   Settings_KeybindSetting___ctor
                                                                             (pSVar3,pSVar2,(MethodInfo *)0x0)
                                                                   ;
                                                                   (__this->fields).SpectateNextPlayer =
                                                                        pSVar3;
                                                                   il2cpp_runtime_helper_022b4080(&(__this->fields).
                                                                                       SpectateNextPlayer,
                                                                                      pSVar3);
                                                                   pSVar2 = (System_String_array *)
                                                                            il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                                   if (pSVar2 == (System_String_array *)0x0)
                                                                   goto label_0408e7d6;
                                                                   if ((int)pSVar2->max_length != 0) {
                                                                     pSVar2->m_Items[0] = "Y";
                                                                     il2cpp_runtime_helper_022b4080(pSVar2->m_Items);
                                                                     if (1 < (uint)pSVar2->max_length) {
                                                                       pSVar2->m_Items[1] = "None";
                                                                       il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1)
                                                                       ;
                                                                       pSVar3 = (Settings_KeybindSetting_o *)
                                                                                il2cpp_runtime_helper_023052d0(
                                                       TypeInfo_KeybindSetting);
                                                       Settings_KeybindSetting___ctor
                                                                 (pSVar3,pSVar2,(MethodInfo *)0x0);
                                                       (__this->fields).SkipCutscene = pSVar3;
                                                       il2cpp_runtime_helper_022b4080(&(__this->fields).SkipCutscene,
                                                                          pSVar3);
                                                       pSVar4 = (Settings_BoolSetting_o *)
                                                                il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
                                                       Settings_BoolSetting___ctor_40f3960
                                                                 (pSVar4,1,(MethodInfo *)0x0);
                                                       (__this->fields).TapScoreboard = pSVar4;
                                                       il2cpp_runtime_helper_022b4080(&(__this->fields).TapScoreboard,
                                                                          pSVar4);
                                                       pSVar4 = (Settings_BoolSetting_o *)
                                                                il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
                                                       Settings_BoolSetting___ctor_40f3960
                                                                 (pSVar4,1,(MethodInfo *)0x0);
                                                       (__this->fields).TapMap = pSVar4;
                                                       il2cpp_runtime_helper_022b4080(&(__this->fields).TapMap,pSVar4);
                                                       pSVar2 = (System_String_array *)
                                                                il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_0408e7d6;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "F6";
                                                         il2cpp_runtime_helper_022b4080(pSVar2->m_Items);
                                                         if (1 < (uint)pSVar2->max_length) {
                                                           pSVar2->m_Items[1] = "None";
                                                           il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
                                                           pSVar3 = (Settings_KeybindSetting_o *)
                                                                    il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                           Settings_KeybindSetting___ctor
                                                                     (pSVar3,pSVar2,(MethodInfo *)0x0);
                                                           (__this->fields).HideUI = pSVar3;
                                                           il2cpp_runtime_helper_022b4080(&(__this->fields).HideUI,pSVar3)
                                                           ;
                                                           pSVar2 = (System_String_array *)
                                                                    il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                           if (pSVar2 == (System_String_array *)0x0)
                                                           goto label_0408e7d6;
                                                           if ((int)pSVar2->max_length != 0) {
                                                             pSVar2->m_Items[0] = "F11";
                                                             il2cpp_runtime_helper_022b4080(pSVar2->m_Items);
                                                             if (1 < (uint)pSVar2->max_length) {
                                                               pSVar2->m_Items[1] = "None";
                                                               il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
                                                               pSVar3 = (Settings_KeybindSetting_o *)
                                                                        il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                               Settings_KeybindSetting___ctor
                                                                         (pSVar3,pSVar2,(MethodInfo *)0x0);
                                                               (__this->fields).DebugWindow = pSVar3;
                                                               il2cpp_runtime_helper_022b4080(&(__this->fields).
                                                                                   DebugWindow,pSVar3);
                                                               pSVar2 = (System_String_array *)
                                                                        il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                               if (pSVar2 == (System_String_array *)0x0)
                                                               goto label_0408e7d6;
                                                               if ((int)pSVar2->max_length != 0) {
                                                                 pSVar2->m_Items[0] = "LeftControl+K";
                                                                 il2cpp_runtime_helper_022b4080(pSVar2->m_Items);
                                                                 if (1 < (uint)pSVar2->max_length) {
                                                                   pSVar2->m_Items[1] = "RightControl+K";
                                                                   il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
                                                                   pSVar3 = (Settings_KeybindSetting_o *)
                                                                            il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                                   Settings_KeybindSetting___ctor
                                                                             (pSVar3,pSVar2,(MethodInfo *)0x0)
                                                                   ;
                                                                   (__this->fields).OpenSearchPalette = pSVar3
                                                                   ;
                                                                   il2cpp_runtime_helper_022b4080(&(__this->fields).
                                                                                       OpenSearchPalette);
                                                                   Settings_SaveableSettingsContainer___ctor
                                                                             ((
                                                       Settings_SaveableSettingsContainer_o *)__this,
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
    il2cpp_runtime_helper_022b2ca0();
  }
label_0408e7d6:
  il2cpp_runtime_helper_022b2c90();
  pcVar1 = (code *)swi(3);
  (*pcVar1)();
  return;
}


