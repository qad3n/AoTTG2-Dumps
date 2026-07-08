// Type: Gisketch.Aottg2UI.Game.AottgExternalLinkDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgExternalLinkDialog.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c___cctor (const MethodInfo* method);
// 0x4173c80

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_<>c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (DAT_05704aed == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_c);
    DAT_05704aed = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_glue(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c___ctor (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c_o* __this, const MethodInfo* method);
// 0x4173cf0

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_<>c___ctor
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog.<>c$$<BuildBody>b__11_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c___BuildBody_b__11_0 (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* url, const MethodInfo* method);
// 0x4173d00

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_<>c__<BuildBody>b__11_0
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *url,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent_c *pGVar1;
  void *pvVar2;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_00;
  
  if (DAT_05704aee == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgMarqueeText);
    il2cpp_init_method_metadata(&"external-link-url-text");
    il2cpp_init_method_metadata(&"externalLink.url");
    DAT_05704aee = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_glue(TypeInfo_AottgMarqueeText);
  pvVar2 = "externalLink.url";
  pGVar1 = "external-link-url-text";
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_00,(MethodInfo *)0x0);
  __this_00[1].klass = pGVar1;
  il2cpp_runtime_glue(__this_00 + 1,pGVar1);
  __this_00[1].monitor = pvVar2;
  il2cpp_runtime_glue(&__this_00[1].monitor,pvVar2);
  if (url != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component(url,__this_00,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_Title (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o* __this, const MethodInfo* method);
// 0x4173850

System_String_o *
Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o *__this,MethodInfo *method)

{
  if (DAT_05704ae8 == '\0') {
    il2cpp_init_method_metadata(&"Open External Link");
    DAT_05704ae8 = '\x01';
  }
  return "Open External Link";
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o* __this, const MethodInfo* method);
// 0x4173880

System_String_o *
Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o *__this,MethodInfo *method)

{
  if (DAT_05704ae9 == '\0') {
    il2cpp_init_method_metadata(&"warning");
    DAT_05704ae9 = '\x01';
  }
  return "warning";
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$get_Variant
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_Variant (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o* __this, const MethodInfo* method);
// 0x41738b0

int32_t Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_Variant
                  (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o *__this,MethodInfo *method)

{
  return 1;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_BodyScrollable (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o* __this, const MethodInfo* method);
// 0x41738c0

bool_conflict
Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_BodyScrollable
          (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o *__this,MethodInfo *method)

{
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o* __this, const MethodInfo* method);
// 0x41738d0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (DAT_05704aea == '\0') {
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata();
    DAT_05704aea = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(540.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,width,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x41739a0

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  long lVar1;
  System_String_o *style;
  System_Action_AottgUi__o *build;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  
  if (DAT_05704aeb == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_AottgUi);
    il2cpp_init_method_metadata(&MethodInfo_Void__BuildBody_b__11_0);
    il2cpp_init_method_metadata(&TypeInfo_c);
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata(&"external-link-url");
    il2cpp_init_method_metadata(&"external-link-warning-text");
    il2cpp_init_method_metadata(&"inputField");
    il2cpp_init_method_metadata(&"text");
    il2cpp_init_method_metadata(&"This will open a link outside AoTTG2.");
    DAT_05704aeb = '\x01';
  }
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (body,"This will open a link outside AoTTG2.","text","external-link-warning-text",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_init_class();
    }
    style = "inputField";
    build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    if (build == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_init_class();
      }
      build = (System_Action_AottgUi__o *)il2cpp_runtime_glue(TypeInfo_Action_AottgUi);
      System_Action<object>___ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 8) = build;
      il2cpp_runtime_glue(lVar1 + 8,build);
    }
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(42.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                        0.0,0.0,0.0,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (body,style,build,"external-link-url",layout,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x4173be0

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  if (DAT_05704aec == '\0') {
    il2cpp_init_method_metadata(&"overlay.close");
    il2cpp_init_method_metadata(&"externalLink.confirm");
    il2cpp_init_method_metadata(&"Cancel");
    il2cpp_init_method_metadata(&"Open Link");
    DAT_05704aec = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet
              (footer,"Cancel","overlay.close",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgDialogFooter__Primary
              (footer,"Open Link","externalLink.confirm",(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___ctor (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o* __this, const MethodInfo* method);
// 0x4173c70

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


