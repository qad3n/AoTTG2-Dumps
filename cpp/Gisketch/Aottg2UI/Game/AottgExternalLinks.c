// Type: Gisketch.Aottg2UI.Game.AottgExternalLinks
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgExternalLinks.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgExternalLinks$$TryShow
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgExternalLinks__TryShow (System_String_o* url, const MethodInfo* method);
// 0x1823adaf0

bool Gisketch_Aottg2UI_Game_AottgExternalLinks__TryShow(System_String_o *url,MethodInfo *method)

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


// Gisketch.Aottg2UI.Game.AottgExternalLinks$$Show
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinks__Show (System_String_o* url, const MethodInfo* method);
// 0x1823ad920

void Gisketch_Aottg2UI_Game_AottgExternalLinks__Show(System_String_o *url,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *pGVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  bool bVar2;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184347d2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&"No AoTTG external link dialog host is available.");
    Il2CppMethodInitialized_184347d2b = '\x01';
  }
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
      if ((pGVar1->fields)._state == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        return;
      }
      if ((pGVar1->fields)._overlays == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
        return;
      }
      if (url != (System_String_o *)0x0) {
        __this = (pGVar1->fields)._state;
        value = System_String__Trim(url,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_State_GisketchUIState__Set(__this,"externalLink.url",value,(MethodInfo *)0x0);
        __this_00 = (pGVar1->fields)._overlays;
        if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                    (__this_00,"external-link-confirm",true,(MethodInfo *)0x0);
          return;
        }
      }
    }
    ThrowNullReferenceException();
  }
  bVar2 = System_String__IsNullOrWhiteSpace(url,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
  }
  UnityEngine_Debug__LogWarning((Il2CppObject *)"No AoTTG external link dialog host is available.",(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinks$$Show
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinks__Show (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* url, const MethodInfo* method);
// 0x1823ad750

void Gisketch_Aottg2UI_Game_AottgExternalLinks__Show_23ad750
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,System_String_o *url,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgExternalLinkDialogHost_o *pGVar1;
  Gisketch_Aottg2UI_State_GisketchUIState_o *__this;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  bool bVar2;
  System_String_o *value;
  
  if (Il2CppMethodInitialized_184347d2b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Debug);
    il2cpp_codegen_initialize_runtime_metadata(&"No AoTTG external link dialog host is available.");
    Il2CppMethodInitialized_184347d2b = '\x01';
  }
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
      if ((pGVar1->fields)._state == (Gisketch_Aottg2UI_State_GisketchUIState_o *)0x0) {
        return;
      }
      if ((pGVar1->fields)._overlays == (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
        return;
      }
      if (url != (System_String_o *)0x0) {
        __this = (pGVar1->fields)._state;
        value = System_String__Trim(url,(MethodInfo *)0x0);
        Gisketch_Aottg2UI_State_GisketchUIState__Set(__this,"externalLink.url",value,(MethodInfo *)0x0);
        __this_00 = (pGVar1->fields)._overlays;
        if (__this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0) {
          Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                    (__this_00,"external-link-confirm",true,(MethodInfo *)0x0);
          return;
        }
      }
    }
    ThrowNullReferenceException();
  }
  bVar2 = System_String__IsNullOrWhiteSpace(url,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  if ((TypeInfo_UnityEngine_Debug->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Debug);
  }
  UnityEngine_Debug__LogWarning((Il2CppObject *)"No AoTTG external link dialog host is available.",(MethodInfo *)0x0);
  return;
}


