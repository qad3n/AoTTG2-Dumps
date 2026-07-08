// Type: Settings.MapEditorInputSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/MapEditorInputSettings.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/Input/MapEditorInputSettings.cs  [prior source available (delta unverified)]
// --------------------------------

// Settings.MapEditorInputSettings$$get_FileName
// il2cpp: System_String_o* Settings_MapEditorInputSettings__get_FileName (Settings_MapEditorInputSettings_o* __this, const MethodInfo* method);
// 0x3f07ed0

System_String_o *
Settings_MapEditorInputSettings__get_FileName
          (Settings_MapEditorInputSettings_o *__this,MethodInfo *method)

{
  if (DAT_05703c4d == '\0') {
    il2cpp_init_method_metadata(&"MapEditorInput.json");
    DAT_05703c4d = '\x01';
  }
  return "MapEditorInput.json";
}


// Settings.MapEditorInputSettings$$.ctor
// il2cpp: void Settings_MapEditorInputSettings___ctor (Settings_MapEditorInputSettings_o* __this, const MethodInfo* method);
// 0x3f06830

void Settings_MapEditorInputSettings___ctor
               (Settings_MapEditorInputSettings_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  Settings_KeybindSetting_o *pSVar2;
  MethodInfo *method_00;
  undefined1 auVar3 [16];
  
  if (DAT_05703c4e == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_KeybindSetting);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"WheelUp");
    il2cpp_init_method_metadata(&"S");
    il2cpp_init_method_metadata(&"LeftControl+X");
    il2cpp_init_method_metadata(&"LeftAlt");
    il2cpp_init_method_metadata(&"3");
    il2cpp_init_method_metadata(&"LeftControl+Y");
    il2cpp_init_method_metadata(&"2");
    il2cpp_init_method_metadata(&"Escape");
    il2cpp_init_method_metadata(&"LeftControl+Z");
    il2cpp_init_method_metadata(&"W");
    il2cpp_init_method_metadata(&"G");
    il2cpp_init_method_metadata(&"Q");
    il2cpp_init_method_metadata(&"LeftShift");
    il2cpp_init_method_metadata(&"DownArrow");
    il2cpp_init_method_metadata(&"V");
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"E");
    il2cpp_init_method_metadata(&"Mouse1");
    il2cpp_init_method_metadata(&"Space");
    il2cpp_init_method_metadata(&"Delete");
    il2cpp_init_method_metadata(&"RightArrow");
    il2cpp_init_method_metadata(&"LeftControl+V");
    il2cpp_init_method_metadata(&"Mouse2");
    il2cpp_init_method_metadata(&"O");
    il2cpp_init_method_metadata(&"D");
    il2cpp_init_method_metadata(&"WheelDown");
    il2cpp_init_method_metadata(&"C");
    il2cpp_init_method_metadata(&"LeftControl+C");
    il2cpp_init_method_metadata(&"UpArrow");
    il2cpp_init_method_metadata(&"LeftArrow");
    il2cpp_init_method_metadata(&"1");
    il2cpp_init_method_metadata(&"A");
    il2cpp_init_method_metadata(&"0");
    il2cpp_init_method_metadata(&"Mouse0");
    il2cpp_init_method_metadata(&"LeftControl+S");
    il2cpp_init_method_metadata(&"LeftControl");
    DAT_05703c4e = '\x01';
  }
  pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = "W";
      il2cpp_runtime_glue(pSVar1->m_Items);
      if (1 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[1] = "None";
        il2cpp_runtime_glue(pSVar1->m_Items + 1);
        auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
        pSVar2 = auVar3._0_8_;
        Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
        (__this->fields).Forward = pSVar2;
        il2cpp_runtime_glue(&(__this->fields).Forward,pSVar2);
        pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
        if (pSVar1 == (System_String_array *)0x0) goto LAB_03f07dde;
        if ((int)pSVar1->max_length != 0) {
          pSVar1->m_Items[0] = "S";
          il2cpp_runtime_glue(pSVar1->m_Items);
          if (1 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[1] = "None";
            il2cpp_runtime_glue(pSVar1->m_Items + 1);
            auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
            pSVar2 = auVar3._0_8_;
            Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
            (__this->fields).Back = pSVar2;
            il2cpp_runtime_glue(&(__this->fields).Back,pSVar2);
            pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
            if (pSVar1 == (System_String_array *)0x0) goto LAB_03f07dde;
            if ((int)pSVar1->max_length != 0) {
              pSVar1->m_Items[0] = "A";
              il2cpp_runtime_glue(pSVar1->m_Items);
              if (1 < (uint)pSVar1->max_length) {
                pSVar1->m_Items[1] = "None";
                il2cpp_runtime_glue(pSVar1->m_Items + 1);
                auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                pSVar2 = auVar3._0_8_;
                Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
                (__this->fields).Left = pSVar2;
                il2cpp_runtime_glue(&(__this->fields).Left,pSVar2);
                pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
                if (pSVar1 == (System_String_array *)0x0) goto LAB_03f07dde;
                if ((int)pSVar1->max_length != 0) {
                  pSVar1->m_Items[0] = "D";
                  il2cpp_runtime_glue(pSVar1->m_Items);
                  if (1 < (uint)pSVar1->max_length) {
                    pSVar1->m_Items[1] = "None";
                    il2cpp_runtime_glue(pSVar1->m_Items + 1);
                    auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                    pSVar2 = auVar3._0_8_;
                    Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
                    (__this->fields).Right = pSVar2;
                    il2cpp_runtime_glue(&(__this->fields).Right,pSVar2);
                    pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
                    if (pSVar1 == (System_String_array *)0x0) goto LAB_03f07dde;
                    if ((int)pSVar1->max_length != 0) {
                      pSVar1->m_Items[0] = "E";
                      il2cpp_runtime_glue(pSVar1->m_Items);
                      if (1 < (uint)pSVar1->max_length) {
                        pSVar1->m_Items[1] = "None";
                        il2cpp_runtime_glue(pSVar1->m_Items + 1);
                        auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                        pSVar2 = auVar3._0_8_;
                        Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
                        (__this->fields).Up = pSVar2;
                        il2cpp_runtime_glue(&(__this->fields).Up,pSVar2);
                        pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
                        if (pSVar1 == (System_String_array *)0x0) goto LAB_03f07dde;
                        if ((int)pSVar1->max_length != 0) {
                          pSVar1->m_Items[0] = "Q";
                          il2cpp_runtime_glue(pSVar1->m_Items);
                          if (1 < (uint)pSVar1->max_length) {
                            pSVar1->m_Items[1] = "None";
                            il2cpp_runtime_glue(pSVar1->m_Items + 1);
                            auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                            pSVar2 = auVar3._0_8_;
                            Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
                            (__this->fields).Down = pSVar2;
                            il2cpp_runtime_glue(&(__this->fields).Down,pSVar2);
                            pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
                            if (pSVar1 == (System_String_array *)0x0) goto LAB_03f07dde;
                            if ((int)pSVar1->max_length != 0) {
                              pSVar1->m_Items[0] = "LeftShift";
                              il2cpp_runtime_glue(pSVar1->m_Items);
                              if (1 < (uint)pSVar1->max_length) {
                                pSVar1->m_Items[1] = "None";
                                il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                pSVar2 = auVar3._0_8_;
                                Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
                                (__this->fields).Slow = pSVar2;
                                il2cpp_runtime_glue(&(__this->fields).Slow,pSVar2);
                                pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
                                if (pSVar1 == (System_String_array *)0x0) goto LAB_03f07dde;
                                if ((int)pSVar1->max_length != 0) {
                                  pSVar1->m_Items[0] = "LeftAlt";
                                  il2cpp_runtime_glue(pSVar1->m_Items);
                                  if (1 < (uint)pSVar1->max_length) {
                                    pSVar1->m_Items[1] = "None";
                                    il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                    auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                    pSVar2 = auVar3._0_8_;
                                    Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
                                    (__this->fields).Fast = pSVar2;
                                    il2cpp_runtime_glue(&(__this->fields).Fast,pSVar2);
                                    pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
                                    if (pSVar1 == (System_String_array *)0x0) goto LAB_03f07dde;
                                    if ((int)pSVar1->max_length != 0) {
                                      pSVar1->m_Items[0] = "Mouse2";
                                      il2cpp_runtime_glue(pSVar1->m_Items);
                                      if (1 < (uint)pSVar1->max_length) {
                                        pSVar1->m_Items[1] = "None";
                                        il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                        auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                        pSVar2 = auVar3._0_8_;
                                        Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
                                        (__this->fields).Pan = pSVar2;
                                        il2cpp_runtime_glue(&(__this->fields).Pan,pSVar2);
                                        pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2)
                                        ;
                                        if (pSVar1 == (System_String_array *)0x0) goto LAB_03f07dde;
                                        if ((int)pSVar1->max_length != 0) {
                                          pSVar1->m_Items[0] = "WheelUp";
                                          il2cpp_runtime_glue(pSVar1->m_Items);
                                          if (1 < (uint)pSVar1->max_length) {
                                            pSVar1->m_Items[1] = "None";
                                            il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                            auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                            pSVar2 = auVar3._0_8_;
                                            Settings_KeybindSetting___ctor
                                                      (pSVar2,pSVar1,auVar3._8_8_);
                                            (__this->fields).ZoomIn = pSVar2;
                                            il2cpp_runtime_glue(&(__this->fields).ZoomIn,pSVar2);
                                            pSVar1 = (System_String_array *)
                                                     il2cpp_glue_02274930(TypeInfo_string,2);
                                            if (pSVar1 == (System_String_array *)0x0)
                                            goto LAB_03f07dde;
                                            if ((int)pSVar1->max_length != 0) {
                                              pSVar1->m_Items[0] = "WheelDown";
                                              il2cpp_runtime_glue(pSVar1->m_Items);
                                              if (1 < (uint)pSVar1->max_length) {
                                                pSVar1->m_Items[1] = "None";
                                                il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                pSVar2 = auVar3._0_8_;
                                                Settings_KeybindSetting___ctor
                                                          (pSVar2,pSVar1,auVar3._8_8_);
                                                (__this->fields).ZoomOut = pSVar2;
                                                il2cpp_runtime_glue(&(__this->fields).ZoomOut,pSVar2)
                                                ;
                                                pSVar1 = (System_String_array *)
                                                         il2cpp_glue_02274930(TypeInfo_string,2);
                                                if (pSVar1 == (System_String_array *)0x0)
                                                goto LAB_03f07dde;
                                                if ((int)pSVar1->max_length != 0) {
                                                  pSVar1->m_Items[0] = "Mouse0";
                                                  il2cpp_runtime_glue(pSVar1->m_Items);
                                                  if (1 < (uint)pSVar1->max_length) {
                                                    pSVar1->m_Items[1] = "None";
                                                    il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                    auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                    pSVar2 = auVar3._0_8_;
                                                    Settings_KeybindSetting___ctor
                                                              (pSVar2,pSVar1,auVar3._8_8_);
                                                    (__this->fields).Select = pSVar2;
                                                    il2cpp_runtime_glue(&(__this->fields).Select,
                                                                       pSVar2);
                                                    pSVar1 = (System_String_array *)
                                                             il2cpp_glue_02274930(TypeInfo_string,2);
                                                    if (pSVar1 == (System_String_array *)0x0)
                                                    goto LAB_03f07dde;
                                                    if ((int)pSVar1->max_length != 0) {
                                                      pSVar1->m_Items[0] = "LeftControl";
                                                      il2cpp_runtime_glue(pSVar1->m_Items);
                                                      if (1 < (uint)pSVar1->max_length) {
                                                        pSVar1->m_Items[1] = "None";
                                                        il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                        auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                        pSVar2 = auVar3._0_8_;
                                                        Settings_KeybindSetting___ctor
                                                                  (pSVar2,pSVar1,auVar3._8_8_);
                                                        (__this->fields).Multiselect = pSVar2;
                                                        il2cpp_runtime_glue(&(__this->fields).
                                                                            Multiselect,pSVar2);
                                                        pSVar1 = (System_String_array *)
                                                                 il2cpp_glue_02274930(TypeInfo_string,2);
                                                        if (pSVar1 == (System_String_array *)0x0)
                                                        goto LAB_03f07dde;
                                                        if ((int)pSVar1->max_length != 0) {
                                                          pSVar1->m_Items[0] = "Escape";
                                                          il2cpp_runtime_glue(pSVar1->m_Items);
                                                          if (1 < (uint)pSVar1->max_length) {
                                                            pSVar1->m_Items[1] = "None";
                                                            il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                            auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting
                                                                                       );
                                                            pSVar2 = auVar3._0_8_;
                                                            Settings_KeybindSetting___ctor
                                                                      (pSVar2,pSVar1,auVar3._8_8_);
                                                            (__this->fields).Deselect = pSVar2;
                                                            il2cpp_runtime_glue(&(__this->fields).
                                                                                Deselect,pSVar2);
                                                            pSVar1 = (System_String_array *)
                                                                     il2cpp_glue_02274930(TypeInfo_string,2);
                                                            if (pSVar1 == (System_String_array *)0x0
                                                               ) goto LAB_03f07dde;
                                                            if ((int)pSVar1->max_length != 0) {
                                                              pSVar1->m_Items[0] = "Mouse1";
                                                              il2cpp_runtime_glue(pSVar1->m_Items);
                                                              if (1 < (uint)pSVar1->max_length) {
                                                                pSVar1->m_Items[1] = "None";
                                                                il2cpp_runtime_glue(pSVar1->m_Items +
                                                                                   1);
                                                                auVar3 = il2cpp_runtime_glue(
                                                  TypeInfo_KeybindSetting);
                                                  pSVar2 = auVar3._0_8_;
                                                  Settings_KeybindSetting___ctor
                                                            (pSVar2,pSVar1,auVar3._8_8_);
                                                  (__this->fields).RotateCamera = pSVar2;
                                                  il2cpp_runtime_glue(&(__this->fields).RotateCamera,
                                                                     pSVar2);
                                                  pSVar1 = (System_String_array *)
                                                           il2cpp_glue_02274930(TypeInfo_string,2);
                                                  if (pSVar1 == (System_String_array *)0x0)
                                                  goto LAB_03f07dde;
                                                  if ((int)pSVar1->max_length != 0) {
                                                    pSVar1->m_Items[0] = "Space";
                                                    il2cpp_runtime_glue(pSVar1->m_Items);
                                                    if (1 < (uint)pSVar1->max_length) {
                                                      pSVar1->m_Items[1] = "None";
                                                      il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                      auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                      pSVar2 = auVar3._0_8_;
                                                      Settings_KeybindSetting___ctor
                                                                (pSVar2,pSVar1,auVar3._8_8_);
                                                      (__this->fields).AddObject = pSVar2;
                                                      il2cpp_runtime_glue(&(__this->fields).AddObject
                                                                         ,pSVar2);
                                                      pSVar1 = (System_String_array *)
                                                               il2cpp_glue_02274930(TypeInfo_string,2);
                                                      if (pSVar1 == (System_String_array *)0x0)
                                                      goto LAB_03f07dde;
                                                      if ((int)pSVar1->max_length != 0) {
                                                        pSVar1->m_Items[0] = "C";
                                                        il2cpp_runtime_glue(pSVar1->m_Items);
                                                        if (1 < (uint)pSVar1->max_length) {
                                                          pSVar1->m_Items[1] = "None";
                                                          il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                          auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                          pSVar2 = auVar3._0_8_;
                                                          Settings_KeybindSetting___ctor
                                                                    (pSVar2,pSVar1,auVar3._8_8_);
                                                          (__this->fields).ChangeGizmo = pSVar2;
                                                          il2cpp_runtime_glue(&(__this->fields).
                                                                              ChangeGizmo,pSVar2);
                                                          pSVar1 = (System_String_array *)
                                                                   il2cpp_glue_02274930(TypeInfo_string,2);
                                                          if (pSVar1 == (System_String_array *)0x0)
                                                          goto LAB_03f07dde;
                                                          if ((int)pSVar1->max_length != 0) {
                                                            pSVar1->m_Items[0] = "G";
                                                            il2cpp_runtime_glue(pSVar1->m_Items);
                                                            if (1 < (uint)pSVar1->max_length) {
                                                              pSVar1->m_Items[1] = "None";
                                                              il2cpp_runtime_glue(pSVar1->m_Items + 1
                                                                                );
                                                              auVar3 = il2cpp_runtime_glue(
                                                  TypeInfo_KeybindSetting);
                                                  pSVar2 = auVar3._0_8_;
                                                  Settings_KeybindSetting___ctor
                                                            (pSVar2,pSVar1,auVar3._8_8_);
                                                  (__this->fields).ToggleSnap = pSVar2;
                                                  il2cpp_runtime_glue(&(__this->fields).ToggleSnap,
                                                                     pSVar2);
                                                  pSVar1 = (System_String_array *)
                                                           il2cpp_glue_02274930(TypeInfo_string,2);
                                                  if (pSVar1 == (System_String_array *)0x0)
                                                  goto LAB_03f07dde;
                                                  if ((int)pSVar1->max_length != 0) {
                                                    pSVar1->m_Items[0] = "Delete";
                                                    il2cpp_runtime_glue(pSVar1->m_Items);
                                                    if (1 < (uint)pSVar1->max_length) {
                                                      pSVar1->m_Items[1] = "None";
                                                      il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                      auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                      pSVar2 = auVar3._0_8_;
                                                      Settings_KeybindSetting___ctor
                                                                (pSVar2,pSVar1,auVar3._8_8_);
                                                      (__this->fields).Delete = pSVar2;
                                                      il2cpp_runtime_glue(&(__this->fields).Delete,
                                                                         pSVar2);
                                                      pSVar1 = (System_String_array *)
                                                               il2cpp_glue_02274930(TypeInfo_string,2);
                                                      if (pSVar1 == (System_String_array *)0x0)
                                                      goto LAB_03f07dde;
                                                      if ((int)pSVar1->max_length != 0) {
                                                        pSVar1->m_Items[0] = "LeftControl+C";
                                                        il2cpp_runtime_glue(pSVar1->m_Items);
                                                        if (1 < (uint)pSVar1->max_length) {
                                                          pSVar1->m_Items[1] = "None";
                                                          il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                          auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                          pSVar2 = auVar3._0_8_;
                                                          Settings_KeybindSetting___ctor
                                                                    (pSVar2,pSVar1,auVar3._8_8_);
                                                          (__this->fields).CopyObjects = pSVar2;
                                                          il2cpp_runtime_glue(&(__this->fields).
                                                                              CopyObjects,pSVar2);
                                                          pSVar1 = (System_String_array *)
                                                                   il2cpp_glue_02274930(TypeInfo_string,2);
                                                          if (pSVar1 == (System_String_array *)0x0)
                                                          goto LAB_03f07dde;
                                                          if ((int)pSVar1->max_length != 0) {
                                                            pSVar1->m_Items[0] = "LeftControl+V";
                                                            il2cpp_runtime_glue(pSVar1->m_Items);
                                                            if (1 < (uint)pSVar1->max_length) {
                                                              pSVar1->m_Items[1] = "None";
                                                              il2cpp_runtime_glue(pSVar1->m_Items + 1
                                                                                );
                                                              auVar3 = il2cpp_runtime_glue(
                                                  TypeInfo_KeybindSetting);
                                                  pSVar2 = auVar3._0_8_;
                                                  Settings_KeybindSetting___ctor
                                                            (pSVar2,pSVar1,auVar3._8_8_);
                                                  (__this->fields).Paste = pSVar2;
                                                  il2cpp_runtime_glue(&(__this->fields).Paste,pSVar2)
                                                  ;
                                                  pSVar1 = (System_String_array *)
                                                           il2cpp_glue_02274930(TypeInfo_string,2);
                                                  if (pSVar1 == (System_String_array *)0x0)
                                                  goto LAB_03f07dde;
                                                  if ((int)pSVar1->max_length != 0) {
                                                    pSVar1->m_Items[0] = "LeftControl+X";
                                                    il2cpp_runtime_glue(pSVar1->m_Items);
                                                    if (1 < (uint)pSVar1->max_length) {
                                                      pSVar1->m_Items[1] = "None";
                                                      il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                      auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                      pSVar2 = auVar3._0_8_;
                                                      Settings_KeybindSetting___ctor
                                                                (pSVar2,pSVar1,auVar3._8_8_);
                                                      (__this->fields).Cut = pSVar2;
                                                      il2cpp_runtime_glue(&(__this->fields).Cut,
                                                                         pSVar2);
                                                      pSVar1 = (System_String_array *)
                                                               il2cpp_glue_02274930(TypeInfo_string,2);
                                                      if (pSVar1 == (System_String_array *)0x0)
                                                      goto LAB_03f07dde;
                                                      if ((int)pSVar1->max_length != 0) {
                                                        pSVar1->m_Items[0] = "LeftControl+Z";
                                                        il2cpp_runtime_glue(pSVar1->m_Items);
                                                        if (1 < (uint)pSVar1->max_length) {
                                                          pSVar1->m_Items[1] = "None";
                                                          il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                          auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                          pSVar2 = auVar3._0_8_;
                                                          Settings_KeybindSetting___ctor
                                                                    (pSVar2,pSVar1,auVar3._8_8_);
                                                          (__this->fields).Undo = pSVar2;
                                                          il2cpp_runtime_glue(&(__this->fields).Undo,
                                                                             pSVar2);
                                                          pSVar1 = (System_String_array *)
                                                                   il2cpp_glue_02274930(TypeInfo_string,2);
                                                          if (pSVar1 == (System_String_array *)0x0)
                                                          goto LAB_03f07dde;
                                                          if ((int)pSVar1->max_length != 0) {
                                                            pSVar1->m_Items[0] = "LeftControl+Y";
                                                            il2cpp_runtime_glue(pSVar1->m_Items);
                                                            if (1 < (uint)pSVar1->max_length) {
                                                              pSVar1->m_Items[1] = "None";
                                                              il2cpp_runtime_glue(pSVar1->m_Items + 1
                                                                                );
                                                              auVar3 = il2cpp_runtime_glue(
                                                  TypeInfo_KeybindSetting);
                                                  pSVar2 = auVar3._0_8_;
                                                  Settings_KeybindSetting___ctor
                                                            (pSVar2,pSVar1,auVar3._8_8_);
                                                  (__this->fields).Redo = pSVar2;
                                                  il2cpp_runtime_glue(&(__this->fields).Redo,pSVar2);
                                                  pSVar1 = (System_String_array *)
                                                           il2cpp_glue_02274930(TypeInfo_string,2);
                                                  if (pSVar1 == (System_String_array *)0x0)
                                                  goto LAB_03f07dde;
                                                  if ((int)pSVar1->max_length != 0) {
                                                    pSVar1->m_Items[0] = "LeftControl+S";
                                                    il2cpp_runtime_glue(pSVar1->m_Items);
                                                    if (1 < (uint)pSVar1->max_length) {
                                                      pSVar1->m_Items[1] = "None";
                                                      il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                      auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                      pSVar2 = auVar3._0_8_;
                                                      Settings_KeybindSetting___ctor
                                                                (pSVar2,pSVar1,auVar3._8_8_);
                                                      (__this->fields).SaveMap = pSVar2;
                                                      il2cpp_runtime_glue(&(__this->fields).SaveMap,
                                                                         pSVar2);
                                                      pSVar1 = (System_String_array *)
                                                               il2cpp_glue_02274930(TypeInfo_string,2);
                                                      if (pSVar1 == (System_String_array *)0x0)
                                                      goto LAB_03f07dde;
                                                      if ((int)pSVar1->max_length != 0) {
                                                        pSVar1->m_Items[0] = "LeftArrow";
                                                        il2cpp_runtime_glue(pSVar1->m_Items);
                                                        if (1 < (uint)pSVar1->max_length) {
                                                          pSVar1->m_Items[1] = "None";
                                                          il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                          auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                          pSVar2 = auVar3._0_8_;
                                                          Settings_KeybindSetting___ctor
                                                                    (pSVar2,pSVar1,auVar3._8_8_);
                                                          (__this->fields).SnapCameraLeft = pSVar2;
                                                          il2cpp_runtime_glue(&(__this->fields).
                                                                              SnapCameraLeft,pSVar2)
                                                          ;
                                                          pSVar1 = (System_String_array *)
                                                                   il2cpp_glue_02274930(TypeInfo_string,2);
                                                          if (pSVar1 == (System_String_array *)0x0)
                                                          goto LAB_03f07dde;
                                                          if ((int)pSVar1->max_length != 0) {
                                                            pSVar1->m_Items[0] = "RightArrow";
                                                            il2cpp_runtime_glue(pSVar1->m_Items);
                                                            if (1 < (uint)pSVar1->max_length) {
                                                              pSVar1->m_Items[1] = "None";
                                                              il2cpp_runtime_glue(pSVar1->m_Items + 1
                                                                                );
                                                              auVar3 = il2cpp_runtime_glue(
                                                  TypeInfo_KeybindSetting);
                                                  pSVar2 = auVar3._0_8_;
                                                  Settings_KeybindSetting___ctor
                                                            (pSVar2,pSVar1,auVar3._8_8_);
                                                  (__this->fields).SnapCameraRight = pSVar2;
                                                  il2cpp_runtime_glue(&(__this->fields).
                                                                      SnapCameraRight,pSVar2);
                                                  pSVar1 = (System_String_array *)
                                                           il2cpp_glue_02274930(TypeInfo_string,2);
                                                  if (pSVar1 == (System_String_array *)0x0)
                                                  goto LAB_03f07dde;
                                                  if ((int)pSVar1->max_length != 0) {
                                                    pSVar1->m_Items[0] = "UpArrow";
                                                    il2cpp_runtime_glue(pSVar1->m_Items);
                                                    if (1 < (uint)pSVar1->max_length) {
                                                      pSVar1->m_Items[1] = "None";
                                                      il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                      auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                      pSVar2 = auVar3._0_8_;
                                                      Settings_KeybindSetting___ctor
                                                                (pSVar2,pSVar1,auVar3._8_8_);
                                                      (__this->fields).SnapCameraUp = pSVar2;
                                                      il2cpp_runtime_glue(&(__this->fields).
                                                                          SnapCameraUp,pSVar2);
                                                      pSVar1 = (System_String_array *)
                                                               il2cpp_glue_02274930(TypeInfo_string,2);
                                                      if (pSVar1 == (System_String_array *)0x0)
                                                      goto LAB_03f07dde;
                                                      if ((int)pSVar1->max_length != 0) {
                                                        pSVar1->m_Items[0] = "DownArrow";
                                                        il2cpp_runtime_glue(pSVar1->m_Items);
                                                        if (1 < (uint)pSVar1->max_length) {
                                                          pSVar1->m_Items[1] = "None";
                                                          il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                          auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                          pSVar2 = auVar3._0_8_;
                                                          Settings_KeybindSetting___ctor
                                                                    (pSVar2,pSVar1,auVar3._8_8_);
                                                          (__this->fields).SnapCameraDown = pSVar2;
                                                          il2cpp_runtime_glue(&(__this->fields).
                                                                              SnapCameraDown,pSVar2)
                                                          ;
                                                          pSVar1 = (System_String_array *)
                                                                   il2cpp_glue_02274930(TypeInfo_string,2);
                                                          if (pSVar1 == (System_String_array *)0x0)
                                                          goto LAB_03f07dde;
                                                          if ((int)pSVar1->max_length != 0) {
                                                            pSVar1->m_Items[0] = "O";
                                                            il2cpp_runtime_glue(pSVar1->m_Items);
                                                            if (1 < (uint)pSVar1->max_length) {
                                                              pSVar1->m_Items[1] = "None";
                                                              il2cpp_runtime_glue(pSVar1->m_Items + 1
                                                                                );
                                                              auVar3 = il2cpp_runtime_glue(
                                                  TypeInfo_KeybindSetting);
                                                  pSVar2 = auVar3._0_8_;
                                                  Settings_KeybindSetting___ctor
                                                            (pSVar2,pSVar1,auVar3._8_8_);
                                                  (__this->fields).ToggleOrthographic = pSVar2;
                                                  il2cpp_runtime_glue(&(__this->fields).
                                                                      ToggleOrthographic,pSVar2);
                                                  pSVar1 = (System_String_array *)
                                                           il2cpp_glue_02274930(TypeInfo_string,2);
                                                  if (pSVar1 == (System_String_array *)0x0)
                                                  goto LAB_03f07dde;
                                                  if ((int)pSVar1->max_length != 0) {
                                                    pSVar1->m_Items[0] = "V";
                                                    il2cpp_runtime_glue(pSVar1->m_Items);
                                                    if (1 < (uint)pSVar1->max_length) {
                                                      pSVar1->m_Items[1] = "None";
                                                      il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                      auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                      pSVar2 = auVar3._0_8_;
                                                      Settings_KeybindSetting___ctor
                                                                (pSVar2,pSVar1,auVar3._8_8_);
                                                      (__this->fields).VertexSnap = pSVar2;
                                                      il2cpp_runtime_glue(&(__this->fields).
                                                                          VertexSnap,pSVar2);
                                                      pSVar1 = (System_String_array *)
                                                               il2cpp_glue_02274930(TypeInfo_string,2);
                                                      if (pSVar1 == (System_String_array *)0x0)
                                                      goto LAB_03f07dde;
                                                      if ((int)pSVar1->max_length != 0) {
                                                        pSVar1->m_Items[0] = "Mouse2";
                                                        il2cpp_runtime_glue(pSVar1->m_Items);
                                                        if (1 < (uint)pSVar1->max_length) {
                                                          pSVar1->m_Items[1] = "None";
                                                          il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                          auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                          pSVar2 = auVar3._0_8_;
                                                          Settings_KeybindSetting___ctor
                                                                    (pSVar2,pSVar1,auVar3._8_8_);
                                                          (__this->fields).BrushReroll = pSVar2;
                                                          il2cpp_runtime_glue(&(__this->fields).
                                                                              BrushReroll,pSVar2);
                                                          pSVar1 = (System_String_array *)
                                                                   il2cpp_glue_02274930(TypeInfo_string,2);
                                                          if (pSVar1 == (System_String_array *)0x0)
                                                          goto LAB_03f07dde;
                                                          if ((int)pSVar1->max_length != 0) {
                                                            pSVar1->m_Items[0] = "LeftShift";
                                                            il2cpp_runtime_glue(pSVar1->m_Items);
                                                            if (1 < (uint)pSVar1->max_length) {
                                                              pSVar1->m_Items[1] = "None";
                                                              il2cpp_runtime_glue(pSVar1->m_Items + 1
                                                                                );
                                                              auVar3 = il2cpp_runtime_glue(
                                                  TypeInfo_KeybindSetting);
                                                  pSVar2 = auVar3._0_8_;
                                                  Settings_KeybindSetting___ctor
                                                            (pSVar2,pSVar1,auVar3._8_8_);
                                                  (__this->fields).BrushCount = pSVar2;
                                                  il2cpp_runtime_glue(&(__this->fields).BrushCount,
                                                                     pSVar2);
                                                  pSVar1 = (System_String_array *)
                                                           il2cpp_glue_02274930(TypeInfo_string,2);
                                                  if (pSVar1 == (System_String_array *)0x0)
                                                  goto LAB_03f07dde;
                                                  if ((int)pSVar1->max_length != 0) {
                                                    pSVar1->m_Items[0] = "LeftControl";
                                                    il2cpp_runtime_glue(pSVar1->m_Items);
                                                    if (1 < (uint)pSVar1->max_length) {
                                                      pSVar1->m_Items[1] = "None";
                                                      il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                      auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                      pSVar2 = auVar3._0_8_;
                                                      Settings_KeybindSetting___ctor
                                                                (pSVar2,pSVar1,auVar3._8_8_);
                                                      (__this->fields).BrushCurve = pSVar2;
                                                      il2cpp_runtime_glue(&(__this->fields).
                                                                          BrushCurve,pSVar2);
                                                      pSVar1 = (System_String_array *)
                                                               il2cpp_glue_02274930(TypeInfo_string,2);
                                                      if (pSVar1 == (System_String_array *)0x0)
                                                      goto LAB_03f07dde;
                                                      if ((int)pSVar1->max_length != 0) {
                                                        pSVar1->m_Items[0] = "1";
                                                        il2cpp_runtime_glue(pSVar1->m_Items);
                                                        if (1 < (uint)pSVar1->max_length) {
                                                          pSVar1->m_Items[1] = "None";
                                                          il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                          auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                          pSVar2 = auVar3._0_8_;
                                                          Settings_KeybindSetting___ctor
                                                                    (pSVar2,pSVar1,auVar3._8_8_);
                                                          (__this->fields).BrushCurveAxisX = pSVar2;
                                                          il2cpp_runtime_glue(&(__this->fields).
                                                                              BrushCurveAxisX,pSVar2
                                                                            );
                                                          pSVar1 = (System_String_array *)
                                                                   il2cpp_glue_02274930(TypeInfo_string,2);
                                                          if (pSVar1 == (System_String_array *)0x0)
                                                          goto LAB_03f07dde;
                                                          if ((int)pSVar1->max_length != 0) {
                                                            pSVar1->m_Items[0] = "2";
                                                            il2cpp_runtime_glue(pSVar1->m_Items);
                                                            if (1 < (uint)pSVar1->max_length) {
                                                              pSVar1->m_Items[1] = "None";
                                                              il2cpp_runtime_glue(pSVar1->m_Items + 1
                                                                                );
                                                              auVar3 = il2cpp_runtime_glue(
                                                  TypeInfo_KeybindSetting);
                                                  pSVar2 = auVar3._0_8_;
                                                  Settings_KeybindSetting___ctor
                                                            (pSVar2,pSVar1,auVar3._8_8_);
                                                  (__this->fields).BrushCurveAxisY = pSVar2;
                                                  il2cpp_runtime_glue(&(__this->fields).
                                                                      BrushCurveAxisY,pSVar2);
                                                  pSVar1 = (System_String_array *)
                                                           il2cpp_glue_02274930(TypeInfo_string,2);
                                                  if (pSVar1 == (System_String_array *)0x0)
                                                  goto LAB_03f07dde;
                                                  if ((int)pSVar1->max_length != 0) {
                                                    pSVar1->m_Items[0] = "3";
                                                    il2cpp_runtime_glue(pSVar1->m_Items);
                                                    if (1 < (uint)pSVar1->max_length) {
                                                      pSVar1->m_Items[1] = "None";
                                                      il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                      auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                      pSVar2 = auVar3._0_8_;
                                                      Settings_KeybindSetting___ctor
                                                                (pSVar2,pSVar1,auVar3._8_8_);
                                                      (__this->fields).BrushCurveAxisZ = pSVar2;
                                                      il2cpp_runtime_glue(&(__this->fields).
                                                                          BrushCurveAxisZ,pSVar2);
                                                      pSVar1 = (System_String_array *)
                                                               il2cpp_glue_02274930(TypeInfo_string,2);
                                                      if (pSVar1 == (System_String_array *)0x0)
                                                      goto LAB_03f07dde;
                                                      if ((int)pSVar1->max_length != 0) {
                                                        pSVar1->m_Items[0] = "0";
                                                        il2cpp_runtime_glue(pSVar1->m_Items);
                                                        if (1 < (uint)pSVar1->max_length) {
                                                          pSVar1->m_Items[1] = "None";
                                                          il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                          auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                          method_00 = auVar3._0_8_;
                                                          Settings_KeybindSetting___ctor
                                                                    ((Settings_KeybindSetting_o *)
                                                                     method_00,pSVar1,auVar3._8_8_);
                                                          (__this->fields).BrushCurveAxisNone =
                                                               (Settings_KeybindSetting_o *)
                                                               method_00;
                                                          il2cpp_runtime_glue(&(__this->fields).
                                                                              BrushCurveAxisNone);
                                                          Settings_BaseSettingsContainer___ctor
                                                                    ((
                                                  Settings_SaveableSettingsContainer_o *)__this,
                                                  method_00);
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
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03f07dde:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


