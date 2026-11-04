// Type: Settings.MapEditorInputSettings
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/MapEditorInputSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/MapEditorInputSettings.cs
// --------------------------------

// Settings.MapEditorInputSettings$$get_FileName
// il2cpp: System_String_o* Settings_MapEditorInputSettings__get_FileName (Settings_MapEditorInputSettings_o* __this, const MethodInfo* method);
// 0x181f21350

System_String_o *
Settings_MapEditorInputSettings__get_FileName(Settings_MapEditorInputSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345466 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditorInput.json");
    Il2CppMethodInitialized_184345466 = '\x01';
  }
  return "MapEditorInput.json";
}


// Settings.MapEditorInputSettings$$.ctor
// il2cpp: void Settings_MapEditorInputSettings___ctor (Settings_MapEditorInputSettings_o* __this, const MethodInfo* method);
// 0x181f1fca0

void Settings_MapEditorInputSettings___ctor(Settings_MapEditorInputSettings_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array *pSVar2;
  Settings_KeybindSetting_o *pSVar3;
  
  if (Il2CppMethodInitialized_184345467 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"WheelUp");
    il2cpp_codegen_initialize_runtime_metadata(&"S");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftControl+X");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftAlt");
    il2cpp_codegen_initialize_runtime_metadata(&"3");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftControl+Y");
    il2cpp_codegen_initialize_runtime_metadata(&"2");
    il2cpp_codegen_initialize_runtime_metadata(&"Escape");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftControl+Z");
    il2cpp_codegen_initialize_runtime_metadata(&"W");
    il2cpp_codegen_initialize_runtime_metadata(&"G");
    il2cpp_codegen_initialize_runtime_metadata(&"Q");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftShift");
    il2cpp_codegen_initialize_runtime_metadata(&"DownArrow");
    il2cpp_codegen_initialize_runtime_metadata(&"V");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"E");
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse1");
    il2cpp_codegen_initialize_runtime_metadata(&"Space");
    il2cpp_codegen_initialize_runtime_metadata(&"Delete");
    il2cpp_codegen_initialize_runtime_metadata(&"RightArrow");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftControl+V");
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse2");
    il2cpp_codegen_initialize_runtime_metadata(&"O");
    il2cpp_codegen_initialize_runtime_metadata(&"D");
    il2cpp_codegen_initialize_runtime_metadata(&"WheelDown");
    il2cpp_codegen_initialize_runtime_metadata(&"C");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftControl+C");
    il2cpp_codegen_initialize_runtime_metadata(&"UpArrow");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftArrow");
    il2cpp_codegen_initialize_runtime_metadata(&"1");
    il2cpp_codegen_initialize_runtime_metadata(&"A");
    il2cpp_codegen_initialize_runtime_metadata(&"0");
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse0");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftControl+S");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftControl");
    Il2CppMethodInitialized_184345467 = '\x01';
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
        if (pSVar2 == (System_String_array *)0x0) goto label_181f21335;
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
            if (pSVar2 == (System_String_array *)0x0) goto label_181f21335;
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
                if (pSVar2 == (System_String_array *)0x0) goto label_181f21335;
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
                    if (pSVar2 == (System_String_array *)0x0) goto label_181f21335;
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
                        if (pSVar2 == (System_String_array *)0x0) goto label_181f21335;
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
                            if (pSVar2 == (System_String_array *)0x0) goto label_181f21335;
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
                                (__this->fields).Slow = pSVar3;
                                Il2CppCodeGenWriteBarrier(&(__this->fields).Slow,pSVar3);
                                pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                pSVar1 = "LeftAlt";
                                if (pSVar2 == (System_String_array *)0x0) goto label_181f21335;
                                if ((int)pSVar2->max_length != 0) {
                                  pSVar2->m_Items[0] = "LeftAlt";
                                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                  pSVar1 = "None";
                                  if (1 < (uint)pSVar2->max_length) {
                                    pSVar2->m_Items[1] = "None";
                                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                                    pSVar3 = il2cpp_codegen_object_new
                                                       ((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                                    Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
                                    (__this->fields).Fast = pSVar3;
                                    Il2CppCodeGenWriteBarrier(&(__this->fields).Fast,pSVar3);
                                    pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                    pSVar1 = "Mouse2";
                                    if (pSVar2 == (System_String_array *)0x0) goto label_181f21335;
                                    if ((int)pSVar2->max_length != 0) {
                                      pSVar2->m_Items[0] = "Mouse2";
                                      Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                      pSVar1 = "None";
                                      if (1 < (uint)pSVar2->max_length) {
                                        pSVar2->m_Items[1] = "None";
                                        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                                        pSVar3 = il2cpp_codegen_object_new
                                                           ((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                                        Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
                                        (__this->fields).Pan = pSVar3;
                                        Il2CppCodeGenWriteBarrier(&(__this->fields).Pan,pSVar3);
                                        pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                        pSVar1 = "WheelUp";
                                        if (pSVar2 == (System_String_array *)0x0) goto label_181f21335;
                                        if ((int)pSVar2->max_length != 0) {
                                          pSVar2->m_Items[0] = "WheelUp";
                                          Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                          pSVar1 = "None";
                                          if (1 < (uint)pSVar2->max_length) {
                                            pSVar2->m_Items[1] = "None";
                                            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                                            pSVar3 = il2cpp_codegen_object_new
                                                               ((Il2CppClass *)
                                                                TypeInfo_Settings_KeybindSetting);
                                            Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
                                            (__this->fields).ZoomIn = pSVar3;
                                            Il2CppCodeGenWriteBarrier(&(__this->fields).ZoomIn,pSVar3);
                                            pSVar2 = (System_String_array *)
                                                     SZArrayNew(TypeInfo_string_array,2);
                                            pSVar1 = "WheelDown";
                                            if (pSVar2 == (System_String_array *)0x0) goto label_181f21335;
                                            if ((int)pSVar2->max_length != 0) {
                                              pSVar2->m_Items[0] = "WheelDown";
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
                                                (__this->fields).ZoomOut = pSVar3;
                                                Il2CppCodeGenWriteBarrier(&(__this->fields).ZoomOut,pSVar3);
                                                pSVar2 = (System_String_array *)
                                                         SZArrayNew(TypeInfo_string_array,2);
                                                pSVar1 = "Mouse0";
                                                if (pSVar2 == (System_String_array *)0x0) goto label_181f21335;
                                                if ((int)pSVar2->max_length != 0) {
                                                  pSVar2->m_Items[0] = "Mouse0";
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
                                                    (__this->fields).Select = pSVar3;
                                                    Il2CppCodeGenWriteBarrier(&(__this->fields).Select,pSVar3)
                                                    ;
                                                    pSVar2 = (System_String_array *)
                                                             SZArrayNew(TypeInfo_string_array,2);
                                                    pSVar1 = "LeftControl";
                                                    if (pSVar2 == (System_String_array *)0x0)
                                                    goto label_181f21335;
                                                    if ((int)pSVar2->max_length != 0) {
                                                      pSVar2->m_Items[0] = "LeftControl";
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
                                                        (__this->fields).Multiselect = pSVar3;
                                                        Il2CppCodeGenWriteBarrier
                                                                  (&(__this->fields).Multiselect,pSVar3);
                                                        pSVar2 = (System_String_array *)
                                                                 SZArrayNew(TypeInfo_string_array,2);
                                                        pSVar1 = "Escape";
                                                        if (pSVar2 == (System_String_array *)0x0)
                                                        goto label_181f21335;
                                                        if ((int)pSVar2->max_length != 0) {
                                                          pSVar2->m_Items[0] = "Escape";
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
                                                       (__this->fields).Deselect = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).Deselect,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "Mouse1";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f21335;
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
                                                       (__this->fields).RotateCamera = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).RotateCamera,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "Space";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f21335;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "Space";
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
                                                       (__this->fields).AddObject = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AddObject,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "C";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f21335;
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
                                                       (__this->fields).ChangeGizmo = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).ChangeGizmo,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "G";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f21335;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "G";
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
                                                       (__this->fields).ToggleSnap = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).ToggleSnap,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "Delete";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f21335;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "Delete";
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
                                                       (__this->fields).Delete = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).Delete,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "LeftControl+C";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f21335;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "LeftControl+C";
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
                                                       (__this->fields).CopyObjects = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).CopyObjects,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "LeftControl+V";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f21335;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "LeftControl+V";
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
                                                       (__this->fields).Paste = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).Paste,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "LeftControl+X";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f21335;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "LeftControl+X";
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
                                                       (__this->fields).Cut = pSVar3;
                                                       Il2CppCodeGenWriteBarrier(&(__this->fields).Cut,pSVar3)
                                                       ;
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "LeftControl+Z";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f21335;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "LeftControl+Z";
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
                                                       (__this->fields).Undo = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).Undo,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "LeftControl+Y";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f21335;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "LeftControl+Y";
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
                                                       (__this->fields).Redo = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).Redo,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "LeftControl+S";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f21335;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "LeftControl+S";
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
                                                       (__this->fields).SaveMap = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).SaveMap,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "LeftArrow";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f21335;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "LeftArrow";
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
                                                       (__this->fields).SnapCameraLeft = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).SnapCameraLeft,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "RightArrow";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f21335;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "RightArrow";
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
                                                       (__this->fields).SnapCameraRight = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).SnapCameraRight,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "UpArrow";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f21335;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "UpArrow";
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
                                                       (__this->fields).SnapCameraUp = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).SnapCameraUp,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "DownArrow";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f21335;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "DownArrow";
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
                                                       (__this->fields).SnapCameraDown = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).SnapCameraDown,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "O";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f21335;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "O";
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
                                                       (__this->fields).ToggleOrthographic = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).ToggleOrthographic,pSVar3)
                                                       ;
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "V";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f21335;
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
                                                       (__this->fields).VertexSnap = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).VertexSnap,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "Mouse2";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f21335;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "Mouse2";
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
                                                       (__this->fields).BrushReroll = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).BrushReroll,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "LeftShift";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f21335;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "LeftShift";
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
                                                       (__this->fields).BrushCount = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).BrushCount,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "LeftControl";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f21335;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "LeftControl";
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
                                                       (__this->fields).BrushCurve = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).BrushCurve,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "1";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f21335;
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
                                                       (__this->fields).BrushCurveAxisX = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).BrushCurveAxisX,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "2";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f21335;
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
                                                       (__this->fields).BrushCurveAxisY = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).BrushCurveAxisY,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "3";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f21335;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "3";
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
                                                       (__this->fields).BrushCurveAxisZ = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).BrushCurveAxisZ,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "0";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f21335;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "0";
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
                                                       (__this->fields).BrushCurveAxisNone = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).BrushCurveAxisNone,pSVar3)
                                                       ;
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
                                          }
                                        }
                                      }
                                    }
                                  }
                                }
                              }
                            }
                          }
                        }
                      }
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
label_181f21335:
  ThrowNullReferenceException();
}


