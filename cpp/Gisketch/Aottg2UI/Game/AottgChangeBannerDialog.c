// Type: Gisketch.Aottg2UI.Game.AottgChangeBannerDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgChangeBannerDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgChangeBannerDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangeBannerDialog__get_Title (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o* __this, const MethodInfo* method);
// 0x4520cd0

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangeBannerDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o *__this,MethodInfo *method)

{
  if (g_data_057aee1f == '\0') {
    il2cpp_runtime_helper_023445d0(&"Change Banner");
    g_data_057aee1f = '\x01';
  }
  return "Change Banner";
}


// Gisketch.Aottg2UI.Game.AottgChangeBannerDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangeBannerDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o* __this, const MethodInfo* method);
// 0x4520d00

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangeBannerDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o *__this,MethodInfo *method)

{
  if (g_data_057aee20 == '\0') {
    il2cpp_runtime_helper_023445d0(&"material-icons/edit");
    g_data_057aee20 = '\x01';
  }
  return "material-icons/edit";
}


// Gisketch.Aottg2UI.Game.AottgChangeBannerDialog$$get_RootStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangeBannerDialog__get_RootStyle (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o* __this, const MethodInfo* method);
// 0x4520d30

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangeBannerDialog__get_RootStyle
          (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o *__this,MethodInfo *method)

{
  if (g_data_057aee21 == '\0') {
    il2cpp_runtime_helper_023445d0(&"clear");
    g_data_057aee21 = '\x01';
  }
  return "clear";
}


// Gisketch.Aottg2UI.Game.AottgChangeBannerDialog$$get_BodyStyle
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangeBannerDialog__get_BodyStyle (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o* __this, const MethodInfo* method);
// 0x4520d60

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangeBannerDialog__get_BodyStyle
          (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o *__this,MethodInfo *method)

{
  if (g_data_057aee22 == '\0') {
    il2cpp_runtime_helper_023445d0(&"clear");
    g_data_057aee22 = '\x01';
  }
  return "clear";
}


// Gisketch.Aottg2UI.Game.AottgChangeBannerDialog$$get_BodyScrollable
// il2cpp: bool Gisketch_Aottg2UI_Game_AottgChangeBannerDialog__get_BodyScrollable (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o* __this, const MethodInfo* method);
// 0x4520d90

bool_conflict
Gisketch_Aottg2UI_Game_AottgChangeBannerDialog__get_BodyScrollable
          (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o *__this,MethodInfo *method)

{
  return 0;
}


// Gisketch.Aottg2UI.Game.AottgChangeBannerDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgChangeBannerDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o* __this, const MethodInfo* method);
// 0x4520da0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgChangeBannerDialog__get_RootLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  pGVar1 = Gisketch_Aottg2UI_Game_ProfileDialogUi__get_SplitRootLayout(method);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgChangeBannerDialog$$get_BodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgChangeBannerDialog__get_BodyLayout (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o* __this, const MethodInfo* method);
// 0x4520db0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgChangeBannerDialog__get_BodyLayout
          (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057aee31 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Row");
    il2cpp_runtime_helper_023445d0(&"FlexStart");
    g_data_057aee31 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"FlexStart",(System_String_o *)0x0,
                      (System_String_o *)0x0,24.0,(Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      1.0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.AottgChangeBannerDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangeBannerDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x4520e70

void Gisketch_Aottg2UI_Game_AottgChangeBannerDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  long lVar1;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  Gisketch_Aottg2UI_Code_AottgComponent_c *pGVar2;
  Gisketch_Aottg2UI_Code_AottgComponent_c *pGVar3;
  System_String_o *pSVar4;
  System_String_o *pSVar5;
  void *pvVar6;
  Gisketch_Aottg2UI_Code_AottgComponent_c *pGVar7;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *items;
  System_Action_GisketchActionContext__GisketchGridPickerItem__o *select;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_o *__this_03;
  Gisketch_Aottg2UI_Code_AottgComponent_o *pGVar8;
  long *plVar9;
  MethodInfo *method_00;
  undefined1 auVar10 [12];
  undefined4 in_stack_ffffffffffffff78;
  undefined4 uVar11;
  undefined8 in_stack_ffffffffffffff80;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGVar12;
  System_String_o *pSVar13;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o GStack_50;
  
  if (g_data_057aee23 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext_GisketchGridPickerItem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgChangeBannerDialog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgProfileDialogSelection);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgProfilePickerPanel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgProfilePreviewPanel);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchGridPicker);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_SelectBanner);
    il2cpp_runtime_helper_023445d0(&"profile-banner-picker-dialog");
    il2cpp_runtime_helper_023445d0(&"avatars=");
    il2cpp_runtime_helper_023445d0(&"Dialog.ChangeBanner.BuildBody");
    il2cpp_runtime_helper_023445d0(&" banners=");
    il2cpp_runtime_helper_023445d0(&"banner-picker");
    il2cpp_runtime_helper_023445d0(&"profile.save.banner");
    il2cpp_runtime_helper_023445d0(&"Search banners");
    g_data_057aee23 = '\x01';
  }
  pSVar5 = (System_String_o *)0x0;
  pSVar13 = (System_String_o *)0x0;
  uVar11 = 0;
  if (*(int *)(TypeInfo_AottgChangeBannerDialog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  if (**(long **)(TypeInfo_AottgChangeBannerDialog + 0xb8) == 0) {
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    uVar11 = *(undefined4 *)(**(long **)(TypeInfo_AottgChangeBannerDialog + 0xb8) + 0x18);
    pSVar4 = System_Int32__ToString((int32_t)&stack0xffffffffffffff7c,(MethodInfo *)0x0);
    lVar1 = *(long *)(*(long *)(TypeInfo_AottgChangeBannerDialog + 0xb8) + 8);
    if (lVar1 != 0) {
      uVar11 = *(undefined4 *)(lVar1 + 0x18);
      pSVar5 = System_Int32__ToString((int32_t)&stack0xffffffffffffff7c,(MethodInfo *)0x0);
      pSVar5 = System_String__Concat_3af7470("avatars=",pSVar4," banners=",pSVar5,(MethodInfo *)0x0);
      if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
      }
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time(&GStack_50,"Dialog.ChangeBanner.BuildBody",pSVar5,(MethodInfo *)0x0);
      pSVar5 = Gisketch_Aottg2UI_Game_AottgActiveProfile__AvatarKey((MethodInfo *)0x0);
      **(undefined8 **)(TypeInfo_AottgProfileDialogSelection + 0xb8) = pSVar5;
      il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgProfileDialogSelection + 0xb8),pSVar5);
      pSVar5 = Gisketch_Aottg2UI_Game_AottgActiveProfile__BannerKey((MethodInfo *)0x0);
      lVar1 = *(long *)(TypeInfo_AottgProfileDialogSelection + 0xb8);
      *(System_String_o **)(lVar1 + 8) = pSVar5;
      il2cpp_runtime_helper_022b4080(lVar1 + 8,pSVar5);
      pvVar6 = (void *)(*(__this->klass->vtable)._4_get_Title.methodPtr)
                                 (__this,(__this->klass->vtable)._4_get_Title.method);
      method_00 = (__this->klass->vtable)._5_get_TitleIcon.method;
      pGVar7 = (Gisketch_Aottg2UI_Code_AottgComponent_c *)
               (*(__this->klass->vtable)._5_get_TitleIcon.methodPtr)(__this);
      pSVar5 = GStack_50.fields._area;
      pSVar13 = GStack_50.fields._detail;
      if (*(int *)(TypeInfo_AottgChangeBannerDialog + 0xe4) == 0) {
        il2cpp_runtime_helper_02337ed0();
        pSVar5 = GStack_50.fields._area;
        pSVar13 = GStack_50.fields._detail;
      }
      items = Gisketch_Aottg2UI_Game_ProfileDialogUi__GridItems
                        (*(Gisketch_Aottg2UI_Game_AottgProfilePreset_array **)
                          (*(long *)(TypeInfo_AottgChangeBannerDialog + 0xb8) + 8),method_00);
      select = (System_Action_GisketchActionContext__GisketchGridPickerItem__o *)
               il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext_GisketchGridPickerItem);
      System_Action_GisketchActionContext__GisketchGridPickerItem____ctor();
      __this_03 = (Gisketch_Aottg2UI_Code_GisketchGridPicker_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchGridPicker);
      Gisketch_Aottg2UI_Code_GisketchGridPicker___ctor
                (__this_03,"banner-picker",items,2,254.0,154.0,220.0,92.0,"Search banners",select,420.0,1,
                 (MethodInfo *)0x0);
      pGVar8 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgProfilePickerPanel);
      pGVar3 = "profile.save.banner";
      pGVar2 = "profile-banner-picker-dialog";
      Gisketch_Aottg2UI_Code_AottgComponent___ctor(pGVar8,(MethodInfo *)0x0);
      pGVar8[1].klass = pGVar2;
      il2cpp_runtime_helper_022b4080(pGVar8 + 1,pGVar2);
      pGVar8[1].monitor = pvVar6;
      il2cpp_runtime_helper_022b4080(&pGVar8[1].monitor,pvVar6);
      pGVar8[2].klass = pGVar7;
      il2cpp_runtime_helper_022b4080(pGVar8 + 2,pGVar7);
      pGVar8[2].monitor = __this_03;
      il2cpp_runtime_helper_022b4080(&pGVar8[2].monitor,__this_03);
      pGVar8[3].klass = pGVar3;
      il2cpp_runtime_helper_022b4080(pGVar8 + 3,pGVar3);
      in_stack_ffffffffffffff80 = 0;
      if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
        Gisketch_Aottg2UI_Code_AottgUi__Component(body,pGVar8,(MethodInfo *)0x0);
        pGVar7 = (Gisketch_Aottg2UI_Code_AottgComponent_c *)
                 Gisketch_Aottg2UI_Game_AottgActiveProfile__AvatarSprite((MethodInfo *)0x0);
        pSVar4 = Gisketch_Aottg2UI_Game_AottgActiveProfile__BannerSprite((MethodInfo *)0x0);
        pGVar8 = (Gisketch_Aottg2UI_Code_AottgComponent_o *)il2cpp_runtime_helper_023052d0(TypeInfo_AottgProfilePreviewPanel);
        pGVar12 = body;
        Gisketch_Aottg2UI_Code_AottgComponent___ctor(pGVar8,(MethodInfo *)0x0);
        pGVar8[1].klass = pGVar7;
        il2cpp_runtime_helper_022b4080(pGVar8 + 1,pGVar7);
        pGVar8[1].monitor = pSVar4;
        il2cpp_runtime_helper_022b4080(&pGVar8[1].monitor,pSVar4);
        Gisketch_Aottg2UI_Code_AottgUi__Component(body,pGVar8,(MethodInfo *)0x0);
        __this_00.fields._area._4_4_ = uVar11;
        __this_00.fields._area._0_4_ = in_stack_ffffffffffffff78;
        __this_00.fields._detail = (System_String_o *)pGVar12;
        __this_00.fields._startMs = (int64_t)pSVar5;
        __this_00.fields._24_8_ = pSVar13;
        Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
                  (__this_00,(MethodInfo *)&stack0xffffffffffffff88);
        return;
      }
      goto label_04521298;
    }
  }
  il2cpp_runtime_helper_022b2c90();
label_04521298:
  auVar10 = il2cpp_runtime_helper_022b2c90();
  if (auVar10._8_4_ == 1) {
    plVar9 = (long *)__cxa_begin_catch(auVar10._0_8_);
    lVar1 = *plVar9;
    __cxa_end_catch();
    __this_01.fields._area._4_4_ = uVar11;
    __this_01.fields._area._0_4_ = in_stack_ffffffffffffff78;
    __this_01.fields._detail = (System_String_o *)in_stack_ffffffffffffff80;
    __this_01.fields._startMs = (int64_t)pSVar5;
    __this_01.fields._24_8_ = pSVar13;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_01,(MethodInfo *)&stack0xffffffffffffff88);
    if (lVar1 == 0) {
      return;
    }
    il2cpp_runtime_helper_022fefe0(lVar1);
  }
  __this_02.fields._area._4_4_ = uVar11;
  __this_02.fields._area._0_4_ = in_stack_ffffffffffffff78;
  __this_02.fields._detail = (System_String_o *)in_stack_ffffffffffffff80;
  __this_02.fields._startMs = (int64_t)pSVar5;
  __this_02.fields._24_8_ = pSVar13;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this_02,(MethodInfo *)&stack0xffffffffffffff88);
  _Unwind_Resume(auVar10._0_8_);
}


// Gisketch.Aottg2UI.Game.AottgChangeBannerDialog$$BuildHeader
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangeBannerDialog__BuildHeader (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* header, const MethodInfo* method);
// 0x4521370

void Gisketch_Aottg2UI_Game_AottgChangeBannerDialog__BuildHeader
               (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *header,MethodInfo *method)

{
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangeBannerDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangeBannerDialog___ctor (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o* __this, const MethodInfo* method);
// 0x4521380

void Gisketch_Aottg2UI_Game_AottgChangeBannerDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgChangeBannerDialog_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangeBannerDialog$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangeBannerDialog___cctor (const MethodInfo* method);
// 0x4521390

void Gisketch_Aottg2UI_Game_AottgChangeBannerDialog___cctor(MethodInfo *method)

{
  long lVar1;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *pGVar2;
  MethodInfo *method_00;
  
  if (g_data_057aee24 == '\0') {
    method = (MethodInfo *)&TypeInfo_AottgChangeBannerDialog;
    il2cpp_runtime_helper_023445d0();
    g_data_057aee24 = '\x01';
  }
  pGVar2 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Avatars(method);
  **(undefined8 **)(TypeInfo_AottgChangeBannerDialog + 0xb8) = pGVar2;
  method_00 = *(MethodInfo **)(TypeInfo_AottgChangeBannerDialog + 0xb8);
  il2cpp_runtime_helper_022b4080(method_00,pGVar2);
  pGVar2 = Gisketch_Aottg2UI_Game_AottgProfilePresetCatalog__Banners(method_00);
  lVar1 = *(long *)(TypeInfo_AottgChangeBannerDialog + 0xb8);
  *(Gisketch_Aottg2UI_Game_AottgProfilePreset_array **)(lVar1 + 8) = pGVar2;
  il2cpp_runtime_helper_022b4080(lVar1 + 8,pGVar2);
  return;
}


