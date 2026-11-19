// Type: Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureRuntime
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgKeybindCaptureRuntime.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureRuntime$$RegisterFactory
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime__RegisterFactory (const MethodInfo* method);
// 0x5dbe970

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime__RegisterFactory(MethodInfo *method)

{
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *__this;
  Gisketch_Aottg2UI_Building_GisketchComponentFactory_o *__this_00;
  
  if (Il2CppMethodInitialized_07548177 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime_Build);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentFactory);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchComponentRegistry)
    ;
    il2cpp_codegen_initialize_runtime_metadata(&"AottgKeybindCaptureRuntime");
    Il2CppMethodInitialized_07548177 = '\x01';
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
  if (__this == (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Building_GisketchComponentRegistry__Register
            (__this,"AottgKeybindCaptureRuntime",__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureRuntime$$Build
// il2cpp: bool Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime__Build (UnityEngine_GameObject_o* go, Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* node, Gisketch_Aottg2UI_Building_GisketchBuildContext_o* context, Gisketch_Aottg2UI_Building_GisketchView_o* view, const MethodInfo* method);
// 0x5dbf670

bool Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime__Build
               (UnityEngine_GameObject_o *go,Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node,
               Gisketch_Aottg2UI_Building_GisketchBuildContext_o *context,
               Gisketch_Aottg2UI_Building_GisketchView_o *view,MethodInfo *method)

{
  uint in_EAX;
  Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime_o *pGVar1;
  System_String_o *s;
  undefined8 uStack_18;
  
  uStack_18._0_4_ = in_EAX;
  if (Il2CppMethodInitialized_07548178 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_AottgKeybindCaptureRuntime);
    Il2CppMethodInitialized_07548178 = '\x01';
  }
  uStack_18 = (ulong)(uint)uStack_18;
  if (node == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    s = (System_String_o *)0x0;
  }
  else {
    s = (node->fields).value;
  }
  System_Int32__TryParse(s,(int32_t *)((long)&uStack_18 + 4),(MethodInfo *)0x0);
  if (go != (UnityEngine_GameObject_o *)0x0) {
    pGVar1 = UnityEngine_GameObject__AddComponent_object_
                       (go,(MethodInfo_353B6A0 *)
                           MethodInfo_UnityEngine_GameObject_AddComponent_AottgKeybindCaptureRuntime);
    if (pGVar1 != (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime_o *)0x0) {
      (pGVar1->fields)._token = uStack_18._4_4_;
      return true;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureRuntime$$Setup
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime__Setup (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime_o* __this, int32_t token, const MethodInfo* method);
// 0x5dbf6f0

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime__Setup
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime_o *__this,int32_t token,
               MethodInfo *method)

{
  (__this->fields)._token = token;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureRuntime$$Update
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime__Update (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime_o* __this, const MethodInfo* method);
// 0x5dbf700

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime__Update
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime_o *__this,MethodInfo *method)

{
  int iVar1;
  UnityEngine_GameObject_o *source;
  MethodInfo *method_00;
  
  iVar1 = (__this->fields)._skipFrames;
  if (iVar1 < 1) {
    method_00 = (MethodInfo *)0x0;
    source = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog__CaptureNext(source,method_00);
    return;
  }
  (__this->fields)._skipFrames = iVar1 + -1;
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureRuntime$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime__OnDestroy (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime_o* __this, const MethodInfo* method);
// 0x5dbf720

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime__OnDestroy
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime_o *__this,MethodInfo *method)

{
  int32_t token;
  
  token = (__this->fields)._token;
  if (Il2CppMethodInitialized_07548170 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
    Il2CppMethodInitialized_07548170 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Actions_GisketchInputCapture);
  }
  Gisketch_Aottg2UI_Actions_GisketchInputCapture__End(token,(MethodInfo *)0x0);
  if (TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_captureToken ==
      token) {
    TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureDialog->static_fields->_captureToken = 0;
  }
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgKeybindCaptureRuntime$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime_o* __this, const MethodInfo* method);
// 0x5dbf790

void Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgKeybindCaptureRuntime_o *__this,MethodInfo *method)

{
  (__this->fields)._skipFrames = 2;
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


