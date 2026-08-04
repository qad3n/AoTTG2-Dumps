// Type: Gisketch.Aottg2UI.Game.AottgExternalLinks
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgExternalLinks.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgExternalLinks$$TryShow
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgExternalLinks__TryShow (System_String_o* url, const MethodInfo* method);
// 0x44ec650

bool_conflict Gisketch_Aottg2UI_Game_AottgExternalLinks__TryShow(System_String_o *url,MethodInfo *method)

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


// Gisketch.Aottg2UI.Game.AottgExternalLinks$$Show
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinks__Show (System_String_o* url, const MethodInfo* method);
// 0x44ec660

void Gisketch_Aottg2UI_Game_AottgExternalLinks__Show(System_String_o *url,MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057aec45 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&"No AoTTG external link dialog host is available.");
    g_data_057aec45 = '\x01';
  }
  bVar1 = Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__ShowUrl(url,method);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__IsNullOrWhiteSpace(url,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Debug__LogWarning("No AoTTG external link dialog host is available.",(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinks$$Show
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinks__Show (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* url, const MethodInfo* method);
// 0x44ec6e0

void Gisketch_Aottg2UI_Game_AottgExternalLinks__Show_43ec6e0
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *url,
               MethodInfo *method)

{
  bool_conflict bVar1;
  
  if (g_data_057aec45 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Debug);
    il2cpp_runtime_helper_023445d0(&"No AoTTG external link dialog host is available.");
    g_data_057aec45 = '\x01';
  }
  bVar1 = Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost__ShowUrl(url,method);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__IsNullOrWhiteSpace(url,(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      if (*(int *)(TypeInfo_Debug + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      UnityEngine_Debug__LogWarning("No AoTTG external link dialog host is available.",(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


