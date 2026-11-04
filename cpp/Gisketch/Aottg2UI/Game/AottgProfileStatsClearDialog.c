// Type: Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: NEW in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgProfileStatsClearDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__get_Title (Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_o* __this, const MethodInfo* method);
// 0x181e1f4a0

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344d0a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_GameStatRecord_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&"Clear All Records");
    il2cpp_codegen_initialize_runtime_metadata(&"Clear Record");
    Il2CppMethodInitialized_184344d0a = '\x01';
  }
  pSVar1 = "Clear All Records";
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog->static_fields->_record).fields.hasValue
      != false) {
    pSVar1 = "Clear Record";
  }
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog$$get_Variant
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__get_Variant (Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_o* __this, const MethodInfo* method);
// 0x180868060

int32_t
Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__get_Variant(Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_o* __this, MethodInfo* method)

{
  return 6;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__get_BodyScrollable (Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_o* __this, const MethodInfo* method);
// 0x180668280

bool
Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__get_BodyScrollable(Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_o* __this, MethodInfo* method)

{
  return false;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_o* __this, const MethodInfo* method);
// 0x181e1f3a0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344d0b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184344d0b = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(480.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog$$Open
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__Open (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, int32_t record, System_String_o* label, const MethodInfo* method);
// 0x181e1f210

void Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__Open
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,int32_t record,
               System_String_o *label,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  System_Nullable_GameStatRecord__Fields local_res8;
  
  if (Il2CppMethodInitialized_184344d0c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_GameStatRecord_ctor);
    Il2CppMethodInitialized_184344d0c = '\x01';
  }
  local_res8.hasValue = false;
  local_res8._1_3_ = 0;
  local_res8.value = 0;
  System_Data_SqlTypes_SqlInt32___ctor_ae2660
            ((System_Data_SqlTypes_SqlInt32_o *)&local_res8,record,
             MethodInfo_System_Nullable_GameStatRecord_ctor);
  (TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog->static_fields->_record).fields = local_res8;
  TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog->static_fields->_label = label;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog->static_fields->_label,label);
  __this = (context->fields).GameObject;
  if (Il2CppMethodInitialized_184344d10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-stats-clear-confirm");
    Il2CppMethodInitialized_184344d10 = '\x01';
  }
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pGVar1 = UnityEngine_GameObject__GetComponentInParent_object_
                       (__this,(MethodInfo_6F53B0 *)
                               MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    if ((pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (__this_00 = (pGVar1->fields)._Overlays_k__BackingField,
       __this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                (__this_00,"profile-stats-clear-confirm",true,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog$$OpenAll
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__OpenAll (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x181e1f130

void Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__OpenAll
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344d0d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog);
    Il2CppMethodInitialized_184344d0d = '\x01';
  }
  (TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog->static_fields->_record).fields =
       (System_Nullable_GameStatRecord__Fields)0x0;
  TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog->static_fields->_label = (System_String_o *)0x0
  ;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog->static_fields->_label,(void *)0x0)
  ;
  __this = (context->fields).GameObject;
  if (Il2CppMethodInitialized_184344d10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-stats-clear-confirm");
    Il2CppMethodInitialized_184344d10 = '\x01';
  }
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pGVar1 = UnityEngine_GameObject__GetComponentInParent_object_
                       (__this,(MethodInfo_6F53B0 *)
                               MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    if ((pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (__this_00 = (pGVar1->fields)._Overlays_k__BackingField,
       __this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                (__this_00,"profile-stats-clear-confirm",true,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x181e1ee40
// asm: 1 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e1eed3: mov rax, qword ptr [rip + 0x2251916]  ; "Clear all game stat records? Achievements and quests will not be changed. This cannot be undone."

void Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184344d0e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_GameStatRecord_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&"Clear all game stat records? Achievements and quests will not be changed. This cannot be undone.");
    il2cpp_codegen_initialize_runtime_metadata(&" record? This cannot be undone.");
    il2cpp_codegen_initialize_runtime_metadata(&"Clear the ");
    Il2CppMethodInitialized_184344d0e = '\x01';
  }
  pSVar1 = "Clear all game stat records? Achievements and quests will not be changed. This cannot be undone.";
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog->static_fields->_record).fields.hasValue
      != false) {
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog->static_fields->_label;
    if (pSVar1 == (System_String_o *)0x0) goto label_181e1ef01;
    pSVar1 = System_String__ToLowerInvariant(pSVar1,(MethodInfo *)0x0);
    pSVar1 = System_String__Concat_1969b70
                       ("Clear the ",pSVar1," record? This cannot be undone.",(MethodInfo *)0x0);
  }
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Callout(body,2,pSVar1,(System_String_o *)0x0,(MethodInfo *)0x0);
    return;
  }
label_181e1ef01:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x181e1ef10

void Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  DG_Tweening_Core_DOSetter_Color2__o *__this_00;
  
  if (Il2CppMethodInitialized_184344d0f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_Confirm);
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"Clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Cancel");
    Il2CppMethodInitialized_184344d0f = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
              (footer,"Common.Cancel","Cancel","overlay.close",(MethodInfo *)0x0);
    __this_00 = (DG_Tweening_Core_DOSetter_Color2__o *)
                il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
    System_Action_GisketchActionContext____ctor
              (__this_00,(Il2CppObject *)0x0,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_Confirm,
               (MethodInfo_1387DC0 *)0x0);
    Gisketch_Aottg2UI_Code_AottgDialogFooter__Danger_18c3470
              (footer,"Clear",(System_Action_GisketchActionContext__o *)__this_00,
               (MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog$$Show
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__Show (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x181e1f320

void Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__Show
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this_00;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344d10 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-stats-clear-confirm");
    Il2CppMethodInitialized_184344d10 = '\x01';
  }
  __this = (context->fields).GameObject;
  if (__this != (UnityEngine_GameObject_o *)0x0) {
    pGVar1 = UnityEngine_GameObject__GetComponentInParent_object_
                       (__this,(MethodInfo_6F53B0 *)
                               MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    if ((pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (__this_00 = (pGVar1->fields)._Overlays_k__BackingField,
       __this_00 != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                (__this_00,"profile-stats-clear-confirm",true,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog$$Confirm
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__Confirm (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x181e1eff0

void Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__Confirm
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  bool bVar1;
  uint32_t record;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this_00;
  
  if (Il2CppMethodInitialized_184344d11 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_GameStatRecord_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_GameStatRecord_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_184344d11 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)(context->fields).GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    __this = (context->fields).GameObject;
    if (__this == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this_00 = UnityEngine_GameObject__GetComponentInParent_object_
                          (__this,(MethodInfo_6F53B0 *)
                                  MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  else {
    __this_00 = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  }
  if (((System_Nullable_uint__Fields *)
      &TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog->static_fields->_record)->hasValue ==
      false) {
    if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
    }
    GameProgress_GameProgressManager__ClearAllGameStats((MethodInfo *)0x0);
  }
  else {
    record = System_Nullable_uint___get_Value
                       ((System_Nullable_uint__o *)
                        TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog->static_fields,
                        (MethodInfo_AE29B0 *)MethodInfo_System_Nullable_GameStatRecord_get_Value);
    if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
    }
    GameProgress_GameProgressManager__ClearGameStat(record,(MethodInfo *)0x0);
  }
  if (__this_00 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen(__this_00,(MethodInfo *)0x0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog___ctor (Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_o* __this, const MethodInfo* method);
// 0x1805386d0

void
Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog___ctor(Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}


