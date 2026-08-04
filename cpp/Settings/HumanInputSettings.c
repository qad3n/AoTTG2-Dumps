// Type: Settings.HumanInputSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/HumanInputSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/HumanInputSettings.cs
// --------------------------------

// Settings.HumanInputSettings$$get_FileName
// il2cpp: System_String_o* Settings_HumanInputSettings__get_FileName (Settings_HumanInputSettings_o* __this, const MethodInfo* method);
// 0x41f2c50

System_String_o *
Settings_HumanInputSettings__get_FileName(Settings_HumanInputSettings_o *__this,MethodInfo *method)

{
  if (g_data_057ad868 == '\0') {
    il2cpp_runtime_helper_023445d0(&"HumanInput.json");
    g_data_057ad868 = '\x01';
  }
  return "HumanInput.json";
}


// Settings.HumanInputSettings$$.ctor
// il2cpp: void Settings_HumanInputSettings___ctor (Settings_HumanInputSettings_o* __this, const MethodInfo* method);
// 0x41f2c80

void Settings_HumanInputSettings___ctor(Settings_HumanInputSettings_o *__this,MethodInfo *method)

{
  Il2CppMethodPointer vtableDispatch;
  int32_t iVar1;
  System_String_array *pSVar2;
  Settings_KeybindSetting_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  Settings_IntSetting_o *__this_00;
  Settings_FloatSetting_o *__this_01;
  MethodInfo *method_00;
  Il2CppClass *__this_02;
  undefined8 extraout_RDX;
  System_String_o *pSVar5;
  System_String_o *pSVar6;
  Il2CppObject *__this_03;
  float fVar7;
  undefined1 auVar8 [16];
  
  if (g_data_057ad869 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_BoolSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_FloatSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IntSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_KeybindSetting);
    il2cpp_runtime_helper_023445d0(&TypeInfo_string);
    il2cpp_runtime_helper_023445d0(&"LeftAlt");
    il2cpp_runtime_helper_023445d0(&"R");
    il2cpp_runtime_helper_023445d0(&"Q");
    il2cpp_runtime_helper_023445d0(&"LeftShift");
    il2cpp_runtime_helper_023445d0(&"None");
    il2cpp_runtime_helper_023445d0(&"E");
    il2cpp_runtime_helper_023445d0(&"Mouse1");
    il2cpp_runtime_helper_023445d0(&"Space");
    il2cpp_runtime_helper_023445d0(&"WheelDown");
    il2cpp_runtime_helper_023445d0(&"Mouse0");
    il2cpp_runtime_helper_023445d0(&"LeftControl");
    g_data_057ad869 = '\x01';
  }
  pSVar5 = (System_String_o *)0x2;
  __this_03 = TypeInfo_string;
  pSVar2 = (System_String_array *)il2cpp_runtime_helper_022b2a40();
  pSVar6 = "Mouse0";
  if (pSVar2 != (System_String_array *)0x0) {
    if ((int)pSVar2->max_length != 0) {
      __this_03 = (Il2CppObject *)pSVar2->m_Items;
      pSVar2->m_Items[0] = "Mouse0";
      il2cpp_runtime_helper_022b4080();
      pSVar5 = pSVar6;
      if (1 < (uint)pSVar2->max_length) {
        pSVar2->m_Items[1] = "None";
        il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
        auVar8 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
        pSVar3 = auVar8._0_8_;
        Settings_KeybindSetting___ctor(pSVar3,pSVar2,auVar8._8_8_);
        (__this->fields).AttackDefault = pSVar3;
        il2cpp_runtime_helper_022b4080(&(__this->fields).AttackDefault,pSVar3);
        pSVar5 = (System_String_o *)0x2;
        __this_03 = TypeInfo_string;
        pSVar2 = (System_String_array *)il2cpp_runtime_helper_022b2a40();
        pSVar6 = "Mouse1";
        if (pSVar2 == (System_String_array *)0x0) goto label_041f38b2;
        if ((int)pSVar2->max_length != 0) {
          __this_03 = (Il2CppObject *)pSVar2->m_Items;
          pSVar2->m_Items[0] = "Mouse1";
          il2cpp_runtime_helper_022b4080();
          pSVar5 = pSVar6;
          if (1 < (uint)pSVar2->max_length) {
            pSVar2->m_Items[1] = "None";
            il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
            auVar8 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
            pSVar3 = auVar8._0_8_;
            Settings_KeybindSetting___ctor(pSVar3,pSVar2,auVar8._8_8_);
            (__this->fields).AttackSpecial = pSVar3;
            il2cpp_runtime_helper_022b4080(&(__this->fields).AttackSpecial,pSVar3);
            pSVar5 = (System_String_o *)0x2;
            __this_03 = TypeInfo_string;
            pSVar2 = (System_String_array *)il2cpp_runtime_helper_022b2a40();
            pSVar6 = "Q";
            if (pSVar2 == (System_String_array *)0x0) goto label_041f38b2;
            if ((int)pSVar2->max_length != 0) {
              __this_03 = (Il2CppObject *)pSVar2->m_Items;
              pSVar2->m_Items[0] = "Q";
              il2cpp_runtime_helper_022b4080();
              pSVar5 = pSVar6;
              if (1 < (uint)pSVar2->max_length) {
                pSVar2->m_Items[1] = "None";
                il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
                auVar8 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                pSVar3 = auVar8._0_8_;
                Settings_KeybindSetting___ctor(pSVar3,pSVar2,auVar8._8_8_);
                (__this->fields).HookLeft = pSVar3;
                il2cpp_runtime_helper_022b4080(&(__this->fields).HookLeft,pSVar3);
                pSVar5 = (System_String_o *)0x2;
                __this_03 = TypeInfo_string;
                pSVar2 = (System_String_array *)il2cpp_runtime_helper_022b2a40();
                pSVar6 = "E";
                if (pSVar2 == (System_String_array *)0x0) goto label_041f38b2;
                if ((int)pSVar2->max_length != 0) {
                  __this_03 = (Il2CppObject *)pSVar2->m_Items;
                  pSVar2->m_Items[0] = "E";
                  il2cpp_runtime_helper_022b4080();
                  pSVar5 = pSVar6;
                  if (1 < (uint)pSVar2->max_length) {
                    pSVar2->m_Items[1] = "None";
                    il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
                    auVar8 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                    pSVar3 = auVar8._0_8_;
                    Settings_KeybindSetting___ctor(pSVar3,pSVar2,auVar8._8_8_);
                    (__this->fields).HookRight = pSVar3;
                    il2cpp_runtime_helper_022b4080(&(__this->fields).HookRight,pSVar3);
                    pSVar5 = (System_String_o *)0x2;
                    __this_03 = TypeInfo_string;
                    pSVar2 = (System_String_array *)il2cpp_runtime_helper_022b2a40();
                    pSVar6 = "None";
                    if (pSVar2 == (System_String_array *)0x0) goto label_041f38b2;
                    if ((int)pSVar2->max_length != 0) {
                      __this_03 = (Il2CppObject *)pSVar2->m_Items;
                      pSVar2->m_Items[0] = "None";
                      il2cpp_runtime_helper_022b4080();
                      pSVar5 = pSVar6;
                      if (1 < (uint)pSVar2->max_length) {
                        pSVar2->m_Items[1] = "None";
                        il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
                        auVar8 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                        pSVar3 = auVar8._0_8_;
                        Settings_KeybindSetting___ctor(pSVar3,pSVar2,auVar8._8_8_);
                        (__this->fields).HookBoth = pSVar3;
                        il2cpp_runtime_helper_022b4080(&(__this->fields).HookBoth,pSVar3);
                        pSVar5 = (System_String_o *)0x2;
                        __this_03 = TypeInfo_string;
                        pSVar2 = (System_String_array *)il2cpp_runtime_helper_022b2a40();
                        pSVar6 = "LeftControl";
                        if (pSVar2 == (System_String_array *)0x0) goto label_041f38b2;
                        if ((int)pSVar2->max_length != 0) {
                          __this_03 = (Il2CppObject *)pSVar2->m_Items;
                          pSVar2->m_Items[0] = "LeftControl";
                          il2cpp_runtime_helper_022b4080();
                          pSVar5 = pSVar6;
                          if (1 < (uint)pSVar2->max_length) {
                            pSVar2->m_Items[1] = "None";
                            il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
                            auVar8 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                            pSVar3 = auVar8._0_8_;
                            Settings_KeybindSetting___ctor(pSVar3,pSVar2,auVar8._8_8_);
                            (__this->fields).Dash = pSVar3;
                            il2cpp_runtime_helper_022b4080(&(__this->fields).Dash,pSVar3);
                            pSVar5 = (System_String_o *)0x2;
                            __this_03 = TypeInfo_string;
                            pSVar2 = (System_String_array *)il2cpp_runtime_helper_022b2a40();
                            pSVar6 = "WheelDown";
                            if (pSVar2 == (System_String_array *)0x0) goto label_041f38b2;
                            if ((int)pSVar2->max_length != 0) {
                              __this_03 = (Il2CppObject *)pSVar2->m_Items;
                              pSVar2->m_Items[0] = "WheelDown";
                              il2cpp_runtime_helper_022b4080();
                              pSVar5 = pSVar6;
                              if (1 < (uint)pSVar2->max_length) {
                                pSVar2->m_Items[1] = "None";
                                il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
                                auVar8 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                pSVar3 = auVar8._0_8_;
                                Settings_KeybindSetting___ctor(pSVar3,pSVar2,auVar8._8_8_);
                                (__this->fields).ReelIn = pSVar3;
                                il2cpp_runtime_helper_022b4080(&(__this->fields).ReelIn,pSVar3);
                                pSVar5 = (System_String_o *)0x2;
                                __this_03 = TypeInfo_string;
                                pSVar2 = (System_String_array *)il2cpp_runtime_helper_022b2a40();
                                pSVar6 = "LeftAlt";
                                if (pSVar2 == (System_String_array *)0x0) goto label_041f38b2;
                                if ((int)pSVar2->max_length != 0) {
                                  __this_03 = (Il2CppObject *)pSVar2->m_Items;
                                  pSVar2->m_Items[0] = "LeftAlt";
                                  il2cpp_runtime_helper_022b4080();
                                  pSVar5 = pSVar6;
                                  if (1 < (uint)pSVar2->max_length) {
                                    pSVar2->m_Items[1] = "None";
                                    il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
                                    auVar8 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                    pSVar3 = auVar8._0_8_;
                                    Settings_KeybindSetting___ctor(pSVar3,pSVar2,auVar8._8_8_);
                                    (__this->fields).ReelOut = pSVar3;
                                    il2cpp_runtime_helper_022b4080(&(__this->fields).ReelOut,pSVar3);
                                    pSVar5 = (System_String_o *)0x2;
                                    __this_03 = TypeInfo_string;
                                    pSVar2 = (System_String_array *)il2cpp_runtime_helper_022b2a40();
                                    pSVar6 = "LeftControl";
                                    if (pSVar2 == (System_String_array *)0x0) goto label_041f38b2;
                                    if ((int)pSVar2->max_length != 0) {
                                      __this_03 = (Il2CppObject *)pSVar2->m_Items;
                                      pSVar2->m_Items[0] = "LeftControl";
                                      il2cpp_runtime_helper_022b4080();
                                      pSVar5 = pSVar6;
                                      if (1 < (uint)pSVar2->max_length) {
                                        pSVar2->m_Items[1] = "None";
                                        il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
                                        auVar8 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                        pSVar3 = auVar8._0_8_;
                                        Settings_KeybindSetting___ctor(pSVar3,pSVar2,auVar8._8_8_);
                                        (__this->fields).Dodge = pSVar3;
                                        il2cpp_runtime_helper_022b4080(&(__this->fields).Dodge,pSVar3);
                                        pSVar5 = (System_String_o *)0x2;
                                        __this_03 = TypeInfo_string;
                                        pSVar2 = (System_String_array *)il2cpp_runtime_helper_022b2a40();
                                        pSVar6 = "LeftShift";
                                        if (pSVar2 == (System_String_array *)0x0) goto label_041f38b2;
                                        if ((int)pSVar2->max_length != 0) {
                                          __this_03 = (Il2CppObject *)pSVar2->m_Items;
                                          pSVar2->m_Items[0] = "LeftShift";
                                          il2cpp_runtime_helper_022b4080();
                                          pSVar5 = pSVar6;
                                          if (1 < (uint)pSVar2->max_length) {
                                            pSVar2->m_Items[1] = "None";
                                            il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
                                            auVar8 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                            pSVar3 = auVar8._0_8_;
                                            Settings_KeybindSetting___ctor(pSVar3,pSVar2,auVar8._8_8_);
                                            (__this->fields).Jump = pSVar3;
                                            il2cpp_runtime_helper_022b4080(&(__this->fields).Jump,pSVar3);
                                            pSVar5 = (System_String_o *)0x2;
                                            __this_03 = TypeInfo_string;
                                            pSVar2 = (System_String_array *)il2cpp_runtime_helper_022b2a40();
                                            pSVar6 = "R";
                                            if (pSVar2 == (System_String_array *)0x0) goto label_041f38b2;
                                            if ((int)pSVar2->max_length != 0) {
                                              __this_03 = (Il2CppObject *)pSVar2->m_Items;
                                              pSVar2->m_Items[0] = "R";
                                              il2cpp_runtime_helper_022b4080();
                                              pSVar5 = pSVar6;
                                              if (1 < (uint)pSVar2->max_length) {
                                                pSVar2->m_Items[1] = "None";
                                                il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
                                                auVar8 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                pSVar3 = auVar8._0_8_;
                                                Settings_KeybindSetting___ctor(pSVar3,pSVar2,auVar8._8_8_);
                                                (__this->fields).Reload = pSVar3;
                                                il2cpp_runtime_helper_022b4080(&(__this->fields).Reload,pSVar3);
                                                pSVar5 = (System_String_o *)0x2;
                                                __this_03 = TypeInfo_string;
                                                pSVar2 = (System_String_array *)il2cpp_runtime_helper_022b2a40();
                                                pSVar6 = "LeftControl";
                                                if (pSVar2 == (System_String_array *)0x0) goto label_041f38b2;
                                                if ((int)pSVar2->max_length != 0) {
                                                  __this_03 = (Il2CppObject *)pSVar2->m_Items;
                                                  pSVar2->m_Items[0] = "LeftControl";
                                                  il2cpp_runtime_helper_022b4080();
                                                  pSVar5 = pSVar6;
                                                  if (1 < (uint)pSVar2->max_length) {
                                                    pSVar2->m_Items[1] = "None";
                                                    il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
                                                    auVar8 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                    pSVar3 = auVar8._0_8_;
                                                    Settings_KeybindSetting___ctor(pSVar3,pSVar2,auVar8._8_8_)
                                                    ;
                                                    (__this->fields).HorseMount = pSVar3;
                                                    il2cpp_runtime_helper_022b4080(&(__this->fields).HorseMount,pSVar3);
                                                    pSVar5 = (System_String_o *)0x2;
                                                    __this_03 = TypeInfo_string;
                                                    pSVar2 = (System_String_array *)il2cpp_runtime_helper_022b2a40();
                                                    pSVar6 = "LeftShift";
                                                    if (pSVar2 == (System_String_array *)0x0)
                                                    goto label_041f38b2;
                                                    if ((int)pSVar2->max_length != 0) {
                                                      __this_03 = (Il2CppObject *)pSVar2->m_Items;
                                                      pSVar2->m_Items[0] = "LeftShift";
                                                      il2cpp_runtime_helper_022b4080();
                                                      pSVar5 = pSVar6;
                                                      if (1 < (uint)pSVar2->max_length) {
                                                        pSVar2->m_Items[1] = "None";
                                                        il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
                                                        auVar8 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                        pSVar3 = auVar8._0_8_;
                                                        Settings_KeybindSetting___ctor
                                                                  (pSVar3,pSVar2,auVar8._8_8_);
                                                        (__this->fields).HorseWalk = pSVar3;
                                                        il2cpp_runtime_helper_022b4080(&(__this->fields).HorseWalk,pSVar3)
                                                        ;
                                                        pSVar5 = (System_String_o *)0x2;
                                                        __this_03 = TypeInfo_string;
                                                        pSVar2 = (System_String_array *)il2cpp_runtime_helper_022b2a40();
                                                        pSVar6 = "Space";
                                                        if (pSVar2 == (System_String_array *)0x0)
                                                        goto label_041f38b2;
                                                        if ((int)pSVar2->max_length != 0) {
                                                          __this_03 = (Il2CppObject *)pSVar2->m_Items;
                                                          pSVar2->m_Items[0] = "Space";
                                                          il2cpp_runtime_helper_022b4080();
                                                          pSVar5 = pSVar6;
                                                          if (1 < (uint)pSVar2->max_length) {
                                                            pSVar2->m_Items[1] = "None";
                                                            il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
                                                            auVar8 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                            pSVar3 = auVar8._0_8_;
                                                            Settings_KeybindSetting___ctor
                                                                      (pSVar3,pSVar2,auVar8._8_8_);
                                                            (__this->fields).HorseJump = pSVar3;
                                                            il2cpp_runtime_helper_022b4080(&(__this->fields).HorseJump,
                                                                               pSVar3);
                                                            pSVar5 = (System_String_o *)0x2;
                                                            __this_03 = TypeInfo_string;
                                                            pSVar2 = (System_String_array *)il2cpp_runtime_helper_022b2a40();
                                                            pSVar6 = "None";
                                                            if (pSVar2 == (System_String_array *)0x0)
                                                            goto label_041f38b2;
                                                            if ((int)pSVar2->max_length != 0) {
                                                              __this_03 = (Il2CppObject *)pSVar2->m_Items;
                                                              pSVar2->m_Items[0] = "None";
                                                              il2cpp_runtime_helper_022b4080();
                                                              pSVar5 = pSVar6;
                                                              if (1 < (uint)pSVar2->max_length) {
                                                                pSVar2->m_Items[1] = "None";
                                                                il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
                                                                auVar8 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                                pSVar3 = auVar8._0_8_;
                                                                Settings_KeybindSetting___ctor
                                                                          (pSVar3,pSVar2,auVar8._8_8_);
                                                                (__this->fields).NapeLock = pSVar3;
                                                                il2cpp_runtime_helper_022b4080(&(__this->fields).NapeLock,
                                                                                   pSVar3);
                                                                pSVar5 = (System_String_o *)0x2;
                                                                __this_03 = TypeInfo_string;
                                                                pSVar2 = (System_String_array *)il2cpp_runtime_helper_022b2a40()
                                                                ;
                                                                pSVar6 = "LeftAlt";
                                                                if (pSVar2 == (System_String_array *)0x0)
                                                                goto label_041f38b2;
                                                                if ((int)pSVar2->max_length != 0) {
                                                                  __this_03 = (Il2CppObject *)pSVar2->m_Items;
                                                                  pSVar2->m_Items[0] = "LeftAlt";
                                                                  il2cpp_runtime_helper_022b4080();
                                                                  pSVar5 = pSVar6;
                                                                  if (1 < (uint)pSVar2->max_length) {
                                                                    pSVar2->m_Items[1] = "None";
                                                                    il2cpp_runtime_helper_022b4080(pSVar2->m_Items + 1);
                                                                    auVar8 = il2cpp_runtime_helper_023052d0(TypeInfo_KeybindSetting);
                                                                    pSVar3 = auVar8._0_8_;
                                                                    Settings_KeybindSetting___ctor
                                                                              (pSVar3,pSVar2,auVar8._8_8_);
                                                                    (__this->fields).Walk = pSVar3;
                                                                    il2cpp_runtime_helper_022b4080(&(__this->fields).Walk,
                                                                                       pSVar3);
                                                                    pSVar4 = (Settings_BoolSetting_o *)
                                                                             il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
                                                                    if (g_data_057ad896 == '\0') {
                                                                      il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
                                                                      g_data_057ad896 = '\x01';
                                                                    }
                                                                    Settings_TypedSetting_bool____ctor_2a23ec0
                                                                              ((Settings_TypedSetting_bool__o
                                                                                *)pSVar4,1,MethodInfo_TypedSetting_1_System_Boolean);
                                                                    (__this->fields).DashDoubleTap = pSVar4;
                                                                    il2cpp_runtime_helper_022b4080(&(__this->fields).
                                                                                        DashDoubleTap,pSVar4);
                                                                    pSVar4 = (Settings_BoolSetting_o *)
                                                                             il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
                                                                    if (g_data_057ad896 == '\0') {
                                                                      il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
                                                                      g_data_057ad896 = '\x01';
                                                                    }
                                                                    Settings_TypedSetting_bool____ctor_2a23ec0
                                                                              ((Settings_TypedSetting_bool__o
                                                                                *)pSVar4,1,MethodInfo_TypedSetting_1_System_Boolean);
                                                                    (__this->fields).WallSlideDash = pSVar4;
                                                                    il2cpp_runtime_helper_022b4080(&(__this->fields).
                                                                                        WallSlideDash,pSVar4);
                                                                    __this_00 = (Settings_IntSetting_o *)
                                                                                il2cpp_runtime_helper_023052d0(
                                                       TypeInfo_IntSetting);
                                                       if (g_data_057ad8a8 == '\0') {
                                                         il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Int32);
                                                         g_data_057ad8a8 = '\x01';
                                                       }
                                                       (__this_00->fields).MinValue = -0x80000000;
                                                       (__this_00->fields).MaxValue = 0x7fffffff;
                                                       Settings_TypedSetting_int____ctor
                                                                 ((Settings_TypedSetting_int__o *)__this_00,
                                                                  MethodInfo_TypedSetting_1_System_Int32);
                                                       (__this_00->fields).MinValue = -0x80000000;
                                                       (__this_00->fields).MaxValue = 0x7fffffff;
                                                       iVar1 = (*(__this_00->klass->vtable)._10_SanitizeValue.
                                                                 methodPtr)(__this_00,2,
                                                                            (__this_00->klass->vtable).
                                                                            _10_SanitizeValue.method);
                                                       (__this_00->fields).DefaultValue = iVar1;
                                                       (*(__this_00->klass->vtable)._4_SetDefault.methodPtr)
                                                                 (__this_00,
                                                                  (__this_00->klass->vtable)._4_SetDefault.
                                                                  method);
                                                       (__this->fields).WallSlideAttach = __this_00;
                                                       il2cpp_runtime_helper_022b4080(&(__this->fields).WallSlideAttach,
                                                                          __this_00);
                                                       __this_01 = (Settings_FloatSetting_o *)
                                                                   il2cpp_runtime_helper_023052d0(TypeInfo_FloatSetting);
                                                       if (g_data_057ad89e == '\0') {
                                                         il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Single);
                                                         g_data_057ad89e = '\x01';
                                                       }
                                                       (__this_01->fields).MinValue = -3.4028235e+38;
                                                       (__this_01->fields).MaxValue = 3.4028235e+38;
                                                       Settings_TypedSetting_float____ctor
                                                                 ((Settings_TypedSetting_float__o *)__this_01,
                                                                  MethodInfo_TypedSetting_1_System_Single);
                                                       (__this_01->fields).MinValue = 0.0;
                                                       (__this_01->fields).MaxValue = 1.0;
                                                       fVar7 = (float)(*(__this_01->klass->vtable).
                                                                        _10_SanitizeValue.methodPtr)
                                                                                (0x3e4ccccd,__this_01,
                                                                                 (__this_01->klass->vtable).
                                                                                 _10_SanitizeValue.method);
                                                       (__this_01->fields).DefaultValue = fVar7;
                                                       (*(__this_01->klass->vtable)._4_SetDefault.methodPtr)
                                                                 (__this_01,
                                                                  (__this_01->klass->vtable)._4_SetDefault.
                                                                  method);
                                                       (__this->fields).ReelOutScrollSmoothing = __this_01;
                                                       il2cpp_runtime_helper_022b4080(&(__this->fields).
                                                                           ReelOutScrollSmoothing);
                                                       pSVar4 = (Settings_BoolSetting_o *)
                                                                il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
                                                       if (g_data_057ad896 == '\0') {
                                                         il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
                                                         g_data_057ad896 = '\x01';
                                                       }
                                                       Settings_TypedSetting_bool____ctor_2a23ec0
                                                                 ((Settings_TypedSetting_bool__o *)pSVar4,0,
                                                                  MethodInfo_TypedSetting_1_System_Boolean);
                                                       (__this->fields).SwapTSAttackSpecial = pSVar4;
                                                       il2cpp_runtime_helper_022b4080(&(__this->fields).
                                                                           SwapTSAttackSpecial);
                                                       pSVar4 = (Settings_BoolSetting_o *)
                                                                il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
                                                       if (g_data_057ad896 == '\0') {
                                                         il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
                                                         g_data_057ad896 = '\x01';
                                                       }
                                                       Settings_TypedSetting_bool____ctor_2a23ec0
                                                                 ((Settings_TypedSetting_bool__o *)pSVar4,0,
                                                                  MethodInfo_TypedSetting_1_System_Boolean);
                                                       (__this->fields).AutoRefillGas = pSVar4;
                                                       il2cpp_runtime_helper_022b4080(&(__this->fields).AutoRefillGas);
                                                       pSVar4 = (Settings_BoolSetting_o *)
                                                                il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
                                                       if (g_data_057ad896 == '\0') {
                                                         il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
                                                         g_data_057ad896 = '\x01';
                                                       }
                                                       Settings_TypedSetting_bool____ctor_2a23ec0
                                                                 ((Settings_TypedSetting_bool__o *)pSVar4,0,
                                                                  MethodInfo_TypedSetting_1_System_Boolean);
                                                       (__this->fields).AutoUseGas = pSVar4;
                                                       il2cpp_runtime_helper_022b4080(&(__this->fields).AutoUseGas,pSVar4)
                                                       ;
                                                       method_00 = (MethodInfo *)
                                                                   il2cpp_runtime_helper_023052d0(TypeInfo_BoolSetting);
                                                       if (g_data_057ad896 == '\0') {
                                                         il2cpp_runtime_helper_023445d0(&MethodInfo_TypedSetting_1_System_Boolean);
                                                         g_data_057ad896 = '\x01';
                                                       }
                                                       Settings_TypedSetting_bool____ctor_2a23ec0
                                                                 ((Settings_TypedSetting_bool__o *)method_00,1
                                                                  ,MethodInfo_TypedSetting_1_System_Boolean);
                                                       (__this->fields).ReelInHolding =
                                                            (Settings_BoolSetting_o *)method_00;
                                                       il2cpp_runtime_helper_022b4080(&(__this->fields).ReelInHolding);
                                                       Settings_BaseSettingsContainer___ctor
                                                                 ((Settings_PresetSettingsContainer_o *)__this
                                                                  ,method_00);
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
    il2cpp_runtime_helper_022b2ca0();
  }
label_041f38b2:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057ad8ac == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_List_1_Settings_InputKey);
    il2cpp_runtime_helper_023445d0(&TypeInfo_List_InputKey);
    g_data_057ad8ac = '\x01';
  }
  __this_02 = (Il2CppClass *)il2cpp_runtime_helper_023052d0(TypeInfo_List_InputKey);
  System_Collections_Generic_List_object____ctor
            ((System_Collections_Generic_List_object__o *)__this_02,MethodInfo_List_1_Settings_InputKey);
  __this_03[1].klass = __this_02;
  il2cpp_runtime_helper_022b4080(__this_03 + 1);
  System_Object___ctor(__this_03,(MethodInfo *)0x0);
  __this_03[1].monitor = pSVar5;
  il2cpp_runtime_helper_022b4080(&__this_03[1].monitor,pSVar5);
  vtableDispatch = __this_03->klass->vtable[4].methodPtr;
  (*vtableDispatch)(__this_03,__this_03->klass->vtable[4].method,extraout_RDX,vtableDispatch);
  return;
}


