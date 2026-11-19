// Type: Settings.TitanInputSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/TitanInputSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/TitanInputSettings.cs
// --------------------------------

// Settings.TitanInputSettings$$get_FileName
// il2cpp: System_String_o* Settings_TitanInputSettings__get_FileName (Settings_TitanInputSettings_o* __this, const MethodInfo* method);
// 0x5b50f30

System_String_o *
Settings_TitanInputSettings__get_FileName(Settings_TitanInputSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075472b2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TitanInput.json");
    Il2CppMethodInitialized_075472b2 = '\x01';
  }
  return "TitanInput.json";
}


// Settings.TitanInputSettings$$.ctor
// il2cpp: void Settings_TitanInputSettings___ctor (Settings_TitanInputSettings_o* __this, const MethodInfo* method);
// 0x5b4dc00

void Settings_TitanInputSettings___ctor(Settings_TitanInputSettings_o *__this,MethodInfo *method)

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
  
  if (Il2CppMethodInitialized_075472b3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"LeftAlt");
    il2cpp_codegen_initialize_runtime_metadata(&"Z");
    il2cpp_codegen_initialize_runtime_metadata(&"R");
    il2cpp_codegen_initialize_runtime_metadata(&"Alpha5");
    il2cpp_codegen_initialize_runtime_metadata(&"Q");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftShift");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"E");
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse1");
    il2cpp_codegen_initialize_runtime_metadata(&"Space");
    il2cpp_codegen_initialize_runtime_metadata(&"Alpha3");
    il2cpp_codegen_initialize_runtime_metadata(&"Alpha2");
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse2");
    il2cpp_codegen_initialize_runtime_metadata(&"Alpha1");
    il2cpp_codegen_initialize_runtime_metadata(&"Alpha4");
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse0");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftControl");
    Il2CppMethodInitialized_075472b3 = '\x01';
  }
  pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
  if (pSVar1 == (System_String_array *)0x0) {
label_05b4ed37:
    ThrowNullReferenceException();
  }
  if ((int)pSVar1->max_length != 0) {
    pSVar1->m_Items[0] = "LeftControl";
    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
    if ((pSVar1->max_length & 0xfffffffe) != 0) {
      pSVar1->m_Items[1] = "None";
      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
      pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
      Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_00);
      (__this->fields).Kick = pSVar2;
      Il2CppCodeGenWriteBarrier(&(__this->fields).Kick);
      pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
      if (pSVar1 == (System_String_array *)0x0) goto label_05b4ed37;
      if ((int)pSVar1->max_length != 0) {
        pSVar1->m_Items[0] = "Space";
        Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
        if ((pSVar1->max_length & 0xfffffffe) != 0) {
          pSVar1->m_Items[1] = "None";
          Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
          pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
          Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_01);
          (__this->fields).Jump = pSVar2;
          Il2CppCodeGenWriteBarrier(&(__this->fields).Jump);
          pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
          if (pSVar1 == (System_String_array *)0x0) goto label_05b4ed37;
          if ((int)pSVar1->max_length != 0) {
            pSVar1->m_Items[0] = "Z";
            Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
            if ((pSVar1->max_length & 0xfffffffe) != 0) {
              pSVar1->m_Items[1] = "None";
              Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
              pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
              Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_02);
              (__this->fields).Sit = pSVar2;
              Il2CppCodeGenWriteBarrier(&(__this->fields).Sit);
              pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
              if (pSVar1 == (System_String_array *)0x0) goto label_05b4ed37;
              if ((int)pSVar1->max_length != 0) {
                pSVar1->m_Items[0] = "LeftAlt";
                Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                if ((pSVar1->max_length & 0xfffffffe) != 0) {
                  pSVar1->m_Items[1] = "None";
                  Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                  pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                  Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_03);
                  (__this->fields).Walk = pSVar2;
                  Il2CppCodeGenWriteBarrier(&(__this->fields).Walk);
                  pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                  if (pSVar1 == (System_String_array *)0x0) goto label_05b4ed37;
                  if ((int)pSVar1->max_length != 0) {
                    pSVar1->m_Items[0] = "LeftShift";
                    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                    if ((pSVar1->max_length & 0xfffffffe) != 0) {
                      pSVar1->m_Items[1] = "None";
                      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                      pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                      Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_04);
                      (__this->fields).Sprint = pSVar2;
                      Il2CppCodeGenWriteBarrier(&(__this->fields).Sprint);
                      pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                      if (pSVar1 == (System_String_array *)0x0) goto label_05b4ed37;
                      if ((int)pSVar1->max_length != 0) {
                        pSVar1->m_Items[0] = "Mouse2";
                        Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                        if ((pSVar1->max_length & 0xfffffffe) != 0) {
                          pSVar1->m_Items[1] = "None";
                          Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                          pSVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                          Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_05);
                          (__this->fields).CoverNape1 = pSVar2;
                          Il2CppCodeGenWriteBarrier(&(__this->fields).CoverNape1);
                          pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                          if (pSVar1 == (System_String_array *)0x0) goto label_05b4ed37;
                          if ((int)pSVar1->max_length != 0) {
                            pSVar1->m_Items[0] = "Mouse0";
                            Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                            if ((pSVar1->max_length & 0xfffffffe) != 0) {
                              pSVar1->m_Items[1] = "None";
                              Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                              pSVar2 = il2cpp_codegen_object_new
                                                 ((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                              Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_06);
                              (__this->fields).AttackPunch = pSVar2;
                              Il2CppCodeGenWriteBarrier(&(__this->fields).AttackPunch);
                              pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                              if (pSVar1 == (System_String_array *)0x0) goto label_05b4ed37;
                              if ((int)pSVar1->max_length != 0) {
                                pSVar1->m_Items[0] = "Mouse1";
                                Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                  pSVar1->m_Items[1] = "None";
                                  Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                  pSVar2 = il2cpp_codegen_object_new
                                                     ((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                                  Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_07);
                                  (__this->fields).AttackBellyFlop = pSVar2;
                                  Il2CppCodeGenWriteBarrier(&(__this->fields).AttackBellyFlop);
                                  pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                  if (pSVar1 == (System_String_array *)0x0) goto label_05b4ed37;
                                  if ((int)pSVar1->max_length != 0) {
                                    pSVar1->m_Items[0] = "Q";
                                    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                    if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                      pSVar1->m_Items[1] = "None";
                                      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                      pSVar2 = il2cpp_codegen_object_new
                                                         ((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                                      Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_08);
                                      (__this->fields).AttackSlapL = pSVar2;
                                      Il2CppCodeGenWriteBarrier(&(__this->fields).AttackSlapL);
                                      pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                      if (pSVar1 == (System_String_array *)0x0) goto label_05b4ed37;
                                      if ((int)pSVar1->max_length != 0) {
                                        pSVar1->m_Items[0] = "E";
                                        Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                        if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                          pSVar1->m_Items[1] = "None";
                                          Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                          pSVar2 = il2cpp_codegen_object_new
                                                             ((Il2CppClass *)TypeInfo_Settings_KeybindSetting)
                                          ;
                                          Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_09);
                                          (__this->fields).AttackSlapR = pSVar2;
                                          Il2CppCodeGenWriteBarrier(&(__this->fields).AttackSlapR);
                                          pSVar1 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                          if (pSVar1 == (System_String_array *)0x0) goto label_05b4ed37;
                                          if ((int)pSVar1->max_length != 0) {
                                            pSVar1->m_Items[0] = "R";
                                            Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                            if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                              pSVar1->m_Items[1] = "None";
                                              Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                              pSVar2 = il2cpp_codegen_object_new
                                                                 ((Il2CppClass *)
                                                                  TypeInfo_Settings_KeybindSetting);
                                              Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_10);
                                              (__this->fields).AttackRockThrow = pSVar2;
                                              Il2CppCodeGenWriteBarrier(&(__this->fields).AttackRockThrow);
                                              pSVar1 = (System_String_array *)
                                                       SZArrayNew(TypeInfo_string_array,2);
                                              if (pSVar1 == (System_String_array *)0x0) goto label_05b4ed37;
                                              if ((int)pSVar1->max_length != 0) {
                                                pSVar1->m_Items[0] = "Alpha1";
                                                Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                  pSVar1->m_Items[1] = "None";
                                                  Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                  pSVar2 = il2cpp_codegen_object_new
                                                                     ((Il2CppClass *)
                                                                      TypeInfo_Settings_KeybindSetting);
                                                  Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_11);
                                                  (__this->fields).AttackBiteL = pSVar2;
                                                  Il2CppCodeGenWriteBarrier(&(__this->fields).AttackBiteL);
                                                  pSVar1 = (System_String_array *)
                                                           SZArrayNew(TypeInfo_string_array,2);
                                                  if (pSVar1 == (System_String_array *)0x0) goto label_05b4ed37;
                                                  if ((int)pSVar1->max_length != 0) {
                                                    pSVar1->m_Items[0] = "Alpha2";
                                                    Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                    if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                      pSVar1->m_Items[1] = "None";
                                                      Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                      pSVar2 = il2cpp_codegen_object_new
                                                                         ((Il2CppClass *)
                                                                          TypeInfo_Settings_KeybindSetting);
                                                      Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_12);
                                                      (__this->fields).AttackBiteF = pSVar2;
                                                      Il2CppCodeGenWriteBarrier(&(__this->fields).AttackBiteF)
                                                      ;
                                                      pSVar1 = (System_String_array *)
                                                               SZArrayNew(TypeInfo_string_array,2);
                                                      if (pSVar1 == (System_String_array *)0x0)
                                                      goto label_05b4ed37;
                                                      if ((int)pSVar1->max_length != 0) {
                                                        pSVar1->m_Items[0] = "Alpha3";
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
                                                          (__this->fields).AttackBiteR = pSVar2;
                                                          Il2CppCodeGenWriteBarrier
                                                                    (&(__this->fields).AttackBiteR);
                                                          pSVar1 = (System_String_array *)
                                                                   SZArrayNew(TypeInfo_string_array,2);
                                                          if (pSVar1 == (System_String_array *)0x0)
                                                          goto label_05b4ed37;
                                                          if ((int)pSVar1->max_length != 0) {
                                                            pSVar1->m_Items[0] = "Alpha4";
                                                            Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                            if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                              pSVar1->m_Items[1] = "None";
                                                              Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                              pSVar2 = il2cpp_codegen_object_new
                                                                                 ((Il2CppClass *)
                                                                                                                                                                    
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_14)
                                                       ;
                                                       (__this->fields).AttackHitFace = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AttackHitFace);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b4ed37;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "Alpha5";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_15)
                                                       ;
                                                       (__this->fields).AttackHitBack = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AttackHitBack);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b4ed37;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "None";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_16)
                                                       ;
                                                       (__this->fields).AttackSlam = pSVar2;
                                                       Il2CppCodeGenWriteBarrier(&(__this->fields).AttackSlam)
                                                       ;
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b4ed37;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "None";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_17)
                                                       ;
                                                       (__this->fields).AttackStomp = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AttackStomp);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b4ed37;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "None";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_18)
                                                       ;
                                                       (__this->fields).AttackSwing = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AttackSwing);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b4ed37;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "None";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_19)
                                                       ;
                                                       (__this->fields).AttackGrabAirFar = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AttackGrabAirFar);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b4ed37;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "None";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_20)
                                                       ;
                                                       (__this->fields).AttackGrabAir = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AttackGrabAir);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b4ed37;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "None";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_21)
                                                       ;
                                                       (__this->fields).AttackGrabBody = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AttackGrabBody);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b4ed37;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "None";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_22)
                                                       ;
                                                       (__this->fields).AttackGrabCore = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AttackGrabCore);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b4ed37;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "None";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_23)
                                                       ;
                                                       (__this->fields).AttackGrabGround = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AttackGrabGround);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b4ed37;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "None";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_24)
                                                       ;
                                                       (__this->fields).AttackGrabHead = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AttackGrabHead);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b4ed37;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "None";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_25)
                                                       ;
                                                       (__this->fields).AttackGrabHigh = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AttackGrabHigh);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b4ed37;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "None";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_26)
                                                       ;
                                                       (__this->fields).AttackSlapHighL = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AttackSlapHighL);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b4ed37;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "None";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_27)
                                                       ;
                                                       (__this->fields).AttackSlapHighR = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AttackSlapHighR);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b4ed37;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "None";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_28)
                                                       ;
                                                       (__this->fields).AttackSlapLowL = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AttackSlapLowL);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b4ed37;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "None";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_29)
                                                       ;
                                                       (__this->fields).AttackSlapLowR = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AttackSlapLowR);
                                                       pSVar1 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar1 == (System_String_array *)0x0)
                                                       goto label_05b4ed37;
                                                       if ((int)pSVar1->max_length != 0) {
                                                         pSVar1->m_Items[0] = "None";
                                                         Il2CppCodeGenWriteBarrier(pSVar1->m_Items);
                                                         if ((pSVar1->max_length & 0xfffffffe) != 0) {
                                                           pSVar1->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar1->m_Items + 1);
                                                           pSVar2 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar2,pSVar1,method_30)
                                                       ;
                                                       (__this->fields).AttackBrushChest = pSVar2;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AttackBrushChest);
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
  ThrowIndexOutOfRangeException();
}


