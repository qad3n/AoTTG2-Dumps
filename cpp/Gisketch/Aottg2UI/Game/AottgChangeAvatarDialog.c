// Type: Gisketch.Aottg2UI.Game.AottgChangeAvatarDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgChangeAvatarDialog.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgChangeAvatarDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog__get_Title (Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog_o* __this, const MethodInfo* method);
// 0x41eda80

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog_o *__this,MethodInfo *method)

{
  if (DAT_05704f42 == '\0') {
    il2cpp_init_method_metadata(&"Change Avatar");
    DAT_05704f42 = '\x01';
  }
  return "Change Avatar";
}


// Gisketch.Aottg2UI.Game.AottgChangeAvatarDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog_o* __this, const MethodInfo* method);
// 0x41edab0

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog_o *__this,MethodInfo *method)

{
  if (DAT_05704f43 == '\0') {
    il2cpp_init_method_metadata(&"material-icons/edit");
    DAT_05704f43 = '\x01';
  }
  return "material-icons/edit";
}


// Gisketch.Aottg2UI.Game.AottgChangeAvatarDialog$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog__get_RootStyle (Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog_o* __this, const MethodInfo* method);
// 0x41edae0

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog__get_RootStyle
          (Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog_o *__this,MethodInfo *method)

{
  if (DAT_05704f44 == '\0') {
    il2cpp_init_method_metadata(&"clear");
    DAT_05704f44 = '\x01';
  }
  return "clear";
}


// Gisketch.Aottg2UI.Game.AottgChangeAvatarDialog$$get_BodyStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog__get_BodyStyle (Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog_o* __this, const MethodInfo* method);
// 0x41edb10

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog__get_BodyStyle
          (Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog_o *__this,MethodInfo *method)

{
  if (DAT_05704f45 == '\0') {
    il2cpp_init_method_metadata(&"clear");
    DAT_05704f45 = '\x01';
  }
  return "clear";
}


// Gisketch.Aottg2UI.Game.AottgChangeAvatarDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog__get_BodyScrollable (Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog_o* __this, const MethodInfo* method);
// 0x41edb40

bool_conflict
Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog__get_BodyScrollable
          (Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog_o *__this,MethodInfo *method)

{
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgChangeAvatarDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog_o* __this, const MethodInfo* method);
// 0x41edb50

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog__get_RootLayout(MethodInfo *method)

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


// Gisketch.Aottg2UI.Game.AottgChangeAvatarDialog$$get_BodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog__get_BodyLayout (Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog_o* __this, const MethodInfo* method);
// 0x41edc30

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog__get_BodyLayout
          (Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog_o *__this,MethodInfo *method)

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


// Gisketch.Aottg2UI.Game.AottgChangeAvatarDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x41eddb0

void Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog_o *__this,
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
  
  if (DAT_05704f46 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_Action_GisketchActionContext__GisketchGridPicker);
    il2cpp_init_method_metadata(&TypeInfo_AottgChangeAvatarDialog);
    il2cpp_init_method_metadata(&TypeInfo_AottgProfileDialogSelection);
    il2cpp_init_method_metadata(&TypeInfo_AottgProfilePickerPanel);
    il2cpp_init_method_metadata(&TypeInfo_AottgProfilePreviewPanel);
    il2cpp_init_method_metadata(&TypeInfo_GisketchGridPicker);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&MethodInfo_Void_SelectAvatar);
    il2cpp_init_method_metadata(&"profile-avatar-picker-dialog");
    il2cpp_init_method_metadata(&"avatars=");
    il2cpp_init_method_metadata(&"Dialog.ChangeAvatar.BuildBody");
    il2cpp_init_method_metadata(&"Search avatars");
    il2cpp_init_method_metadata(&"avatar-picker");
    il2cpp_init_method_metadata(&"profile.save.avatar");
    il2cpp_init_method_metadata(&" banners=");
    DAT_05704f46 = '\x01';
  }
  if (*(int *)(TypeInfo_AottgChangeAvatarDialog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  if (**(long **)(TypeInfo_AottgChangeAvatarDialog + 0xb8) == 0) {
                    /* WARNING: Subroutine does not return */
    il2cpp_raise_exception();
  }
  pSVar4 = System_Int32__ToString((int32_t)&stack0xffffffffffffff7c,(MethodInfo *)0x0);
  lVar1 = *(long *)(*(long *)(TypeInfo_AottgChangeAvatarDialog + 0xb8) + 8);
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
            (&GStack_50,"Dialog.ChangeAvatar.BuildBody",pSVar4,(MethodInfo *)0x0);
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
  if (*(int *)(TypeInfo_AottgChangeAvatarDialog + 0xe4) == 0) {
    il2cpp_init_class();
    pSVar4 = GStack_50.fields._area;
    pSVar5 = GStack_50.fields._detail;
  }
  items = Gisketch_Aottg2UI_Game_ProfileDialogUi__GridItems
                    ((Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)
                     **(undefined8 **)(TypeInfo_AottgChangeAvatarDialog + 0xb8),method_00);
  select = (System_Action_GisketchActionContext__GisketchGridPickerItem__o *)
           il2cpp_runtime_glue(TypeInfo_Action_GisketchActionContext__GisketchGridPicker);
  System_Action<GisketchActionContext__GisketchGridPickerItem>___ctor();
  __this_01 = (Gisketch_Aottg2UI_Code_GisketchGridPicker_o *)il2cpp_runtime_glue(TypeInfo_GisketchGridPicker);
  Gisketch_Aottg2UI_Code_GisketchGridPicker___ctor
            (__this_01,"avatar-picker",items,4,132.0,164.0,104.0,104.0,"Search avatars",select,420.0,1,
             (MethodInfo *)0x0);
  pGVar8 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_glue(TypeInfo_AottgProfilePickerPanel);
  pGVar3 = "profile.save.avatar";
  pGVar2 = "profile-avatar-picker-dialog";
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


// Gisketch.Aottg2UI.Game.AottgChangeAvatarDialog$$BuildHeader
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog__BuildHeader (Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* header, const MethodInfo* method);
// 0x41ee380

void Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog__BuildHeader
               (Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *header,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangeAvatarDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog___ctor (Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog_o* __this, const MethodInfo* method);
// 0x41ee390

void Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Code_AottgDialog___ctor
            ((Gisketch_Aottg2UI_Code_AottgDialog_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangeAvatarDialog$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog___cctor (const MethodInfo* method);
// 0x41ee3a0

void Gisketch_Aottg2UI_Game_AottgChangeAvatarDialog___cctor(MethodInfo *method)

{
  long lVar1;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar2;
  MethodInfo *method_00;
  
  if (DAT_05704f47 == '\0') {
    method = (MethodInfo *)&TypeInfo_AottgChangeAvatarDialog;
    il2cpp_init_method_metadata();
    DAT_05704f47 = '\x01';
  }
  pGVar2 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Avatars(method);
  **(undefined8 **)(TypeInfo_AottgChangeAvatarDialog + 0xb8) = pGVar2;
  method_00 = *(MethodInfo **)(TypeInfo_AottgChangeAvatarDialog + 0xb8);
  il2cpp_runtime_glue(method_00,pGVar2);
  pGVar2 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Banners(method_00);
  lVar1 = *(long *)(TypeInfo_AottgChangeAvatarDialog + 0xb8);
  *(Gisketch_Aottg2UI_Game_AottgProfilePreset_array **)(lVar1 + 8) = pGVar2;
  il2cpp_runtime_glue(lVar1 + 8,pGVar2);
  return;
}


