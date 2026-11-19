// Type: Settings.MapEditorInputSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/MapEditorInputSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/MapEditorInputSettings.cs
// --------------------------------

// Settings.MapEditorInputSettings$$get_FileName
// il2cpp: System_String_o* Settings_MapEditorInputSettings__get_FileName (Settings_MapEditorInputSettings_o* __this, const MethodInfo* method);
// 0x5b50f00

System_String_o *
Settings_MapEditorInputSettings__get_FileName(Settings_MapEditorInputSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075472b0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"MapEditorInput.json");
    Il2CppMethodInitialized_075472b0 = '\x01';
  }
  return "MapEditorInput.json";
}


// Settings.MapEditorInputSettings$$.ctor
// il2cpp: void Settings_MapEditorInputSettings___ctor (Settings_MapEditorInputSettings_o* __this, const MethodInfo* method);
// 0x5b4f890

void Settings_MapEditorInputSettings___ctor(Settings_MapEditorInputSettings_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  Settings_KeybindSetting_o *pSVar2;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  MethodInfo *method_06;
  MethodInfo *method_07;
  MethodInfo *method_08;
  MethodInfo *method_09;
  MethodInfo *method_10;
  MethodInfo *method_11;
  MethodInfo *method_12;
  MethodInfo *method_13;
  MethodInfo *method_14;
  MethodInfo *method_15;
  MethodInfo *method_16;
  MethodInfo *method_17;
  MethodInfo *method_18;
  MethodInfo *method_19;
  MethodInfo *method_20;
  MethodInfo *method_21;
  MethodInfo *method_22;
  MethodInfo *method_23;
  MethodInfo *method_24;
  MethodInfo *method_25;
  MethodInfo *method_26;
  MethodInfo *method_27;
  MethodInfo *method_28;
  MethodInfo *method_29;
  MethodInfo *method_30;
  MethodInfo *method_31;
  MethodInfo *method_32;
  MethodInfo *method_33;
  MethodInfo *method_34;
  MethodInfo *method_35;
  MethodInfo *method_36;
  MethodInfo *method_37;
  
  if (Il2CppMethodInitialized_075472b1 == '\0') {
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
    Il2CppMethodInitialized_075472b1 = '\x01';
  }
  pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
  if (pSVar1 == (System_String_array *)0x0) {
label_05b50ec4:
    ThrowNullReferenceException();
  }
  if ((int)pSVar1->max_length != 0) {
    pSVar1->m_Items[0] = "W";
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
    if ((pSVar1->max_length & 0xfffffffe) != 0) {
      pSVar1->m_Items[1] = "None";
      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
      pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
      Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_00);
      (__this->fields).Forward = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Forward);
      pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
      if (pSVar1 == (System_String_array *)0x0) goto label_05b50ec4;
      if ((int)pSVar1->max_length != 0) {
        pSVar1->m_Items[0] = "S";
        Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
        if ((pSVar1->max_length & 0xfffffffe) != 0) {
          pSVar1->m_Items[1] = "None";
          Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
          pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
          Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_01);
          (__this->fields).Back = pSVar2;
          Il2CppCodeGenWriteBarrier(&(__this->fields).Back);
          pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
          if (pSVar1 == (System_String_array *)0x0) goto label_05b50ec4;
          if ((int)pSVar1->max_length != 0) {
            pSVar1->m_Items[0] = "A";
            Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
            if ((pSVar1->max_length & 0xfffffffe) != 0) {
              pSVar1->m_Items[1] = "None";
              Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
              pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
              Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_02);
              (__this->fields).Left = pSVar2;
              Il2CppCodeGenWriteBarrier(&(__this->fields).Left);
              pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
              if (pSVar1 == (System_String_array *)0x0) goto label_05b50ec4;
              if ((int)pSVar1->max_length != 0) {
                pSVar1->m_Items[0] = "D";
                Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                if ((pSVar1->max_length & 0xfffffffe) != 0) {
                  pSVar1->m_Items[1] = "None";
                  Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                  Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_03);
                  (__this->fields).Right = pSVar2;
                  Il2CppCodeGenWriteBarrier(&(__this->fields).Right);
                  pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                  if (pSVar1 == (System_String_array *)0x0) goto label_05b50ec4;
                  if ((int)pSVar1->max_length != 0) {
                    pSVar1->m_Items[0] = "E";
                    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                    if ((pSVar1->max_length & 0xfffffffe) != 0) {
                      pSVar1->m_Items[1] = "None";
                      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                      pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                      Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_04);
                      (__this->fields).Up = pSVar2;
                      Il2CppCodeGenWriteBarrier(&(__this->fields).Up);
                      pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                      if (pSVar1 == (System_String_array *)0x0) goto label_05b50ec4;
                      if ((int)pSVar1->max_length != 0) {
                        pSVar1->m_Items[0] = "Q";
                        Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                        if ((pSVar1->max_length & 0xfffffffe) != 0) {
                          pSVar1->m_Items[1] = "None";
                          Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                          pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                          Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_05);
                          (__this->fields).Down = pSVar2;
                          Il2CppCodeGenWriteBarrier(&(__this->fields).Down);
                          pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                          if (pSVar1 == (System_String_array *)0x0) goto label_05b50ec4;
                          if ((int)pSVar1->max_length != 0) {
                            pSVar1->m_Items[0] = "LeftShift";
                            Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                            if ((pSVar1->max_length & 0xfffffffe) != 0) {
                              pSVar1->m_Items[1] = "None";
                              Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                              pSVar2 = il2cpp_codegen_object_new
                                                 ((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                              Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_06);
                              (__this->fields).Slow = pSVar2;
                              Il2CppCodeGenWriteBarrier(&(__this->fields).Slow);
                              pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                              if (pSVar1 == (System_String_array *)0x0) goto label_05b50ec4;
                              if ((int)pSVar1->max_length != 0) {
                                pSVar1->m_Items[0] = "LeftAlt";
                                Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                  pSVar1->m_Items[1] = "None";
                                  Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                  pSVar2 = il2cpp_codegen_object_new
                                                     ((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                                  Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_07);
                                  (__this->fields).Fast = pSVar2;
                                  Il2CppCodeGenWriteBarrier(&(__this->fields).Fast);
                                  pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                  if (pSVar1 == (System_String_array *)0x0) goto label_05b50ec4;
                                  if ((int)pSVar1->max_length != 0) {
                                    pSVar1->m_Items[0] = "Mouse2";
                                    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                    if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                      pSVar1->m_Items[1] = "None";
                                      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                      pSVar2 = il2cpp_codegen_object_new
                                                         ((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                                      Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_08);
                                      (__this->fields).Pan = pSVar2;
                                      Il2CppCodeGenWriteBarrier(&(__this->fields).Pan);
                                      pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                      if (pSVar1 == (System_String_array *)0x0) goto label_05b50ec4;
                                      if ((int)pSVar1->max_length != 0) {
                                        pSVar1->m_Items[0] = "WheelUp";
                                        Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                        if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                          pSVar1->m_Items[1] = "None";
                                          Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                          pSVar2 = il2cpp_codegen_object_new
                                                             ((Il2CppClass *)TypeInfo_Settings_KeybindSetting)
                                          ;
                                          Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_09);
                                          (__this->fields).ZoomIn = pSVar2;
                                          Il2CppCodeGenWriteBarrier(&(__this->fields).ZoomIn);
                                          pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                          if (pSVar1 == (System_String_array *)0x0) goto label_05b50ec4;
                                          if ((int)pSVar1->max_length != 0) {
                                            pSVar1->m_Items[0] = "WheelDown";
                                            Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                            if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                              pSVar1->m_Items[1] = "None";
                                              Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                              pSVar2 = il2cpp_codegen_object_new
                                                                 ((Il2CppClass *)
                                                                  TypeInfo_Settings_KeybindSetting);
                                              Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_10);
                                              (__this->fields).ZoomOut = pSVar2;
                                              Il2CppCodeGenWriteBarrier(&(__this->fields).ZoomOut);
                                              pSVar1 = (System_String_array *)
                                                       SZArrayNew(TypeInfo_string_array,2);
                                              if (pSVar1 == (System_String_array *)0x0) goto label_05b50ec4;
                                              if ((int)pSVar1->max_length != 0) {
                                                pSVar1->m_Items[0] = "Mouse0";
                                                Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                  pSVar1->m_Items[1] = "None";
                                                  Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                  pSVar2 = il2cpp_codegen_object_new
                                                                     ((Il2CppClass *)
                                                                      TypeInfo_Settings_KeybindSetting);
                                                  Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_11);
                                                  (__this->fields).Select = pSVar2;
                                                  Il2CppCodeGenWriteBarrier(&(__this->fields).Select);
                                                  pSVar1 = (System_String_array *)
                                                           SZArrayNew(TypeInfo_string_array,2);
                                                  if (pSVar1 == (System_String_array *)0x0) goto label_05b50ec4;
                                                  if ((int)pSVar1->max_length != 0) {
                                                    pSVar1->m_Items[0] = "LeftControl";
                                                    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                    if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                      pSVar1->m_Items[1] = "None";
                                                      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                      pSVar2 = il2cpp_codegen_object_new
                                                                         ((Il2CppClass *)
                                                                          TypeInfo_Settings_KeybindSetting);
                                                      Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_12);
                                                      (__this->fields).Multiselect = pSVar2;
                                                      Il2CppCodeGenWriteBarrier(&(__this->fields).Multiselect)
                                                      ;
                                                      pSVar1 = (System_String_array *)
                                                               SZArrayNew(TypeInfo_string_array,2);
                                                      if (pSVar1 == (System_String_array *)0x0)
                                                      goto label_05b50ec4;
                                                      if ((int)pSVar1->max_length != 0) {
                                                        pSVar1->m_Items[0] = "Escape";
                                                        Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                        if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                          pSVar1->m_Items[1] = "None";
                                                          Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                          pSVar2 = il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                              TypeInfo_Settings_KeybindSetting
                                                                             );
                                                          Settings_KeybindSetting___ctor
                                                                    (pSVar2,pSVar1,method_13);
                                                          (__this->fields).Deselect = pSVar2;
                                                          Il2CppCodeGenWriteBarrier
                                                                    (&(__this->fields).Deselect);
                                                          pSVar1 = (System_String_array *)
                                                                   SZArrayNew(TypeInfo_string_array,2);
                                                          if (pSVar1 == (System_String_array *)0x0)
                                                          goto label_05b50ec4;
                                                          if ((int)pSVar1->max_length != 0) {
                                                            pSVar1->m_Items[0] = "Mouse1";
                                                            Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                            if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                              pSVar1->m_Items[1] = "None";
                                                              Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                              pSVar2 = il2cpp_codegen_object_new
                                                                                 ((Il2CppClass *)
                                                                                                                                                                    
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_14)
                                                       ;
                                                       (__this->fields).RotateCamera = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).RotateCamera);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b50ec4;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "Space";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_15)
                                                       ;
                                                       (__this->fields).AddObject = pSVar2;
                                                       Il2CppCodeGenWriteBarrier(&(__this->fields).AddObject);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b50ec4;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "C";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_16)
                                                       ;
                                                       (__this->fields).ChangeGizmo = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).ChangeGizmo);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b50ec4;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "G";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_17)
                                                       ;
                                                       (__this->fields).ToggleSnap = pSVar2;
                                                       Il2CppCodeGenWriteBarrier(&(__this->fields).ToggleSnap)
                                                       ;
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b50ec4;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "Delete";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_18)
                                                       ;
                                                       (__this->fields).Delete = pSVar2;
                                                       Il2CppCodeGenWriteBarrier(&(__this->fields).Delete);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b50ec4;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "LeftControl+C";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_19)
                                                       ;
                                                       (__this->fields).CopyObjects = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).CopyObjects);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b50ec4;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "LeftControl+V";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_20)
                                                       ;
                                                       (__this->fields).Paste = pSVar2;
                                                       Il2CppCodeGenWriteBarrier(&(__this->fields).Paste);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b50ec4;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "LeftControl+X";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_21)
                                                       ;
                                                       (__this->fields).Cut = pSVar2;
                                                       Il2CppCodeGenWriteBarrier(&(__this->fields).Cut);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b50ec4;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "LeftControl+Z";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_22)
                                                       ;
                                                       (__this->fields).Undo = pSVar2;
                                                       Il2CppCodeGenWriteBarrier(&(__this->fields).Undo);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b50ec4;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "LeftControl+Y";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_23)
                                                       ;
                                                       (__this->fields).Redo = pSVar2;
                                                       Il2CppCodeGenWriteBarrier(&(__this->fields).Redo);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b50ec4;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "LeftControl+S";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_24)
                                                       ;
                                                       (__this->fields).SaveMap = pSVar2;
                                                       Il2CppCodeGenWriteBarrier(&(__this->fields).SaveMap);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b50ec4;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "LeftArrow";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_25)
                                                       ;
                                                       (__this->fields).SnapCameraLeft = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).SnapCameraLeft);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b50ec4;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "RightArrow";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_26)
                                                       ;
                                                       (__this->fields).SnapCameraRight = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).SnapCameraRight);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b50ec4;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "UpArrow";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_27)
                                                       ;
                                                       (__this->fields).SnapCameraUp = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).SnapCameraUp);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b50ec4;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "DownArrow";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_28)
                                                       ;
                                                       (__this->fields).SnapCameraDown = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).SnapCameraDown);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b50ec4;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "O";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_29)
                                                       ;
                                                       (__this->fields).ToggleOrthographic = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).ToggleOrthographic);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b50ec4;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "V";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_30)
                                                       ;
                                                       (__this->fields).VertexSnap = pSVar2;
                                                       Il2CppCodeGenWriteBarrier(&(__this->fields).VertexSnap)
                                                       ;
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b50ec4;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "Mouse2";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_31)
                                                       ;
                                                       (__this->fields).BrushReroll = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).BrushReroll);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b50ec4;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "LeftShift";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_32)
                                                       ;
                                                       (__this->fields).BrushCount = pSVar2;
                                                       Il2CppCodeGenWriteBarrier(&(__this->fields).BrushCount)
                                                       ;
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b50ec4;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "LeftControl";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_33)
                                                       ;
                                                       (__this->fields).BrushCurve = pSVar2;
                                                       Il2CppCodeGenWriteBarrier(&(__this->fields).BrushCurve)
                                                       ;
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b50ec4;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "1";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_34)
                                                       ;
                                                       (__this->fields).BrushCurveAxisX = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).BrushCurveAxisX);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b50ec4;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "2";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_35)
                                                       ;
                                                       (__this->fields).BrushCurveAxisY = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).BrushCurveAxisY);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b50ec4;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "3";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_36)
                                                       ;
                                                       (__this->fields).BrushCurveAxisZ = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).BrushCurveAxisZ);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b50ec4;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "0";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_37)
                                                       ;
                                                       (__this->fields).BrushCurveAxisNone = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).BrushCurveAxisNone);
                                                       Settings_SaveableSettingsContainer___ctor
                                                                 ((Settings_SaveableSettingsContainer_o *)
                                                                  __this,(MethodInfo *)0x0);
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


