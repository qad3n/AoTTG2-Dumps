// Type: Gisketch.Aottg2UI.Game.AottgExternalLinkDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgExternalLinkDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c___cctor (const MethodInfo* method);
// 0x44eb520

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057aec37 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aec37 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c___ctor (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c_o* __this, const MethodInfo* method);
// 0x44eb590

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c___ctor
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog.<>c$$<BuildBody>b__11_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c___BuildBody_b__11_0 (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* url, const MethodInfo* method);
// 0x44eb5a0

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c___BuildBody_b__11_0
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___c_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *url,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgComponent_c *pGVar1;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_00;
  void *extraout_RDX;
  Gisketch_Aottg2UI_Code_AottgComponent_c *pGVar2;
  Gisketch_Aottg2UI_Code_AottgComponent_o *__this_01;
  
  if (g_data_057aec38 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgMarqueeText);
    il2cpp_runtime_helper_023445d0(&"external-link-url-text");
    il2cpp_runtime_helper_023445d0(&"externalLink.url");
    g_data_057aec38 = '\x01';
  }
  __this_00 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgMarqueeText);
  pGVar2 = "externalLink.url";
  pGVar1 = "external-link-url-text";
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_00,(MethodInfo *)0x0);
  __this_00[1].klass = pGVar1;
  il2cpp_runtime_helper_022b4080(__this_00 + 1,pGVar1);
  __this_01 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)&__this_00[1].monitor;
  __this_00[1].monitor = pGVar2;
  il2cpp_runtime_helper_022b4080();
  if (url != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component(url,__this_00,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(__this_01,(MethodInfo *)0x0);
  __this_01[1].klass = pGVar2;
  il2cpp_runtime_helper_022b4080(__this_01 + 1,pGVar2);
  __this_01[1].monitor = extraout_RDX;
  il2cpp_runtime_helper_022b4080(&__this_01[1].monitor,extraout_RDX);
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_Title (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o* __this, const MethodInfo* method);
// 0x44eb0f0

System_String_o *
Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o *__this,MethodInfo *method)

{
  if (g_data_057aec32 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Open External Link");
    g_data_057aec32 = '\x01';
  }
  return "Open External Link";
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o* __this, const MethodInfo* method);
// 0x44eb120

System_String_o *
Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o *__this,MethodInfo *method)

{
  if (g_data_057aec33 == '\0') {
    il2cpp_runtime_helper_023445d0(&"warning");
    g_data_057aec33 = '\x01';
  }
  return "warning";
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$get_Variant
// il2cpp: int32_t Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_Variant (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o* __this, const MethodInfo* method);
// 0x44eb150

int32_t Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_Variant
                  (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o *__this,MethodInfo *method)

{
  return 1;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_BodyScrollable (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o* __this, const MethodInfo* method);
// 0x44eb160

bool_conflict
Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_BodyScrollable
          (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o *__this,MethodInfo *method)

{
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o* __this, const MethodInfo* method);
// 0x44eb170

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057aec34 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0();
    g_data_057aec34 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(540.0,(MethodInfo *)0x0);
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,"Stretch",(System_String_o *)0x0,
                      (System_String_o *)0x0,0.0,width,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x44eb240

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
  Gisketch_Aottg2UI_Code_AottgUi_o *__this_00;
  
  __this_00 = body;
  if (g_data_057aec35 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_AottgUi);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildBody_b__11_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"external-link-url");
    il2cpp_runtime_helper_023445d0(&"external-link-warning-text");
    il2cpp_runtime_helper_023445d0(&"inputField");
    il2cpp_runtime_helper_023445d0(&"text");
    __this = (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o *)&"This will open a link outside AoTTG2.";
    il2cpp_runtime_helper_023445d0();
    g_data_057aec35 = '\x01';
  }
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Text
              (body,"This will open a link outside AoTTG2.","text","external-link-warning-text",(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    style = "inputField";
    build = *(System_Action_AottgUi__o **)(*(long *)(TypeInfo_c + 0xb8) + 8);
    if (build == (System_Action_AottgUi__o *)0x0) {
      if (*(int *)(TypeInfo_c + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      build = (System_Action_AottgUi__o *)il2cpp_runtime_helper_023052d0(TypeInfo_Action_AottgUi);
      System_Action_object____ctor();
      lVar1 = *(long *)(TypeInfo_c + 0xb8);
      *(System_Action_AottgUi__o **)(lVar1 + 8) = build;
      il2cpp_runtime_helper_022b4080(lVar1 + 8,build);
    }
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    height = Gisketch_Aottg2UI_Code_AottgUi__Points(42.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,(System_String_o *)0x0,(System_String_o *)0x0,
                        (System_String_o *)0x0,0.0,width,height,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0
                        ,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,0.0,(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgUi__Panel
              (body,style,build,"external-link-url",layout,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aec36 == '\0') {
    il2cpp_runtime_helper_023445d0(&"overlay.close");
    il2cpp_runtime_helper_023445d0(&"externalLink.confirm");
    il2cpp_runtime_helper_023445d0(&"Cancel");
    __this = (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o *)&"Open Link";
    il2cpp_runtime_helper_023445d0();
    g_data_057aec36 = '\x01';
  }
  if (__this_00 != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet
              ((Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)__this_00,"Cancel","overlay.close",
               (MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgDialogFooter__Primary
              ((Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)__this_00,"Open Link","externalLink.confirm",
               (MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$BuildFooter
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__BuildFooter (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o* __this, Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, const MethodInfo* method);
// 0x44eb480

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog__BuildFooter
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,MethodInfo *method)

{
  if (g_data_057aec36 == '\0') {
    il2cpp_runtime_helper_023445d0(&"overlay.close");
    il2cpp_runtime_helper_023445d0(&"externalLink.confirm");
    il2cpp_runtime_helper_023445d0(&"Cancel");
    __this = (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o *)&"Open Link";
    il2cpp_runtime_helper_023445d0();
    g_data_057aec36 = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet(footer,"Cancel","overlay.close",(MethodInfo *)0x0);
    Gisketch_Aottg2UI_Code_AottgDialogFooter__Primary(footer,"Open Link","externalLink.confirm",(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgExternalLinkDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___ctor (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o* __this, const MethodInfo* method);
// 0x44eb510

void Gisketch_Aottg2UI_Game_AottgExternalLinkDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgExternalLinkDialog_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


