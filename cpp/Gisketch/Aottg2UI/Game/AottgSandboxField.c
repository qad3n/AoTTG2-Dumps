// Type: Gisketch.Aottg2UI.Game.AottgSandboxField
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgSandboxField.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgSandboxField$$get_Id
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgSandboxField__get_Id (Gisketch_Aottg2UI_Game_AottgSandboxField_o* __this, const MethodInfo* method);
// 0x58970e0

System_String_o *
Gisketch_Aottg2UI_Game_AottgSandboxField__get_Id
          (Gisketch_Aottg2UI_Game_AottgSandboxField_o *__this,MethodInfo *method)

{
  return (__this->fields)._Id_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgSandboxField$$get_Label
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgSandboxField__get_Label (Gisketch_Aottg2UI_Game_AottgSandboxField_o* __this, const MethodInfo* method);
// 0x58970f0

System_String_o *
Gisketch_Aottg2UI_Game_AottgSandboxField__get_Label
          (Gisketch_Aottg2UI_Game_AottgSandboxField_o *__this,MethodInfo *method)

{
  return (__this->fields)._Label_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgSandboxField$$get_Setting
// il2cpp: Settings_BaseSetting_o* Gisketch_Aottg2UI_Game_AottgSandboxField__get_Setting (Gisketch_Aottg2UI_Game_AottgSandboxField_o* __this, const MethodInfo* method);
// 0x5897100

Settings_BaseSetting_o *
Gisketch_Aottg2UI_Game_AottgSandboxField__get_Setting
          (Gisketch_Aottg2UI_Game_AottgSandboxField_o *__this,MethodInfo *method)

{
  return (__this->fields)._Setting_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgSandboxField$$get_Options
// il2cpp: System_String_array* Gisketch_Aottg2UI_Game_AottgSandboxField__get_Options (Gisketch_Aottg2UI_Game_AottgSandboxField_o* __this, const MethodInfo* method);
// 0x5897110

System_String_array *
Gisketch_Aottg2UI_Game_AottgSandboxField__get_Options
          (Gisketch_Aottg2UI_Game_AottgSandboxField_o *__this,MethodInfo *method)

{
  return (__this->fields)._Options_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgSandboxField$$get_Tooltip
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgSandboxField__get_Tooltip (Gisketch_Aottg2UI_Game_AottgSandboxField_o* __this, const MethodInfo* method);
// 0x5897120

System_String_o *
Gisketch_Aottg2UI_Game_AottgSandboxField__get_Tooltip
          (Gisketch_Aottg2UI_Game_AottgSandboxField_o *__this,MethodInfo *method)

{
  return (__this->fields)._Tooltip_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgSandboxField$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgSandboxField___ctor (Gisketch_Aottg2UI_Game_AottgSandboxField_o* __this, System_String_o* id, System_String_o* label, Settings_BaseSetting_o* setting, System_String_array* options, System_String_o* tooltip, const MethodInfo* method);
// 0x5897130

void Gisketch_Aottg2UI_Game_AottgSandboxField___ctor
               (Gisketch_Aottg2UI_Game_AottgSandboxField_o *__this,System_String_o *id,System_String_o *label,
               Settings_BaseSetting_o *setting,System_String_array *options,System_String_o *tooltip,
               MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754524a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_string_array);
    Il2CppMethodInitialized_0754524a = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields)._Id_k__BackingField = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Id_k__BackingField);
  (__this->fields)._Label_k__BackingField = label;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Label_k__BackingField);
  (__this->fields)._Setting_k__BackingField = setting;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Setting_k__BackingField);
  if (options == (System_String_array *)0x0) {
    options = (System_String_array *)SZArrayNew(TypeInfo_string_array,0);
  }
  (__this->fields)._Options_k__BackingField = options;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Options_k__BackingField);
  if (tooltip == (System_String_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgGameCreateSession)
      ;
    }
    tooltip = Gisketch_Aottg2UI_Game_AottgGameCreateSession__FieldDescription(id,(MethodInfo *)options);
  }
  (__this->fields)._Tooltip_k__BackingField = tooltip;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._Tooltip_k__BackingField);
  return;
}


