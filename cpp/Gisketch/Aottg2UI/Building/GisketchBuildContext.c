// Type: Gisketch.Aottg2UI.Building.GisketchBuildContext
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Building/GisketchBuildContext.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Building.GisketchBuildContext$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Building_GisketchBuildContext___ctor (Gisketch_Aottg2UI_Building_GisketchBuildContext_o* __this, Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o* manifest, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o* localizer, Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o* actions, Gisketch_Aottg2UI_State_GisketchUIState_o* state, Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o* registry, System_Func_string__GisketchOverlayDefinition__o* dialogResolver, const MethodInfo* method);
// 0x1818da4a0

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
  if (Il2CppMethodInitialized_18434212d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    Il2CppMethodInitialized_18434212d = '\x01';
  }
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  (__this->fields).Manifest = manifest;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Manifest,manifest);
  if (theme == (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    }
    theme = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->static_fields->Default;
  }
  (__this->fields).Theme = theme;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Theme,theme);
  (__this->fields).Localizer = localizer;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Localizer,localizer);
  (__this->fields).Actions = actions;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Actions,actions);
  (__this->fields).State = state;
  Il2CppCodeGenWriteBarrier(&(__this->fields).State,state);
  if (registry == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
    }
    registry = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
  }
  (__this->fields).Registry = registry;
  Il2CppCodeGenWriteBarrier(&(__this->fields).Registry,registry);
  (__this->fields).DialogResolver = dialogResolver;
  Il2CppCodeGenWriteBarrier(&(__this->fields).DialogResolver,dialogResolver);
  return;
}


