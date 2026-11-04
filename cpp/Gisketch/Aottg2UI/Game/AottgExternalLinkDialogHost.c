// Type: Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgExternalLinkDialogHost.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$get_Current
// il2cpp: Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__get_Current (const MethodInfo* method);
// 0x1823ad1a0

Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *
Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__get_Current(MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347d1f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost);
    Il2CppMethodInitialized_184347d1f = '\x01';
  }
  return TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost->static_fields->_Current_k__BackingField;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$set_Current
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__set_Current (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* value, const MethodInfo* method);
// 0x1823ad1e0

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__set_Current
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *value,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347d20 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost);
    Il2CppMethodInitialized_184347d20 = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost->static_fields->_Current_k__BackingField = value
  ;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost->static_fields->
              _Current_k__BackingField,value);
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$ShowUrl
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__ShowUrl (System_String_o* url, const MethodInfo* method);
// 0x1823acdf0

bool Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__ShowUrl(System_String_o *url,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *pGVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  bool bVar2;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184347d21 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347d21 = '\x01';
  }
  if (Il2CppMethodInitialized_184347d4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost);
    Il2CppMethodInitialized_184347d4c = '\x01';
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost->static_fields->
           _Current_k__BackingField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pGVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((!bVar2) && (bVar2 = System_String__IsNullOrWhiteSpace(url,(MethodInfo *)0x0), !bVar2)) {
    if (Il2CppMethodInitialized_184347d4c == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost)
      ;
      Il2CppMethodInitialized_184347d4c = '\x01';
    }
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost->static_fields->
             _Current_k__BackingField;
    if (pGVar1 != (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *)0x0) {
      if (Il2CppMethodInitialized_184347d23 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&"externalLink.url");
        il2cpp_codegen_initialize_runtime_metadata(&"external-link-confirm");
        Il2CppMethodInitialized_184347d23 = '\x01';
      }
      Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__BuildIfNeeded(pGVar1,(MethodInfo *)0x0);
      if (((pGVar1->fields)._state == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) ||
         ((pGVar1->fields)._overlays == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
        return true;
      }
      if (url != (System_String_o *)0x0) {
        __this = (pGVar1->fields)._state;
        value = System_String__Trim(url,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_State_GisketchUIState__Set(__this,"externalLink.url",value,(MethodInfo *)0x0);
        __this_00 = (pGVar1->fields)._overlays;
        if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                    (__this_00,"external-link-confirm",true,(MethodInfo *)0x0);
          return true;
        }
      }
    }
    ThrowNullReferenceException();
  }
  return false;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$Awake
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Awake (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* __this, const MethodInfo* method);
// 0x1823abfa0

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Awake
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347d4d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost);
    Il2CppMethodInitialized_184347d4d = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost->static_fields->_Current_k__BackingField =
       __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost->static_fields->
              _Current_k__BackingField,__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__OnDestroy (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* __this, const MethodInfo* method);
// 0x1823acbc0

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *x;
  bool bVar1;
  
  if (Il2CppMethodInitialized_184347d22 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184347d22 = '\x01';
  }
  if (Il2CppMethodInitialized_184347d4c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost);
    Il2CppMethodInitialized_184347d4c = '\x01';
  }
  x = TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost->static_fields->_Current_k__BackingField;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
  if (bVar1) {
    if (Il2CppMethodInitialized_184347d4d == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost)
      ;
      Il2CppMethodInitialized_184347d4d = '\x01';
    }
    TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost->static_fields->_Current_k__BackingField =
         (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *)0x0;
    Il2CppCodeGenWriteBarrier
              (&TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost->static_fields->
                _Current_k__BackingField,(void *)0x0);
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$Show
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Show (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* __this, System_String_o* url, const MethodInfo* method);
// 0x1823acf70

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Show
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *__this,System_String_o *url,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_01;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184347d23 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"externalLink.url");
    il2cpp_codegen_initialize_runtime_metadata(&"external-link-confirm");
    Il2CppMethodInitialized_184347d23 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__BuildIfNeeded(__this,(MethodInfo *)0x0);
  if (((__this->fields)._state != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) &&
     ((__this->fields)._overlays != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
    if (url != (System_String_o *)0x0) {
      __this_00 = (__this->fields)._state;
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
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$HandleAction
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__HandleAction (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* __this, System_String_o* actionId, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x1823ac9d0

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__HandleAction
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *__this,System_String_o *actionId,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *pGVar1;
  bool bVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  if (Il2CppMethodInitialized_184347d24 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"externalLink.url");
    il2cpp_codegen_initialize_runtime_metadata(&"externalLink.confirm");
    il2cpp_codegen_initialize_runtime_metadata(&"");
    il2cpp_codegen_initialize_runtime_metadata(&"Unhandled external link dialog action: ");
    Il2CppMethodInitialized_184347d24 = '\x01';
  }
  bVar2 = System_String__op_Equality(actionId,"overlay.close",(MethodInfo *)0x0);
  if (bVar2) {
    pGVar1 = (__this->fields)._overlays;
    if (pGVar1 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(pGVar1,true,(MethodInfo *)0x0);
    }
  }
  else {
    bVar2 = System_String__op_Equality(actionId,"externalLink.confirm",(MethodInfo *)0x0);
    if (!bVar2) {
      if ((__this->fields)._codeActions != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
        __this_00 = (__this->fields)._codeActions;
        if (__this_00 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
          ThrowNullReferenceException();
        }
        local_28.fields.ElementId = (context->fields).ElementId;
        local_28.fields.GameObject = (context->fields).GameObject;
        local_28.fields.Node = (context->fields).Node;
        local_28.fields.InputSource = (context->fields).InputSource;
        local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
        bVar2 = Gisketch_Aottg2UI_Code_AottgActionRegistry__TryHandle
                          (__this_00,actionId,&local_28,(MethodInfo *)0x0);
        if (bVar2) {
          return;
        }
      }
      pSVar3 = System_String__Concat_1969e50("Unhandled external link dialog action: ",actionId,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
      }
      UnityEngine_Debug__LogWarning_2ec3970
                ((Il2CppObject *)pSVar3,(UnityEngine_Object_o *)(context->fields).GameObject,(MethodInfo *)0x0
                );
      return;
    }
    if ((__this->fields)._state == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
      pSVar3 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
    }
    else {
      pSVar3 = Gisketch_Aottg2UI_State_GisketchUIState__Get
                         ((__this->fields)._state,"externalLink.url","",
                          (MethodInfo *)0x0);
    }
    pGVar1 = (__this->fields)._overlays;
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
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$BuildIfNeeded
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__BuildIfNeeded (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* __this, const MethodInfo* method);
// 0x1823ac000

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__BuildIfNeeded
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *__this,MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  Il2CppType *handle;
  bool bVar2;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar3;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *value;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar6;
  UnityEngine_GameObject_o *pUVar7;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_Canvas_o *__this_02;
  UnityEngine_Object_o *x;
  System_String_o *pSVar8;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme;
  UnityEngine_Rendering_UnifiedRayTracing_RayTracingRenderPipelineResources_o *__this_03;
  Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *localizer;
  System_Func_string__GisketchOverlayDefinition__o *__this_04;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *__this_05;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_06;
  
  if (Il2CppMethodInitialized_184347d25 == '\0') {
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
    Il2CppMethodInitialized_184347d25 = '\x01';
  }
  if ((__this->fields)._overlays != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
    return;
  }
  pGVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_State_GisketchUIState);
  Gisketch_Aottg2UI_State_GisketchUIState___ctor(pGVar3,(MethodInfo *)0x0);
  (__this->fields)._state = pGVar3;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._state,pGVar3);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_AottgActionRegistry);
  Gisketch_Aottg2UI_Code_AottgActionRegistry___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields)._codeActions = __this_00;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._codeActions,__this_00);
  value = Gisketch_Aottg2UI_Code_AottgCodeCatalog__Discover((MethodInfo *)0x0);
  (__this->fields)._catalog = value;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._catalog,value);
  pUVar4 = Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__CreateCanvas(__this,(MethodInfo *)0x0);
  if (pUVar4 == (UnityEngine_RectTransform_o *)0x0) goto label_1823ac565;
  pUVar5 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)pUVar4,(MethodInfo *)0x0);
  pSVar8 = "AoTTG External Link Overlays";
  if (Il2CppMethodInitialized_184347d27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    Il2CppMethodInitialized_184347d27 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) goto label_1823ac565;
  if ((obj != (System_Type_o *)0x0) &&
     (pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class),
     pIVar6 == (Il2CppObject *)0x0)) {
    pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
    il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
  }
  if ((int)components->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  components->m_Items[0] = obj;
  Il2CppCodeGenWriteBarrier(components->m_Items,obj);
  pUVar7 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
  UnityEngine_GameObject___ctor_2f1abe0(pUVar7,pSVar8,components,(MethodInfo *)0x0);
  if ((pUVar7 == (UnityEngine_GameObject_o *)0x0) ||
     (__this_01 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0),
     __this_01 == (UnityEngine_Transform_o *)0x0)) goto label_1823ac565;
  UnityEngine_Transform__SetParent_2f5a7e0(__this_01,pUVar5,false,(MethodInfo *)0x0);
  pUVar4 = UnityEngine_GameObject__GetComponent_object_
                     (pUVar7,(MethodInfo_6F5650 *)MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform
                     );
  Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Stretch(pUVar4,(MethodInfo *)0x0);
  pUVar5 = UnityEngine_GameObject__get_transform(pUVar7,(MethodInfo *)0x0);
  if (Il2CppMethodInitialized_184347d28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster);
    Il2CppMethodInitialized_184347d28 = '\x01';
  }
  if (((pUVar5 == (UnityEngine_Transform_o *)0x0) ||
      (pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0),
      pUVar7 == (UnityEngine_GameObject_o *)0x0)) ||
     (__this_02 = UnityEngine_GameObject__AddComponent_object_
                            (pUVar7,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Canvas
                            ), __this_02 == (UnityEngine_Canvas_o *)0x0)) goto label_1823ac565;
  UnityEngine_Canvas__set_overrideSorting(__this_02,true,(MethodInfo *)0x0);
  UnityEngine_Canvas__set_sortingOrder(__this_02,0x3b6,(MethodInfo *)0x0);
  pUVar7 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar5,(MethodInfo *)0x0);
  if (pUVar7 == (UnityEngine_GameObject_o *)0x0) goto label_1823ac565;
  UnityEngine_GameObject__AddComponent_object_
            (pUVar7,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster);
  if (Il2CppMethodInitialized_184347d2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_TextAsset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Light");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Themes/Aottg2Dark");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Themes/Aottg2Light");
    Il2CppMethodInitialized_184347d2a = '\x01';
  }
  if (TypeInfo_Settings_SettingsManager->static_fields->UISettings == (Settings_UISettings_o *)0x0) {
label_1823ac3c9:
    pSVar8 = "UI/Themes/Aottg2Dark";
  }
  else {
    pSVar1 = (TypeInfo_Settings_SettingsManager->static_fields->UISettings->fields).UITheme;
    if (pSVar1 == (Settings_StringSetting_o *)0x0) goto label_1823ac565;
    bVar2 = System_String__op_Equality((pSVar1->fields)._value,"Light",(MethodInfo *)0x0);
    pSVar8 = "UI/Themes/Aottg2Light";
    if (!bVar2) goto label_1823ac3c9;
  }
  x = (UnityEngine_Object_o *)
      UnityEngine_Resources__Load_object_
                (pSVar8,(MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_TextAsset);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    if (x == (UnityEngine_Object_o *)0x0) {
label_1823ac565:
      ThrowNullReferenceException();
    }
    pSVar8 = UnityEngine_TextAsset__ToString((UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    }
    theme = Gisketch_Aottg2UI_Styling_GisketchTheme__FromJson(pSVar8,(MethodInfo *)0x0);
  }
  else {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    }
    theme = TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->static_fields->Default;
  }
  __this_03 = (UnityEngine_Rendering_UnifiedRayTracing_RayTracingRenderPipelineResources_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchManifestDefinition);
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition___ctor
            (__this_03,(MethodInfo *)0x0);
  localizer = (Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *)
              il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer);
  Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)localizer,(MethodInfo *)0x0);
  pGVar3 = (__this->fields)._state;
  __this_04 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_string_GisketchOverlayDefinition);
  System_Func_object__object____ctor
            ((System_Xml_Linq_XHashtable_ExtractKeyDelegate_TValue__o *)__this_04,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_BuildIfNeeded_b__15_0,
             (MethodInfo_16E67D0 *)0x0);
  __this_05 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Building_GisketchBuildContext);
  Gisketch_Aottg2UI_Building_GisketchBuildContext___ctor
            (__this_05,(Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)__this_03,theme,localizer,
             (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)__this,pGVar3,
             (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0,__this_04,(MethodInfo *)0x0);
  __this_06 = il2cpp_codegen_object_new
                        ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Overlays_GisketchOverlayManager);
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___ctor(__this_06,pUVar5,__this_05,(MethodInfo *)0x0);
  (__this->fields)._overlays = __this_06;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._overlays,__this_06);
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$CreateCanvas
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__CreateCanvas (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* __this, const MethodInfo* method);
// 0x1823ac590

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__CreateCanvas
          (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *__this,MethodInfo *method)

{
  float fVar1;
  Settings_FloatSetting_o *pSVar2;
  UnityEngine_Vector2_o value;
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  UnityEngine_Canvas_o *__this_01;
  UnityEngine_UI_CanvasScaler_o *__this_02;
  UnityEngine_RectTransform_o *rect;
  bool bVar5;
  float fVar6;
  
  if (Il2CppMethodInitialized_184347d26 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_CanvasScaler);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG External Link Canvas");
    Il2CppMethodInitialized_184347d26 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (obj != (System_Type_o *)0x0) {
      pIVar3 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
      if (pIVar3 == (Il2CppObject *)0x0) {
        pIVar3 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar3,(MethodInfo *)0x0);
      }
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items,obj);
    pUVar4 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1abe0(pUVar4,"AoTTG External Link Canvas",components,(MethodInfo *)0x0);
    (__this->fields)._canvasObject = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._canvasObject,pUVar4);
    pUVar4 = (__this->fields)._canvasObject;
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
      parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_2f5a7e0(__this_00,parent,false,(MethodInfo *)0x0);
        pUVar4 = (__this->fields)._canvasObject;
        if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
          __this_01 = UnityEngine_GameObject__AddComponent_object_
                                (pUVar4,(MethodInfo_6F4D60 *)
                                        MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
          if (__this_01 != (UnityEngine_Canvas_o *)0x0) {
            UnityEngine_Canvas__set_renderMode(__this_01,0,(MethodInfo *)0x0);
            pUVar4 = (__this->fields)._canvasObject;
            if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__AddComponent_object_
                        (pUVar4,(MethodInfo_6F4D60 *)
                                MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster);
              pUVar4 = (__this->fields)._canvasObject;
              if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                __this_02 = UnityEngine_GameObject__AddComponent_object_
                                      (pUVar4,(MethodInfo_6F4D60 *)
                                              MethodInfo_UnityEngine_GameObject_AddComponent_CanvasScaler);
                if (__this_02 != (UnityEngine_UI_CanvasScaler_o *)0x0) {
                  bVar5 = Il2CppMethodInitialized_184347d29 == '\0';
                  (__this_02->fields).m_UiScaleMode = 1;
                  (__this_02->fields).m_MatchWidthOrHeight = 0.5;
                  if (bVar5) {
                    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
                    il2cpp_codegen_initialize_runtime_metadata
                              (&MethodInfo_Settings_TypedSetting_float_get_Value);
                    Il2CppMethodInitialized_184347d29 = '\x01';
                  }
                  if (TypeInfo_Settings_SettingsManager->static_fields->UISettings ==
                      (Settings_UISettings_o *)0x0) {
                    fVar6 = 1.0;
                  }
                  else {
                    pSVar2 = (TypeInfo_Settings_SettingsManager->static_fields->UISettings->fields).
                             UIMasterScale;
                    if (pSVar2 == (Settings_FloatSetting_o *)0x0) goto label_1823ac853;
                    fVar1 = (pSVar2->fields)._value;
                    fVar6 = 0.75;
                    if ((0.75 <= fVar1) && (fVar6 = 1.5, fVar1 <= 1.5)) {
                      fVar6 = fVar1;
                    }
                  }
                  value.fields.y = 1080.0 / fVar6;
                  value.fields.x = 1920.0 / fVar6;
                  UnityEngine_UI_CanvasScaler__set_referenceResolution(__this_02,value,(MethodInfo *)0x0);
                  pUVar4 = (__this->fields)._canvasObject;
                  if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
                    rect = UnityEngine_GameObject__GetComponent_object_
                                     (pUVar4,(MethodInfo_6F5650 *)
                                             MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
                    Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Stretch(rect,(MethodInfo *)0x0);
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
label_1823ac853:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$CreateLayer
// il2cpp: UnityEngine_Transform_o* Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__CreateLayer (UnityEngine_Transform_o* parent, System_String_o* name, const MethodInfo* method);
// 0x1823ac870

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
  
  if (Il2CppMethodInitialized_184347d27 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    Il2CppMethodInitialized_184347d27 = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_184354ea0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354ea0);
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
    Il2CppCodeGenWriteBarrier(components->m_Items,obj);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_2f1abe0(__this,name,components,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      pUVar2 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (pUVar2 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_2f5a7e0(pUVar2,parent,false,(MethodInfo *)0x0);
        rect = UnityEngine_GameObject__GetComponent_object_
                         (__this,(MethodInfo_6F5650 *)
                                 MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        Gisketch_Aottg2UI_Actions_GisketchSearchSpotlight__Stretch(rect,(MethodInfo *)0x0);
        pUVar2 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
        return pUVar2;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$PromoteLayer
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__PromoteLayer (UnityEngine_Transform_o* layer, const MethodInfo* method);
// 0x1823acc90

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__PromoteLayer
               (UnityEngine_Transform_o *layer,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_Canvas_o *__this;
  
  if (Il2CppMethodInitialized_184347d28 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GraphicRaycaster);
    Il2CppMethodInitialized_184347d28 = '\x01';
  }
  if (layer != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)layer,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      __this = UnityEngine_GameObject__AddComponent_object_
                         (pUVar1,(MethodInfo_6F4D60 *)MethodInfo_UnityEngine_GameObject_AddComponent_Canvas);
      if (__this != (UnityEngine_Canvas_o *)0x0) {
        UnityEngine_Canvas__set_overrideSorting(__this,true,(MethodInfo *)0x0);
        UnityEngine_Canvas__set_sortingOrder(__this,0x3b6,(MethodInfo *)0x0);
        pUVar1 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)layer,(MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__AddComponent_object_
                    (pUVar1,(MethodInfo_6F4D60 *)
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
// 0x1823acd40

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__ReferenceResolution(MethodInfo *method)

{
  float fVar1;
  Settings_FloatSetting_o *pSVar2;
  UnityEngine_Vector2_Fields UVar3;
  float fVar4;
  
  if (Il2CppMethodInitialized_184347d29 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_float_get_Value);
    Il2CppMethodInitialized_184347d29 = '\x01';
  }
  if (TypeInfo_Settings_SettingsManager->static_fields->UISettings == (Settings_UISettings_o *)0x0) {
    fVar4 = 1.0;
  }
  else {
    pSVar2 = (TypeInfo_Settings_SettingsManager->static_fields->UISettings->fields).UIMasterScale;
    if (pSVar2 == (Settings_FloatSetting_o *)0x0) {
      ThrowNullReferenceException();
    }
    fVar1 = (pSVar2->fields)._value;
    fVar4 = 0.75;
    if ((0.75 <= fVar1) && (fVar4 = 1.5, fVar1 <= 1.5)) {
      fVar4 = fVar1;
    }
  }
  UVar3.y = 1080.0 / fVar4;
  UVar3.x = 1920.0 / fVar4;
  return (UnityEngine_Vector2_o)UVar3;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$Theme
// il2cpp: Gisketch_Aottg2UI_Styling_GisketchTheme_o* Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Theme (const MethodInfo* method);
// 0x1823ad020

Gisketch_Aottg2UI_Styling_GisketchTheme_o *
Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Theme(MethodInfo *method)

{
  Settings_StringSetting_o *pSVar1;
  bool bVar2;
  UnityEngine_Object_o *x;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar4;
  
  if (Il2CppMethodInitialized_184347d2a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_Resources_Load_TextAsset);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Settings_SettingsManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Settings_TypedSetting_string_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&"Light");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Themes/Aottg2Dark");
    il2cpp_codegen_initialize_runtime_metadata(&"UI/Themes/Aottg2Light");
    Il2CppMethodInitialized_184347d2a = '\x01';
  }
  if (TypeInfo_Settings_SettingsManager->static_fields->UISettings == (Settings_UISettings_o *)0x0) {
label_1823ad0dd:
    pSVar3 = "UI/Themes/Aottg2Dark";
  }
  else {
    pSVar1 = (TypeInfo_Settings_SettingsManager->static_fields->UISettings->fields).UITheme;
    if (pSVar1 == (Settings_StringSetting_o *)0x0) goto label_1823ad186;
    bVar2 = System_String__op_Equality((pSVar1->fields)._value,"Light",(MethodInfo *)0x0);
    pSVar3 = "UI/Themes/Aottg2Light";
    if (!bVar2) goto label_1823ad0dd;
  }
  x = (UnityEngine_Object_o *)
      UnityEngine_Resources__Load_object_
                (pSVar3,(MethodInfo_7965D0 *)MethodInfo_UnityEngine_Resources_Load_TextAsset);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar2) {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    }
    return TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->static_fields->Default;
  }
  if (x != (UnityEngine_Object_o *)0x0) {
    pSVar3 = UnityEngine_TextAsset__ToString((UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    }
    pGVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__FromJson(pSVar3,(MethodInfo *)0x0);
    return pGVar4;
  }
label_1823ad186:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$Stretch
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Stretch (UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x18189b1d0

void
Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Stretch(UnityEngine_RectTransform_o* rect, MethodInfo* method)

{
  if (Il2CppMethodInitialized_18433e3c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
    Il2CppMethodInitialized_18433e3c9 = '\x01';
  }
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchorMin
              (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    if (Il2CppMethodInitialized_184341f36 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_184341f36 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax
              (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->oneVector).fields,
               (MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin
              (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    if (Il2CppMethodInitialized_18433e3c9 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
      Il2CppMethodInitialized_18433e3c9 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax
              (rect,(UnityEngine_Vector2_o)(TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields,
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost___ctor (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* __this, const MethodInfo* method);
// 0x180528540

void
Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost___ctor(Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* __this, MethodInfo* method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$<BuildIfNeeded>b__15_0
// il2cpp: Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost___BuildIfNeeded_b__15_0 (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* __this, System_String_o* id, const MethodInfo* method);
// 0x1823ad190

Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *
Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost___BuildIfNeeded_b__15_0
          (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *__this,System_String_o *id,MethodInfo *method
          )

{
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *pGVar1;
  
  pGVar1 = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialog_18c28f0
                     ((__this->fields)._catalog,id,(__this->fields)._codeActions,(MethodInfo *)0x0);
  return pGVar1;
}


