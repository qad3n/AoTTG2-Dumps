// Type: Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.SettingsScreen/AottgSettingsGroup.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup.<>c__DisplayClass15_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___c__DisplayClass15_0___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___c__DisplayClass15_0_o* __this, const MethodInfo* method);
// 0x5e41790

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___c__DisplayClass15_0___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___c__DisplayClass15_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup.<>c__DisplayClass15_0$$<Build>b__0
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___c__DisplayClass15_0___Build_b__0 (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___c__DisplayClass15_0_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* group, const MethodInfo* method);
// 0x5e42500

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___c__DisplayClass15_0___Build_b__0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___c__DisplayClass15_0_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *group,MethodInfo *method)

{
  uint uVar1;
  MethodInfo *__this_00;
  bool bVar2;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar4;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *pGVar5;
  System_String_o *pSVar6;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *pGVar7;
  ulong uVar8;
  int32_t iStack_34;
  
  if (Il2CppMethodInitialized_075485d2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"-header");
    Il2CppMethodInitialized_075485d2 = '\x01';
  }
  bVar2 = System_String__IsNullOrEmpty((__this->fields).title,(MethodInfo *)0x0);
  if (!bVar2) {
    pGVar7 = (__this->fields).__4__this;
    if (pGVar7 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *)0x0) goto label_05e426cf;
    pSVar6 = (__this->fields).title;
    pSVar3 = System_String__Concat_52f0320((pGVar7->fields)._id,"-header",(MethodInfo *)0x0);
    if (group == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_05e426cf;
    pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Text
                       (group,pSVar6,"header",pSVar3,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
    pGVar7 = (__this->fields).__4__this;
    if ((pGVar7 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *)0x0) ||
       (pGVar4 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0)) goto label_05e426cf;
    (pGVar4->fields).textKey = (pGVar7->fields)._titleKey;
    Il2CppCodeGenWriteBarrier(&(pGVar4->fields).textKey);
  }
  pGVar7 = (__this->fields).__4__this;
  if (pGVar7 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *)0x0) {
    uVar8 = 0;
    do {
      pGVar5 = (pGVar7->fields)._blocks;
      if (pGVar5 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)0x0) break;
      uVar1 = (uint)pGVar5->max_length;
      if ((long)(int)uVar1 <= (long)uVar8) {
        return;
      }
      if (uVar1 <= uVar8) {
        ThrowIndexOutOfRangeException();
      }
      __this_00 = (MethodInfo *)pGVar5->m_Items[uVar8];
      if (__this_00 != (MethodInfo *)0x0) {
        iStack_34 = (int32_t)uVar8;
        method_00 = __this_00;
        if (Il2CppMethodInitialized_075485cc == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"-block-");
          Il2CppMethodInitialized_075485cc = '\x01';
          pGVar5 = (pGVar7->fields)._blocks;
          if (pGVar5 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)0x0) break;
        }
        pSVar6 = (pGVar7->fields)._id;
        if ((int)pGVar5->max_length != 1) {
          pSVar3 = System_Int32__ToString(&iStack_34,(MethodInfo *)0x0);
          method_00 = (MethodInfo *)0x0;
          pSVar6 = System_String__Concat_5301f10(pSVar6,"-block-",pSVar3,(MethodInfo *)0x0);
        }
        if (__this_00 == (MethodInfo *)0x0) break;
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__Build
                  ((Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *)__this_00,group,pSVar6,
                   (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o)
                   (__this->fields).groupContext.fields,method_00);
        pGVar7 = (__this->fields).__4__this;
      }
      uVar8 = uVar8 + 1;
    } while (pGVar7 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *)0x0);
  }
label_05e426cf:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* __this, System_String_o* id, Gisketch_Aottg2UI_Code_AottgComponent_array* rows, const MethodInfo* method);
// 0x5e3aa10

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this,System_String_o *id,
               Gisketch_Aottg2UI_Code_AottgComponent_array *rows,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *blocks;
  System_String_o *titleKey;
  MethodInfo *pMVar1;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_075485c6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array);
    Il2CppMethodInitialized_075485c6 = '\x01';
  }
  pMVar1 = (MethodInfo *)0x1;
  blocks = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array,1);
  pMVar1 = (MethodInfo *)Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__TwoColumn(rows,pMVar1);
  if (blocks == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)blocks->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  blocks->m_Items[0] = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *)pMVar1;
  Il2CppCodeGenWriteBarrier(blocks->m_Items);
  titleKey = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__GroupTitleKey(id,pMVar1);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_5d40ea0
            (__this,id,(System_String_o *)0x0,titleKey,blocks,in_R9);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* __this, System_String_o* id, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array* blocks, const MethodInfo* method);
// 0x5e40d50

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_5d40d50
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this,System_String_o *id,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *blocks,MethodInfo *method)

{
  System_String_o *titleKey;
  MethodInfo *in_R9;
  
  titleKey = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__GroupTitleKey(id,(MethodInfo *)id);
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_5d40ea0
            (__this,id,(System_String_o *)0x0,titleKey,blocks,in_R9);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$.ctor
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* __this, System_String_o* id, System_String_o* title, System_String_o* titleKey, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array* blocks, const MethodInfo* method);
// 0x5e40ea0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___ctor_5d40ea0
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this,System_String_o *id,
               System_String_o *title,System_String_o *titleKey,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *blocks,MethodInfo *method)

{
  if (Il2CppMethodInitialized_075485c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array);
    Il2CppMethodInitialized_075485c7 = '\x01';
  }
  (__this->fields)._showHeader = true;
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id);
  (__this->fields)._title = title;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._title);
  (__this->fields)._titleKey = titleKey;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._titleKey);
  if (blocks == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)0x0) {
    blocks = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array,0);
  }
  (__this->fields)._blocks = blocks;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._blocks);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$Untranslated
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__Untranslated (System_String_o* id, System_String_o* title, Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_array* rows, const MethodInfo* method);
// 0x5e40f50

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__Untranslated
          (System_String_o *id,System_String_o *title,
          Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_array *rows,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *pGVar1;
  Gisketch_Aottg2UI_Code_AottgComponent_array *rows_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *pGVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075485c8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array);
    Il2CppMethodInitialized_075485c8 = '\x01';
  }
  method_00 = (MethodInfo *)0x1;
  pGVar1 = (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array,1);
  rows_00 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__BuildRows(rows,method_00);
  pGVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__TwoColumn(rows_00,method_00);
  if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)0x0) {
    ThrowNullReferenceException();
  }
  if ((int)pGVar1->max_length == 0) {
    ThrowIndexOutOfRangeException();
  }
  pGVar1->m_Items[0] = pGVar2;
  Il2CppCodeGenWriteBarrier(pGVar1->m_Items);
  __this = il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup);
  if (Il2CppMethodInitialized_075485c7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array);
    Il2CppMethodInitialized_075485c7 = '\x01';
  }
  (__this->fields)._showHeader = true;
  Gisketch_Aottg2UI_Code_AottgComponent___ctor
            ((Gisketch_Aottg2UI_Code_AottgComponent_o *)__this,(MethodInfo *)0x0);
  (__this->fields)._id = id;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._id);
  (__this->fields)._title = title;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._title);
  (__this->fields)._titleKey = (System_String_o *)0x0;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._titleKey);
  (__this->fields)._blocks = pGVar1;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._blocks);
  return __this;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$get_Id
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__get_Id (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* __this, const MethodInfo* method);
// 0x5e411e0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__get_Id
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this,MethodInfo *method)

{
  return (__this->fields)._id;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$HideHeader
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__HideHeader (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* __this, const MethodInfo* method);
// 0x5e411f0

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__HideHeader
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this,MethodInfo *method)

{
  (__this->fields)._showHeader = false;
  return __this;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$UseTwoColumnLayout
// il2cpp: Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__UseTwoColumnLayout (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* __this, const MethodInfo* method);
// 0x5e41200

Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__UseTwoColumnLayout
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *__this_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *pGVar2;
  ulong uVar3;
  
  pGVar2 = (__this->fields)._blocks;
  if (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)0x0) {
    uVar3 = 0;
    do {
      uVar1 = (uint)pGVar2->max_length;
      if ((long)(int)uVar1 <= (long)uVar3) {
        return __this;
      }
      if (uVar1 <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      __this_00 = pGVar2->m_Items[uVar3];
      if (__this_00 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *)0x0) {
        if (__this_00 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *)0x0) break;
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__SetLayoutMode
                  (__this_00,0,(MethodInfo *)(long)(int)uVar1);
        pGVar2 = (__this->fields)._blocks;
      }
      uVar3 = uVar3 + 1;
    } while (pGVar2 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$Build
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__Build (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* __this, Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x5e41370
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e416f5: mov rbx, rbp
// asm:   0x5e416f8: jmp 0x5e41714

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__Build
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this,
               Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  System_String_o *value;
  bool bVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___c__DisplayClass15_0_o *__this_00;
  System_String_o *pSVar2;
  System_Action_AottgUi__o *__this_01;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *layout;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar3;
  System_String_o *value_00;
  System_String_o *keywords;
  System_String_o *value_01;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o *__this_02;
  MethodInfo *in_stack_ffffffffffffff28;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o GStack_88;
  System_String_o *pSStack_58;
  System_String_o *pSStack_50;
  System_String_o *pSStack_48;
  System_String_o *pSStack_40;
  System_String_o *pSStack_38;
  
  if (Il2CppMethodInitialized_075485c9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_AottgUi);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_c__DisplayClass15_0_Build_b__0)
    ;
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_c__DisplayClass15_0);
    il2cpp_codegen_initialize_runtime_metadata(&"clear");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    il2cpp_codegen_initialize_runtime_metadata(&"section");
    il2cpp_codegen_initialize_runtime_metadata(&"menuList");
    Il2CppMethodInitialized_075485c9 = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new
                        ((Il2CppClass *)
                         TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_c__DisplayClass15_0);
  System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
  if (__this_00 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup___c__DisplayClass15_0_o *)0x0) {
    (__this_00->fields).__4__this = __this;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).__4__this);
    if (Il2CppMethodInitialized_075485cf == '\0') {
      il2cpp_codegen_initialize_runtime_metadata
                (&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      Il2CppMethodInitialized_075485cf = '\x01';
    }
    bVar1 = System_String__IsNullOrEmpty((__this->fields)._titleKey,(MethodInfo *)0x0);
    if (bVar1) {
      pSVar2 = (__this->fields)._title;
    }
    else {
      pSVar2 = (__this->fields)._titleKey;
      if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0)
      {
        il2cpp_codegen_runtime_class_init
                  ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
      }
      pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar2,(MethodInfo *)0x0);
    }
    (__this_00->fields).title = pSVar2;
    Il2CppCodeGenWriteBarrier(&(__this_00->fields).title);
    GStack_88.fields.CategoryTitle = (System_String_o *)0x0;
    GStack_88.fields.GroupId = (System_String_o *)0x0;
    GStack_88.fields.ScreenTitle = (System_String_o *)0x0;
    GStack_88.fields.CategoryId = (System_String_o *)0x0;
    GStack_88.fields.GroupTitle = (System_String_o *)0x0;
    Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext___ctor_5d4b400
              (&GStack_88,(__this->fields)._searchContext.fields.ScreenTitle,
               (__this->fields)._searchContext.fields.CategoryId,
               (__this->fields)._searchContext.fields.CategoryTitle,(__this->fields)._id,
               (__this_00->fields).title,in_stack_ffffffffffffff28);
    pSStack_38 = GStack_88.fields.GroupTitle;
    pSStack_48 = GStack_88.fields.CategoryTitle;
    pSStack_40 = GStack_88.fields.GroupId;
    pSStack_58 = GStack_88.fields.ScreenTitle;
    pSStack_50 = GStack_88.fields.CategoryId;
    __this_02 = &(__this_00->fields).groupContext;
    (__this_00->fields).groupContext.fields.GroupTitle = GStack_88.fields.GroupTitle;
    (__this_00->fields).groupContext.fields.CategoryTitle = GStack_88.fields.CategoryTitle;
    (__this_00->fields).groupContext.fields.GroupId = GStack_88.fields.GroupId;
    (__this_00->fields).groupContext.fields.ScreenTitle = GStack_88.fields.ScreenTitle;
    (__this_00->fields).groupContext.fields.CategoryId = GStack_88.fields.CategoryId;
    Il2CppCodeGenWriteBarrier((void **)__this_02);
    __this_01 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_AottgUi);
    System_Action_object____ctor
              ((System_Action_object__o *)__this_01,(Il2CppObject *)__this_00,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_c__DisplayClass15_0_Build_b__0,
               (MethodInfo_4A81BE0 *)0x0);
    pSVar2 = (__this->fields)._id;
    width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
    layout = Gisketch_Aottg2UI_Code_AottgUi__Layout
                       ("Column",(System_String_o *)0x0,"Stretch",
                        (System_String_o *)0x0,(System_String_o *)0x0,20.0,width,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0
                        ,1.0,(MethodInfo *)0x0);
    if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
      pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Panel
                         (ui,"clear",__this_01,pSVar2,layout,
                          (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(MethodInfo *)0x0);
      value_00 = (__this_00->fields).groupContext.fields.CategoryTitle;
      pSVar2 = (__this_00->fields).groupContext.fields.GroupTitle;
      if (Il2CppMethodInitialized_07548634 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&" > ");
        Il2CppMethodInitialized_07548634 = '\x01';
      }
      bVar1 = System_String__IsNullOrEmpty(value_00,(MethodInfo *)0x0);
      if (bVar1) {
        method_00 = extraout_RDX;
        value_00 = pSVar2;
        if (pSVar2 == (System_String_o *)0x0) {
          value_00 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        }
      }
      else {
        bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
        if (bVar1) {
          method_00 = extraout_RDX_00;
        }
        else {
          value_00 = System_String__Concat_5301f10(value_00," > ",pSVar2,(MethodInfo *)0x0);
          method_00 = extraout_RDX_01;
        }
      }
      keywords = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__Keywords
                           (__this_02,(__this_00->fields).title,method_00);
      pSVar2 = (__this_00->fields).groupContext.fields.CategoryId;
      value_01 = (__this_00->fields).groupContext.fields.CategoryTitle;
      value = (__this_00->fields).groupContext.fields.GroupTitle;
      if (Il2CppMethodInitialized_07548634 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&" > ");
        Il2CppMethodInitialized_07548634 = '\x01';
      }
      bVar1 = System_String__IsNullOrEmpty(value_01,(MethodInfo *)0x0);
      if (bVar1) {
        value_01 = value;
        if (value == (System_String_o *)0x0) {
          value_01 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
        }
      }
      else {
        bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
        if (!bVar1) {
          value_01 = System_String__Concat_5301f10(value_01," > ",value,(MethodInfo *)0x0);
        }
      }
      pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Search
                         (value_00,keywords,false,"menuList","section",pSVar2,value_01,
                          false,(MethodInfo *)0x0);
      if (pGVar3 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar3->fields).search = pGVar4;
        Il2CppCodeGenWriteBarrier(&(pGVar3->fields).search);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$ApplySearchContext
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__ApplySearchContext (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* __this, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context, const MethodInfo* method);
// 0x5e419a0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__ApplySearchContext
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context,MethodInfo *method)

{
  (__this->fields)._searchContext.fields.GroupTitle = context.fields.GroupTitle;
  (__this->fields)._searchContext.fields.CategoryTitle = context.fields.CategoryTitle;
  (__this->fields)._searchContext.fields.GroupId = context.fields.GroupId;
  (__this->fields)._searchContext.fields.ScreenTitle = context.fields.ScreenTitle;
  (__this->fields)._searchContext.fields.CategoryId = context.fields.CategoryId;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields)._searchContext);
  return;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$SyncState
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__SyncState (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* __this, Gisketch_Aottg2UI_GisketchUIRoot_o* root, const MethodInfo* method);
// 0x5e3aff0

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__SyncState
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this,
               Gisketch_Aottg2UI_GisketchUIRoot_o *root,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *__this_00;
  bool bVar2;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *pGVar3;
  ulong uVar4;
  
  if (Il2CppMethodInitialized_075485ca == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_075485ca = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    return;
  }
  pGVar3 = (__this->fields)._blocks;
  if (pGVar3 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)0x0) {
    uVar4 = 0;
    do {
      uVar1 = (uint)pGVar3->max_length;
      if ((long)(int)uVar1 <= (long)uVar4) {
        return;
      }
      if (uVar1 <= uVar4) {
        ThrowIndexOutOfRangeException();
      }
      __this_00 = pGVar3->m_Items[uVar4];
      if (__this_00 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *)0x0) {
        if (__this_00 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *)0x0) break;
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__SyncState
                  (__this_00,root,(MethodInfo *)(long)(int)uVar1);
        pGVar3 = (__this->fields)._blocks;
      }
      uVar4 = uVar4 + 1;
    } while (pGVar3 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)0x0);
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$AddVirtualScrollItems
// il2cpp: void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__AddVirtualScrollItems (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* __this, System_Collections_Generic_List_GisketchNodeDefinition__o* items, Gisketch_Aottg2UI_Code_AottgUi_o* owner, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context, bool separateFromPreviousGroup, const MethodInfo* method);
// 0x5e41b10

void Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__AddVirtualScrollItems
               (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this,
               System_Collections_Generic_List_GisketchNodeDefinition__o *items,
               Gisketch_Aottg2UI_Code_AottgUi_o *owner,
               Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context,
               bool separateFromPreviousGroup,MethodInfo *method)

{
  int32_t *piVar1;
  uint uVar2;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *pGVar3;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *__this_00;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o groupContext;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o context_00;
  bool bVar4;
  MethodInfo *pMVar5;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *item;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *pGVar6;
  System_String_o *str2;
  System_String_o *pSVar7;
  MethodInfo *method_00;
  MethodInfo *method_01;
  ulong uVar8;
  MethodInfo *in_stack_ffffffffffffff48;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o local_88;
  System_String_o *local_58;
  System_String_o *pSStack_50;
  System_String_o *local_48;
  System_String_o *pSStack_40;
  System_String_o *local_38;
  
  if (Il2CppMethodInitialized_075485cb == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add);
    Il2CppMethodInitialized_075485cb = '\x01';
  }
  if ((items == (System_Collections_Generic_List_GisketchNodeDefinition__o *)0x0) ||
     (owner == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0)) {
    return;
  }
  (__this->fields)._searchContext.fields.GroupTitle = context.fields.GroupTitle;
  (__this->fields)._searchContext.fields.CategoryTitle = context.fields.CategoryTitle;
  (__this->fields)._searchContext.fields.GroupId = context.fields.GroupId;
  (__this->fields)._searchContext.fields.ScreenTitle = context.fields.ScreenTitle;
  (__this->fields)._searchContext.fields.CategoryId = context.fields.CategoryId;
  Il2CppCodeGenWriteBarrier((void **)&(__this->fields)._searchContext);
  if (Il2CppMethodInitialized_075485cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_075485cf = '\x01';
  }
  bVar4 = System_String__IsNullOrEmpty((__this->fields)._titleKey,(MethodInfo *)0x0);
  if (bVar4) {
    pMVar5 = (MethodInfo *)(__this->fields)._title;
  }
  else {
    pSVar7 = (__this->fields)._titleKey;
    if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    }
    pMVar5 = (MethodInfo *)Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar7,(MethodInfo *)0x0)
    ;
  }
  method_00 = (MethodInfo *)(__this->fields)._searchContext.fields.CategoryTitle;
  local_88.fields.CategoryTitle = (System_String_o *)0x0;
  local_88.fields.GroupId = (System_String_o *)0x0;
  local_88.fields.ScreenTitle = (System_String_o *)0x0;
  local_88.fields.CategoryId = (System_String_o *)0x0;
  local_88.fields.GroupTitle = (System_String_o *)0x0;
  method_01 = pMVar5;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext___ctor_5d4b400
            (&local_88,(__this->fields)._searchContext.fields.ScreenTitle,
             (__this->fields)._searchContext.fields.CategoryId,(System_String_o *)method_00,
             (__this->fields)._id,(System_String_o *)pMVar5,in_stack_ffffffffffffff48);
  local_38 = local_88.fields.GroupTitle;
  local_48 = local_88.fields.CategoryTitle;
  pSStack_40 = local_88.fields.GroupId;
  local_58 = local_88.fields.ScreenTitle;
  pSStack_50 = local_88.fields.CategoryId;
  if (((__this->fields)._showHeader != false) &&
     (bVar4 = System_String__IsNullOrEmpty((System_String_o *)pMVar5,(MethodInfo *)0x0), !bVar4)) {
    groupContext.fields.CategoryId = pSStack_50;
    groupContext.fields.ScreenTitle = local_58;
    groupContext.fields.CategoryTitle = local_48;
    groupContext.fields.GroupId = pSStack_40;
    groupContext.fields.GroupTitle = local_38;
    item = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__HeaderNode
                     (__this,(System_String_o *)pMVar5,groupContext,separateFromPreviousGroup,method_00);
    pMVar5 = MethodInfo_System_Collections_Generic_List_GisketchNodeDefinition_Add;
    piVar1 = &(items->fields)._version;
    *piVar1 = *piVar1 + 1;
    pGVar3 = (items->fields)._items;
    if (pGVar3 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_array *)0x0) goto label_05e41ddf;
    uVar2 = (items->fields)._size;
    if (uVar2 < (uint)pGVar3->max_length) {
      (items->fields)._size = uVar2 + 1;
      pGVar3->m_Items[(int)uVar2] = item;
      Il2CppCodeGenWriteBarrier(pGVar3->m_Items + (int)uVar2);
    }
    else {
      System_Collections_Generic_List_object___AddWithResize
                ((System_Collections_Generic_List_object__o *)items,(Il2CppObject *)item,
                 (MethodInfo_395D230 *)pMVar5->klass->rgctx_data[0xe].method);
    }
  }
  pGVar6 = (__this->fields)._blocks;
  if (pGVar6 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)0x0) {
    uVar8 = 0;
    do {
      uVar2 = (uint)pGVar6->max_length;
      if ((long)(int)uVar2 <= (long)uVar8) {
        return;
      }
      if (uVar2 <= uVar8) {
        ThrowIndexOutOfRangeException();
      }
      __this_00 = pGVar6->m_Items[uVar8];
      if (__this_00 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *)0x0) {
        local_88.fields.ScreenTitle =
             (System_String_o *)CONCAT44(local_88.fields.ScreenTitle._4_4_,(int)uVar8);
        if (Il2CppMethodInitialized_075485cc == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&"-block-");
          Il2CppMethodInitialized_075485cc = '\x01';
          pGVar6 = (__this->fields)._blocks;
          if (pGVar6 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)0x0) break;
        }
        pSVar7 = (__this->fields)._id;
        if ((int)pGVar6->max_length != 1) {
          str2 = System_Int32__ToString((int32_t *)&local_88,(MethodInfo *)0x0);
          pSVar7 = System_String__Concat_5301f10(pSVar7,"-block-",str2,(MethodInfo *)0x0);
        }
        if (__this_00 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_o *)0x0) break;
        context_00.fields.CategoryId = pSStack_50;
        context_00.fields.ScreenTitle = local_58;
        context_00.fields.CategoryTitle = local_48;
        context_00.fields.GroupId = pSStack_40;
        context_00.fields.GroupTitle = local_38;
        Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock__AddVirtualScrollItems
                  (__this_00,items,owner,pSVar7,context_00,uVar8 != 0,method_01);
        pGVar6 = (__this->fields)._blocks;
      }
      uVar8 = uVar8 + 1;
    } while (pGVar6 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)0x0);
  }
label_05e41ddf:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$BlockId
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__BlockId (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* __this, int32_t index, const MethodInfo* method);
// 0x5e42160

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__BlockId
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this,int32_t index,MethodInfo *method)

{
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *pGVar1;
  System_String_o *str2;
  System_String_o *str0;
  int32_t local_c;
  
  local_c = index;
  if (Il2CppMethodInitialized_075485cc == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"-block-");
    Il2CppMethodInitialized_075485cc = '\x01';
  }
  pGVar1 = (__this->fields)._blocks;
  if (pGVar1 == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsRowBlock_array *)0x0) {
    ThrowNullReferenceException();
  }
  str0 = (__this->fields)._id;
  if ((int)pGVar1->max_length != 1) {
    str2 = System_Int32__ToString(&local_c,(MethodInfo *)0x0);
    str0 = System_String__Concat_5301f10(str0,"-block-",str2,(MethodInfo *)0x0);
  }
  return str0;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$HeaderNode
// il2cpp: Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__HeaderNode (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* __this, System_String_o* title, Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o groupContext, bool separateFromPreviousGroup, const MethodInfo* method);
// 0x5e41df0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5e420d1: mov r12, rbp
// asm:   0x5e420d4: jmp 0x5e420f0

Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__HeaderNode
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this,System_String_o *title,
          Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext_o groupContext,
          bool separateFromPreviousGroup,MethodInfo *method)

{
  System_String_o *sectionId;
  System_String_o *value;
  bool bVar1;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *__this_00;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLength_o *height;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar3;
  System_String_o *title_00;
  System_String_o *keywords;
  Gisketch_Aottg2UI_Data_GisketchSearchDefinition_o *pGVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *extraout_RDX_01;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_075485cd == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"Text");
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsSpacingBefore");
    il2cpp_codegen_initialize_runtime_metadata(&"section");
    il2cpp_codegen_initialize_runtime_metadata(&"header");
    il2cpp_codegen_initialize_runtime_metadata(&"menuList");
    il2cpp_codegen_initialize_runtime_metadata(&"-header");
    Il2CppMethodInitialized_075485cd = '\x01';
  }
  __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchNodeDefinition)
  ;
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition___ctor(__this_00,(MethodInfo *)0x0);
  if (__this_00 == (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
    ThrowNullReferenceException();
  }
  (__this_00->fields).type = "Text";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).type);
  pSVar2 = System_String__Concat_52f0320((__this->fields)._id,"-header",(MethodInfo *)0x0);
  (__this_00->fields).id = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).id);
  (__this_00->fields).text = title;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).text);
  (__this_00->fields).textKey = (__this->fields)._titleKey;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).textKey);
  (__this_00->fields).style = "header";
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).style);
  pSVar2 = (System_String_o *)0x0;
  if (separateFromPreviousGroup) {
    pSVar2 = "SettingsSpacingBefore";
  }
  (__this_00->fields).value = pSVar2;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).value);
  width = Gisketch_Aottg2UI_Code_AottgUi__Percent(100.0,(MethodInfo *)0x0);
  height = Gisketch_Aottg2UI_Code_AottgUi__Points(72.0,(MethodInfo *)0x0);
  pGVar3 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Column",(System_String_o *)0x0,(System_String_o *)0x0,
                      (System_String_o *)0x0,(System_String_o *)0x0,0.0,width,height,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,0.0,
                      0.0,(MethodInfo *)0x0);
  (__this_00->fields).layout = pGVar3;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).layout);
  value = groupContext.fields.GroupTitle;
  pSVar2 = groupContext.fields.CategoryTitle;
  if (Il2CppMethodInitialized_07548634 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&" > ");
    Il2CppMethodInitialized_07548634 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    method_00 = extraout_RDX;
    title_00 = value;
    if (value == (System_String_o *)0x0) {
      title_00 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
  }
  else {
    bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    method_00 = extraout_RDX_00;
    title_00 = pSVar2;
    if (!bVar1) {
      title_00 = System_String__Concat_5301f10(pSVar2," > ",value,(MethodInfo *)0x0);
      method_00 = extraout_RDX_01;
    }
  }
  keywords = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsSearchContext__Keywords
                       (&groupContext,title,method_00);
  sectionId = groupContext.fields.CategoryId;
  if (Il2CppMethodInitialized_07548634 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&" > ");
    Il2CppMethodInitialized_07548634 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(pSVar2,(MethodInfo *)0x0);
  if (bVar1) {
    pSVar2 = value;
    if (value == (System_String_o *)0x0) {
      pSVar2 = (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
    }
  }
  else {
    bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
    if (!bVar1) {
      pSVar2 = System_String__Concat_5301f10(pSVar2," > ",value,(MethodInfo *)0x0);
    }
  }
  pGVar4 = Gisketch_Aottg2UI_Code_AottgUi__Search
                     (title_00,keywords,false,"menuList","section",sectionId,pSVar2,
                      false,(MethodInfo *)0x0);
  (__this_00->fields).search = pGVar4;
  Il2CppCodeGenWriteBarrier(&(__this_00->fields).search);
  return __this_00;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$BuildRows
// il2cpp: Gisketch_Aottg2UI_Code_AottgComponent_array* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__BuildRows (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_array* rows, const MethodInfo* method);
// 0x5e41080

Gisketch_Aottg2UI_Code_AottgComponent_array *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__BuildRows
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_array *rows,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o *pGVar2;
  Gisketch_Aottg2UI_Code_AottgComponent_array *pGVar3;
  ulong uVar4;
  Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *pGVar5;
  Il2CppObject *pIVar6;
  ulong uVar7;
  long lVar8;
  
  if (Il2CppMethodInitialized_075485ce == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
    Il2CppMethodInitialized_075485ce = '\x01';
  }
  if (rows == (Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_array *)0x0) {
    pGVar3 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,0);
    return pGVar3;
  }
  pGVar3 = (Gisketch_Aottg2UI_Code_AottgComponent_array *)
           SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_AottgComponent_array,(uint32_t)rows->max_length);
  if (0 < (int)rows->max_length) {
    if (pGVar3 == (Gisketch_Aottg2UI_Code_AottgComponent_array *)0x0) {
      pGVar2 = rows->m_Items[0];
      pGVar5 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor(pGVar5,pGVar2,(MethodInfo *)0x0);
      ThrowNullReferenceException();
    }
    uVar4 = rows->max_length & 0xffffffff;
    lVar8 = 0x20;
    uVar7 = 0;
    do {
      if (uVar4 <= uVar7) {
label_05e4119a:
        ThrowIndexOutOfRangeException();
      }
      pGVar2 = *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingDescriptor_o **)
                ((long)rows->m_Items + lVar8 + -0x20);
      pGVar5 = il2cpp_codegen_object_new
                         ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow);
      Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow___ctor(pGVar5,pGVar2,(MethodInfo *)0x0);
      if (pGVar5 != (Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o *)0x0) {
        pIVar6 = il2cpp_vm_Object_IsInst((Il2CppObject *)pGVar5,(((pGVar3->obj).klass)->_1).element_class);
        if (pIVar6 == (Il2CppObject *)0x0) {
          pIVar6 = il2cpp_codegen_get_array_type_mismatch_exception();
          il2cpp_codegen_raise_exception(pIVar6,(MethodInfo *)0x0);
        }
      }
      if ((uint)pGVar3->max_length <= uVar7) goto label_05e4119a;
      *(Gisketch_Aottg2UI_SettingsScreen_AottgSettingRow_o **)((long)pGVar3->m_Items + lVar8 + -0x20) = pGVar5
      ;
      Il2CppCodeGenWriteBarrier((void **)((long)pGVar3->m_Items + lVar8 + -0x20));
      uVar7 = uVar7 + 1;
      uVar1 = (uint)rows->max_length;
      uVar4 = (ulong)uVar1;
      lVar8 = lVar8 + 8;
    } while ((long)uVar7 < (long)(int)uVar1);
  }
  return pGVar3;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$LocalizedTitle
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__LocalizedTitle (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o* __this, const MethodInfo* method);
// 0x5e417a0

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__LocalizedTitle
          (Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup_o *__this,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  
  if (Il2CppMethodInitialized_075485cf == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    Il2CppMethodInitialized_075485cf = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty((__this->fields)._titleKey,(MethodInfo *)0x0);
  if (bVar1) {
    return (__this->fields)._title;
  }
  pSVar2 = (__this->fields)._titleKey;
  if ((TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale);
    pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar2,(MethodInfo *)0x0);
    return pSVar2;
  }
  pSVar2 = Gisketch_Aottg2UI_Localization_Aottg2GisketchLocale__Text(pSVar2,(MethodInfo *)0x0);
  return pSVar2;
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$GroupTitleKey
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__GroupTitleKey (System_String_o* id, const MethodInfo* method);
// 0x5e40d80

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__GroupTitleKey(System_String_o *id,MethodInfo *method)

{
  bool bVar1;
  int32_t length;
  System_String_o *pSVar2;
  System_String_o *pSVar3;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_075485d0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"settings-");
    il2cpp_codegen_initialize_runtime_metadata(&"SettingsPopup.Groups.");
    il2cpp_codegen_initialize_runtime_metadata(&".");
    Il2CppMethodInitialized_075485d0 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0);
  if (bVar1) {
    return (System_String_o *)0x0;
  }
  if (id != (System_String_o *)0x0) {
    bVar1 = System_String__StartsWith(id,"settings-",(MethodInfo *)0x0);
    if (!bVar1) {
      return (System_String_o *)0x0;
    }
    if (("settings-" != (System_String_o *)0x0) &&
       (pSVar2 = System_String__Substring(id,("settings-"->fields)._stringLength,(MethodInfo *)0x0),
       pSVar2 != (System_String_o *)0x0)) {
      length = System_String__IndexOf(pSVar2,0x2d,(MethodInfo *)0x0);
      if (length < 1) {
        return (System_String_o *)0x0;
      }
      if (length < (pSVar2->fields)._stringLength + -1) {
        pMVar4 = (MethodInfo *)0x0;
        pSVar3 = System_String__Substring_53042f0(pSVar2,0,length,(MethodInfo *)0x0);
        pSVar3 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__Pascal(pSVar3,pMVar4);
        pMVar4 = (MethodInfo *)(ulong)(length + 1U);
        pSVar2 = System_String__Substring(pSVar2,length + 1U,(MethodInfo *)0x0);
        pSVar2 = Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__Pascal(pSVar2,pMVar4);
        pSVar2 = System_String__Concat_5302810
                           ("SettingsPopup.Groups.",pSVar3,".",pSVar2,(MethodInfo *)0x0);
        return pSVar2;
      }
      return (System_String_o *)0x0;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.SettingsScreen.AottgSettingsGroup$$Pascal
// il2cpp: System_String_o* Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__Pascal (System_String_o* value, const MethodInfo* method);
// 0x5e42350

System_String_o *
Gisketch_Aottg2UI_SettingsScreen_AottgSettingsGroup__Pascal(System_String_o *value,MethodInfo *method)

{
  int32_t capacity;
  bool bVar1;
  uint16_t uVar2;
  System_Text_StringBuilder_o *__this;
  System_String_o *pSVar3;
  int iVar4;
  bool bVar5;
  
  if (Il2CppMethodInitialized_075485d1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Text_StringBuilder);
    Il2CppMethodInitialized_075485d1 = '\x01';
  }
  bVar1 = System_String__IsNullOrEmpty(value,(MethodInfo *)0x0);
  if (bVar1) {
    return (System_String_o *)**(undefined8 **)(g_data_07556758 + 0xb8);
  }
  if (value != (System_String_o *)0x0) {
    capacity = (value->fields)._stringLength;
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Text_StringBuilder);
    System_Text_StringBuilder___ctor_530d510(__this,capacity,(MethodInfo *)0x0);
    if (0 < (value->fields)._stringLength) {
      if (__this == (System_Text_StringBuilder_o *)0x0) {
        uVar2 = System_String__get_Chars(value,0,(MethodInfo *)0x0);
        if (uVar2 == 0x2d) {
          iVar4 = 1;
          do {
            if ((value->fields)._stringLength <= iVar4) goto label_05e424c7;
            uVar2 = System_String__get_Chars(value,iVar4,(MethodInfo *)0x0);
            iVar4 = iVar4 + 1;
          } while (uVar2 == 0x2d);
        }
        if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init(g_data_07556750);
        }
        System_Char__ToUpperInvariant(uVar2,(MethodInfo *)0x0);
        ThrowNullReferenceException();
      }
      iVar4 = 0;
      bVar1 = true;
      do {
        uVar2 = System_String__get_Chars(value,iVar4,(MethodInfo *)0x0);
        bVar5 = uVar2 == 0x2d;
        if (!bVar5) {
          if (bVar1) {
            if ((g_data_07556750->_2).cctor_finished_or_no_cctor == 0) {
              il2cpp_codegen_runtime_class_init(g_data_07556750);
            }
            uVar2 = System_Char__ToUpperInvariant(uVar2,(MethodInfo *)0x0);
          }
          System_Text_StringBuilder__Append_530f6a0(__this,uVar2,(MethodInfo *)0x0);
        }
        iVar4 = iVar4 + 1;
        bVar1 = bVar5;
      } while (iVar4 < (value->fields)._stringLength);
    }
label_05e424c7:
    if (__this != (System_Text_StringBuilder_o *)0x0) {
      pSVar3 = (*(__this->klass->vtable)._3_ToString.methodPtr)
                         (__this,(__this->klass->vtable)._3_ToString.method);
      return pSVar3;
    }
  }
  ThrowNullReferenceException();
}


