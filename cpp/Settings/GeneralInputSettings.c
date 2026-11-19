// Type: Settings.GeneralInputSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Settings/GeneralInputSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/GeneralInputSettings.cs
// --------------------------------

// Settings.GeneralInputSettings$$get_FileName
// il2cpp: System_String_o* Settings_GeneralInputSettings__get_FileName (Settings_GeneralInputSettings_o* __this, const MethodInfo* method);
// 0x5b4bbd0

System_String_o *
Settings_GeneralInputSettings__get_FileName(Settings_GeneralInputSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075472a8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"GeneralInput.json");
    Il2CppMethodInitialized_075472a8 = '\x01';
  }
  return "GeneralInput.json";
}


// Settings.GeneralInputSettings$$.ctor
// il2cpp: void Settings_GeneralInputSettings___ctor (Settings_GeneralInputSettings_o* __this, const MethodInfo* method);
// 0x5b4bc00

void Settings_GeneralInputSettings___ctor(Settings_GeneralInputSettings_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  Settings_KeybindSetting_o *pSVar2;
  Settings_BoolSetting_o *pSVar3;
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
  
  if (Il2CppMethodInitialized_075472a9 == '\0') {
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
    Il2CppMethodInitialized_075472a9 = '\x01';
  }
  pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
  if (pSVar1 == (System_String_array *)0x0) {
label_05b4cd67:
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
      if (pSVar1 == (System_String_array *)0x0) goto label_05b4cd67;
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
          if (pSVar1 == (System_String_array *)0x0) goto label_05b4cd67;
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
              if (pSVar1 == (System_String_array *)0x0) goto label_05b4cd67;
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
                  if (pSVar1 == (System_String_array *)0x0) goto label_05b4cd67;
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
                      if (pSVar1 == (System_String_array *)0x0) goto label_05b4cd67;
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
                          if (pSVar1 == (System_String_array *)0x0) goto label_05b4cd67;
                          if ((int)pSVar1->max_length != 0) {
                            pSVar1->m_Items[0] = "LeftShift";
                            Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                            if ((pSVar1->max_length & 0xfffffffe) != 0) {
                              pSVar1->m_Items[1] = "None";
                              Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                              pSVar2 = il2cpp_codegen_object_new
                                                 ((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                              Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_06);
                              (__this->fields).Modifier = pSVar2;
                              Il2CppCodeGenWriteBarrier(&(__this->fields).Modifier);
                              pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                              if (pSVar1 == (System_String_array *)0x0) goto label_05b4cd67;
                              if ((int)pSVar1->max_length != 0) {
                                pSVar1->m_Items[0] = "Period";
                                Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                  pSVar1->m_Items[1] = "None";
                                  Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                  pSVar2 = il2cpp_codegen_object_new
                                                     ((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                                  Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_07);
                                  (__this->fields).Autorun = pSVar2;
                                  Il2CppCodeGenWriteBarrier(&(__this->fields).Autorun);
                                  pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                  if (pSVar1 == (System_String_array *)0x0) goto label_05b4cd67;
                                  if ((int)pSVar1->max_length != 0) {
                                    pSVar1->m_Items[0] = "P";
                                    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                    if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                      pSVar1->m_Items[1] = "None";
                                      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                      pSVar2 = il2cpp_codegen_object_new
                                                         ((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                                      Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_08);
                                      (__this->fields).Pause = pSVar2;
                                      Il2CppCodeGenWriteBarrier(&(__this->fields).Pause);
                                      pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                      if (pSVar1 == (System_String_array *)0x0) goto label_05b4cd67;
                                      if ((int)pSVar1->max_length != 0) {
                                        pSVar1->m_Items[0] = "T";
                                        Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                        if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                          pSVar1->m_Items[1] = "None";
                                          Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                          pSVar2 = il2cpp_codegen_object_new
                                                             ((Il2CppClass *)TypeInfo_Settings_KeybindSetting)
                                          ;
                                          Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_09);
                                          (__this->fields).ChangeCharacter = pSVar2;
                                          Il2CppCodeGenWriteBarrier(&(__this->fields).ChangeCharacter);
                                          pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                          if (pSVar1 == (System_String_array *)0x0) goto label_05b4cd67;
                                          if ((int)pSVar1->max_length != 0) {
                                            pSVar1->m_Items[0] = "F5";
                                            Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                            if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                              pSVar1->m_Items[1] = "None";
                                              Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                              pSVar2 = il2cpp_codegen_object_new
                                                                 ((Il2CppClass *)
                                                                  TypeInfo_Settings_KeybindSetting);
                                              Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_10);
                                              (__this->fields).RestartGame = pSVar2;
                                              Il2CppCodeGenWriteBarrier(&(__this->fields).RestartGame);
                                              pSVar1 = (System_String_array *)
                                                       SZArrayNew(TypeInfo_string_array,2);
                                              if (pSVar1 == (System_String_array *)0x0) goto label_05b4cd67;
                                              if ((int)pSVar1->max_length != 0) {
                                                pSVar1->m_Items[0] = "Tab";
                                                Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                  pSVar1->m_Items[1] = "None";
                                                  Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                  pSVar2 = il2cpp_codegen_object_new
                                                                     ((Il2CppClass *)
                                                                      TypeInfo_Settings_KeybindSetting);
                                                  Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_11);
                                                  (__this->fields).ToggleScoreboard = pSVar2;
                                                  Il2CppCodeGenWriteBarrier
                                                            (&(__this->fields).ToggleScoreboard);
                                                  pSVar1 = (System_String_array *)
                                                           SZArrayNew(TypeInfo_string_array,2);
                                                  if (pSVar1 == (System_String_array *)0x0) goto label_05b4cd67;
                                                  if ((int)pSVar1->max_length != 0) {
                                                    pSVar1->m_Items[0] = "M";
                                                    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                    if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                      pSVar1->m_Items[1] = "None";
                                                      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                      pSVar2 = il2cpp_codegen_object_new
                                                                         ((Il2CppClass *)
                                                                          TypeInfo_Settings_KeybindSetting);
                                                      Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_12);
                                                      (__this->fields).ToggleMap = pSVar2;
                                                      Il2CppCodeGenWriteBarrier(&(__this->fields).ToggleMap);
                                                      pSVar1 = (System_String_array *)
                                                               SZArrayNew(TypeInfo_string_array,2);
                                                      if (pSVar1 == (System_String_array *)0x0)
                                                      goto label_05b4cd67;
                                                      if ((int)pSVar1->max_length != 0) {
                                                        pSVar1->m_Items[0] = "Return";
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
                                                          (__this->fields).Chat = pSVar2;
                                                          Il2CppCodeGenWriteBarrier(&(__this->fields).Chat);
                                                          pSVar1 = (System_String_array *)
                                                                   SZArrayNew(TypeInfo_string_array,2);
                                                          if (pSVar1 == (System_String_array *)0x0)
                                                          goto label_05b4cd67;
                                                          if ((int)pSVar1->max_length != 0) {
                                                            pSVar1->m_Items[0] = "V";
                                                            Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                            if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                              pSVar1->m_Items[1] = "None";
                                                              Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                              pSVar2 = il2cpp_codegen_object_new
                                                                                 ((Il2CppClass *)
                                                                                                                                                                    
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_14)
                                                       ;
                                                       (__this->fields).PushToTalk = pSVar2;
                                                       Il2CppCodeGenWriteBarrier(&(__this->fields).PushToTalk)
                                                       ;
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b4cd67;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "C";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_15)
                                                       ;
                                                       (__this->fields).ChangeCamera = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).ChangeCamera);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b4cd67;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "Mouse1";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_16)
                                                       ;
                                                       (__this->fields).RotateWOWCamera = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).RotateWOWCamera);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b4cd67;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "WheelUp";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_17)
                                                       ;
                                                       (__this->fields).ZoomIn = pSVar2;
                                                       Il2CppCodeGenWriteBarrier(&(__this->fields).ZoomIn);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b4cd67;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "WheelDown";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_18)
                                                       ;
                                                       (__this->fields).ZoomOut = pSVar2;
                                                       Il2CppCodeGenWriteBarrier(&(__this->fields).ZoomOut);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b4cd67;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "X";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_19)
                                                       ;
                                                       (__this->fields).HideCursor = pSVar2;
                                                       Il2CppCodeGenWriteBarrier(&(__this->fields).HideCursor)
                                                       ;
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b4cd67;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "F7";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_20)
                                                       ;
                                                       (__this->fields).HideChat = pSVar2;
                                                       Il2CppCodeGenWriteBarrier(&(__this->fields).HideChat);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b4cd67;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "1";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_21)
                                                       ;
                                                       (__this->fields).SpectatePreviousPlayer = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).SpectatePreviousPlayer);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b4cd67;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "2";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_22)
                                                       ;
                                                       (__this->fields).SpectateNextPlayer = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).SpectateNextPlayer);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b4cd67;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "Y";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_23)
                                                       ;
                                                       (__this->fields).SkipCutscene = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).SkipCutscene);
                                                       pSVar3 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                           TypeInfo_Settings_BoolSetting);
                                                       if (Il2CppMethodInitialized_075472d6 == '\0') {
                                                         il2cpp_codegen_initialize_runtime_metadata
                                                                   (&
                                                       MethodInfo_Settings_TypedSetting_bool_ctor);
                                                       Il2CppMethodInitialized_075472d6 = '\x01';
                                                       }
                                                       Settings_TypedSetting_bool____ctor_42da050
                                                                 ((Settings_TypedSetting_bool__o *)pSVar3,true
                                                                  ,(MethodInfo_42DA050 *)
                                                                   MethodInfo_Settings_TypedSetting_bool_ctor)
                                                       ;
                                                       (__this->fields).TapScoreboard = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).TapScoreboard);
                                                       pSVar3 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                           TypeInfo_Settings_BoolSetting);
                                                       if (Il2CppMethodInitialized_075472d6 == '\0') {
                                                         il2cpp_codegen_initialize_runtime_metadata
                                                                   (&
                                                       MethodInfo_Settings_TypedSetting_bool_ctor);
                                                       Il2CppMethodInitialized_075472d6 = '\x01';
                                                       }
                                                       Settings_TypedSetting_bool____ctor_42da050
                                                                 ((Settings_TypedSetting_bool__o *)pSVar3,true
                                                                  ,(MethodInfo_42DA050 *)
                                                                   MethodInfo_Settings_TypedSetting_bool_ctor)
                                                       ;
                                                       (__this->fields).TapMap = pSVar3;
                                                       Il2CppCodeGenWriteBarrier(&(__this->fields).TapMap);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b4cd67;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "F6";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_24)
                                                       ;
                                                       (__this->fields).HideUI = pSVar2;
                                                       Il2CppCodeGenWriteBarrier(&(__this->fields).HideUI);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b4cd67;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "F11";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_25)
                                                       ;
                                                       (__this->fields).DebugWindow = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).DebugWindow);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b4cd67;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "LeftControl+K";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "RightControl+K";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_26)
                                                       ;
                                                       (__this->fields).OpenSearchPalette = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).OpenSearchPalette);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b4cd67;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "LeftControl+F";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "RightControl+F";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_27)
                                                       ;
                                                       (__this->fields).OpenCurrentScreenSearch = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).OpenCurrentScreenSearch);
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
  ThrowIndexOutOfRangeException();
}


