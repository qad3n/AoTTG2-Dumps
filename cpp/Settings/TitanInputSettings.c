// Type: Settings.TitanInputSettings
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/TitanInputSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/TitanInputSettings.cs
// --------------------------------

// Settings.TitanInputSettings$$get_FileName
// il2cpp: System_String_o* Settings_TitanInputSettings__get_FileName (Settings_TitanInputSettings_o* __this, const MethodInfo* method);
// 0x181f29810

System_String_o *
Settings_TitanInputSettings__get_FileName(Settings_TitanInputSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345468 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"TitanInput.json");
    Il2CppMethodInitialized_184345468 = '\x01';
  }
  return "TitanInput.json";
}


// Settings.TitanInputSettings$$.ctor
// il2cpp: void Settings_TitanInputSettings___ctor (Settings_TitanInputSettings_o* __this, const MethodInfo* method);
// 0x181f28620

void Settings_TitanInputSettings___ctor(Settings_TitanInputSettings_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_array *pSVar2;
  Settings_KeybindSetting_o *pSVar3;
  
  if (Il2CppMethodInitialized_184345469 == '\0') {
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
    Il2CppMethodInitialized_184345469 = '\x01';
  }
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
  pSVar1 = "LeftControl";
  if (pSVar2 != (System_String_array *)0x0) {
    if ((int)pSVar2->max_length != 0) {
      pSVar2->m_Items[0] = "LeftControl";
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
      pSVar1 = "None";
      if (1 < (uint)pSVar2->max_length) {
        pSVar2->m_Items[1] = "None";
        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
        pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
        Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
        (__this->fields).Kick = pSVar3;
        Il2CppCodeGenWriteBarrier(&(__this->fields).Kick,pSVar3);
        pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
        pSVar1 = "Space";
        if (pSVar2 == (System_String_array *)0x0) goto label_181f297fd;
        if ((int)pSVar2->max_length != 0) {
          pSVar2->m_Items[0] = "Space";
          Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
          pSVar1 = "None";
          if (1 < (uint)pSVar2->max_length) {
            pSVar2->m_Items[1] = "None";
            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
            pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
            Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
            (__this->fields).Jump = pSVar3;
            Il2CppCodeGenWriteBarrier(&(__this->fields).Jump,pSVar3);
            pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
            pSVar1 = "Z";
            if (pSVar2 == (System_String_array *)0x0) goto label_181f297fd;
            if ((int)pSVar2->max_length != 0) {
              pSVar2->m_Items[0] = "Z";
              Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
              pSVar1 = "None";
              if (1 < (uint)pSVar2->max_length) {
                pSVar2->m_Items[1] = "None";
                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
                (__this->fields).Sit = pSVar3;
                Il2CppCodeGenWriteBarrier(&(__this->fields).Sit,pSVar3);
                pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                pSVar1 = "LeftAlt";
                if (pSVar2 == (System_String_array *)0x0) goto label_181f297fd;
                if ((int)pSVar2->max_length != 0) {
                  pSVar2->m_Items[0] = "LeftAlt";
                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                  pSVar1 = "None";
                  if (1 < (uint)pSVar2->max_length) {
                    pSVar2->m_Items[1] = "None";
                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                    Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
                    (__this->fields).Walk = pSVar3;
                    Il2CppCodeGenWriteBarrier(&(__this->fields).Walk,pSVar3);
                    pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                    pSVar1 = "LeftShift";
                    if (pSVar2 == (System_String_array *)0x0) goto label_181f297fd;
                    if ((int)pSVar2->max_length != 0) {
                      pSVar2->m_Items[0] = "LeftShift";
                      Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                      pSVar1 = "None";
                      if (1 < (uint)pSVar2->max_length) {
                        pSVar2->m_Items[1] = "None";
                        Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                        pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                        Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
                        (__this->fields).Sprint = pSVar3;
                        Il2CppCodeGenWriteBarrier(&(__this->fields).Sprint,pSVar3);
                        pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                        pSVar1 = "Mouse2";
                        if (pSVar2 == (System_String_array *)0x0) goto label_181f297fd;
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
                            (__this->fields).CoverNape1 = pSVar3;
                            Il2CppCodeGenWriteBarrier(&(__this->fields).CoverNape1,pSVar3);
                            pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                            pSVar1 = "Mouse0";
                            if (pSVar2 == (System_String_array *)0x0) goto label_181f297fd;
                            if ((int)pSVar2->max_length != 0) {
                              pSVar2->m_Items[0] = "Mouse0";
                              Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                              pSVar1 = "None";
                              if (1 < (uint)pSVar2->max_length) {
                                pSVar2->m_Items[1] = "None";
                                Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                                pSVar3 = il2cpp_codegen_object_new
                                                   ((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                                Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
                                (__this->fields).AttackPunch = pSVar3;
                                Il2CppCodeGenWriteBarrier(&(__this->fields).AttackPunch,pSVar3);
                                pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                pSVar1 = "Mouse1";
                                if (pSVar2 == (System_String_array *)0x0) goto label_181f297fd;
                                if ((int)pSVar2->max_length != 0) {
                                  pSVar2->m_Items[0] = "Mouse1";
                                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                  pSVar1 = "None";
                                  if (1 < (uint)pSVar2->max_length) {
                                    pSVar2->m_Items[1] = "None";
                                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                                    pSVar3 = il2cpp_codegen_object_new
                                                       ((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                                    Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
                                    (__this->fields).AttackBellyFlop = pSVar3;
                                    Il2CppCodeGenWriteBarrier(&(__this->fields).AttackBellyFlop,pSVar3);
                                    pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                    pSVar1 = "Q";
                                    if (pSVar2 == (System_String_array *)0x0) goto label_181f297fd;
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
                                        (__this->fields).AttackSlapL = pSVar3;
                                        Il2CppCodeGenWriteBarrier(&(__this->fields).AttackSlapL,pSVar3);
                                        pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                        pSVar1 = "E";
                                        if (pSVar2 == (System_String_array *)0x0) goto label_181f297fd;
                                        if ((int)pSVar2->max_length != 0) {
                                          pSVar2->m_Items[0] = "E";
                                          Il2CppCodeGenWriteBarrier(pSVar2->m_Items,pSVar1);
                                          pSVar1 = "None";
                                          if (1 < (uint)pSVar2->max_length) {
                                            pSVar2->m_Items[1] = "None";
                                            Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1,pSVar1);
                                            pSVar3 = il2cpp_codegen_object_new
                                                               ((Il2CppClass *)
                                                                TypeInfo_Settings_KeybindSetting);
                                            Settings_KeybindSetting___ctor(pSVar3,pSVar2,(MethodInfo *)0x0);
                                            (__this->fields).AttackSlapR = pSVar3;
                                            Il2CppCodeGenWriteBarrier(&(__this->fields).AttackSlapR,pSVar3);
                                            pSVar2 = (System_String_array *)
                                                     SZArrayNew(TypeInfo_string_array,2);
                                            pSVar1 = "R";
                                            if (pSVar2 == (System_String_array *)0x0) goto label_181f297fd;
                                            if ((int)pSVar2->max_length != 0) {
                                              pSVar2->m_Items[0] = "R";
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
                                                (__this->fields).AttackRockThrow = pSVar3;
                                                Il2CppCodeGenWriteBarrier
                                                          (&(__this->fields).AttackRockThrow,pSVar3);
                                                pSVar2 = (System_String_array *)
                                                         SZArrayNew(TypeInfo_string_array,2);
                                                pSVar1 = "Alpha1";
                                                if (pSVar2 == (System_String_array *)0x0) goto label_181f297fd;
                                                if ((int)pSVar2->max_length != 0) {
                                                  pSVar2->m_Items[0] = "Alpha1";
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
                                                    (__this->fields).AttackBiteL = pSVar3;
                                                    Il2CppCodeGenWriteBarrier
                                                              (&(__this->fields).AttackBiteL,pSVar3);
                                                    pSVar2 = (System_String_array *)
                                                             SZArrayNew(TypeInfo_string_array,2);
                                                    pSVar1 = "Alpha2";
                                                    if (pSVar2 == (System_String_array *)0x0)
                                                    goto label_181f297fd;
                                                    if ((int)pSVar2->max_length != 0) {
                                                      pSVar2->m_Items[0] = "Alpha2";
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
                                                        (__this->fields).AttackBiteF = pSVar3;
                                                        Il2CppCodeGenWriteBarrier
                                                                  (&(__this->fields).AttackBiteF,pSVar3);
                                                        pSVar2 = (System_String_array *)
                                                                 SZArrayNew(TypeInfo_string_array,2);
                                                        pSVar1 = "Alpha3";
                                                        if (pSVar2 == (System_String_array *)0x0)
                                                        goto label_181f297fd;
                                                        if ((int)pSVar2->max_length != 0) {
                                                          pSVar2->m_Items[0] = "Alpha3";
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
                                                       (__this->fields).AttackBiteR = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AttackBiteR,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "Alpha4";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f297fd;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "Alpha4";
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
                                                       (__this->fields).AttackHitFace = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AttackHitFace,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "Alpha5";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f297fd;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "Alpha5";
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
                                                       (__this->fields).AttackHitBack = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AttackHitBack,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "None";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f297fd;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "None";
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
                                                       (__this->fields).AttackSlam = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AttackSlam,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "None";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f297fd;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "None";
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
                                                       (__this->fields).AttackStomp = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AttackStomp,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "None";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f297fd;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "None";
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
                                                       (__this->fields).AttackSwing = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AttackSwing,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "None";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f297fd;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "None";
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
                                                       (__this->fields).AttackGrabAirFar = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AttackGrabAirFar,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "None";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f297fd;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "None";
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
                                                       (__this->fields).AttackGrabAir = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AttackGrabAir,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "None";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f297fd;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "None";
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
                                                       (__this->fields).AttackGrabBody = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AttackGrabBody,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "None";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f297fd;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "None";
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
                                                       (__this->fields).AttackGrabCore = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AttackGrabCore,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "None";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f297fd;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "None";
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
                                                       (__this->fields).AttackGrabGround = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AttackGrabGround,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "None";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f297fd;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "None";
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
                                                       (__this->fields).AttackGrabHead = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AttackGrabHead,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "None";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f297fd;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "None";
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
                                                       (__this->fields).AttackGrabHigh = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AttackGrabHigh,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "None";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f297fd;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "None";
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
                                                       (__this->fields).AttackSlapHighL = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AttackSlapHighL,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "None";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f297fd;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "None";
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
                                                       (__this->fields).AttackSlapHighR = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AttackSlapHighR,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "None";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f297fd;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "None";
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
                                                       (__this->fields).AttackSlapLowL = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AttackSlapLowL,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "None";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f297fd;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "None";
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
                                                       (__this->fields).AttackSlapLowR = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AttackSlapLowR,pSVar3);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar1 = "None";
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_181f297fd;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "None";
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
                                                       (__this->fields).AttackBrushChest = pSVar3;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AttackBrushChest,pSVar3);
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
    ThrowIndexOutOfRangeException();
  }
label_181f297fd:
  ThrowNullReferenceException();
}


