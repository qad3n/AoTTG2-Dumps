// Type: Gisketch.Aottg2UI.Building.GisketchBuildContext
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchBuildContext.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchBuildContext$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchBuildContext___ctor (Gisketch_Aottg2UI_Building_GisketchBuildContext_o* __this, Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* manifest, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o* localizer, Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o* actions, Gisketch_Aottg2UI_State_GisketchUIState_o* state, Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o* registry, System_Func_string__GisketchOverlayDefinition__o* dialogResolver, const MethodInfo* method);
// 0x3b072c0

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
  if (DAT_057014e1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchComponentRegistry);
    il2cpp_init_method_metadata(&TypeInfo_GisketchTheme);
    DAT_057014e1 = '\x01';
  }
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  (__this->fields).Manifest = manifest;
  il2cpp_runtime_glue(&__this->fields,manifest);
  if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
    if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
      il2cpp_init_class();
    }
    theme = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)**(undefined8 **)(TypeInfo_GisketchTheme + 0xb8);
  }
  (__this->fields).Theme = theme;
  il2cpp_runtime_glue(&(__this->fields).Theme,theme);
  (__this->fields).Localizer = localizer;
  il2cpp_runtime_glue(&(__this->fields).Localizer,localizer);
  (__this->fields).Actions = actions;
  il2cpp_runtime_glue(&(__this->fields).Actions,actions);
  (__this->fields).State = state;
  il2cpp_runtime_glue(&(__this->fields).State);
  if (registry == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    if (*(int *)(TypeInfo_GisketchComponentRegistry + 0xe4) == 0) {
      il2cpp_init_class();
    }
    registry = (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)
               **(undefined8 **)(TypeInfo_GisketchComponentRegistry + 0xb8);
  }
  (__this->fields).Registry = registry;
  il2cpp_runtime_glue(&(__this->fields).Registry,registry);
  (__this->fields).DialogResolver = dialogResolver;
  il2cpp_runtime_glue(&(__this->fields).DialogResolver);
  return;
}


