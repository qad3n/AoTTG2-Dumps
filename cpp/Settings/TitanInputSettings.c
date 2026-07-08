// Type: Settings.TitanInputSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/TitanInputSettings.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/Input/TitanInputSettings.cs  [prior source available (delta unverified)]
// --------------------------------

// Settings.TitanInputSettings$$get_FileName
// il2cpp: System_String_o* Settings_TitanInputSettings__get_FileName (Settings_TitanInputSettings_o* __this, const MethodInfo* method);
// 0x3f07f00

System_String_o *
Settings_TitanInputSettings__get_FileName(Settings_TitanInputSettings_o *__this,MethodInfo *method)

{
  if (DAT_05703c4f == '\0') {
    il2cpp_init_method_metadata(&"TitanInput.json");
    DAT_05703c4f = '\x01';
  }
  return "TitanInput.json";
}


// Settings.TitanInputSettings$$.ctor
// il2cpp: void Settings_TitanInputSettings___ctor (Settings_TitanInputSettings_o* __this, const MethodInfo* method);
// 0x3f04cf0

void Settings_TitanInputSettings___ctor(Settings_TitanInputSettings_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  Settings_KeybindSetting_o *pSVar2;
  MethodInfo *method_00;
  undefined1 auVar3 [16];
  
  if (DAT_05703c50 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_KeybindSetting);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"LeftAlt");
    il2cpp_init_method_metadata(&"Z");
    il2cpp_init_method_metadata(&"R");
    il2cpp_init_method_metadata(&"Alpha5");
    il2cpp_init_method_metadata(&"Q");
    il2cpp_init_method_metadata(&"LeftShift");
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"E");
    il2cpp_init_method_metadata(&"Mouse1");
    il2cpp_init_method_metadata(&"Space");
    il2cpp_init_method_metadata(&"Alpha3");
    il2cpp_init_method_metadata(&"Alpha2");
    il2cpp_init_method_metadata(&"Mouse2");
    il2cpp_init_method_metadata(&"Alpha1");
    il2cpp_init_method_metadata(&"Alpha4");
    il2cpp_init_method_metadata(&"Mouse0");
    il2cpp_init_method_metadata(&"LeftControl");
    DAT_05703c50 = '\x01';
  }
  pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = "LeftControl";
      il2cpp_runtime_glue(pSVar1->m_Items);
      if (1 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[1] = "None";
        il2cpp_runtime_glue(pSVar1->m_Items + 1);
        auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
        pSVar2 = auVar3._0_8_;
        Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
        (__this->fields).Kick = pSVar2;
        il2cpp_runtime_glue(&(__this->fields).Kick,pSVar2);
        pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
        if (pSVar1 == (System_String_array *)0x0) goto LAB_03f05db2;
        if ((int)pSVar1->max_length != 0) {
          pSVar1->m_Items[0] = "Space";
          il2cpp_runtime_glue(pSVar1->m_Items);
          if (1 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[1] = "None";
            il2cpp_runtime_glue(pSVar1->m_Items + 1);
            auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
            pSVar2 = auVar3._0_8_;
            Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
            (__this->fields).Jump = pSVar2;
            il2cpp_runtime_glue(&(__this->fields).Jump,pSVar2);
            pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
            if (pSVar1 == (System_String_array *)0x0) goto LAB_03f05db2;
            if ((int)pSVar1->max_length != 0) {
              pSVar1->m_Items[0] = "Z";
              il2cpp_runtime_glue(pSVar1->m_Items);
              if (1 < (uint)pSVar1->max_length) {
                pSVar1->m_Items[1] = "None";
                il2cpp_runtime_glue(pSVar1->m_Items + 1);
                auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                pSVar2 = auVar3._0_8_;
                Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
                (__this->fields).Sit = pSVar2;
                il2cpp_runtime_glue(&(__this->fields).Sit,pSVar2);
                pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
                if (pSVar1 == (System_String_array *)0x0) goto LAB_03f05db2;
                if ((int)pSVar1->max_length != 0) {
                  pSVar1->m_Items[0] = "LeftAlt";
                  il2cpp_runtime_glue(pSVar1->m_Items);
                  if (1 < (uint)pSVar1->max_length) {
                    pSVar1->m_Items[1] = "None";
                    il2cpp_runtime_glue(pSVar1->m_Items + 1);
                    auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                    pSVar2 = auVar3._0_8_;
                    Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
                    (__this->fields).Walk = pSVar2;
                    il2cpp_runtime_glue(&(__this->fields).Walk,pSVar2);
                    pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
                    if (pSVar1 == (System_String_array *)0x0) goto LAB_03f05db2;
                    if ((int)pSVar1->max_length != 0) {
                      pSVar1->m_Items[0] = "LeftShift";
                      il2cpp_runtime_glue(pSVar1->m_Items);
                      if (1 < (uint)pSVar1->max_length) {
                        pSVar1->m_Items[1] = "None";
                        il2cpp_runtime_glue(pSVar1->m_Items + 1);
                        auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                        pSVar2 = auVar3._0_8_;
                        Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
                        (__this->fields).Sprint = pSVar2;
                        il2cpp_runtime_glue(&(__this->fields).Sprint,pSVar2);
                        pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
                        if (pSVar1 == (System_String_array *)0x0) goto LAB_03f05db2;
                        if ((int)pSVar1->max_length != 0) {
                          pSVar1->m_Items[0] = "Mouse2";
                          il2cpp_runtime_glue(pSVar1->m_Items);
                          if (1 < (uint)pSVar1->max_length) {
                            pSVar1->m_Items[1] = "None";
                            il2cpp_runtime_glue(pSVar1->m_Items + 1);
                            auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                            pSVar2 = auVar3._0_8_;
                            Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
                            (__this->fields).CoverNape1 = pSVar2;
                            il2cpp_runtime_glue(&(__this->fields).CoverNape1,pSVar2);
                            pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
                            if (pSVar1 == (System_String_array *)0x0) goto LAB_03f05db2;
                            if ((int)pSVar1->max_length != 0) {
                              pSVar1->m_Items[0] = "Mouse0";
                              il2cpp_runtime_glue(pSVar1->m_Items);
                              if (1 < (uint)pSVar1->max_length) {
                                pSVar1->m_Items[1] = "None";
                                il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                pSVar2 = auVar3._0_8_;
                                Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
                                (__this->fields).AttackPunch = pSVar2;
                                il2cpp_runtime_glue(&(__this->fields).AttackPunch,pSVar2);
                                pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
                                if (pSVar1 == (System_String_array *)0x0) goto LAB_03f05db2;
                                if ((int)pSVar1->max_length != 0) {
                                  pSVar1->m_Items[0] = "Mouse1";
                                  il2cpp_runtime_glue(pSVar1->m_Items);
                                  if (1 < (uint)pSVar1->max_length) {
                                    pSVar1->m_Items[1] = "None";
                                    il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                    auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                    pSVar2 = auVar3._0_8_;
                                    Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
                                    (__this->fields).AttackBellyFlop = pSVar2;
                                    il2cpp_runtime_glue(&(__this->fields).AttackBellyFlop,pSVar2);
                                    pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
                                    if (pSVar1 == (System_String_array *)0x0) goto LAB_03f05db2;
                                    if ((int)pSVar1->max_length != 0) {
                                      pSVar1->m_Items[0] = "Q";
                                      il2cpp_runtime_glue(pSVar1->m_Items);
                                      if (1 < (uint)pSVar1->max_length) {
                                        pSVar1->m_Items[1] = "None";
                                        il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                        auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                        pSVar2 = auVar3._0_8_;
                                        Settings_KeybindSetting___ctor(pSVar2,pSVar1,auVar3._8_8_);
                                        (__this->fields).AttackSlapL = pSVar2;
                                        il2cpp_runtime_glue(&(__this->fields).AttackSlapL,pSVar2);
                                        pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2)
                                        ;
                                        if (pSVar1 == (System_String_array *)0x0) goto LAB_03f05db2;
                                        if ((int)pSVar1->max_length != 0) {
                                          pSVar1->m_Items[0] = "E";
                                          il2cpp_runtime_glue(pSVar1->m_Items);
                                          if (1 < (uint)pSVar1->max_length) {
                                            pSVar1->m_Items[1] = "None";
                                            il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                            auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                            pSVar2 = auVar3._0_8_;
                                            Settings_KeybindSetting___ctor
                                                      (pSVar2,pSVar1,auVar3._8_8_);
                                            (__this->fields).AttackSlapR = pSVar2;
                                            il2cpp_runtime_glue(&(__this->fields).AttackSlapR,pSVar2)
                                            ;
                                            pSVar1 = (System_String_array *)
                                                     il2cpp_glue_02274930(TypeInfo_string,2);
                                            if (pSVar1 == (System_String_array *)0x0)
                                            goto LAB_03f05db2;
                                            if ((int)pSVar1->max_length != 0) {
                                              pSVar1->m_Items[0] = "R";
                                              il2cpp_runtime_glue(pSVar1->m_Items);
                                              if (1 < (uint)pSVar1->max_length) {
                                                pSVar1->m_Items[1] = "None";
                                                il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                pSVar2 = auVar3._0_8_;
                                                Settings_KeybindSetting___ctor
                                                          (pSVar2,pSVar1,auVar3._8_8_);
                                                (__this->fields).AttackRockThrow = pSVar2;
                                                il2cpp_runtime_glue(&(__this->fields).AttackRockThrow
                                                                   ,pSVar2);
                                                pSVar1 = (System_String_array *)
                                                         il2cpp_glue_02274930(TypeInfo_string,2);
                                                if (pSVar1 == (System_String_array *)0x0)
                                                goto LAB_03f05db2;
                                                if ((int)pSVar1->max_length != 0) {
                                                  pSVar1->m_Items[0] = "Alpha1";
                                                  il2cpp_runtime_glue(pSVar1->m_Items);
                                                  if (1 < (uint)pSVar1->max_length) {
                                                    pSVar1->m_Items[1] = "None";
                                                    il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                    auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                    pSVar2 = auVar3._0_8_;
                                                    Settings_KeybindSetting___ctor
                                                              (pSVar2,pSVar1,auVar3._8_8_);
                                                    (__this->fields).AttackBiteL = pSVar2;
                                                    il2cpp_runtime_glue(&(__this->fields).AttackBiteL
                                                                       ,pSVar2);
                                                    pSVar1 = (System_String_array *)
                                                             il2cpp_glue_02274930(TypeInfo_string,2);
                                                    if (pSVar1 == (System_String_array *)0x0)
                                                    goto LAB_03f05db2;
                                                    if ((int)pSVar1->max_length != 0) {
                                                      pSVar1->m_Items[0] = "Alpha2";
                                                      il2cpp_runtime_glue(pSVar1->m_Items);
                                                      if (1 < (uint)pSVar1->max_length) {
                                                        pSVar1->m_Items[1] = "None";
                                                        il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                        auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                        pSVar2 = auVar3._0_8_;
                                                        Settings_KeybindSetting___ctor
                                                                  (pSVar2,pSVar1,auVar3._8_8_);
                                                        (__this->fields).AttackBiteF = pSVar2;
                                                        il2cpp_runtime_glue(&(__this->fields).
                                                                            AttackBiteF,pSVar2);
                                                        pSVar1 = (System_String_array *)
                                                                 il2cpp_glue_02274930(TypeInfo_string,2);
                                                        if (pSVar1 == (System_String_array *)0x0)
                                                        goto LAB_03f05db2;
                                                        if ((int)pSVar1->max_length != 0) {
                                                          pSVar1->m_Items[0] = "Alpha3";
                                                          il2cpp_runtime_glue(pSVar1->m_Items);
                                                          if (1 < (uint)pSVar1->max_length) {
                                                            pSVar1->m_Items[1] = "None";
                                                            il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                            auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting
                                                                                       );
                                                            pSVar2 = auVar3._0_8_;
                                                            Settings_KeybindSetting___ctor
                                                                      (pSVar2,pSVar1,auVar3._8_8_);
                                                            (__this->fields).AttackBiteR = pSVar2;
                                                            il2cpp_runtime_glue(&(__this->fields).
                                                                                AttackBiteR,pSVar2);
                                                            pSVar1 = (System_String_array *)
                                                                     il2cpp_glue_02274930(TypeInfo_string,2);
                                                            if (pSVar1 == (System_String_array *)0x0
                                                               ) goto LAB_03f05db2;
                                                            if ((int)pSVar1->max_length != 0) {
                                                              pSVar1->m_Items[0] = "Alpha4";
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
                                                  (__this->fields).AttackHitFace = pSVar2;
                                                  il2cpp_runtime_glue(&(__this->fields).AttackHitFace
                                                                     ,pSVar2);
                                                  pSVar1 = (System_String_array *)
                                                           il2cpp_glue_02274930(TypeInfo_string,2);
                                                  if (pSVar1 == (System_String_array *)0x0)
                                                  goto LAB_03f05db2;
                                                  if ((int)pSVar1->max_length != 0) {
                                                    pSVar1->m_Items[0] = "Alpha5";
                                                    il2cpp_runtime_glue(pSVar1->m_Items);
                                                    if (1 < (uint)pSVar1->max_length) {
                                                      pSVar1->m_Items[1] = "None";
                                                      il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                      auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                      pSVar2 = auVar3._0_8_;
                                                      Settings_KeybindSetting___ctor
                                                                (pSVar2,pSVar1,auVar3._8_8_);
                                                      (__this->fields).AttackHitBack = pSVar2;
                                                      il2cpp_runtime_glue(&(__this->fields).
                                                                          AttackHitBack,pSVar2);
                                                      pSVar1 = (System_String_array *)
                                                               il2cpp_glue_02274930(TypeInfo_string,2);
                                                      if (pSVar1 == (System_String_array *)0x0)
                                                      goto LAB_03f05db2;
                                                      if ((int)pSVar1->max_length != 0) {
                                                        pSVar1->m_Items[0] = "None";
                                                        il2cpp_runtime_glue(pSVar1->m_Items);
                                                        if (1 < (uint)pSVar1->max_length) {
                                                          pSVar1->m_Items[1] = "None";
                                                          il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                          auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                          pSVar2 = auVar3._0_8_;
                                                          Settings_KeybindSetting___ctor
                                                                    (pSVar2,pSVar1,auVar3._8_8_);
                                                          (__this->fields).AttackSlam = pSVar2;
                                                          il2cpp_runtime_glue(&(__this->fields).
                                                                              AttackSlam,pSVar2);
                                                          pSVar1 = (System_String_array *)
                                                                   il2cpp_glue_02274930(TypeInfo_string,2);
                                                          if (pSVar1 == (System_String_array *)0x0)
                                                          goto LAB_03f05db2;
                                                          if ((int)pSVar1->max_length != 0) {
                                                            pSVar1->m_Items[0] = "None";
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
                                                  (__this->fields).AttackStomp = pSVar2;
                                                  il2cpp_runtime_glue(&(__this->fields).AttackStomp,
                                                                     pSVar2);
                                                  pSVar1 = (System_String_array *)
                                                           il2cpp_glue_02274930(TypeInfo_string,2);
                                                  if (pSVar1 == (System_String_array *)0x0)
                                                  goto LAB_03f05db2;
                                                  if ((int)pSVar1->max_length != 0) {
                                                    pSVar1->m_Items[0] = "None";
                                                    il2cpp_runtime_glue(pSVar1->m_Items);
                                                    if (1 < (uint)pSVar1->max_length) {
                                                      pSVar1->m_Items[1] = "None";
                                                      il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                      auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                      pSVar2 = auVar3._0_8_;
                                                      Settings_KeybindSetting___ctor
                                                                (pSVar2,pSVar1,auVar3._8_8_);
                                                      (__this->fields).AttackSwing = pSVar2;
                                                      il2cpp_runtime_glue(&(__this->fields).
                                                                          AttackSwing,pSVar2);
                                                      pSVar1 = (System_String_array *)
                                                               il2cpp_glue_02274930(TypeInfo_string,2);
                                                      if (pSVar1 == (System_String_array *)0x0)
                                                      goto LAB_03f05db2;
                                                      if ((int)pSVar1->max_length != 0) {
                                                        pSVar1->m_Items[0] = "None";
                                                        il2cpp_runtime_glue(pSVar1->m_Items);
                                                        if (1 < (uint)pSVar1->max_length) {
                                                          pSVar1->m_Items[1] = "None";
                                                          il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                          auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                          pSVar2 = auVar3._0_8_;
                                                          Settings_KeybindSetting___ctor
                                                                    (pSVar2,pSVar1,auVar3._8_8_);
                                                          (__this->fields).AttackGrabAirFar = pSVar2
                                                          ;
                                                          il2cpp_runtime_glue(&(__this->fields).
                                                                              AttackGrabAirFar,
                                                                             pSVar2);
                                                          pSVar1 = (System_String_array *)
                                                                   il2cpp_glue_02274930(TypeInfo_string,2);
                                                          if (pSVar1 == (System_String_array *)0x0)
                                                          goto LAB_03f05db2;
                                                          if ((int)pSVar1->max_length != 0) {
                                                            pSVar1->m_Items[0] = "None";
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
                                                  (__this->fields).AttackGrabAir = pSVar2;
                                                  il2cpp_runtime_glue(&(__this->fields).AttackGrabAir
                                                                     ,pSVar2);
                                                  pSVar1 = (System_String_array *)
                                                           il2cpp_glue_02274930(TypeInfo_string,2);
                                                  if (pSVar1 == (System_String_array *)0x0)
                                                  goto LAB_03f05db2;
                                                  if ((int)pSVar1->max_length != 0) {
                                                    pSVar1->m_Items[0] = "None";
                                                    il2cpp_runtime_glue(pSVar1->m_Items);
                                                    if (1 < (uint)pSVar1->max_length) {
                                                      pSVar1->m_Items[1] = "None";
                                                      il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                      auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                      pSVar2 = auVar3._0_8_;
                                                      Settings_KeybindSetting___ctor
                                                                (pSVar2,pSVar1,auVar3._8_8_);
                                                      (__this->fields).AttackGrabBody = pSVar2;
                                                      il2cpp_runtime_glue(&(__this->fields).
                                                                          AttackGrabBody,pSVar2);
                                                      pSVar1 = (System_String_array *)
                                                               il2cpp_glue_02274930(TypeInfo_string,2);
                                                      if (pSVar1 == (System_String_array *)0x0)
                                                      goto LAB_03f05db2;
                                                      if ((int)pSVar1->max_length != 0) {
                                                        pSVar1->m_Items[0] = "None";
                                                        il2cpp_runtime_glue(pSVar1->m_Items);
                                                        if (1 < (uint)pSVar1->max_length) {
                                                          pSVar1->m_Items[1] = "None";
                                                          il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                          auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                          pSVar2 = auVar3._0_8_;
                                                          Settings_KeybindSetting___ctor
                                                                    (pSVar2,pSVar1,auVar3._8_8_);
                                                          (__this->fields).AttackGrabCore = pSVar2;
                                                          il2cpp_runtime_glue(&(__this->fields).
                                                                              AttackGrabCore,pSVar2)
                                                          ;
                                                          pSVar1 = (System_String_array *)
                                                                   il2cpp_glue_02274930(TypeInfo_string,2);
                                                          if (pSVar1 == (System_String_array *)0x0)
                                                          goto LAB_03f05db2;
                                                          if ((int)pSVar1->max_length != 0) {
                                                            pSVar1->m_Items[0] = "None";
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
                                                  (__this->fields).AttackGrabGround = pSVar2;
                                                  il2cpp_runtime_glue(&(__this->fields).
                                                                      AttackGrabGround,pSVar2);
                                                  pSVar1 = (System_String_array *)
                                                           il2cpp_glue_02274930(TypeInfo_string,2);
                                                  if (pSVar1 == (System_String_array *)0x0)
                                                  goto LAB_03f05db2;
                                                  if ((int)pSVar1->max_length != 0) {
                                                    pSVar1->m_Items[0] = "None";
                                                    il2cpp_runtime_glue(pSVar1->m_Items);
                                                    if (1 < (uint)pSVar1->max_length) {
                                                      pSVar1->m_Items[1] = "None";
                                                      il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                      auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                      pSVar2 = auVar3._0_8_;
                                                      Settings_KeybindSetting___ctor
                                                                (pSVar2,pSVar1,auVar3._8_8_);
                                                      (__this->fields).AttackGrabHead = pSVar2;
                                                      il2cpp_runtime_glue(&(__this->fields).
                                                                          AttackGrabHead,pSVar2);
                                                      pSVar1 = (System_String_array *)
                                                               il2cpp_glue_02274930(TypeInfo_string,2);
                                                      if (pSVar1 == (System_String_array *)0x0)
                                                      goto LAB_03f05db2;
                                                      if ((int)pSVar1->max_length != 0) {
                                                        pSVar1->m_Items[0] = "None";
                                                        il2cpp_runtime_glue(pSVar1->m_Items);
                                                        if (1 < (uint)pSVar1->max_length) {
                                                          pSVar1->m_Items[1] = "None";
                                                          il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                          auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                          pSVar2 = auVar3._0_8_;
                                                          Settings_KeybindSetting___ctor
                                                                    (pSVar2,pSVar1,auVar3._8_8_);
                                                          (__this->fields).AttackGrabHigh = pSVar2;
                                                          il2cpp_runtime_glue(&(__this->fields).
                                                                              AttackGrabHigh,pSVar2)
                                                          ;
                                                          pSVar1 = (System_String_array *)
                                                                   il2cpp_glue_02274930(TypeInfo_string,2);
                                                          if (pSVar1 == (System_String_array *)0x0)
                                                          goto LAB_03f05db2;
                                                          if ((int)pSVar1->max_length != 0) {
                                                            pSVar1->m_Items[0] = "None";
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
                                                  (__this->fields).AttackSlapHighL = pSVar2;
                                                  il2cpp_runtime_glue(&(__this->fields).
                                                                      AttackSlapHighL,pSVar2);
                                                  pSVar1 = (System_String_array *)
                                                           il2cpp_glue_02274930(TypeInfo_string,2);
                                                  if (pSVar1 == (System_String_array *)0x0)
                                                  goto LAB_03f05db2;
                                                  if ((int)pSVar1->max_length != 0) {
                                                    pSVar1->m_Items[0] = "None";
                                                    il2cpp_runtime_glue(pSVar1->m_Items);
                                                    if (1 < (uint)pSVar1->max_length) {
                                                      pSVar1->m_Items[1] = "None";
                                                      il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                      auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                      pSVar2 = auVar3._0_8_;
                                                      Settings_KeybindSetting___ctor
                                                                (pSVar2,pSVar1,auVar3._8_8_);
                                                      (__this->fields).AttackSlapHighR = pSVar2;
                                                      il2cpp_runtime_glue(&(__this->fields).
                                                                          AttackSlapHighR,pSVar2);
                                                      pSVar1 = (System_String_array *)
                                                               il2cpp_glue_02274930(TypeInfo_string,2);
                                                      if (pSVar1 == (System_String_array *)0x0)
                                                      goto LAB_03f05db2;
                                                      if ((int)pSVar1->max_length != 0) {
                                                        pSVar1->m_Items[0] = "None";
                                                        il2cpp_runtime_glue(pSVar1->m_Items);
                                                        if (1 < (uint)pSVar1->max_length) {
                                                          pSVar1->m_Items[1] = "None";
                                                          il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                          auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                          pSVar2 = auVar3._0_8_;
                                                          Settings_KeybindSetting___ctor
                                                                    (pSVar2,pSVar1,auVar3._8_8_);
                                                          (__this->fields).AttackSlapLowL = pSVar2;
                                                          il2cpp_runtime_glue(&(__this->fields).
                                                                              AttackSlapLowL,pSVar2)
                                                          ;
                                                          pSVar1 = (System_String_array *)
                                                                   il2cpp_glue_02274930(TypeInfo_string,2);
                                                          if (pSVar1 == (System_String_array *)0x0)
                                                          goto LAB_03f05db2;
                                                          if ((int)pSVar1->max_length != 0) {
                                                            pSVar1->m_Items[0] = "None";
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
                                                  (__this->fields).AttackSlapLowR = pSVar2;
                                                  il2cpp_runtime_glue(&(__this->fields).
                                                                      AttackSlapLowR,pSVar2);
                                                  pSVar1 = (System_String_array *)
                                                           il2cpp_glue_02274930(TypeInfo_string,2);
                                                  if (pSVar1 == (System_String_array *)0x0)
                                                  goto LAB_03f05db2;
                                                  if ((int)pSVar1->max_length != 0) {
                                                    pSVar1->m_Items[0] = "None";
                                                    il2cpp_runtime_glue(pSVar1->m_Items);
                                                    if (1 < (uint)pSVar1->max_length) {
                                                      pSVar1->m_Items[1] = "None";
                                                      il2cpp_runtime_glue(pSVar1->m_Items + 1);
                                                      auVar3 = il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                                                      method_00 = auVar3._0_8_;
                                                      Settings_KeybindSetting___ctor
                                                                ((Settings_KeybindSetting_o *)
                                                                 method_00,pSVar1,auVar3._8_8_);
                                                      (__this->fields).AttackBrushChest =
                                                           (Settings_KeybindSetting_o *)method_00;
                                                      il2cpp_runtime_glue(&(__this->fields).
                                                                          AttackBrushChest);
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
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
LAB_03f05db2:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


