// Type: Gisketch.Aottg2UI.Game.AottgChangeEmoteStickerDialog
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/AottgChangeEmoteStickerDialog.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.AottgChangeEmoteStickerDialog.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___c___cctor (const MethodInfo* method);
// 0x4518940

void Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (g_data_057aede2 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    g_data_057aede2 = '\x01';
  }
  __this = (Il2CppObject *)il2cpp_runtime_helper_023052d0(TypeInfo_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  **(undefined8 **)(TypeInfo_c + 0xb8) = __this;
  il2cpp_runtime_helper_022b4080(*(undefined8 *)(TypeInfo_c + 0xb8),__this);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteStickerDialog.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___c___ctor (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___c_o* __this, const MethodInfo* method);
// 0x45189b0

void Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___c___ctor
               (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteStickerDialog.<>c$$<BuildBody>b__7_0
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___c___BuildBody_b__7_0 (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___c_o* __this, Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item, const MethodInfo* method);
// 0x45189c0

void Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___c___BuildBody_b__7_0
               (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___c_o *__this,
               Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,
               Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item,MethodInfo *method)

{
  if (g_data_057aede3 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_AottgEmoteSlotActions);
    g_data_057aede3 = '\x01';
  }
  if (**(long **)(TypeInfo_AottgEmoteSlotActions + 0xb8) != 0) {
    il2cpp_runtime_helper_04532330(**(long **)(TypeInfo_AottgEmoteSlotActions + 0xb8),item.fields.Key,0);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteStickerDialog$$get_Title
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog__get_Title (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_o* __this, const MethodInfo* method);
// 0x4518370

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog__get_Title
          (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_o *__this,MethodInfo *method)

{
  if (g_data_057aedde == '\0') {
    il2cpp_runtime_helper_023445d0(&"Change Emote Sticker");
    g_data_057aedde = '\x01';
  }
  return "Change Emote Sticker";
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteStickerDialog$$get_TitleIcon
// il2cpp: System_String_o* Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog__get_TitleIcon (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_o* __this, const MethodInfo* method);
// 0x45183a0

System_String_o *
Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog__get_TitleIcon
          (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_o *__this,MethodInfo *method)

{
  if (g_data_057aeddf == '\0') {
    il2cpp_runtime_helper_023445d0(&"material-icons/chat");
    g_data_057aeddf = '\x01';
  }
  return "material-icons/chat";
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteStickerDialog$$get_RootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog__get_RootLayout (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_o* __this, const MethodInfo* method);
// 0x45183d0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog__get_RootLayout
          (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_o *__this,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  float fVar2;
  
  if (g_data_057aede0 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchGridPicker);
    il2cpp_runtime_helper_023445d0(&"Column");
    il2cpp_runtime_helper_023445d0(&"Stretch");
    g_data_057aede0 = '\x01';
  }
  if (*(int *)(TypeInfo_GisketchGridPicker + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  fVar2 = Gisketch_Aottg2UI_Code_GisketchGridPicker__PreferredWidthFor(4,132.0,(MethodInfo *)0x0);
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(fVar2 + 36.0,(MethodInfo *)0x0);
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


// Gisketch.Aottg2UI.Game.AottgChangeEmoteStickerDialog$$BuildBody
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog__BuildBody (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* body, const MethodInfo* method);
// 0x45184d0

void Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog__BuildBody
               (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *body,MethodInfo *method)

{
  uint uVar1;
  long lVar2;
  undefined4 *puVar3;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_00;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_01;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o __this_02;
  System_String_o *pSVar4;
  undefined4 uVar5;
  Gisketch_Aottg2UI_Game_AottgProfilePreset_array *presets;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *pGVar6;
  System_Action_GisketchActionContext__GisketchGridPickerItem__o *select;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_o *__this_03;
  System_String_o *str1;
  System_String_o *pSVar7;
  undefined4 *puVar8;
  ulong uVar9;
  long *plVar10;
  System_Action_GisketchActionContext__GisketchGridPickerItem__o **ppSVar11;
  ulong uVar12;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_Code_GisketchGridPicker_o *pGVar13;
  undefined4 *puVar14;
  undefined1 auVar15 [12];
  undefined1 in_stack_ffffffffffffff20 [12];
  undefined4 in_stack_ffffffffffffff30;
  undefined4 uVar16;
  undefined4 in_stack_ffffffffffffff34;
  undefined4 uVar17;
  undefined4 in_stack_ffffffffffffff38;
  undefined4 uVar18;
  bool_conflict in_stack_ffffffffffffff3c;
  bool_conflict bVar19;
  undefined1 auStack_b0 [36];
  undefined4 uStack_8c;
  undefined4 uStack_88;
  bool_conflict bStack_84;
  Il2CppType **ppIStack_80;
  _union_13 _Stack_78;
  System_Action_GisketchActionContext__GisketchGridPickerItem__o *pSStack_68;
  System_String_o *pSStack_60;
  System_String_o *pSStack_58;
  Gisketch_Aottg2UI_Code_AottgUi_o *pGStack_50;
  
  method_00 = (MethodInfo *)body;
  if (g_data_057aede1 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_Action_GisketchActionContext_GisketchGridPickerItem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchGridPicker);
    il2cpp_runtime_helper_023445d0(&MethodInfo_Void_BuildBody_b__7_0);
    il2cpp_runtime_helper_023445d0(&TypeInfo_c);
    il2cpp_runtime_helper_023445d0(&"emote-sticker-picker");
    __this = (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_o *)&"Search stickers";
    il2cpp_runtime_helper_023445d0();
    g_data_057aede1 = '\x01';
  }
  presets = Gisketch_Aottg2UI_Game_AottgEmoteCatalog__StickerPresets((MethodInfo *)__this);
  pGVar6 = Gisketch_Aottg2UI_Game_ProfileDialogUi__GridItems(presets,method_00);
  if (*(int *)(TypeInfo_c + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  pSVar7 = "emote-sticker-picker";
  pSVar4 = "Search stickers";
  select = *(System_Action_GisketchActionContext__GisketchGridPickerItem__o **)
            (*(long *)(TypeInfo_c + 0xb8) + 8);
  if (select == (System_Action_GisketchActionContext__GisketchGridPickerItem__o *)0x0) {
    if (*(int *)(TypeInfo_c + 0xe4) == 0) {
      il2cpp_runtime_helper_02337ed0();
    }
    select = (System_Action_GisketchActionContext__GisketchGridPickerItem__o *)
             il2cpp_runtime_helper_023052d0(TypeInfo_Action_GisketchActionContext_GisketchGridPickerItem);
    System_Action_GisketchActionContext__GisketchGridPickerItem____ctor();
    lVar2 = *(long *)(TypeInfo_c + 0xb8);
    *(System_Action_GisketchActionContext__GisketchGridPickerItem__o **)(lVar2 + 8) = select;
    il2cpp_runtime_helper_022b4080(lVar2 + 8,select);
  }
  __this_03 = (Gisketch_Aottg2UI_Code_GisketchGridPicker_o *)il2cpp_runtime_helper_023052d0(TypeInfo_GisketchGridPicker);
  pGStack_50 = (Gisketch_Aottg2UI_Code_AottgUi_o *)0x451863a;
  pGVar13 = __this_03;
  Gisketch_Aottg2UI_Code_GisketchGridPicker___ctor
            (__this_03,pSVar7,pGVar6,4,132.0,132.0,68.0,68.0,pSVar4,select,420.0,1,(MethodInfo *)0x0);
  if (body != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__Component
              (body,(Gisketch_Aottg2UI_Code_AottgComponent_o *)__this_03,(MethodInfo *)0x0);
    return;
  }
  il2cpp_runtime_helper_022b2c90();
  pSStack_58 = pSVar7;
  pSStack_60 = pSVar4;
  pSStack_68 = select;
  pGStack_50 = body;
  if (g_data_057aee32 == '\0') {
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchGridPickerItem);
    il2cpp_runtime_helper_023445d0(&TypeInfo_GisketchUiPerfLog);
    il2cpp_runtime_helper_023445d0(&"ProfileDialogUi.GridItems");
    il2cpp_runtime_helper_023445d0(&"presets=");
    g_data_057aee32 = '\x01';
  }
  pSVar7 = "presets=";
  pSVar4 = "ProfileDialogUi.GridItems";
  auStack_b0._16_8_ = (InvokerMethod)0x0;
  auStack_b0._24_8_ = (char *)0x0;
  auStack_b0._0_8_ = (Il2CppMethodPointer)0x0;
  auStack_b0._8_8_ = (Il2CppMethodPointer)0x0;
  if (pGVar13 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_o *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)&(pGVar13->fields)._items;
  }
  str1 = System_Int32__ToString((int32_t)&stack0xffffffffffffff2c,(MethodInfo *)0x0);
  pSVar7 = System_String__Concat_3ae5ba0(pSVar7,str1,(MethodInfo *)0x0);
  if (*(int *)(TypeInfo_GisketchUiPerfLog + 0xe4) == 0) {
    il2cpp_runtime_helper_02337ed0();
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            ((Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *)(auStack_b0 + 0x20),pSVar4,pSVar7,
             (MethodInfo *)0x0);
  if (pGVar13 == (Gisketch_Aottg2UI_Code_GisketchGridPicker_o *)0x0) {
    il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchGridPickerItem,0);
  }
  else {
    puVar8 = (undefined4 *)il2cpp_runtime_helper_022b2a40(TypeInfo_GisketchGridPickerItem,*(undefined4 *)&(pGVar13->fields)._items);
    pGVar6 = (pGVar13->fields)._items;
    if (0 < (int)pGVar6) {
      if (puVar8 == (undefined4 *)0x0) {
label_0451885c:
        uVar16 = 0;
        uVar17 = 0;
        uVar18 = 0;
        bVar19 = 0;
        Gisketch_Aottg2UI_Code_GisketchGridPickerItem___ctor
                  ((Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o)
                   ZEXT1632(CONCAT412(uVar5,in_stack_ffffffffffffff20)),
                   (System_String_o *)&stack0xffffffffffffff30,
                   *(System_String_o **)&(pGVar13->fields)._columns,
                   *(System_String_o **)&(pGVar13->fields)._itemHeight,
                   *(System_String_o **)&(pGVar13->fields)._thumbnailHeight,(MethodInfo *)0x0);
        auVar15 = il2cpp_runtime_helper_022b2c90();
        if (auVar15._8_4_ == 1) {
          plVar10 = (long *)__cxa_begin_catch(auVar15._0_8_);
          lVar2 = *plVar10;
          __cxa_end_catch();
          __this_01.fields._detail._4_4_ = uVar5;
          __this_01.fields._0_12_ = in_stack_ffffffffffffff20;
          __this_01.fields._startMs._0_4_ = uVar16;
          __this_01.fields._startMs._4_4_ = uVar17;
          __this_01.fields._enabled = uVar18;
          __this_01.fields._hotLoop = bVar19;
          Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_01,(MethodInfo *)auStack_b0);
          if (lVar2 == 0) {
            return;
          }
          il2cpp_runtime_helper_022fefe0(lVar2);
        }
        __this_02.fields._detail._4_4_ = uVar5;
        __this_02.fields._0_12_ = in_stack_ffffffffffffff20;
        __this_02.fields._startMs._0_4_ = uVar16;
        __this_02.fields._startMs._4_4_ = uVar17;
        __this_02.fields._enabled = uVar18;
        __this_02.fields._hotLoop = bVar19;
        Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_02,(MethodInfo *)auStack_b0);
        _Unwind_Resume(auVar15._0_8_);
      }
      uVar9 = (ulong)pGVar6 & 0xffffffff;
      ppSVar11 = (System_Action_GisketchActionContext__GisketchGridPickerItem__o **)
                 &(pGVar13->fields)._thumbnailHeight;
      uVar12 = 0;
      puVar3 = puVar8;
      do {
        puVar14 = puVar3 + 8;
        if (uVar9 <= uVar12) {
          il2cpp_runtime_helper_022b2ca0();
label_04518857:
          il2cpp_runtime_helper_022b2ca0();
          goto label_0451885c;
        }
        in_stack_ffffffffffffff30 = 0;
        in_stack_ffffffffffffff34 = 0;
        in_stack_ffffffffffffff38 = 0;
        in_stack_ffffffffffffff3c = 0;
        Gisketch_Aottg2UI_Code_GisketchGridPickerItem___ctor
                  ((Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o)
                   ZEXT1632(CONCAT412(uVar5,in_stack_ffffffffffffff20)),
                   (System_String_o *)&stack0xffffffffffffff30,(System_String_o *)ppSVar11[-2],
                   (System_String_o *)ppSVar11[-1],(System_String_o *)*ppSVar11,(MethodInfo *)0x0);
        ppIStack_80 = (Il2CppType **)0x0;
        _Stack_78.rgctx_data = (Il2CppRGCTXData *)0x0;
        auStack_b0._32_4_ = in_stack_ffffffffffffff30;
        uStack_8c = in_stack_ffffffffffffff34;
        uStack_88 = in_stack_ffffffffffffff38;
        bStack_84 = in_stack_ffffffffffffff3c;
        if ((uint)puVar8[6] <= uVar12) goto label_04518857;
        puVar3[0xc] = 0;
        puVar3[0xd] = 0;
        puVar3[0xe] = 0;
        puVar3[0xf] = 0;
        *puVar14 = in_stack_ffffffffffffff30;
        puVar3[9] = in_stack_ffffffffffffff34;
        puVar3[10] = in_stack_ffffffffffffff38;
        puVar3[0xb] = in_stack_ffffffffffffff3c;
        il2cpp_runtime_helper_022b4080(puVar14,0);
        uVar12 = uVar12 + 1;
        uVar1 = *(uint *)&(pGVar13->fields)._items;
        uVar9 = (ulong)uVar1;
        ppSVar11 = ppSVar11 + 3;
        puVar3 = puVar14;
      } while ((long)uVar12 < (long)(int)uVar1);
    }
  }
  __this_00.fields._detail._4_4_ = uVar5;
  __this_00.fields._0_12_ = in_stack_ffffffffffffff20;
  __this_00.fields._startMs._0_4_ = in_stack_ffffffffffffff30;
  __this_00.fields._startMs._4_4_ = in_stack_ffffffffffffff34;
  __this_00.fields._enabled = in_stack_ffffffffffffff38;
  __this_00.fields._hotLoop = in_stack_ffffffffffffff3c;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(__this_00,(MethodInfo *)auStack_b0);
  return;
}


// Gisketch.Aottg2UI.Game.AottgChangeEmoteStickerDialog$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___ctor (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_o* __this, const MethodInfo* method);
// 0x4518930

void Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog___ctor
               (Gisketch_Aottg2UI_Game_AottgChangeEmoteStickerDialog_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


