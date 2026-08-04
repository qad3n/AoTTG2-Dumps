// Type: Settings.MapEditorInputSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/MapEditorInputSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/MapEditorInputSettings.cs
// --------------------------------

// Settings.MapEditorInputSettings$$get_FileName
// il2cpp: System_String_o* Settings_MapEditorInputSettings__get_FileName (Settings_MapEditorInputSettings_o* __this, const MethodInfo* method);
// 0x41f6e00

System_String_o *
Settings_MapEditorInputSettings__get_FileName(Settings_MapEditorInputSettings_o *__this,MethodInfo *method)

{
  if (g_data_057ad86e == '\0') {
    il2cpp_runtime_helper_023445d0(&"MapEditorInput.json");
    g_data_057ad86e = '\x01';
  }
  return "MapEditorInput.json";
}


// Settings.MapEditorInputSettings$$.ctor
// il2cpp: void Settings_MapEditorInputSettings___ctor (Settings_MapEditorInputSettings_o* __this, const MethodInfo* method);
// 0x41f5810

void Settings_MapEditorInputSettings___ctor(Settings_MapEditorInputSettings_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  Settings_KeybindSetting_o *pSVar2;
  MethodInfo *method_00;
  undefined1 auVar3 [16];
  
  if (g_data_057ad86f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_KeybindSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"WheelUp");
    il2cpp_runtime_helper_023445d0(&"S");
    il2cpp_runtime_helper_023445d0(&"LeftControl+X");
    il2cpp_runtime_helper_023445d0(&"LeftAlt");
    il2cpp_runtime_helper_023445d0(&"3");
    il2cpp_runtime_helper_023445d0(&"LeftControl+Y");
    il2cpp_runtime_helper_023445d0(&"2");
    il2cpp_runtime_helper_023445d0(&"Escape");
    il2cpp_runtime_helper_023445d0(&"LeftControl+Z");
    il2cpp_runtime_helper_023445d0(&"W");
    il2cpp_runtime_helper_023445d0(&"G");
    il2cpp_runtime_helper_023445d0(&"Q");
    il2cpp_runtime_helper_023445d0(&"LeftShift");
    il2cpp_runtime_helper_023445d0(&"DownArrow");
    il2cpp_runtime_helper_023445d0(&"V");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"E");
    il2cpp_runtime_helper_023445d0(&"Mouse1");
    il2cpp_runtime_helper_023445d0(&"Space");
    il2cpp_runtime_helper_023445d0(&"Delete");
    il2cpp_runtime_helper_023445d0(&"RightArrow");
    il2cpp_runtime_helper_023445d0(&"LeftControl+V");
    il2cpp_runtime_helper_023445d0(&"Mouse2");
    il2cpp_runtime_helper_023445d0(&"O");
    il2cpp_runtime_helper_023445d0(&"D");
    il2cpp_runtime_helper_023445d0(&"WheelDown");
    il2cpp_runtime_helper_023445d0(&"C");
    il2cpp_runtime_helper_023445d0(&"LeftControl+C");
    il2cpp_runtime_helper_023445d0(&"UpArrow");
    il2cpp_runtime_helper_023445d0(&"LeftArrow");
    il2cpp_runtime_helper_023445d0(&"1");
    il2cpp_runtime_helper_023445d0(&"A");
    il2cpp_runtime_helper_023445d0(&"0");
    il2cpp_runtime_helper_023445d0(&"Mouse0");
    il2cpp_runtime_helper_023445d0(&"LeftControl+S");
    il2cpp_runtime_helper_023445d0(&"LeftControl");
    g_data_057ad86f = '\x01';
  }
  pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = "W";
      il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
      if (1 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[1] = "None";
        il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
        auVar3 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
        pSVar2 = auVar3._0_8_;
        Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
        (__this->fields).Forward = pSVar2;
        il2cpp_runtime_helper_022b4080(&(__this->fields).Forward,pSVar2);
        pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
        if (pSVar1 == (System_String_array *)0x0) goto label_041f6dbe;
        if ((int)pSVar1->max_length != 0) {
          pSVar1->m_Items[0] = "S";
          il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
          if (1 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[1] = "None";
            il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
            auVar3 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
            pSVar2 = auVar3._0_8_;
            Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
            (__this->fields).Back = pSVar2;
            il2cpp_runtime_helper_022b4080(&(__this->fields).Back,pSVar2);
            pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
            if (pSVar1 == (System_String_array *)0x0) goto label_041f6dbe;
            if ((int)pSVar1->max_length != 0) {
              pSVar1->m_Items[0] = "A";
              il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
              if (1 < (uint)pSVar1->max_length) {
                pSVar1->m_Items[1] = "None";
                il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                auVar3 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                pSVar2 = auVar3._0_8_;
                Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
                (__this->fields).Left = pSVar2;
                il2cpp_runtime_helper_022b4080(&(__this->fields).Left,pSVar2);
                pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                if (pSVar1 == (System_String_array *)0x0) goto label_041f6dbe;
                if ((int)pSVar1->max_length != 0) {
                  pSVar1->m_Items[0] = "D";
                  il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                  if (1 < (uint)pSVar1->max_length) {
                    pSVar1->m_Items[1] = "None";
                    il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                    auVar3 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                    pSVar2 = auVar3._0_8_;
                    Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
                    (__this->fields).Right = pSVar2;
                    il2cpp_runtime_helper_022b4080(&(__this->fields).Right,pSVar2);
                    pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                    if (pSVar1 == (System_String_array *)0x0) goto label_041f6dbe;
                    if ((int)pSVar1->max_length != 0) {
                      pSVar1->m_Items[0] = "E";
                      il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                      if (1 < (uint)pSVar1->max_length) {
                        pSVar1->m_Items[1] = "None";
                        il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                        auVar3 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                        pSVar2 = auVar3._0_8_;
                        Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
                        (__this->fields).Up = pSVar2;
                        il2cpp_runtime_helper_022b4080(&(__this->fields).Up,pSVar2);
                        pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                        if (pSVar1 == (System_String_array *)0x0) goto label_041f6dbe;
                        if ((int)pSVar1->max_length != 0) {
                          pSVar1->m_Items[0] = "Q";
                          il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                          if (1 < (uint)pSVar1->max_length) {
                            pSVar1->m_Items[1] = "None";
                            il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                            auVar3 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                            pSVar2 = auVar3._0_8_;
                            Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
                            (__this->fields).Down = pSVar2;
                            il2cpp_runtime_helper_022b4080(&(__this->fields).Down,pSVar2);
                            pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                            if (pSVar1 == (System_String_array *)0x0) goto label_041f6dbe;
                            if ((int)pSVar1->max_length != 0) {
                              pSVar1->m_Items[0] = "LeftShift";
                              il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                              if (1 < (uint)pSVar1->max_length) {
                                pSVar1->m_Items[1] = "None";
                                il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                auVar3 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                pSVar2 = auVar3._0_8_;
                                Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
                                (__this->fields).Slow = pSVar2;
                                il2cpp_runtime_helper_022b4080(&(__this->fields).Slow,pSVar2);
                                pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                if (pSVar1 == (System_String_array *)0x0) goto label_041f6dbe;
                                if ((int)pSVar1->max_length != 0) {
                                  pSVar1->m_Items[0] = "LeftAlt";
                                  il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                  if (1 < (uint)pSVar1->max_length) {
                                    pSVar1->m_Items[1] = "None";
                                    il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                    auVar3 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                    pSVar2 = auVar3._0_8_;
                                    Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
                                    (__this->fields).Fast = pSVar2;
                                    il2cpp_runtime_helper_022b4080(&(__this->fields).Fast,pSVar2);
                                    pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                    if (pSVar1 == (System_String_array *)0x0) goto label_041f6dbe;
                                    if ((int)pSVar1->max_length != 0) {
                                      pSVar1->m_Items[0] = "Mouse2";
                                      il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                      if (1 < (uint)pSVar1->max_length) {
                                        pSVar1->m_Items[1] = "None";
                                        il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                        auVar3 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                        pSVar2 = auVar3._0_8_;
                                        Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
                                        (__this->fields).Pan = pSVar2;
                                        il2cpp_runtime_helper_022b4080(&(__this->fields).Pan,pSVar2);
                                        pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                        if (pSVar1 == (System_String_array *)0x0) goto label_041f6dbe;
                                        if ((int)pSVar1->max_length != 0) {
                                          pSVar1->m_Items[0] = "WheelUp";
                                          il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                          if (1 < (uint)pSVar1->max_length) {
                                            pSVar1->m_Items[1] = "None";
                                            il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                            auVar3 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                            pSVar2 = auVar3._0_8_;
                                            Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
                                            (__this->fields).ZoomIn = pSVar2;
                                            il2cpp_runtime_helper_022b4080(&(__this->fields).ZoomIn,pSVar2);
                                            pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                            if (pSVar1 == (System_String_array *)0x0) goto label_041f6dbe;
                                            if ((int)pSVar1->max_length != 0) {
                                              pSVar1->m_Items[0] = "WheelDown";
                                              il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                              if (1 < (uint)pSVar1->max_length) {
                                                pSVar1->m_Items[1] = "None";
                                                il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                auVar3 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                pSVar2 = auVar3._0_8_;
                                                Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
                                                (__this->fields).ZoomOut = pSVar2;
                                                il2cpp_runtime_helper_022b4080(&(__this->fields).ZoomOut,pSVar2);
                                                pSVar1 = (System_String_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                if (pSVar1 == (System_String_array *)0x0) goto label_041f6dbe;
                                                if ((int)pSVar1->max_length != 0) {
                                                  pSVar1->m_Items[0] = "Mouse0";
                                                  il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                  if (1 < (uint)pSVar1->max_length) {
                                                    pSVar1->m_Items[1] = "None";
                                                    il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                    auVar3 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                    pSVar2 = auVar3._0_8_;
                                                    Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_)
                                                    ;
                                                    (__this->fields).Select = pSVar2;
                                                    il2cpp_runtime_helper_022b4080(&(__this->fields).Select,pSVar2);
                                                    pSVar1 = (System_String_array *)
                                                             il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                    if (pSVar1 == (System_String_array *)0x0)
                                                    goto label_041f6dbe;
                                                    if ((int)pSVar1->max_length != 0) {
                                                      pSVar1->m_Items[0] = "LeftControl";
                                                      il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                      if (1 < (uint)pSVar1->max_length) {
                                                        pSVar1->m_Items[1] = "None";
                                                        il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                        auVar3 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                        pSVar2 = auVar3._0_8_;
                                                        Settings_KeybindSetting___ctor
                                                                  (pSVar2,pSVar1,auVar3._8_8_);
                                                        (__this->fields).Multiselect = pSVar2;
                                                        il2cpp_runtime_helper_022b4080(&(__this->fields).Multiselect,
                                                                           pSVar2);
                                                        pSVar1 = (System_String_array *)
                                                                 il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                        if (pSVar1 == (System_String_array *)0x0)
                                                        goto label_041f6dbe;
                                                        if ((int)pSVar1->max_length != 0) {
                                                          pSVar1->m_Items[0] = "Escape";
                                                          il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                          if (1 < (uint)pSVar1->max_length) {
                                                            pSVar1->m_Items[1] = "None";
                                                            il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                            auVar3 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                            pSVar2 = auVar3._0_8_;
                                                            Settings_KeybindSetting___ctor
                                                                      (pSVar2,pSVar1,auVar3._8_8_);
                                                            (__this->fields).Deselect = pSVar2;
                                                            il2cpp_runtime_helper_022b4080(&(__this->fields).Deselect,
                                                                               pSVar2);
                                                            pSVar1 = (System_String_array *)
                                                                     il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                            if (pSVar1 == (System_String_array *)0x0)
                                                            goto label_041f6dbe;
                                                            if ((int)pSVar1->max_length != 0) {
                                                              pSVar1->m_Items[0] = "Mouse1";
                                                              il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                              if (1 < (uint)pSVar1->max_length) {
                                                                pSVar1->m_Items[1] = "None";
                                                                il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                                auVar3 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                                pSVar2 = auVar3._0_8_;
                                                                Settings_KeybindSetting___ctor
                                                                          (pSVar2,pSVar1,auVar3._8_8_);
                                                                (__this->fields).RotateCamera = pSVar2;
                                                                il2cpp_runtime_helper_022b4080(&(__this->fields).
                                                                                    RotateCamera,pSVar2);
                                                                pSVar1 = (System_String_array *)
                                                                         il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                                if (pSVar1 == (System_String_array *)0x0)
                                                                goto label_041f6dbe;
                                                                if ((int)pSVar1->max_length != 0) {
                                                                  pSVar1->m_Items[0] = "Space";
                                                                  il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                                  if (1 < (uint)pSVar1->max_length) {
                                                                    pSVar1->m_Items[1] = "None";
                                                                    il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                                    auVar3 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                                    pSVar2 = auVar3._0_8_;
                                                                    Settings_KeybindSetting___ctor
                                                                              (pSVar2,pSVar1,auVar3._8_8_);
                                                                    (__this->fields).AddObject = pSVar2;
                                                                    il2cpp_runtime_helper_022b4080(&(__this->fields).
                                                                                        AddObject,pSVar2);
                                                                    pSVar1 = (System_String_array *)
                                                                             il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                                    if (pSVar1 == (System_String_array *)0x0)
                                                                    goto label_041f6dbe;
                                                                    if ((int)pSVar1->max_length != 0) {
                                                                      pSVar1->m_Items[0] = "C";
                                                                      il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                                      if (1 < (uint)pSVar1->max_length) {
                                                                        pSVar1->m_Items[1] = "None";
                                                                        il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1
                                                                                          );
                                                                        auVar3 = il2cpp_runtime_helper_023052d0(
                                                       TypeInfo_KeybindSetting);
                                                       pSVar2 = auVar3._0_8_;
                                                       Settings_KeybindSetting___ctor
                                                                 (pSVar2,pSVar1,auVar3._8_8_);
                                                       (__this->fields).ChangeGizmo = pSVar2;
                                                       il2cpp_runtime_helper_022b4080(&(__this->fields).ChangeGizmo,pSVar2
                                                                         );
                                                       pSVar1 = (System_String_array *)
                                                                il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_041f6dbe;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "G";
                                                         il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                         if (1 < (uint)pSVar1->max_length) {
                                                           pSVar1->m_Items[1] = "None";
                                                           il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                           auVar3 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                           pSVar2 = auVar3._0_8_;
                                                           Settings_KeybindSetting___ctor
                                                                     (pSVar2,pSVar1,auVar3._8_8_);
                                                           (__this->fields).ToggleSnap = pSVar2;
                                                           il2cpp_runtime_helper_022b4080(&(__this->fields).ToggleSnap,
                                                                              pSVar2);
                                                           pSVar1 = (System_String_array *)
                                                                    il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                           if (pSVar1 == (System_String_array *)0x0)
                                                           goto label_041f6dbe;
                                                           if ((int)pSVar1->max_length != 0) {
                                                             pSVar1->m_Items[0] = "Delete";
                                                             il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                             if (1 < (uint)pSVar1->max_length) {
                                                               pSVar1->m_Items[1] = "None";
                                                               il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                               auVar3 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                               pSVar2 = auVar3._0_8_;
                                                               Settings_KeybindSetting___ctor
                                                                         (pSVar2,pSVar1,auVar3._8_8_);
                                                               (__this->fields).Delete = pSVar2;
                                                               il2cpp_runtime_helper_022b4080(&(__this->fields).Delete,
                                                                                  pSVar2);
                                                               pSVar1 = (System_String_array *)
                                                                        il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                               if (pSVar1 == (System_String_array *)0x0)
                                                               goto label_041f6dbe;
                                                               if ((int)pSVar1->max_length != 0) {
                                                                 pSVar1->m_Items[0] = "LeftControl+C";
                                                                 il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                                 if (1 < (uint)pSVar1->max_length) {
                                                                   pSVar1->m_Items[1] = "None";
                                                                   il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                                   auVar3 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                                   pSVar2 = auVar3._0_8_;
                                                                   Settings_KeybindSetting___ctor
                                                                             (pSVar2,pSVar1,auVar3._8_8_);
                                                                   (__this->fields).CopyObjects = pSVar2;
                                                                   il2cpp_runtime_helper_022b4080(&(__this->fields).
                                                                                       CopyObjects,pSVar2);
                                                                   pSVar1 = (System_String_array *)
                                                                            il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                                   if (pSVar1 == (System_String_array *)0x0)
                                                                   goto label_041f6dbe;
                                                                   if ((int)pSVar1->max_length != 0) {
                                                                     pSVar1->m_Items[0] = "LeftControl+V";
                                                                     il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                                     if (1 < (uint)pSVar1->max_length) {
                                                                       pSVar1->m_Items[1] = "None";
                                                                       il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1)
                                                                       ;
                                                                       auVar3 = il2cpp_runtime_helper_023052d0(
                                                       TypeInfo_KeybindSetting);
                                                       pSVar2 = auVar3._0_8_;
                                                       Settings_KeybindSetting___ctor
                                                                 (pSVar2,pSVar1,auVar3._8_8_);
                                                       (__this->fields).Paste = pSVar2;
                                                       il2cpp_runtime_helper_022b4080(&(__this->fields).Paste,pSVar2);
                                                       pSVar1 = (System_String_array *)
                                                                il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_041f6dbe;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "LeftControl+X";
                                                         il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                         if (1 < (uint)pSVar1->max_length) {
                                                           pSVar1->m_Items[1] = "None";
                                                           il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                           auVar3 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                           pSVar2 = auVar3._0_8_;
                                                           Settings_KeybindSetting___ctor
                                                                     (pSVar2,pSVar1,auVar3._8_8_);
                                                           (__this->fields).Cut = pSVar2;
                                                           il2cpp_runtime_helper_022b4080(&(__this->fields).Cut,pSVar2);
                                                           pSVar1 = (System_String_array *)
                                                                    il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                           if (pSVar1 == (System_String_array *)0x0)
                                                           goto label_041f6dbe;
                                                           if ((int)pSVar1->max_length != 0) {
                                                             pSVar1->m_Items[0] = "LeftControl+Z";
                                                             il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                             if (1 < (uint)pSVar1->max_length) {
                                                               pSVar1->m_Items[1] = "None";
                                                               il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                               auVar3 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                               pSVar2 = auVar3._0_8_;
                                                               Settings_KeybindSetting___ctor
                                                                         (pSVar2,pSVar1,auVar3._8_8_);
                                                               (__this->fields).Undo = pSVar2;
                                                               il2cpp_runtime_helper_022b4080(&(__this->fields).Undo,
                                                                                  pSVar2);
                                                               pSVar1 = (System_String_array *)
                                                                        il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                               if (pSVar1 == (System_String_array *)0x0)
                                                               goto label_041f6dbe;
                                                               if ((int)pSVar1->max_length != 0) {
                                                                 pSVar1->m_Items[0] = "LeftControl+Y";
                                                                 il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                                 if (1 < (uint)pSVar1->max_length) {
                                                                   pSVar1->m_Items[1] = "None";
                                                                   il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                                   auVar3 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                                   pSVar2 = auVar3._0_8_;
                                                                   Settings_KeybindSetting___ctor
                                                                             (pSVar2,pSVar1,auVar3._8_8_);
                                                                   (__this->fields).Redo = pSVar2;
                                                                   il2cpp_runtime_helper_022b4080(&(__this->fields).Redo,
                                                                                      pSVar2);
                                                                   pSVar1 = (System_String_array *)
                                                                            il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                                   if (pSVar1 == (System_String_array *)0x0)
                                                                   goto label_041f6dbe;
                                                                   if ((int)pSVar1->max_length != 0) {
                                                                     pSVar1->m_Items[0] = "LeftControl+S";
                                                                     il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                                     if (1 < (uint)pSVar1->max_length) {
                                                                       pSVar1->m_Items[1] = "None";
                                                                       il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1)
                                                                       ;
                                                                       auVar3 = il2cpp_runtime_helper_023052d0(
                                                       TypeInfo_KeybindSetting);
                                                       pSVar2 = auVar3._0_8_;
                                                       Settings_KeybindSetting___ctor
                                                                 (pSVar2,pSVar1,auVar3._8_8_);
                                                       (__this->fields).SaveMap = pSVar2;
                                                       il2cpp_runtime_helper_022b4080(&(__this->fields).SaveMap,pSVar2);
                                                       pSVar1 = (System_String_array *)
                                                                il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_041f6dbe;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "LeftArrow";
                                                         il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                         if (1 < (uint)pSVar1->max_length) {
                                                           pSVar1->m_Items[1] = "None";
                                                           il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                           auVar3 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                           pSVar2 = auVar3._0_8_;
                                                           Settings_KeybindSetting___ctor
                                                                     (pSVar2,pSVar1,auVar3._8_8_);
                                                           (__this->fields).SnapCameraLeft = pSVar2;
                                                           il2cpp_runtime_helper_022b4080(&(__this->fields).SnapCameraLeft
                                                                              ,pSVar2);
                                                           pSVar1 = (System_String_array *)
                                                                    il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                           if (pSVar1 == (System_String_array *)0x0)
                                                           goto label_041f6dbe;
                                                           if ((int)pSVar1->max_length != 0) {
                                                             pSVar1->m_Items[0] = "RightArrow";
                                                             il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                             if (1 < (uint)pSVar1->max_length) {
                                                               pSVar1->m_Items[1] = "None";
                                                               il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                               auVar3 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                               pSVar2 = auVar3._0_8_;
                                                               Settings_KeybindSetting___ctor
                                                                         (pSVar2,pSVar1,auVar3._8_8_);
                                                               (__this->fields).SnapCameraRight = pSVar2;
                                                               il2cpp_runtime_helper_022b4080(&(__this->fields).
                                                                                   SnapCameraRight,pSVar2);
                                                               pSVar1 = (System_String_array *)
                                                                        il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                               if (pSVar1 == (System_String_array *)0x0)
                                                               goto label_041f6dbe;
                                                               if ((int)pSVar1->max_length != 0) {
                                                                 pSVar1->m_Items[0] = "UpArrow";
                                                                 il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                                 if (1 < (uint)pSVar1->max_length) {
                                                                   pSVar1->m_Items[1] = "None";
                                                                   il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                                   auVar3 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                                   pSVar2 = auVar3._0_8_;
                                                                   Settings_KeybindSetting___ctor
                                                                             (pSVar2,pSVar1,auVar3._8_8_);
                                                                   (__this->fields).SnapCameraUp = pSVar2;
                                                                   il2cpp_runtime_helper_022b4080(&(__this->fields).
                                                                                       SnapCameraUp,pSVar2);
                                                                   pSVar1 = (System_String_array *)
                                                                            il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                                   if (pSVar1 == (System_String_array *)0x0)
                                                                   goto label_041f6dbe;
                                                                   if ((int)pSVar1->max_length != 0) {
                                                                     pSVar1->m_Items[0] = "DownArrow";
                                                                     il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                                     if (1 < (uint)pSVar1->max_length) {
                                                                       pSVar1->m_Items[1] = "None";
                                                                       il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1)
                                                                       ;
                                                                       auVar3 = il2cpp_runtime_helper_023052d0(
                                                       TypeInfo_KeybindSetting);
                                                       pSVar2 = auVar3._0_8_;
                                                       Settings_KeybindSetting___ctor
                                                                 (pSVar2,pSVar1,auVar3._8_8_);
                                                       (__this->fields).SnapCameraDown = pSVar2;
                                                       il2cpp_runtime_helper_022b4080(&(__this->fields).SnapCameraDown,
                                                                          pSVar2);
                                                       pSVar1 = (System_String_array *)
                                                                il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_041f6dbe;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "O";
                                                         il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                         if (1 < (uint)pSVar1->max_length) {
                                                           pSVar1->m_Items[1] = "None";
                                                           il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                           auVar3 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                           pSVar2 = auVar3._0_8_;
                                                           Settings_KeybindSetting___ctor
                                                                     (pSVar2,pSVar1,auVar3._8_8_);
                                                           (__this->fields).ToggleOrthographic = pSVar2;
                                                           il2cpp_runtime_helper_022b4080(&(__this->fields).
                                                                               ToggleOrthographic,pSVar2);
                                                           pSVar1 = (System_String_array *)
                                                                    il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                           if (pSVar1 == (System_String_array *)0x0)
                                                           goto label_041f6dbe;
                                                           if ((int)pSVar1->max_length != 0) {
                                                             pSVar1->m_Items[0] = "V";
                                                             il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                             if (1 < (uint)pSVar1->max_length) {
                                                               pSVar1->m_Items[1] = "None";
                                                               il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                               auVar3 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                               pSVar2 = auVar3._0_8_;
                                                               Settings_KeybindSetting___ctor
                                                                         (pSVar2,pSVar1,auVar3._8_8_);
                                                               (__this->fields).VertexSnap = pSVar2;
                                                               il2cpp_runtime_helper_022b4080(&(__this->fields).VertexSnap
                                                                                  ,pSVar2);
                                                               pSVar1 = (System_String_array *)
                                                                        il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                               if (pSVar1 == (System_String_array *)0x0)
                                                               goto label_041f6dbe;
                                                               if ((int)pSVar1->max_length != 0) {
                                                                 pSVar1->m_Items[0] = "Mouse2";
                                                                 il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                                 if (1 < (uint)pSVar1->max_length) {
                                                                   pSVar1->m_Items[1] = "None";
                                                                   il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                                   auVar3 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                                   pSVar2 = auVar3._0_8_;
                                                                   Settings_KeybindSetting___ctor
                                                                             (pSVar2,pSVar1,auVar3._8_8_);
                                                                   (__this->fields).BrushReroll = pSVar2;
                                                                   il2cpp_runtime_helper_022b4080(&(__this->fields).
                                                                                       BrushReroll,pSVar2);
                                                                   pSVar1 = (System_String_array *)
                                                                            il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                                   if (pSVar1 == (System_String_array *)0x0)
                                                                   goto label_041f6dbe;
                                                                   if ((int)pSVar1->max_length != 0) {
                                                                     pSVar1->m_Items[0] = "LeftShift";
                                                                     il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                                     if (1 < (uint)pSVar1->max_length) {
                                                                       pSVar1->m_Items[1] = "None";
                                                                       il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1)
                                                                       ;
                                                                       auVar3 = il2cpp_runtime_helper_023052d0(
                                                       TypeInfo_KeybindSetting);
                                                       pSVar2 = auVar3._0_8_;
                                                       Settings_KeybindSetting___ctor
                                                                 (pSVar2,pSVar1,auVar3._8_8_);
                                                       (__this->fields).BrushCount = pSVar2;
                                                       il2cpp_runtime_helper_022b4080(&(__this->fields).BrushCount,pSVar2)
                                                       ;
                                                       pSVar1 = (System_String_array *)
                                                                il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_041f6dbe;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "LeftControl";
                                                         il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                         if (1 < (uint)pSVar1->max_length) {
                                                           pSVar1->m_Items[1] = "None";
                                                           il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                           auVar3 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                           pSVar2 = auVar3._0_8_;
                                                           Settings_KeybindSetting___ctor
                                                                     (pSVar2,pSVar1,auVar3._8_8_);
                                                           (__this->fields).BrushCurve = pSVar2;
                                                           il2cpp_runtime_helper_022b4080(&(__this->fields).BrushCurve,
                                                                              pSVar2);
                                                           pSVar1 = (System_String_array *)
                                                                    il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                           if (pSVar1 == (System_String_array *)0x0)
                                                           goto label_041f6dbe;
                                                           if ((int)pSVar1->max_length != 0) {
                                                             pSVar1->m_Items[0] = "1";
                                                             il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                             if (1 < (uint)pSVar1->max_length) {
                                                               pSVar1->m_Items[1] = "None";
                                                               il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                               auVar3 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                               pSVar2 = auVar3._0_8_;
                                                               Settings_KeybindSetting___ctor
                                                                         (pSVar2,pSVar1,auVar3._8_8_);
                                                               (__this->fields).BrushCurveAxisX = pSVar2;
                                                               il2cpp_runtime_helper_022b4080(&(__this->fields).
                                                                                   BrushCurveAxisX,pSVar2);
                                                               pSVar1 = (System_String_array *)
                                                                        il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                               if (pSVar1 == (System_String_array *)0x0)
                                                               goto label_041f6dbe;
                                                               if ((int)pSVar1->max_length != 0) {
                                                                 pSVar1->m_Items[0] = "2";
                                                                 il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                                 if (1 < (uint)pSVar1->max_length) {
                                                                   pSVar1->m_Items[1] = "None";
                                                                   il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                                   auVar3 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                                   pSVar2 = auVar3._0_8_;
                                                                   Settings_KeybindSetting___ctor
                                                                             (pSVar2,pSVar1,auVar3._8_8_);
                                                                   (__this->fields).BrushCurveAxisY = pSVar2;
                                                                   il2cpp_runtime_helper_022b4080(&(__this->fields).
                                                                                       BrushCurveAxisY,pSVar2)
                                                                   ;
                                                                   pSVar1 = (System_String_array *)
                                                                            il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                                   if (pSVar1 == (System_String_array *)0x0)
                                                                   goto label_041f6dbe;
                                                                   if ((int)pSVar1->max_length != 0) {
                                                                     pSVar1->m_Items[0] = "3";
                                                                     il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                                     if (1 < (uint)pSVar1->max_length) {
                                                                       pSVar1->m_Items[1] = "None";
                                                                       il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1)
                                                                       ;
                                                                       auVar3 = il2cpp_runtime_helper_023052d0(
                                                       TypeInfo_KeybindSetting);
                                                       pSVar2 = auVar3._0_8_;
                                                       Settings_KeybindSetting___ctor
                                                                 (pSVar2,pSVar1,auVar3._8_8_);
                                                       (__this->fields).BrushCurveAxisZ = pSVar2;
                                                       il2cpp_runtime_helper_022b4080(&(__this->fields).BrushCurveAxisZ,
                                                                          pSVar2);
                                                       pSVar1 = (System_String_array *)
                                                                il2cpp_runtime_helper_022b2a40(TypeInfo_string,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_041f6dbe;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "0";
                                                         il2cpp_runtime_helper_022b4080(pSVar1->m_Items);
                                                         if (1 < (uint)pSVar1->max_length) {
                                                           pSVar1->m_Items[1] = "None";
                                                           il2cpp_runtime_helper_022b4080(pSVar1->m_Items + 1);
                                                           auVar3 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                           method_00 = auVar3._0_8_;
                                                           Settings_KeybindSetting___ctor
                                                                     ((Settings_KeybindSetting_o *)method_00,
                                                                      pSVar1,auVar3._8_8_);
                                                           (__this->fields).BrushCurveAxisNone =
                                                                (Settings_KeybindSetting_o *)method_00;
                                                           il2cpp_runtime_helper_022b4080(&(__this->fields).
                                                                               BrushCurveAxisNone);
                                                           Settings_BaseSettingsContainer___ctor
                                                                     ((Settings_PresetSettingsContainer_o *)
                                                                      __this,method_00);
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
label_041f6dbe:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad86c == '\0') {
    il2cpp_runtime_helper_023445d0(&"InteractionInput.json");
    g_data_057ad86c = '\x01';
  }
  return;
}


