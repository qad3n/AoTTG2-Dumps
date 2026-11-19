// Type: Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgProfileStatsClearDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__get_Title (Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_o* __this, const MethodInfo* method);
// 0x5909910
// asm: 4 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x59099ce: lea rax, [rip + 0x19cdeeb]  ; "ClearAll"
// asm:   0x59099d5: mov rbx, qword ptr [rax]
// asm:   0x59099d8: cmp byte ptr [rip + 0x1c3bca5], 0
// asm:   0x59099e1: jmp 0x5909999

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_0754567e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_GameStatRecord_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&"ClearRecord");
    il2cpp_codegen_initialize_runtime_metadata(&"ClearAll");
    Il2CppMethodInitialized_0754567e = '\x01';
  }
  pSVar1 = "ClearAll";
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog->static_fields->_record).fields.hasValue
      != false) {
    pSVar1 = "ClearRecord";
  }
  if (Il2CppMethodInitialized_07545684 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.");
    Il2CppMethodInitialized_07545684 = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320("MainMenu.Profile.Stats.",pSVar1,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,(MethodInfo *)0x0);
    return pSVar1;
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog$$get_Variant
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__get_Variant (Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_o* __this, const MethodInfo* method);
// 0x5909a80

int32_t Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__get_Variant
                  (Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_o *__this,MethodInfo *method)

{
  return 6;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__get_BodyScrollable (Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_o* __this, const MethodInfo* method);
// 0x5909a90

bool Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__get_BodyScrollable
               (Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_o *__this,MethodInfo *method)

{
  return false;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_o* __this, const MethodInfo* method);
// 0x5909aa0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_0754567f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_0754567f = '\x01';
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
// 0x5909b60

void Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__Open
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,int32_t record,
               System_String_o *label,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_StaticFields *pGVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  System_Nullable_Int32Enum__Fields local_20;
  
  if (Il2CppMethodInitialized_07545680 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_GameStatRecord_ctor);
    Il2CppMethodInitialized_07545680 = '\x01';
  }
  local_20.hasValue = false;
  local_20._1_3_ = 0;
  local_20.value = 0;
  System_Nullable_Int32Enum____ctor
            ((System_Nullable_Int32Enum__o *)&local_20,record,
             (MethodInfo_3CD4F60 *)MethodInfo_System_Nullable_GameStatRecord_ctor);
  (TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog->static_fields->_record).fields =
       (System_Nullable_GameStatRecord__Fields)local_20;
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog->static_fields;
  pGVar1->_label = label;
  Il2CppCodeGenWriteBarrier(&pGVar1->_label);
  if (Il2CppMethodInitialized_07545685 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-stats-clear-confirm");
    Il2CppMethodInitialized_07545685 = '\x01';
  }
  if (context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) {
    pGVar2 = UnityEngine_GameObject__GetComponentInParent_object_
                       (context.fields.GameObject,
                        (MethodInfo_353BB40 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    if ((pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (__this = (pGVar2->fields)._Overlays_k__BackingField,
       __this != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                (__this,"profile-stats-clear-confirm",true,(MethodInfo *)0x0);
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog$$OpenAll
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__OpenAll (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5909cd0

void Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__OpenAll
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_StaticFields *pGVar1;
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar2;
  
  if (Il2CppMethodInitialized_07545681 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog);
    Il2CppMethodInitialized_07545681 = '\x01';
  }
  (TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog->static_fields->_record).fields =
       (System_Nullable_GameStatRecord__Fields)0x0;
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog->static_fields;
  pGVar1->_label = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&pGVar1->_label);
  if (Il2CppMethodInitialized_07545685 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-stats-clear-confirm");
    Il2CppMethodInitialized_07545685 = '\x01';
  }
  if (context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) {
    pGVar2 = UnityEngine_GameObject__GetComponentInParent_object_
                       (context.fields.GameObject,
                        (MethodInfo_353BB40 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    if ((pGVar2 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (__this = (pGVar2->fields)._Overlays_k__BackingField,
       __this != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                (__this,"profile-stats-clear-confirm",true,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x5909da0

void Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_07545682 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_GameStatRecord_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&"ClearAllConfirm");
    il2cpp_codegen_initialize_runtime_metadata(&"ClearRecordConfirm");
    Il2CppMethodInitialized_07545682 = '\x01';
  }
  pSVar2 = "ClearRecordConfirm";
  pSVar1 = "ClearAllConfirm";
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog->static_fields->_record).fields.hasValue
      == false) {
    if (Il2CppMethodInitialized_07545684 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.");
      Il2CppMethodInitialized_07545684 = '\x01';
    }
    pSVar1 = System_String__Concat_52f0320("MainMenu.Profile.Stats.",pSVar1,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,(MethodInfo *)0x0);
  }
  else {
    if (Il2CppMethodInitialized_07545684 == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.");
      Il2CppMethodInitialized_07545684 = '\x01';
    }
    pSVar1 = System_String__Concat_52f0320("MainMenu.Profile.Stats.",pSVar2,(MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog->static_fields->_label;
    if (pSVar1 == (System_String_o *)0x0) goto label_05909f32;
    pSVar1 = System_String__ToLowerInvariant(pSVar1,(MethodInfo *)0x0);
    pSVar1 = System_String__Format(pSVar2,(Il2CppObject *)pSVar1,(MethodInfo *)0x0);
  }
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Callout(body,2,pSVar1,(System_String_o *)0x0,(MethodInfo *)0x0);
    return;
  }
label_05909f32:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x5909f40

void Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  System_String_o *text;
  System_Action_GisketchActionContext__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *node;
  
  if (Il2CppMethodInitialized_07545683 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchActionContext);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_Confirm);
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Cancel");
    Il2CppMethodInitialized_07545683 = '\x01';
  }
  if (footer == (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
            (footer,"Common.Cancel","overlay.close",(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  text = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("Common.Clear",(MethodInfo *)0x0);
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_GisketchActionContext);
  System_Action_GisketchActionContext____ctor
            (__this_00,(Il2CppObject *)0x0,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_Confirm,
             (MethodInfo_4A803E0 *)0x0);
  node = Gisketch_Aottg2UI_Code_AottgDialogFooter__Danger_5265d40(footer,text,__this_00,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Key(node,"Common.Clear",(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog$$Text
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__Text (System_String_o* item, const MethodInfo* method);
// 0x5909a00

System_String_o *
Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__Text(System_String_o *item,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07545684 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.Stats.");
    Il2CppMethodInitialized_07545684 = '\x01';
  }
  pSVar1 = System_String__Concat_52f0320("MainMenu.Profile.Stats.",item,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,(MethodInfo *)0x0);
    return pSVar1;
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar1,(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog$$Show
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__Show (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x5909c60

void Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__Show
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *__this;
  Gisketch_Aottg2UI_GisketchUIRoot_o *pGVar1;
  
  if (Il2CppMethodInitialized_07545685 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-stats-clear-confirm");
    Il2CppMethodInitialized_07545685 = '\x01';
  }
  if (context.fields.GameObject != (UnityEngine_GameObject_o *)0x0) {
    pGVar1 = UnityEngine_GameObject__GetComponentInParent_object_
                       (context.fields.GameObject,
                        (MethodInfo_353BB40 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    if ((pGVar1 != (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) &&
       (__this = (pGVar1->fields)._Overlays_k__BackingField,
       __this != (Gisketch_Aottg2UI_Overlays_GisketchOverlayManager_o *)0x0)) {
      Gisketch_Aottg2UI_Overlays_GisketchOverlayManager__ShowDialog
                (__this,"profile-stats-clear-confirm",true,(MethodInfo *)0x0);
      return;
    }
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog$$Confirm
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__Confirm (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, const MethodInfo* method);
// 0x590a050

void Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog__Confirm
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,MethodInfo *method)

{
  bool bVar1;
  int32_t record;
  Gisketch_Aottg2UI_GisketchUIRoot_o *__this;
  
  if (Il2CppMethodInitialized_07545686 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_GameProgress_GameProgressManager);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_GameStatRecord_get_HasValue);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_System_Nullable_GameStatRecord_get_Value);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07545686 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  __this = (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    __this = UnityEngine_GameObject__GetComponentInParent_object_
                       (context.fields.GameObject,
                        (MethodInfo_353BB40 *)
                        MethodInfo_UnityEngine_GameObject_GetComponentInParent_GisketchUIRoot);
  }
  if (((System_Nullable_Int32Enum__Fields *)
      &TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog->static_fields->_record)->hasValue ==
      false) {
    if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
    }
    GameProgress_GameProgressManager__ClearAllGameStats((MethodInfo *)0x0);
  }
  else {
    record = System_Nullable_Int32Enum___get_Value
                       ((System_Nullable_Int32Enum__o *)
                        TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog->static_fields,
                        (MethodInfo_3CD4F80 *)MethodInfo_System_Nullable_GameStatRecord_get_Value);
    if ((TypeInfo_GameProgress_GameProgressManager->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_GameProgress_GameProgressManager);
    }
    GameProgress_GameProgressManager__ClearGameStat(record,(MethodInfo *)0x0);
  }
  if (__this == (Gisketch_Aottg2UI_GisketchUIRoot_o *)0x0) {
    return;
  }
  Gisketch_Aottg2UI_GisketchUIRoot__RefreshActiveScreen_521cd90(__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgProfileStatsClearDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog___ctor (Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_o* __this, const MethodInfo* method);
// 0x590a190

void Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgProfileStatsClearDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


