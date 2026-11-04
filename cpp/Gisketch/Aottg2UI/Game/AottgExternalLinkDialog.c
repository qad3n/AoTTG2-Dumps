// Type: Gisketch.Aottg2UI.Game.AottgExternalLinkDialog
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgExternalLinkDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c___cctor (const MethodInfo* method);
// 0x1823bdd10

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c___cctor(MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c_o *__this;
  
  if (Il2CppMethodInitialized_184347d1d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_c);
    Il2CppMethodInitialized_184347d1d = '\x01';
  }
  __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_c)
  ;
  System_Configuration_ConfigurationCollectionAttribute___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_c->static_fields->__9 = __this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_c->static_fields->__9,__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c___ctor (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c_o* __this, const MethodInfo* method);
// 0x18054c890

void
Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c___ctor(Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c_o* __this, MethodInfo* method)

{
  System_Object___ctor
            ((UnityEngine_LowLevelPhysics2D_PhysicsMask_SetBitIterator_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog.<>c$$<BuildBody>b__11_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c___BuildBody_b__11_0 (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* url, const MethodInfo* method);
// 0x1823b9780

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c___BuildBody_b__11_0
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *url,MethodInfo *method)

{
  System_String_o *value;
  System_String_o *value_00;
  Gisketch_Aottg2UI_Game_AottgMarqueeText_o *component;
  System_String_o *value_01;
  
  if (Il2CppMethodInitialized_184347d1e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgMarqueeText);
    il2cpp_codegen_initialize_runtime_metadata(&"external-link-url-text");
    il2cpp_codegen_initialize_runtime_metadata(&"externalLink.url");
    Il2CppMethodInitialized_184347d1e = '\x01';
  }
  component = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgMarqueeText);
  value_00 = "externalLink.url";
  value = "external-link-url-text";
  value_01 = (System_String_o *)**(longlong **)(g_data_184354e50 + 0xb8);
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)component,(MethodInfo *)0x0);
  (component->fields)._id = value;
  Il2CppCodeGenWriteBarrier(&(component->fields)._id,value);
  (component->fields)._stateKey = value_00;
  Il2CppCodeGenWriteBarrier(&(component->fields)._stateKey,value_00);
  if (value_01 == (System_String_o *)0x0) {
    value_01 = (System_String_o *)**(undefined8 **)(g_data_184354e50 + 0xb8);
  }
  if (component != (Gisketch_Aottg2UI_Game_AottgMarqueeText_o *)0x0) {
    (component->fields)._fallback = value_01;
    Il2CppCodeGenWriteBarrier(&(component->fields)._fallback,value_01);
    if (url != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      Gisketch_Aottg2UI_Code_AottgUi__Component
                (url,(Gisketch_Aottg2UI_Code_AottgComponent_o *)component,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_Title (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o* __this, const MethodInfo* method);
// 0x1823ad6e0

System_String_o *
Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o *__this,MethodInfo *method)

{
  System_String_o *pSVar1;
  
  if (Il2CppMethodInitialized_184347d18 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    il2cpp_codegen_initialize_runtime_metadata(&"Open External Link");
    il2cpp_codegen_initialize_runtime_metadata(&"ExternalLinks.OpenExternalLink");
    Il2CppMethodInitialized_184347d18 = '\x01';
  }
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
  }
  pSVar1 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text
                     ("ExternalLinks.OpenExternalLink","Open External Link",(MethodInfo *)0x0);
  return pSVar1;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o* __this, const MethodInfo* method);
// 0x1823ad6b0

System_String_o *
Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o *__this,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347d19 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"warning");
    Il2CppMethodInitialized_184347d19 = '\x01';
  }
  return "warning";
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$get_Variant
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_Variant (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o* __this, const MethodInfo* method);
// 0x180564040

int32_t
Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_Variant(Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o* __this, MethodInfo* method)

{
  return 1;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_BodyScrollable (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o* __this, const MethodInfo* method);
// 0x180668280

bool
Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_BodyScrollable(Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o* __this, MethodInfo* method)

{
  return false;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o* __this, const MethodInfo* method);
// 0x1823ad5b0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184347d1a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184347d1a = '\x01';
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
// 0x1823ad240

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  Il2CppObject *object;
  System_String_o *style;
  UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *__this_00;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (Il2CppMethodInitialized_184347d1b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_c_BuildBody_b__11_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_c);
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"external-link-url");
    il2cpp_codegen_initialize_runtime_metadata(&"external-link-warning-text");
    il2cpp_codegen_initialize_runtime_metadata(&"inputField");
    il2cpp_codegen_initialize_runtime_metadata(&"text");
    il2cpp_codegen_initialize_runtime_metadata(&"This will open a link outside AoTTG2.");
    il2cpp_codegen_initialize_runtime_metadata(&"ExternalLinks.Warning");
    Il2CppMethodInitialized_184347d1b = '\x01';
  }
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__TextKey
              (body,"ExternalLinks.Warning","This will open a link outside AoTTG2.","text","external-link-warning-text",
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_c);
    }
    style = "inputField";
    __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_c->static_fields->__9__11_0;
    if (__this_00 == (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)0x0) {
      if ((TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_c->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_c);
      }
      object = (Il2CppObject *)TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_c->static_fields->__9;
      __this_00 = (UnityEngine_Playables_PlayableSystems_PlayableSystemDelegate_o *)
                  il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
      System_Action_object____ctor
                (__this_00,object,
                 (intptr_t)MethodInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_c_BuildBody_b__11_0,
                 (MethodInfo *)0x0);
      TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_c->static_fields->__9__11_0 =
           (System_Action_AottgUi__o *)__this_00;
      Il2CppCodeGenWriteBarrier
                (&TypeInfo_Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_c->static_fields->__9__11_0,
                 __this_00);
    }
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(42.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (body,style,(System_Action_AottgUi__o *)__this_00,"external-link-url",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x1823ad4f0

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  if (Il2CppMethodInitialized_184347d1c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"externalLink.confirm");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"ExternalLinks.OpenLink");
    il2cpp_codegen_initialize_runtime_metadata(&"Open Link");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Cancel");
    Il2CppMethodInitialized_184347d1c = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
              (footer,"Common.Cancel","Cancel","overlay.close",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey
              (footer,"ExternalLinks.OpenLink","Open Link","externalLink.confirm",(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___ctor (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o* __this, const MethodInfo* method);
// 0x1805386d0

void
Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___ctor(Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o* __this, MethodInfo* method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
  return;
}


