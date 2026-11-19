// Type: Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgExternalLinkDialogHost.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$get_Current
// il2cpp: Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__get_Current (const MethodInfo* method);
// 0x5e85750

Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *
Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__get_Current(MethodInfo *method)

{
  if (Il2CppMethodInitialized_07548850 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost);
    Il2CppMethodInitialized_07548850 = '\x01';
  }
  return TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost->static_fields->_Current_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$set_Current
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__set_Current (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* value, const MethodInfo* method);
// 0x5e85790

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__set_Current
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07548851 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost);
    Il2CppMethodInitialized_07548851 = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost->static_fields->_Current_k__BackingField = value
  ;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost->static_fields->
              _Current_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$ShowUrl
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__ShowUrl (System_String_o* url, const MethodInfo* method);
// 0x5e857e0

bool Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__ShowUrl(System_String_o *url,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *pGVar1;
  bool bVar2;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07548852 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548852 = '\x01';
  }
  if (Il2CppMethodInitialized_07548886 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost);
    Il2CppMethodInitialized_07548886 = '\x01';
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost->static_fields->
           _Current_k__BackingField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = false;
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    bVar3 = false;
    bVar2 = System_String__IsNullOrWhiteSpace(url,(MethodInfo *)0x0);
    if (!bVar2) {
      method_00 = extraout_RDX;
      if (Il2CppMethodInitialized_07548886 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata
                  (&TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost);
        Il2CppMethodInitialized_07548886 = '\x01';
        method_00 = extraout_RDX_00;
      }
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost->static_fields->
               _Current_k__BackingField;
      if (pGVar1 == (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *)0x0) {
        ThrowNullReferenceException();
      }
      Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Show(pGVar1,url,method_00);
      bVar3 = true;
    }
  }
  return bVar3;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$Awake
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Awake (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* __this, const MethodInfo* method);
// 0x5e85960

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Awake
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_07548887 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost);
    Il2CppMethodInitialized_07548887 = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost->static_fields->_Current_k__BackingField =
       __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost->static_fields->
              _Current_k__BackingField);
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__OnDestroy (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* __this, const MethodInfo* method);
// 0x5e859b0

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *x;
  bool bVar1;
  
  if (Il2CppMethodInitialized_07548853 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07548853 = '\x01';
  }
  if (Il2CppMethodInitialized_07548886 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost);
    Il2CppMethodInitialized_07548886 = '\x01';
  }
  x = TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost->static_fields->_Current_k__BackingField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
  if (bVar1) {
    if (Il2CppMethodInitialized_07548887 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost)
      ;
      Il2CppMethodInitialized_07548887 = '\x01';
    }
    TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost->static_fields->_Current_k__BackingField =
         (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *)0x0;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost->static_fields->
                _Current_k__BackingField);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$Show
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Show (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* __this, System_String_o* url, const MethodInfo* method);
// 0x5e858c0

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Show
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *__this,System_String_o *url,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_01;
  System_String_o *value;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)url;
  if (Il2CppMethodInitialized_07548854 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"externalLink.url");
    il2cpp_codegen_initialize_runtime_metadata(&"external-link-confirm");
    Il2CppMethodInitialized_07548854 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__BuildIfNeeded(__this,method_00);
  __this_00 = (__this->fields)._state;
  if ((__this_00 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) ||
     ((__this->fields)._overlays == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
    return;
  }
  if (url != (System_String_o *)0x0) {
    value = System_String__Trim(url,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_State_GisketchUIState__Set(__this_00,"externalLink.url",value,(MethodInfo *)0x0);
    __this_01 = (__this->fields)._overlays;
    if (__this_01 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                (__this_01,"external-link-confirm",true,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$HandleAction
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__HandleAction (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* __this, System_String_o* actionId, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5e85cd0
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e85eb4: jmp 0x5e85dd5

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__HandleAction
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *__this,System_String_o *actionId,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *pGVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_01;
  bool bVar2;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_07548855 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"externalLink.url");
    il2cpp_codegen_initialize_runtime_metadata(&"externalLink.confirm");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Unhandled external link dialog action: ");
    Il2CppMethodInitialized_07548855 = '\x01';
  }
  bVar2 = System_String__op_Equality(actionId,"overlay.close",(MethodInfo *)0x0);
  if (bVar2) {
    pGVar1 = (__this->fields)._overlays;
    if (pGVar1 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(pGVar1,true,(MethodInfo *)0x0);
      return;
    }
  }
  else {
    bVar2 = System_String__op_Equality(actionId,"externalLink.confirm",(MethodInfo *)0x0);
    if (bVar2) {
      __this_00 = (__this->fields)._state;
      if (__this_00 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        pSVar3 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        pGVar1 = (__this->fields)._overlays;
      }
      else {
        pSVar3 = Gisketch_Aottg2UI_State_GisketchUIState__Get
                           (__this_00,"externalLink.url","",(MethodInfo *)0x0);
        pGVar1 = (__this->fields)._overlays;
      }
      if (pGVar1 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(pGVar1,true,(MethodInfo *)0x0);
      }
      bVar2 = System_String__IsNullOrWhiteSpace(pSVar3,(MethodInfo *)0x0);
      if (!bVar2) {
        if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
        }
        UnityEngine_Application__OpenURL(pSVar3,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      __this_01 = (__this->fields)._codeActions;
      if ((__this_01 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) ||
         (bVar2 = Gisketch_Aottg2UI_Code_AottgActionRegistry__TryHandle
                            (__this_01,actionId,context,(MethodInfo *)0x0), !bVar2)) {
        pSVar3 = System_String__Concat_52f0320("Unhandled external link dialog action: ",actionId,(MethodInfo *)0x0);
        if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
        }
        UnityEngine_Debug__LogWarning_68c53f0
                  ((Il2CppObject *)pSVar3,(UnityEngine_Object_o *)context.fields.GameObject,(MethodInfo *)0x0)
        ;
        return;
      }
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$BuildIfNeeded
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__BuildIfNeeded (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* __this, const MethodInfo* method);
// 0x5e85a80

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__BuildIfNeeded
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar1;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  MethodInfo *pMVar2;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_Transform_o *parent;
  MethodInfo *layer;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this_02;
  Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *localizer;
  System_Func_string__GisketchOverlayDefinition__o *__this_03;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *__this_04;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_05;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (Il2CppMethodInitialized_07548856 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgActionRegistry);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_BuildIfNeeded_b__15_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_string_GisketchOverlayDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Building_GisketchBuildContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchManifestDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_State_GisketchUIState);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG External Link Overlays");
    Il2CppMethodInitialized_07548856 = '\x01';
  }
  if ((__this->fields)._overlays != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
    return;
  }
  pGVar1 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_State_GisketchUIState);
  Gisketch_Aottg2UI_State_GisketchUIState___ctor(pGVar1,(MethodInfo *)0x0);
  (__this->fields)._state = pGVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._state);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_AottgActionRegistry);
  Gisketch_Aottg2UI_Code_AottgActionRegistry___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields)._codeActions = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._codeActions);
  pMVar2 = (MethodInfo *)Gisketch_Aottg2UI_Code_AottgCodeCatalog__Discover((MethodInfo *)0x0);
  (__this->fields)._catalog = (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)pMVar2;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._catalog);
  __this_01 = Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__CreateCanvas(__this,pMVar2);
  if (__this_01 == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
  pMVar2 = (MethodInfo *)"AoTTG External Link Overlays";
  layer = (MethodInfo *)
          Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__CreateLayer
                    (parent,"AoTTG External Link Overlays",method_00);
  method_01 = layer;
  Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__PromoteLayer((UnityEngine_Transform_o *)layer,pMVar2);
  theme = Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Theme(method_01);
  __this_02 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchManifestDefinition);
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition___ctor(__this_02,(MethodInfo *)0x0);
  localizer = (Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer);
  Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___ctor
            ((Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *)localizer,(MethodInfo *)0x0);
  pGVar1 = (__this->fields)._state;
  __this_03 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_GisketchOverlayDefinition);
  System_Func_object__object____ctor
            ((System_Func_object__object__o *)__this_03,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_BuildIfNeeded_b__15_0,
             (MethodInfo_4F19B50 *)0x0);
  __this_04 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchBuildContext);
  Gisketch_Aottg2UI_Building_GisketchBuildContext___ctor
            (__this_04,__this_02,theme,localizer,(Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)__this,
             pGVar1,(Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0,__this_03,(MethodInfo *)0x0)
  ;
  __this_05 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager);
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___ctor
            (__this_05,(UnityEngine_Transform_o *)layer,__this_04,(MethodInfo *)0x0);
  (__this->fields)._overlays = __this_05;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._overlays);
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$CreateCanvas
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__CreateCanvas (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* __this, const MethodInfo* method);
// 0x5e85ec0

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__CreateCanvas
          (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **targetAddress;
  Settings_UISettings_o *__this_00;
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar1;
  UnityEngine_GameObject_o *pUVar2;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Transform_o *parent;
  UnityEngine_Canvas_o *__this_02;
  UnityEngine_UI_CanvasScaler_o *__this_03;
  UnityEngine_RectTransform_o *rect;
  MethodInfo *method_00;
  float fVar3;
  undefined1 auVar4 [16];
  
  if (Il2CppMethodInitialized_07548857 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasScaler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG External Link Canvas");
    Il2CppMethodInitialized_07548857 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (obj != (System_Type_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    pUVar2 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60(pUVar2,"AoTTG External Link Canvas",components,(MethodInfo *)0x0);
    targetAddress = &(__this->fields)._canvasObject;
    (__this->fields)._canvasObject = pUVar2;
    Il2CppCodeGenWriteBarrier(targetAddress);
    pUVar2 = (__this->fields)._canvasObject;
    if (pUVar2 != (UnityEngine_GameObject_o *)0x0) {
      __this_01 = UnityEngine_GameObject__get_transform(pUVar2,(MethodInfo *)0x0);
      parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_692d510(__this_01,parent,false,(MethodInfo *)0x0);
        if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
          __this_02 = UnityEngine_GameObject__AddComponent_object_
                                (*targetAddress,
                                 (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
          if (__this_02 != (UnityEngine_Canvas_o *)0x0) {
            UnityEngine_Canvas__set_renderMode(__this_02,0,(MethodInfo *)0x0);
            if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__AddComponent_object_
                        (*targetAddress,
                         (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster
                        );
              if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
                __this_03 = UnityEngine_GameObject__AddComponent_object_
                                      (*targetAddress,
                                       (MethodInfo_353B6A0 *)
                                       MethodInfo_UnityEngine_GameObject_AddComponent_CanvasScaler);
                if (__this_03 != (UnityEngine_UI_CanvasScaler_o *)0x0) {
                  (__this_03->fields).m_UiScaleMode = 1;
                  (__this_03->fields).m_MatchWidthOrHeight = 0.5;
                  if (Il2CppMethodInitialized_0754885a == '\0') {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
                    Il2CppMethodInitialized_0754885a = '\x01';
                  }
                  __this_00 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
                  if (__this_00 == (Settings_UISettings_o *)0x0) {
                    fVar3 = 1.0;
                  }
                  else {
                    fVar3 = Settings_UISettings__get_AppliedMasterScale(__this_00,(MethodInfo *)0x0);
                  }
                  auVar4._4_4_ = fVar3;
                  auVar4._0_4_ = fVar3;
                  auVar4._8_4_ = fVar3;
                  auVar4._12_4_ = fVar3;
                  auVar4 = divps(_DAT_0100a420,auVar4);
                  UnityEngine_UI_CanvasScaler__set_referenceResolution
                            (__this_03,(UnityEngine_Vector2_o)auVar4._0_8_,(MethodInfo *)0x0);
                  if (*targetAddress != (UnityEngine_GameObject_o *)0x0) {
                    method_00 = MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform;
                    rect = UnityEngine_GameObject__GetComponent_object_
                                     (*targetAddress,
                                      (MethodInfo_353B730 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                    Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Stretch(rect,method_00);
                    return rect;
                  }
                }
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$CreateLayer
// il2cpp: UnityEngine_Transform_o* Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__CreateLayer (UnityEngine_Transform_o* parent, System_String_o* name, const MethodInfo* method);
// 0x5e86170

UnityEngine_Transform_o *
Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__CreateLayer
          (UnityEngine_Transform_o *parent,System_String_o *name,MethodInfo *method)

{
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *pUVar2;
  UnityEngine_RectTransform_o *rect;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07548858 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    Il2CppMethodInitialized_07548858 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (obj != (System_Type_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60(__this,name,components,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_692d510(pUVar2,parent,false,(MethodInfo *)0x0);
        method_00 = MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform;
        rect = UnityEngine_GameObject__GetComponent_object_
                         (__this,(MethodInfo_353B730 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Stretch(rect,method_00);
        pUVar2 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
        return pUVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$PromoteLayer
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__PromoteLayer (UnityEngine_Transform_o* layer, const MethodInfo* method);
// 0x5e862e0

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__PromoteLayer
               (UnityEngine_Transform_o *layer,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_Canvas_o *__this;
  
  if (Il2CppMethodInitialized_07548859 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster);
    Il2CppMethodInitialized_07548859 = '\x01';
  }
  if (layer != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)layer,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      __this = UnityEngine_GameObject__AddComponent_object_
                         (pUVar1,(MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
      if (__this != (UnityEngine_Canvas_o *)0x0) {
        UnityEngine_Canvas__set_overrideSorting(__this,true,(MethodInfo *)0x0);
        UnityEngine_Canvas__set_sortingOrder(__this,0x3b6,(MethodInfo *)0x0);
        pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)layer,(MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__AddComponent_object_
                    (pUVar1,(MethodInfo_353B6A0 *)
                            MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster);
          return;
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$ReferenceResolution
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__ReferenceResolution (const MethodInfo* method);
// 0x5e86510

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__ReferenceResolution(MethodInfo *method)

{
  Settings_UISettings_o *__this;
  float fVar1;
  undefined1 auVar2 [16];
  
  if (Il2CppMethodInitialized_0754885a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    Il2CppMethodInitialized_0754885a = '\x01';
  }
  __this = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if (__this == (Settings_UISettings_o *)0x0) {
    fVar1 = 1.0;
  }
  else {
    fVar1 = Settings_UISettings__get_AppliedMasterScale(__this,(MethodInfo *)0x0);
  }
  auVar2._4_4_ = fVar1;
  auVar2._0_4_ = fVar1;
  auVar2._8_4_ = fVar1;
  auVar2._12_4_ = fVar1;
  auVar2 = divps(_DAT_0100a420,auVar2);
  return (UnityEngine_Vector2_o)auVar2._0_8_;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$Theme
// il2cpp: Gisketch_Aottg2UI_Styling_GisketchTheme_o* Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Theme (const MethodInfo* method);
// 0x5e86390

Gisketch_Aottg2UI_Styling_GisketchTheme_o *
Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Theme(MethodInfo *method)

{
  Settings_UISettings_o *pSVar1;
  Settings_StringSetting_o *pSVar2;
  bool bVar3;
  System_String_o **ppSVar4;
  UnityEngine_Object_o *x;
  System_String_o *json;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar5;
  
  if (Il2CppMethodInitialized_0754885b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_TextAsset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Light");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Themes/Aottg2Dark");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Themes/Aottg2Light");
    Il2CppMethodInitialized_0754885b = '\x01';
  }
  pSVar1 = TypeInfo_Settings_SettingsManager->static_fields->UISettings;
  if (pSVar1 == (Settings_UISettings_o *)0x0) {
label_05e8644a:
    ppSVar4 = &"UI/Themes/Aottg2Dark";
  }
  else {
    pSVar2 = (pSVar1->fields).UITheme;
    if (pSVar2 == (Settings_StringSetting_o *)0x0) goto label_05e86501;
    bVar3 = System_String__op_Equality((pSVar2->fields)._value,"Light",(MethodInfo *)0x0);
    if (!bVar3) goto label_05e8644a;
    ppSVar4 = &"UI/Themes/Aottg2Light";
  }
  x = (UnityEngine_Object_o *)
      UnityEngine_Resources__Load_object_
                (*ppSVar4,(MethodInfo_3665C30 *)MethodInfo_UnityEngine_Resources_Load_TextAsset);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
      return TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->static_fields->Default;
    }
    return TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->static_fields->Default;
  }
  if (x != (UnityEngine_Object_o *)0x0) {
    json = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
      pGVar5 = Gisketch_Aottg2UI_Styling_GisketchTheme__FromJson(json,(MethodInfo *)0x0);
      return pGVar5;
    }
    pGVar5 = Gisketch_Aottg2UI_Styling_GisketchTheme__FromJson(json,(MethodInfo *)0x0);
    return pGVar5;
  }
label_05e86501:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$Stretch
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Stretch (UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x5e86570

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Stretch
               (UnityEngine_RectTransform_o *rect,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  if (rect == (UnityEngine_RectTransform_o *)0x0) {
    ThrowNullReferenceException();
  }
  UnityEngine_RectTransform__set_anchorMin
            (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
             (MethodInfo *)0x0);
  if (Il2CppMethodInitialized_07542885 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_07542885 = '\x01';
  }
  UnityEngine_RectTransform__set_anchorMax
            (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
             (MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  UnityEngine_RectTransform__set_offsetMin
            (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
             (MethodInfo *)0x0);
  if (Il2CppMethodInitialized_0753ecc8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_0753ecc8 = '\x01';
  }
  UnityEngine_RectTransform__set_offsetMax
            (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
             (MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost___ctor (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* __this, const MethodInfo* method);
// 0x5e86670

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost___ctor
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$<BuildIfNeeded>b__15_0
// il2cpp: Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost___BuildIfNeeded_b__15_0 (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* __this, System_String_o* id, const MethodInfo* method);
// 0x5e86680

Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *
Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost___BuildIfNeeded_b__15_0
          (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *__this,System_String_o *id,MethodInfo *method
          )

{
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *pGVar1;
  
  pGVar1 = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialog_5264440
                     ((__this->fields)._catalog,id,(__this->fields)._codeActions,(MethodInfo *)0x0);
  return pGVar1;
}


