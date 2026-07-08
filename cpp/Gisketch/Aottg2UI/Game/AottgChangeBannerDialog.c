// Type: Gisketch.Aottg2UI.Game.AottgChangeBannerDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgChangeBannerDialog.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgChangeBannerDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangeBannerDialog__get_Title (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o* __this, const MethodInfo* method);
// 0x41efa10

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangeBannerDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o *__this,MethodInfo *method)

{
  if (DAT_05704f48 == '\0') {
    il2cpp_init_method_metadata(&"Change Banner");
    DAT_05704f48 = '\x01';
  }
  return "Change Banner";
}


// Gisketch.Aottg2UI.Game.AottgChangeBannerDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangeBannerDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o* __this, const MethodInfo* method);
// 0x41efa40

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangeBannerDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o *__this,MethodInfo *method)

{
  if (DAT_05704f49 == '\0') {
    il2cpp_init_method_metadata(&"material-icons/edit");
    DAT_05704f49 = '\x01';
  }
  return "material-icons/edit";
}


// Gisketch.Aottg2UI.Game.AottgChangeBannerDialog$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangeBannerDialog__get_RootStyle (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o* __this, const MethodInfo* method);
// 0x41efa70

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangeBannerDialog__get_RootStyle
          (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o *__this,MethodInfo *method)

{
  if (DAT_05704f4a == '\0') {
    il2cpp_init_method_metadata(&"clear");
    DAT_05704f4a = '\x01';
  }
  return "clear";
}


// Gisketch.Aottg2UI.Game.AottgChangeBannerDialog$$get_BodyStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangeBannerDialog__get_BodyStyle (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o* __this, const MethodInfo* method);
// 0x41efaa0

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangeBannerDialog__get_BodyStyle
          (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o *__this,MethodInfo *method)

{
  if (DAT_05704f4b == '\0') {
    il2cpp_init_method_metadata(&"clear");
    DAT_05704f4b = '\x01';
  }
  return "clear";
}


// Gisketch.Aottg2UI.Game.AottgChangeBannerDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgChangeBannerDialog__get_BodyScrollable (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o* __this, const MethodInfo* method);
// 0x41efad0

bool_conflict
Gisketch_Aottg2UI_Game_AottgChangeBannerDialog__get_BodyScrollable
          (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o *__this,MethodInfo *method)

{
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgChangeBannerDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgChangeBannerDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o* __this, const MethodInfo* method);
// 0x41efae0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgChangeBannerDialog__get_RootLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (DAT_05704f56 == '\0') {
    il2cpp_init_method_metadata(&"Column");
    il2cpp_init_method_metadata();
    DAT_05704f56 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(1134.0,(MethodInfo *)0x0);
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


// Gisketch.Aottg2UI.Game.AottgChangeBannerDialog$$get_BodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgChangeBannerDialog__get_BodyLayout (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o* __this, const MethodInfo* method);
// 0x41efaf0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgChangeBannerDialog__get_BodyLayout
          (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (DAT_05704f57 == '\0') {
    il2cpp_init_method_metadata(&"Row");
    il2cpp_init_method_metadata(&"FlexStart");
    DAT_05704f57 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"FlexStart",(System_String_o *)0x0,
                      (System_String_o *)0x0,24.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                      ,0.0,0.0,1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgChangeBannerDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangeBannerDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x41efbb0

void Gisketch_Aottg2UI_Game_AottgChangeBannerDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  long lVar1;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Code_AottgComponent_c *pGVar2;
  Gisketch_Aottg2UI_Code_AottgComponent_c *pGVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  void *pvVar6;
  Gisketch_Aottg2UI_Code_AottgComponent_c *pGVar7;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *items;
  System_Action_GisketchActionContext__GisketchGridPickerItem__o *select;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_o *__this_01;
  Gisketch_Aottg2UI_Code_AottgComponent_o *pGVar8;
  System_String_o *pSVar9;
  MethodInfo *method_00;
  undefined4 in_stack_ffffffffffffff78;
  undefined4 uVar10;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar11;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o GStack_50;
  
  if (DAT_05704f4c == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_GisketchActionContext__GisketchGridPicker);
    il2cpp_init_method_metadata(&TypeInfo_AottgChangeBannerDialog);
    il2cpp_init_method_metadata(&TypeInfo_AottgProfileDialogSelection);
    il2cpp_init_method_metadata(&TypeInfo_AottgProfilePickerPanel);
    il2cpp_init_method_metadata(&TypeInfo_AottgProfilePreviewPanel);
    il2cpp_init_method_metadata(&TypeInfo_GisketchGridPicker);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&MethodInfo_Void_SelectBanner);
    il2cpp_init_method_metadata(&"profile-banner-picker-dialog");
    il2cpp_init_method_metadata(&"avatars=");
    il2cpp_init_method_metadata(&"Dialog.ChangeBanner.BuildBody");
    il2cpp_init_method_metadata(&" banners=");
    il2cpp_init_method_metadata(&"banner-picker");
    il2cpp_init_method_metadata(&"profile.save.banner");
    il2cpp_init_method_metadata(&"Search banners");
    DAT_05704f4c = '\x01';
  }
  if (*(int *)(TypeInfo_AottgChangeBannerDialog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (**(long **)(TypeInfo_AottgChangeBannerDialog + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar4 = System_Int32__ToString((int32_t)&stack0xffffffffffffff7c,(MethodInfo *)0x0);
  lVar1 = *(long *)(*(long *)(TypeInfo_AottgChangeBannerDialog + 0xb8) + 8);
  if (lVar1 == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  uVar10 = *(undefined4 *)(lVar1 + 0x18);
  pSVar5 = System_Int32__ToString((int32_t)&stack0xffffffffffffff7c,(MethodInfo *)0x0);
  pSVar4 = System_String__Concat("avatars=",pSVar4," banners=",pSVar5,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            (&GStack_50,"Dialog.ChangeBanner.BuildBody",pSVar4,(MethodInfo *)0x0);
  pSVar4 = Gisketch_Aottg2UI_Game_AottgActiveProfile__AvatarKey((MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_AottgProfileDialogSelection + 0xb8) = pSVar4;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_AottgProfileDialogSelection + 0xb8),pSVar4);
  pSVar4 = Gisketch_Aottg2UI_Game_AottgActiveProfile__BannerKey((MethodInfo *)0x0);
  lVar1 = *(long *)(TypeInfo_AottgProfileDialogSelection + 0xb8);
  *(System_String_o **)(lVar1 + 8) = pSVar4;
  il2cpp_runtime_glue(lVar1 + 8,pSVar4);
  pvVar6 = (void *)(*(__this->klass->vtable)._4_get_Title.methodPtr)
                             (__this,(__this->klass->vtable)._4_get_Title.method);
  method_00 = (__this->klass->vtable)._5_get_TitleIcon.method;
  pGVar7 = (Gisketch_Aottg2UI_Code_AottgComponent_c *)
           (*(__this->klass->vtable)._5_get_TitleIcon.methodPtr)(__this);
  pSVar4 = GStack_50.fields._area;
  pSVar5 = GStack_50.fields._detail;
  if (*(int *)(TypeInfo_AottgChangeBannerDialog + 0xe4) == 0) {
    il2cpp_init_class();
    pSVar4 = GStack_50.fields._area;
    pSVar5 = GStack_50.fields._detail;
  }
  items = Gisketch_Aottg2UI_Game_ProfileDialogUi__GridItems
                    (*(Gisketch_Aottg2UI_Game_AottgProfilePreset_array **)
                      (*(long *)(TypeInfo_AottgChangeBannerDialog + 0xb8) + 8),method_00);
  select = (System_Action_GisketchActionContext__GisketchGridPickerItem__o *)
           il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext__GisketchGridPicker);
  System_Action<GisketchActionContext__GisketchGridPickerItem>___ctor();
  __this_01 = (Gisketch_Aottg2UI_Code_GisketchGridPicker_o *)il2cpp_runtime_glue(TypeInfo_GisketchGridPicker);
  Gisketch_Aottg2UI_Code_GisketchGridPicker___ctor
            (__this_01,"banner-picker",items,2,254.0,154.0,220.0,92.0,"Search banners",select,420.0,1,
             (MethodInfo *)0x0);
  pGVar8 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_glue(TypeInfo_AottgProfilePickerPanel);
  pGVar3 = "profile.save.banner";
  pGVar2 = "profile-banner-picker-dialog";
  Gisketch_Aottg2UI_Code_AottgComponent___ctor(pGVar8,(MethodInfo *)0x0);
  pGVar8[1].klass = pGVar2;
  il2cpp_runtime_glue(pGVar8 + 1,pGVar2);
  pGVar8[1].monitor = pvVar6;
  il2cpp_runtime_glue(&pGVar8[1].monitor,pvVar6);
  pGVar8[2].klass = pGVar7;
  il2cpp_runtime_glue(pGVar8 + 2,pGVar7);
  pGVar8[2].monitor = __this_01;
  il2cpp_runtime_glue(&pGVar8[2].monitor,__this_01);
  pGVar8[3].klass = pGVar3;
  il2cpp_runtime_glue(pGVar8 + 3,pGVar3);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component(body,pGVar8,(MethodInfo *)0x0);
    pGVar7 = (Gisketch_Aottg2UI_Code_AottgComponent_c *)
             Gisketch_Aottg2UI_Game_AottgActiveProfile__AvatarSprite((MethodInfo *)0x0);
    pSVar9 = Gisketch_Aottg2UI_Game_AottgActiveProfile__BannerSprite((MethodInfo *)0x0);
    pGVar8 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_glue(TypeInfo_AottgProfilePreviewPanel);
    pGVar11 = body;
    Gisketch_Aottg2UI_Code_AottgComponent___ctor(pGVar8,(MethodInfo *)0x0);
    pGVar8[1].klass = pGVar7;
    il2cpp_runtime_glue(pGVar8 + 1,pGVar7);
    pGVar8[1].monitor = pSVar9;
    il2cpp_runtime_glue(&pGVar8[1].monitor,pSVar9);
    Gisketch_Aottg2UI_Code_AottgUi__Component(body,pGVar8,(MethodInfo *)0x0);
    __this_00.fields._area._4_4_ = uVar10;
    __this_00.fields._area._0_4_ = in_stack_ffffffffffffff78;
    __this_00.fields._detail = (System_String_o *)pGVar11;
    __this_00.fields._startMs = (int64_t)pSVar4;
    __this_00.fields._24_8_ = pSVar5;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_00,(MethodInfo *)&stack0xffffffffffffff88);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.AottgChangeBannerDialog$$BuildHeader
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangeBannerDialog__BuildHeader (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* header, const MethodInfo* method);
// 0x41f00b0

void Gisketch_Aottg2UI_Game_AottgChangeBannerDialog__BuildHeader
               (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *header,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangeBannerDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangeBannerDialog___ctor (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o* __this, const MethodInfo* method);
// 0x41f00c0

void Gisketch_Aottg2UI_Game_AottgChangeBannerDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangeBannerDialog$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangeBannerDialog___cctor (const MethodInfo* method);
// 0x41f00d0

void Gisketch_Aottg2UI_Game_AottgChangeBannerDialog___cctor(MethodInfo *method)

{
  long lVar1;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar2;
  MethodInfo *method_00;
  
  if (DAT_05704f4d == '\0') {
    method = (MethodInfo *)&TypeInfo_AottgChangeBannerDialog;
    il2cpp_init_method_metadata();
    DAT_05704f4d = '\x01';
  }
  pGVar2 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Avatars(method);
  **(undefined8 **)(TypeInfo_AottgChangeBannerDialog + 0xb8) = pGVar2;
  method_00 = *(MethodInfo **)(TypeInfo_AottgChangeBannerDialog + 0xb8);
  il2cpp_runtime_glue(method_00,pGVar2);
  pGVar2 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Banners(method_00);
  lVar1 = *(long *)(TypeInfo_AottgChangeBannerDialog + 0xb8);
  *(Gisketch_Aottg2UI_Game_AottgProfilePreset_array **)(lVar1 + 8) = pGVar2;
  il2cpp_runtime_glue(lVar1 + 8,pGVar2);
  return;
}


