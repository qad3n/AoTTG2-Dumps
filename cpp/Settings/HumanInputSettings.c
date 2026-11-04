// Type: Settings.HumanInputSettings
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/HumanInputSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/HumanInputSettings.cs
// --------------------------------

// Settings.HumanInputSettings$$get_FileName
// il2cpp: System_String_o* Settings_HumanInputSettings__get_FileName (Settings_HumanInputSettings_o* __this, const MethodInfo* method);
// 0x181f18bb0

System_String_o *
Settings_HumanInputSettings__get_FileName(Settings_HumanInputSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184345460 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"HumanInput.json");
    Il2CppMethodInitialized_184345460 = '\x01';
  }
  return "HumanInput.json";
}


// Settings.HumanInputSettings$$.ctor
// il2cpp: void Settings_HumanInputSettings___ctor (Settings_HumanInputSettings_o* __this, const MethodInfo* method);
// 0x181f17f40

void Settings_HumanInputSettings___ctor(Settings_HumanInputSettings_o *__this,MethodInfo *method)

{
  Settings_IntSetting_c *pSVar1;
  System_String_o *pSVar2;
  int32_t iVar3;
  System_String_array *pSVar4;
  Settings_KeybindSetting_o *pSVar5;
  Settings_BoolSetting_o *pSVar6;
  Settings_IntSetting_o *__this_00;
  Settings_FloatSetting_o *__this_01;
  
  if (Il2CppMethodInitialized_184345461 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_BoolSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_FloatSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_IntSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_KeybindSetting);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    il2cpp_codegen_initialize_runtime_metadata(&"LeftAlt");
    il2cpp_codegen_initialize_runtime_metadata(&"R");
    il2cpp_codegen_initialize_runtime_metadata(&"Q");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftShift");
    il2cpp_codegen_initialize_runtime_metadata(&"None");
    il2cpp_codegen_initialize_runtime_metadata(&"E");
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse1");
    il2cpp_codegen_initialize_runtime_metadata(&"Space");
    il2cpp_codegen_initialize_runtime_metadata(&"WheelDown");
    il2cpp_codegen_initialize_runtime_metadata(&"Mouse0");
    il2cpp_codegen_initialize_runtime_metadata(&"LeftControl");
    Il2CppMethodInitialized_184345461 = '\x01';
  }
  pSVar4 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
  pSVar2 = "Mouse0";
  if (pSVar4 != (System_String_array *)0x0) {
    if ((int)pSVar4->max_length != 0) {
      pSVar4->m_Items[0] = "Mouse0";
      Il2CppCodeGenWriteBarrier(pSVar4->m_Items,pSVar2);
      pSVar2 = "None";
      if (1 < (uint)pSVar4->max_length) {
        pSVar4->m_Items[1] = "None";
        Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1,pSVar2);
        pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
        Settings_KeybindSetting___ctor(pSVar5,pSVar4,(MethodInfo *)0x0);
        (__this->fields).AttackDefault = pSVar5;
        Il2CppCodeGenWriteBarrier(&(__this->fields).AttackDefault,pSVar5);
        pSVar4 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
        pSVar2 = "Mouse1";
        if (pSVar4 == (System_String_array *)0x0) goto label_181f18b98;
        if ((int)pSVar4->max_length != 0) {
          pSVar4->m_Items[0] = "Mouse1";
          Il2CppCodeGenWriteBarrier(pSVar4->m_Items,pSVar2);
          pSVar2 = "None";
          if (1 < (uint)pSVar4->max_length) {
            pSVar4->m_Items[1] = "None";
            Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1,pSVar2);
            pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
            Settings_KeybindSetting___ctor(pSVar5,pSVar4,(MethodInfo *)0x0);
            (__this->fields).AttackSpecial = pSVar5;
            Il2CppCodeGenWriteBarrier(&(__this->fields).AttackSpecial,pSVar5);
            pSVar4 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
            pSVar2 = "Q";
            if (pSVar4 == (System_String_array *)0x0) goto label_181f18b98;
            if ((int)pSVar4->max_length != 0) {
              pSVar4->m_Items[0] = "Q";
              Il2CppCodeGenWriteBarrier(pSVar4->m_Items,pSVar2);
              pSVar2 = "None";
              if (1 < (uint)pSVar4->max_length) {
                pSVar4->m_Items[1] = "None";
                Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1,pSVar2);
                pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                Settings_KeybindSetting___ctor(pSVar5,pSVar4,(MethodInfo *)0x0);
                (__this->fields).HookLeft = pSVar5;
                Il2CppCodeGenWriteBarrier(&(__this->fields).HookLeft,pSVar5);
                pSVar4 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                pSVar2 = "E";
                if (pSVar4 == (System_String_array *)0x0) goto label_181f18b98;
                if ((int)pSVar4->max_length != 0) {
                  pSVar4->m_Items[0] = "E";
                  Il2CppCodeGenWriteBarrier(pSVar4->m_Items,pSVar2);
                  pSVar2 = "None";
                  if (1 < (uint)pSVar4->max_length) {
                    pSVar4->m_Items[1] = "None";
                    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1,pSVar2);
                    pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                    Settings_KeybindSetting___ctor(pSVar5,pSVar4,(MethodInfo *)0x0);
                    (__this->fields).HookRight = pSVar5;
                    Il2CppCodeGenWriteBarrier(&(__this->fields).HookRight,pSVar5);
                    pSVar4 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                    pSVar2 = "None";
                    if (pSVar4 == (System_String_array *)0x0) goto label_181f18b98;
                    if ((int)pSVar4->max_length != 0) {
                      pSVar4->m_Items[0] = "None";
                      Il2CppCodeGenWriteBarrier(pSVar4->m_Items,pSVar2);
                      pSVar2 = "None";
                      if (1 < (uint)pSVar4->max_length) {
                        pSVar4->m_Items[1] = "None";
                        Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1,pSVar2);
                        pSVar5 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                        Settings_KeybindSetting___ctor(pSVar5,pSVar4,(MethodInfo *)0x0);
                        (__this->fields).HookBoth = pSVar5;
                        Il2CppCodeGenWriteBarrier(&(__this->fields).HookBoth,pSVar5);
                        pSVar4 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                        pSVar2 = "LeftControl";
                        if (pSVar4 == (System_String_array *)0x0) goto label_181f18b98;
                        if ((int)pSVar4->max_length != 0) {
                          pSVar4->m_Items[0] = "LeftControl";
                          Il2CppCodeGenWriteBarrier(pSVar4->m_Items,pSVar2);
                          pSVar2 = "None";
                          if (1 < (uint)pSVar4->max_length) {
                            pSVar4->m_Items[1] = "None";
                            Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1,pSVar2);
                            pSVar5 = il2cpp_codegen_object_new
                                               ((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                            Settings_KeybindSetting___ctor(pSVar5,pSVar4,(MethodInfo *)0x0);
                            (__this->fields).Dash = pSVar5;
                            Il2CppCodeGenWriteBarrier(&(__this->fields).Dash,pSVar5);
                            pSVar4 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                            pSVar2 = "WheelDown";
                            if (pSVar4 == (System_String_array *)0x0) goto label_181f18b98;
                            if ((int)pSVar4->max_length != 0) {
                              pSVar4->m_Items[0] = "WheelDown";
                              Il2CppCodeGenWriteBarrier(pSVar4->m_Items,pSVar2);
                              pSVar2 = "None";
                              if (1 < (uint)pSVar4->max_length) {
                                pSVar4->m_Items[1] = "None";
                                Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1,pSVar2);
                                pSVar5 = il2cpp_codegen_object_new
                                                   ((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                                Settings_KeybindSetting___ctor(pSVar5,pSVar4,(MethodInfo *)0x0);
                                (__this->fields).ReelIn = pSVar5;
                                Il2CppCodeGenWriteBarrier(&(__this->fields).ReelIn,pSVar5);
                                pSVar4 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                pSVar2 = "LeftAlt";
                                if (pSVar4 == (System_String_array *)0x0) goto label_181f18b98;
                                if ((int)pSVar4->max_length != 0) {
                                  pSVar4->m_Items[0] = "LeftAlt";
                                  Il2CppCodeGenWriteBarrier(pSVar4->m_Items,pSVar2);
                                  pSVar2 = "None";
                                  if (1 < (uint)pSVar4->max_length) {
                                    pSVar4->m_Items[1] = "None";
                                    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1,pSVar2);
                                    pSVar5 = il2cpp_codegen_object_new
                                                       ((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                                    Settings_KeybindSetting___ctor(pSVar5,pSVar4,(MethodInfo *)0x0);
                                    (__this->fields).ReelOut = pSVar5;
                                    Il2CppCodeGenWriteBarrier(&(__this->fields).ReelOut,pSVar5);
                                    pSVar4 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                    pSVar2 = "LeftControl";
                                    if (pSVar4 == (System_String_array *)0x0) goto label_181f18b98;
                                    if ((int)pSVar4->max_length != 0) {
                                      pSVar4->m_Items[0] = "LeftControl";
                                      Il2CppCodeGenWriteBarrier(pSVar4->m_Items,pSVar2);
                                      pSVar2 = "None";
                                      if (1 < (uint)pSVar4->max_length) {
                                        pSVar4->m_Items[1] = "None";
                                        Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1,pSVar2);
                                        pSVar5 = il2cpp_codegen_object_new
                                                           ((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                                        Settings_KeybindSetting___ctor(pSVar5,pSVar4,(MethodInfo *)0x0);
                                        (__this->fields).Dodge = pSVar5;
                                        Il2CppCodeGenWriteBarrier(&(__this->fields).Dodge,pSVar5);
                                        pSVar4 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                        pSVar2 = "LeftShift";
                                        if (pSVar4 == (System_String_array *)0x0) goto label_181f18b98;
                                        if ((int)pSVar4->max_length != 0) {
                                          pSVar4->m_Items[0] = "LeftShift";
                                          Il2CppCodeGenWriteBarrier(pSVar4->m_Items,pSVar2);
                                          pSVar2 = "None";
                                          if (1 < (uint)pSVar4->max_length) {
                                            pSVar4->m_Items[1] = "None";
                                            Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1,pSVar2);
                                            pSVar5 = il2cpp_codegen_object_new
                                                               ((Il2CppClass *)
                                                                TypeInfo_Settings_KeybindSetting);
                                            Settings_KeybindSetting___ctor(pSVar5,pSVar4,(MethodInfo *)0x0);
                                            (__this->fields).Jump = pSVar5;
                                            Il2CppCodeGenWriteBarrier(&(__this->fields).Jump,pSVar5);
                                            pSVar4 = (System_String_array *)
                                                     SZArrayNew(TypeInfo_string_array,2);
                                            pSVar2 = "R";
                                            if (pSVar4 == (System_String_array *)0x0) goto label_181f18b98;
                                            if ((int)pSVar4->max_length != 0) {
                                              pSVar4->m_Items[0] = "R";
                                              Il2CppCodeGenWriteBarrier(pSVar4->m_Items,pSVar2);
                                              pSVar2 = "None";
                                              if (1 < (uint)pSVar4->max_length) {
                                                pSVar4->m_Items[1] = "None";
                                                Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1,pSVar2);
                                                pSVar5 = il2cpp_codegen_object_new
                                                                   ((Il2CppClass *)
                                                                    TypeInfo_Settings_KeybindSetting);
                                                Settings_KeybindSetting___ctor
                                                          (pSVar5,pSVar4,(MethodInfo *)0x0);
                                                (__this->fields).Reload = pSVar5;
                                                Il2CppCodeGenWriteBarrier(&(__this->fields).Reload,pSVar5);
                                                pSVar4 = (System_String_array *)
                                                         SZArrayNew(TypeInfo_string_array,2);
                                                pSVar2 = "LeftControl";
                                                if (pSVar4 == (System_String_array *)0x0) goto label_181f18b98;
                                                if ((int)pSVar4->max_length != 0) {
                                                  pSVar4->m_Items[0] = "LeftControl";
                                                  Il2CppCodeGenWriteBarrier(pSVar4->m_Items,pSVar2);
                                                  pSVar2 = "None";
                                                  if (1 < (uint)pSVar4->max_length) {
                                                    pSVar4->m_Items[1] = "None";
                                                    Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1,pSVar2);
                                                    pSVar5 = il2cpp_codegen_object_new
                                                                       ((Il2CppClass *)
                                                                        TypeInfo_Settings_KeybindSetting);
                                                    Settings_KeybindSetting___ctor
                                                              (pSVar5,pSVar4,(MethodInfo *)0x0);
                                                    (__this->fields).HorseMount = pSVar5;
                                                    Il2CppCodeGenWriteBarrier
                                                              (&(__this->fields).HorseMount,pSVar5);
                                                    pSVar4 = (System_String_array *)
                                                             SZArrayNew(TypeInfo_string_array,2);
                                                    pSVar2 = "LeftShift";
                                                    if (pSVar4 == (System_String_array *)0x0)
                                                    goto label_181f18b98;
                                                    if ((int)pSVar4->max_length != 0) {
                                                      pSVar4->m_Items[0] = "LeftShift";
                                                      Il2CppCodeGenWriteBarrier(pSVar4->m_Items,pSVar2);
                                                      pSVar2 = "None";
                                                      if (1 < (uint)pSVar4->max_length) {
                                                        pSVar4->m_Items[1] = "None";
                                                        Il2CppCodeGenWriteBarrier(pSVar4->m_Items + 1,pSVar2);
                                                        pSVar5 = il2cpp_codegen_object_new
                                                                           ((Il2CppClass *)
                                                                            TypeInfo_Settings_KeybindSetting);
                                                        Settings_KeybindSetting___ctor
                                                                  (pSVar5,pSVar4,(MethodInfo *)0x0);
                                                        (__this->fields).HorseWalk = pSVar5;
                                                        Il2CppCodeGenWriteBarrier
                                                                  (&(__this->fields).HorseWalk,pSVar5);
                                                        pSVar4 = (System_String_array *)
                                                                 SZArrayNew(TypeInfo_string_array,2);
                                                        pSVar2 = "Space";
                                                        if (pSVar4 == (System_String_array *)0x0)
                                                        goto label_181f18b98;
                                                        if ((int)pSVar4->max_length != 0) {
                                                          pSVar4->m_Items[0] = "Space";
                                                          Il2CppCodeGenWriteBarrier(pSVar4->m_Items,pSVar2);
                                                          pSVar2 = "None";
                                                          if (1 < (uint)pSVar4->max_length) {
                                                            pSVar4->m_Items[1] = "None";
                                                            Il2CppCodeGenWriteBarrier
                                                                      (pSVar4->m_Items + 1,pSVar2);
                                                            pSVar5 = il2cpp_codegen_object_new
                                                                               ((Il2CppClass *)
                                                                                                                                                                
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor
                                                                 (pSVar5,pSVar4,(MethodInfo *)0x0);
                                                       (__this->fields).HorseJump = pSVar5;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).HorseJump,pSVar5);
                                                       pSVar4 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar2 = "None";
                                                       if (pSVar4 == (System_String_array *)0x0)
                                                       goto label_181f18b98;
                                                       if ((int)pSVar4->max_length != 0) {
                                                         pSVar4->m_Items[0] = "None";
                                                         Il2CppCodeGenWriteBarrier(pSVar4->m_Items,pSVar2);
                                                         pSVar2 = "None";
                                                         if (1 < (uint)pSVar4->max_length) {
                                                           pSVar4->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier
                                                                     (pSVar4->m_Items + 1,pSVar2);
                                                           pSVar5 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor
                                                                 (pSVar5,pSVar4,(MethodInfo *)0x0);
                                                       (__this->fields).NapeLock = pSVar5;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).NapeLock,pSVar5);
                                                       pSVar4 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       pSVar2 = "LeftAlt";
                                                       if (pSVar4 == (System_String_array *)0x0)
                                                       goto label_181f18b98;
                                                       if ((int)pSVar4->max_length != 0) {
                                                         pSVar4->m_Items[0] = "LeftAlt";
                                                         Il2CppCodeGenWriteBarrier(pSVar4->m_Items,pSVar2);
                                                         pSVar2 = "None";
                                                         if (1 < (uint)pSVar4->max_length) {
                                                           pSVar4->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier
                                                                     (pSVar4->m_Items + 1,pSVar2);
                                                           pSVar5 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor
                                                                 (pSVar5,pSVar4,(MethodInfo *)0x0);
                                                       (__this->fields).Walk = pSVar5;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).Walk,pSVar5);
                                                       pSVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                           TypeInfo_Settings_BoolSetting);
                                                       if (Il2CppMethodInitialized_18434548a == '\0') {
                                                         il2cpp_codegen_initialize_runtime_metadata
                                                                   (&
                                                       MethodInfo_Settings_TypedSetting_bool_ctor);
                                                       Il2CppMethodInitialized_18434548a = '\x01';
                                                       }
                                                       Settings_TypedSetting_bool____ctor_e8f2c0
                                                                 ((Settings_TypedSetting_bool__o *)pSVar6,true
                                                                  ,(MethodInfo_E8F2C0 *)
                                                                   MethodInfo_Settings_TypedSetting_bool_ctor)
                                                       ;
                                                       (__this->fields).DashDoubleTap = pSVar6;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).DashDoubleTap,pSVar6);
                                                       pSVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                           TypeInfo_Settings_BoolSetting);
                                                       if (Il2CppMethodInitialized_18434548a == '\0') {
                                                         il2cpp_codegen_initialize_runtime_metadata
                                                                   (&
                                                       MethodInfo_Settings_TypedSetting_bool_ctor);
                                                       Il2CppMethodInitialized_18434548a = '\x01';
                                                       }
                                                       Settings_TypedSetting_bool____ctor_e8f2c0
                                                                 ((Settings_TypedSetting_bool__o *)pSVar6,true
                                                                  ,(MethodInfo_E8F2C0 *)
                                                                   MethodInfo_Settings_TypedSetting_bool_ctor)
                                                       ;
                                                       (__this->fields).WallSlideDash = pSVar6;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).WallSlideDash,pSVar6);
                                                       __this_00 = il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                              TypeInfo_Settings_IntSetting);
                                                       if (Il2CppMethodInitialized_18434549c == '\0') {
                                                         il2cpp_codegen_initialize_runtime_metadata
                                                                   (&MethodInfo_Settings_TypedSetting_int_ctor
                                                                   );
                                                         Il2CppMethodInitialized_18434549c = '\x01';
                                                       }
                                                       (__this_00->fields).MinValue = -0x80000000;
                                                       (__this_00->fields).MaxValue = 0x7fffffff;
                                                       Settings_TypedSetting___Il2CppFullySharedGenericType____ctor
                                                                 ((Settings_TypedSetting_T__o *)__this_00,
                                                                  (MethodInfo_E8F180 *)
                                                                  MethodInfo_Settings_TypedSetting_int_ctor);
                                                       pSVar1 = __this_00->klass;
                                                       (__this_00->fields).MinValue = -0x80000000;
                                                       (__this_00->fields).MaxValue = 0x7fffffff;
                                                       iVar3 = (*(pSVar1->vtable)._11_SanitizeValue.methodPtr)
                                                                         (__this_00,2,
                                                                          (pSVar1->vtable)._11_SanitizeValue.
                                                                          method);
                                                       (__this_00->fields).DefaultValue = iVar3;
                                                       (*(__this_00->klass->vtable)._4_SetDefault.methodPtr)
                                                                 (__this_00,
                                                                  (__this_00->klass->vtable)._4_SetDefault.
                                                                  method);
                                                       (__this->fields).WallSlideAttach = __this_00;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).WallSlideAttach,__this_00)
                                                       ;
                                                       __this_01 = il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                              TypeInfo_Settings_FloatSetting);
                                                       Settings_FloatSetting___ctor_1f12570
                                                                 (__this_01,0.2,0.0,1.0,(MethodInfo *)0x0);
                                                       (__this->fields).ReelOutScrollSmoothing = __this_01;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).ReelOutScrollSmoothing,
                                                                  __this_01);
                                                       pSVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                           TypeInfo_Settings_BoolSetting);
                                                       if (Il2CppMethodInitialized_18434548a == '\0') {
                                                         il2cpp_codegen_initialize_runtime_metadata
                                                                   (&
                                                       MethodInfo_Settings_TypedSetting_bool_ctor);
                                                       Il2CppMethodInitialized_18434548a = '\x01';
                                                       }
                                                       Settings_TypedSetting_bool____ctor_e8f2c0
                                                                 ((Settings_TypedSetting_bool__o *)pSVar6,
                                                                  false,(MethodInfo_E8F2C0 *)
                                                                                                                                                
                                                       MethodInfo_Settings_TypedSetting_bool_ctor);
                                                       (__this->fields).SwapTSAttackSpecial = pSVar6;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).SwapTSAttackSpecial,pSVar6
                                                                 );
                                                       pSVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                           TypeInfo_Settings_BoolSetting);
                                                       if (Il2CppMethodInitialized_18434548a == '\0') {
                                                         il2cpp_codegen_initialize_runtime_metadata
                                                                   (&
                                                       MethodInfo_Settings_TypedSetting_bool_ctor);
                                                       Il2CppMethodInitialized_18434548a = '\x01';
                                                       }
                                                       Settings_TypedSetting_bool____ctor_e8f2c0
                                                                 ((Settings_TypedSetting_bool__o *)pSVar6,
                                                                  false,(MethodInfo_E8F2C0 *)
                                                                                                                                                
                                                       MethodInfo_Settings_TypedSetting_bool_ctor);
                                                       (__this->fields).AutoRefillGas = pSVar6;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AutoRefillGas,pSVar6);
                                                       pSVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                           TypeInfo_Settings_BoolSetting);
                                                       if (Il2CppMethodInitialized_18434548a == '\0') {
                                                         il2cpp_codegen_initialize_runtime_metadata
                                                                   (&
                                                       MethodInfo_Settings_TypedSetting_bool_ctor);
                                                       Il2CppMethodInitialized_18434548a = '\x01';
                                                       }
                                                       Settings_TypedSetting_bool____ctor_e8f2c0
                                                                 ((Settings_TypedSetting_bool__o *)pSVar6,
                                                                  false,(MethodInfo_E8F2C0 *)
                                                                                                                                                
                                                       MethodInfo_Settings_TypedSetting_bool_ctor);
                                                       (__this->fields).AutoUseGas = pSVar6;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AutoUseGas,pSVar6);
                                                       pSVar6 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                           TypeInfo_Settings_BoolSetting);
                                                       if (Il2CppMethodInitialized_18434548a == '\0') {
                                                         il2cpp_codegen_initialize_runtime_metadata
                                                                   (&
                                                       MethodInfo_Settings_TypedSetting_bool_ctor);
                                                       Il2CppMethodInitialized_18434548a = '\x01';
                                                       }
                                                       Settings_TypedSetting_bool____ctor_e8f2c0
                                                                 ((Settings_TypedSetting_bool__o *)pSVar6,true
                                                                  ,(MethodInfo_E8F2C0 *)
                                                                   MethodInfo_Settings_TypedSetting_bool_ctor)
                                                       ;
                                                       (__this->fields).ReelInHolding = pSVar6;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).ReelInHolding,pSVar6);
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
    ThrowIndexOutOfRangeException();
  }
label_181f18b98:
  ThrowNullReferenceException();
}


