// Type: Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgExternalLinkDialogHost.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$get_Current
// il2cpp: Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__get_Current (const MethodInfo* method);
// 0x4173e00

Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *
Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__get_Current(MethodInfo *method)

{
  if (DAT_05704aef == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgExternalLinkDialogHost);
    DAT_05704aef = '\x01';
  }
  return (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *)
         **(undefined8 **)(TypeInfo_AottgExternalLinkDialogHost + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$set_Current
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__set_Current (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* value, const MethodInfo* method);
// 0x4173e40

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__set_Current
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *value,MethodInfo *method)

{
  if (DAT_05704af0 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgExternalLinkDialogHost);
    DAT_05704af0 = '\x01';
  }
  **(undefined8 **)(TypeInfo_AottgExternalLinkDialogHost + 0xb8) = value;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_AottgExternalLinkDialogHost + 0xb8),value);
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$ShowUrl
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__ShowUrl (System_String_o* url, const MethodInfo* method);
// 0x4173e90

bool_conflict
Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__ShowUrl(System_String_o *url,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  bool_conflict bVar2;
  
  if (DAT_05704af1 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704af1 = '\x01';
  }
  if (DAT_05704b2c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgExternalLinkDialogHost);
    DAT_05704b2c = '\x01';
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_AottgExternalLinkDialogHost + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = 0;
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar2 = 0;
    bVar1 = System_String__IsNullOrWhiteSpace(url,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      method_00 = extraout_RDX;
      if (DAT_05704b2c == '\0') {
        il2cpp_init_method_metadata(&TypeInfo_AottgExternalLinkDialogHost);
        DAT_05704b2c = '\x01';
        method_00 = extraout_RDX_00;
      }
      if ((Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *)
          **(undefined8 **)(TypeInfo_AottgExternalLinkDialogHost + 0xb8) ==
          (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *)0x0) {
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Show
                ((Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *)
                 **(undefined8 **)(TypeInfo_AottgExternalLinkDialogHost + 0xb8),url,method_00);
      bVar2 = 1;
    }
  }
  return bVar2;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$Awake
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Awake (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* __this, const MethodInfo* method);
// 0x4174010

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Awake
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *__this,MethodInfo *method)

{
  if (DAT_05704b2d == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgExternalLinkDialogHost);
    DAT_05704b2d = '\x01';
  }
  **(undefined8 **)(TypeInfo_AottgExternalLinkDialogHost + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_AottgExternalLinkDialogHost + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__OnDestroy (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* __this, const MethodInfo* method);
// 0x4174060

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *__this,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  bool_conflict bVar1;
  
  if (DAT_05704af2 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Object);
    DAT_05704af2 = '\x01';
  }
  if (DAT_05704b2c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgExternalLinkDialogHost);
    DAT_05704b2c = '\x01';
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_AottgExternalLinkDialogHost + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
  if ((char)bVar1 != '\0') {
    if (DAT_05704b2d == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_AottgExternalLinkDialogHost);
      DAT_05704b2d = '\x01';
    }
    **(undefined8 **)(TypeInfo_AottgExternalLinkDialogHost + 0xb8) = 0;
    il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_AottgExternalLinkDialogHost + 0xb8),0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$Show
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Show (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* __this, System_String_o* url, const MethodInfo* method);
// 0x4173f70

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Show
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *__this,System_String_o *url,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_01;
  System_String_o *value;
  MethodInfo *method_00;
  
  method_00 = (MethodInfo *)url;
  if (DAT_05704af3 == '\0') {
    il2cpp_init_method_metadata(&"externalLink.url");
    il2cpp_init_method_metadata(&"external-link-confirm");
    DAT_05704af3 = '\x01';
  }
  Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__BuildIfNeeded(__this,method_00);
  __this_00 = (__this->fields)._state;
  if ((__this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) &&
     ((__this->fields)._overlays != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
    if (url != (System_String_o *)0x0) {
      value = System_String__Trim(url,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_State_GisketchUIState__Set(__this_00,"externalLink.url",value,(MethodInfo *)0x0);
      __this_01 = (__this->fields)._overlays;
      if (__this_01 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                  (__this_01,"external-link-confirm",1,(MethodInfo *)0x0);
        return;
      }
    }
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$HandleAction
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__HandleAction (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* __this, System_String_o* actionId, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x4174380

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__HandleAction
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *__this,
               System_String_o *actionId,Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *pGVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_01;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  
  if (DAT_05704af4 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Application);
    il2cpp_init_method_metadata(&TypeInfo_Debug);
    il2cpp_init_method_metadata(&"overlay.close");
    il2cpp_init_method_metadata(&"externalLink.url");
    il2cpp_init_method_metadata(&"externalLink.confirm");
    il2cpp_init_method_metadata(&"");
    il2cpp_init_method_metadata(&"Unhandled external link dialog action: ");
    DAT_05704af4 = '\x01';
  }
  bVar2 = System_String__op_Equality(actionId,"overlay.close",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    bVar2 = System_String__op_Equality(actionId,"externalLink.confirm",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      __this_01 = (__this->fields)._codeActions;
      if ((__this_01 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) ||
         (bVar2 = Gisketch_Aottg2UI_Code_AottgActionRegistry__TryHandle
                            (__this_01,actionId,context,(MethodInfo *)0x0), (char)bVar2 == '\0')) {
        pSVar3 = System_String__Concat("Unhandled external link dialog action: ",actionId,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Debug__LogWarning
                  ((Il2CppObject *)pSVar3,(UnityEngine_Object_o *)context.fields.GameObject,
                   (MethodInfo *)0x0);
        return;
      }
    }
    else {
      __this_00 = (__this->fields)._state;
      if (__this_00 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        pSVar3 = (System_String_o *)**(undefined8 **)(DAT_057110b0 + 0xb8);
        pGVar1 = (__this->fields)._overlays;
      }
      else {
        pSVar3 = Gisketch_Aottg2UI_State_GisketchUIState__Get
                           (__this_00,"externalLink.url","",(MethodInfo *)0x0);
        pGVar1 = (__this->fields)._overlays;
      }
      if (pGVar1 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(pGVar1,1,(MethodInfo *)0x0);
      }
      bVar2 = System_String__IsNullOrWhiteSpace(pSVar3,(MethodInfo *)0x0);
      if ((char)bVar2 == '\0') {
        if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
          il2cpp_init_class();
        }
        UnityEngine_Application__OpenURL(pSVar3,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    pGVar1 = (__this->fields)._overlays;
    if (pGVar1 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(pGVar1,1,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$BuildIfNeeded
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__BuildIfNeeded (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* __this, const MethodInfo* method);
// 0x4174130

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
  System_Func_string__GisketchOverlayDefinition__o *dialogResolver;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *__this_03;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_04;
  MethodInfo *method_00;
  MethodInfo *method_01;
  
  if (DAT_05704af5 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Aottg2GisketchLocalizer);
    il2cpp_init_method_metadata(&TypeInfo_AottgActionRegistry);
    il2cpp_init_method_metadata(&MethodInfo_GisketchOverlayDefinition__BuildIfNeeded_b__15_0);
    il2cpp_init_method_metadata(&TypeInfo_Func_string__GisketchOverlayDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchBuildContext);
    il2cpp_init_method_metadata(&TypeInfo_GisketchManifestDefinition);
    il2cpp_init_method_metadata(&TypeInfo_GisketchOverlayManager);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIState);
    il2cpp_init_method_metadata(&"AoTTG External Link Overlays");
    DAT_05704af5 = '\x01';
  }
  if ((__this->fields)._overlays != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
    return;
  }
  pGVar1 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIState);
  Gisketch_Aottg2UI_State_GisketchUIState___ctor(pGVar1,(MethodInfo *)0x0);
  (__this->fields)._state = pGVar1;
  il2cpp_runtime_glue(&(__this->fields)._state);
  __this_00 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)il2cpp_runtime_glue(TypeInfo_AottgActionRegistry);
  Gisketch_Aottg2UI_Code_AottgActionRegistry___ctor(__this_00,(MethodInfo *)0x0);
  (__this->fields)._codeActions = __this_00;
  il2cpp_runtime_glue(&(__this->fields)._codeActions,__this_00);
  pMVar2 = (MethodInfo *)Gisketch_Aottg2UI_Code_AottgCodeCatalog__Discover((MethodInfo *)0x0);
  (__this->fields)._catalog = (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)pMVar2;
  il2cpp_runtime_glue(&(__this->fields)._catalog);
  __this_01 = Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__CreateCanvas(__this,pMVar2);
  if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
    parent = UnityEngine_Component__get_transform
                       ((UnityEngine_Component_o *)__this_01,(MethodInfo *)0x0);
    pMVar2 = "AoTTG External Link Overlays";
    layer = (MethodInfo *)
            Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__CreateLayer
                      (parent,(System_String_o *)"AoTTG External Link Overlays",method_00);
    method_01 = layer;
    Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__PromoteLayer
              ((UnityEngine_Transform_o *)layer,pMVar2);
    theme = Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Theme(method_01);
    __this_02 = (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)
                il2cpp_runtime_glue(TypeInfo_GisketchManifestDefinition);
    Gisketch_Aottg2UI_Data_GisketchManifestDefinition___ctor(__this_02,(MethodInfo *)0x0);
    localizer = (Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *)
                il2cpp_runtime_glue(TypeInfo_Aottg2GisketchLocalizer);
    Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___ctor
              ((Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *)localizer,
               (MethodInfo *)0x0);
    pGVar1 = (__this->fields)._state;
    dialogResolver =
         (System_Func_string__GisketchOverlayDefinition__o *)il2cpp_runtime_glue(TypeInfo_Func_string__GisketchOverlayDefinition);
    System_Func<object__object>___ctor();
    __this_03 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)
                il2cpp_runtime_glue(TypeInfo_GisketchBuildContext);
    Gisketch_Aottg2UI_Building_GisketchBuildContext___ctor
              (__this_03,__this_02,theme,localizer,
               (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)__this,pGVar1,
               (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0,dialogResolver,
               (MethodInfo *)0x0);
    __this_04 = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)
                il2cpp_runtime_glue(TypeInfo_GisketchOverlayManager);
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___ctor
              (__this_04,(UnityEngine_Transform_o *)layer,__this_03,(MethodInfo *)0x0);
    (__this->fields)._overlays = __this_04;
    il2cpp_runtime_glue(&(__this->fields)._overlays,__this_04);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$CreateCanvas
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__CreateCanvas (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* __this, const MethodInfo* method);
// 0x4174570

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__CreateCanvas
          (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  float fVar2;
  UnityEngine_Vector2_o value;
  System_RuntimeTypeHandle_o handle;
  System_Type_array *components;
  System_Type_o *pSVar3;
  long lVar4;
  UnityEngine_GameObject_o *pUVar5;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_Transform_o *parent;
  UnityEngine_Canvas_o *__this_01;
  UnityEngine_UI_CanvasScaler_o *__this_02;
  UnityEngine_RectTransform_o *rect;
  undefined8 uVar6;
  MethodInfo *method_00;
  float fVar7;
  
  if (DAT_05704af6 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_CanvasScaler_AddComponent_CanvasScaler);
    il2cpp_init_method_metadata(&MethodInfo_Canvas_AddComponent_Canvas);
    il2cpp_init_method_metadata(&MethodInfo_GraphicRaycaster_AddComponent_GraphicRaycaster);
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    il2cpp_init_method_metadata(&"AoTTG External Link Canvas");
    DAT_05704af6 = '\x01';
  }
  components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type);
  handle.fields.value = TypeRef_RectTransform.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if ((pSVar3 != (System_Type_o *)0x0) &&
       (lVar4 = il2cpp_runtime_glue(pSVar3,(((components->obj).klass)->_1).element_class), lVar4 == 0
       )) {
      uVar6 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
      il2cpp_glue_02274a00(uVar6,0);
    }
    if ((int)components->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    components->m_Items[0] = pSVar3;
    il2cpp_runtime_glue(components->m_Items,pSVar3);
    pUVar5 = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
    UnityEngine_GameObject___ctor(pUVar5,"AoTTG External Link Canvas",components,(MethodInfo *)0x0);
    ppUVar1 = &(__this->fields)._canvasObject;
    (__this->fields)._canvasObject = pUVar5;
    il2cpp_runtime_glue(ppUVar1);
    pUVar5 = (__this->fields)._canvasObject;
    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(pUVar5,(MethodInfo *)0x0);
      parent = UnityEngine_Component__get_transform
                         ((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(__this_00,parent,0,(MethodInfo *)0x0);
        if ((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
           (__this_01 = (UnityEngine_Canvas_o *)
                        UnityEngine_GameObject__AddComponent<object>(*ppUVar1,MethodInfo_Canvas_AddComponent_Canvas),
           __this_01 != (UnityEngine_Canvas_o *)0x0)) {
          UnityEngine_Canvas__set_renderMode(__this_01,0,(MethodInfo *)0x0);
          if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
            UnityEngine_GameObject__AddComponent<object>(*ppUVar1,MethodInfo_GraphicRaycaster_AddComponent_GraphicRaycaster);
            if ((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
               (__this_02 = (UnityEngine_UI_CanvasScaler_o *)
                            UnityEngine_GameObject__AddComponent<object>(*ppUVar1,MethodInfo_CanvasScaler_AddComponent_CanvasScaler),
               __this_02 != (UnityEngine_UI_CanvasScaler_o *)0x0)) {
              (__this_02->fields).m_UiScaleMode = 1;
              (__this_02->fields).m_MatchWidthOrHeight = 0.5;
              if (DAT_05704af9 == '\0') {
                il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
                il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
                DAT_05704af9 = '\x01';
              }
              lVar4 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
              if (lVar4 == 0) {
                fVar7 = 1.0;
              }
              else {
                lVar4 = *(long *)(lVar4 + 0x40);
                if (lVar4 == 0) goto LAB_0417482e;
                fVar2 = *(float *)(lVar4 + 0x14);
                fVar7 = 0.75;
                if ((0.75 <= fVar2) && (fVar7 = 1.5, fVar2 <= 1.5)) {
                  fVar7 = fVar2;
                }
              }
              value.fields.y = 1080.0 / fVar7;
              value.fields.x = 1920.0 / fVar7;
              UnityEngine_UI_CanvasScaler__set_referenceResolution
                        (__this_02,value,(MethodInfo *)0x0);
              if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
                method_00 = MethodInfo_RectTransform_GetComponent_RectTransform;
                rect = (UnityEngine_RectTransform_o *)
                       UnityEngine_GameObject__GetComponent<object>
                                 (*ppUVar1,(MethodInfo_24F0F80 *)MethodInfo_RectTransform_GetComponent_RectTransform);
                Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Stretch(rect,method_00);
                return rect;
              }
            }
          }
        }
      }
    }
  }
LAB_0417482e:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$CreateLayer
// il2cpp: UnityEngine_Transform_o* Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__CreateLayer (UnityEngine_Transform_o* parent, System_String_o* name, const MethodInfo* method);
// 0x4174850

UnityEngine_Transform_o *
Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__CreateLayer
          (UnityEngine_Transform_o *parent,System_String_o *name,MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  System_Type_array *components;
  System_Type_o *pSVar1;
  long lVar2;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_RectTransform_o *rect;
  undefined8 uVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  
  if (DAT_05704af7 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_GameObject);
    il2cpp_init_method_metadata(&TypeRef_RectTransform);
    il2cpp_init_method_metadata(&TypeInfo_Type);
    DAT_05704af7 = '\x01';
    method = extraout_RDX;
  }
  components = (System_Type_array *)il2cpp_glue_02274930(TypeInfo_Type,1,method);
  handle.fields.value = TypeRef_RectTransform.fields.value;
  if (*(int *)(DAT_05711100 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar1 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (pSVar1 != (System_Type_o *)0x0) {
      lVar2 = il2cpp_runtime_glue(pSVar1,(((components->obj).klass)->_1).element_class);
      if (lVar2 == 0) {
        uVar4 = il2cpp_glue_022dd160();
                    /* WARNING: Subroutine does not return */
        il2cpp_glue_02274a00(uVar4,0);
      }
    }
    if ((int)components->max_length == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    components->m_Items[0] = pSVar1;
    il2cpp_runtime_glue(components->m_Items,pSVar1);
    __this = (UnityEngine_GameObject_o *)il2cpp_runtime_glue(TypeInfo_GameObject);
    UnityEngine_GameObject___ctor(__this,name,components,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      pUVar3 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent(pUVar3,parent,0,(MethodInfo *)0x0);
        method_00 = MethodInfo_RectTransform_GetComponent_RectTransform;
        rect = (UnityEngine_RectTransform_o *)
               UnityEngine_GameObject__GetComponent<object>
                         (__this,(MethodInfo_24F0F80 *)MethodInfo_RectTransform_GetComponent_RectTransform);
        Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Stretch(rect,method_00);
        pUVar3 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
        return pUVar3;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$PromoteLayer
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__PromoteLayer (UnityEngine_Transform_o* layer, const MethodInfo* method);
// 0x41749c0

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__PromoteLayer
               (UnityEngine_Transform_o *layer,MethodInfo *method)

{
  UnityEngine_GameObject_o *pUVar1;
  UnityEngine_Canvas_o *__this;
  
  if (DAT_05704af8 == '\0') {
    il2cpp_init_method_metadata(&MethodInfo_Canvas_AddComponent_Canvas);
    il2cpp_init_method_metadata(&MethodInfo_GraphicRaycaster_AddComponent_GraphicRaycaster);
    DAT_05704af8 = '\x01';
  }
  if (layer != (UnityEngine_Transform_o *)0x0) {
    pUVar1 = UnityEngine_Component__get_gameObject
                       ((UnityEngine_Component_o *)layer,(MethodInfo *)0x0);
    if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
      __this = (UnityEngine_Canvas_o *)
               UnityEngine_GameObject__AddComponent<object>(pUVar1,MethodInfo_Canvas_AddComponent_Canvas);
      if (__this != (UnityEngine_Canvas_o *)0x0) {
        UnityEngine_Canvas__set_overrideSorting(__this,1,(MethodInfo *)0x0);
        UnityEngine_Canvas__set_sortingOrder(__this,0x3b6,(MethodInfo *)0x0);
        pUVar1 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)layer,(MethodInfo *)0x0);
        if (pUVar1 != (UnityEngine_GameObject_o *)0x0) {
          UnityEngine_GameObject__AddComponent<object>(pUVar1,MethodInfo_GraphicRaycaster_AddComponent_GraphicRaycaster);
          return;
        }
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$ReferenceResolution
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__ReferenceResolution (const MethodInfo* method);
// 0x4174bf0

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__ReferenceResolution(MethodInfo *method)

{
  float fVar1;
  long lVar2;
  UnityEngine_Vector2_o UVar3;
  float fVar4;
  
  if (DAT_05704af9 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_Single_get_Value);
    DAT_05704af9 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if (lVar2 == 0) {
    fVar4 = 1.0;
  }
  else {
    lVar2 = *(long *)(lVar2 + 0x40);
    if (lVar2 == 0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    fVar1 = *(float *)(lVar2 + 0x14);
    fVar4 = 0.75;
    if ((0.75 <= fVar1) && (fVar4 = 1.5, fVar1 <= 1.5)) {
      fVar4 = fVar1;
    }
  }
  UVar3.fields.y = 1080.0 / fVar4;
  UVar3.fields.x = 1920.0 / fVar4;
  return (UnityEngine_Vector2_o)UVar3.fields;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$Theme
// il2cpp: Gisketch_Aottg2UI_Styling_GisketchTheme_o* Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Theme (const MethodInfo* method);
// 0x4174a70

Gisketch_Aottg2UI_Styling_GisketchTheme_o *
Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Theme(MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  undefined8 *puVar3;
  UnityEngine_Object_o *x;
  System_String_o *json;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar4;
  
  if (DAT_05704afa == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchTheme);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_TextAsset_Load_TextAsset);
    il2cpp_init_method_metadata(&TypeInfo_SettingsManager);
    il2cpp_init_method_metadata(&MethodInfo_String_get_Value);
    il2cpp_init_method_metadata(&"Light");
    il2cpp_init_method_metadata(&"UI/Themes/Aottg2Dark");
    il2cpp_init_method_metadata(&"UI/Themes/Aottg2Light");
    DAT_05704afa = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if (lVar1 == 0) {
LAB_04174b2a:
    puVar3 = &"UI/Themes/Aottg2Dark";
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x20);
    if (lVar1 == 0) goto LAB_04174be1;
    bVar2 = System_String__op_Equality
                      (*(System_String_o **)(lVar1 + 0x18),"Light",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') goto LAB_04174b2a;
    puVar3 = &"UI/Themes/Aottg2Light";
  }
  x = (UnityEngine_Object_o *)
      UnityEngine_Resources__Load<object>((System_String_o *)*puVar3,MethodInfo_TextAsset_Load_TextAsset);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_GisketchTheme + 0xe4) != 0) {
      return (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)**(undefined8 **)(TypeInfo_GisketchTheme + 0xb8);
    }
    il2cpp_init_class();
    return (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)**(undefined8 **)(TypeInfo_GisketchTheme + 0xb8);
  }
  if (x != (UnityEngine_Object_o *)0x0) {
    json = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)x,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_GisketchTheme + 0xe4) != 0) {
      pGVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__FromJson(json,(MethodInfo *)0x0);
      return pGVar4;
    }
    il2cpp_init_class();
    pGVar4 = Gisketch_Aottg2UI_Styling_GisketchTheme__FromJson(json,(MethodInfo *)0x0);
    return pGVar4;
  }
LAB_04174be1:
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$Stretch
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Stretch (UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x4174c90

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Stretch
               (UnityEngine_RectTransform_o *rect,MethodInfo *method)

{
  if (DAT_056fe093 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Vector2);
    DAT_056fe093 = '\x01';
  }
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchorMin
              (rect,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    if (DAT_0570136e == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector2);
      DAT_0570136e = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax
              (rect,(UnityEngine_Vector2_o)
                    *(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
               (MethodInfo *)0x0);
    if (DAT_056fe093 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector2);
      DAT_056fe093 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin
              (rect,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    if (DAT_056fe093 == '\0') {
      il2cpp_init_method_metadata(&TypeInfo_Vector2);
      DAT_056fe093 = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax
              (rect,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost___ctor (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* __this, const MethodInfo* method);
// 0x4174d90

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost___ctor
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$<BuildIfNeeded>b__15_0
// il2cpp: Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost___BuildIfNeeded_b__15_0 (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* __this, System_String_o* id, const MethodInfo* method);
// 0x4174da0

Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *
Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__<BuildIfNeeded>b__15_0
          (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *__this,System_String_o *id,
          MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *pGVar1;
  
  pGVar1 = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__BuildDialog
                     ((__this->fields)._catalog,id,(__this->fields)._codeActions,(MethodInfo *)0x0);
  return pGVar1;
}


