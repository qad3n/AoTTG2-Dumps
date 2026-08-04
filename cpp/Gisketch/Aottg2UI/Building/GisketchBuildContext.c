// Type: Gisketch.Aottg2UI.Building.GisketchBuildContext
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchBuildContext.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchBuildContext$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchBuildContext___ctor (Gisketch_Aottg2UI_Building_GisketchBuildContext_o* __this, Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* manifest, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o* localizer, Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o* actions, Gisketch_Aottg2UI_State_GisketchUIState_o* state, Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o* registry, System_Func_string__GisketchOverlayDefinition__o* dialogResolver, const MethodInfo* method);
// 0x3b73280

void Gisketch_Aottg2UI_Building_GisketchBuildContext___ctor
               (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *__this,
               Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *manifest,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,
               Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *localizer,
               Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *actions,
               Gisketch_Aottg2UI_State_GisketchUIState_o *state,
               Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *registry,
               System_Func_string__GisketchOverlayDefinition__o *dialogResolver,MethodInfo *method)

{
  if (g_data_057a9e0f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchComponentRegistry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTheme);
    g_data_057a9e0f = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Manifest = manifest;
  il2cpp_runtime_helper_022b4080(&__this->fields,manifest);
  if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
    if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    theme = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)**(undefined8 **)(TypeInfo_GisketchTheme + 0xb8);
  }
  (__this->fields).Theme = theme;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Theme,theme);
  (__this->fields).Localizer = localizer;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Localizer,localizer);
  (__this->fields).Actions = actions;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Actions,actions);
  (__this->fields).State = state;
  il2cpp_runtime_helper_022b4080(&(__this->fields).State);
  if (registry == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    if (*(int *)(TypeInfo_GisketchComponentRegistry + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    registry = (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)
               **(undefined8 **)(TypeInfo_GisketchComponentRegistry + 0xb8);
  }
  (__this->fields).Registry = registry;
  il2cpp_runtime_helper_022b4080(&(__this->fields).Registry,registry);
  (__this->fields).DialogResolver = dialogResolver;
  il2cpp_runtime_helper_022b4080(&(__this->fields).DialogResolver);
  return;
}


