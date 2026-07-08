// Type: Settings.ErenShifterInputSettings
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Settings/ErenShifterInputSettings.cs
// Prior real C# source (REFERENCE, outdated): Assets/Scripts/Settings/Input/ErenShifterInputSettings.cs  [prior source available (delta unverified)]
// --------------------------------

// Settings.ErenShifterInputSettings$$get_FileName
// il2cpp: System_String_o* Settings_ErenShifterInputSettings__get_FileName (Settings_ErenShifterInputSettings_o* __this, const MethodInfo* method);
// 0x3d97480

System_String_o *
Settings_ErenShifterInputSettings__get_FileName
          (Settings_ErenShifterInputSettings_o *__this,MethodInfo *method)

{
  if (DAT_0570274c == '\0') {
    il2cpp_init_method_metadata(&"ErenShifterInput.json");
    DAT_0570274c = '\x01';
  }
  return "ErenShifterInput.json";
}


// Settings.ErenShifterInputSettings$$.ctor
// il2cpp: void Settings_ErenShifterInputSettings___ctor (Settings_ErenShifterInputSettings_o* __this, const MethodInfo* method);
// 0x3d974b0

void Settings_ErenShifterInputSettings___ctor
               (Settings_ErenShifterInputSettings_o *__this,MethodInfo *method)

{
  System_String_array *pSVar1;
  Settings_KeybindSetting_o *pSVar2;
  
  if (DAT_0570274d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_KeybindSetting);
    il2cpp_init_method_metadata(&TypeInfo_string);
    il2cpp_init_method_metadata(&"LeftAlt");
    il2cpp_init_method_metadata(&"None");
    il2cpp_init_method_metadata(&"Space");
    il2cpp_init_method_metadata(&"Mouse0");
    il2cpp_init_method_metadata(&"LeftControl");
    DAT_0570274d = '\x01';
  }
  pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
  if (pSVar1 != (System_String_array *)0x0) {
    if ((int)pSVar1->max_length != 0) {
      pSVar1->m_Items[0] = "LeftControl";
      il2cpp_runtime_glue(pSVar1->m_Items);
      if (1 < (uint)pSVar1->max_length) {
        pSVar1->m_Items[1] = "None";
        il2cpp_runtime_glue(pSVar1->m_Items + 1);
        pSVar2 = (Settings_KeybindSetting_o *)il2cpp_runtime_glue(TypeInfo_KeybindSetting);
        Settings_KeybindSetting___ctor(pSVar2,pSVar1,(MethodInfo *)0x0);
        (__this->fields).Kick = pSVar2;
        il2cpp_runtime_glue(&(__this->fields).Kick,pSVar2);
        pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
        if (pSVar1 == (System_String_array *)0x0) goto LAB_03d97754;
        if ((int)pSVar1->max_length != 0) {
          pSVar1->m_Items[0] = "Space";
          il2cpp_runtime_glue(pSVar1->m_Items);
          if (1 < (uint)pSVar1->max_length) {
            pSVar1->m_Items[1] = "None";
            il2cpp_runtime_glue(pSVar1->m_Items + 1);
            pSVar2 = (Settings_KeybindSetting_o *)il2cpp_runtime_glue(TypeInfo_KeybindSetting);
            Settings_KeybindSetting___ctor(pSVar2,pSVar1,(MethodInfo *)0x0);
            (__this->fields).Jump = pSVar2;
            il2cpp_runtime_glue(&(__this->fields).Jump,pSVar2);
            pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
            if (pSVar1 == (System_String_array *)0x0) goto LAB_03d97754;
            if ((int)pSVar1->max_length != 0) {
              pSVar1->m_Items[0] = "LeftAlt";
              il2cpp_runtime_glue(pSVar1->m_Items);
              if (1 < (uint)pSVar1->max_length) {
                pSVar1->m_Items[1] = "None";
                il2cpp_runtime_glue(pSVar1->m_Items + 1);
                pSVar2 = (Settings_KeybindSetting_o *)il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                Settings_KeybindSetting___ctor(pSVar2,pSVar1,(MethodInfo *)0x0);
                (__this->fields).Walk = pSVar2;
                il2cpp_runtime_glue(&(__this->fields).Walk,pSVar2);
                pSVar1 = (System_String_array *)il2cpp_glue_02274930(TypeInfo_string,2);
                if (pSVar1 == (System_String_array *)0x0) goto LAB_03d97754;
                if ((int)pSVar1->max_length != 0) {
                  pSVar1->m_Items[0] = "Mouse0";
                  il2cpp_runtime_glue(pSVar1->m_Items);
                  if (1 < (uint)pSVar1->max_length) {
                    pSVar1->m_Items[1] = "None";
                    il2cpp_runtime_glue(pSVar1->m_Items + 1);
                    pSVar2 = (Settings_KeybindSetting_o *)il2cpp_runtime_glue(TypeInfo_KeybindSetting);
                    Settings_KeybindSetting___ctor(pSVar2,pSVar1,(MethodInfo *)0x0);
                    (__this->fields).AttackCombo = pSVar2;
                    il2cpp_runtime_glue(&(__this->fields).AttackCombo);
                    Settings_SaveableSettingsContainer___ctor
                              ((Settings_SaveableSettingsContainer_o *)__this,(MethodInfo *)0x0);
                    return;
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
LAB_03d97754:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


