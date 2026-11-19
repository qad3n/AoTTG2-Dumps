// Type: Gisketch.Aottg2UI.Game.ProfileDialogUi
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Scripts/Gisketch.Aottg2UI.Game/ProfileDialogUi.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Game.ProfileDialogUi$$get_SplitRootLayout
// il2cpp: Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o* Gisketch_Aottg2UI_Game_ProfileDialogUi__get_SplitRootLayout (const MethodInfo* method);
// 0x58fb670

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_ProfileDialogUi__get_SplitRootLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLength_o *width;
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07545613 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Column");
    il2cpp_codegen_initialize_runtime_metadata(&"Stretch");
    Il2CppMethodInitialized_07545613 = '\x01';
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
// 0x58fb7e0

Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *
Gisketch_Aottg2UI_Game_ProfileDialogUi__get_SplitBodyLayout(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchLayoutDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07545614 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"Row");
    il2cpp_codegen_initialize_runtime_metadata(&"FlexStart");
    Il2CppMethodInitialized_07545614 = '\x01';
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
// 0x58fbdb0
// eh: try 0x58fbeb7..0x58fbfc1 -> pad 0x58fbfc5 (+6 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x58fbfe3..0x58fbfe8 -> pad 0x58fc008 cleanup
// eh: try 0x58fc00b..0x58fc015 -> pad 0x58fc01d catch (...) [compiler noexcept guard]
// asm: 29 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58fbf5f: jmp 0x58fbf6b
// asm:   0x58fbfc1: jmp 0x58fbfcb
// asm:   0x58fbfc3: jmp 0x58fbfcb
// asm:   0x58fbfc5: jmp 0x58fbfcb
// asm:   0x58fbfc7: jmp 0x58fbfcb
// asm:   0x58fbfc9: jmp 0x58fbfcb
// asm:   0x58fbfcb: mov rbx, rax
// asm:   0x58fbfce: cmp edx, 1
// asm:   0x58fbfd1: jne 0x58fc00b
// asm:   0x58fbfd3: mov rdi, rbx
// asm:   0x58fbfd6: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58fbfdb: mov rbx, qword ptr [rax]
// asm:   0x58fbfde: mov qword ptr [rsp + 0x30], rbx
// asm:   0x58fbfe3: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58fbfe8: xor r15d, r15d
// asm:   0x58fbfeb: lea rdi, [rsp + 0x40]
// asm:   0x58fbff0: xor esi, esi
// asm:   0x58fbff2: call 0x5360ae0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x58fbff7: test rbx, rbx
// asm:   0x58fbffa: je 0x58fbf77
// asm:   0x58fc000: mov rdi, rbx
// asm:   0x58fc003: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58fc008: mov rbx, rax
// asm:   0x58fc00b: lea rdi, [rsp + 0x30]
// asm:   0x58fc010: call 0x2fd0d90  ; il2cpp_runtime_helper_02fd0d90()
// asm:   0x58fc015: mov rdi, rbx
// asm:   0x58fc018: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58fc01d: mov rdi, rax
// asm:   0x58fc020: call 0x2ab61e0  ; __clang_call_terminate()

Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *
Gisketch_Aottg2UI_Game_ProfileDialogUi__GridItems
          (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *presets,MethodInfo *method)

{
  uint uVar1;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *pGVar2;
  System_String_o *area;
  System_String_o *str1;
  System_String_o *pSVar3;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *pGVar4;
  ulong uVar5;
  System_String_o **ppSVar6;
  ulong uVar7;
  Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o *targetAddress;
  int32_t local_8c;
  undefined1 local_88 [24];
  System_String_o *pSStack_70;
  undefined8 local_68;
  undefined1 *local_60;
  undefined1 local_58 [24];
  undefined8 uStack_40;
  
  if (Il2CppMethodInitialized_07545615 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&"ProfileDialogUi.GridItems");
    il2cpp_codegen_initialize_runtime_metadata(&"presets=");
    Il2CppMethodInitialized_07545615 = '\x01';
  }
  pSVar3 = "presets=";
  area = "ProfileDialogUi.GridItems";
  local_58._16_8_ = 0;
  uStack_40._0_1_ = false;
  uStack_40._1_1_ = false;
  uStack_40._2_6_ = 0;
  local_58._0_8_ = (System_String_o *)0x0;
  local_58._8_8_ = (System_String_o *)0x0;
  if (presets == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
    local_8c = 0;
  }
  else {
    local_8c = (int32_t)presets->max_length;
  }
  str1 = System_Int32__ToString(&local_8c,(MethodInfo *)0x0);
  pSVar3 = System_String__Concat_52f0320(pSVar3,str1,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            ((Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *)local_88,area,pSVar3,(MethodInfo *)0x0
            );
  local_58._16_8_ = local_88._16_8_;
  uStack_40 = pSStack_70;
  local_58._0_8_ = local_88._0_8_;
  local_58._8_8_ = local_88._8_8_;
  local_68 = 0;
  local_60 = local_58;
  if (presets == (Gisketch_Aottg2UI_Game_AottgProfilePreset_array *)0x0) {
    pGVar4 = (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array,0);
  }
  else {
    pGVar4 = (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *)
             SZArrayNew(TypeInfo_Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array,
                        (uint32_t)presets->max_length);
    if (0 < (int)presets->max_length) {
      if (pGVar4 == (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *)0x0) {
        local_88._16_8_ = (System_String_o *)0x0;
        pSStack_70 = (System_String_o *)0x0;
        local_88._0_8_ = (System_String_o *)0x0;
        local_88._8_8_ = (System_String_o *)0x0;
        Gisketch_Aottg2UI_Code_GisketchGridPickerItem___ctor
                  ((Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o *)local_88,presets->m_Items[0].fields.Key,
                   presets->m_Items[0].fields.Label,presets->m_Items[0].fields.Sprite,(System_String_o *)0x0,
                   (MethodInfo *)0x0);
        ThrowNullReferenceException();
      }
      uVar5 = presets->max_length & 0xffffffff;
      ppSVar6 = &presets->m_Items[0].fields.Sprite;
      uVar7 = 0;
      pGVar2 = pGVar4;
      do {
        targetAddress = pGVar2->m_Items;
        if (uVar5 <= uVar7) {
          ThrowIndexOutOfRangeException();
        }
        local_88._16_8_ = (System_String_o *)0x0;
        pSStack_70 = (System_String_o *)0x0;
        local_88._0_8_ = (System_String_o *)0x0;
        local_88._8_8_ = (System_String_o *)0x0;
        Gisketch_Aottg2UI_Code_GisketchGridPickerItem___ctor
                  ((Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o *)local_88,
                   ((Gisketch_Aottg2UI_Game_AottgProfilePreset_Fields *)(ppSVar6 + -2))->Key,ppSVar6[-1],
                   *ppSVar6,(System_String_o *)0x0,(MethodInfo *)0x0);
        if ((uint)pGVar4->max_length <= uVar7) {
          ThrowIndexOutOfRangeException();
        }
        pGVar2->m_Items[0].fields.Sprite = (System_String_o *)local_88._16_8_;
        pGVar2->m_Items[0].fields.Keywords = pSStack_70;
        (targetAddress->fields).Key = (System_String_o *)local_88._0_8_;
        pGVar2->m_Items[0].fields.Label = (System_String_o *)local_88._8_8_;
        Il2CppCodeGenWriteBarrier((void **)targetAddress);
        uVar7 = uVar7 + 1;
        uVar1 = (uint)presets->max_length;
        uVar5 = (ulong)uVar1;
        ppSVar6 = ppSVar6 + 3;
        pGVar2 = (Gisketch_Aottg2UI_Code_GisketchGridPickerItem_array *)targetAddress;
      } while ((long)uVar7 < (long)(int)uVar1);
    }
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose
            ((Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o *)local_58,(MethodInfo *)0x0);
  return pGVar4;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$SelectAvatar
// il2cpp: void Gisketch_Aottg2UI_Game_ProfileDialogUi__SelectAvatar (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item, const MethodInfo* method);
// 0x58feb00

void Gisketch_Aottg2UI_Game_ProfileDialogUi__SelectAvatar
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,
               Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item,MethodInfo *method)

{
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545616 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileDialogSelection);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-preview-avatar-image");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-avatar-key");
    Il2CppMethodInitialized_07545616 = '\x01';
  }
  TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileDialogSelection->static_fields->AvatarKey = item.fields.Key;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileDialogSelection->static_fields->AvatarKey);
  Gisketch_Aottg2UI_Actions_GisketchFormState__SetDraft_52a3d20
            (context.fields.GameObject,"profile-avatar-key",item.fields.Key,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_ProfileDialogUi__UpdatePreviewImage
            (context,"profile-preview-avatar-image",item.fields.Sprite,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$SelectBanner
// il2cpp: void Gisketch_Aottg2UI_Game_ProfileDialogUi__SelectBanner (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item, const MethodInfo* method);
// 0x58fee70

void Gisketch_Aottg2UI_Game_ProfileDialogUi__SelectBanner
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,
               Gisketch_Aottg2UI_Code_GisketchGridPickerItem_o item,MethodInfo *method)

{
  Gisketch_Aottg2UI_Game_AottgProfileDialogSelection_StaticFields *pGVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07545617 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileDialogSelection);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-preview-banner-image");
    il2cpp_codegen_initialize_runtime_metadata(&"profile-banner-key");
    Il2CppMethodInitialized_07545617 = '\x01';
  }
  pGVar1 = TypeInfo_Gisketch_Aottg2UI_Game_AottgProfileDialogSelection->static_fields;
  pGVar1->BannerKey = item.fields.Key;
  Il2CppCodeGenWriteBarrier(&pGVar1->BannerKey);
  Gisketch_Aottg2UI_Actions_GisketchFormState__SetDraft_52a3d20
            (context.fields.GameObject,"profile-banner-key",item.fields.Key,(MethodInfo *)0x0);
  Gisketch_Aottg2UI_Game_ProfileDialogUi__UpdatePreviewImage
            (context,"profile-preview-banner-image",item.fields.Sprite,method_00);
  return;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$UpdatePreviewImage
// il2cpp: void Gisketch_Aottg2UI_Game_ProfileDialogUi__UpdatePreviewImage (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context, System_String_o* imageId, System_String_o* sprite, const MethodInfo* method);
// 0x58feba0
// eh: try 0x58fecbe..0x58fee01 -> pad 0x58fee05 (+14 call sites) catch Il2CppExceptionWrapper, cleanup [finally]
// eh: try 0x58fee31..0x58fee36 -> pad 0x58fee4f cleanup
// eh: try 0x58fee52..0x58fee5c -> pad 0x58fee64 catch (...) [compiler noexcept guard]
// asm: 34 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x58fee01: jmp 0x58fee19
// asm:   0x58fee03: jmp 0x58fee19
// asm:   0x58fee05: jmp 0x58fee19
// asm:   0x58fee07: jmp 0x58fee19
// asm:   0x58fee09: jmp 0x58fee19
// asm:   0x58fee0b: jmp 0x58fee19
// asm:   0x58fee0d: jmp 0x58fee19
// asm:   0x58fee0f: jmp 0x58fee19
// asm:   0x58fee11: jmp 0x58fee19
// asm:   0x58fee13: jmp 0x58fee19
// asm:   0x58fee15: jmp 0x58fee19
// asm:   0x58fee17: jmp 0x58fee19
// asm:   0x58fee19: mov rbx, rax
// asm:   0x58fee1c: cmp edx, 1
// asm:   0x58fee1f: jne 0x58fee52
// asm:   0x58fee21: mov rdi, rbx
// asm:   0x58fee24: call 0x6e25590  ; __cxa_begin_catch()
// asm:   0x58fee29: mov rbx, qword ptr [rax]
// asm:   0x58fee2c: mov qword ptr [rsp + 0x38], rbx
// asm:   0x58fee31: call 0x6e255a0  ; __cxa_end_catch()
// asm:   0x58fee36: lea rdi, [rsp + 0x10]
// asm:   0x58fee3b: xor esi, esi
// asm:   0x58fee3d: call 0x5360ae0  ; Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose()
// asm:   0x58fee42: test rbx, rbx
// asm:   0x58fee45: je 0x58fede3
// asm:   0x58fee47: mov rdi, rbx
// asm:   0x58fee4a: call 0x311cca0  ; il2cpp_codegen_rethrow()
// asm:   0x58fee4f: mov rbx, rax
// asm:   0x58fee52: lea rdi, [rsp + 0x38]
// asm:   0x58fee57: call 0x2fd0db0  ; il2cpp_runtime_helper_02fd0db0()
// asm:   0x58fee5c: mov rdi, rbx
// asm:   0x58fee5f: call 0x6e25540  ; _Unwind_Resume()
// asm:   0x58fee64: mov rdi, rax
// asm:   0x58fee67: call 0x2ab61e0  ; __clang_call_terminate()

void Gisketch_Aottg2UI_Game_ProfileDialogUi__UpdatePreviewImage
               (Gisketch_Aottg2UI_Actions_GisketchActionContext_o context,System_String_o *imageId,
               System_String_o *sprite,MethodInfo *method)

{
  bool bVar1;
  System_String_o *pSVar2;
  UnityEngine_Transform_o *pUVar3;
  UnityEngine_UI_Image_o *__this;
  UnityEngine_Sprite_o *value;
  bool bStack_79;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o GStack_78;
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope_o GStack_50;
  
  if (Il2CppMethodInitialized_07545618 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_Gisketch_Aottg2UI_Game_ProfileDialogUi_Find_Image);
    il2cpp_codegen_initialize_runtime_metadata(&" sprite=");
    il2cpp_codegen_initialize_runtime_metadata(&"found=");
    il2cpp_codegen_initialize_runtime_metadata(&"ProfileDialogUi.UpdatePreviewImage");
    Il2CppMethodInitialized_07545618 = '\x01';
  }
  GStack_78.fields._startMs._0_4_ = 0;
  GStack_78.fields._startMs._4_2_ = 0;
  GStack_78.fields._startMs._6_2_ = 0;
  GStack_78.fields._enabled = false;
  GStack_78.fields._hotLoop = false;
  GStack_78.fields._26_6_ = 0;
  GStack_78.fields._area = (System_String_o *)0x0;
  GStack_78.fields._detail = (System_String_o *)0x0;
  bStack_79 = false;
  pSVar2 = System_String__Concat_5301f10(imageId," sprite=",sprite,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Time
            (&GStack_50,"ProfileDialogUi.UpdatePreviewImage",pSVar2,(MethodInfo *)0x0);
  GStack_78.fields._startMs = GStack_50.fields._startMs;
  GStack_78.fields._enabled = GStack_50.fields._enabled;
  GStack_78.fields._hotLoop = GStack_50.fields._hotLoop;
  GStack_78.fields._26_6_ = GStack_50.fields._26_6_;
  GStack_78.fields._area = GStack_50.fields._area;
  GStack_78.fields._detail = GStack_50.fields._detail;
  GStack_50.fields._area = (System_String_o *)0x0;
  GStack_50.fields._detail = (System_String_o *)&GStack_78;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)context.fields.GameObject,(UnityEngine_Object_o *)0x0,
                     (MethodInfo *)0x0);
  if (bVar1) {
    if (context.fields.GameObject == (UnityEngine_GameObject_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar3 = UnityEngine_GameObject__get_transform(context.fields.GameObject,(MethodInfo *)0x0);
    if (pUVar3 == (UnityEngine_Transform_o *)0x0) {
      ThrowNullReferenceException();
    }
    pUVar3 = UnityEngine_Transform__get_root(pUVar3,(MethodInfo *)0x0);
  }
  else {
    pUVar3 = (UnityEngine_Transform_o *)0x0;
  }
  __this = Gisketch_Aottg2UI_Game_ProfileDialogUi__Find_object_
                     (pUVar3,imageId,
                      (MethodInfo_3613F80 *)MethodInfo_Gisketch_Aottg2UI_Game_ProfileDialogUi_Find_Image);
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bStack_79 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((g_data_075566f0->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075566f0);
  }
  pSVar2 = System_Boolean__ToString(&bStack_79,(MethodInfo *)0x0);
  pSVar2 = System_String__Concat_52f0320("found=",pSVar2,(MethodInfo *)0x0);
  if ((TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog)
    ;
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog__Mark("ProfileDialogUi.UpdatePreviewImage",pSVar2,(MethodInfo *)0x0);
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)__this,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchSpriteLoader);
    }
    value = Gisketch_Aottg2UI_Styling_GisketchSpriteLoader__Load(sprite,(MethodInfo *)0x0);
    if (__this == (UnityEngine_UI_Image_o *)0x0) {
      ThrowNullReferenceException();
    }
    UnityEngine_UI_Image__set_sprite(__this,value,(MethodInfo *)0x0);
  }
  Gisketch_Aottg2UI_Diagnostics_GisketchUiPerfLog_Scope__Dispose(&GStack_78,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$Find<object>
// il2cpp: Il2CppObject* Gisketch_Aottg2UI_Game_ProfileDialogUi__Find_object_ (UnityEngine_Transform_o* root, System_String_o* id, const MethodInfo_3613F80* method);
// 0x3713f80
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x37140a0: jmp 0x37140a4
// asm:   0x37140a2: xor ebp, ebp
// asm:   0x37140d6: jmp 0x3713fc7

Il2CppObject *
Gisketch_Aottg2UI_Game_ProfileDialogUi__Find_object_
          (UnityEngine_Transform_o *root,System_String_o *id,MethodInfo_3613F80 *method)

{
  uint32_t uVar1;
  uint uVar2;
  UnityEngine_Object_o *x;
  bool bVar3;
  System_Object_array *pSVar4;
  ulong uVar5;
  UnityEngine_Object_o *__this;
  System_String_o *a;
  ulong uVar6;
  
  if ((method->rgctx_data == (MethodInfo_3613F80_RGCTXs *)0x0) &&
     (il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object),
     method->rgctx_data == (MethodInfo_3613F80_RGCTXs *)0x0)) {
    il2cpp_codegen_rgctx_method_init((MethodInfo *)method);
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)root,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if ((!bVar3) && (bVar3 = System_String__IsNullOrEmpty(id,(MethodInfo *)0x0), !bVar3)) {
    if ((root == (UnityEngine_Transform_o *)0x0) ||
       (pSVar4 = UnityEngine_Component__GetComponentsInChildren_object_
                           ((UnityEngine_Component_o *)root,true,
                            (MethodInfo_34B1260 *)
                            method->rgctx_data->_1_UnityEngine_Component_GetComponentsInChildren_T_),
       pSVar4 == (System_Object_array *)0x0)) {
label_037140db:
      ThrowNullReferenceException();
    }
    if (0 < (int)pSVar4->max_length) {
      uVar5 = pSVar4->max_length & 0xffffffff;
      uVar6 = 0;
      do {
        if (uVar5 <= uVar6) {
          ThrowIndexOutOfRangeException();
        }
        x = (UnityEngine_Object_o *)pSVar4->m_Items[uVar6];
        if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
        }
        bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
        if (bVar3) {
          if ((x == (UnityEngine_Object_o *)0x0) ||
             (__this = (UnityEngine_Object_o *)
                       UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)x,(MethodInfo *)0x0),
             __this == (UnityEngine_Object_o *)0x0)) goto label_037140db;
          a = UnityEngine_Object__get_name(__this,(MethodInfo *)0x0);
          bVar3 = System_String__op_Equality(a,id,(MethodInfo *)0x0);
          if (bVar3) {
            return (Il2CppObject *)x;
          }
        }
        uVar6 = uVar6 + 1;
        uVar2 = (uint)pSVar4->max_length;
        uVar5 = (ulong)uVar2;
      } while ((long)uVar6 < (long)(int)uVar2);
    }
  }
  return (Il2CppObject *)0x0;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$PanelEnterMotion
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Game_ProfileDialogUi__PanelEnterMotion (const MethodInfo* method);
// 0x58fef10

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Game_ProfileDialogUi__PanelEnterMotion(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_07545619 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"slideRight");
    Il2CppMethodInitialized_07545619 = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("slideRight",(System_String_o *)0x0,0.16,0.0,0.0,0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$PanelExitMotion
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Game_ProfileDialogUi__PanelExitMotion (const MethodInfo* method);
// 0x58fef60

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Game_ProfileDialogUi__PanelExitMotion(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_0754561a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"slideRight");
    Il2CppMethodInitialized_0754561a = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("slideRight",(System_String_o *)0x0,0.16,0.0,0.0,0,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$PreviewEnterMotion
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Game_ProfileDialogUi__PreviewEnterMotion (const MethodInfo* method);
// 0x58fefb0

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Game_ProfileDialogUi__PreviewEnterMotion(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_0754561b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"slideRightSmall");
    Il2CppMethodInitialized_0754561b = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("slideRightSmall",(System_String_o *)0x0,0.16,0.0,0.0,1,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$PreviewExitMotion
// il2cpp: Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o* Gisketch_Aottg2UI_Game_ProfileDialogUi__PreviewExitMotion (const MethodInfo* method);
// 0x58ff000

Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *
Gisketch_Aottg2UI_Game_ProfileDialogUi__PreviewExitMotion(MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *pGVar1;
  
  if (Il2CppMethodInitialized_0754561c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&"slideRightSmall");
    Il2CppMethodInitialized_0754561c = '\x01';
  }
  pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__Motion
                     ("slideRightSmall",(System_String_o *)0x0,0.16,0.0,0.0,1,(MethodInfo *)0x0);
  return pGVar1;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$SaveCallout
// il2cpp: void Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveCallout (Gisketch_Aottg2UI_Code_AottgUi_o* ui, const MethodInfo* method);
// 0x58fddf0

void Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveCallout
               (Gisketch_Aottg2UI_Code_AottgUi_o *ui,MethodInfo *method)

{
  bool bVar1;
  System_String_o **ppSVar2;
  int32_t variant;
  
  if (Il2CppMethodInitialized_0754561d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_ApplicationManagers_AccountManager);
    il2cpp_codegen_initialize_runtime_metadata(&"profile-save-scope");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.SaveLocalScope");
    il2cpp_codegen_initialize_runtime_metadata(&"MainMenu.Profile.SaveAccountScope");
    Il2CppMethodInitialized_0754561d = '\x01';
  }
  if ((TypeInfo_ApplicationManagers_AccountManager->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_ApplicationManagers_AccountManager);
  }
  variant = 0;
  bVar1 = ApplicationManagers_AccountManager__get_IsLoggedIn((MethodInfo *)0x0);
  if (bVar1) {
    if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
label_058fde9c:
      ThrowNullReferenceException();
    }
    ppSVar2 = &"MainMenu.Profile.SaveAccountScope";
  }
  else {
    if (ui == (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) goto label_058fde9c;
    variant = 2;
    ppSVar2 = &"MainMenu.Profile.SaveLocalScope";
  }
  Gisketch_Aottg2UI_Code_AottgUi__CalloutKey(ui,variant,*ppSVar2,"profile-save-scope",(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$SaveFooter
// il2cpp: void Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveFooter (Gisketch_Aottg2UI_Code_AottgDialogFooter_o* footer, System_String_o* actionId, const MethodInfo* method);
// 0x58fe600

void Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveFooter
               (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *footer,System_String_o *actionId,
               MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_0754561e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Save");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.save.idle");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Cancel");
    Il2CppMethodInitialized_0754561e = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgDialogFooter_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgDialogFooter__QuietKey
              (footer,"Common.Cancel","overlay.close",(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgDialogFooter__PrimaryKey
                       (footer,"Common.Save",actionId,(MethodInfo *)0x0);
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this,(MethodInfo *)0x0);
    if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this->fields).enabled = "profile.save.idle";
      Il2CppCodeGenWriteBarrier(&(__this->fields).enabled);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).bind = __this;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Game.ProfileDialogUi$$SaveFooter
// il2cpp: void Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveFooter (Gisketch_Aottg2UI_Code_AottgUi_o* footer, System_String_o* actionId, const MethodInfo* method);
// 0x58ff050

void Gisketch_Aottg2UI_Game_ProfileDialogUi__SaveFooter_57ff050
               (Gisketch_Aottg2UI_Code_AottgUi_o *footer,System_String_o *actionId,MethodInfo *method)

{
  Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *pGVar1;
  Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *__this;
  
  if (Il2CppMethodInitialized_0754561f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    il2cpp_codegen_initialize_runtime_metadata(&"overlay.close");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Save");
    il2cpp_codegen_initialize_runtime_metadata(&"profile.save.idle");
    il2cpp_codegen_initialize_runtime_metadata(&"Common.Cancel");
    Il2CppMethodInitialized_0754561f = '\x01';
  }
  if (footer != (Gisketch_Aottg2UI_Code_AottgUi_o *)0x0) {
    Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
              (footer,3,"Common.Cancel","overlay.close",(System_String_o *)0x0,
               (System_String_o *)0x0,(Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,
               (System_String_o *)0x0,(MethodInfo *)0x0);
    pGVar1 = Gisketch_Aottg2UI_Code_AottgUi__ButtonKey
                       (footer,0,"Common.Save",actionId,(System_String_o *)0x0,(System_String_o *)0x0,
                        (Gisketch_Aottg2UI_Data_GisketchMotionDefinition_o *)0x0,(System_String_o *)0x0,
                        (MethodInfo *)0x0);
    __this = il2cpp_codegen_object_new
                       ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition);
    Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition___ctor(__this,(MethodInfo *)0x0);
    if (__this != (Gisketch_Aottg2UI_Data_GisketchUIBindingDefinition_o *)0x0) {
      (__this->fields).enabled = "profile.save.idle";
      Il2CppCodeGenWriteBarrier(&(__this->fields).enabled);
      if (pGVar1 != (Gisketch_Aottg2UI_Data_GisketchNodeDefinition_o *)0x0) {
        (pGVar1->fields).bind = __this;
        Il2CppCodeGenWriteBarrier(&(pGVar1->fields).bind);
        return;
      }
    }
  }
  ThrowNullReferenceException();
}


