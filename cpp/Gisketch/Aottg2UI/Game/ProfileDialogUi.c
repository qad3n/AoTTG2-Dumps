// Type: Gisketch.Aottg2UI.Game.ProfileDialogUi
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/ProfileDialogUi.cs
// Prior source: NEW in this update
// --------------------------------

// Gisketch.Aottg2UI.Game.ProfileDialogUi$$get_SplitRootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_ProfileDialogUi__get_SplitRootLayout (const MethodInfo* method);
// 0x41edb60

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_ProfileDialogUi__get_SplitRootLayout(MethodInfo *method)

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


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$get_SplitBodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_ProfileDialogUi__get_SplitBodyLayout (const MethodInfo* method);
// 0x41edcf0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_ProfileDialogUi__get_SplitBodyLayout(MethodInfo *method)

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


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$GridItems
// il2cpp: Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array* Gisketch_Aottg2UI_Game_ProfileDialogUi__GridItems (Gisketch_Aottg2UI_Game_AottgProfilePreset_array* presets, const MethodInfo* method);
// 0x41e7670

Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *
Gisketch_Aottg2UI_Game_ProfileDialogUi__GridItems
          (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *presets,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *pGVar2;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this;
  System_String_o *area;
  undefined4 uVar3;
  System_String_o *str1;
  System_String_o *pSVar4;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *pGVar5;
  ulong uVar6;
  System_String_o **ppSVar7;
  ulong uVar8;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o *pGVar9;
  undefined1 in_stack_ffffffffffffff58 [12];
  undefined4 in_stack_ffffffffffffff68;
  undefined4 in_stack_ffffffffffffff6c;
  undefined4 in_stack_ffffffffffffff70;
  bool_conflict in_stack_ffffffffffffff74;
  Il2CppMethodPointer local_78;
  Il2CppMethodPointer pIStack_70;
  InvokerMethod local_68;
  char *pcStack_60;
  undefined1 local_58 [40];
  
  if (DAT_05704f58 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchGridPickerItem);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&"ProfileDialogUi.GridItems");
    il2cpp_init_method_metadata(&"presets=");
    DAT_05704f58 = '\x01';
  }
  pSVar4 = "presets=";
  area = "ProfileDialogUi.GridItems";
  local_68 = (InvokerMethod)0x0;
  pcStack_60 = (char *)0x0;
  local_78 = (Il2CppMethodPointer)0x0;
  pIStack_70 = (Il2CppMethodPointer)0x0;
  if (presets == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = (undefined4)presets->max_length;
  }
  str1 = System_Int32__ToString((int32_t)&stack0xffffffffffffff64,(MethodInfo *)0x0);
  pSVar4 = System_String__Concat(pSVar4,str1,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            ((Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *)local_58,area,pSVar4,
             (MethodInfo *)0x0);
  if (presets == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
    pGVar5 = (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *)il2cpp_glue_02274930(TypeInfo_GisketchGridPickerItem,0);
  }
  else {
    pGVar5 = (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *)
             il2cpp_glue_02274930(TypeInfo_GisketchGridPickerItem,(int)presets->max_length);
    if (0 < (int)presets->max_length) {
      if (pGVar5 == (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *)0x0) {
        Gisketch_Aottg2UI_Code_GisketchGridPickerItem___ctor
                  ((Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o)
                   ZEXT1632(CONCAT412(uVar3,in_stack_ffffffffffffff58)),
                   (System_String_o *)&stack0xffffffffffffff68,presets->m_Items[0].fields.Key,
                   presets->m_Items[0].fields.Label,presets->m_Items[0].fields.Sprite,
                   (MethodInfo *)0x0);
                    /* WARNING: Subroutine does not return */
        il2cpp_raise_exception();
      }
      uVar6 = presets->max_length & 0xffffffff;
      ppSVar7 = &presets->m_Items[0].fields.Sprite;
      uVar8 = 0;
      pGVar2 = pGVar5;
      do {
        pGVar9 = pGVar2->m_Items;
        if (uVar6 <= uVar8) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        in_stack_ffffffffffffff68 = 0;
        in_stack_ffffffffffffff6c = 0;
        in_stack_ffffffffffffff70 = 0;
        in_stack_ffffffffffffff74 = 0;
        Gisketch_Aottg2UI_Code_GisketchGridPickerItem___ctor
                  ((Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o)
                   ZEXT1632(CONCAT412(uVar3,in_stack_ffffffffffffff58)),
                   (System_String_o *)&stack0xffffffffffffff68,
                   ((Gisketch_Aottg2UI_Game_AottgProfilePreset_Fields *)(ppSVar7 + -2))->Key,
                   ppSVar7[-1],*ppSVar7,(MethodInfo *)0x0);
        local_58._16_4_ = 0;
        local_58._20_4_ = 0;
        local_58._24_4_ = 0;
        local_58._28_4_ = 0;
        local_58._0_4_ = in_stack_ffffffffffffff68;
        local_58._4_4_ = in_stack_ffffffffffffff6c;
        local_58._8_4_ = in_stack_ffffffffffffff70;
        local_58._12_4_ = in_stack_ffffffffffffff74;
        if ((uint)pGVar5->max_length <= uVar8) {
                    /* WARNING: Subroutine does not return */
          il2cpp_raise_exception();
        }
        *(undefined4 *)&pGVar2->m_Items[0].fields.Sprite = 0;
        *(undefined4 *)((long)&pGVar2->m_Items[0].fields.Sprite + 4) = 0;
        *(undefined4 *)&pGVar2->m_Items[0].fields.Keywords = 0;
        *(undefined4 *)((long)&pGVar2->m_Items[0].fields.Keywords + 4) = 0;
        *(undefined4 *)&(pGVar9->fields).Key = in_stack_ffffffffffffff68;
        *(undefined4 *)((long)&pGVar2->m_Items[0].fields.Key + 4) = in_stack_ffffffffffffff6c;
        *(undefined4 *)&pGVar2->m_Items[0].fields.Label = in_stack_ffffffffffffff70;
        *(bool_conflict *)((long)&pGVar2->m_Items[0].fields.Label + 4) = in_stack_ffffffffffffff74;
        il2cpp_runtime_glue(pGVar9,0);
        uVar8 = uVar8 + 1;
        uVar1 = (uint)presets->max_length;
        uVar6 = (ulong)uVar1;
        ppSVar7 = ppSVar7 + 3;
        pGVar2 = (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *)pGVar9;
      } while ((long)uVar8 < (long)(int)uVar1);
    }
  }
  __this.fields._detail._4_4_ = uVar3;
  __this.fields._0_12_ = in_stack_ffffffffffffff58;
  __this.fields._startMs._0_4_ = in_stack_ffffffffffffff68;
  __this.fields._startMs._4_4_ = in_stack_ffffffffffffff6c;
  __this.fields._enabled = in_stack_ffffffffffffff70;
  __this.fields._hotLoop = in_stack_ffffffffffffff74;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this,(MethodInfo *)&local_78);
  return pGVar5;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$SelectAvatar
// il2cpp: void Gisketch_Aottg2UI_Game_ProfileDialogUi__SelectAvatar (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item, const MethodInfo* method);
// 0x41f0c40

void Gisketch_Aottg2UI_Game_ProfileDialogUi__SelectAvatar
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,
               Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item,MethodInfo *method)

{
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this;
  undefined1 uVar1;
  bool_conflict bVar2;
  System_String_o *detail;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_UI_Image_o *__this_00;
  System_String_o *pSVar4;
  UnityEngine_Sprite_o *value;
  undefined1 in_stack_ffffffffffffff78 [15];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool_conflict bVar8;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o GStack_50;
  
  if (DAT_05704f59 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgProfileDialogSelection);
    il2cpp_init_method_metadata(&"profile-preview-avatar-image");
    DAT_05704f59 = '\x01';
  }
  **(undefined8 **)(TypeInfo_AottgProfileDialogSelection + 0xb8) = item.fields.Key;
  il2cpp_runtime_glue(*(undefined8 *)(TypeInfo_AottgProfileDialogSelection + 0xb8));
  pSVar4 = "profile-preview-avatar-image";
  if (DAT_05704f5b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchSpriteLoader);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Image_Find_Image);
    il2cpp_init_method_metadata(&" sprite=");
    il2cpp_init_method_metadata(&"found=");
    il2cpp_init_method_metadata(&"ProfileDialogUi.UpdatePreviewImage");
    DAT_05704f5b = '\x01';
  }
  detail = System_String__Concat(pSVar4," sprite=",item.fields.Sprite,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            (&GStack_50,"ProfileDialogUi.UpdatePreviewImage",detail,(MethodInfo *)0x0);
  uVar5 = GStack_50.fields._area._0_4_;
  uVar6 = GStack_50.fields._area._4_4_;
  uVar7 = GStack_50.fields._detail._0_4_;
  bVar8 = GStack_50.fields._detail._4_4_;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
    uVar5 = GStack_50.fields._area._0_4_;
    uVar6 = GStack_50.fields._area._4_4_;
    uVar7 = GStack_50.fields._detail._0_4_;
    bVar8 = GStack_50.fields._detail._4_4_;
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pUVar3 = (UnityEngine_Transform_o *)0x0;
  }
  else {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar3 = UnityEngine_GameObject__get_transform(context.fields.GameObject,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar3 = UnityEngine_Transform__get_root(pUVar3,(MethodInfo *)0x0);
  }
  __this_00 = (UnityEngine_UI_Image_o *)
              Gisketch_Aottg2UI_Game_ProfileDialogUi__Find<object>(pUVar3,pSVar4,MethodInfo_Image_Find_Image);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  uVar1 = (undefined1)bVar2;
  if (*(int *)(DAT_05711048 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar4 = System_Boolean__ToString((bool_conflict)&stack0xffffffffffffff87,(MethodInfo *)0x0);
  pSVar4 = System_String__Concat("found=",pSVar4,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ProfileDialogUi.UpdatePreviewImage",pSVar4,(MethodInfo *)0x0);
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if ((char)bVar2 != '\0') {
    if (*(int *)(TypeInfo_GisketchSpriteLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load
                      (item.fields.Sprite,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_UI_Image_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UnityEngine_UI_Image__set_sprite(__this_00,value,(MethodInfo *)0x0);
  }
  __this.fields._detail._7_1_ = uVar1;
  __this.fields._0_15_ = in_stack_ffffffffffffff78;
  __this.fields._startMs._0_4_ = uVar5;
  __this.fields._startMs._4_4_ = uVar6;
  __this.fields._enabled = uVar7;
  __this.fields._hotLoop = bVar8;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this,(MethodInfo *)&stack0xffffffffffffff88);
  return;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$SelectBanner
// il2cpp: void Gisketch_Aottg2UI_Game_ProfileDialogUi__SelectBanner (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item, const MethodInfo* method);
// 0x41f0ff0

void Gisketch_Aottg2UI_Game_ProfileDialogUi__SelectBanner
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,
               Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item,MethodInfo *method)

{
  long lVar1;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this;
  undefined1 uVar2;
  bool_conflict bVar3;
  System_String_o *detail;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_UI_Image_o *__this_00;
  System_String_o *pSVar5;
  UnityEngine_Sprite_o *value;
  undefined1 in_stack_ffffffffffffff78 [15];
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  bool_conflict bVar9;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o GStack_50;
  
  if (DAT_05704f5a == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AottgProfileDialogSelection);
    il2cpp_init_method_metadata(&"profile-preview-banner-image");
    DAT_05704f5a = '\x01';
  }
  lVar1 = *(long *)(TypeInfo_AottgProfileDialogSelection + 0xb8);
  *(System_String_o **)(lVar1 + 8) = item.fields.Key;
  il2cpp_runtime_glue(lVar1 + 8);
  pSVar5 = "profile-preview-banner-image";
  if (DAT_05704f5b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchSpriteLoader);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Image_Find_Image);
    il2cpp_init_method_metadata(&" sprite=");
    il2cpp_init_method_metadata(&"found=");
    il2cpp_init_method_metadata(&"ProfileDialogUi.UpdatePreviewImage");
    DAT_05704f5b = '\x01';
  }
  detail = System_String__Concat(pSVar5," sprite=",item.fields.Sprite,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            (&GStack_50,"ProfileDialogUi.UpdatePreviewImage",detail,(MethodInfo *)0x0);
  uVar6 = GStack_50.fields._area._0_4_;
  uVar7 = GStack_50.fields._area._4_4_;
  uVar8 = GStack_50.fields._detail._0_4_;
  bVar9 = GStack_50.fields._detail._4_4_;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
    uVar6 = GStack_50.fields._area._0_4_;
    uVar7 = GStack_50.fields._area._4_4_;
    uVar8 = GStack_50.fields._detail._0_4_;
    bVar9 = GStack_50.fields._detail._4_4_;
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar3 == '\0') {
    pUVar4 = (UnityEngine_Transform_o *)0x0;
  }
  else {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar4 = UnityEngine_GameObject__get_transform(context.fields.GameObject,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar4 = UnityEngine_Transform__get_root(pUVar4,(MethodInfo *)0x0);
  }
  __this_00 = (UnityEngine_UI_Image_o *)
              Gisketch_Aottg2UI_Game_ProfileDialogUi__Find<object>(pUVar4,pSVar5,MethodInfo_Image_Find_Image);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  uVar2 = (undefined1)bVar3;
  if (*(int *)(DAT_05711048 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar5 = System_Boolean__ToString((bool_conflict)&stack0xffffffffffffff87,(MethodInfo *)0x0);
  pSVar5 = System_String__Concat("found=",pSVar5,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ProfileDialogUi.UpdatePreviewImage",pSVar5,(MethodInfo *)0x0);
  bVar3 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if ((char)bVar3 != '\0') {
    if (*(int *)(TypeInfo_GisketchSpriteLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load
                      (item.fields.Sprite,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_UI_Image_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UnityEngine_UI_Image__set_sprite(__this_00,value,(MethodInfo *)0x0);
  }
  __this.fields._detail._7_1_ = uVar2;
  __this.fields._0_15_ = in_stack_ffffffffffffff78;
  __this.fields._startMs._0_4_ = uVar6;
  __this.fields._startMs._4_4_ = uVar7;
  __this.fields._enabled = uVar8;
  __this.fields._hotLoop = bVar9;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this,(MethodInfo *)&stack0xffffffffffffff88);
  return;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$UpdatePreviewImage
// il2cpp: void Gisketch_Aottg2UI_Game_ProfileDialogUi__UpdatePreviewImage (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* imageId, System_String_o* sprite, const MethodInfo* method);
// 0x41f0cb0

void Gisketch_Aottg2UI_Game_ProfileDialogUi__UpdatePreviewImage
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *imageId,
               System_String_o *sprite,MethodInfo *method)

{
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this;
  undefined1 uVar1;
  bool_conflict bVar2;
  System_String_o *pSVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_UI_Image_o *__this_00;
  UnityEngine_Sprite_o *value;
  undefined1 in_stack_ffffffffffffff78 [15];
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  bool_conflict bVar8;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o GStack_50;
  
  if (DAT_05704f5b == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchSpriteLoader);
    il2cpp_init_method_metadata(&TypeInfo_GisketchUiPerfLog);
    il2cpp_init_method_metadata(&TypeInfo_Object);
    il2cpp_init_method_metadata(&MethodInfo_Image_Find_Image);
    il2cpp_init_method_metadata(&" sprite=");
    il2cpp_init_method_metadata(&"found=");
    il2cpp_init_method_metadata(&"ProfileDialogUi.UpdatePreviewImage");
    DAT_05704f5b = '\x01';
  }
  pSVar3 = System_String__Concat(imageId," sprite=",sprite,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            (&GStack_50,"ProfileDialogUi.UpdatePreviewImage",pSVar3,(MethodInfo *)0x0);
  uVar5 = GStack_50.fields._area._0_4_;
  uVar6 = GStack_50.fields._area._4_4_;
  uVar7 = GStack_50.fields._detail._0_4_;
  bVar8 = GStack_50.fields._detail._4_4_;
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
    uVar5 = GStack_50.fields._area._0_4_;
    uVar6 = GStack_50.fields._area._4_4_;
    uVar7 = GStack_50.fields._detail._0_4_;
    bVar8 = GStack_50.fields._detail._4_4_;
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if ((char)bVar2 == '\0') {
    pUVar4 = (UnityEngine_Transform_o *)0x0;
  }
  else {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar4 = UnityEngine_GameObject__get_transform(context.fields.GameObject,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    pUVar4 = UnityEngine_Transform__get_root(pUVar4,(MethodInfo *)0x0);
  }
  __this_00 = (UnityEngine_UI_Image_o *)
              Gisketch_Aottg2UI_Game_ProfileDialogUi__Find<object>(pUVar4,imageId,MethodInfo_Image_Find_Image);
  if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
    il2cpp_init_class();
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  uVar1 = (undefined1)bVar2;
  if (*(int *)(DAT_05711048 + 0xe4) == 0) {
    il2cpp_init_class();
  }
  pSVar3 = System_Boolean__ToString((bool_conflict)&stack0xffffffffffffff87,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat("found=",pSVar3,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_init_class();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ProfileDialogUi.UpdatePreviewImage",pSVar3,(MethodInfo *)0x0);
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0
                    );
  if ((char)bVar2 != '\0') {
    if (*(int *)(TypeInfo_GisketchSpriteLoader + 0xe4) == 0) {
      il2cpp_init_class();
    }
    value = Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load(sprite,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_UI_Image_o *)0x0) {
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    UnityEngine_UI_Image__set_sprite(__this_00,value,(MethodInfo *)0x0);
  }
  __this.fields._detail._7_1_ = uVar1;
  __this.fields._0_15_ = in_stack_ffffffffffffff78;
  __this.fields._startMs._0_4_ = uVar5;
  __this.fields._startMs._4_4_ = uVar6;
  __this.fields._enabled = uVar7;
  __this.fields._hotLoop = bVar8;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            (__this,(MethodInfo *)&stack0xffffffffffffff88);
  return;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$Find<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_ProfileDialogUi__Find_object_ (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo_2559E50* method);
// 0x2659e50

Il2CppObject *
Gisketch_Aottg2UI_Game_ProfileDialogUi__Find<object>
          (UnityEngine_Transform_o *root,System_String_o *id,MethodInfo_2559E50 *method)

{
  int iVar1;
  uint uVar2;
  UnityEngine_Object_o *x;
  bool_conflict bVar3;
  System_Object_array *pSVar4;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  ulong uVar5;
  
  if ((method->rgctx_data == (MethodInfo_2559E50_RGCTXs *)0x0) &&
     (il2cpp_init_method_metadata(&TypeInfo_Object), method->rgctx_data == (MethodInfo_2559E50_RGCTXs *)0x0)) {
    il2cpp_glue_022c2910(method);
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_Object + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (((char)bVar3 == '\0') &&
     (bVar3 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0), (char)bVar3 == '\0')) {
    if ((root == (UnityEngine_Transform_o *)0x0) ||
       (pSVar4 = UnityEngine_Component__GetComponentsInChildren<object>
                           ((UnityEngine_Component_o *)root,1,
                            (MethodInfo_24A5220 *)
                            method->rgctx_data->_1_UnityEngine_Component_GetComponentsInChildren_T_)
       , pSVar4 == (System_Object_array *)0x0)) {
LAB_02659fbc:
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
    if (0 < (int)pSVar4->max_length) {
      uVar5 = 0;
      if ((pSVar4->max_length & 0xffffffff) != 0) {
        do {
          x = (UnityEngine_Object_o *)pSVar4->m_Items[uVar5];
          if (*(int *)(TypeInfo_Object + 0xe4) == 0) {
            il2cpp_init_class();
          }
          bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0)
          ;
          if ((char)bVar3 != '\0') {
            if ((x == (UnityEngine_Object_o *)0x0) ||
               (__this = (UnityEngine_Object_o *)
                         UnityEngine_Component__get_gameObject
                                   ((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
               __this == (UnityEngine_Object_o *)0x0)) goto LAB_02659fbc;
            a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
            bVar3 = System_String__op_Equality(a,id,(MethodInfo *)0x0);
            if ((char)bVar3 != '\0') {
              return (Il2CppObject *)x;
            }
          }
          uVar5 = uVar5 + 1;
          uVar2 = (uint)pSVar4->max_length;
          if ((long)(int)uVar2 <= (long)uVar5) {
            return (Il2CppObject *)0x0;
          }
        } while (uVar5 < uVar2);
      }
                    /* WARNING: Subroutine does not return */
      il2cpp_raise_exception();
    }
  }
  return (Il2CppObject *)0x0;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$PanelEnterMotion
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Game_ProfileDialogUi__PanelEnterMotion (const MethodInfo* method);
// 0x41e1a60

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Game_ProfileDialogUi__PanelEnterMotion(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  
  if (DAT_05704f5c == '\0') {
    il2cpp_init_method_metadata(&"slideRight");
    DAT_05704f5c = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("slideRight",(System_String_o *)0x0,0.16,0.0,0.0,0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$PanelExitMotion
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Game_ProfileDialogUi__PanelExitMotion (const MethodInfo* method);
// 0x41e1ab0

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Game_ProfileDialogUi__PanelExitMotion(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  
  if (DAT_05704f5d == '\0') {
    il2cpp_init_method_metadata(&"slideRight");
    DAT_05704f5d = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("slideRight",(System_String_o *)0x0,0.16,0.0,0.0,0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$PreviewEnterMotion
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Game_ProfileDialogUi__PreviewEnterMotion (const MethodInfo* method);
// 0x41f1060

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Game_ProfileDialogUi__PreviewEnterMotion(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  
  if (DAT_05704f5e == '\0') {
    il2cpp_init_method_metadata(&"slideRightSmall");
    DAT_05704f5e = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("slideRightSmall",(System_String_o *)0x0,0.16,0.0,0.0,1,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$PreviewExitMotion
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Game_ProfileDialogUi__PreviewExitMotion (const MethodInfo* method);
// 0x41f10b0

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Game_ProfileDialogUi__PreviewExitMotion(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  
  if (DAT_05704f5f == '\0') {
    il2cpp_init_method_metadata(&"slideRightSmall");
    DAT_05704f5f = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("slideRightSmall",(System_String_o *)0x0,0.16,0.0,0.0,1,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$SaveCallout
// il2cpp: void Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveCallout (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x41e57c0

void Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveCallout
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  int iVar1;
  byte bVar2;
  undefined8 *puVar4;
  bool_conflict bVar3;
  
  if (DAT_05704f60 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_AccountManager);
    il2cpp_init_method_metadata(&"profile-save-scope");
    il2cpp_init_method_metadata(&"Changes save only to local Profile.json and stay separate from your account.");
    il2cpp_init_method_metadata(&"Changes save to your account and sync when you sign in elsewhere.");
    DAT_05704f60 = '\x01';
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  else {
    iVar1 = *(int *)(TypeInfo_AccountManager + 0xe4);
  }
  if (iVar1 == 0) {
    il2cpp_init_class();
    bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    bVar2 = (byte)bVar3;
  }
  else {
    bVar3 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
    bVar2 = (byte)bVar3;
  }
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    if (bVar2 == 0) {
      puVar4 = &"Changes save only to local Profile.json and stay separate from your account.";
    }
    else {
      puVar4 = &"Changes save to your account and sync when you sign in elsewhere.";
    }
    Gisketch_Aottg2UI_Code_AottgUi__Callout
              (ui,(uint)(bVar2 ^ 1) * 2,(System_String_o *)*puVar4,"profile-save-scope",(MethodInfo *)0x0);
    return;
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$SaveFooter
// il2cpp: void Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveFooter (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, System_String_o* actionId, const MethodInfo* method);
// 0x41f0960

void Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveFooter
               (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,System_String_o *actionId,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this;
  
  if (DAT_05704f61 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_init_method_metadata(&"overlay.close");
    il2cpp_init_method_metadata(&"Cancel");
    il2cpp_init_method_metadata(&"profile.save.idle");
    il2cpp_init_method_metadata(&"Save");
    DAT_05704f61 = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__Quiet
              (footer,"Cancel","overlay.close",(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgDialogFooter__Primary
                       (footer,"Save",actionId,(MethodInfo *)0x0);
    __this = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)__this,(MethodInfo *)0x0);
    if (__this != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (__this->fields).alignSelf = "profile.save.idle";
      il2cpp_runtime_glue(&(__this->fields).alignSelf);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).contentLayout = __this;
        il2cpp_runtime_glue(&(pGVar1->fields).contentLayout,__this);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$SaveFooter
// il2cpp: void Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveFooter (Gisketch_Aottg2UI_Code_AottgUi_o* footer, System_String_o* actionId, const MethodInfo* method);
// 0x41f1100

void Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveFooter
               (Gisketch_Aottg2UI_Code_AottgUi_o *footer,System_String_o *actionId,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *__this;
  
  if (DAT_05704f62 == '\0') {
    il2cpp_init_method_metadata(&TypeInfo_GisketchUIBindingDefinition);
    il2cpp_init_method_metadata(&"overlay.close");
    il2cpp_init_method_metadata(&"Cancel");
    il2cpp_init_method_metadata(&"profile.save.idle");
    il2cpp_init_method_metadata(&"Save");
    DAT_05704f62 = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Button
              (footer,3,"Cancel","overlay.close",(System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
               (MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Button
                       (footer,0,"Save",actionId,(System_String_o *)0x0,(System_String_o *)0x0
                        ,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (System_String_o *)0x0,(MethodInfo *)0x0);
    __this = (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)il2cpp_runtime_glue(TypeInfo_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)__this,(MethodInfo *)0x0);
    if (__this != (Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *)0x0) {
      (__this->fields).alignSelf = "profile.save.idle";
      il2cpp_runtime_glue(&(__this->fields).alignSelf);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).contentLayout = __this;
        il2cpp_runtime_glue(&(pGVar1->fields).contentLayout,__this);
        return;
      }
    }
  }
                    /* WARNING: Subroutine does not return */
  il2cpp_raise_exception();
}


