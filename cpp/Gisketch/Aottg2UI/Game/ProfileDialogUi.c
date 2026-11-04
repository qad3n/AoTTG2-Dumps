// Type: Gisketch.Aottg2UI.Game.ProfileDialogUi
// Ghidra (Windows x64/MSVC) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: CHANGED in this game update
// C# structure: source/csharp/Scripts/Gisketch.Aottg2UI.Game/ProfileDialogUi.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.ProfileDialogUi$$get_SplitRootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_ProfileDialogUi__get_SplitRootLayout (const MethodInfo* method);
// 0x181e221e0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_ProfileDialogUi__get_SplitRootLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344c9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_184344c9f = '\x01';
  }
  width = Gisketch_Aottg2UI_Code_AottgUi__Points(1134.0,(MethodInfo *)0x0);
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


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$get_SplitBodyLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_ProfileDialogUi__get_SplitBodyLayout (const MethodInfo* method);
// 0x181e220f0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_ProfileDialogUi__get_SplitBodyLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344ca0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_184344ca0 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Layout
                     ("Row",(System_String_o *)0x0,"FlexStart",
                      (System_String_o *)0x0,(System_String_o *)0x0,24.0,
                      (Gisketch_Aottg2UI_Data_GisketchLength_o *)0x0,
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
// 0x181e215d0
// eh: try 0x181e216cb..0x181e21812 -> pad 0x183315a20 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 21 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e21659: mov eax, r15d
// asm:   0x181e216e9: nop dword ptr [rax]
// asm:   0x181e217c7: xor edx, edx
// asm:   0x181e217c9: mov rcx, qword ptr [rsp + 0x40]
// asm:   0x181e217ce: call 0x1818d8cc0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x181e217d3: mov rcx, qword ptr [rsp + 0x38]
// asm:   0x181e217d8: test rcx, rcx
// asm:   0x181e217db: jne 0x181e21812
// asm:   0x181e217dd: mov r14, qword ptr [rsp + 0xc0]
// asm:   0x181e21812: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315a20: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315a25: push rbp
// asm:   0x183315a26: sub rsp, 0x30
// asm:   0x183315a2a: mov rbp, rdx
// asm:   0x183315a2d: mov rax, qword ptr [rbp + 0x30]
// asm:   0x183315a31: mov rcx, qword ptr [rax]
// asm:   0x183315a34: mov qword ptr [rbp + 0x38], rcx
// asm:   0x183315a38: movabs rax, 0
// asm:   0x183315a42: add rsp, 0x30
// asm:   0x183315a46: pop rbp
// asm:   0x183315a47: ret 

Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *
Gisketch_Aottg2UI_Game_ProfileDialogUi__GridItems
          (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *presets,MethodInfo *method)

{
  System_String_o **ppSVar1;
  uint uVar2;
  System_String_o *area;
  System_String_o *str1;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *pGVar4;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *pGVar5;
  uint uVar6;
  int32_t local_res8 [2];
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_60;
  undefined1 local_40 [24];
  System_String_o *pSStack_28;
  
  if (Il2CppMethodInitialized_184344ca1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&"ProfileDialogUi.GridItems");
    il2cpp_codegen_initialize_runtime_metadata(&"presets=");
    Il2CppMethodInitialized_184344ca1 = '\x01';
  }
  area = "ProfileDialogUi.GridItems";
  pSVar3 = "presets=";
  local_60.fields._area = (System_String_o *)0x0;
  local_60.fields._detail = (System_String_o *)0x0;
  local_60.fields._startMs = 0;
  local_60.fields._enabled = false;
  local_60.fields._hotLoop = false;
  local_60.fields._26_6_ = 0;
  uVar6 = 0;
  local_res8[0] = 0;
  if (presets != (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
    local_res8[0] = (int32_t)presets->max_length;
  }
  str1 = System_Int32__ToString(local_res8,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat_1969e50(pSVar3,str1,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  pGVar4 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
                     ((Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *)local_40,area,pSVar3,
                      (MethodInfo *)0x0);
  local_60.fields._area = (pGVar4->fields)._area;
  local_60.fields._detail = (pGVar4->fields)._detail;
  local_60.fields._startMs = (pGVar4->fields)._startMs;
  local_60.fields._enabled = (pGVar4->fields)._enabled;
  local_60.fields._hotLoop = (pGVar4->fields)._hotLoop;
  local_60.fields._26_6_ = *(undefined6 *)&(pGVar4->fields).field_0x1a;
  if (presets == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
    pGVar5 = (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array,0);
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_60,(MethodInfo *)0x0);
  }
  else {
    pGVar5 = (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array,
                        (uint32_t)presets->max_length);
    for (; uVar2 = (uint)presets->max_length, (int)uVar6 < (int)uVar2; uVar6 = uVar6 + 1) {
      if (uVar2 <= uVar6) {
        ThrowIndexOutOfRangeException();
      }
      local_40._0_8_ = (System_String_o *)0x0;
      local_40._8_8_ = (System_String_o *)0x0;
      local_40._16_8_ = (System_String_o *)0x0;
      pSStack_28 = (System_String_o *)0x0;
      Gisketch_Aottg2UI_Code_GisketchGridPickerItem___ctor
                ((Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o *)local_40,
                 presets->m_Items[(int)uVar6].fields.Key,presets->m_Items[(int)uVar6].fields.Label,
                 presets->m_Items[(int)uVar6].fields.Sprite,(System_String_o *)0x0,(MethodInfo *)0x0);
      if (pGVar5 == (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *)0x0) {
        ThrowNullReferenceException();
      }
      if ((uint)pGVar5->max_length <= uVar6) {
        ThrowIndexOutOfRangeException();
      }
      pGVar5->m_Items[(int)uVar6].fields.Key = (System_String_o *)local_40._0_8_;
      pGVar5->m_Items[(int)uVar6].fields.Label = (System_String_o *)local_40._8_8_;
      ppSVar1 = &pGVar5->m_Items[(int)uVar6].fields.Sprite;
      *ppSVar1 = (System_String_o *)local_40._16_8_;
      ppSVar1[1] = pSStack_28;
      Il2CppCodeGenWriteBarrier((void **)(pGVar5->m_Items + (int)uVar6),(void *)0x0);
    }
    Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_60,(MethodInfo *)0x0);
  }
  return pGVar5;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$SelectAvatar
// il2cpp: void Gisketch_Aottg2UI_Game_ProfileDialogUi__SelectAvatar (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item, const MethodInfo* method);
// 0x181e21d00

void Gisketch_Aottg2UI_Game_ProfileDialogUi__SelectAvatar
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,
               Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o *item,MethodInfo *method)

{
  System_String_o *value;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  if (Il2CppMethodInitialized_184344ca2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileDialogSelection);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-preview-avatar-image");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-avatar-key");
    Il2CppMethodInitialized_184344ca2 = '\x01';
  }
  value = (item->fields).Key;
  TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileDialogSelection->static_fields->AvatarKey = value;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileDialogSelection->static_fields->AvatarKey,value);
  Gisketch_Aottg2UI_Actions_GisketchFormState__SetDraft_1901cb0
            ((context->fields).GameObject,"profile-avatar-key",(item->fields).Key,(MethodInfo *)0x0);
  local_28.fields.ElementId = (context->fields).ElementId;
  local_28.fields.GameObject = (context->fields).GameObject;
  local_28.fields.Node = (context->fields).Node;
  local_28.fields.InputSource = (context->fields).InputSource;
  local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
  Gisketch_Aottg2UI_Game_ProfileDialogUi__UpdatePreviewImage
            (&local_28,"profile-preview-avatar-image",(item->fields).Sprite,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$SelectBanner
// il2cpp: void Gisketch_Aottg2UI_Game_ProfileDialogUi__SelectBanner (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item, const MethodInfo* method);
// 0x181e21dc0

void Gisketch_Aottg2UI_Game_ProfileDialogUi__SelectBanner
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,
               Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o *item,MethodInfo *method)

{
  System_String_o *value;
  Gisketch_Aottg2UI_Actions_GisketchActionContext_o local_28;
  
  if (Il2CppMethodInitialized_184344ca3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileDialogSelection);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-preview-banner-image");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-banner-key");
    Il2CppMethodInitialized_184344ca3 = '\x01';
  }
  value = (item->fields).Key;
  TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileDialogSelection->static_fields->BannerKey = value;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileDialogSelection->static_fields->BannerKey,value);
  Gisketch_Aottg2UI_Actions_GisketchFormState__SetDraft_1901cb0
            ((context->fields).GameObject,"profile-banner-key",(item->fields).Key,(MethodInfo *)0x0);
  local_28.fields.ElementId = (context->fields).ElementId;
  local_28.fields.GameObject = (context->fields).GameObject;
  local_28.fields.Node = (context->fields).Node;
  local_28.fields.InputSource = (context->fields).InputSource;
  local_28.fields._28_4_ = *(undefined4 *)&(context->fields).field_0x1c;
  Gisketch_Aottg2UI_Game_ProfileDialogUi__UpdatePreviewImage
            (&local_28,"profile-preview-banner-image",(item->fields).Sprite,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$UpdatePreviewImage
// il2cpp: void Gisketch_Aottg2UI_Game_ProfileDialogUi__UpdatePreviewImage (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* imageId, System_String_o* sprite, const MethodInfo* method);
// 0x181e21e80
// eh: try 0x181e21f74..0x181e220ef -> pad 0x183315930 (+2 call sites) catch Il2CppExceptionWrapper
// asm: 19 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x181e220a7: nop 
// asm:   0x181e220b6: xor edx, edx
// asm:   0x181e220b8: lea rcx, [rsp + 0x48]
// asm:   0x181e220bd: call 0x1818d8cc0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x181e220c2: mov rcx, qword ptr [rsp + 0x28]
// asm:   0x181e220c7: test rcx, rcx
// asm:   0x181e220ca: jne 0x181e220e2
// asm:   0x181e220e2: call 0x1804171b0  ; il2cpp_codegen_rethrow()
// asm:   0x183315930: mov qword ptr [rsp + 0x10], rdx
// asm:   0x183315935: push rbp
// asm:   0x183315936: sub rsp, 0x20
// asm:   0x18331593a: mov rbp, rdx
// asm:   0x18331593d: mov rax, qword ptr [rbp + 0x20]
// asm:   0x183315941: mov rcx, qword ptr [rax]
// asm:   0x183315944: mov qword ptr [rbp + 0x28], rcx
// asm:   0x183315948: movabs rax, 0
// asm:   0x183315952: add rsp, 0x20
// asm:   0x183315956: pop rbp
// asm:   0x183315957: ret 

void Gisketch_Aottg2UI_Game_ProfileDialogUi__UpdatePreviewImage
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o *context,System_String_o *imageId,
               System_String_o *sprite,MethodInfo *method)

{
  UnityEngine_GameObject_o *__this;
  bool bVar1;
  System_String_o *pSVar2;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *pGVar3;
  UnityEngine_Transform_o *pUVar4;
  UnityEngine_UI_Image_o *__this_00;
  UnityEngine_Sprite_o *value;
  bool local_res8 [32];
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_70;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o local_50;
  
  if (Il2CppMethodInitialized_184344ca4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_Game_ProfileDialogUi_Find_Image);
    il2cpp_codegen_initialize_runtime_metadata(&" sprite=");
    il2cpp_codegen_initialize_runtime_metadata(&"found=");
    il2cpp_codegen_initialize_runtime_metadata(&"ProfileDialogUi.UpdatePreviewImage");
    Il2CppMethodInitialized_184344ca4 = '\x01';
  }
  local_50.fields._area = (System_String_o *)0x0;
  local_50.fields._detail = (System_String_o *)0x0;
  local_50.fields._startMs._0_4_ = 0;
  local_50.fields._startMs._4_2_ = 0;
  local_50.fields._startMs._6_2_ = 0;
  local_50.fields._enabled = false;
  local_50.fields._hotLoop = false;
  local_50.fields._26_6_ = 0;
  local_res8[0] = false;
  pSVar2 = System_String__Concat_1969b70(imageId," sprite=",sprite,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  pGVar3 = Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
                     (&local_70,"ProfileDialogUi.UpdatePreviewImage",pSVar2,(MethodInfo *)0x0);
  local_50.fields._area = (pGVar3->fields)._area;
  local_50.fields._detail = (pGVar3->fields)._detail;
  local_50.fields._startMs = (pGVar3->fields)._startMs;
  local_50.fields._enabled = (pGVar3->fields)._enabled;
  local_50.fields._hotLoop = (pGVar3->fields)._hotLoop;
  local_50.fields._26_6_ = *(undefined6 *)&(pGVar3->fields).field_0x1a;
  local_70.fields._area = (System_String_o *)0x0;
  local_70.fields._detail = (System_String_o *)&local_50;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)(context->fields).GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    __this = (context->fields).GameObject;
    if (__this == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar4 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
    if (pUVar4 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar4 = UnityEngine_Transform__GetRoot(pUVar4,(MethodInfo *)0x0);
  }
  else {
    pUVar4 = (UnityEngine_Transform_o *)0x0;
  }
  __this_00 = Gisketch_Aottg2UI_Code_GisketchGridPicker__Find_object_
                        (pUVar4,imageId,
                         (MethodInfo_68B2C0 *)MethodInfo_Gisketch_Aottg2UI_Game_ProfileDialogUi_Find_Image);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  local_res8[0] =
       UnityEngine_Object__op_Inequality
                 ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((g_data_184354de8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_184354de8);
  }
  pSVar2 = System_Boolean__ToString(local_res8,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_1969e50("found=",pSVar2,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ProfileDialogUi.UpdatePreviewImage",pSVar2,(MethodInfo *)0x0);
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this_00,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    }
    value = Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load(sprite,(MethodInfo *)0x0);
    if (__this_00 == (UnityEngine_UI_Image_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_UI_Image__set_sprite(__this_00,value,(MethodInfo *)0x0);
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&local_50,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$Find<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_ProfileDialogUi__Find_object_ (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo_68B2C0* method);
// 0x18068b2c0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x18068b3d8: mov rax, rdi
// asm:   0x18068b3db: jmp 0x18068b3df

Il2CppObject*
Gisketch_Aottg2UI_Game_ProfileDialogUi__Find_object_(UnityEngine_Transform_o* root, System_String_o* id, MethodInfo_68B2C0* method)

{
  UnityEngine_Object_o *x;
  bool bVar1;
  System_Object_array *pSVar2;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  uint uVar3;
  
  if ((method->rgctx_data == (MethodInfo_68B2C0_RGCTXs *)0x0) &&
     (il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object),
     method->rgctx_data == (MethodInfo_68B2C0_RGCTXs *)0x0)) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((!bVar1) && (bVar1 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0), !bVar1)) {
    if ((root == (UnityEngine_Transform_o *)0x0) ||
       (pSVar2 = UnityEngine_Component__GetComponentsInChildren_object_
                           ((UnityEngine_Component_o *)root,true,
                            (MethodInfo_665440 *)
                            method->rgctx_data->_1_UnityEngine_Component_GetComponentsInChildren_T_),
       pSVar2 == (System_Object_array *)0x0)) {
label_18068b3fa:
      ThrowNullReferenceException();
    }
    for (uVar3 = 0; (int)uVar3 < (int)pSVar2->max_length; uVar3 = uVar3 + 1) {
      if ((uint)pSVar2->max_length <= uVar3) {
        ThrowIndexOutOfRangeException();
      }
      x = (UnityEngine_Object_o *)pSVar2->m_Items[(int)uVar3];
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        if ((x == (UnityEngine_Object_o *)0x0) ||
           (__this = (UnityEngine_Object_o *)
                     UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
           __this == (UnityEngine_Object_o *)0x0)) goto label_18068b3fa;
        a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
        bVar1 = System_String__op_Equality(a,id,(MethodInfo *)0x0);
        if (bVar1) {
          return (Il2CppObject *)x;
        }
      }
    }
  }
  return (Il2CppObject *)0x0;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$PanelEnterMotion
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Game_ProfileDialogUi__PanelEnterMotion (const MethodInfo* method);
// 0x181e21820

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Game_ProfileDialogUi__PanelEnterMotion(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344ca5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"slideRight");
    Il2CppMethodInitialized_184344ca5 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("slideRight",(System_String_o *)0x0,0.16,0.0,0.0,0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$PanelExitMotion
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Game_ProfileDialogUi__PanelExitMotion (const MethodInfo* method);
// 0x181e21870

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Game_ProfileDialogUi__PanelExitMotion(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344ca6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"slideRight");
    Il2CppMethodInitialized_184344ca6 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("slideRight",(System_String_o *)0x0,0.16,0.0,0.0,0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$PreviewEnterMotion
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Game_ProfileDialogUi__PreviewEnterMotion (const MethodInfo* method);
// 0x181e218c0

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Game_ProfileDialogUi__PreviewEnterMotion(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344ca7 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"slideRightSmall");
    Il2CppMethodInitialized_184344ca7 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("slideRightSmall",(System_String_o *)0x0,0.16,0.0,0.0,1,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$PreviewExitMotion
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Game_ProfileDialogUi__PreviewExitMotion (const MethodInfo* method);
// 0x181e21920

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Game_ProfileDialogUi__PreviewExitMotion(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_184344ca8 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"slideRightSmall");
    Il2CppMethodInitialized_184344ca8 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("slideRightSmall",(System_String_o *)0x0,0.16,0.0,0.0,1,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$SaveCallout
// il2cpp: void Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveCallout (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x181e21980

void Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveCallout
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  bool bVar1;
  
  if (Il2CppMethodInitialized_184344ca9 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-save-scope");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.SaveLocalScope");
    il2cpp_codegen_initialize_runtime_metadata(&"Changes save only to local Profile.json and stay separate from your account.");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.SaveAccountScope");
    il2cpp_codegen_initialize_runtime_metadata(&"Changes save to your account and sync when you sign in elsewhere.");
    Il2CppMethodInitialized_184344ca9 = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  bVar1 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if (ui != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    if (!bVar1) {
      Gisketch_Aottg2UI_Code_AottgUi__CalloutKey
                (ui,2,"MainMenu.Profile.SaveLocalScope","Changes save only to local Profile.json and stay separate from your account.","profile-save-scope",(MethodInfo *)0x0);
      return;
    }
    Gisketch_Aottg2UI_Code_AottgUi__CalloutKey
              (ui,0,"MainMenu.Profile.SaveAccountScope","Changes save to your account and sync when you sign in elsewhere.","profile-save-scope",(MethodInfo *)0x0);
    return;
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$SaveFooter
// il2cpp: void Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveFooter (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, System_String_o* actionId, const MethodInfo* method);
// 0x181e21a60

void Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveFooter
               (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,System_String_o *actionId,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_184344caa == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Save");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.save.idle");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Cancel");
    Il2CppMethodInitialized_184344caa = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
              (footer,"Common.Cancel","Cancel","overlay.close",(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey
                       (footer,"Common.Save","Save",actionId,(MethodInfo *)0x0);
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
    if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this->fields).enabled = "profile.save.idle";
      Il2CppCodeGenWriteBarrier(&(__this->fields).enabled,"profile.save.idle");
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).bind = __this;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind,__this);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$SaveFooter
// il2cpp: void Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveFooter (Gisketch_Aottg2UI_Code_AottgUi_o* footer, System_String_o* actionId, const MethodInfo* method);
// 0x181e21b90

void Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveFooter_1e21b90
               (Gisketch_Aottg2UI_Code_AottgUi_o *footer,System_String_o *actionId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_184344cab == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Save");
    il2cpp_codegen_initialize_runtime_metadata(&"Cancel");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.save.idle");
    il2cpp_codegen_initialize_runtime_metadata(&"Save");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Cancel");
    Il2CppMethodInitialized_184344cab = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
              (footer,3,"Common.Cancel","Cancel","overlay.close",
               (System_String_o *)0x0,(System_String_o *)0x0,
               (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
               (MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
                       (footer,0,"Common.Save","Save",actionId,(System_String_o *)0x0,
                        (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
                        (System_String_o *)0x0,(MethodInfo *)0x0);
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor
              ((UnitySourceGeneratedAssemblyMonoScriptTypes_v1_o *)__this,(MethodInfo *)0x0);
    if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this->fields).enabled = "profile.save.idle";
      Il2CppCodeGenWriteBarrier(&(__this->fields).enabled,"profile.save.idle");
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).bind = __this;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind,__this);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


