// Type: Gisketch.Aottg2UI.Game.AottgSandboxField
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgSandboxField.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgSandboxField$$get_Id
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgSandboxField__get_Id (Gisketch_Aottg2UI_Game_AottgSandboxField_o* __this, const MethodInfo* method);
// 0x1808fb3a0

System_String_o*
Gisketch_Aottg2UI_Game_AottgSandboxField__get_Id(Gisketch_Aottg2UI_Game_AottgSandboxField_o* __this, MethodInfo* method)

{
  return (__this->fields)._Id_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgSandboxField$$get_Label
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgSandboxField__get_Label (Gisketch_Aottg2UI_Game_AottgSandboxField_o* __this, const MethodInfo* method);
// 0x180573e90

System_String_o*
Gisketch_Aottg2UI_Game_AottgSandboxField__get_Label(Gisketch_Aottg2UI_Game_AottgSandboxField_o* __this, MethodInfo* method)

{
  return (__this->fields)._Label_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgSandboxField$$get_Setting
// il2cpp: Settings_BaseSetting_o* Gisketch_Aottg2UI_Game_AottgSandboxField__get_Setting (Gisketch_Aottg2UI_Game_AottgSandboxField_o* __this, const MethodInfo* method);
// 0x1805852b0

Settings_BaseSetting_o*
Gisketch_Aottg2UI_Game_AottgSandboxField__get_Setting(Gisketch_Aottg2UI_Game_AottgSandboxField_o* __this, MethodInfo* method)

{
  return (__this->fields)._Setting_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgSandboxField$$get_Options
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgSandboxField__get_Options (Gisketch_Aottg2UI_Game_AottgSandboxField_o* __this, const MethodInfo* method);
// 0x180584c80

System_String_array*
Gisketch_Aottg2UI_Game_AottgSandboxField__get_Options(Gisketch_Aottg2UI_Game_AottgSandboxField_o* __this, MethodInfo* method)

{
  return (__this->fields)._Options_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgSandboxField$$get_Tooltip
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgSandboxField__get_Tooltip (Gisketch_Aottg2UI_Game_AottgSandboxField_o* __this, const MethodInfo* method);
// 0x1805853f0

System_String_o*
Gisketch_Aottg2UI_Game_AottgSandboxField__get_Tooltip(Gisketch_Aottg2UI_Game_AottgSandboxField_o* __this, MethodInfo* method)

{
  return (__this->fields)._Tooltip_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgSandboxField$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSandboxField___ctor (Gisketch_Aottg2UI_Game_AottgSandboxField_o* __this, System_String_o* id, System_String_o* label, Settings_BaseSetting_o* setting, System_String_array* options, System_String_o* tooltip, const MethodInfo* method);
// 0x1823f4770

void Gisketch_Aottg2UI_Game_AottgSandboxField___ctor
               (Gisketch_Aottg2UI_Game_AottgSandboxField_o *__this,System_String_o *id,System_String_o *label,
               Settings_BaseSetting_o *setting,System_String_array *options,System_String_o *tooltip,
               MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347e94 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_184347e94 = '\x01';
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._Id_k__BackingField = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Id_k__BackingField,id);
  (__this->fields)._Label_k__BackingField = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Label_k__BackingField,label);
  (__this->fields)._Setting_k__BackingField = setting;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Setting_k__BackingField,setting);
  if (options == (System_String_array *)0x0) {
    options = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
  }
  (__this->fields)._Options_k__BackingField = options;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Options_k__BackingField,options);
  if (tooltip == (System_String_o *)0x0) {
    tooltip = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  (__this->fields)._Tooltip_k__BackingField = tooltip;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Tooltip_k__BackingField,tooltip);
  return;
}


