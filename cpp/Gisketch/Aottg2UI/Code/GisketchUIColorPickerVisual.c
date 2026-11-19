// Type: Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual
// Ghidra (System V/gcc) decompilation, IL2CPP structs + signatures applied.
// ---- AoTTG2 cross-reference ----
// Update status: unchanged since the previous dump
// C# structure: source/csharp_body_deref/Gisketch.Aottg2UI.Runtime/Gisketch.Aottg2UI.Code/GisketchUIColorPickerVisual.cs
// Prior real C# source: none
// --------------------------------

// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.DragTarget$$Setup
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget__Setup (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget_o* __this, System_Action_PointerEventData__o* drag, const MethodInfo* method);
// 0x537afd0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget__Setup
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget_o *__this,
               System_Action_PointerEventData__o *drag,MethodInfo *method)

{
  (__this->fields)._drag = drag;
  Il2CppCodeGenWriteBarrier(&(__this->fields)._drag);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.DragTarget$$OnPointerDown
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget__OnPointerDown (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x537afe0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget__OnPointerDown
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  System_Action_PointerEventData__o *pSVar1;
  code *vtableDispatch;
  
  pSVar1 = (__this->fields)._drag;
  if (pSVar1 == (System_Action_PointerEventData__o *)0x0) {
    return;
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)
            ((pSVar1->fields).method_code,eventData,(pSVar1->fields).method,vtableDispatch);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.DragTarget$$OnDrag
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget__OnDrag (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x537b000

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget__OnDrag
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  System_Action_PointerEventData__o *pSVar1;
  code *vtableDispatch;
  
  pSVar1 = (__this->fields)._drag;
  if (pSVar1 == (System_Action_PointerEventData__o *)0x0) {
    return;
  }
  vtableDispatch = (code *)(pSVar1->fields).invoke_impl;
  (*vtableDispatch)
            ((pSVar1->fields).method_code,eventData,(pSVar1->fields).method,vtableDispatch);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.DragTarget$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget_o* __this, const MethodInfo* method);
// 0x537b020

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget___ctor
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_DragTarget_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.<>c$$.cctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c___cctor (const MethodInfo* method);
// 0x537b030

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c___cctor(MethodInfo *method)

{
  Il2CppObject *__this;
  
  if (Il2CppMethodInitialized_07542aa6 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_c)
    ;
    Il2CppMethodInitialized_07542aa6 = '\x01';
  }
  __this = (Il2CppObject *)
           il2cpp_codegen_object_new
                     ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_c);
  System_Object___ctor(__this,(MethodInfo *)0x0);
  TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_c->static_fields->__9 =
       (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c_o *)__this;
  Il2CppCodeGenWriteBarrier
            (&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_c->static_fields->__9);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.<>c$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c_o* __this, const MethodInfo* method);
// 0x537b0a0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c___ctor
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c_o *__this,MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.<>c$$<RefreshTextures>b__30_1
// il2cpp: UnityEngine_Color32_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c___RefreshTextures_b__30_1 (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c_o* __this, int32_t x, int32_t __, const MethodInfo* method);
// 0x537b0b0

UnityEngine_Color32_o
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c___RefreshTextures_b__30_1
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c_o *__this,int32_t x,int32_t __,
          MethodInfo *method)

{
  uint8_t uVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  MethodInfo *method_00;
  float fVar4;
  float fVar5;
  UnityEngine_Color_o UVar6;
  float fStack_38;
  float fStack_24;
  
  fVar4 = floorf((float)x / 127.0);
  fVar4 = (float)x / 127.0 - fVar4;
  fVar5 = 1.0;
  if (fVar4 <= 1.0) {
    fVar5 = fVar4;
  }
  method_00 = (MethodInfo *)0x1;
  UVar6 = UnityEngine_Color__HSVToRGB_68fcb80
                    ((float)(-(uint)(0.0 <= fVar4) & (uint)fVar5),1.0,1.0,true,(MethodInfo *)0x0);
  uVar1 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(UVar6.fields.r,method_00);
  fStack_24 = UVar6.fields.g;
  uVar2 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(fStack_24,method_00);
  fStack_38 = UVar6.fields.b;
  uVar3 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(fStack_38,method_00);
  return (UnityEngine_Color32_Fields)
         (UnityEngine_Color32_Fields)(CONCAT12(uVar3,CONCAT11(uVar2,uVar1)) | 0xff000000);
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.<>c__DisplayClass30_0$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c__DisplayClass30_0___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c__DisplayClass30_0_o* __this, const MethodInfo* method);
// 0x537a5b0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c__DisplayClass30_0___ctor
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c__DisplayClass30_0_o *__this,
               MethodInfo *method)

{
  System_Object___ctor((Il2CppObject *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual.<>c__DisplayClass30_0$$<RefreshTextures>b__2
// il2cpp: UnityEngine_Color32_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c__DisplayClass30_0___RefreshTextures_b__2 (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c__DisplayClass30_0_o* __this, int32_t x, int32_t y, const MethodInfo* method);
// 0x537b150

UnityEngine_Color32_o
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c__DisplayClass30_0___RefreshTextures_b__2
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c__DisplayClass30_0_o *__this,int32_t x,
          int32_t y,MethodInfo *method)

{
  uint8_t uVar1;
  uint8_t uVar2;
  uint8_t uVar3;
  MethodInfo *method_00;
  MethodInfo *method_01;
  undefined4 uVar4;
  float t;
  
  t = (float)x / 383.0;
  uVar4 = 0xff969696;
  if ((y / 6 + x / 6 & 1U) == 0) {
    uVar4 = 0xffebebeb;
  }
  uVar1 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Blend
                    ((uint8_t)uVar4,(__this->fields).color.fields._overlap_0._at_b._lead[0],t,
                     (MethodInfo *)((ulong)((long)y * 0x2aaaaaab) >> 0x3f));
  uVar2 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Blend
                    ((uint8_t)((uint)uVar4 >> 8),(__this->fields).color.fields._overlap_0._at_g.g,t,method_00)
  ;
  uVar3 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Blend
                    ((uint8_t)((uint)uVar4 >> 0x10),(__this->fields).color.fields._overlap_0._at_b.b,t,
                     method_01);
  return (UnityEngine_Color32_Fields)
         (UnityEngine_Color32_Fields)((uint)uVar1 | (uint)uVar2 << 8 | (uint)uVar3 << 0x10 | 0xff000000);
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$add_Changed
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__add_Changed (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, System_Action_GisketchUIColorPickerValue__o* value, const MethodInfo* method);
// 0x5377440

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__add_Changed
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,
               System_Action_GisketchUIColorPickerValue__o *value,MethodInfo *method)

{
  System_Action_GisketchUIColorPickerValue__c *pSVar1;
  System_Action_GisketchUIColorPickerValue__o *pSVar2;
  System_Delegate_o *obj;
  Il2CppObject *value_00;
  System_Action_GisketchUIColorPickerValue__o *a;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07542a95 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchUIColorPickerValue);
    Il2CppMethodInitialized_07542a95 = '\x01';
  }
  a = (__this->fields).Changed;
  do {
    obj = System_Delegate__Combine((System_Delegate_o *)a,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_GisketchUIColorPickerValue;
    value_00 = (Il2CppObject *)0x0;
    if (obj != (System_Delegate_o *)0x0) {
      value_00 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)obj,
                            (Il2CppClass *)TypeInfo_System_Action_GisketchUIColorPickerValue);
      if (value_00 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref(&(__this->fields).Changed,value_00,a);
    bVar3 = pSVar2 != a;
    a = pSVar2;
  } while (bVar3);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$remove_Changed
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__remove_Changed (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, System_Action_GisketchUIColorPickerValue__o* value, const MethodInfo* method);
// 0x5377900

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__remove_Changed
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,
               System_Action_GisketchUIColorPickerValue__o *value,MethodInfo *method)

{
  System_Action_GisketchUIColorPickerValue__c *pSVar1;
  System_Action_GisketchUIColorPickerValue__o *pSVar2;
  System_Delegate_o *obj;
  Il2CppObject *value_00;
  System_Action_GisketchUIColorPickerValue__o *source;
  bool bVar3;
  
  if (Il2CppMethodInitialized_07542a96 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_GisketchUIColorPickerValue);
    Il2CppMethodInitialized_07542a96 = '\x01';
  }
  source = (__this->fields).Changed;
  do {
    obj = System_Delegate__Remove((System_Delegate_o *)source,(System_Delegate_o *)value,(MethodInfo *)0x0);
    pSVar1 = TypeInfo_System_Action_GisketchUIColorPickerValue;
    value_00 = (Il2CppObject *)0x0;
    if (obj != (System_Delegate_o *)0x0) {
      value_00 = il2cpp_vm_Object_IsInst
                           ((Il2CppObject *)obj,
                            (Il2CppClass *)TypeInfo_System_Action_GisketchUIColorPickerValue);
      if (value_00 == (Il2CppObject *)0x0) {
        il2cpp_codegen_raise_invalid_cast_exception(obj,pSVar1);
      }
    }
    pSVar2 = il2cpp_codegen_interlocked_compare_exchange_ref(&(__this->fields).Changed,value_00,source);
    bVar3 = pSVar2 != source;
    source = pSVar2;
  } while (bVar3);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$get_EnableAlpha
// il2cpp: bool Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__get_EnableAlpha (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, const MethodInfo* method);
// 0x5378c10

bool Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__get_EnableAlpha
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,MethodInfo *method)

{
  return (__this->fields)._EnableAlpha_k__BackingField;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$set_EnableAlpha
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__set_EnableAlpha (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, bool value, const MethodInfo* method);
// 0x5378c20

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__set_EnableAlpha
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,bool value,MethodInfo *method)

{
  (__this->fields)._EnableAlpha_k__BackingField = value;
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$Setup
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Setup (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, System_String_o* id, bool enableAlpha, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x5375eb0
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x5375f26: cmp byte ptr [rip + 0x21ccb3b], 0
// asm:   0x5375f2d: jne 0x5375f5a
// asm:   0x53760c1: jmp 0x5375f5a

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Setup
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,System_String_o *id,
               bool enableAlpha,Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,MethodInfo *method)

{
  System_String_o *pSVar1;
  bool bVar2;
  System_String_o *pSVar3;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_UI_LayoutElement_o *pUVar4;
  MethodInfo *extraout_RDX;
  MethodInfo *extraout_RDX_00;
  MethodInfo *method_00;
  MethodInfo *method_01;
  float fVar5;
  UnityEngine_Color_o rgbColor;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields local_70;
  MethodInfo *local_60;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields local_58;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_Fields local_48;
  
  local_60 = (MethodInfo *)theme;
  if (Il2CppMethodInitialized_07542a97 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    Il2CppMethodInitialized_07542a97 = '\x01';
  }
  local_48.R = 0;
  local_48.G = 0;
  local_48.B = 0;
  local_48.A = 0;
  local_48.H = 0.0;
  local_48.S = 0.0;
  local_48.V = 0.0;
  (__this->fields)._EnableAlpha_k__BackingField = enableAlpha;
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  if (Il2CppMethodInitialized_07542a68 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFFFF");
    il2cpp_codegen_initialize_runtime_metadata(&"#FFFFFF");
    Il2CppMethodInitialized_07542a68 = '\x01';
  }
  pSVar1 = "#FFFFFFFF";
  pSVar3 = "#FFFFFF";
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPicker);
  }
  if (enableAlpha) {
    pSVar3 = pSVar1;
  }
  pSVar3 = Gisketch_Aottg2UI_Code_GisketchUIColorPicker__Value(id,pSVar3,enableAlpha,(MethodInfo *)theme);
  bVar2 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__TryParse
                    (pSVar3,enableAlpha,(Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o *)&local_48,
                     (MethodInfo *)theme);
  if (bVar2) {
    local_58._0_4_ = local_48._0_4_;
    local_58.H = local_48.H;
    local_58.S = local_48.S;
    local_58.V = local_48.V;
  }
  else {
    local_70.V = 0.0;
    local_70.H = 0.0;
    local_70.S = 0.0;
    local_70.R = 0xff;
    local_70.G = 0xff;
    local_70.B = 0xff;
    local_70.A = 0xff;
    rgbColor.fields.b = 1.0;
    rgbColor.fields.a = 1.0;
    rgbColor.fields.r = 1.0;
    rgbColor.fields.g = 1.0;
    UnityEngine_Color__RGBToHSV(rgbColor,&local_70.H,&local_70.S,&local_70.V,(MethodInfo *)0x0);
    local_58._0_4_ = local_70._0_4_;
    local_58.H = local_70.H;
    local_58.S = local_70.S;
    local_58.V = local_70.V;
  }
  (__this->fields)._value.fields.R = local_58.R;
  (__this->fields)._value.fields.G = local_58.G;
  (__this->fields)._value.fields.B = local_58.B;
  (__this->fields)._value.fields.A = local_58.A;
  (__this->fields)._value.fields.H = local_58.H;
  (__this->fields)._value.fields.S = local_58.S;
  (__this->fields)._value.fields.V = local_58.V;
  __this_00 = UnityEngine_Component__get_gameObject((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  if ((__this_00 == (UnityEngine_GameObject_o *)0x0) ||
     (pUVar4 = UnityEngine_GameObject__AddComponent_object_
                         (__this_00,
                          (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_LayoutElement),
     method_01 = local_60, pUVar4 == (UnityEngine_UI_LayoutElement_o *)0x0)) {
    ThrowNullReferenceException();
  }
  if (enableAlpha) {
    fVar5 = 260.0;
  }
  else {
    fVar5 = 220.0;
  }
  (*(pUVar4->klass->vtable)._38_set_preferredHeight.methodPtr)
            (pUVar4,fVar5,(pUVar4->klass->vtable)._38_set_preferredHeight.method);
  method_00 = extraout_RDX;
  if (method_01 == (MethodInfo *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme);
      method_00 = extraout_RDX_00;
    }
    method_01 = (MethodInfo *)TypeInfo_Gisketch_Aottg2UI_Styling_GisketchTheme->static_fields->Default;
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Build
            (__this,(Gisketch_Aottg2UI_Styling_GisketchTheme_o *)method_01,method_00);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(__this,method_01);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(__this,method_01);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$SetValue
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__SetValue (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value, bool notify, const MethodInfo* method);
// 0x53774f0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__SetValue
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,
               Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue_o value,bool notify,MethodInfo *method)

{
  undefined8 uVar1;
  System_Action_GisketchUIColorPickerValue__o *pSVar2;
  undefined8 uVar3;
  code *vtableDispatch;
  undefined7 in_register_00000011;
  MethodInfo *method_00;
  
  method_00 = value.fields._0_8_;
  *(MethodInfo **)&(__this->fields)._value.fields = method_00;
  (__this->fields)._value.fields.S = value.fields.S;
  (__this->fields)._value.fields.V = value.fields.V;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(__this,method_00);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(__this,method_00);
  if (((int)CONCAT71(in_register_00000011,notify) == 0) ||
     (pSVar2 = (__this->fields).Changed, pSVar2 == (System_Action_GisketchUIColorPickerValue__o *)0x0)) {
    return;
  }
  uVar1._0_4_ = (__this->fields)._value.fields.S;
  uVar1._4_4_ = (__this->fields)._value.fields.V;
  uVar3._0_1_ = (__this->fields)._value.fields.R;
  uVar3._1_1_ = (__this->fields)._value.fields.G;
  uVar3._2_1_ = (__this->fields)._value.fields.B;
  uVar3._3_1_ = (__this->fields)._value.fields.A;
  uVar3._4_4_ = (__this->fields)._value.fields.H;
  vtableDispatch = (code *)(pSVar2->fields).invoke_impl;
  (*vtableDispatch)
            (uVar1,(pSVar2->fields).method_code,uVar3,(pSVar2->fields).method,vtableDispatch);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$Build
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Build (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x5378c30

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Build
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,
               Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o **targetAddress;
  UnityEngine_UI_RawImage_o **targetAddress_00;
  bool bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_UI_RawImage_o *pUVar3;
  UnityEngine_RectTransform_o *pUVar4;
  UnityEngine_GameObject_o *pUVar5;
  Il2CppObject *pIVar6;
  Il2CppClass *pIVar7;
  MethodInfo *method_00;
  UnityEngine_RectTransform_c *extraout_RDX;
  UnityEngine_RectTransform_c *method_01;
  MethodInfo *method_02;
  MethodInfo *method_03;
  MethodInfo *method_04;
  MethodInfo *method_05;
  UnityEngine_Color_o fallback;
  UnityEngine_Color_o fallback_00;
  UnityEngine_Color_o fallback_01;
  
  if (Il2CppMethodInitialized_07542a98 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Action_PointerEventData);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchUIColorPickerVisual_DragTarget);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_OnAlphaDrag);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_OnHueDrag);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_OnSquareDrag);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Color Gradient");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Hue Slider");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Alpha Slider");
    Il2CppMethodInitialized_07542a98 = '\x01';
  }
  pUVar2 = (UnityEngine_RectTransform_o *)
           UnityEngine_Component__get_transform((UnityEngine_Component_o *)__this,(MethodInfo *)0x0);
  method_01 = extraout_RDX;
  pUVar4 = (UnityEngine_RectTransform_o *)0x0;
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    method_01 = pUVar2->klass;
    pUVar4 = (UnityEngine_RectTransform_o *)0x0;
    if (method_01 == TypeInfo_UnityEngine_RectTransform) {
      pUVar4 = pUVar2;
    }
  }
  fallback.fields.b = 1.0;
  fallback.fields.a = 1.0;
  fallback.fields.r = 1.0;
  fallback.fields.g = 1.0;
  pUVar3 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RawImage
                     ("AoTTG Color Gradient",pUVar4,
                      *(float *)(&g_data_0100b020 +
                                (ulong)((__this->fields)._EnableAlpha_k__BackingField == false) * 4),100.0,
                      fallback,(MethodInfo *)method_01);
  targetAddress = &(__this->fields)._square;
  (__this->fields)._square = pUVar3;
  Il2CppCodeGenWriteBarrier(targetAddress);
  method_00 = (MethodInfo *)&g_data_0100aa68;
  fallback_00.fields.b = 1.0;
  fallback_00.fields.a = 1.0;
  fallback_00.fields.r = 1.0;
  fallback_00.fields.g = 1.0;
  pUVar3 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RawImage
                     ("AoTTG Hue Slider",pUVar4,
                      *(float *)(&g_data_0100aa68 +
                                (ulong)((__this->fields)._EnableAlpha_k__BackingField == false) * 4),22.0,
                      fallback_00,method_02);
  targetAddress_00 = &(__this->fields)._hue;
  (__this->fields)._hue = pUVar3;
  Il2CppCodeGenWriteBarrier(targetAddress_00);
  if ((__this->fields)._EnableAlpha_k__BackingField != false) {
    fallback_01.fields.b = 1.0;
    fallback_01.fields.a = 1.0;
    fallback_01.fields.r = 1.0;
    fallback_01.fields.g = 1.0;
    pUVar3 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RawImage
                       ("AoTTG Alpha Slider",pUVar4,10.0,22.0,fallback_01,method_03);
    (__this->fields)._alpha = pUVar3;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._alpha);
  }
  if (*targetAddress != (UnityEngine_UI_RawImage_o *)0x0) {
    pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                       ((UnityEngine_UI_Graphic_o *)*targetAddress,(MethodInfo *)0x0);
    pUVar4 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__CircleMarker(__this,pUVar4,theme,method_00);
    (__this->fields)._squareMarker = pUVar4;
    Il2CppCodeGenWriteBarrier(&(__this->fields)._squareMarker);
    pUVar3 = (__this->fields)._hue;
    if (pUVar3 != (UnityEngine_UI_RawImage_o *)0x0) {
      pUVar4 = UnityEngine_UI_Graphic__get_rectTransform((UnityEngine_UI_Graphic_o *)pUVar3,(MethodInfo *)0x0)
      ;
      pUVar4 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__LineMarker(pUVar4,theme,method_04);
      (__this->fields)._hueMarker = pUVar4;
      Il2CppCodeGenWriteBarrier(&(__this->fields)._hueMarker);
      pUVar3 = (__this->fields)._alpha;
      if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      }
      bVar1 = UnityEngine_Object__op_Inequality
                        ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
      if (bVar1) {
        pUVar3 = (__this->fields)._alpha;
        if (pUVar3 == (UnityEngine_UI_RawImage_o *)0x0) goto label_0537901a;
        pUVar4 = UnityEngine_UI_Graphic__get_rectTransform
                           ((UnityEngine_UI_Graphic_o *)pUVar3,(MethodInfo *)0x0);
        pUVar4 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__LineMarker(pUVar4,theme,method_05);
        (__this->fields)._alphaMarker = pUVar4;
        Il2CppCodeGenWriteBarrier(&(__this->fields)._alphaMarker);
      }
      if (*targetAddress != (UnityEngine_UI_RawImage_o *)0x0) {
        pUVar5 = UnityEngine_Component__get_gameObject
                           ((UnityEngine_Component_o *)*targetAddress,(MethodInfo *)0x0);
        if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
          pIVar6 = UnityEngine_GameObject__AddComponent_object_
                             (pUVar5,(MethodInfo_353B6A0 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_GisketchUIColorPickerVisual_DragTarget
                             );
          pIVar7 = (Il2CppClass *)
                   il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_PointerEventData);
          System_Action_object____ctor
                    ((System_Action_object__o *)pIVar7,(Il2CppObject *)__this,
                     (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_OnSquareDrag,
                     (MethodInfo_4A81BE0 *)0x0);
          if (pIVar6 != (Il2CppObject *)0x0) {
            pIVar6[2].klass = pIVar7;
            Il2CppCodeGenWriteBarrier(&pIVar6[2].klass);
            pUVar3 = *targetAddress_00;
            if (pUVar3 != (UnityEngine_UI_RawImage_o *)0x0) {
              pUVar5 = UnityEngine_Component__get_gameObject
                                 ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
              if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                pIVar6 = UnityEngine_GameObject__AddComponent_object_
                                   (pUVar5,(MethodInfo_353B6A0 *)
                                           MethodInfo_UnityEngine_GameObject_AddComponent_GisketchUIColorPickerVisual_DragTarget
                                   );
                pIVar7 = (Il2CppClass *)
                         il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Action_PointerEventData);
                System_Action_object____ctor
                          ((System_Action_object__o *)pIVar7,(Il2CppObject *)__this,
                           (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_OnHueDrag,
                           (MethodInfo_4A81BE0 *)0x0);
                if (pIVar6 != (Il2CppObject *)0x0) {
                  pIVar6[2].klass = pIVar7;
                  Il2CppCodeGenWriteBarrier(&pIVar6[2].klass);
                  pUVar3 = (__this->fields)._alpha;
                  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
                    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
                  }
                  bVar1 = UnityEngine_Object__op_Inequality
                                    ((UnityEngine_Object_o *)pUVar3,(UnityEngine_Object_o *)0x0,
                                     (MethodInfo *)0x0);
                  if (!bVar1) {
                    return;
                  }
                  pUVar3 = (__this->fields)._alpha;
                  if (pUVar3 != (UnityEngine_UI_RawImage_o *)0x0) {
                    pUVar5 = UnityEngine_Component__get_gameObject
                                       ((UnityEngine_Component_o *)pUVar3,(MethodInfo *)0x0);
                    if (pUVar5 != (UnityEngine_GameObject_o *)0x0) {
                      pIVar6 = UnityEngine_GameObject__AddComponent_object_
                                         (pUVar5,(MethodInfo_353B6A0 *)
                                                 MethodInfo_UnityEngine_GameObject_AddComponent_GisketchUIColorPickerVisual_DragTarget
                                         );
                      pIVar7 = (Il2CppClass *)
                               il2cpp_codegen_object_new
                                         ((Il2CppClass *)TypeInfo_System_Action_PointerEventData);
                      System_Action_object____ctor
                                ((System_Action_object__o *)pIVar7,(Il2CppObject *)__this,
                                 (intptr_t)
                                 MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_OnAlphaDrag,
                                 (MethodInfo_4A81BE0 *)0x0);
                      if (pIVar6 != (Il2CppObject *)0x0) {
                        pIVar6[2].klass = pIVar7;
                        Il2CppCodeGenWriteBarrier(&pIVar6[2].klass);
                        return;
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
    }
  }
label_0537901a:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$OnSquareDrag
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnSquareDrag (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5379d50

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnSquareDrag
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  undefined8 uVar1;
  byte bVar2;
  UnityEngine_UI_RawImage_o *__this_00;
  System_Action_GisketchUIColorPickerValue__o *pSVar3;
  undefined8 uVar4;
  code *vtableDispatch;
  uint8_t uVar5;
  uint8_t uVar6;
  uint8_t uVar7;
  UnityEngine_RectTransform_o *rect;
  ulong uVar8;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  float fVar9;
  UnityEngine_Vector2_o UVar10;
  undefined1 auVar11 [12];
  undefined8 extraout_XMM0_Qb;
  float fVar12;
  float H;
  undefined1 auVar13 [16];
  UnityEngine_Color_o UVar14;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  float fStack_44;
  float fStack_38;
  
  __this_00 = (__this->fields)._square;
  if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) {
    ThrowNullReferenceException();
  }
  rect = UnityEngine_UI_Graphic__get_rectTransform((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0);
  UVar10 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized(rect,eventData,method_00);
  uStack_50 = (undefined4)extraout_XMM0_Qb;
  uStack_4c = (undefined4)((ulong)extraout_XMM0_Qb >> 0x20);
  fVar12 = (__this->fields)._value.fields.H;
  bVar2 = (__this->fields)._value.fields.A;
  fVar9 = floorf(fVar12);
  fVar12 = fVar12 - fVar9;
  auVar11 = ZEXT812(0x3f800000);
  if (fVar12 <= auVar11._0_4_) {
    auVar11._4_8_ = auVar11._4_8_;
    auVar11._0_4_ = fVar12;
  }
  H = (float)(-(uint)(0.0 <= fVar12) & auVar11._0_4_);
  auVar13._8_4_ = uStack_50;
  auVar13._0_4_ = UVar10.fields.x;
  auVar13._4_4_ = UVar10.fields.y;
  auVar13._12_4_ = uStack_4c;
  auVar13 = minps(_DAT_01005870,auVar13);
  fVar12 = (float)(-(uint)(0.0 <= UVar10.fields.x) & auVar13._0_4_);
  fVar9 = (float)(-(uint)(0.0 <= UVar10.fields.y) & auVar13._4_4_);
  method_02 = (MethodInfo *)0x1;
  method_01 = (MethodInfo *)0x0;
  UVar14 = UnityEngine_Color__HSVToRGB_68fcb80(H,fVar12,fVar9,true,(MethodInfo *)0x0);
  uVar5 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(UVar14.fields.r,method_02);
  fStack_44 = UVar14.fields.g;
  uVar6 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(fStack_44,method_02);
  fStack_38 = UVar14.fields.b;
  uVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(fStack_38,method_02);
  uVar8 = (ulong)uVar5 |
          (ulong)uVar6 << 8 | (ulong)uVar7 << 0x10 | (ulong)bVar2 << 0x18 | (ulong)(uint)H << 0x20;
  (__this->fields)._value.fields.R = (char)uVar8;
  (__this->fields)._value.fields.G = (char)(uVar8 >> 8);
  (__this->fields)._value.fields.B = (char)(uVar8 >> 0x10);
  (__this->fields)._value.fields.A = (char)(uVar8 >> 0x18);
  (__this->fields)._value.fields.H = (float)(int)(uVar8 >> 0x20);
  (__this->fields)._value.fields.S = fVar12;
  (__this->fields)._value.fields.V = fVar9;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(__this,method_01);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(__this,method_01);
  pSVar3 = (__this->fields).Changed;
  if (pSVar3 == (System_Action_GisketchUIColorPickerValue__o *)0x0) {
    return;
  }
  uVar1._0_4_ = (__this->fields)._value.fields.S;
  uVar1._4_4_ = (__this->fields)._value.fields.V;
  uVar4._0_1_ = (__this->fields)._value.fields.R;
  uVar4._1_1_ = (__this->fields)._value.fields.G;
  uVar4._2_1_ = (__this->fields)._value.fields.B;
  uVar4._3_1_ = (__this->fields)._value.fields.A;
  uVar4._4_4_ = (__this->fields)._value.fields.H;
  vtableDispatch = (code *)(pSVar3->fields).invoke_impl;
  (*vtableDispatch)
            (uVar1,(pSVar3->fields).method_code,uVar4,(pSVar3->fields).method,vtableDispatch);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$OnHueDrag
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnHueDrag (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x537a010

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnHueDrag
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar3;
  undefined8 uVar2;
  byte bVar4;
  UnityEngine_UI_RawImage_o *__this_00;
  System_Action_GisketchUIColorPickerValue__o *pSVar5;
  undefined8 uVar6;
  code *vtableDispatch;
  uint8_t uVar7;
  uint8_t uVar8;
  uint8_t uVar9;
  UnityEngine_RectTransform_o *rect;
  ulong uVar10;
  MethodInfo *method_00;
  MethodInfo *method_01;
  MethodInfo *method_02;
  float fVar11;
  UnityEngine_Vector2_o UVar12;
  undefined1 auVar13 [12];
  float V;
  float H;
  undefined1 auVar14 [16];
  UnityEngine_Color_o UVar15;
  float fStack_54;
  float fStack_48;
  
  __this_00 = (__this->fields)._hue;
  if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) {
    ThrowNullReferenceException();
  }
  rect = UnityEngine_UI_Graphic__get_rectTransform((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0);
  UVar12 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized(rect,eventData,method_00);
  bVar4 = (__this->fields)._value.fields.A;
  fVar11 = floorf(UVar12.fields.x);
  fVar11 = UVar12.fields.x - fVar11;
  auVar13 = ZEXT812(0x3f800000);
  if (fVar11 <= auVar13._0_4_) {
    auVar13._4_8_ = auVar13._4_8_;
    auVar13._0_4_ = fVar11;
  }
  H = (float)(-(uint)(0.0 <= fVar11) & auVar13._0_4_);
  uVar1 = (__this->fields)._value.fields.S;
  uVar3 = (__this->fields)._value.fields.V;
  auVar14._4_4_ = uVar3;
  auVar14._0_4_ = uVar1;
  auVar14._8_8_ = 0;
  auVar14 = minps(_DAT_01005870,auVar14);
  fVar11 = (float)(-(uint)(0.0 <= (float)uVar1) & auVar14._0_4_);
  V = (float)(-(uint)(0.0 <= (float)uVar3) & auVar14._4_4_);
  method_02 = (MethodInfo *)0x1;
  method_01 = (MethodInfo *)0x0;
  UVar15 = UnityEngine_Color__HSVToRGB_68fcb80(H,fVar11,V,true,(MethodInfo *)0x0);
  uVar7 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(UVar15.fields.r,method_02);
  fStack_54 = UVar15.fields.g;
  uVar8 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(fStack_54,method_02);
  fStack_48 = UVar15.fields.b;
  uVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(fStack_48,method_02);
  uVar10 = (ulong)uVar7 |
           (ulong)uVar8 << 8 | (ulong)uVar9 << 0x10 | (ulong)bVar4 << 0x18 | (ulong)(uint)H << 0x20;
  (__this->fields)._value.fields.R = (char)uVar10;
  (__this->fields)._value.fields.G = (char)(uVar10 >> 8);
  (__this->fields)._value.fields.B = (char)(uVar10 >> 0x10);
  (__this->fields)._value.fields.A = (char)(uVar10 >> 0x18);
  (__this->fields)._value.fields.H = (float)(int)(uVar10 >> 0x20);
  (__this->fields)._value.fields.S = fVar11;
  (__this->fields)._value.fields.V = V;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(__this,method_01);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(__this,method_01);
  pSVar5 = (__this->fields).Changed;
  if (pSVar5 == (System_Action_GisketchUIColorPickerValue__o *)0x0) {
    return;
  }
  uVar2._0_4_ = (__this->fields)._value.fields.S;
  uVar2._4_4_ = (__this->fields)._value.fields.V;
  uVar6._0_1_ = (__this->fields)._value.fields.R;
  uVar6._1_1_ = (__this->fields)._value.fields.G;
  uVar6._2_1_ = (__this->fields)._value.fields.B;
  uVar6._3_1_ = (__this->fields)._value.fields.A;
  uVar6._4_4_ = (__this->fields)._value.fields.H;
  vtableDispatch = (code *)(pSVar5->fields).invoke_impl;
  (*vtableDispatch)
            (uVar2,(pSVar5->fields).method_code,uVar6,(pSVar5->fields).method,vtableDispatch);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$OnAlphaDrag
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnAlphaDrag (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x537a170

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnAlphaDrag
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,
               UnityEngine_EventSystems_PointerEventData_o *eventData,MethodInfo *method)

{
  undefined4 uVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  byte bVar4;
  byte bVar5;
  byte bVar6;
  UnityEngine_UI_RawImage_o *__this_00;
  System_Action_GisketchUIColorPickerValue__o *pSVar7;
  undefined8 uVar8;
  code *vtableDispatch;
  UnityEngine_Vector2_o UVar9;
  double dVar10;
  UnityEngine_RectTransform_o *rect;
  MethodInfo *method_00;
  ulong uVar11;
  MethodInfo *method_01;
  float fVar12;
  float fVar13;
  double x;
  undefined1 auVar14 [16];
  Il2CppMethodPointer local_30;
  
  __this_00 = (__this->fields)._alpha;
  if (__this_00 == (UnityEngine_UI_RawImage_o *)0x0) {
    ThrowNullReferenceException();
  }
  rect = UnityEngine_UI_Graphic__get_rectTransform((UnityEngine_UI_Graphic_o *)__this_00,(MethodInfo *)0x0);
  UVar9 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized(rect,eventData,method_00);
  if (Il2CppMethodInitialized_07541320 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_07541320 = '\x01';
  }
  fVar12 = UVar9.fields.x * 255.0;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  x = (double)fVar12;
  method_01 = (MethodInfo *)&local_30;
  dVar10 = modf(x,(double *)method_01,(MethodInfo *)eventData);
  if (0.0 <= fVar12) {
    if ((dVar10 != 0.5) || (NAN(dVar10))) {
      local_30 = (Il2CppMethodPointer)floor(x + 0.5,method_01);
    }
    else if (((long)(double)local_30 & 1U) != 0) {
      local_30 = (Il2CppMethodPointer)((double)local_30 + 1.0);
    }
  }
  else if ((dVar10 != -0.5) || (NAN(dVar10))) {
    local_30 = (Il2CppMethodPointer)ceil(x + -0.5,method_01);
  }
  else if (((long)(double)local_30 & 1U) != 0) {
    local_30 = (Il2CppMethodPointer)((double)local_30 + -1.0);
  }
  bVar4 = (__this->fields)._value.fields.R;
  bVar5 = (__this->fields)._value.fields.G;
  bVar6 = (__this->fields)._value.fields.B;
  fVar12 = (__this->fields)._value.fields.H;
  fVar13 = floorf(fVar12);
  fVar12 = fVar12 - fVar13;
  fVar13 = 1.0;
  if (fVar12 <= 1.0) {
    fVar13 = fVar12;
  }
  uVar1 = (__this->fields)._value.fields.S;
  uVar3 = (__this->fields)._value.fields.V;
  auVar14._4_4_ = uVar3;
  auVar14._0_4_ = uVar1;
  auVar14._8_8_ = 0;
  auVar14 = minps(_DAT_01005870,auVar14);
  uVar11 = (ulong)bVar5 << 8 |
           (ulong)bVar6 << 0x10 |
           CONCAT44(-(uint)(0.0 <= fVar12) & (uint)fVar13,(int)(double)local_30 << 0x18) | (ulong)bVar4;
  (__this->fields)._value.fields.R = (char)uVar11;
  (__this->fields)._value.fields.G = (char)(uVar11 >> 8);
  (__this->fields)._value.fields.B = (char)(uVar11 >> 0x10);
  (__this->fields)._value.fields.A = (char)(uVar11 >> 0x18);
  (__this->fields)._value.fields.H = (float)(int)(uVar11 >> 0x20);
  (__this->fields)._value.fields.S = (float)(-(uint)(0.0 <= (float)uVar1) & auVar14._0_4_);
  (__this->fields)._value.fields.V = (float)(-(uint)(0.0 <= (float)uVar3) & auVar14._4_4_);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures(__this,(MethodInfo *)eventData);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(__this,(MethodInfo *)eventData);
  pSVar7 = (__this->fields).Changed;
  if (pSVar7 == (System_Action_GisketchUIColorPickerValue__o *)0x0) {
    return;
  }
  uVar2 = (__this->fields)._value.fields.S;
  uVar8._0_1_ = (__this->fields)._value.fields.R;
  uVar8._1_1_ = (__this->fields)._value.fields.G;
  uVar8._2_1_ = (__this->fields)._value.fields.B;
  uVar8._3_1_ = (__this->fields)._value.fields.A;
  uVar8._4_4_ = (__this->fields)._value.fields.H;
  vtableDispatch = (code *)(pSVar7->fields).invoke_impl;
  (*vtableDispatch)
            (uVar2,(pSVar7->fields).method_code,uVar8,(pSVar7->fields).method,vtableDispatch);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$OnRectTransformDimensionsChange
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnRectTransformDimensionsChange (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, const MethodInfo* method);
// 0x537a370

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnRectTransformDimensionsChange
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,MethodInfo *method)

{
  UnityEngine_RectTransform_o *x;
  bool bVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542a99 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542a99 = '\x01';
  }
  x = (__this->fields)._squareMarker;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers(__this,method_00);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$RefreshTextures
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, const MethodInfo* method);
// 0x5379020

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshTextures
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,MethodInfo *method)

{
  UnityEngine_UI_RawImage_o *pUVar1;
  Il2CppObject *object;
  bool bVar2;
  System_Func_int__int__Color32__o *pSVar3;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c_StaticFields *pGVar4;
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c__DisplayClass30_0_o *__this_00;
  MethodInfo *in_R9;
  
  if (Il2CppMethodInitialized_07542a9a == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Func_int_int_Color32);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_RefreshTextures_b__30_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_c_RefreshTextures_b__30_1);
    il2cpp_codegen_initialize_runtime_metadata
              (&
               MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_c__DisplayClass30_0_RefreshTextures_b__2
              );
    il2cpp_codegen_initialize_runtime_metadata
              (&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_c__DisplayClass30_0);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_c)
    ;
    Il2CppMethodInitialized_07542a9a = '\x01';
  }
  pUVar1 = (__this->fields)._square;
  pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_int_Color32);
  System_Func_int__int__Color32____ctor
            (pSVar3,(Il2CppObject *)__this,
             (intptr_t)MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_RefreshTextures_b__30_0,
             (MethodInfo_4F1F250 *)0x0);
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__SetTexture
            (&(__this->fields)._squareTexture,pUVar1,0x40,0x40,pSVar3,in_R9);
  pUVar1 = (__this->fields)._hue;
  if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_c->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init
              ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_c);
  }
  pGVar4 = TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_c->static_fields;
  pSVar3 = pGVar4->__9__30_1;
  if (pSVar3 == (System_Func_int__int__Color32__o *)0x0) {
    if ((TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_c->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init
                ((Il2CppClass *)TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_c);
      pGVar4 = TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_c->static_fields;
    }
    object = (Il2CppObject *)pGVar4->__9;
    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_int_Color32);
    System_Func_int__int__Color32____ctor
              (pSVar3,object,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_c_RefreshTextures_b__30_1,
               (MethodInfo_4F1F250 *)0x0);
    pGVar4 = TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_c->static_fields;
    pGVar4->__9__30_1 = pSVar3;
    Il2CppCodeGenWriteBarrier(&pGVar4->__9__30_1);
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__SetTexture
            (&(__this->fields)._hueTexture,pUVar1,0x80,1,pSVar3,in_R9);
  pUVar1 = (__this->fields)._alpha;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Inequality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    __this_00 = il2cpp_codegen_object_new
                          ((Il2CppClass *)
                           TypeInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_c__DisplayClass30_0);
    System_Object___ctor((Il2CppObject *)__this_00,(MethodInfo *)0x0);
    if (__this_00 == (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___c__DisplayClass30_0_o *)0x0) {
      ThrowNullReferenceException();
    }
    (__this_00->fields).color.fields._overlap_0._at_rgba.rgba = *(int32_t *)&(__this->fields)._value.fields;
    pUVar1 = (__this->fields)._alpha;
    pSVar3 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_System_Func_int_int_Color32);
    System_Func_int__int__Color32____ctor
              (pSVar3,(Il2CppObject *)__this_00,
               (intptr_t)
               MethodInfo_Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_c__DisplayClass30_0_RefreshTextures_b__2
               ,(MethodInfo_4F1F250 *)0x0);
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__SetTexture
              (&(__this->fields)._alphaTexture,pUVar1,0x180,0x16,pSVar3,in_R9);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$RefreshMarkers
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, const MethodInfo* method);
// 0x5379250

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RefreshMarkers
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,MethodInfo *method)

{
  byte bVar1;
  UnityEngine_RectTransform_o *pUVar2;
  UnityEngine_Vector2_o value;
  UnityEngine_Vector2_o value_00;
  UnityEngine_Vector2_o value_01;
  bool bVar3;
  UnityEngine_RectTransform_o *__this_00;
  float fVar4;
  float fVar5;
  undefined1 auVar6 [16];
  UnityEngine_Rect_o UVar7;
  undefined1 local_38 [16];
  
  if (Il2CppMethodInitialized_07542a9b == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542a9b = '\x01';
  }
  pUVar2 = (__this->fields)._squareMarker;
  local_38._0_4_ = (__this->fields)._value.fields.S;
  local_38._4_4_ = (__this->fields)._value.fields.V;
  local_38._8_8_ = 0;
  if (Il2CppMethodInitialized_07542aa0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07542aa0 = '\x01';
  }
  if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
    __this_00 = (UnityEngine_RectTransform_o *)
                UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pUVar2,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
      if (__this_00->klass != TypeInfo_UnityEngine_RectTransform) goto label_053794ee;
      UVar7 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      auVar6 = minps(_DAT_01005870,local_38);
      value.fields.y = (float)(-(uint)(0.0 <= (float)local_38._4_4_) & auVar6._4_4_) * UVar7.fields.m_Height;
      value.fields.x = (float)(-(uint)(0.0 <= (float)local_38._0_4_) & auVar6._0_4_) * UVar7.fields.m_Width;
      UnityEngine_RectTransform__set_anchoredPosition(pUVar2,value,(MethodInfo *)0x0);
      pUVar2 = (__this->fields)._hueMarker;
      fVar5 = (__this->fields)._value.fields.H;
      if (Il2CppMethodInitialized_07542aa0 == '\0') {
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
        il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
        Il2CppMethodInitialized_07542aa0 = '\x01';
      }
      if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
        __this_00 = (UnityEngine_RectTransform_o *)
                    UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pUVar2,(MethodInfo *)0x0);
        if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
          if (__this_00->klass != TypeInfo_UnityEngine_RectTransform) {
label_053794ee:
            il2cpp_codegen_raise_invalid_cast_exception(__this_00);
          }
          UVar7 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
          if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
          }
          fVar4 = 1.0;
          if (fVar5 <= 1.0) {
            fVar4 = fVar5;
          }
          value_00.fields.y = UVar7.fields.m_Height * 0.5;
          value_00.fields.x = (float)(-(uint)(0.0 <= fVar5) & (uint)fVar4) * UVar7.fields.m_Width;
          UnityEngine_RectTransform__set_anchoredPosition(pUVar2,value_00,(MethodInfo *)0x0);
          pUVar2 = (__this->fields)._alphaMarker;
          if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
            il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
          }
          bVar3 = UnityEngine_Object__op_Inequality
                            ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
          if (!bVar3) {
            return;
          }
          pUVar2 = (__this->fields)._alphaMarker;
          bVar1 = (__this->fields)._value.fields.A;
          if (Il2CppMethodInitialized_07542aa0 == '\0') {
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
            il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
            Il2CppMethodInitialized_07542aa0 = '\x01';
          }
          if (pUVar2 != (UnityEngine_RectTransform_o *)0x0) {
            __this_00 = (UnityEngine_RectTransform_o *)
                        UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)pUVar2,(MethodInfo *)0x0)
            ;
            if (__this_00 != (UnityEngine_RectTransform_o *)0x0) {
              if (__this_00->klass == TypeInfo_UnityEngine_RectTransform) {
                fVar5 = (float)bVar1 / 255.0;
                UVar7 = UnityEngine_RectTransform__get_rect(__this_00,(MethodInfo *)0x0);
                if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
                  il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
                }
                fVar4 = 1.0;
                if (fVar5 <= 1.0) {
                  fVar4 = fVar5;
                }
                value_01.fields.y = UVar7.fields.m_Height * 0.5;
                value_01.fields.x = fVar4 * UVar7.fields.m_Width;
                UnityEngine_RectTransform__set_anchoredPosition(pUVar2,value_01,(MethodInfo *)0x0);
                return;
              }
              goto label_053794ee;
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$RawImage
// il2cpp: UnityEngine_UI_RawImage_o* Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RawImage (System_String_o* name, UnityEngine_RectTransform_o* parent, float bottom, float height, UnityEngine_Color_o fallback, const MethodInfo* method);
// 0x5379500

UnityEngine_UI_RawImage_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__RawImage
          (System_String_o *name,UnityEngine_RectTransform_o *parent,float bottom,float height,
          UnityEngine_Color_o fallback,MethodInfo *method)

{
  undefined1 auVar1 [16];
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar2;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_UI_RawImage_o *pUVar3;
  undefined4 in_XMM0_Db;
  long lVar4;
  undefined4 in_XMM0_Dc;
  undefined4 in_XMM0_Dd;
  undefined1 auVar5 [16];
  
  if (Il2CppMethodInitialized_07542a9c == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_RawImage);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    Il2CppMethodInitialized_07542a9c = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (obj != (System_Type_o *)0x0) {
      pIVar2 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
      if (pIVar2 == (Il2CppObject *)0x0) {
        pIVar2 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar2,(MethodInfo *)0x0);
      }
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60(__this,name,components,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_692d510
                  (__this_00,(UnityEngine_Transform_o *)parent,false,(MethodInfo *)0x0);
        __this_01 = UnityEngine_GameObject__GetComponent_object_
                              (__this,(MethodInfo_353B730 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
          UnityEngine_RectTransform__set_anchorMin(__this_01,(UnityEngine_Vector2_o)0x0,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_anchorMax
                    (__this_01,
                     (UnityEngine_Vector2_o)(CONCAT44(-(uint)(22.0 < height),0x3f800000) & 0x3f800000ffffffff)
                     ,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_offsetMin
                    (__this_01,(UnityEngine_Vector2_o)(CONCAT44(in_XMM0_Db,bottom) << 0x20),(MethodInfo *)0x0)
          ;
          lVar4 = 0;
          if (height <= 22.0) {
            auVar1._4_4_ = in_XMM0_Db;
            auVar1._0_4_ = bottom;
            auVar1._8_4_ = in_XMM0_Dc;
            auVar1._12_4_ = in_XMM0_Dd;
            auVar5._4_12_ = auVar1._4_12_;
            auVar5._0_4_ = bottom + height;
            lVar4 = auVar5._0_8_;
          }
          UnityEngine_RectTransform__set_offsetMax
                    (__this_01,(UnityEngine_Vector2_o)(lVar4 << 0x20),(MethodInfo *)0x0);
          pUVar3 = UnityEngine_GameObject__AddComponent_object_
                             (__this,(MethodInfo_353B6A0 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_RawImage);
          if (pUVar3 != (UnityEngine_UI_RawImage_o *)0x0) {
            (*(pUVar3->klass->vtable)._23_set_color.methodPtr)
                      (pUVar3,fallback,(pUVar3->klass->vtable)._23_set_color.method);
            (*(pUVar3->klass->vtable)._25_set_raycastTarget.methodPtr)
                      (pUVar3,true,(pUVar3->klass->vtable)._25_set_raycastTarget.method);
            return pUVar3;
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$CircleMarker
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__CircleMarker (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, UnityEngine_RectTransform_o* parent, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x5379770

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__CircleMarker
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,UnityEngine_RectTransform_o *parent,
          Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,MethodInfo *method)

{
  UnityEngine_Vector2_Fields value;
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar1;
  UnityEngine_GameObject_o *__this_00;
  UnityEngine_Transform_o *__this_01;
  UnityEngine_RectTransform_o *__this_02;
  UnityEngine_UI_Image_o *__this_03;
  UnityEngine_Sprite_o *value_00;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this_04;
  MethodInfo *method_00;
  UnityEngine_Color_o UVar2;
  
  if (Il2CppMethodInitialized_07542a9d == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDropShadow);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"surface");
    il2cpp_codegen_initialize_runtime_metadata(&"shadow");
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Color Marker");
    Il2CppMethodInitialized_07542a9d = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (obj != (System_Type_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    __this_00 = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60(__this_00,"AoTTG Color Marker",components,(MethodInfo *)0x0);
    if (__this_00 != (UnityEngine_GameObject_o *)0x0) {
      __this_01 = UnityEngine_GameObject__get_transform(__this_00,(MethodInfo *)0x0);
      if (__this_01 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_692d510
                  (__this_01,(UnityEngine_Transform_o *)parent,false,(MethodInfo *)0x0);
        __this_02 = UnityEngine_GameObject__GetComponent_object_
                              (__this_00,
                               (MethodInfo_353B730 *)
                               MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        if (Il2CppMethodInitialized_0753ecc8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_0753ecc8 = '\x01';
        }
        if (__this_02 != (UnityEngine_RectTransform_o *)0x0) {
          value = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
          UnityEngine_RectTransform__set_anchorMax(__this_02,(UnityEngine_Vector2_o)value,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_anchorMin(__this_02,(UnityEngine_Vector2_o)value,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_pivot
                    (__this_02,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_sizeDelta
                    (__this_02,(UnityEngine_Vector2_o)0x4190000041900000,(MethodInfo *)0x0);
          method_00 = MethodInfo_UnityEngine_GameObject_AddComponent_Image;
          __this_03 = UnityEngine_GameObject__AddComponent_object_
                                (__this_00,
                                 (MethodInfo_353B6A0 *)MethodInfo_UnityEngine_GameObject_AddComponent_Image);
          value_00 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__CircleSprite(__this,method_00);
          if (__this_03 != (UnityEngine_UI_Image_o *)0x0) {
            UnityEngine_UI_Image__set_sprite(__this_03,value_00,(MethodInfo *)0x0);
            if (theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
              UVar2.fields.b = 1.0;
              UVar2.fields.a = 1.0;
              UVar2.fields.r = 1.0;
              UVar2.fields.g = 1.0;
              UVar2 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                (theme,"surface",UVar2,(MethodInfo *)0x0);
              (*(__this_03->klass->vtable)._23_set_color.methodPtr)
                        (__this_03,UVar2,(__this_03->klass->vtable)._23_set_color.method);
              (*(__this_03->klass->vtable)._25_set_raycastTarget.methodPtr)
                        (__this_03,false,(__this_03->klass->vtable)._25_set_raycastTarget.method);
              __this_04 = UnityEngine_GameObject__AddComponent_object_
                                    (__this_00,
                                     (MethodInfo_353B6A0 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDropShadow);
              UVar2 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                (theme,"shadow",
                                 (UnityEngine_Color_o)(ZEXT816(0x3ea3d70a00000000) << 0x40),(MethodInfo *)0x0)
              ;
              if (__this_04 != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
                Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup_522eda0
                          (__this_04,UVar2,(UnityEngine_Vector2_o)0xc040000040400000,4,0.35,false,
                           (MethodInfo *)0x0);
                return __this_02;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$LineMarker
// il2cpp: UnityEngine_RectTransform_o* Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__LineMarker (UnityEngine_RectTransform_o* parent, Gisketch_Aottg2UI_Styling_GisketchTheme_o* theme, const MethodInfo* method);
// 0x5379a80

UnityEngine_RectTransform_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__LineMarker
          (UnityEngine_RectTransform_o *parent,Gisketch_Aottg2UI_Styling_GisketchTheme_o *theme,
          MethodInfo *method)

{
  UnityEngine_Vector2_Fields value;
  Il2CppType *handle;
  System_Type_array *components;
  System_Type_o *obj;
  Il2CppObject *pIVar1;
  UnityEngine_GameObject_o *__this;
  UnityEngine_Transform_o *__this_00;
  UnityEngine_RectTransform_o *__this_01;
  UnityEngine_UI_Image_o *pUVar2;
  Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *__this_02;
  UnityEngine_Color_o UVar3;
  
  if (Il2CppMethodInitialized_07542a9e == '\0') {
    il2cpp_codegen_initialize_runtime_metadata
              (&MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDropShadow);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_AddComponent_Image);
    il2cpp_codegen_initialize_runtime_metadata(&MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_GameObject);
    il2cpp_codegen_initialize_runtime_metadata(&TypeRef_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Type_array);
    il2cpp_codegen_initialize_runtime_metadata(&"AoTTG Color Slider Marker");
    il2cpp_codegen_initialize_runtime_metadata(&"shadow");
    Il2CppMethodInitialized_07542a9e = '\x01';
  }
  components = (System_Type_array *)SZArrayNew(TypeInfo_System_Type_array,1);
  handle = TypeRef_UnityEngine_RectTransform;
  if ((g_data_075567a8->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init(g_data_075567a8);
  }
  obj = System_Type__GetTypeFromHandle((System_RuntimeTypeHandle_o)handle,(MethodInfo *)0x0);
  if (components != (System_Type_array *)0x0) {
    if (obj != (System_Type_o *)0x0) {
      pIVar1 = il2cpp_vm_Object_IsInst((Il2CppObject *)obj,(((components->obj).klass)->_1).element_class);
      if (pIVar1 == (Il2CppObject *)0x0) {
        pIVar1 = il2cpp_codegen_get_array_type_mismatch_exception();
        il2cpp_codegen_raise_exception(pIVar1,(MethodInfo *)0x0);
      }
    }
    if ((int)components->max_length == 0) {
      ThrowIndexOutOfRangeException();
    }
    components->m_Items[0] = obj;
    Il2CppCodeGenWriteBarrier(components->m_Items);
    __this = il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_GameObject);
    UnityEngine_GameObject___ctor_691aa60(__this,"AoTTG Color Slider Marker",components,(MethodInfo *)0x0);
    if (__this != (UnityEngine_GameObject_o *)0x0) {
      __this_00 = UnityEngine_GameObject__get_transform(__this,(MethodInfo *)0x0);
      if (__this_00 != (UnityEngine_Transform_o *)0x0) {
        UnityEngine_Transform__SetParent_692d510
                  (__this_00,(UnityEngine_Transform_o *)parent,false,(MethodInfo *)0x0);
        __this_01 = UnityEngine_GameObject__GetComponent_object_
                              (__this,(MethodInfo_353B730 *)
                                      MethodInfo_UnityEngine_GameObject_GetComponent_RectTransform);
        if (Il2CppMethodInitialized_0753ecc8 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Vector2);
          Il2CppMethodInitialized_0753ecc8 = '\x01';
        }
        if (__this_01 != (UnityEngine_RectTransform_o *)0x0) {
          value = (TypeInfo_UnityEngine_Vector2->static_fields->zeroVector).fields;
          UnityEngine_RectTransform__set_anchorMax(__this_01,(UnityEngine_Vector2_o)value,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_anchorMin(__this_01,(UnityEngine_Vector2_o)value,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_pivot
                    (__this_01,(UnityEngine_Vector2_o)0x3f0000003f000000,(MethodInfo *)0x0);
          UnityEngine_RectTransform__set_sizeDelta
                    (__this_01,(UnityEngine_Vector2_o)0x4200000040800000,(MethodInfo *)0x0);
          pUVar2 = UnityEngine_GameObject__AddComponent_object_
                             (__this,(MethodInfo_353B6A0 *)
                                     MethodInfo_UnityEngine_GameObject_AddComponent_Image);
          if (pUVar2 != (UnityEngine_UI_Image_o *)0x0) {
            UVar3.fields.b = 1.0;
            UVar3.fields.a = 1.0;
            UVar3.fields.r = 1.0;
            UVar3.fields.g = 1.0;
            (*(pUVar2->klass->vtable)._23_set_color.methodPtr)
                      (pUVar2,UVar3,(pUVar2->klass->vtable)._23_set_color.method);
            (*(pUVar2->klass->vtable)._25_set_raycastTarget.methodPtr)
                      (pUVar2,false,(pUVar2->klass->vtable)._25_set_raycastTarget.method);
            __this_02 = UnityEngine_GameObject__AddComponent_object_
                                  (__this,(MethodInfo_353B6A0 *)
                                          MethodInfo_UnityEngine_GameObject_AddComponent_GisketchDropShadow);
            if (theme != (Gisketch_Aottg2UI_Styling_GisketchTheme_o *)0x0) {
              UVar3 = Gisketch_Aottg2UI_Styling_GisketchTheme__GetColor
                                (theme,"shadow",
                                 (UnityEngine_Color_o)(ZEXT816(0x3ea3d70a00000000) << 0x40),(MethodInfo *)0x0)
              ;
              if (__this_02 != (Gisketch_Aottg2UI_Styling_GisketchDropShadow_o *)0x0) {
                Gisketch_Aottg2UI_Styling_GisketchDropShadow__Setup_522eda0
                          (__this_02,UVar3,(UnityEngine_Vector2_o)0xc040000040400000,4,0.35,false,
                           (MethodInfo *)0x0);
                return __this_01;
              }
            }
          }
        }
      }
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$Normalized
// il2cpp: UnityEngine_Vector2_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized (UnityEngine_RectTransform_o* rect, UnityEngine_EventSystems_PointerEventData_o* eventData, const MethodInfo* method);
// 0x5379eb0

UnityEngine_Vector2_o
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Normalized
          (UnityEngine_RectTransform_o *rect,UnityEngine_EventSystems_PointerEventData_o *eventData,
          MethodInfo *method)

{
  UnityEngine_Camera_o *cam;
  float fVar1;
  undefined1 auVar2 [16];
  undefined4 in_XMM1_Dc;
  undefined4 in_XMM1_Dd;
  uint uVar3;
  float fVar4;
  uint uVar5;
  float fVar6;
  UnityEngine_Rect_o UVar7;
  UnityEngine_Vector2_Fields local_40;
  undefined1 local_38 [16];
  undefined8 local_28;
  
  if (Il2CppMethodInitialized_07542a9f == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransformUtility);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07542a9f = '\x01';
  }
  local_40.x = 0.0;
  local_40.y = 0.0;
  if (eventData != (UnityEngine_EventSystems_PointerEventData_o *)0x0) {
    local_38._8_8_ = 0;
    local_38._0_8_ = (eventData->fields)._position_k__BackingField.fields;
    cam = UnityEngine_EventSystems_PointerEventData__get_pressEventCamera(eventData,(MethodInfo *)0x0);
    if ((TypeInfo_UnityEngine_RectTransformUtility->_2).cctor_finished_or_no_cctor == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_RectTransformUtility);
    }
    UnityEngine_RectTransformUtility__ScreenPointToLocalPointInRectangle
              (rect,(UnityEngine_Vector2_o)local_38._0_8_,cam,(UnityEngine_Vector2_o *)&local_40,
               (MethodInfo *)0x0);
    if (rect != (UnityEngine_RectTransform_o *)0x0) {
      UVar7 = UnityEngine_RectTransform__get_rect(rect,(MethodInfo *)0x0);
      local_38._0_4_ = UVar7.fields.m_Width;
      local_38._4_4_ = UVar7.fields.m_Height;
      local_28 = UVar7.fields._0_8_;
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        local_38._8_4_ = in_XMM1_Dc;
        local_38._0_8_ = UVar7.fields._8_8_;
        local_38._12_4_ = in_XMM1_Dd;
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      fVar1 = (float)local_28;
      local_38._0_4_ = (float)local_38._0_4_ + fVar1;
      fVar6 = (float)((ulong)local_28 >> 0x20);
      local_38._4_4_ = (float)local_38._4_4_ + fVar6;
      uVar5 = 0;
      uVar3 = 0;
      if ((fVar1 != (float)local_38._0_4_) || (NAN(fVar1) || NAN((float)local_38._0_4_))) {
        fVar4 = (local_40.x - fVar1) / ((float)local_38._0_4_ - fVar1);
        fVar1 = 1.0;
        if (fVar4 <= 1.0) {
          fVar1 = fVar4;
        }
        uVar3 = -(uint)(0.0 <= fVar4) & (uint)fVar1;
      }
      if ((fVar6 != (float)local_38._4_4_) || (NAN(fVar6) || NAN((float)local_38._4_4_))) {
        fVar6 = (local_40.y - fVar6) / ((float)local_38._4_4_ - fVar6);
        fVar1 = 1.0;
        if (fVar6 <= 1.0) {
          fVar1 = fVar6;
        }
        uVar5 = -(uint)(0.0 <= fVar6) & (uint)fVar1;
      }
      auVar2._4_4_ = uVar5;
      auVar2._0_4_ = uVar3;
      auVar2._8_8_ = 0;
      auVar2 = maxps(ZEXT816(0),auVar2);
      return (UnityEngine_Vector2_o)auVar2._0_8_;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$Place
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Place (UnityEngine_RectTransform_o* marker, float x, float y, const MethodInfo* method);
// 0x537a5c0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Place
               (UnityEngine_RectTransform_o *marker,float x,float y,MethodInfo *method)

{
  UnityEngine_Vector2_o value;
  UnityEngine_RectTransform_o *__this;
  undefined4 in_XMM0_Db;
  undefined4 in_XMM1_Db;
  undefined1 auVar1 [16];
  UnityEngine_Rect_o UVar2;
  
  if (Il2CppMethodInitialized_07542aa0 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_RectTransform);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Rect);
    Il2CppMethodInitialized_07542aa0 = '\x01';
  }
  if (marker != (UnityEngine_RectTransform_o *)0x0) {
    __this = (UnityEngine_RectTransform_o *)
             UnityEngine_Transform__get_parent((UnityEngine_Transform_o *)marker,(MethodInfo *)0x0);
    if (__this != (UnityEngine_RectTransform_o *)0x0) {
      if (__this->klass != TypeInfo_UnityEngine_RectTransform) {
        il2cpp_codegen_raise_invalid_cast_exception(__this);
      }
      UVar2 = UnityEngine_RectTransform__get_rect(__this,(MethodInfo *)0x0);
      if ((TypeInfo_UnityEngine_Rect->_2).cctor_finished_or_no_cctor == 0) {
        il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Rect);
      }
      auVar1._4_4_ = y;
      auVar1._0_4_ = x;
      auVar1._8_4_ = in_XMM0_Db;
      auVar1._12_4_ = in_XMM1_Db;
      auVar1 = minps(_DAT_01005870,auVar1);
      value.fields.y = (float)(-(uint)(0.0 <= y) & auVar1._4_4_) * UVar2.fields.m_Height;
      value.fields.x = (float)(-(uint)(0.0 <= x) & auVar1._0_4_) * UVar2.fields.m_Width;
      UnityEngine_RectTransform__set_anchoredPosition(marker,value,(MethodInfo *)0x0);
      return;
    }
  }
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$SetTexture
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__SetTexture (UnityEngine_Texture2D_o** texture, UnityEngine_UI_RawImage_o* target, int32_t width, int32_t height, System_Func_int__int__Color32__o* pixel, const MethodInfo* method);
// 0x537a3e0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__SetTexture
               (UnityEngine_Texture2D_o **texture,UnityEngine_UI_RawImage_o *target,int32_t width,
               int32_t height,System_Func_int__int__Color32__o *pixel,MethodInfo *method)

{
  UnityEngine_Texture2D_o *pUVar1;
  bool bVar2;
  uint uVar3;
  UnityEngine_Texture_o *__this;
  int32_t x;
  int y;
  undefined1 auVar4 [16];
  UnityEngine_Color_o color;
  
  if (Il2CppMethodInitialized_07542aa1 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    Il2CppMethodInitialized_07542aa1 = '\x01';
  }
  pUVar1 = *texture;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  bVar2 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar1,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar2) {
    __this = (UnityEngine_Texture_o *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D)
    ;
    UnityEngine_Texture2D___ctor_68efe30
              ((UnityEngine_Texture2D_o *)__this,width,height,4,false,(MethodInfo *)0x0);
    if (__this == (UnityEngine_Texture_o *)0x0) goto label_0537a5a4;
    UnityEngine_Texture__set_wrapMode(__this,1,(MethodInfo *)0x0);
    *texture = (UnityEngine_Texture2D_o *)__this;
    Il2CppCodeGenWriteBarrier(texture);
    if (target == (UnityEngine_UI_RawImage_o *)0x0) goto label_0537a5a4;
    UnityEngine_UI_RawImage__set_texture(target,(UnityEngine_Texture_o *)*texture,(MethodInfo *)0x0);
  }
  if ((0 < height) && (0 < width)) {
    if (pixel == (System_Func_int__int__Color32__o *)0x0) goto label_0537a5a4;
    y = 0;
    do {
      x = 0;
      do {
        pUVar1 = *texture;
        uVar3 = (*(code *)(pixel->fields).invoke_impl)((pixel->fields).method_code,x,y,(pixel->fields).method)
        ;
        if (pUVar1 == (UnityEngine_Texture2D_o *)0x0) goto label_0537a5a4;
        color.fields.b = (float)(uVar3 >> 0x10 & 0xff) / 255.0;
        color.fields.a = (float)(uVar3 >> 0x18) / 255.0;
        auVar4._0_4_ = (float)(uVar3 & 0xff);
        auVar4._4_4_ = (float)(uVar3 >> 8 & 0xff);
        auVar4._8_8_ = 0;
        auVar4 = divps(auVar4,_DAT_01009880);
        color.fields._0_8_ = auVar4._0_8_;
        UnityEngine_Texture2D__SetPixel(pUVar1,x,y,color,(MethodInfo *)0x0);
        x = x + 1;
      } while (width != x);
      y = y + 1;
    } while (y != height);
  }
  if (*texture != (UnityEngine_Texture2D_o *)0x0) {
    UnityEngine_Texture2D__Apply_68f05c0(*texture,false,(MethodInfo *)0x0);
    return;
  }
label_0537a5a4:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$OnDestroy
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnDestroy (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, const MethodInfo* method);
// 0x537aa20

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__OnDestroy
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,MethodInfo *method)

{
  uint32_t uVar1;
  UnityEngine_Texture2D_o *pUVar2;
  UnityEngine_Object_o *x;
  bool bVar3;
  MethodInfo *pMVar4;
  
  if (Il2CppMethodInitialized_07542aa2 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542aa2 = '\x01';
    pUVar2 = (__this->fields)._squareTexture;
  }
  else {
    pUVar2 = (__this->fields)._squareTexture;
  }
  if (Il2CppMethodInitialized_07542aa4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542aa4 = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar4 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar2 = (__this->fields)._hueTexture;
  }
  else {
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyUnityObject
              ((UnityEngine_Object_o *)pUVar2,pMVar4);
    pUVar2 = (__this->fields)._hueTexture;
  }
  if (Il2CppMethodInitialized_07542aa4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542aa4 = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar4 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar2 = (__this->fields)._alphaTexture;
  }
  else {
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyUnityObject
              ((UnityEngine_Object_o *)pUVar2,pMVar4);
    pUVar2 = (__this->fields)._alphaTexture;
  }
  if (Il2CppMethodInitialized_07542aa4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542aa4 = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar4 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    pUVar2 = (__this->fields)._circleTexture;
  }
  else {
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyUnityObject
              ((UnityEngine_Object_o *)pUVar2,pMVar4);
    pUVar2 = (__this->fields)._circleTexture;
  }
  if (Il2CppMethodInitialized_07542aa4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542aa4 = '\x01';
    uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  }
  else {
    uVar1 = (((Il2CppClass *)TypeInfo_UnityEngine_Object)->_2).cctor_finished_or_no_cctor;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar4 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)pUVar2,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (!bVar3) {
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyUnityObject
              ((UnityEngine_Object_o *)pUVar2,pMVar4);
  }
  x = (UnityEngine_Object_o *)(__this->fields)._circleSprite;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  pMVar4 = (MethodInfo *)0x0;
  bVar3 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar3) {
    Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyUnityObject
              ((UnityEngine_Object_o *)(__this->fields)._circleSprite,pMVar4);
    return;
  }
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$CircleSprite
// il2cpp: UnityEngine_Sprite_o* Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__CircleSprite (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, const MethodInfo* method);
// 0x537a690
// asm: 3 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x537a78c: nop dword ptr [rax]
// asm:   0x537a896: jmp 0x537a970
// asm:   0x537a96d: nop dword ptr [rax]

UnityEngine_Sprite_o *
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__CircleSprite
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,MethodInfo *method)

{
  UnityEngine_Sprite_o **targetAddress;
  uint32_t uVar1;
  UnityEngine_Object_o *x;
  double x_00;
  double dVar2;
  Il2CppMethodPointer pIVar3;
  Il2CppMethodPointer pIVar4;
  bool bVar5;
  MethodInfo *method_00;
  UnityEngine_Sprite_o *pUVar6;
  int x_01;
  MethodInfo *pMVar7;
  MethodInfo *method_01;
  int y;
  UnityEngine_Texture2D_o **targetAddress_00;
  float fVar8;
  float fVar9;
  UnityEngine_Color_o color;
  Il2CppMethodPointer local_50;
  undefined1 local_48 [16];
  
  if (Il2CppMethodInitialized_07542aa3 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Texture2D);
    Il2CppMethodInitialized_07542aa3 = '\x01';
  }
  x = (UnityEngine_Object_o *)(__this->fields)._circleSprite;
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  targetAddress = &(__this->fields)._circleSprite;
  bVar5 = UnityEngine_Object__op_Inequality(x,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar5) {
label_0537aa09:
    return *targetAddress;
  }
  method_00 = (MethodInfo *)il2cpp_codegen_object_new((Il2CppClass *)TypeInfo_UnityEngine_Texture2D);
  y = 0;
  UnityEngine_Texture2D___ctor_68efe30
            ((UnityEngine_Texture2D_o *)method_00,0x20,0x20,4,false,(MethodInfo *)0x0);
  if (method_00 != (MethodInfo *)0x0) {
    UnityEngine_Texture__set_wrapMode((UnityEngine_Texture_o *)method_00,1,(MethodInfo *)0x0);
    (__this->fields)._circleTexture = (UnityEngine_Texture2D_o *)method_00;
    targetAddress_00 = &(__this->fields)._circleTexture;
    Il2CppCodeGenWriteBarrier(targetAddress_00);
    do {
      pMVar7 = (MethodInfo *)0x0;
      do {
        if (Il2CppMethodInitialized_0753e72f == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_0753e72f = '\x01';
          uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
        }
        else {
          uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
        }
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
        }
        x_01 = (int)pMVar7;
        fVar8 = ((float)x_01 + -15.5) * ((float)x_01 + -15.5) + ((float)y + -15.5) * ((float)y + -15.5);
        if (fVar8 < 0.0) {
          fVar8 = sqrtf(fVar8);
        }
        else {
          fVar8 = SQRT(fVar8);
        }
        fVar8 = (16.0 - fVar8) + (16.0 - fVar8);
        local_48 = ZEXT416((uint)fVar8);
        fVar9 = 1.0;
        if (fVar8 <= 1.0) {
          fVar9 = fVar8;
        }
        if (Il2CppMethodInitialized_07541320 == '\0') {
          il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
          Il2CppMethodInitialized_07541320 = '\x01';
          uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
          fVar8 = (float)local_48._0_4_;
        }
        else {
          uVar1 = (TypeInfo_System_Math->_2).cctor_finished_or_no_cctor;
        }
        if (uVar1 == 0) {
          il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
          fVar8 = (float)local_48._0_4_;
        }
        local_48._0_4_ = fVar8;
        fVar8 = (float)(-(uint)(0.0 <= (float)local_48._0_4_) & (uint)(fVar9 * 255.0));
        local_48 = ZEXT416((uint)fVar8);
        x_00 = (double)fVar8;
        method_01 = (MethodInfo *)&local_50;
        dVar2 = modf(x_00,(double *)&local_50,method_00);
        if (0.0 <= (float)local_48._0_4_) {
          if ((dVar2 == 0.5) && (!NAN(dVar2))) {
            pIVar4 = (Il2CppMethodPointer)((double)local_50 + 1.0);
            goto joined_r0x0537a8d1;
          }
          pIVar3 = (Il2CppMethodPointer)floor(x_00 + 0.5,method_01);
        }
        else if ((dVar2 != -0.5) || (NAN(dVar2))) {
          pIVar3 = (Il2CppMethodPointer)ceil(x_00 + -0.5,method_01);
        }
        else {
          pIVar4 = (Il2CppMethodPointer)((double)local_50 + -1.0);
joined_r0x0537a8d1:
          pIVar3 = local_50;
          if (((long)(double)local_50 & 1U) != 0) {
            pIVar3 = pIVar4;
          }
        }
        if (*targetAddress_00 == (UnityEngine_Texture2D_o *)0x0) goto label_0537aa1b;
        color.fields.a = (float)((int)(double)pIVar3 & 0xff) / 255.0;
        color.fields.b = 1.0;
        color.fields.r = 1.0;
        color.fields.g = 1.0;
        method_00 = pMVar7;
        UnityEngine_Texture2D__SetPixel(*targetAddress_00,x_01,y,color,(MethodInfo *)0x0);
        pMVar7 = (MethodInfo *)(ulong)(x_01 + 1U);
      } while (x_01 + 1U != 0x20);
      y = y + 1;
    } while (y != 0x20);
    if (*targetAddress_00 != (UnityEngine_Texture2D_o *)0x0) {
      UnityEngine_Texture2D__Apply_68f05c0(*targetAddress_00,false,(MethodInfo *)0x0);
      pUVar6 = UnityEngine_Sprite__Create_68ba740
                         (*targetAddress_00,(UnityEngine_Rect_o)(ZEXT816(0x4200000042000000) << 0x40),
                          (UnityEngine_Vector2_o)0x3f0000003f000000,32.0,(MethodInfo *)0x0);
      *targetAddress = pUVar6;
      Il2CppCodeGenWriteBarrier(targetAddress);
      goto label_0537aa09;
    }
  }
label_0537aa1b:
  ThrowNullReferenceException();
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$Blend
// il2cpp: uint8_t Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Blend (uint8_t back, uint8_t front, float t, const MethodInfo* method);
// 0x537ad80

uint8_t Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__Blend
                  (uint8_t back,uint8_t front,float t,MethodInfo *method)

{
  undefined3 in_register_00000031;
  int iVar1;
  undefined4 in_register_00000034;
  undefined7 in_register_00000039;
  MethodInfo *method_00;
  float fVar2;
  double dVar3;
  double dVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  Il2CppMethodPointer local_8;
  
  iVar1 = CONCAT31(in_register_00000031,front);
  fVar2 = 1.0;
  if (t <= 1.0) {
    fVar2 = t;
  }
  fVar2 = (float)(-(uint)(0.0 <= t) & (uint)fVar2);
  fVar7 = (float)(int)CONCAT71(in_register_00000039,back);
  fVar5 = (float)iVar1;
  fVar6 = 0.0;
  if (0.0 <= fVar2) {
    fVar6 = fVar2;
  }
  if (Il2CppMethodInitialized_07541320 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_System_Math);
    Il2CppMethodInitialized_07541320 = '\x01';
  }
  fVar7 = (fVar5 - fVar7) * fVar6 + fVar7;
  if ((TypeInfo_System_Math->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_System_Math);
  }
  dVar3 = (double)fVar7;
  method_00 = (MethodInfo *)&local_8;
  dVar4 = modf(dVar3,(double *)method_00,(MethodInfo *)CONCAT44(in_register_00000034,iVar1));
  if (0.0 <= fVar7) {
    if ((dVar4 != 0.5) || (NAN(dVar4))) {
      dVar3 = floor(dVar3 + 0.5,method_00);
      return (uint8_t)(int)dVar3;
    }
    if (((long)(double)local_8 & 1U) != 0) {
      return (uint8_t)(int)((double)local_8 + 1.0);
    }
  }
  else {
    if ((dVar4 != -0.5) || (NAN(dVar4))) {
      dVar3 = ceil(dVar3 + -0.5,method_00);
      return (uint8_t)(int)dVar3;
    }
    if (((long)(double)local_8 & 1U) != 0) {
      local_8 = (Il2CppMethodPointer)((double)local_8 + -1.0);
    }
  }
  return (uint8_t)(int)(double)local_8;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$DestroyTexture
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyTexture (UnityEngine_Texture2D_o* texture, const MethodInfo* method);
// 0x537ac80

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyTexture
               (UnityEngine_Texture2D_o *texture,MethodInfo *method)

{
  bool bVar1;
  MethodInfo *method_00;
  
  if (Il2CppMethodInitialized_07542aa4 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542aa4 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
  }
  method_00 = (MethodInfo *)0x0;
  bVar1 = UnityEngine_Object__op_Equality
                    ((UnityEngine_Object_o *)texture,(UnityEngine_Object_o *)0x0,(MethodInfo *)0x0);
  if (bVar1) {
    return;
  }
  Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyUnityObject
            ((UnityEngine_Object_o *)texture,method_00);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$DestroyUnityObject
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyUnityObject (UnityEngine_Object_o* target, const MethodInfo* method);
// 0x537ace0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual__DestroyUnityObject
               (UnityEngine_Object_o *target,MethodInfo *method)

{
  uint32_t uVar1;
  bool bVar2;
  
  if (Il2CppMethodInitialized_07542aa5 == '\0') {
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Application);
    il2cpp_codegen_initialize_runtime_metadata(&TypeInfo_UnityEngine_Object);
    Il2CppMethodInitialized_07542aa5 = '\x01';
  }
  if ((TypeInfo_UnityEngine_Application->_2).cctor_finished_or_no_cctor == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Application);
  }
  bVar2 = UnityEngine_Application__get_isPlaying((MethodInfo *)0x0);
  uVar1 = (TypeInfo_UnityEngine_Object->_2).cctor_finished_or_no_cctor;
  if (bVar2) {
    if (uVar1 == 0) {
      il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
      UnityEngine_Object__Destroy_69214e0(target,(MethodInfo *)0x0);
      return;
    }
    UnityEngine_Object__Destroy_69214e0(target,(MethodInfo *)0x0);
    return;
  }
  if (uVar1 == 0) {
    il2cpp_codegen_runtime_class_init((Il2CppClass *)TypeInfo_UnityEngine_Object);
    UnityEngine_Object__DestroyImmediate_6921750(target,(MethodInfo *)0x0);
    return;
  }
  UnityEngine_Object__DestroyImmediate_6921750(target,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$.ctor
// il2cpp: void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___ctor (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, const MethodInfo* method);
// 0x537aed0

void Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___ctor
               (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,MethodInfo *method)

{
  UnityEngine_MonoBehaviour___ctor((UnityEngine_MonoBehaviour_o *)__this,(MethodInfo *)0x0);
  return;
}


// Gisketch.Aottg2UI.Code.GisketchUIColorPickerVisual$$<RefreshTextures>b__30_0
// il2cpp: UnityEngine_Color32_o Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___RefreshTextures_b__30_0 (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o* __this, int32_t x, int32_t y, const MethodInfo* method);
// 0x537aee0
// asm: 2 instructions the C leaves out (exception handlers, dead branches):
// asm:   0x537af52: jmp 0x537af6d
// asm:   0x537af62: test al, 1

UnityEngine_Color32_o
Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual___RefreshTextures_b__30_0
          (Gisketch_Aottg2UI_Code_GisketchUIColorPickerVisual_o *__this,int32_t x,int32_t y,MethodInfo *method
          )

{
  undefined1 auVar1 [16];
  float S;
  uint8_t uVar2;
  uint8_t uVar3;
  uint8_t uVar4;
  undefined4 extraout_EAX;
  uint uVar5;
  MethodInfo *method_00;
  float fVar6;
  undefined1 auVar7 [12];
  undefined1 auVar8 [12];
  float fVar9;
  float fVar10;
  float fVar12;
  undefined1 auVar11 [16];
  UnityEngine_Color_o UVar13;
  float fStack_34;
  float fStack_28;
  
  fVar9 = (__this->fields)._value.fields.H;
  fVar6 = floorf(fVar9);
  auVar11._4_4_ = (float)x;
  auVar11._0_4_ = (float)y;
  auVar11._8_8_ = 0;
  fVar9 = fVar9 - fVar6;
  auVar7 = ZEXT812(0x3f800000);
  auVar8 = ZEXT812(0x3f800000);
  if (fVar9 <= auVar8._0_4_) {
    auVar8._4_8_ = auVar8._4_8_;
    auVar8._0_4_ = fVar9;
  }
  fVar6 = 0.0;
  auVar11 = divps(auVar11,_DAT_01008780);
  fVar10 = auVar11._0_4_;
  fVar12 = auVar11._4_4_;
  auVar1._4_4_ = -(uint)(0.0 <= fVar10);
  auVar1._0_4_ = -(uint)(0.0 <= fVar10);
  auVar1._8_4_ = -(uint)(0.0 <= fVar12);
  auVar1._12_4_ = -(uint)(0.0 <= fVar12);
  uVar5 = movmskpd(extraout_EAX,auVar1);
  if ((uVar5 & 2) == 0) {
    S = 0.0;
  }
  else {
    S = 1.0;
    if (fVar12 <= 1.0) {
      S = fVar12;
    }
  }
  if ((uVar5 & 1) != 0) {
    if (fVar10 <= auVar7._0_4_) {
      auVar7._4_8_ = auVar7._4_8_;
      auVar7._0_4_ = fVar10;
    }
    fVar6 = auVar7._0_4_;
  }
  method_00 = (MethodInfo *)0x1;
  UVar13 = UnityEngine_Color__HSVToRGB_68fcb80
                     ((float)(-(uint)(0.0 <= fVar9) & auVar8._0_4_),S,fVar6,true,(MethodInfo *)0x0);
  fStack_28 = UVar13.fields.b;
  uVar2 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(UVar13.fields.r,method_00);
  fStack_34 = UVar13.fields.g;
  uVar3 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(fStack_34,method_00);
  uVar4 = Gisketch_Aottg2UI_Code_GisketchUIColorPickerValue__ToByte(fStack_28,method_00);
  return (UnityEngine_Color32_Fields)
         (UnityEngine_Color32_Fields)(CONCAT12(uVar4,CONCAT11(uVar3,uVar2)) | 0xff000000);
}


