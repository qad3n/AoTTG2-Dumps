// Type: Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgExternalLinkDialogHost.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$get_Current
// il2cpp: Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__get_Current (const MethodInfo* method);
// 0x44eb6a0

Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *
Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__get_Current(MethodInfo *method)

{
  if (g_data_057aec39 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgExternalLinkDialogHost);
    g_data_057aec39 = '\x01';
  }
  return (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *)**(undefined8 **)(TypeInfo_AottgExternalLinkDialogHost + 0xb8);
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$set_Current
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__set_Current (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* value, const MethodInfo* method);
// 0x44eb6e0

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__set_Current
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *value,MethodInfo *method)

{
  if (g_data_057aec3a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgExternalLinkDialogHost);
    g_data_057aec3a = '\x01';
  }
  **(undefined8 **)(TypeInfo_AottgExternalLinkDialogHost + 0xb8) = value;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgExternalLinkDialogHost + 0xb8),value);
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$ShowUrl
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__ShowUrl (System_String_o* url, const MethodInfo* method);
// 0x44eb730

bool_conflict
Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__ShowUrl(System_String_o *url,MethodInfo *method)

{
  UnityEngine_Object_o *x;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  bool_conflict bVar1;
  bool_conflict extraout_EAX;
  bool_conflict extraout_EAX_00;
  System_String_o *value;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *pMVar2;
  bool_conflict bVar3;
  MethodInfo *__this_01;
  Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *__this_02;
  Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *pGVar4;
  
  if (g_data_057aec3b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    g_data_057aec3b = '\x01';
  }
  if (g_data_057aecb4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgExternalLinkDialogHost);
    g_data_057aecb4 = '\x01';
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_AottgExternalLinkDialogHost + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar3 = 0;
  bVar1 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar3 = 0;
    __this_01 = (MethodInfo *)0x0;
    bVar1 = System_String__IsNullOrWhiteSpace(url,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pMVar2 = extraout_RDX;
      if (g_data_057aecb4 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_AottgExternalLinkDialogHost);
        g_data_057aecb4 = '\x01';
        pMVar2 = extraout_RDX_00;
      }
      __this_02 = (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *)
                  **(undefined8 **)(TypeInfo_AottgExternalLinkDialogHost + 0xb8);
      if (__this_02 == (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        pMVar2 = __this_01;
        if (g_data_057aec3d == '\0') {
          il2cpp_runtime_helper_023445d0(&"externalLink.url");
          il2cpp_runtime_helper_023445d0(&"external-link-confirm");
          g_data_057aec3d = '\x01';
        }
        pGVar4 = __this_02;
        Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__BuildIfNeeded(__this_02,pMVar2);
        __this = (__this_02->fields)._state;
        if ((__this != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) &&
           ((__this_02->fields)._overlays != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
          if (__this_01 != (MethodInfo *)0x0) {
            value = System_String__Trim((System_String_o *)__this_01,(MethodInfo *)0x0);
            Gisketch_Aottg2UI_State_GisketchUIState__Set(__this,"externalLink.url",value,(MethodInfo *)0x0);
            __this_00 = (__this_02->fields)._overlays;
            pGVar4 = (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *)0x0;
            if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
              Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                        (__this_00,"external-link-confirm",1,(MethodInfo *)0x0);
              return extraout_EAX_00;
            }
          }
          il2cpp_runtime_helper_022b2c90();
          if (g_data_057aecb5 == '\0') {
            il2cpp_runtime_helper_023445d0(&TypeInfo_AottgExternalLinkDialogHost);
            g_data_057aecb5 = '\x01';
          }
          **(undefined8 **)(TypeInfo_AottgExternalLinkDialogHost + 0xb8) = pGVar4;
          bVar1 = il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgExternalLinkDialogHost + 0xb8),pGVar4);
          return bVar1;
        }
        return extraout_EAX;
      }
      Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Show(__this_02,url,pMVar2);
      bVar3 = 1;
    }
  }
  return bVar3;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$Awake
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Awake (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* __this, const MethodInfo* method);
// 0x44eb8b0

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Awake
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *__this,MethodInfo *method)

{
  if (g_data_057aecb5 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgExternalLinkDialogHost);
    g_data_057aecb5 = '\x01';
  }
  **(undefined8 **)(TypeInfo_AottgExternalLinkDialogHost + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgExternalLinkDialogHost + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__OnDestroy (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* __this, const MethodInfo* method);
// 0x44eb900

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__OnDestroy
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *__this,MethodInfo *method)

{
  ulong *puVar1;
  UnityEngine_Object_o *x;
  bool_conflict bVar2;
  
  if (cRam00000000057aec3c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    cRam00000000057aec3c = '\x01';
  }
  if (g_data_057aecb4 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgExternalLinkDialogHost);
    g_data_057aecb4 = '\x01';
  }
  x = (UnityEngine_Object_o *)**(undefined8 **)(TypeInfo_AottgExternalLinkDialogHost + 0xb8);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Equality(x,(UnityEngine_Object_o *)__this,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (g_data_057aecb5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgExternalLinkDialogHost);
      g_data_057aecb5 = '\x01';
    }
    **(undefined8 **)(TypeInfo_AottgExternalLinkDialogHost + 0xb8) = 0;
    if (g_data_057ba470 != 0) {
      LOCK();
      puVar1 = (ulong *)((long)&g_data_05803fe8 +
                        (ulong)((uint)(*(ulong *)(TypeInfo_AottgExternalLinkDialogHost + 0xb8) >> 0xf) & 0x3fff8));
      *puVar1 = *puVar1 | 1L << ((byte)(*(ulong *)(TypeInfo_AottgExternalLinkDialogHost + 0xb8) >> 0xc) & 0x3f);
      UNLOCK();
    }
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$Show
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Show (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* __this, System_String_o* url, const MethodInfo* method);
// 0x44eb810

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Show
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *__this,System_String_o *url,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_01;
  System_String_o *value;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *pGVar1;
  
  method_00 = (MethodInfo *)url;
  if (g_data_057aec3d == '\0') {
    il2cpp_runtime_helper_023445d0(&"externalLink.url");
    il2cpp_runtime_helper_023445d0(&"external-link-confirm");
    g_data_057aec3d = '\x01';
  }
  pGVar1 = __this;
  Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__BuildIfNeeded(__this,method_00);
  __this_00 = (__this->fields)._state;
  if ((__this_00 != (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) &&
     ((__this->fields)._overlays != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
    if (url != (System_String_o *)0x0) {
      value = System_String__Trim(url,(MethodInfo *)0x0);
      Gisketch_Aottg2UI_State_GisketchUIState__Set(__this_00,"externalLink.url",value,(MethodInfo *)0x0);
      __this_01 = (__this->fields)._overlays;
      pGVar1 = (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *)0x0;
      if (__this_01 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                  (__this_01,"external-link-confirm",1,(MethodInfo *)0x0);
        return;
      }
    }
    il2cpp_runtime_helper_022b2c90();
    if (g_data_057aecb5 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_AottgExternalLinkDialogHost);
      g_data_057aecb5 = '\x01';
    }
    **(undefined8 **)(TypeInfo_AottgExternalLinkDialogHost + 0xb8) = pGVar1;
    il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgExternalLinkDialogHost + 0xb8),pGVar1);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$HandleAction
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__HandleAction (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* __this, System_String_o* actionId, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x44ebc20

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__HandleAction
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *__this,System_String_o *actionId,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *pGVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_01;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  
  if (g_data_057aec3e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&"overlay.close");
    il2cpp_runtime_helper_023445d0(&"externalLink.url");
    il2cpp_runtime_helper_023445d0(&"externalLink.confirm");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Unhandled external link dialog action: ");
    g_data_057aec3e = '\x01';
  }
  bVar2 = System_String__op_Equality(actionId,"overlay.close",(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    bVar2 = System_String__op_Equality(actionId,"externalLink.confirm",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') {
      __this_01 = (__this->fields)._codeActions;
      if ((__this_01 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) ||
         (bVar2 = Gisketch_Aottg2UI_Code_AottgActionRegistry__TryHandle
                            (__this_01,actionId,context,(MethodInfo *)0x0), (char)bVar2 == '\0')) {
        pSVar3 = System_String__Concat_3ae5ba0("Unhandled external link dialog action: ",actionId,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Debug__LogWarning_4db7c80
                  ((Il2CppObject *)pSVar3,(UnityEngine_Object_o *)context.fields.GameObject,(MethodInfo *)0x0)
        ;
        return;
      }
    }
    else {
      __this_00 = (__this->fields)._state;
      if (__this_00 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        pSVar3 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
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
          il2cpp_runtime_helper_02337ed0();
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
// 0x44eb9d0

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__BuildIfNeeded
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o context;
  bool_conflict bVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *pGVar2;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *pGVar3;
  MethodInfo *pMVar4;
  UnityEngine_RectTransform_o *__this_00;
  UnityEngine_Transform_o *parent;
  MethodInfo *layer;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme;
  Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *__this_01;
  Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *localizer;
  System_Func_string__GisketchOverlayDefinition__o *dialogResolver;
  Gisketch_Aottg2UI_Building_GisketchBuildContext_o *__this_02;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *pGVar5;
  System_String_o *pSVar6;
  MethodInfo *method_00;
  undefined8 unaff_RBX;
  Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *pGVar7;
  MethodInfo *method_01;
  undefined8 unaff_R12;
  undefined8 local_40;
  UnityEngine_Object_o *pUStack_38;
  
  if (g_data_057aec3f == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Aottg2GisketchLocalizer);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgActionRegistry);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GisketchOverlayDefinition_BuildIfNeeded_b__15_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Func_string_GisketchOverlayDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchBuildContext);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchManifestDefinition);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchOverlayManager);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIState);
    il2cpp_runtime_helper_023445d0(&"AoTTG External Link Overlays");
    g_data_057aec3f = '\x01';
  }
  if ((__this->fields)._overlays != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
    return;
  }
  pGVar2 = (Gisketch_Aottg2UI_State_GisketchUIState_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIState);
  Gisketch_Aottg2UI_State_GisketchUIState___ctor(pGVar2,(MethodInfo *)0x0);
  (__this->fields)._state = pGVar2;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._state);
  pGVar3 = (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgActionRegistry);
  Gisketch_Aottg2UI_Code_AottgActionRegistry___ctor(pGVar3,(MethodInfo *)0x0);
  (__this->fields)._codeActions = pGVar3;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._codeActions,pGVar3);
  pMVar4 = (MethodInfo *)Gisketch_Aottg2UI_Code_AottgCodeCatalog__Discover((MethodInfo *)0x0);
  (__this->fields)._catalog = (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)pMVar4;
  il2cpp_runtime_helper_022b4080(&(__this->fields)._catalog);
  pGVar7 = __this;
  __this_00 = Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__CreateCanvas(__this,pMVar4);
  if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
    parent = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this_00,(MethodInfo *)0x0);
    pMVar4 = "AoTTG External Link Overlays";
    layer = (MethodInfo *)
            Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__CreateLayer
                      (parent,(System_String_o *)"AoTTG External Link Overlays",method_00);
    method_01 = layer;
    Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__PromoteLayer((UnityEngine_Transform_o *)layer,pMVar4);
    theme = Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Theme(method_01);
    __this_01 = (Gisketch_Aottg2UI_Data_GisketchManifestDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchManifestDefinition);
    Gisketch_Aottg2UI_Data_GisketchManifestDefinition___ctor(__this_01,(MethodInfo *)0x0);
    localizer = (Gisketch_Aottg2UI_Localization_IGisketchLocalizer_o *)il2cpp_runtime_helper_023052d0(TypeInfo_Aottg2GisketchLocalizer);
    Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer___ctor
              ((Gisketch_Aottg2UI_Localization_Aottg2GisketchLocalizer_o *)localizer,(MethodInfo *)0x0);
    pGVar2 = (__this->fields)._state;
    dialogResolver = (System_Func_string__GisketchOverlayDefinition__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Func_string_GisketchOverlayDefinition);
    System_Func_object__object____ctor();
    __this_02 = (Gisketch_Aottg2UI_Building_GisketchBuildContext_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchBuildContext);
    Gisketch_Aottg2UI_Building_GisketchBuildContext___ctor
              (__this_02,__this_01,theme,localizer,
               (Gisketch_Aottg2UI_Actions_IGisketchActionHandler_o *)__this,pGVar2,
               (Gisketch_Aottg2UI_Building_GisketchComponentRegistry_o *)0x0,dialogResolver,(MethodInfo *)0x0)
    ;
    pGVar5 = (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchOverlayManager);
    Gisketch_Aottg2UI_Overlays_GisketchOverlayManager___ctor
              (pGVar5,(UnityEngine_Transform_o *)layer,__this_02,(MethodInfo *)0x0);
    (__this->fields)._overlays = pGVar5;
    il2cpp_runtime_helper_022b4080(&(__this->fields)._overlays,pGVar5);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec3e == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Application);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&"overlay.close");
    il2cpp_runtime_helper_023445d0(&"externalLink.url");
    il2cpp_runtime_helper_023445d0(&"externalLink.confirm");
    il2cpp_runtime_helper_023445d0(&"");
    il2cpp_runtime_helper_023445d0(&"Unhandled external link dialog action: ");
    g_data_057aec3e = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)pMVar4,"overlay.close",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)pMVar4,"externalLink.confirm",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      pGVar3 = (pGVar7->fields)._codeActions;
      if ((pGVar3 == (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) ||
         (context.fields.GameObject = (UnityEngine_GameObject_o *)pUStack_38,
         context.fields.ElementId = (System_String_o *)local_40,
         context.fields.Node = (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)unaff_RBX,
         context.fields._24_8_ = unaff_R12,
         bVar1 = Gisketch_Aottg2UI_Code_AottgActionRegistry__TryHandle
                           (pGVar3,(System_String_o *)pMVar4,context,(MethodInfo *)0x0), (char)bVar1 == '\0'))
      {
        pSVar6 = System_String__Concat_3ae5ba0("Unhandled external link dialog action: ",(System_String_o *)pMVar4,(MethodInfo *)0x0);
        if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Debug__LogWarning_4db7c80((Il2CppObject *)pSVar6,pUStack_38,(MethodInfo *)0x0);
        return;
      }
    }
    else {
      pGVar2 = (pGVar7->fields)._state;
      if (pGVar2 == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        pSVar6 = (System_String_o *)**(undefined8 **)(g_data_057b9c00 + 0xb8);
        pGVar5 = (pGVar7->fields)._overlays;
      }
      else {
        pSVar6 = Gisketch_Aottg2UI_State_GisketchUIState__Get
                           (pGVar2,"externalLink.url","",(MethodInfo *)0x0);
        pGVar5 = (pGVar7->fields)._overlays;
      }
      if (pGVar5 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
        Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(pGVar5,1,(MethodInfo *)0x0);
      }
      bVar1 = System_String__IsNullOrWhiteSpace(pSVar6,(MethodInfo *)0x0);
      if ((char)bVar1 == '\0') {
        if (*(int *)(TypeInfo_Application + 0xe4) == 0) {
          il2cpp_runtime_helper_02337ed0();
        }
        UnityEngine_Application__OpenURL(pSVar6,(MethodInfo *)0x0);
        return;
      }
    }
  }
  else {
    pGVar5 = (pGVar7->fields)._overlays;
    if (pGVar5 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__CloseTop(pGVar5,1,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$CreateCanvas
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__CreateCanvas (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* __this, const MethodInfo* method);
// 0x44ebe10

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__CreateCanvas
          (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *__this,MethodInfo *method)

{
  UnityEngine_GameObject_o **ppUVar1;
  float fVar2;
  System_RuntimeTypeHandle_o SVar3;
  bool_conflict bVar4;
  System_Type_array *pSVar5;
  System_Type_o *pSVar6;
  long lVar7;
  UnityEngine_GameObject_o *pUVar8;
  UnityEngine_Transform_o *pUVar9;
  UnityEngine_Transform_o *pUVar10;
  UnityEngine_Canvas_o *pUVar11;
  UnityEngine_UI_CanvasScaler_o *__this_00;
  UnityEngine_RectTransform_o *pUVar12;
  UnityEngine_MonoBehaviour_o *pUVar13;
  UnityEngine_MonoBehaviour_o *__this_01;
  undefined8 *puVar14;
  System_String_o *pSVar15;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar16;
  UnityEngine_RectTransform_o *extraout_RAX;
  UnityEngine_RectTransform_o *extraout_RAX_00;
  MethodInfo *pMVar17;
  UnityEngine_MonoBehaviour_o *__this_02;
  UnityEngine_Vector2_o value;
  float fVar18;
  
  if (g_data_057aec40 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_CanvasScaler_AddComponent_CanvasScaler);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_AddComponent_Canvas);
    il2cpp_runtime_helper_023445d0(&MethodInfo_GraphicRaycaster_AddComponent_GraphicRaycaster);
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    il2cpp_runtime_helper_023445d0(&"AoTTG External Link Canvas");
    g_data_057aec40 = '\x01';
  }
  pSVar5 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar3.fields.value = TypeRef_RectTransform.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
  if (pSVar5 == (System_Type_array *)0x0) goto label_044ec0ce;
  if ((pSVar6 == (System_Type_o *)0x0) || (lVar7 = il2cpp_runtime_helper_023051f0(pSVar6), lVar7 != 0)) {
    if ((int)pSVar5->max_length != 0) {
      pSVar5->m_Items[0] = pSVar6;
      il2cpp_runtime_helper_022b4080(pSVar5->m_Items,pSVar6);
      pUVar8 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor_4dfc440(pUVar8,"AoTTG External Link Canvas",pSVar5,(MethodInfo *)0x0);
      ppUVar1 = &(__this->fields)._canvasObject;
      (__this->fields)._canvasObject = pUVar8;
      il2cpp_runtime_helper_022b4080(ppUVar1);
      pUVar8 = (__this->fields)._canvasObject;
      if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
        pUVar9 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
        pUVar10 = UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
        if (pUVar9 != (UnityEngine_Transform_o *)0x0) {
          UnityEngine_Transform__SetParent_4e09e30(pUVar9,pUVar10,0,(MethodInfo *)0x0);
          if ((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
             (pUVar11 = (UnityEngine_Canvas_o *)
                        UnityEngine_GameObject__AddComponent_object_(*ppUVar1,MethodInfo_Canvas_AddComponent_Canvas),
             pUVar11 != (UnityEngine_Canvas_o *)0x0)) {
            UnityEngine_Canvas__set_renderMode(pUVar11,0,(MethodInfo *)0x0);
            if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
              UnityEngine_GameObject__AddComponent_object_(*ppUVar1,MethodInfo_GraphicRaycaster_AddComponent_GraphicRaycaster);
              if ((*ppUVar1 != (UnityEngine_GameObject_o *)0x0) &&
                 (__this_00 = (UnityEngine_UI_CanvasScaler_o *)
                              UnityEngine_GameObject__AddComponent_object_(*ppUVar1,MethodInfo_CanvasScaler_AddComponent_CanvasScaler),
                 __this_00 != (UnityEngine_UI_CanvasScaler_o *)0x0)) {
                (__this_00->fields).m_UiScaleMode = 1;
                (__this_00->fields).m_MatchWidthOrHeight = 0.5;
                if (g_data_057aec43 == '\0') {
                  il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
                  il2cpp_runtime_helper_023445d0(&MethodInfo_Single_get_Value);
                  g_data_057aec43 = '\x01';
                }
                lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
                if (lVar7 == 0) {
                  fVar18 = 1.0;
                }
                else {
                  lVar7 = *(long *)(lVar7 + 0x40);
                  if (lVar7 == 0) goto label_044ec0ce;
                  fVar2 = *(float *)(lVar7 + 0x14);
                  fVar18 = 0.75;
                  if ((0.75 <= fVar2) && (fVar18 = 1.5, fVar2 <= 1.5)) {
                    fVar18 = fVar2;
                  }
                }
                value.fields.x = 1920.0 / fVar18;
                value.fields.y = 1080.0 / fVar18;
                UnityEngine_UI_CanvasScaler__set_referenceResolution(__this_00,value,(MethodInfo *)0x0);
                if (*ppUVar1 != (UnityEngine_GameObject_o *)0x0) {
                  pMVar17 = MethodInfo_RectTransform_GetComponent_RectTransform;
                  pUVar12 = (UnityEngine_RectTransform_o *)
                            UnityEngine_GameObject__GetComponent_object_
                                      (*ppUVar1,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform);
                  Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Stretch(pUVar12,pMVar17);
                  return pUVar12;
                }
              }
            }
          }
        }
      }
label_044ec0ce:
      il2cpp_runtime_helper_022b2c90();
    }
    il2cpp_runtime_helper_022b2ca0();
  }
  pUVar9 = (UnityEngine_Transform_o *)il2cpp_runtime_helper_0231b270();
  pSVar15 = (System_String_o *)0x0;
  il2cpp_runtime_helper_022b2b10();
  if (g_data_057aec41 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    g_data_057aec41 = '\x01';
  }
  pSVar5 = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type);
  SVar3.fields.value = TypeRef_RectTransform.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar6 = System_Type__GetTypeFromHandle(SVar3,(MethodInfo *)0x0);
  if (pSVar5 == (System_Type_array *)0x0) {
label_044ec243:
    il2cpp_runtime_helper_022b2c90();
label_044ec248:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pSVar6 == (System_Type_o *)0x0) || (lVar7 = il2cpp_runtime_helper_023051f0(pSVar6), lVar7 != 0)) {
    if ((int)pSVar5->max_length != 0) {
      pSVar5->m_Items[0] = pSVar6;
      il2cpp_runtime_helper_022b4080(pSVar5->m_Items,pSVar6);
      pUVar8 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor_4dfc440(pUVar8,pSVar15,pSVar5,(MethodInfo *)0x0);
      if ((pUVar8 != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar10 = UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0),
         pUVar10 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent_4e09e30(pUVar10,pUVar9,0,(MethodInfo *)0x0);
        pMVar17 = MethodInfo_RectTransform_GetComponent_RectTransform;
        pUVar12 = (UnityEngine_RectTransform_o *)
                  UnityEngine_GameObject__GetComponent_object_(pUVar8,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform);
        Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Stretch(pUVar12,pMVar17);
        pUVar12 = (UnityEngine_RectTransform_o *)
                  UnityEngine_GameObject__get_transform(pUVar8,(MethodInfo *)0x0);
        return pUVar12;
      }
      goto label_044ec243;
    }
    goto label_044ec248;
  }
  pUVar13 = (UnityEngine_MonoBehaviour_o *)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  __this_02 = pUVar13;
  if (g_data_057aec42 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_AddComponent_Canvas);
    __this_02 = (UnityEngine_MonoBehaviour_o *)&MethodInfo_GraphicRaycaster_AddComponent_GraphicRaycaster;
    il2cpp_runtime_helper_023445d0();
    g_data_057aec42 = '\x01';
  }
  if (((pUVar13 != (UnityEngine_MonoBehaviour_o *)0x0) &&
      (__this_02 = pUVar13,
      __this_01 = (UnityEngine_MonoBehaviour_o *)
                  UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0),
      __this_01 != (UnityEngine_MonoBehaviour_o *)0x0)) &&
     (pUVar11 = (UnityEngine_Canvas_o *)
                UnityEngine_GameObject__AddComponent_object_
                          ((UnityEngine_GameObject_o *)__this_01,MethodInfo_Canvas_AddComponent_Canvas), __this_02 = __this_01,
     pUVar11 != (UnityEngine_Canvas_o *)0x0)) {
    UnityEngine_Canvas__set_overrideSorting(pUVar11,1,(MethodInfo *)0x0);
    UnityEngine_Canvas__set_sortingOrder(pUVar11,0x3b6,(MethodInfo *)0x0);
    pUVar8 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar13,(MethodInfo *)0x0);
    __this_02 = pUVar13;
    if (pUVar8 != (UnityEngine_GameObject_o *)0x0) {
      pUVar12 = (UnityEngine_RectTransform_o *)
                UnityEngine_GameObject__AddComponent_object_(pUVar8,MethodInfo_GraphicRaycaster_AddComponent_GraphicRaycaster);
      return pUVar12;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec44 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTheme);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextAsset_Load_TextAsset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"Light");
    il2cpp_runtime_helper_023445d0(&"UI/Themes/Aottg2Dark");
    __this_02 = (UnityEngine_MonoBehaviour_o *)&"UI/Themes/Aottg2Light";
    il2cpp_runtime_helper_023445d0();
    g_data_057aec44 = '\x01';
  }
  lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if (lVar7 == 0) {
label_044ec3ca:
    puVar14 = &"UI/Themes/Aottg2Dark";
  }
  else {
    lVar7 = *(long *)(lVar7 + 0x20);
    if (lVar7 == 0) goto label_044ec481;
    bVar4 = System_String__op_Equality(*(System_String_o **)(lVar7 + 0x18),"Light",(MethodInfo *)0x0);
    if ((char)bVar4 == '\0') goto label_044ec3ca;
    puVar14 = &"UI/Themes/Aottg2Light";
  }
  pUVar13 = (UnityEngine_MonoBehaviour_o *)
            UnityEngine_Resources__Load_object_((System_String_o *)*puVar14,MethodInfo_TextAsset_Load_TextAsset);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_02 = pUVar13;
  bVar4 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar13,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar4 == '\0') {
    if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      return (UnityEngine_RectTransform_o *)**(undefined8 **)(TypeInfo_GisketchTheme + 0xb8);
    }
    return (UnityEngine_RectTransform_o *)**(undefined8 **)(TypeInfo_GisketchTheme + 0xb8);
  }
  if (pUVar13 != (UnityEngine_MonoBehaviour_o *)0x0) {
    pSVar15 = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)pUVar13,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pGVar16 = Gisketch_Aottg2UI_Styling_GisketchTheme__FromJson(pSVar15,(MethodInfo *)0x0);
      return (UnityEngine_RectTransform_o *)pGVar16;
    }
    pGVar16 = Gisketch_Aottg2UI_Styling_GisketchTheme__FromJson(pSVar15,(MethodInfo *)0x0);
    return (UnityEngine_RectTransform_o *)pGVar16;
  }
label_044ec481:
  pUVar12 = (UnityEngine_RectTransform_o *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec43 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_02 = (UnityEngine_MonoBehaviour_o *)&MethodInfo_Single_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057aec43 = '\x01';
  }
  lVar7 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar7 == 0) || (*(long *)(lVar7 + 0x40) != 0)) {
    return pUVar12;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar13 = __this_02;
  if (g_data_057a694c == '\0') {
    pUVar13 = (UnityEngine_MonoBehaviour_o *)&TypeInfo_Vector2;
    il2cpp_runtime_helper_023445d0();
    g_data_057a694c = '\x01';
  }
  if (__this_02 == (UnityEngine_MonoBehaviour_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    UnityEngine_MonoBehaviour___ctor(pUVar13,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  UnityEngine_RectTransform__set_anchorMin
            ((UnityEngine_RectTransform_o *)__this_02,
             (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
  if (g_data_057a9c86 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a9c86 = '\x01';
  }
  UnityEngine_RectTransform__set_anchorMax
            ((UnityEngine_RectTransform_o *)__this_02,
             (UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
             (MethodInfo *)0x0);
  if (g_data_057a694c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a694c = '\x01';
  }
  UnityEngine_RectTransform__set_offsetMin
            ((UnityEngine_RectTransform_o *)__this_02,
             (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
  if (g_data_057a694c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a694c = '\x01';
  }
  UnityEngine_RectTransform__set_offsetMax
            ((UnityEngine_RectTransform_o *)__this_02,
             (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$CreateLayer
// il2cpp: UnityEngine_Transform_o* Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__CreateLayer (UnityEngine_Transform_o* parent, System_String_o* name, const MethodInfo* method);
// 0x44ec0f0

UnityEngine_Transform_o *
Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__CreateLayer
          (UnityEngine_Transform_o *parent,System_String_o *name,MethodInfo *method)

{
  System_RuntimeTypeHandle_o handle;
  bool_conflict bVar1;
  System_Type_array *components;
  System_Type_o *pSVar2;
  long lVar3;
  UnityEngine_GameObject_o *pUVar4;
  UnityEngine_Transform_o *pUVar5;
  UnityEngine_RectTransform_o *rect;
  UnityEngine_MonoBehaviour_o *pUVar6;
  UnityEngine_MonoBehaviour_o *__this;
  UnityEngine_Canvas_o *__this_00;
  undefined8 *puVar7;
  System_String_o *json;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar8;
  UnityEngine_Transform_o *extraout_RAX;
  UnityEngine_Transform_o *extraout_RAX_00;
  MethodInfo *extraout_RDX;
  MethodInfo *method_00;
  UnityEngine_MonoBehaviour_o *__this_01;
  
  if (g_data_057aec41 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_RectTransform_GetComponent_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GameObject);
    il2cpp_runtime_helper_023445d0(&TypeRef_RectTransform);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Type);
    g_data_057aec41 = '\x01';
    method = extraout_RDX;
  }
  components = (System_Type_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_Type,1,method);
  handle.fields.value = TypeRef_RectTransform.fields.value;
  if (*(int *)(g_data_057b9c50 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar2 = System_Type__GetTypeFromHandle(handle,(MethodInfo *)0x0);
  if (components == (System_Type_array *)0x0) {
label_044ec243:
    il2cpp_runtime_helper_022b2c90();
label_044ec248:
    il2cpp_runtime_helper_022b2ca0();
  }
  else if ((pSVar2 == (System_Type_o *)0x0) || (lVar3 = il2cpp_runtime_helper_023051f0(pSVar2), lVar3 != 0)) {
    if ((int)components->max_length != 0) {
      components->m_Items[0] = pSVar2;
      il2cpp_runtime_helper_022b4080(components->m_Items,pSVar2);
      pUVar4 = (UnityEngine_GameObject_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GameObject);
      UnityEngine_GameObject___ctor_4dfc440(pUVar4,name,components,(MethodInfo *)0x0);
      if ((pUVar4 != (UnityEngine_GameObject_o *)0x0) &&
         (pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0),
         pUVar5 != (UnityEngine_Transform_o *)0x0)) {
        UnityEngine_Transform__SetParent_4e09e30(pUVar5,parent,0,(MethodInfo *)0x0);
        method_00 = MethodInfo_RectTransform_GetComponent_RectTransform;
        rect = (UnityEngine_RectTransform_o *)
               UnityEngine_GameObject__GetComponent_object_(pUVar4,(MethodInfo_255A0F0 *)MethodInfo_RectTransform_GetComponent_RectTransform);
        Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Stretch(rect,method_00);
        pUVar5 = UnityEngine_GameObject__get_transform(pUVar4,(MethodInfo *)0x0);
        return pUVar5;
      }
      goto label_044ec243;
    }
    goto label_044ec248;
  }
  pUVar6 = (UnityEngine_MonoBehaviour_o *)il2cpp_runtime_helper_0231b270();
  il2cpp_runtime_helper_022b2b10();
  __this_01 = pUVar6;
  if (g_data_057aec42 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_AddComponent_Canvas);
    __this_01 = (UnityEngine_MonoBehaviour_o *)&MethodInfo_GraphicRaycaster_AddComponent_GraphicRaycaster;
    il2cpp_runtime_helper_023445d0();
    g_data_057aec42 = '\x01';
  }
  if (((pUVar6 != (UnityEngine_MonoBehaviour_o *)0x0) &&
      (__this_01 = pUVar6,
      __this = (UnityEngine_MonoBehaviour_o *)
               UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0),
      __this != (UnityEngine_MonoBehaviour_o *)0x0)) &&
     (__this_00 = (UnityEngine_Canvas_o *)
                  UnityEngine_GameObject__AddComponent_object_
                            ((UnityEngine_GameObject_o *)__this,MethodInfo_Canvas_AddComponent_Canvas), __this_01 = __this,
     __this_00 != (UnityEngine_Canvas_o *)0x0)) {
    UnityEngine_Canvas__set_overrideSorting(__this_00,1,(MethodInfo *)0x0);
    UnityEngine_Canvas__set_sortingOrder(__this_00,0x3b6,(MethodInfo *)0x0);
    pUVar4 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)pUVar6,(MethodInfo *)0x0);
    __this_01 = pUVar6;
    if (pUVar4 != (UnityEngine_GameObject_o *)0x0) {
      pUVar5 = (UnityEngine_Transform_o *)UnityEngine_GameObject__AddComponent_object_(pUVar4,MethodInfo_GraphicRaycaster_AddComponent_GraphicRaycaster);
      return pUVar5;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec44 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTheme);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextAsset_Load_TextAsset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"Light");
    il2cpp_runtime_helper_023445d0(&"UI/Themes/Aottg2Dark");
    __this_01 = (UnityEngine_MonoBehaviour_o *)&"UI/Themes/Aottg2Light";
    il2cpp_runtime_helper_023445d0();
    g_data_057aec44 = '\x01';
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if (lVar3 == 0) {
label_044ec3ca:
    puVar7 = &"UI/Themes/Aottg2Dark";
  }
  else {
    lVar3 = *(long *)(lVar3 + 0x20);
    if (lVar3 == 0) goto label_044ec481;
    bVar1 = System_String__op_Equality(*(System_String_o **)(lVar3 + 0x18),"Light",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') goto label_044ec3ca;
    puVar7 = &"UI/Themes/Aottg2Light";
  }
  pUVar6 = (UnityEngine_MonoBehaviour_o *)
           UnityEngine_Resources__Load_object_((System_String_o *)*puVar7,MethodInfo_TextAsset_Load_TextAsset);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = pUVar6;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar6,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      return (UnityEngine_Transform_o *)**(undefined8 **)(TypeInfo_GisketchTheme + 0xb8);
    }
    return (UnityEngine_Transform_o *)**(undefined8 **)(TypeInfo_GisketchTheme + 0xb8);
  }
  if (pUVar6 != (UnityEngine_MonoBehaviour_o *)0x0) {
    json = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)pUVar6,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pGVar8 = Gisketch_Aottg2UI_Styling_GisketchTheme__FromJson(json,(MethodInfo *)0x0);
      return (UnityEngine_Transform_o *)pGVar8;
    }
    pGVar8 = Gisketch_Aottg2UI_Styling_GisketchTheme__FromJson(json,(MethodInfo *)0x0);
    return (UnityEngine_Transform_o *)pGVar8;
  }
label_044ec481:
  pUVar5 = (UnityEngine_Transform_o *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec43 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_01 = (UnityEngine_MonoBehaviour_o *)&MethodInfo_Single_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057aec43 = '\x01';
  }
  lVar3 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar3 != 0) && (*(long *)(lVar3 + 0x40) == 0)) {
    il2cpp_runtime_helper_022b2c90();
    pUVar6 = __this_01;
    if (g_data_057a694c == '\0') {
      pUVar6 = (UnityEngine_MonoBehaviour_o *)&TypeInfo_Vector2;
      il2cpp_runtime_helper_023445d0();
      g_data_057a694c = '\x01';
    }
    if (__this_01 == (UnityEngine_MonoBehaviour_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
      UnityEngine_MonoBehaviour___ctor(pUVar6,(MethodInfo *)0x0);
      return extraout_RAX_00;
    }
    UnityEngine_RectTransform__set_anchorMin
              ((UnityEngine_RectTransform_o *)__this_01,
               (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0
              );
    if (g_data_057a9c86 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a9c86 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax
              ((UnityEngine_RectTransform_o *)__this_01,
               (UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
               (MethodInfo *)0x0);
    if (g_data_057a694c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin
              ((UnityEngine_RectTransform_o *)__this_01,
               (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0
              );
    if (g_data_057a694c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax
              ((UnityEngine_RectTransform_o *)__this_01,
               (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0
              );
    return extraout_RAX;
  }
  return pUVar5;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$PromoteLayer
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__PromoteLayer (UnityEngine_Transform_o* layer, const MethodInfo* method);
// 0x44ec260

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__PromoteLayer
               (UnityEngine_Transform_o *layer,MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  UnityEngine_MonoBehaviour_o *pUVar3;
  UnityEngine_Canvas_o *__this;
  UnityEngine_GameObject_o *__this_00;
  undefined8 *puVar4;
  System_String_o *json;
  UnityEngine_MonoBehaviour_o *__this_01;
  
  __this_01 = (UnityEngine_MonoBehaviour_o *)layer;
  if (g_data_057aec42 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_Canvas_AddComponent_Canvas);
    __this_01 = (UnityEngine_MonoBehaviour_o *)&MethodInfo_GraphicRaycaster_AddComponent_GraphicRaycaster;
    il2cpp_runtime_helper_023445d0();
    g_data_057aec42 = '\x01';
  }
  if (((layer != (UnityEngine_Transform_o *)0x0) &&
      (__this_01 = (UnityEngine_MonoBehaviour_o *)layer,
      pUVar3 = (UnityEngine_MonoBehaviour_o *)
               UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)layer,(MethodInfo *)0x0),
      pUVar3 != (UnityEngine_MonoBehaviour_o *)0x0)) &&
     (__this = (UnityEngine_Canvas_o *)
               UnityEngine_GameObject__AddComponent_object_((UnityEngine_GameObject_o *)pUVar3,MethodInfo_Canvas_AddComponent_Canvas),
     __this_01 = pUVar3, __this != (UnityEngine_Canvas_o *)0x0)) {
    UnityEngine_Canvas__set_overrideSorting(__this,1,(MethodInfo *)0x0);
    UnityEngine_Canvas__set_sortingOrder(__this,0x3b6,(MethodInfo *)0x0);
    __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)layer,(MethodInfo *)0x0);
    __this_01 = (UnityEngine_MonoBehaviour_o *)layer;
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      UnityEngine_GameObject__AddComponent_object_(__this_00,MethodInfo_GraphicRaycaster_AddComponent_GraphicRaycaster);
      return;
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec44 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTheme);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextAsset_Load_TextAsset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"Light");
    il2cpp_runtime_helper_023445d0(&"UI/Themes/Aottg2Dark");
    __this_01 = (UnityEngine_MonoBehaviour_o *)&"UI/Themes/Aottg2Light";
    il2cpp_runtime_helper_023445d0();
    g_data_057aec44 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if (lVar1 == 0) {
label_044ec3ca:
    puVar4 = &"UI/Themes/Aottg2Dark";
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x20);
    if (lVar1 == 0) goto label_044ec481;
    bVar2 = System_String__op_Equality(*(System_String_o **)(lVar1 + 0x18),"Light",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') goto label_044ec3ca;
    puVar4 = &"UI/Themes/Aottg2Light";
  }
  pUVar3 = (UnityEngine_MonoBehaviour_o *)
           UnityEngine_Resources__Load_object_((System_String_o *)*puVar4,MethodInfo_TextAsset_Load_TextAsset);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  __this_01 = pUVar3;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      return;
    }
    return;
  }
  if (pUVar3 != (UnityEngine_MonoBehaviour_o *)0x0) {
    json = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)pUVar3,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      Gisketch_Aottg2UI_Styling_GisketchTheme__FromJson(json,(MethodInfo *)0x0);
      return;
    }
    Gisketch_Aottg2UI_Styling_GisketchTheme__FromJson(json,(MethodInfo *)0x0);
    return;
  }
label_044ec481:
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec43 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    __this_01 = (UnityEngine_MonoBehaviour_o *)&MethodInfo_Single_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057aec43 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar1 == 0) || (*(long *)(lVar1 + 0x40) != 0)) {
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pUVar3 = __this_01;
  if (g_data_057a694c == '\0') {
    pUVar3 = (UnityEngine_MonoBehaviour_o *)&TypeInfo_Vector2;
    il2cpp_runtime_helper_023445d0();
    g_data_057a694c = '\x01';
  }
  if (__this_01 == (UnityEngine_MonoBehaviour_o *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    UnityEngine_MonoBehaviour___ctor(pUVar3,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_RectTransform__set_anchorMin
            ((UnityEngine_RectTransform_o *)__this_01,
             (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
  if (g_data_057a9c86 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a9c86 = '\x01';
  }
  UnityEngine_RectTransform__set_anchorMax
            ((UnityEngine_RectTransform_o *)__this_01,
             (UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
             (MethodInfo *)0x0);
  if (g_data_057a694c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a694c = '\x01';
  }
  UnityEngine_RectTransform__set_offsetMin
            ((UnityEngine_RectTransform_o *)__this_01,
             (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
  if (g_data_057a694c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a694c = '\x01';
  }
  UnityEngine_RectTransform__set_offsetMax
            ((UnityEngine_RectTransform_o *)__this_01,
             (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$ReferenceResolution
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__ReferenceResolution (const MethodInfo* method);
// 0x44ec490

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__ReferenceResolution(MethodInfo *method)

{
  float fVar1;
  long lVar2;
  MethodInfo *__this;
  UnityEngine_Vector2_o UVar3;
  UnityEngine_Vector2_o extraout_XMM0_Qa;
  UnityEngine_Vector2_o extraout_XMM0_Qa_00;
  float fVar4;
  
  if (g_data_057aec43 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    method = (MethodInfo *)&MethodInfo_Single_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057aec43 = '\x01';
  }
  lVar2 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if (lVar2 == 0) {
    fVar4 = 1.0;
  }
  else {
    lVar2 = *(long *)(lVar2 + 0x40);
    if (lVar2 == 0) {
      il2cpp_runtime_helper_022b2c90();
      __this = method;
      if (g_data_057a694c == '\0') {
        __this = (MethodInfo *)&TypeInfo_Vector2;
        il2cpp_runtime_helper_023445d0();
        g_data_057a694c = '\x01';
      }
      if (method == (MethodInfo *)0x0) {
        il2cpp_runtime_helper_022b2c90();
        UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
        return (UnityEngine_Vector2_o)extraout_XMM0_Qa_00.fields;
      }
      UnityEngine_RectTransform__set_anchorMin
                ((UnityEngine_RectTransform_o *)method,
                 (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                 (MethodInfo *)0x0);
      if (g_data_057a9c86 == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
        g_data_057a9c86 = '\x01';
      }
      UnityEngine_RectTransform__set_anchorMax
                ((UnityEngine_RectTransform_o *)method,
                 (UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
                 (MethodInfo *)0x0);
      if (g_data_057a694c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
        g_data_057a694c = '\x01';
      }
      UnityEngine_RectTransform__set_offsetMin
                ((UnityEngine_RectTransform_o *)method,
                 (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                 (MethodInfo *)0x0);
      if (g_data_057a694c == '\0') {
        il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
        g_data_057a694c = '\x01';
      }
      UnityEngine_RectTransform__set_offsetMax
                ((UnityEngine_RectTransform_o *)method,
                 (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
                 (MethodInfo *)0x0);
      return (UnityEngine_Vector2_o)extraout_XMM0_Qa.fields;
    }
    fVar1 = *(float *)(lVar2 + 0x14);
    fVar4 = 0.75;
    if ((0.75 <= fVar1) && (fVar4 = 1.5, fVar1 <= 1.5)) {
      fVar4 = fVar1;
    }
  }
  UVar3.fields.x = 1920.0 / fVar4;
  UVar3.fields.y = 1080.0 / fVar4;
  return (UnityEngine_Vector2_o)UVar3.fields;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$Theme
// il2cpp: Gisketch_Aottg2UI_Styling_GisketchTheme_o* Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Theme (const MethodInfo* method);
// 0x44ec310

Gisketch_Aottg2UI_Styling_GisketchTheme_o *
Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Theme(MethodInfo *method)

{
  long lVar1;
  bool_conflict bVar2;
  undefined8 *puVar3;
  MethodInfo *pMVar4;
  System_String_o *json;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *pGVar5;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *extraout_RAX;
  Gisketch_Aottg2UI_Styling_GisketchTheme_o *extraout_RAX_00;
  
  if (g_data_057aec44 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchTheme);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_TextAsset_Load_TextAsset);
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    il2cpp_runtime_helper_023445d0(&MethodInfo_String_get_Value);
    il2cpp_runtime_helper_023445d0(&"Light");
    il2cpp_runtime_helper_023445d0(&"UI/Themes/Aottg2Dark");
    method = (MethodInfo *)&"UI/Themes/Aottg2Light";
    il2cpp_runtime_helper_023445d0();
    g_data_057aec44 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if (lVar1 == 0) {
label_044ec3ca:
    puVar3 = &"UI/Themes/Aottg2Dark";
  }
  else {
    lVar1 = *(long *)(lVar1 + 0x20);
    if (lVar1 == 0) goto label_044ec481;
    bVar2 = System_String__op_Equality(*(System_String_o **)(lVar1 + 0x18),"Light",(MethodInfo *)0x0);
    if ((char)bVar2 == '\0') goto label_044ec3ca;
    puVar3 = &"UI/Themes/Aottg2Light";
  }
  pMVar4 = (MethodInfo *)UnityEngine_Resources__Load_object_((System_String_o *)*puVar3,MethodInfo_TextAsset_Load_TextAsset);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  method = pMVar4;
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pMVar4,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      return (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)**(undefined8 **)(TypeInfo_GisketchTheme + 0xb8);
    }
    return (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)**(undefined8 **)(TypeInfo_GisketchTheme + 0xb8);
  }
  if (pMVar4 != (MethodInfo *)0x0) {
    json = UnityEngine_TextAsset__get_text((UnityEngine_TextAsset_o *)pMVar4,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_GisketchTheme + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
      pGVar5 = Gisketch_Aottg2UI_Styling_GisketchTheme__FromJson(json,(MethodInfo *)0x0);
      return pGVar5;
    }
    pGVar5 = Gisketch_Aottg2UI_Styling_GisketchTheme__FromJson(json,(MethodInfo *)0x0);
    return pGVar5;
  }
label_044ec481:
  pGVar5 = (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec43 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_SettingsManager);
    method = (MethodInfo *)&MethodInfo_Single_get_Value;
    il2cpp_runtime_helper_023445d0();
    g_data_057aec43 = '\x01';
  }
  lVar1 = *(long *)(*(long *)(TypeInfo_SettingsManager + 0xb8) + 0x28);
  if ((lVar1 == 0) || (*(long *)(lVar1 + 0x40) != 0)) {
    return pGVar5;
  }
  il2cpp_runtime_helper_022b2c90();
  pMVar4 = method;
  if (g_data_057a694c == '\0') {
    pMVar4 = (MethodInfo *)&TypeInfo_Vector2;
    il2cpp_runtime_helper_023445d0();
    g_data_057a694c = '\x01';
  }
  if (method == (MethodInfo *)0x0) {
    il2cpp_runtime_helper_022b2c90();
    UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)pMVar4,(MethodInfo *)0x0);
    return extraout_RAX_00;
  }
  UnityEngine_RectTransform__set_anchorMin
            ((UnityEngine_RectTransform_o *)method,
             (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
  if (g_data_057a9c86 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a9c86 = '\x01';
  }
  UnityEngine_RectTransform__set_anchorMax
            ((UnityEngine_RectTransform_o *)method,
             (UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8),
             (MethodInfo *)0x0);
  if (g_data_057a694c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a694c = '\x01';
  }
  UnityEngine_RectTransform__set_offsetMin
            ((UnityEngine_RectTransform_o *)method,
             (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
  if (g_data_057a694c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
    g_data_057a694c = '\x01';
  }
  UnityEngine_RectTransform__set_offsetMax
            ((UnityEngine_RectTransform_o *)method,
             (UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),(MethodInfo *)0x0);
  return extraout_RAX;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$Stretch
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Stretch (UnityEngine_RectTransform_o* rect, const MethodInfo* method);
// 0x44ec530

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__Stretch
               (UnityEngine_RectTransform_o *rect,MethodInfo *method)

{
  UnityEngine_MonoBehaviour_o *__this;
  
  __this = (UnityEngine_MonoBehaviour_o *)rect;
  if (g_data_057a694c == '\0') {
    __this = (UnityEngine_MonoBehaviour_o *)&TypeInfo_Vector2;
    il2cpp_runtime_helper_023445d0();
    g_data_057a694c = '\x01';
  }
  if (rect != (UnityEngine_RectTransform_o *)0x0) {
    UnityEngine_RectTransform__set_anchorMin
              (rect,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    if (g_data_057a9c86 == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a9c86 = '\x01';
    }
    UnityEngine_RectTransform__set_anchorMax
              (rect,(UnityEngine_Vector2_o)*(UnityEngine_Vector2_Fields *)(*(long *)(TypeInfo_Vector2 + 0xb8) + 8)
               ,(MethodInfo *)0x0);
    if (g_data_057a694c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMin
              (rect,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    if (g_data_057a694c == '\0') {
      il2cpp_runtime_helper_023445d0(&TypeInfo_Vector2);
      g_data_057a694c = '\x01';
    }
    UnityEngine_RectTransform__set_offsetMax
              (rect,(UnityEngine_Vector2_o)**(UnityEngine_Vector2_Fields **)(TypeInfo_Vector2 + 0xb8),
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  UnityEngine_MonoBehaviour___ctor(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost___ctor (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* __this, const MethodInfo* method);
// 0x44ec630

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost___ctor
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialogHost$$<BuildIfNeeded>b__15_0
// il2cpp: Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o* Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost___BuildIfNeeded_b__15_0 (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o* __this, System_String_o* id, const MethodInfo* method);
// 0x44ec640

Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *
Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost___BuildIfNeeded_b__15_0
          (Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *__this,System_String_o *id,MethodInfo *method
          )

{
  ushort uVar1;
  ushort uVar2;
  System_Collections_Generic_List_AottgDialogEntry__c *pSVar3;
  Il2CppRuntimeInterfaceOffsetPair *pIVar4;
  Gisketch_Aottg2UI_Code_AottgActionRegistry_o *__this_00;
  Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *pGVar5;
  code *pcVar6;
  bool_conflict bVar7;
  int iVar8;
  VirtualInvokeData *pVVar9;
  Il2CppObject *__this_01;
  Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *pGVar10;
  MethodInfo *method_00;
  System_Collections_Generic_List_AottgDialogEntry__o *pSVar11;
  long lVar12;
  uint uVar13;
  
  __this_00 = (__this->fields)._codeActions;
  pGVar5 = (__this->fields)._catalog;
  if (g_data_057a9d56 == '\0') {
    il2cpp_runtime_helper_023445d0(&MethodInfo_AottgDialog_Instance_AottgDialog,id,__this_00,0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyCollection_AottgDialogEntry);
    il2cpp_runtime_helper_023445d0(&TypeInfo_IReadOnlyList_AottgDialogEntry);
    g_data_057a9d56 = '\x01';
  }
  if ((pGVar5 == (Gisketch_Aottg2UI_Code_AottgCodeCatalog_o *)0x0) ||
     (bVar7 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0), (char)bVar7 != '\0')) {
    return (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0;
  }
  pSVar11 = (pGVar5->fields)._dialogs;
  if (pSVar11 != (System_Collections_Generic_List_AottgDialogEntry__o *)0x0) {
    uVar13 = 0;
    do {
      pSVar3 = pSVar11->klass;
      uVar1._0_1_ = (pSVar3->_2).rank;
      uVar1._1_1_ = (pSVar3->_2).minimumAlignment;
      if ((ulong)uVar1 != 0) {
        pIVar4 = (pSVar3->_1).interfaceOffsets;
        lVar12 = 0;
        do {
          if (*(long *)((long)&pIVar4->interfaceType + lVar12) == TypeInfo_IReadOnlyCollection_AottgDialogEntry) {
            pVVar9 = &(pSVar3->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar12);
            goto label_03b5de63;
          }
          lVar12 = lVar12 + 0x10;
        } while ((ulong)uVar1 << 4 != lVar12);
      }
      pVVar9 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar11,TypeInfo_IReadOnlyCollection_AottgDialogEntry,0);
label_03b5de63:
      iVar8 = (*pVVar9->methodPtr)(pSVar11,pVVar9->method);
      if (iVar8 <= (int)uVar13) {
        return (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)0x0;
      }
      pSVar11 = (pGVar5->fields)._dialogs;
      if (pSVar11 == (System_Collections_Generic_List_AottgDialogEntry__o *)0x0) break;
      pSVar3 = pSVar11->klass;
      uVar2._0_1_ = (pSVar3->_2).rank;
      uVar2._1_1_ = (pSVar3->_2).minimumAlignment;
      if ((ulong)uVar2 != 0) {
        pIVar4 = (pSVar3->_1).interfaceOffsets;
        lVar12 = 0;
        do {
          if (*(long *)((long)&pIVar4->interfaceType + lVar12) == TypeInfo_IReadOnlyList_AottgDialogEntry) {
            pVVar9 = &(pSVar3->vtable)._0_Equals + *(int *)((long)&pIVar4->offset + lVar12);
            goto label_03b5dee3;
          }
          lVar12 = lVar12 + 0x10;
        } while ((ulong)uVar2 << 4 != lVar12);
      }
      pVVar9 = (VirtualInvokeData *)il2cpp_runtime_helper_02300d20(pSVar11,TypeInfo_IReadOnlyList_AottgDialogEntry,0);
label_03b5dee3:
      lVar12 = (*pVVar9->methodPtr)(pSVar11,(ulong)uVar13,pVVar9->method);
      if (lVar12 == 0) break;
      bVar7 = System_String__Equals_3af50f0(*(System_String_o **)(lVar12 + 0x10),id,5,(MethodInfo *)0x0);
      if ((char)bVar7 != '\0') {
        if (__this_00 != (Gisketch_Aottg2UI_Code_AottgActionRegistry_o *)0x0) {
          Gisketch_Aottg2UI_Code_AottgActionRegistry__ClearOwner(__this_00,id,method_00);
        }
        __this_01 = Gisketch_Aottg2UI_Code_AottgCodeManifestBuilder__Instance_object_
                              (*(System_Type_o **)(lVar12 + 0x18),MethodInfo_AottgDialog_Instance_AottgDialog);
        if (__this_01 != (Il2CppObject *)0x0) {
          pGVar10 = Gisketch_Aottg2UI_Code_AottgDialog__BuildDefinition
                              ((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this_01,
                               *(System_String_o **)(lVar12 + 0x10),
                               *(Gisketch_Aottg2UI_Code_AottgDialogAttribute_o **)(lVar12 + 0x20),__this_00,
                               (MethodInfo *)0x0);
          return pGVar10;
        }
        break;
      }
      uVar13 = uVar13 + 1;
      pSVar11 = (pGVar5->fields)._dialogs;
    } while (pSVar11 != (System_Collections_Generic_List_AottgDialogEntry__o *)0x0);
  }
  il2cpp_runtime_helper_022b2c90();
  pcVar6 = (code *)swi(3);
  pGVar10 = (Gisketch_Aottg2UI_Data_GisketchOverlayDefinition_o *)(*pcVar6)();
  return pGVar10;
}


