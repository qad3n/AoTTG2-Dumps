// Type: Gisketch.Aottg2UI.Game.AottgExternalLinkDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/AottgExternalLinkDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c___cctor (const MethodInfo* method);
// 0x5e85540

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_0754884e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_c);
    Il2CppMethodInitialized_0754884e = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_c)
  ;
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c_o *)__this;
  Il2CppCodeGenWriteBarrier(&TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c___ctor (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c_o* __this, const MethodInfo* method);
// 0x5e855b0

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c___ctor
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog.<>c$$<BuildBody>b__11_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c___BuildBody_b__11_0 (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* url, const MethodInfo* method);
// 0x5e855c0

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c___BuildBody_b__11_0
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *url,MethodInfo *method)

{
  System_String_o *pSVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Game_AottgMarqueeText_o *__this_00;
  System_String_o *pSVar3;
  
  if (Il2CppMethodInitialized_0754884f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMarqueeText);
    il2cpp_codegen_initialize_runtime_metadata(&"external-link-url-text");
    il2cpp_codegen_initialize_runtime_metadata(&"externalLink.url");
    Il2CppMethodInitialized_0754884f = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMarqueeText);
  pSVar2 = "externalLink.url";
  pSVar1 = "external-link-url-text";
  pSVar3 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8);
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
  (__this_00->fields)._id = pSVar1;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._id);
  (__this_00->fields)._stateKey = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._stateKey);
  if (pSVar3 == (System_String_o *)0x0) {
    pSVar3 = (System_String_o *)**(long **)(g_data_07556758 + 0xb8);
  }
  (__this_00->fields)._fallback = pSVar3;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields)._fallback);
  if (url == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__Component
            (url,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_Title (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o* __this, const MethodInfo* method);
// 0x5e85100

System_String_o *
Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_07548849 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"ExternalLinks.OpenExternalLink");
    Il2CppMethodInitialized_07548849 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text("ExternalLinks.OpenExternalLink",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o* __this, const MethodInfo* method);
// 0x5e85160

System_String_o *
Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754884a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"warning");
    Il2CppMethodInitialized_0754884a = '\x01';
  }
  return "warning";
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$get_Variant
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_Variant (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o* __this, const MethodInfo* method);
// 0x5e85190

int32_t Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_Variant
                  (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o *__this,MethodInfo *method)

{
  return 1;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_BodyScrollable (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o* __this, const MethodInfo* method);
// 0x5e851a0

bool Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_BodyScrollable
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o *__this,MethodInfo *method)

{
  return false;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o* __this, const MethodInfo* method);
// 0x5e851b0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_0754884b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_0754884b = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(540.0,(MethodInfo *)0x0);
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


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x5e85270

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c_StaticFields *pGVar1;
  System_Action_AottgUi__o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_0754884c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_c_BuildBody_b__11_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"external-link-url");
    il2cpp_codegen_initialize_runtime_metadata(&"external-link-warning-text");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"ExternalLinks.Warning");
    Il2CppMethodInitialized_0754884c = '\x01';
  }
  if (body == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgUi__TextKey
            (body,"ExternalLinks.Warning","text","external-link-warning-text",(System_String_o *)0x0,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_c);
  }
  style = "inputField";
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_c->static_fields;
  __this_00 = pGVar1->__9__11_0;
  if (__this_00 == (System_Action_AottgUi__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_c);
      pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_c->static_fields;
    }
    object = (Il2CppObject *)pGVar1->__9;
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_00,object,
               (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_c_BuildBody_b__11_0,
               (MethodInfo_4A81BE0 *)0x0);
    pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_c->static_fields;
    pGVar1->__9__11_0 = __this_00;
    Il2CppCodeGenWriteBarrier(&pGVar1->__9__11_0);
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(42.0,(MethodInfo *)0x0);
  layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgUi__Panel
            (body,style,__this_00,"external-link-url",layout,
             (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x5e854a0

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  if (Il2CppMethodInitialized_0754884d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"externalLink.confirm");
    il2cpp_codegen_initialize_runtime_metadata(&"ExternalLinks.OpenLink");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Cancel");
    Il2CppMethodInitialized_0754884d = '\x01';
  }
  if (footer == (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    ThrowNullReferenceException();
  }
  Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
            (footer,"Common.Cancel","overlay.close",(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey
            (footer,"ExternalLinks.OpenLink","externalLink.confirm",(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___ctor (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o* __this, const MethodInfo* method);
// 0x5e85530

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


