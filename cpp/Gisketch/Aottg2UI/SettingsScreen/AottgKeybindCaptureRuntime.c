// Type: Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureRuntime
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgKeybindCaptureRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureRuntime$$RegisterFactory
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime__RegisterFactory (const MethodInfo* method);
// 0x182305d00

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime__RegisterFactory(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  
  if (Il2CppMethodInitialized_1843476d3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime_Build);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"AottgKeybindCaptureRuntime");
    Il2CppMethodInitialized_1843476d3 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry);
  }
  __this = TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry->static_fields->Default;
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
  Gisketch_Aottg2UI_Building_GisketchComponentFactory___ctor
            (__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime_Build,
             (MethodInfo *)0x0);
  if (__this != (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
              (__this,"AottgKeybindCaptureRuntime",__this_00,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureRuntime$$Build
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime__Build (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x182305c00

bool Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime__Build
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime_o *pGVar1;
  System_String_o *s;
  int32_t local_res10 [6];
  
  if (Il2CppMethodInitialized_1843476d4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgKeybindCaptureRuntime);
    Il2CppMethodInitialized_1843476d4 = '\x01';
  }
  local_res10[0] = 0;
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    s = (System_String_o *)0x0;
  }
  else {
    s = (node->fields).value;
  }
  System_Int32__TryParse(s,local_res10,(MethodInfo *)0x0);
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pGVar1 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_6F4D60 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_AottgKeybindCaptureRuntime);
    if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime_o *)0x0) {
      (pGVar1->fields)._token = local_res10[0];
      return true;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime__Setup (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime_o* __this, int32_t token, const MethodInfo* method);
// 0x180e4c6e0

void
Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime__Setup(Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime_o* __this, int32_t token, MethodInfo* method)

{
  (__this->fields)._token = value;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureRuntime$$Update
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime__Update (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime_o* __this, const MethodInfo* method);
// 0x182305dc0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime__Update
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime_o *__this,MethodInfo *method)

{
  int32_t *piVar1;
  Settings_InputKey_o *pSVar2;
  bool bVar3;
  UnityEngine_GameObject_o *source;
  System_String_o *value;
  
  if (0 < (__this->fields)._skipFrames) {
    piVar1 = &(__this->fields)._skipFrames;
    *piVar1 = *piVar1 + -1;
    return;
  }
  source = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_1843476ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog);
    Il2CppMethodInitialized_1843476ca = '\x01';
  }
  bVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__ShouldIgnorePointerRelease
                    ((MethodInfo *)0x0);
  if ((!bVar3) &&
     (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_draft !=
      (Settings_InputKey_o *)0x0)) {
    bVar3 = Settings_InputKey__ReadNextInput
                      (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->
                       _draft,(MethodInfo *)0x0);
    if (bVar3) {
      pSVar2 = TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_draft;
      if (pSVar2 != (Settings_InputKey_o *)0x0) {
        value = (*(pSVar2->klass->vtable)._3_ToString.methodPtr)
                          (pSVar2,(pSVar2->klass->vtable)._3_ToString.method);
        Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__Commit(value,source,(MethodInfo *)0x0);
        return;
      }
      ThrowNullReferenceException();
    }
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime__OnDestroy (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime_o* __this, const MethodInfo* method);
// 0x182305c90

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime__OnDestroy
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime_o *__this,MethodInfo *method)

{
  int token;
  
  token = (__this->fields)._token;
  if (Il2CppMethodInitialized_1843476cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    Il2CppMethodInitialized_1843476cb = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
  }
  Gisketch_Aottg2UI_Actions_GisketchInputCapture__End(token,(MethodInfo *)0x0);
  if (token == TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->
               _captureToken) {
    TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_captureToken = 0;
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime_o* __this, const MethodInfo* method);
// 0x182305e80

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime_o *__this,MethodInfo *method)

{
  (__this->fields)._skipFrames = 2;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


