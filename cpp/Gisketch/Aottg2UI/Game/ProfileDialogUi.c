// Type: Gisketch.Aottg2UI.Game.ProfileDialogUi
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/ProfileDialogUi.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.ProfileDialogUi$$get_SplitRootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_ProfileDialogUi__get_SplitRootLayout (const MethodInfo* method);
// 0x451ee20

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_ProfileDialogUi__get_SplitRootLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (g_data_057aee30 == '\0') {
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0();
    g_data_057aee30 = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(1134.0,(MethodInfo *)0x0);
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


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$get_SplitBodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_ProfileDialogUi__get_SplitBodyLayout (const MethodInfo* method);
// 0x451efb0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_ProfileDialogUi__get_SplitBodyLayout(MethodInfo *method)

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


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$GridItems
// il2cpp: Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array* Gisketch_Aottg2UI_Game_ProfileDialogUi__GridItems (Gisketch_Aottg2UI_Game_AottgProfilePreset_array* presets, const MethodInfo* method);
// 0x4518670

Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *
Gisketch_Aottg2UI_Game_ProfileDialogUi__GridItems
          (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *presets,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *pGVar3;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  System_String_o *area;
  undefined4 uVar4;
  System_String_o *str1;
  System_String_o *pSVar5;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *pGVar6;
  ulong uVar7;
  long *plVar8;
  System_String_o **ppSVar9;
  ulong uVar10;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o *pGVar11;
  undefined1 auVar12 [12];
  undefined1 in_stack_ffffffffffffff58 [12];
  undefined4 in_stack_ffffffffffffff68;
  undefined4 uVar13;
  undefined4 in_stack_ffffffffffffff6c;
  undefined4 uVar14;
  undefined4 in_stack_ffffffffffffff70;
  undefined4 uVar15;
  bool_conflict in_stack_ffffffffffffff74;
  bool_conflict bVar16;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  undefined1 local_58 [40];
  
  if (g_data_057aee32 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchGridPickerItem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&"ProfileDialogUi.GridItems");
    il2cpp_runtime_helper_023445d0(&"presets=");
    g_data_057aee32 = '\x01';
  }
  pSVar5 = "presets=";
  area = "ProfileDialogUi.GridItems";
  local_68 = (InvokerMethod)0x0;
  pcStack_60 = (char *)0x0;
  local_78 = (Il2CppMethodPointer)0x0;
  pIStack_70 = (Il2CppMethodPointer)0x0;
  if (presets == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = (undefined4)presets->max_length;
  }
  str1 = System_Int32__ToString((int32_t)&stack0xffffffffffffff64,(MethodInfo *)0x0);
  pSVar5 = System_String__Concat_3ae5ba0(pSVar5,str1,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            ((Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *)local_58,area,pSVar5,(MethodInfo *)0x0
            );
  if (presets == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
    pGVar6 = (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchGridPickerItem,0);
  }
  else {
    pGVar6 = (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *)
             il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchGridPickerItem,(int)presets->max_length);
    if (0 < (int)presets->max_length) {
      if (pGVar6 == (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *)0x0) {
label_0451885c:
        uVar13 = 0;
        uVar14 = 0;
        uVar15 = 0;
        bVar16 = 0;
        Gisketch_Aottg2UI_Code_GisketchGridPickerItem___ctor
                  ((Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o)
                   ZEXT1632(CONCAT412(uVar4,in_stack_ffffffffffffff58)),
                   (System_String_o *)&stack0xffffffffffffff68,presets->m_Items[0].fields.Key,
                   presets->m_Items[0].fields.Label,presets->m_Items[0].fields.Sprite,(MethodInfo *)0x0);
        auVar12 = il2cpp_runtime_helper_022b2c90();
        if (auVar12._8_4_ == 1) {
          plVar8 = (long *)__cxa_begin_catch(auVar12._0_8_);
          lVar2 = *plVar8;
          __cxa_end_catch();
          __this_00.fields._detail._4_4_ = uVar4;
          __this_00.fields._0_12_ = in_stack_ffffffffffffff58;
          __this_00.fields._startMs._0_4_ = uVar13;
          __this_00.fields._startMs._4_4_ = uVar14;
          __this_00.fields._enabled = uVar15;
          __this_00.fields._hotLoop = bVar16;
          Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_00,(MethodInfo *)&local_78);
          if (lVar2 == 0) {
            return (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *)0x0;
          }
          il2cpp_runtime_helper_022fefe0(lVar2);
        }
        __this_01.fields._detail._4_4_ = uVar4;
        __this_01.fields._0_12_ = in_stack_ffffffffffffff58;
        __this_01.fields._startMs._0_4_ = uVar13;
        __this_01.fields._startMs._4_4_ = uVar14;
        __this_01.fields._enabled = uVar15;
        __this_01.fields._hotLoop = bVar16;
        Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_01,(MethodInfo *)&local_78);
        _Unwind_Resume(auVar12._0_8_);
      }
      uVar7 = presets->max_length & 0xffffffff;
      ppSVar9 = &presets->m_Items[0].fields.Sprite;
      uVar10 = 0;
      pGVar3 = pGVar6;
      do {
        pGVar11 = pGVar3->m_Items;
        if (uVar7 <= uVar10) {
          il2cpp_runtime_helper_022b2ca0();
label_04518857:
          il2cpp_runtime_helper_022b2ca0();
          goto label_0451885c;
        }
        in_stack_ffffffffffffff68 = 0;
        in_stack_ffffffffffffff6c = 0;
        in_stack_ffffffffffffff70 = 0;
        in_stack_ffffffffffffff74 = 0;
        Gisketch_Aottg2UI_Code_GisketchGridPickerItem___ctor
                  ((Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o)
                   ZEXT1632(CONCAT412(uVar4,in_stack_ffffffffffffff58)),
                   (System_String_o *)&stack0xffffffffffffff68,
                   ((Gisketch_Aottg2UI_Game_AottgProfilePreset_Fields *)(ppSVar9 + -2))->Key,ppSVar9[-1],
                   *ppSVar9,(MethodInfo *)0x0);
        local_58._16_8_ = (Il2CppType **)0x0;
        local_58._24_8_ = (Il2CppRGCTXData *)0x0;
        local_58._0_4_ = in_stack_ffffffffffffff68;
        local_58._4_4_ = in_stack_ffffffffffffff6c;
        local_58._8_4_ = in_stack_ffffffffffffff70;
        local_58._12_4_ = in_stack_ffffffffffffff74;
        if ((uint)pGVar6->max_length <= uVar10) goto label_04518857;
        *(undefined4 *)&pGVar3->m_Items[0].fields.Sprite = 0;
        *(undefined4 *)((long)&pGVar3->m_Items[0].fields.Sprite + 4) = 0;
        *(undefined4 *)&pGVar3->m_Items[0].fields.Keywords = 0;
        *(undefined4 *)((long)&pGVar3->m_Items[0].fields.Keywords + 4) = 0;
        *(undefined4 *)&(pGVar11->fields).Key = in_stack_ffffffffffffff68;
        *(undefined4 *)((long)&pGVar3->m_Items[0].fields.Key + 4) = in_stack_ffffffffffffff6c;
        *(undefined4 *)&pGVar3->m_Items[0].fields.Label = in_stack_ffffffffffffff70;
        *(bool_conflict *)((long)&pGVar3->m_Items[0].fields.Label + 4) = in_stack_ffffffffffffff74;
        il2cpp_runtime_helper_022b4080(pGVar11,0);
        uVar10 = uVar10 + 1;
        uVar1 = (uint)presets->max_length;
        uVar7 = (ulong)uVar1;
        ppSVar9 = ppSVar9 + 3;
        pGVar3 = (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *)pGVar11;
      } while ((long)uVar10 < (long)(int)uVar1);
    }
  }
  __this.fields._detail._4_4_ = uVar4;
  __this.fields._0_12_ = in_stack_ffffffffffffff58;
  __this.fields._startMs._0_4_ = in_stack_ffffffffffffff68;
  __this.fields._startMs._4_4_ = in_stack_ffffffffffffff6c;
  __this.fields._enabled = in_stack_ffffffffffffff70;
  __this.fields._hotLoop = in_stack_ffffffffffffff74;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this,(MethodInfo *)&local_78);
  return pGVar6;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$SelectAvatar
// il2cpp: void Gisketch_Aottg2UI_Game_ProfileDialogUi__SelectAvatar (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item, const MethodInfo* method);
// 0x4522270

void Gisketch_Aottg2UI_Game_ProfileDialogUi__SelectAvatar
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,
               Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item,MethodInfo *method)

{
  long lVar1;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  bool_conflict bVar2;
  System_String_o *detail;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_UI_Image_o *__this_02;
  System_String_o *pSVar4;
  UnityEngine_Sprite_o *value;
  long *plVar5;
  undefined1 auVar6 [12];
  undefined1 in_stack_ffffffffffffff78 [15];
  undefined1 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool_conflict bVar11;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o GStack_50;
  
  if (g_data_057aee33 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgProfileDialogSelection);
    il2cpp_runtime_helper_023445d0(&"profile-preview-avatar-image");
    g_data_057aee33 = '\x01';
  }
  **(undefined8 **)(TypeInfo_AottgProfileDialogSelection + 0xb8) = item.fields.Key;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_AottgProfileDialogSelection + 0xb8));
  pSVar4 = "profile-preview-avatar-image";
  if (g_data_057aee35 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSpriteLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_Find_Image);
    il2cpp_runtime_helper_023445d0(&" sprite=");
    il2cpp_runtime_helper_023445d0(&"found=");
    il2cpp_runtime_helper_023445d0(&"ProfileDialogUi.UpdatePreviewImage");
    g_data_057aee35 = '\x01';
  }
  uVar7 = 0;
  detail = System_String__Concat_3af7150(pSVar4," sprite=",item.fields.Sprite,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time(&GStack_50,"ProfileDialogUi.UpdatePreviewImage",detail,(MethodInfo *)0x0);
  uVar8 = GStack_50.fields._area._0_4_;
  uVar9 = GStack_50.fields._area._4_4_;
  uVar10 = GStack_50.fields._detail._0_4_;
  bVar11 = GStack_50.fields._detail._4_4_;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    uVar8 = GStack_50.fields._area._0_4_;
    uVar9 = GStack_50.fields._area._4_4_;
    uVar10 = GStack_50.fields._detail._0_4_;
    bVar11 = GStack_50.fields._detail._4_4_;
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      pUVar3 = UnityEngine_GameObject__get_transform(context.fields.GameObject,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        pUVar3 = UnityEngine_Transform__get_root(pUVar3,(MethodInfo *)0x0);
        goto label_0452242d;
      }
    }
    il2cpp_runtime_helper_022b2c90();
label_04522529:
    auVar6 = il2cpp_runtime_helper_022b2c90();
    if (auVar6._8_4_ == 1) {
      plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
      lVar1 = *plVar5;
      __cxa_end_catch();
      __this_00.fields._detail._7_1_ = uVar7;
      __this_00.fields._0_15_ = in_stack_ffffffffffffff78;
      __this_00.fields._startMs._0_4_ = uVar8;
      __this_00.fields._startMs._4_4_ = uVar9;
      __this_00.fields._enabled = uVar10;
      __this_00.fields._hotLoop = bVar11;
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
                (__this_00,(MethodInfo *)&stack0xffffffffffffff88);
      if (lVar1 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar1);
    }
    __this_01.fields._detail._7_1_ = uVar7;
    __this_01.fields._0_15_ = in_stack_ffffffffffffff78;
    __this_01.fields._startMs._0_4_ = uVar8;
    __this_01.fields._startMs._4_4_ = uVar9;
    __this_01.fields._enabled = uVar10;
    __this_01.fields._hotLoop = bVar11;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_01,(MethodInfo *)&stack0xffffffffffffff88);
    _Unwind_Resume(auVar6._0_8_);
  }
  pUVar3 = (UnityEngine_Transform_o *)0x0;
label_0452242d:
  __this_02 = (UnityEngine_UI_Image_o *)
              Gisketch_Aottg2UI_Game_ProfileDialogUi__Find_object_(pUVar3,pSVar4,MethodInfo_Image_Find_Image);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  uVar7 = (undefined1)bVar2;
  if (*(int *)(g_data_057b9b98 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = System_Boolean__ToString((bool_conflict)&stack0xffffffffffffff87,(MethodInfo *)0x0);
  pSVar4 = System_String__Concat_3ae5ba0("found=",pSVar4,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ProfileDialogUi.UpdatePreviewImage",pSVar4,(MethodInfo *)0x0);
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (*(int *)(TypeInfo_GisketchSpriteLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    value = Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load(item.fields.Sprite,(MethodInfo *)0x0);
    if (__this_02 == (UnityEngine_UI_Image_o *)0x0) goto label_04522529;
    UnityEngine_UI_Image__set_sprite(__this_02,value,(MethodInfo *)0x0);
  }
  __this.fields._detail._7_1_ = uVar7;
  __this.fields._0_15_ = in_stack_ffffffffffffff78;
  __this.fields._startMs._0_4_ = uVar8;
  __this.fields._startMs._4_4_ = uVar9;
  __this.fields._enabled = uVar10;
  __this.fields._hotLoop = bVar11;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this,(MethodInfo *)&stack0xffffffffffffff88);
  return;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$SelectBanner
// il2cpp: void Gisketch_Aottg2UI_Game_ProfileDialogUi__SelectBanner (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item, const MethodInfo* method);
// 0x4522620

void Gisketch_Aottg2UI_Game_ProfileDialogUi__SelectBanner
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,
               Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item,MethodInfo *method)

{
  long lVar1;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  bool_conflict bVar2;
  System_String_o *detail;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_UI_Image_o *__this_02;
  System_String_o *pSVar4;
  UnityEngine_Sprite_o *value;
  long *plVar5;
  undefined1 auVar6 [12];
  undefined1 in_stack_ffffffffffffff78 [15];
  undefined1 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool_conflict bVar11;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o GStack_50;
  
  if (g_data_057aee34 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgProfileDialogSelection);
    il2cpp_runtime_helper_023445d0(&"profile-preview-banner-image");
    g_data_057aee34 = '\x01';
  }
  lVar1 = *(long *)(TypeInfo_AottgProfileDialogSelection + 0xb8);
  *(System_String_o **)(lVar1 + 8) = item.fields.Key;
  il2cpp_runtime_helper_022b4080(lVar1 + 8);
  pSVar4 = "profile-preview-banner-image";
  if (g_data_057aee35 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSpriteLoader);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_Find_Image);
    il2cpp_runtime_helper_023445d0(&" sprite=");
    il2cpp_runtime_helper_023445d0(&"found=");
    il2cpp_runtime_helper_023445d0(&"ProfileDialogUi.UpdatePreviewImage");
    g_data_057aee35 = '\x01';
  }
  uVar7 = 0;
  detail = System_String__Concat_3af7150(pSVar4," sprite=",item.fields.Sprite,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time(&GStack_50,"ProfileDialogUi.UpdatePreviewImage",detail,(MethodInfo *)0x0);
  uVar8 = GStack_50.fields._area._0_4_;
  uVar9 = GStack_50.fields._area._4_4_;
  uVar10 = GStack_50.fields._detail._0_4_;
  bVar11 = GStack_50.fields._detail._4_4_;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    uVar8 = GStack_50.fields._area._0_4_;
    uVar9 = GStack_50.fields._area._4_4_;
    uVar10 = GStack_50.fields._detail._0_4_;
    bVar11 = GStack_50.fields._detail._4_4_;
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      pUVar3 = UnityEngine_GameObject__get_transform(context.fields.GameObject,(MethodInfo *)0x0);
      if (pUVar3 != (UnityEngine_Transform_o *)0x0) {
        pUVar3 = UnityEngine_Transform__get_root(pUVar3,(MethodInfo *)0x0);
        goto label_0452242d;
      }
    }
    il2cpp_runtime_helper_022b2c90();
label_04522529:
    auVar6 = il2cpp_runtime_helper_022b2c90();
    if (auVar6._8_4_ == 1) {
      plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
      lVar1 = *plVar5;
      __cxa_end_catch();
      __this_00.fields._detail._7_1_ = uVar7;
      __this_00.fields._0_15_ = in_stack_ffffffffffffff78;
      __this_00.fields._startMs._0_4_ = uVar8;
      __this_00.fields._startMs._4_4_ = uVar9;
      __this_00.fields._enabled = uVar10;
      __this_00.fields._hotLoop = bVar11;
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
                (__this_00,(MethodInfo *)&stack0xffffffffffffff88);
      if (lVar1 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar1);
    }
    __this_01.fields._detail._7_1_ = uVar7;
    __this_01.fields._0_15_ = in_stack_ffffffffffffff78;
    __this_01.fields._startMs._0_4_ = uVar8;
    __this_01.fields._startMs._4_4_ = uVar9;
    __this_01.fields._enabled = uVar10;
    __this_01.fields._hotLoop = bVar11;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_01,(MethodInfo *)&stack0xffffffffffffff88);
    _Unwind_Resume(auVar6._0_8_);
  }
  pUVar3 = (UnityEngine_Transform_o *)0x0;
label_0452242d:
  __this_02 = (UnityEngine_UI_Image_o *)
              Gisketch_Aottg2UI_Game_ProfileDialogUi__Find_object_(pUVar3,pSVar4,MethodInfo_Image_Find_Image);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  uVar7 = (undefined1)bVar2;
  if (*(int *)(g_data_057b9b98 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar4 = System_Boolean__ToString((bool_conflict)&stack0xffffffffffffff87,(MethodInfo *)0x0);
  pSVar4 = System_String__Concat_3ae5ba0("found=",pSVar4,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ProfileDialogUi.UpdatePreviewImage",pSVar4,(MethodInfo *)0x0);
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (*(int *)(TypeInfo_GisketchSpriteLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    value = Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load(item.fields.Sprite,(MethodInfo *)0x0);
    if (__this_02 == (UnityEngine_UI_Image_o *)0x0) goto label_04522529;
    UnityEngine_UI_Image__set_sprite(__this_02,value,(MethodInfo *)0x0);
  }
  __this.fields._detail._7_1_ = uVar7;
  __this.fields._0_15_ = in_stack_ffffffffffffff78;
  __this.fields._startMs._0_4_ = uVar8;
  __this.fields._startMs._4_4_ = uVar9;
  __this.fields._enabled = uVar10;
  __this.fields._hotLoop = bVar11;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this,(MethodInfo *)&stack0xffffffffffffff88);
  return;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$UpdatePreviewImage
// il2cpp: void Gisketch_Aottg2UI_Game_ProfileDialogUi__UpdatePreviewImage (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* imageId, System_String_o* sprite, const MethodInfo* method);
// 0x45222e0

void Gisketch_Aottg2UI_Game_ProfileDialogUi__UpdatePreviewImage
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *imageId,
               System_String_o *sprite,MethodInfo *method)

{
  long lVar1;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_UI_Image_o *__this_02;
  UnityEngine_Sprite_o *value;
  long *plVar5;
  undefined1 auVar6 [12];
  undefined1 in_stack_ffffffffffffff78 [15];
  undefined1 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  bool_conflict bVar11;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o GStack_50;
  
  if (g_data_057aee35 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchSpriteLoader,sprite,method);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Image_Find_Image);
    il2cpp_runtime_helper_023445d0(&" sprite=");
    il2cpp_runtime_helper_023445d0(&"found=");
    il2cpp_runtime_helper_023445d0(&"ProfileDialogUi.UpdatePreviewImage");
    g_data_057aee35 = '\x01';
  }
  uVar7 = 0;
  pSVar3 = System_String__Concat_3af7150(imageId," sprite=",sprite,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time(&GStack_50,"ProfileDialogUi.UpdatePreviewImage",pSVar3,(MethodInfo *)0x0);
  uVar8 = GStack_50.fields._area._0_4_;
  uVar9 = GStack_50.fields._area._4_4_;
  uVar10 = GStack_50.fields._detail._0_4_;
  bVar11 = GStack_50.fields._detail._4_4_;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
    uVar8 = GStack_50.fields._area._0_4_;
    uVar9 = GStack_50.fields._area._4_4_;
    uVar10 = GStack_50.fields._detail._0_4_;
    bVar11 = GStack_50.fields._detail._4_4_;
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) {
      il2cpp_runtime_helper_022b2c90();
    }
    else {
      pUVar4 = UnityEngine_GameObject__get_transform(context.fields.GameObject,(MethodInfo *)0x0);
      if (pUVar4 != (UnityEngine_Transform_o *)0x0) {
        pUVar4 = UnityEngine_Transform__get_root(pUVar4,(MethodInfo *)0x0);
        goto label_0452242d;
      }
    }
    il2cpp_runtime_helper_022b2c90();
label_04522529:
    auVar6 = il2cpp_runtime_helper_022b2c90();
    if (auVar6._8_4_ == 1) {
      plVar5 = (long *)__cxa_begin_catch(auVar6._0_8_);
      lVar1 = *plVar5;
      __cxa_end_catch();
      __this_00.fields._detail._7_1_ = uVar7;
      __this_00.fields._0_15_ = in_stack_ffffffffffffff78;
      __this_00.fields._startMs._0_4_ = uVar8;
      __this_00.fields._startMs._4_4_ = uVar9;
      __this_00.fields._enabled = uVar10;
      __this_00.fields._hotLoop = bVar11;
      Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
                (__this_00,(MethodInfo *)&stack0xffffffffffffff88);
      if (lVar1 == 0) {
        return;
      }
      il2cpp_runtime_helper_022fefe0(lVar1);
    }
    __this_01.fields._detail._7_1_ = uVar7;
    __this_01.fields._0_15_ = in_stack_ffffffffffffff78;
    __this_01.fields._startMs._0_4_ = uVar8;
    __this_01.fields._startMs._4_4_ = uVar9;
    __this_01.fields._enabled = uVar10;
    __this_01.fields._hotLoop = bVar11;
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
              (__this_01,(MethodInfo *)&stack0xffffffffffffff88);
    _Unwind_Resume(auVar6._0_8_);
  }
  pUVar4 = (UnityEngine_Transform_o *)0x0;
label_0452242d:
  __this_02 = (UnityEngine_UI_Image_o *)
              Gisketch_Aottg2UI_Game_ProfileDialogUi__Find_object_(pUVar4,imageId,MethodInfo_Image_Find_Image);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  uVar7 = (undefined1)bVar2;
  if (*(int *)(g_data_057b9b98 + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar3 = System_Boolean__ToString((bool_conflict)&stack0xffffffffffffff87,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat_3ae5ba0("found=",pSVar3,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ProfileDialogUi.UpdatePreviewImage",pSVar3,(MethodInfo *)0x0);
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_02,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar2 != '\0') {
    if (*(int *)(TypeInfo_GisketchSpriteLoader + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    value = Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load(sprite,(MethodInfo *)0x0);
    if (__this_02 == (UnityEngine_UI_Image_o *)0x0) goto label_04522529;
    UnityEngine_UI_Image__set_sprite(__this_02,value,(MethodInfo *)0x0);
  }
  __this.fields._detail._7_1_ = uVar7;
  __this.fields._0_15_ = in_stack_ffffffffffffff78;
  __this.fields._startMs._0_4_ = uVar8;
  __this.fields._startMs._4_4_ = uVar9;
  __this.fields._enabled = uVar10;
  __this.fields._hotLoop = bVar11;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this,(MethodInfo *)&stack0xffffffffffffff88);
  return;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$Find<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_ProfileDialogUi__Find_object_ (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo_259DC70* method);
// 0x269dc70

Il2CppObject *
Gisketch_Aottg2UI_Game_ProfileDialogUi__Find_object_
          (UnityEngine_Transform_o *root,System_String_o *id,MethodInfo_259DC70 *method)

{
  byte bVar1;
  int iVar2;
  uint uVar3;
  undefined8 *puVar4;
  undefined8 uVar5;
  code *pcVar6;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *pSVar7;
  System_Collections_Generic_Dictionary_TKey__TValue__c *pSVar8;
  bool_conflict bVar9;
  System_Object_array *pSVar10;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  long lVar11;
  void *pvVar12;
  long lVar13;
  void *pvVar14;
  Il2CppObject *pIVar15;
  System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__c *pSVar16;
  ulong unaff_RBX;
  System_String_o *x;
  System_String_o *pSVar17;
  System_String_o *pSVar18;
  System_Collections_Generic_Dictionary_TKey__TValue__o *pSVar19;
  System_Collections_Generic_Dictionary_TKey__TValue__o *__this_00;
  ulong __n;
  undefined8 auStack_c8 [4];
  void *pvStack_a8;
  Il2CppObject **ppIStack_a0;
  Il2CppObject *pIStack_90;
  undefined1 uStack_81;
  System_String_o *pSStack_80;
  MethodInfo_259DC70 *pMStack_78;
  undefined8 *puStack_70;
  System_String_o *pSStack_68;
  System_Object_array *pSStack_60;
  code *pcStack_58;
  Il2CppObject *pIStack_50;
  ulong uStack_48;
  System_String_o *pSStack_40;
  
  if (method->rgctx_data == (MethodInfo_259DC70_RGCTXs *)0x0) {
    pSStack_40 = (System_String_o *)0x269dc97;
    il2cpp_runtime_helper_023445d0(&TypeInfo_Object);
    if (method->rgctx_data != (MethodInfo_259DC70_RGCTXs *)0x0) goto label_0269dca3;
    pSStack_40 = (System_String_o *)0x269ddbf;
    il2cpp_runtime_helper_02300a20(method);
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
label_0269dca3:
    iVar2 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar2 == 0) {
    pSStack_40 = (System_String_o *)0x269dcbc;
    il2cpp_runtime_helper_02337ed0();
  }
  pSStack_40 = (System_String_o *)0x269dcca;
  bVar9 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    return (Il2CppObject *)0x0;
  }
  x = (System_String_o *)0x0;
  pSVar17 = (System_String_o *)0x0;
  pSStack_40 = (System_String_o *)0x269dcde;
  a = id;
  bVar9 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if ((char)bVar9 != '\0') {
    return (Il2CppObject *)0x0;
  }
  if (root != (UnityEngine_Transform_o *)0x0) {
    pSVar17 = (System_String_o *)0x1;
    pSStack_40 = (System_String_o *)0x269dd05;
    a = (System_String_o *)root;
    pSVar10 = UnityEngine_Component__GetComponentsInChildren_object_
                        ((UnityEngine_Component_o *)root,1,
                         (MethodInfo_24E85B0 *)
                         method->rgctx_data->_1_UnityEngine_Component_GetComponentsInChildren_T_);
    if (pSVar10 != (System_Object_array *)0x0) {
      if ((int)pSVar10->max_length < 1) {
        return (Il2CppObject *)0x0;
      }
      unaff_RBX = 0;
      if ((pSVar10->max_length & 0xffffffff) != 0) {
        do {
          x = (System_String_o *)pSVar10->m_Items[unaff_RBX];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            pSStack_40 = (System_String_o *)0x269dd62;
            il2cpp_runtime_helper_02337ed0();
          }
          pSVar17 = (System_String_o *)0x0;
          pSStack_40 = (System_String_o *)0x269dd6e;
          a = x;
          bVar9 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if ((char)bVar9 != '\0') {
            root = (UnityEngine_Transform_o *)pSVar10;
            if (x == (System_String_o *)0x0) goto label_0269dddc;
            pSVar17 = (System_String_o *)0x0;
            pSStack_40 = (System_String_o *)0x269dd81;
            a = x;
            __this = (UnityEngine_Object_o *)
                     UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0);
            if (__this == (UnityEngine_Object_o *)0x0) goto label_0269dddc;
            pSStack_40 = (System_String_o *)0x269dd90;
            a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
            pSStack_40 = (System_String_o *)0x269dd9d;
            pSVar17 = id;
            bVar9 = System_String__op_Equality(a,id,(MethodInfo *)0x0);
            if ((char)bVar9 != '\0') {
              return (Il2CppObject *)x;
            }
          }
          unaff_RBX = unaff_RBX + 1;
          uVar3 = (uint)pSVar10->max_length;
          if ((long)(int)uVar3 <= (long)unaff_RBX) {
            return (Il2CppObject *)0x0;
          }
        } while (unaff_RBX < uVar3);
      }
      goto label_0269dde1;
    }
  }
label_0269dddc:
  pSStack_40 = (System_String_o *)0x269dde1;
  il2cpp_runtime_helper_022b2c90();
  pSVar10 = (System_Object_array *)root;
label_0269dde1:
  pSStack_40 = (System_String_o *)0x269dde6;
  pIStack_50 = (Il2CppObject *)il2cpp_runtime_helper_022b2ca0();
  pSVar18 = pSVar17;
  uStack_48 = unaff_RBX;
  pSStack_40 = x;
  if (pSVar17[2].monitor == (void *)0x0) {
    pcStack_58 = (code *)0x269de64;
    il2cpp_runtime_helper_02300a20(pSVar17);
    lVar11 = *(long *)((long)pSVar17[2].monitor + 0x10);
    bVar1 = *(byte *)(lVar11 + 0x135);
  }
  else {
    lVar11 = *(long *)((long)pSVar17[2].monitor + 0x10);
    bVar1 = *(byte *)(lVar11 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    pIStack_50 = (Il2CppObject *)0x0;
    pcStack_58 = (code *)0x269de82;
    lVar11 = il2cpp_runtime_helper_023009c0();
    iVar2 = *(int *)(lVar11 + 0xe4);
  }
  else {
    pIStack_50 = (Il2CppObject *)0x0;
    iVar2 = *(int *)(lVar11 + 0xe4);
  }
  if (iVar2 == 0) {
    pcStack_58 = (code *)0x269de93;
    il2cpp_runtime_helper_02337ed0();
    lVar11 = *(long *)((long)pSVar17[2].monitor + 0x10);
    bVar1 = *(byte *)(lVar11 + 0x135);
  }
  else {
    lVar11 = *(long *)((long)pSVar17[2].monitor + 0x10);
    bVar1 = *(byte *)(lVar11 + 0x135);
  }
  if ((bVar1 & 1) == 0) {
    pcStack_58 = (code *)0x269deac;
    lVar11 = il2cpp_runtime_helper_023009c0(lVar11);
    __this_00 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)**(undefined8 **)(lVar11 + 0xb8);
  }
  else {
    __this_00 = (System_Collections_Generic_Dictionary_TKey__TValue__o *)**(undefined8 **)(lVar11 + 0xb8);
  }
  if (__this_00 == (System_Collections_Generic_Dictionary_TKey__TValue__o *)0x0) {
    pcStack_58 = UnityEngine_Rendering_ProfilingSampler__Get___Il2CppFullySharedGenericStructType_;
    il2cpp_runtime_helper_022b2c90();
    puStack_70 = &TypeInfo_Object;
    pvVar12 = pSVar18[2].monitor;
    pSStack_80 = pSVar17;
    pMStack_78 = method;
    pSStack_68 = id;
    pSStack_60 = pSVar10;
    pcStack_58 = (code *)((ulong)a & 0xffffffff);
    if (pvVar12 == (void *)0x0) {
      auStack_c8[3] = 0x269dee8;
      il2cpp_runtime_helper_02300a20(pSVar18);
      pvVar12 = pSVar18[2].monitor;
    }
    __n = (ulong)*(uint *)(*(long *)((long)pvVar12 + 0x18) + 0xfc);
    lVar11 = -(__n + 0xf & 0xfffffffffffffff0);
    pvVar14 = (void *)((long)&pvStack_a8 + lVar11);
    pIStack_90 = (Il2CppObject *)0x0;
    if ((*(byte *)(*(long *)((long)pvVar12 + 0x10) + 0x135) & 1) == 0) {
      *(undefined8 *)((long)auStack_c8 + lVar11 + 0x18) = 0x269df9a;
      lVar13 = il2cpp_runtime_helper_023009c0();
      iVar2 = *(int *)(lVar13 + 0xe4);
    }
    else {
      iVar2 = *(int *)(*(long *)((long)pvVar12 + 0x10) + 0xe4);
    }
    if (iVar2 == 0) {
      *(undefined8 *)((long)auStack_c8 + lVar11 + 0x18) = 0x269dfab;
      il2cpp_runtime_helper_02337ed0();
      lVar13 = *(long *)((long)pSVar18[2].monitor + 0x10);
      bVar1 = *(byte *)(lVar13 + 0x135);
    }
    else {
      lVar13 = *(long *)((long)pSVar18[2].monitor + 0x10);
      bVar1 = *(byte *)(lVar13 + 0x135);
    }
    if ((bVar1 & 1) == 0) {
      *(undefined8 *)((long)auStack_c8 + lVar11 + 0x18) = 0x269df40;
      lVar13 = il2cpp_runtime_helper_023009c0(lVar13);
    }
    lVar13 = **(long **)(lVar13 + 0xb8);
    *(undefined8 *)((long)auStack_c8 + lVar11 + 0x18) = 0x269df58;
    pSVar19 = __this_00;
    pvVar12 = pvVar14;
    memcpy(pvVar14,__this_00,__n);
    if (lVar13 == 0) {
      *(undefined8 *)((long)auStack_c8 + lVar11 + 0x18) = 0x269dfca;
      il2cpp_runtime_helper_022b2c90();
      *(System_String_o **)((long)auStack_c8 + lVar11 + 0x18) = pSVar18;
      *(System_Collections_Generic_Dictionary_TKey__TValue__o **)((long)auStack_c8 + lVar11 + 0x10) =
           __this_00;
      *(void **)((long)auStack_c8 + lVar11 + 8) = pvVar14;
      pSVar7 = (pSVar19->fields)._keys;
      if (pSVar7 == (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__o *)0x0) {
        *(undefined8 *)((long)auStack_c8 + lVar11) = 0x269e020;
        il2cpp_runtime_helper_02300a20(pSVar19);
        pSVar7 = (pSVar19->fields)._keys;
      }
      if (pvVar12 != (void *)0x0) {
        pvVar14 = pSVar7[1].monitor;
        if ((*(byte *)((long)pvVar14 + 0x135) & 1) == 0) {
          *(undefined8 *)((long)auStack_c8 + lVar11) = 0x269dffb;
          pvVar14 = (void *)il2cpp_runtime_helper_023009c0();
        }
        *(undefined8 *)((long)auStack_c8 + lVar11) = 0x269e003;
        pIVar15 = (Il2CppObject *)il2cpp_runtime_helper_023052d0(pvVar14);
        pSVar8 = ((pSVar19->fields)._keys[1].fields._dictionary)->klass;
        *(undefined8 *)((long)auStack_c8 + lVar11) = 0x269e016;
        (*(code *)pSVar8)(pIVar15,pvVar12);
        return pIVar15;
      }
      if ((((pSVar7[1].klass)->_2).field_0x6d & 1) == 0) {
        *(undefined8 *)((long)auStack_c8 + lVar11) = 0x269e070;
        lVar13 = il2cpp_runtime_helper_023009c0();
        iVar2 = *(int *)(lVar13 + 0xe4);
      }
      else {
        iVar2 = *(int *)&((pSVar7[1].klass)->_2).field_0x1c;
      }
      if (iVar2 == 0) {
        *(undefined8 *)((long)auStack_c8 + lVar11) = 0x269e081;
        il2cpp_runtime_helper_02337ed0();
        pSVar16 = (pSVar19->fields)._keys[1].klass;
        bVar1 = (pSVar16->_2).field_0x6d;
      }
      else {
        pSVar16 = (pSVar19->fields)._keys[1].klass;
        bVar1 = (pSVar16->_2).field_0x6d;
      }
      if ((bVar1 & 1) == 0) {
        *(undefined8 *)((long)auStack_c8 + lVar11) = 0x269e058;
        pSVar16 = (System_Collections_Generic_Dictionary_KeyCollection_TKey__TValue__c *)il2cpp_runtime_helper_023009c0(pSVar16)
        ;
      }
      return *(Il2CppObject **)pSVar16->static_fields;
    }
    puVar4 = *(undefined8 **)((long)pSVar18[2].monitor + 0x20);
    uVar5 = *puVar4;
    ppIStack_a0 = &pIStack_90;
    pcVar6 = (code *)puVar4[2];
    pvStack_a8 = pvVar14;
    *(undefined8 *)((long)auStack_c8 + lVar11 + 0x18) = 0x269df82;
    (*pcVar6)(uVar5,puVar4,lVar13,&pvStack_a8,&uStack_81);
    return pIStack_90;
  }
  pcStack_58 = (code *)0x269de51;
  System_Collections_Generic_Dictionary_Int32Enum__object___TryGetValue
            (__this_00,(int32_t)a,&pIStack_50,*(MethodInfo_30D5E50 **)((long)pSVar17[2].monitor + 0x20));
  return pIStack_50;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$PanelEnterMotion
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Game_ProfileDialogUi__PanelEnterMotion (const MethodInfo* method);
// 0x4522690

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Game_ProfileDialogUi__PanelEnterMotion(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  
  if (g_data_057aee36 == '\0') {
    il2cpp_runtime_helper_023445d0(&"slideRight");
    g_data_057aee36 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("slideRight",(System_String_o *)0x0,0.16,0.0,0.0,0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$PanelExitMotion
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Game_ProfileDialogUi__PanelExitMotion (const MethodInfo* method);
// 0x45226e0

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Game_ProfileDialogUi__PanelExitMotion(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  
  if (g_data_057aee37 == '\0') {
    il2cpp_runtime_helper_023445d0(&"slideRight");
    g_data_057aee37 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("slideRight",(System_String_o *)0x0,0.16,0.0,0.0,0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$PreviewEnterMotion
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Game_ProfileDialogUi__PreviewEnterMotion (const MethodInfo* method);
// 0x4522730

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Game_ProfileDialogUi__PreviewEnterMotion(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  
  if (g_data_057aee38 == '\0') {
    il2cpp_runtime_helper_023445d0(&"slideRightSmall");
    g_data_057aee38 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("slideRightSmall",(System_String_o *)0x0,0.16,0.0,0.0,1,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$PreviewExitMotion
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Game_ProfileDialogUi__PreviewExitMotion (const MethodInfo* method);
// 0x4522780

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Game_ProfileDialogUi__PreviewExitMotion(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  
  if (g_data_057aee39 == '\0') {
    il2cpp_runtime_helper_023445d0(&"slideRightSmall");
    g_data_057aee39 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("slideRightSmall",(System_String_o *)0x0,0.16,0.0,0.0,1,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$SaveCallout
// il2cpp: void Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveCallout (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x45167b0

void Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveCallout
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  byte bVar1;
  undefined8 *puVar3;
  int variant;
  bool_conflict bVar2;
  
  variant = (int)method;
  if (g_data_057aee3a == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AccountManager);
    il2cpp_runtime_helper_023445d0(&"profile-save-scope");
    il2cpp_runtime_helper_023445d0(&"Changes save only to local Profile.json and stay separate from your account.");
    il2cpp_runtime_helper_023445d0(&"Changes save to your account and sync when you sign in elsewhere.");
    g_data_057aee3a = '\x01';
    if (*(int *)(TypeInfo_AccountManager + 0xe4) == 0) goto label_0451683d;
label_045167d0:
    bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    bVar1 = (byte)bVar2;
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_045167dc;
label_0451684e:
    il2cpp_runtime_helper_022b2c90();
  }
  else {
    if (*(int *)(TypeInfo_AccountManager + 0xe4) != 0) goto label_045167d0;
label_0451683d:
    il2cpp_runtime_helper_02337ed0();
    bVar2 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    bVar1 = (byte)bVar2;
    if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_0451684e;
label_045167dc:
    variant = (uint)(bVar1 ^ 1) * 2;
    if (bVar1 != 0) {
      puVar3 = &"Changes save to your account and sync when you sign in elsewhere.";
      goto label_0451685a;
    }
  }
  puVar3 = &"Changes save only to local Profile.json and stay separate from your account.";
label_0451685a:
  Gisketch_Aottg2UI_Code_AottgUi__Callout
            (ui,variant,(System_String_o *)*puVar3,"profile-save-scope",(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$SaveFooter
// il2cpp: void Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveFooter (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, System_String_o* actionId, const MethodInfo* method);
// 0x4521e80

void Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveFooter
               (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,System_String_o *actionId,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this_00;
  
  __this_00 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)footer;
  if (g_data_057aee3b == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"overlay.close");
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"profile.save.idle");
    __this_00 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&"Save";
    il2cpp_runtime_helper_023445d0();
    g_data_057aee3b = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet(footer,"Cancel","overlay.close",(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgDialogFooter__Primary(footer,"Save",actionId,(MethodInfo *)0x0)
    ;
    __this = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    __this_00 = __this;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)__this,(MethodInfo *)0x0);
    if (__this != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      __this_00 = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(__this->fields).alignSelf;
      (__this->fields).alignSelf = "profile.save.idle";
      il2cpp_runtime_helper_022b4080();
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).contentLayout = __this;
        il2cpp_runtime_helper_022b4080(&(pGVar1->fields).contentLayout,__this);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$SaveFooter
// il2cpp: void Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveFooter (Gisketch_Aottg2UI_Code_AottgUi_o* footer, System_String_o* actionId, const MethodInfo* method);
// 0x45227d0

void Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveFooter_44227d0
               (Gisketch_Aottg2UI_Code_AottgUi_o *footer,System_String_o *actionId,MethodInfo *method)

{
  bool_conflict bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar2;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this;
  System_String_o *pSVar3;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *a;
  long lVar5;
  
  pSVar3 = actionId;
  a = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)footer;
  if (g_data_057aee3c == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_runtime_helper_023445d0(&"overlay.close");
    il2cpp_runtime_helper_023445d0(&"Cancel");
    il2cpp_runtime_helper_023445d0(&"profile.save.idle");
    a = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&"Save";
    il2cpp_runtime_helper_023445d0();
    g_data_057aee3c = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Button
              (footer,3,"Cancel","overlay.close",(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
               (MethodInfo *)0x0);
    pGVar2 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (footer,0,"Save",actionId,(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    __this = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchUIBindingDefinition);
    pSVar3 = (System_String_o *)0x0;
    a = __this;
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)__this,(MethodInfo *)0x0);
    pSVar4 = "profile.save.idle";
    if (__this != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      a = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)&(__this->fields).alignSelf;
      (__this->fields).alignSelf = "profile.save.idle";
      il2cpp_runtime_helper_022b4080();
      pSVar3 = pSVar4;
      if (pGVar2 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar2->fields).contentLayout = __this;
        il2cpp_runtime_helper_022b4080(&(pGVar2->fields).contentLayout,__this);
        return;
      }
    }
  }
  il2cpp_runtime_helper_022b2c90();
  if (g_data_057aee3d == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgProfileDialogSelection);
    il2cpp_runtime_helper_023445d0(&"avatar-picker");
    il2cpp_runtime_helper_023445d0(&"banner-picker");
    g_data_057aee3d = '\x01';
  }
  bVar1 = System_String__op_Equality((System_String_o *)a,"avatar-picker",(MethodInfo *)0x0);
  if ((char)bVar1 == '\0') {
    bVar1 = System_String__op_Equality((System_String_o *)a,"banner-picker",(MethodInfo *)0x0);
    if ((char)bVar1 == '\0') {
      return;
    }
    lVar5 = *(long *)(TypeInfo_AottgProfileDialogSelection + 0xb8);
    *(System_String_o **)(lVar5 + 8) = pSVar3;
    lVar5 = lVar5 + 8;
  }
  else {
    **(undefined8 **)(TypeInfo_AottgProfileDialogSelection + 0xb8) = pSVar3;
    lVar5 = *(long *)(TypeInfo_AottgProfileDialogSelection + 0xb8);
  }
  il2cpp_runtime_helper_022b4080(lVar5,pSVar3);
  return;
}


