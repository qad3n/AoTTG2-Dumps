// Type: Settings.GeneralInputSettings
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Settings/GeneralInputSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/GeneralInputSettings.cs
// --------------------------------

// Settings.GeneralInputSettings$$get_FileName
// il2cpp: System_String_o* Settings_GeneralInputSettings__get_FileName (Settings_GeneralInputSettings_o* __this, const MethodInfo* method);
// 0x181f13810

System_String_o *
Settings_GeneralInputSettings__get_FileName(Settings_GeneralInputSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_18434545e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"GeneralInput.json");
    Il2CppMethodInitialized_18434545e = '\x01';
  }
  return "GeneralInput.json";
}


// Settings.GeneralInputSettings$$.ctor
// il2cpp: void Settings_GeneralInputSettings___ctor (Settings_GeneralInputSettings_o* __this, const MethodInfo* method);
// 0x181f12670

void Settings_GeneralInputSettings___ctor(Settings_GeneralInputSettings_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array *pSVar2;
  Settings_KeybindSetting_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  
  if (Il2CppMethodInitialized_18434545f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"WheelUp");
    il2cpp_codegen_initialize_runtime_metadata(&"S");
    il2cpp_codegen_initialize_runtime_metadata(&"Period");
    il2cpp_codegen_initialize_runtime_metadata(&"2");
    il2cpp_codegen_initialize_runtime_metadata(&"F7");
    il2cpp_codegen_initialize_runtime_metadata(&"W");
    il2cpp_codegen_initialize_runtime_metadata(&"Tab");
    il2cpp_codegen_initialize_runtime_metadata(&"Q");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftShift");
    il2cpp_codegen_initialize_runtime_metadata(&"V");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"E");
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse1");
    il2cpp_codegen_initialize_runtime_metadata(&"T");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftControl+K");
    il2cpp_codegen_initialize_runtime_metadata(&"Return");
    il2cpp_codegen_initialize_runtime_metadata(&"D");
    il2cpp_codegen_initialize_runtime_metadata(&"RightControl+K");
    il2cpp_codegen_initialize_runtime_metadata(&"F6");
    il2cpp_codegen_initialize_runtime_metadata(&"WheelDown");
    il2cpp_codegen_initialize_runtime_metadata(&"C");
    il2cpp_codegen_initialize_runtime_metadata(&"F5");
    il2cpp_codegen_initialize_runtime_metadata(&"RightControl+F");
    il2cpp_codegen_initialize_runtime_metadata(&"Y");
    il2cpp_codegen_initialize_runtime_metadata(&"F11");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftControl+F");
    il2cpp_codegen_initialize_runtime_metadata(&"X");
    il2cpp_codegen_initialize_runtime_metadata(&"M");
    il2cpp_codegen_initialize_runtime_metadata(&"1");
    il2cpp_codegen_initialize_runtime_metadata(&"A");
    il2cpp_codegen_initialize_runtime_metadata(&"P");
    Il2CppMethodInitialized_18434545f = '\x01';
  }
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
  pSVar1 = "W";
  if (pSVar2 != (System_String_array *)0x0) {
    if ((int)pSVar2->max_length != 0) {
      pSVar2->m_Items[0] = "W";
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
      pSVar1 = "None";
      if (1 < (uint)pSVar2->max_length) {
        pSVar2->m_Items[1] = "None";
        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
        pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
        Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
        (__this->fields).Forward = pSVar3;
        Il2CppCodeGenWriteBarrier(&(__this->fields).Forward,pSVar3);
        pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
        pSVar1 = "S";
        if (pSVar2 == (System_String_array *)0x0) goto label_181f13801;
        if ((int)pSVar2->max_length != 0) {
          pSVar2->m_Items[0] = "S";
          Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
          pSVar1 = "None";
          if (1 < (uint)pSVar2->max_length) {
            pSVar2->m_Items[1] = "None";
            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
            pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
            Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
            (__this->fields).Back = pSVar3;
            Il2CppCodeGenWriteBarrier(&(__this->fields).Back,pSVar3);
            pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
            pSVar1 = "A";
            if (pSVar2 == (System_String_array *)0x0) goto label_181f13801;
            if ((int)pSVar2->max_length != 0) {
              pSVar2->m_Items[0] = "A";
              Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
              pSVar1 = "None";
              if (1 < (uint)pSVar2->max_length) {
                pSVar2->m_Items[1] = "None";
                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
                (__this->fields).Left = pSVar3;
                Il2CppCodeGenWriteBarrier(&(__this->fields).Left,pSVar3);
                pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                pSVar1 = "D";
                if (pSVar2 == (System_String_array *)0x0) goto label_181f13801;
                if ((int)pSVar2->max_length != 0) {
                  pSVar2->m_Items[0] = "D";
                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                  pSVar1 = "None";
                  if (1 < (uint)pSVar2->max_length) {
                    pSVar2->m_Items[1] = "None";
                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                    Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
                    (__this->fields).Right = pSVar3;
                    Il2CppCodeGenWriteBarrier(&(__this->fields).Right,pSVar3);
                    pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                    pSVar1 = "E";
                    if (pSVar2 == (System_String_array *)0x0) goto label_181f13801;
                    if ((int)pSVar2->max_length != 0) {
                      pSVar2->m_Items[0] = "E";
                      Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                      pSVar1 = "None";
                      if (1 < (uint)pSVar2->max_length) {
                        pSVar2->m_Items[1] = "None";
                        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                        pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                        Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
                        (__this->fields).Up = pSVar3;
                        Il2CppCodeGenWriteBarrier(&(__this->fields).Up,pSVar3);
                        pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                        pSVar1 = "Q";
                        if (pSVar2 == (System_String_array *)0x0) goto label_181f13801;
                        if ((int)pSVar2->max_length != 0) {
                          pSVar2->m_Items[0] = "Q";
                          Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                          pSVar1 = "None";
                          if (1 < (uint)pSVar2->max_length) {
                            pSVar2->m_Items[1] = "None";
                            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                            pSVar3 = il2cpp_codegen_object_new
                                               ((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                            Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
                            (__this->fields).Down = pSVar3;
                            Il2CppCodeGenWriteBarrier(&(__this->fields).Down,pSVar3);
                            pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                            pSVar1 = "LeftShift";
                            if (pSVar2 == (System_String_array *)0x0) goto label_181f13801;
                            if ((int)pSVar2->max_length != 0) {
                              pSVar2->m_Items[0] = "LeftShift";
                              Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                              pSVar1 = "None";
                              if (1 < (uint)pSVar2->max_length) {
                                pSVar2->m_Items[1] = "None";
                                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                                pSVar3 = il2cpp_codegen_object_new
                                                   ((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                                Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
                                (__this->fields).Modifier = pSVar3;
                                Il2CppCodeGenWriteBarrier(&(__this->fields).Modifier,pSVar3);
                                pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                pSVar1 = "Period";
                                if (pSVar2 == (System_String_array *)0x0) goto label_181f13801;
                                if ((int)pSVar2->max_length != 0) {
                                  pSVar2->m_Items[0] = "Period";
                                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                  pSVar1 = "None";
                                  if (1 < (uint)pSVar2->max_length) {
                                    pSVar2->m_Items[1] = "None";
                                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                                    pSVar3 = il2cpp_codegen_object_new
                                                       ((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                                    Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
                                    (__this->fields).Autorun = pSVar3;
                                    Il2CppCodeGenWriteBarrier(&(__this->fields).Autorun,pSVar3);
                                    pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                    pSVar1 = "P";
                                    if (pSVar2 == (System_String_array *)0x0) goto label_181f13801;
                                    if ((int)pSVar2->max_length != 0) {
                                      pSVar2->m_Items[0] = "P";
                                      Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                      pSVar1 = "None";
                                      if (1 < (uint)pSVar2->max_length) {
                                        pSVar2->m_Items[1] = "None";
                                        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                                        pSVar3 = il2cpp_codegen_object_new
                                                           ((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                                        Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
                                        (__this->fields).Pause = pSVar3;
                                        Il2CppCodeGenWriteBarrier(&(__this->fields).Pause,pSVar3);
                                        pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                        pSVar1 = "T";
                                        if (pSVar2 == (System_String_array *)0x0) goto label_181f13801;
                                        if ((int)pSVar2->max_length != 0) {
                                          pSVar2->m_Items[0] = "T";
                                          Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                          pSVar1 = "None";
                                          if (1 < (uint)pSVar2->max_length) {
                                            pSVar2->m_Items[1] = "None";
                                            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                                            pSVar3 = il2cpp_codegen_object_new
                                                               ((Il2CppClass *)
                                                                TypeInfo_Settings_KeybindSetting);
                                            Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
                                            (__this->fields).ChangeCharacter = pSVar3;
                                            Il2CppCodeGenWriteBarrier
                                                      (&(__this->fields).ChangeCharacter,pSVar3);
                                            pSVar2 = (System_String_array *)
                                                     SZArrayNew(TypeInfo_string_array,2);
                                            pSVar1 = "F5";
                                            if (pSVar2 == (System_String_array *)0x0) goto label_181f13801;
                                            if ((int)pSVar2->max_length != 0) {
                                              pSVar2->m_Items[0] = "F5";
                                              Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                              pSVar1 = "None";
                                              if (1 < (uint)pSVar2->max_length) {
                                                pSVar2->m_Items[1] = "None";
                                                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                                                pSVar3 = il2cpp_codegen_object_new
                                                                   ((Il2CppClass *)
                                                                    TypeInfo_Settings_KeybindSetting);
                                                Settings_KeybindSetting___ctor
                                                          (pSVar3,pSVar2,(MethodInfo *)0x0);
                                                (__this->fields).RestartGame = pSVar3;
                                                Il2CppCodeGenWriteBarrier
                                                          (&(__this->fields).RestartGame,pSVar3);
                                                pSVar2 = (System_String_array *)
                                                         SZArrayNew(TypeInfo_string_array,2);
                                                pSVar1 = "Tab";
                                                if (pSVar2 == (System_String_array *)0x0) goto label_181f13801;
                                                if ((int)pSVar2->max_length != 0) {
                                                  pSVar2->m_Items[0] = "Tab";
                                                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                                  pSVar1 = "None";
                                                  if (1 < (uint)pSVar2->max_length) {
                                                    pSVar2->m_Items[1] = "None";
                                                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                                                    pSVar3 = il2cpp_codegen_object_new
                                                                       ((Il2CppClass *)
                                                                        TypeInfo_Settings_KeybindSetting);
                                                    Settings_KeybindSetting___ctor
                                                              (pSVar3,pSVar2,(MethodInfo *)0x0);
                                                    (__this->fields).ToggleScoreboard = pSVar3;
                                                    Il2CppCodeGenWriteBarrier
                                                              (&(__this->fields).ToggleScoreboard,pSVar3);
                                                    pSVar2 = (System_String_array *)
                                                             SZArrayNew(TypeInfo_string_array,2);
                                                    pSVar1 = "M";
                                                    if (pSVar2 == (System_String_array *)0x0)
                                                    goto label_181f13801;
                                                    if ((int)pSVar2->max_length != 0) {
                                                      pSVar2->m_Items[0] = "M";
                                                      Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                                      pSVar1 = "None";
                                                      if (1 < (uint)pSVar2->max_length) {
                                                        pSVar2->m_Items[1] = "None";
                                                        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                                                        pSVar3 = il2cpp_codegen_object_new
                                                                           ((Il2CppClass *)
                                                                            TypeInfo_Settings_KeybindSetting);
                                                        Settings_KeybindSetting___ctor
                                                                  (pSVar3,pSVar2,(MethodInfo *)0x0);
                                                        (__this->fields).ToggleMap = pSVar3;
                                                        Il2CppCodeGenWriteBarrier
                                                                  (&(__this->fields).ToggleMap,pSVar3);
                                                        pSVar2 = (System_String_array *)
                                                                 SZArrayNew(TypeInfo_string_array,2);
                                                        pSVar1 = "Return";
                                                        if (pSVar2 == (System_String_array *)0x0)
                                                        goto label_181f13801;
                                                        if ((int)pSVar2->max_length != 0) {
                                                          pSVar2->m_Items[0] = "Return";
                                                          Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                                          pSVar1 = "None";
                                                          if (1 < (uint)pSVar2->max_length) {
                                                            pSVar2->m_Items[1] = "None";
                                                            Il2CppCodeGenWriteBarrier
                                                                      (pSVar2->m_Items + 1,pSVar1);
                                                            pSVar3 = il2cpp_codegen_object_new
                                                                               ((Il2CppClass *)
                                                                                                                                                                
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor
                                                                 (pSVar3,pSVar2,(MethodInfo *)0x0);
                                                       (__this->fields).Chat = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).Chat,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "V";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f13801;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "V";
                                                         Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                                         pSVar1 = "None";
                                                         if (1 < (uint)pSVar2->max_length) {
                                                           pSVar2->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier
                                                                     (pSVar2->m_Items + 1,pSVar1);
                                                           pSVar3 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor
                                                                 (pSVar3,pSVar2,(MethodInfo *)0x0);
                                                       (__this->fields).PushToTalk = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).PushToTalk,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "C";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f13801;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "C";
                                                         Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                                         pSVar1 = "None";
                                                         if (1 < (uint)pSVar2->max_length) {
                                                           pSVar2->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier
                                                                     (pSVar2->m_Items + 1,pSVar1);
                                                           pSVar3 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor
                                                                 (pSVar3,pSVar2,(MethodInfo *)0x0);
                                                       (__this->fields).ChangeCamera = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).ChangeCamera,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "Mouse1";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f13801;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "Mouse1";
                                                         Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                                         pSVar1 = "None";
                                                         if (1 < (uint)pSVar2->max_length) {
                                                           pSVar2->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier
                                                                     (pSVar2->m_Items + 1,pSVar1);
                                                           pSVar3 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor
                                                                 (pSVar3,pSVar2,(MethodInfo *)0x0);
                                                       (__this->fields).RotateWOWCamera = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).RotateWOWCamera,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "WheelUp";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f13801;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "WheelUp";
                                                         Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                                         pSVar1 = "None";
                                                         if (1 < (uint)pSVar2->max_length) {
                                                           pSVar2->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier
                                                                     (pSVar2->m_Items + 1,pSVar1);
                                                           pSVar3 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor
                                                                 (pSVar3,pSVar2,(MethodInfo *)0x0);
                                                       (__this->fields).ZoomIn = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).ZoomIn,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "WheelDown";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f13801;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "WheelDown";
                                                         Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                                         pSVar1 = "None";
                                                         if (1 < (uint)pSVar2->max_length) {
                                                           pSVar2->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier
                                                                     (pSVar2->m_Items + 1,pSVar1);
                                                           pSVar3 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor
                                                                 (pSVar3,pSVar2,(MethodInfo *)0x0);
                                                       (__this->fields).ZoomOut = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).ZoomOut,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "X";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f13801;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "X";
                                                         Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                                         pSVar1 = "None";
                                                         if (1 < (uint)pSVar2->max_length) {
                                                           pSVar2->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier
                                                                     (pSVar2->m_Items + 1,pSVar1);
                                                           pSVar3 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor
                                                                 (pSVar3,pSVar2,(MethodInfo *)0x0);
                                                       (__this->fields).HideCursor = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).HideCursor,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "F7";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f13801;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "F7";
                                                         Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                                         pSVar1 = "None";
                                                         if (1 < (uint)pSVar2->max_length) {
                                                           pSVar2->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier
                                                                     (pSVar2->m_Items + 1,pSVar1);
                                                           pSVar3 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor
                                                                 (pSVar3,pSVar2,(MethodInfo *)0x0);
                                                       (__this->fields).HideChat = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).HideChat,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "1";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f13801;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "1";
                                                         Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                                         pSVar1 = "None";
                                                         if (1 < (uint)pSVar2->max_length) {
                                                           pSVar2->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier
                                                                     (pSVar2->m_Items + 1,pSVar1);
                                                           pSVar3 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor
                                                                 (pSVar3,pSVar2,(MethodInfo *)0x0);
                                                       (__this->fields).SpectatePreviousPlayer = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).SpectatePreviousPlayer,
                                                                  pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "2";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f13801;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "2";
                                                         Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                                         pSVar1 = "None";
                                                         if (1 < (uint)pSVar2->max_length) {
                                                           pSVar2->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier
                                                                     (pSVar2->m_Items + 1,pSVar1);
                                                           pSVar3 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor
                                                                 (pSVar3,pSVar2,(MethodInfo *)0x0);
                                                       (__this->fields).SpectateNextPlayer = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).SpectateNextPlayer,pSVar3)
                                                       ;
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "Y";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f13801;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "Y";
                                                         Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                                         pSVar1 = "None";
                                                         if (1 < (uint)pSVar2->max_length) {
                                                           pSVar2->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier
                                                                     (pSVar2->m_Items + 1,pSVar1);
                                                           pSVar3 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor
                                                                 (pSVar3,pSVar2,(MethodInfo *)0x0);
                                                       (__this->fields).SkipCutscene = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).SkipCutscene,pSVar3);
                                                       pSVar4 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                           TypeInfo_Settings_BoolSetting);
                                                       if (Il2CppMethodInitialized_18434548a == '\0') {
                                                         il2cpp_codegen_initialize_runtime_metadata
                                                                   (&
                                                       MethodInfo_Settings_TypedSetting_bool_ctor);
                                                       Il2CppMethodInitialized_18434548a = '\x01';
                                                       }
                                                       Settings_TypedSetting_bool____ctor_e8f2c0
                                                                 ((Settings_TypedSetting_bool__o *)pSVar4,true
                                                                  ,(MethodInfo_E8F2C0 *)
                                                                   MethodInfo_Settings_TypedSetting_bool_ctor)
                                                       ;
                                                       (__this->fields).TapScoreboard = pSVar4;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).TapScoreboard,pSVar4);
                                                       pSVar4 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                           TypeInfo_Settings_BoolSetting);
                                                       if (Il2CppMethodInitialized_18434548a == '\0') {
                                                         il2cpp_codegen_initialize_runtime_metadata
                                                                   (&
                                                       MethodInfo_Settings_TypedSetting_bool_ctor);
                                                       Il2CppMethodInitialized_18434548a = '\x01';
                                                       }
                                                       Settings_TypedSetting_bool____ctor_e8f2c0
                                                                 ((Settings_TypedSetting_bool__o *)pSVar4,true
                                                                  ,(MethodInfo_E8F2C0 *)
                                                                   MethodInfo_Settings_TypedSetting_bool_ctor)
                                                       ;
                                                       (__this->fields).TapMap = pSVar4;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).TapMap,pSVar4);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "F6";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f13801;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "F6";
                                                         Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                                         pSVar1 = "None";
                                                         if (1 < (uint)pSVar2->max_length) {
                                                           pSVar2->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier
                                                                     (pSVar2->m_Items + 1,pSVar1);
                                                           pSVar3 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor
                                                                 (pSVar3,pSVar2,(MethodInfo *)0x0);
                                                       (__this->fields).HideUI = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).HideUI,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "F11";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f13801;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "F11";
                                                         Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                                         pSVar1 = "None";
                                                         if (1 < (uint)pSVar2->max_length) {
                                                           pSVar2->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier
                                                                     (pSVar2->m_Items + 1,pSVar1);
                                                           pSVar3 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor
                                                                 (pSVar3,pSVar2,(MethodInfo *)0x0);
                                                       (__this->fields).DebugWindow = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).DebugWindow,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "LeftControl+K";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f13801;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "LeftControl+K";
                                                         Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                                         pSVar1 = "RightControl+K";
                                                         if (1 < (uint)pSVar2->max_length) {
                                                           pSVar2->m_Items[1] = "RightControl+K";
                                                           Il2CppCodeGenWriteBarrier
                                                                     (pSVar2->m_Items + 1,pSVar1);
                                                           pSVar3 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor
                                                                 (pSVar3,pSVar2,(MethodInfo *)0x0);
                                                       (__this->fields).OpenSearchPalette = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).OpenSearchPalette,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "LeftControl+F";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f13801;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "LeftControl+F";
                                                         Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                                         pSVar1 = "RightControl+F";
                                                         if (1 < (uint)pSVar2->max_length) {
                                                           pSVar2->m_Items[1] = "RightControl+F";
                                                           Il2CppCodeGenWriteBarrier
                                                                     (pSVar2->m_Items + 1,pSVar1);
                                                           pSVar3 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor
                                                                 (pSVar3,pSVar2,(MethodInfo *)0x0);
                                                       (__this->fields).OpenCurrentScreenSearch = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).OpenCurrentScreenSearch,
                                                                  pSVar3);
                                                       Settings_BaseSettingsContainer___ctor
                                                                 ((Settings_BaseSettingsContainer_o *)__this,
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
                  }
                }
              }
            }
          }
        }
      }
    }
    ThrowIndexOutOfRangeException();
  }
label_181f13801:
  ThrowNullReferenceException();
}


