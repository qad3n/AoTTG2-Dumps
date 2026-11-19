// Type: Settings.HumanInputSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Settings/HumanInputSettings.cs
// Prior real C# source (older reference): Assets/Scripts/Settings/Input/HumanInputSettings.cs
// --------------------------------

// Settings.HumanInputSettings$$get_FileName
// il2cpp: System_String_o* Settings_HumanInputSettings__get_FileName (Settings_HumanInputSettings_o* __this, const MethodInfo* method);
// 0x5b4cd70

System_String_o *
Settings_HumanInputSettings__get_FileName(Settings_HumanInputSettings_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075472aa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"HumanInput.json");
    Il2CppMethodInitialized_075472aa = '\x01';
  }
  return "HumanInput.json";
}


// Settings.HumanInputSettings$$.ctor
// il2cpp: void Settings_HumanInputSettings___ctor (Settings_HumanInputSettings_o* __this, const MethodInfo* method);
// 0x5b4cda0

void Settings_HumanInputSettings___ctor(Settings_HumanInputSettings_o *__this,MethodInfo *method)

{
  int32_t iVar1;
  System_String_array *pSVar2;
  Settings_KeybindSetting_o *pSVar3;
  Settings_BoolSetting_o *pSVar4;
  Settings_IntSetting_o *__this_00;
  Settings_FloatSetting_o *__this_01;
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
  float fVar5;
  
  if (Il2CppMethodInitialized_075472ab == '\0') {
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
    Il2CppMethodInitialized_075472ab = '\x01';
  }
  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
  if (pSVar2 == (System_String_array *)0x0) {
label_05b4da14:
    ThrowNullReferenceException();
  }
  if ((int)pSVar2->max_length != 0) {
    pSVar2->m_Items[0] = "Mouse0";
    Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
    if ((pSVar2->max_length & 0xfffffffe) != 0) {
      pSVar2->m_Items[1] = "None";
      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
      pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
      Settings_KeybindSetting___ctor(pSVar3,pSVar2,method_00);
      (__this->fields).AttackDefault = pSVar3;
      Il2CppCodeGenWriteBarrier(&(__this->fields).AttackDefault);
      pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
      if (pSVar2 == (System_String_array *)0x0) goto label_05b4da14;
      if ((int)pSVar2->max_length != 0) {
        pSVar2->m_Items[0] = "Mouse1";
        Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
        if ((pSVar2->max_length & 0xfffffffe) != 0) {
          pSVar2->m_Items[1] = "None";
          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
          pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
          Settings_KeybindSetting___ctor(pSVar3,pSVar2,method_01);
          (__this->fields).AttackSpecial = pSVar3;
          Il2CppCodeGenWriteBarrier(&(__this->fields).AttackSpecial);
          pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
          if (pSVar2 == (System_String_array *)0x0) goto label_05b4da14;
          if ((int)pSVar2->max_length != 0) {
            pSVar2->m_Items[0] = "Q";
            Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
            if ((pSVar2->max_length & 0xfffffffe) != 0) {
              pSVar2->m_Items[1] = "None";
              Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
              pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
              Settings_KeybindSetting___ctor(pSVar3,pSVar2,method_02);
              (__this->fields).HookLeft = pSVar3;
              Il2CppCodeGenWriteBarrier(&(__this->fields).HookLeft);
              pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
              if (pSVar2 == (System_String_array *)0x0) goto label_05b4da14;
              if ((int)pSVar2->max_length != 0) {
                pSVar2->m_Items[0] = "E";
                Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
                if ((pSVar2->max_length & 0xfffffffe) != 0) {
                  pSVar2->m_Items[1] = "None";
                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
                  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                  Settings_KeybindSetting___ctor(pSVar3,pSVar2,method_03);
                  (__this->fields).HookRight = pSVar3;
                  Il2CppCodeGenWriteBarrier(&(__this->fields).HookRight);
                  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                  if (pSVar2 == (System_String_array *)0x0) goto label_05b4da14;
                  if ((int)pSVar2->max_length != 0) {
                    pSVar2->m_Items[0] = "None";
                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
                    if ((pSVar2->max_length & 0xfffffffe) != 0) {
                      pSVar2->m_Items[1] = "None";
                      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
                      pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                      Settings_KeybindSetting___ctor(pSVar3,pSVar2,method_04);
                      (__this->fields).HookBoth = pSVar3;
                      Il2CppCodeGenWriteBarrier(&(__this->fields).HookBoth);
                      pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                      if (pSVar2 == (System_String_array *)0x0) goto label_05b4da14;
                      if ((int)pSVar2->max_length != 0) {
                        pSVar2->m_Items[0] = "LeftControl";
                        Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
                        if ((pSVar2->max_length & 0xfffffffe) != 0) {
                          pSVar2->m_Items[1] = "None";
                          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
                          pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                          Settings_KeybindSetting___ctor(pSVar3,pSVar2,method_05);
                          (__this->fields).Dash = pSVar3;
                          Il2CppCodeGenWriteBarrier(&(__this->fields).Dash);
                          pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                          if (pSVar2 == (System_String_array *)0x0) goto label_05b4da14;
                          if ((int)pSVar2->max_length != 0) {
                            pSVar2->m_Items[0] = "WheelDown";
                            Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
                            if ((pSVar2->max_length & 0xfffffffe) != 0) {
                              pSVar2->m_Items[1] = "None";
                              Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
                              pSVar3 = il2cpp_codegen_object_new
                                                 ((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                              Settings_KeybindSetting___ctor(pSVar3,pSVar2,method_06);
                              (__this->fields).ReelIn = pSVar3;
                              Il2CppCodeGenWriteBarrier(&(__this->fields).ReelIn);
                              pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                              if (pSVar2 == (System_String_array *)0x0) goto label_05b4da14;
                              if ((int)pSVar2->max_length != 0) {
                                pSVar2->m_Items[0] = "LeftAlt";
                                Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
                                if ((pSVar2->max_length & 0xfffffffe) != 0) {
                                  pSVar2->m_Items[1] = "None";
                                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
                                  pSVar3 = il2cpp_codegen_object_new
                                                     ((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                                  Settings_KeybindSetting___ctor(pSVar3,pSVar2,method_07);
                                  (__this->fields).ReelOut = pSVar3;
                                  Il2CppCodeGenWriteBarrier(&(__this->fields).ReelOut);
                                  pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                  if (pSVar2 == (System_String_array *)0x0) goto label_05b4da14;
                                  if ((int)pSVar2->max_length != 0) {
                                    pSVar2->m_Items[0] = "LeftControl";
                                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
                                    if ((pSVar2->max_length & 0xfffffffe) != 0) {
                                      pSVar2->m_Items[1] = "None";
                                      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
                                      pSVar3 = il2cpp_codegen_object_new
                                                         ((Il2CppClass *)TypeInfo_Settings_KeybindSetting);
                                      Settings_KeybindSetting___ctor(pSVar3,pSVar2,method_08);
                                      (__this->fields).Dodge = pSVar3;
                                      Il2CppCodeGenWriteBarrier(&(__this->fields).Dodge);
                                      pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                      if (pSVar2 == (System_String_array *)0x0) goto label_05b4da14;
                                      if ((int)pSVar2->max_length != 0) {
                                        pSVar2->m_Items[0] = "LeftShift";
                                        Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
                                        if ((pSVar2->max_length & 0xfffffffe) != 0) {
                                          pSVar2->m_Items[1] = "None";
                                          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
                                          pSVar3 = il2cpp_codegen_object_new
                                                             ((Il2CppClass *)TypeInfo_Settings_KeybindSetting)
                                          ;
                                          Settings_KeybindSetting___ctor(pSVar3,pSVar2,method_09);
                                          (__this->fields).Jump = pSVar3;
                                          Il2CppCodeGenWriteBarrier(&(__this->fields).Jump);
                                          pSVar2 = (System_String_array *)SZArrayNew(TypeInfo_string_array,2);
                                          if (pSVar2 == (System_String_array *)0x0) goto label_05b4da14;
                                          if ((int)pSVar2->max_length != 0) {
                                            pSVar2->m_Items[0] = "R";
                                            Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
                                            if ((pSVar2->max_length & 0xfffffffe) != 0) {
                                              pSVar2->m_Items[1] = "None";
                                              Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
                                              pSVar3 = il2cpp_codegen_object_new
                                                                 ((Il2CppClass *)
                                                                  TypeInfo_Settings_KeybindSetting);
                                              Settings_KeybindSetting___ctor(pSVar3,pSVar2,method_10);
                                              (__this->fields).Reload = pSVar3;
                                              Il2CppCodeGenWriteBarrier(&(__this->fields).Reload);
                                              pSVar2 = (System_String_array *)
                                                       SZArrayNew(TypeInfo_string_array,2);
                                              if (pSVar2 == (System_String_array *)0x0) goto label_05b4da14;
                                              if ((int)pSVar2->max_length != 0) {
                                                pSVar2->m_Items[0] = "LeftControl";
                                                Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
                                                if ((pSVar2->max_length & 0xfffffffe) != 0) {
                                                  pSVar2->m_Items[1] = "None";
                                                  Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
                                                  pSVar3 = il2cpp_codegen_object_new
                                                                     ((Il2CppClass *)
                                                                      TypeInfo_Settings_KeybindSetting);
                                                  Settings_KeybindSetting___ctor(pSVar3,pSVar2,method_11);
                                                  (__this->fields).HorseMount = pSVar3;
                                                  Il2CppCodeGenWriteBarrier(&(__this->fields).HorseMount);
                                                  pSVar2 = (System_String_array *)
                                                           SZArrayNew(TypeInfo_string_array,2);
                                                  if (pSVar2 == (System_String_array *)0x0) goto label_05b4da14;
                                                  if ((int)pSVar2->max_length != 0) {
                                                    pSVar2->m_Items[0] = "LeftShift";
                                                    Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
                                                    if ((pSVar2->max_length & 0xfffffffe) != 0) {
                                                      pSVar2->m_Items[1] = "None";
                                                      Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
                                                      pSVar3 = il2cpp_codegen_object_new
                                                                         ((Il2CppClass *)
                                                                          TypeInfo_Settings_KeybindSetting);
                                                      Settings_KeybindSetting___ctor(pSVar3,pSVar2,method_12);
                                                      (__this->fields).HorseWalk = pSVar3;
                                                      Il2CppCodeGenWriteBarrier(&(__this->fields).HorseWalk);
                                                      pSVar2 = (System_String_array *)
                                                               SZArrayNew(TypeInfo_string_array,2);
                                                      if (pSVar2 == (System_String_array *)0x0)
                                                      goto label_05b4da14;
                                                      if ((int)pSVar2->max_length != 0) {
                                                        pSVar2->m_Items[0] = "Space";
                                                        Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
                                                        if ((pSVar2->max_length & 0xfffffffe) != 0) {
                                                          pSVar2->m_Items[1] = "None";
                                                          Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
                                                          pSVar3 = il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                              TypeInfo_Settings_KeybindSetting
                                                                             );
                                                          Settings_KeybindSetting___ctor
                                                                    (pSVar3,pSVar2,method_13);
                                                          (__this->fields).HorseJump = pSVar3;
                                                          Il2CppCodeGenWriteBarrier
                                                                    (&(__this->fields).HorseJump);
                                                          pSVar2 = (System_String_array *)
                                                                   SZArrayNew(TypeInfo_string_array,2);
                                                          if (pSVar2 == (System_String_array *)0x0)
                                                          goto label_05b4da14;
                                                          if ((int)pSVar2->max_length != 0) {
                                                            pSVar2->m_Items[0] = "None";
                                                            Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
                                                            if ((pSVar2->max_length & 0xfffffffe) != 0) {
                                                              pSVar2->m_Items[1] = "None";
                                                              Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
                                                              pSVar3 = il2cpp_codegen_object_new
                                                                                 ((Il2CppClass *)
                                                                                                                                                                    
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar3,pSVar2,method_14)
                                                       ;
                                                       (__this->fields).NapeLock = pSVar3;
                                                       Il2CppCodeGenWriteBarrier(&(__this->fields).NapeLock);
                                                       pSVar2 = (System_String_array *)
                                                                SZArrayNew(TypeInfo_string_array,2);
                                                       if (pSVar2 == (System_String_array *)0x0)
                                                       goto label_05b4da14;
                                                       if ((int)pSVar2->max_length != 0) {
                                                         pSVar2->m_Items[0] = "LeftAlt";
                                                         Il2CppCodeGenWriteBarrier(pSVar2->m_Items);
                                                         if ((pSVar2->max_length & 0xfffffffe) != 0) {
                                                           pSVar2->m_Items[1] = "None";
                                                           Il2CppCodeGenWriteBarrier(pSVar2->m_Items + 1);
                                                           pSVar3 = il2cpp_codegen_object_new
                                                                              ((Il2CppClass *)
                                                                                                                                                              
                                                       TypeInfo_Settings_KeybindSetting);
                                                       Settings_KeybindSetting___ctor(pSVar3,pSVar2,method_15)
                                                       ;
                                                       (__this->fields).Walk = pSVar3;
                                                       Il2CppCodeGenWriteBarrier(&(__this->fields).Walk);
                                                       pSVar4 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                           TypeInfo_Settings_BoolSetting);
                                                       if (Il2CppMethodInitialized_075472d6 == '\0') {
                                                         il2cpp_codegen_initialize_runtime_metadata
                                                                   (&
                                                       MethodInfo_Settings_TypedSetting_bool_ctor);
                                                       Il2CppMethodInitialized_075472d6 = '\x01';
                                                       }
                                                       Settings_TypedSetting_bool____ctor_42da050
                                                                 ((Settings_TypedSetting_bool__o *)pSVar4,true
                                                                  ,(MethodInfo_42DA050 *)
                                                                   MethodInfo_Settings_TypedSetting_bool_ctor)
                                                       ;
                                                       (__this->fields).DashDoubleTap = pSVar4;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).DashDoubleTap);
                                                       pSVar4 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                           TypeInfo_Settings_BoolSetting);
                                                       if (Il2CppMethodInitialized_075472d6 == '\0') {
                                                         il2cpp_codegen_initialize_runtime_metadata
                                                                   (&
                                                       MethodInfo_Settings_TypedSetting_bool_ctor);
                                                       Il2CppMethodInitialized_075472d6 = '\x01';
                                                       }
                                                       Settings_TypedSetting_bool____ctor_42da050
                                                                 ((Settings_TypedSetting_bool__o *)pSVar4,true
                                                                  ,(MethodInfo_42DA050 *)
                                                                   MethodInfo_Settings_TypedSetting_bool_ctor)
                                                       ;
                                                       (__this->fields).WallSlideDash = pSVar4;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).WallSlideDash);
                                                       __this_00 = il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                              TypeInfo_Settings_IntSetting);
                                                       if (Il2CppMethodInitialized_075472e8 == '\0') {
                                                         il2cpp_codegen_initialize_runtime_metadata
                                                                   (&MethodInfo_Settings_TypedSetting_int_ctor
                                                                   );
                                                         Il2CppMethodInitialized_075472e8 = '\x01';
                                                       }
                                                       (__this_00->fields).MinValue = -0x80000000;
                                                       (__this_00->fields).MaxValue = 0x7fffffff;
                                                       Settings_TypedSetting_int____ctor
                                                                 ((Settings_TypedSetting_int__o *)__this_00,
                                                                  (MethodInfo_42DA180 *)
                                                                  MethodInfo_Settings_TypedSetting_int_ctor);
                                                       (__this_00->fields).MinValue = -0x80000000;
                                                       (__this_00->fields).MaxValue = 0x7fffffff;
                                                       iVar1 = (*(__this_00->klass->vtable)._11_SanitizeValue.
                                                                 methodPtr)(__this_00,2,
                                                                            (__this_00->klass->vtable).
                                                                            _11_SanitizeValue.method);
                                                       (__this_00->fields).DefaultValue = iVar1;
                                                       (*(__this_00->klass->vtable)._4_SetDefault.methodPtr)
                                                                 (__this_00,
                                                                  (__this_00->klass->vtable)._4_SetDefault.
                                                                  method);
                                                       (__this->fields).WallSlideAttach = __this_00;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).WallSlideAttach);
                                                       __this_01 = il2cpp_codegen_object_new
                                                                             ((Il2CppClass *)
                                                                              TypeInfo_Settings_FloatSetting);
                                                       if (Il2CppMethodInitialized_075472de == '\0') {
                                                         il2cpp_codegen_initialize_runtime_metadata
                                                                   (&
                                                       MethodInfo_Settings_TypedSetting_float_ctor);
                                                       Il2CppMethodInitialized_075472de = '\x01';
                                                       }
                                                       (__this_01->fields).MinValue = -3.4028235e+38;
                                                       (__this_01->fields).MaxValue = 3.4028235e+38;
                                                       Settings_TypedSetting_float____ctor
                                                                 ((Settings_TypedSetting_float__o *)__this_01,
                                                                  (MethodInfo_42DA3D0 *)
                                                                  MethodInfo_Settings_TypedSetting_float_ctor)
                                                       ;
                                                       (__this_01->fields).MinValue = 0.0;
                                                       (__this_01->fields).MaxValue = 1.0;
                                                       fVar5 = (*(__this_01->klass->vtable)._11_SanitizeValue.
                                                                 methodPtr)(__this_01,0.2,
                                                                            (__this_01->klass->vtable).
                                                                            _11_SanitizeValue.method);
                                                       (__this_01->fields).DefaultValue = fVar5;
                                                       (*(__this_01->klass->vtable)._4_SetDefault.methodPtr)
                                                                 (__this_01,
                                                                  (__this_01->klass->vtable)._4_SetDefault.
                                                                  method);
                                                       (__this->fields).ReelOutScrollSmoothing = __this_01;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).ReelOutScrollSmoothing);
                                                       pSVar4 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                           TypeInfo_Settings_BoolSetting);
                                                       if (Il2CppMethodInitialized_075472d6 == '\0') {
                                                         il2cpp_codegen_initialize_runtime_metadata
                                                                   (&
                                                       MethodInfo_Settings_TypedSetting_bool_ctor);
                                                       Il2CppMethodInitialized_075472d6 = '\x01';
                                                       }
                                                       Settings_TypedSetting_bool____ctor_42da050
                                                                 ((Settings_TypedSetting_bool__o *)pSVar4,
                                                                  false,(MethodInfo_42DA050 *)
                                                                                                                                                
                                                       MethodInfo_Settings_TypedSetting_bool_ctor);
                                                       (__this->fields).SwapTSAttackSpecial = pSVar4;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).SwapTSAttackSpecial);
                                                       pSVar4 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                           TypeInfo_Settings_BoolSetting);
                                                       if (Il2CppMethodInitialized_075472d6 == '\0') {
                                                         il2cpp_codegen_initialize_runtime_metadata
                                                                   (&
                                                       MethodInfo_Settings_TypedSetting_bool_ctor);
                                                       Il2CppMethodInitialized_075472d6 = '\x01';
                                                       }
                                                       Settings_TypedSetting_bool____ctor_42da050
                                                                 ((Settings_TypedSetting_bool__o *)pSVar4,
                                                                  false,(MethodInfo_42DA050 *)
                                                                                                                                                
                                                       MethodInfo_Settings_TypedSetting_bool_ctor);
                                                       (__this->fields).AutoRefillGas = pSVar4;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).AutoRefillGas);
                                                       pSVar4 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                           TypeInfo_Settings_BoolSetting);
                                                       if (Il2CppMethodInitialized_075472d6 == '\0') {
                                                         il2cpp_codegen_initialize_runtime_metadata
                                                                   (&
                                                       MethodInfo_Settings_TypedSetting_bool_ctor);
                                                       Il2CppMethodInitialized_075472d6 = '\x01';
                                                       }
                                                       Settings_TypedSetting_bool____ctor_42da050
                                                                 ((Settings_TypedSetting_bool__o *)pSVar4,
                                                                  false,(MethodInfo_42DA050 *)
                                                                                                                                                
                                                       MethodInfo_Settings_TypedSetting_bool_ctor);
                                                       (__this->fields).AutoUseGas = pSVar4;
                                                       Il2CppCodeGenWriteBarrier(&(__this->fields).AutoUseGas)
                                                       ;
                                                       pSVar4 = il2cpp_codegen_object_new
                                                                          ((Il2CppClass *)
                                                                           TypeInfo_Settings_BoolSetting);
                                                       if (Il2CppMethodInitialized_075472d6 == '\0') {
                                                         il2cpp_codegen_initialize_runtime_metadata
                                                                   (&
                                                       MethodInfo_Settings_TypedSetting_bool_ctor);
                                                       Il2CppMethodInitialized_075472d6 = '\x01';
                                                       }
                                                       Settings_TypedSetting_bool____ctor_42da050
                                                                 ((Settings_TypedSetting_bool__o *)pSVar4,true
                                                                  ,(MethodInfo_42DA050 *)
                                                                   MethodInfo_Settings_TypedSetting_bool_ctor)
                                                       ;
                                                       (__this->fields).ReelInHolding = pSVar4;
                                                       Il2CppCodeGenWriteBarrier
                                                                 (&(__this->fields).ReelInHolding);
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
  ThrowIndexOutOfRangeException();
}


